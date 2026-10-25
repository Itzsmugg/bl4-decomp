// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147eeb9a6 FUN_147eeb9a6 body=50 status=ok
// SIG undefined FUN_147eeb9a6(void)

longlong * FUN_147eeb9a6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x278);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 147eeb9de FUN_147eeb9de body=442 status=ok
// SIG undefined FUN_147eeb9de(void)

undefined8 FUN_147eeb9de(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [4];
  undefined1 local_bc [4];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147eeb116(param_1,local_98);
  local_58 = L"PathfindingBatch";
  local_50 = 0x10;
  FUN_1446e940c(local_bc,&local_58);
  local_58 = L"EnvQueryGenerator";
  local_50 = 0x11;
  FUN_1446e940c(local_c0,&local_58);
  FUN_140208bae(local_b8,local_c0,local_bc,L"{0} [batch]");
  FUN_14023409e(&local_a8,local_b8,1);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(local_48,local_98);
  local_70 = &local_38;
  local_78 = &local_58;
  FUN_14010d304(&local_68);
  local_88 = local_a8;
  local_80 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_88,&local_68);
  FUN_14007f2db(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a0 + 0x10))(local_a0);
      }
    }
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eebb9e FUN_147eebb9e body=2728 status=ok
// SIG undefined FUN_147eebb9e(void)

void FUN_147eebb9e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  DWORD *pDVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  longlong *local_180;
  LARGE_INTEGER local_178;
  undefined8 uStack_170;
  double local_168;
  undefined8 local_160;
  LARGE_INTEGER local_158;
  double dStack_150;
  double local_148;
  longlong local_128;
  longlong *local_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e0;
  longlong local_d8;
  longlong *plStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar13 = FUN_14479d2ce((longlong)param_2 + 0x34);
  if (lVar13 == 0) goto LAB_147eebc1a;
  FUN_147ec268e(param_1 + 0x50,lVar13,(int)param_2[6]);
  if (*(longlong *)(param_1 + 0x58) == 0) {
    puVar14 = (undefined1 *)0x0;
  }
  else {
    puVar14 = (undefined1 *)
              ((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x44) +
              *(longlong *)(param_1 + 0x60));
  }
  puVar17 = (undefined1 *)(param_1 + 0x80);
  if (puVar14 != (undefined1 *)0x0) {
    puVar17 = puVar14;
  }
  uVar4 = *puVar17;
  lVar20 = param_2[2];
  if ((((lVar20 == 0) || (lVar15 = FUN_1412474be(), lVar15 == 0)) ||
      (*(int *)(lVar20 + 0x38) < *(int *)(lVar15 + 0x38))) ||
     (lVar5 = param_2[2],
     lVar5 == 0 ||
     *(longlong *)(*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
     lVar15 + 0x30)) {
LAB_147eebcfb:
    plVar18 = (longlong *)0x0;
  }
  else {
    lVar20 = FUN_1412474be();
    if (((lVar20 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar20 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar20 + 0x38) * 8) !=
        lVar20 + 0x30)) {
      lVar20 = 0;
    }
    else {
      lVar20 = param_2[2];
    }
    lVar15 = FUN_145943f0a();
    if (((lVar15 == 0) || (*(int *)(lVar20 + 0x38) < *(int *)(lVar15 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
        lVar15 + 0x30)) goto LAB_147eebcfb;
    lVar20 = param_2[2];
    if ((((lVar20 == 0) || (lVar15 = FUN_1412474be(), lVar15 == 0)) ||
        (*(int *)(lVar20 + 0x38) < *(int *)(lVar15 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar20 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) !=
        lVar15 + 0x30)) {
      lVar20 = 0;
    }
    else {
      lVar20 = param_2[2];
    }
    plVar18 = *(longlong **)(lVar20 + 0x110);
    if (plVar18 == (longlong *)0x0) {
      FUN_140aa6c08(lVar20);
      plVar18 = *(longlong **)(lVar20 + 0x110);
    }
  }
  if (*(byte *)(param_1 + 0x22d) - 2 < 2) {
    local_180 = (longlong *)CONCAT71(local_180._1_7_,uVar4);
    local_118 = 0.0;
    uStack_110 = 0.0;
    local_d8 = 0;
    plStack_d0 = (longlong *)0x0;
    iVar11 = (int)param_2[1];
    if (iVar11 < 0) {
LAB_147eec63f:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    if (iVar11 != 0) {
      FUN_147ef0afe(&local_118);
      iVar11 = (int)param_2[1];
      if (0 < iVar11) {
        lVar13 = 0;
        do {
          uVar19 = (ulonglong)*(uint *)(*param_2 + 4 + lVar13 * 8);
          if (uVar19 < 0x40000000) {
            plVar16 = (longlong *)param_2[0x2c];
            if (plVar16 == (longlong *)0x0) {
              local_148 = DAT_14c8464f0;
              local_158.s.HighPart = DAT_14c8464e0._4_4_;
              local_158.s.LowPart = (undefined4)DAT_14c8464e0;
              dStack_150 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              (**(code **)(*plVar16 + 0x2b8))(plVar16,&local_158,uVar19 + param_2[3]);
            }
            dVar10 = uStack_110;
            local_168 = local_148;
            local_178 = local_158;
            uStack_170 = dStack_150;
            lVar20 = (longlong)(int)uStack_110;
            uVar12 = (int)uStack_110 + 1;
            uStack_110 = (double)CONCAT44(uStack_110._4_4_,uVar12);
            if (uStack_110._4_4_ < uVar12) {
              FUN_147ef0984(&local_118,(ulonglong)dVar10 & 0xffffffff);
            }
            lVar20 = lVar20 * 0x20;
            *(double *)((longlong)local_118 + 0x10 + lVar20) = local_168;
            pDVar3 = (DWORD *)((longlong)local_118 + lVar20);
            *pDVar3 = local_178.s.LowPart;
            pDVar3[1] = local_178.s.HighPart;
            pDVar3[2] = (DWORD)uStack_170;
            pDVar3[3] = uStack_170._4_4_;
            *(undefined8 *)((longlong)local_118 + 0x18 + lVar20) = 0;
            iVar11 = (int)param_2[1];
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar11);
      }
    }
    FUN_1438517e1(param_2[0xb],param_1 + 0x1f8,&local_118,&local_d8);
    FUN_147ecf2f6(&local_158,param_1,param_2,0xffffffff);
    if ((dStack_150._0_4_ < *(int *)(local_158.QuadPart + 8)) &&
       (uVar4 = local_180._0_1_, (*(byte *)(local_158.QuadPart + 0x13e) & 1) == 0)) {
      lVar20 = 0;
      lVar13 = 0;
      do {
        if ((0.0 <= local_148) &&
           (QueryPerformanceCounter(&local_178),
           local_148 <= (double)local_178.QuadPart * DAT_14c83f420 + 16777216.0)) {
          break;
        }
        if (lVar13 < (int)plStack_d0) {
          bVar21 = *(char *)(local_d8 + lVar13) != '\0';
          if (bVar21 && plVar18 != (longlong *)0x0) {
            (**(code **)(*plVar18 + 0x2d0))
                      (plVar18,((longlong)
                                ((ulonglong)
                                 *(uint *)(*(longlong *)local_158 + 4 +
                                          (longlong)dStack_150._0_4_ * 8) << 0x21) >> 0x21) +
                               *(longlong *)(local_158.QuadPart + 0x18),(longlong)local_118 + lVar20
                       ,bVar21);
            bVar21 = true;
          }
        }
        else {
          bVar21 = false;
        }
        local_188 = CONCAT71(local_188._1_7_,uVar4);
        FUN_143852d98(&local_158,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x4a),
                      bVar21);
        FUN_147ee880a(&local_158);
        if (*(int *)(local_158.QuadPart + 8) <= dStack_150._0_4_) break;
        lVar13 = lVar13 + 1;
        lVar20 = lVar20 + 0x20;
      } while ((*(byte *)(local_158.QuadPart + 0x13e) & 1) == 0);
    }
    *(int *)(local_158.QuadPart + 0x124) = dStack_150._0_4_;
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_118 != 0.0) {
      FUN_1400020a8();
    }
    goto LAB_147eebc1a;
  }
  if ((*(byte *)(param_1 + 0x22d) != 1) ||
     (plVar16 = (longlong *)FUN_147ee0098(param_2), plVar16 == (longlong *)0x0)) goto LAB_147eebc1a;
  local_e0 = *(longlong *)(param_1 + 0x200);
  if ((local_e0 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147e6f964(&local_d8,plVar16,lVar13,&local_e0);
  local_f8 = 0;
  uStack_f0 = 0;
  iVar11 = (int)param_2[1];
  if (iVar11 < 0) goto LAB_147eec63f;
  if (iVar11 != 0) {
    FUN_147ef0c62(&local_f8);
  }
  fVar23 = *(float *)(param_1 + 0x208);
  fVar22 = *(float *)(param_1 + 0x20c);
  if ((fVar23 != fVar22) ||
     (uVar24 = (undefined4)DAT_14c8464e0, uVar25 = DAT_14c8464e0._4_4_,
     uVar26 = (undefined4)DAT_14c8464e8, uVar27 = DAT_14c8464e8._4_4_, dVar10 = DAT_14c8464f0,
     NAN(fVar23) || NAN(fVar22))) {
    uVar24 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    dVar10 = (double)((fVar22 - fVar23) * 0.5);
  }
  iVar11 = (int)param_2[1];
  if (0 < iVar11) {
    lVar13 = 0;
    local_180 = plVar16;
    do {
      uVar19 = (ulonglong)*(uint *)(*param_2 + 4 + lVar13 * 8);
      if (uVar19 < 0x40000000) {
        plVar6 = (longlong *)param_2[0x2c];
        if (plVar6 == (longlong *)0x0) {
          local_148 = DAT_14c8464f0;
          local_158.s.HighPart = DAT_14c8464e0._4_4_;
          local_158.s.LowPart = (undefined4)DAT_14c8464e0;
          dStack_150 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          (**(code **)(*plVar6 + 0x2b8))(plVar6,&local_158,uVar19 + param_2[3]);
        }
        uVar19 = uStack_f0;
        dVar7 = local_148 + dVar10;
        dVar8 = dStack_150 + (double)CONCAT44(uVar27,uVar26);
        dVar9 = (double)local_158 + (double)CONCAT44(uVar25,uVar24);
        local_178.s.HighPart = DAT_14c8464e0._4_4_;
        local_178.s.LowPart = (undefined4)DAT_14c8464e0;
        uStack_170 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_168 = DAT_14c8464f0;
        lVar20 = (longlong)(int)uStack_f0;
        uVar12 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar12);
        if (uStack_f0._4_4_ < uVar12) {
          FUN_147ef0cc6(&local_f8,uVar19 & 0xffffffff);
        }
        uVar12 = (uint)plVar16 & 0xfffffff8 | 4;
        plVar16 = (longlong *)(ulonglong)uVar12;
        lVar20 = lVar20 * 0x78;
        *(double *)(local_f8 + lVar20) = dVar9;
        *(double *)(local_f8 + 8 + lVar20) = dVar8;
        *(double *)(local_f8 + 0x10 + lVar20) = dVar7;
        puVar2 = (undefined8 *)(local_f8 + 0x18 + lVar20);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(local_f8 + 0x28 + lVar20);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)(local_f8 + 0x38 + lVar20);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined1 *)(local_f8 + 0x48 + lVar20) = 0;
        pDVar3 = (DWORD *)(local_f8 + 0x50 + lVar20);
        *pDVar3 = local_178.s.LowPart;
        pDVar3[1] = local_178.s.HighPart;
        pDVar3[2] = (DWORD)uStack_170;
        pDVar3[3] = uStack_170._4_4_;
        *(double *)(local_f8 + 0x60 + lVar20) = local_168;
        *(undefined8 *)(local_f8 + 0x68 + lVar20) = 0;
        *(uint *)(local_f8 + 0x70 + lVar20) = uVar12;
        iVar11 = (int)param_2[1];
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar11);
    fVar23 = *(float *)(param_1 + 0x208);
    fVar22 = *(float *)(param_1 + 0x20c);
    plVar16 = local_180;
  }
  local_108 = (double)((fVar22 + fVar23) * 0.5);
  local_118 = (double)*(float *)(param_1 + 0x210);
  local_128 = local_d8;
  local_120 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_d0 + 1) = (int)plStack_d0[1] + 1;
    UNLOCK();
  }
  local_188 = 0;
  uStack_110 = local_118;
  (**(code **)(*plVar16 + 0x768))(plVar16,&local_f8,&local_118,&local_128);
  fVar23 = *(float *)(param_1 + 0x21c);
  if ((fVar23 != 0.0) || (NAN(fVar23))) {
    FUN_147ecf2f6(&local_158,param_1,param_2,0xffffffff);
    if ((dStack_150._0_4_ < *(int *)(local_158.QuadPart + 8)) &&
       ((*(byte *)(local_158.QuadPart + 0x13e) & 1) == 0)) {
      lVar13 = 0x70;
      do {
        if ((0.0 <= local_148) &&
           (QueryPerformanceCounter(&local_178),
           local_148 <= (double)local_178.QuadPart * DAT_14c83f420 + 16777216.0))
        goto LAB_147eec5e3;
        uVar12 = *(uint *)(local_f8 + lVar13) & 2;
        if ((plVar18 != (longlong *)0x0) && (uVar12 != 0)) {
          local_160 = *(undefined8 *)(local_f8 + -8 + lVar13);
          local_168 = *(double *)(local_f8 + -0x10 + lVar13) + (double)fVar23;
          uStack_170 = *(double *)(local_f8 + -0x18 + lVar13) + 0.0;
          local_178 = (LARGE_INTEGER)(*(double *)(local_f8 + -0x20 + lVar13) + 0.0);
          (**(code **)(*plVar18 + 0x2d0))
                    (plVar18,((longlong)
                              ((ulonglong)
                               *(uint *)(*(longlong *)local_158 + 4 + (longlong)dStack_150._0_4_ * 8
                                        ) << 0x21) >> 0x21) +
                             *(longlong *)(local_158.QuadPart + 0x18),&local_178);
        }
        local_188 = CONCAT71(local_188._1_7_,uVar4);
        FUN_143852d98(&local_158,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x4a),
                      uVar12 >> 1);
        FUN_147ee880a(&local_158);
      } while ((dStack_150._0_4_ < *(int *)(local_158.QuadPart + 8)) &&
              (lVar13 = lVar13 + 0x78, (*(byte *)(local_158.QuadPart + 0x13e) & 1) == 0));
    }
  }
  else {
    FUN_147ecf2f6(&local_158,param_1,param_2,0xffffffff);
    if ((dStack_150._0_4_ < *(int *)(local_158.QuadPart + 8)) &&
       ((*(byte *)(local_158.QuadPart + 0x13e) & 1) == 0)) {
      lVar13 = 0x50;
      do {
        if ((0.0 <= local_148) &&
           (QueryPerformanceCounter(&local_178),
           local_148 <= (double)local_178.QuadPart * DAT_14c83f420 + 16777216.0))
        goto LAB_147eec5e3;
        uVar12 = *(uint *)(local_f8 + 0x20 + lVar13) & 2;
        if ((plVar18 != (longlong *)0x0) && (uVar12 != 0)) {
          (**(code **)(*plVar18 + 0x2d0))
                    (plVar18,((longlong)
                              ((ulonglong)
                               *(uint *)(*(longlong *)local_158 + 4 + (longlong)dStack_150._0_4_ * 8
                                        ) << 0x21) >> 0x21) +
                             *(longlong *)(local_158.QuadPart + 0x18),local_f8 + lVar13);
        }
        local_188 = CONCAT71(local_188._1_7_,uVar4);
        FUN_143852d98(&local_158,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x4a),
                      uVar12 >> 1);
        FUN_147ee880a(&local_158);
      } while ((dStack_150._0_4_ < *(int *)(local_158.QuadPart + 8)) &&
              (lVar13 = lVar13 + 0x78, (*(byte *)(local_158.QuadPart + 0x13e) & 1) == 0));
    }
  }
  goto LAB_147eec5ec;
LAB_147eec5e3:
LAB_147eec5ec:
  *(int *)(local_158.QuadPart + 0x124) = dStack_150._0_4_;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  plVar18 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar16 = plStack_d0 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
LAB_147eebc1a:
  if ((local_c0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eec648 FUN_147eec648 body=108 status=ok
// SIG undefined FUN_147eec648(void)

undefined8 FUN_147eec648(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(local_30,L"projected");
  FUN_147eda90a(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eec6ba FUN_147eec6ba body=562 status=ok
// SIG undefined FUN_147eec6ba(void)

void FUN_147eec6ba(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  longlong local_b0;
  int local_a8;
  double local_a0;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_14479d2ce(param_2 + 0x34);
  if (lVar3 != 0) {
    FUN_147ec268e(param_1 + 0x88,lVar3,*(undefined4 *)(param_2 + 0x30));
    if (*(longlong *)(param_1 + 0x90) == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 0x90) + 0x44) +
               *(longlong *)(param_1 + 0x98));
    }
    puVar5 = (undefined4 *)(param_1 + 0xb8);
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = puVar4;
    }
    uVar1 = *puVar5;
    FUN_147ec268e(param_1 + 0xc0,lVar3,*(undefined4 *)(param_2 + 0x30));
    if (*(longlong *)(param_1 + 200) == 0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)
               ((longlong)*(int *)(*(longlong *)(param_1 + 200) + 0x44) +
               *(longlong *)(param_1 + 0xd0));
    }
    puVar5 = (undefined4 *)(param_1 + 0xf0);
    if (puVar4 != (undefined4 *)0x0) {
      puVar5 = puVar4;
    }
    uVar2 = *puVar5;
    FUN_147ecf2f6(&local_b0,param_1,param_2,0xffffffff);
    if ((local_a8 < *(int *)(local_b0 + 8)) && ((*(byte *)(local_b0 + 0x13e) & 1) == 0)) {
      while ((local_a0 < 0.0 ||
             (QueryPerformanceCounter(&local_88),
             (double)local_88.QuadPart * DAT_14c83f420 + 16777216.0 < local_a0))) {
        DAT_14cb1efac = DAT_14cb1efac * 0xbb38435 + 0x3619636b;
        local_c8 = uVar1;
        local_c0 = uVar2;
        FUN_1438521fe(&local_b0,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x4a),
                      (float)(DAT_14cb1efac >> 9 | 0x3f800000) + -1.0);
        FUN_147ee880a(&local_b0);
        if ((*(int *)(local_b0 + 8) <= local_a8) || ((*(byte *)(local_b0 + 0x13e) & 1) != 0)) break;
      }
    }
    *(int *)(local_b0 + 0x124) = local_a8;
  }
  if ((local_80 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eec8ee FUN_147eec8ee body=22 status=ok
// SIG undefined FUN_147eec8ee(void)

undefined8 FUN_147eec8ee(undefined8 param_1,undefined8 param_2)

{
  FUN_147ed9482();
  return param_2;
}



// FUNCTION 147eec908 FUN_147eec908 body=33 status=ok
// SIG undefined FUN_147eec908(void)

void FUN_147eec908(longlong param_1)

{
  FUN_143850b30();
  FUN_147ee0054(param_1 + 0x1f8);
  return;
}



// FUNCTION 147eec92a FUN_147eec92a body=701 status=ok
// SIG undefined FUN_147eec92a(void)

undefined8 FUN_147eec92a(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  longlong local_88;
  longlong local_80;
  longlong *local_78 [2];
  longlong *local_68;
  int local_60;
  longlong *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_147867804();
  FUN_1406f1d90(uVar1,&local_58,*(undefined1 *)(param_1 + 0x220));
  puVar2 = (undefined8 *)FUN_1447a1f4a(&local_58);
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_40;
  _Src = (void *)*puVar2;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x248) == 0) {
    local_88 = *(longlong *)(param_1 + 0x2e0);
    if ((local_88 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147ede206(&local_68,&local_88);
    puVar2 = (undefined8 *)FUN_1447a1f4a(&local_68);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*puVar2;
    }
    pwVar6 = L"to";
    if (*(char *)(param_1 + 0x268) != '\0') {
      pwVar6 = L"from";
    }
    FUN_140002266(&local_58,L"%s %s",pwVar6,puVar5);
    if (local_68 != (longlong *)0x0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  else {
    FUN_147ecddc8(param_1 + 0x238,&local_68);
    plVar4 = local_68;
    if (local_60 == 0) {
      plVar4 = (longlong *)&DAT_149dfb77a;
    }
    local_80 = *(longlong *)(param_1 + 0x2e0);
    if ((local_80 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_147ede206(local_78,&local_80);
    puVar2 = (undefined8 *)FUN_1447a1f4a(local_78);
    if (*(int *)(puVar2 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*puVar2;
    }
    FUN_140002266(&local_58,L"%s, direction: %s",puVar5,plVar4);
    if (local_78[0] != (longlong *)0x0) {
      (**(code **)(*local_78[0] + 0x10))();
    }
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar5 = &DAT_149dfb77a;
  puVar7 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar7 = local_48;
  }
  plVar4 = (longlong *)&DAT_149dfb77a;
  if (local_50 != 0) {
    plVar4 = local_58;
  }
  FUN_147ed8d26(local_78,param_1);
  puVar2 = (undefined8 *)FUN_1447a1f4a(local_78);
  if (*(int *)(puVar2 + 1) != 0) {
    puVar5 = (undefined2 *)*puVar2;
  }
  local_98 = puVar7;
  FUN_140002266(&local_68,L"%s: %s on %s",puVar5,plVar4);
  FUN_140233b1a(param_2,&local_68);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147eecbe8 FUN_147eecbe8 body=555 status=ok
// SIG undefined FUN_147eecbe8(void)

undefined8 FUN_147eecbe8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_128 [32];
  longlong local_108 [2];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong local_c8 [2];
  longlong *local_b8 [2];
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  ulonglong *local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 auStack_70 [2];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1400b22c2(local_c8,&DAT_14ac11432);
  FUN_147eda90a(param_1,local_b8,local_c8);
  FUN_147ede66a(param_1 + 0x1f8,local_d8,1);
  FUN_1400b22c2(local_108,"{0}\n{1}");
  FUN_140233b1a(local_f8,local_108);
  FUN_14023409e(&local_e8,local_f8,1);
  local_78._0_4_ = 4;
  FUN_14023423e(local_68,local_d8);
  local_58 = 4;
  FUN_14023423e(local_48,local_b8);
  local_98 = &local_78;
  local_90 = &local_38;
  FUN_14010d304(&local_88);
  local_a8 = local_e8;
  local_a0 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_2,&local_a8,&local_88);
  FUN_14007f2db(local_88,local_80);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_78 + lVar3) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_78 + lVar3) + 0x10))();
      *(undefined8 *)((longlong)&local_78 + lVar3) = 0;
      *(undefined4 *)((longlong)auStack_70 + lVar3) = 0;
    }
    lVar3 = lVar3 + -0x20;
  } while (lVar3 != -0x10);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_e0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_b8[0] != (longlong *)0x0) {
    (**(code **)(*local_b8[0] + 0x10))();
  }
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eece28 FUN_147eece28 body=1727 status=ok
// SIG undefined FUN_147eece28(void)

void FUN_147eece28(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  char *pcVar17;
  longlong lVar18;
  char *pcVar19;
  longlong lVar20;
  undefined1 auStack_1b8 [32];
  char local_198;
  DWORD local_188;
  LONG LStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178;
  longlong local_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  ulonglong uStack_150;
  LARGE_INTEGER local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_110;
  int local_108;
  undefined4 uStack_104;
  double local_100;
  double local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  double local_e8;
  longlong local_e0;
  char local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar15 = FUN_14479d2ce((longlong)param_2 + 0x34);
  FUN_147ec268e(param_1 + 0x50,uVar15,(int)param_2[6]);
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  lVar3 = *(longlong *)(param_1 + 0x1f8);
  if ((((lVar3 == 0) || (lVar16 = FUN_1411b2cec(), lVar16 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(lVar16 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
       lVar16 + 0x30 || (lVar3 = *(longlong *)(param_1 + 0x1f8), lVar3 == 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x200);
    if ((((lVar3 != 0) && (lVar16 = FUN_140fe7df8(), lVar16 != 0)) &&
        (*(int *)(lVar16 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
         lVar16 + 0x30 && (lVar3 = *(longlong *)(param_1 + 0x200), lVar3 != 0)))) {
      local_170 = lVar3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      FUN_147eed4ea(&local_110,param_2[0xb],&local_170);
      if ((char)uStack_ec == '\0') {
        do {
          lVar3 = local_e0;
          if (local_e0 != 0) {
            FUN_14377f5b2(local_e0,&local_148);
            dVar12 = local_120;
            dVar11 = local_128;
            dVar10 = local_130;
            dVar9 = local_138;
            uVar8 = uStack_160;
            dVar6 = (double)CONCAT44(local_148.s.HighPart,local_148.s.LowPart);
            dVar7 = (double)CONCAT44(uStack_13c,uStack_140);
            lVar16 = (longlong)(int)uStack_160;
            uVar14 = (int)uStack_160 + 1;
            uStack_160 = CONCAT44(uStack_160._4_4_,uVar14);
            if (uStack_160._4_4_ < uVar14) {
              FUN_143857708(&local_168,uVar8 & 0xffffffff);
            }
            lVar16 = lVar16 * 0x40;
            *(longlong *)(local_168 + lVar16) = lVar3;
            *(double *)(local_168 + 8 + lVar16) = dVar6 - dVar10;
            *(double *)(local_168 + 0x10 + lVar16) = dVar7 - dVar11;
            *(double *)(local_168 + 0x18 + lVar16) = dVar9 - dVar12;
            *(double *)(local_168 + 0x20 + lVar16) = dVar6 + dVar10;
            *(double *)(local_168 + 0x28 + lVar16) = dVar7 + dVar11;
            *(double *)(local_168 + 0x30 + lVar16) = dVar9 + dVar12;
            *(undefined1 *)(local_168 + 0x38 + lVar16) = 1;
          }
          FUN_147eed56c(&local_110);
        } while ((char)uStack_ec == '\0');
      }
      if (local_b8 == '\x01') {
        FUN_14024445c(&local_108);
      }
    }
  }
  else {
    lVar16 = FUN_1411b2cec();
    if ((lVar16 == 0) ||
       ((*(int *)(lVar3 + 0x38) < *(int *)(lVar16 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
         lVar16 + 0x30)))) {
      uVar15 = 0;
    }
    else {
      uVar15 = *(undefined8 *)(param_1 + 0x1f8);
    }
    FUN_147ecf078(param_2,uVar15,&local_158);
    if ((int)uStack_150 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_150 & 0xffffffff);
    }
    if ((int)uStack_160._4_4_ < (int)uStack_150) {
      FUN_143857638(&local_168);
    }
    lVar3 = local_158;
    if ((int)uStack_150 != 0) {
      lVar16 = (longlong)(int)uStack_150;
      lVar20 = 0;
      do {
        lVar5 = *(longlong *)(lVar3 + lVar20);
        if (lVar5 != 0) {
          lVar18 = FUN_140fe7df8();
          if ((*(int *)(lVar18 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar18 + 0x38) * 8) == lVar18 + 0x30)) {
            FUN_14377f5b2(lVar5,&local_110);
            dVar12 = local_e8;
            dVar11 = local_f8;
            dVar10 = local_100;
            dVar9 = local_110;
            uVar8 = uStack_160;
            dVar6 = (double)CONCAT44(uStack_104,local_108);
            dVar7 = (double)CONCAT44(uStack_ec,local_f0);
            lVar18 = (longlong)(int)uStack_160;
            uVar14 = (int)uStack_160 + 1;
            uStack_160 = CONCAT44(uStack_160._4_4_,uVar14);
            if (uStack_160._4_4_ < uVar14) {
              FUN_143857708(&local_168,uVar8 & 0xffffffff);
            }
            lVar18 = lVar18 * 0x40;
            *(longlong *)(local_168 + lVar18) = lVar5;
            *(double *)(local_168 + 8 + lVar18) = dVar9 - dVar11;
            *(double *)(local_168 + 0x10 + lVar18) = dVar6 - dVar7;
            *(double *)(local_168 + 0x18 + lVar18) = dVar10 - dVar12;
            *(double *)(local_168 + 0x20 + lVar18) = dVar9 + dVar11;
            *(double *)(local_168 + 0x28 + lVar18) = dVar6 + dVar7;
            *(double *)(local_168 + 0x30 + lVar18) = dVar10 + dVar12;
            *(undefined1 *)(local_168 + 0x38 + lVar18) = 1;
          }
        }
        lVar20 = lVar20 + 8;
      } while (lVar16 * 8 != lVar20);
    }
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    pcVar17 = (char *)0x0;
  }
  else {
    pcVar17 = (char *)((longlong)*(int *)(*(longlong *)(param_1 + 0x58) + 0x44) +
                      *(longlong *)(param_1 + 0x60));
  }
  pcVar19 = (char *)(param_1 + 0x80);
  if (pcVar17 != (char *)0x0) {
    pcVar19 = pcVar17;
  }
  cVar2 = *pcVar19;
  if ((0 < (int)uStack_160) || (((*(byte *)(param_1 + 0x208) & 2) == 0 && (cVar2 != '\0')))) {
    FUN_147ecf2f6(&local_110,param_1,param_2,0xffffffff);
    if ((local_108 < *(int *)((longlong)local_110 + 8)) &&
       ((*(byte *)((longlong)local_110 + 0x13e) & 1) == 0)) {
      while ((local_100 < 0.0 ||
             (QueryPerformanceCounter(&local_148),
             (double)CONCAT44(local_148.s.HighPart,local_148.s.LowPart) * DAT_14c83f420 + 16777216.0
             < local_100))) {
        plVar4 = (longlong *)param_2[0x2c];
        if (plVar4 == (longlong *)0x0) {
          local_178 = DAT_14c8464f0;
          local_188 = (DWORD)DAT_14c8464e0;
          LStack_184 = DAT_14c8464e0._4_4_;
          uStack_180 = (undefined4)DAT_14c8464e8;
          uStack_17c = DAT_14c8464e8._4_4_;
        }
        else {
          (**(code **)(*plVar4 + 0x2b8))
                    (plVar4,&local_188,
                     ((longlong)
                      ((ulonglong)*(uint *)(*param_2 + 4 + (longlong)local_108 * 8) << 0x21) >> 0x21
                     ) + param_2[3]);
        }
        lVar3 = local_168;
        lVar16 = (longlong)(int)uStack_160;
        if (lVar16 != 0) {
          lVar20 = 0;
          do {
            dVar6 = (double)CONCAT44(LStack_184,local_188);
            pdVar1 = (double *)(lVar3 + 8 + lVar20);
            if ((((*pdVar1 <= dVar6 && dVar6 != *pdVar1) &&
                 (dVar6 < *(double *)(lVar3 + 0x20 + lVar20))) &&
                (dVar6 = (double)CONCAT44(uStack_17c,uStack_180),
                pdVar1 = (double *)(lVar3 + 0x10 + lVar20), *pdVar1 <= dVar6 && dVar6 != *pdVar1))
               && (((dVar6 < *(double *)(lVar3 + 0x28 + lVar20) &&
                    (pdVar1 = (double *)(lVar3 + 0x18 + lVar20),
                    *pdVar1 <= local_178 && local_178 != *pdVar1)) &&
                   (local_178 < *(double *)(lVar3 + 0x30 + lVar20))))) {
              if ((*(byte *)(param_1 + 0x208) & 1) == 0) break;
              local_138 = local_178;
              local_148.s.LowPart = local_188;
              local_148.s.HighPart = LStack_184;
              uStack_140 = uStack_180;
              uStack_13c = uStack_17c;
              cVar13 = FUN_140056702(*(undefined8 *)(lVar3 + lVar20),&local_148,0,0);
              if (cVar13 != '\0') break;
            }
            lVar20 = lVar20 + 0x40;
          } while (lVar16 * 0x40 != lVar20);
        }
        local_198 = cVar2;
        FUN_143852d98(&local_110,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)(param_1 + 0x4a));
        FUN_147ee880a(&local_110);
        if ((*(int *)((longlong)local_110 + 8) <= local_108) ||
           ((*(byte *)((longlong)local_110 + 0x13e) & 1) != 0)) break;
      }
    }
    *(int *)((longlong)local_110 + 0x124) = local_108;
  }
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eed4ea FUN_147eed4ea body=128 status=ok
// SIG undefined FUN_147eed4ea(void)

undefined4 * FUN_147eed4ea(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = 5;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_20 = param_2;
  FUN_140244552(param_1 + 2,&local_20,&local_28);
  FUN_147eed56c(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eed56c FUN_147eed56c body=440 status=ok
// SIG undefined FUN_147eed56c(void)

void FUN_147eed56c(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar13;
      puVar4 = param_1 + 0xe;
      if (lVar12 < lVar13) {
        lVar9 = 0;
        puVar4 = param_1 + 4;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar4 + lVar9 * -8 + lVar12 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar7 = FUN_144a79cc8(lVar9), lVar7 != 0)) &&
         ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar6 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_147eed610;
          uVar6 = *param_1;
        }
        if ((uVar6 & 4) == 0) {
          lVar10 = *(longlong *)(lVar7 + 0xc0);
        }
        else {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar8 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar8 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar8 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar10 = *(longlong *)(lVar7 + 0xc0);
          if (lVar10 == 0) {
LAB_147eed6f3:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar10 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar10 + 0x1a8) <= iVar1)) goto LAB_147eed6f3;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar10 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar8 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_147eed610;
        }
        if (lVar10 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_147eed71a:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_147eed71a;
        }
      }
LAB_147eed610:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 147eed724 FUN_147eed724 body=543 status=ok
// SIG undefined FUN_147eed724(void)

undefined8 FUN_147eed724(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  wchar_t *pwVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  longlong *local_70 [2];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(&local_48,L"No Source Volume Context/Class set");
  lVar1 = *(longlong *)(param_1 + 0x1f8);
  if (lVar1 != 0) {
    lVar2 = FUN_1411b2cec();
    if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30)) && (lVar1 = *(longlong *)(param_1 + 0x1f8), lVar1 != 0)) {
      local_60 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      FUN_147ede206(&local_58,&local_60);
      uVar3 = FUN_1447a1f4a(&local_58);
      FUN_144a787a6(&local_48,uVar3);
      if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
      }
      goto LAB_147eed876;
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x200);
  if (lVar1 != 0) {
    lVar2 = FUN_140fe7df8();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
         lVar2 + 0x30 && (lVar1 = *(longlong *)(param_1 + 0x200), lVar1 != 0)))) {
      lVar2 = FUN_140fe7df8();
      if (((lVar2 == 0) || (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x200);
      }
      FUN_14689184a(uVar3,&local_58);
      if (CONCAT44(uStack_44,local_48) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_58;
      uStack_44 = uStack_54;
      iStack_40 = iStack_50;
      uStack_3c = uStack_4c;
    }
  }
LAB_147eed876:
  pwVar6 = L"Complex Physic Volume Test";
  if ((*(byte *)(param_1 + 0x208) & 1) == 0) {
    pwVar6 = L"Simple Bounding Box Test";
  }
  puVar7 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (iStack_40 != 0) {
    puVar5 = (undefined2 *)CONCAT44(uStack_44,local_48);
  }
  FUN_147ed8d26(local_70,param_1);
  puVar4 = (undefined8 *)FUN_1447a1f4a(local_70);
  if (*(int *)(puVar4 + 1) != 0) {
    puVar7 = (undefined2 *)*puVar4;
  }
  local_78 = pwVar6;
  FUN_140002266(&local_58,L"%s : %s (%s)",puVar7,puVar5);
  FUN_140233b1a(param_2,&local_58);
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != (longlong *)0x0) {
    (**(code **)(*local_70[0] + 0x10))();
  }
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eed944 FUN_147eed944 body=26 status=ok
// SIG undefined FUN_147eed944(void)

undefined8 FUN_147eed944(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x2a8))();
  return param_2;
}



// FUNCTION 147eed96a FUN_147eed96a body=162 status=ok
// SIG undefined FUN_147eed96a(void)

void FUN_147eed96a(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x5d8))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eeda10 FUN_147eeda10 body=90 status=ok
// SIG undefined FUN_147eeda10(void)

undefined8 * FUN_147eeda10(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + -0x208) != 0) &&
     (cVar2 = FUN_144729dda(param_1 + -0x210), cVar2 != '\0')) {
    (**(code **)(**(longlong **)(param_1 + -0x208) + 0x80))
              (*(longlong **)(param_1 + -0x208),param_2);
    return param_2;
  }
  param_2[2] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 147eeda6a FUN_147eeda6a body=150 status=ok
// SIG undefined FUN_147eeda6a(void)

double * FUN_147eeda6a(longlong param_1,double *param_2)

{
  double dVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + -0x208) != 0) {
    cVar2 = FUN_144729dda(param_1 + -0x210);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + -0x208) + 0xc0))
                (*(longlong **)(param_1 + -0x208),param_2);
      goto LAB_147eedaba;
    }
  }
  param_2[2] = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar1;
LAB_147eedaba:
  dVar1 = *(double *)(&DAT_14ac04a30 + (ulonglong)(*(char *)(param_1 + -0xbc) == '\x03') * 8);
  *param_2 = *param_2 * dVar1;
  param_2[1] = param_2[1] * dVar1;
  param_2[2] = dVar1 * param_2[2];
  return param_2;
}



// FUNCTION 147eedb00 FUN_147eedb00 body=202 status=ok
// SIG undefined FUN_147eedb00(void)

void FUN_147eedb00(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + -0x208) != 0) {
    cVar1 = FUN_144729dda(param_1 + -0x210);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + -0x208) + 0x98))
                (*(longlong **)(param_1 + -0x208),&local_30);
      if (local_30 != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + -0x208) + 0x98))
                  (*(longlong **)(param_1 + -0x208),&local_30);
        if (local_30 != (longlong *)0x0) {
          uVar2 = FUN_144a799b0();
          cVar1 = FUN_144a7ca96(&local_30,uVar2);
          if ((cVar1 != '\0') && (local_30 != (longlong *)0x0)) {
            (**(code **)(*local_30 + 0x538))(local_30,param_2,param_3);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eedbcc FUN_147eedbcc body=65 status=ok
// SIG undefined FUN_147eedbcc(void)

undefined8 FUN_147eedbcc(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + -0x208) != 0) {
    cVar1 = FUN_144729dda(param_1 + -0x210);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147eedbfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + -0x208) + 200))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147eedc0e FUN_147eedc0e body=52 status=ok
// SIG undefined FUN_147eedc0e(void)

undefined8 FUN_147eedc0e(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147eedc36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x60))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147eedc42 FUN_147eedc42 body=52 status=ok
// SIG undefined FUN_147eedc42(void)

undefined8 FUN_147eedc42(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147eedc6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147eedc76 FUN_147eedc76 body=55 status=ok
// SIG undefined FUN_147eedc76(void)

undefined8 FUN_147eedc76(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    cVar1 = FUN_144729dda(param_1 + 8);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147eedc9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x80))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147eedcd2 FUN_147eedcd2 body=122 status=ok
// SIG undefined FUN_147eedcd2(void)

longlong FUN_147eedcd2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_1 != 0) && (lVar2 = *(longlong *)(param_1 + 0x168), lVar2 != 0)) {
    lVar1 = FUN_1409035a4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         == lVar1 + 0x30 && (lVar2 = FUN_14479d2ce(lVar2 + 0x148), lVar2 != 0)))) {
      lVar1 = FUN_145b643da();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 147eedd4c FUN_147eedd4c body=862 status=ok
// SIG undefined FUN_147eedd4c(void)

void FUN_147eedd4c(longlong param_1,double *param_2,double *param_3,byte param_4)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x360) + 0x10))(param_1 + 0x360,&local_48);
  dVar9 = param_3[2] - local_38;
  dVar6 = param_3[1] - local_40;
  dVar4 = *param_3 - local_48;
  dVar8 = dVar9 * dVar9 + dVar4 * dVar4 + dVar6 * dVar6;
  if (100.0 < dVar8) {
    if (((dVar8 != 1.0) || (dVar5 = dVar4, dVar7 = dVar6, dVar1 = dVar9, NAN(dVar8))) &&
       (dVar5 = DAT_14c8464e0, dVar7 = DAT_14c8464e8, dVar1 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar8)) {
      dVar8 = 1.0 / SQRT(dVar8);
      dVar5 = dVar4 * dVar8;
      dVar7 = dVar6 * dVar8;
      dVar1 = dVar9 * dVar8;
    }
    *(double *)(param_1 + 0x2f0) = dVar5;
    *(double *)(param_1 + 0x2f8) = dVar7;
    *(double *)(param_1 + 0x300) = dVar1;
  }
  if ((*(longlong **)(param_1 + 0x158) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0xd8))(), cVar2 != '\0'))
  goto LAB_147eedfde;
  if ((*(byte *)(param_1 + 0x390) & 4) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x1c0);
    if (cVar2 == '\0') {
      FUN_14797c16e(param_1 + 0x1d0,&local_68);
    }
    else {
      lVar3 = FUN_14479d2ce(param_1 + 0x1c0);
      lVar3 = *(longlong *)(lVar3 + 0x1c8);
      if (lVar3 == 0) {
        local_58 = DAT_14c8464f0;
        local_68 = DAT_14c8464e0;
        dStack_60 = DAT_14c8464e8;
      }
      else {
        local_68 = *(double *)(lVar3 + 0x260);
        dStack_60 = *(double *)(lVar3 + 0x268);
        local_58 = *(double *)(lVar3 + 0x270);
      }
    }
    local_38 = local_58 - local_38;
    local_40 = dStack_60 - local_40;
    local_48 = local_68 - local_48;
    dVar9 = local_38 * local_38 + local_48 * local_48 + local_40 * local_40;
    if (((dVar9 != 1.0) || (dVar6 = local_48, dVar8 = local_40, dVar4 = local_38, NAN(dVar9))) &&
       (dVar6 = DAT_14c8464e0, dVar8 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar9)) {
      dVar9 = 1.0 / SQRT(dVar9);
      dVar6 = local_48 * dVar9;
      dVar8 = local_40 * dVar9;
      dVar4 = local_38 * dVar9;
    }
    *(double *)(param_1 + 0x378) = dVar6;
    *(double *)(param_1 + 0x380) = dVar8;
    *(double *)(param_1 + 0x388) = dVar4;
    goto LAB_147eedfde;
  }
  if (((*(byte *)(param_1 + 0x390) & 2) == 0 & (param_4 ^ 1)) == 0) {
    dVar9 = *param_2;
    dVar4 = param_2[1];
    dVar6 = param_2[2];
    dVar8 = dVar6 * dVar6 + dVar9 * dVar9 + dVar4 * dVar4;
    if (dVar8 <= 9.999999747378752e-05) goto LAB_147eedf01;
    if (((dVar8 != 1.0) || (dVar5 = dVar4, dVar7 = dVar6, dVar1 = dVar9, NAN(dVar8))) &&
       (dVar5 = DAT_14c8464e8, dVar7 = DAT_14c8464f0, dVar1 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar8)) {
      dVar8 = 1.0 / SQRT(dVar8);
      dVar5 = dVar4 * dVar8;
      dVar7 = dVar6 * dVar8;
      dVar1 = dVar9 * dVar8;
    }
  }
  else {
LAB_147eedf01:
    dVar5 = *(double *)(param_1 + 0x2f8);
    dVar7 = *(double *)(param_1 + 0x300);
    dVar1 = *(double *)(param_1 + 0x2f0);
  }
  *(double *)(param_1 + 0x378) = dVar1;
  *(double *)(param_1 + 0x380) = dVar5;
  *(double *)(param_1 + 0x388) = dVar7;
LAB_147eedfde:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eee0ac FUN_147eee0ac body=239 status=ok
// SIG undefined FUN_147eee0ac(void)

undefined8 FUN_147eee0ac(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(byte *)(param_1 + 0x2a6) & 1) != 0) &&
     (lVar1 = *(longlong *)(param_1 + 0x178), lVar1 != 0)) {
    piVar3 = (int *)(lVar1 + 0x70);
    do {
      if (*piVar3 == DAT_14cb20388) {
        uVar2 = 0;
        if ((*(int *)(lVar1 + 0x188) < 1) ||
           (*(int *)(lVar1 + 0x19c) != *(int *)(lVar1 + 0x188) + -1)) goto LAB_147eee136;
        break;
      }
      piVar3 = *(int **)(piVar3 + 2);
    } while (piVar3 != (int *)0x0);
  }
  if (((((*(byte *)(param_1 + 0x391) & 0x10) == 0) || ((*(byte *)(param_1 + 0x390) & 4) != 0)) ||
      (lVar1 = *(longlong *)(param_1 + 0x178), lVar1 == 0)) ||
     (((*(uint *)(lVar1 + 0x98) & 0x404) != 0x400 ||
      (lVar1 = FUN_14479d2ce(lVar1 + 0x40), lVar1 == 0)))) {
    uVar2 = 0;
  }
  else {
    FUN_147e70350(*(undefined8 *)(param_1 + 0x178),&local_30);
    *(undefined8 *)(param_2 + 4) = local_20;
    *param_2 = local_30;
    param_2[1] = uStack_2c;
    param_2[2] = uStack_28;
    param_2[3] = uStack_24;
    uVar2 = 1;
  }
LAB_147eee136:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147eee19c FUN_147eee19c body=507 status=ok
// SIG undefined FUN_147eee19c(void)

void FUN_147eee19c(longlong *param_1,double *param_2,undefined8 param_3,undefined4 param_4,
                  byte param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  float fVar5;
  double dVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(byte *)((longlong)param_1 + 0x391) =
       *(byte *)((longlong)param_1 + 0x391) & 0xdf | (~(byte)param_4 & param_5) << 5;
  if (((*(char *)((longlong)param_1 + 0x394) == '\0') &&
      (*(char *)((longlong)param_1 + 0x2a4) == '\x03')) && (param_1[0x2b] != 0)) {
    cVar4 = FUN_144729dda(param_1 + 0x2a);
    if (cVar4 != '\0') {
      if ((longlong *)param_1[0x2b] != (longlong *)0x0) {
        cVar4 = (**(code **)(*(longlong *)param_1[0x2b] + 0xd8))();
        if ((cVar4 != '\0') && ((*(byte *)(param_1 + 0x72) & 1) == 0)) goto LAB_147eee1f3;
      }
      FUN_147eedd4c(param_1,param_2,param_3,param_4);
      cVar4 = FUN_147bcbe38(param_1[0x2b]);
      if (cVar4 == '\0') {
        (**(code **)(*(longlong *)param_1[0x2b] + 0x58))((longlong *)param_1[0x2b],param_2,0);
      }
      else {
        fVar5 = (float)(**(code **)(param_1[0x6c] + 0x28))(param_1 + 0x6c);
        dVar1 = *param_2;
        dVar2 = param_2[1];
        dVar3 = param_2[2];
        dVar6 = SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
        if (ABS(dVar6) <= 1e-08) {
          local_48 = DAT_14c8464f0;
          local_58 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_50 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_58 = dVar6 / (double)fVar5;
          if (1.0 <= local_58) {
            local_58 = 1.0;
          }
          if (local_58 <= 0.0) {
            local_58 = 0.0;
          }
          dVar6 = 1.0 / dVar6;
          local_48 = dVar3 * dVar6 * local_58;
          uStack_50 = dVar2 * dVar6 * local_58;
          local_58 = dVar1 * dVar6 * local_58;
        }
        (**(code **)(*(longlong *)param_1[0x2b] + 0x60))((longlong *)param_1[0x2b],&local_58);
      }
    }
  }
LAB_147eee1f3:
  (**(code **)(*param_1 + 0x5c0))(param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eee39a FUN_147eee39a body=443 status=ok
// SIG undefined FUN_147eee39a(void)

void FUN_147eee39a(longlong param_1,char param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20200) {
    FUN_144b3d300(&DAT_14cb20200);
    if (DAT_14cb20200 == -1) {
      FUN_140056680(&DAT_14cb201d0,L"Enabled");
      FUN_140056680(&DAT_14cb201e0,L"ObstacleOnly");
      FUN_140056680(&DAT_14cb201f0,L"Disabled");
      atexit(FUN_1438567a3);
      _Init_thread_footer(&DAT_14cb20200);
    }
  }
  if ((*(char *)(param_1 + 0x394) != param_2) && (*(char *)(param_1 + 0x2a4) == '\0')) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    plVar3 = (longlong *)FUN_147eedcd2(lVar2);
    if (plVar3 == (longlong *)0x0) {
      *(undefined1 *)(param_1 + 0x394) = 2;
    }
    else {
      *(char *)(param_1 + 0x394) = param_2;
      if (((*(byte *)(param_1 + 0x390) & 8) == 0) == (param_2 != '\x02')) {
        if (param_1 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_145a74e24();
          uVar4 = FUN_144718840(param_1,uVar4);
        }
        if (param_2 == '\x02') {
          FUN_147ef2352(plVar3 + 0xf,uVar4);
          bVar1 = 0;
        }
        else {
          local_40 = uVar4;
          (**(code **)(*plVar3 + 0x2c8))(plVar3);
          local_30 = &local_58;
          local_58 = 0;
          local_50 = 0xffffffff;
          local_48 = 0;
          local_38 = &local_40;
          FUN_147ef1e44(plVar3 + 0xf,local_24);
          bVar1 = 8;
        }
        *(byte *)(param_1 + 0x390) = *(byte *)(param_1 + 0x390) & 0xf7 | bVar1;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eee556 FUN_147eee556 body=225 status=ok
// SIG undefined FUN_147eee556(void)

void FUN_147eee556(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147ef8a6c();
  if (*(char *)(param_1 + 0x394) == '\x02') goto LAB_147eee57c;
  FUN_147eee638(param_1);
  if ((*(byte *)(param_1 + 0x390) & 8) != 0) goto LAB_147eee57c;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
    if (lVar2 != 0) goto LAB_147eee5b7;
  }
  else {
LAB_147eee5b7:
    lVar2 = *(longlong *)(lVar2 + 0x168);
    if (lVar2 != 0) {
      lVar1 = FUN_1409035a4();
      if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
         ((*(byte *)(lVar2 + 0x52a) & 4) == 0)) {
        local_30 = &LAB_147eee80e;
        local_28 = 0;
        FUN_147eee70e(lVar2 + 0x130,local_20,param_1);
        goto LAB_147eee57c;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x394) = 2;
LAB_147eee57c:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eee638 FUN_147eee638 body=212 status=ok
// SIG undefined FUN_147eee638(void)

void FUN_147eee638(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  plVar2 = (longlong *)FUN_147eedcd2(lVar1);
  if (plVar2 == (longlong *)0x0) {
    *(byte *)(param_1 + 0x390) = *(byte *)(param_1 + 0x390) & 0xf7;
  }
  else {
    if (param_1 == 0) {
      local_40 = 0;
    }
    else {
      uVar3 = FUN_145a74e24();
      local_40 = FUN_144718840(param_1,uVar3);
    }
    (**(code **)(*plVar2 + 0x2c8))(plVar2);
    local_30 = &local_58;
    local_58 = 0;
    local_50 = 0xffffffff;
    local_48 = 0;
    local_38 = &local_40;
    FUN_147ef1e44(plVar2 + 0xf,local_24);
    *(byte *)(param_1 + 0x390) = *(byte *)(param_1 + 0x390) | 8;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eee70e FUN_147eee70e body=254 status=ok
// SIG undefined FUN_147eee70e(void)

undefined8
FUN_147eee70e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ac15600;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eee81c FUN_147eee81c body=107 status=ok
// SIG undefined FUN_147eee81c(void)

undefined4 FUN_147eee81c(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = FUN_147efbb34();
  local_38 = FUN_14479d2ce(param_1 + 0x150);
  FUN_147eee888(&local_30);
  *(undefined4 *)(param_1 + 0x368) = local_30;
  *(undefined4 *)(param_1 + 0x36c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x370) = uStack_28;
  *(undefined4 *)(param_1 + 0x374) = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eee888 FUN_147eee888 body=74 status=ok
// SIG undefined FUN_147eee888(void)

undefined8 * FUN_147eee888(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    uVar1 = FUN_145a6eeb2();
    lVar2 = FUN_144718840(lVar2,uVar1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      FUN_14485c47a(param_1,*param_2);
    }
  }
  return param_1;
}



// FUNCTION 147eee8d2 FUN_147eee8d2 body=146 status=ok
// SIG undefined FUN_147eee8d2(void)

void FUN_147eee8d2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  
  cVar2 = FUN_144729dda(param_1 + 0x160);
  FUN_147efba86(param_1,param_2);
  if (*(char *)(param_1 + 0x394) == '\0') {
    cVar3 = FUN_144729dda(param_1 + 0x160);
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (lVar4 == 0) {
      lVar4 = FUN_1448abda6(param_1);
    }
    lVar4 = FUN_147eedcd2(lVar4);
    if (((param_1 != 0) && (cVar3 == '\0' && lVar4 != 0)) && (cVar2 == '\x01')) {
      uVar1 = FUN_145a74e24();
      FUN_144718840(param_1,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147eee9cc FUN_147eee9cc body=1032 status=ok
// SIG undefined FUN_147eee9cc(void)

void FUN_147eee9cc(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined1 auStack_f8 [32];
  double *local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  longlong *plStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)((longlong)param_1 + 0x394) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_f8);
  }
  if (param_1[0x2f] == 0) {
LAB_147eeeb8b:
    pdVar8 = &local_68;
    uVar7 = 3;
    uVar9 = 0x20;
  }
  else {
    local_68 = 0.0;
    plStack_60 = (longlong *)0x0;
    cVar4 = FUN_14493c216(&local_68,0);
    plVar6 = (longlong *)0x0;
    if (cVar4 != '\0') {
      plVar6 = plStack_60;
    }
    plVar2 = (longlong *)param_1[0x2b];
    if (plVar2 == plVar6) goto LAB_147eeeb8b;
    uVar1 = *(uint *)(param_1[0x2f] + 0x98);
    if ((uVar1 & 2) == 0) {
      if ((uVar1 >> 8 & 1) == 0) goto LAB_147eeeb8b;
    }
    else if (((uVar1 >> 8 & 1) == 0) && ((uVar1 & 1) == 0 || *(int *)(param_1[0x2f] + 0x30) < 2))
    goto LAB_147eeeb8b;
    (**(code **)(*plVar2 + 0x80))(plVar2,&local_68);
    cVar4 = (**(code **)(*(longlong *)param_1[0x2b] + 0x18))();
    if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x2a4) != '\x03')) goto LAB_147eeebb4;
    FUN_14797c16e(param_1 + 0x3a,&local_80);
    if ((*(byte *)((longlong)param_1 + 0x2a5) & 0x20) == 0) {
      if ((*(byte *)((longlong)param_1 + 0x391) & 0x10) != 0) {
        (**(code **)(*(longlong *)param_1[0x2b] + 0x80))((longlong *)param_1[0x2b],&local_98);
        if ((*(byte *)((longlong)param_1 + 0x391) & 0xa0) == 0) {
LAB_147eeed17:
          bVar3 = false;
        }
        else {
          if (((ABS((double)param_1[0x6f]) <= 9.999999747378752e-05) &&
              (ABS((double)param_1[0x70]) <= 9.999999747378752e-05)) &&
             (ABS((double)param_1[0x71]) <= 9.999999747378752e-05)) goto LAB_147eeed17;
          bVar3 = (local_70 - local_88) * (double)param_1[0x71] +
                  (local_80 - local_98) * (double)param_1[0x6f] +
                  (local_78 - local_90) * (double)param_1[0x70] < 0.0;
        }
        local_a8 = param_1[0x52];
        local_b8 = (undefined4)param_1[0x50];
        uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x284);
        uStack_b0 = (undefined4)param_1[0x51];
        uStack_ac = *(undefined4 *)((longlong)param_1 + 0x28c);
        uVar5 = FUN_147ef9aee(param_1,param_1[0x2f],&local_b8,&local_80);
        if (!bVar3) {
          local_c8 = 0;
          if ((*(byte *)((longlong)param_1 + 0x2a5) & 1) != 0) {
            local_c8 = *(undefined4 *)((longlong)param_1 + 0x1a4);
          }
          local_d8 = &local_68;
          local_d0 = uVar5;
          cVar4 = FUN_147efa92e(param_1,&local_80,0,0);
          if (cVar4 == '\0') goto LAB_147eeec1f;
        }
        goto LAB_147eeebfe;
      }
      if ((*(byte *)((longlong)param_1 + 0x391) & 0x40) != 0) {
        local_c8 = 0x40800000;
        local_d0 = 0;
        local_d8 = &local_68;
        cVar4 = FUN_147efa92e(param_1,&local_80,0,0);
        if (cVar4 != '\0') {
          uVar5 = (**(code **)(*param_1 + 0x580))(param_1,0);
          (**(code **)(*param_1 + 0x538))(param_1,uVar5);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x4b8))(param_1);
LAB_147eeebfe:
      FUN_147ef6f66(&local_98,0,0);
      (**(code **)(*param_1 + 0x4b0))(param_1,&local_98);
    }
LAB_147eeec1f:
    if (*(char *)((longlong)param_1 + 0x2a4) != '\x03') goto LAB_147eeebb4;
    if ((*(byte *)((longlong)param_1 + 0x2a6) & 1) != 0) {
      plVar2 = (longlong *)param_1[0x2f];
      plVar6 = plVar2 + 0xe;
      do {
        if ((int)*plVar6 == DAT_14cb20388) {
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x78))(plVar2,&local_68,1);
          }
          break;
        }
        plVar6 = (longlong *)plVar6[1];
      } while (plVar6 != (longlong *)0x0);
    }
    cVar4 = (**(code **)(*param_1 + 0x558))(param_1);
    if ((cVar4 == '\0') || (cVar4 = FUN_147efa342(param_1), cVar4 == '\0')) goto LAB_147eeebb4;
    pdVar8 = &local_80;
    uVar7 = 1;
    uVar9 = 0;
  }
  FUN_147ef6f66(pdVar8,uVar7,uVar9);
  (**(code **)(*param_1 + 0x4b0))(param_1,pdVar8);
LAB_147eeebb4:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147eeee00 FUN_147eeee00 body=589 status=ok
// SIG undefined FUN_147eeee00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147eeee00(longlong param_1,double *param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((char)param_3 != '\0') || (*(longlong *)(param_1 + 0x158) == 0)) ||
      (cVar1 = FUN_144729dda(param_1 + 0x150), cVar1 == '\0')) ||
     (*(char *)(param_1 + 0x394) != '\0')) {
    FUN_147ef903a(param_1,param_2,param_3);
    if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x78))(*(longlong **)(param_1 + 0x158),&local_38);
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x90))();
  if (lVar2 != 0) {
    if ((*(char *)(param_1 + 0x2a4) == '\x03') &&
       (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0xd8))(), cVar1 == '\0')) {
      dVar7 = *(double *)(param_1 + 0x378);
      uVar3 = SUB84(dVar7,0);
      uVar4 = (undefined4)((ulonglong)dVar7 >> 0x20);
      if ((9.999999747378752e-05 < ABS(dVar7)) ||
         ((9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x380)) ||
          (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x388)))))) goto LAB_147eeef3b;
    }
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xb0))
              (*(longlong **)(param_1 + 0x158),&local_58);
    goto LAB_147eeeed6;
  }
  uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x378);
  uVar4 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x378) >> 0x20);
LAB_147eeef3b:
  uStack_50 = *(double *)(param_1 + 0x380);
  local_58 = (double)CONCAT44(uVar4,uVar3);
  dVar7 = local_58 * (double)CONCAT44(uVar4,uVar3) + uStack_50 * uStack_50;
  if ((dVar7 != 1.0) || (NAN(dVar7))) {
    if (9.99999993922529e-09 <= dVar7) {
      uStack_50 = uStack_50 * (1.0 / SQRT(dVar7));
      local_58 = (double)CONCAT44(uVar4,uVar3) * (1.0 / SQRT(dVar7));
      goto LAB_147eef039;
    }
    local_48 = DAT_14c8464f0;
    uVar3 = (undefined4)DAT_14c8464e0;
    uVar4 = DAT_14c8464e0._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar6 = DAT_14c8464e8._4_4_;
  }
  else {
    if ((*(double *)(param_1 + 0x388) != 0.0) || (NAN(*(double *)(param_1 + 0x388)))) {
LAB_147eef039:
      local_48 = 0.0;
      goto LAB_147eeeed6;
    }
    local_48 = *(double *)(param_1 + 0x388);
    uVar3 = *(undefined4 *)(param_1 + 0x378);
    uVar4 = *(undefined4 *)(param_1 + 0x37c);
    uVar5 = *(undefined4 *)(param_1 + 0x380);
    uVar6 = *(undefined4 *)(param_1 + 900);
  }
  local_58 = (double)CONCAT44(uVar4,uVar3);
  uStack_50 = (double)CONCAT44(uVar6,uVar5);
LAB_147eeeed6:
  dVar7 = (double)_DAT_14c762398;
  *param_2 = dVar7 * local_58 + local_38;
  param_2[1] = uStack_50 * dVar7 + local_30;
  param_2[2] = local_48 * dVar7 + local_28;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
}



// FUNCTION 147eef054 FUN_147eef054 body=186 status=ok
// SIG undefined FUN_147eef054(void)

void FUN_147eef054(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  int *piVar4;
  longlong lVar5;
  
  if (*(char *)((longlong)param_1 + 0x394) != '\0') {
    return;
  }
  if (*(char *)((longlong)param_1 + 0x2a4) == '\0') {
    return;
  }
  lVar2 = param_1[0x2f];
  if (lVar2 != 0) {
    piVar4 = (int *)(lVar2 + 0x70);
    do {
      if (*piVar4 == DAT_14cb1dbc8) {
        iVar1 = *(int *)((longlong)param_1 + 0x3ac);
        if (iVar1 < *(int *)(lVar2 + 0x130)) {
          lVar5 = 0;
          goto LAB_147eef0f4;
        }
        break;
      }
      piVar4 = *(int **)(piVar4 + 2);
    } while (piVar4 != (int *)0x0);
  }
  goto LAB_147eef099;
  while (lVar5 = lVar5 + 1, (longlong)*(int *)(lVar2 + 0x130) - (longlong)iVar1 != lVar5) {
LAB_147eef0f4:
    if (*(longlong *)((longlong)iVar1 * 8 + *(longlong *)(lVar2 + 0x128) + lVar5 * 8) == param_2) {
      *(int *)((longlong)param_1 + 0x3ac) = iVar1 + (int)lVar5;
      break;
    }
  }
LAB_147eef099:
  if ((param_4 < 3) && ((*(byte *)((longlong)param_1 + 0x391) & 0x10) == 0)) {
    uVar3 = (**(code **)(*param_1 + 0x580))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000147eef0ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x538))(param_1,uVar3,*(code **)(*param_1 + 0x538));
    return;
  }
  return;
}



// FUNCTION 147eef10e FUN_147eef10e body=95 status=ok
// SIG undefined FUN_147eef10e(void)

void FUN_147eef10e(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  FUN_147ef8f1c();
  FUN_147eee638(param_1);
  if ((*(byte *)(param_1 + 0x72) & 8) == 0) {
    *(undefined1 *)((longlong)param_1 + 0x394) = 2;
  }
  if (param_1[0x2b] != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x2a);
    if (cVar1 != '\0') {
      lVar2 = param_1[0x2b];
      goto LAB_147eef158;
    }
  }
  lVar2 = 0;
LAB_147eef158:
                    /* WARNING: Could not recover jumptable at 0x000147eef16a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4d0))(param_1,lVar2);
  return;
}



// FUNCTION 147eef16e FUN_147eef16e body=2077 status=ok
// SIG undefined FUN_147eef16e(void)

/* WARNING: Removing unreachable block (ram,0x000147eef71f) */
/* WARNING: Removing unreachable block (ram,0x000147eef601) */
/* WARNING: Removing unreachable block (ram,0x000147eef48c) */
/* WARNING: Removing unreachable block (ram,0x000147eef8a0) */
/* WARNING: Removing unreachable block (ram,0x000147eef279) */
/* WARNING: Removing unreachable block (ram,0x000147eef92c) */
/* WARNING: Removing unreachable block (ram,0x000147eef52c) */
/* WARNING: Removing unreachable block (ram,0x000147eef693) */
/* WARNING: Removing unreachable block (ram,0x000147eef7b1) */

void FUN_147eef16e(longlong param_1,longlong *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  wchar_t *pwVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_108 [32];
  char *local_e8;
  char *local_e0;
  char *local_d8;
  double local_c8;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  char local_92;
  char local_91;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(char *)(param_1 + 0x394) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_108);
  }
  FUN_147efc502(param_1,&local_b0);
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_1447a1bd6(param_2,iVar3);
  }
  lVar6 = *param_2;
  lVar11 = (longlong)iVar3 * 0x10;
  *(undefined8 *)(lVar6 + lVar11) = 0;
  *(double *)(lVar6 + lVar11) = local_b0;
  *(int *)(lVar6 + 8 + lVar11) = (int)local_a8;
  *(undefined4 *)(lVar6 + 0xc + lVar11) = local_a8._4_4_;
  local_a8 = 0.0;
  local_b0 = 0.0;
  iVar3 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
    FUN_147ef1dbe(param_3,iVar3);
  }
  *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = 0;
  lVar6 = *(longlong *)(param_1 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_1);
  }
  lVar6 = FUN_147eedcd2(lVar6);
  if ((lVar6 != 0) && (cVar5 = FUN_147eef9cc(lVar6,param_1), cVar5 == '\0')) {
    FUN_140056680(&local_b0,L"simulation");
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1447a1bd6(param_2,iVar3);
    }
    lVar6 = *param_2;
    lVar11 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar6 + lVar11) = 0;
    *(double *)(lVar6 + lVar11) = local_b0;
    *(int *)(lVar6 + 8 + lVar11) = (int)local_a8;
    *(undefined4 *)(lVar6 + 0xc + lVar11) = local_a8._4_4_;
    local_a8 = 0.0;
    local_b0 = 0.0;
    iVar3 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      FUN_147ef1dbe(param_3,iVar3);
    }
    *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = 1;
    FUN_140056680(&local_b0,L"NOT ACTIVE");
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1447a1bd6(param_2,iVar3);
    }
    lVar6 = *param_2;
    lVar11 = (longlong)iVar3 * 0x10;
    *(undefined8 *)(lVar6 + lVar11) = 0;
    *(double *)(lVar6 + lVar11) = local_b0;
    *(int *)(lVar6 + 8 + lVar11) = (int)local_a8;
    *(undefined4 *)(lVar6 + 0xc + lVar11) = local_a8._4_4_;
    local_a8 = 0.0;
    local_b0 = 0.0;
    iVar3 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      FUN_147ef1dbe(param_3,iVar3);
    }
    *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = 2;
  }
  if (*(char *)(param_1 + 0x2a4) == '\x03') {
    if (*(longlong *)(param_1 + 0x178) != 0) {
      lVar6 = *param_2;
      piVar7 = (int *)(*(longlong *)(param_1 + 0x178) + 0x70);
      piVar8 = piVar7;
      do {
        if (*piVar8 == DAT_14cb1dbc8) {
          FUN_140002266(&local_b0,L" (path:%d, visited:%d)",*(undefined4 *)(param_1 + 0x3a8),
                        *(undefined4 *)(param_1 + 0x3ac));
          iVar3 = (int)local_a8 + -1;
          if ((int)local_a8 == 0) {
            iVar3 = 0;
          }
          FUN_1400020e8(lVar6,local_b0,iVar3);
          if (local_b0 != 0.0) {
            FUN_1400020a8();
          }
          goto LAB_147eef387;
        }
        piVar8 = *(int **)(piVar8 + 2);
      } while (piVar8 != (int *)0x0);
      do {
        if (*piVar7 == DAT_14cb1d3d8) {
          pwVar9 = L" (direct)";
          uVar10 = 9;
          goto LAB_147eef382;
        }
        piVar7 = *(int **)(piVar7 + 2);
      } while (piVar7 != (int *)0x0);
      pwVar9 = L" (unknown path)";
      uVar10 = 0xf;
LAB_147eef382:
      FUN_1400020e8(lVar6,pwVar9,uVar10);
    }
LAB_147eef387:
    local_84 = 0.0;
    local_88 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xa0))();
    if ((*(byte *)(param_1 + 0x391) & 0x10) == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
                (*(longlong **)(param_1 + 0x158),&local_b0);
      FUN_14797c16e(param_1 + 0x1d0,&local_c8);
      fVar4 = local_84;
      dVar2 = local_c0 - local_a8;
      dVar1 = local_c8 - local_b0;
      FUN_140056680(&local_c8,L"distance");
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar6 = *param_2;
      lVar11 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar6 + lVar11) = 0;
      *(double *)(lVar6 + lVar11) = local_c8;
      *(undefined4 *)(lVar6 + 8 + lVar11) = (undefined4)local_c0;
      *(undefined4 *)(lVar6 + 0xc + lVar11) = local_c0._4_4_;
      local_c0 = 0.0;
      local_c8 = 0.0;
      dVar1 = (local_b8 - local_a0) * (local_b8 - local_a0) + dVar1 * dVar1 + dVar2 * dVar2;
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_147ef1dbe(param_3,iVar3);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = 1;
      FUN_140002266(&local_c8,L"%.0f",SQRT(dVar1));
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar6 = *param_2;
      lVar11 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar6 + lVar11) = 0;
      *(double *)(lVar6 + lVar11) = local_c8;
      *(undefined4 *)(lVar6 + 8 + lVar11) = (undefined4)local_c0;
      *(undefined4 *)(lVar6 + 0xc + lVar11) = local_c0._4_4_;
      local_c0 = 0.0;
      local_c8 = 0.0;
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_147ef1dbe(param_3,iVar3);
      }
      *(uint *)(*param_3 + (longlong)iVar3 * 4) = dVar1 < (double)(fVar4 * 5.0 * fVar4 * 5.0) | 2;
    }
    else {
      local_c8 = (double)((ulonglong)local_c8 & 0xffffffff00000000);
      local_8c = 0.0;
      local_90 = 0.0;
      local_e0 = &local_91;
      local_91 = '\0';
      local_e8 = &local_92;
      local_92 = '\0';
      local_d8 = local_e8;
      FUN_147efb3f6(param_1);
      FUN_140056680(&local_b0,L"dist2D");
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar6 = *param_2;
      lVar11 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar6 + lVar11) = 0;
      *(double *)(lVar6 + lVar11) = local_b0;
      *(int *)(lVar6 + 8 + lVar11) = (int)local_a8;
      *(undefined4 *)(lVar6 + 0xc + lVar11) = local_a8._4_4_;
      local_a8 = 0.0;
      local_b0 = 0.0;
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_147ef1dbe(param_3,iVar3);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = 1;
      FUN_140002266(&local_b0,L"%.0f",(double)local_8c);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar6 = *param_2;
      lVar11 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar6 + lVar11) = 0;
      *(double *)(lVar6 + lVar11) = local_b0;
      *(int *)(lVar6 + 8 + lVar11) = (int)local_a8;
      *(undefined4 *)(lVar6 + 0xc + lVar11) = local_a8._4_4_;
      local_a8 = 0.0;
      local_b0 = 0.0;
      bVar12 = local_91 == '\0';
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_147ef1dbe(param_3,iVar3);
      }
      *(uint *)(*param_3 + (longlong)iVar3 * 4) = bVar12 + 2;
      FUN_140056680(&local_b0,L"distZ");
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar6 = *param_2;
      lVar11 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar6 + lVar11) = 0;
      *(double *)(lVar6 + lVar11) = local_b0;
      *(int *)(lVar6 + 8 + lVar11) = (int)local_a8;
      *(undefined4 *)(lVar6 + 0xc + lVar11) = local_a8._4_4_;
      local_a8 = 0.0;
      local_b0 = 0.0;
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_147ef1dbe(param_3,iVar3);
      }
      *(undefined4 *)(*param_3 + (longlong)iVar3 * 4) = 1;
      FUN_140002266(&local_b0,L"%.0f",(double)local_90);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1447a1bd6(param_2,iVar3);
      }
      lVar6 = *param_2;
      lVar11 = (longlong)iVar3 * 0x10;
      *(undefined8 *)(lVar6 + lVar11) = 0;
      *(double *)(lVar6 + lVar11) = local_b0;
      *(int *)(lVar6 + 8 + lVar11) = (int)local_a8;
      *(undefined4 *)(lVar6 + 0xc + lVar11) = local_a8._4_4_;
      local_a8 = 0.0;
      local_b0 = 0.0;
      bVar12 = local_92 == '\0';
      iVar3 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
        FUN_147ef1dbe(param_3,iVar3);
      }
      *(uint *)(*param_3 + (longlong)iVar3 * 4) = bVar12 + 2;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eef9cc FUN_147eef9cc body=183 status=ok
// SIG undefined FUN_147eef9cc(void)

undefined8 FUN_147eef9cc(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  uVar2 = param_2 + 0x360;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar5 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xb8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xc0) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar4 * 0x28);
        if (*puVar1 == uVar2) {
          if (((ulonglong)(puVar1 + 1) & 0xfffffffffffffff7) == 0) {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)(puVar1 + 1) >> 8),-1 < (int)puVar1[2]);
        }
        iVar4 = (int)puVar1[4];
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 147eefa8e FUN_147eefa8e body=161 status=ok
// SIG undefined FUN_147eefa8e(void)

void FUN_147eefa8e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  
  if ((param_1[5] == 0) && (lVar2 = param_1[4], lVar2 != 0)) {
    lVar5 = FUN_1409035a4();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
         == lVar5 + 0x30 && (iVar1 = *(int *)(lVar2 + 0xe8), (longlong)iVar1 != 0)))) {
      lVar2 = *(longlong *)(lVar2 + 0xe0);
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar5);
        if ((lVar3 != 0) && (cVar4 = (**(code **)(*param_1 + 0x2c0))(param_1,lVar3), cVar4 != '\0'))
        {
          FUN_147eefb30(param_1,lVar3);
          return;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
  }
  return;
}



// FUNCTION 147eefb30 FUN_147eefb30 body=210 status=ok
// SIG undefined FUN_147eefb30(void)

void FUN_147eefb30(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x28) != 0 && *(longlong *)(param_1 + 0x28) != param_2) {
    uVar3 = FUN_1459938ca();
    bVar2 = FUN_144a7ca96(plVar1,uVar3);
    if ((*plVar1 != 0 & bVar2) == 1) {
      FUN_140457ffc(*plVar1 + 0x738,param_1);
    }
  }
  if (param_2 != 0) {
    lVar4 = FUN_1459938ca();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30)) {
      FUN_147eefc04(param_2 + 0x738,local_28,param_1);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  *plVar1 = param_2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eefc04 FUN_147eefc04 body=244 status=ok
// SIG undefined FUN_147eefc04(void)

undefined8 FUN_147eefc04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14ac15670;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = &DAT_147eefcfa;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eefcfc FUN_147eefcfc body=66 status=ok
// SIG undefined FUN_147eefcfc(void)

undefined8 FUN_147eefcfc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((*(byte *)(param_2 + 0x5a8) & 2) != 0) && (param_2 != 0)) {
    lVar1 = FUN_1459938ca();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 147eefd3e FUN_147eefd3e body=56 status=ok
// SIG undefined FUN_147eefd3e(void)

void FUN_147eefd3e(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  if (param_1[5] == 0) {
    cVar1 = (**(code **)(*param_1 + 0x2c0))();
    if (cVar1 != '\0') {
      FUN_147eefb30(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147eefd8a FUN_147eefd8a body=72 status=ok
// SIG undefined FUN_147eefd8a(void)

undefined8 FUN_147eefd8a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000147eefdcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x180))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 147eefdd2 FUN_147eefdd2 body=80 status=ok
// SIG undefined FUN_147eefdd2(void)

undefined8 FUN_147eefdd2(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_18 = *(undefined8 *)(param_3 + 4);
  FUN_147eefe24(param_1 + -0x28,param_2,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eefe24 FUN_147eefe24 body=224 status=ok
// SIG undefined FUN_147eefe24(void)

void FUN_147eefe24(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    lVar1 = FUN_14585dbdc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = *(longlong *)(param_2 + 0xa8);
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar2 = FUN_14490fee6();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          lVar1 = *(longlong *)(lVar1 + 0x3d0);
        }
      }
      local_48 = *(undefined8 *)(param_3 + 4);
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      FUN_147e9a922(param_1,lVar1);
      local_28 = *(undefined8 *)(param_3 + 4);
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      uStack_2c = param_3[3];
      FUN_147e9a8d2(param_1 + 0x40,lVar1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147eeff06 FUN_147eeff06 body=81 status=ok
// SIG undefined FUN_147eeff06(void)

void FUN_147eeff06(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = FUN_1413f862e();
    lVar1 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_145cbb700(lVar2);
      return;
    }
  }
  FUN_14475ec7e(param_1);
  return;
}



// FUNCTION 147eeff5c FUN_147eeff5c body=63 status=ok
// SIG undefined FUN_147eeff5c(void)

void FUN_147eeff5c(longlong param_1)

{
  longlong lVar1;
  
  FUN_147ef8a6c();
  lVar1 = FUN_147ef67ca(param_1);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x360) = lVar1;
  return;
}



// FUNCTION 147eeff9c FUN_147eeff9c body=48 status=ok
// SIG undefined FUN_147eeff9c(void)

void FUN_147eeff9c(longlong param_1)

{
  FUN_145d21a36();
  *(undefined8 *)(param_1 + 0x368) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x388) = 0;
  *(byte *)(param_1 + 0x370) = *(byte *)(param_1 + 0x370) & 0xfc;
  return;
}



// FUNCTION 147eeffcc FUN_147eeffcc body=30 status=ok
// SIG undefined FUN_147eeffcc(void)

void FUN_147eeffcc(longlong param_1)

{
  FUN_147ef8a2c();
  *(undefined8 *)(param_1 + 0x368) = 0xffffffffffffffff;
  return;
}



// FUNCTION 147eeffea FUN_147eeffea body=773 status=ok
// SIG undefined FUN_147eeffea(void)

void FUN_147eeffea(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[0x2b] == 0) || (cVar2 = FUN_144729dda(param_1 + 0x2a), cVar2 == '\0')) {
    local_28 = DAT_14c8464f0;
    local_38 = DAT_14c8464e0;
    dStack_30 = DAT_14c8464e8;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x80))((longlong *)param_1[0x2b],&local_38);
  }
  FUN_143857210(param_1,&local_38);
  if (((int)param_1[0x6d] == -1) || ((*(byte *)(param_1 + 0x6e) & 2) == 0)) {
    if ((int)param_1[0x70] != 0) {
      cVar2 = (**(code **)(*param_1 + 0x570))
                        (param_1,(longlong)((int)param_1[0x70] + -1) * 0x18 + param_1[0x6f]);
      if (cVar2 != '\0') {
        (**(code **)(*param_1 + 0x4b8))(param_1);
        (**(code **)(*param_1 + 0x538))(param_1,*(undefined4 *)((longlong)param_1 + 0x38c));
      }
      *(byte *)(param_1 + 0x6e) = *(byte *)(param_1 + 0x6e) & 0xfd;
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (*(int *)((longlong)param_1 + 900) != 0) {
        FUN_1447a8aa0(param_1 + 0x6f,0);
      }
    }
    FUN_147ef9b9a(param_1);
    goto LAB_147ef00eb;
  }
  cVar2 = (**(code **)(*param_1 + 0x568))(param_1,&local_38);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*param_1 + 0x570))(param_1,&local_38);
    if (cVar2 == '\0') goto LAB_147ef00eb;
    lVar1 = param_1[0x71];
    uVar3 = (int)lVar1 + 1;
    *(uint *)(param_1 + 0x71) = uVar3;
    if ((-2 < (int)lVar1) && ((int)uVar3 < (int)param_1[0x70])) {
      FUN_14797bda6(param_1 + 0x3a,0,(ulonglong)uVar3 * 0x18 + param_1[0x6f]);
      lVar4 = (longlong)(int)param_1[0x71];
      lVar1 = param_1[0x6f];
      dVar5 = *(double *)(lVar1 + 0x10 + lVar4 * 0x18) - *(double *)(lVar1 + -8 + lVar4 * 0x18);
      dVar9 = *(double *)(lVar1 + 8 + lVar4 * 0x18) - *(double *)(lVar1 + -0x10 + lVar4 * 0x18);
      dVar7 = *(double *)(lVar1 + lVar4 * 0x18) - *(double *)(lVar1 + -0x18 + lVar4 * 0x18);
      dVar11 = dVar5 * dVar5 + dVar7 * dVar7 + dVar9 * dVar9;
      if (((dVar11 != 1.0) || (dVar6 = dVar5, dVar8 = dVar7, dVar10 = dVar9, NAN(dVar11))) &&
         (dVar6 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar11)) {
        dVar11 = 1.0 / SQRT(dVar11);
        dVar6 = dVar5 * dVar11;
        dVar8 = dVar7 * dVar11;
        dVar10 = dVar9 * dVar11;
      }
      param_1[0x5e] = (longlong)dVar8;
      param_1[0x5f] = (longlong)dVar10;
      param_1[0x60] = (longlong)dVar6;
      (**(code **)(*param_1 + 0x5a8))(param_1);
      goto LAB_147ef00eb;
    }
    uVar3 = *(uint *)(param_1 + 0x6e);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      if (*(int *)((longlong)param_1 + 900) != 0) {
        FUN_1447a8aa0(param_1 + 0x6f,0);
        uVar3 = *(uint *)(param_1 + 0x6e);
      }
      *(uint *)(param_1 + 0x6e) = uVar3 & 0xfffffffd;
      (**(code **)(*param_1 + 0x4b8))(param_1);
      (**(code **)(*param_1 + 0x538))(param_1,*(undefined4 *)((longlong)param_1 + 0x38c));
      goto LAB_147ef00eb;
    }
    (**(code **)(*param_1 + 0x4b8))(param_1);
  }
  else {
    (**(code **)(*param_1 + 0x4b8))(param_1);
  }
  FUN_147ef6f66(local_1c,0,0);
  (**(code **)(*param_1 + 0x4b0))(param_1,local_1c);
LAB_147ef00eb:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ef02f0 FUN_147ef02f0 body=213 status=ok
// SIG undefined FUN_147ef02f0(void)

void FUN_147ef02f0(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = *(int *)(param_1 + 0x338);
  if ((param_2 == -1 || iVar1 == -1) || (((iVar1 != 0 && (param_2 != 0)) && (iVar1 != param_2))))
  goto LAB_147ef031f;
  if (*(longlong *)(param_1 + 0x158) == 0) {
LAB_147ef0379:
    local_18 = DAT_14c8464f0;
    local_28 = (undefined4)DAT_14c8464e0;
    uStack_24 = DAT_14c8464e0._4_4_;
    uStack_20 = (undefined4)DAT_14c8464e8;
    uStack_1c = DAT_14c8464e8._4_4_;
  }
  else {
    cVar2 = FUN_144729dda(param_1 + 0x150);
    if (cVar2 == '\0') goto LAB_147ef0379;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
              (*(longlong **)(param_1 + 0x158),&local_28);
  }
  FUN_143857210(param_1,&local_28);
  if (*(int *)(param_1 + 0x368) == -1) {
    FUN_147ef853c(param_1,DAT_14cb1effc);
  }
  else {
    *(undefined1 *)(param_1 + 0x2a4) = 3;
  }
LAB_147ef031f:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef03c8 FUN_147ef03c8 body=45 status=ok
// SIG undefined FUN_147ef03c8(void)

longlong FUN_147ef03c8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145eda16e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef03f6 FUN_147ef03f6 body=48 status=ok
// SIG undefined FUN_147ef03f6(void)

longlong FUN_147ef03f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145eda16e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef0426 FUN_147ef0426 body=48 status=ok
// SIG undefined FUN_147ef0426(void)

longlong FUN_147ef0426(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145eda16e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef0456 FUN_147ef0456 body=48 status=ok
// SIG undefined FUN_147ef0456(void)

longlong FUN_147ef0456(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145eda16e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef04a6 FUN_147ef04a6 body=48 status=ok
// SIG undefined FUN_147ef04a6(void)

longlong FUN_147ef04a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x438;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef04d6 FUN_147ef04d6 body=48 status=ok
// SIG undefined FUN_147ef04d6(void)

longlong FUN_147ef04d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x440;
  FUN_145aa2b2a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef0510 FUN_147ef0510 body=45 status=ok
// SIG undefined FUN_147ef0510(void)

longlong FUN_147ef0510(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145a270d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef0544 FUN_147ef0544 body=48 status=ok
// SIG undefined FUN_147ef0544(void)

longlong FUN_147ef0544(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145a270d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef057c FUN_147ef057c body=48 status=ok
// SIG undefined FUN_147ef057c(void)

longlong FUN_147ef057c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145a270d4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef05c2 FUN_147ef05c2 body=45 status=ok
// SIG undefined FUN_147ef05c2(void)

longlong FUN_147ef05c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145aee0e0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef05f6 FUN_147ef05f6 body=48 status=ok
// SIG undefined FUN_147ef05f6(void)

longlong FUN_147ef05f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x110;
  FUN_145aee0e0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef062e FUN_147ef062e body=48 status=ok
// SIG undefined FUN_147ef062e(void)

longlong FUN_147ef062e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x118;
  FUN_145aee0e0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef0668 FUN_147ef0668 body=54 status=ok
// SIG undefined FUN_147ef0668(void)

void FUN_147ef0668(longlong *param_1)

{
  FUN_147ed333c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ef0746 FUN_147ef0746 body=59 status=ok
// SIG undefined FUN_147ef0746(void)

undefined8 FUN_147ef0746(longlong *param_1)

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



// FUNCTION 147ef0800 FUN_147ef0800 body=47 status=ok
// SIG undefined FUN_147ef0800(void)

void FUN_147ef0800(undefined8 param_1,longlong *param_2)

{
  if (param_2[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ef0846 FUN_147ef0846 body=67 status=ok
// SIG undefined FUN_147ef0846(void)

undefined1 FUN_147ef0846(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a67f5c(param_2,param_3);
    FUN_144a67f5c(param_2 + 0x10,param_3 + 0x10);
    param_2 = param_2 + 0x20;
    param_3 = param_3 + 0x20;
  }
  return 1;
}



// FUNCTION 147ef08b2 FUN_147ef08b2 body=59 status=ok
// SIG undefined FUN_147ef08b2(void)

undefined8 FUN_147ef08b2(longlong *param_1)

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



// FUNCTION 147ef0950 FUN_147ef0950 body=51 status=ok
// SIG undefined FUN_147ef0950(void)

void FUN_147ef0950(longlong *param_1)

{
  if ((char)param_1[4] == '\x01') {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 147ef0984 FUN_147ef0984 body=132 status=ok
// SIG undefined FUN_147ef0984(void)

void FUN_147ef0984(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ef0a0a FUN_147ef0a0a body=99 status=ok
// SIG undefined FUN_147ef0a0a(void)

undefined8 FUN_147ef0a0a(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2e8ba2e8ba2e8ba3),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x58)) {
    uVar4 = uVar2 / 0x58 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x58,8);
  }
  return uVar3;
}



// FUNCTION 147ef0a6e FUN_147ef0a6e body=143 status=ok
// SIG undefined FUN_147ef0a6e(void)

void FUN_147ef0a6e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ef0afe FUN_147ef0afe body=95 status=ok
// SIG undefined FUN_147ef0afe(void)

void FUN_147ef0afe(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
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



// FUNCTION 147ef0b5e FUN_147ef0b5e body=112 status=ok
// SIG undefined FUN_147ef0b5e(void)

void FUN_147ef0b5e(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x30,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 147ef0bce FUN_147ef0bce body=147 status=ok
// SIG undefined FUN_147ef0bce(void)

void FUN_147ef0bce(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ef0c62 FUN_147ef0c62 body=99 status=ok
// SIG undefined FUN_147ef0c62(void)

undefined8 FUN_147ef0c62(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x78,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0x8888888888888889),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x78)) {
    uVar4 = uVar2 / 0x78 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x78,8);
  }
  return uVar3;
}



// FUNCTION 147ef0cc6 FUN_147ef0cc6 body=143 status=ok
// SIG undefined FUN_147ef0cc6(void)

void FUN_147ef0cc6(longlong param_1,int param_2)

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



// FUNCTION 147ef0d56 FUN_147ef0d56 body=42 status=ok
// SIG undefined FUN_147ef0d56(void)

void FUN_147ef0d56(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = DAT_14c8464f0;
    uVar1 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = uVar1;
    param_1[3] = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 147ef0d80 FUN_147ef0d80 body=102 status=ok
// SIG undefined FUN_147ef0d80(void)

void FUN_147ef0d80(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_141260078();
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



// FUNCTION 147ef0de8 FUN_147ef0de8 body=48 status=ok
// SIG undefined FUN_147ef0de8(void)

void FUN_147ef0de8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x170,8);
  }
  return;
}



// FUNCTION 147ef0e18 FUN_147ef0e18 body=149 status=ok
// SIG undefined FUN_147ef0e18(void)

void FUN_147ef0e18(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x170,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x170)) {
      uVar5 = uVar4 / 0x170 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x170,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147ef0eae FUN_147ef0eae body=1043 status=ok
// SIG undefined FUN_147ef0eae(void)

void FUN_147ef0eae(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_3b8 [32];
  longlong *local_398;
  longlong *local_390;
  int local_384;
  longlong *local_380;
  longlong *local_378;
  undefined2 *local_370;
  int local_368;
  undefined2 *local_360;
  int local_358;
  undefined8 local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  memset(local_338,0,0x2f0);
  local_340 = param_1 + (ulonglong)param_2 * 8 + -8;
  local_348 = param_1;
  fVar14 = logf((float)(int)param_2);
  local_338[0] = (int)(longlong)(fVar14 + fVar14);
  plVar7 = &local_348;
  while( true ) {
    plVar10 = (longlong *)*plVar7;
    plVar9 = (longlong *)plVar7[1];
    iVar2 = (int)plVar7[2];
    iVar4 = (int)((ulonglong)((longlong)plVar9 - (longlong)plVar10) >> 3);
    plVar11 = plVar9;
    plVar13 = plVar10;
    local_398 = plVar7;
    if (iVar2 != 0) break;
LAB_147ef128a:
    FUN_147ef12c2(plVar10);
    plVar7 = local_398;
LAB_147ef1273:
    plVar7 = plVar7 + -3;
    if (plVar7 < &local_348) {
      if ((local_48 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_147ef0f4e:
  plVar7 = local_398;
  if (8 < (int)(iVar4 + 1U)) {
    uVar5 = iVar4 + 1U >> 1;
    lVar1 = plVar10[uVar5];
    plVar10[uVar5] = *plVar10;
    *plVar10 = lVar1;
    plVar8 = plVar9 + 1;
    plVar12 = plVar10;
    local_390 = plVar9;
    local_384 = iVar2;
    local_380 = plVar13;
    local_378 = plVar11;
    do {
      plVar7 = plVar12 + 1;
      plVar9 = plVar12 + 1;
      do {
        plVar12 = plVar9;
        plVar13 = plVar7;
        if (local_390 < plVar12) break;
        lVar1 = *plVar10;
        local_370 = *(undefined2 **)(*plVar12 + 0x18);
        FUN_1400021e4(&local_370,&local_360);
        local_350 = *(undefined8 *)(lVar1 + 0x18);
        FUN_1400021e4(&local_350,&local_370);
        puVar6 = &DAT_149dfb77a;
        if (local_358 != 0) {
          puVar6 = local_360;
        }
        puVar3 = &DAT_149dfb77a;
        if (local_368 != 0) {
          puVar3 = local_370;
        }
        iVar2 = FUN_144a80a00(puVar3,puVar6);
        if (local_370 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_360 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar7 = plVar13 + 1;
        plVar9 = plVar12 + 1;
      } while (-1 < iVar2);
      plVar7 = plVar8 + -2;
      do {
        plVar9 = plVar8;
        plVar11 = plVar7;
        plVar8 = plVar9 + -1;
        if (plVar8 <= plVar10) break;
        lVar1 = *plVar8;
        local_370 = *(undefined2 **)(*plVar10 + 0x18);
        FUN_1400021e4(&local_370,&local_360);
        local_350 = *(undefined8 *)(lVar1 + 0x18);
        FUN_1400021e4(&local_350,&local_370);
        puVar6 = &DAT_149dfb77a;
        if (local_358 != 0) {
          puVar6 = local_360;
        }
        puVar3 = &DAT_149dfb77a;
        if (local_368 != 0) {
          puVar3 = local_370;
        }
        iVar2 = FUN_144a80a00(puVar3,puVar6);
        if (local_370 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_360 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar7 = plVar11 + -1;
      } while (-1 < iVar2);
      if (plVar8 < plVar12) goto LAB_147ef10e7;
      lVar1 = *plVar12;
      *plVar12 = *plVar8;
      *plVar8 = lVar1;
    } while( true );
  }
  for (; local_398 = plVar7, plVar13 = plVar10, plVar11 = plVar10, plVar10 < plVar9;
      plVar9 = plVar9 + -1) {
    while (plVar11 = plVar11 + 1, plVar11 <= plVar9) {
      lVar1 = *plVar13;
      local_370 = *(undefined2 **)(*plVar11 + 0x18);
      FUN_1400021e4(&local_370,&local_360);
      local_350 = *(undefined8 *)(lVar1 + 0x18);
      FUN_1400021e4(&local_350,&local_370);
      puVar6 = &DAT_149dfb77a;
      if (local_358 != 0) {
        puVar6 = local_360;
      }
      puVar3 = &DAT_149dfb77a;
      if (local_368 != 0) {
        puVar3 = local_370;
      }
      iVar2 = FUN_144a80a00(puVar3,puVar6);
      if (local_370 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_360 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (iVar2 < 0) {
        plVar13 = plVar11;
      }
    }
    lVar1 = *plVar13;
    *plVar13 = *plVar9;
    *plVar9 = lVar1;
    plVar7 = local_398;
  }
  goto LAB_147ef1273;
LAB_147ef10e7:
  lVar1 = *plVar10;
  *plVar10 = *plVar8;
  *plVar8 = lVar1;
  iVar2 = local_384 + -1;
  plVar9 = plVar9 + -2;
  if ((longlong)plVar11 - (longlong)local_380 < (longlong)local_378 - (longlong)plVar13) {
    plVar7 = local_398;
    if (plVar12 < local_390) {
      *local_398 = (longlong)plVar12;
      local_398[1] = (longlong)local_390;
      *(int *)(local_398 + 2) = iVar2;
      plVar7 = local_398 + 3;
    }
    plVar13 = plVar10;
    if (plVar8 <= plVar10 + 1) goto LAB_147ef1273;
  }
  else {
    if (plVar10 + 1 < plVar8) {
      *local_398 = (longlong)plVar10;
      local_398[1] = (longlong)plVar9;
      *(int *)(local_398 + 2) = iVar2;
      local_398 = local_398 + 3;
    }
    plVar7 = local_398;
    plVar9 = local_390;
    plVar10 = plVar12;
    plVar11 = local_390;
    if (local_390 <= plVar12) goto LAB_147ef1273;
  }
  local_398 = plVar7;
  iVar4 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar13) >> 3);
  if (iVar2 == 0) goto LAB_147ef128a;
  goto LAB_147ef0f4e;
}



// FUNCTION 147ef12c2 FUN_147ef12c2 body=899 status=ok
// SIG undefined FUN_147ef12c2(void)

void FUN_147ef12c2(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    uVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    do {
      uVar8 = (ulonglong)uVar4;
      local_78 = uVar8;
      while (uVar3 = uVar4 * 2 + 1, (int)uVar3 < (int)param_2) {
        uVar12 = uVar4 * 2 + 2;
        uVar4 = uVar3;
        if ((int)uVar12 < (int)param_2) {
          lVar1 = param_1[(int)uVar12];
          local_70 = *(undefined2 **)(param_1[(int)uVar3] + 0x18);
          FUN_1400021e4(&local_70,&local_60);
          local_50 = *(undefined8 *)(lVar1 + 0x18);
          FUN_1400021e4(&local_50,&local_70);
          puVar10 = &DAT_149dfb77a;
          if (local_58 != 0) {
            puVar10 = local_60;
          }
          puVar9 = &DAT_149dfb77a;
          if (local_68 != 0) {
            puVar9 = local_70;
          }
          iVar5 = FUN_144a80a00(puVar9,puVar10);
          if (local_70 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_60 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (-1 < iVar5) {
            uVar4 = uVar12;
          }
        }
        iVar5 = (int)uVar8;
        lVar1 = param_1[iVar5];
        local_70 = *(undefined2 **)(param_1[(int)uVar4] + 0x18);
        FUN_1400021e4(&local_70,&local_60);
        local_50 = *(undefined8 *)(lVar1 + 0x18);
        FUN_1400021e4(&local_50,&local_70);
        puVar10 = &DAT_149dfb77a;
        if (local_58 != 0) {
          puVar10 = local_60;
        }
        puVar9 = &DAT_149dfb77a;
        if (local_68 != 0) {
          puVar9 = local_70;
        }
        iVar6 = FUN_144a80a00(puVar9,puVar10);
        if (local_70 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (-1 < iVar6) break;
        uVar2 = param_1[iVar5];
        param_1[iVar5] = param_1[(int)uVar4];
        param_1[(int)uVar4] = uVar2;
        uVar8 = (ulonglong)uVar4;
      }
      uVar4 = (int)local_78 - 1;
    } while ((int)local_78 != 0);
    if (1 < (int)param_2) {
      uVar8 = (ulonglong)param_2;
      uVar2 = *param_1;
      *param_1 = param_1[uVar8 - 1];
      param_1[uVar8 - 1] = uVar2;
      if (param_2 != 2) {
        do {
          uVar13 = uVar8 - 1;
          iVar5 = 0;
          iVar7 = 1;
          iVar6 = 0;
          do {
            iVar5 = iVar5 + 2;
            iVar11 = iVar7;
            if ((longlong)iVar5 < (longlong)uVar13) {
              lVar1 = param_1[iVar5];
              local_70 = *(undefined2 **)(param_1[iVar7] + 0x18);
              FUN_1400021e4(&local_70,&local_60);
              local_50 = *(undefined8 *)(lVar1 + 0x18);
              FUN_1400021e4(&local_50,&local_70);
              puVar10 = &DAT_149dfb77a;
              if (local_58 != 0) {
                puVar10 = local_60;
              }
              puVar9 = &DAT_149dfb77a;
              if (local_68 != 0) {
                puVar9 = local_70;
              }
              iVar7 = FUN_144a80a00(puVar9,puVar10);
              if (local_70 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (local_60 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (-1 < iVar7) {
                iVar11 = iVar5;
              }
            }
            lVar1 = param_1[iVar6];
            local_70 = *(undefined2 **)(param_1[iVar11] + 0x18);
            FUN_1400021e4(&local_70,&local_60);
            local_50 = *(undefined8 *)(lVar1 + 0x18);
            FUN_1400021e4(&local_50,&local_70);
            puVar10 = &DAT_149dfb77a;
            if (local_58 != 0) {
              puVar10 = local_60;
            }
            puVar9 = &DAT_149dfb77a;
            if (local_68 != 0) {
              puVar9 = local_70;
            }
            iVar5 = FUN_144a80a00(puVar9,puVar10);
            if (local_70 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (-1 < iVar5) break;
            uVar2 = param_1[iVar6];
            param_1[iVar6] = param_1[iVar11];
            param_1[iVar11] = uVar2;
            iVar5 = iVar11 * 2;
            iVar7 = iVar11 * 2 + 1;
            iVar6 = iVar11;
          } while ((longlong)iVar7 < (longlong)uVar13);
          uVar2 = *param_1;
          *param_1 = param_1[uVar8 - 2];
          param_1[uVar8 - 2] = uVar2;
          uVar8 = uVar13;
        } while (2 < uVar13);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef1646 FUN_147ef1646 body=29 status=ok
// SIG undefined FUN_147ef1646(void)

undefined8 FUN_147ef1646(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef167e FUN_147ef167e body=29 status=ok
// SIG undefined FUN_147ef167e(void)

bool FUN_147ef167e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ef169c FUN_147ef169c body=26 status=ok
// SIG undefined FUN_147ef169c(void)

bool FUN_147ef169c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ef16b6 FUN_147ef16b6 body=24 status=ok
// SIG undefined FUN_147ef16b6(void)

bool FUN_147ef16b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ef16da FUN_147ef16da body=93 status=ok
// SIG undefined FUN_147ef16da(void)

void FUN_147ef16da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac15590;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac15520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ef1738 FUN_147ef1738 body=93 status=ok
// SIG undefined FUN_147ef1738(void)

void FUN_147ef1738(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac15590;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac15520;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ef1796 FUN_147ef1796 body=126 status=ok
// SIG undefined FUN_147ef1796(void)

void FUN_147ef1796(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ac15590;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac15520;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ef1805. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ef1814 FUN_147ef1814 body=223 status=ok
// SIG undefined FUN_147ef1814(void)

undefined4
FUN_147ef1814(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = FUN_14479d2ce(param_1 + 0x18);
  pcVar3 = *(code **)(param_1 + 0x20);
  local_60 = *param_7;
  local_78 = &local_60;
  local_58 = param_7[1];
  *param_7 = 0;
  param_7[1] = 0;
  local_70 = param_8;
  local_88 = param_5;
  uStack_80 = param_6;
  uVar6 = (*pcVar3)(uVar5,param_2,param_3,param_4);
  plVar4 = (longlong *)param_7[1];
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
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef18f4 FUN_147ef18f4 body=290 status=ok
// SIG undefined FUN_147ef18f4(void)

bool FUN_147ef18f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,longlong *param_7,undefined8 param_8)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar5 = FUN_144a61b4f();
  if (cVar5 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_50);
    lVar7 = local_50;
  }
  else {
    lVar7 = 0;
  }
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar6 != 0) {
    pcVar3 = *(code **)(param_1 + 0x20);
    local_50 = *param_7;
    local_68 = &local_50;
    local_48 = param_7[1];
    *param_7 = 0;
    param_7[1] = 0;
    local_60 = param_8;
    local_70 = param_6;
    local_78 = param_5;
    (*pcVar3)(lVar6,param_2,param_3,param_4);
  }
  if (lVar7 != 0) {
    FUN_140113f3a(lVar7);
  }
  plVar4 = (longlong *)param_7[1];
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
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar6 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef1a1a FUN_147ef1a1a body=281 status=ok
// SIG undefined FUN_147ef1a1a(void)

void FUN_147ef1a1a(double *param_1,double *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined4 *param_6,undefined8 param_7)

{
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [32];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = 1;
  local_54 = *param_6;
  local_50 = param_6[1];
  local_4c = param_6[2];
  local_98 = param_2[2] - param_1[2];
  local_a0 = param_2[1] - param_1[1];
  local_a8 = *param_2 - *param_1;
  FUN_144a79a9c(&local_a8,local_90);
  FUN_144a7484c(local_90,local_78);
  local_b0 = param_7;
  local_b8 = param_5;
  local_c8 = param_4;
  local_c0 = &local_58;
  FUN_140386f30(param_3,param_1,param_2,local_78);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef1b34 FUN_147ef1b34 body=29 status=ok
// SIG undefined FUN_147ef1b34(void)

undefined8 FUN_147ef1b34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef1b6c FUN_147ef1b6c body=29 status=ok
// SIG undefined FUN_147ef1b6c(void)

bool FUN_147ef1b6c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ef1b8a FUN_147ef1b8a body=26 status=ok
// SIG undefined FUN_147ef1b8a(void)

bool FUN_147ef1b8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ef1ba4 FUN_147ef1ba4 body=24 status=ok
// SIG undefined FUN_147ef1ba4(void)

bool FUN_147ef1ba4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ef1bbc FUN_147ef1bbc body=101 status=ok
// SIG undefined FUN_147ef1bbc(void)

void FUN_147ef1bbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac15600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ef1c22 FUN_147ef1c22 body=101 status=ok
// SIG undefined FUN_147ef1c22(void)

void FUN_147ef1c22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac15600;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147ef1c88 FUN_147ef1c88 body=134 status=ok
// SIG undefined FUN_147ef1c88(void)

void FUN_147ef1c88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac15600;
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
                    /* WARNING: Could not recover jumptable at 0x000147ef1cff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ef1d0e FUN_147ef1d0e body=39 status=ok
// SIG undefined FUN_147ef1d0e(void)

void FUN_147ef1d0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ef1d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 147ef1d36 FUN_147ef1d36 body=134 status=ok
// SIG undefined FUN_147ef1d36(void)

bool FUN_147ef1d36(longlong param_1)

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



// FUNCTION 147ef1dbe FUN_147ef1dbe body=132 status=ok
// SIG undefined FUN_147ef1dbe(void)

void FUN_147ef1dbe(longlong param_1,int param_2)

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



// FUNCTION 147ef1e44 FUN_147ef1e44 body=334 status=ok
// SIG undefined FUN_147ef1e44(void)

undefined4 * FUN_147ef1e44(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147ef1f94(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar8 = *(ulonglong *)*param_3;
  *local_40 = uVar8;
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  uVar4 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar2;
  *(undefined4 *)(local_40 + 2) = uVar3;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  local_40[3] = *(ulonglong *)(puVar1 + 4);
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar6 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  cVar5 = FUN_147ef207a(param_1,uVar6,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar5 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_40 + 0x24) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_147ef2176(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef1f94 FUN_147ef1f94 body=230 status=ok
// SIG undefined FUN_147ef1f94(void)

int * FUN_147ef1f94(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 147ef207a FUN_147ef207a body=138 status=ok
// SIG undefined FUN_147ef207a(void)

undefined8 FUN_147ef207a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        plVar8 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
        if (*plVar8 == *param_3) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar8 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar8 + 0x14) = uVar3;
          *(int *)(plVar8 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar8 + 0x1c) = uVar4;
          *(int *)plVar8 = (int)lVar5;
          *(undefined4 *)((longlong)plVar8 + 4) = uVar1;
          *(int *)(plVar8 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uVar2;
          FUN_147ef2104((int)lVar5,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = (int)plVar8[4];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 147ef2104 FUN_147ef2104 body=114 status=ok
// SIG undefined FUN_147ef2104(void)

void FUN_147ef2104(longlong *param_1,int param_2)

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



// FUNCTION 147ef2176 FUN_147ef2176 body=474 status=ok
// SIG undefined FUN_147ef2176(void)

void FUN_147ef2176(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x28);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x24 + lVar5 * 0x28) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x20 + lVar5 * 0x28) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ef2352 FUN_147ef2352 body=132 status=ok
// SIG undefined FUN_147ef2352(void)

void FUN_147ef2352(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x28) == param_2) {
          FUN_147ef23d6(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147ef23d6 FUN_147ef23d6 body=87 status=ok
// SIG undefined FUN_147ef23d6(void)

void FUN_147ef23d6(longlong *param_1,int param_2)

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
  FUN_147ef2104();
  return;
}



// FUNCTION 147ef242e FUN_147ef242e body=29 status=ok
// SIG undefined FUN_147ef242e(void)

undefined8 FUN_147ef242e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147ef2466 FUN_147ef2466 body=29 status=ok
// SIG undefined FUN_147ef2466(void)

bool FUN_147ef2466(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 147ef2484 FUN_147ef2484 body=26 status=ok
// SIG undefined FUN_147ef2484(void)

bool FUN_147ef2484(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 147ef249e FUN_147ef249e body=24 status=ok
// SIG undefined FUN_147ef249e(void)

bool FUN_147ef249e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 147ef24b6 FUN_147ef24b6 body=93 status=ok
// SIG undefined FUN_147ef24b6(void)

void FUN_147ef24b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac15670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ef2514 FUN_147ef2514 body=93 status=ok
// SIG undefined FUN_147ef2514(void)

void FUN_147ef2514(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ac15670;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 147ef2572 FUN_147ef2572 body=126 status=ok
// SIG undefined FUN_147ef2572(void)

void FUN_147ef2572(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ac15670;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147ef25e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147ef25f0 FUN_147ef25f0 body=35 status=ok
// SIG undefined FUN_147ef25f0(void)

void FUN_147ef25f0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147ef260f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 147ef2614 FUN_147ef2614 body=130 status=ok
// SIG undefined FUN_147ef2614(void)

bool FUN_147ef2614(longlong param_1)

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
    (**(code **)(param_1 + 0x20))(lVar2);
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



// FUNCTION 147ef269c FUN_147ef269c body=143 status=ok
// SIG undefined FUN_147ef269c(void)

longlong * FUN_147ef269c(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = FUN_144a7cbb2();
    if (((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) != lVar1 + 0x30)) ||
       (param_3 = *(longlong *)(param_3 + 0x3c0), param_3 != 0)) {
      lVar1 = FUN_14104c5c4();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
        lVar1 = *(longlong *)(param_3 + 0x498);
        *param_2 = lVar1;
        if (DAT_14c950c29 != '\x01') {
          return param_2;
        }
        if (lVar1 == 0) {
          return param_2;
        }
        FUN_1456cec3c();
        return param_2;
      }
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 147ef2730 FUN_147ef2730 body=44 status=ok
// SIG undefined FUN_147ef2730(void)

void FUN_147ef2730(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147e8be22(*(undefined8 *)(param_1 + 0x3c0));
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ef2784 FUN_147ef2784 body=156 status=ok
// SIG undefined FUN_147ef2784(void)

void FUN_147ef2784(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ef2822(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef2822 FUN_147ef2822 body=136 status=ok
// SIG undefined FUN_147ef2822(void)

void FUN_147ef2822(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (longlong *)FUN_147ecd24c(param_2);
  if (plVar1 == (longlong *)0x0) {
    lVar2 = FUN_144a7cbb2();
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
      return;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) != lVar2 + 0x30) {
      return;
    }
    if (*(longlong *)(param_2 + 0x3c0) == 0) {
      return;
    }
    plVar1 = (longlong *)FUN_147ecd24c();
    if (plVar1 == (longlong *)0x0) {
      return;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x3c0) + 0x160;
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    lVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000147ef286f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x510))(plVar1,lVar2,*(code **)(*plVar1 + 0x510));
  return;
}



// FUNCTION 147ef28ae FUN_147ef28ae body=162 status=ok
// SIG undefined FUN_147ef28ae(void)

void FUN_147ef28ae(longlong param_1,longlong param_2)

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
  FUN_147e8bb2c(*(undefined8 *)(param_1 + 0x3c0),local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef295c FUN_147ef295c body=258 status=ok
// SIG undefined FUN_147ef295c(void)

void FUN_147ef295c(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_14585dbdc();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      lVar1 = *(longlong *)(param_3 + 0xa8);
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        lVar2 = FUN_14490fee6();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          lVar1 = *(longlong *)(lVar1 + 0x3d0);
        }
      }
      local_40 = *param_4;
      uStack_3c = param_4[1];
      uStack_38 = param_4[2];
      uStack_34 = param_4[3];
      local_30 = *(undefined8 *)(param_4 + 4);
      local_48 = lVar1;
      uVar3 = FUN_14477b072(param_1,DAT_14cb20418);
      (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_48);
      local_40 = *param_4;
      uStack_3c = param_4[1];
      uStack_38 = param_4[2];
      uStack_34 = param_4[3];
      local_30 = *(undefined8 *)(param_4 + 4);
      local_48 = lVar1;
      FUN_1447cd2ec(param_1 + 0x7a,&local_48);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef2a60 FUN_147ef2a60 body=48 status=ok
// SIG undefined FUN_147ef2a60(void)

void FUN_147ef2a60(longlong param_1)

{
  FUN_140206818();
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FUN_146014efc(*(longlong *)(param_1 + 0x3c0),*(undefined1 *)(param_1 + 0x3c8));
    return;
  }
  return;
}



// FUNCTION 147ef2a90 FUN_147ef2a90 body=64 status=ok
// SIG undefined FUN_147ef2a90(void)

void FUN_147ef2a90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1401b2056();
  if ((longlong)*(int *)(param_1 + 0x3a8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x3a0);
    lVar2 = (longlong)*(int *)(param_1 + 0x3a8) * 0x70;
    do {
      FUN_1478cb2e4(lVar1,0);
      lVar1 = lVar1 + 0x70;
      lVar2 = lVar2 + -0x70;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 147ef2ad0 FUN_147ef2ad0 body=64 status=ok
// SIG undefined FUN_147ef2ad0(void)

void FUN_147ef2ad0(longlong param_1,longlong param_2)

{
  FUN_143840671(param_2 + 0x88,param_1 + -0x398,param_1 + 8);
  FUN_143840712(param_2 + 0x88,param_1 + -0x398,param_1 + 0x18);
  return;
}



// FUNCTION 147ef2b10 FUN_147ef2b10 body=43 status=ok
// SIG undefined FUN_147ef2b10(void)

undefined8 FUN_147ef2b10(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x398) + 0x520))(param_1 + -0x398,param_2,0,0);
  return param_2;
}



// FUNCTION 147ef2b54 FUN_147ef2b54 body=311 status=ok
// SIG undefined FUN_147ef2b54(void)

byte FUN_147ef2b54(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined3 uStack_78;
  undefined4 uStack_75;
  undefined4 uStack_71;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1478cd520(param_2,param_1 + 0x10);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x460))();
    if (cVar5 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x480))
                (*(longlong **)(param_1 + 0x30),&local_98);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_145be6626(param_2,iVar3);
      }
      lVar4 = *param_2;
      lVar6 = (longlong)iVar3 * 0x70;
      lVar1 = lVar4 + lVar6;
      puVar2 = (undefined4 *)(lVar4 + 0x1b + lVar6);
      *puVar2 = CONCAT31((undefined3)uStack_7c,uStack_80._3_1_);
      puVar2[1] = CONCAT31(uStack_78,uStack_7c._3_1_);
      puVar2[2] = uStack_75;
      puVar2[3] = uStack_71;
      puVar2 = (undefined4 *)(lVar4 + 0x10 + lVar6);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      puVar2 = (undefined4 *)(lVar4 + lVar6);
      *puVar2 = local_98;
      puVar2[1] = uStack_94;
      puVar2[2] = uStack_90;
      puVar2[3] = uStack_8c;
      *(longlong *)(lVar4 + 0x30 + lVar6) = local_68;
      if ((local_68 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      *(undefined8 *)(lVar1 + 0x38) = local_60;
      *(undefined4 *)(lVar1 + 0x40) = local_58;
      *(undefined4 *)(lVar1 + 0x44) = uStack_54;
      *(undefined4 *)(lVar1 + 0x48) = uStack_50;
      *(undefined4 *)(lVar1 + 0x4c) = uStack_4c;
      *(undefined8 *)(lVar1 + 0x50) = local_48;
      *(undefined8 *)(lVar1 + 0x58) = uStack_40;
      *(undefined8 *)(lVar1 + 0x60) = local_38;
      *(undefined8 *)(lVar1 + 0x68) = uStack_30;
      bVar7 = 1;
      goto LAB_147ef2c46;
    }
  }
  bVar7 = 0;
LAB_147ef2c46:
  FUN_1478cd57c(param_3,param_1 + 0x20);
  bVar8 = 1;
  if (*(int *)(param_1 + 0x18) < 1) {
    bVar8 = bVar7 | 0 < *(int *)(param_1 + 0x28);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef2c8c FUN_147ef2c8c body=1089 status=ok
// SIG undefined FUN_147ef2c8c(void)

double * FUN_147ef2c8c(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = -10.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 10.0;
  *(undefined1 *)(param_2 + 6) = 1;
  iVar4 = *(int *)(param_1 + 0x3a8);
  if ((longlong)iVar4 < 1) {
    uVar8 = 0;
    uVar9 = 0xc0240000;
    dVar10 = 0.0;
    dVar11 = 10.0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar14 = 0.0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x3a0);
    uVar8 = 0;
    uVar9 = 0xc0240000;
    dVar10 = 0.0;
    dVar11 = 10.0;
    lVar7 = 0;
    dVar12 = 0.0;
    dVar13 = 0.0;
    dVar14 = 0.0;
    do {
      dVar1 = *(double *)(lVar5 + 0x40 + lVar7);
      dVar2 = *(double *)(lVar5 + 0x48 + lVar7);
      if (dVar1 <= dVar14) {
        dVar14 = dVar1;
      }
      if (dVar2 <= dVar13) {
        dVar13 = dVar2;
      }
      dVar3 = *(double *)(lVar5 + 0x50 + lVar7);
      if (dVar3 <= (double)CONCAT44(uVar9,uVar8)) {
        uVar8 = SUB84(dVar3,0);
        uVar9 = (int)((ulonglong)dVar3 >> 0x20);
      }
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      if (dVar10 <= dVar2) {
        dVar10 = dVar2;
      }
      if (dVar11 <= dVar3) {
        dVar11 = dVar3;
      }
      dVar1 = *(double *)(lVar5 + 0x58 + lVar7);
      if (dVar1 <= dVar14) {
        dVar14 = dVar1;
      }
      *param_2 = dVar14;
      dVar2 = *(double *)(lVar5 + 0x60 + lVar7);
      if (dVar2 <= dVar13) {
        dVar13 = dVar2;
      }
      param_2[1] = dVar13;
      dVar3 = *(double *)(lVar5 + 0x68 + lVar7);
      if (dVar3 <= (double)CONCAT44(uVar9,uVar8)) {
        uVar8 = SUB84(dVar3,0);
        uVar9 = (int)((ulonglong)dVar3 >> 0x20);
      }
      param_2[2] = (double)CONCAT44(uVar9,uVar8);
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      param_2[3] = dVar12;
      if (dVar10 <= dVar2) {
        dVar10 = dVar2;
      }
      param_2[4] = dVar10;
      if (dVar11 <= dVar3) {
        dVar11 = dVar3;
      }
      param_2[5] = dVar11;
      lVar7 = lVar7 + 0x70;
    } while ((longlong)iVar4 * 0x70 - lVar7 != 0);
  }
  iVar4 = *(int *)(param_1 + 0x3b8);
  if (0 < (longlong)iVar4) {
    lVar5 = *(longlong *)(param_1 + 0x3b0);
    lVar7 = 0;
    do {
      dVar1 = *(double *)(lVar5 + 0x40 + lVar7);
      dVar2 = *(double *)(lVar5 + 0x48 + lVar7);
      if (dVar1 <= dVar14) {
        dVar14 = dVar1;
      }
      if (dVar2 <= dVar13) {
        dVar13 = dVar2;
      }
      dVar3 = *(double *)(lVar5 + 0x50 + lVar7);
      if (dVar3 <= (double)CONCAT44(uVar9,uVar8)) {
        uVar8 = SUB84(dVar3,0);
        uVar9 = (int)((ulonglong)dVar3 >> 0x20);
      }
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      if (dVar10 <= dVar2) {
        dVar10 = dVar2;
      }
      if (dVar11 <= dVar3) {
        dVar11 = dVar3;
      }
      dVar1 = *(double *)(lVar5 + 0x58 + lVar7);
      if (dVar1 <= dVar14) {
        dVar14 = dVar1;
      }
      dVar2 = *(double *)(lVar5 + 0x60 + lVar7);
      if (dVar2 <= dVar13) {
        dVar13 = dVar2;
      }
      dVar3 = *(double *)(lVar5 + 0x68 + lVar7);
      if (dVar3 <= (double)CONCAT44(uVar9,uVar8)) {
        uVar8 = SUB84(dVar3,0);
        uVar9 = (int)((ulonglong)dVar3 >> 0x20);
      }
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      if (dVar10 <= dVar2) {
        dVar10 = dVar2;
      }
      if (dVar11 <= dVar3) {
        dVar11 = dVar3;
      }
      dVar1 = *(double *)(lVar5 + 0x70 + lVar7);
      if (dVar1 <= dVar14) {
        dVar14 = dVar1;
      }
      dVar2 = *(double *)(lVar5 + 0x78 + lVar7);
      if (dVar2 <= dVar13) {
        dVar13 = dVar2;
      }
      dVar3 = *(double *)(lVar5 + 0x80 + lVar7);
      if (dVar3 <= (double)CONCAT44(uVar9,uVar8)) {
        uVar8 = SUB84(dVar3,0);
        uVar9 = (int)((ulonglong)dVar3 >> 0x20);
      }
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      if (dVar10 <= dVar2) {
        dVar10 = dVar2;
      }
      if (dVar11 <= dVar3) {
        dVar11 = dVar3;
      }
      dVar1 = *(double *)(lVar5 + 0x88 + lVar7);
      if (dVar1 <= dVar14) {
        dVar14 = dVar1;
      }
      *param_2 = dVar14;
      dVar2 = *(double *)(lVar5 + 0x90 + lVar7);
      if (dVar2 <= dVar13) {
        dVar13 = dVar2;
      }
      param_2[1] = dVar13;
      dVar3 = *(double *)(lVar5 + 0x98 + lVar7);
      if (dVar3 <= (double)CONCAT44(uVar9,uVar8)) {
        uVar8 = SUB84(dVar3,0);
        uVar9 = (int)((ulonglong)dVar3 >> 0x20);
      }
      param_2[2] = (double)CONCAT44(uVar9,uVar8);
      if (dVar12 <= dVar1) {
        dVar12 = dVar1;
      }
      param_2[3] = dVar12;
      if (dVar10 <= dVar2) {
        dVar10 = dVar2;
      }
      param_2[4] = dVar10;
      if (dVar11 <= dVar3) {
        dVar11 = dVar3;
      }
      param_2[5] = dVar11;
      lVar7 = lVar7 + 0xa0;
    } while ((longlong)iVar4 * 0xa0 != lVar7);
  }
  FUN_144a1c3a2(param_2,&local_88,*(longlong *)(param_1 + 0x1c8) + 0x240);
  param_2[6] = local_58;
  param_2[4] = local_68;
  param_2[5] = dStack_60;
  param_2[2] = local_78;
  param_2[3] = dStack_70;
  *(undefined4 *)param_2 = local_88;
  *(undefined4 *)((longlong)param_2 + 4) = uStack_84;
  *(undefined4 *)(param_2 + 1) = uStack_80;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_7c;
  if ((*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0) &&
     (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x460))(), cVar6 != '\0')) {
    FUN_147e8b87a(*(undefined8 *)(param_1 + 0x3c0),&local_88);
    if (*(char *)(param_2 + 6) == '\0') {
      param_2[5] = local_78;
      param_2[3] = (double)CONCAT44(uStack_84,local_88);
      param_2[4] = (double)CONCAT44(uStack_7c,uStack_80);
      param_2[2] = local_78;
      *(undefined4 *)param_2 = local_88;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_84;
      *(undefined4 *)(param_2 + 1) = uStack_80;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_7c;
      *(undefined1 *)(param_2 + 6) = 1;
    }
    else {
      dVar10 = (double)CONCAT44(uStack_84,local_88);
      dVar11 = *param_2;
      if (dVar10 <= *param_2) {
        dVar11 = dVar10;
      }
      *param_2 = dVar11;
      dVar11 = (double)CONCAT44(uStack_7c,uStack_80);
      dVar12 = param_2[1];
      if (dVar11 <= param_2[1]) {
        dVar12 = dVar11;
      }
      param_2[1] = dVar12;
      dVar12 = param_2[2];
      if (local_78 <= param_2[2]) {
        dVar12 = local_78;
      }
      param_2[2] = dVar12;
      dVar12 = param_2[3];
      if (param_2[3] <= dVar10) {
        dVar12 = dVar10;
      }
      param_2[3] = dVar12;
      dVar10 = param_2[4];
      uVar8 = SUB84(dVar10,0);
      uVar9 = (int)((ulonglong)dVar10 >> 0x20);
      if (dVar10 <= dVar11) {
        uVar8 = uStack_80;
        uVar9 = uStack_7c;
      }
      param_2[4] = (double)CONCAT44(uVar9,uVar8);
      dVar10 = param_2[5];
      uVar8 = SUB84(dVar10,0);
      uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (dVar10 <= local_78) {
        uVar8 = SUB84(local_78,0);
        uVar9 = (undefined4)((ulonglong)local_78 >> 0x20);
      }
      param_2[5] = (double)CONCAT44(uVar9,uVar8);
    }
    FUN_147e8b9b2(*(undefined8 *)(param_1 + 0x3c0),&local_88);
    if (*(char *)(param_2 + 6) == '\0') {
      param_2[5] = local_78;
      param_2[3] = (double)CONCAT44(uStack_84,local_88);
      param_2[4] = (double)CONCAT44(uStack_7c,uStack_80);
      param_2[2] = local_78;
      *(undefined4 *)param_2 = local_88;
      *(undefined4 *)((longlong)param_2 + 4) = uStack_84;
      *(undefined4 *)(param_2 + 1) = uStack_80;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_7c;
      *(undefined1 *)(param_2 + 6) = 1;
    }
    else {
      dVar10 = (double)CONCAT44(uStack_84,local_88);
      dVar11 = *param_2;
      if (dVar10 <= *param_2) {
        dVar11 = dVar10;
      }
      *param_2 = dVar11;
      dVar11 = (double)CONCAT44(uStack_7c,uStack_80);
      dVar12 = param_2[1];
      if (dVar11 <= param_2[1]) {
        dVar12 = dVar11;
      }
      param_2[1] = dVar12;
      dVar12 = param_2[2];
      if (local_78 <= param_2[2]) {
        dVar12 = local_78;
      }
      param_2[2] = dVar12;
      dVar12 = param_2[3];
      if (param_2[3] <= dVar10) {
        dVar12 = dVar10;
      }
      param_2[3] = dVar12;
      dVar10 = param_2[4];
      uVar8 = SUB84(dVar10,0);
      uVar9 = (int)((ulonglong)dVar10 >> 0x20);
      if (dVar10 <= dVar11) {
        uVar8 = uStack_80;
        uVar9 = uStack_7c;
      }
      param_2[4] = (double)CONCAT44(uVar9,uVar8);
      dVar10 = param_2[5];
      uVar8 = SUB84(dVar10,0);
      uVar9 = (undefined4)((ulonglong)dVar10 >> 0x20);
      if (dVar10 <= local_78) {
        uVar8 = SUB84(local_78,0);
        uVar9 = (undefined4)((ulonglong)local_78 >> 0x20);
      }
      param_2[5] = (double)CONCAT44(uVar9,uVar8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147ef30ce FUN_147ef30ce body=462 status=ok
// SIG undefined FUN_147ef30ce(void)

undefined4 * FUN_147ef30ce(undefined4 *param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x12) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x14) = 0x47efffffe0000000;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  dVar1 = (double)DAT_14c7623b4;
  local_68 = (double)((float)((longlong)ROUND(param_2[2] / dVar1 + param_2[2] / dVar1 + 0.5) >> 1) *
                     DAT_14c7623b4);
  local_70 = (double)((float)((longlong)ROUND(param_2[1] / dVar1 + param_2[1] / dVar1 + 0.5) >> 1) *
                     DAT_14c7623b4);
  local_78 = (double)((float)((longlong)ROUND(*param_2 / dVar1 + *param_2 / dVar1 + 0.5) >> 1) *
                     DAT_14c7623b4);
  dVar2 = (double)param_3;
  local_50 = local_68 + 0.0;
  local_58 = dVar2 + local_70;
  local_60 = dVar2 + local_78;
  local_70 = local_70 - dVar2;
  local_78 = local_78 - dVar2;
  local_48 = 1;
  FUN_147ef329e(param_1);
  param_1[0x29] = (int)(longlong)(*(double *)(param_1 + 0x10) / dVar1);
  param_1[0x2a] = (int)(longlong)(*(double *)(param_1 + 0x12) / dVar1);
  param_1[0x2b] = (int)(longlong)(*(double *)(param_1 + 0x14) / dVar1);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef329e FUN_147ef329e body=405 status=ok
// SIG undefined FUN_147ef329e(void)

void FUN_147ef329e(float *param_1,float param_2,double *param_3)

{
  double dVar1;
  float fVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if ((0.0 < param_2) && (*(char *)(param_3 + 6) != '\0')) {
    *param_1 = param_2;
    dVar7 = param_3[5];
    dVar1 = param_3[2];
    dVar11 = (param_3[4] - param_3[1]) / (double)param_2;
    dVar9 = (param_3[3] - *param_3) / (double)param_2;
    uVar6 = -((ulonglong)(longlong)ROUND(-0.5 - (dVar9 + dVar9)) >> 1);
    uVar3 = uVar6 & 0xffffffff;
    uVar4 = uVar3 + ((longlong)ROUND(-0.5 - (dVar11 + dVar11)) & 0xfffffffffffffffeU) * -0x80000000;
    *(ulonglong *)(param_1 + 0x1c) = uVar4;
    dVar12 = (double)((float)(uVar4 >> 0x20) * param_2);
    dVar8 = (double)((float)uVar3 * param_2);
    *(double *)(param_1 + 0x16) = dVar8;
    *(double *)(param_1 + 0x18) = dVar12;
    *(double *)(param_1 + 0x1a) = dVar7 - dVar1;
    dVar10 = (param_3[2] + param_3[5]) * 0.5;
    dVar9 = *param_3;
    dVar11 = param_3[1];
    *(double *)(param_1 + 0x10) = dVar9;
    *(double *)(param_1 + 0x12) = dVar11;
    *(double *)(param_1 + 0x14) = dVar10;
    dVar7 = (dVar7 - dVar1) * 0.5;
    *(double *)(param_1 + 2) = dVar9;
    *(double *)(param_1 + 4) = dVar11;
    *(double *)(param_1 + 6) = dVar10 - dVar7;
    *(double *)(param_1 + 8) = dVar8 + dVar9;
    *(double *)(param_1 + 10) = dVar12 + dVar11;
    *(double *)(param_1 + 0xc) = dVar7 + dVar10;
    uVar5 = (int)uVar6 * (int)(uVar4 >> 0x20);
    if (0x7ffffffe < uVar5) {
      uVar5 = 0x7fffffff;
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
    fVar2 = param_1[0x20];
    param_1[0x20] = (float)((int)fVar2 + uVar5);
    if ((uint)((int)param_1[0x21] - (int)fVar2) < uVar5) {
      FUN_1447403be(param_1 + 0x1e);
    }
    memset((void *)((longlong)(int)fVar2 + *(longlong *)(param_1 + 0x1e)),0,(ulonglong)uVar5);
    return;
  }
  return;
}



// FUNCTION 147ef3434 FUN_147ef3434 body=492 status=ok
// SIG undefined FUN_147ef3434(void)

undefined4 * FUN_147ef3434(undefined4 *param_1,double *param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x12) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x14) = 0x47efffffe0000000;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  dVar1 = (double)DAT_14c7623b4;
  local_78 = (double)((float)((longlong)ROUND(param_2[2] / dVar1 + param_2[2] / dVar1 + 0.5) >> 1) *
                     DAT_14c7623b4);
  local_80 = (double)((float)((longlong)ROUND(param_2[1] / dVar1 + param_2[1] / dVar1 + 0.5) >> 1) *
                     DAT_14c7623b4);
  local_88 = (double)((float)((longlong)ROUND(*param_2 / dVar1 + *param_2 / dVar1 + 0.5) >> 1) *
                     DAT_14c7623b4);
  local_60 = local_78 + 0.0;
  local_68 = param_3[1] + local_80;
  local_70 = *param_3 + local_88;
  local_80 = local_80 - param_3[1];
  local_88 = local_88 - *param_3;
  local_58 = 1;
  FUN_147ef329e(param_1);
  param_1[0x29] = (int)(longlong)(*(double *)(param_1 + 0x10) / dVar1);
  param_1[0x2a] = (int)(longlong)(*(double *)(param_1 + 0x12) / dVar1);
  param_1[0x2b] = (int)(longlong)(*(double *)(param_1 + 0x14) / dVar1);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef3622 FUN_147ef3622 body=597 status=ok
// SIG undefined FUN_147ef3622(void)

undefined4 * FUN_147ef3622(undefined4 *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  bool bVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x12) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x14) = 0x47efffffe0000000;
  param_1[0x28] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  uVar4 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar4 != 0) {
    local_48 = 0.0;
    dStack_40 = 0.0;
    local_58 = 0.0;
    dStack_50 = 0.0;
    local_68 = 0.0;
    dStack_60 = 0.0;
    local_38 = (double)((ulonglong)local_38 & 0xffffffffffffff00);
    if (0 < (int)uVar4) {
      lVar5 = *param_2;
      lVar7 = 0;
      do {
        cVar3 = *(char *)(lVar5 + 0x38 + lVar7);
        if ((local_38._0_1_ == '\0') || (cVar3 == '\0')) {
          if (cVar3 != '\0') {
            pdVar1 = (double *)(lVar5 + 8 + lVar7);
            local_38 = pdVar1[6];
            local_68 = *pdVar1;
            dStack_60 = pdVar1[1];
            local_58 = pdVar1[2];
            dStack_50 = pdVar1[3];
            local_48 = pdVar1[4];
            dStack_40 = pdVar1[5];
          }
        }
        else {
          uVar13 = SUB84(dStack_60,0);
          uVar14 = (undefined4)((ulonglong)dStack_60 >> 0x20);
          dVar2 = *(double *)(lVar5 + 8 + lVar7);
          if (dVar2 <= local_68) {
            local_68 = dVar2;
          }
          dVar2 = *(double *)(lVar5 + 0x10 + lVar7);
          if (dVar2 <= dStack_60) {
            uVar13 = SUB84(dVar2,0);
            uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
          }
          dStack_60 = (double)CONCAT44(uVar14,uVar13);
          dVar2 = *(double *)(lVar5 + 0x18 + lVar7);
          if (dVar2 <= local_58) {
            local_58 = dVar2;
          }
          dVar2 = *(double *)(lVar5 + 0x20 + lVar7);
          if (dStack_50 <= dVar2) {
            dStack_50 = dVar2;
          }
          dVar2 = *(double *)(lVar5 + 0x28 + lVar7);
          if (local_48 <= dVar2) {
            local_48 = dVar2;
          }
          dVar2 = *(double *)(lVar5 + 0x30 + lVar7);
          if (dStack_40 <= dVar2) {
            dStack_40 = dVar2;
          }
        }
        lVar7 = lVar7 + 0xb0;
      } while ((ulonglong)uVar4 * 0xb0 - lVar7 != 0);
    }
    FUN_147ef329e(param_1,DAT_14c7623b4);
    if (0 < (int)param_1[0x20]) {
      uVar6 = 0;
      do {
        bVar12 = false;
        if (0 < (longlong)(int)param_2[1]) {
          piVar9 = (int *)(*param_2 + 0x70);
          uVar10 = 1;
          bVar12 = false;
          do {
            iVar8 = ((int)((uVar6 & 0xffffffff) / (ulonglong)(uint)param_1[0x1d]) + param_1[0x29]) -
                    piVar9[0xd];
            if ((((-1 < iVar8) && (iVar8 < *piVar9)) &&
                (iVar11 = ((int)((uVar6 & 0xffffffff) % (ulonglong)(uint)param_1[0x1d]) +
                          param_1[0x2a]) - piVar9[0xe], -1 < iVar11)) &&
               ((iVar11 < piVar9[1] && (iVar11 = piVar9[1] * iVar8 + iVar11, iVar11 != -1)))) {
              bVar12 = *(char *)(*(longlong *)(piVar9 + 2) + (longlong)iVar11) != '\0';
            }
            if ((ulonglong)(longlong)(int)param_2[1] <= uVar10) break;
            uVar10 = uVar10 + 1;
            piVar9 = piVar9 + 0x2c;
          } while (!bVar12);
        }
        *(bool *)(*(longlong *)(param_1 + 0x1e) + uVar6) = bVar12;
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)(int)param_1[0x20]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147ef3878 FUN_147ef3878 body=1672 status=ok
// SIG undefined FUN_147ef3878(void)

void FUN_147ef3878(float *param_1,double *param_2,double *param_3,double *param_4)

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
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  float fVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar7 = *param_4;
  dVar8 = param_4[2];
  lVar27 = -(ulonglong)(9.99999993922529e-09 < ABS(param_4[1] - DAT_14c8463d8));
  auVar14._8_4_ = (int)lVar27;
  auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar7 - DAT_14c8463d0));
  auVar14._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
  uVar16 = movmskpd((int)local_90,auVar14);
  lVar27 = -(ulonglong)(9.99999993922529e-09 < ABS(param_4[3] - DAT_14c8463e8));
  auVar13._8_4_ = (int)lVar27;
  auVar13._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar8 - DAT_14c8463e0));
  auVar13._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
  iVar18 = movmskpd((int)param_1,auVar13);
  uVar19 = iVar18 << 2 | uVar16;
  if (uVar19 != 0) {
    auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + param_4[1]));
    auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + dVar7));
    iVar18 = movmskpd(uVar16,auVar12);
    lVar27 = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + param_4[3]));
    auVar10._8_4_ = (int)lVar27;
    auVar10._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + dVar8));
    auVar10._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
    uVar16 = movmskpd(uVar19,auVar10);
    if ((uVar16 & 0x3fffffff) != 0 || iVar18 != 0) {
      dVar1 = param_4[1];
      dVar2 = param_4[3];
      local_a8 = (double *)0x0;
      dVar3 = *param_3;
      dVar4 = param_3[1];
      dVar11 = dVar8 * dVar3 - param_3[2] * dVar7;
      dVar11 = dVar11 + dVar11;
      dVar29 = dVar1 * param_3[2] - dVar4 * dVar8;
      dVar29 = dVar29 + dVar29;
      dVar28 = dVar7 * dVar4 - dVar3 * dVar1;
      dVar28 = dVar28 + dVar28;
      dVar5 = param_2[1];
      dVar6 = *param_2;
      uStack_a0 = 1;
      uStack_9c = 0;
      FUN_14489624a(&local_a8,0);
      uVar16 = uStack_a0;
      *local_a8 = (dVar28 * dVar1 - dVar11 * dVar8) + dVar2 * dVar29 + dVar3 + dVar6;
      local_a8[1] = (dVar29 * dVar8 - dVar7 * dVar28) + dVar2 * dVar11 + dVar4 + dVar5;
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar1 = param_4[2];
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar29 = dVar3 * param_3[2] - dVar8 * dVar1;
      dVar29 = dVar29 + dVar29;
      dVar4 = param_4[3];
      dVar11 = dVar2 * dVar8 + dVar7 * dVar3;
      dVar28 = -dVar7 * dVar1 - param_3[2] * dVar2;
      dVar11 = dVar11 + dVar11;
      dVar28 = dVar28 + dVar28;
      dVar5 = param_2[1];
      dVar6 = *param_2;
      lVar27 = (longlong)(int)uStack_a0;
      uStack_a0 = uStack_a0 + 1;
      if (uStack_9c < uStack_a0) {
        FUN_14489624a(&local_a8,uVar16);
      }
      uVar16 = uStack_a0;
      local_a8[lVar27 * 2] = (dVar11 * dVar3 - dVar28 * dVar1) + (dVar29 * dVar4 - dVar7) + dVar6;
      local_a8[lVar27 * 2 + 1] = (dVar1 * dVar29 - dVar2 * dVar11) + dVar4 * dVar28 + dVar8 + dVar5;
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar1 = param_4[2];
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar28 = dVar8 * dVar1 + dVar3 * param_3[2];
      dVar28 = dVar28 + dVar28;
      dVar4 = param_4[3];
      dVar11 = dVar7 * dVar3 - dVar2 * dVar8;
      dVar29 = -dVar7 * dVar1 - param_3[2] * dVar2;
      dVar11 = dVar11 + dVar11;
      dVar29 = dVar29 + dVar29;
      dVar5 = param_2[1];
      dVar6 = *param_2;
      lVar27 = (longlong)(int)uStack_a0;
      uStack_a0 = uStack_a0 + 1;
      if (uStack_9c < uStack_a0) {
        FUN_14489624a(&local_a8,uVar16);
      }
      uVar16 = uStack_a0;
      local_a8[lVar27 * 2] = (dVar11 * dVar3 - dVar29 * dVar1) + (dVar28 * dVar4 - dVar7) + dVar6;
      local_a8[lVar27 * 2 + 1] =
           (dVar1 * dVar28 - dVar2 * dVar11) + (dVar4 * dVar29 - dVar8) + dVar5;
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar1 = param_4[2];
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar29 = dVar8 * dVar1 + dVar3 * param_3[2];
      dVar29 = dVar29 + dVar29;
      dVar4 = param_4[3];
      dVar11 = -dVar8 * dVar2 - dVar7 * dVar3;
      dVar28 = dVar1 * dVar7 - param_3[2] * dVar2;
      dVar11 = dVar11 + dVar11;
      dVar28 = dVar28 + dVar28;
      dVar5 = param_2[1];
      dVar6 = *param_2;
      lVar27 = (longlong)(int)uStack_a0;
      uStack_a0 = uStack_a0 + 1;
      if (uStack_9c < uStack_a0) {
        FUN_14489624a(&local_a8,uVar16);
      }
      local_a8[lVar27 * 2] = (dVar11 * dVar3 - dVar28 * dVar1) + dVar29 * dVar4 + dVar7 + dVar6;
      local_a8[lVar27 * 2 + 1] =
           (dVar1 * dVar29 - dVar2 * dVar11) + (dVar4 * dVar28 - dVar8) + dVar5;
      fVar20 = param_1[0x1c];
      if (0 < (int)fVar20) {
        fVar17 = param_1[0x1d];
        iVar18 = 0;
        do {
          if (0 < (int)fVar17) {
            iVar26 = 0;
            do {
              local_b0 = (double)(((float)iVar26 + 0.5) * *param_1) + *(double *)(param_1 + 0x12);
              local_b8 = (double)(*param_1 * ((float)iVar18 + 0.5)) + *(double *)(param_1 + 0x10);
              cVar15 = FUN_147ad8390(&local_b8,&local_a8);
              if (cVar15 != '\0') {
                *(undefined1 *)
                 (*(longlong *)(param_1 + 0x1e) + (longlong)((int)param_1[0x1d] * iVar18 + iVar26))
                     = 1;
              }
              iVar26 = iVar26 + 1;
              fVar17 = param_1[0x1d];
            } while (iVar26 < (int)fVar17);
            fVar20 = param_1[0x1c];
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)fVar20);
      }
      if (local_a8 != (double *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_147ef3eb6;
    }
  }
  dVar7 = (double)*param_1;
  iVar26 = (int)param_1[0x1d] + -1;
  iVar18 = (int)(longlong)(((param_2[1] - param_3[1]) - *(double *)(param_1 + 0x12)) / dVar7);
  if (iVar26 <= iVar18) {
    iVar18 = iVar26;
  }
  iVar23 = 0;
  if (0 < iVar18) {
    iVar23 = iVar18;
  }
  iVar24 = (int)param_1[0x1c] + -1;
  iVar25 = (int)(longlong)(((*param_2 - *param_3) - *(double *)(param_1 + 0x10)) / dVar7);
  if (iVar24 <= iVar25) {
    iVar25 = iVar24;
  }
  iVar22 = (int)(longlong)(((param_2[1] + param_3[1]) - *(double *)(param_1 + 0x12)) / dVar7);
  if (iVar22 < iVar26) {
    iVar26 = iVar22;
  }
  iVar22 = (int)(longlong)(((*param_2 + *param_3) - *(double *)(param_1 + 0x10)) / dVar7);
  if (iVar22 < iVar24) {
    iVar24 = iVar22;
  }
  iVar22 = 0;
  if (0 < iVar24) {
    iVar22 = iVar24;
  }
  if (iVar25 <= iVar22) {
    iVar22 = 0;
    if (0 < iVar26) {
      iVar22 = iVar26;
    }
    iVar21 = 0;
    if (0 < iVar25) {
      iVar21 = iVar25;
    }
    do {
      iVar25 = iVar23;
      if (iVar18 <= iVar22) {
        do {
          *(undefined1 *)
           (*(longlong *)(param_1 + 0x1e) + (longlong)((int)param_1[0x1d] * iVar21 + iVar25)) = 1;
          bVar9 = iVar25 < iVar26;
          iVar25 = iVar25 + 1;
        } while (bVar9);
      }
      bVar9 = iVar21 < iVar24;
      iVar21 = iVar21 + 1;
    } while (bVar9);
  }
LAB_147ef3eb6:
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef3f02 FUN_147ef3f02 body=305 status=ok
// SIG undefined FUN_147ef3f02(void)

void FUN_147ef3f02(float *param_1,undefined8 *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  fVar6 = param_1[0x1c];
  if (0 < (int)fVar6) {
    fVar4 = param_1[0x1d];
    iVar3 = 0;
    do {
      if (0 < (int)fVar4) {
        fVar6 = *param_1;
        uVar7 = (undefined4)*param_2;
        uVar8 = (undefined4)((ulonglong)*param_2 >> 0x20);
        iVar5 = 0;
        do {
          if ((ABS((*(double *)(param_1 + 0x14) + 0.0) - (double)param_2[2]) < (double)param_4) &&
             (dVar1 = ((double)(((float)iVar5 + 0.5) * fVar6) + *(double *)(param_1 + 0x12)) -
                      (double)param_2[1],
             dVar2 = ((double)(((float)iVar3 + 0.5) * fVar6) + *(double *)(param_1 + 0x10)) -
                     (double)CONCAT44(uVar8,uVar7),
             dVar2 * dVar2 + dVar1 * dVar1 < (double)(param_3 * param_3))) {
            *(undefined1 *)(*(longlong *)(param_1 + 0x1e) + (longlong)((int)fVar4 * iVar3 + iVar5))
                 = 1;
            fVar4 = param_1[0x1d];
            fVar6 = *param_1;
            uVar7 = (undefined4)*param_2;
            uVar8 = (undefined4)((ulonglong)*param_2 >> 0x20);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)fVar4);
        fVar6 = param_1[0x1c];
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)fVar6);
  }
  return;
}



// FUNCTION 147ef4034 FUN_147ef4034 body=1697 status=ok
// SIG undefined FUN_147ef4034(void)

void FUN_147ef4034(float *param_1,longlong param_2,double *param_3,int param_4,longlong *param_5,
                  undefined4 *param_6)

{
  double dVar1;
  undefined8 uVar2;
  float fVar3;
  double *pdVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  double *pdVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  double *pdVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_128 [32];
  double *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  longlong local_f0;
  undefined1 local_e4 [4];
  undefined1 local_e0 [24];
  double local_c8;
  double dStack_c0;
  int local_a8;
  uint local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar1 = *(double *)(param_1 + 0x12);
  uVar24 = SUB84(dVar1,0);
  uVar25 = (undefined4)((ulonglong)dVar1 >> 0x20);
  fVar27 = *param_1;
  dVar28 = (double)fVar27;
  dVar26 = *(double *)(param_1 + 0x10);
  fVar8 = param_1[0x1d];
  local_a4 = (int)fVar8 - 1;
  uVar9 = (uint)(longlong)((param_3[1] - dVar1) / dVar28);
  if ((int)local_a4 <= (int)uVar9) {
    uVar9 = local_a4;
  }
  uVar22 = (ulonglong)uVar9;
  if ((int)uVar9 < 1) {
    uVar22 = 0;
  }
  iVar21 = (int)uVar22;
  fVar3 = param_1[0x1c];
  local_a8 = (int)fVar3 + -1;
  iVar18 = (int)(longlong)((*param_3 - dVar26) / dVar28);
  if (local_a8 <= iVar18) {
    iVar18 = local_a8;
  }
  if (iVar18 < 1) {
    iVar18 = 0;
  }
  local_94 = 0;
  lVar15 = (longlong)*(int *)(param_2 + 0x30);
  pdVar13 = (double *)(*(longlong *)(param_2 + 0x28) + -0x30 + lVar15 * 0x30);
  if (lVar15 < 1) {
    pdVar13 = (double *)&DAT_14a83cd78;
  }
  uVar9 = (uint)(longlong)((pdVar13[1] - dVar1) / dVar28);
  if ((int)uVar9 < (int)local_a4) {
    local_a4 = uVar9;
  }
  if ((int)local_a4 < 1) {
    local_a4 = 0;
  }
  iVar10 = (int)(longlong)((*pdVar13 - dVar26) / dVar28);
  if (iVar10 < local_a8) {
    local_a8 = iVar10;
  }
  if (local_a8 < 1) {
    local_a8 = 0;
  }
  local_a0 = 0;
  lVar16 = (longlong)param_4;
  lVar23 = lVar16 + 1;
  if (lVar16 + 1 <= lVar15) {
    lVar23 = lVar15;
  }
  pdVar13 = (double *)(param_1 + 2);
  pdVar19 = (double *)(lVar16 * 0x30 + *(longlong *)(param_2 + 0x28));
  do {
    pdVar4 = pdVar19;
    lVar17 = lVar16;
    pdVar19 = pdVar4 + 6;
    lVar16 = lVar23 + -1;
    local_9c = iVar18;
    local_98 = iVar21;
    if (lVar15 <= lVar17 + 1) goto LAB_147ef42cc;
    dVar1 = *pdVar19;
  } while (((((*pdVar13 <= dVar1 && dVar1 != *pdVar13) && (dVar1 < *(double *)(param_1 + 8))) &&
            (dVar1 = pdVar4[7],
            *(double *)(param_1 + 4) <= dVar1 && dVar1 != *(double *)(param_1 + 4))) &&
           ((dVar1 < *(double *)(param_1 + 10) &&
            (dVar1 = pdVar4[8],
            *(double *)(param_1 + 6) <= dVar1 && dVar1 != *(double *)(param_1 + 6))))) &&
          (lVar16 = lVar17 + 1, dVar1 < *(double *)(param_1 + 0xc)));
  local_f8 = local_e4;
  local_100 = local_e0;
  local_108 = &local_c8;
  local_f0 = param_2;
  FUN_1467f6da8(pdVar13,pdVar19,pdVar4,&DAT_14c8464e0);
  dVar1 = *(double *)(param_1 + 0x12);
  uVar24 = SUB84(dVar1,0);
  uVar25 = (undefined4)((ulonglong)dVar1 >> 0x20);
  fVar27 = *param_1;
  dVar26 = *(double *)(param_1 + 0x10);
  fVar8 = param_1[0x1d];
  uVar9 = (uint)(longlong)((dStack_c0 - dVar1) / (double)fVar27);
  local_a4 = (int)fVar8 - 1U;
  if ((int)uVar9 < (int)((int)fVar8 - 1U)) {
    local_a4 = uVar9;
  }
  if ((int)local_a4 < 1) {
    local_a4 = 0;
  }
  fVar3 = param_1[0x1c];
  iVar10 = (int)(longlong)((local_c8 - dVar26) / (double)fVar27);
  local_a8 = (int)fVar3 + -1;
  if (iVar10 < (int)fVar3 + -1) {
    local_a8 = iVar10;
  }
  param_2 = local_f0;
  lVar16 = lVar17;
  if (local_a8 < 1) {
    local_a8 = 0;
  }
LAB_147ef42cc:
  local_a0 = 0;
  if (((iVar18 < (int)fVar3) && (iVar21 < (int)fVar8)) &&
     ((iVar10 = (int)fVar8 * iVar18 + iVar21, iVar10 != -1 &&
      (*(char *)(*(longlong *)(param_1 + 0x1e) + (longlong)iVar10) == '\0')))) {
    bVar6 = false;
  }
  else {
    pdVar13 = (double *)&DAT_14a83cd78;
    if (0 < (longlong)*(int *)(param_2 + 0x30)) {
      pdVar13 = (double *)
                (*(longlong *)(param_2 + 0x28) + -0x30 + (longlong)*(int *)(param_2 + 0x30) * 0x30);
    }
    dVar29 = param_3[1] - pdVar13[1];
    dVar1 = *param_3 - *pdVar13;
    dVar28 = (param_3[2] - pdVar13[2]) * (param_3[2] - pdVar13[2]) + dVar1 * dVar1 + dVar29 * dVar29
    ;
    if (((dVar28 != 1.0) || (dVar30 = dVar29, dVar5 = dVar1, NAN(dVar28))) &&
       (dVar30 = DAT_14c8464e8, dVar5 = DAT_14c8464e0, 9.99999993922529e-09 <= dVar28)) {
      dVar30 = dVar29 * (1.0 / SQRT(dVar28));
      dVar5 = dVar1 * (1.0 / SQRT(dVar28));
    }
    iVar14 = 1;
    iVar10 = iVar18;
    do {
      uVar12 = (ulonglong)
               (((dVar30 * 150.0 * (double)iVar14 * 0.06666666666666667 + param_3[1]) -
                (double)CONCAT44(uVar25,uVar24)) / (double)fVar27);
      if ((int)((int)fVar8 - 1U) <= (int)uVar12) {
        uVar12 = (ulonglong)((int)fVar8 - 1U);
      }
      if ((int)uVar12 < 1) {
        uVar12 = 0;
      }
      iVar20 = (int)(longlong)
                    ((((double)iVar14 * dVar5 * 150.0 * 0.06666666666666667 + *param_3) - dVar26) /
                    (double)fVar27);
      if ((int)fVar3 + -1 <= iVar20) {
        iVar20 = (int)fVar3 + -1;
      }
      if (iVar20 < 1) {
        iVar20 = 0;
      }
      iVar11 = (int)uVar12;
      if ((iVar20 != iVar10) || (iVar11 != (int)uVar22)) {
        if (((iVar20 < (int)fVar3) &&
            ((iVar11 < (int)fVar8 && (iVar10 = iVar20 * (int)fVar8 + iVar11, iVar10 != -1)))) &&
           (*(char *)(*(longlong *)(param_1 + 0x1e) + (longlong)iVar10) == '\0')) {
          local_94 = 0;
          bVar6 = true;
          local_9c = iVar20;
          local_98 = iVar11;
          goto LAB_147ef4465;
        }
        uVar22 = uVar12 & 0xffffffff;
        iVar10 = iVar20;
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0xf);
    bVar6 = false;
  }
LAB_147ef4465:
  *param_6 = (int)lVar16;
  *(undefined4 *)(param_5 + 1) = 0;
  if (*(int *)((longlong)param_5 + 0xc) < 0) {
    FUN_1447a8aa0(param_5,0);
  }
  local_c8 = 0.0;
  dStack_c0 = 0.0;
  cVar7 = FUN_147ef46d6(param_1,&local_9c,&local_a8);
  if (cVar7 != '\0') {
    if (bVar6) {
      fVar27 = *param_1;
      dVar1 = *(double *)(param_1 + 0x12);
      dVar26 = *(double *)(param_1 + 0x10);
      uVar2 = *(undefined8 *)
               (*(longlong *)(param_1 + 0x22) + (longlong)(iVar18 * (int)param_1[0x1d] + iVar21) * 8
               );
      iVar10 = (int)param_5[1];
      lVar15 = (longlong)iVar10;
      *(uint *)(param_5 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
        FUN_1403e3958(param_5,iVar10);
      }
      lVar23 = *param_5;
      *(double *)(lVar23 + lVar15 * 0x18) = (double)(((float)iVar18 + 0.5) * fVar27) + dVar26;
      *(double *)(lVar23 + 8 + lVar15 * 0x18) = (double)(((float)iVar21 + 0.5) * fVar27) + dVar1;
      *(undefined8 *)(lVar23 + 0x10 + lVar15 * 0x18) = uVar2;
    }
    if (0 < dStack_c0._0_4_) {
      lVar15 = 4;
      lVar23 = 0;
      do {
        iVar18 = *(int *)((longlong)local_c8 + lVar15);
        iVar21 = *(int *)((longlong)local_c8 + -4 + lVar15);
        fVar27 = *param_1;
        dVar1 = *(double *)(param_1 + 0x12);
        dVar26 = *(double *)(param_1 + 0x10);
        uVar2 = *(undefined8 *)
                 (*(longlong *)(param_1 + 0x22) +
                 (longlong)(iVar21 * (int)param_1[0x1d] + iVar18) * 8);
        iVar10 = (int)param_5[1];
        lVar16 = (longlong)iVar10;
        *(uint *)(param_5 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar10 + 1U) {
          FUN_1403e3958(param_5,iVar10);
        }
        lVar17 = *param_5;
        *(double *)(lVar17 + lVar16 * 0x18) = (double)(((float)iVar21 + 0.5) * fVar27) + dVar26;
        *(double *)(lVar17 + 8 + lVar16 * 0x18) = (double)(((float)iVar18 + 0.5) * fVar27) + dVar1;
        *(undefined8 *)(lVar17 + 0x10 + lVar16 * 0x18) = uVar2;
        lVar23 = lVar23 + 1;
        lVar15 = lVar15 + 0xc;
      } while (lVar23 < dStack_c0._0_4_);
    }
  }
  if (local_c8 != 0.0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ef46d6 FUN_147ef46d6 body=421 status=ok
// SIG undefined FUN_147ef46d6(void)

bool FUN_147ef46d6(longlong param_1,int *param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_168 [32];
  longlong *local_148;
  int local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  int local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [104];
  longlong local_68;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar1 = *param_2;
  iVar4 = -1;
  iVar3 = -1;
  if ((((-1 < iVar1) && (iVar2 = param_2[1], -1 < iVar2)) && (iVar1 < *(int *)(param_1 + 0x70))) &&
     (iVar2 < *(int *)(param_1 + 0x74))) {
    iVar3 = *(int *)(param_1 + 0x74) * iVar1 + iVar2;
  }
  iVar1 = *param_3;
  if (((-1 < iVar1) && (iVar2 = param_3[1], -1 < iVar2)) &&
     ((iVar1 < *(int *)(param_1 + 0x70) && (iVar2 < *(int *)(param_1 + 0x74))))) {
    iVar4 = *(int *)(param_1 + 0x74) * iVar1 + iVar2;
  }
  local_e8 = 0;
  uStack_e0 = 0;
  FUN_147ef487c(local_d8,param_1);
  local_114 = 0xffffffff;
  local_110 = 0x7fefffffffffffff;
  local_108 = 0x7fefffffffffffff;
  local_100 = 0xffffffffffffffff;
  local_f8 = 0;
  local_13c = 0xffffffff;
  local_138 = 0x7fefffffffffffff;
  local_130 = 0x7fefffffffffffff;
  local_128 = 0xffffffffffffffff;
  local_120 = 0;
  local_148 = &local_e8;
  local_140 = iVar3;
  local_118 = iVar4;
  local_f0 = param_1;
  FUN_147ef48da(local_d8);
  iVar1 = (int)uStack_e0;
  if ((int)uStack_e0 != 0) {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) < 0) {
      FUN_146ea3024(param_4,0);
    }
    local_148 = param_4;
    FUN_147ef4e80(param_1,param_2,param_3,&local_e8);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_147f093d6(local_d0);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return iVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef487c FUN_147ef487c body=93 status=ok
// SIG undefined FUN_147ef487c(void)

undefined8 * FUN_147ef487c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  *param_1 = param_2;
  puVar1 = param_1 + 1;
  FUN_147f0aeb4(puVar1);
  param_1[0xd] = puVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = puVar1;
  param_1[0x11] = param_1 + 0xd;
  FUN_147f0b62e(param_1 + 0xe,0x40);
  if (*(int *)((longlong)param_1 + 0x14) < 0x40) {
    FUN_147f0b68e(puVar1);
  }
  return param_1;
}



// FUNCTION 147ef48da FUN_147ef48da body=1444 status=ok
// SIG undefined FUN_147ef48da(void)

void FUN_147ef48da(longlong *param_1,uint *param_2,uint *param_3,longlong *param_4,longlong *param_5
                  )

{
  longlong *plVar1;
  longlong *plVar2;
  byte *pbVar3;
  double dVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  size_t sVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  int iVar21;
  size_t _Size;
  int iVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong *local_a0;
  int local_94;
  longlong *local_90;
  uint *local_88;
  int *local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar14 = *param_2;
  if (((-1 < (int)uVar14) && ((int)uVar14 < (int)*(uint *)(*param_1 + 0x80))) &&
     (uVar13 = *param_3,
     (uVar14 != uVar13 && -1 < (int)uVar13) && uVar13 < *(uint *)(*param_1 + 0x80))) {
    plVar1 = param_1 + 1;
    *(undefined4 *)(param_1 + 2) = 0;
    if (*(int *)((longlong)param_1 + 0x14) < 0x40) {
      FUN_147f0b68e(plVar1);
    }
    local_90 = param_1 + 3;
    FUN_147f0b730();
    plVar2 = param_1 + 0xe;
    *(undefined4 *)(param_1 + 0xf) = 0;
    if (*(int *)((longlong)param_1 + 0x7c) < 0) {
      FUN_147f0b62e(plVar2,0);
    }
    iVar12 = (int)param_1[2];
    *(uint *)(param_1 + 2) = iVar12 + 1U;
    if (*(uint *)((longlong)param_1 + 0x14) < iVar12 + 1U) {
      FUN_147f0b8d4(plVar1,iVar12);
    }
    lVar20 = param_1[1];
    puVar16 = (uint *)(lVar20 + (longlong)iVar12 * 0x28);
    *(undefined8 *)(puVar16 + 8) = *(undefined8 *)(param_2 + 8);
    uVar14 = *param_2;
    uVar13 = param_2[1];
    uVar5 = param_2[2];
    uVar8 = param_2[3];
    uVar9 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(puVar16 + 6) = uVar9;
    *puVar16 = uVar14;
    puVar16[1] = uVar13;
    puVar16[2] = uVar5;
    puVar16[3] = uVar8;
    lVar20 = lVar20 + (longlong)iVar12 * 0x28;
    piVar19 = (int *)(lVar20 + 0x18);
    *piVar19 = (int)((ulonglong)((longlong)puVar16 - param_1[1]) >> 3) * -0x33333333;
    local_88 = param_2;
    local_80 = piVar19;
    FUN_147f0b968(local_90,&local_74);
    *(undefined8 *)(lVar20 + 8) = 0;
    uVar14 = *(uint *)(*param_4 + 0x74);
    iVar22 = *param_2 / uVar14 - *param_3 / uVar14;
    iVar12 = -iVar22;
    if (iVar12 < 0) {
      iVar12 = iVar22;
    }
    iVar21 = *param_2 % uVar14 - *param_3 % uVar14;
    iVar22 = -iVar21;
    if (iVar22 < 0) {
      iVar22 = iVar21;
    }
    *(double *)(lVar20 + 0x10) = (double)(iVar22 + iVar12);
    FUN_147f0bc5e(plVar2,piVar19,param_1[0x11]);
    *(byte *)(lVar20 + 0x20) = *(byte *)(lVar20 + 0x20) | 1;
    uVar23 = (ulonglong)*piVar19;
    lVar20 = param_1[1];
    local_94 = *(int *)(lVar20 + uVar23 * 0x28);
    if (0 < (int)param_1[0xf]) {
      dVar4 = *(double *)(puVar16 + 4);
      local_a8 = uVar23;
      local_a0 = plVar2;
      do {
        local_88 = (uint *)CONCAT44(local_88._4_4_,0xffffffff);
        FUN_147f0bdfc(local_a0,&local_88,param_1[0x11]);
        lVar15 = (longlong)(int)(uint)local_88;
        lVar10 = lVar15 * 0x28;
        pbVar3 = (byte *)(*(longlong *)param_1[0x10] + 0x20 + lVar10);
        *pbVar3 = *pbVar3 & 0xfe;
        lVar20 = param_1[1];
        pbVar3 = (byte *)(lVar20 + 0x20 + lVar10);
        *pbVar3 = *pbVar3 | 2;
        if (*(uint *)(lVar20 + lVar10) == *param_3) {
          local_a8 = (ulonglong)*(uint *)(lVar20 + lVar10 + 0x18);
          break;
        }
        lVar20 = 0;
        do {
          lVar18 = *param_1;
          uVar14 = *(uint *)(param_1[1] + lVar15 * 0x28);
          uVar13 = *(uint *)(lVar18 + 0x74);
          iVar12 = uVar14 / uVar13 + (&DAT_14cb20450)[lVar20 * 2];
          if (((((-1 < iVar12) &&
                (iVar22 = uVar14 % uVar13 + (&DAT_14cb20454)[lVar20 * 2], iVar22 < (int)uVar13)) &&
               ((-1 < iVar22 &&
                ((iVar12 < *(int *)(lVar18 + 0x70) &&
                 (uVar13 = iVar12 * uVar13 + iVar22, -1 < (int)uVar13)))))) &&
              ((int)uVar13 < *(int *)(lVar18 + 0x80))) &&
             (((uVar13 != uVar14 && (uVar13 != *(uint *)(param_1[1] + lVar15 * 0x28 + 4))) &&
              (*(char *)(*(longlong *)(*param_4 + 0x78) + (ulonglong)uVar13) == '\0')))) {
            local_88 = (uint *)CONCAT44(local_88._4_4_,uVar13);
            local_74 = 0xffffffff;
            local_b8 = (uint *)FUN_147f0bee8(local_90,uVar13,&local_88,&local_74);
            if ((longlong)(int)*local_b8 == -1) {
              iVar12 = (int)param_1[2];
              *(uint *)(param_1 + 2) = iVar12 + 1U;
              lVar18 = (longlong)iVar12;
              if (*(uint *)((longlong)param_1 + 0x14) < iVar12 + 1U) {
                local_b0 = (longlong)iVar12;
                FUN_147f0b8d4(plVar1);
                lVar18 = local_b0;
              }
              puVar16 = (uint *)(*plVar1 + lVar18 * 0x28);
              *puVar16 = (uint)local_88;
              puVar16[1] = 0xffffffff;
              puVar16[2] = 0xffffffff;
              puVar16[3] = 0x7fefffff;
              puVar16[4] = 0xffffffff;
              puVar16[5] = 0x7fefffff;
              puVar16[6] = 0xffffffff;
              puVar16[7] = 0xffffffff;
              *(byte *)(puVar16 + 8) = (byte)puVar16[8] & 0xfc;
              uVar14 = (int)((ulonglong)((longlong)puVar16 - *plVar1) >> 3) * -0x33333333;
              puVar16[6] = uVar14;
              *local_b8 = uVar14;
              lVar18 = *plVar1;
            }
            else {
              lVar18 = *plVar1;
              puVar16 = (uint *)(lVar18 + (longlong)(int)*local_b8 * 0x28);
            }
            uVar14 = *puVar16;
            local_b0 = CONCAT44(local_b0._4_4_,uVar14);
            uVar13 = *(uint *)(lVar18 + lVar15 * 0x28);
            uVar5 = *(uint *)(*param_4 + 0x74);
            iVar22 = uVar13 / uVar5 - uVar14 / uVar5;
            iVar12 = -iVar22;
            if (iVar12 < 0) {
              iVar12 = iVar22;
            }
            iVar21 = uVar13 % uVar5 - uVar14 % uVar5;
            iVar22 = -iVar21;
            if (iVar22 < 0) {
              iVar22 = iVar21;
            }
            dVar6 = (double)(iVar22 + iVar12) + *(double *)(lVar18 + 8 + lVar15 * 0x28);
            uVar13 = *param_3;
            dVar7 = 0.0;
            if (uVar14 != uVar13) {
              iVar22 = uVar14 / uVar5 - uVar13 / uVar5;
              iVar12 = -iVar22;
              if (iVar12 < 0) {
                iVar12 = iVar22;
              }
              iVar21 = uVar14 % uVar5 - uVar13 % uVar5;
              iVar22 = -iVar21;
              if (iVar22 < 0) {
                iVar22 = iVar21;
              }
              dVar7 = (double)(iVar22 + iVar12);
            }
            dVar24 = dVar6 + dVar7;
            local_b8 = puVar16;
            if (dVar24 < *(double *)(puVar16 + 4)) {
              *(double *)(puVar16 + 2) = dVar6;
              *(double *)(puVar16 + 4) = dVar24;
              puVar16[1] = *(uint *)(*plVar1 + lVar10);
              puVar16[7] = *(uint *)(*plVar1 + 0x18 + lVar10);
              uVar14 = puVar16[8];
              *(byte *)(puVar16 + 8) = (byte)uVar14 & 0xfd;
              if (((byte)uVar14 & 1) == 0) {
                FUN_147f0bc5e(local_a0,puVar16 + 6,param_1[0x11]);
                *(byte *)(local_b8 + 8) = (byte)local_b8[8] | 1;
              }
              else {
                FUN_147f0bd78(local_a0);
              }
              if (dVar7 < dVar4) {
                local_a8 = (ulonglong)local_b8[6];
                dVar4 = dVar7;
              }
            }
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 != 8);
      } while (0 < (int)param_1[0xf]);
      lVar20 = *plVar1;
      uVar23 = local_a8;
    }
    uVar17 = uVar23 & 0xffffffff;
    lVar10 = 1;
    sVar11 = 4;
    do {
      _Size = sVar11;
      lVar15 = lVar10;
      iVar12 = *(int *)(lVar20 + 0x1c + (longlong)(int)uVar17 * 0x28);
      uVar17 = (ulonglong)iVar12;
      iVar22 = (int)lVar15;
      if ((((longlong)uVar17 < 0) || ((int)param_1[2] <= iVar12)) ||
         (*(int *)(lVar20 + uVar17 * 0x28) == local_94)) break;
      lVar10 = lVar15 + 1;
      sVar11 = _Size + 4;
    } while (iVar22 - 1U < 9999);
    FUN_144a9ff88(param_5);
    iVar12 = (int)param_5[1];
    *(int *)(param_5 + 1) = iVar12 + iVar22;
    if ((uint)(*(int *)((longlong)param_5 + 0xc) - iVar12) <= iVar22 - 1U) {
      FUN_1446f48e2(param_5);
    }
    memset((void *)((longlong)iVar12 * 4 + *param_5),0,_Size);
    lVar20 = (longlong)(int)uVar23;
    *(undefined4 *)(*param_5 + -4 + lVar15 * 4) = *(undefined4 *)(*plVar1 + lVar20 * 0x28);
    if (iVar22 != 1) {
      do {
        lVar20 = (longlong)*(int *)(*plVar1 + 0x1c + lVar20 * 0x28);
        *(undefined4 *)(*param_5 + -8 + lVar15 * 4) = *(undefined4 *)(*plVar1 + lVar20 * 0x28);
        lVar15 = lVar15 + -1;
      } while (1 < lVar15);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ef4e80 FUN_147ef4e80 body=470 status=ok
// SIG undefined FUN_147ef4e80(void)

void FUN_147ef4e80(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_88 [36];
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar6 = (int)param_4[1];
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  uVar4 = *(uint *)((longlong)param_5 + 0xc);
  if ((int)uVar4 < iVar6) {
    FUN_146ea3024(param_5);
    uVar4 = *(uint *)((longlong)param_5 + 0xc);
  }
  iVar6 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar6 + 1U;
  if (uVar4 < iVar6 + 1U) {
    FUN_146ddc768(param_5,iVar6);
  }
  lVar5 = *param_5;
  *(undefined4 *)(lVar5 + 8 + (longlong)iVar6 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar5 + (longlong)iVar6 * 0xc) = *param_2;
  iVar6 = (int)param_4[1];
  if (2 < iVar6) {
    local_50 = *(undefined4 *)(param_2 + 1);
    local_58 = *param_2;
    lVar5 = 2;
    do {
      lVar2 = *param_4;
      local_60 = *(uint *)(lVar2 + lVar5 * 4);
      uVar4 = *(uint *)(param_1 + 0x74);
      local_64 = local_60 / uVar4;
      local_60 = local_60 % uVar4;
      local_5c = 0;
      cVar3 = FUN_147ef5072(param_1,&local_58,&local_64);
      if (cVar3 != '\0') {
        uVar1 = *(uint *)(lVar2 + -4 + lVar5 * 4);
        local_58 = CONCAT44(uVar1 % uVar4,uVar1 / uVar4);
        local_50 = 0;
        iVar6 = (int)param_5[1];
        *(uint *)(param_5 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
          FUN_146ddc768(param_5,iVar6);
        }
        lVar2 = *param_5;
        *(undefined4 *)(lVar2 + 8 + (longlong)iVar6 * 0xc) = local_50;
        *(undefined8 *)(lVar2 + (longlong)iVar6 * 0xc) = local_58;
        iVar6 = (int)param_4[1];
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar6);
  }
  iVar6 = (int)param_5[1];
  *(uint *)(param_5 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
    FUN_146ddc768(param_5,iVar6);
  }
  lVar5 = *param_5;
  *(undefined4 *)(lVar5 + 8 + (longlong)iVar6 * 0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar5 + (longlong)iVar6 * 0xc) = *param_3;
  if (*(int *)((longlong)param_5 + 0xc) == (int)param_5[1]) {
    if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
}



// FUNCTION 147ef5072 FUN_147ef5072 body=296 status=ok
// SIG undefined FUN_147ef5072(void)

ulonglong FUN_147ef5072(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar9 = *param_2;
  iVar7 = param_2[1];
  iVar1 = *(int *)(param_1 + 0x74);
  iVar5 = iVar1 * iVar9 + iVar7;
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar6 = CONCAT71((uint7)(uint3)((uint)iVar5 >> 8),1);
  if (*(char *)(lVar2 + iVar5) == '\0') {
    iVar5 = *param_3;
    iVar8 = param_3[1];
    iVar11 = iVar8 - iVar7;
    iVar10 = iVar5 - iVar9;
    iVar3 = -iVar10;
    if (-iVar10 < 0) {
      iVar3 = iVar10;
    }
    iVar4 = -iVar11;
    if (-iVar11 < 0) {
      iVar4 = iVar11;
    }
    iVar12 = (uint)(iVar10 != 0 && iVar9 <= iVar5) * 2 + -1;
    iVar10 = (uint)(iVar11 != 0 && iVar7 <= iVar8) * 2 + -1;
    iVar3 = iVar3 * 2;
    iVar4 = iVar4 * 2;
    if (iVar4 < iVar3) {
      uVar6 = (ulonglong)(uint)(iVar3 >> 1);
      iVar8 = iVar4 - (iVar3 >> 1);
      iVar5 = (iVar5 + iVar12) - iVar9;
      iVar9 = (iVar12 + iVar9) * iVar1;
      do {
        iVar5 = iVar5 - iVar12;
        uVar6 = CONCAT71((int7)(uVar6 >> 8),iVar5 != 0);
        if (iVar5 == 0) {
          return uVar6;
        }
        iVar11 = 0;
        if (-1 < iVar8) {
          iVar11 = iVar10;
        }
        iVar13 = 0;
        if (-1 < iVar8) {
          iVar13 = iVar3;
        }
        iVar7 = iVar7 + iVar11;
        iVar8 = (iVar8 + iVar4) - iVar13;
        iVar11 = iVar9 + iVar7;
        iVar9 = iVar9 + iVar1 * iVar12;
      } while (*(char *)(lVar2 + iVar11) == '\0');
    }
    else {
      uVar6 = (ulonglong)(uint)(iVar4 >> 1);
      iVar5 = iVar3 - (iVar4 >> 1);
      do {
        uVar6 = CONCAT71((int7)(uVar6 >> 8),iVar8 != iVar7);
        if (iVar8 == iVar7) {
          return uVar6;
        }
        iVar11 = 0;
        if (-1 < iVar5) {
          iVar11 = iVar12;
        }
        iVar13 = 0;
        if (-1 < iVar5) {
          iVar13 = iVar4;
        }
        iVar9 = iVar9 + iVar11;
        iVar7 = iVar7 + iVar10;
        iVar5 = (iVar5 + iVar3) - iVar13;
      } while (*(char *)(lVar2 + (iVar9 * iVar1 + iVar7)) == '\0');
    }
  }
  return uVar6;
}



// FUNCTION 147ef519a FUN_147ef519a body=883 status=ok
// SIG undefined FUN_147ef519a(void)

void FUN_147ef519a(float *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  ulonglong uVar5;
  float fVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  double *pdVar10;
  ulonglong uVar11;
  uint unaff_EBP;
  double dVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  double local_f0 [3];
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar12 = *(double *)(param_1 + 6);
  dVar2 = *(double *)(param_1 + 0xc);
  if (ABS((dVar2 - dVar12) * 0.5) <= 1e-08) {
    dVar3 = (double)param_2[0x7f];
    dVar2 = (dVar2 + dVar12) * 0.5;
    dVar12 = dVar2 - (double)(float)dVar3;
    *(double *)(param_1 + 6) = dVar12;
    dVar2 = dVar2 + (double)(float)dVar3;
    *(double *)(param_1 + 0xc) = dVar2;
  }
  local_b8 = 0;
  uStack_b0 = 0;
  fVar6 = param_1[0x20];
  if (0 < (int)fVar6) {
    uVar11 = 0;
    do {
      uVar5 = uStack_b0;
      if (*(char *)(*(longlong *)(param_1 + 0x1e) + uVar11) == '\0') {
        fVar4 = param_1[0x1d];
        fVar6 = *param_1;
        dVar2 = *(double *)(param_1 + 0x14);
        dVar12 = *(double *)(param_1 + 0x12);
        dVar3 = *(double *)(param_1 + 0x10);
        local_c8 = (double)DAT_14c8464f0;
        local_d8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_d0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        lVar8 = (longlong)(int)uStack_b0;
        uVar7 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar7);
        if (uStack_b0._4_4_ < uVar7) {
          FUN_147ef0cc6(&local_b8,uVar5 & 0xffffffff);
        }
        unaff_EBP = unaff_EBP & 0xfffffff8 | 5;
        lVar8 = lVar8 * 0x78;
        *(double *)(local_b8 + lVar8) =
             (double)(((float)(int)((uVar11 & 0xffffffff) / (ulonglong)(uint)fVar4) + 0.5) * fVar6)
             + dVar3;
        *(double *)(local_b8 + 8 + lVar8) =
             (double)(((float)(int)((uVar11 & 0xffffffff) % (ulonglong)(uint)fVar4) + 0.5) * fVar6)
             + dVar12;
        *(double *)(local_b8 + 0x10 + lVar8) = dVar2 + 0.0;
        puVar1 = (undefined8 *)(local_b8 + 0x18 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_b8 + 0x28 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(local_b8 + 0x38 + lVar8);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined1 *)(local_b8 + 0x48 + lVar8) = 0;
        puVar1 = (undefined8 *)(local_b8 + 0x50 + lVar8);
        *puVar1 = local_d8;
        puVar1[1] = uStack_d0;
        *(double *)(local_b8 + 0x60 + lVar8) = local_c8;
        *(undefined8 *)(local_b8 + 0x68 + lVar8) = 0;
        *(uint *)(local_b8 + 0x70 + lVar8) = unaff_EBP;
        fVar6 = param_1[0x20];
      }
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)(int)fVar6);
    dVar12 = *(double *)(param_1 + 6);
    dVar2 = *(double *)(param_1 + 0xc);
  }
  local_c8 = (dVar2 - dVar12) * 0.5;
  dVar2 = (double)(*param_1 * 0.25);
  local_f0[1] = 0.0;
  local_f0[2] = 0.0;
  local_f8 = 0;
  local_d8 = dVar2;
  uStack_d0 = dVar2;
  (**(code **)(*param_2 + 0x768))(param_2,&local_b8);
  local_f0[0] = (*(double *)(param_1 + 0xc) + *(double *)(param_1 + 6)) * 0.5;
  FUN_146bfae00(param_1 + 0x22,local_f0,param_1[0x20]);
  fVar6 = param_1[0x20];
  if (0 < (int)fVar6) {
    lVar8 = 0;
    iVar9 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x1e) + lVar8) == '\0') {
        if (((*(byte *)(local_b8 + 0x70 + (longlong)iVar9 * 0x78) & 2) == 0) ||
           (pdVar10 = (double *)(local_b8 + (longlong)iVar9 * 0x78),
           dVar2 * dVar2 <
           (pdVar10[1] - pdVar10[0xb]) * (pdVar10[1] - pdVar10[0xb]) +
           (*pdVar10 - pdVar10[10]) * (*pdVar10 - pdVar10[10]))) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x1e) + lVar8) = 1;
        }
        else {
          *(double *)(*(longlong *)(param_1 + 0x22) + lVar8 * 8) = pdVar10[0xc];
        }
        iVar9 = iVar9 + 1;
        fVar6 = param_1[0x20];
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)fVar6);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ef5514 FUN_147ef5514 body=780 status=ok
// SIG undefined FUN_147ef5514(void)

void FUN_147ef5514(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_7c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = local_70;
  uStack_90 = uStack_68;
  local_88 = local_60;
  local_b8 = local_58;
  uStack_b4 = uStack_54;
  uStack_b0 = uStack_50;
  uStack_ac = uStack_4c;
  local_a8 = local_48;
  local_c8 = local_7c != 0;
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_d0 = local_78;
  local_d8 = local_74;
  uVar2 = FUN_143858084(local_28,puVar3);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef5828 FUN_147ef5828 body=687 status=ok
// SIG undefined FUN_147ef5828(void)

void FUN_147ef5828(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_54 != 0;
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  local_70 = local_50;
  local_78 = local_4c;
  uVar2 = FUN_1438583aa(local_28,puVar3,local_44,local_48);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef5ade FUN_147ef5ade body=504 status=ok
// SIG undefined FUN_147ef5ade(void)

void FUN_147ef5ade(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [24];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_4c != 0;
  puVar3 = local_40;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = FUN_143858516(local_28,puVar3,local_44,local_48);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef5cde FUN_147ef5cde body=527 status=ok
// SIG undefined FUN_147ef5cde(void)

void FUN_147ef5cde(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_44 != 0;
  uVar1 = FUN_14385868a(local_38[2],plVar2,local_3c,local_40);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef5ef4 FUN_147ef5ef4 body=452 status=ok
// SIG undefined FUN_147ef5ef4(void)

void FUN_147ef5ef4(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar4 = local_50;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar6 = local_68;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147ef67ca(local_38);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    plVar5 = local_78;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar2 = FUN_147ef6598(lVar3,puVar4,puVar6,plVar5);
  }
  *param_3 = uVar2;
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef60c0 FUN_147ef60c0 body=321 status=ok
// SIG undefined FUN_147ef60c0(void)

void FUN_147ef60c0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int local_28;
  undefined4 local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  uVar2 = local_24;
  iVar1 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar3 = FUN_147ef67ca(local_20);
  if (lVar3 != 0) {
    FUN_147ef645e(lVar3,uVar2,iVar1 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef6208 FUN_147ef6208 body=266 status=ok
// SIG undefined FUN_147ef6208(void)

void FUN_147ef6208(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = local_3c;
  lVar3 = FUN_147ef67ca(local_38);
  if ((lVar3 == 0) || (*(int *)(lVar3 + 0x40) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
    DAT_14c7623b4 = uVar1;
  }
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef6316 FUN_147ef6316 body=187 status=ok
// SIG undefined FUN_147ef6316(void)

undefined4 FUN_147ef6316(longlong *param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = 0;
  uVar4 = 0;
  if (0 < (int)param_1[10]) {
    lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
    uVar3 = (undefined4)*(undefined8 *)(lVar2 + 0x6d0);
    uVar4 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x6d0) >> 0x20);
  }
  iVar1 = (int)param_1[8];
  *(uint *)(param_1 + 8) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x44) < iVar1 + 1U) {
    FUN_147f0c1a8(param_1 + 7,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xb0;
  FUN_147f0c0b6(param_1[7] + lVar2,param_2);
  *(undefined4 *)(param_1[7] + 0xa0 + lVar2) = *(undefined4 *)((longlong)param_1 + 0x4c);
  *(ulonglong *)(param_1[7] + 0x98 + lVar2) = CONCAT44(uVar4,uVar3);
  uVar3 = *(undefined4 *)(param_1[7] + 0xa0 + lVar2);
  *(int *)((longlong)param_1 + 0x4c) = *(int *)((longlong)param_1 + 0x4c) + 1;
  FUN_147ef63d2(param_1);
  *(byte *)((longlong)param_1 + 0x54) = *(byte *)((longlong)param_1 + 0x54) | 1;
  if (param_3 != '\0') {
    FUN_143858954(param_1);
  }
  return uVar3;
}



// FUNCTION 147ef63d2 FUN_147ef63d2 body=140 status=ok
// SIG undefined FUN_147ef63d2(void)

void FUN_147ef63d2(longlong param_1)

{
  uint uVar1;
  double *pdVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  double dVar5;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0x50) < (int)uVar1 && 0 < *(int *)(param_1 + 0x50)) {
    do {
      uVar3 = 0;
      if (0 < (int)uVar1) {
        pdVar2 = (double *)(*(longlong *)(param_1 + 0x38) + 0x98);
        uVar4 = 0;
        uVar3 = 0;
        dVar5 = 1.79769313486232e+308;
        do {
          if (*pdVar2 < dVar5) {
            uVar3 = uVar4 & 0xffffffff;
            dVar5 = *pdVar2;
          }
          uVar4 = uVar4 + 1;
          pdVar2 = pdVar2 + 0x16;
        } while (uVar1 != uVar4);
      }
      FUN_147f0c23c((longlong *)(param_1 + 0x38),uVar3);
      uVar1 = *(uint *)(param_1 + 0x40);
    } while (*(int *)(param_1 + 0x50) < (int)uVar1);
  }
  return;
}



// FUNCTION 147ef645e FUN_147ef645e body=92 status=ok
// SIG undefined FUN_147ef645e(void)

void FUN_147ef645e(longlong param_1,int param_2,char param_3)

{
  ulonglong uVar1;
  int *piVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x40)) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x38) + 0xa0);
    uVar1 = 0;
    do {
      if (*piVar2 == param_2) {
        FUN_147f0c23c((longlong *)(param_1 + 0x38),uVar1 & 0xffffffff);
        *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) | 1;
        if (param_3 == '\0') {
          return;
        }
        FUN_143858954(param_1);
        return;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 0x2c;
    } while ((longlong)*(int *)(param_1 + 0x40) != uVar1);
  }
  return;
}



// FUNCTION 147ef64ba FUN_147ef64ba body=68 status=ok
// SIG undefined FUN_147ef64ba(void)

void FUN_147ef64ba(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147ef64fe FUN_147ef64fe body=154 status=ok
// SIG undefined FUN_147ef64fe(void)

void FUN_147ef64fe(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((-1 < (int)param_2) && ((int)param_2 < (int)param_1[6])) {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar6 = param_1[5];
    lVar5 = (ulonglong)param_2 * 0xc0;
    if (0 < *(int *)(lVar6 + 0xb8 + lVar5)) {
      uVar1 = *(undefined8 *)(lVar3 + 0x6d0);
      lVar3 = lVar6 + lVar5;
      lVar4 = 0;
      do {
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0xb0) + lVar4 * 4);
        if ((-1 < (longlong)iVar2) && (iVar2 < (int)param_1[8])) {
          *(undefined8 *)(param_1[7] + 0x98 + (longlong)iVar2 * 0xb0) = uVar1;
          lVar6 = param_1[5];
        }
        lVar4 = lVar4 + 1;
        lVar3 = lVar6 + lVar5;
      } while (lVar4 < *(int *)(lVar3 + 0xb8));
    }
  }
  return;
}



// FUNCTION 147ef6598 FUN_147ef6598 body=561 status=ok
// SIG undefined FUN_147ef6598(void)

undefined8 FUN_147ef6598(longlong param_1,double *param_2,double *param_3,longlong *param_4)

{
  float *pfVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong uStack_50;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar7 = FUN_143859120();
  iVar8 = FUN_143859120(param_1,param_3);
  uVar10 = 0;
  if ((iVar7 != -1) && (iVar7 == iVar8)) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    lVar11 = (longlong)iVar7 * 0xc0;
    dVar3 = *(double *)(lVar9 + 0x40 + lVar11);
    dVar4 = *(double *)(lVar9 + 0x48 + lVar11);
    dVar12 = (double)*(float *)(lVar9 + lVar11);
    local_44 = *(int *)(lVar9 + 0x74 + lVar11) + -1;
    local_38 = (int)(longlong)((param_2[1] - dVar4) / dVar12);
    if (local_44 <= local_38) {
      local_38 = local_44;
    }
    iVar7 = 0;
    if (local_38 < 1) {
      local_38 = iVar7;
    }
    local_48 = *(int *)(lVar9 + 0x70 + lVar11) + -1;
    local_3c = (int)(longlong)((*param_2 - dVar3) / dVar12);
    if (local_48 <= local_3c) {
      local_3c = local_48;
    }
    if (local_3c < 1) {
      local_3c = iVar7;
    }
    local_34 = 0;
    iVar8 = (int)(longlong)((param_3[1] - dVar4) / dVar12);
    if (iVar8 < local_44) {
      local_44 = iVar8;
    }
    if (local_44 < 1) {
      local_44 = iVar7;
    }
    iVar8 = (int)(longlong)((*param_3 - dVar3) / dVar12);
    if (iVar8 < local_48) {
      local_48 = iVar8;
    }
    if (local_48 < 1) {
      local_48 = iVar7;
    }
    pfVar1 = (float *)(lVar9 + lVar11);
    local_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    cVar6 = FUN_147ef46d6(pfVar1);
    if (cVar6 == '\0') {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar10 = 0;
    }
    else {
      FUN_14051b394(param_4,uStack_50 & 0xffffffff,1);
      if (0 < (int)uStack_50) {
        lVar9 = 4;
        lVar11 = 0;
        do {
          iVar7 = *(int *)(local_58 + -4 + lVar9);
          iVar8 = *(int *)(local_58 + lVar9);
          fVar2 = *pfVar1;
          dVar3 = *(double *)(pfVar1 + 0x12);
          uVar10 = *(undefined8 *)
                    (*(longlong *)(pfVar1 + 0x22) +
                    (longlong)(iVar7 * (int)pfVar1[0x1d] + iVar8) * 8);
          lVar5 = *param_4;
          *(double *)(lVar5 + -8 + lVar9 * 2) =
               (double)(((float)iVar7 + 0.5) * fVar2) + *(double *)(pfVar1 + 0x10);
          *(double *)(lVar5 + lVar9 * 2) = (double)(((float)iVar8 + 0.5) * fVar2) + dVar3;
          *(undefined8 *)(lVar5 + 8 + lVar9 * 2) = uVar10;
          lVar11 = lVar11 + 1;
          lVar9 = lVar9 + 0xc;
        } while (lVar11 < (int)uStack_50);
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar10 = 1;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef67ca FUN_147ef67ca body=92 status=ok
// SIG undefined FUN_147ef67ca(void)

undefined8 FUN_147ef67ca(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x180), lVar1 != 0)) {
    lVar2 = FUN_1413f6fa8();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x138);
    }
  }
  return 0;
}



// FUNCTION 147ef6834 FUN_147ef6834 body=37 status=ok
// SIG undefined FUN_147ef6834(void)

void FUN_147ef6834(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147ef685a();
  *param_3 = uVar1;
  return;
}



// FUNCTION 147ef685a FUN_147ef685a body=88 status=ok
// SIG undefined FUN_147ef685a(void)

char FUN_147ef685a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int *piVar3;
  
  if (*(byte *)(param_1 + 0x2a4) - 1 < 3) {
    lVar1 = *(longlong *)(param_1 + 0x178);
    if (lVar1 == 0) {
      return '\0';
    }
    piVar3 = (int *)(lVar1 + 0x70);
    do {
      if (*piVar3 == DAT_14cb1d3d8) {
        return '\x02';
      }
      piVar3 = *(int **)(piVar3 + 2);
    } while (piVar3 != (int *)0x0);
    cVar2 = ((*(byte *)(lVar1 + 0x98) & 4) == 0) + '\x03';
  }
  else {
    cVar2 = '\x01';
    if (*(byte *)(param_1 + 0x2a4) != 0) {
      return '\0';
    }
  }
  return cVar2;
}



// FUNCTION 147ef68b2 FUN_147ef68b2 body=194 status=ok
// SIG undefined FUN_147ef68b2(void)

void FUN_147ef68b2(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 == 0) {
    local_18 = DAT_14c8464f0;
    local_28 = (undefined4)DAT_14c8464e0;
    uStack_24 = DAT_14c8464e0._4_4_;
    uStack_20 = (undefined4)DAT_14c8464e8;
    uStack_1c = DAT_14c8464e8._4_4_;
  }
  else {
    puVar2 = &DAT_14c8464e0;
    if ((*(uint *)(lVar1 + 0x98) & 2) != 0) {
      if ((*(uint *)(lVar1 + 0x98) & 1) != 0 && 1 < (longlong)*(int *)(lVar1 + 0x30)) {
        puVar2 = (undefined8 *)
                 (*(longlong *)(lVar1 + 0x28) + (longlong)*(int *)(lVar1 + 0x30) * 0x30 + -0x30);
      }
    }
    local_18 = puVar2[2];
    local_28 = *(undefined4 *)puVar2;
    uStack_24 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_20 = *(undefined4 *)(puVar2 + 1);
    uStack_1c = *(undefined4 *)((longlong)puVar2 + 0xc);
  }
  *(undefined8 *)(param_3 + 4) = local_18;
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef6976 FUN_147ef6976 body=524 status=ok
// SIG undefined FUN_147ef6976(void)

void FUN_147ef6976(longlong *param_1,longlong param_2)

{
  undefined1 auStack_198 [32];
  undefined1 *local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  undefined4 local_78;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_144 = 0x3f800000;
  local_a4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  local_178 = local_148;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_178 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_158 = local_38;
  local_168 = local_48;
  uStack_164 = uStack_44;
  uStack_160 = uStack_40;
  uStack_15c = uStack_3c;
  (**(code **)(*param_1 + 0x500))(param_1,local_28,local_30);
  if ((local_20 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef6b84 FUN_147ef6b84 body=156 status=ok
// SIG undefined FUN_147ef6b84(void)

void FUN_147ef6b84(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147ef6c22(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef6c22 FUN_147ef6c22 body=210 status=ok
// SIG undefined FUN_147ef6c22(void)

void FUN_147ef6c22(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (((param_2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x158) == 0)) ||
     (cVar1 = FUN_144729dda(param_1 + 0x150), cVar1 == '\0')) {
    return;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x38))();
  cVar1 = (**(code **)(*param_2 + 0x6a0))(param_2,uVar2);
  if (cVar1 == '\0') {
    return;
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  *(longlong **)(param_1 + 0x170) = param_2;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
     (lVar4 = *(longlong *)(lVar4 + 0x168), lVar4 != 0)) {
    lVar3 = FUN_1409035a4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) goto LAB_147ef6cd2;
  }
  lVar4 = 0;
LAB_147ef6cd2:
  FUN_1401073f6(lVar4 + 0x110,param_1);
  return;
}



// FUNCTION 147ef6cf7 FUN_147ef6cf7 body=621 status=ok
// SIG undefined FUN_147ef6cf7(void)

undefined8 *
FUN_147ef6cf7(undefined8 *param_1,longlong param_2,longlong *param_3,longlong *param_4,
             longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *param_3;
  piVar5 = (int *)(lVar4 + 0x70);
  do {
    if (*piVar5 == DAT_14cb1d3d8) {
      if (lVar4 != 0) goto LAB_147ef6dfb;
      break;
    }
    piVar5 = *(int **)(piVar5 + 2);
  } while (piVar5 != (int *)0x0);
  lVar3 = *(longlong *)(lVar4 + 0xe0);
  plVar2 = *(longlong **)(lVar4 + 0xe8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar5 = (int *)((longlong)plVar2 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (lVar3 == 0) {
LAB_147ef6dfb:
    if (*param_4 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_147ef6da4;
    }
    lVar4 = *(longlong *)(param_5 + 0x20);
    if ((lVar4 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar4);
LAB_147ef6e23:
      lVar3 = FUN_14118cf76();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        local_48 = *(longlong *)(param_5 + 0x20);
        if ((local_48 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_147e6f964(param_1,*param_4,param_2,&local_48);
        goto LAB_147ef6da4;
      }
    }
    else if (lVar4 != 0) goto LAB_147ef6e23;
    if (param_2 != 0) {
      lVar4 = FUN_14104c5c4();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        lVar4 = *(longlong *)(param_2 + 0x498);
        if ((lVar4 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar4);
        }
        else if (lVar4 == 0) goto LAB_147ef6e6e;
        lVar3 = FUN_14118cf76();
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          local_50 = *(longlong *)(param_2 + 0x498);
          if ((local_50 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          FUN_147e6f8de(param_1,*param_4,&local_50);
          goto LAB_147ef6da4;
        }
      }
    }
LAB_147ef6e6e:
    lVar4 = *param_4;
    *param_1 = *(undefined8 *)(lVar4 + 0x4e8);
    lVar4 = *(longlong *)(lVar4 + 0x4f0);
  }
  else {
    lVar4 = *param_3;
    *param_1 = *(undefined8 *)(lVar4 + 0xe0);
    lVar4 = *(longlong *)(lVar4 + 0xe8);
  }
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
LAB_147ef6da4:
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar5 = (int *)((longlong)plVar2 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef6f66 FUN_147ef6f66 body=26 status=ok
// SIG undefined FUN_147ef6f66(void)

void FUN_147ef6f66(ushort *param_1,int param_2,ushort param_3)

{
  *(char *)(param_1 + 1) = (char)param_2;
  *param_1 = param_3 | *(ushort *)(&DAT_14ac18bd8 + (longlong)param_2 * 2);
  return;
}



// FUNCTION 147ef6f80 FUN_147ef6f80 body=952 status=ok
// SIG undefined FUN_147ef6f80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147ef6f80(longlong *param_1,longlong param_2,uint param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined2 local_b8;
  undefined1 uStack_b6;
  undefined5 uStack_b5;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb20580) && (FUN_144b3d300(&DAT_14cb20580), DAT_14cb20580 == -1)) {
    _DAT_14cb20578 = FUN_1478cd6e8();
    _Init_thread_footer(&DAT_14cb20580);
  }
  if ((((param_2 != 0) && (param_1[0x2f] == param_2)) && (param_3 < 7)) &&
     ((0x4cU >> (param_3 & 0x1f) & 1) != 0)) {
    cVar4 = (**(code **)(*param_1 + 0x598))(param_1);
    if (cVar4 == '\0') {
      uStack_b6 = 3;
      local_b8 = 0x28;
      (**(code **)(*param_1 + 0x4b0))(param_1);
    }
    else if ((~*(uint *)(param_2 + 0x98) & 0x404) == 0) {
      lVar6 = param_2 + 0x40;
      lVar5 = FUN_14479d2ce(lVar6);
      if (lVar5 != 0) {
        cVar4 = FUN_144729dda(lVar6);
        if (cVar4 == '\0') {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(param_2 + 0x48);
        }
        if ((*(byte *)(param_2 + 0x99) & 4) == 0) {
          lVar6 = 0;
        }
        else {
          lVar6 = FUN_14479d2ce(lVar6);
        }
        if (plVar7 == (longlong *)0x0) {
          lVar6 = *(longlong *)(lVar6 + 0x1c8);
          dVar8 = DAT_14c8464f0;
          dVar13 = DAT_14c8464e0;
          dVar9 = DAT_14c8464e8;
          if (lVar6 != 0) {
            dVar8 = *(double *)(lVar6 + 0x270);
            dVar13 = *(double *)(lVar6 + 0x260);
            dVar9 = *(double *)(lVar6 + 0x268);
          }
        }
        else {
          local_c8 = (double)param_1[0x4c];
          local_d8 = (double)param_1[0x4a];
          dStack_d0 = (double)param_1[0x4b];
          local_f0 = local_e0;
          local_f8 = local_dc;
          (**(code **)(*plVar7 + 0x38))(plVar7,param_1[0x15],&local_d8,&local_b8);
          (**(code **)(*plVar7 + 0x18))(plVar7,&local_d8);
          lVar6 = *(longlong *)(lVar6 + 0x1c8);
          if (lVar6 == 0) {
            dVar9 = 0.0;
            dVar10 = 0.0;
            dVar14 = 0.0;
            dVar15 = 1.0;
          }
          else {
            dVar9 = *(double *)(lVar6 + 0x240);
            dVar10 = *(double *)(lVar6 + 0x248);
            dVar14 = *(double *)(lVar6 + 0x250);
            dVar15 = *(double *)(lVar6 + 600);
          }
          dVar2 = dVar10 + dVar10;
          dVar12 = dVar14 + dVar14;
          dVar1 = dVar9 * (dVar9 + dVar9);
          dVar11 = (dVar9 + dVar9) * dVar15;
          dVar3 = (double)CONCAT53(uStack_b5,CONCAT12(uStack_b6,local_b8));
          dVar8 = (dVar9 * dVar12 - dVar2 * dVar15) * dVar3 + (dVar11 + dVar10 * dVar12) * local_b0
                  + (1.0 - (dVar10 * dVar2 + dVar1)) * local_a8 + local_c8;
          dVar13 = local_a8 * (dVar9 * dVar12 + dVar2 * dVar15) +
                   local_b0 * (dVar9 * dVar2 - dVar15 * dVar12) +
                   dVar3 * (1.0 - (dVar14 * dVar12 + dVar10 * dVar2)) + local_d8;
          dVar9 = local_a8 * (dVar10 * dVar12 - dVar11) +
                  local_b0 * (1.0 - (dVar14 * dVar12 + dVar1)) +
                  dVar3 * (dVar15 * dVar12 + dVar9 * dVar2) + dStack_d0;
        }
        param_1[0x50] = (longlong)dVar13;
        param_1[0x51] = (longlong)dVar9;
        param_1[0x52] = (longlong)dVar8;
      }
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147ef733a FUN_147ef733a body=1186 status=ok
// SIG undefined FUN_147ef733a(void)

ulonglong FUN_147ef733a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14479d2ce(param_1 + 0x38);
  plVar4 = (longlong *)param_1[0x30];
  if (plVar4 != (longlong *)0x0) {
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
  if (((*(char *)((longlong)param_1 + 0x2a4) == '\0') || (lVar10 = param_1[0x2f], lVar10 == 0)) ||
     (uVar3 = *(uint *)(lVar10 + 0x98), (uVar3 & 2) == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    if (((uVar3 & 1) != 0) && (1 < *(int *)(lVar10 + 0x30))) {
      if (((uVar3 >> 10 & 1) != 0) && (lVar10 = FUN_14479d2ce(lVar10 + 0x40), lVar10 != 0)) {
        lVar5 = param_1[0x2f];
        cVar8 = FUN_144729dda(lVar5 + 0x40);
        if ((cVar8 == '\0') || (plVar4 = *(longlong **)(lVar5 + 0x48), plVar4 == (longlong *)0x0)) {
          lVar10 = *(longlong *)(lVar10 + 0x1c8);
          dVar13 = DAT_14c8464f0;
          dVar18 = DAT_14c8464e0;
          dVar14 = DAT_14c8464e8;
          if (lVar10 != 0) {
            dVar13 = *(double *)(lVar10 + 0x270);
            dVar18 = *(double *)(lVar10 + 0x260);
            dVar14 = *(double *)(lVar10 + 0x268);
          }
        }
        else {
          local_b8 = (double)param_1[0x4c];
          local_c8 = (double)param_1[0x4a];
          dStack_c0 = (double)param_1[0x4b];
          local_e0 = local_d0;
          local_e8 = local_cc;
          (**(code **)(*plVar4 + 0x38))(plVar4,param_1[0x15],&local_c8,&local_a8);
          (**(code **)(*plVar4 + 0x18))(plVar4,&local_c8);
          lVar10 = *(longlong *)(lVar10 + 0x1c8);
          if (lVar10 == 0) {
            dVar14 = 0.0;
            dVar15 = 0.0;
            dVar19 = 0.0;
            dVar20 = 1.0;
          }
          else {
            dVar14 = *(double *)(lVar10 + 0x240);
            dVar15 = *(double *)(lVar10 + 0x248);
            dVar19 = *(double *)(lVar10 + 0x250);
            dVar20 = *(double *)(lVar10 + 600);
          }
          dVar7 = dVar15 + dVar15;
          dVar17 = dVar19 + dVar19;
          dVar6 = dVar14 * (dVar14 + dVar14);
          dVar16 = (dVar14 + dVar14) * dVar20;
          dVar13 = (dVar14 * dVar17 - dVar7 * dVar20) * local_a8 +
                   (dVar16 + dVar15 * dVar17) * local_a0 +
                   (1.0 - (dVar15 * dVar7 + dVar6)) * local_98 + local_b8;
          dVar18 = local_98 * (dVar14 * dVar17 + dVar7 * dVar20) +
                   local_a0 * (dVar14 * dVar7 - dVar20 * dVar17) +
                   local_a8 * (1.0 - (dVar19 * dVar17 + dVar15 * dVar7)) + local_c8;
          dVar14 = local_98 * (dVar15 * dVar17 - dVar16) +
                   local_a0 * (1.0 - (dVar19 * dVar17 + dVar6)) +
                   local_a8 * (dVar20 * dVar17 + dVar14 * dVar7) + dStack_c0;
        }
        param_1[0x50] = (longlong)dVar18;
        param_1[0x51] = (longlong)dVar14;
        param_1[0x52] = (longlong)dVar13;
      }
      if (((((-DAT_14cb203d0 < (double)param_1[0x50]) && ((double)param_1[0x50] < DAT_14cb203d0)) &&
           (-DAT_14cb203d8 < (double)param_1[0x51])) &&
          (((double)param_1[0x51] < DAT_14cb203d8 && (-DAT_14cb203e0 < (double)param_1[0x52])))) &&
         ((double)param_1[0x52] < DAT_14cb203e0)) {
        uVar9 = FUN_147ef77de(param_1,param_1[0x2f],param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x54) = uVar9;
      }
      (**(code **)(*param_1 + 0x4c0))(param_1);
      lVar10 = param_1[0x16];
      if (lVar10 == 0) {
        lVar10 = FUN_1448abda6(param_1);
      }
      uVar11 = FUN_144a88394(lVar10);
      lVar10 = FUN_144a61814(uVar11,param_1 + 0x66);
      if (lVar10 != 0) {
        FUN_1405a424c(uVar11,param_1[0x66]);
      }
      param_1[0x66] = 0;
      (**(code **)(*param_1 + 0x560))(param_1);
      uVar12 = CONCAT71((int7)((ulonglong)uVar11 >> 8),1);
      if ((*(byte *)((longlong)param_1 + 0x2a4) | 2) == 3) {
        *(undefined1 *)((longlong)param_1 + 0x2a4) = 3;
        uVar9 = (**(code **)(*param_1 + 0x580))(param_1,param_1[0x2f]);
        (**(code **)(*param_1 + 0x538))(param_1,uVar9);
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffffff;
}



// FUNCTION 147ef77de FUN_147ef77de body=264 status=ok
// SIG undefined FUN_147ef77de(void)

int FUN_147ef77de(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  iVar4 = *(int *)(param_2 + 0x30);
  iVar6 = 0x7fffffff;
  if (1 < (longlong)iVar4) {
    fVar9 = (float)FUN_147ef9aee(local_58,param_2,&local_58,0);
    lVar5 = *(longlong *)(param_2 + 0x28);
    lVar7 = (longlong)iVar4 * 0x30;
    iVar6 = iVar4 + -1;
    lVar8 = (ulonglong)(iVar4 - 2) * 0x30;
    dVar11 = 0.0;
    dVar10 = *(double *)(lVar5 + -0x20 + lVar7);
    dVar12 = *(double *)(lVar5 + -0x28 + lVar7);
    dVar13 = *(double *)(lVar5 + -0x30 + lVar7);
    do {
      iVar6 = iVar6 + -1;
      if (lVar8 == 0) break;
      pdVar1 = (double *)(lVar5 + lVar8);
      dVar2 = *(double *)(lVar5 + 8 + lVar8);
      dVar3 = *(double *)(lVar5 + 0x10 + lVar8);
      dVar13 = dVar13 - *pdVar1;
      dVar12 = dVar12 - dVar2;
      dVar10 = dVar10 - dVar3;
      dVar11 = dVar11 + SQRT(dVar10 * dVar10 + dVar12 * dVar12 + dVar13 * dVar13);
      lVar8 = lVar8 + -0x30;
      dVar10 = dVar3;
      dVar12 = dVar2;
      dVar13 = *pdVar1;
    } while (dVar11 <= (double)fVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar6;
}



// FUNCTION 147ef78e8 FUN_147ef78e8 body=208 status=ok
// SIG undefined FUN_147ef78e8(void)

void FUN_147ef78e8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x178);
  if ((((lVar1 != 0) && ((*(uint *)(lVar1 + 0x98) & 2) != 0)) &&
      ((*(uint *)(lVar1 + 0x98) & 1) != 0)) && (1 < *(int *)(lVar1 + 0x30))) {
    if ((-DAT_14cb203d0 < *(double *)(param_1 + 0x280)) &&
       (*(double *)(param_1 + 0x280) < DAT_14cb203d0)) {
      if ((-DAT_14cb203d8 < *(double *)(param_1 + 0x288)) &&
         (*(double *)(param_1 + 0x288) < DAT_14cb203d8)) {
        if ((-DAT_14cb203e0 < *(double *)(param_1 + 0x290)) &&
           (*(double *)(param_1 + 0x290) < DAT_14cb203e0)) {
          uVar2 = FUN_147ef77de(param_1,lVar1,param_1 + 0x280);
          *(undefined4 *)(param_1 + 0x2a0) = uVar2;
        }
      }
    }
  }
  return;
}



// FUNCTION 147ef79b8 FUN_147ef79b8 body=2038 status=ok
// SIG undefined FUN_147ef79b8(void)

int * FUN_147ef79b8(longlong *param_1,int *param_2,ulonglong param_3,longlong *param_4)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  byte bVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  undefined4 local_100;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_3 + 0x28) & 2) != 0) {
    FUN_14479d2ce(param_3);
  }
  plVar14 = (longlong *)param_4[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar14 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((short)param_1[0x65] == 0) {
    fVar19 = *(float *)(param_3 + 0x2c);
    if ((fVar19 == -1.0) && (!NAN(fVar19))) {
      fVar19 = *(float *)(param_1 + 0x33);
    }
    if ((*param_4 != 0) && (0.0 <= fVar19)) {
      cVar9 = (**(code **)(*param_1 + 0x590))(param_1,0);
      if (cVar9 != '\0') {
        *param_2 = (int)param_1[0x67];
        cVar9 = *(char *)((longlong)param_1 + 0x2a4);
        if (cVar9 == '\x02') {
          if ((param_1[0x2f] != 0) && (*param_4 == param_1[0x2f])) {
            if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
              uVar16 = 0;
            }
            else {
              uVar16 = FUN_14479d2ce(param_3);
            }
            cVar9 = FUN_14069eaf4(param_1 + 0x38,uVar16);
            if (cVar9 != '\0') {
              (**(code **)(*param_1 + 0x4a8))(param_1,DAT_14cb1effc);
              goto LAB_147ef7a3f;
            }
            cVar9 = *(char *)((longlong)param_1 + 0x2a4);
            goto LAB_147ef7b4c;
          }
LAB_147ef7b50:
          *(byte *)((longlong)param_1 + 0x2a5) = *(byte *)((longlong)param_1 + 0x2a5) & 0x7f;
          local_b8 = CONCAT53(local_b8._3_5_,0x30000);
          local_b8 = CONCAT62(local_b8._2_6_,0x88);
          (**(code **)(*param_1 + 0x4b0))(param_1);
        }
        else {
LAB_147ef7b4c:
          if (cVar9 != '\0') goto LAB_147ef7b50;
        }
        *(byte *)((longlong)param_1 + 0x2a5) = *(byte *)((longlong)param_1 + 0x2a5) | 0x80;
        (**(code **)(*param_1 + 0x520))(param_1);
        iVar7 = DAT_14c7623b8;
        iVar8 = DAT_14c7623b8 + 1;
        *(int *)(param_1 + 0x67) = DAT_14c7623b8;
        DAT_14c7623b8 = iVar8;
        *param_2 = iVar7;
        lVar12 = *param_4;
        lVar13 = param_4[1];
        if (lVar13 != 0) {
          LOCK();
          *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
          UNLOCK();
        }
        plVar14 = (longlong *)param_1[0x30];
        param_1[0x2f] = lVar12;
        param_1[0x30] = lVar13;
        if (plVar14 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar14 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        lVar12 = param_1[0x2f];
        local_d8 = (undefined8 *)0x0;
        local_d0 = 0;
        FUN_1446efa72(&local_d8,0,3,0x10);
        puVar15 = local_d8;
        local_d0 = 3;
        *local_d8 = &PTR_LAB_14abb6f40;
        LOCK();
        UNLOCK();
        lVar17 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar17 == 0) {
          LOCK();
          UNLOCK();
          lVar17 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_d8[2] = lVar17;
        *local_d8 = &PTR_FUN_14ac256b0;
        local_d8[3] = 0;
        FUN_14485c47a(local_d8 + 3,param_1);
        *(undefined4 *)(puVar15 + 5) = 0;
        puVar15[4] = FUN_147ef6f80;
        local_b8 = 0;
        uStack_b0 = (longlong *)((ulonglong)uStack_b0._4_4_ << 0x20);
        FUN_147e85030(&local_b8,&local_d8);
        FUN_147e80bea(lVar12 + 0x80,&local_c8,&local_b8);
        FUN_1449db362(&local_b8);
        FUN_1449db362(&local_d8);
        if (param_1[0x2b] != 0) {
          cVar9 = FUN_144729dda(param_1 + 0x2a);
          if (cVar9 != '\0') {
            lVar12 = (**(code **)(*(longlong *)param_1[0x2b] + 0x90))();
            if (lVar12 != 0) {
              lVar12 = (**(code **)(*(longlong *)param_1[0x2b] + 0x90))();
              if (lVar12 != 0) {
                lVar13 = FUN_144a6c4d8();
                if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) {
                  FUN_147e73ec4(param_1[0x2f],lVar12);
                }
              }
            }
          }
        }
        if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
LAB_147ef7d45:
          puVar15 = (undefined8 *)(param_3 + 8);
          uVar11 = (undefined4)*(undefined8 *)(param_3 + 0x18);
          uVar18 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x18) >> 0x20);
        }
        else {
          lVar12 = FUN_14479d2ce(param_3);
          if (lVar12 == 0) goto LAB_147ef7d45;
          if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = FUN_14479d2ce(param_3);
          }
          lVar12 = *(longlong *)(lVar12 + 0x1c8);
          if (lVar12 == 0) {
            puVar15 = &DAT_14c8464e0;
            uVar11 = (undefined4)DAT_14c8464f0;
            uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar11 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
            uVar18 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
            puVar15 = (undefined8 *)(lVar12 + 0x260);
          }
        }
        uVar4 = *(undefined4 *)((longlong)puVar15 + 4);
        uVar5 = *(undefined4 *)(puVar15 + 1);
        uVar6 = *(undefined4 *)((longlong)puVar15 + 0xc);
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)puVar15;
        *(undefined4 *)((longlong)param_1 + 0x284) = uVar4;
        *(undefined4 *)(param_1 + 0x51) = uVar5;
        *(undefined4 *)((longlong)param_1 + 0x28c) = uVar6;
        param_1[0x52] = CONCAT44(uVar18,uVar11);
        plVar3 = (longlong *)param_1[0x2f];
        plVar14 = plVar3 + 0xe;
        do {
          if ((int)*plVar14 == DAT_14cb20388) {
            if (plVar3 != (longlong *)0x0) {
              *(byte *)((longlong)param_1 + 0x2a6) = *(byte *)((longlong)param_1 + 0x2a6) | 1;
              if (param_1[0x2b] == 0) {
LAB_147ef7f6b:
                local_a8 = DAT_14cb203e0;
                local_b8 = CONCAT44(DAT_14cb203d0._4_4_,(undefined4)DAT_14cb203d0);
                uStack_b0 = (longlong *)CONCAT44(DAT_14cb203d8._4_4_,(undefined4)DAT_14cb203d8);
              }
              else {
                cVar9 = FUN_144729dda(param_1 + 0x2a);
                if (cVar9 == '\0') goto LAB_147ef7f6b;
                (**(code **)(*(longlong *)param_1[0x2b] + 0x80))
                          ((longlong *)param_1[0x2b],&local_b8);
              }
              (**(code **)(*plVar3 + 0x70))(plVar3,&local_b8);
            }
            break;
          }
          plVar14 = (longlong *)plVar14[1];
        } while (plVar14 != (longlong *)0x0);
        local_e0 = param_1[0x2e];
        if ((local_e0 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        local_f0 = param_1[0x2f];
        local_e8 = param_1[0x30];
        if (local_e8 != 0) {
          LOCK();
          *(int *)(local_e8 + 8) = *(int *)(local_e8 + 8) + 1;
          UNLOCK();
        }
        local_108 = param_3;
        FUN_147ef6cf7(&local_b8,param_1[0x15],&local_f0,&local_e0);
        plVar14 = uStack_b0;
        if (param_1 + 0x31 != &local_b8) {
          param_1[0x31] = local_b8;
          local_b8 = 0;
          plVar3 = (longlong *)param_1[0x32];
          if (uStack_b0 != plVar3) {
            uStack_b0 = (longlong *)0x0;
            param_1[0x32] = (longlong)plVar14;
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar14 = plVar3 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
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
        plVar14 = uStack_b0;
        if (uStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar3 = uStack_b0 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*uStack_b0)(uStack_b0);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        param_1[0x53] = 0;
        (**(code **)(*param_1 + 0x4c0))(param_1);
        if ((int)param_1[0x67] == *param_2) {
          *(float *)((longlong)param_1 + 0x19c) = fVar19;
          bVar10 = *(byte *)(param_3 + 0x29) & 1;
          bVar2 = *(byte *)((longlong)param_1 + 0x2a5);
          *(byte *)((longlong)param_1 + 0x2a5) = bVar2 & 0xfe | bVar10;
          *(byte *)((longlong)param_1 + 0x2a5) =
               bVar2 & 0xfc | bVar10 | *(byte *)(param_3 + 0x29) & 2;
          lVar12 = *(longlong *)(param_3 + 0x38);
          lVar13 = *(longlong *)(param_3 + 0x40);
          if (lVar13 != 0) {
            LOCK();
            *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
            UNLOCK();
          }
          plVar14 = (longlong *)param_1[0x37];
          param_1[0x36] = lVar12;
          param_1[0x37] = lVar13;
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar3 = plVar14 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
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
          if ((*(byte *)(param_3 + 0x28) & 2) == 0) {
            uVar16 = 0;
          }
          else {
            uVar16 = FUN_14479d2ce(param_3);
          }
          FUN_147ef81b0(param_1,uVar16);
          FUN_147ef78e8(param_1,fVar19);
          (**(code **)(*param_1 + 0x560))(param_1);
          if (((((*(byte *)((longlong)param_1 + 0x2a6) & 1) == 0) &&
               (lVar12 = param_1[0x2f], lVar12 != 0)) && ((*(uint *)(lVar12 + 0x98) & 2) != 0)) &&
             (((*(uint *)(lVar12 + 0x98) & 1) != 0 && (1 < *(int *)(lVar12 + 0x30))))) {
            *(undefined1 *)((longlong)param_1 + 0x2a4) = 3;
            uVar11 = (**(code **)(*param_1 + 0x580))(param_1,*param_4);
            (**(code **)(*param_1 + 0x538))(param_1,uVar11);
          }
          else {
            *(undefined1 *)((longlong)param_1 + 0x2a4) = 1;
            lVar12 = param_1[0x16];
            if (lVar12 == 0) {
              lVar12 = FUN_1448abda6(param_1);
            }
            uVar16 = FUN_144a88394(lVar12);
            uVar11 = *(undefined4 *)((longlong)param_1 + 0x1ac);
            local_c8 = (undefined8 *)0x0;
            local_c0 = 0;
            FUN_1446efa72(&local_c8,0,3,0x10);
            puVar15 = local_c8;
            local_c0 = 3;
            *local_c8 = &PTR_LAB_14a1c8830;
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
            local_c8[2] = lVar13;
            *local_c8 = &PTR_FUN_14ac25720;
            local_c8[3] = 0;
            FUN_14485c47a(local_c8 + 3,param_1);
            *(undefined4 *)(puVar15 + 5) = 0;
            puVar15[4] = &LAB_147ef827e;
            local_b8 = 0;
            uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
            FUN_14487d8d8(&local_b8,&local_c8);
            local_78 = 1;
            local_100 = 0xbf800000;
            local_108 = local_108 & 0xffffffffffffff00;
            FUN_1406f3fee(uVar16,param_1 + 0x66,&local_b8,uVar11);
            (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
            FUN_1449db362(&local_c8);
          }
        }
        goto LAB_147ef7a3f;
      }
    }
  }
  *param_2 = DAT_14cb1eff8;
LAB_147ef7a3f:
  plVar14 = (longlong *)param_4[1];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar14 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef81b0 FUN_147ef81b0 body=204 status=ok
// SIG undefined FUN_147ef81b0(void)

void FUN_147ef81b0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14485c47a(&local_38);
  *(undefined8 *)(param_1 + 0x1c0) = local_38;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  else {
    uVar1 = FUN_145958f2a();
    plVar2 = (longlong *)FUN_144718840(param_2,uVar1);
    *(longlong **)(param_1 + 0x1c8) = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,&local_38,*(undefined8 *)(param_1 + 0xa8));
      goto LAB_147ef8246;
    }
  }
  local_28 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
LAB_147ef8246:
  *(undefined8 *)(param_1 + 0x260) = local_28;
  *(undefined4 *)(param_1 + 0x250) = (undefined4)local_38;
  *(undefined4 *)(param_1 + 0x254) = local_38._4_4_;
  *(undefined4 *)(param_1 + 600) = (undefined4)uStack_30;
  *(undefined4 *)(param_1 + 0x25c) = uStack_30._4_4_;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef828c FUN_147ef828c body=154 status=ok
// SIG undefined FUN_147ef828c(void)

void FUN_147ef828c(longlong *param_1,undefined8 param_2,ushort param_3,int param_4,char param_5)

{
  int iVar1;
  undefined1 auStack_38 [44];
  ushort local_c;
  undefined1 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(char *)((longlong)param_1 + 0x2a4) != '\0') &&
      (iVar1 = (int)param_1[0x67], param_4 != -1 && iVar1 != -1)) &&
     ((iVar1 == 0 || ((param_4 == 0 || (iVar1 == param_4)))))) {
    *(byte *)((longlong)param_1 + 0x2a5) =
         *(byte *)((longlong)param_1 + 0x2a5) & 0x7f | (param_5 == '\0') << 7;
    local_a = 3;
    local_c = param_3 & 0xfff0 | 8;
    (**(code **)(*param_1 + 0x4b0))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef8328 FUN_147ef8328 body=185 status=ok
// SIG undefined FUN_147ef8328(void)

int * FUN_147ef8328(longlong *param_1,int *param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_48 [36];
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)((longlong)param_1 + 0x2a5) =
       *(byte *)((longlong)param_1 + 0x2a5) & 0x7f | (param_4 == '\0') << 7;
  if (*(char *)((longlong)param_1 + 0x2a4) != '\0') {
    local_22 = 3;
    local_24 = 0x88;
    (**(code **)(*param_1 + 0x4b0))(param_1);
  }
  iVar1 = DAT_14c7623b8;
  iVar2 = DAT_14c7623b8 + 1;
  *(int *)(param_1 + 0x67) = DAT_14c7623b8;
  DAT_14c7623b8 = iVar2;
  *param_2 = iVar1;
  local_22 = (undefined1)param_3;
  local_24 = *(undefined2 *)(&DAT_14ac18bd8 + (longlong)param_3 * 2);
  (**(code **)(*param_1 + 0x4b0))(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef83e2 FUN_147ef83e2 body=344 status=ok
// SIG undefined FUN_147ef83e2(void)

void FUN_147ef83e2(longlong *param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x2a4) == '\x02') goto LAB_147ef841a;
  iVar2 = (int)param_1[0x67];
  if ((param_2 == -1 || iVar2 == -1) || (((iVar2 != 0 && (param_2 != 0)) && (iVar2 != param_2))))
  goto LAB_147ef841a;
  if ((param_3 == '\0') && (param_1[0x2b] != 0)) {
    cVar3 = FUN_144729dda(param_1 + 0x2a);
    if (cVar3 != '\0') {
      if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        cVar3 = (**(code **)(*(longlong *)param_1[0x2b] + 0x18))();
        if (cVar3 == '\0') goto LAB_147ef844c;
        plVar4 = (longlong *)param_1[0x2b];
      }
      (**(code **)(*plVar4 + 0x100))();
    }
  }
LAB_147ef844c:
  if (param_1[0x2b] == 0) {
LAB_147ef847d:
    local_18 = DAT_14c8464f0;
    local_28 = DAT_14c8464e0;
    lStack_20 = DAT_14c8464e8;
  }
  else {
    cVar3 = FUN_144729dda(param_1 + 0x2a);
    if (cVar3 == '\0') goto LAB_147ef847d;
    (**(code **)(*(longlong *)param_1[0x2b] + 0x80))((longlong *)param_1[0x2b],&local_28);
  }
  param_1[0x4f] = local_18;
  param_1[0x4d] = local_28;
  param_1[0x4e] = lStack_20;
  if (param_1[0x2f] == 0) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1[0x2f] + 0x100);
    uVar5 = (undefined4)uVar1;
    uVar6 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  param_1[0x53] = CONCAT44(uVar6,uVar5);
  *(undefined1 *)((longlong)param_1 + 0x2a4) = 2;
  (**(code **)(*param_1 + 0x5a8))(param_1);
LAB_147ef841a:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef853c FUN_147ef853c body=334 status=ok
// SIG undefined FUN_147ef853c(void)

void FUN_147ef853c(longlong *param_1,int param_2)

{
  double dVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 auStack_48 [36];
  undefined2 local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = (int)param_1[0x67];
  if ((param_2 == -1 || iVar2 == -1) || (((iVar2 != 0 && (param_2 != 0)) && (iVar2 != param_2)))) {
LAB_147ef856d:
    if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  bVar3 = (**(code **)(*param_1 + 0x530))(param_1);
  cVar4 = (**(code **)(*param_1 + 0x578))(param_1);
  if (cVar4 == '\0') {
    lVar6 = param_1[0x2f];
    if (((lVar6 == 0) || ((*(uint *)(lVar6 + 0x98) & 2) == 0)) ||
       (((*(uint *)(lVar6 + 0x98) & 1) == 0 ||
        ((*(int *)(lVar6 + 0x30) < 2 || (lVar6 = FUN_14479d2ce(lVar6 + 0x9c), lVar6 != 0)))))) {
      local_22 = 2;
      local_24 = 4;
      (**(code **)(*param_1 + 0x4b0))(param_1);
      goto LAB_147ef856d;
    }
    *(undefined1 *)((longlong)param_1 + 0x2a4) = 3;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x2a4) = 3;
    if (param_1[0x2f] == 0) {
      bVar5 = false;
    }
    else {
      dVar1 = *(double *)(param_1[0x2f] + 0x100);
      bVar5 = (double)param_1[0x53] <= dVar1 && dVar1 != (double)param_1[0x53];
    }
    if ((bVar3 & 1) != 0 || bVar5) {
      (**(code **)(*param_1 + 0x580))(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
}



// FUNCTION 147ef86b2 FUN_147ef86b2 body=261 status=ok
// SIG undefined FUN_147ef86b2(void)

undefined8 FUN_147ef86b2(longlong param_1)

{
  longlong *plVar1;
  double dVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  double dVar6;
  undefined1 auStack_68 [32];
  double local_48;
  longlong *plStack_40;
  double local_38;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0.0;
  plStack_40 = (longlong *)0x0;
  cVar3 = FUN_14493c216(&local_48,0);
  plVar5 = (longlong *)0x0;
  if (cVar3 != '\0') {
    plVar5 = plStack_40;
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 == plVar5) {
    uVar4 = 1;
  }
  else {
    local_24 = 0.0;
    local_28 = 0.0;
    (**(code **)(*plVar1 + 0xa0))(plVar1,&local_24);
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
              (*(longlong **)(param_1 + 0x158),&local_48);
    dVar2 = (double)plStack_40 - *(double *)(param_1 + 0x270);
    dVar6 = local_48 - *(double *)(param_1 + 0x268);
    uVar4 = 1;
    if ((dVar6 * dVar6 + dVar2 * dVar2 < (double)(local_24 * local_24)) &&
       (ABS(local_38 - *(double *)(param_1 + 0x278)) < (double)local_28 * 0.5)) {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef87b8 FUN_147ef87b8 body=531 status=ok
// SIG undefined FUN_147ef87b8(void)

void FUN_147ef87b8(longlong *param_1,byte *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  byte local_34;
  byte local_33;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14479d2ce(param_1 + 0x2c);
  if (lVar5 != 0) {
    uVar7 = FUN_1459eab3a();
    plVar8 = (longlong *)FUN_144718840(lVar5,uVar7);
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x68))(plVar8,param_1);
      param_1[0x2c] = 0;
    }
  }
  if ((((*(byte *)((longlong)param_1 + 0x2a6) & 1) != 0) && ((*param_2 & 1) != 0)) &&
     (param_1[0x2b] != 0)) {
    cVar3 = FUN_144729dda(param_1 + 0x2a);
    if (cVar3 != '\0') {
      plVar2 = (longlong *)param_1[0x2f];
      plVar8 = plVar2 + 0xe;
      do {
        if ((int)*plVar8 == DAT_14cb20388) {
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[0x2b] + 0x80))((longlong *)param_1[0x2b],&local_48);
            cVar3 = (**(code **)(*plVar2 + 0x78))(plVar2,&local_48,0);
            if (cVar3 != '\0') goto LAB_147ef894d;
          }
          break;
        }
        plVar8 = (longlong *)plVar8[1];
      } while (plVar8 != (longlong *)0x0);
    }
  }
  if ((*param_2 & 1) == 0) {
    bVar4 = 0;
  }
  else {
    bVar4 = 0x40;
    if (param_1[0x2f] != 0) {
      bVar4 = (~*(byte *)(param_1[0x2f] + 0x98) & 4) << 4;
    }
  }
  *(byte *)((longlong)param_1 + 0x2a5) = *(byte *)((longlong)param_1 + 0x2a5) & 0xbf | bVar4;
  uVar1 = (undefined4)param_1[0x67];
  (**(code **)(*param_1 + 0x520))(param_1);
  (**(code **)(*param_1 + 0x5a8))(param_1);
  cVar3 = (**(code **)(*param_1 + 0x5b0))(param_1);
  if (cVar3 != '\0') {
    (**(code **)(*(longlong *)param_1[0x2b] + 0x100))();
  }
  FUN_147f0c9e8(param_1 + 0x26,uVar1,param_2);
  bVar4 = *param_2;
  local_48 = DAT_14cb1fce0;
  local_40 = 0;
  FUN_14485c47a(&local_40,param_1);
  local_34 = bVar4 & 1;
  local_33 = *param_2;
  lVar5 = param_1[0x15];
  local_38 = uVar1;
  if (lVar5 != 0) {
    lVar6 = FUN_14490fee6();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) goto LAB_147ef8906;
  }
  lVar5 = 0;
LAB_147ef8906:
  FUN_147ecd444(lVar5,&local_48);
LAB_147ef894d:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef89cc FUN_147ef89cc body=93 status=ok
// SIG undefined FUN_147ef89cc(void)

ulonglong FUN_147ef89cc(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (((*(char *)(param_1 + 0x2a5) < '\0') && (*(longlong *)(param_1 + 0x158) != 0)) &&
     (cVar1 = FUN_144729dda(param_1 + 0x150), cVar1 != '\0')) {
    if (*(longlong **)(param_1 + 0x158) == (longlong *)0x0) {
      uVar3 = 0;
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x18))();
      if (cVar1 == '\0') {
        return 0;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x158);
    }
    uVar2 = FUN_147bcbe38(uVar3);
    return uVar2 ^ 1;
  }
  return 0;
}



// FUNCTION 147ef8a2c FUN_147ef8a2c body=1 status=ok
// SIG undefined FUN_147ef8a2c(void)

void FUN_147ef8a2c(void)

{
  return;
}



// FUNCTION 147ef8a2e FUN_147ef8a2e body=62 status=ok
// SIG undefined FUN_147ef8a2e(void)

void FUN_147ef8a2e(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1459e846a();
    uVar1 = FUN_144718840(param_2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000147ef8a65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4d0))(param_1,uVar1);
  return;
}



// FUNCTION 147ef8a6c FUN_147ef8a6c body=69 status=ok
// SIG undefined FUN_147ef8a6c(void)

void FUN_147ef8a6c(longlong *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x488))();
  iVar1 = (int)param_1[0x56];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 <= *(int *)((longlong)param_1 + 0x2d4)) {
    return;
  }
  FUN_147f0ca96(param_1 + 0x59);
  return;
}



// FUNCTION 147ef8acc FUN_147ef8acc body=150 status=ok
// SIG undefined FUN_147ef8acc(void)

void FUN_147ef8acc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a3ee64();
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    lVar2 = FUN_14490fee6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_30 = &LAB_147ef8c64;
      local_28 = 0;
      FUN_147ef8b64(lVar1 + 0x3f0,local_20,param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef8b64 FUN_147ef8b64 body=254 status=ok
// SIG undefined FUN_147ef8b64(void)

undefined8
FUN_147ef8b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_14abe5a20;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ac25790;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_145a58104(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef8c72 FUN_147ef8c72 body=91 status=ok
// SIG undefined FUN_147ef8c72(void)

void FUN_147ef8c72(longlong *param_1,undefined4 param_2)

{
  FUN_144a7e84a();
  if (*(char *)((longlong)param_1 + 0x2a4) == '\x03') {
    (**(code **)(*param_1 + 0x548))(param_1);
    if (*(char *)((longlong)param_1 + 0x2a4) == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000147ef8cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x540))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 147ef8cce FUN_147ef8cce body=254 status=ok
// SIG undefined FUN_147ef8cce(void)

undefined8
FUN_147ef8cce(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14ac25800;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef8ddc FUN_147ef8ddc body=125 status=ok
// SIG undefined FUN_147ef8ddc(void)

void FUN_147ef8ddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_14485c47a(&local_48);
  uStack_40 = param_3;
  FUN_14113f0c0(&local_48);
  local_38 = (undefined4)local_48;
  uStack_34 = local_48._4_4_;
  uStack_30 = (undefined4)uStack_40;
  uStack_2c = uStack_40._4_4_;
  FUN_1403350f6(param_1);
  FUN_144a7b126(param_1,&local_21,1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef8e5a FUN_147ef8e5a body=193 status=ok
// SIG undefined FUN_147ef8e5a(void)

undefined8 * FUN_147ef8e5a(undefined8 *param_1)

{
  undefined1 auStack_58 [32];
  wchar_t local_38 [20];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20bb0) {
    FUN_144b3d300(&DAT_14cb20bb0);
    if (DAT_14cb20bb0 == -1) {
      builtin_wcsncpy(local_38,L"OnNavDataRegistered",0x14);
      FUN_1446f470e(&DAT_14cb20ba8,local_38,1);
      _Init_thread_footer(&DAT_14cb20bb0);
    }
  }
  *param_1 = DAT_14cb20ba8;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef8f1c FUN_147ef8f1c body=284 status=ok
// SIG undefined FUN_147ef8f1c(void)

void FUN_147ef8f1c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *(longlong *)(param_1 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
  }
  if (*(longlong *)(param_1 + 0x158) == 0) goto LAB_147ef900e;
  cVar1 = FUN_144729dda(param_1 + 0x150);
  if (lVar2 == 0 || cVar1 != '\x01') goto LAB_147ef900e;
  plVar4 = *(longlong **)(lVar2 + 0x168);
  if (plVar4 == (longlong *)0x0) {
LAB_147ef8fa4:
    plVar4 = (longlong *)0x0;
  }
  else {
    lVar2 = FUN_1409035a4();
    if ((*(int *)(plVar4[2] + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) goto LAB_147ef8fa4;
  }
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x38))();
  (**(code **)(**(longlong **)(param_1 + 0x158) + 0x78))(*(longlong **)(param_1 + 0x158),local_40);
  lVar2 = (**(code **)(*plVar4 + 0x340))(plVar4,uVar3,local_40,&DAT_14c8464e0);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *(longlong *)(param_1 + 0x170) = lVar2;
  FUN_140457ffc(plVar4 + 0x26,param_1);
LAB_147ef900e:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef903a FUN_147ef903a body=282 status=ok
// SIG undefined FUN_147ef903a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147ef903a(longlong param_1,double *param_2,char param_3)

{
  double dVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  double *pdVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_2[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar6;
  *(undefined4 *)(param_2 + 1) = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  if (param_3 != '\0') {
    cVar3 = FUN_144729dda(param_1 + 0x1c0);
    if (cVar3 != '\0') {
      lVar4 = FUN_14479d2ce(param_1 + 0x1c0);
      lVar4 = *(longlong *)(lVar4 + 0x1c8);
      if (lVar4 == 0) {
        pdVar5 = (double *)&DAT_14c8464e0;
        uVar6 = SUB84(DAT_14c8464f0,0);
        uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
        pdVar5 = (double *)(lVar4 + 0x260);
      }
      dVar1 = pdVar5[1];
      *param_2 = *pdVar5;
      param_2[1] = dVar1;
      param_2[2] = (double)CONCAT44(uVar7,uVar6);
      goto LAB_147ef90b4;
    }
  }
  FUN_147ef9156(param_1,&local_40);
  FUN_14797c16e(param_1 + 0x1d0,&local_58);
  dVar1 = (double)_DAT_14c762398;
  *param_2 = dVar1 * local_40 + local_58;
  param_2[1] = local_38 * dVar1 + local_50;
  param_2[2] = local_30 * dVar1 + local_48;
LAB_147ef90b4:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef9156 FUN_147ef9156 body=360 status=ok
// SIG undefined FUN_147ef9156(void)

double * FUN_147ef9156(longlong param_1,double *param_2)

{
  double dVar1;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x1d0) == 0) {
    param_2[2] = *(double *)(param_1 + 0x300);
    dVar1 = *(double *)(param_1 + 0x2f8);
    *param_2 = *(double *)(param_1 + 0x2f0);
    param_2[1] = dVar1;
    if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  FUN_147e74700(*(undefined8 *)(param_1 + 0x178),&local_a8,*(undefined4 *)(param_1 + 0x2d8));
  FUN_14797c16e(&local_a8,&local_40);
  FUN_14797c16e(param_1 + 0x1d0,&local_a8);
  local_98 = local_98 - local_30;
  local_a0 = local_a0 - local_38;
  local_a8 = local_a8 - local_40;
  dVar1 = local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0;
  if ((dVar1 != 1.0) || (NAN(dVar1))) {
    if (dVar1 < 9.99999993922529e-09) {
      param_2[2] = DAT_14c8464f0;
      dVar1 = DAT_14c8464e8;
      *param_2 = DAT_14c8464e0;
      param_2[1] = dVar1;
      goto LAB_147ef9226;
    }
    dVar1 = 1.0 / SQRT(dVar1);
    local_98 = local_98 * dVar1;
    local_a0 = local_a0 * dVar1;
    local_a8 = local_a8 * dVar1;
  }
  *param_2 = local_a8;
  param_2[1] = local_a0;
  param_2[2] = local_98;
LAB_147ef9226:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 147ef92c0 FUN_147ef92c0 body=520 status=ok
// SIG undefined FUN_147ef92c0(void)

ulonglong FUN_147ef92c0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_f8 [32];
  double local_d8;
  double local_d0;
  double local_c8;
  undefined1 local_c0 [104];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar4 = 0xffffffff;
  if ((((param_2 != 0) && ((*(uint *)(param_2 + 0x98) & 2) != 0)) &&
      ((*(uint *)(param_2 + 0x98) & 1) != 0)) && (1 < *(int *)(param_2 + 0x30))) {
    if ((*(longlong *)(param_1 + 0x2e0) != 0) && (*(longlong *)(param_1 + 0x2e8) != 0)) {
      lVar2 = FUN_14479d2ce(param_2 + 0x9c);
      if ((lVar2 != 0) && (1 < *(int *)(param_2 + 0x30))) {
        plVar3 = (longlong *)(*(longlong *)(param_2 + 0x28) + 0x18);
        uVar5 = 0;
        do {
          if ((*plVar3 == *(longlong *)(param_1 + 0x2e0)) &&
             (plVar3[6] == *(longlong *)(param_1 + 0x2e8))) {
            uVar4 = uVar5 & 0xffffffff;
            break;
          }
          uVar5 = uVar5 + 1;
          plVar3 = plVar3 + 6;
        } while (*(int *)(param_2 + 0x30) - 1 != uVar5);
      }
    }
    if (*(longlong *)(param_1 + 0x158) != 0) {
      cVar1 = FUN_144729dda(param_1 + 0x150);
      if (((int)uVar4 == -1 && cVar1 == '\x01') && (uVar4 = 0, 2 < *(int *)(param_2 + 0x30))) {
        (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
                  (*(longlong **)(param_1 + 0x158),&local_40);
        FUN_147e74700(param_2,local_c0,0);
        FUN_14797c16e(local_c0,&local_58);
        FUN_147e74700(param_2,local_c0,1);
        FUN_14797c16e(local_c0,&local_d8);
        dVar7 = (local_40 - local_58) * (local_40 - local_58) +
                (local_38 - local_50) * (local_38 - local_50);
        dVar6 = (local_40 - local_d8) * (local_40 - local_d8) +
                (local_38 - local_d0) * (local_38 - local_d0);
        if (ABS(dVar7 - dVar6) <= 1e-08) {
          dVar7 = ABS(local_30 - local_48);
          dVar6 = ABS(local_30 - local_c8);
        }
        uVar4 = (ulonglong)(dVar6 <= dVar7);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147ef9aee FUN_147ef9aee body=167 status=ok
// SIG undefined FUN_147ef9aee(void)

float FUN_147ef9aee(longlong param_1,longlong param_2,double *param_3,double *param_4)

{
  float fVar1;
  double dVar2;
  
  if ((*(byte *)(param_2 + 0x98) & 4) == 0) {
    fVar1 = *(float *)(param_1 + 0x19c);
  }
  else {
    if (param_4 == (double *)0x0) {
      param_4 = (double *)&DAT_14a83cd78;
      if (0 < (longlong)*(int *)(param_2 + 0x30)) {
        param_4 = (double *)
                  (*(longlong *)(param_2 + 0x28) + -0x30 + (longlong)*(int *)(param_2 + 0x30) * 0x30
                  );
      }
    }
    dVar2 = (double)*(float *)(param_1 + 0x19c) -
            SQRT((param_3[2] - param_4[2]) * (param_3[2] - param_4[2]) +
                 (param_3[1] - param_4[1]) * (param_3[1] - param_4[1]) +
                 (*param_3 - *param_4) * (*param_3 - *param_4));
    fVar1 = *(float *)(param_1 + 0x198);
    if ((double)fVar1 < dVar2) {
      return (float)dVar2;
    }
  }
  return fVar1;
}



// FUNCTION 147ef9b9a FUN_147ef9b9a body=1959 status=ok
// SIG undefined FUN_147ef9b9a(void)

void FUN_147ef9b9a(longlong *param_1)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  longlong lVar18;
  char cVar19;
  char cVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined1 local_1c8 [16];
  double local_1b8;
  longlong local_160;
  longlong *local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  double local_d0;
  undefined1 local_c8 [24];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((param_1[0x2f] == 0) || (plVar21 = (longlong *)param_1[0x2b], plVar21 == (longlong *)0x0)) {
LAB_147ef9c60:
    local_148 = (double)CONCAT53(local_148._3_5_,0x30000);
    local_148 = (double)CONCAT62(local_148._2_6_,0x28);
  }
  else {
    (**(code **)(*plVar21 + 0x80))(plVar21,local_c8);
    if ((longlong *)param_1[0x2b] == (longlong *)0x0) {
      cVar19 = '\x01';
    }
    else {
      cVar19 = (**(code **)(*(longlong *)param_1[0x2b] + 0x18))();
    }
    uVar5 = *(uint *)(param_1[0x2f] + 0x98);
    if ((((uVar5 & 2) == 0) || ((uVar5 & 1) == 0)) || (*(int *)(param_1[0x2f] + 0x30) < 2)) {
      if ((uVar5 >> 8 & 1) == 0) goto LAB_147ef9c60;
      if (((cVar19 == '\x01' && (*(byte *)((longlong)param_1 + 0x2a6) & 2) != 0) &&
          (*(char *)((longlong)param_1 + 0x2a4) == '\x03')) &&
         (cVar20 = (**(code **)(*param_1 + 0x570))(param_1,local_c8), cVar20 != '\0')) {
        (**(code **)(*param_1 + 0x4b8))(param_1);
        (**(code **)(*param_1 + 0x538))(param_1,*(undefined4 *)((longlong)param_1 + 0x2dc));
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x2a6) & 1) != 0) {
      plVar23 = (longlong *)param_1[0x2f];
      plVar21 = plVar23 + 0xe;
      do {
        if ((int)*plVar21 == DAT_14cb20388) goto LAB_147ef9d05;
        plVar21 = (longlong *)plVar21[1];
      } while (plVar21 != (longlong *)0x0);
    }
    plVar23 = (longlong *)0x0;
LAB_147ef9d05:
    if ((cVar19 == '\0') || (*(char *)((longlong)param_1 + 0x2a4) != '\x03')) goto LAB_147ef9c7d;
    if (plVar23 == (longlong *)0x0) {
      bVar17 = true;
    }
    else {
      bVar17 = 0 < (int)plVar23[0x31] &&
               *(int *)((longlong)plVar23 + 0x19c) == (int)plVar23[0x31] + -1;
    }
    lVar18 = param_1[0x67];
    if ((*(byte *)((longlong)param_1 + 0x2a5) & 0x20) == 0) {
      iVar6 = *(int *)(param_1[0x2f] + 0x30);
      iVar7 = *(int *)((longlong)param_1 + 0x2dc);
      if (((int)param_1[0x54] < iVar7) &&
         (cVar19 = (**(code **)(*param_1 + 0x568))(param_1,local_c8), cVar19 != '\0'))
      goto LAB_147ef9d86;
      if ((iVar7 < iVar6 + -1) ||
         ((bool)(bVar17 ^ 1U | (*(byte *)((longlong)param_1 + 0x2a5) & 4) == 0))) {
        cVar19 = (**(code **)(*param_1 + 0x570))(param_1,local_c8);
        if (cVar19 != '\0') {
          (**(code **)(*param_1 + 0x4b8))(param_1);
          (**(code **)(*param_1 + 0x538))(param_1,*(undefined4 *)((longlong)param_1 + 0x2dc));
        }
      }
      else {
        plVar21 = param_1 + 0x38;
        cVar19 = FUN_144729dda(plVar21);
        if ((cVar19 != '\0') && ((*(byte *)(param_1[0x2f] + 0x98) & 4) == 0)) {
          plVar8 = (longlong *)param_1[0x39];
          if (plVar8 == (longlong *)0x0) {
            lVar22 = FUN_14479d2ce(plVar21);
            lVar22 = *(longlong *)(lVar22 + 0x1c8);
            if (lVar22 == 0) {
              local_138 = DAT_14c8464f0;
              local_148 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_140 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              local_148 = *(double *)(lVar22 + 0x260);
              uStack_140 = *(double *)(lVar22 + 0x268);
              local_138 = *(double *)(lVar22 + 0x270);
            }
          }
          else {
            (**(code **)(*plVar8 + 0x18))(plVar8,&local_148);
          }
          lVar22 = FUN_14479d2ce(plVar21);
          lVar22 = *(longlong *)(lVar22 + 0x1c8);
          if (lVar22 == 0) {
            uVar24 = 0;
            uVar25 = 0;
            uVar26 = 0;
            uVar27 = 0;
            dVar30 = 0.0;
            dVar31 = 1.0;
          }
          else {
            uVar24 = *(undefined4 *)(lVar22 + 0x240);
            uVar25 = *(undefined4 *)(lVar22 + 0x244);
            uVar26 = *(undefined4 *)(lVar22 + 0x248);
            uVar27 = *(undefined4 *)(lVar22 + 0x24c);
            dVar30 = *(double *)(lVar22 + 0x250);
            dVar31 = *(double *)(lVar22 + 600);
          }
          dVar28 = (double)CONCAT44(uVar25,uVar24) + (double)CONCAT44(uVar25,uVar24);
          dVar11 = (double)CONCAT44(uVar27,uVar26);
          dVar14 = (double)CONCAT44(uVar27,uVar26) + dVar11;
          dVar29 = dVar30 + dVar30;
          dVar13 = (double)CONCAT44(uVar25,uVar24) * dVar28;
          dVar16 = (double)CONCAT44(uVar25,uVar24) * dVar14;
          dVar12 = (double)CONCAT44(uVar25,uVar24) * dVar29;
          dVar28 = dVar28 * dVar31;
          dVar2 = (double)param_1[0x4c];
          dVar3 = (double)param_1[0x4a];
          dVar4 = (double)param_1[0x4b];
          dVar15 = dVar2 * (dVar11 * dVar29 - dVar28) +
                   dVar4 * (1.0 - (dVar30 * dVar29 + dVar13)) + dVar3 * (dVar31 * dVar29 + dVar16) +
                   uStack_140;
          local_1b8 = (dVar12 - dVar14 * dVar31) * dVar3 + (dVar28 + dVar11 * dVar29) * dVar4 +
                      (1.0 - (dVar11 * dVar14 + dVar13)) * dVar2 + local_138;
          local_1c8._8_4_ = SUB84(dVar15,0);
          local_1c8._0_8_ =
               dVar2 * (dVar12 + dVar14 * dVar31) +
               dVar4 * (dVar16 - dVar31 * dVar29) +
               dVar3 * (1.0 - (dVar30 * dVar29 + dVar11 * dVar14)) + local_148;
          local_1c8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          if (((*(byte *)((longlong)param_1 + 0x2a5) & 8) != 0) &&
             (lVar22 = param_1[0x31], lVar22 != 0)) {
            lVar9 = param_1[0x2e];
            plVar21 = (longlong *)param_1[0x32];
            local_160 = lVar22;
            if (plVar21 == (longlong *)0x0) {
              local_1e0 = &local_160;
              local_158 = (longlong *)0x0;
              local_1d8 = 0;
              local_1e8 = 0;
              cVar19 = (**(code **)(lVar9 + 0x460))(lVar9,local_c8,local_1c8,&local_e0);
            }
            else {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
              pcVar10 = *(code **)(lVar9 + 0x460);
              local_1e0 = &local_160;
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
              local_1d8 = 0;
              local_1e8 = 0;
              local_158 = plVar21;
              cVar19 = (*pcVar10)(lVar9,local_c8,local_1c8,&local_e0);
              LOCK();
              plVar8 = plVar21 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
              LOCK();
              plVar8 = plVar21 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            if (cVar19 != '\0') {
              local_1c8._4_4_ = uStack_dc;
              local_1c8._0_4_ = local_e0;
              local_1c8._8_4_ = uStack_d8;
              local_1c8._12_4_ = uStack_d4;
              local_1b8 = local_d0;
            }
          }
          FUN_14797bda6(param_1 + 0x3a,0,local_1c8);
        }
        (**(code **)(*param_1 + 0x5a8))(param_1);
      }
    }
    else {
LAB_147ef9d86:
      (**(code **)(*param_1 + 0x4b8))(param_1);
      local_148._2_6_ = (uint6)((ulonglong)local_148 >> 0x10) & 0xffffffffff00;
      local_148 = (double)CONCAT62(local_148._2_6_,1);
      (**(code **)(*param_1 + 0x4b0))(param_1);
    }
    if ((*(char *)((longlong)param_1 + 0x2a4) != '\x03') || ((int)lVar18 != (int)param_1[0x67]))
    goto LAB_147ef9c7d;
    if (plVar23 != (longlong *)0x0) {
      (**(code **)(*plVar23 + 0x78))(plVar23,local_c8,1);
    }
    cVar19 = (**(code **)(*param_1 + 0x558))(param_1);
    if ((cVar19 == '\0') || (cVar19 = FUN_147efa342(param_1), cVar19 == '\0')) goto LAB_147ef9c7d;
    if (*(int *)((longlong)param_1 + 0x2dc) < 0) {
LAB_147efa27e:
      if (param_1[0x15] != 0) {
        local_148 = 0.0;
        uStack_140 = 0.0;
        FUN_14493c216(&local_148,0);
      }
    }
    else {
      uVar5 = *(uint *)(param_1[0x2f] + 0x30);
      if (((int)uVar5 <= *(int *)((longlong)param_1 + 0x2dc)) ||
         (uVar5 <= *(uint *)(param_1 + 0x5b) || (int)*(uint *)(param_1 + 0x5b) < 0))
      goto LAB_147efa27e;
      FUN_147e74700(param_1[0x2f],&local_148);
      FUN_14797c16e(&local_148,&local_e0);
      FUN_147e74700(param_1[0x2f],local_1c8,(int)param_1[0x5b]);
      FUN_14797c16e(local_1c8,&local_160);
      if (param_1[0x2b] != 0) {
        FUN_144729dda(param_1 + 0x2a);
      }
    }
    local_148 = (double)CONCAT53(local_148._3_5_,0x10000);
    local_148 = (double)CONCAT62(local_148._2_6_,2);
  }
  (**(code **)(*param_1 + 0x4b0))(param_1);
LAB_147ef9c7d:
  if ((local_b0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efa342 FUN_147efa342 body=427 status=ok
// SIG undefined FUN_147efa342(void)

ulonglong FUN_147efa342(longlong param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x2b0) < 1 || *(int *)(param_1 + 0x2d0) != *(int *)(param_1 + 0x2b0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (0 < *(int *)(param_1 + 0x2d0)) {
      dVar2 = (double)(*(float *)(param_1 + 0x2a8) * *(float *)(param_1 + 0x2a8));
      lVar7 = 0;
      lVar8 = 0;
      dVar5 = DAT_14c8464e0;
      dVar4 = DAT_14c8464e8;
      dVar3 = DAT_14c8464f0;
      do {
        FUN_14797c16e(*(longlong *)(param_1 + 0x2c8) + lVar7,&local_88);
        dVar5 = dVar5 + local_88;
        dVar4 = dVar4 + local_80;
        dVar3 = dVar3 + local_78;
        lVar8 = lVar8 + 1;
        iVar1 = *(int *)(param_1 + 0x2d0);
        lVar7 = lVar7 + 0x68;
      } while (lVar8 < iVar1);
      if (0 < iVar1) {
        dVar11 = 1.0 / (double)iVar1;
        lVar7 = 0;
        lVar8 = 0;
        do {
          FUN_14797c16e(*(longlong *)(param_1 + 0x2c8) + lVar7,&local_88);
          dVar9 = dVar5 * dVar11 - local_88;
          dVar12 = dVar4 * dVar11 - local_80;
          dVar10 = dVar3 * dVar11 - local_78;
          dVar9 = dVar10 * dVar10 + dVar12 * dVar12 + dVar9 * dVar9;
          uVar6 = CONCAT71((int7)(uVar6 >> 8),dVar9 <= dVar2);
          if (dVar2 < dVar9) break;
          lVar8 = lVar8 + 1;
          lVar7 = lVar7 + 0x68;
        } while (lVar8 < *(int *)(param_1 + 0x2d0));
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147efa4ee FUN_147efa4ee body=865 status=ok
// SIG undefined FUN_147efa4ee(void)

void FUN_147efa4ee(longlong param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  double *pdVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
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
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x178) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x158), plVar4 != (longlong *)0x0)) {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_68);
    FUN_14797c16e(param_1 + 0x1d0,&local_80);
    *(byte *)(param_1 + 0x2a6) = *(byte *)(param_1 + 0x2a6) & 0xfb;
    cVar5 = FUN_147bcbe38(*(undefined8 *)(param_1 + 0x158));
    if (cVar5 == '\0') {
      local_98 = 1.0 / (double)param_2;
      local_88 = (local_70 - local_58) * local_98;
      local_90 = (local_78 - local_60) * local_98;
      local_98 = local_98 * (local_80 - local_68);
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x178) + 0x30);
      iVar3 = *(int *)(param_1 + 0x2d8);
      if ((*(int *)(param_1 + 0x128) != 0) &&
         (plVar4 = *(longlong **)(param_1 + 0x120), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,param_1,&local_98);
      }
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x58))
                (*(longlong **)(param_1 + 0x158),&local_98,iVar3 < iVar2 + -2);
    }
    else {
      local_70 = local_70 - local_58;
      local_78 = local_78 - local_60;
      local_80 = local_80 - local_68;
      dVar11 = local_70 * local_70 + local_80 * local_80 + local_78 * local_78;
      if (((dVar11 != 1.0) || (dVar8 = local_70, dVar9 = local_78, dVar10 = local_80, NAN(dVar11)))
         && (dVar8 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
            9.99999993922529e-09 <= dVar11)) {
        dVar11 = 1.0 / SQRT(dVar11);
        dVar8 = local_70 * dVar11;
        dVar9 = local_78 * dVar11;
        dVar10 = local_80 * dVar11;
      }
      *(double *)(param_1 + 0x238) = dVar10;
      *(double *)(param_1 + 0x240) = dVar9;
      *(double *)(param_1 + 0x248) = dVar8;
      if ((*(char *)(param_1 + 0x2a5) < '\0') &&
         (*(int *)(param_1 + 0x310) <= *(int *)(param_1 + 0x2d8))) {
        lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x178) + 0x30);
        if (lVar7 < 1) {
          pdVar6 = (double *)&DAT_14a83cd78;
        }
        else {
          pdVar6 = (double *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x178) + 0x28) + lVar7 * 0x30 + -0x30);
        }
        dVar11 = (pdVar6[2] - local_58) * (pdVar6[2] - local_58) +
                 (pdVar6[1] - local_60) * (pdVar6[1] - local_60) +
                 (*pdVar6 - local_68) * (*pdVar6 - local_68);
        fVar1 = *(float *)(param_1 + 0x308);
        if (dVar11 < (double)(fVar1 * fVar1)) {
          *(byte *)(param_1 + 0x2a6) = *(byte *)(param_1 + 0x2a6) | 4;
          dVar11 = SQRT(dVar11) / (double)fVar1;
          if (1.0 <= dVar11) {
            dVar11 = 1.0;
          }
          if (dVar11 <= 0.0) {
            dVar11 = 0.0;
          }
          *(double *)(param_1 + 0x238) = dVar10 * dVar11;
          *(double *)(param_1 + 0x240) = dVar9 * dVar11;
          *(double *)(param_1 + 0x248) = dVar8 * dVar11;
        }
      }
      if ((*(int *)(param_1 + 0x128) != 0) &&
         (plVar4 = *(longlong **)(param_1 + 0x120), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,param_1,param_1 + 0x238);
      }
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x60))
                (*(longlong **)(param_1 + 0x158),param_1 + 0x238);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efa850 FUN_147efa850 body=221 status=ok
// SIG undefined FUN_147efa850(void)

void FUN_147efa850(longlong param_1,undefined8 param_2,uint param_3,float param_4)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  float local_60;
  undefined4 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x150);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
                (*(longlong **)(param_1 + 0x158),&local_48);
      goto LAB_147efa8c0;
    }
  }
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
LAB_147efa8c0:
  if ((param_4 == -1.0) && (!NAN(param_4))) {
    param_4 = *(float *)(param_1 + 0x198);
  }
  local_58 = 0;
  if ((param_3 & 0xfd) != 0) {
    local_58 = *(undefined4 *)(param_1 + 0x1a4);
  }
  local_68 = &local_48;
  local_60 = param_4;
  FUN_147efa92e(param_1,param_2,0,0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efa92e FUN_147efa92e body=354 status=ok
// SIG undefined FUN_147efa92e(void)

bool FUN_147efa92e(longlong param_1,double *param_2,float param_3,float param_4,double *param_5,
                  float param_6,float param_7)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  bool bVar4;
  double dVar5;
  undefined1 auStack_b8 [44];
  float local_8c;
  ulonglong local_88;
  longlong *plStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  bVar4 = false;
  cVar2 = FUN_14493c216(&local_88,0);
  plVar3 = (longlong *)0x0;
  if (cVar2 != '\0') {
    plVar3 = plStack_80;
  }
  plVar1 = *(longlong **)(param_1 + 0x158);
  if (plVar1 != plVar3) {
    bVar4 = false;
    local_88 = local_88 & 0xffffffff00000000;
    local_8c = 0.0;
    (**(code **)(*plVar1 + 0xa0))(plVar1,&local_88);
    dVar5 = (double)(param_7 * (float)local_88 + param_3 + param_6);
    if ((*param_2 - *param_5) * (*param_2 - *param_5) +
        (param_2[1] - param_5[1]) * (param_2[1] - param_5[1]) <= dVar5 * dVar5) {
      bVar4 = ABS(param_2[2] - param_5[2]) <=
              (double)(local_8c * *(float *)(param_1 + 0x1a8) + param_4);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efaa92 FUN_147efaa92 body=1071 status=ok
// SIG undefined FUN_147efaa92(void)

void FUN_147efaa92(longlong param_1,longlong param_2,byte param_3,float param_4,char param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined4 *local_160;
  undefined4 local_158;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined1 local_108 [16];
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined4 local_c8;
  undefined4 local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_c4 = 0;
  local_c8 = 0;
  local_d8 = DAT_14c8464f0;
  local_e8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dStack_e0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  lVar1 = *(longlong *)(param_2 + 0x1c8);
  if (lVar1 == 0) {
    local_f8 = DAT_14c8464f0;
    local_108._4_4_ = DAT_14c8464e0._4_4_;
    local_108._0_4_ = (undefined4)DAT_14c8464e0;
    local_108._8_4_ = (undefined4)DAT_14c8464e8;
    local_108._12_4_ = DAT_14c8464e8._4_4_;
  }
  else {
    local_108 = *(undefined1 (*) [16])(lVar1 + 0x260);
    local_f8 = *(double *)(lVar1 + 0x270);
  }
  if ((param_4 == -1.0) && (!NAN(param_4))) {
    param_4 = *(float *)(param_1 + 0x198);
  }
  if (param_2 != 0) {
    uVar8 = FUN_145958f2a();
    plVar9 = (longlong *)FUN_144718840(param_2,uVar8);
    if (plVar9 != (longlong *)0x0) {
      uVar8 = *(undefined8 *)(param_1 + 0xa8);
      (**(code **)(*plVar9 + 0x28))(plVar9,&local_128,uVar8);
      local_160 = &local_c8;
      local_168 = (undefined8 *)&local_c4;
      (**(code **)(*plVar9 + 0x38))(plVar9,uVar8,&local_128,&local_e8);
      if (param_5 != '\0') {
        (**(code **)(*plVar9 + 0x18))(plVar9,&local_148);
        lVar1 = *(longlong *)(param_2 + 0x1c8);
        if (lVar1 == 0) {
          uVar10 = 0;
          uVar11 = 0;
          uVar12 = 0;
          uVar13 = 0;
          dVar16 = 0.0;
          dVar17 = 1.0;
        }
        else {
          uVar10 = *(undefined4 *)(lVar1 + 0x240);
          uVar11 = *(undefined4 *)(lVar1 + 0x244);
          uVar12 = *(undefined4 *)(lVar1 + 0x248);
          uVar13 = *(undefined4 *)(lVar1 + 0x24c);
          dVar16 = *(double *)(lVar1 + 0x250);
          dVar17 = *(double *)(lVar1 + 600);
        }
        dVar14 = (double)CONCAT44(uVar11,uVar10) + (double)CONCAT44(uVar11,uVar10);
        dVar2 = (double)CONCAT44(uVar13,uVar12);
        dVar5 = (double)CONCAT44(uVar13,uVar12) + dVar2;
        dVar15 = dVar16 + dVar16;
        dVar4 = (double)CONCAT44(uVar11,uVar10) * dVar14;
        dVar6 = (double)CONCAT44(uVar11,uVar10) * dVar5;
        dVar3 = (double)CONCAT44(uVar11,uVar10) * dVar15;
        dVar14 = dVar14 * dVar17;
        dStack_140 = local_d8 * (dVar2 * dVar15 - dVar14) +
                     dStack_e0 * (1.0 - (dVar16 * dVar15 + dVar4)) +
                     local_e8 * (dVar17 * dVar15 + dVar6) + dStack_140;
        local_f8 = (dVar3 - dVar5 * dVar17) * local_e8 + (dVar14 + dVar2 * dVar15) * dStack_e0 +
                   (1.0 - (dVar2 * dVar5 + dVar4)) * local_d8 + local_138;
        local_108._8_4_ = SUB84(dStack_140,0);
        local_108._0_8_ =
             local_d8 * (dVar3 + dVar5 * dVar17) +
             dStack_e0 * (dVar6 - dVar17 * dVar15) +
             local_e8 * (1.0 - (dVar16 * dVar15 + dVar2 * dVar5)) + local_148;
        local_108._12_4_ = (int)((ulonglong)dStack_140 >> 0x20);
      }
      if (param_3 < 2) {
        local_c4 = 0;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x158) == 0) ||
     (cVar7 = FUN_144729dda(param_1 + 0x150), cVar7 == '\0')) {
    local_118 = DAT_14c8464f0;
    local_128 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_120 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
              (*(longlong **)(param_1 + 0x158),&local_128);
  }
  local_158 = 0;
  if ((param_3 & 0xfd) != 0) {
    local_158 = *(undefined4 *)(param_1 + 0x1a4);
  }
  local_160 = (undefined4 *)CONCAT44(local_160._4_4_,param_4);
  local_168 = &local_128;
  FUN_147efa92e(param_1,local_108,local_c4,local_c8);
  if ((local_c0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efaec2 FUN_147efaec2 body=217 status=ok
// SIG undefined FUN_147efaec2(void)

undefined8 FUN_147efaec2(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_2 + 0x28);
  if ((uVar2 >> 8 & 1) == 0) {
    uVar5 = uVar2 >> 8 & 0xffffff02;
  }
  else {
    uVar5 = (uint)(byte)(((byte)(uVar2 >> 9) & 1) * '\x02' + 1);
  }
  if ((uVar2 & 2) == 0) {
    local_38 = *(undefined8 *)(param_2 + 0x18);
    local_48 = *(undefined4 *)(param_2 + 8);
    uStack_44 = *(undefined4 *)(param_2 + 0xc);
    uStack_40 = *(undefined4 *)(param_2 + 0x10);
    uStack_3c = *(undefined4 *)(param_2 + 0x14);
    uVar4 = FUN_147efa850(param_1,&local_48,uVar5,*(undefined4 *)(param_2 + 0x2c));
  }
  else {
    lVar3 = FUN_14479d2ce(param_2);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x2c);
      if ((*(byte *)(param_2 + 0x28) & 2) == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_14479d2ce(param_2);
      }
      local_58 = 1;
      FUN_147efaa92(param_1,uVar4,uVar5,uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
    }
    uVar4 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efafa0 FUN_147efafa0 body=1108 status=ok
// SIG undefined FUN_147efafa0(void)

void FUN_147efafa0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_198 [32];
  undefined4 *local_178;
  undefined4 *local_170;
  undefined4 local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined4 local_118;
  undefined4 local_114;
  double local_110;
  double dStack_108;
  double local_100;
  undefined1 local_a8 [16];
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_147e74700(*(longlong *)(param_1 + 0x178),&local_110,
                *(int *)(*(longlong *)(param_1 + 0x178) + 0x30) + -1);
  FUN_14797c16e(&local_110,local_a8);
  local_114 = 0;
  local_118 = 0;
  if (((*(byte *)(*(longlong *)(param_1 + 0x178) + 0x98) & 4) == 0) &&
     ((*(byte *)(param_1 + 0x2a5) & 4) != 0)) {
    FUN_14797c16e(param_1 + 0x1d0,&local_110);
    local_a8._8_8_ = dStack_108;
    local_a8._0_8_ = local_110;
    local_98 = local_100;
    if ((ABS(local_110) <= 9.999999747378752e-05) &&
       ((ABS(dStack_108) <= 9.999999747378752e-05 && (ABS(local_100) <= 9.999999747378752e-05)))) {
      lVar8 = param_1 + 0x1c0;
      cVar7 = FUN_144729dda(lVar8);
      if ((cVar7 != '\0') && ((*(byte *)(param_1 + 0x2a5) & 8) == 0)) {
        plVar1 = *(longlong **)(param_1 + 0x1c8);
        if (plVar1 == (longlong *)0x0) {
          lVar8 = FUN_14479d2ce(lVar8);
          lVar8 = *(longlong *)(lVar8 + 0x1c8);
          if (lVar8 == 0) {
            pauVar9 = (undefined1 (*) [16])&DAT_14c8464e0;
            uVar10 = (undefined4)DAT_14c8464f0;
            uVar11 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar10 = (undefined4)*(undefined8 *)(lVar8 + 0x270);
            uVar11 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x270) >> 0x20);
            pauVar9 = (undefined1 (*) [16])(lVar8 + 0x260);
          }
          local_98 = (double)CONCAT44(uVar11,uVar10);
          local_a8 = *pauVar9;
        }
        else {
          local_170 = &local_118;
          local_178 = &local_114;
          (**(code **)(*plVar1 + 0x38))
                    (plVar1,*(undefined8 *)(param_1 + 0xa8),param_1 + 0x250,&local_110);
          (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x18))
                    (*(longlong **)(param_1 + 0x1c8),&local_138);
          lVar8 = FUN_14479d2ce(lVar8);
          lVar8 = *(longlong *)(lVar8 + 0x1c8);
          if (lVar8 == 0) {
            uVar10 = 0;
            uVar11 = 0;
            uVar12 = 0;
            uVar13 = 0;
            dVar16 = 0.0;
            dVar17 = 1.0;
          }
          else {
            uVar10 = *(undefined4 *)(lVar8 + 0x240);
            uVar11 = *(undefined4 *)(lVar8 + 0x244);
            uVar12 = *(undefined4 *)(lVar8 + 0x248);
            uVar13 = *(undefined4 *)(lVar8 + 0x24c);
            dVar16 = *(double *)(lVar8 + 0x250);
            dVar17 = *(double *)(lVar8 + 600);
          }
          dVar3 = (double)CONCAT44(uVar11,uVar10) + (double)CONCAT44(uVar11,uVar10);
          dVar4 = (double)CONCAT44(uVar13,uVar12) + (double)CONCAT44(uVar13,uVar12);
          dVar14 = dVar16 + dVar16;
          dVar18 = (double)CONCAT44(uVar11,uVar10) * dVar3;
          dVar6 = (double)CONCAT44(uVar11,uVar10) * dVar4;
          dVar2 = (double)CONCAT44(uVar11,uVar10) * dVar14;
          dVar5 = (double)CONCAT44(uVar13,uVar12) * dVar4;
          dVar15 = (double)CONCAT44(uVar13,uVar12) * dVar14;
          dVar3 = dVar3 * dVar17;
          dStack_130 = local_100 * (dVar15 - dVar3) +
                       dStack_108 * (1.0 - (dVar16 * dVar14 + dVar18)) +
                       local_110 * (dVar17 * dVar14 + dVar6) + dStack_130;
          local_98 = (dVar2 - dVar4 * dVar17) * local_110 + (dVar3 + dVar15) * dStack_108 +
                     (1.0 - (dVar5 + dVar18)) * local_100 + local_128;
          local_a8._8_4_ = SUB84(dStack_130,0);
          local_a8._0_8_ =
               local_100 * (dVar2 + dVar4 * dVar17) +
               dStack_108 * (dVar6 - dVar17 * dVar14) +
               local_110 * (1.0 - (dVar16 * dVar14 + dVar5)) + local_138;
          local_a8._12_4_ = (int)((ulonglong)dStack_130 >> 0x20);
        }
      }
    }
  }
  local_148 = *(undefined8 *)(param_1 + 0x290);
  local_158 = *(undefined4 *)(param_1 + 0x280);
  uStack_154 = *(undefined4 *)(param_1 + 0x284);
  uStack_150 = *(undefined4 *)(param_1 + 0x288);
  uStack_14c = *(undefined4 *)(param_1 + 0x28c);
  uVar10 = FUN_147ef9aee(param_1,*(undefined8 *)(param_1 + 0x178),&local_158,0);
  local_168 = 0;
  if ((*(byte *)(param_1 + 0x2a5) & 1) != 0) {
    local_168 = *(undefined4 *)(param_1 + 0x1a4);
  }
  uVar11 = 0;
  if ((*(byte *)(param_1 + 0x2a5) & 2) != 0) {
    uVar11 = local_114;
  }
  local_170 = (undefined4 *)CONCAT44(local_170._4_4_,uVar10);
  local_178 = (undefined4 *)param_2;
  FUN_147efa92e(param_1,local_a8,uVar11,local_118);
  if ((local_90 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efb3f6 FUN_147efb3f6 body=1516 status=ok
// SIG undefined FUN_147efb3f6(void)

void FUN_147efb3f6(longlong param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1d8 [32];
  float *local_1b8;
  float *local_1b0;
  float local_1a4;
  double local_1a0;
  double local_198;
  double local_190;
  float local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined1 local_118 [12];
  undefined4 uStack_10c;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (((*(longlong *)(param_1 + 0x178) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 0x158), plVar3 != (longlong *)0x0)) &&
     ((**(code **)(*plVar3 + 0x98))(plVar3,&local_1a0), local_1a0 != 0.0)) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x178) + 0x30);
    iVar2 = *(int *)(param_1 + 0x2dc);
    local_e4 = 0.0;
    local_e8 = 0.0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0x80))
              (*(longlong **)(param_1 + 0x158),&local_100);
    FUN_14797c16e(param_1 + 0x1d0,local_118);
    fVar23 = *(float *)(param_1 + 0x1a0);
    if (iVar2 < iVar1 + -1) {
      fVar24 = 0.05;
    }
    else {
      FUN_147e74700(*(longlong *)(param_1 + 0x178),&local_1a0,
                    *(int *)(*(longlong *)(param_1 + 0x178) + 0x30) + -1);
      FUN_14797c16e(&local_1a0,&local_138);
      local_108 = local_128;
      local_118._4_4_ = uStack_134;
      local_118._0_4_ = local_138;
      local_118._8_4_ = uStack_130;
      uStack_10c = uStack_12c;
      fVar24 = *(float *)(param_1 + 0x1a4);
      lVar11 = param_1 + 0x1c0;
      cVar10 = FUN_144729dda(lVar11);
      if ((cVar10 != '\0') && ((*(byte *)(*(longlong *)(param_1 + 0x178) + 0x98) & 4) == 0)) {
        plVar3 = *(longlong **)(param_1 + 0x1c8);
        if (plVar3 == (longlong *)0x0) {
          lVar11 = FUN_14479d2ce(lVar11);
          lVar11 = *(longlong *)(lVar11 + 0x1c8);
          if (lVar11 == 0) {
            pauVar12 = (undefined1 (*) [16])&DAT_14c8464e0;
            uVar14 = SUB84(DAT_14c8464f0,0);
            uVar15 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar14 = (undefined4)*(undefined8 *)(lVar11 + 0x270);
            uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x270) >> 0x20);
            pauVar12 = (undefined1 (*) [16])(lVar11 + 0x260);
          }
          local_108 = (double)CONCAT44(uVar15,uVar14);
          _local_118 = *pauVar12;
        }
        else {
          local_1b0 = &local_e8;
          local_1b8 = &local_e4;
          (**(code **)(*plVar3 + 0x38))
                    (plVar3,*(undefined8 *)(param_1 + 0xa8),param_1 + 0x250,&local_1a0);
          (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x18))
                    (*(longlong **)(param_1 + 0x1c8),&local_138);
          lVar11 = FUN_14479d2ce(lVar11);
          lVar11 = *(longlong *)(lVar11 + 0x1c8);
          if (lVar11 == 0) {
            uVar14 = 0;
            uVar15 = 0;
            uVar16 = 0;
            uVar17 = 0;
            dVar20 = 0.0;
            dVar21 = 1.0;
          }
          else {
            uVar14 = *(undefined4 *)(lVar11 + 0x240);
            uVar15 = *(undefined4 *)(lVar11 + 0x244);
            uVar16 = *(undefined4 *)(lVar11 + 0x248);
            uVar17 = *(undefined4 *)(lVar11 + 0x24c);
            dVar20 = *(double *)(lVar11 + 0x250);
            dVar21 = *(double *)(lVar11 + 600);
          }
          dVar7 = (double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(uVar15,uVar14);
          dVar8 = (double)CONCAT44(uVar17,uVar16) + (double)CONCAT44(uVar17,uVar16);
          dVar18 = dVar20 + dVar20;
          dVar22 = (double)CONCAT44(uVar15,uVar14) * dVar7;
          dVar9 = (double)CONCAT44(uVar15,uVar14) * dVar8;
          dVar5 = (double)CONCAT44(uVar15,uVar14) * dVar18;
          dVar6 = (double)CONCAT44(uVar17,uVar16) * dVar8;
          dVar19 = (double)CONCAT44(uVar17,uVar16) * dVar18;
          dVar7 = dVar7 * dVar21;
          dVar4 = local_190 * (dVar19 - dVar7) +
                  local_198 * (1.0 - (dVar20 * dVar18 + dVar22)) +
                  local_1a0 * (dVar21 * dVar18 + dVar9) + (double)CONCAT44(uStack_12c,uStack_130);
          local_108 = (dVar5 - dVar8 * dVar21) * local_1a0 + (dVar7 + dVar19) * local_198 +
                      (1.0 - (dVar6 + dVar22)) * local_190 + local_128;
          local_118._8_4_ = SUB84(dVar4,0);
          local_118._0_8_ =
               local_190 * (dVar5 + dVar8 * dVar21) +
               local_198 * (dVar9 - dVar21 * dVar18) + local_1a0 * (1.0 - (dVar20 * dVar18 + dVar6))
               + (double)CONCAT44(uStack_134,local_138);
          uStack_10c = (int)((ulonglong)dVar4 >> 0x20);
        }
      }
    }
    dVar21 = local_108 - local_f0;
    dVar8 = stack0xfffffffffffffef0 - local_f8;
    dVar7 = (double)local_118._0_8_ - local_100;
    FUN_147ef9156(param_1,&local_1a0);
    dVar5 = dVar7 * dVar7 + dVar8 * dVar8;
    dVar20 = dVar21 * dVar21 + dVar5;
    if (((dVar20 != 1.0) || (dVar4 = dVar21, dVar6 = dVar8, dVar9 = dVar7, NAN(dVar20))) &&
       (dVar4 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar9 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar20)) {
      dVar20 = 1.0 / SQRT(dVar20);
      dVar4 = dVar21 * dVar20;
      dVar6 = dVar8 * dVar20;
      dVar9 = dVar7 * dVar20;
    }
    fVar13 = (float)(dVar4 * local_190 + dVar9 * local_1a0 + dVar6 * local_198);
    *param_2 = fVar13;
    *(bool *)param_5 = fVar13 < 0.0;
    local_138 = 0.0;
    local_1a4 = 0.0;
    (**(code **)(**(longlong **)(param_1 + 0x158) + 0xa0))
              (*(longlong **)(param_1 + 0x158),&local_138,&local_1a4);
    fVar13 = (float)SQRT(dVar5);
    *param_3 = fVar13;
    fVar24 = fVar24 * local_138 + local_e4;
    if (fVar23 <= fVar24) {
      fVar23 = fVar24;
    }
    *(bool *)param_6 = fVar23 < fVar13;
    *param_4 = (float)ABS(dVar21);
    *(bool *)param_7 = local_1a4 * *(float *)(param_1 + 0x1a8) + local_e8 < (float)ABS(dVar21);
  }
  if ((local_e0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efb9e4 FUN_147efb9e4 body=162 status=ok
// SIG undefined FUN_147efb9e4(void)

void FUN_147efb9e4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x160);
  if (lVar2 != 0) {
    uVar3 = FUN_1459eab3a();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x68))(plVar4,param_1);
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) {
      FUN_14485c47a(param_1 + 0x160,lVar2);
      cVar1 = (**(code **)(*param_2 + 0x60))(param_2,param_1,param_3);
      if (cVar1 == '\0') {
        *(undefined8 *)(param_1 + 0x160) = 0;
      }
    }
  }
  return;
}



// FUNCTION 147efba86 FUN_147efba86 body=172 status=ok
// SIG undefined FUN_147efba86(void)

void FUN_147efba86(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    uVar2 = (**(code **)(*param_2 + 8))(param_2);
    local_28 = 0;
    FUN_14485c47a(&local_28,uVar2);
    if (((*(int *)(param_1 + 0x160) == (int)local_28) &&
        (*(int *)(param_1 + 0x164) == local_28._4_4_)) ||
       ((cVar1 = FUN_144729dda(param_1 + 0x160), cVar1 == '\0' &&
        (cVar1 = FUN_144729dda(&local_28), cVar1 == '\0')))) {
      (**(code **)(*param_2 + 0x68))(param_2,param_1);
      *(undefined8 *)(param_1 + 0x160) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efbb34 FUN_147efbb34 body=278 status=ok
// SIG undefined FUN_147efbb34(void)

bool FUN_147efbb34(longlong *param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  lStack_30 = 0;
  cVar1 = FUN_14493c216(&local_38,0);
  lVar4 = 0;
  if (cVar1 != '\0') {
    lVar4 = lStack_30;
  }
  if (((param_1[0x2b] != lVar4 & (param_2 ^ 1)) != 0) || (lVar4 = param_1[0x15], lVar4 == 0))
  goto LAB_147efbbe3;
  lVar2 = FUN_144a7cbb2();
  if (*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
LAB_147efbbab:
    lVar4 = param_1[0x15];
    if (lVar4 == 0) goto LAB_147efbbe3;
    lVar2 = FUN_14490fee6();
    if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         != lVar2 + 0x30)) || (lVar4 = *(longlong *)(lVar4 + 0x3d0), lVar4 == 0))
    goto LAB_147efbbe3;
  }
  else if (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30) goto LAB_147efbbab;
  FUN_147efbcde(&local_40);
  FUN_147efbc4c(lVar4 + 0x20d,param_1,local_40);
  uVar3 = FUN_147efbd92(lVar4);
  (**(code **)(*param_1 + 0x4d0))(param_1,uVar3);
LAB_147efbbe3:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1[0x2b] != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efbc4c FUN_147efbc4c body=145 status=ok
// SIG undefined FUN_147efbc4c(void)

void FUN_147efbc4c(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_14485c47a(&local_58);
  uStack_50 = param_3;
  FUN_14113f0c0(&local_58);
  uVar2 = uStack_50;
  uVar1 = local_58;
  FUN_14067d554(param_1,&local_48);
  local_40 = uVar1;
  uStack_38 = uVar2;
  bVar3 = FUN_140a28ca8(param_1 + -0x20d,local_48);
  *param_1 = *param_1 | bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efbcde FUN_147efbcde body=179 status=ok
// SIG undefined FUN_147efbcde(void)

undefined8 * FUN_147efbcde(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  wchar_t local_28 [12];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb20bc0) {
    FUN_144b3d300(&DAT_14cb20bc0);
    if (DAT_14cb20bc0 == -1) {
      builtin_wcsncpy(local_28,L"OnActorBump",0xc);
      FUN_1446f470e(&DAT_14cb20bb8,local_28,1);
      _Init_thread_footer(&DAT_14cb20bc0);
    }
  }
  *param_1 = DAT_14cb20bb8;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efbd92 FUN_147efbd92 body=126 status=ok
// SIG undefined FUN_147efbd92(void)

undefined8 FUN_147efbd92(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1459e846a();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_144881120(param_1,&local_18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1459e846a();
    uVar2 = FUN_144718840(lVar1,uVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efbe12 FUN_147efbe12 body=70 status=ok
// SIG undefined FUN_147efbe12(void)

void FUN_147efbe12(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  if (*(longlong *)(param_1 + 0x178) != 0) {
    cVar2 = FUN_144729dda(param_1 + 0x1c0);
    if (cVar2 != '\0') {
      lVar1 = FUN_14479d2ce(param_1 + 0x1c0);
      if (lVar1 == param_3) {
        *(byte *)(param_1 + 0x2a5) = *(byte *)(param_1 + 0x2a5) | 0x20;
      }
    }
  }
  return;
}



// FUNCTION 147efbe58 FUN_147efbe58 body=198 status=ok
// SIG undefined FUN_147efbe58(void)

undefined8 FUN_147efbe58(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x178);
  if (lVar1 != 0) {
    if ((*(uint *)(lVar1 + 0x98) & 2) != 0) {
      uVar3 = 0;
      if (((*(uint *)(lVar1 + 0x98) & 1) == 0) || (*(int *)(lVar1 + 0x30) < 2)) goto LAB_147efbe8a;
      lVar1 = FUN_14479d2ce(lVar1 + 0x9c);
      if (lVar1 != 0) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0x178) + 0x70);
        do {
          if (*piVar2 == DAT_14cb1dbc8) {
            uVar3 = CONCAT71((int7)((ulonglong)piVar2 >> 8),1);
            if (*(longlong *)(param_1 + 0x178) != 0) {
              FUN_147efbf32(param_1,local_40);
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
            }
            goto LAB_147efbe8a;
          }
          piVar2 = *(int **)(piVar2 + 2);
        } while (piVar2 != (int *)0x0);
        uVar3 = 1;
        goto LAB_147efbe8a;
      }
    }
  }
  uVar3 = 0;
LAB_147efbe8a:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efbf32 FUN_147efbf32 body=440 status=ok
// SIG undefined FUN_147efbf32(void)

undefined4 * FUN_147efbf32(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x158) != 0) &&
     (((lVar8 = *(longlong *)(param_1 + 0xb0), lVar8 != 0 ||
       (lVar8 = FUN_1448abda6(param_1), lVar8 != 0)) &&
      (lVar8 = *(longlong *)(lVar8 + 0x168), lVar8 != 0)))) {
    lVar7 = FUN_1409035a4();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        == lVar7 + 0x30)) {
      FUN_147bcbdb0(*(undefined8 *)(param_1 + 0x158),&local_40);
      if ((1.0 < ABS(local_40 - *(double *)(param_1 + 0x340))) ||
         ((1.0 < ABS(local_38 - *(double *)(param_1 + 0x348)) ||
          (1.0 < ABS(local_30 - *(double *)(param_1 + 0x350)))))) {
        if ((*(longlong *)(param_1 + 0x158) == 0) ||
           (cVar6 = FUN_144729dda(param_1 + 0x150), cVar6 == '\0')) {
          local_48 = DAT_14c8464f0;
          local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x158) + 0xa8))
                    (*(longlong **)(param_1 + 0x158),&local_58);
        }
        local_70 = &local_68;
        local_68 = 0;
        uStack_60 = 0;
        local_78 = *(undefined8 *)(param_1 + 0x170);
        FUN_143836e36(lVar8,&local_40,(undefined4 *)(param_1 + 0x340),&local_58);
      }
      uVar1 = *(undefined4 *)(param_1 + 0x340);
      uVar2 = *(undefined4 *)(param_1 + 0x344);
      uVar3 = *(undefined4 *)(param_1 + 0x348);
      uVar4 = *(undefined4 *)(param_1 + 0x34c);
      uVar5 = *(undefined8 *)(param_1 + 0x358);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x350);
      *(undefined8 *)(param_2 + 6) = uVar5;
      *param_2 = uVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      goto LAB_147efbfaf;
    }
  }
  *(undefined8 *)(param_2 + 4) = DAT_14c8464f0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *param_2 = (undefined4)DAT_14c8464e0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  *(undefined8 *)(param_2 + 6) = 0;
LAB_147efbfaf:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147efc0ec FUN_147efc0ec body=426 status=ok
// SIG undefined FUN_147efc0ec(void)

undefined8 FUN_147efc0ec(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90 [12];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  if (((*(byte *)(param_1 + 0x2a5) & 0x10) != 0) && (*(longlong *)(param_1 + 0x158) != 0)) {
    dVar2 = *(double *)(lVar5 + 0x6d0);
    cVar3 = FUN_144729dda(param_1 + 0x150);
    if ((cVar3 != '\0') &&
       (((double)*(float *)(param_1 + 0x2ac) + *(double *)(param_1 + 0x2b8) < dVar2 &&
        (0 < *(int *)(param_1 + 0x2b0))))) {
      *(double *)(param_1 + 0x2b8) = dVar2;
      iVar4 = *(int *)(param_1 + 0x2d0);
      if (iVar4 == *(int *)(param_1 + 0x2c0)) {
        *(int *)(param_1 + 0x2d0) = iVar4 + 1;
        if (*(int *)(param_1 + 0x2d4) == iVar4) {
          FUN_147f0d020((longlong *)(param_1 + 0x2c8),iVar4);
        }
        lVar5 = *(longlong *)(param_1 + 0x2c8);
        lVar7 = (longlong)iVar4 * 0x68;
        puVar1 = (undefined8 *)(lVar5 + 0x50 + lVar7);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x40 + lVar7);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar7);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar7);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar5 + lVar7) = 0;
        ((undefined8 *)(lVar5 + lVar7))[1] = 0;
        *(undefined8 *)(lVar5 + 0x60 + lVar7) = 0;
      }
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x88))
                (*(longlong **)(param_1 + 0x158),&local_98);
      plVar9 = (longlong *)
               ((longlong)*(int *)(param_1 + 0x2c0) * 0x68 + *(longlong *)(param_1 + 0x2c8));
      if (DAT_14c950c29 == '\x01') {
        if (local_98 == 0) {
          local_98 = 0;
        }
        else {
          FUN_1456cec3c();
        }
      }
      *plVar9 = local_98;
      plVar8 = local_90;
      for (lVar5 = 0xc; plVar9 = plVar9 + 1, lVar5 != 0; lVar5 = lVar5 + -1) {
        *plVar9 = *plVar8;
        plVar8 = plVar8 + 1;
      }
      iVar4 = *(int *)(param_1 + 0x2c0) + 1;
      *(int *)(param_1 + 0x2c0) = iVar4 % *(int *)(param_1 + 0x2b0);
      uVar6 = CONCAT71((uint7)((ulonglong)((longlong)iVar4 / (longlong)*(int *)(param_1 + 0x2b0)) >>
                              8) & 0xffffff,1);
      goto LAB_147efc133;
    }
  }
  uVar6 = 0;
LAB_147efc133:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efc298 FUN_147efc298 body=84 status=ok
// SIG undefined FUN_147efc298(void)

void FUN_147efc298(longlong param_1,char param_2)

{
  *(byte *)(param_1 + 0x2a5) = *(byte *)(param_1 + 0x2a5) & 0xef | param_2 << 4;
  *(undefined8 *)(param_1 + 0x2b8) = 0;
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (-1 < *(int *)(param_1 + 0x2d4)) {
    *(undefined4 *)(param_1 + 0x2d0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  FUN_147f0ca96(param_1 + 0x2c8,0);
  return;
}



// FUNCTION 147efc2ec FUN_147efc2ec body=306 status=ok
// SIG undefined FUN_147efc2ec(void)

void FUN_147efc2ec(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  if ((*(longlong **)(param_1 + 0x158) != (longlong *)0x0) && (*(char *)(param_1 + 0x2a5) < '\0')) {
    uVar9 = (**(code **)(**(longlong **)(param_1 + 0x158) + 200))();
    iVar4 = *(int *)(param_1 + 0x310);
    fVar7 = (float)uVar9;
    if ((fVar7 != *(float *)(param_1 + 0x30c)) || (NAN(fVar7) || NAN(*(float *)(param_1 + 0x30c))))
    {
      fVar1 = *(float *)(param_1 + 0x308);
      fVar8 = (float)(**(code **)(**(longlong **)(param_1 + 0x158) + 0x108))
                               (*(longlong **)(param_1 + 0x158),uVar9);
      *(float *)(param_1 + 0x308) = fVar8;
      *(float *)(param_1 + 0x30c) = fVar7;
      if (iVar4 != -1) {
        if ((fVar1 == fVar8) && (!NAN(fVar1) && !NAN(fVar8))) {
          return;
        }
      }
    }
    else if (iVar4 != -1) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x178);
    if (lVar2 != 0) {
      *(undefined4 *)(param_1 + 0x310) = 0;
      uVar5 = (ulonglong)*(uint *)(lVar2 + 0x30);
      lVar6 = uVar5 * 0x30 + -0x20;
      dVar10 = 0.0;
      do {
        iVar4 = (int)uVar5;
        if (iVar4 < 2) {
          return;
        }
        lVar3 = *(longlong *)(lVar2 + 0x28);
        dVar11 = *(double *)(lVar3 + -0x40 + lVar6) - *(double *)(lVar3 + -0x10 + lVar6);
        dVar13 = *(double *)(lVar3 + -0x38 + lVar6) - *(double *)(lVar3 + -8 + lVar6);
        dVar12 = *(double *)(lVar3 + -0x30 + lVar6) - *(double *)(lVar3 + lVar6);
        dVar10 = dVar10 + SQRT(dVar12 * dVar12 + dVar13 * dVar13 + dVar11 * dVar11);
        uVar5 = (ulonglong)(iVar4 - 1);
        lVar6 = lVar6 + -0x30;
      } while (dVar10 <= (double)*(float *)(param_1 + 0x308));
      *(int *)(param_1 + 0x310) = iVar4 + -2;
    }
  }
  return;
}



// FUNCTION 147efc41e FUN_147efc41e body=209 status=ok
// SIG undefined FUN_147efc41e(void)

void FUN_147efc41e(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)param_1[0x15];
  if (plVar1 != (longlong *)0x0) {
    lVar2 = FUN_14104c5c4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      if (*(char *)((longlong)param_1 + 0x2a4) == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_78);
      }
      if (*(char *)((longlong)param_1 + 0x2a4) == '\x03') {
        (**(code **)(*param_1 + 0x4d8))(param_1,&local_38,(*(uint *)(plVar1 + 0x8c) & 0x10) >> 4);
        local_48 = local_28;
        local_58 = local_38;
        uStack_54 = uStack_34;
        uStack_50 = uStack_30;
        uStack_4c = uStack_2c;
        (**(code **)(*plVar1 + 0x820))(plVar1,&local_58,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efc502 FUN_147efc502 body=191 status=ok
// SIG undefined FUN_147efc502(void)

undefined8 FUN_147efc502(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb205a0) {
    FUN_144b3d300(&DAT_14cb205a0);
    if (DAT_14cb205a0 == -1) {
      if (DAT_14cb204e8 == 0) {
        uVar1 = FUN_140d9472b();
        DAT_14cb204e8 = FUN_14171c317(FUN_14642ec45,uVar1,L"EPathFollowingStatus");
      }
      DAT_14cb20598 = DAT_14cb204e8;
      _Init_thread_footer(&DAT_14cb205a0);
    }
  }
  if (DAT_14cb20598 == 0) {
    FUN_140056680(param_2,L"Unknown");
  }
  else {
    FUN_1401cfad2(DAT_14cb20598,param_2,*(undefined1 *)(param_1 + 0x2a4));
  }
  return param_2;
}



// FUNCTION 147efc5c2 FUN_147efc5c2 body=627 status=ok
// SIG undefined FUN_147efc5c2(void)

void FUN_147efc5c2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xdc) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
  *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
  local_58 = 0;
  FUN_147efc502(0,&local_48);
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_80,L"  Move status: %s",puVar4);
  FUN_147d8f316(param_2 + 0xa8,&local_80,&local_58);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x2a4) == '\x03') {
    lVar1 = *(longlong *)(param_1 + 0x178);
    iVar2 = -1;
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x98) & 2) != 0)) {
      iVar2 = *(int *)(lVar1 + 0x30);
      if (*(int *)(lVar1 + 0x30) < 2) {
        iVar2 = -1;
      }
      if ((*(uint *)(lVar1 + 0x98) & 1) == 0) {
        iVar2 = -1;
      }
    }
    lVar1 = FUN_14479d2ce(param_1 + 0x1c0);
    if (lVar1 == 0) {
      FUN_140056680(&local_58,&DAT_149e01fe8);
    }
    else {
      local_80 = *(longlong *)(lVar1 + 0x18);
      FUN_1400021e4(&local_80,&local_58);
    }
    puVar4 = &DAT_149dfb77a;
    puVar3 = &DAT_149dfb77a;
    if (local_50 != 0) {
      puVar3 = (undefined2 *)CONCAT44(uStack_54,local_58);
    }
    FUN_14797c16e(param_1 + 0x1d0,&local_80);
    local_98 = (undefined2 *)local_70;
    FUN_140002266(&local_68,L"X=%3.3f Y=%3.3f Z=%3.3f",local_80,local_78);
    if (local_60 != 0) {
      puVar4 = (undefined2 *)CONCAT44(uStack_64,local_68);
    }
    local_98 = puVar4;
    local_90 = puVar3;
    FUN_140002266(&local_48,L"  Move target [%d/%d]: %s (%s)",*(undefined4 *)(param_1 + 0x2dc),iVar2
                 );
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    local_68 = 0;
    FUN_147efc502(param_1,&local_58);
    if (local_50 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)CONCAT44(uStack_54,local_58);
    }
    FUN_140002266(&local_80,L"  Move status: %s",puVar4);
    FUN_147d8f316(param_2 + 0xa8,&local_80,&local_68);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efce12 FUN_147efce12 body=279 status=ok
// SIG undefined FUN_147efce12(void)

undefined8 * FUN_147efce12(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  (**(code **)(*param_1 + 0x4e8))(param_1,&local_68);
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = uStack_60 & 0xffffffff;
  if (0 < (int)uStack_60) {
    lVar4 = 8;
    lVar5 = 0;
    do {
      iVar1 = *(int *)(local_68 + lVar4) + -1;
      if (*(int *)(local_68 + lVar4) == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,*(undefined8 *)(local_68 + -8 + lVar4),iVar1);
      if (((int)uStack_70 <= lVar5) ||
         (puVar2 = (undefined2 *)&DAT_149e35320, *(int *)(local_78 + lVar5 * 4) != 1)) {
        puVar2 = &DAT_149e19f34;
      }
      FUN_1400020e8(param_2,puVar2,2);
      lVar5 = lVar5 + 1;
      uVar3 = (ulonglong)(int)uStack_60;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < (longlong)uVar3);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
    uVar3 = uStack_60 & 0xffffffff;
  }
  FUN_1447a1747(local_68,uVar3);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efcf2a FUN_147efcf2a body=61 status=ok
// SIG undefined FUN_147efcf2a(void)

undefined8 FUN_147efcf2a(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x158) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x150);
    if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147efcf5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x158) + 0x10))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 147efcf68 FUN_147efcf68 body=47 status=ok
// SIG undefined FUN_147efcf68(void)

void FUN_147efcf68(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x118) + 0x498))
            (param_1 + -0x118,param_2,0x40,DAT_14cb1effc,0);
  return;
}



// FUNCTION 147efcfa0 FUN_147efcfa0 body=166 status=ok
// SIG undefined FUN_147efcfa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147efcfa0(longlong param_1,undefined4 param_2)

{
  short sVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb205b0) {
    FUN_144b3d300(&DAT_14cb205b0);
    if (DAT_14cb205b0 == -1) {
      _DAT_14cb205a8 = FUN_147e9a7db();
      _Init_thread_footer(&DAT_14cb205b0);
    }
  }
  sVar1 = *(short *)(param_1 + 0x218);
  FUN_147ea5e7c(param_1 + 0x208,param_2);
  if (sVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147efd014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + -0x110) + 0x4a0))
            (param_1 + -0x110,*(undefined4 *)(param_1 + 0x228),0);
  return;
}



// FUNCTION 147efd046 FUN_147efd046 body=85 status=ok
// SIG undefined FUN_147efd046(void)

void FUN_147efd046(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x218);
  FUN_147ea5ea0(param_1 + 0x208);
  if ((sVar1 != 0) && (*(short *)(param_1 + 0x218) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000147efd098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + -0x110) + 0x4a8))
              ((longlong *)(param_1 + -0x110),DAT_14cb1effc);
    return;
  }
  return;
}



// FUNCTION 147efd09c FUN_147efd09c body=80 status=ok
// SIG undefined FUN_147efd09c(void)

void FUN_147efd09c(longlong param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x218);
  FUN_147ea5ed0(param_1 + 0x208);
  if (sVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000147efd0e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + -0x110) + 0x4a8))(param_1 + -0x110,DAT_14cb1effc);
    return;
  }
  return;
}



// FUNCTION 147efd0f8 FUN_147efd0f8 body=78 status=ok
// SIG undefined FUN_147efd0f8(void)

void FUN_147efd0f8(longlong *param_1)

{
  undefined1 auStack_38 [44];
  undefined2 local_c;
  undefined1 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(char *)((longlong)param_1 + 0x2a4) == '\x01') {
    local_a = 5;
    local_c = 0;
    (**(code **)(*param_1 + 0x4b0))();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efd14c FUN_147efd14c body=58 status=ok
// SIG undefined FUN_147efd14c(void)

void FUN_147efd14c(undefined8 param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_147ecd24c();
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x498))(plVar1,param_1,0x40,DAT_14cb1effc,0);
  }
  return;
}



// FUNCTION 147efd186 FUN_147efd186 body=33 status=ok
// SIG undefined FUN_147efd186(void)

bool FUN_147efd186(void)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = FUN_147ecd24c();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(lVar1 + 0x2a4) != '\0';
  }
  return bVar2;
}



// FUNCTION 147efd1a7 FUN_147efd1a7 body=96 status=ok
// SIG undefined FUN_147efd1a7(void)

void FUN_147efd1a7(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_1457246e8(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efd208 FUN_147efd208 body=161 status=ok
// SIG undefined FUN_147efd208(void)

void FUN_147efd208(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88 [9];
  undefined1 local_40 [4];
  undefined8 local_3c;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1458872f0(local_40);
  local_98 = *param_2;
  local_90 = *(undefined4 *)(param_2 + 1);
  puVar2 = param_2 + 2;
  puVar3 = local_88;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_40[0] = *(undefined1 *)(param_2 + 0xb);
  local_3c = *(undefined8 *)((longlong)param_2 + 0x5c);
  local_34 = *(undefined1 *)((longlong)param_2 + 100);
  FUN_1447cd2ec(param_1,&local_98);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efd2cc FUN_147efd2cc body=116 status=ok
// SIG undefined FUN_147efd2cc(void)

void FUN_147efd2cc(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x17c) < *(int *)(param_1 + 0x150)) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1);
    }
    lVar1 = FUN_147efe474(lVar1);
    if (lVar1 != 0) {
      FUN_147f00010(lVar1,param_1);
    }
    if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
      FUN_147f0dcf6(param_1 + 0x148);
      FUN_147f0de3a(param_1 + 0x148);
      return;
    }
  }
  return;
}



// FUNCTION 147efd346 FUN_147efd346 body=271 status=ok
// SIG undefined FUN_147efd346(void)

void FUN_147efd346(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  uStack_48 = 0;
  uStack_44 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar2 = &local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147efd456(param_1,local_30,puVar2);
  *param_3 = uVar1;
  if (CONCAT44(uStack_4c,uStack_50) != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efd456 FUN_147efd456 body=269 status=ok
// SIG undefined FUN_147efd456(void)

undefined8 FUN_147efd456(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0x65) & 2) == 0)) &&
     ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    local_48 = 0;
    FUN_14485c47a(&local_48);
    iVar2 = (int)local_48;
    iVar3 = local_48._4_4_;
    uVar4 = FUN_144a78877(local_48 & 0xffffffff,local_48._4_4_);
    if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
      lVar7 = param_1 + 0x180;
      if (*(longlong *)(param_1 + 0x188) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x188);
      }
      iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 400) - 1U & uVar4) * 4);
      if (iVar8 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x148);
        do {
          lVar5 = (longlong)iVar8 * 0x38;
          lVar1 = lVar7 + lVar5;
          if ((*(int *)(lVar7 + lVar5) == iVar2) && (*(int *)(lVar7 + 4 + lVar5) == iVar3)) {
            if (lVar1 == 0) goto LAB_147efd4ba;
            FUN_147efe3ae(&local_48,lVar1 + 8);
            FUN_147f001c2(param_3,&local_48);
            if (local_40 != 0) {
              FUN_1400020a8();
            }
            uVar6 = 1;
            break;
          }
          iVar8 = *(int *)(lVar1 + 0x30);
          uVar6 = 0;
        } while (iVar8 != -1);
        goto LAB_147efd4bc;
      }
    }
  }
LAB_147efd4ba:
  uVar6 = 0;
LAB_147efd4bc:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 147efd564 FUN_147efd564 body=290 status=ok
// SIG undefined FUN_147efd564(void)

void FUN_147efd564(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38[2];
  if ((local_38[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147efd688(param_1,&local_40,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efd688 FUN_147efd688 body=683 status=ok
// SIG undefined FUN_147efd688(void)

void FUN_147efd688(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  float *pfVar5;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  byte local_9c [12];
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = *param_2;
  if ((local_a8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147efe688(local_9c,&local_a8);
  iVar4 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar4) {
    FUN_140c5c1ec(param_3);
  }
  local_88 = param_1 + 0x158;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  local_78 = 0;
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_1449c0562(&local_90);
  }
  local_b8 = local_80;
  iStack_b4 = iStack_7c;
  local_b0 = local_78;
  local_ac = local_74;
  local_c8 = local_90;
  local_c0 = local_88;
  local_d0 = (longlong *)(param_1 + 0x148);
  if (iStack_7c < *(int *)(local_88 + 0x18)) {
    do {
      lVar3 = *param_2;
      if ((((lVar3 == 0) || (lVar2 = FUN_1411a19f0(), lVar2 == 0)) ||
          (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
         ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30 || (*param_2 == 0)))) {
        cVar1 = FUN_147eff9f2((longlong)iStack_b4 * 0x38 + *local_d0 + 8);
        if (cVar1 != '\0') {
LAB_147efd86a:
          lVar3 = FUN_14479d2ce((longlong)iStack_b4 * 0x38 + *local_d0 + 8);
          if (lVar3 != 0) {
            iVar4 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar4 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
              FUN_1447d05f2(param_3,iVar4);
            }
            *(longlong *)(*param_3 + (longlong)iVar4 * 8) = lVar3;
          }
        }
      }
      else if (((int)(uint)local_9c[0] < *(int *)(*local_d0 + 0x18 + (longlong)iStack_b4 * 0x38)) &&
              (lVar3 = *(longlong *)(*local_d0 + (longlong)iStack_b4 * 0x38 + 0x10),
              (*(byte *)(lVar3 + 0x54 + (ulonglong)local_9c[0] * 0x58) & 2) != 0)) {
        pfVar5 = (float *)(lVar3 + (ulonglong)local_9c[0] * 0x58);
        cVar1 = *(char *)(pfVar5 + 0x12);
        FUN_1458872f0(&local_90);
        if ((cVar1 != (char)local_90) &&
           ((0.0 < pfVar5[2] && (*pfVar5 <= 3.4028235e+38 && *pfVar5 != 3.4028235e+38))))
        goto LAB_147efd86a;
      }
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (iStack_b4 < *(int *)(local_c0 + 0x18));
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efd936 FUN_147efd936 body=290 status=ok
// SIG undefined FUN_147efd936(void)

void FUN_147efd936(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38 [4];
  
  local_38[3] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
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
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_40 = local_38[2];
  if ((local_38[2] != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147efda5a(param_1,&local_40,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[3] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efda5a FUN_147efda5a body=719 status=ok
// SIG undefined FUN_147efda5a(void)

void FUN_147efda5a(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  byte local_9c [12];
  undefined8 local_90;
  longlong local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = *param_2;
  if ((local_a8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147efe688(local_9c,&local_a8);
  iVar5 = *(int *)(param_1 + 0x150) - *(int *)(param_1 + 0x17c);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_3 + 0xc) < iVar5) {
    FUN_140c5c1ec(param_3);
  }
  local_88 = param_1 + 0x158;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  iStack_7c = 0;
  local_78 = 0;
  if (*(int *)(param_1 + 0x170) != 0) {
    FUN_1449c0562(&local_90);
  }
  local_b8 = local_80;
  iStack_b4 = iStack_7c;
  local_b0 = local_78;
  local_ac = local_74;
  local_c8 = local_90;
  local_c0 = local_88;
  local_d0 = (longlong *)(param_1 + 0x148);
  if (iStack_7c < *(int *)(local_88 + 0x18)) {
    lVar6 = (ulonglong)local_9c[0] * 0x58;
    do {
      lVar1 = *param_2;
      if ((((lVar1 == 0) || (lVar3 = FUN_1411a19f0(), lVar3 == 0)) ||
          (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
           lVar3 + 0x30 || (*param_2 == 0)))) {
        cVar2 = FUN_147f0010c((longlong)iStack_b4 * 0x38 + *local_d0 + 8);
        if (cVar2 != '\0') {
LAB_147efdc24:
          cVar2 = FUN_144729dda((longlong)iStack_b4 * 0x38 + *local_d0 + 8);
          if (cVar2 != '\0') {
            uVar4 = FUN_14479d2ce((longlong)iStack_b4 * 0x38 + *local_d0 + 8);
            iVar5 = (int)param_3[1];
            *(uint *)(param_3 + 1) = iVar5 + 1U;
            if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
              FUN_1447d05f2(param_3,iVar5);
            }
            *(undefined8 *)(*param_3 + (longlong)iVar5 * 8) = uVar4;
          }
        }
      }
      else if ((int)(uint)local_9c[0] < *(int *)(*local_d0 + 0x18 + (longlong)iStack_b4 * 0x38)) {
        lVar1 = *local_d0 + (longlong)iStack_b4 * 0x38;
        lVar3 = *(longlong *)(lVar1 + 0x10);
        cVar2 = *(char *)(lVar3 + 0x48 + lVar6);
        FUN_1458872f0(&local_90);
        if (((cVar2 != (char)local_90) && (pfVar7 = (float *)(lVar3 + lVar6), 0.0 < pfVar7[2])) &&
           ((*pfVar7 <= 3.4028235e+38 && *pfVar7 != 3.4028235e+38 &&
            ((*(byte *)(*(longlong *)(lVar1 + 0x10) + 0x54 + lVar6) & 4) == 0))))
        goto LAB_147efdc24;
      }
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (iStack_b4 < *(int *)(local_c0 + 0x18));
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147efdd2c FUN_147efdd2c body=184 status=ok
// SIG undefined FUN_147efdd2c(void)

void FUN_147efdd2c(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x478))(param_1,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efdde6 FUN_147efdde6 body=355 status=ok
// SIG undefined FUN_147efdde6(void)

void FUN_147efdde6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  lVar1 = local_30;
  plVar2 = local_48;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(local_30);
  }
  local_28 = lVar1;
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar1);
  }
  FUN_1438599c6(param_1,&local_28,plVar2);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efdf50 FUN_147efdf50 body=192 status=ok
// SIG undefined FUN_147efdf50(void)

void FUN_147efdf50(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_147efe012(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efe012 FUN_147efe012 body=156 status=ok
// SIG undefined FUN_147efe012(void)

undefined4 FUN_147efe012(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  byte local_38 [12];
  byte local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  if ((local_40 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147efe688(local_38,&local_40);
  FUN_1458872f0(local_2c);
  if (local_38[0] != local_2c[0]) {
    lVar2 = FUN_147efe4dc(param_1,local_38);
    if (lVar2 != 0) {
      uVar1 = CONCAT31((int3)(*(uint *)(param_1 + 0x140) >> 8),
                       (*(uint *)(param_1 + 0x140) >> (local_38[0] & 0x1f) & 1) != 0);
      goto LAB_147efe070;
    }
  }
  uVar1 = 0;
LAB_147efe070:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efe0b0 FUN_147efe0b0 body=243 status=ok
// SIG undefined FUN_147efe0b0(void)

void FUN_147efe0b0(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  char local_21;
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
  local_21 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_21);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_21);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_21 != '\x02') && (local_21 != '\x04')) {
    (**(code **)(*param_1 + 0x480))(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efe1ba FUN_147efe1ba body=64 status=ok
// SIG undefined FUN_147efe1ba(void)

void FUN_147efe1ba(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  lVar1 = FUN_147efe474(lVar1);
  if (lVar1 != 0) {
    FUN_14385946c(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 147efe200 FUN_147efe200 body=267 status=ok
// SIG undefined FUN_147efe200(void)

void FUN_147efe200(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  iVar1 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147efe30c(param_1,&local_38,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efe30c FUN_147efe30c body=158 status=ok
// SIG undefined FUN_147efe30c(void)

void FUN_147efe30c(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined1 auStack_78 [36];
  char local_54 [4];
  undefined8 local_50;
  longlong local_48;
  char local_40 [4];
  undefined8 local_3c;
  char local_34 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = *param_2;
  if ((local_48 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_147efe688(local_40,&local_48);
  FUN_1458872f0(local_34);
  if (local_40[0] != local_34[0]) {
    local_54[0] = local_40[0];
    local_50 = local_3c;
    FUN_147eff3fa(param_1,local_54,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147efe3ae FUN_147efe3ae body=118 status=ok
// SIG undefined FUN_147efe3ae(void)

longlong * FUN_147efe3ae(longlong *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar3 = FUN_14479d2ce(param_2);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *param_1 = lVar3;
  FUN_147efe424(param_1 + 1,param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0x24) & 1;
  uVar1 = *(uint *)(param_1 + 3);
  *(uint *)(param_1 + 3) = uVar1 & 0xfffffffe | uVar2;
  *(uint *)(param_1 + 3) = uVar1 & 0xfffffffc | uVar2 | *(uint *)(param_2 + 0x24) & 2;
  return param_1;
}



// FUNCTION 147efe424 FUN_147efe424 body=79 status=ok
// SIG undefined FUN_147efe424(void)

undefined8 * FUN_147efe424(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147f0d3ba(param_1,iVar1);
      FUN_147f0d429(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147efe474 FUN_147efe474 body=103 status=ok
// SIG undefined FUN_147efe474(void)

undefined8 FUN_147efe474(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a7757c();
    if ((((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) ||
        (param_1 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1), param_1 != 0)) &&
       (*(longlong *)(param_1 + 0x180) != 0)) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x118);
    }
  }
  return 0;
}



// FUNCTION 147efe4dc FUN_147efe4dc body=213 status=ok
// SIG undefined FUN_147efe4dc(void)

longlong FUN_147efe4dc(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [36];
  char local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar2 == 0) {
LAB_147efe55e:
    lVar5 = 0;
  }
  else {
    cVar1 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x110);
    lVar5 = 0;
    uVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + uVar6);
      if ((lVar4 != 0) && (FUN_147efe8d8(lVar4,local_54), local_54[0] == cVar1)) {
        if ((int)(~uVar6 >> 3) == 0) goto LAB_147efe55e;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x110) + (lVar7 >> 0x20) * 8);
        if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
          FUN_1456cec3c(lVar5);
        }
        break;
      }
      lVar7 = lVar7 + 0x100000000;
      uVar6 = uVar6 + 8;
    } while ((longlong)iVar2 * 8 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 147efe5b2 FUN_147efe5b2 body=213 status=ok
// SIG undefined FUN_147efe5b2(void)

longlong FUN_147efe5b2(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [36];
  char local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0x118);
  if ((longlong)iVar2 == 0) {
LAB_147efe634:
    lVar5 = 0;
  }
  else {
    cVar1 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x110);
    lVar5 = 0;
    uVar6 = 0;
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + uVar6);
      if ((lVar4 != 0) && (FUN_147efe8d8(lVar4,local_54), local_54[0] == cVar1)) {
        if ((int)(~uVar6 >> 3) == 0) goto LAB_147efe634;
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x110) + (lVar7 >> 0x20) * 8);
        if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
          FUN_1456cec3c(lVar5);
        }
        break;
      }
      lVar7 = lVar7 + 0x100000000;
      uVar6 = uVar6 + 8;
    } while ((longlong)iVar2 * 8 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}


