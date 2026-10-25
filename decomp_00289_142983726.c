// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142983726 FUN_142983726 body=2299 status=ok
// SIG undefined FUN_142983726(void)

void FUN_142983726(undefined8 param_1,undefined8 *param_2,longlong *param_3,int param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,char *param_8)

{
  double *pdVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  byte bVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined4 uVar23;
  longlong lVar24;
  longlong lVar25;
  bool bVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_368 [32];
  double *local_348;
  undefined4 local_340;
  longlong *local_338;
  int local_32c;
  longlong *local_328;
  undefined8 *local_320;
  double *local_318;
  longlong *local_310;
  double *local_308;
  double *local_300;
  undefined1 *local_2f8;
  double **local_2f0;
  longlong *local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  double local_298;
  double dStack_290;
  double local_288;
  longlong local_278;
  ulonglong uStack_270;
  double local_268 [2];
  double local_258;
  undefined8 uStack_250;
  double local_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined1 *local_228;
  longlong **local_220;
  longlong local_218;
  ulonglong uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined1 local_158 [112];
  longlong local_e8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar19 = 0x7fffffff;
  if (param_4 != 0) {
    iVar19 = param_4;
  }
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_1e8 = 1.79769313486232e+308;
  local_1e0 = 1.79769313486232e+308;
  local_1d8 = 1.79769313486232e+308;
  local_1d0 = -1.79769313486232e+308;
  local_1c8 = -1.79769313486232e+308;
  local_1c0 = -1.79769313486232e+308;
  local_348 = &local_1b8;
  local_1b8 = 0.0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  uStack_1b0 = 0x4000000000000000;
  local_198 = 2;
  local_340 = param_7;
  local_338 = &local_218;
  local_320 = param_2;
  FUN_146c8c611(0,param_3,0x4000000000000000,param_6);
  iVar8 = (int)uStack_210;
  uVar21 = uStack_210 & 0xffffffff;
  if (param_8 == (char *)0x0) {
    FUN_145ad3dea(&local_1b8);
    dVar28 = (double)(-(ulonglong)(0.0 <= local_1c0 - local_1d8) &
                     (ulonglong)(local_1c0 - local_1d8));
    dVar29 = (double)(-(ulonglong)(0.0 <= local_1c8 - local_1e0) &
                     (ulonglong)(local_1c8 - local_1e0));
    uVar27 = -(ulonglong)(dVar28 <= dVar29);
    dVar29 = (double)(~uVar27 & (ulonglong)dVar28 | uVar27 & (ulonglong)dVar29);
    dVar28 = (double)(-(ulonglong)(0.0 <= local_1d0 - local_1e8) &
                     (ulonglong)(local_1d0 - local_1e8));
    uVar27 = -(ulonglong)(dVar29 <= dVar28);
    uVar11 = 4;
    if (iVar8 < 0x4c4b41) {
      uVar11 = 500000 < iVar8 | 2;
    }
    bVar10 = 10;
    if (iVar8 < 0x4c4b41) {
      bVar10 = (500000 < iVar8) * '\x02' + 6;
    }
    uVar14 = 5;
    if (iVar8 < 0x2faf081) {
      uVar14 = uVar11;
    }
    bVar17 = 0xc;
    if (iVar8 < 0x2faf081) {
      bVar17 = bVar10;
    }
    local_1b8 = (double)(uVar27 & (ulonglong)dVar28 | ~uVar27 & (ulonglong)dVar29) / (double)bVar17;
    uStack_1b0 = CONCAT44(0xfa,uVar14);
    local_220 = &local_2e8;
    local_228 = &LAB_146c90e74;
    local_2e8 = &local_218;
    FUN_146c8c7a2(&local_1b8,uVar21);
LAB_142983af7:
    local_238 = 0;
    uStack_230 = 0;
    local_32c = iVar19;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar21);
    }
    if (uVar21 != 0) {
      FUN_14481578e(&local_238);
      if (local_32c == 0x7fffffff) {
        iVar19 = 0;
        do {
          uVar27 = uStack_230;
          lVar24 = (longlong)(int)uStack_230;
          uVar11 = (int)uStack_230 + 1;
          uStack_230 = CONCAT44(uStack_230._4_4_,uVar11);
          if (uStack_230._4_4_ < uVar11) {
            FUN_1446f48e2(&local_238,uVar27 & 0xffffffff);
          }
          *(int *)(local_238 + lVar24 * 4) = iVar19;
          iVar19 = iVar19 + 1;
        } while (iVar8 != iVar19);
      }
      else {
        uVar23 = 0;
        uVar13 = 0xbf400001;
        uVar27 = uVar21;
        do {
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar21;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar13;
          lVar24 = (longlong)(int)uStack_230;
          uVar11 = (int)uStack_230 + 1;
          uStack_230 = CONCAT44(uStack_230._4_4_,uVar11);
          if (uStack_230._4_4_ < uVar11) {
            FUN_1446f48e2(&local_238);
          }
          *(undefined4 *)(local_238 + lVar24 * 4) = uVar23;
          uVar13 = SUB168(auVar7 % auVar6,0) + 0xbf400001;
          uVar23 = SUB164(auVar7 % auVar6,0);
          uVar27 = uVar27 - 1;
        } while (uVar27 != 0);
      }
    }
    iVar19 = local_32c;
    local_240 = (double)param_3 * 4.0 * (double)param_3;
    local_258 = 0.0;
    uStack_250 = 0;
    uVar27 = uStack_210 & 0xffffffff;
    if ((int)uStack_210 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar27);
    }
    if ((int)uStack_210 != 0) {
      FUN_14475e67c(local_268 + 2,uVar27);
      do {
        uVar13 = uStack_250;
        lVar24 = (longlong)(int)uStack_250;
        uVar11 = (int)uStack_250 + 1;
        uStack_250 = CONCAT44(uStack_250._4_4_,uVar11);
        if (uStack_250._4_4_ < uVar11) {
          FUN_1401c3474(local_268 + 2,uVar13 & 0xffffffff);
        }
        *(undefined1 *)((longlong)local_258 + lVar24) = 1;
        uVar11 = (int)uVar27 - 1;
        uVar27 = (ulonglong)uVar11;
      } while (uVar11 != 0);
    }
    local_268[0] = 0.0;
    local_268[1] = 0.0;
    local_278 = 0;
    uStack_270 = 0;
    if ((0 < iVar19) && (iVar8 != 0)) {
      plVar15 = (longlong *)(param_8 + 0x90);
      dVar28 = (double)param_3 + (double)param_3;
      lVar24 = 0;
      iVar20 = 0;
      do {
        if ((param_8 != (char *)0x0) && (iVar20 == (iVar20 / 0x19) * 0x19)) {
          if (*param_8 != '\0') goto LAB_142983f72;
          pcVar4 = *(code **)(param_8 + 0x70);
          plVar16 = *(longlong **)(param_8 + 0x80);
          if (*(longlong **)(param_8 + 0x80) == (longlong *)0x0) {
            plVar16 = plVar15;
          }
          uVar12 = (**(code **)(*plVar16 + 8))();
          cVar9 = (*pcVar4)(uVar12);
          *param_8 = cVar9;
          if (cVar9 != '\0') goto LAB_142983f72;
        }
        lVar24 = (longlong)(int)lVar24;
        do {
          if ((longlong)uVar21 <= lVar24) goto LAB_142983f72;
          iVar3 = *(int *)(local_238 + lVar24 * 4);
          lVar25 = (longlong)iVar3;
          lVar24 = lVar24 + 1;
        } while (*(char *)((longlong)local_258 + lVar25) != '\x01');
        if (iVar3 != -1) {
          pdVar1 = (double *)(local_218 + lVar25 * 0x18);
          local_298 = *pdVar1;
          dStack_290 = pdVar1[1];
          local_288 = *(double *)(local_218 + 0x10 + lVar25 * 0x18);
          local_2a8 = *(undefined8 *)(local_218 + 0x10 + lVar25 * 0x18);
          puVar2 = (undefined4 *)(local_218 + lVar25 * 0x18);
          local_2b8 = *puVar2;
          uStack_2b4 = puVar2[1];
          uStack_2b0 = puVar2[2];
          uStack_2ac = puVar2[3];
          local_318 = (double *)CONCAT44(local_318._4_4_,*(undefined4 *)(local_208 + lVar25 * 4));
          local_328 = plVar15;
          local_2e8 = param_3;
          (*(code *)*local_320)(local_320[1],&local_2b8,&local_318,&local_2e8);
          FUN_146c8cd6a(&local_1b8,iVar3);
          *(undefined1 *)((longlong)local_258 + lVar25) = 0;
          bVar26 = (longlong)uStack_270 < 0;
          uStack_270 = uStack_270 & 0xffffffff00000000;
          if (bVar26) {
            FUN_14481578e(&local_278,0);
          }
          local_2d8 = local_288 - dVar28;
          local_2e0 = dStack_290 - dVar28;
          local_2d0 = dVar28 + local_298;
          local_2e8 = (longlong *)(local_298 - dVar28);
          local_2c0 = local_288 + dVar28;
          local_2c8 = dStack_290 + dVar28;
          local_318 = local_268 + 2;
          local_310 = &local_218;
          local_308 = &local_298;
          local_300 = &local_240;
          local_2f0 = &local_318;
          local_2f8 = &LAB_146c90e96;
          local_348 = local_268;
          FUN_146c8cdc0(&local_1b8,&local_2e8,&local_2f8,&local_278);
          lVar25 = local_278;
          lVar18 = (longlong)(int)uStack_270;
          if (lVar18 != 0) {
            lVar22 = 0;
            do {
              uVar11 = *(uint *)(lVar25 + lVar22);
              lVar5 = *(longlong *)(local_e8 + (ulonglong)(uVar11 >> 9) * 8);
              iVar19 = *(int *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 4);
              if (iVar19 != -1) {
                *(undefined4 *)(lVar5 + (ulonglong)(uVar11 & 0x1ff) * 4) = 0xffffffff;
                FUN_146c9099a(local_158,iVar19,uVar11);
              }
              *(undefined1 *)((longlong)local_258 + (longlong)(int)uVar11) = 0;
              lVar22 = lVar22 + 4;
            } while (lVar18 * 4 != lVar22);
          }
          iVar20 = iVar20 + 1;
          plVar15 = local_328;
          iVar19 = local_32c;
        }
        if ((iVar8 <= (int)lVar24) || (iVar19 <= iVar20)) goto LAB_142983f72;
      } while( true );
    }
    goto LAB_142983f84;
  }
  if (*param_8 != '\0') goto LAB_142983fc7;
  pcVar4 = *(code **)(param_8 + 0x70);
  plVar15 = *(longlong **)(param_8 + 0x80);
  if (*(longlong **)(param_8 + 0x80) == (longlong *)0x0) {
    plVar15 = (longlong *)(param_8 + 0x90);
  }
  uVar12 = (**(code **)(*plVar15 + 8))();
  cVar9 = (*pcVar4)(uVar12);
  *param_8 = cVar9;
  if (cVar9 != '\0') goto LAB_142983fc7;
  FUN_145ad3dea(&local_1b8);
  dVar28 = (double)(-(ulonglong)(0.0 <= local_1c0 - local_1d8) & (ulonglong)(local_1c0 - local_1d8))
  ;
  dVar29 = (double)(-(ulonglong)(0.0 <= local_1c8 - local_1e0) & (ulonglong)(local_1c8 - local_1e0))
  ;
  uVar27 = -(ulonglong)(dVar28 <= dVar29);
  dVar29 = (double)(~uVar27 & (ulonglong)dVar28 | uVar27 & (ulonglong)dVar29);
  dVar28 = (double)(-(ulonglong)(0.0 <= local_1d0 - local_1e8) & (ulonglong)(local_1d0 - local_1e8))
  ;
  uVar27 = -(ulonglong)(dVar29 <= dVar28);
  uVar11 = 4;
  if (iVar8 < 0x4c4b41) {
    uVar11 = 500000 < iVar8 | 2;
  }
  bVar10 = 10;
  if (iVar8 < 0x4c4b41) {
    bVar10 = (500000 < iVar8) * '\x02' + 6;
  }
  uVar14 = 5;
  if (iVar8 < 0x2faf081) {
    uVar14 = uVar11;
  }
  bVar17 = 0xc;
  if (iVar8 < 0x2faf081) {
    bVar17 = bVar10;
  }
  local_1b8 = (double)(uVar27 & (ulonglong)dVar28 | ~uVar27 & (ulonglong)dVar29) / (double)bVar17;
  uStack_1b0 = CONCAT44(0xfa,uVar14);
  local_220 = &local_2e8;
  local_228 = &LAB_146c90e74;
  local_2e8 = &local_218;
  FUN_146c8c7a2(&local_1b8,uVar21);
  if (*param_8 == '\0') {
    pcVar4 = *(code **)(param_8 + 0x70);
    plVar15 = (longlong *)(param_8 + 0x90);
    if (*(longlong **)(param_8 + 0x80) != (longlong *)0x0) {
      plVar15 = *(longlong **)(param_8 + 0x80);
    }
    uVar12 = (**(code **)(*plVar15 + 8))(plVar15);
    cVar9 = (*pcVar4)(uVar12);
    *param_8 = cVar9;
    if (cVar9 == '\0') goto LAB_142983af7;
  }
LAB_142983fba:
  FUN_145bc96fe(&local_1b8);
LAB_142983fc7:
  FUN_146c8d0ca(&local_218);
  if ((local_70 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142983f72:
  if (local_278 != 0) {
    FUN_1400020a8();
  }
LAB_142983f84:
  if (local_268[0] != 0.0) {
    FUN_1400020a8();
  }
  if (local_258 != 0.0) {
    FUN_1400020a8();
  }
  if (local_238 != 0) {
    FUN_1400020a8();
  }
  goto LAB_142983fba;
}



// FUNCTION 142984024 FUN_142984024 body=380 status=ok
// SIG undefined FUN_142984024(void)

void FUN_142984024(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  longlong local_78 [4];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78[0] = 0;
  local_78[1] = 0;
  uVar6 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  local_79 = 0xff;
  FUN_141724bc2(local_78,&local_79,uVar6);
  if ((int)uVar6 < 1) {
    uVar5 = 0x7fffffff;
    uVar8 = 0x8000000100000000;
  }
  else {
    uVar7 = 0x80000001;
    uVar2 = 0x7fffffff;
    uVar5 = 0;
    do {
      lVar1 = *param_1;
      if (((longlong)uVar5 < (longlong)(*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144)))
         && (uVar4 = (uint)uVar5,
            (ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar1 + 0x148) + (uVar5 >> 9 & 0x7fffff) * 8) +
                               (ulonglong)(uVar4 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((int)uVar4 <= (int)uVar2) {
          uVar2 = uVar4;
        }
        *(undefined1 *)(local_78[0] + uVar5) = 0;
        if ((int)uVar7 <= (int)uVar4) {
          uVar7 = uVar4;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar6 != uVar5);
    uVar8 = (ulonglong)uVar7 << 0x20;
    uVar5 = (ulonglong)uVar2;
  }
  local_78[2] = *param_2;
  local_58[0] = 0;
  if (local_78[2] != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_1429841a2(param_1,uVar5 | uVar8,local_78,local_78 + 2);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429841a2 FUN_1429841a2 body=481 status=ok
// SIG undefined FUN_1429841a2(void)

void FUN_1429841a2(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = (longlong *)(param_1 + 8);
  FUN_146be943e(plVar7);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1447ab16c(plVar7,0);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_14481578e(&local_78,0x100);
  iVar6 = (int)((ulonglong)param_2 >> 0x20);
  if ((int)param_2 <= iVar6) {
    lVar9 = (longlong)(int)param_2;
    do {
      uVar2 = uStack_70;
      if (*(char *)(*param_3 + lVar9) != -1) {
        lVar8 = (longlong)(int)uStack_70;
        uVar3 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
        if (uStack_70._4_4_ < uVar3) {
          FUN_1446f48e2(&local_78,uVar2 & 0xffffffff);
        }
        *(int *)(local_78 + lVar8 * 4) = (int)lVar9;
        *(undefined1 *)(*param_3 + lVar9) = 1;
        plVar4 = (longlong *)FUN_14001cc68(0x10,0x10);
        *plVar4 = 0;
        plVar4[1] = 0;
        if (*param_4 == 0) {
          FUN_142984994(param_1,plVar4,&local_78,param_3);
        }
        else {
          local_88 = FUN_146c90f06;
          local_98 = &local_88;
          local_80 = param_4;
          FUN_14298486a(param_1,plVar4,&local_78,param_3);
        }
        iVar1 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
          FUN_1456bd870(plVar7,iVar1);
        }
        *(longlong **)(*plVar7 + (longlong)iVar1 * 8) = plVar4;
        lVar8 = plVar4[1];
        if (0 < (longlong)(int)lVar8) {
          lVar5 = 0;
          do {
            *(undefined1 *)(*param_3 + (longlong)*(int *)(*plVar4 + lVar5 * 4)) = 0xff;
            lVar5 = lVar5 + 1;
          } while ((int)lVar8 != lVar5);
        }
        bVar10 = (longlong)uStack_70 < 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if (bVar10) {
          FUN_14481578e(&local_78,0);
        }
      }
      lVar9 = lVar9 + 1;
    } while (iVar6 + 1 != (int)lVar9);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    plVar7 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142984384 FUN_142984384 body=407 status=ok
// SIG undefined FUN_142984384(void)

void FUN_142984384(longlong *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  longlong local_78 [4];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78[0] = 0;
  local_78[1] = 0;
  local_79 = 0xff;
  FUN_141724bc2();
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 == 0) {
    uVar7 = 0x7fffffff;
    uVar10 = 0x8000000100000000;
  }
  else {
    lVar2 = *param_2;
    uVar9 = 0x80000001;
    uVar5 = 0x7fffffff;
    lVar8 = 0;
    do {
      uVar1 = *(uint *)(lVar2 + lVar8);
      if (((-1 < (int)uVar1) &&
          (lVar3 = *param_1, (int)uVar1 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144))
          ) && ((ushort)(*(short *)(*(longlong *)
                                     (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar1 >> 9) * 8) +
                                   (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        if ((int)uVar1 <= (int)uVar5) {
          uVar5 = uVar1;
        }
        *(undefined1 *)(local_78[0] + (ulonglong)uVar1) = 0;
        if ((int)uVar9 <= (int)uVar1) {
          uVar9 = uVar1;
        }
      }
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar8);
    uVar10 = (ulonglong)uVar9 << 0x20;
    uVar7 = (ulonglong)uVar5;
  }
  local_78[2] = *param_3;
  local_58[0] = 0;
  if (local_78[2] != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)*plVar6)(plVar6,local_58);
  }
  FUN_1429841a2(param_1,uVar7 | uVar10,local_78,local_78 + 2);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298451c FUN_14298451c body=333 status=ok
// SIG undefined FUN_14298451c(void)

void FUN_14298451c(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  longlong local_88 [4];
  undefined8 local_68 [7];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88[0] = 0;
  local_88[1] = 0;
  uVar4 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  local_89 = 0xff;
  FUN_141724bc2(local_88,&local_89,uVar4);
  if (0 < (int)uVar4) {
    uVar2 = 0;
    do {
      lVar1 = *param_1;
      if (((longlong)uVar2 < (longlong)(*(int *)(lVar1 + 0x140) * 0x200 + *(int *)(lVar1 + 0x144)))
         && ((ushort)(*(short *)(*(longlong *)
                                  (*(longlong *)(lVar1 + 0x148) + (uVar2 >> 9 & 0x7fffff) * 8) +
                                (ulonglong)((uint)uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
        *(undefined1 *)(local_88[0] + uVar2) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar4 != uVar2);
  }
  local_88[2] = *param_3;
  local_68[0] = 0;
  if (local_88[2] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_68);
  }
  FUN_14298466a(param_1,param_2,local_88,local_88 + 2);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298466a FUN_14298466a body=511 status=ok
// SIG undefined FUN_14298466a(void)

void FUN_14298466a(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  int *piVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88;
  longlong *local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar6 = (longlong *)(param_1 + 8);
  FUN_146be943e(plVar6);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_1447ab16c(plVar6,0);
  }
  local_78 = 0;
  uStack_70 = 0;
  FUN_14481578e(&local_78,0x100);
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    piVar5 = (int *)*param_2;
    piVar9 = piVar5 + *(int *)(param_2 + 1);
    do {
      uVar2 = uStack_70;
      iVar1 = *piVar5;
      lVar8 = (longlong)iVar1;
      if (((-1 < lVar8) && (iVar1 < (int)param_3[1])) && (*(char *)(*param_3 + lVar8) != -1)) {
        lVar7 = (longlong)(int)uStack_70;
        uVar3 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
        if (uStack_70._4_4_ < uVar3) {
          FUN_1446f48e2(&local_78,uVar2 & 0xffffffff);
        }
        *(int *)(local_78 + lVar7 * 4) = iVar1;
        *(undefined1 *)(*param_3 + lVar8) = 1;
        plVar4 = (longlong *)FUN_14001cc68(0x10,0x10);
        *plVar4 = 0;
        plVar4[1] = 0;
        if (*param_4 == 0) {
          FUN_142984994(param_1,plVar4,&local_78,param_3);
        }
        else {
          local_88 = FUN_146c90f06;
          local_98 = &local_88;
          local_80 = param_4;
          FUN_14298486a(param_1,plVar4,&local_78,param_3);
        }
        iVar1 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
          FUN_1456bd870(plVar6,iVar1);
        }
        *(longlong **)(*plVar6 + (longlong)iVar1 * 8) = plVar4;
        lVar8 = plVar4[1];
        if (0 < (longlong)(int)lVar8) {
          lVar7 = 0;
          do {
            *(undefined1 *)(*param_3 + (longlong)*(int *)(*plVar4 + lVar7 * 4)) = 0xff;
            lVar7 = lVar7 + 1;
          } while ((int)lVar8 != lVar7);
        }
        bVar10 = (longlong)uStack_70 < 0;
        uStack_70 = uStack_70 & 0xffffffff00000000;
        if (bVar10) {
          FUN_14481578e(&local_78,0);
        }
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != piVar9);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    plVar6 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298486a FUN_14298486a body=297 status=ok
// SIG undefined FUN_14298486a(void)

void FUN_14298486a(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  int local_5c [4];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)(param_3 + 1);
  local_68 = param_1;
  while (0 < (int)uVar1) {
    iVar2 = *(int *)(*param_3 + -4 + (ulonglong)uVar1 * 4);
    *(uint *)(param_3 + 1) = uVar1 - 1;
    *(undefined1 *)(*param_4 + (longlong)iVar2) = 2;
    iVar3 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
      FUN_1446f48e2(param_2,iVar3);
    }
    *(int *)(*param_2 + (longlong)iVar3 * 4) = iVar2;
    FUN_146c03f0e(*local_68,local_5c,iVar2);
    lVar6 = 0;
    do {
      iVar3 = local_5c[lVar6];
      lVar7 = (longlong)iVar3;
      if (((lVar7 != -1) && (*(char *)(*param_4 + lVar7) == '\0')) &&
         (local_5c[3] = iVar2, local_4c = iVar3,
         cVar5 = (*(code *)*param_5)(param_5[1],local_5c + 3,&local_4c), cVar5 != '\0')) {
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_1446f48e2(param_3,iVar4);
        }
        *(int *)(*param_3 + (longlong)iVar4 * 4) = iVar3;
        *(undefined1 *)(*param_4 + lVar7) = 1;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 3);
    uVar1 = *(uint *)(param_3 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142984994 FUN_142984994 body=255 status=ok
// SIG undefined FUN_142984994(void)

void FUN_142984994(undefined8 *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [36];
  int local_54 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(param_3 + 1);
  if (0 < (int)uVar3) {
    do {
      iVar1 = *(int *)(*param_3 + -4 + (ulonglong)uVar3 * 4);
      *(uint *)(param_3 + 1) = uVar3 - 1;
      *(undefined1 *)(*param_4 + (longlong)iVar1) = 2;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_2,iVar2);
      }
      *(int *)(*param_2 + (longlong)iVar2 * 4) = iVar1;
      FUN_146c03f0e(*param_1,local_54,iVar1);
      lVar5 = 0;
      do {
        iVar1 = local_54[lVar5];
        lVar4 = (longlong)iVar1;
        if ((lVar4 != -1) && (*(char *)(*param_4 + lVar4) == '\0')) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_1446f48e2(param_3,iVar2);
          }
          *(int *)(*param_3 + (longlong)iVar2 * 4) = iVar1;
          *(undefined1 *)(*param_4 + lVar4) = 1;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 3);
      uVar3 = *(uint *)(param_3 + 1);
    } while (0 < (int)uVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142984a94 FUN_142984a94 body=2416 status=ok
// SIG undefined FUN_142984a94(void)

void FUN_142984a94(int *param_1,longlong *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  void *pvVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  longlong *local_b0;
  int local_a4;
  longlong local_a0;
  void *local_98;
  uint local_90;
  undefined4 uStack_8c;
  uint local_88;
  undefined8 local_84;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if (((*(byte *)(param_2 + 5) & 1) == 0) ||
     (iVar5 = FUN_1448332aa(param_2,&DAT_149e3cc78), 0x37 < iVar5)) {
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_90 = param_3 & 0xff;
      (**(code **)(*param_2 + 0x170))(param_2,&local_90,4);
      uVar22 = local_90;
      if (1 < local_90) {
        FUN_14572541c(param_2);
        uVar22 = local_90;
      }
    }
    else {
      uVar22 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    puVar3 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar1) {
      local_90 = param_4 & 0xff;
      (**(code **)(*param_2 + 0x170))(param_2,&local_90,4);
      uVar8 = local_90;
      if (1 < local_90) {
        FUN_14572541c(param_2);
        uVar8 = local_90;
      }
    }
    else {
      uVar8 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    if (uVar22 != 0 || uVar8 != 0) {
      local_68 = 0;
      puStack_60 = (undefined8 *)0x0;
      local_58 = 0;
      pvVar9 = (void *)FUN_14001cc68(0x800);
      memset(pvVar9,0,0x800);
      local_58 = CONCAT44(local_58._4_4_,1);
      FUN_1411b3bbe(&puStack_60,0);
      *puStack_60 = pvVar9;
      local_b0 = param_2;
      if ((*(byte *)(param_2 + 5) & 1) == 0) {
        local_b8 = CONCAT44(local_b8._4_4_,uVar8);
        uVar22 = *param_1 * 0x200 + param_1[1];
        if ((int)local_68 * 0x200 + local_68._4_4_ != 1) {
          if ((int)(uint)local_58 < 1) {
            iVar5 = (uint)local_58 + -1;
            do {
              pvVar9 = (void *)FUN_14001cc68(0x800);
              memset(pvVar9,0,0x800);
              uVar13 = local_58;
              lVar19 = (longlong)(int)(uint)local_58;
              uVar8 = (uint)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,uVar8);
              if (local_58._4_4_ < uVar8) {
                FUN_1411b3bbe(&puStack_60,uVar13 & 0xffffffff);
              }
              puStack_60[lVar19] = pvVar9;
              iVar5 = iVar5 + 1;
            } while (iVar5 != 0);
          }
          else if ((uint)local_58 != 1) {
            lVar19 = 1;
            do {
              if (puStack_60[lVar19] != 0) {
                FUN_1400020a8();
              }
              puStack_60[lVar19] = 0;
              lVar19 = lVar19 + 1;
            } while (lVar19 < (int)(uint)local_58);
            if ((uint)local_58 != 1) {
              local_58 = CONCAT44(local_58._4_4_,1);
            }
          }
          local_68 = 0x100000000;
        }
        *(uint *)*puStack_60 = uVar22;
        if (0 < (int)uVar22) {
          uVar11 = 1;
          uVar15 = 0;
          uVar8 = 1;
          do {
            uVar20 = *(uint *)(*(longlong *)
                                (*(longlong *)(param_1 + 2) + (ulonglong)(uVar15 >> 9) * 8) +
                              (ulonglong)(uVar15 & 0x1ff) * 4);
            iVar5 = 0;
            if (uVar20 != 0xffffffff) {
              iVar5 = *(int *)(*(longlong *)
                                (*(longlong *)(param_1 + 8) + (ulonglong)(uVar20 >> 9) * 8) +
                              (ulonglong)(uVar20 & 0x1ff) * 4);
            }
            uVar20 = uVar8 + iVar5 + 1;
            if ((int)local_68 * 0x200 + local_68._4_4_ != uVar20) {
              uVar12 = uVar8 + iVar5 + 0x200;
              if (-1 < (int)uVar20) {
                uVar12 = uVar20;
              }
              uVar12 = (((int)uVar12 >> 9) + 1) - (uint)((uVar20 & 0x1ff) == 0);
              if ((int)uVar12 < 2) {
                uVar12 = 1;
              }
              local_a4 = uVar12 - (uint)local_58;
              if (local_a4 == 0 || (int)uVar12 < (int)(uint)local_58) {
                if (uVar12 < (uint)local_58) {
                  FUN_1411b4058(&puStack_60,uVar12,0);
                }
              }
              else {
                do {
                  local_98 = (void *)FUN_14001cc68(0x800);
                  memset(local_98,0,0x800);
                  local_a0 = (longlong)(int)(uint)local_58;
                  uVar12 = (uint)local_58 + 1;
                  local_58 = CONCAT44(local_58._4_4_,uVar12);
                  if (local_58._4_4_ < uVar12) {
                    FUN_1411b3bbe(&puStack_60,local_a0);
                  }
                  puStack_60[local_a0] = local_98;
                  local_a4 = local_a4 + -1;
                } while (local_a4 != 0);
                local_a4 = 0;
              }
              iVar7 = (int)(uVar8 + iVar5) >> 9;
              iVar16 = (uVar8 + iVar5 & 0x1ff) + 1;
              if (uVar20 == 0) {
                iVar16 = 0;
                iVar7 = 0;
              }
              local_68 = CONCAT44(iVar16,iVar7);
            }
            uVar8 = uVar11 + 1;
            *(int *)(puStack_60[uVar11 >> 9] + (ulonglong)(uVar11 & 0x1ff) * 4) = iVar5;
            uVar11 = uVar8;
            if (0 < iVar5) {
              FUN_146be983e(&local_90,param_1,uVar15,0);
              uVar6 = local_70;
              if ((int *)CONCAT44(uStack_8c,local_90) != param_1) goto LAB_142984d67;
              if (local_88 != uVar15) goto LAB_142984d67;
              if ((uint)local_78 != -1) goto LAB_142984d67;
              uVar12 = local_78._4_4_;
              while (uVar11 = uVar8, uVar12 != 0xffffffff) {
LAB_142984d67:
                do {
                  *(undefined4 *)(puStack_60[uVar8 >> 9] + (ulonglong)(uVar8 & 0x1ff) * 4) = uVar6;
                  if (local_84._4_4_ == 0) {
                    local_78 = 0xffffffffffffffff;
LAB_142984e22:
                    local_84 = 0xffffffff;
                    uVar11 = 0xffffffff;
                    uVar12 = 0xffffffff;
                  }
                  else if (local_7c < (int)(uint)local_78) {
                    if ((ulonglong)local_78._4_4_ == 0xffffffff) {
                      local_78 = CONCAT44(local_78._4_4_,0xffffffff);
                      goto LAB_142984e22;
                    }
                    lVar19 = *(longlong *)(CONCAT44(uStack_8c,local_90) + 0x58);
                    uVar6 = *(undefined4 *)
                             (*(longlong *)(lVar19 + (ulonglong)(local_78._4_4_ >> 9) * 8) +
                             (ulonglong)(local_78._4_4_ & 0x1ff) * 4);
                    uVar13 = (ulonglong)local_78._4_4_ + 1;
                    uVar12 = *(uint *)(*(longlong *)(lVar19 + (uVar13 >> 9) * 8) +
                                      (ulonglong)((uint)uVar13 & 0x1ff) * 4);
                    local_78 = CONCAT44(uVar12,(uint)local_78);
                    uVar11 = (uint)local_78;
                    local_70 = uVar6;
                  }
                  else {
                    uVar6 = *(undefined4 *)
                             (*(longlong *)
                               (*(longlong *)(CONCAT44(uStack_8c,local_90) + 0x20) +
                               (ulonglong)((uint)local_78 >> 9) * 8) +
                             (ulonglong)((uint)local_78 & 0x1ff) * 4);
                    uVar11 = (uint)local_78 + 1;
                    local_78 = CONCAT44(local_78._4_4_,uVar11);
                    uVar12 = local_78._4_4_;
                    local_70 = uVar6;
                  }
                  uVar8 = uVar8 + 1;
                } while ((((int *)CONCAT44(uStack_8c,local_90) != param_1) || (local_88 != uVar15))
                        || (uVar11 != 0xffffffff));
              }
            }
            uVar15 = uVar15 + 1;
            uVar8 = uVar20;
          } while (uVar15 != uVar22);
        }
        if ((int)local_b8 == 0) {
          FUN_146c41ff8(&local_68,local_b0);
        }
        else {
          FUN_146c44e9c(&local_68,local_b0);
        }
      }
      else {
        FUN_14582f602(param_1);
        if (uVar8 == 0) {
          FUN_146c41ff8(&local_68,param_2);
        }
        else {
          FUN_146c44e9c();
        }
        uVar22 = (int)local_68 * 0x200 + local_68._4_4_;
        local_b8 = (ulonglong)uVar22;
        if (uVar22 == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = *(uint *)*puStack_60;
        }
        uVar8 = *param_1 * 0x200 + param_1[1];
        if ((int)uVar8 < (int)uVar22) {
          uVar11 = uVar22 + 0x1ff;
          if (-1 < (int)uVar22) {
            uVar11 = uVar22;
          }
          uVar15 = (((int)uVar11 >> 9) + 1) - (uint)((uVar22 & 0x1ff) == 0);
          uVar11 = 1;
          if (1 < (int)uVar15) {
            uVar11 = uVar15;
          }
          plVar2 = (longlong *)(param_1 + 2);
          puVar1 = (uint *)(param_1 + 4);
          iVar5 = uVar11 - *puVar1;
          if (iVar5 == 0 || (int)uVar11 < (int)*puVar1) {
            if (uVar11 < *puVar1) {
              FUN_1411b4058(plVar2,uVar11,0);
            }
          }
          else {
            do {
              pvVar9 = (void *)FUN_14001cc68(0x800);
              memset(pvVar9,0,0x800);
              iVar7 = param_1[4];
              param_1[4] = iVar7 + 1U;
              if ((uint)param_1[5] < iVar7 + 1U) {
                FUN_1411b3bbe(plVar2,iVar7);
              }
              *(void **)(*plVar2 + (longlong)iVar7 * 8) = pvVar9;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          iVar5 = (uVar22 - 1 & 0x1ff) + 1;
          if (uVar22 == 0) {
            iVar5 = 0;
          }
          iVar7 = (int)(uVar22 - 1) >> 9;
          if (uVar22 == 0) {
            iVar7 = 0;
          }
          *param_1 = iVar7;
          param_1[1] = iVar5;
          do {
            *(undefined4 *)
             (*(longlong *)(*plVar2 + (ulonglong)(uVar8 >> 9) * 8) + (ulonglong)(uVar8 & 0x1ff) * 4)
                 = 0xffffffff;
            uVar8 = uVar8 + 1;
          } while ((int)uVar8 < (int)uVar22);
        }
        uVar13 = local_b8;
        if ((int)uVar22 < 1) {
          uVar17 = 1;
        }
        else {
          uVar8 = 0;
          uVar21 = 1;
          do {
            uVar17 = uVar21 + 1;
            if (uVar21 < uVar13) {
              uVar11 = *(uint *)(puStack_60[uVar21 >> 9 & 0x7fffff] +
                                (ulonglong)((uint)uVar21 & 0x1ff) * 4);
              uVar23 = (ulonglong)(int)uVar11;
              if (0 < (longlong)uVar23) {
                FUN_146c86b80(param_1,uVar8);
                uVar18 = 8;
                uVar14 = uVar17;
                if (uVar11 < 8) {
                  uVar18 = (ulonglong)uVar11;
                }
                do {
                  uVar6 = 0;
                  if (uVar14 < local_b8) {
                    uVar6 = *(undefined4 *)
                             (puStack_60[uVar14 >> 9 & 0x7fffff] +
                             (ulonglong)((uint)uVar14 & 0x1ff) * 4);
                  }
                  FUN_146c86bd4(param_1,uVar8,uVar6);
                  uVar13 = local_b8;
                  uVar18 = uVar18 - 1;
                  uVar14 = uVar14 + 1;
                } while (uVar18 != 0);
                uVar14 = uVar23;
                if (8 < (int)uVar11) {
                  do {
                    uVar18 = uVar21 + uVar14;
                    uVar6 = 0;
                    if (uVar18 < uVar13) {
                      uVar6 = *(undefined4 *)
                               (puStack_60[uVar18 >> 9 & 0x7fffff] +
                               (ulonglong)((uint)uVar18 & 0x1ff) * 4);
                    }
                    FUN_146c86bd4(param_1,uVar8,uVar6);
                    bVar4 = 9 < uVar14;
                    uVar14 = uVar14 - 1;
                  } while (bVar4);
                }
                uVar17 = uVar17 + uVar23;
              }
            }
            uVar8 = uVar8 + 1;
            uVar21 = uVar17;
          } while (uVar8 != uVar22);
        }
        if (uVar13 < uVar17) {
          FUN_14572541c(local_b0);
        }
      }
      FUN_141082b5c(&puStack_60,0);
      if (puStack_60 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1429852fe;
    }
    FUN_146c41ff8(param_1,param_2);
    FUN_146c41ff8(param_1 + 6,param_2);
    FUN_146c41ff8(param_1 + 0xc,param_2);
    FUN_146c41ff8(param_1 + 0x14,param_2);
    piVar10 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar10 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x12,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      param_1[0x12] = *piVar10;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    piVar10 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar10 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x1a,4);
      }
      else {
        FUN_14572512c(param_2,param_1 + 0x1a);
      }
      goto LAB_1429852fe;
    }
  }
  else {
    FUN_146c45ad4(param_1,param_2);
    FUN_146c45ad4(param_1 + 6,param_2);
    FUN_146c45ad4(param_1 + 0xc,param_2);
    piVar10 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar10 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 0x12,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      param_1[0x12] = *piVar10;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_146c45ad4(param_1 + 0x14,param_2);
    piVar10 = *(int **)param_2[1];
    if ((int *)((undefined8 *)param_2[1])[1] < piVar10 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
    }
  }
  param_1[0x1a] = *piVar10;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
LAB_1429852fe:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429854dc FUN_1429854dc body=423 status=ok
// SIG undefined FUN_1429854dc(void)

void FUN_1429854dc(longlong *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar2 = *param_4;
  uVar3 = *param_3;
  local_b8 = *(undefined8 *)(param_2 + 4);
  local_c8 = *param_2;
  uStack_c4 = param_2[1];
  uStack_c0 = param_2[2];
  uStack_bc = param_2[3];
  lVar5 = *param_1;
  FUN_146c13dec(param_1[1],local_b0,uVar3);
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0x3ff0000000000000;
  local_98 = CONCAT44(uStack_c4,local_c8);
  uStack_90 = CONCAT44(uStack_bc,uStack_c0);
  local_88 = local_b8;
  local_48 = DAT_14c8463c8;
  local_58 = (undefined4)DAT_14c8463b8;
  uStack_54 = DAT_14c8463b8._4_4_;
  uStack_50 = (undefined4)DAT_14c8463c0;
  uStack_4c = DAT_14c8463c0._4_4_;
  FUN_146bfb7f2(&uStack_80,&local_58,local_b0);
  iVar4 = *(int *)(lVar5 + 0x88);
  *(uint *)(lVar5 + 0x88) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x8c) < iVar4 + 1U) {
    FUN_146c8d502(lVar5 + 0x80,iVar4);
  }
  lVar6 = *(longlong *)(lVar5 + 0x80);
  lVar7 = (longlong)iVar4 * 0x38;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_68;
  puVar1 = (undefined4 *)(lVar6 + 0x20 + lVar7);
  *puVar1 = (undefined4)uStack_78;
  puVar1[1] = uStack_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  puVar1 = (undefined4 *)(lVar6 + 0x10 + lVar7);
  *puVar1 = (undefined4)local_88;
  puVar1[1] = local_88._4_4_;
  puVar1[2] = (undefined4)uStack_80;
  puVar1[3] = uStack_80._4_4_;
  puVar1 = (undefined4 *)(lVar6 + lVar7);
  *puVar1 = (undefined4)local_98;
  puVar1[1] = local_98._4_4_;
  puVar1[2] = (undefined4)uStack_90;
  puVar1[3] = uStack_90._4_4_;
  iVar4 = *(int *)(lVar5 + 0x98);
  *(uint *)(lVar5 + 0x98) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0x9c) < iVar4 + 1U) {
    FUN_144941252(lVar5 + 0x90,iVar4);
  }
  *(undefined8 *)(*(longlong *)(lVar5 + 0x90) + (longlong)iVar4 * 8) = uVar2;
  iVar4 = *(int *)(lVar5 + 0xa8);
  *(uint *)(lVar5 + 0xa8) = iVar4 + 1U;
  if (*(uint *)(lVar5 + 0xac) < iVar4 + 1U) {
    FUN_1446f48e2((longlong *)(lVar5 + 0xa0),iVar4);
  }
  *(undefined4 *)(*(longlong *)(lVar5 + 0xa0) + (longlong)iVar4 * 4) = uVar3;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142985684 FUN_142985684 body=239 status=ok
// SIG undefined FUN_142985684(void)

void FUN_142985684(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_58 [36];
  uint local_34;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  local_34 = uVar1;
  if (*(uint *)*param_1 != uVar1) {
    plVar2 = (longlong *)param_1[1];
    if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
      plVar5 = plVar2 + 7;
      if ((longlong *)plVar2[8] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar2[8];
      }
      iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[9] - 1U & uVar1) * 4);
      if (iVar4 != -1) {
        do {
          if (*(uint *)(*plVar2 + (longlong)iVar4 * 0xc) == uVar1) goto LAB_142985754;
          iVar4 = *(int *)(*plVar2 + (longlong)iVar4 * 0xc + 4);
        } while (iVar4 != -1);
      }
    }
    local_30 = *(uint *)*param_1;
    local_2c = uVar1;
    cVar3 = (**(code **)param_1[2])(((undefined8 *)param_1[2])[1]);
    if (cVar3 != '\0') {
      plVar2 = *(longlong **)param_1[3];
      iVar4 = (int)plVar2[1];
      *(uint *)(plVar2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)plVar2 + 0xc) < iVar4 + 1U) {
        FUN_1446f48e2(plVar2,iVar4);
      }
      *(uint *)(*plVar2 + (longlong)iVar4 * 4) = uVar1;
      FUN_1447cbafe(param_1[1],&local_2c,&local_34,0);
    }
  }
LAB_142985754:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142985774 FUN_142985774 body=216 status=ok
// SIG undefined FUN_142985774(void)

void FUN_142985774(longlong *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  puVar2 = (undefined8 *)*param_1;
  lVar3 = param_1[1];
  pcVar4 = (code *)*puVar2;
  local_38 = uVar1;
  if (pcVar4 != (code *)0x0) {
    plVar9 = puVar2 + 4;
    if ((longlong *)puVar2[2] != (longlong *)0x0) {
      plVar9 = (longlong *)puVar2[2];
    }
    local_34 = uVar1;
    uVar6 = (**(code **)(*plVar9 + 8))();
    cVar5 = (*pcVar4)(uVar6,&local_34);
    if (cVar5 == '\0') goto LAB_14298582a;
  }
  if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
    lVar7 = lVar3 + 0x40;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      lVar7 = *(longlong *)(lVar3 + 0x48);
    }
    iVar8 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & uVar1) * 4);
    if (iVar8 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar3 + 8) + (longlong)iVar8 * 0xc) == uVar1)
        goto LAB_14298582a;
        iVar8 = *(int *)(*(longlong *)(lVar3 + 8) + (longlong)iVar8 * 0xc + 4);
      } while (iVar8 != -1);
    }
  }
  FUN_1447cbafe(param_1[2],&local_34,&local_38,0);
LAB_14298582a:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298584e FUN_14298584e body=223 status=ok
// SIG undefined FUN_14298584e(void)

void FUN_14298584e(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  puVar4 = (undefined8 *)*param_1;
  pcVar5 = (code *)*puVar4;
  if (pcVar5 != (code *)0x0) {
    plVar9 = puVar4 + 4;
    if ((longlong *)puVar4[2] != (longlong *)0x0) {
      plVar9 = (longlong *)puVar4[2];
    }
    local_3c = uVar2;
    uVar8 = (**(code **)(*plVar9 + 8))();
    cVar6 = (*pcVar5)(uVar8,&local_3c);
    if (cVar6 == '\0') goto LAB_14298590a;
  }
  lVar10 = *(longlong *)(param_1[1] + 0x10);
  if (lVar10 == 0) {
    lVar10 = param_1[1];
  }
  uVar7 = uVar2 + 0x1f;
  if (-1 < (int)uVar2) {
    uVar7 = uVar2;
  }
  if ((*(uint *)(lVar10 + (longlong)((int)uVar7 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
    plVar9 = (longlong *)param_1[2];
    iVar3 = (int)plVar9[1];
    *(uint *)(plVar9 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar9 + 0xc) < iVar3 + 1U) {
      FUN_1446f48e2(plVar9,iVar3);
    }
    *(uint *)(*plVar9 + (longlong)iVar3 * 4) = uVar2;
    lVar10 = *(longlong *)(param_1[1] + 0x10);
    if (lVar10 == 0) {
      lVar10 = param_1[1];
    }
    puVar1 = (uint *)(lVar10 + (longlong)((int)uVar7 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
LAB_14298590a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298592e FUN_14298592e body=390 status=ok
// SIG undefined FUN_14298592e(void)

void FUN_14298592e(longlong *param_1,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  code *pcVar8;
  byte bVar9;
  char cVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  longlong lVar17;
  int *piVar18;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *param_2;
  puVar6 = (undefined8 *)*param_1;
  lVar7 = param_1[1];
  pcVar8 = (code *)*puVar6;
  if (pcVar8 != (code *)0x0) {
    plVar12 = puVar6 + 4;
    if ((longlong *)puVar6[2] != (longlong *)0x0) {
      plVar12 = (longlong *)puVar6[2];
    }
    local_3c = iVar3;
    uVar11 = (**(code **)(*plVar12 + 8))();
    cVar10 = (*pcVar8)(uVar11,&local_3c);
    if (cVar10 == '\0') goto LAB_142985a91;
  }
  if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
    lVar13 = *(longlong *)(lVar7 + 0x48);
    if (*(longlong *)(lVar7 + 0x48) == 0) {
      lVar13 = lVar7 + 0x40;
    }
    piVar16 = (int *)(lVar13 + ((longlong)*(int *)(lVar7 + 0x50) - 1U & (longlong)iVar3) * 4);
    do {
      iVar4 = *piVar16;
      lVar13 = (longlong)iVar4;
      if (lVar13 == -1) break;
      piVar1 = (int *)(*(longlong *)(lVar7 + 8) + lVar13 * 0xc);
      iVar5 = *piVar1;
      if (iVar5 == iVar3) {
        lVar17 = *(longlong *)(lVar7 + 0x48);
        if (*(longlong *)(lVar7 + 0x48) == 0) {
          lVar17 = lVar7 + 0x40;
        }
        iVar14 = *(int *)(lVar17 + (longlong)piVar1[2] * 4);
        if (iVar14 == iVar4) {
          piVar18 = (int *)(lVar17 + (longlong)piVar1[2] * 4);
        }
        else {
          do {
            piVar18 = (int *)(*(longlong *)(lVar7 + 8) + (longlong)iVar14 * 0xc + 4);
            iVar14 = *piVar18;
          } while (iVar14 != iVar4);
        }
        *piVar18 = piVar1[1];
        lVar17 = *(longlong *)(lVar7 + 8);
        if (*(int *)(lVar7 + 0x3c) != 0) {
          *(int *)(lVar17 + (longlong)*(int *)(lVar7 + 0x38) * 0xc) = iVar4;
        }
        *(undefined4 *)(lVar17 + lVar13 * 0xc) = 0xffffffff;
        uVar15 = 0xffffffff;
        if (0 < *(int *)(lVar7 + 0x3c)) {
          uVar15 = *(undefined4 *)(lVar7 + 0x38);
        }
        *(undefined4 *)(lVar17 + lVar13 * 0xc + 4) = uVar15;
        *(int *)(lVar7 + 0x38) = iVar4;
        *(int *)(lVar7 + 0x3c) = *(int *)(lVar7 + 0x3c) + 1;
        lVar13 = *(longlong *)(lVar7 + 0x28);
        if (*(longlong *)(lVar7 + 0x28) == 0) {
          lVar13 = lVar7 + 0x18;
        }
        iVar14 = iVar4 + 0x1f;
        if (-1 < iVar4) {
          iVar14 = iVar4;
        }
        bVar9 = (byte)iVar4 & 0x1f;
        puVar2 = (uint *)(lVar13 + (longlong)(iVar14 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
      }
      else {
        piVar16 = piVar1 + 1;
      }
    } while (iVar5 != iVar3);
  }
LAB_142985a91:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142985ab6 FUN_142985ab6 body=300 status=ok
// SIG undefined FUN_142985ab6(void)

void FUN_142985ab6(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  longlong *plVar12;
  double *pdVar13;
  undefined8 *puVar14;
  code *pcVar15;
  char cVar16;
  undefined8 uVar17;
  longlong *plVar18;
  double *pdVar19;
  longlong lVar20;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar11 = *param_2;
  plVar12 = (longlong *)*param_1;
  pdVar13 = (double *)param_1[1];
  lVar20 = (longlong)iVar11 * 0x20;
  lVar1 = *plVar12 + lVar20;
  pdVar19 = (double *)(lVar1 + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  dVar3 = pdVar13[2];
  dVar4 = *pdVar19;
  dVar5 = *(double *)(lVar1 + 0x10);
  dVar6 = pdVar13[1];
  dVar7 = *pdVar13;
  dVar8 = pdVar13[4];
  dVar9 = pdVar13[3];
  dVar10 = pdVar13[5];
  FUN_146c91310(pdVar13,local_88,pdVar19);
  puVar14 = (undefined8 *)param_1[2];
  pcVar15 = (code *)*puVar14;
  plVar18 = puVar14 + 4;
  if ((longlong *)puVar14[2] != (longlong *)0x0) {
    plVar18 = (longlong *)puVar14[2];
  }
  uVar17 = (**(code **)(*plVar18 + 8))();
  cVar16 = (*pcVar15)(uVar17,local_88,pdVar19);
  if (cVar16 != '\0') {
    dVar2 = (dVar2 - dVar3) * dVar10 + (dVar4 - dVar7) * dVar9 + (dVar5 - dVar6) * dVar8;
    EnterCriticalSection((LPCRITICAL_SECTION)param_1[3]);
    if (dVar2 < *(double *)param_1[4]) {
      *(double *)param_1[4] = dVar2;
      *(int *)param_1[5] = iVar11;
      *(undefined4 *)param_1[6] = *(undefined4 *)(*plVar12 + lVar20);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)param_1[3]);
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142985be4 FUN_142985be4 body=556 status=ok
// SIG undefined FUN_142985be4(void)

void FUN_142985be4(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong *plVar13;
  double *pdVar14;
  undefined8 *puVar15;
  code *pcVar16;
  longlong lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  char cVar21;
  undefined8 uVar22;
  longlong *plVar23;
  double *pdVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [24];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar25 = (longlong)*param_2;
  plVar13 = (longlong *)*param_1;
  pdVar14 = (double *)param_1[1];
  lVar26 = lVar25 * 0x20;
  lVar1 = *plVar13 + lVar26;
  pdVar24 = (double *)(lVar1 + 8);
  dVar4 = *(double *)(lVar1 + 0x18);
  dVar5 = pdVar14[2];
  dVar6 = *pdVar24;
  dVar7 = *(double *)(lVar1 + 0x10);
  dVar8 = *pdVar14;
  dVar9 = pdVar14[1];
  dVar10 = pdVar14[3];
  dVar11 = pdVar14[4];
  dVar12 = pdVar14[5];
  FUN_146c91310(pdVar14,local_e8,pdVar24);
  puVar15 = (undefined8 *)param_1[2];
  pcVar16 = (code *)*puVar15;
  plVar23 = puVar15 + 4;
  if ((longlong *)puVar15[2] != (longlong *)0x0) {
    plVar23 = (longlong *)puVar15[2];
  }
  uVar22 = (**(code **)(*plVar23 + 8))();
  cVar21 = (*pcVar16)(uVar22,local_e8,pdVar24);
  if (cVar21 != '\0') {
    dVar8 = (dVar7 - dVar9) * dVar11 + (dVar6 - dVar8) * dVar10 + (dVar4 - dVar5) * dVar12;
    *(undefined1 *)(*(longlong *)param_1[3] + lVar25) = 1;
    lVar25 = lVar25 * 0x50;
    *(undefined4 *)(*(longlong *)param_1[4] + lVar25) = *(undefined4 *)(*plVar13 + lVar26);
    *(undefined1 *)(*(longlong *)param_1[4] + 4 + lVar25) = 1;
    pdVar14 = (double *)param_1[1];
    dVar4 = pdVar14[5];
    dVar5 = pdVar14[4];
    dVar6 = pdVar14[2];
    dVar7 = pdVar14[1];
    lVar1 = *(longlong *)param_1[4];
    *(double *)(lVar1 + 8 + lVar25) = pdVar14[3] * dVar8 + *pdVar14;
    *(double *)(lVar1 + 0x10 + lVar25) = dVar5 * dVar8 + dVar7;
    *(double *)(lVar1 + 0x18 + lVar25) = dVar4 * dVar8 + dVar6;
    lVar1 = *plVar13;
    lVar17 = *(longlong *)param_1[4];
    *(undefined8 *)(lVar17 + 0x30 + lVar25) = *(undefined8 *)(lVar1 + 0x18 + lVar26);
    puVar2 = (undefined4 *)(lVar1 + 8 + lVar26);
    uVar18 = puVar2[1];
    uVar19 = puVar2[2];
    uVar20 = puVar2[3];
    puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar25);
    *puVar3 = *puVar2;
    puVar3[1] = uVar18;
    puVar3[2] = uVar19;
    puVar3[3] = uVar20;
    *(double *)(*(longlong *)param_1[4] + 0x38 + lVar25) = dVar8;
  }
  if ((local_d0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142985e12 FUN_142985e12 body=977 status=ok
// SIG undefined FUN_142985e12(void)

void FUN_142985e12(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  undefined8 *puVar6;
  code *pcVar7;
  char cVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_188 [44];
  undefined4 local_15c;
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
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar3 = *param_2;
  iVar4 = *(int *)(*(longlong *)(*param_1 + 0x60) + 0x10 + (longlong)iVar3 * 0x48);
  if (1 < iVar4) {
    puVar1 = (undefined4 *)(*(longlong *)(*param_1 + 0x60) + (longlong)iVar3 * 0x48);
    local_15c = 0xffffffff;
    uVar20 = 0;
    uVar21 = 0;
    uVar22 = 0xffffffff;
    uVar23 = 0x7fefffff;
    lVar11 = 0;
    uVar12 = 0;
    uVar24 = uVar22;
    uVar25 = uVar23;
    do {
      FUN_146bd9232(&local_118,*(longlong *)(puVar1 + 2) + lVar11,
                    *(longlong *)(puVar1 + 2) + lVar11 + 0x18);
      FUN_146c91452(param_1[1],&local_118,&local_120,&local_128);
      dVar15 = local_128;
      pdVar5 = (double *)param_1[1];
      local_130 = pdVar5[5] * local_120 + pdVar5[2];
      local_138 = pdVar5[4] * local_120 + pdVar5[1];
      local_140 = local_120 * pdVar5[3] + *pdVar5;
      FUN_146bd9232(&local_118,*(longlong *)(puVar1 + 2) + lVar11,
                    *(longlong *)(puVar1 + 2) + lVar11 + 0x18);
      local_148 = local_f0 * dVar15 + local_108;
      local_150 = local_f8 * dVar15 + local_110;
      local_158 = dVar15 * local_100 + local_118;
      puVar6 = (undefined8 *)param_1[2];
      pcVar7 = (code *)*puVar6;
      plVar10 = puVar6 + 4;
      if ((longlong *)puVar6[2] != (longlong *)0x0) {
        plVar10 = (longlong *)puVar6[2];
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      cVar8 = (*pcVar7)(uVar9,&local_140,&local_158);
      if (cVar8 != '\0') {
        pdVar5 = (double *)param_1[1];
        dVar15 = pdVar5[2];
        dVar19 = *pdVar5;
        dVar2 = pdVar5[1];
        dVar18 = (pdVar5[5] * local_120 + dVar15) - dVar15;
        dVar14 = (pdVar5[4] * local_120 + dVar2) - dVar2;
        dVar16 = (pdVar5[3] * local_120 + dVar19) - dVar19;
        dVar17 = dVar16 * (local_150 - dVar2) - (local_158 - dVar19) * dVar14;
        dVar19 = dVar18 * (local_158 - dVar19) - (local_148 - dVar15) * dVar16;
        dVar15 = dVar14 * (local_148 - dVar15) - dVar18 * (local_150 - dVar2);
        dVar15 = SQRT(dVar17 * dVar17 + dVar15 * dVar15 + dVar19 * dVar19) * 0.5;
        uVar13 = -(ulonglong)(-dVar15 <= dVar15);
        dVar15 = (double)(~uVar13 & (ulonglong)-dVar15 | (ulonglong)dVar15 & uVar13);
        if (dVar15 <= (double)CONCAT44(uVar23,uVar22) && (double)CONCAT44(uVar23,uVar22) != dVar15)
        {
          uVar20 = SUB84(local_128,0);
          uVar21 = (undefined4)((ulonglong)local_128 >> 0x20);
          uVar24 = SUB84(local_120,0);
          uVar25 = (undefined4)((ulonglong)local_120 >> 0x20);
          local_15c = (undefined4)uVar12;
          uVar22 = SUB84(dVar15,0);
          uVar23 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 0x18;
    } while (iVar4 - 1 != uVar12);
    if ((double)CONCAT44(uVar23,uVar22) <= 1.79769313486232e+308 &&
        (double)CONCAT44(uVar23,uVar22) != 1.79769313486232e+308) {
      EnterCriticalSection((LPCRITICAL_SECTION)param_1[3]);
      if ((double)CONCAT44(uVar23,uVar22) <= *(double *)param_1[4] &&
          *(double *)param_1[4] != (double)CONCAT44(uVar23,uVar22)) {
        *(ulonglong *)param_1[5] = CONCAT44(uVar25,uVar24);
        *(int *)param_1[6] = iVar3;
        *(undefined4 *)param_1[7] = *puVar1;
        *(undefined4 *)param_1[8] = local_15c;
        *(ulonglong *)param_1[9] = CONCAT44(uVar21,uVar20);
        *(ulonglong *)param_1[4] = CONCAT44(uVar23,uVar22);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)param_1[3]);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429861e4 FUN_1429861e4 body=834 status=ok
// SIG undefined FUN_1429861e4(void)

void FUN_1429861e4(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined8 *puVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  char cVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStack_138 [44];
  int local_10c;
  code *local_108;
  longlong local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar16 = (longlong)*param_2;
  lVar15 = *(longlong *)(*param_1 + 0x60);
  iVar6 = *(int *)(lVar15 + 0x10 + lVar16 * 0x48);
  if (1 < iVar6) {
    puVar1 = (undefined4 *)(lVar15 + lVar16 * 0x48);
    local_10c = -1;
    uVar17 = 0;
    uVar18 = 0;
    uVar19 = 0xffffffff;
    uVar20 = 0x7fefffff;
    lVar15 = 0;
    uVar14 = 0;
    local_100 = *param_1;
    do {
      FUN_146bd9232(&local_b8,*(longlong *)(puVar1 + 2) + lVar15,
                    *(longlong *)(puVar1 + 2) + lVar15 + 0x18);
      FUN_146c91452(param_1[1],&local_b8,&local_c0,&local_c8);
      dVar2 = local_c8;
      if (local_c0 <= (double)CONCAT44(uVar20,uVar19) && (double)CONCAT44(uVar20,uVar19) != local_c0
         ) {
        pdVar8 = (double *)param_1[1];
        local_d0 = pdVar8[5] * local_c0 + pdVar8[2];
        local_d8 = pdVar8[4] * local_c0 + pdVar8[1];
        local_e0 = local_c0 * pdVar8[3] + *pdVar8;
        FUN_146bd9232(&local_b8,*(longlong *)(puVar1 + 2) + lVar15,
                      *(longlong *)(puVar1 + 2) + lVar15 + 0x18);
        local_e8 = local_90 * dVar2 + local_a8;
        local_f0 = local_98 * dVar2 + local_b0;
        local_f8 = dVar2 * local_a0 + local_b8;
        puVar7 = (undefined8 *)param_1[2];
        local_108 = (code *)*puVar7;
        plVar13 = puVar7 + 4;
        if ((longlong *)puVar7[2] != (longlong *)0x0) {
          plVar13 = (longlong *)puVar7[2];
        }
        uVar12 = (**(code **)(*plVar13 + 8))();
        cVar11 = (*local_108)(uVar12,&local_e0,&local_f8);
        if (cVar11 != '\0') {
          uVar19 = SUB84(local_c0,0);
          uVar20 = (undefined4)((ulonglong)local_c0 >> 0x20);
          uVar17 = SUB84(local_c8,0);
          uVar18 = (undefined4)((ulonglong)local_c8 >> 0x20);
          local_10c = (int)uVar14;
        }
      }
      iVar10 = local_10c;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x18;
    } while (iVar6 - 1 != uVar14);
    if ((double)CONCAT44(uVar20,uVar19) <= 1.79769313486232e+308 &&
        (double)CONCAT44(uVar20,uVar19) != 1.79769313486232e+308) {
      *(undefined1 *)(*(longlong *)param_1[3] + lVar16) = 1;
      lVar9 = lVar16 * 0x50;
      *(undefined4 *)(*(longlong *)param_1[4] + lVar9) = *puVar1;
      *(undefined1 *)(*(longlong *)param_1[4] + 4 + lVar9) = 0;
      pdVar8 = (double *)param_1[1];
      dVar2 = pdVar8[5];
      dVar3 = pdVar8[4];
      dVar4 = pdVar8[2];
      dVar5 = pdVar8[1];
      lVar15 = *(longlong *)param_1[4];
      *(double *)(lVar15 + 8 + lVar9) = pdVar8[3] * (double)CONCAT44(uVar20,uVar19) + *pdVar8;
      *(double *)(lVar15 + 0x10 + lVar9) = dVar3 * (double)CONCAT44(uVar20,uVar19) + dVar5;
      *(double *)(lVar15 + 0x18 + lVar9) = dVar2 * (double)CONCAT44(uVar20,uVar19) + dVar4;
      lVar15 = *(longlong *)(*(longlong *)(local_100 + 0x60) + 8 + lVar16 * 0x48);
      FUN_146bd9232(&local_b8,lVar15 + (longlong)local_10c * 0x18,
                    lVar15 + (longlong)local_10c * 0x18 + 0x18);
      lVar15 = *(longlong *)param_1[4];
      *(double *)(lVar15 + 0x20 + lVar9) = local_a0 * (double)CONCAT44(uVar18,uVar17) + local_b8;
      *(double *)(lVar15 + 0x28 + lVar9) = local_98 * (double)CONCAT44(uVar18,uVar17) + local_b0;
      *(double *)(lVar15 + 0x30 + lVar9) = local_90 * (double)CONCAT44(uVar18,uVar17) + local_a8;
      *(ulonglong *)(*(longlong *)param_1[4] + 0x38 + lVar9) = CONCAT44(uVar20,uVar19);
      *(int *)(*(longlong *)param_1[4] + 0x40 + lVar9) = iVar10;
      *(ulonglong *)(*(longlong *)param_1[4] + 0x48 + lVar9) = CONCAT44(uVar18,uVar17);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142986528 FUN_142986528 body=136 status=ok
// SIG undefined FUN_142986528(void)

void FUN_142986528(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1429865b0 FUN_1429865b0 body=224 status=ok
// SIG undefined FUN_1429865b0(void)

void FUN_1429865b0(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  lVar4 = *(longlong *)(*param_1 + 0x100);
  if (lVar4 == 0) {
    lVar4 = *param_1;
  }
  FUN_146c890f8(param_1[1],*(undefined8 *)(lVar4 + (longlong)*param_2 * 8),param_1[2],&local_58);
  EnterCriticalSection((LPCRITICAL_SECTION)param_1[3]);
  lVar4 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      uVar1 = *(undefined4 *)(lVar4 + lVar5);
      plVar3 = (longlong *)param_1[4];
      iVar2 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(plVar3,iVar2);
      }
      *(undefined4 *)(*plVar3 + (longlong)iVar2 * 4) = uVar1;
      lVar5 = lVar5 + 4;
    } while (lVar6 * 4 != lVar5);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)param_1[3]);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142986694 FUN_142986694 body=338 status=ok
// SIG undefined FUN_142986694(void)

void FUN_142986694(float *param_1,float *param_2,undefined1 (*param_3) [16],float param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (param_4 <= 1e-08) {
    fVar4 = 0.0;
    fVar9 = 0.0;
    fVar12 = 0.0;
  }
  else {
    fVar12 = *param_2;
    fVar13 = param_2[1];
    fVar15 = param_2[3];
    auVar6 = *param_3;
    fVar4 = auVar6._12_4_;
    fVar3 = auVar6._4_4_;
    uVar2 = -(uint)(0.0 <= fVar15 * fVar4 +
                           param_2[2] * *(float *)(*param_3 + 8) +
                           fVar12 * auVar6._0_4_ + fVar13 * fVar3);
    fVar9 = (float)(~uVar2 & 0xbf800000 | uVar2 & 0x3f800000);
    auVar5._4_12_ = auVar6._4_12_;
    auVar5._0_4_ = auVar6._0_4_ * fVar9;
    auVar6._4_4_ = fVar3;
    auVar6._0_4_ = fVar3 * fVar9;
    auVar6._8_4_ = fVar4;
    auVar6._12_4_ = fVar4;
    auVar6 = insertps(auVar5,auVar6,0x10);
    auVar6 = insertps(auVar6,ZEXT416((uint)(*(float *)(*param_3 + 8) * fVar9)),0x20);
    auVar6 = insertps(auVar6,ZEXT416((uint)(fVar9 * fVar4)),0x30);
    auVar7._0_4_ = auVar6._0_4_ - fVar12;
    auVar7._4_4_ = auVar6._4_4_ - fVar13;
    auVar7._8_4_ = auVar6._8_4_ - param_2[2];
    auVar7._12_4_ = auVar6._12_4_ - fVar15;
    auVar1._4_4_ = param_4;
    auVar1._0_4_ = param_4;
    auVar1._8_4_ = param_4;
    auVar1._12_4_ = param_4;
    auVar6 = divps(auVar7,auVar1);
    fVar12 = fVar12 * -1.0;
    fVar13 = fVar13 * -1.0;
    fVar14 = param_2[2] * -1.0;
    fVar15 = fVar15 * 1.0;
    fVar3 = auVar6._0_4_;
    fVar8 = auVar6._4_4_;
    fVar10 = auVar6._8_4_;
    fVar11 = auVar6._12_4_;
    fVar4 = fVar10 * fVar13 * -1.0 + fVar8 * fVar14 * 1.0 + fVar3 * fVar15 * 1.0 + fVar11 * fVar12;
    fVar9 = fVar10 * fVar12 * 1.0 + fVar8 * fVar15 * 1.0 + fVar3 * fVar14 * -1.0 + fVar11 * fVar13;
    fVar12 = fVar10 * fVar15 * 1.0 + fVar8 * fVar12 * -1.0 + fVar3 * fVar13 * 1.0 + fVar11 * fVar14;
    fVar4 = fVar4 + fVar4;
    fVar9 = fVar9 + fVar9;
    fVar12 = fVar12 + fVar12;
  }
  *param_1 = fVar4;
  param_1[1] = fVar9;
  param_1[2] = fVar12;
  return;
}



// FUNCTION 1429867e6 FUN_1429867e6 body=102 status=ok
// SIG undefined FUN_1429867e6(void)

void FUN_1429867e6(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149f3cc80;
  local_14 = 9;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14628488a(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142986850 FUN_142986850 body=505 status=ok
// SIG undefined FUN_142986850(void)

void FUN_142986850(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_248 [32];
  longlong local_228;
  longlong local_220;
  undefined4 local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined1 local_1f0 [192];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  int local_11c;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [136];
  longlong local_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  iVar1 = *param_2;
  lVar2 = *param_1;
  FUN_1403b0d76(*(undefined8 *)(lVar2 + 8),local_e0);
  puVar3 = *(undefined4 **)(lVar2 + 8);
  local_130 = *puVar3;
  local_12c = puVar3[1];
  local_128 = puVar3[2];
  local_124 = puVar3[3];
  local_120 = puVar3[4];
  local_11c = puVar3[0x32];
  local_118 = *(longlong *)(puVar3 + 0x2c);
  local_110 = *(longlong *)(puVar3 + 0x2a);
  local_108 = *(undefined8 *)(puVar3 + 0x2e);
  local_e8 = *(undefined8 *)(*(longlong *)param_1[1] + (longlong)iVar1 * 4);
  FUN_1403b1286(local_1f0);
  cVar5 = FUN_146c94c08(&local_130);
  if (cVar5 != '\0') {
    do {
      iVar4 = local_f0;
      iVar1 = local_f4;
      local_218 = local_f8;
      local_220 = CONCAT44(local_220._4_4_,local_fc);
      local_228 = CONCAT44(local_228._4_4_,local_100);
      cVar5 = FUN_144977a5c(local_e0,local_1f0,local_f4,local_f0);
      if (cVar5 != '\0') {
        lVar2 = *(longlong *)(local_118 + (longlong)iVar1 * 8);
        lVar6 = (longlong)local_11c * (longlong)iVar4;
        puVar3 = (undefined4 *)(lVar2 + lVar6 * 8);
        local_208 = *puVar3;
        uStack_204 = puVar3[1];
        uStack_200 = puVar3[2];
        uStack_1fc = puVar3[3];
        local_1f8 = *(undefined8 *)(lVar2 + 0x10 + lVar6 * 8);
        lVar2 = *(longlong *)param_1[2];
        lVar6 = (longlong)
                *(int *)(*(longlong *)(local_110 + (longlong)iVar1 * 8) + (longlong)iVar4 * 4) *
                0x40;
        local_220 = lVar2 + lVar6 + 0x30;
        local_228 = lVar2 + 0x20 + lVar6;
        FUN_146c95a8a(local_1f0,&local_208,lVar2 + lVar6,lVar2 + 0x10 + lVar6);
      }
      cVar5 = FUN_146c94c58(&local_130);
    } while (cVar5 != '\0');
  }
  FUN_1403b0dd8(local_1f0);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142986a4a FUN_142986a4a body=102 status=ok
// SIG undefined FUN_142986a4a(void)

void FUN_142986a4a(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x8000000149f3cd58;
  local_14 = 7;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_1462849aa(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142986ab4 FUN_142986ab4 body=55 status=ok
// SIG undefined FUN_142986ab4(void)

void FUN_142986ab4(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992150 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992150 = FUN_14171c317(FUN_146284ac9,uVar1,L"ChaosDeformableSimSpace");
  }
  return;
}



// FUNCTION 142986aeb FUN_142986aeb body=55 status=ok
// SIG undefined FUN_142986aeb(void)

void FUN_142986aeb(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992168 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992168 = FUN_14171c317(FUN_146284af8,uVar1,L"ESetMaskConditionType");
  }
  return;
}



// FUNCTION 142986b22 FUN_142986b22 body=55 status=ok
// SIG undefined FUN_142986b22(void)

void FUN_142986b22(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992180 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992180 = FUN_14171c317(FUN_146284b27,uVar1,L"EWaveFunctionType");
  }
  return;
}



// FUNCTION 142986b59 FUN_142986b59 body=55 status=ok
// SIG undefined FUN_142986b59(void)

void FUN_142986b59(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992198 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992198 = FUN_14171c317(FUN_146284b56,uVar1,L"EFieldOperationType");
  }
  return;
}



// FUNCTION 142986b90 FUN_142986b90 body=55 status=ok
// SIG undefined FUN_142986b90(void)

void FUN_142986b90(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9921b0 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9921b0 = FUN_14171c317(FUN_146284b85,uVar1,L"EFieldCullingOperationType");
  }
  return;
}



// FUNCTION 142986bc7 FUN_142986bc7 body=55 status=ok
// SIG undefined FUN_142986bc7(void)

void FUN_142986bc7(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9921c8 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9921c8 = FUN_14171c317(FUN_146284bb4,uVar1,L"EFieldResolutionType");
  }
  return;
}



// FUNCTION 142986bfe FUN_142986bfe body=55 status=ok
// SIG undefined FUN_142986bfe(void)

void FUN_142986bfe(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9921e0 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9921e0 = FUN_14171c317(FUN_146284be3,uVar1,L"EFieldFilterType");
  }
  return;
}



// FUNCTION 142986c35 FUN_142986c35 body=55 status=ok
// SIG undefined FUN_142986c35(void)

void FUN_142986c35(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9921f8 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9921f8 = FUN_14171c317(FUN_146284c12,uVar1,L"EFieldObjectType");
  }
  return;
}



// FUNCTION 142986c6c FUN_142986c6c body=55 status=ok
// SIG undefined FUN_142986c6c(void)

void FUN_142986c6c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992210 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992210 = FUN_14171c317(FUN_146284c41,uVar1,L"EFieldPositionType");
  }
  return;
}



// FUNCTION 142986ca3 FUN_142986ca3 body=55 status=ok
// SIG undefined FUN_142986ca3(void)

void FUN_142986ca3(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992228 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992228 = FUN_14171c317(FUN_146284c70,uVar1,L"EFieldFalloffType");
  }
  return;
}



// FUNCTION 142986cda FUN_142986cda body=55 status=ok
// SIG undefined FUN_142986cda(void)

void FUN_142986cda(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992240 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992240 = FUN_14171c317(FUN_146284ca1,uVar1,L"EFieldPhysicsType");
  }
  return;
}



// FUNCTION 142986d11 FUN_142986d11 body=55 status=ok
// SIG undefined FUN_142986d11(void)

void FUN_142986d11(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992258 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992258 = FUN_14171c317(FUN_146284cd2,uVar1,L"EFieldVectorType");
  }
  return;
}



// FUNCTION 142986d48 FUN_142986d48 body=55 status=ok
// SIG undefined FUN_142986d48(void)

void FUN_142986d48(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992270 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992270 = FUN_14171c317(FUN_146284d01,uVar1,L"EFieldScalarType");
  }
  return;
}



// FUNCTION 142986d7f FUN_142986d7f body=55 status=ok
// SIG undefined FUN_142986d7f(void)

void FUN_142986d7f(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992288 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992288 = FUN_14171c317(FUN_146284d30,uVar1,L"EFieldIntegerType");
  }
  return;
}



// FUNCTION 142986db6 FUN_142986db6 body=55 status=ok
// SIG undefined FUN_142986db6(void)

void FUN_142986db6(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9922a0 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9922a0 = FUN_14171c317(FUN_146284d5f,uVar1,L"EFieldOutputType");
  }
  return;
}



// FUNCTION 142986ded FUN_142986ded body=55 status=ok
// SIG undefined FUN_142986ded(void)

void FUN_142986ded(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9922b8 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9922b8 = FUN_14171c317(FUN_146284d8e,uVar1,L"EFieldPhysicsDefaultFields");
  }
  return;
}



// FUNCTION 142986e24 FUN_142986e24 body=55 status=ok
// SIG undefined FUN_142986e24(void)

void FUN_142986e24(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9922e8 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9922e8 = FUN_14171c317(FUN_146284e54,uVar1,L"EConvexOverlapRemoval");
  }
  return;
}



// FUNCTION 142986e5b FUN_142986e5b body=55 status=ok
// SIG undefined FUN_142986e5b(void)

void FUN_142986e5b(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992300 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992300 = FUN_14171c317(FUN_146284e83,uVar1,L"EGenerateConvexMethod");
  }
  return;
}



// FUNCTION 142986e92 FUN_142986e92 body=55 status=ok
// SIG undefined FUN_142986e92(void)

void FUN_142986e92(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992318 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992318 = FUN_14171c317(FUN_146284eb2,uVar1,L"EAllowConvexMergeMethod");
  }
  return;
}



// FUNCTION 142986ec9 FUN_142986ec9 body=55 status=ok
// SIG undefined FUN_142986ec9(void)

void FUN_142986ec9(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992330 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992330 = FUN_14171c317(FUN_146284ee1,uVar1,L"EProximityMethod");
  }
  return;
}



// FUNCTION 142986f00 FUN_142986f00 body=55 status=ok
// SIG undefined FUN_142986f00(void)

void FUN_142986f00(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992348 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992348 = FUN_14171c317(FUN_146284f10,uVar1,L"EProximityContactMethod");
  }
  return;
}



// FUNCTION 142986f37 FUN_142986f37 body=55 status=ok
// SIG undefined FUN_142986f37(void)

void FUN_142986f37(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992360 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992360 = FUN_14171c317(FUN_146284f3f,uVar1,L"EConnectionContactMethod");
  }
  return;
}



// FUNCTION 142986f6e FUN_142986f6e body=55 status=ok
// SIG undefined FUN_142986f6e(void)

void FUN_142986f6e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992378 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992378 = FUN_14171c317(FUN_146284f6e,uVar1,L"ECollisionTypeEnum");
  }
  return;
}



// FUNCTION 142986fa5 FUN_142986fa5 body=55 status=ok
// SIG undefined FUN_142986fa5(void)

void FUN_142986fa5(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992390 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992390 = FUN_14171c317(FUN_146284f9d,uVar1,L"EImplicitTypeEnum");
  }
  return;
}



// FUNCTION 142986fdc FUN_142986fdc body=55 status=ok
// SIG undefined FUN_142986fdc(void)

void FUN_142986fdc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9923a8 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9923a8 = FUN_14171c317(FUN_146284fcc,uVar1,L"EObjectStateTypeEnum");
  }
  return;
}



// FUNCTION 142987013 FUN_142987013 body=55 status=ok
// SIG undefined FUN_142987013(void)

void FUN_142987013(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9923c0 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9923c0 = FUN_14171c317(FUN_146284ffb,uVar1,L"EGeometryCollectionPhysicsTypeEnum");
  }
  return;
}



// FUNCTION 14298704a FUN_14298704a body=55 status=ok
// SIG undefined FUN_14298704a(void)

void FUN_14298704a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9923d8 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9923d8 = FUN_14171c317(FUN_14628502a,uVar1,L"EInitialVelocityTypeEnum");
  }
  return;
}



// FUNCTION 142987081 FUN_142987081 body=55 status=ok
// SIG undefined FUN_142987081(void)

void FUN_142987081(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9923f0 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9923f0 = FUN_14171c317(FUN_146285059,uVar1,L"EEmissionPatternTypeEnum");
  }
  return;
}



// FUNCTION 1429870b8 FUN_1429870b8 body=55 status=ok
// SIG undefined FUN_1429870b8(void)

void FUN_1429870b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992408 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992408 = FUN_14171c317(FUN_146285088,uVar1,L"EDamageModelTypeEnum");
  }
  return;
}



// FUNCTION 1429870ef FUN_1429870ef body=55 status=ok
// SIG undefined FUN_1429870ef(void)

void FUN_1429870ef(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992420 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992420 = FUN_14171c317(FUN_1462850b9,uVar1,L"EChaosSolverTickMode");
  }
  return;
}



// FUNCTION 142987126 FUN_142987126 body=55 status=ok
// SIG undefined FUN_142987126(void)

void FUN_142987126(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992438 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992438 = FUN_14171c317(FUN_1462850e8,uVar1,L"EChaosThreadingMode");
  }
  return;
}



// FUNCTION 14298715d FUN_14298715d body=55 status=ok
// SIG undefined FUN_14298715d(void)

void FUN_14298715d(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992450 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992450 = FUN_14171c317(FUN_146285117,uVar1,L"EChaosBufferMode");
  }
  return;
}



// FUNCTION 142987194 FUN_142987194 body=55 status=ok
// SIG undefined FUN_142987194(void)

void FUN_142987194(void)

{
  undefined8 uVar1;
  
  if (DAT_14c992480 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c992480 = FUN_14171c317(FUN_1462851de,uVar1,L"EChaosSoftsSimulationSpace");
  }
  return;
}



// FUNCTION 1429871cb FUN_1429871cb body=55 status=ok
// SIG undefined FUN_1429871cb(void)

void FUN_1429871cb(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9924a0 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c9924a0 = FUN_14171c317(FUN_146285372,uVar1,L"EClusterUnionMethod");
  }
  return;
}



// FUNCTION 142987202 FUN_142987202 body=69 status=ok
// SIG undefined FUN_142987202(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142987202(void)

{
  _DAT_14c9924c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142987244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9924d0,1);
  return;
}



// FUNCTION 142987247 FUN_142987247 body=69 status=ok
// SIG undefined FUN_142987247(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142987247(void)

{
  _DAT_14c9924e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142987289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9924e8,1);
  return;
}



// FUNCTION 14298728c FUN_14298728c body=69 status=ok
// SIG undefined FUN_14298728c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298728c(void)

{
  _DAT_14c9924f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429872ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992500,1);
  return;
}



// FUNCTION 1429872d2 FUN_1429872d2 body=601 status=ok
// SIG undefined FUN_1429872d2(void)

longlong FUN_1429872d2(longlong param_1,ulonglong param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  PSRWLOCK SRWLock;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  LPVOID pvVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  lVar3 = FUN_14091baa4();
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x90));
  lVar3 = FUN_14001cc68(0xc00,0x10);
  FUN_142a0a610(lVar3,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),'\x02' - (param_4 == '\x02')) &
                      0xffffffff,param_2,param_3);
  iVar1 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar1 + 1U) {
    FUN_14013439c(param_1 + 0x30,iVar1);
  }
  *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 8) = lVar3;
  uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  plVar4 = (longlong *)FUN_14611502c(param_1 + 0x40,uVar2 >> 0x10 ^ uVar2,&local_48);
  iVar1 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar1 + 1U) {
    FUN_14013439c(plVar4,iVar1);
  }
  *(longlong *)(*plVar4 + (longlong)iVar1 * 8) = lVar3;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c994a48) {
    FUN_144b3d300(&DAT_14c994a48);
    if (DAT_14c994a48 == -1) {
      FUN_1456d094c(&DAT_14c994908);
      atexit((_func_5014 *)&LAB_1429e0cbb);
      _Init_thread_footer(&DAT_14c994a48);
    }
  }
  SRWLock = *(PSRWLOCK *)(lVar3 + 0x218);
  pvVar5 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
  iVar1 = (int)((ulonglong)pvVar5 >> 0x20);
  TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
              (LPVOID)((ulonglong)(iVar1 + 1) << 0x20 | (ulonglong)pvVar5 & 0xffffffff));
  if (iVar1 + (int)pvVar5 == 0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  FUN_1448b6bc2(lVar3 + 0xa88,&DAT_14c994998);
  FUN_1401b5dea(lVar3 + 0xad8,&DAT_14c9949e8);
  FUN_1448b6bc2(lVar3 + 0xb28,&DAT_14c994998);
  FUN_1401b5dea(lVar3 + 0xb78,&DAT_14c9949e8);
  pvVar5 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
  uVar2 = (int)((ulonglong)pvVar5 >> 0x20) - 1;
  TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
              (LPVOID)((ulonglong)uVar2 << 0x20 | (ulonglong)pvVar5 & 0xffffffff));
  if (uVar2 + (int)pvVar5 == 0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  lVar6 = FUN_14091baa4();
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x90));
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298752c FUN_14298752c body=318 status=ok
// SIG undefined FUN_14298752c(void)

void FUN_14298752c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  lVar4 = FUN_14091baa4();
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x90));
  local_20 = &local_28;
  iVar2 = FUN_142987704(param_1 + 0x30);
  if ((0 < iVar2) && (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74))) {
    uVar1 = *(ulonglong *)(local_28 + 0x208);
    uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x80);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x88) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar2 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar2 * 0x20) == uVar1) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            local_20 = &local_28;
            FUN_142987704(lVar4 + 8);
          }
          break;
        }
        iVar2 = *(int *)(lVar4 + 0x18);
      } while (iVar2 != -1);
    }
  }
  if (local_28 != 0) {
    FUN_145763270();
  }
  lVar4 = FUN_14091baa4();
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x90));
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14298766b FUN_14298766b body=69 status=ok
// SIG undefined FUN_14298766b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298766b(void)

{
  _DAT_14c992518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429876ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992520,1);
  return;
}



// FUNCTION 1429876be FUN_1429876be body=38 status=ok
// SIG undefined FUN_1429876be(void)

void FUN_1429876be(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x1c)) {
    return;
  }
  FUN_144750f90(param_1 + 0x10);
  return;
}



// FUNCTION 142987704 FUN_142987704 body=213 status=ok
// SIG undefined FUN_142987704(void)

int FUN_142987704(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar5 = (int)param_1[1];
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar4 = 0;
    bVar11 = *plVar1 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      lVar3 = (longlong)iVar8;
      iVar9 = iVar8;
      lVar7 = lVar3;
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar2;
        if (lVar6 <= lVar7) break;
        iVar9 = iVar9 + 1;
        iVar10 = iVar9;
      } while (bVar11 == (plVar1[lVar7] == *(longlong *)*param_2));
      if (bVar11 == false) {
        if (iVar4 != iVar8) {
          memmove(plVar1 + iVar4,plVar1 + lVar3,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar4 = iVar4 + (iVar10 - iVar8);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar6);
    *(int *)(param_1 + 1) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 1429877fa FUN_1429877fa body=29 status=ok
// SIG undefined FUN_1429877fa(void)

void FUN_1429877fa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142987818 FUN_142987818 body=29 status=ok
// SIG undefined FUN_142987818(void)

undefined8 FUN_142987818(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142987838 FUN_142987838 body=192 status=ok
// SIG undefined FUN_142987838(void)

void FUN_142987838(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      plVar3 = (longlong *)(param_1 + 0x70);
      if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0x60);
      }
      (**(code **)(*plVar3 + 8))();
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  else {
    pcVar1 = *(code **)(param_1 + 0x90);
    if (pcVar1 != (code *)0x0) {
      local_28 = *(undefined8 *)(param_1 + 0x30);
      local_30 = *(undefined8 *)(param_1 + 0x38);
      plVar3 = (longlong *)(param_1 + 0xb0);
      if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
        plVar3 = *(longlong **)(param_1 + 0xa0);
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,&local_30,&local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298792a FUN_14298792a body=29 status=ok
// SIG undefined FUN_14298792a(void)

void FUN_14298792a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142987948 FUN_142987948 body=29 status=ok
// SIG undefined FUN_142987948(void)

undefined8 FUN_142987948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142987966 FUN_142987966 body=63 status=ok
// SIG undefined FUN_142987966(void)

void FUN_142987966(undefined4 *param_1)

{
  PSRWLOCK SRWLock;
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 2);
  uVar1 = *param_1;
  SRWLock = (PSRWLOCK)(lVar2 + 0x210);
  AcquireSRWLockExclusive(SRWLock);
  FUN_14106ad44(lVar2 + 0xb28,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00014298799e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 1429879bc FUN_1429879bc body=29 status=ok
// SIG undefined FUN_1429879bc(void)

undefined8 FUN_1429879bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429879f6 FUN_1429879f6 body=29 status=ok
// SIG undefined FUN_1429879f6(void)

void FUN_1429879f6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142987a14 FUN_142987a14 body=57 status=ok
// SIG undefined FUN_142987a14(void)

undefined8 * FUN_142987a14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f45ab0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142987a6a FUN_142987a6a body=29 status=ok
// SIG undefined FUN_142987a6a(void)

void FUN_142987a6a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142987a88 FUN_142987a88 body=57 status=ok
// SIG undefined FUN_142987a88(void)

undefined8 * FUN_142987a88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f45ad0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142987ae6 FUN_142987ae6 body=29 status=ok
// SIG undefined FUN_142987ae6(void)

undefined8 FUN_142987ae6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142987b03 FUN_142987b03 body=754 status=ok
// SIG undefined FUN_142987b03(void)

void FUN_142987b03(void)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined **local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14098d3d2(FUN_142986ab4,L"/Script/Chaos",L"ChaosDeformableSimSpace",&DAT_14c992148);
  local_50 = &PTR_FUN_149f41c10;
  uStack_48 = 0xf;
  local_58 = 1;
  FUN_14282b410(L"/Script/Chaos",0,0,&PTR_FUN_149f41df0);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_149f41f80 + lVar1),L"/Script/Chaos",
                  *(undefined8 *)(&UNK_149f41f88 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_149f41f90 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x70);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_149f42140 + lVar1),L"/Script/Chaos",
                  *(undefined8 *)(&UNK_149f42148 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_149f42150 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x70);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_149f42660 + lVar1),L"/Script/Chaos",
                  *(undefined8 *)(&UNK_149f42668 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_149f42670 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0xf0);
  lVar1 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_149f42900 + lVar1),L"/Script/Chaos",
                  *(undefined8 *)(&UNK_149f42908 + lVar1),
                  *(undefined8 *)((longlong)&PTR_FUN_149f42910 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x70);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/Chaos",0,0,&PTR_FUN_149f42a00);
  FUN_14098d3d2(FUN_142987194,L"/Script/Chaos",L"EChaosSoftsSimulationSpace",&DAT_14c992478);
  local_40 = 0x8000000149f42ab0;
  local_2c = 5;
  local_38 = FUN_14577453c();
  local_34 = 1;
  FUN_14628520e(&local_40);
  uStack_48 = 1;
  local_50 = &PTR_FUN_149f43360;
  local_58 = 1;
  FUN_14282b410(L"/Script/Chaos",0,0,&PTR_FUN_149f43380);
  local_40._0_4_ = 1;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c9924c8,L"p.Chaos.DedicatedThreadEnabled",&local_40,
                L"Enables a dedicated physics task/thread for Chaos tasks.0: Disabled1: Enabled");
  atexit(FUN_142987202);
  local_40._0_4_ = 0x42700000;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14c9924e0,L"p.Chaos.Thread.DesiredHz",&local_40,
                L"Desired update rate of the dedicated physics thread in Hz/FPS (Default 60.0f)");
  atexit(FUN_142987247);
  local_40 = (ulonglong)local_40._4_4_ << 0x20;
  local_58 = local_58 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14c9924f8,L"p.Chaos.Thread.WaitThreshold",&local_40,
                L"Desired wait time in ms before the game thread stops waiting to sync physics and just takes the last result. (default 16ms)"
               );
  atexit(FUN_14298728c);
  FUN_140056680(&local_40,L"1,4,8,16,32,64,128,256,512");
  local_58 = local_58 & 0xffffffff00000000;
  FUN_140f510cc(&DAT_14c992518,L"p.Chaos.DumpHierElementBuckets",&local_40,
                L"Distribution buckets for dump hierarchy stats command");
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_14298766b);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142987df8 FUN_142987df8 body=69 status=ok
// SIG undefined FUN_142987df8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142987df8(void)

{
  _DAT_14c992580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142987e3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992588,1);
  return;
}



// FUNCTION 142987e3e FUN_142987e3e body=2481 status=ok
// SIG undefined FUN_142987e3e(void)

char FUN_142987e3e(double *param_1,double *param_2,double *param_3,double param_4,double param_5,
                  double *param_6,double *param_7,double *param_8,undefined4 *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  double *local_2f0;
  double *local_2e8;
  double *local_2e0;
  undefined4 *local_2d8;
  int local_2c4;
  ulonglong local_2c0;
  double local_2b8;
  double *local_2b0;
  double *local_2a8;
  double *local_2a0;
  double local_298 [6];
  double local_268 [3];
  double local_250 [3];
  double local_238 [3];
  double local_220 [3];
  undefined **local_208 [2];
  double dStack_1f8;
  undefined2 local_1f0;
  undefined1 local_1ee;
  undefined2 local_1ec;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1a8;
  undefined4 auStack_1a0 [2];
  double adStack_198 [8];
  double local_158 [10];
  double local_108 [3];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  *param_9 = 0xffffffff;
  dVar1 = param_2[2];
  dVar2 = *param_2;
  dVar3 = param_2[1];
  local_220[0] = (*param_1 - param_5) - dVar2;
  local_220[1] = (param_1[1] - param_5) - dVar3;
  local_220[2] = (param_1[2] - param_5) - dVar1;
  local_238[0] = (param_1[3] + param_5) - dVar2;
  local_238[1] = (param_1[4] + param_5) - dVar3;
  local_238[2] = (param_1[5] + param_5) - dVar1;
  dVar4 = 1.79769313486232e+308;
  uVar17 = 0x3ff00000;
  lVar10 = 0;
  dVar14 = 0.0;
  dVar24 = 0.0;
  uVar19 = 0;
  uVar21 = 0;
  uVar11 = 0;
  uVar12 = 0;
  do {
    local_2b8 = param_4;
    if (ABS(param_3[lVar10]) <= 1e-08) {
      if (local_298[lVar10 + 0xf] <= 0.0) {
        dVar6 = 0.0;
        dVar13 = 3.4028234663852886e+38;
        if (0.0 < local_298[lVar10 + 0xc] || local_298[lVar10 + 0xc] == 0.0) goto LAB_142988020;
      }
LAB_14298817f:
      cVar8 = '\0';
      goto LAB_142988244;
    }
    dVar13 = 1.0 / param_3[lVar10];
    dVar6 = local_298[lVar10 + 0xf] * dVar13;
    dVar13 = dVar13 * local_298[lVar10 + 0xc];
LAB_142988020:
    if ((int)lVar10 == 0) {
      local_208[0] = (undefined **)0x3ff0000000000000;
      local_208[1] = (undefined **)0x0;
      dStack_1f8 = 0.0;
      uVar23 = 0;
      uVar20 = 0;
      uVar16 = uVar17;
    }
    else {
      if ((int)lVar10 == 1) {
        local_208[1] = (undefined **)0x3ff0000000000000;
        dStack_1f8 = 0.0;
        uVar20 = uVar17;
        uVar23 = 0;
      }
      else {
        local_208[1] = (undefined **)0x0;
        dStack_1f8 = 1.0;
        uVar20 = 0;
        uVar23 = uVar17;
      }
      local_208[0] = (undefined **)0x0;
      uVar16 = 0;
    }
    uVar22 = 0;
    uVar18 = 0;
    uVar15 = 0;
    dVar7 = dVar6;
    if (dVar6 <= dVar13) {
      local_208[lVar10] = (undefined **)0xbff0000000000000;
      uVar15 = SUB84(local_208[0],0);
      uVar16 = (undefined4)((ulonglong)local_208[0] >> 0x20);
      uVar18 = SUB84(local_208[1],0);
      uVar20 = (undefined4)((ulonglong)local_208[1] >> 0x20);
      uVar22 = SUB84(dStack_1f8,0);
      uVar23 = (undefined4)((ulonglong)dStack_1f8 >> 0x20);
      dVar7 = dVar13;
      dVar13 = dVar6;
    }
    if (dVar7 <= dVar4) {
      dVar4 = dVar7;
    }
    dVar6 = dVar24;
    if (dVar24 <= dVar13) {
      dVar6 = dVar13;
    }
    if (dVar4 < dVar6) goto LAB_14298817f;
    if (dVar13 <= dVar24) {
      uVar15 = uVar19;
      uVar16 = uVar21;
      uVar18 = uVar11;
      uVar20 = uVar12;
    }
    dVar14 = (double)(~-(ulonglong)(dVar24 < dVar13) & (ulonglong)dVar14 |
                     CONCAT44(uVar23,uVar22) & -(ulonglong)(dVar24 < dVar13));
    lVar10 = lVar10 + 1;
    dVar24 = dVar6;
    uVar19 = uVar15;
    uVar21 = uVar16;
    uVar11 = uVar18;
    uVar12 = uVar20;
  } while (lVar10 != 3);
  cVar8 = '\0';
  if ((dVar4 < 0.0) || (param_4 < dVar6)) goto LAB_142988244;
  local_250[2] = dVar1 + param_3[2] * dVar6;
  local_250[1] = dVar3 + param_3[1] * dVar6;
  local_250[0] = dVar2 + *param_3 * dVar6;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    lVar10 = 0;
    iVar9 = 0;
    do {
      dVar1 = param_1[lVar10];
      if (local_298[lVar10 + 9] < dVar1) {
        local_298[lVar10 + 6] = dVar1;
        local_298[lVar10 + 3] = dVar1;
LAB_142988320:
        iVar9 = iVar9 + 1;
      }
      else {
        dVar2 = param_1[lVar10 + 3];
        if (dVar2 < local_298[lVar10 + 9]) {
          local_298[lVar10 + 6] = dVar2;
          local_298[lVar10 + 3] = dVar2;
          goto LAB_142988320;
        }
        local_298[lVar10 + 6] = dVar1;
        local_298[lVar10 + 3] = dVar2;
      }
      dVar3 = local_268[2];
      dVar2 = local_268[1];
      dVar1 = local_268[0];
      lVar10 = lVar10 + 1;
    } while (lVar10 != 3);
    if (iVar9 < 2) goto LAB_1429881fb;
    if (iVar9 == 3) {
      local_2c4 = -1;
      local_2c0 = 0;
      local_2a8 = local_158;
      local_2b0 = &local_1a8;
      lVar10 = 0;
      uVar19 = 0;
      uVar21 = 0;
      do {
        local_298[2] = local_268[2];
        local_298[0] = local_268[0];
        local_298[1] = local_268[1];
        dVar4 = *(double *)((longlong)param_1 + lVar10);
        uVar11 = SUB84(dVar4,0);
        uVar12 = (undefined4)((ulonglong)dVar4 >> 0x20);
        if ((*(double *)((longlong)local_298 + lVar10) == dVar4) &&
           (!NAN(*(double *)((longlong)local_298 + lVar10)) && !NAN(dVar4))) {
          uVar5 = *(undefined8 *)((longlong)param_1 + lVar10 + 0x18);
          uVar11 = (undefined4)uVar5;
          uVar12 = (undefined4)((ulonglong)uVar5 >> 0x20);
        }
        *(ulonglong *)((longlong)local_298 + lVar10) = CONCAT44(uVar12,uVar11);
        local_208[1] = (undefined **)0x0;
        local_1f0 = 0x101;
        local_1ee = 1;
        local_1ec = 0x303;
        local_208[0] = &PTR_FUN_149f487f0;
        local_1d8 = local_268[2];
        local_1e8 = local_268[0];
        dStack_1e0 = local_268[1];
        dVar4 = local_298[2] - dVar3;
        dVar14 = local_298[0] - dVar1;
        dVar13 = local_298[1] - dVar2;
        dVar24 = dVar4 * dVar4 + dVar14 * dVar14 + dVar13 * dVar13;
        local_1c8 = 0.0;
        local_1d0 = 1.0;
        local_1c0 = 0.0;
        local_1b8 = 0.0;
        if (9.999999747378752e-05 <= dVar24) {
          local_1b8 = SQRT(dVar24);
          local_1c0 = dVar4 / local_1b8;
          local_1c8 = dVar13 / local_1b8;
          local_1d0 = dVar14 / local_1b8;
        }
        dStack_1f8 = param_5;
        local_2f0 = (double *)((longlong)local_108 + lVar10);
        local_2d8 = param_9;
        local_2e0 = local_2b0;
        local_2e8 = local_2a8;
        local_2f8 = 0;
        local_2a0 = local_2f0;
        cVar8 = FUN_140663590(local_208,param_2,param_3,local_2b8);
        iVar9 = (int)local_2c0;
        if (cVar8 != '\0') {
          dVar4 = *local_2a0;
          if ((local_2c4 == -1) ||
             (dVar4 <= (double)CONCAT44(uVar21,uVar19) && (double)CONCAT44(uVar21,uVar19) != dVar4))
          {
            uVar21 = (undefined4)((ulonglong)dVar4 >> 0x20);
            uVar19 = SUB84(dVar4,0);
            local_2c4 = iVar9;
            if ((dVar4 == 0.0) && (!NAN(dVar4))) {
              *param_6 = 0.0;
              local_208[0] = &PTR_FUN_149f553e0;
              goto LAB_142988242;
            }
          }
        }
        lVar10 = lVar10 + 8;
        local_2c0 = (ulonglong)(iVar9 + 1);
        local_2a8 = local_2a8 + 3;
        local_2b0 = local_2b0 + 3;
      } while (lVar10 != 0x18);
      cVar8 = local_2c4 != -1;
      if ((bool)cVar8) {
        lVar10 = (longlong)local_2c4;
        param_7[2] = local_158[lVar10 * 3 + 2];
        dVar1 = local_158[lVar10 * 3 + 1];
        *param_7 = local_158[lVar10 * 3];
        param_7[1] = dVar1;
        *param_6 = (double)CONCAT44(uVar21,uVar19);
        param_8[2] = adStack_198[lVar10 * 3];
        uVar19 = auStack_1a0[lVar10 * 6 + -1];
        uVar21 = auStack_1a0[lVar10 * 6];
        uVar11 = auStack_1a0[lVar10 * 6 + 1];
        *(undefined4 *)param_8 = *(undefined4 *)(&local_1a8 + lVar10 * 3);
        *(undefined4 *)((longlong)param_8 + 4) = uVar19;
        *(undefined4 *)(param_8 + 1) = uVar21;
        *(undefined4 *)((longlong)param_8 + 0xc) = uVar11;
      }
    }
    else {
      local_208[1] = (undefined **)0x0;
      local_1f0 = 0x101;
      local_1ee = 1;
      local_1ec = 0x303;
      local_208[0] = &PTR_FUN_149f487f0;
      local_1e8 = local_268[0];
      dStack_1e0 = local_268[1];
      local_1c0 = local_298[5] - local_268[2];
      local_1c8 = local_298[4] - local_268[1];
      local_1d0 = local_298[3] - local_268[0];
      local_1d8 = local_268[2];
      local_1b8 = local_1c0 * local_1c0 + local_1d0 * local_1d0 + local_1c8 * local_1c8;
      if (local_1b8 < 9.999999747378752e-05) {
        local_1c8 = 0.0;
        local_1d0 = 1.0;
        local_1c0 = 0.0;
        local_1b8 = 0.0;
      }
      else {
        local_1b8 = SQRT(local_1b8);
        local_1c0 = local_1c0 / local_1b8;
        local_1c8 = local_1c8 / local_1b8;
        local_1d0 = local_1d0 / local_1b8;
      }
      dStack_1f8 = param_5;
      local_2d8 = param_9;
      local_2e0 = param_8;
      local_2e8 = param_7;
      local_2f0 = param_6;
      local_2f8 = 0;
      cVar8 = FUN_140663590(local_208,param_2,param_3,param_4);
    }
    local_208[0] = &PTR_FUN_149f553e0;
    if ((cVar8 == '\0') || (*param_6 <= 0.0)) goto LAB_142988244;
    dVar1 = param_8[2];
    dVar2 = param_8[1];
    *param_7 = *param_7 - param_5 * *param_8;
    param_7[1] = param_7[1] - dVar2 * param_5;
    param_7[2] = param_7[2] - dVar1 * param_5;
  }
  else {
LAB_1429881fb:
    *param_6 = dVar6;
    *param_8 = (double)CONCAT44(uVar16,uVar15);
    param_8[1] = (double)CONCAT44(uVar20,uVar18);
    param_8[2] = dVar14;
    *param_7 = local_250[0] - (double)CONCAT44(uVar16,uVar15) * param_5;
    param_7[1] = local_250[1] - (double)CONCAT44(uVar20,uVar18) * param_5;
    param_7[2] = local_250[2] - dVar14 * param_5;
  }
LAB_142988242:
  cVar8 = '\x01';
LAB_142988244:
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar8;
}



// FUNCTION 1429887f0 FUN_1429887f0 body=69 status=ok
// SIG undefined FUN_1429887f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429887f0(void)

{
  _DAT_14c992598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988832. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9925a0,1);
  return;
}



// FUNCTION 142988835 FUN_142988835 body=69 status=ok
// SIG undefined FUN_142988835(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988835(void)

{
  _DAT_14c9925a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9925b0,1);
  return;
}



// FUNCTION 14298887a FUN_14298887a body=69 status=ok
// SIG undefined FUN_14298887a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298887a(void)

{
  _DAT_14c9925b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429888bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9925c0,1);
  return;
}



// FUNCTION 1429888bf FUN_1429888bf body=69 status=ok
// SIG undefined FUN_1429888bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429888bf(void)

{
  _DAT_14c9925c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988901. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9925d0,1);
  return;
}



// FUNCTION 142988904 FUN_142988904 body=69 status=ok
// SIG undefined FUN_142988904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988904(void)

{
  _DAT_14c9925d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988946. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9925e0,1);
  return;
}



// FUNCTION 142988949 FUN_142988949 body=69 status=ok
// SIG undefined FUN_142988949(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988949(void)

{
  _DAT_14c9925e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298898b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9925f0,1);
  return;
}



// FUNCTION 14298898e FUN_14298898e body=69 status=ok
// SIG undefined FUN_14298898e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298898e(void)

{
  _DAT_14c9925f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429889d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992600,1);
  return;
}



// FUNCTION 1429889d3 FUN_1429889d3 body=69 status=ok
// SIG undefined FUN_1429889d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429889d3(void)

{
  _DAT_14c992608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988a15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992610,1);
  return;
}



// FUNCTION 142988a18 FUN_142988a18 body=69 status=ok
// SIG undefined FUN_142988a18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988a18(void)

{
  _DAT_14c992618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988a5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992620,1);
  return;
}



// FUNCTION 142988a5d FUN_142988a5d body=69 status=ok
// SIG undefined FUN_142988a5d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988a5d(void)

{
  _DAT_14c992628 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992630,1);
  return;
}



// FUNCTION 142988aa2 FUN_142988aa2 body=69 status=ok
// SIG undefined FUN_142988aa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988aa2(void)

{
  _DAT_14c992638 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992640,1);
  return;
}



// FUNCTION 142988ae7 FUN_142988ae7 body=69 status=ok
// SIG undefined FUN_142988ae7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988ae7(void)

{
  _DAT_14c992648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988b29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992650,1);
  return;
}



// FUNCTION 142988b2c FUN_142988b2c body=69 status=ok
// SIG undefined FUN_142988b2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988b2c(void)

{
  _DAT_14c992658 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988b6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992660,1);
  return;
}



// FUNCTION 142988b71 FUN_142988b71 body=69 status=ok
// SIG undefined FUN_142988b71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988b71(void)

{
  _DAT_14c992668 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992670,1);
  return;
}



// FUNCTION 142988bb6 FUN_142988bb6 body=69 status=ok
// SIG undefined FUN_142988bb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988bb6(void)

{
  _DAT_14c992678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992680,1);
  return;
}



// FUNCTION 142988bfc FUN_142988bfc body=132 status=ok
// SIG undefined FUN_142988bfc(void)

undefined8 FUN_142988bfc(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = (longlong)*param_2;
  if ((lVar3 < 0) || (*(int *)(param_1 + 0xb0) <= *param_2)) {
    uVar4 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + lVar3 * 0x24);
    uVar4 = 0;
    if ((piVar1 != (int *)0x0) &&
       (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x20 + lVar3 * 0x24) != '\0')) {
      if (*piVar1 == -1) {
        FUN_146c9b648(param_1,param_2);
      }
      else {
        FUN_146c9b5bc(param_1,param_2);
      }
      iVar2 = *param_2;
      uVar4 = 1;
      if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0xb0))) {
        *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x20 + (longlong)iVar2 * 0x24) = 0;
      }
    }
  }
  return uVar4;
}



// FUNCTION 142988c80 FUN_142988c80 body=255 status=ok
// SIG undefined FUN_142988c80(void)

ulonglong FUN_142988c80(longlong param_1,int *param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int7 iVar7;
  ulonglong uVar6;
  
  iVar2 = *param_2;
  lVar5 = (longlong)iVar2;
  iVar3 = *(int *)(param_1 + 0xb0);
  if ((-1 < lVar5) && (iVar2 < iVar3)) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
    piVar1 = (int *)(lVar4 + lVar5 * 0x24);
    if ((piVar1 != (int *)0x0) && (*(char *)(lVar4 + 0x20 + lVar5 * 0x24) != '\0')) {
      iVar7 = (int7)(int3)((uint)iVar2 >> 8);
      if (*piVar1 == -1) {
        FUN_146c9b648(param_1,param_2,piVar1);
        FUN_146c9b83e(param_1,param_2,piVar1,param_3,param_4);
        uVar6 = CONCAT71(iVar7,1);
      }
      else {
        uVar6 = CONCAT71(iVar7,1);
        if (param_4 != '\0') {
          FUN_146c9b5bc(param_1,param_2,piVar1);
          FUN_146c9b83e(param_1,param_2,piVar1,param_3,1);
        }
      }
      goto LAB_142988cd8;
    }
  }
  if (iVar3 <= iVar2) {
    FUN_146ca7c98((longlong *)(param_1 + 0xa8),(iVar2 - iVar3) + 1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x20 + lVar5 * 0x24) = 1;
  FUN_146c9b83e(param_1,param_2,lVar5 * 0x24 + *(longlong *)(param_1 + 0xa8),param_3,param_4);
  uVar6 = 0;
LAB_142988cd8:
  return uVar6 & 0xffffffff;
}



// FUNCTION 142988d80 FUN_142988d80 body=134 status=ok
// SIG undefined FUN_142988d80(void)

undefined8 FUN_142988d80(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = (longlong)*(int *)(param_2 + 0x10);
  if ((lVar3 < 0) || (*(int *)(param_1 + 0xb0) <= *(int *)(param_2 + 0x10))) {
    uVar4 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)(param_1 + 0xa8) + lVar3 * 0x24);
    uVar4 = 0;
    if ((piVar1 != (int *)0x0) &&
       (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x20 + lVar3 * 0x24) != '\0')) {
      if (*piVar1 == -1) {
        FUN_146c9ca88(param_1,param_2);
      }
      else {
        FUN_146c9c9fa(param_1,param_2);
      }
      iVar2 = *(int *)(param_2 + 0x10);
      uVar4 = 1;
      if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0xb0))) {
        *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x20 + (longlong)iVar2 * 0x24) = 0;
      }
    }
  }
  return uVar4;
}



// FUNCTION 142988e06 FUN_142988e06 body=256 status=ok
// SIG undefined FUN_142988e06(void)

ulonglong FUN_142988e06(longlong param_1,longlong param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int7 iVar7;
  ulonglong uVar6;
  
  iVar2 = *(int *)(param_2 + 0x10);
  lVar5 = (longlong)iVar2;
  iVar3 = *(int *)(param_1 + 0xb0);
  if ((-1 < lVar5) && (iVar2 < iVar3)) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
    piVar1 = (int *)(lVar4 + lVar5 * 0x24);
    if ((piVar1 != (int *)0x0) && (*(char *)(lVar4 + 0x20 + lVar5 * 0x24) != '\0')) {
      iVar7 = (int7)(int3)((uint)iVar2 >> 8);
      if (*piVar1 == -1) {
        FUN_146c9ca88(param_1,param_2,piVar1);
        FUN_146c9cc66(param_1,param_2,piVar1,param_3,param_4);
        uVar6 = CONCAT71(iVar7,1);
      }
      else {
        uVar6 = CONCAT71(iVar7,1);
        if (param_4 != '\0') {
          FUN_146c9c9fa(param_1,param_2,piVar1);
          FUN_146c9cc66(param_1,param_2,piVar1,param_3,1);
        }
      }
      goto LAB_142988e5f;
    }
  }
  if (iVar3 <= iVar2) {
    FUN_146cab80a((longlong *)(param_1 + 0xa8),(iVar2 - iVar3) + 1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0xa8) + 0x20 + lVar5 * 0x24) = 1;
  FUN_146c9cc66(param_1,param_2,lVar5 * 0x24 + *(longlong *)(param_1 + 0xa8),param_3,param_4);
  uVar6 = 0;
LAB_142988e5f:
  return uVar6 & 0xffffffff;
}



// FUNCTION 142988f06 FUN_142988f06 body=69 status=ok
// SIG undefined FUN_142988f06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988f06(void)

{
  _DAT_14c992688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992690,1);
  return;
}



// FUNCTION 142988f4b FUN_142988f4b body=69 status=ok
// SIG undefined FUN_142988f4b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988f4b(void)

{
  _DAT_14c992698 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988f8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9926a0,1);
  return;
}



// FUNCTION 142988f90 FUN_142988f90 body=69 status=ok
// SIG undefined FUN_142988f90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988f90(void)

{
  _DAT_14c9926a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142988fd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9926b0,1);
  return;
}



// FUNCTION 142988fd5 FUN_142988fd5 body=69 status=ok
// SIG undefined FUN_142988fd5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142988fd5(void)

{
  _DAT_14c9926b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142989017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9926c0,1);
  return;
}



// FUNCTION 14298901a FUN_14298901a body=69 status=ok
// SIG undefined FUN_14298901a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298901a(void)

{
  _DAT_14c9926c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9926d0,1);
  return;
}



// FUNCTION 142989060 FUN_142989060 body=684 status=ok
// SIG undefined FUN_142989060(void)

/* WARNING: Removing unreachable block (ram,0x00014298927f) */

void FUN_142989060(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_f8 [32];
  int *local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  void *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = (longlong *)(param_1 + 0x90);
  iVar9 = *(int *)(param_1 + 0x9c);
  FUN_140191e42(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((iVar9 < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_146cb2342(plVar1,0);
  }
  FUN_142989b80(param_1 + 0x28);
  if (*(int *)(param_2 + 1) != 0) {
    local_d8 = &local_3c;
    FUN_146c9ec6f(&local_70,*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    local_98 = local_60;
    local_a8 = local_70;
    uStack_a0 = uStack_68;
    uStack_90 = local_58;
    uStack_8c = uStack_54;
    uStack_88 = uStack_50;
    uStack_84 = uStack_4c;
    uStack_80 = local_48;
    iVar9 = *(int *)(param_1 + 0x98);
    uVar6 = iVar9 + 1;
    *(uint *)(param_1 + 0x98) = uVar6;
    if (*(uint *)(param_1 + 0x9c) < uVar6) {
      FUN_146cb23c6(plVar1);
    }
    lVar5 = *plVar1;
    lVar8 = (longlong)iVar9 * 0x50;
    puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar8);
    *puVar2 = uStack_88;
    puVar2[1] = uStack_84;
    puVar2[2] = (undefined4)uStack_80;
    puVar2[3] = uStack_80._4_4_;
    puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar8);
    *puVar2 = (undefined4)local_98;
    puVar2[1] = local_98._4_4_;
    puVar2[2] = uStack_90;
    puVar2[3] = uStack_8c;
    *(undefined8 *)(lVar5 + lVar8) = local_a8;
    ((undefined8 *)(lVar5 + lVar8))[1] = uStack_a0;
    *(int *)(lVar5 + 0x30 + lVar8) = local_3c;
    puVar3 = (undefined8 *)(lVar5 + 0x38 + lVar8);
    *puVar3 = 0;
    puVar3[1] = 0;
    if (*(int *)(param_2 + 1) < 6) {
      iVar9 = *(int *)(param_1 + 0xa8);
      *(int *)(*(longlong *)(param_1 + 0x90) + 0x48) = iVar9;
      local_b8 = (void *)0x0;
      uVar6 = *(uint *)(param_2 + 1);
      _Src = (void *)*param_2;
      local_b0 = CONCAT44(local_b0._4_4_,uVar6);
      if ((longlong)(int)uVar6 == 0) {
        local_b0 = (ulonglong)uVar6;
      }
      else {
        FUN_144a06ca8(&local_b8,uVar6,0);
        memcpy(local_b8,_Src,(longlong)(int)uVar6 << 2);
        iVar9 = *(int *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0xa8) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar9 + 1U) {
        FUN_140bfc2d4((longlong *)(param_1 + 0xa0));
      }
      lVar5 = *(longlong *)(param_1 + 0xa0);
      lVar8 = (longlong)iVar9 * 0x10;
      *(undefined8 *)(lVar5 + lVar8) = 0;
      *(void **)(lVar5 + lVar8) = local_b8;
      local_b8 = (void *)0x0;
      *(undefined4 *)(lVar5 + 8 + lVar8) = (undefined4)local_b0;
      *(undefined4 *)(lVar5 + 0xc + lVar8) = local_b0._4_4_;
      local_b0 = 0;
    }
    else {
      local_d8 = (int *)CONCAT44(local_d8._4_4_,local_3c);
      local_d0 = 1;
      local_c8 = (char)param_3;
      iVar7 = FUN_146c9ee8a(param_1,&local_70,&local_58,param_2);
      iVar9 = 2;
      if (local_3c == -1) {
        iVar9 = 8;
      }
      do {
        lVar5 = *plVar1;
        iVar4 = *(int *)(lVar5 + 0x40);
        *(uint *)(lVar5 + 0x40) = iVar4 + 1U;
        if (*(uint *)(lVar5 + 0x44) < iVar4 + 1U) {
          FUN_1446f48e2((longlong *)(lVar5 + 0x38),iVar4);
        }
        *(int *)(*(longlong *)(lVar5 + 0x38) + (longlong)iVar4 * 4) = iVar7;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142989336 FUN_142989336 body=99 status=ok
// SIG undefined FUN_142989336(void)

void FUN_142989336(void)

{
  if (DAT_14c992a80 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c992a70 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c992a60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c992a50 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c992a40 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142989399 FUN_142989399 body=69 status=ok
// SIG undefined FUN_142989399(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142989399(void)

{
  _DAT_14c9926d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429893db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9926e0,1);
  return;
}



// FUNCTION 1429893de FUN_1429893de body=69 status=ok
// SIG undefined FUN_1429893de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429893de(void)

{
  _DAT_14c9926e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142989420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9926f0,1);
  return;
}



// FUNCTION 142989423 FUN_142989423 body=69 status=ok
// SIG undefined FUN_142989423(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142989423(void)

{
  _DAT_14c9926f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142989465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992700,1);
  return;
}



// FUNCTION 142989468 FUN_142989468 body=69 status=ok
// SIG undefined FUN_142989468(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142989468(void)

{
  _DAT_14c992708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429894aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992710,1);
  return;
}



// FUNCTION 1429894ad FUN_1429894ad body=69 status=ok
// SIG undefined FUN_1429894ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429894ad(void)

{
  _DAT_14c992718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429894ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992720,1);
  return;
}



// FUNCTION 1429894f2 FUN_1429894f2 body=69 status=ok
// SIG undefined FUN_1429894f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429894f2(void)

{
  _DAT_14c992728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142989534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992730,1);
  return;
}



// FUNCTION 142989537 FUN_142989537 body=69 status=ok
// SIG undefined FUN_142989537(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142989537(void)

{
  _DAT_14c992738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142989579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992740,1);
  return;
}



// FUNCTION 14298957c FUN_14298957c body=69 status=ok
// SIG undefined FUN_14298957c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298957c(void)

{
  _DAT_14c992748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429895be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992750,1);
  return;
}



// FUNCTION 1429895c1 FUN_1429895c1 body=69 status=ok
// SIG undefined FUN_1429895c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429895c1(void)

{
  _DAT_14c992760 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142989603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992768,1);
  return;
}



// FUNCTION 142989606 FUN_142989606 body=69 status=ok
// SIG undefined FUN_142989606(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142989606(void)

{
  _DAT_14c992770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142989648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992778,1);
  return;
}



// FUNCTION 14298964b FUN_14298964b body=69 status=ok
// SIG undefined FUN_14298964b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298964b(void)

{
  _DAT_14c992780 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298968d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992788,1);
  return;
}



// FUNCTION 142989694 FUN_142989694 body=333 status=ok
// SIG undefined FUN_142989694(void)

double FUN_142989694(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_2[2] - *(double *)(param_1 + 0x30)) * *(double *)(param_1 + 0x48) +
          (*param_2 - *(double *)(param_1 + 0x20)) * *(double *)(param_1 + 0x38) +
          (param_2[1] - *(double *)(param_1 + 0x28)) * *(double *)(param_1 + 0x40);
  if (*(double *)(param_1 + 0x50) <= dVar1) {
    dVar1 = *(double *)(param_1 + 0x50);
  }
  dVar5 = 0.0;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar2 = param_2[2] - (dVar1 * *(double *)(param_1 + 0x48) + *(double *)(param_1 + 0x30));
  dVar4 = param_2[1] - (*(double *)(param_1 + 0x40) * dVar1 + *(double *)(param_1 + 0x28));
  dVar3 = *param_2 - (*(double *)(param_1 + 0x38) * dVar1 + *(double *)(param_1 + 0x20));
  dVar1 = dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
  if (dVar1 < 9.999999747378752e-05) {
    dVar3 = 1.0;
    dVar2 = 0.0;
    dVar1 = 0.0;
  }
  else {
    dVar1 = SQRT(dVar1);
    dVar2 = dVar2 / dVar1;
    dVar5 = dVar4 / dVar1;
    dVar3 = dVar3 / dVar1;
  }
  *param_3 = dVar3;
  param_3[1] = dVar5;
  param_3[2] = dVar2;
  return dVar1 - *(double *)(param_1 + 0x10);
}



// FUNCTION 14298986a FUN_14298986a body=105 status=ok
// SIG undefined FUN_14298986a(void)

double * FUN_14298986a(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x10);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x28);
  *param_2 = dVar3 - dVar2;
  param_2[1] = dVar4 - dVar2;
  param_2[2] = dVar1 - dVar2;
  param_2[3] = dVar2 + dVar3;
  param_2[4] = dVar2 + dVar4;
  param_2[5] = dVar2 + dVar1;
  return param_2;
}



// FUNCTION 1429898d3 FUN_1429898d3 body=526 status=ok
// SIG undefined FUN_1429898d3(void)

void FUN_1429898d3(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar8 = (longlong)param_2 - (longlong)param_1;
  if ((longlong)uVar8 < 0x101) {
LAB_14298990a:
    puVar4 = param_1 + 1;
    puVar6 = param_1;
    if (param_1 + 1 != param_2 && param_1 != param_2) {
      do {
        puVar3 = puVar4;
        plVar1 = (longlong *)puVar6[1];
        if (*(float *)(*(longlong *)*param_1 + 0x640) <= *(float *)(*plVar1 + 0x640)) {
          plVar5 = (longlong *)puVar3[-1];
          puVar4 = puVar3;
          if (*(float *)(*plVar1 + 0x640) < *(float *)(*plVar5 + 0x640)) {
            do {
              *puVar4 = plVar5;
              plVar5 = (longlong *)puVar4[-2];
              puVar4 = puVar4 + -1;
            } while (*(float *)(*plVar1 + 0x640) <= *(float *)(*plVar5 + 0x640) &&
                     *(float *)(*plVar5 + 0x640) != *(float *)(*plVar1 + 0x640));
          }
        }
        else {
          memmove((void *)((longlong)puVar6 + (0x10 - ((longlong)puVar3 - (longlong)param_1))),
                  param_1,(longlong)puVar3 - (longlong)param_1);
          puVar4 = param_1;
        }
        *puVar4 = plVar1;
        puVar4 = puVar3 + 1;
        puVar6 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  else {
    if (0 < (longlong)param_3) {
      puVar4 = param_2;
      do {
        FUN_146ca54e5(&local_50,param_1,puVar4);
        puVar6 = local_48;
        param_2 = local_50;
        param_3 = (param_3 >> 2) + (param_3 >> 1);
        if ((longlong)local_50 - (longlong)param_1 < (longlong)puVar4 - (longlong)local_48) {
          FUN_1429898d3(param_1,local_50,param_3);
          param_1 = puVar6;
          param_2 = puVar4;
        }
        else {
          FUN_1429898d3(local_48,puVar4,param_3);
        }
        uVar8 = (longlong)param_2 - (longlong)param_1;
        if ((longlong)uVar8 < 0x101) goto LAB_14298990a;
        puVar4 = param_2;
      } while (param_3 != 0);
    }
    uVar10 = uVar8 >> 4;
    do {
      uVar9 = uVar10 - 1;
      local_50 = (undefined8 *)param_1[uVar9];
      FUN_146ca56c8(param_1,uVar9,uVar8 >> 3,&local_50);
      bVar2 = 1 < uVar10;
      uVar10 = uVar9;
    } while (bVar2);
    lVar7 = (longlong)param_2 - (longlong)param_1;
    if (8 < lVar7) {
      do {
        param_2 = param_2 + -1;
        local_50 = (undefined8 *)*param_2;
        *param_2 = *param_1;
        lVar7 = lVar7 + -8;
        FUN_146ca56c8(param_1,0,lVar7 >> 3,&local_50);
      } while (8 < lVar7);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142989ae2 FUN_142989ae2 body=157 status=ok
// SIG undefined FUN_142989ae2(void)

void FUN_142989ae2(longlong param_1,longlong *param_2,int param_3,uint *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  
  uVar18 = *param_4;
  if ((uVar18 & 1) != 0) {
    lVar17 = *param_2;
    lVar19 = (longlong)param_3 * 0x30;
    uVar6 = *(undefined4 *)(param_1 + 0x20);
    uVar7 = *(undefined4 *)(param_1 + 0x24);
    uVar8 = *(undefined4 *)(param_1 + 0x28);
    uVar9 = *(undefined4 *)(param_1 + 0x2c);
    uVar10 = *(undefined4 *)(param_1 + 0x30);
    uVar11 = *(undefined4 *)(param_1 + 0x34);
    uVar12 = *(undefined4 *)(param_1 + 0x38);
    uVar13 = *(undefined4 *)(param_1 + 0x3c);
    uVar14 = *(undefined4 *)(param_1 + 0x44);
    uVar15 = *(undefined4 *)(param_1 + 0x48);
    uVar16 = *(undefined4 *)(param_1 + 0x4c);
    puVar3 = (undefined4 *)(lVar17 + 0x20 + lVar19);
    *puVar3 = *(undefined4 *)(param_1 + 0x40);
    puVar3[1] = uVar14;
    puVar3[2] = uVar15;
    puVar3[3] = uVar16;
    puVar3 = (undefined4 *)(lVar17 + 0x10 + lVar19);
    *puVar3 = uVar10;
    puVar3[1] = uVar11;
    puVar3[2] = uVar12;
    puVar3[3] = uVar13;
    puVar3 = (undefined4 *)(lVar17 + lVar19);
    *puVar3 = uVar6;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    uVar18 = *param_4;
  }
  if ((uVar18 & 0x10) != 0) {
    lVar17 = (longlong)param_3 * 0x20;
    plVar2 = (longlong *)(param_2[8] + lVar17);
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    puVar5 = *(undefined8 **)(param_2[8] + lVar17);
    if (puVar5 != puVar4) {
      *plVar2 = (longlong)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
      }
      if (puVar5 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar5 + 0xc) == 0)) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
    }
    *(undefined2 *)(plVar2 + 3) = *(undefined2 *)(param_1 + 0x68);
    lVar17 = *(longlong *)(param_1 + 0x60);
    plVar2[1] = *(longlong *)(param_1 + 0x58);
    plVar2[2] = lVar17;
  }
  return;
}



// FUNCTION 142989b80 FUN_142989b80 body=68 status=ok
// SIG undefined FUN_142989b80(void)

void FUN_142989b80(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_146cb253c();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_140b7ce44(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 142989bc4 FUN_142989bc4 body=2684 status=ok
// SIG undefined FUN_142989bc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142989bc4(undefined8 *param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  byte bVar14;
  byte bVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  longlong lVar26;
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
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar24 = (longlong)*param_2;
  lVar10 = param_1[1];
  dVar5 = *(double *)param_1[2];
  uVar38 = SUB84(dVar5,0);
  uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (*(char *)*param_1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_158);
  }
  local_128 = (longlong)*(int *)(*(longlong *)(lVar10 + 0xe8) + lVar24 * 4);
  if (local_128 != 0) {
    iVar7 = *(int *)(*(longlong *)(lVar10 + 0xd8) + lVar24 * 4);
    local_130 = (longlong)iVar7;
    iVar25 = *(int *)(*(longlong *)(lVar10 + 0xf8) + lVar24 * 4);
    lVar26 = (longlong)*(int *)(*(longlong *)(lVar10 + 0xb8) + lVar24 * 4);
    local_118 = (longlong)*(int *)(*(longlong *)(lVar10 + 200) + lVar24 * 4);
    local_120 = lVar26 + local_118;
    lVar16 = lVar26;
    if (0 < local_118) {
      do {
        plVar18 = (longlong *)**(longlong **)(*(longlong *)(lVar10 + 0x20) + lVar16 * 8);
        lVar22 = *plVar18;
        lVar21 = (longlong)(int)plVar18[1];
        lVar19 = *(longlong *)(lVar22 + 0x530);
        lVar20 = *(longlong *)(lVar22 + 0x278);
        fVar3 = *(float *)(lVar20 + 8 + lVar21 * 0xc);
        fVar4 = *(float *)(lVar20 + 4 + lVar21 * 0xc);
        lVar23 = lVar21 * 0x18;
        dVar6 = *(double *)(lVar19 + 0x10 + lVar23);
        dVar27 = *(double *)(lVar19 + 8 + lVar23);
        lVar22 = *(longlong *)(lVar22 + 0x28);
        *(double *)(lVar22 + lVar23) =
             *(double *)(lVar19 + lVar23) - (double)*(float *)(lVar20 + lVar21 * 0xc) * dVar5;
        *(double *)(lVar22 + 8 + lVar23) = dVar27 - (double)fVar4 * dVar5;
        *(double *)(lVar22 + 0x10 + lVar23) = dVar6 - (double)fVar3 * dVar5;
        lVar16 = lVar16 + 1;
      } while (lVar16 < local_120);
      lVar16 = (longlong)*(int *)(*(longlong *)(lVar10 + 200) + lVar24 * 4);
      if (0 < lVar16) {
        lVar22 = (longlong)*(int *)(*(longlong *)(lVar10 + 0xb8) + lVar24 * 4);
        lVar16 = lVar16 + lVar22;
        do {
          *(undefined8 *)(*(longlong *)(*(longlong *)(lVar10 + 0x20) + lVar22 * 8) + 0x30) = 0;
          *(undefined1 *)(*(longlong *)(*(longlong *)(lVar10 + 0x20) + lVar22 * 8) + 0x38) = 0;
          lVar22 = lVar22 + 1;
        } while (lVar22 < lVar16);
      }
    }
    iVar8 = *(int *)(*(longlong *)(lVar10 + 0xd8) + lVar24 * 4);
    lVar16 = (longlong)iVar8;
    iVar9 = *(int *)(*(longlong *)(lVar10 + 0xf8) + lVar24 * 4);
    if (iVar8 < iVar9) {
      do {
        *(undefined4 *)(*(longlong *)(*(longlong *)(lVar10 + 0x90) + lVar16 * 8) + 0x1c) = 0;
        lVar16 = lVar16 + 1;
      } while (iVar9 != lVar16);
    }
    if (iVar7 < iVar25) {
      lVar24 = local_130 * 8;
      lVar16 = local_128 * 8;
      iVar25 = iVar25 - iVar7;
      bVar14 = 1;
      do {
        lVar22 = *(longlong *)(lVar10 + 0x90);
        if ((bVar14 & 1) != 0) {
          FUN_1429898d3(lVar22 + lVar24,lVar22 + local_130 * 8 + local_128 * 8,lVar16 >> 3);
          lVar22 = *(longlong *)(lVar10 + 0x90);
        }
        plVar18 = *(longlong **)(lVar22 + lVar24);
        if (1.0 < *(float *)(*plVar18 + 0x640)) break;
        puVar11 = (undefined8 *)plVar18[1];
        bVar15 = 1;
        bVar14 = 1;
        if (puVar11 != (undefined8 *)0x0) {
          bVar14 = *(byte *)(puVar11 + 7);
        }
        puVar12 = (undefined8 *)plVar18[2];
        if (puVar12 != (undefined8 *)0x0) {
          bVar15 = *(byte *)(puVar12 + 7);
        }
        if ((bVar14 & bVar15) == 0) {
          dVar6 = (double)*(float *)(*plVar18 + 0x640);
          *(int *)((longlong)plVar18 + 0x1c) = *(int *)((longlong)plVar18 + 0x1c) + 1;
          if ((puVar11 != (undefined8 *)0x0) && (*(char *)(puVar11 + 7) == '\0')) {
            FUN_1415034f4(puVar11,dVar6,dVar5);
          }
          if ((puVar12 != (undefined8 *)0x0) && (*(char *)(puVar12 + 7) == '\0')) {
            FUN_1415034f4(puVar12,dVar6,dVar5);
          }
          if (_DAT_14c75eff4 <= 0.0) {
            FUN_146ca2c70(plVar18);
          }
          if (puVar11 != (undefined8 *)0x0) {
            if ((longlong)(int)plVar18[4] == -1) {
              plVar17 = (longlong *)*puVar11;
            }
            else {
              lVar22 = *plVar18;
              if ((longlong)*(int *)(lVar22 + 0x16c) == -1) {
                dVar28 = 0.0;
                dVar30 = 0.0;
                dVar27 = 1.0;
              }
              else {
                lVar19 = lVar22 + 0x3f8;
                if (*(longlong *)(lVar22 + 0x5a8) != 0) {
                  lVar19 = *(longlong *)(lVar22 + 0x5a8);
                }
                lVar20 = (longlong)*(int *)(lVar22 + 0x16c) * 0x6c;
                dVar27 = (double)*(float *)(lVar19 + 0x20 + lVar20);
                dVar33 = (double)*(float *)(lVar19 + 0x1c + lVar20);
                dVar36 = (double)*(float *)(lVar19 + 0x18 + lVar20);
                dVar30 = *(double *)(lVar22 + 0x1d0);
                dVar31 = *(double *)(lVar22 + 0x1d8);
                dVar35 = *(double *)(lVar22 + 0x1e0);
                dVar28 = *(double *)(lVar22 + 0x1e8);
                dVar32 = dVar36 * dVar35 - dVar30 * dVar27;
                dVar34 = dVar33 * dVar30 - dVar31 * dVar36;
                dVar29 = dVar27 * dVar31 - dVar35 * dVar33;
                dVar29 = dVar29 + dVar29;
                dVar32 = dVar32 + dVar32;
                dVar34 = dVar34 + dVar34;
                dVar27 = dVar34 * dVar28 + dVar27 + (dVar32 * dVar30 - dVar29 * dVar31);
                dVar28 = (dVar34 * dVar31 - dVar32 * dVar35) + dVar28 * dVar29 + dVar36;
                dVar30 = (dVar35 * dVar29 - dVar30 * dVar34) +
                         *(double *)(lVar22 + 0x1e8) * dVar32 + dVar33;
              }
              plVar17 = *(longlong **)(lVar22 + 0xe0 + (longlong)(int)plVar18[4] * 8);
              dVar31 = DAT_14c993df8;
              dVar35 = DAT_14c993df0;
              dVar34 = DAT_14c993de8;
              if ((plVar17 != (longlong *)0x0) && (*(char *)((longlong)plVar17 + 0xc) != '\0')) {
                lVar19 = (longlong)(int)plVar17[1];
                lVar22 = *(longlong *)(*plVar17 + 0x278);
                dVar31 = (double)*(float *)(lVar22 + 8 + lVar19 * 0xc);
                dVar35 = (double)*(float *)(lVar22 + 4 + lVar19 * 0xc);
                dVar34 = (double)*(float *)(lVar22 + lVar19 * 0xc);
              }
              dVar33 = (1.0 - dVar6) * dVar5;
              dVar31 = dVar31 * dVar33 * dVar27 +
                       dVar33 * dVar34 * dVar28 + dVar35 * dVar33 * dVar30;
              plVar17 = (longlong *)*puVar11;
              lVar19 = (longlong)(int)plVar17[1];
              lVar22 = *(longlong *)(*plVar17 + 0x28);
              *(double *)(lVar22 + lVar19 * 0x18) =
                   dVar28 * dVar31 + *(double *)(lVar22 + lVar19 * 0x18);
              *(double *)(lVar22 + 8 + lVar19 * 0x18) =
                   dVar30 * dVar31 + *(double *)(lVar22 + 8 + lVar19 * 0x18);
              *(double *)(lVar22 + 0x10 + lVar19 * 0x18) =
                   dVar31 * dVar27 + *(double *)(lVar22 + 0x10 + lVar19 * 0x18);
            }
            lVar22 = *(longlong *)(*plVar17 + 0x28);
            lVar20 = (longlong)(int)plVar17[1] * 0x18;
            lVar19 = *(longlong *)(*plVar17 + 0x530);
            *(undefined8 *)(lVar19 + 0x10 + lVar20) = *(undefined8 *)(lVar22 + 0x10 + lVar20);
            puVar1 = (undefined8 *)(lVar22 + lVar20);
            uVar13 = puVar1[1];
            puVar2 = (undefined8 *)(lVar19 + lVar20);
            *puVar2 = *puVar1;
            puVar2[1] = uVar13;
            *(undefined1 *)(puVar11 + 7) = 1;
          }
          if (puVar12 != (undefined8 *)0x0) {
            if ((longlong)(int)plVar18[4] == -1) {
              plVar18 = (longlong *)*puVar12;
            }
            else {
              lVar22 = *plVar18;
              if ((longlong)*(int *)(lVar22 + 0x16c) == -1) {
                dVar28 = 0.0;
                dVar30 = 0.0;
                dVar27 = 1.0;
              }
              else {
                lVar19 = lVar22 + 0x3f8;
                if (*(longlong *)(lVar22 + 0x5a8) != 0) {
                  lVar19 = *(longlong *)(lVar22 + 0x5a8);
                }
                lVar20 = (longlong)*(int *)(lVar22 + 0x16c) * 0x6c;
                dVar27 = (double)*(float *)(lVar19 + 0x20 + lVar20);
                dVar33 = (double)*(float *)(lVar19 + 0x1c + lVar20);
                dVar36 = (double)*(float *)(lVar19 + 0x18 + lVar20);
                dVar30 = *(double *)(lVar22 + 0x1d0);
                dVar31 = *(double *)(lVar22 + 0x1d8);
                dVar35 = *(double *)(lVar22 + 0x1e0);
                dVar28 = *(double *)(lVar22 + 0x1e8);
                dVar32 = dVar36 * dVar35 - dVar30 * dVar27;
                dVar34 = dVar33 * dVar30 - dVar31 * dVar36;
                dVar29 = dVar27 * dVar31 - dVar35 * dVar33;
                dVar29 = dVar29 + dVar29;
                dVar32 = dVar32 + dVar32;
                dVar34 = dVar34 + dVar34;
                dVar27 = dVar34 * dVar28 + dVar27 + (dVar32 * dVar30 - dVar29 * dVar31);
                dVar28 = (dVar34 * dVar31 - dVar32 * dVar35) + dVar28 * dVar29 + dVar36;
                dVar30 = (dVar35 * dVar29 - dVar30 * dVar34) +
                         *(double *)(lVar22 + 0x1e8) * dVar32 + dVar33;
              }
              plVar18 = *(longlong **)(lVar22 + 0xe0 + (longlong)(int)plVar18[4] * 8);
              dVar31 = DAT_14c993df8;
              dVar35 = DAT_14c993df0;
              dVar34 = DAT_14c993de8;
              if ((plVar18 != (longlong *)0x0) && (*(char *)((longlong)plVar18 + 0xc) != '\0')) {
                lVar19 = (longlong)(int)plVar18[1];
                lVar22 = *(longlong *)(*plVar18 + 0x278);
                dVar31 = (double)*(float *)(lVar22 + 8 + lVar19 * 0xc);
                dVar35 = (double)*(float *)(lVar22 + 4 + lVar19 * 0xc);
                dVar34 = (double)*(float *)(lVar22 + lVar19 * 0xc);
              }
              dVar33 = (1.0 - dVar6) * dVar5;
              dVar31 = dVar31 * dVar33 * dVar27 +
                       dVar33 * dVar34 * dVar28 + dVar35 * dVar33 * dVar30;
              plVar18 = (longlong *)*puVar12;
              lVar19 = (longlong)(int)plVar18[1];
              lVar22 = *(longlong *)(*plVar18 + 0x28);
              *(double *)(lVar22 + lVar19 * 0x18) =
                   dVar28 * dVar31 + *(double *)(lVar22 + lVar19 * 0x18);
              *(double *)(lVar22 + 8 + lVar19 * 0x18) =
                   dVar30 * dVar31 + *(double *)(lVar22 + 8 + lVar19 * 0x18);
              *(double *)(lVar22 + 0x10 + lVar19 * 0x18) =
                   dVar31 * dVar27 + *(double *)(lVar22 + 0x10 + lVar19 * 0x18);
            }
            lVar22 = *(longlong *)(*plVar18 + 0x28);
            lVar20 = (longlong)(int)plVar18[1] * 0x18;
            lVar19 = *(longlong *)(*plVar18 + 0x530);
            *(undefined8 *)(lVar19 + 0x10 + lVar20) = *(undefined8 *)(lVar22 + 0x10 + lVar20);
            puVar1 = (undefined8 *)(lVar22 + lVar20);
            uVar13 = puVar1[1];
            puVar2 = (undefined8 *)(lVar19 + lVar20);
            *puVar2 = *puVar1;
            puVar2[1] = uVar13;
            *(undefined1 *)(puVar12 + 7) = 1;
          }
          if (puVar11 == (undefined8 *)0x0) {
            bVar14 = 0;
          }
          else {
            bVar14 = FUN_141502ca2(lVar10,puVar11,dVar6,dVar5);
          }
          if (puVar12 != (undefined8 *)0x0) {
            bVar15 = FUN_141502ca2(lVar10,puVar12,dVar6,dVar5);
            bVar14 = bVar14 | bVar15;
          }
        }
        else {
          bVar14 = 0;
        }
        lVar24 = lVar24 + 8;
        lVar16 = lVar16 + -8;
        iVar25 = iVar25 + -1;
      } while (iVar25 != 0);
    }
    if (0 < (int)local_118) {
      lVar24 = (longlong)(int)local_120;
      local_110 = dVar5;
      do {
        puVar11 = (undefined8 *)**(longlong **)(*(longlong *)(lVar10 + 0x20) + lVar26 * 8);
        FUN_1402a018c(*puVar11,&local_108,*(undefined4 *)(puVar11 + 1));
        plVar18 = (longlong *)**(longlong **)(*(longlong *)(lVar10 + 0x20) + lVar26 * 8);
        lVar23 = (longlong)(int)plVar18[1];
        lVar16 = *(longlong *)(*plVar18 + 0x278);
        fVar3 = *(float *)(lVar16 + 8 + lVar23 * 0xc);
        plVar18 = (longlong *)**(longlong **)(*(longlong *)(lVar10 + 0x20) + lVar26 * 8);
        lVar22 = *plVar18;
        fVar4 = *(float *)(lVar16 + 4 + lVar23 * 0xc);
        lVar20 = (longlong)(int)plVar18[1];
        lVar19 = *(longlong *)(lVar22 + 0x48);
        lVar21 = lVar20 * 0x10;
        dVar29 = (double)*(float *)(lVar19 + 0xc + lVar21);
        dVar36 = (double)*(float *)(lVar19 + 8 + lVar21);
        dVar32 = (double)*(float *)(lVar19 + 4 + lVar21);
        dVar37 = (double)*(float *)(lVar19 + lVar21);
        dVar28 = (double)CONCAT44(uVar39,uVar38);
        lVar19 = *(longlong *)(lVar22 + 0x3e0);
        lVar20 = lVar20 * 0x18;
        dVar30 = (double)CONCAT44(uVar39,uVar38);
        dVar5 = *(double *)(lVar19 + lVar20);
        dVar6 = *(double *)(lVar19 + 8 + lVar20);
        dVar27 = *(double *)(lVar19 + 0x10 + lVar20);
        dVar31 = (double)CONCAT44(uVar39,uVar38);
        dVar35 = dVar37 * dVar6 - dVar5 * dVar32;
        dVar35 = dVar35 + dVar35;
        dVar33 = dVar36 * dVar5 - dVar27 * dVar37;
        lVar22 = *(longlong *)(lVar22 + 0x28);
        dVar33 = dVar33 + dVar33;
        dVar34 = dVar32 * dVar27 - dVar6 * dVar36;
        dVar34 = dVar34 + dVar34;
        uVar38 = SUB84(local_110,0);
        uVar39 = (undefined4)((ulonglong)local_110 >> 0x20);
        *(double *)(lVar22 + lVar20) =
             (local_108 - (double)*(float *)(lVar16 + lVar23 * 0xc) * dVar31) -
             ((dVar32 * dVar35 - dVar33 * dVar36) + dVar29 * dVar34 + dVar5);
        *(double *)(lVar22 + 8 + lVar20) =
             (local_100 - (double)fVar4 * dVar30) -
             ((dVar36 * dVar34 - dVar35 * dVar37) + dVar33 * dVar29 + dVar6);
        *(double *)(lVar22 + 0x10 + lVar20) =
             (local_f8 - (double)fVar3 * dVar28) -
             ((dVar37 * dVar33 - dVar34 * dVar32) + dVar35 * dVar29 + dVar27);
        lVar26 = lVar26 + 1;
      } while (lVar26 < lVar24);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14298a6b7 FUN_14298a6b7 body=1581 status=ok
// SIG undefined FUN_14298a6b7(void)

void FUN_14298a6b7(void)

{
  FUN_14153156c(&DAT_14c992580,L"p.Chaos.AABBTransform.Optimized",&DAT_14c992590,
                L"Whether to use optimized AABB transform",0);
  atexit(FUN_142987df8);
  FUN_141471170(&DAT_14c992598,L"p.aabbtree.updatedirtyelementpayloads",&DAT_14c75efec,
                L"Allow AABB tree elements to update internal payload data when they receive a payload update"
                ,0);
  atexit(FUN_1429887f0);
  FUN_141471170(&DAT_14c9925a8,L"p.aabbtree.DirtyElementGridCellSize",&DAT_14c75efb8,
                L"DirtyElement Grid acceleration structure cell size in cm. 0 or less will disable the feature"
                ,0);
  atexit(FUN_142988835);
  FUN_141471170(&DAT_14c9925b8,L"p.aabbtree.DirtyElementMaxGridCellQueryCount",&DAT_14c75efbc,
                L"Maximum grid cells to query (per raycast for example) in DirtyElement grid acceleration structure before falling back to brute force"
                ,0);
  atexit(FUN_14298887a);
  FUN_141471170(&DAT_14c9925c8,L"p.aabbtree.DirtyElementMaxPhysicalSizeInCells",&DAT_14c75efc0,
                L"If a dirty element stradles more than this number of cells, it will no be added to the grid acceleration structure"
                ,0);
  atexit(FUN_1429888bf);
  FUN_141471170(&DAT_14c9925d8,L"p.aabbtree.DirtyElementMaxCellCapacity",&DAT_14c75efc4,
                L"The maximum number of dirty elements that can be added to a single grid cell before spilling to slower flat list"
                ,0);
  atexit(FUN_142988904);
  FUN_141471170(&DAT_14c9925e8,L"p.aabbtree.splitataveragecenter",&DAT_14c75efcc,
                L"Split AABB tree nodes at the average of the element centers",0);
  atexit(FUN_142988949);
  FUN_141471170(&DAT_14c9925f8,L"p.aabbtree.splitonvarianceaxis",&DAT_14c75efc8,
                L"Split AABB tree nodes along the axis with the largest element center variance",0);
  atexit(FUN_14298898e);
  FUN_1415c789c(&DAT_14c992608,L"p.aabbtree.DynamicTreeBoundingBoxPadding",&DAT_14c75efe0,
                L"Additional padding added to bounding boxes for dynamic AABB trees to amortize update cost"
                ,0);
  atexit(FUN_1429889d3);
  FUN_141471170(&DAT_14c992618,L"p.aabbtree.DynamicTreeLeafCapacity",&DAT_14c75efe8,
                L"Dynamic Tree Leaf Capacity",0);
  atexit(FUN_142988a18);
  FUN_14153156c(&DAT_14c992628,L"p.aabbtree.UseTimeSliceMillisecondBudget",&DAT_14c75efd0,
                L"Set to True if we want to timeslice tree generation by a milisecond budget instead of per nodes processed"
                ,0);
  atexit(FUN_142988a5d);
  FUN_1415c789c(&DAT_14c992638,L"p.aabbtree.MaxProcessingTimePerSliceSeconds",&DAT_14c75efd8,
                L"Set to True if we want to timeslice tree generation by a milisecond budget instead of per nodes processed or data size copied"
                ,0);
  atexit(FUN_142988aa2);
  FUN_141471170(&DAT_14c992648,L"p.aabbtree.MinNodesChunkToProcessBetweenTimeChecks",&DAT_14c75efd4,
                L"Minimum amount of nodes we want to process before checking if we are withing budget"
                ,0);
  atexit(FUN_142988ae7);
  FUN_141471170(&DAT_14c992658,L"p.aabbtree.MinDataChunkToProcessBetweenTimeChecks",&DAT_14c75efdc,
                L"Minimum amount of data elements to process before checking if we are withing budget"
                ,0);
  atexit(FUN_142988b2c);
  FUN_14153156c(&DAT_14c992668,L"p.Chaos.EnableAsyncInitBody",&DAT_14c992a90,
                L"[Experimental] Allow body instances to be initialized outside of game thread (default is false)."
                ,4);
  atexit(FUN_142988b71);
  FUN_141471170(&DAT_14c992678,L"p.RemoveFarBodiesFromBVH",&DAT_14c992790,
                L"Removes bodies far from the scene from the bvh\n0: Kept, 1: Removed",0);
  atexit(FUN_142988bb6);
  FUN_141471170(&DAT_14c992688,L"p.MaxDirtyElements",&DAT_14c75efe4,
                L"The max number of dirty elements. This forces a flush which is very expensive",0);
  atexit(FUN_142988f06);
  FUN_1415c789c(&DAT_14c992698,L"p.Chaos.MaxInflationScale",&DAT_14c75ef98,
                L"A limit on the bounds used to detect collisions when CCD is disabled. The bounds limit is this scale multiplied by the object\'s max dimension"
                ,0);
  atexit(FUN_142988f4b);
  FUN_141471170(&DAT_14c9926a8,L"p.checkbox",&DAT_14c75ef9c,&DAT_149dfb77a,0);
  atexit(FUN_142988f90);
  FUN_141471170(&DAT_14c9926b8,L"p.FindAllIntersectionsSingleThreaded",&DAT_14c75efa0,&DAT_149dfb77a
                ,0);
  atexit(FUN_142988fd5);
  FUN_141471170(&DAT_14c9926c8,L"p.UseAccumulationArray",&DAT_14c75efa4,&DAT_149dfb77a,0);
  atexit(FUN_14298901a);
  FUN_14153156c(&DAT_14c9926d8,L"p.Chaos.Collision.CCD.EnableResweep",&DAT_14c75efa8,
                L"Enable resweep for CCD. Resweeping allows CCD to catch more secondary collisions but also is more costly. Default is true."
                ,0);
  atexit(FUN_142989399);
  FUN_14153156c(&DAT_14c9926e8,L"p.Chaos.Collision.CCD.AllowClipping",&DAT_14c75efa9,
                L"This will clip the CCD object at colliding positions when computation budgets run out. Default is true. Turning this option off might cause tunneling."
                ,0);
  atexit(FUN_1429893de);
  FUN_141471170(&DAT_14c9926f8,L"p.Chaos.Collision.CCD.ConstraintMaxProcessCount",&DAT_14c75efac,
                L"The max number of times each constraint can be resolved when applying CCD constraints. Default is 2. The larger this number is, the more fully CCD constraints are resolved."
                ,0);
  atexit(FUN_142989423);
  FUN_1415c789c(&DAT_14c992708,L"p.Chaos.CCD.EnableThresholdBoundsScale",&DAT_14c75eff0,
                L"CCD is used when object position is changing > smallest bound\'s extent * BoundsScale. 0 will always Use CCD. Values < 0 disables CCD."
                ,0);
  atexit(FUN_142989468);
  FUN_1415c789c(&DAT_14c992718,L"p.Chaos.CCD.AllowedDepthBoundsScale",&DAT_14c75eff4,
                L"When rolling back to TOI, allow (smallest bound\'s extent) * AllowedDepthBoundsScale, instead of rolling back to exact TOI w/ penetration = 0."
                ,0);
  atexit(FUN_1429894ad);
  FUN_14153156c(&DAT_14c992728,L"p.Chaos.CCD.NewTargetDepthMode",&DAT_14c75eff8,
                L"Find the first contact with that results in a penetration of (CCDAllowedDepthBoundsScale*Size) as opposed to the first contact"
                ,0);
  atexit(FUN_1429894f2);
  FUN_141471170(&DAT_14c992738,L"p.Chaos.CCD.AxisThresholdMode",&DAT_14c75effc,
                L"Change the mode used to generate CCD axis threshold bounds for particle geometries.\n0: Use object bounds\n1: Find the thinnest object bound on any axis and use it for all CCD axes\n2: On each axis, use the thinnest shape bound on that axis\n3: Find the thinnest shape bound on any axis and use this for all axes"
                ,0);
  atexit(FUN_142989537);
  FUN_14153156c(&DAT_14c992748,L"p.Chaos.CCD.CCDAxisThresholdUsesProbeShapes",&DAT_14c992a91,
                L"When true, probe shapes are considered for CCD axis threshold computation, and can generate contacts in the initial CCD phase."
                ,0);
  atexit(FUN_14298957c);
  FUN_14153156c(&DAT_14c992760,L"p.Chaos.CCD.CCDSweepsUseProbeShapes",&DAT_14c992758,
                L"When true, probe shapes can be swept for more accurate collision detection.",0);
  atexit(FUN_1429895c1);
  FUN_141471170(&DAT_14c992770,L"p.Chaos.Collision.CCD.CorrectionIterations",&DAT_14c75efb0,
                L"The number of post-solve CCD correction ietaryions to run.",0);
  atexit(FUN_142989606);
  FUN_1415c789c(&DAT_14c992780,L"p.Chaos.Collision.CCD.CorrectionPhiToleranceScale",&DAT_14c75efb4,
                L"How much penetration we allow during the correction phase (multiplier on shape size)"
                ,0);
  atexit(FUN_14298964b);
  return;
}



// FUNCTION 14298acf5 FUN_14298acf5 body=69 status=ok
// SIG undefined FUN_14298acf5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298acf5(void)

{
  _DAT_14c992ab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298ad37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992ab8,1);
  return;
}



// FUNCTION 14298ad3a FUN_14298ad3a body=69 status=ok
// SIG undefined FUN_14298ad3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298ad3a(void)

{
  _DAT_14c992ac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298ad7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992ac8,1);
  return;
}



// FUNCTION 14298ad7f FUN_14298ad7f body=69 status=ok
// SIG undefined FUN_14298ad7f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298ad7f(void)

{
  _DAT_14c992ad0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298adc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992ad8,1);
  return;
}



// FUNCTION 14298adc4 FUN_14298adc4 body=114 status=ok
// SIG undefined FUN_14298adc4(void)

undefined8 FUN_14298adc4(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  PSRWLOCK SRWLock;
  
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0xb8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar1 != 0) {
      uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + -8 + (longlong)iVar1 * 8);
      *(int *)(param_1 + 0x38) = iVar1 + -1;
      goto LAB_14298ae04;
    }
  }
  else {
    LOCK();
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + -1;
    UNLOCK();
  }
  uVar2 = 0;
LAB_14298ae04:
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  return uVar2;
}



// FUNCTION 14298ae36 FUN_14298ae36 body=69 status=ok
// SIG undefined FUN_14298ae36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298ae36(void)

{
  _DAT_14c992ae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298ae78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992ae8,1);
  return;
}



// FUNCTION 14298ae7b FUN_14298ae7b body=69 status=ok
// SIG undefined FUN_14298ae7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298ae7b(void)

{
  _DAT_14c992af0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298aebd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992af8,1);
  return;
}



// FUNCTION 14298aec0 FUN_14298aec0 body=315 status=ok
// SIG undefined FUN_14298aec0(void)

void FUN_14298aec0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar7 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar7);
      lVar4 = *(longlong *)(lVar3 + 0x10);
      if (*(char *)(lVar3 + 0x118) == '\0') {
        cVar5 = FUN_146cb4c96();
      }
      else {
        cVar5 = '\0';
      }
      if (*(longlong *)(lVar3 + 0x110) == 0) {
        cVar6 = '\0';
      }
      else {
        cVar6 = *(char *)(lVar3 + 0x11a);
      }
      if (cVar5 == '\x01' && lVar4 == 0) {
        local_58 = *(undefined8 *)(lVar3 + 0x108);
        lStack_50 = *(longlong *)(lVar3 + 0x110);
        FUN_14081f6d4(param_2,*(undefined4 *)(param_1 + 0x18),lVar3,&local_58);
      }
      else if (lVar4 == 0 || cVar5 != '\0') {
        if ((lVar4 != 0) && (cVar6 == '\x01')) {
          FUN_1400d2a94(param_2,lVar3);
          local_58 = *(undefined8 *)(lVar3 + 0x108);
          lStack_50 = *(longlong *)(lVar3 + 0x110);
          FUN_14081f6d4(param_2,*(undefined4 *)(param_1 + 0x18),lVar3,&local_58);
          *(undefined1 *)(lVar3 + 0x11a) = 0;
        }
      }
      else {
        FUN_1400d2a94(param_2,lVar3);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14298b000 FUN_14298b000 body=109 status=ok
// SIG undefined FUN_14298b000(void)

void FUN_14298b000(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      uVar3 = **(undefined8 **)(lVar2 + lVar5);
      iVar1 = *(int *)(param_1 + 0x20);
      *(uint *)(param_1 + 0x20) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
        FUN_146ce5c6e((longlong *)(param_1 + 0x18),iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar1 * 8) = uVar3;
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  return;
}



// FUNCTION 14298b06e FUN_14298b06e body=146 status=ok
// SIG undefined FUN_14298b06e(void)

void FUN_14298b06e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar1) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar6 * 8);
      lVar4 = *(longlong *)(lVar2 + 0x110);
      uVar3 = FUN_1448f7274(param_2,*(undefined8 *)(lVar2 + 0x108));
      if (lVar4 == 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar5) = uVar3;
      }
      else {
        lVar4 = FUN_1448f7274(param_2,lVar4);
        lVar2 = *(longlong *)(param_1 + 0x28);
        *(undefined8 *)(lVar2 + lVar5) = uVar3;
        if (lVar4 != 0) {
          *(longlong *)(lVar2 + 0x18 + lVar5) = lVar4;
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x160;
    } while (uVar1 != uVar6);
  }
  return;
}



// FUNCTION 14298b104 FUN_14298b104 body=116 status=ok
// SIG undefined FUN_14298b104(void)

void FUN_14298b104(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar3 = lVar2 + lVar5 + 0x30;
      lVar1 = lVar2 + 0x50 + lVar5;
      (**(code **)(lVar1 + 0x108))(lVar1,lVar2 + lVar5,lVar3);
      (**(code **)(lVar1 + 0x100))(lVar1,lVar2 + lVar5,lVar3);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x160;
    } while (lVar4 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 14298b17b FUN_14298b17b body=69 status=ok
// SIG undefined FUN_14298b17b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298b17b(void)

{
  _DAT_14c992b00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298b1bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992b08,1);
  return;
}



// FUNCTION 14298b1c0 FUN_14298b1c0 body=69 status=ok
// SIG undefined FUN_14298b1c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298b1c0(void)

{
  _DAT_14c992b10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298b202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992b18,1);
  return;
}



// FUNCTION 14298b205 FUN_14298b205 body=69 status=ok
// SIG undefined FUN_14298b205(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14298b205(void)

{
  _DAT_14c992b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014298b247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992b28,1);
  return;
}



// FUNCTION 14298b25c FUN_14298b25c body=984 status=ok
// SIG undefined FUN_14298b25c(void)

int FUN_14298b25c(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_208 [32];
  undefined8 **local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  int local_1cc;
  int *local_1c8;
  longlong **pplStack_1c0;
  undefined1 local_1b4 [4];
  longlong *local_1b0;
  undefined8 *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_140;
  undefined4 local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined2 local_11c;
  undefined1 local_11a;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_208;
  iVar3 = *(int *)(param_1 + 0x3f);
  if ((longlong)iVar3 == 0) {
    local_1cc = *(int *)(param_1 + 0x40);
    *(int *)(param_1 + 0x40) = local_1cc + 1;
  }
  else {
    local_1cc = *(int *)(param_1[0x3e] + -4 + (longlong)iVar3 * 4);
    *(int *)(param_1 + 0x3f) = iVar3 + -1;
  }
  local_160 = 0;
  local_158 = 0;
  local_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  local_154 = 0xffffffff00000080;
  local_14c = 0;
  local_140 = 0;
  local_138 = 0;
  local_f8 = (undefined4)DAT_14c846510;
  uStack_f4 = DAT_14c846510._4_4_;
  uStack_f0 = (undefined4)DAT_14c846518;
  uStack_ec = DAT_14c846518._4_4_;
  local_e8 = DAT_14c846520;
  local_128 = 0x3fd3333333333333;
  local_120 = 100;
  local_11c = 0x101;
  local_11a = 1;
  local_118 = 2;
  local_100 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_e0 = 0x100;
  local_d8 = 0xffffffff;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0xffffffff;
  local_b8 = 0x19;
  local_80 = 0;
  local_78 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_74 = 0xffffffff00000080;
  local_6c = 0;
  local_60 = 0;
  local_58 = 0;
  local_12c = *param_3;
  local_130 = local_1cc;
  puVar5 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  puVar8 = local_1a8;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined1 *)(puVar5 + 3) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x19) = 0x101;
  *(undefined1 *)((longlong)puVar5 + 0x1d) = 5;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x5d) = 0;
  *(undefined8 *)((longlong)puVar5 + 0x65) = 0;
  *puVar5 = &PTR_FUN_149f55fb0;
  puVar5[0x14] = 0;
  *(undefined4 *)(puVar5 + 0x15) = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  *(undefined8 *)((longlong)puVar5 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0xb4) = 0;
  puVar5[0x18] = 0;
  *(undefined4 *)(puVar5 + 0x19) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x1c) = 0xf;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    if (local_1a8 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_1a8 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_1a8 + 0xc) == 0)) {
        puVar4 = (undefined8 *)*local_1a8;
        local_1a8 = puVar5;
        (*(code *)*puVar4)(puVar8,1);
        puVar5 = local_1a8;
      }
    }
  }
  local_1a8 = puVar5;
  local_1d8 = *(undefined8 *)(param_3 + 2);
  local_1c8 = (int *)0x0;
  pplStack_1c0 = (longlong **)0x0;
  local_1e0 = 0;
  local_1e8 = &local_1a8;
  local_1b0 = (longlong *)FUN_1429c0b5e(*param_1,-local_1cc,&local_1c8,param_2);
  if (local_1c8 != (int *)0x0) {
    FUN_1400020a8();
  }
  puVar8 = &local_128;
  for (lVar6 = 10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar8 = *param_2;
    param_2 = param_2 + 1;
    puVar8 = puVar8 + 1;
  }
  local_d8 = *param_3;
  uStack_d4 = param_3[1];
  uStack_c8 = *(undefined8 *)(param_3 + 4);
  local_c0 = param_3[6];
  uStack_bc = param_3[7];
  uStack_d0 = 0;
  if (local_1b0 == (longlong *)0x0) {
    plVar7 = (longlong *)0x0;
  }
  else {
    if (param_3[6] != -1) {
      lVar6 = (longlong)(int)local_1b0[1] * 0x10;
      *(ushort *)(*(longlong *)(*local_1b0 + 0x2c0) + 8 + lVar6) =
           *(ushort *)(*(longlong *)(*local_1b0 + 0x2c0) + 8 + lVar6) & 0xff1f |
           (ushort)(byte)(param_3[6] << 5);
    }
    pbVar2 = (byte *)(*(longlong *)(*local_1b0 + 0x680) + (longlong)(int)local_1b0[1]);
    *pbVar2 = *pbVar2 | 1;
    *(ushort *)(*(longlong *)(*local_1b0 + 0x170) + (longlong)(int)local_1b0[1] * 2) =
         (ushort)(DAT_14c75f288 == 1) << 3;
    *(undefined1 *)(*(longlong *)(*local_1b0 + 0x158) + (longlong)(int)local_1b0[1]) = 0;
    plVar7 = local_1b0;
  }
  FUN_14016e00e(param_1[1],plVar7);
  local_1c8 = &local_1cc;
  pplStack_1c0 = &local_1b0;
  FUN_146ce6800(param_1 + 0x2a,local_1b4);
  iVar3 = local_1cc;
  FUN_146cb7dc8(&local_1b0);
  if ((local_50 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 14298b636 FUN_14298b636 body=360 status=ok
// SIG undefined FUN_14298b636(void)

void FUN_14298b636(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_78 [47];
  undefined1 local_49;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)FUN_1401961f6();
  if (puVar2 != (undefined8 *)0x0) {
    local_48 = (void *)0x0;
    local_40 = *(int *)(puVar2 + 3);
    lVar3 = (longlong)local_40;
    _Src = (void *)puVar2[2];
    if (lVar3 == 0) {
      local_3c = 0;
    }
    else {
      FUN_140509e62(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar3 << 3);
    }
    FUN_14298b7a0(param_1,param_2,&local_48,0);
    *(undefined4 *)(puVar2 + 3) = 0;
    if (*(int *)((longlong)puVar2 + 0x1c) != 0) {
      FUN_14043d0a6(puVar2 + 2,0);
    }
    local_49 = 0;
    FUN_1400c73fa(*param_1,*puVar2);
    if (*(int *)((longlong)puVar2 + 0x84) != -1) {
      FUN_14573a2c8(param_1 + 0x41);
      FUN_146ce719e(param_1 + 0xc,*(undefined4 *)((longlong)puVar2 + 0x84));
    }
    iVar1 = *(int *)(param_1 + 0x3f);
    *(uint *)(param_1 + 0x3f) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1fc) < iVar1 + 1U) {
      FUN_1446f48e2(param_1 + 0x3e,iVar1);
    }
    *(undefined4 *)(param_1[0x3e] + (longlong)iVar1 * 4) = param_2;
    FUN_146ce719e(param_1 + 2,param_2);
    FUN_146ce74bc(param_1 + 0x2a,param_2);
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14298b7a0 FUN_14298b7a0 body=2187 status=ok
// SIG undefined FUN_14298b7a0(void)

void FUN_14298b7a0(longlong *param_1,uint param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 uVar17;
  ulonglong uVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_158 [39];
  undefined1 local_131;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  int local_104;
  longlong local_100;
  undefined8 local_f8;
  longlong *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((int)param_1[0x2b] != *(int *)((longlong)param_1 + 0x184)) {
    plVar21 = param_1 + 0x31;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[0x32];
    }
    iVar13 = *(int *)((longlong)plVar21 + (ulonglong)((int)param_1[0x33] - 1U & param_2) * 4);
    if (iVar13 != -1) {
      do {
        lVar1 = param_1[0x2a] + (longlong)iVar13 * 0x170;
        if (*(uint *)(param_1[0x2a] + (longlong)iVar13 * 0x170) == param_2) {
          plVar21 = (longlong *)(lVar1 + 8);
          if ((plVar21 != (longlong *)0x0 && lVar1 != 0) && ((int)param_3[1] != 0)) {
            uVar17 = *(undefined1 *)(*param_1 + 0x371);
            *(undefined1 *)(*param_1 + 0x371) = 0;
            local_c8 = *param_3;
            local_98 = (uint *)0x0;
            local_90 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_8c = 0xffffffff00000080;
            local_84 = 0;
            local_78 = 0;
            local_70 = 0;
            uStack_c0 = CONCAT44(uStack_c0._4_4_,(int)param_3[1]);
            FUN_1405039ea(&local_b8,&local_c8);
            local_f8 = *(undefined8 *)
                        (*(longlong *)(*(longlong *)*plVar21 + 200) +
                        (longlong)(int)((longlong *)*plVar21)[1] * 8);
            local_c8 = 0;
            uStack_c0 = 0;
            iVar13 = (int)uStack_b0 - local_84;
            if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar13);
            }
            if (iVar13 != 0) {
              FUN_14481578e();
            }
            plVar8 = (longlong *)(ulonglong)local_90;
            local_131 = uVar17;
            local_110 = param_1;
            local_104 = param_4;
            local_f0 = plVar21;
            if (local_90 == 0) {
              uVar22 = 1;
              uVar18 = 0;
              iVar13 = 0;
              uVar10 = 0;
              goto LAB_14298b99f;
            }
            puVar6 = local_98;
            if (local_98 == (uint *)0x0) {
              puVar6 = local_a8;
            }
            uVar10 = *puVar6;
            if (uVar10 != 0) {
              uVar18 = 0;
              iVar13 = 0;
              goto LAB_14298b96b;
            }
            iVar13 = local_90 + 0x1e;
            if (-1 < (int)(local_90 - 1)) {
              iVar13 = local_90 - 1;
            }
            uVar18 = 0;
            uVar22 = (ulonglong)(uint)(iVar13 >> 5);
            if (iVar13 >> 5 < 1) {
              uVar22 = uVar18;
            }
            iVar13 = 0;
            goto LAB_14298b958;
          }
          break;
        }
        iVar13 = *(int *)(lVar1 + 0x168);
      } while (iVar13 != -1);
    }
  }
  goto LAB_14298ba05;
  while( true ) {
    iVar13 = iVar13 + 0x20;
    uVar10 = puVar6[uVar18 + 1];
    uVar18 = uVar18 + 1;
    if (uVar10 != 0) break;
LAB_14298b958:
    if (uVar22 == uVar18) goto LAB_14298b9a8;
  }
LAB_14298b96b:
  uVar22 = (ulonglong)(-uVar10 & uVar10);
  uVar3 = uVar22 * 2 + 1;
  lVar14 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  uVar10 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
  if ((int)local_90 <= (int)uVar10) {
    uVar10 = local_90;
  }
LAB_14298b99f:
  if (uVar10 != local_90) {
    local_120 = (longlong *)(lVar1 + 0x108);
    local_128 = (longlong *)(lVar1 + 0x118);
    uVar23 = 0xffffffff;
    uVar5 = local_90;
    do {
      if ((longlong)*(int *)(lVar1 + 0x20) != 0) {
        plVar21 = *(longlong **)(local_b8 + (longlong)(int)uVar10 * 0x10);
        lVar14 = (longlong)*(int *)(lVar1 + 0x20) << 3;
        lVar20 = 0;
        do {
          if (*(longlong **)(*(longlong *)(lVar1 + 0x18) + lVar20 * 8) == plVar21) {
            if ((int)lVar20 != -1) {
              plVar15 = (longlong *)(longlong)(int)uStack_c0;
              uVar10 = (int)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar10);
              local_118 = plVar8;
              if (uStack_c0._4_4_ < uVar10) {
                local_130 = plVar15;
                FUN_1446f48e2(&local_c8,plVar15);
                plVar15 = local_130;
              }
              *(int *)(local_c8 + (longlong)plVar15 * 4) = (int)lVar20;
              if (plVar21 != (longlong *)0x0 && 2 < *(byte *)((longlong)plVar21 + 0xc)) {
                pbVar9 = (byte *)(*(longlong *)(*plVar21 + 0x680) + (longlong)(int)plVar21[1]);
                *pbVar9 = *pbVar9 & 0xf7;
              }
              lVar14 = *(longlong *)(*(longlong *)(*plVar21 + 200) + (longlong)(int)plVar21[1] * 8);
              if (((lVar14 != 0) && (*(longlong *)(lVar14 + 0x30) != 0)) &&
                 (*(int *)(*(longlong *)(lVar14 + 0x30) + 0x1c) == 0xc)) {
                *(undefined8 *)(lVar14 + 0x30) = 0;
              }
              iVar19 = *(int *)(lVar1 + 0x110);
              *(uint *)(lVar1 + 0x110) = iVar19 + 1U;
              if (*(uint *)(lVar1 + 0x114) < iVar19 + 1U) {
                FUN_146ce9b06(local_120,iVar19);
              }
              lVar14 = *local_120;
              *(longlong **)(lVar14 + (longlong)iVar19 * 0x10) = plVar21;
              *(undefined1 *)(lVar14 + 8 + (longlong)iVar19 * 0x10) = 1;
              local_e8 = CONCAT31(local_e8._1_3_,1);
              local_d8 = plVar21;
              uVar7 = FUN_146ce5fc4(local_128,1,&local_e8);
              FUN_146ce652e(uVar7,&local_d8);
              FUN_1456cc230(*(undefined8 *)(local_110[1] + 0x2c8),plVar21,1);
              plVar8 = local_118;
              uVar5 = local_90;
            }
            break;
          }
          lVar20 = lVar20 + 1;
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
      }
      uVar23 = uVar23 & ~(uint)uVar22;
      puVar6 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar6 = local_a8;
      }
      iVar19 = (int)uVar18;
      lVar14 = (longlong)iVar19;
      uVar10 = puVar6[lVar14] & uVar23;
      if (uVar10 == 0) {
        iVar11 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar11 = uVar5 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar19) {
          iVar12 = iVar19;
        }
        if (iVar19 < iVar11) {
          lVar20 = 0;
          do {
            uVar10 = puVar6[lVar14 + lVar20 + 1];
            if (uVar10 != 0) {
              uVar18 = (ulonglong)(iVar19 + (int)lVar20 + 1);
              uVar23 = 0xffffffff;
              goto LAB_14298bb21;
            }
            iVar13 = iVar13 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar12 - lVar14 != lVar20);
          uVar23 = 0xffffffff;
          iVar19 = iVar12;
        }
        uVar18 = (ulonglong)(iVar19 + 1);
        uVar10 = uVar5;
      }
      else {
LAB_14298bb21:
        uVar22 = (ulonglong)(-uVar10 & uVar10);
        uVar3 = uVar22 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar10 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar10) {
          uVar10 = uVar5;
        }
      }
    } while (uVar10 != (uint)plVar8);
  }
LAB_14298b9a8:
  plVar21 = local_110;
  uVar17 = local_131;
  if ((int)uStack_c0 != 0) {
    FUN_144958a06();
    plVar21 = local_110;
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    if ((int)uStack_c0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_c0 & 0xffffffff);
    }
    if ((uStack_c0 & 0xffffffff) != 0) {
      FUN_14043d0a6(&local_d8);
      if (0 < (longlong)(int)uStack_c0) {
        local_128 = (longlong *)(lVar1 + 0x38);
        local_120 = (longlong *)(lVar1 + 0x70);
        local_130 = plVar21 + 0x16;
        local_118 = plVar21 + 0x1d;
        lVar14 = (longlong)(int)uStack_c0;
        do {
          uVar10 = *(uint *)(local_c8 + -4 + lVar14 * 4);
          lVar20 = (longlong)(int)uVar10;
          uVar18 = *(ulonglong *)(*(longlong *)(lVar1 + 0x18) + lVar20 * 8);
          if (*(int *)(lVar1 + 0x40) != *(int *)(lVar1 + 0x6c)) {
            uVar5 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            plVar8 = *(longlong **)(lVar1 + 0x78);
            if (*(longlong **)(lVar1 + 0x78) == (longlong *)0x0) {
              plVar8 = local_120;
            }
            iVar13 = *(int *)((longlong)plVar8 +
                             (ulonglong)(*(int *)(lVar1 + 0x80) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4)
            ;
            if (iVar13 != -1) {
              do {
                puVar2 = (ulonglong *)(*local_128 + (longlong)iVar13 * 0x18);
                if (*puVar2 == uVar18) {
                  if (puVar2 + 1 != (ulonglong *)0x0 && puVar2 != (ulonglong *)0x0) {
                    if ((puVar2[1] & 1) != 0) {
                      lVar16 = (longlong)(int)uStack_d0;
                      uVar5 = (int)uStack_d0 + 1;
                      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar5);
                      if (uStack_d0._4_4_ < uVar5) {
                        local_100 = lVar16;
                        FUN_1406b7a4a(&local_d8,lVar16);
                        lVar16 = local_100;
                      }
                      local_d8[lVar16] = uVar18;
                    }
                    FUN_146cea24e(local_128,uVar18);
                  }
                  break;
                }
                iVar13 = (int)puVar2[2];
              } while (iVar13 != -1);
            }
          }
          iVar13 = *(int *)(lVar1 + 0x20);
          iVar19 = ~uVar10 + iVar13;
          if (iVar19 != 0) {
            memmove((void *)(*(longlong *)(lVar1 + 0x18) + lVar20 * 8),
                    (void *)(*(longlong *)(lVar1 + 0x18) + lVar20 * 8 + 8),(longlong)iVar19 << 3);
            iVar13 = *(int *)(lVar1 + 0x20);
          }
          *(int *)(lVar1 + 0x20) = iVar13 + -1;
          FUN_1400ca182(lVar1 + 0x18);
          if (uVar18 != 0 && 2 < *(byte *)(uVar18 + 0xc)) {
            if ((int)plVar21[0x17] != *(int *)((longlong)plVar21 + 0xe4)) {
              uVar10 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              plVar8 = (longlong *)plVar21[0x1e];
              if ((longlong *)plVar21[0x1e] == (longlong *)0x0) {
                plVar8 = local_118;
              }
              iVar13 = *(int *)((longlong)plVar8 +
                               (ulonglong)((int)plVar21[0x1f] - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4)
              ;
              if (iVar13 != -1) {
                do {
                  lVar20 = *local_130 + (longlong)iVar13 * 0x90;
                  if (*(ulonglong *)(*local_130 + (longlong)iVar13 * 0x90) == uVar18) {
                    if (((lVar20 + 0x10U & 0xffffffffffffffef) != 0) &&
                       (*(uint *)(lVar20 + 0x74) == param_2)) {
                      FUN_146cea330(local_130,uVar18);
                    }
                    break;
                  }
                  iVar13 = *(int *)(lVar20 + 0x80);
                } while (iVar13 != -1);
              }
            }
            FUN_14016dd9c(plVar21 + 0x20,uVar18);
          }
          bVar4 = 1 < lVar14;
          lVar14 = lVar14 + -1;
        } while (bVar4);
      }
    }
    lVar1 = *plVar21;
    FUN_146cb805e(&local_b8,&local_e8);
    plVar8 = local_f0;
    FUN_1429c390a(lVar1,*local_f0,&local_e8);
    if (CONCAT44(uStack_e4,local_e8) != 0) {
      FUN_1400020a8();
    }
    iVar13 = local_104;
    if ((-1 < DAT_14c75f210) && (-1 < DAT_14c75f214)) {
      FUN_146dfc316(*plVar21,&local_d8);
    }
    uVar17 = local_131;
    plVar15 = (longlong *)*plVar8;
    *(undefined8 *)(*(longlong *)(*plVar15 + 200) + (longlong)(int)plVar15[1] * 8) = local_f8;
    if (iVar13 == 2) {
      FUN_14298ee18(plVar21,plVar8,0x6c);
    }
    else if (iVar13 == 1) {
      local_e8 = param_2;
      pbVar9 = (byte *)FUN_146ceb568(plVar21 + 0x34,param_2);
      *pbVar9 = *pbVar9 | 0x6c;
    }
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140a356f6(&local_b8);
  *(undefined1 *)(*plVar21 + 0x371) = uVar17;
LAB_14298ba05:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14298c02d FUN_14298c02d body=1337 status=ok
// SIG undefined FUN_14298c02d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14298c02d(double *param_1,longlong *param_2,double *param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  double *pdVar15;
  double *pdVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar24;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128 [2];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  auVar19 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar14 = *param_2;
  lVar11 = (longlong)(int)param_2[1];
  if (((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 3)) ||
     ((*(byte *)(*(longlong *)(lVar14 + 0x680) + lVar11) & 8) == 0)) {
    lVar1 = *(longlong *)(lVar14 + 0x48);
    lVar12 = lVar11 * 0x10;
    dVar2 = (double)*(float *)(lVar1 + 0xc + lVar12);
    dVar5 = (double)*(float *)(lVar1 + 8 + lVar12);
    dVar17 = (double)*(float *)(lVar1 + 4 + lVar12);
    dVar6 = (double)*(float *)(lVar1 + lVar12);
    uVar29 = (undefined4)((ulonglong)dVar17 >> 0x20);
    local_188._8_4_ = SUB84(dVar17,0);
    local_188._0_8_ = dVar6;
    local_188._12_4_ = uVar29;
    local_178._8_4_ = SUB84(dVar2,0);
    local_178._0_8_ = dVar5;
    local_178._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    pdVar15 = (double *)(*(longlong *)(lVar14 + 0x28) + lVar11 * 0x18);
    dVar7 = *pdVar15;
    dVar8 = pdVar15[1];
    dVar30 = *(double *)(*(longlong *)(lVar14 + 0x28) + 0x10 + lVar11 * 0x18);
    uStack_150 = 0;
    local_148 = _DAT_149934d80;
    local_138 = 0x3ff0000000000000;
    uStack_130 = 0;
    local_128[0] = 0.0;
    local_128[1] = 0.0;
    local_118 = ZEXT816(0x3ff0000000000000) << 0x40;
    local_108 = 0.0;
    dStack_100 = 0.0;
    local_f8 = 0.0;
    dStack_f0 = 0.0;
    local_e8 = _DAT_149934d80;
    local_d8 = 1.0;
    uStack_d0 = 0;
    dVar20 = param_3[2] * param_3[2] + *param_3 * *param_3;
    dVar24 = param_3[3] * param_3[3] + param_3[1] * param_3[1];
    auVar18._8_8_ =
         -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar20 + dVar24)));
    auVar18._0_8_ =
         -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar20 + dVar24)));
    iVar10 = movmskpd((int)lVar12,auVar18);
    local_168 = dVar7;
    dStack_160 = dVar8;
    local_158 = dVar30;
    if (iVar10 == 0) {
      auVar18 = minpd(_DAT_149934d80,*(undefined1 (*) [16])(param_3 + 8));
      auVar22 = minpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
      auVar32._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
      auVar32._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
      iVar10 = movmskpd(0,auVar32);
      auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
      auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
      uVar13 = movmskpd((int)lVar1,auVar23);
      if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c8460b0) {
          FUN_144b3d300(&DAT_14c8460b0);
          if (DAT_14c8460b0 == -1) {
            DAT_14c8460a0._0_4_ = 1e-08;
            DAT_14c8460a0._4_4_ = 1e-08;
            DAT_14c8460a8._0_4_ = 1e-08;
            DAT_14c8460a8._4_4_ = 0x322bcc77;
            _Init_thread_footer(&DAT_14c8460b0);
          }
        }
        auVar18 = *(undefined1 (*) [16])(param_3 + 8);
        auVar32 = divpd(auVar19,auVar18);
        auVar19 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
        dVar3 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar18._0_8_)) &
                        auVar32._0_8_);
        dVar4 = (double)(-(ulonglong)((double)DAT_14c8460a0._4_4_ < ABS(auVar18._8_8_)) &
                        auVar32._8_8_);
        dVar7 = dVar7 - param_3[4];
        dVar8 = dVar8 - param_3[5];
        dVar30 = dVar30 - param_3[6];
        dVar28 = (double)(-(ulonglong)
                           ((double)(float)DAT_14c8460a8 <
                           ABS(SUB168(*(undefined1 (*) [16])(param_3 + 10),0))) & auVar19._0_8_);
        dVar31 = -*param_3;
        dVar33 = -param_3[1];
        dVar21 = param_3[2] * -1.0;
        dVar25 = param_3[3] * 1.0;
        dVar26 = dVar8 * dVar31 - dVar7 * dVar33;
        dVar27 = dVar30 * dVar33 - dVar8 * dVar21;
        dVar34 = dVar7 * dVar21 - dVar30 * dVar31;
        dVar35 = dVar25 * 0.0 - dVar25 * 0.0;
        dVar27 = dVar27 + dVar27;
        dVar34 = dVar34 + dVar34;
        dVar26 = dVar26 + dVar26;
        dVar35 = dVar35 + dVar35;
        auVar19._8_4_ = SUB84(dVar17,0);
        auVar19._0_8_ = dVar6;
        auVar19._12_4_ = uVar29;
        auVar22._8_4_ = SUB84(dVar6,0);
        auVar22._0_8_ = dVar17;
        auVar22._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        dVar20 = param_3[1];
        dVar24 = param_3[1];
        dVar9 = dVar5 * dVar21 * -1.0 +
                dVar24 * dVar17 + (dVar25 * dVar2 - *param_3 * auVar22._8_8_ * -1.0);
        local_e8._8_4_ = SUB84(dVar4,0);
        local_e8._0_8_ = dVar3;
        local_e8._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
        local_d8 = dVar28 * 1.0;
        uStack_d0 = 0;
        local_108 = ((dVar26 * dVar33 - dVar21 * dVar34) + dVar25 * dVar27 + dVar7) * dVar3;
        dStack_100 = ((dVar27 * dVar21 - dVar26 * dVar31) + dVar25 * dVar34 + dVar8) * dVar4;
        local_f8 = ((dVar34 * dVar31 - dVar33 * dVar27) + dVar25 * dVar26 + dVar30) * dVar28;
        dStack_f0 = ((dVar35 * dVar25 - dVar35 * dVar25) + dVar25 * dVar35 + 0.0) * 0.0;
        local_128[0] = dVar17 * dVar21 * -1.0 +
                       ((dVar6 * dVar25 - *param_3 * dVar2 * 1.0) - dVar5 * dVar20);
        local_128[1] = auVar22._8_8_ * dVar21 * 1.0 +
                       ((auVar19._8_8_ * dVar25 - *param_3 * dVar5 * -1.0) - dVar2 * dVar24);
        local_118._8_4_ = SUB84(dVar9,0);
        local_118._0_8_ =
             dVar2 * dVar21 * 1.0 + dVar20 * dVar6 + (dVar25 * dVar5 - *param_3 * dVar17 * 1.0);
        local_118._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      }
      else {
        FUN_1402db8fa(local_128,local_188,param_3);
      }
      pdVar15 = local_128;
      pdVar16 = param_1;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *pdVar16 = *pdVar15;
        pdVar15 = pdVar15 + 1;
        pdVar16 = pdVar16 + 1;
      }
      if ((local_c0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_1;
    }
    pdVar15 = (double *)&DAT_14c846480;
  }
  else {
    pdVar15 = (double *)(lVar11 * 0x60 + *(longlong *)(lVar14 + 0x5c0));
  }
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *param_1 = *pdVar15;
    pdVar15 = pdVar15 + 1;
    param_1 = param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_1a8);
}



// FUNCTION 14298c568 FUN_14298c568 body=9341 status=ok
// SIG undefined FUN_14298c568(void)

void FUN_14298c568(longlong *param_1)

{
  undefined1 (*pauVar1) [16];
  ulonglong uVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  code *pcVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  undefined1 (*pauVar17) [16];
  uint *puVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong lVar21;
  undefined8 uVar22;
  byte *pbVar23;
  uint *puVar24;
  uint *puVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  undefined1 (*pauVar29) [16];
  longlong lVar30;
  longlong *plVar31;
  undefined ***pppuVar32;
  undefined8 *puVar33;
  int iVar34;
  char cVar35;
  int iVar36;
  longlong *plVar37;
  int iVar38;
  int iVar39;
  undefined8 *puVar40;
  longlong ***ppplVar41;
  undefined8 *puVar42;
  ulonglong uVar43;
  longlong lVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  uint *puVar47;
  uint uVar48;
  int iVar49;
  byte bVar50;
  undefined1 (*pauVar51) [16];
  int iVar52;
  undefined1 (*pauVar53) [16];
  ulonglong *puVar54;
  longlong *plVar55;
  ulonglong uVar56;
  bool bVar57;
  double dVar58;
  float fVar59;
  undefined1 auStack_3d8 [32];
  undefined4 *local_3b8;
  byte local_3a9;
  ulonglong local_3a8;
  int local_39c;
  longlong *local_398;
  int local_38c;
  longlong *local_388;
  longlong *local_380;
  uint *local_378;
  uint *local_370;
  undefined8 local_368;
  undefined8 local_360;
  ulonglong local_358;
  uint local_350;
  int local_34c;
  undefined8 local_348;
  ulonglong local_340;
  uint *local_338;
  uint local_32c;
  ulonglong local_328;
  ulonglong local_320;
  longlong *local_318;
  longlong *local_310;
  uint local_304;
  longlong *local_300;
  longlong *local_2f8;
  ulonglong local_2f0;
  int local_2e4;
  longlong *local_2e0;
  ulonglong local_2d8;
  longlong *local_2d0;
  longlong local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  uint *local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  longlong *local_290;
  longlong *local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  undefined1 local_25c [4];
  longlong **local_258;
  longlong **local_250;
  double dStack_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  longlong *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  longlong local_1b8;
  undefined4 local_1b0;
  code *local_1a8 [2];
  undefined ***local_198;
  undefined **local_188;
  longlong *local_180;
  undefined1 local_178;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  uint *local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [12];
  undefined4 uStack_fc;
  undefined1 local_f8 [16];
  uint *local_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  local_398 = param_1;
  if ((int)param_1[0xd] != *(int *)((longlong)param_1 + 0x94)) {
    local_388 = param_1 + 0xc;
    uVar26 = *(uint *)(param_1 + 0x11);
    if (uVar26 == 0) {
      uVar56 = 1;
      iVar39 = 0;
      uVar46 = 0;
      uVar27 = 0;
    }
    else {
      puVar24 = (uint *)param_1[0x10];
      if ((uint *)param_1[0x10] == (uint *)0x0) {
        puVar24 = (uint *)(param_1 + 0xe);
      }
      uVar27 = *puVar24;
      if (uVar27 == 0) {
        iVar39 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar39 = uVar26 - 1;
        }
        uVar46 = 0;
        uVar43 = (ulonglong)(uint)(iVar39 >> 5);
        if (iVar39 >> 5 < 1) {
          uVar43 = uVar46;
        }
        iVar39 = 0;
        do {
          if (uVar43 == uVar46) goto LAB_14298c721;
          iVar39 = iVar39 + 0x20;
          uVar27 = puVar24[uVar46 + 1];
          uVar46 = uVar46 + 1;
        } while (uVar27 == 0);
      }
      else {
        iVar39 = 0;
        uVar46 = 0;
      }
      uVar56 = (ulonglong)(-uVar27 & uVar27);
      uVar43 = uVar56 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar43 != 0) {
        for (; uVar43 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar27 = (iVar39 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if ((int)uVar26 <= (int)uVar27) {
        uVar27 = uVar26;
      }
    }
    if (uVar27 != uVar26) {
      local_370 = (uint *)(param_1 + 2);
      local_360 = (ulonglong *)(param_1 + 0x41);
      local_368 = param_1 + 0x48;
      uVar48 = 0xffffffff;
      local_378 = (uint *)(param_1 + 0xe);
      local_310 = (longlong *)(ulonglong)uVar26;
      do {
        auVar13 = _local_108;
        local_358 = CONCAT44(local_358._4_4_,iVar39);
        lVar28 = local_398[0xc];
        uVar26 = *(uint *)(lVar28 + (longlong)(int)uVar27 * 0x60);
        local_1f8 = (longlong *)CONCAT44(local_1f8._4_4_,uVar26);
        local_3a8 = uVar46;
        if ((int)local_398[0x42] != *(int *)((longlong)local_398 + 0x23c)) {
          plVar37 = (longlong *)local_398[0x49];
          if ((longlong *)local_398[0x49] == (longlong *)0x0) {
            plVar37 = local_368;
          }
          iVar39 = *(int *)((longlong)plVar37 + (ulonglong)((int)local_398[0x4a] - 1U & uVar26) * 4)
          ;
          if (iVar39 != -1) {
            do {
              lVar44 = *local_360 + (longlong)iVar39 * 0x10;
              if (*(uint *)(*local_360 + (longlong)iVar39 * 0x10) == uVar26) {
                if ((int *)(lVar44 + 4) != (int *)0x0 && lVar44 != 0) {
                  local_39c = *(int *)(lVar44 + 4);
                  goto LAB_14298c9bc;
                }
                break;
              }
              iVar39 = *(int *)(lVar44 + 8);
            } while (iVar39 != -1);
          }
        }
        local_c8 = DAT_14c846520;
        local_250 = (longlong **)0x0;
        dStack_248 = 0.0;
        local_240 = 0xffffffff;
        local_d8 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
        uStack_d0 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
        local_108._8_4_ = 100;
        local_108._0_8_ = 0x3fd3333340000000;
        uStack_fc._0_1_ = 0;
        uStack_fc._1_1_ = DAT_14c994310 != 0;
        local_258 = (longlong **)CONCAT44(local_258._4_4_,uVar26);
        uStack_fc._3_1_ = auVar13[0xf];
        uStack_fc._2_1_ = 1;
        local_e8 = (uint *)0x0;
        uStack_e0 = 0;
        uStack_c0 = CONCAT62(uStack_c0._2_6_,0x100);
        local_f8._4_4_ = local_f8._4_4_;
        local_f8._0_4_ = *(undefined4 *)(*local_398 + 0x490);
        local_f8._8_8_ = 0;
        uVar15 = FUN_14298b25c(local_398,local_108,&local_258);
        local_1a8[0] = (code *)CONCAT44(local_1a8[0]._4_4_,uVar15);
        stack0xffffffffffffff00 = local_1a8;
        local_108._0_8_ = &local_1f8;
        FUN_140263e2a(local_360,local_168,local_108,0);
        local_39c = (int)local_1a8[0];
LAB_14298c9bc:
        lVar28 = lVar28 + (longlong)(int)uVar27 * 0x60;
        iVar39 = *(int *)(lVar28 + 0x30);
        local_320 = CONCAT44(local_320._4_4_,uVar48);
        if (iVar39 == 0) {
          uVar43 = 1;
          uVar46 = 0;
          iVar34 = 0;
          iVar38 = 0;
        }
        else {
          puVar24 = *(uint **)(lVar28 + 0x28);
          if (*(uint **)(lVar28 + 0x28) == (uint *)0x0) {
            puVar24 = (uint *)(lVar28 + 0x18);
          }
          uVar26 = *puVar24;
          if (uVar26 == 0) {
            iVar38 = iVar39 + 0x1e;
            if (-1 < iVar39 + -1) {
              iVar38 = iVar39 + -1;
            }
            uVar46 = 0;
            uVar43 = (ulonglong)(uint)(iVar38 >> 5);
            if (iVar38 >> 5 < 1) {
              uVar43 = uVar46;
            }
            iVar34 = 0;
            do {
              if (uVar43 == uVar46) goto LAB_14298ca57;
              iVar34 = iVar34 + 0x20;
              uVar26 = puVar24[uVar46 + 1];
              uVar46 = uVar46 + 1;
            } while (uVar26 == 0);
          }
          else {
            uVar46 = 0;
            iVar34 = 0;
          }
          uVar43 = (ulonglong)(-uVar26 & uVar26);
          uVar2 = uVar43 * 2 + 1;
          lVar44 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar44 == 0; lVar44 = lVar44 + -1) {
            }
          }
          iVar38 = (iVar34 - ((uint)lVar44 ^ 0x3f)) + 0x3e;
          if (iVar39 <= iVar38) {
            iVar38 = iVar39;
          }
        }
        if (iVar38 != iVar39) {
          uVar26 = 0xffffffff;
          do {
            puVar16 = (undefined4 *)((longlong)iVar38 * 0x20 + *(longlong *)(lVar28 + 8));
            local_3b8 = puVar16 + 2;
            FUN_146cb7fae(local_398,local_370,local_39c,*puVar16);
            uVar26 = ~(uint)uVar43 & uVar26;
            puVar24 = *(uint **)(lVar28 + 0x28);
            if (*(uint **)(lVar28 + 0x28) == (uint *)0x0) {
              puVar24 = (uint *)(lVar28 + 0x18);
            }
            iVar36 = *(int *)(lVar28 + 0x30);
            iVar38 = (int)uVar46;
            lVar44 = (longlong)iVar38;
            uVar27 = puVar24[lVar44] & uVar26;
            if (uVar27 == 0) {
              iVar52 = iVar36 + 0x1e;
              if (-1 < iVar36 + -1) {
                iVar52 = iVar36 + -1;
              }
              iVar52 = iVar52 >> 5;
              iVar34 = iVar34 + 0x20;
              iVar49 = iVar52;
              if (iVar52 < iVar38) {
                iVar49 = iVar38;
              }
              if (iVar38 < iVar52) {
                lVar30 = 0;
                do {
                  uVar27 = puVar24[lVar44 + lVar30 + 1];
                  if (uVar27 != 0) {
                    uVar46 = (ulonglong)(iVar38 + (int)lVar30 + 1);
                    uVar26 = 0xffffffff;
                    goto LAB_14298cbe0;
                  }
                  iVar34 = iVar34 + 0x20;
                  lVar30 = lVar30 + 1;
                } while (iVar49 - lVar44 != lVar30);
                uVar26 = 0xffffffff;
                iVar38 = iVar49;
              }
              uVar46 = (ulonglong)(iVar38 + 1);
              iVar38 = iVar36;
            }
            else {
LAB_14298cbe0:
              uVar43 = (ulonglong)(-uVar27 & uVar27);
              uVar2 = uVar43 * 2 + 1;
              lVar44 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar44 == 0; lVar44 = lVar44 + -1) {
                }
              }
              iVar38 = (iVar34 - ((uint)lVar44 ^ 0x3f)) + 0x3e;
              if (iVar36 <= iVar38) {
                iVar38 = iVar36;
              }
            }
          } while (iVar38 != iVar39);
        }
LAB_14298ca57:
        uVar48 = (uint)local_320 & ~(uint)uVar56;
        puVar24 = (uint *)local_398[0x10];
        if ((uint *)local_398[0x10] == (uint *)0x0) {
          puVar24 = local_378;
        }
        uVar26 = *(uint *)(local_398 + 0x11);
        iVar38 = (int)local_3a8;
        lVar28 = (longlong)iVar38;
        uVar27 = puVar24[lVar28] & uVar48;
        uVar46 = local_3a8;
        iVar39 = (int)local_358;
        if (uVar27 == 0) {
          iVar34 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar34 = uVar26 - 1;
          }
          iVar34 = iVar34 >> 5;
          iVar39 = (int)local_358 + 0x20;
          iVar36 = iVar34;
          if (iVar34 < iVar38) {
            iVar36 = iVar38;
          }
          if (iVar38 < iVar34) {
            lVar44 = 0;
            do {
              uVar27 = puVar24[lVar28 + lVar44 + 1];
              if (uVar27 != 0) {
                uVar48 = 0xffffffff;
                uVar46 = (ulonglong)(iVar38 + (int)lVar44 + 1);
                goto LAB_14298caf8;
              }
              iVar39 = iVar39 + 0x20;
              lVar44 = lVar44 + 1;
            } while (iVar36 - lVar28 != lVar44);
            uVar48 = 0xffffffff;
            iVar38 = iVar36;
          }
          uVar46 = (ulonglong)(iVar38 + 1);
          uVar27 = uVar26;
        }
        else {
LAB_14298caf8:
          uVar56 = (ulonglong)(-uVar27 & uVar27);
          uVar43 = uVar56 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar43 != 0) {
            for (; uVar43 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          uVar27 = (iVar39 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          if ((int)uVar26 <= (int)uVar27) {
            uVar27 = uVar26;
          }
        }
      } while (uVar27 != (uint)local_310);
    }
LAB_14298c721:
    param_1 = local_398;
    FUN_146ce9214(local_388);
  }
  if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
    local_2d0 = param_1 + 2;
    local_2b0 = (uint *)(param_1 + 4);
    uVar26 = *(uint *)(param_1 + 7);
    if (uVar26 == 0) {
      local_2f0 = 1;
      local_328 = 0;
      local_38c = 0;
      uVar27 = 0;
    }
    else {
      puVar24 = (uint *)param_1[6];
      if ((uint *)param_1[6] == (uint *)0x0) {
        puVar24 = local_2b0;
      }
      uVar27 = *puVar24;
      if (uVar27 == 0) {
        iVar39 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar39 = uVar26 - 1;
        }
        uVar46 = 0;
        uVar43 = (ulonglong)(uint)(iVar39 >> 5);
        if (iVar39 >> 5 < 1) {
          uVar43 = uVar46;
        }
        local_38c = 0;
        do {
          if (uVar43 == uVar46) goto LAB_14298c7bc;
          local_38c = local_38c + 0x20;
          uVar27 = puVar24[uVar46 + 1];
          uVar46 = uVar46 + 1;
        } while (uVar27 == 0);
      }
      else {
        local_328 = 0;
        local_38c = 0;
        uVar46 = local_328;
      }
      local_328 = uVar46;
      local_2f0 = (ulonglong)(-uVar27 & uVar27);
      uVar46 = local_2f0 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar46 != 0) {
        for (; uVar46 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar27 = (local_38c - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if ((int)uVar26 <= (int)uVar27) {
        uVar27 = uVar26;
      }
    }
    if (uVar27 != uVar26) {
      local_310 = param_1 + 0x31;
      local_2c0 = param_1 + 0x16;
      local_2a0 = param_1 + 0x1d;
      local_2b8 = param_1 + 0x20;
      local_2e0 = param_1 + 0x34;
      local_350 = 0xffffffff;
      local_2d8 = (ulonglong)uVar26;
      do {
        local_338 = (uint *)(*local_2d0 + (longlong)(int)uVar27 * 0x60);
        lVar28 = *local_2d0 + (longlong)(int)uVar27 * 0x60;
        local_378 = (uint *)(lVar28 + 8);
        if (*(int *)(lVar28 + 0x3c) < *(int *)(lVar28 + 0x10)) {
          FUN_146ce93a0(local_378);
          uVar26 = local_338[4] - local_338[0xf];
          local_358 = CONCAT44(local_358._4_4_,uVar26);
          if (uVar26 != 0 && (int)local_338[0xf] <= (int)local_338[4]) {
            local_370 = *(uint **)(local_338 + 2);
            uVar46 = (ulonglong)uVar26;
            puVar24 = local_370 + 8;
            uVar43 = 0;
            do {
              if ((uVar43 + 1 < uVar46) && ((int)*puVar24 < (int)puVar24[-8])) {
                pauVar53 = (undefined1 (*) [16])(puVar24 + -8);
                uVar22 = *(undefined8 *)*pauVar53;
                uVar7 = *(undefined8 *)(puVar24 + -6);
                uVar8 = *(undefined8 *)*(undefined1 (*) [16])(puVar24 + -4);
                uVar9 = *(undefined8 *)(puVar24 + -2);
                local_f8 = *(undefined1 (*) [16])(puVar24 + -4);
                uVar10 = *(undefined8 *)(puVar24 + 2);
                *(undefined8 *)(puVar24 + -4) = *(undefined8 *)(puVar24 + 4);
                *(undefined8 *)(puVar24 + -2) = *(undefined8 *)(puVar24 + 6);
                *(undefined8 *)*pauVar53 = *(undefined8 *)puVar24;
                *(undefined8 *)(puVar24 + -6) = uVar10;
                local_108._0_4_ = (undefined4)uVar22;
                local_108._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
                local_108._8_4_ = (undefined4)uVar7;
                uStack_fc = (uint)((ulonglong)uVar7 >> 0x20);
                *(undefined8 *)(puVar24 + 4) = uVar8;
                *(undefined8 *)(puVar24 + 6) = uVar9;
                *puVar24 = local_108._0_4_;
                puVar24[1] = local_108._4_4_;
                puVar24[2] = local_108._8_4_;
                puVar24[3] = uStack_fc;
                _local_108 = *pauVar53;
              }
              uVar43 = uVar43 + 2;
              puVar24 = puVar24 + 0x10;
            } while (uVar43 < uVar46);
            if (2 < (int)uVar26) {
              iVar39 = 2;
              do {
                local_39c = iVar39 * 2;
                local_3a8 = (ulonglong)local_39c;
                lVar28 = 0;
                do {
                  iVar38 = uVar26 - (int)lVar28;
                  if (local_39c <= iVar38) {
                    iVar38 = local_39c;
                  }
                  if (iVar39 < iVar38 && 0 < iVar39) {
                    iVar36 = 0;
                    iVar34 = iVar39;
                    while( true ) {
                      iVar52 = 0;
                      if (iVar34 - iVar36 != 0 && iVar36 <= iVar34) {
                        iVar52 = 0;
                        uVar27 = iVar34 - iVar36;
                        do {
                          iVar49 = (uVar27 >> 1) + iVar52;
                          if ((int)local_370[lVar28 * 8 +
                                             (longlong)iVar36 * 8 + (longlong)iVar49 * 8] <=
                              (int)local_370[lVar28 * 8 + (longlong)iVar34 * 8]) {
                            iVar52 = iVar49 + (uVar27 & 1);
                          }
                          bVar57 = 1 < uVar27;
                          uVar27 = uVar27 >> 1;
                        } while (bVar57);
                      }
                      iVar52 = iVar52 + iVar36;
                      iVar36 = iVar34 - iVar52;
                      if (iVar36 == 0 || iVar34 < iVar52) break;
                      uVar27 = iVar38 - iVar34;
                      if (uVar27 == 0 || iVar38 < iVar34) {
                        iVar49 = 0;
                      }
                      else {
                        pauVar53 = (undefined1 (*) [16])
                                   (local_370 + lVar28 * 8 + (longlong)iVar52 * 8);
                        iVar49 = 0;
                        uVar43 = (ulonglong)uVar27;
                        do {
                          uVar43 = uVar43 >> 1;
                          uVar48 = (uint)uVar43 + iVar49;
                          if ((int)(local_370 + lVar28 * 8 + (longlong)iVar34 * 8)
                                   [(ulonglong)uVar48 * 8] < (int)*(uint *)*pauVar53) {
                            iVar49 = uVar48 + (uVar27 & 1);
                          }
                          bVar57 = 1 < uVar27;
                          uVar27 = (uint)uVar43;
                        } while (bVar57);
                        iVar34 = iVar34 + iVar49;
                        if (0 < iVar49) {
                          pauVar51 = pauVar53 + (longlong)(iVar34 - iVar52) * 2;
                          pauVar17 = pauVar53 + (longlong)iVar36 * 2;
                          pauVar29 = pauVar53 + (longlong)iVar36 * 2;
                          do {
                            while( true ) {
                              pauVar1 = pauVar17 + 2;
                              uVar22 = *(undefined8 *)*pauVar53;
                              uVar7 = *(undefined8 *)((longlong)*pauVar53 + 8);
                              auVar13 = *pauVar53;
                              uVar8 = *(undefined8 *)pauVar53[1];
                              uVar9 = *(undefined8 *)((longlong)pauVar53[1] + 8);
                              local_f8 = pauVar53[1];
                              uVar10 = *(undefined8 *)*pauVar17;
                              uVar11 = *(undefined8 *)((longlong)*pauVar17 + 8);
                              uVar12 = *(undefined8 *)((longlong)pauVar17[1] + 8);
                              *(undefined8 *)pauVar53[1] = *(undefined8 *)pauVar17[1];
                              *(undefined8 *)((longlong)pauVar53[1] + 8) = uVar12;
                              *(undefined8 *)*pauVar53 = uVar10;
                              *(undefined8 *)((longlong)*pauVar53 + 8) = uVar11;
                              pauVar53 = pauVar53 + 2;
                              local_108._0_4_ = (undefined4)uVar22;
                              local_108._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
                              local_108._8_4_ = (undefined4)uVar7;
                              uStack_fc = (uint)((ulonglong)uVar7 >> 0x20);
                              *(undefined8 *)pauVar17[1] = uVar8;
                              *(undefined8 *)((longlong)pauVar17[1] + 8) = uVar9;
                              *(undefined4 *)*pauVar17 = local_108._0_4_;
                              *(undefined4 *)((longlong)*pauVar17 + 4) = local_108._4_4_;
                              *(undefined4 *)((longlong)*pauVar17 + 8) = local_108._8_4_;
                              *(uint *)((longlong)*pauVar17 + 0xc) = uStack_fc;
                              if (pauVar1 == pauVar51) break;
                              pauVar17 = pauVar1;
                              if (pauVar53 == pauVar29) {
                                pauVar29 = pauVar1;
                              }
                            }
                            pauVar17 = pauVar29;
                            _local_108 = auVar13;
                          } while (pauVar53 != pauVar29);
                        }
                      }
                      if ((iVar38 <= iVar34) || (iVar36 = iVar52 + iVar49 + 1, iVar34 <= iVar36))
                      break;
                    }
                  }
                  lVar28 = lVar28 + local_3a8;
                } while (lVar28 < (longlong)uVar46);
                iVar39 = local_39c;
                local_320 = uVar46;
              } while (local_39c < (int)uVar26);
            }
          }
        }
        FUN_146ce906c(local_378);
        puVar24 = local_338 + 6;
        uVar26 = local_338[0xc];
        param_1 = local_398;
        if (uVar26 == 0) {
          uVar56 = 1;
          uVar46 = 0;
          iVar39 = 0;
          uVar27 = 0;
        }
        else {
          puVar18 = *(uint **)(local_338 + 10);
          if (*(uint **)(local_338 + 10) == (uint *)0x0) {
            puVar18 = puVar24;
          }
          uVar27 = *puVar18;
          if (uVar27 == 0) {
            iVar39 = uVar26 + 0x1e;
            if (-1 < (int)(uVar26 - 1)) {
              iVar39 = uVar26 - 1;
            }
            uVar46 = 0;
            uVar43 = (ulonglong)(uint)(iVar39 >> 5);
            if (iVar39 >> 5 < 1) {
              uVar43 = uVar46;
            }
            iVar39 = 0;
            do {
              if (uVar43 == uVar46) goto LAB_14298d03a;
              iVar39 = iVar39 + 0x20;
              uVar27 = puVar18[uVar46 + 1];
              uVar46 = uVar46 + 1;
            } while (uVar27 == 0);
          }
          else {
            uVar46 = 0;
            iVar39 = 0;
          }
          uVar56 = (ulonglong)(-uVar27 & uVar27);
          uVar43 = uVar56 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar43 != 0) {
            for (; uVar43 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          uVar27 = (iVar39 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          if ((int)uVar26 <= (int)uVar27) {
            uVar27 = uVar26;
          }
        }
        if (uVar27 != uVar26) {
          uVar48 = 0xffffffff;
          puVar25 = local_378;
          puVar18 = local_338;
          local_370 = puVar24;
          local_320 = (ulonglong)uVar26;
LAB_14298d151:
          lVar28 = *(longlong *)puVar25 + (longlong)(int)uVar27 * 0x20;
          uVar26 = *(uint *)(*(longlong *)puVar25 + (longlong)(int)uVar27 * 0x20);
          local_39c = iVar39;
          local_358 = uVar46;
          if (uVar26 < 2) {
            if ((int)param_1[0x2b] != *(int *)((longlong)param_1 + 0x184)) {
              uVar27 = *puVar18;
              plVar37 = (longlong *)param_1[0x32];
              if ((longlong *)param_1[0x32] == (longlong *)0x0) {
                plVar37 = local_310;
              }
              iVar39 = *(int *)((longlong)plVar37 +
                               (ulonglong)((int)param_1[0x33] - 1U & uVar27) * 4);
              if (iVar39 != -1) {
LAB_14298d239:
                lVar44 = param_1[0x2a] + (longlong)iVar39 * 0x170;
                if (*(uint *)(param_1[0x2a] + (longlong)iVar39 * 0x170) != uVar27)
                goto code_r0x00014298d24c;
                plVar37 = (longlong *)(lVar44 + 8);
                if (plVar37 != (longlong *)0x0 && lVar44 != 0) {
                  local_278 = 0;
                  uStack_270 = 0;
                  iVar39 = *(int *)(lVar28 + 0x10);
                  local_368 = (longlong *)CONCAT44(local_368._4_4_,uVar26);
                  local_380 = plVar37;
                  local_304 = uVar27;
                  if ((longlong)iVar39 != 0) {
                    lVar28 = *(longlong *)(lVar28 + 8);
                    lVar30 = 0;
                    do {
                      uVar46 = uStack_270;
                      plVar19 = *(longlong **)(lVar28 + lVar30);
                      if ((plVar19 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar19 + 0xc)))
                      {
                        lVar20 = *(longlong *)
                                  (*(longlong *)(*plVar19 + 0x5a8) +
                                  (longlong)(int)plVar19[1] * 0x10);
                        if ((lVar20 == 0) || (*(byte *)(lVar20 + 0xc) < 3)) {
                          lVar20 = 0;
                        }
                        if (*plVar37 != lVar20) {
                          lVar20 = (longlong)(int)uStack_270;
                          uVar26 = (int)uStack_270 + 1;
                          uStack_270 = CONCAT44(uStack_270._4_4_,uVar26);
                          if (uStack_270._4_4_ < uVar26) {
                            FUN_1406b7a4a(&local_278,uVar46 & 0xffffffff);
                            plVar37 = local_380;
                          }
                          *(undefined8 *)(local_278 + lVar20 * 8) = *(undefined8 *)(lVar28 + lVar30)
                          ;
                        }
                      }
                      lVar30 = lVar30 + 8;
                    } while ((longlong)iVar39 * 8 != lVar30);
                  }
                  plVar19 = local_398;
                  local_32c = uVar48;
                  FUN_140509fa0(local_398,&local_278,1);
                  lVar28 = *plVar19;
                  local_178 = *(undefined1 *)(lVar28 + 0x371);
                  local_1a8[0] = FUN_1429956d8;
                  local_198 = (undefined ***)0x0;
                  local_188 = &PTR_LAB_149f4b5c0;
                  local_180 = plVar19;
                  *(undefined1 *)(lVar28 + 0x371) = 0;
                  lVar28 = *(longlong *)
                            (*(longlong *)(*(longlong *)*plVar37 + 200) +
                            (longlong)(int)((longlong *)*plVar37)[1] * 8);
                  iVar39 = 0;
                  if (lVar28 != 0) {
                    iVar39 = *(int *)(lVar28 + 0x1c);
                  }
                  local_300 = (longlong *)(lVar44 + 0x18);
                  local_34c = *(int *)(lVar44 + 0x20);
                  local_148 = (uint *)0x0;
                  uStack_140 = 0;
                  local_168 = ZEXT816(0);
                  uStack_13c = 0x80;
                  uStack_138 = 0xffffffff;
                  iStack_134 = 0;
                  local_128 = 0;
                  uStack_120 = uStack_120 & 0xffffffff00000000;
                  local_108._8_4_ = (int)uStack_270;
                  local_108._0_8_ = local_278;
                  FUN_1405039ea(local_168,local_108);
                  local_288 = (longlong *)0x0;
                  uStack_280 = 0;
                  iVar38 = local_168._8_4_ - iStack_134;
                  if (iVar38 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(iVar38);
                  }
                  local_2c8 = lVar28;
                  if (iVar38 != 0) {
                    FUN_14043d0a6();
                  }
                  local_1d8 = 0;
                  local_1d0 = 0;
                  local_1f8 = (longlong *)0x0;
                  uStack_1f0 = 0;
                  local_1cc = 0xffffffff00000080;
                  local_1c4 = 0;
                  local_1b8 = 0;
                  local_3a8 = 0;
                  local_1b0 = 0;
                  plVar37 = (longlong *)(ulonglong)uStack_140;
                  uVar46 = 1;
                  uVar43 = 0;
                  uVar26 = 0;
                  puVar24 = local_370;
                  local_2e4 = iVar39;
                  if (uStack_140 == 0) {
LAB_14298d596:
                    if (uVar26 == uStack_140) goto LAB_14298d59e;
                    uVar48 = 0xffffffff;
                    bVar50 = 1;
                    local_360 = (ulonglong *)((ulonglong)local_360._4_4_ << 0x20);
                    uVar27 = uStack_140;
                    local_388 = plVar37;
                    do {
                      uVar2 = uStack_280;
                      plVar19 = *(longlong **)(local_168._0_8_ + (longlong)(int)uVar26 * 0x10);
                      if (plVar19 != (longlong *)0x0) {
                        if (*(byte *)((longlong)plVar19 + 0xc) < 3) {
                          lVar28 = (longlong)(int)(uint)uStack_280;
                          uStack_280._0_4_ = (uint)uStack_280 + 1;
                          if (uStack_280._4_4_ < (uint)uStack_280) {
                            FUN_1406b7a4a(&local_288,uVar2 & 0xffffffff);
                            plVar37 = local_388;
                          }
                          local_288[lVar28] = (longlong)plVar19;
                          lVar28 = *plVar19;
                          lVar30 = (longlong)(int)plVar19[1];
                        }
                        else {
                          if ((*(byte *)((longlong)plVar19 + 0xc) == 3) && (DAT_14c75f00d != '\0'))
                          {
                            lVar28 = *(longlong *)(*plVar19 + 0x5a8);
                            lVar20 = (longlong)(int)plVar19[1] * 0x10;
                            lVar30 = *(longlong *)(lVar28 + lVar20);
                            if (((lVar30 == 0) || (*(byte *)(lVar30 + 0xc) < 3)) &&
                               ((*(char *)(*(longlong *)(*plVar19 + 0x2c0) + 0xd + lVar20) == '\x01'
                                && (*(int *)(lVar28 + 8 + lVar20) == 0)))) goto LAB_14298dd7e;
                          }
                          if ((int)local_368 == 1) {
                            local_3a9 = bVar50;
                            FUN_1429c47b2(*local_398,local_108,plVar19,1);
                            FUN_146cb805e(local_108,&local_258);
                            uVar2 = uStack_280;
                            uVar45 = (ulonglong)(int)(uint)local_250;
                            if (uVar45 != 0) {
                              iVar39 = (uint)uStack_280;
                              lVar28 = (longlong)(int)(uint)uStack_280;
                              uStack_280 = CONCAT44(uStack_280._4_4_,
                                                    (uint)uStack_280 + (uint)local_250);
                              if (uStack_280._4_4_ - iVar39 < (uint)local_250) {
                                local_340 = uVar45;
                                FUN_1406b7a4a(&local_288,uVar2 & 0xffffffff);
                                uVar45 = local_340;
                              }
                              memmove(local_288 + lVar28,local_258,uVar45 << 3);
                              local_250 = (longlong **)((ulonglong)local_250 & 0xffffffff00000000);
                            }
                            if (local_258 != (longlong **)0x0) {
                              FUN_1400020a8();
                            }
                            if ((int)uStack_e0 == 0) {
                              local_340 = 1;
                              plVar55 = (longlong *)0x0;
                              iVar38 = 0;
                              iVar39 = 0;
                            }
                            else {
                              puVar24 = local_e8;
                              if (local_e8 == (uint *)0x0) {
                                puVar24 = (uint *)local_f8;
                              }
                              uVar26 = *puVar24;
                              if (uVar26 == 0) {
                                iVar39 = (int)uStack_e0 + 0x1e;
                                if (-1 < (int)uStack_e0 + -1) {
                                  iVar39 = (int)uStack_e0 + -1;
                                }
                                plVar55 = (longlong *)0x0;
                                plVar31 = (longlong *)(ulonglong)(uint)(iVar39 >> 5);
                                if (iVar39 >> 5 < 1) {
                                  plVar31 = plVar55;
                                }
                                iVar38 = 0;
                                do {
                                  if (plVar31 == plVar55) goto LAB_14298dfa8;
                                  iVar38 = iVar38 + 0x20;
                                  uVar26 = puVar24[(longlong)plVar55 + 1];
                                  plVar55 = (longlong *)((longlong)plVar55 + 1);
                                } while (uVar26 == 0);
                              }
                              else {
                                plVar55 = (longlong *)0x0;
                                iVar38 = 0;
                              }
                              local_340 = (ulonglong)(-uVar26 & uVar26);
                              uVar2 = local_340 * 2 + 1;
                              lVar28 = 0x3f;
                              if (uVar2 != 0) {
                                for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                                }
                              }
                              iVar39 = (iVar38 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                              if ((int)uStack_e0 <= iVar39) {
                                iVar39 = (int)uStack_e0;
                              }
                            }
                            if (iVar39 != (int)uStack_e0) {
                              local_348 = (longlong *)CONCAT44(local_348._4_4_,0xffffffff);
                              local_318 = (longlong *)(uStack_e0 & 0xffffffff);
                              do {
                                local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,iVar38);
                                local_290 = *(longlong **)
                                             (local_108._0_8_ + (longlong)iVar39 * 0x10);
                                local_258 = &local_290;
                                local_250 = &local_298;
                                local_298 = plVar19;
                                FUN_146ce95ec(&local_1f8,local_25c,&local_258);
                                uVar26 = ~(uint)local_340 & (uint)local_348;
                                puVar24 = local_e8;
                                if (local_e8 == (uint *)0x0) {
                                  puVar24 = (uint *)local_f8;
                                }
                                iVar39 = (int)plVar55;
                                lVar28 = (longlong)iVar39;
                                uVar27 = puVar24[lVar28] & uVar26;
                                plVar31 = plVar55;
                                iVar38 = (int)local_2f8;
                                if (uVar27 == 0) {
                                  iVar34 = (int)uStack_e0 + 0x1e;
                                  if (-1 < (int)uStack_e0 + -1) {
                                    iVar34 = (int)uStack_e0 + -1;
                                  }
                                  iVar34 = iVar34 >> 5;
                                  iVar38 = (int)local_2f8 + 0x20;
                                  iVar36 = iVar34;
                                  if (iVar34 < iVar39) {
                                    iVar36 = iVar39;
                                  }
                                  if (iVar39 < iVar34) {
                                    lVar30 = 0;
                                    do {
                                      uVar27 = puVar24[lVar28 + lVar30 + 1];
                                      if (uVar27 != 0) {
                                        uVar26 = 0xffffffff;
                                        plVar31 = (longlong *)(ulonglong)(iVar39 + (int)lVar30 + 1);
                                        local_348 = plVar55;
                                        goto LAB_14298e112;
                                      }
                                      iVar38 = iVar38 + 0x20;
                                      lVar30 = lVar30 + 1;
                                    } while (iVar36 - lVar28 != lVar30);
                                    uVar26 = 0xffffffff;
                                    iVar39 = iVar36;
                                  }
                                  local_348._4_4_ = (undefined4)((ulonglong)plVar55 >> 0x20);
                                  local_348 = (longlong *)CONCAT44(local_348._4_4_,uVar26);
                                  plVar31 = (longlong *)(ulonglong)(iVar39 + 1);
                                  plVar37 = local_388;
                                  iVar39 = (int)uStack_e0;
                                }
                                else {
LAB_14298e112:
                                  local_340 = (ulonglong)(-uVar27 & uVar27);
                                  uVar2 = local_340 * 2 + 1;
                                  lVar28 = 0x3f;
                                  if (uVar2 != 0) {
                                    for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                                    }
                                  }
                                  iVar39 = (iVar38 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                                  if ((int)uStack_e0 <= iVar39) {
                                    iVar39 = (int)uStack_e0;
                                  }
                                  local_348 = (longlong *)CONCAT44(local_348._4_4_,uVar26);
                                }
                                plVar55 = plVar31;
                              } while (iVar39 != (int)local_318);
                            }
LAB_14298dfa8:
                            uStack_c0 = uStack_c0 & 0xffffffff00000000;
                            if (local_c8 != 0) {
                              FUN_1400020a8();
                            }
                            FUN_140a356f6(local_108);
                            bVar50 = local_3a9;
                          }
                          else {
                            lVar28 = (longlong)(int)(uint)uStack_280;
                            uStack_280._0_4_ = (uint)uStack_280 + 1;
                            if (uStack_280._4_4_ < (uint)uStack_280) {
                              FUN_1406b7a4a(&local_288,uVar2 & 0xffffffff);
                              plVar37 = local_388;
                            }
                            local_288[lVar28] = (longlong)plVar19;
                          }
                          lVar28 = *plVar19;
                          lVar30 = (longlong)(int)plVar19[1];
                          local_360 = (ulonglong *)
                                      CONCAT44(local_360._4_4_,
                                               CONCAT31((int3)((ulonglong)local_360 >> 8),
                                                        (byte)local_360 |
                                                        *(byte *)(*(longlong *)(lVar28 + 0x680) +
                                                                 lVar30) >> 1));
                        }
                        bVar50 = bVar50 & *(char *)(*(longlong *)(lVar28 + 0x2c0) + 0xb +
                                                   lVar30 * 0x10) == '\x01';
                        puVar24 = local_370;
                        uVar27 = uStack_140;
                      }
LAB_14298dd7e:
                      uVar48 = uVar48 & ~(uint)uVar46;
                      puVar18 = local_148;
                      if (local_148 == (uint *)0x0) {
                        puVar18 = (uint *)local_158;
                      }
                      iVar39 = (int)uVar43;
                      lVar28 = (longlong)iVar39;
                      uVar26 = puVar18[lVar28] & uVar48;
                      if (uVar26 == 0) {
                        iVar38 = uVar27 + 0x1e;
                        if (-1 < (int)(uVar27 - 1)) {
                          iVar38 = uVar27 - 1;
                        }
                        iVar38 = iVar38 >> 5;
                        local_3a8 = (ulonglong)((int)local_3a8 + 0x20);
                        iVar34 = iVar38;
                        if (iVar38 < iVar39) {
                          iVar34 = iVar39;
                        }
                        if (iVar39 < iVar38) {
                          lVar30 = 0;
                          do {
                            uVar26 = (puVar18 + lVar28 + 1)[lVar30];
                            if (uVar26 != 0) {
                              uVar43 = (ulonglong)(iVar39 + (int)lVar30 + 1);
                              uVar48 = 0xffffffff;
                              goto LAB_14298de0b;
                            }
                            local_3a8 = (ulonglong)((int)local_3a8 + 0x20);
                            lVar30 = lVar30 + 1;
                          } while (iVar34 - lVar28 != lVar30);
                          uVar48 = 0xffffffff;
                          iVar39 = iVar34;
                        }
                        uVar43 = (ulonglong)(iVar39 + 1);
                        plVar37 = local_388;
                        puVar24 = local_370;
                        uVar26 = uVar27;
                      }
                      else {
LAB_14298de0b:
                        uVar46 = (ulonglong)(-uVar26 & uVar26);
                        uVar2 = uVar46 * 2 + 1;
                        lVar28 = 0x3f;
                        if (uVar2 != 0) {
                          for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                          }
                        }
                        uVar26 = ((int)local_3a8 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                        if ((int)uVar27 <= (int)uVar26) {
                          uVar26 = uVar27;
                        }
                      }
                    } while (uVar26 != (uint)plVar37);
                  }
                  else {
                    puVar18 = local_148;
                    if (local_148 == (uint *)0x0) {
                      puVar18 = (uint *)local_158;
                    }
                    uVar26 = *puVar18;
                    if (uVar26 != 0) {
                      local_3a8 = 0;
                      uVar43 = 0;
LAB_14298d572:
                      uVar46 = (ulonglong)(-uVar26 & uVar26);
                      uVar2 = uVar46 * 2 + 1;
                      lVar28 = 0x3f;
                      if (uVar2 != 0) {
                        for (; uVar2 >> lVar28 == 0; lVar28 = lVar28 + -1) {
                        }
                      }
                      uVar26 = ((int)local_3a8 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
                      if ((int)uStack_140 <= (int)uVar26) {
                        uVar26 = uStack_140;
                      }
                      goto LAB_14298d596;
                    }
                    iVar39 = uStack_140 + 0x1e;
                    if (-1 < (int)(uStack_140 - 1)) {
                      iVar39 = uStack_140 - 1;
                    }
                    uVar43 = 0;
                    uVar46 = (ulonglong)(uint)(iVar39 >> 5);
                    if (iVar39 >> 5 < 1) {
                      uVar46 = 0;
                    }
                    local_3a8 = 0;
                    while (uVar46 != uVar43) {
                      local_3a8 = (ulonglong)((int)local_3a8 + 0x20);
                      uVar26 = puVar18[uVar43 + 1];
                      uVar43 = uVar43 + 1;
                      if (uVar26 != 0) goto LAB_14298d572;
                    }
LAB_14298d59e:
                    bVar50 = 1;
                    local_360 = (ulonglong *)((ulonglong)local_360._4_4_ << 0x20);
                  }
                  puVar18 = local_338;
                  lVar28 = (longlong)(int)(uint)uStack_280;
                  if (lVar28 != 0) {
                    iVar39 = *(int *)(lVar44 + 0x20);
                    *(uint *)(lVar44 + 0x20) = iVar39 + (uint)uStack_280;
                    local_3a9 = bVar50;
                    if ((uint)(*(int *)(lVar44 + 0x24) - iVar39) < (uint)uStack_280) {
                      FUN_1406b7a4a(local_300,iVar39);
                    }
                    bVar57 = local_34c == 0;
                    memcpy((void *)((longlong)iVar39 * 8 + *local_300),local_288,lVar28 << 3);
                    plVar19 = local_380;
                    plVar37 = local_398;
                    FUN_1429c31d2(*local_398,*local_380,&local_288,&local_1f8);
                    lVar28 = *(longlong *)*plVar19;
                    lVar20 = (longlong)(int)((longlong *)*plVar19)[1];
                    lVar30 = lVar20 * 3;
                    uVar5 = *(ushort *)(*(longlong *)(lVar28 + 0x2c0) + 8 + lVar20 * 0x10);
                    local_388 = (longlong *)
                                CONCAT44(local_388._4_4_,
                                         (uint)(byte)((byte)((uVar5 & 4) >> 2) | bVar57));
                    local_368 = (longlong *)
                                (CONCAT44(local_368._4_4_,(uint)(uVar5 >> 9)) & 0xffffffff00000001);
                    lVar28 = *(longlong *)(lVar28 + 0x500);
                    bVar50 = *(byte *)(lVar28 + lVar30);
                    cVar35 = *(char *)(lVar28 + 1 + lVar30);
                    local_3a8 = CONCAT44(local_3a8._4_4_,
                                         (int)CONCAT71((int7)((ulonglong)lVar28 >> 8),
                                                       *(undefined1 *)(lVar28 + 2 + lVar30)));
                    if ((longlong)(int)(uint)uStack_280 == 0) {
                      fVar59 = 3.4028235e+38;
                    }
                    else {
                      local_2f8 = local_288 + (int)(uint)uStack_280;
                      local_318 = (longlong *)(lVar44 + 0x108);
                      local_300 = (longlong *)(lVar44 + 0x118);
                      local_348 = (longlong *)(lVar44 + 0x38);
                      local_2a8 = lVar44 + 0x70;
                      fVar59 = 3.4028235e+38;
                      plVar19 = local_288;
                      uVar26 = (uint)bVar50;
                      do {
                        local_290 = (longlong *)*plVar19;
                        if (((*(longlong *)
                               (*(longlong *)(*local_290 + 0x60) + (longlong)(int)local_290[1] * 8)
                              == 0) &&
                            (lVar28 = *(longlong *)
                                       (*(longlong *)(*local_290 + 200) +
                                       (longlong)(int)local_290[1] * 8), lVar28 != 0)) &&
                           (*(int *)(lVar28 + 0x1c) == 2)) {
                          FUN_146ee71e6();
                        }
                        plVar55 = local_290;
                        if (local_34c != 0) {
                          iVar39 = *(int *)(lVar44 + 0x110);
                          *(uint *)(lVar44 + 0x110) = iVar39 + 1U;
                          if (*(uint *)(lVar44 + 0x114) < iVar39 + 1U) {
                            FUN_146ce9b06(local_318,iVar39);
                          }
                          lVar28 = *local_318;
                          *(longlong **)(lVar28 + (longlong)iVar39 * 0x10) = plVar55;
                          *(undefined1 *)(lVar28 + 8 + (longlong)iVar39 * 0x10) = 0;
                          local_108._0_8_ = local_290;
                          local_258 = (longlong **)((ulonglong)local_258 & 0xffffffffffffff00);
                          uVar22 = FUN_146ce5fc4(local_300,0,&local_258);
                          FUN_146ce652e(uVar22,local_108);
                          plVar37 = local_398;
                        }
                        lVar28 = *local_290;
                        lVar30 = (longlong)(int)local_290[1];
                        fVar3 = *(float *)(*(longlong *)(lVar28 + 0x488) + lVar30 * 4);
                        if (fVar3 <= fVar59) {
                          fVar59 = fVar3;
                        }
                        lVar20 = *(longlong *)(lVar28 + 0x500);
                        lVar21 = lVar30 * 3;
                        cVar4 = *(char *)(lVar20 + 1 + lVar21);
                        bVar50 = *(byte *)(lVar20 + 2 + lVar21);
                        uVar27 = (uint)local_3a8 & 0xff;
                        if ((char)local_3a8 < (char)bVar50) {
                          uVar27 = (uint)bVar50;
                        }
                        if (cVar35 < cVar4) {
                          cVar35 = cVar4;
                        }
                        uVar48 = uVar26 & 0xff;
                        if ((char)uVar26 < (char)*(byte *)(lVar20 + lVar21)) {
                          uVar48 = (uint)*(byte *)(lVar20 + lVar21);
                        }
                        if ((char)uVar48 < '\0') {
                          uVar48 = 0xff;
                        }
                        local_340 = CONCAT44(local_340._4_4_,uVar48);
                        if (cVar35 < '\0') {
                          cVar35 = -1;
                        }
                        if ((char)uVar27 < '\0') {
                          uVar27 = 0xff;
                        }
                        local_3a8 = CONCAT44(local_3a8._4_4_,uVar27);
                        uVar5 = *(ushort *)(*(longlong *)(lVar28 + 0x2c0) + 8 + lVar30 * 0x10);
                        if (*(int *)(lVar44 + 0x40) != *(int *)(lVar44 + 0x6c)) {
                          uVar26 = ((uint)((ulonglong)local_290 >> 0x14) & 0xffff ^
                                   (uint)((ulonglong)local_290 >> 4)) * -0x7a143595;
                          uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
                          lVar28 = *(longlong *)(lVar44 + 0x78);
                          if (*(longlong *)(lVar44 + 0x78) == 0) {
                            lVar28 = local_2a8;
                          }
                          iVar39 = *(int *)(lVar28 + (ulonglong)
                                                     (*(int *)(lVar44 + 0x80) - 1U &
                                                     (uVar26 >> 0x10 ^ uVar26)) * 4);
                          if (iVar39 != -1) {
                            do {
                              if (*(longlong **)(*local_348 + (longlong)iVar39 * 0x18) == local_290)
                              goto LAB_14298e427;
                              iVar39 = *(int *)(*local_348 + (longlong)iVar39 * 0x18 + 0x10);
                            } while (iVar39 != -1);
                          }
                        }
                        local_298 = (longlong *)((ulonglong)local_298 & 0xffffffffffffff00);
                        stack0xffffffffffffff00 = &local_298;
                        local_108._0_8_ = &local_290;
                        FUN_146ce9b8c(local_348,&local_258,local_108,0);
LAB_14298e427:
                        plVar55 = local_290;
                        if ((local_290 != (longlong *)0x0) &&
                           (2 < *(byte *)((longlong)local_290 + 0xc))) {
                          lVar28 = *(longlong *)*local_380;
                          lVar20 = (longlong)(int)((longlong *)*local_380)[1];
                          lVar30 = *(longlong *)(lVar28 + 0x28);
                          lVar28 = *(longlong *)(lVar28 + 0x48);
                          lVar21 = lVar20 * 0x10;
                          dVar6 = (double)*(float *)(lVar28 + 0xc + lVar21);
                          dVar58 = (double)*(float *)(lVar28 + 4 + lVar21);
                          local_108._8_4_ = SUB84(dVar58,0);
                          local_108._0_8_ = (double)*(float *)(lVar28 + lVar21);
                          uStack_fc = (int)((ulonglong)dVar58 >> 0x20);
                          local_f8._8_4_ = SUB84(dVar6,0);
                          local_f8._0_8_ = (double)*(float *)(lVar28 + 8 + lVar21);
                          local_f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                          puVar33 = (undefined8 *)(lVar30 + lVar20 * 0x18);
                          local_e8 = (uint *)*puVar33;
                          uStack_e0 = puVar33[1];
                          local_d8 = *(undefined8 *)(lVar30 + 0x10 + lVar20 * 0x18);
                          uStack_d0 = 0;
                          local_c8 = 0x3ff0000000000000;
                          uStack_c0 = 0x3ff0000000000000;
                          local_b8 = 0x3ff0000000000000;
                          uStack_b0 = 0;
                          FUN_14298c02d(&local_258,local_290,local_108);
                          ppplVar41 = &local_258;
                          puVar33 = (undefined8 *)
                                    ((longlong)(int)plVar55[1] * 0x60 +
                                    *(longlong *)(*plVar55 + 0x5c0));
                          for (lVar28 = 0xc; plVar37 = local_398, puVar18 = local_338, lVar28 != 0;
                              lVar28 = lVar28 + -1) {
                            *puVar33 = *ppplVar41;
                            ppplVar41 = ppplVar41 + 1;
                            puVar33 = puVar33 + 1;
                          }
                        }
                        local_388 = (longlong *)
                                    CONCAT44(local_388._4_4_,
                                             CONCAT31((int3)((ulonglong)local_388 >> 8),
                                                      (byte)local_388 & (byte)((uVar5 & 4) >> 2)));
                        local_368 = (longlong *)
                                    CONCAT44(local_368._4_4_,
                                             CONCAT31((int3)((ulonglong)local_368 >> 8),
                                                      (byte)local_368 | (byte)(uVar5 >> 9) & 1));
                        FUN_1456cc230(*(undefined8 *)(plVar37[1] + 0x2c8),local_290,1);
                        plVar19 = plVar19 + 1;
                        bVar50 = (byte)local_340;
                        uVar26 = (uint)local_340;
                      } while (plVar19 != local_2f8);
                    }
                    puVar24 = local_370;
                    if ((local_2c8 != 0) && (local_2e4 == 0xc)) {
                      if ((longlong)(int)(uint)uStack_280 != 0) {
                        lVar28 = 0;
                        do {
                          plVar19 = *(longlong **)((longlong)local_288 + lVar28);
                          if ((plVar19 != (longlong *)0x0) &&
                             (lVar30 = *(longlong *)
                                        (*(longlong *)(*plVar19 + 200) +
                                        (longlong)(int)plVar19[1] * 8), lVar30 != 0)) {
                            *(longlong *)(lVar30 + 0x30) = local_2c8;
                          }
                          lVar28 = lVar28 + 8;
                        } while ((longlong)(int)(uint)uStack_280 * 8 != lVar28);
                      }
                    }
                    uVar26 = 0x24;
                    if (((local_34c == 0) && (uVar26 = 0x5b, ((ulonglong)local_360 & 1) != 0)) &&
                       ((*(byte *)(lVar44 + 0x100) & 2) == 0)) {
                      pbVar23 = (byte *)(*(longlong *)(*(longlong *)*local_380 + 0x680) +
                                        (longlong)(int)((longlong *)*local_380)[1]);
                      *pbVar23 = *pbVar23 | 2;
                    }
                    local_108._0_4_ = local_304;
                    puVar25 = (uint *)FUN_146ceb568(local_2e0,local_304,local_108);
                    *puVar25 = *puVar25 | uVar26;
                    if (local_2c8 != 0) {
                      *(longlong *)
                       (*(longlong *)(*(longlong *)*local_380 + 200) +
                       (longlong)(int)((longlong *)*local_380)[1] * 8) = local_2c8;
                    }
                    if (local_34c == 0) {
                      if ((local_3a9 & 1) != 0) {
                        FUN_1400d2fee(plVar37[1],*local_380,1);
                      }
                      if ((uint)uStack_280 != 0) {
                        plVar37 = (longlong *)*local_288;
                        if (*(int *)(lVar44 + 0xf8) == -1) {
                          lVar28 = *(longlong *)(*(longlong *)*local_380 + 0x2c0);
                          lVar44 = (longlong)(int)((longlong *)*local_380)[1] * 0x10;
                          *(ushort *)(lVar28 + 8 + lVar44) =
                               *(ushort *)(lVar28 + 8 + lVar44) & 0xff1f |
                               *(ushort *)
                                (*(longlong *)(*plVar37 + 0x2c0) + 8 +
                                (longlong)(int)plVar37[1] * 0x10) & 0xe0;
                        }
                        *(undefined4 *)
                         (*(longlong *)(*(longlong *)*local_380 + 0x470) +
                         (longlong)(int)((longlong *)*local_380)[1] * 4) =
                             *(undefined4 *)
                              (*(longlong *)(*plVar37 + 0x470) + (longlong)(int)plVar37[1] * 4);
                      }
                    }
                    lVar28 = *(longlong *)(*(longlong *)*local_380 + 0x2c0);
                    lVar44 = (longlong)(int)((longlong *)*local_380)[1] * 0x10;
                    *(ushort *)(lVar28 + 8 + lVar44) =
                         (*(ushort *)(lVar28 + 8 + lVar44) & 0xfffb) + (ushort)(byte)local_388 * 4;
                    lVar28 = *(longlong *)(*(longlong *)*local_380 + 0x2c0);
                    lVar44 = (longlong)(int)((longlong *)*local_380)[1] * 0x10;
                    *(ushort *)(lVar28 + 8 + lVar44) =
                         *(ushort *)(lVar28 + 8 + lVar44) & 0xfdff | ((byte)local_368 & 1) << 9;
                    lVar28 = *(longlong *)(*(longlong *)*local_380 + 0x500);
                    lVar44 = (longlong)(int)((longlong *)*local_380)[1] * 3;
                    *(byte *)(lVar28 + lVar44) = bVar50;
                    *(char *)(lVar28 + 1 + lVar44) = cVar35;
                    *(char *)(lVar28 + 2 + lVar44) = (char)local_3a8;
                    if ((fVar59 != 3.4028235e+38) || (NAN(fVar59))) {
                      *(float *)(*(longlong *)(*(longlong *)*local_380 + 0x488) +
                                (longlong)(int)((longlong *)*local_380)[1] * 4) = fVar59;
                    }
                  }
                  local_1b0 = 0;
                  if (local_1b8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_146cc37f0(&local_1f8);
                  if (local_288 != (longlong *)0x0) {
                    FUN_1400020a8();
                  }
                  param_1 = local_398;
                  uStack_120 = uStack_120 & 0xffffffff00000000;
                  if (local_128 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_140a356f6(local_168);
                  pcVar14 = local_1a8[0];
                  pppuVar32 = local_198;
                  if (local_198 == (undefined ***)0x0) {
                    pppuVar32 = &local_188;
                  }
                  uVar22 = (*(code *)(*pppuVar32)[1])();
                  (*pcVar14)(uVar22);
                  if (local_1a8[0] != (code *)0x0) {
                    pppuVar32 = local_198;
                    if (local_198 == (undefined ***)0x0) {
                      pppuVar32 = &local_188;
                    }
                    (*(code *)(*pppuVar32)[2])();
                  }
                  puVar25 = local_378;
                  uVar48 = local_32c;
                  if (local_278 != 0) {
                    FUN_1400020a8();
                    puVar25 = local_378;
                    uVar48 = local_32c;
                  }
                }
              }
            }
          }
          else if (uVar26 == 2) {
            FUN_14298b7a0(param_1,*puVar18,lVar28 + 8,1);
            puVar25 = local_378;
          }
          else if ((uVar26 == 3) && ((int)param_1[0x2b] != *(int *)((longlong)param_1 + 0x184))) {
            uVar26 = *puVar18;
            plVar37 = (longlong *)param_1[0x32];
            if ((longlong *)param_1[0x32] == (longlong *)0x0) {
              plVar37 = local_310;
            }
            iVar39 = *(int *)((longlong)plVar37 + (ulonglong)((int)param_1[0x33] - 1U & uVar26) * 4)
            ;
            if (iVar39 != -1) {
              do {
                lVar44 = param_1[0x2a] + (longlong)iVar39 * 0x170;
                if (*(uint *)(param_1[0x2a] + (longlong)iVar39 * 0x170) == uVar26) {
                  local_368 = (longlong *)(lVar44 + 8);
                  if ((local_368 != (longlong *)0x0 && lVar44 != 0) &&
                     ((longlong)*(int *)(lVar28 + 0x10) != 0)) {
                    puVar54 = *(ulonglong **)(lVar28 + 8);
                    local_360 = puVar54 + *(int *)(lVar28 + 0x10);
                    local_388 = (longlong *)(lVar44 + 0x108);
                    local_380 = (longlong *)(lVar44 + 0x118);
                    bVar57 = false;
                    local_3a8 = CONCAT44(local_3a8._4_4_,uVar26);
                    local_32c = uVar48;
                    goto LAB_14298d719;
                  }
                  break;
                }
                iVar39 = *(int *)(lVar44 + 0x168);
              } while (iVar39 != -1);
            }
          }
          goto LAB_14298e896;
        }
LAB_14298d03a:
        local_350 = local_350 & ~(uint)local_2f0;
        puVar24 = (uint *)param_1[6];
        if ((uint *)param_1[6] == (uint *)0x0) {
          puVar24 = local_2b0;
        }
        uVar26 = *(uint *)(param_1 + 7);
        iVar39 = (int)local_328;
        lVar28 = (longlong)iVar39;
        uVar27 = puVar24[lVar28] & local_350;
        if (uVar27 == 0) {
          iVar38 = uVar26 + 0x1e;
          if (-1 < (int)(uVar26 - 1)) {
            iVar38 = uVar26 - 1;
          }
          iVar38 = iVar38 >> 5;
          local_38c = local_38c + 0x20;
          iVar34 = iVar38;
          if (iVar38 < iVar39) {
            iVar34 = iVar39;
          }
          if (iVar39 < iVar38) {
            lVar44 = 0;
            do {
              uVar27 = puVar24[lVar28 + lVar44 + 1];
              if (uVar27 != 0) {
                local_328 = (ulonglong)(iVar39 + (int)lVar44 + 1);
                local_350 = 0xffffffff;
                goto LAB_14298d0fb;
              }
              local_38c = local_38c + 0x20;
              lVar44 = lVar44 + 1;
            } while (iVar34 - lVar28 != lVar44);
            local_350 = 0xffffffff;
            lVar28 = (longlong)iVar34;
          }
          local_328 = lVar28 + 1;
          param_1 = local_398;
          uVar27 = uVar26;
        }
        else {
LAB_14298d0fb:
          local_2f0 = (ulonglong)(-uVar27 & uVar27);
          uVar46 = local_2f0 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar46 != 0) {
            for (; uVar46 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          uVar27 = (local_38c - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          if ((int)uVar26 <= (int)uVar27) {
            uVar27 = uVar26;
          }
        }
      } while (uVar27 != (uint)local_2d8);
    }
LAB_14298c7bc:
    FUN_146ce9214(local_2d0);
    lVar28 = *(longlong *)(param_1[1] + 0x2f0);
    if ((lVar28 != 0) && (*(int *)(lVar28 + 0x3fc) < *(int *)(lVar28 + 0x3e4))) {
      *(int *)(lVar28 + 0x3fc) = *(int *)(lVar28 + 0x3e4);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_3d8) == DAT_14c707940) {
    FUN_14298e9e8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014298d24c:
  iVar39 = *(int *)(lVar44 + 0x168);
  if (iVar39 == -1) goto LAB_14298e896;
  goto LAB_14298d239;
LAB_14298d719:
  do {
    plVar37 = (longlong *)*puVar54;
    uVar48 = local_32c;
    if (plVar37 == (longlong *)0x0) goto LAB_14298e896;
    bVar50 = *(byte *)((longlong)plVar37 + 0xc);
    plVar19 = (longlong *)0x0;
    if (1 < bVar50) {
      plVar19 = plVar37;
    }
    plVar55 = (longlong *)0x0;
    if (2 < bVar50) {
      plVar55 = plVar37;
    }
    local_1f8 = plVar55;
    if ((longlong)*(int *)(lVar44 + 0x20) != 0) {
      uVar46 = 0;
      do {
        if (*(longlong **)(*(longlong *)(lVar44 + 0x18) + uVar46) == plVar19) {
          if (((((~uVar46 & 0x7fffffff8) != 0) && (*local_368 != 0)) && (2 < bVar50)) &&
             ((int)param_1[0x17] != *(int *)((longlong)param_1 + 0xe4))) {
            uVar26 = ((uint)((ulonglong)plVar37 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar37 >> 4))
                     * -0x7a143595;
            uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
            plVar19 = (longlong *)param_1[0x1e];
            if ((longlong *)param_1[0x1e] == (longlong *)0x0) {
              plVar19 = local_2a0;
            }
            iVar39 = *(int *)((longlong)plVar19 +
                             (ulonglong)((int)param_1[0x1f] - 1U & (uVar26 >> 0x10 ^ uVar26)) * 4);
            if (iVar39 != -1) {
              goto LAB_14298d812;
            }
          }
          break;
        }
        uVar46 = uVar46 + 8;
      } while ((longlong)*(int *)(lVar44 + 0x20) * 8 != uVar46);
    }
LAB_14298db77:
    FUN_146cea330(local_2c0,local_1f8);
    iVar39 = (uint)local_3a8;
LAB_14298db8c:
    uVar48 = local_32c;
    puVar18 = local_338;
    puVar24 = local_370;
    puVar54 = puVar54 + 1;
    puVar25 = local_378;
  } while (puVar54 != local_360);
  if (bVar57) {
    FUN_1456cc230(*(undefined8 *)(param_1[1] + 0x2c8),*local_368,0);
    local_108._0_4_ = iVar39;
    pbVar23 = (byte *)FUN_146ceb568(local_2e0,iVar39,local_108);
    *pbVar23 = *pbVar23 | 0x24;
    puVar25 = local_378;
  }
LAB_14298e896:
  uVar48 = uVar48 & ~(uint)uVar56;
  puVar47 = *(uint **)(puVar18 + 10);
  if (*(uint **)(puVar18 + 10) == (uint *)0x0) {
    puVar47 = puVar24;
  }
  uVar26 = puVar18[0xc];
  iVar38 = (int)local_358;
  lVar28 = (longlong)iVar38;
  uVar27 = puVar47[lVar28] & uVar48;
  uVar46 = local_358;
  iVar39 = local_39c;
  if (uVar27 == 0) {
    iVar34 = uVar26 + 0x1e;
    if (-1 < (int)(uVar26 - 1)) {
      iVar34 = uVar26 - 1;
    }
    iVar34 = iVar34 >> 5;
    iVar39 = local_39c + 0x20;
    iVar36 = iVar34;
    if (iVar34 < iVar38) {
      iVar36 = iVar38;
    }
    if (iVar38 < iVar34) {
      lVar44 = 0;
      do {
        uVar27 = puVar47[lVar28 + lVar44 + 1];
        if (uVar27 != 0) {
          uVar48 = 0xffffffff;
          uVar46 = (ulonglong)(iVar38 + (int)lVar44 + 1);
          goto LAB_14298e922;
        }
        iVar39 = iVar39 + 0x20;
        lVar44 = lVar44 + 1;
      } while (iVar36 - lVar28 != lVar44);
      uVar48 = 0xffffffff;
      iVar38 = iVar36;
    }
    uVar46 = (ulonglong)(iVar38 + 1);
    param_1 = local_398;
    puVar25 = local_378;
    puVar18 = local_338;
    puVar24 = local_370;
    uVar27 = uVar26;
  }
  else {
LAB_14298e922:
    uVar56 = (ulonglong)(-uVar27 & uVar27);
    uVar43 = uVar56 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar43 != 0) {
      for (; uVar43 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar27 = (iVar39 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if ((int)uVar26 <= (int)uVar27) {
      uVar27 = uVar26;
    }
  }
  if (uVar27 == (uint)local_320) goto LAB_14298d03a;
  goto LAB_14298d151;
LAB_14298d812:
  lVar28 = *local_2c0 + (longlong)iVar39 * 0x90;
  if (*(longlong **)(*local_2c0 + (longlong)iVar39 * 0x90) != plVar55) goto code_r0x00014298d827;
  if ((lVar28 != 0) && (puVar33 = (undefined8 *)(lVar28 + 0x10), puVar33 != (undefined8 *)0x0)) {
    iVar39 = (uint)local_3a8;
    if (*(int *)(lVar28 + 0x74) == (uint)local_3a8) {
      puVar40 = puVar33;
      puVar42 = (undefined8 *)local_108;
      for (lVar30 = 0xc; lVar30 != 0; lVar30 = lVar30 + -1) {
        *puVar42 = *puVar40;
        puVar40 = puVar40 + 1;
        puVar42 = puVar42 + 1;
      }
      memmove((void *)((longlong)(int)plVar55[1] * 0x60 + *(longlong *)(*plVar55 + 0x5c0)),puVar33,
              0x60);
      param_1 = local_398;
      if ((*(char *)(lVar28 + 0x70) == '\0') &&
         ((*(byte *)(*(longlong *)(*plVar55 + 0x680) + (longlong)(int)plVar55[1]) & 8) == 0)) {
        FUN_140a3609c(local_2b8,&local_258,&local_1f8,0);
        plVar55 = local_1f8;
      }
      pbVar23 = (byte *)(*(longlong *)(*plVar55 + 0x680) + (longlong)(int)plVar55[1]);
      *pbVar23 = *pbVar23 | 8;
      lVar28 = **(longlong **)(lVar44 + 8);
      lVar20 = (longlong)(int)(*(longlong **)(lVar44 + 8))[1];
      lVar30 = *(longlong *)(lVar28 + 0x28);
      lVar28 = *(longlong *)(lVar28 + 0x48);
      lVar21 = lVar20 * 0x10;
      dVar6 = (double)*(float *)(lVar28 + 0xc + lVar21);
      dVar58 = (double)*(float *)(lVar28 + 4 + lVar21);
      local_168._8_4_ = SUB84(dVar58,0);
      local_168._0_8_ = (double)*(float *)(lVar28 + lVar21);
      local_168._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
      local_158._8_4_ = SUB84(dVar6,0);
      local_158._0_8_ = (double)*(float *)(lVar28 + 8 + lVar21);
      local_158._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      puVar33 = (undefined8 *)(lVar30 + lVar20 * 0x18);
      local_148 = (uint *)*puVar33;
      uStack_140 = *(uint *)(puVar33 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar33 + 0xc);
      uVar22 = *(undefined8 *)(lVar30 + 0x10 + lVar20 * 0x18);
      uStack_138 = (undefined4)uVar22;
      iStack_134 = (int)((ulonglong)uVar22 >> 0x20);
      uStack_130 = 0;
      local_128 = 0x3ff0000000000000;
      uStack_120 = 0x3ff0000000000000;
      local_118 = 0x3ff0000000000000;
      uStack_110 = 0;
      FUN_1447dc19e(local_108,&local_258,local_168);
      lVar30 = local_1f8[1];
      lVar28 = *(longlong *)(*local_1f8 + 0x28);
      puVar33 = (undefined8 *)(lVar28 + (longlong)(int)lVar30 * 0x18);
      *puVar33 = local_238;
      puVar33[1] = uStack_230;
      *(undefined8 *)(lVar28 + 0x10 + (longlong)(int)lVar30 * 0x18) = local_228;
      lVar30 = local_1f8[1];
      lVar28 = *(longlong *)(*local_1f8 + 0x530);
      puVar33 = (undefined8 *)(lVar28 + (longlong)(int)lVar30 * 0x18);
      *puVar33 = local_238;
      puVar33[1] = uStack_230;
      *(undefined8 *)(lVar28 + 0x10 + (longlong)(int)lVar30 * 0x18) = local_228;
      lVar28 = *(longlong *)(*local_1f8 + 0x48);
      lVar30 = (longlong)(int)local_1f8[1] * 0x10;
      *(float *)(lVar28 + lVar30) = (float)(double)local_258;
      *(float *)(lVar28 + 4 + lVar30) = (float)(double)local_250;
      *(float *)(lVar28 + 8 + lVar30) = (float)dStack_248;
      *(float *)(lVar28 + 0xc + lVar30) = (float)(double)CONCAT44(uStack_23c,local_240);
      lVar28 = *(longlong *)(*local_1f8 + 0x548);
      lVar30 = (longlong)(int)local_1f8[1] * 0x10;
      *(float *)(lVar28 + lVar30) = (float)(double)local_258;
      *(float *)(lVar28 + 4 + lVar30) = (float)(double)local_250;
      *(float *)(lVar28 + 8 + lVar30) = (float)dStack_248;
      *(float *)(lVar28 + 0xc + lVar30) = (float)(double)CONCAT44(uStack_23c,local_240);
      FUN_1456cc230(*(undefined8 *)(param_1[1] + 0x2c8),local_1f8,1);
      iVar39 = *(int *)(lVar44 + 0x110);
      *(uint *)(lVar44 + 0x110) = iVar39 + 1U;
      if (*(uint *)(lVar44 + 0x114) < iVar39 + 1U) {
        FUN_146ce9b06(local_388,iVar39);
      }
      lVar28 = *(longlong *)(lVar44 + 0x108);
      *(longlong **)(lVar28 + (longlong)iVar39 * 0x10) = plVar37;
      *(undefined1 *)(lVar28 + 8 + (longlong)iVar39 * 0x10) = 1;
      iVar39 = *(int *)(lVar44 + 0x110);
      *(uint *)(lVar44 + 0x110) = iVar39 + 1U;
      if (*(uint *)(lVar44 + 0x114) < iVar39 + 1U) {
        FUN_146ce9b06(local_388,iVar39);
      }
      lVar28 = *local_388;
      *(longlong **)(lVar28 + (longlong)iVar39 * 0x10) = plVar37;
      *(undefined1 *)(lVar28 + 8 + (longlong)iVar39 * 0x10) = 0;
      local_168._0_8_ = plVar37;
      local_1a8[0] = (code *)CONCAT71(local_1a8[0]._1_7_,2);
      uVar22 = FUN_146ce5fc4(local_380,2,local_1a8);
      FUN_146ce652e(uVar22,local_168);
      bVar57 = true;
      goto LAB_14298db77;
    }
    goto LAB_14298db8c;
  }
  goto LAB_14298db77;
code_r0x00014298d827:
  iVar39 = *(int *)(lVar28 + 0x80);
  if (iVar39 == -1) goto LAB_14298db77;
  goto LAB_14298d812;
}



// FUNCTION 14298e9e8 FUN_14298e9e8 body=949 status=ok
// SIG undefined FUN_14298e9e8(void)

void FUN_14298e9e8(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (*(int *)(param_1 + 0x1a8) == *(int *)(param_1 + 0x1d4)) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1c8);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar12 = 0;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x1c0);
    if (*(uint **)(param_1 + 0x1c0) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x1b0);
    }
    uVar7 = *puVar5;
    if (uVar7 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar6 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar6 = uVar12;
      }
      iVar11 = 0;
      do {
        if (uVar6 == uVar12) goto LAB_14298eab9;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar5[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar12 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar7 & uVar7);
    uVar6 = uVar14 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar10) {
      iVar10 = iVar2;
    }
  }
  if (iVar10 != iVar2) {
    uVar7 = 0xffffffff;
    iVar13 = iVar2;
    do {
      lVar15 = *(longlong *)(param_1 + 0x1a0);
      lVar16 = FUN_1401961f6(param_1,*(undefined4 *)(lVar15 + (longlong)iVar10 * 0x10));
      if (lVar16 != 0) {
        FUN_14298ee18(param_1,lVar16,*(undefined4 *)(lVar15 + (longlong)iVar10 * 0x10 + 4));
        iVar13 = *(int *)(param_1 + 0x1c8);
      }
      uVar7 = uVar7 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x1c0);
      if (*(uint **)(param_1 + 0x1c0) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x1b0);
      }
      iVar10 = (int)uVar12;
      lVar15 = (longlong)iVar10;
      uVar8 = puVar5[lVar15] & uVar7;
      if (uVar8 == 0) {
        iVar9 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar9 = iVar13 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar4 = iVar9;
        if (iVar9 < iVar10) {
          iVar4 = iVar10;
        }
        if (iVar10 < iVar9) {
          lVar16 = 0;
          do {
            uVar8 = puVar5[lVar15 + lVar16 + 1];
            if (uVar8 != 0) {
              uVar12 = (ulonglong)(iVar10 + (int)lVar16 + 1);
              uVar7 = 0xffffffff;
              goto LAB_14298ec49;
            }
            iVar11 = iVar11 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar4 - lVar15 != lVar16);
          uVar7 = 0xffffffff;
          iVar10 = iVar4;
        }
        uVar12 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar13;
      }
      else {
LAB_14298ec49:
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar6 = uVar14 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar10 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar10) {
          iVar10 = iVar13;
        }
      }
    } while (iVar10 != iVar2);
  }
LAB_14298eab9:
  iVar2 = *(int *)(param_1 + 0x128);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar12 = 0;
    iVar11 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x120);
    if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x110);
    }
    uVar7 = *puVar5;
    if (uVar7 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar6 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar6 = uVar12;
      }
      iVar11 = 0;
      do {
        if (uVar6 == uVar12) goto LAB_14298eb6a;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar5[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar12 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar7 & uVar7);
    uVar6 = uVar14 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar10) {
      iVar10 = iVar2;
    }
  }
  if (iVar10 != iVar2) {
    uVar7 = 0xffffffff;
    iVar13 = iVar2;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x100) + (longlong)iVar10 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        pbVar1 = (byte *)(*(longlong *)(*plVar3 + 0x680) + (longlong)(int)plVar3[1]);
        *pbVar1 = *pbVar1 & 0xf7;
        iVar13 = *(int *)(param_1 + 0x128);
      }
      uVar7 = uVar7 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x120);
      if (*(uint **)(param_1 + 0x120) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x110);
      }
      iVar10 = (int)uVar12;
      lVar15 = (longlong)iVar10;
      uVar8 = puVar5[lVar15] & uVar7;
      if (uVar8 == 0) {
        iVar9 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar9 = iVar13 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar4 = iVar9;
        if (iVar9 < iVar10) {
          iVar4 = iVar10;
        }
        if (iVar10 < iVar9) {
          lVar16 = 0;
          do {
            uVar8 = puVar5[lVar15 + lVar16 + 1];
            if (uVar8 != 0) {
              uVar12 = (ulonglong)(iVar10 + (int)lVar16 + 1);
              uVar7 = 0xffffffff;
              goto LAB_14298ed3f;
            }
            iVar11 = iVar11 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar4 - lVar15 != lVar16);
          uVar7 = 0xffffffff;
          lVar15 = (longlong)iVar4;
        }
        uVar12 = lVar15 + 1U & 0xffffffff;
        iVar10 = iVar13;
      }
      else {
LAB_14298ed3f:
        uVar14 = (ulonglong)(-uVar8 & uVar8);
        uVar6 = uVar14 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar10 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar10) {
          iVar10 = iVar13;
        }
      }
    } while (iVar10 != iVar2);
  }
LAB_14298eb6a:
  FUN_146cb8196();
  FUN_146cea0c6(param_1 + 0x1a0);
  return;
}



// FUNCTION 14298ed9e FUN_14298ed9e body=121 status=ok
// SIG undefined FUN_14298ed9e(void)

longlong FUN_14298ed9e(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x158) != *(int *)(param_1 + 0x184)) {
    lVar2 = param_1 + 0x188;
    if (*(longlong *)(param_1 + 400) != 0) {
      lVar2 = *(longlong *)(param_1 + 400);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x198) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x150) + (longlong)iVar3 * 0x170;
        if (*(uint *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar3 * 0x170) == param_2) break;
        iVar3 = *(int *)(lVar2 + 0x168);
        lVar2 = 0;
      } while (iVar3 != -1);
      goto LAB_14298edae;
    }
  }
  lVar2 = 0;
LAB_14298edae:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 14298ee18 FUN_14298ee18 body=4284 status=ok
// SIG undefined FUN_14298ee18(void)

void FUN_14298ee18(longlong *param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  double *pdVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  char cVar19;
  uint uVar20;
  int iVar21;
  undefined4 uVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 *puVar28;
  int iVar29;
  ulonglong uVar30;
  longlong *plVar31;
  uint uVar32;
  longlong *plVar33;
  bool bVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  longlong lVar38;
  uint uVar39;
  longlong *plVar40;
  longlong lVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined1 auStack_298 [36];
  uint local_274;
  longlong local_270;
  longlong *local_268;
  longlong *local_260;
  longlong local_258;
  longlong *local_250;
  ulonglong local_248;
  int local_240;
  undefined4 local_23c;
  longlong *local_238;
  longlong *local_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [48];
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  longlong local_128;
  undefined4 local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  bVar4 = *(byte *)(param_2 + 0x1f);
  local_148 = 0;
  local_140 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_13c = 0xffffffff00000080;
  local_134 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118._0_12_ = *(undefined1 (*) [12])(param_2 + 2);
  FUN_1405039ea(&local_168);
  FUN_1429c14eb(*param_2,&local_168);
  if (((param_3 & 1) != 0) && ((bVar4 & 1) != 0)) {
    FUN_14172a7c0(local_118,*param_2,1);
    *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) & 0xfe;
  }
  if ((param_3 & 8) != 0) {
    if ((*(byte *)(param_2 + 0x1f) & 2) == 0) {
      FUN_140a357a8(*param_2,*param_1 + 200,param_1[1]);
    }
    else {
      plVar25 = (longlong *)*param_2;
      lVar24 = *(longlong *)(*plVar25 + 0x680);
      if ((*(byte *)(lVar24 + (int)plVar25[1]) & 2) == 0) {
        FUN_1400d2fee(param_1[1],plVar25,
                      (*(char *)(*(longlong *)(*plVar25 + 0x2c0) + 0xb +
                                (longlong)(int)plVar25[1] * 0x10) != '\x01') * '\x03' + '\x01');
        plVar25 = (longlong *)*param_2;
        if ((plVar25 != (longlong *)0x0) && (*(byte *)((longlong)plVar25 + 0xc) != 0)) {
          if ((*(byte *)((longlong)plVar25 + 0xc) < 2) ||
             (*(char *)(*(longlong *)(*plVar25 + 0x2c0) + 0xb + (longlong)(int)plVar25[1] * 0x10) ==
              '\x02')) {
            lVar24 = *(longlong *)(*plVar25 + 0x2a8);
            lVar36 = (longlong)(int)plVar25[1] * 0x40;
            *(undefined8 *)(lVar24 + lVar36) = 0;
            ((undefined8 *)(lVar24 + lVar36))[1] = 0;
            *(undefined8 *)(lVar24 + 0x10 + lVar36) = 0;
            puVar2 = (undefined4 *)(lVar24 + 0x20 + lVar36);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            puVar2[3] = 0x3f800000;
            *(undefined4 *)(lVar24 + 0x30 + lVar36) = 0;
          }
        }
      }
      else {
        FUN_1400d2fee(param_1[1],plVar25,CONCAT71((int7)((ulonglong)lVar24 >> 8),2));
      }
    }
  }
  plVar25 = (longlong *)param_1[1];
  lVar24 = *param_2;
  FUN_1400d25b0(plVar25 + 0x20,lVar24);
  (**(code **)(*plVar25 + 0x18))(plVar25,lVar24);
  if ((param_3 & 0x10) == 0) {
    if ((param_3 & 0x20) != 0) {
      cVar19 = *(char *)(param_2[1] + 0x1c);
      if (cVar19 == '\x0f') {
        local_f8 = 0.0;
        uStack_f0 = 0;
        local_118 = ZEXT816(0);
        uStack_ec = 0x80;
        uStack_e8 = 0xffffffff;
        uStack_e4 = 0;
        local_d8 = 0.0;
        dStack_d0 = (double)((ulonglong)dStack_d0 & 0xffffffff00000000);
        local_228._0_12_ = *(undefined1 (*) [12])(param_2 + 2);
        FUN_1405039ea(local_118);
        FUN_14298fed6(param_1,param_2,local_118);
        dStack_d0 = (double)((ulonglong)dStack_d0 & 0xffffffff00000000);
        if (local_d8 != 0.0) {
          FUN_1400020a8();
        }
        FUN_140a356f6(local_118);
      }
      else {
        lVar24 = param_2[1];
        if (cVar19 != '\x05') {
          lVar24 = 0;
        }
        plVar23 = (longlong *)FUN_146cb7c84(param_2,0);
        lVar36 = FUN_146cb7c84(param_2,1);
        plVar25 = (longlong *)FUN_146cb7c84(param_2,2);
        if ((((int)plVar23[1] != 0) || (*(int *)(lVar36 + 8) != 0)) || ((int)plVar25[1] != 0)) {
          plVar33 = (longlong *)param_1[1];
          lVar41 = *param_2;
          local_258 = lVar36;
          FUN_1400d25b0(plVar33 + 0x20,lVar41);
          (**(code **)(*plVar33 + 0x18))(plVar33,lVar41);
          if ((*(byte *)(lVar24 + 0x6c) & 1) != 0) {
            *(byte *)(lVar24 + 0x6c) = *(byte *)(lVar24 + 0x6c) & 0xfe;
            FUN_1401183f6(lVar24);
            FUN_14011842e(lVar24);
          }
          plVar33 = (longlong *)*param_2;
          lVar38 = (longlong)(int)plVar33[1];
          lVar36 = *(longlong *)(*plVar33 + 0x28);
          lVar41 = *(longlong *)(*plVar33 + 0x48);
          lVar27 = lVar38 * 0x10;
          dVar10 = (double)*(float *)(lVar41 + 0xc + lVar27);
          dVar15 = (double)*(float *)(lVar41 + 4 + lVar27);
          local_228._8_4_ = SUB84(dVar15,0);
          local_228._0_8_ = (double)*(float *)(lVar41 + lVar27);
          local_228._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
          local_218._8_4_ = SUB84(dVar10,0);
          local_218._0_8_ = (double)*(float *)(lVar41 + 8 + lVar27);
          local_218._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          puVar2 = (undefined4 *)(lVar36 + lVar38 * 0x18);
          local_208 = *puVar2;
          uStack_204 = puVar2[1];
          uStack_200 = puVar2[2];
          uStack_1fc = puVar2[3];
          local_1f8 = *(undefined8 *)(lVar36 + 0x10 + lVar38 * 0x18);
          uStack_1f0 = 0;
          local_1e8 = 0x3ff0000000000000;
          uStack_1e0 = 0x3ff0000000000000;
          local_1d8 = 0x3ff0000000000000;
          uStack_1d0 = 0;
          if ((int)plVar23[1] != 0) {
            local_270 = lVar24;
            if (plVar33 != (longlong *)0x0) {
              lVar24 = *(longlong *)(*(longlong *)(*plVar33 + 0x60) + (longlong)(int)plVar33[1] * 8)
              ;
              local_240 = 0;
              if ((lVar24 != 0) &&
                 ((*(char *)(lVar24 + 0x1c) == '\x0f' || (*(char *)(lVar24 + 0x1c) == '\x05')))) {
                local_240 = *(int *)(lVar24 + 0x28);
              }
              local_248 = CONCAT44(local_248._4_4_,(int)param_2[0x1d]);
              local_23c = *(undefined4 *)((longlong)param_2 + 0xec);
              local_198 = 0;
              uStack_190 = 0;
              iVar29 = (int)plVar23[1];
              if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar29);
              }
              iVar21 = 0;
              if (iVar29 != 0) {
                FUN_140836c88(&local_198);
                iVar21 = (int)plVar23[1];
              }
              iVar29 = (int)param_2[5] + iVar21;
              local_274 = param_3;
              local_260 = param_1;
              local_230 = plVar25;
              if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar29);
              }
              local_268 = param_2 + 4;
              local_238 = plVar33;
              if (*(int *)((longlong)param_2 + 0x2c) < iVar29) {
                FUN_14043d0a6(local_268);
                iVar21 = (int)plVar23[1];
              }
              if (iVar21 != 0) {
                lVar24 = *plVar23;
                lVar36 = 0;
                local_250 = plVar23;
                do {
                  plVar25 = *(longlong **)(lVar24 + lVar36);
                  FUN_14298c02d(local_118,plVar25,local_228);
                  if (*(longlong *)(*(longlong *)(*plVar25 + 0x60) + (longlong)(int)plVar25[1] * 8)
                      != 0) {
                    iVar29 = (int)param_2[5];
                    *(uint *)(param_2 + 5) = iVar29 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x2c) < iVar29 + 1U) {
                      FUN_1406b7a4a(local_268,iVar29);
                    }
                    *(longlong **)(*local_268 + (longlong)iVar29 * 8) = plVar25;
                    lVar41 = FUN_146cb7e7a(plVar25,local_118);
                    uVar30 = uStack_190;
                    if (lVar41 != 0) {
                      LOCK();
                      *(int *)(lVar41 + 8) = *(int *)(lVar41 + 8) + 1;
                      UNLOCK();
                    }
                    lVar38 = (longlong)(int)uStack_190;
                    uVar20 = (int)uStack_190 + 1;
                    uStack_190 = CONCAT44(uStack_190._4_4_,uVar20);
                    if (uStack_190._4_4_ < uVar20) {
                      FUN_140619960(&local_198,uVar30 & 0xffffffff);
                    }
                    *(longlong *)(local_198 + lVar38 * 8) = lVar41;
                    plVar23 = local_250;
                  }
                  lVar36 = lVar36 + 8;
                } while ((longlong)iVar21 * 8 != lVar36);
              }
              uVar30 = 0;
              if ((int)uStack_190 != 0) {
                FUN_146dd9aa2(*param_2,&local_198);
                uVar30 = uStack_190 & 0xffffffff;
              }
              FUN_144756766(local_198,uVar30);
              plVar25 = local_230;
              param_1 = local_260;
              param_3 = local_274;
              if (local_198 != 0) {
                FUN_1400020a8();
              }
              iVar29 = (int)plVar23[1];
              if (0 < iVar29) {
                lVar24 = (longlong)(int)local_238[1] * 0x18 + *(longlong *)(*local_238 + 0xf8);
                lVar36 = (longlong)local_240 << 3;
                lVar41 = 0;
                do {
                  plVar33 = *(longlong **)(*plVar23 + lVar41 * 8);
                  if (plVar33 != (longlong *)0x0) {
                    plVar33 = (longlong *)
                              (*(longlong *)(*plVar33 + 0xf8) + (longlong)(int)plVar33[1] * 0x18);
                    plVar31 = (longlong *)plVar33[1];
                    if (plVar31 == (longlong *)0x0) {
                      plVar31 = plVar33;
                    }
                    if (*plVar31 != 0) {
                      lVar38 = *(longlong *)(lVar24 + 8);
                      if (lVar38 == 0) {
                        lVar38 = lVar24;
                      }
                      if (*(longlong *)(lVar38 + lVar36) != 0) {
                        FUN_146cb844b(lVar38 + lVar36,plVar31,local_248 & 0xffffffff,local_23c);
                        iVar29 = (int)plVar23[1];
                      }
                    }
                  }
                  lVar41 = lVar41 + 1;
                  lVar36 = lVar36 + 8;
                } while (lVar41 < iVar29);
              }
            }
            *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 0x10;
            FUN_146ce6720(param_2 + 0x22,0);
            lVar24 = local_270;
          }
          if (*(int *)(local_258 + 8) == 0) {
            cVar19 = *(char *)(param_2[1] + 0x1c);
          }
          else {
            FUN_146cb81d9(*param_2,local_258,param_2 + 4);
            puVar6 = (undefined8 *)param_2[1];
            puVar7 = *(undefined8 **)
                      (*(longlong *)(*(longlong *)*param_2 + 0x60) +
                      (longlong)(int)((longlong *)*param_2)[1] * 8);
            if (puVar6 != puVar7) {
              param_2[1] = (longlong)puVar7;
              if (puVar7 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar7 + 1) = *(int *)(puVar7 + 1) + 1;
                UNLOCK();
              }
              if (puVar6 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar6 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
                  (**(code **)*puVar6)(puVar6,1);
                }
              }
            }
            *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 0x10;
            FUN_146ce6720(param_2 + 0x22,1);
            lVar36 = param_2[1];
            cVar19 = *(char *)(lVar36 + 0x1c);
            lVar24 = 0;
            if (cVar19 == '\x0f') {
              lVar24 = lVar36;
            }
            if (cVar19 == '\x05') {
              lVar24 = lVar36;
            }
          }
          if ((longlong)(int)plVar25[1] != 0 && cVar19 != '\x0f') {
            lVar36 = (longlong)(int)((longlong *)*param_2)[1] * 0x18 +
                     *(longlong *)(*(longlong *)*param_2 + 0xf8);
            plVar23 = (longlong *)*plVar25;
            plVar25 = plVar23 + (int)plVar25[1];
            bVar34 = false;
            local_274 = param_3;
            local_270 = lVar24;
            local_260 = param_1;
            do {
              plVar33 = (longlong *)*plVar23;
              if ((plVar33 != (longlong *)0x0) && ((longlong)(int)param_2[3] != 0)) {
                lVar24 = (longlong)(int)param_2[3] << 3;
                lVar41 = 0;
LAB_14298f934:
                if (*(longlong **)(param_2[2] + lVar41 * 8) != plVar33) goto code_r0x00014298f93a;
                uVar20 = (uint)lVar41;
                if ((-1 < (int)uVar20) && ((int)uVar20 < *(int *)(lVar36 + 0x10))) {
                  plVar31 = (longlong *)
                            (*(longlong *)(*plVar33 + 0xf8) + (longlong)(int)plVar33[1] * 0x18);
                  plVar40 = (longlong *)plVar31[1];
                  if (plVar40 == (longlong *)0x0) {
                    plVar40 = plVar31;
                  }
                  if (*plVar40 != 0) {
                    lVar24 = *(longlong *)(lVar36 + 8);
                    lVar41 = lVar24;
                    if (lVar24 == 0) {
                      lVar41 = lVar36;
                    }
                    lVar41 = *(longlong *)
                              (*(longlong *)(lVar41 + (ulonglong)(uVar20 & 0x7fffffff) * 8) + 0x10);
                    if ((lVar41 == 0) || (*(char *)(lVar41 + 0x1c) != '\x04')) goto LAB_14298fb92;
                    puVar28 = local_118;
                    uVar22 = FUN_14298c02d(puVar28,plVar33,local_228);
                    lVar24 = -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS(*(double *)(lVar41 + 0x58) - (double)CONCAT44(uStack_ec,uStack_f0)
                                 ));
                    auVar12._8_4_ = (int)lVar24;
                    auVar12._0_8_ =
                         -(ulonglong)
                          (9.999999747378752e-05 < ABS(*(double *)(lVar41 + 0x50) - local_f8));
                    auVar12._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                    iVar29 = movmskpd(uVar22,auVar12);
                    lVar24 = -(ulonglong)
                              (9.999999747378752e-05 < ABS(*(double *)(lVar41 + 0x68) - dStack_e0));
                    auVar8._8_4_ = (int)lVar24;
                    auVar8._0_8_ = -(ulonglong)
                                    (9.999999747378752e-05 <
                                    ABS(*(double *)(lVar41 + 0x60) -
                                        (double)CONCAT44(uStack_e4,uStack_e8)));
                    auVar8._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                    uVar26 = movmskpd((int)puVar28,auVar8);
                    if ((uVar26 & 0x3fffffff) == 0 && iVar29 == 0) {
                      lVar24 = -(ulonglong)
                                (9.999999747378752e-05 <
                                ABS(*(double *)(lVar41 + 0x38) - (double)local_118._8_8_));
                      auVar18._8_4_ = (int)lVar24;
                      auVar18._0_8_ =
                           -(ulonglong)
                            (9.999999747378752e-05 <
                            ABS(*(double *)(lVar41 + 0x30) - (double)local_118._0_8_));
                      auVar18._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                      uVar26 = movmskpd(iVar29,auVar18);
                      auVar16._8_8_ =
                           -(ulonglong)
                            (9.999999747378752e-05 <
                            ABS(*(double *)(lVar41 + 0x48) - (double)local_108._8_8_));
                      auVar16._0_8_ =
                           -(ulonglong)
                            (9.999999747378752e-05 <
                            ABS(*(double *)(lVar41 + 0x40) - (double)local_108._0_8_));
                      iVar29 = movmskpd(0,auVar16);
                      uVar32 = iVar29 << 2 | uVar26;
                      if (uVar32 != 0) {
                        lVar24 = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS(*(double *)(lVar41 + 0x38) + (double)local_118._8_8_));
                        auVar13._8_4_ = (int)lVar24;
                        auVar13._0_8_ =
                             -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS(*(double *)(lVar41 + 0x30) + (double)local_118._0_8_));
                        auVar13._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                        uVar26 = movmskpd(uVar26,auVar13);
                        lVar24 = -(ulonglong)
                                  (9.999999747378752e-05 <
                                  ABS(*(double *)(lVar41 + 0x48) + (double)local_108._8_8_));
                        auVar11._8_4_ = (int)lVar24;
                        auVar11._0_8_ =
                             -(ulonglong)
                              (9.999999747378752e-05 <
                              ABS(*(double *)(lVar41 + 0x40) + (double)local_108._0_8_));
                        auVar11._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                        uVar32 = movmskpd(uVar32,auVar11);
                        if ((uVar32 & 0x3fffffff) != 0 || uVar26 != 0) goto LAB_14298faf8;
                      }
                      lVar24 = -(ulonglong)
                                (9.999999747378752e-05 < ABS(*(double *)(lVar41 + 0x78) - dStack_d0)
                                );
                      auVar14._8_4_ = (int)lVar24;
                      auVar14._0_8_ =
                           -(ulonglong)
                            (9.999999747378752e-05 < ABS(*(double *)(lVar41 + 0x70) - local_d8));
                      auVar14._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                      iVar29 = movmskpd(uVar26,auVar14);
                      lVar24 = -(ulonglong)
                                (9.999999747378752e-05 < ABS(*(double *)(lVar41 + 0x88) - dStack_c0)
                                );
                      auVar9._8_4_ = (int)lVar24;
                      auVar9._0_8_ = -(ulonglong)
                                      (9.999999747378752e-05 <
                                      ABS(*(double *)(lVar41 + 0x80) - local_c8));
                      auVar9._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
                      uVar26 = movmskpd(0,auVar9);
                      if ((uVar26 & 0x3fffffff) == 0 && iVar29 == 0) goto LAB_14298fb86;
                    }
LAB_14298faf8:
                    local_268 = (longlong *)(lVar41 + 0x30);
                    (**(code **)(**(longlong **)(lVar41 + 0x20) + 0x80))
                              (*(longlong **)(lVar41 + 0x20),local_1c8);
                    FUN_1400c6592(local_1c8,&local_198,local_118);
                    *(undefined8 *)(lVar41 + 0xa0) = local_188;
                    *(longlong *)(lVar41 + 0x90) = local_198;
                    *(ulonglong *)(lVar41 + 0x98) = uStack_190;
                    *(undefined4 *)(lVar41 + 0xa8) = local_180;
                    *(undefined4 *)(lVar41 + 0xac) = uStack_17c;
                    *(undefined4 *)(lVar41 + 0xb0) = uStack_178;
                    *(undefined4 *)(lVar41 + 0xb4) = uStack_174;
                    *(undefined8 *)(lVar41 + 0xb8) = local_170;
                    plVar33 = (longlong *)local_118;
                    plVar31 = local_268;
                    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                      *plVar31 = *plVar33;
                      plVar33 = plVar33 + 1;
                      plVar31 = plVar31 + 1;
                    }
                    bVar34 = true;
LAB_14298fb86:
                    lVar24 = *(longlong *)(lVar36 + 8);
LAB_14298fb92:
                    if (lVar24 == 0) {
                      lVar24 = lVar36;
                    }
                    FUN_146cb844b(lVar24 + (ulonglong)(uVar20 & 0x7fffffff) * 8,plVar40,
                                  (int)param_2[0x1d],*(undefined4 *)((longlong)param_2 + 0xec));
                  }
                }
              }
LAB_14298f978:
              plVar23 = plVar23 + 1;
            } while (plVar23 != plVar25);
            *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 0x10;
            FUN_146ce6720(param_2 + 0x22,2);
            param_1 = local_260;
            lVar24 = local_270;
            param_3 = local_274;
            if (bVar34) {
              lVar24 = *(longlong *)*param_2;
              lVar27 = (longlong)(int)((longlong *)*param_2)[1];
              lVar36 = *(longlong *)(lVar24 + 0x548);
              lVar41 = lVar27 * 0x10;
              dVar10 = (double)*(float *)(lVar36 + 0xc + lVar41);
              dVar15 = (double)*(float *)(lVar36 + 4 + lVar41);
              lVar38 = lVar27 * 0x18;
              local_118._8_4_ = SUB84(dVar15,0);
              local_118._0_8_ = (double)*(float *)(lVar36 + lVar41);
              local_118._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
              local_108._8_4_ = SUB84(dVar10,0);
              local_108._0_8_ = (double)*(float *)(lVar36 + 8 + lVar41);
              local_108._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
              pdVar3 = (double *)(*(longlong *)(lVar24 + 0x530) + lVar38);
              local_f8 = *pdVar3;
              dVar10 = pdVar3[1];
              uVar5 = *(undefined8 *)(*(longlong *)(lVar24 + 0x530) + 0x10 + lVar38);
              uStack_f0 = SUB84(dVar10,0);
              uStack_ec = (undefined4)((ulonglong)dVar10 >> 0x20);
              uStack_e8 = (undefined4)uVar5;
              uStack_e4 = (undefined4)((ulonglong)uVar5 >> 0x20);
              dStack_e0 = 0.0;
              local_d8 = 1.0;
              dStack_d0 = 1.0;
              local_c8 = 1.0;
              dStack_c0 = 0.0;
              lVar36 = *(longlong *)(lVar24 + 0xf8);
              iVar29 = *(int *)(lVar36 + 0x10 + lVar38);
              lVar41 = *(longlong *)(lVar36 + 8 + lVar38);
              lVar36 = lVar36 + lVar38;
              if (lVar41 != 0) {
                lVar36 = lVar41;
              }
              if ((longlong)iVar29 < 1) {
                uVar22 = 0;
                uVar46 = 0;
                uVar42 = 0;
                uVar43 = 0;
                uVar53 = 0;
                uVar54 = 0;
                uVar51 = 0;
                uVar52 = 0;
                dVar17 = 0.0;
                dVar15 = 0.0;
                dVar10 = 0.0;
                uVar44 = uVar22;
                uVar45 = uVar46;
                if (iVar29 != 0) goto LAB_14298fcae;
              }
              else {
                uVar42 = 0xffffffff;
                uVar43 = 0x7fefffff;
                uVar44 = 0xffffffff;
                uVar45 = 0xffefffff;
LAB_14298fcae:
                lVar41 = 0;
                uVar22 = uVar42;
                uVar46 = uVar43;
                uVar47 = uVar44;
                uVar48 = uVar45;
                uVar49 = uVar44;
                uVar50 = uVar45;
                uVar51 = uVar42;
                uVar52 = uVar43;
                uVar53 = uVar42;
                uVar54 = uVar43;
                do {
                  lVar38 = *(longlong *)(lVar36 + lVar41);
                  if ((*(byte *)(lVar38 + 8) & 3) == 0) {
                    FUN_146e22506(lVar38,local_118);
                  }
                  else {
                    FUN_1447269c8(lVar38,local_118);
                  }
                  lVar38 = *(longlong *)(lVar36 + lVar41);
                  dVar10 = *(double *)(lVar38 + 0x28);
                  if (dVar10 <= (double)CONCAT44(uVar52,uVar51)) {
                    uVar51 = SUB84(dVar10,0);
                    uVar52 = (undefined4)((ulonglong)dVar10 >> 0x20);
                  }
                  dVar10 = *(double *)(lVar38 + 0x20);
                  if (dVar10 <= (double)CONCAT44(uVar54,uVar53)) {
                    uVar53 = SUB84(dVar10,0);
                    uVar54 = (undefined4)((ulonglong)dVar10 >> 0x20);
                  }
                  dVar10 = *(double *)(lVar38 + 0x18);
                  if (dVar10 <= (double)CONCAT44(uVar46,uVar22)) {
                    uVar22 = SUB84(dVar10,0);
                    uVar46 = (undefined4)((ulonglong)dVar10 >> 0x20);
                  }
                  dVar10 = *(double *)(lVar38 + 0x40);
                  if ((double)CONCAT44(uVar45,uVar44) <= dVar10) {
                    uVar44 = SUB84(dVar10,0);
                    uVar45 = (undefined4)((ulonglong)dVar10 >> 0x20);
                  }
                  dVar10 = *(double *)(lVar38 + 0x38);
                  if ((double)CONCAT44(uVar48,uVar47) <= dVar10) {
                    uVar47 = SUB84(dVar10,0);
                    uVar48 = (undefined4)((ulonglong)dVar10 >> 0x20);
                  }
                  dVar10 = *(double *)(lVar38 + 0x30);
                  if ((double)CONCAT44(uVar50,uVar49) <= dVar10) {
                    uVar49 = SUB84(dVar10,0);
                    uVar50 = (undefined4)((ulonglong)dVar10 >> 0x20);
                  }
                  lVar41 = lVar41 + 8;
                } while ((longlong)iVar29 * 8 != lVar41);
                dVar17 = (double)CONCAT44(uVar50,uVar49) + 0.0;
                dVar15 = (double)CONCAT44(uVar48,uVar47) + 0.0;
                dVar10 = (double)CONCAT44(uVar45,uVar44) + 0.0;
              }
              lVar24 = *(longlong *)(lVar24 + 0x140);
              lVar27 = lVar27 * 0x30;
              *(ulonglong *)(lVar24 + lVar27) = CONCAT44(uVar46,uVar22);
              *(ulonglong *)(lVar24 + 8 + lVar27) = CONCAT44(uVar54,uVar53);
              *(ulonglong *)(lVar24 + 0x10 + lVar27) = CONCAT44(uVar52,uVar51);
              *(double *)(lVar24 + 0x18 + lVar27) = dVar17;
              *(double *)(lVar24 + 0x20 + lVar27) = dVar15;
              *(double *)(lVar24 + 0x28 + lVar27) = dVar10;
              lVar24 = local_270;
              param_3 = local_274;
            }
          }
          if ((*(byte *)(lVar24 + 0x6c) & 1) == 0) {
            *(byte *)(lVar24 + 0x6c) = *(byte *)(lVar24 + 0x6c) | 1;
            FUN_1401183f6(lVar24);
            FUN_14011842e(lVar24);
          }
        }
      }
    }
  }
  else {
    FUN_14298fed6(param_1,param_2,&local_168);
  }
  if ((*(byte *)(param_2 + 0x1f) & 8) != 0) {
    if ((param_3 & 2) == 0) {
      if ((param_3 & 4) != 0) {
        lVar24 = param_2[0x21];
        if ((longlong)(int)lVar24 != 0) {
          lVar36 = param_2[0x20];
          lVar41 = 0;
          do {
            cVar19 = *(char *)(lVar36 + 8 + lVar41);
            if (cVar19 == '\x01') {
              FUN_142990d4e(*param_1,param_2,*(undefined8 *)(lVar36 + lVar41));
            }
            else if (cVar19 == '\0') {
              FUN_142990393(*param_1,param_2,*(undefined8 *)(lVar36 + lVar41));
            }
            lVar41 = lVar41 + 0x10;
          } while ((longlong)(int)lVar24 * 0x10 != lVar41);
        }
        *(undefined4 *)(param_2 + 0x21) = 0;
        iVar29 = *(int *)((longlong)param_2 + 0x10c);
        goto joined_r0x00014298f18e;
      }
    }
    else {
      lVar24 = param_2[3];
      if ((longlong)(int)lVar24 != 0) {
        lVar36 = *param_1;
        lVar41 = param_2[2];
        lVar38 = 0;
        do {
          uVar5 = *(undefined8 *)(lVar41 + lVar38);
          FUN_142990d4e(lVar36,param_2,uVar5);
          FUN_142990393(lVar36,param_2,uVar5);
          lVar38 = lVar38 + 8;
        } while ((longlong)(int)lVar24 * 8 != lVar38);
      }
      *(undefined4 *)(param_2 + 0x21) = 0;
      iVar29 = *(int *)((longlong)param_2 + 0x10c);
joined_r0x00014298f18e:
      if (iVar29 != 0) {
        FUN_146ceac6a(param_2 + 0x20);
      }
    }
    if ((param_3 & 0x40) != 0) {
      FUN_140a37b34(*param_1,local_118,*param_2,0);
      dStack_d0 = (double)((ulonglong)dStack_d0 & 0xffffffff00000000);
      if (local_d8 != 0.0) {
        FUN_1400020a8();
      }
      FUN_140a356f6(local_118);
    }
  }
  FUN_1429c354c(*param_1,*param_2);
  local_120 = 0;
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_140a356f6(&local_168);
  if ((int)param_2[3] == 0) {
    FUN_14016e00e(param_1[1],*param_2);
    goto LAB_14298f4c3;
  }
  plVar25 = (longlong *)*param_2;
  lVar24 = *plVar25;
  iVar29 = (int)plVar25[1];
  lVar36 = (longlong)iVar29 * 0x10;
  if (*(char *)(*(longlong *)(lVar24 + 0x2c0) + 0xd + lVar36) == '\x01') {
    FUN_140a36458(param_1[1],plVar25);
    plVar25 = (longlong *)*param_2;
    lVar24 = *plVar25;
    iVar29 = (int)plVar25[1];
  }
  bVar4 = *(byte *)((longlong)plVar25 + 0xc);
  lVar36 = CONCAT71((int7)((ulonglong)lVar36 >> 8),1 < bVar4);
  if (plVar25 != (longlong *)0x0 && 1 < bVar4) {
    lVar36 = (longlong)iVar29 * 0x10;
    if (*(char *)(*(longlong *)(lVar24 + 0x2c0) + 0xd + lVar36) == '\x01') {
      if (((bVar4 < 3) ||
          (plVar23 = *(longlong **)(*(longlong *)(lVar24 + 0x5a8) + lVar36),
          plVar23 == (longlong *)0x0)) || (*(byte *)((longlong)plVar23 + 0xc) < 3))
      goto LAB_14298f4c3;
      if (((*(byte *)(*(longlong *)(*plVar23 + 0x680) + (longlong)(int)plVar23[1]) & 1) == 0) ||
         (lVar36 = *(longlong *)(lVar24 + 200),
         *(longlong *)(*(longlong *)(*plVar23 + 200) + (longlong)(int)plVar23[1] * 8) !=
         *(longlong *)(lVar36 + (longlong)iVar29 * 8))) goto LAB_14298f4c3;
    }
  }
  if ((*(char *)(*(longlong *)(lVar24 + 0xe0) + (longlong)iVar29) != '\0') || (DAT_14c9978a0 != 0))
  {
    uVar22 = *(undefined4 *)(*(longlong *)(lVar24 + 0x80) + (longlong)iVar29 * 4);
    local_248 = param_1[1];
    plVar23 = (longlong *)
              FUN_1447eab44(param_1[1] + 0x360,uVar22,CONCAT71((int7)((ulonglong)lVar36 >> 8),1));
    *(undefined1 *)(plVar23 + 8) = 2;
    lVar24 = *plVar25;
    lVar36 = (longlong)(int)plVar25[1];
    local_270 = *(longlong *)(*(longlong *)(lVar24 + 0xb0) + lVar36 * 8);
    uVar44 = *(undefined4 *)(*(longlong *)(lVar24 + 0x80) + lVar36 * 4);
    local_250 = (longlong *)CONCAT44(local_250._4_4_,uVar44);
    lVar24 = *(longlong *)(lVar24 + 0xf8) + lVar36 * 0x18;
    lVar36 = *(longlong *)(lVar24 + 8);
    if (*(longlong *)(lVar24 + 8) == 0) {
      lVar36 = lVar24;
    }
    local_268 = (longlong *)CONCAT44(local_268._4_4_,uVar22);
    if ((longlong)*(int *)(lVar24 + 0x10) == 0) {
      uVar35 = 0;
      uVar37 = 0;
      local_274 = 0;
      local_258._0_4_ = 0;
      uVar39 = 0;
      uVar20 = 0;
      uVar26 = 0;
      uVar32 = 0;
    }
    else {
      lVar41 = (longlong)*(int *)(lVar24 + 0x10) * 8;
      lVar24 = 0;
      local_258._0_4_ = 0;
      local_274 = 0;
      uVar37 = 0;
      uVar35 = 0;
      do {
        lVar38 = *(longlong *)(lVar36 + lVar24);
        if ((lVar38 != 0) &&
           ((*(byte *)(lVar38 + 0x71 + (ulonglong)((*(uint *)(lVar38 + 8) & 3) == 0) * 8) & 2) != 0)
           ) {
          uVar30 = (ulonglong)((*(uint *)(lVar38 + 8) & 3) == 0);
          uVar35 = uVar35 | *(uint *)(lVar38 + 0x48 + uVar30 * 8);
          uVar37 = uVar37 | *(uint *)(lVar38 + 0x4c + uVar30 * 8);
          local_274 = local_274 | *(uint *)(lVar38 + 0x50 + uVar30 * 8);
          local_258._0_4_ = (uint)local_258 | *(uint *)(lVar38 + 0x54 + uVar30 * 8);
        }
        lVar24 = lVar24 + 8;
      } while (lVar41 != lVar24);
      lVar24 = 0;
      uVar39 = 0;
      uVar20 = 0;
      uVar26 = 0;
      uVar32 = 0;
      do {
        lVar38 = *(longlong *)(lVar36 + lVar24);
        if ((lVar38 != 0) &&
           ((*(byte *)(lVar38 + 0x71 + (ulonglong)((*(uint *)(lVar38 + 8) & 3) == 0) * 8) & 5) != 0)
           ) {
          uVar30 = (ulonglong)((*(uint *)(lVar38 + 8) & 3) == 0);
          uVar20 = uVar20 | *(uint *)(lVar38 + 0x58 + uVar30 * 8);
          uVar39 = uVar39 | *(uint *)(lVar38 + 0x5c + uVar30 * 8);
          uVar26 = uVar26 | *(uint *)(lVar38 + 0x60 + uVar30 * 8);
          uVar32 = uVar32 | *(uint *)(lVar38 + 100 + uVar30 * 8);
        }
        lVar24 = lVar24 + 8;
      } while (lVar41 != lVar24);
    }
    *plVar23 = local_270;
    plVar23[1] = (longlong)plVar25;
    *(undefined4 *)(plVar23 + 2) = uVar44;
    *(uint *)((longlong)plVar23 + 0x14) = uVar35;
    *(uint *)(plVar23 + 3) = uVar37;
    *(uint *)((longlong)plVar23 + 0x1c) = local_274;
    *(uint *)(plVar23 + 4) = (uint)local_258;
    *(uint *)((longlong)plVar23 + 0x24) = uVar20;
    *(uint *)(plVar23 + 5) = uVar39;
    *(uint *)((longlong)plVar23 + 0x2c) = uVar26;
    *(uint *)(plVar23 + 6) = uVar32;
    *(undefined1 *)((longlong)plVar23 + 0x34) = 1;
    *(undefined2 *)(plVar23 + 7) =
         *(undefined2 *)(*(longlong *)(*plVar25 + 0x170) + (longlong)(int)plVar25[1] * 2);
    local_260 = param_1;
    plVar25 = (longlong *)
              FUN_1447eab44(local_248 + 0x380,uVar22,CONCAT71((int7)((ulonglong)local_270 >> 8),1));
    for (lVar24 = 9; param_1 = local_260, lVar24 != 0; lVar24 = lVar24 + -1) {
      *plVar25 = *plVar23;
      plVar23 = plVar23 + 1;
      plVar25 = plVar25 + 1;
    }
  }
LAB_14298f4c3:
  if ((local_b0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    FUN_1456cc230(*(undefined8 *)(param_1[1] + 0x2c8),*param_2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_298,*param_2);
code_r0x00014298f93a:
  lVar41 = lVar41 + 1;
  lVar24 = lVar24 + -8;
  if (lVar24 == 0) goto LAB_14298f978;
  goto LAB_14298f934;
}



// FUNCTION 14298fed6 FUN_14298fed6 body=1211 status=ok
// SIG undefined FUN_14298fed6(void)

void FUN_14298fed6(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  void *_Src;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  longlong *local_138;
  longlong *local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined1 local_118 [96];
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  double dStack_a0;
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
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar3 = (undefined8 *)*param_2;
  local_a8 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
  local_a8[1] = 0;
  local_a8[2] = 0;
  *(undefined1 *)(local_a8 + 3) = 0;
  *(undefined2 *)((longlong)local_a8 + 0x19) = 0x101;
  *(undefined1 *)((longlong)local_a8 + 0x1d) = 5;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  *(undefined8 *)((longlong)local_a8 + 0x5d) = 0;
  *(undefined8 *)((longlong)local_a8 + 0x65) = 0;
  *local_a8 = &PTR_FUN_149f55fb0;
  local_a8[0x14] = 0;
  *(undefined4 *)(local_a8 + 0x15) = 0;
  local_a8[0xe] = 0;
  local_a8[0xf] = 0;
  local_a8[0x10] = 0;
  local_a8[0x11] = 0;
  *(undefined8 *)((longlong)local_a8 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)local_a8 + 0xb4) = 0;
  local_a8[0x18] = 0;
  *(undefined4 *)(local_a8 + 0x19) = 0;
  *(undefined1 *)((longlong)local_a8 + 0x1c) = 0xf;
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = *(int *)(local_a8 + 1) + 1;
    UNLOCK();
  }
  plVar4 = (longlong *)*puVar3;
  (**(code **)(*plVar4 + 0x10))(plVar4,*(undefined4 *)(puVar3 + 1),&local_a8);
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_a8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)local_a8 + 0xc) == 0)) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  plVar4 = (longlong *)*param_2;
  iVar2 = (int)param_2[3];
  iVar16 = iVar2;
  if ((plVar4 != (longlong *)0x0) && (iVar16 = 0, iVar2 != 0)) {
    lVar11 = *plVar4;
    lVar9 = (longlong)(int)plVar4[1];
    lVar14 = *(longlong *)(*(longlong *)(lVar11 + 0x60) + lVar9 * 8);
    if ((lVar14 == 0) ||
       ((*(char *)(lVar14 + 0x1c) != '\x0f' && (*(char *)(lVar14 + 0x1c) != '\x05')))) {
      lVar14 = 0;
    }
    else {
      lVar14 = (longlong)*(int *)(lVar14 + 0x28);
    }
    local_13c = *(undefined4 *)((longlong)param_2 + 0xec);
    local_140 = (undefined4)param_2[0x1d];
    lVar15 = *(longlong *)(lVar11 + 0x48);
    lVar10 = lVar9 * 0x10;
    dStack_90 = (double)*(float *)(lVar15 + 0xc + lVar10);
    local_98 = (double)*(float *)(lVar15 + 8 + lVar10);
    dStack_a0 = (double)*(float *)(lVar15 + 4 + lVar10);
    local_a8 = (undefined8 *)(double)*(float *)(lVar15 + lVar10);
    puVar3 = (undefined8 *)(*(longlong *)(lVar11 + 0x28) + lVar9 * 0x18);
    local_88 = *puVar3;
    uStack_80 = puVar3[1];
    local_78 = *(undefined8 *)(*(longlong *)(lVar11 + 0x28) + 0x10 + lVar9 * 0x18);
    uStack_70 = 0;
    local_68 = 0x3ff0000000000000;
    uStack_60 = 0x3ff0000000000000;
    local_58 = 0x3ff0000000000000;
    uStack_50 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_130 = plVar4;
    local_128 = param_1;
    local_120 = param_3;
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    FUN_140836c88(&local_b8);
    lVar11 = param_2[3];
    local_138 = param_2;
    if ((longlong)(int)lVar11 != 0) {
      lVar9 = param_2[2];
      lVar15 = 0;
      do {
        plVar4 = *(longlong **)(lVar9 + lVar15);
        FUN_14298c02d(local_118,plVar4,&local_a8);
        if (*(longlong *)(*(longlong *)(*plVar4 + 0x60) + (longlong)(int)plVar4[1] * 8) != 0) {
          lVar10 = FUN_146cb7e7a(plVar4,local_118);
          uVar7 = uStack_b0;
          if (lVar10 != 0) {
            LOCK();
            *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
            UNLOCK();
          }
          lVar13 = (longlong)(int)uStack_b0;
          uVar8 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
          if (uStack_b0._4_4_ < uVar8) {
            FUN_140619960(&local_b8,uVar7 & 0xffffffff);
          }
          *(longlong *)(local_b8 + lVar13 * 8) = lVar10;
        }
        lVar15 = lVar15 + 8;
      } while ((longlong)(int)lVar11 * 8 != lVar15);
    }
    lVar11 = FUN_14001cc68(0x70,0x10);
    FUN_14014f414(lVar11,&local_b8);
    if ((*(byte *)(lVar11 + 0x6c) & 1) == 0) {
      *(byte *)(lVar11 + 0x6c) = *(byte *)(lVar11 + 0x6c) | 1;
      FUN_1401183f6(lVar11);
      FUN_14011842e(lVar11);
    }
    param_2 = local_138;
    if (lVar11 != 0) {
      LOCK();
      *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
      UNLOCK();
    }
    FUN_144756766(local_b8,uStack_b0 & 0xffffffff);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    puVar3 = (undefined8 *)param_2[1];
    param_2[1] = lVar11;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    local_148 = param_2 + 0x11;
    FUN_1429c1c96(*param_2,local_120,*local_128 + 200,param_2 + 1);
    uVar6 = local_13c;
    uVar5 = local_140;
    iVar16 = (int)param_2[3];
    if (0 < iVar16) {
      lVar9 = (longlong)(int)local_130[1] * 0x18 + *(longlong *)(*local_130 + 0xf8);
      lVar14 = lVar14 << 3;
      lVar11 = 0;
      do {
        plVar4 = *(longlong **)(param_2[2] + lVar11 * 8);
        if (plVar4 != (longlong *)0x0) {
          plVar4 = (longlong *)(*(longlong *)(*plVar4 + 0xf8) + (longlong)(int)plVar4[1] * 0x18);
          plVar12 = (longlong *)plVar4[1];
          if (plVar12 == (longlong *)0x0) {
            plVar12 = plVar4;
          }
          if (*plVar12 != 0) {
            lVar15 = *(longlong *)(lVar9 + 8);
            if (lVar15 == 0) {
              lVar15 = lVar9;
            }
            if (*(longlong *)(lVar15 + lVar14) != 0) {
              FUN_146cb844b(lVar15 + lVar14,plVar12,uVar5,uVar6);
              iVar16 = (int)param_2[3];
            }
          }
        }
        lVar11 = lVar11 + 1;
        lVar14 = lVar14 + 8;
      } while (lVar11 < iVar16);
    }
  }
  _Src = (void *)param_2[2];
  *(int *)(param_2 + 5) = iVar16;
  if (*(int *)((longlong)param_2 + 0x2c) == 0 && iVar16 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  }
  else {
    FUN_140509e62(param_2 + 4,iVar16);
    if (iVar16 != 0) {
      memcpy((void *)param_2[4],_Src,(longlong)iVar16 << 3);
    }
  }
  *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) | 0x10;
  FUN_146ce6598(param_2 + 0x22);
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142990393 FUN_142990393 body=549 status=ok
// SIG undefined FUN_142990393(void)

void FUN_142990393(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_208 [32];
  undefined4 *local_1e8;
  undefined4 *local_1e0;
  code **local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  undefined1 *local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  code *local_1a8;
  undefined8 *local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined1 local_168 [96];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8 [12];
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (((int)param_2[3] != 0) &&
     (plVar1 = (longlong *)param_2[1], *(char *)((longlong)plVar1 + 0x1c) == '\x05')) {
    lVar6 = *(longlong *)*param_2;
    lVar4 = (longlong)(int)((longlong *)*param_2)[1];
    lVar2 = *(longlong *)(lVar6 + 0x48);
    lVar5 = lVar4 * 0x10;
    dStack_f0 = (double)*(float *)(lVar2 + 0xc + lVar5);
    lVar6 = *(longlong *)(lVar6 + 0x28);
    local_f8 = (double)*(float *)(lVar2 + 8 + lVar5);
    dStack_100 = (double)*(float *)(lVar2 + 4 + lVar5);
    local_108 = (double)*(float *)(lVar2 + lVar5);
    puVar7 = (undefined8 *)(lVar6 + lVar4 * 0x18);
    local_e8 = *puVar7;
    uStack_e0 = puVar7[1];
    local_d8 = *(undefined8 *)(lVar6 + 0x10 + lVar4 * 0x18);
    uStack_d0 = 0;
    local_c8 = 0x3ff0000000000000;
    uStack_c0 = 0x3ff0000000000000;
    local_b8 = 0x3ff0000000000000;
    uStack_b0 = 0;
    FUN_14298c02d(local_168,param_3);
    plVar3 = *(longlong **)(*(longlong *)(*param_3 + 0x60) + (longlong)(int)param_3[1] * 8);
    (**(code **)(*plVar3 + 0x80))(plVar3,local_a8);
    FUN_1400c6592(local_a8,&local_198,local_168);
    local_198 = local_198 + -5.0;
    local_190 = local_190 + -5.0;
    local_188 = local_188 + -5.0;
    local_180 = local_180 + 5.0;
    local_178 = local_178 + 5.0;
    local_170 = local_170 + 5.0;
    local_1a0 = &local_1d0;
    local_1b0 = 0x4014000000000000;
    local_1d8 = &local_1a8;
    local_1a8 = FUN_1429931fe;
    local_1e0 = &local_44;
    local_44 = 0;
    local_1e8 = &local_48;
    local_48 = 0;
    puVar7 = &DAT_14c846480;
    puVar8 = local_a8;
    for (lVar6 = 0xc; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    local_1d0 = param_1;
    local_1c8 = param_2;
    local_1c0 = local_168;
    local_1b8 = param_3;
    (**(code **)(*plVar1 + 0x128))(plVar1,&local_198,local_a8,0xffffffff);
  }
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429905ba FUN_1429905ba body=1938 status=ok
// SIG undefined FUN_1429905ba(void)

void FUN_1429905ba(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  byte *pbVar16;
  undefined1 auStack_1c8 [32];
  void **local_1a8;
  void *local_1a0;
  longlong local_198;
  longlong *local_190;
  void *local_188;
  undefined4 local_180;
  undefined2 local_17c;
  undefined1 local_17a;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined2 local_140;
  longlong local_138;
  undefined8 uStack_130;
  void *local_128;
  ulonglong uStack_120;
  void *local_118;
  ulonglong uStack_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  int local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((param_3 != (longlong *)0x0) && (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 100))) {
    uVar3 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    lVar4 = *(longlong *)(param_2 + 0x70);
    if (*(longlong *)(param_2 + 0x70) == 0) {
      lVar4 = param_2 + 0x68;
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_2 + 0x78) - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      do {
        plVar15 = (longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar6 * 0x18);
        if ((longlong *)*plVar15 == param_3) {
          pbVar16 = (byte *)(plVar15 + 1);
          if ((pbVar16 != (byte *)0x0 && plVar15 != (longlong *)0x0) && ((*pbVar16 & 2) == 0)) {
            lVar4 = *(longlong *)(*(longlong *)(*param_3 + 200) + (longlong)(int)param_3[1] * 8);
            if ((lVar4 != 0) && (*(int *)(lVar4 + 0x1c) == 2)) {
              FUN_146ee71e6();
            }
            if (2 < *(byte *)((longlong)param_3 + 0xc)) {
              lVar4 = (longlong)(int)param_3[1] * 0x10;
              lVar9 = (longlong)*(int *)(*(longlong *)(*param_3 + 0x668) + 8 + lVar4);
              if (lVar9 == 0) goto LAB_142990d0c;
              plVar15 = *(longlong **)(*(longlong *)(*param_3 + 0x668) + lVar4);
              plVar12 = plVar15 + lVar9 * 2;
              goto LAB_1429906ee;
            }
          }
          break;
        }
        iVar6 = (int)plVar15[2];
      } while (iVar6 != -1);
    }
  }
LAB_142990d10:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1429906ee:
  plVar8 = (longlong *)*plVar15;
  if (plVar8 != (longlong *)0x0) {
    lVar4 = *(longlong *)(*(longlong *)(*plVar8 + 200) + (longlong)(int)plVar8[1] * 8);
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x1c) == 2)) {
      FUN_146ee71e6();
      plVar8 = (longlong *)*plVar15;
      if (plVar8 == (longlong *)0x0) goto LAB_142990cda;
    }
    if (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 100)) {
      lVar4 = *(longlong *)(param_2 + 0x70);
      if (*(longlong *)(param_2 + 0x70) == 0) {
        lVar4 = param_2 + 0x68;
      }
      iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_2 + 0x78) - 1U & uVar3) * 4);
      if (iVar6 != -1) {
        do {
          puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar6 * 0x18);
          if ((longlong *)*puVar1 == param_3) {
            if ((((byte *)(puVar1 + 1) != (byte *)0x0 && puVar1 != (undefined8 *)0x0) &&
                (DAT_14c75f00c == '\x01')) &&
               ((DAT_14c75f00e != '\0' || ((*(byte *)(puVar1 + 1) & 1) == 0)))) {
              plVar10 = (longlong *)0x0;
              if (2 < *(byte *)((longlong)param_3 + 0xc)) {
                plVar10 = param_3;
              }
              lVar4 = *param_1;
              iVar6 = *(int *)(lVar4 + 0xd0);
              iVar5 = *(int *)(lVar4 + 0xfc);
              local_190 = plVar12;
              if (iVar6 == iVar5) goto LAB_1429908d3;
              uVar13 = ((uint)((ulonglong)plVar10 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)plVar10 >> 4)) * -0x7a143595;
              uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
              lVar9 = lVar4 + 0x100;
              if (*(longlong *)(lVar4 + 0x108) != 0) {
                lVar9 = *(longlong *)(lVar4 + 0x108);
              }
              iVar14 = *(int *)(lVar9 + (ulonglong)
                                        (*(int *)(lVar4 + 0x110) - 1U & (uVar13 >> 0x10 ^ uVar13)) *
                                        4);
              if (iVar14 == -1) goto LAB_1429908d3;
              goto LAB_142990844;
            }
            break;
          }
          iVar6 = *(int *)(puVar1 + 2);
        } while (iVar6 != -1);
      }
    }
  }
  goto LAB_142990cda;
  while (iVar14 = *(int *)(lVar9 + 0x18), iVar14 != -1) {
LAB_142990844:
    lVar9 = *(longlong *)(lVar4 + 200) + (longlong)iVar14 * 0x20;
    if (*(longlong **)(*(longlong *)(lVar4 + 200) + (longlong)iVar14 * 0x20) == plVar10) {
      if (lVar9 != 0) {
        local_118 = (void *)0x0;
        uVar13 = *(uint *)(lVar9 + 0x10);
        lVar7 = (longlong)(int)uVar13;
        uStack_110 = CONCAT44(uStack_110._4_4_,uVar13);
        if (lVar7 == 0) {
          uStack_110 = (ulonglong)uVar13;
        }
        else {
          local_1a0 = *(void **)(lVar9 + 8);
          local_198 = lVar7;
          FUN_140509e62(&local_118,lVar7,0);
          memcpy(local_118,local_1a0,local_198 << 3);
          lVar4 = *param_1;
          iVar6 = *(int *)(lVar4 + 0xd0);
          iVar5 = *(int *)(lVar4 + 0xfc);
        }
        goto LAB_1429908db;
      }
      break;
    }
  }
LAB_1429908d3:
  local_118 = (void *)0x0;
  uStack_110 = 0;
LAB_1429908db:
  if (*(byte *)((longlong)plVar8 + 0xc) < 3) {
    plVar8 = (longlong *)0x0;
  }
  if (iVar6 != iVar5) {
    uVar13 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
             -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    lVar9 = lVar4 + 0x100;
    if (*(longlong *)(lVar4 + 0x108) != 0) {
      lVar9 = *(longlong *)(lVar4 + 0x108);
    }
    iVar6 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar4 + 0x110) - 1U & (uVar13 >> 0x10 ^ uVar13)) *
                             4);
    if (iVar6 != -1) {
      do {
        lVar9 = *(longlong *)(lVar4 + 200) + (longlong)iVar6 * 0x20;
        if (*(longlong **)(*(longlong *)(lVar4 + 200) + (longlong)iVar6 * 0x20) == plVar8) {
          if (lVar9 != 0) {
            local_128 = (void *)0x0;
            uVar13 = *(uint *)(lVar9 + 0x10);
            uStack_120 = CONCAT44(uStack_120._4_4_,uVar13);
            if ((longlong)(int)uVar13 == 0) {
              uStack_120 = (ulonglong)uVar13;
            }
            else {
              local_1a0 = *(void **)(lVar9 + 8);
              FUN_140509e62(&local_128,uVar13,0);
              memcpy(local_128,local_1a0,(longlong)(int)uVar13 << 3);
            }
            goto LAB_1429909c9;
          }
          break;
        }
        iVar6 = *(int *)(lVar9 + 0x18);
      } while (iVar6 != -1);
    }
  }
  local_128 = (void *)0x0;
  uStack_120 = 0;
LAB_1429909c9:
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_108 = local_118;
  uStack_100 = CONCAT44(uStack_100._4_4_,(uint)uStack_110);
  FUN_1405039ea(&local_b8,&local_108);
  local_e8 = 0;
  local_e0 = 0;
  local_108 = (void *)0x0;
  uStack_100 = 0;
  local_dc = 0xffffffff00000080;
  local_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_188 = local_128;
  local_180 = (uint)uStack_120;
  FUN_1405039ea(&local_108,&local_188);
  local_138 = 0;
  uStack_130 = 0;
  iVar6 = ((int)uStack_100 - local_d4) + ((int)uStack_b0 - local_84);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_14043d0a6(&local_138);
  }
  uVar2 = uStack_130;
  pvVar11 = (void *)(longlong)(int)(uint)uStack_110;
  if (pvVar11 != (void *)0x0) {
    iVar6 = (int)uStack_130;
    lVar4 = (longlong)(int)uStack_130;
    uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130 + (uint)uStack_110);
    if ((uint)(uStack_130._4_4_ - iVar6) < (uint)uStack_110) {
      local_1a0 = pvVar11;
      FUN_1406b7a4a(&local_138,uVar2 & 0xffffffff);
      pvVar11 = local_1a0;
    }
    memcpy((void *)(lVar4 * 8 + local_138),local_118,(longlong)pvVar11 << 3);
  }
  uVar2 = uStack_130;
  pvVar11 = (void *)(longlong)(int)(uint)uStack_120;
  if (pvVar11 != (void *)0x0) {
    iVar6 = (int)uStack_130;
    lVar4 = (longlong)(int)uStack_130;
    uStack_130 = CONCAT44(uStack_130._4_4_,(int)uStack_130 + (uint)uStack_120);
    if ((uint)(uStack_130._4_4_ - iVar6) < (uint)uStack_120) {
      local_1a0 = pvVar11;
      local_198 = lVar4;
      FUN_1406b7a4a(&local_138,uVar2 & 0xffffffff);
      pvVar11 = local_1a0;
      lVar4 = local_198;
    }
    memcpy((void *)(lVar4 * 8 + local_138),local_128,(longlong)pvVar11 << 3);
  }
  local_148 = DAT_14c846520;
  local_158 = (undefined4)DAT_14c846510;
  uStack_154 = DAT_14c846510._4_4_;
  uStack_150 = (undefined4)DAT_14c846518;
  uStack_14c = DAT_14c846518._4_4_;
  local_188 = (void *)0x3fd3333340000000;
  local_180 = 100;
  local_17c = 0;
  local_17a = 1;
  local_168 = 0;
  uStack_160 = 0;
  local_140 = 0x100;
  local_178 = 4;
  local_170 = 0x3ff0000000000000;
  local_1a8 = &local_108;
  FUN_1409ee63a(*param_1,&local_138,&local_188,&local_b8);
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  local_c0 = 0;
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140a356f6(&local_108);
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140a356f6(&local_b8);
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar12 = local_190;
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
    plVar12 = local_190;
  }
LAB_142990cda:
  plVar15 = plVar15 + 2;
  if (plVar15 == plVar12) goto LAB_142990d0c;
  goto LAB_1429906ee;
LAB_142990d0c:
  *pbVar16 = *pbVar16 | 2;
  goto LAB_142990d10;
}



// FUNCTION 142990d4e FUN_142990d4e body=835 status=ok
// SIG undefined FUN_142990d4e(void)

void FUN_142990d4e(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    uVar13 = 0;
    if (2 < *(byte *)(param_3 + 0xc)) {
      uVar13 = param_3;
    }
    local_49 = 1;
    FUN_1447dc87e(param_1,uVar13);
    if (*(int *)(param_2 + 0x38) != *(int *)(param_2 + 100)) {
      uVar7 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      lVar10 = param_2 + 0x68;
      if (*(longlong *)(param_2 + 0x70) != 0) {
        lVar10 = *(longlong *)(param_2 + 0x70);
      }
      iVar8 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_2 + 0x78) - 1U & (uVar7 >> 0x10 ^ uVar7))
                                * 4);
      if (iVar8 != -1) {
        do {
          puVar1 = (ulonglong *)(*(longlong *)(param_2 + 0x30) + (longlong)iVar8 * 0x18);
          if (*puVar1 == param_3) {
            puVar9 = puVar1 + 1;
            if (puVar9 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
              *(byte *)puVar9 = (byte)*puVar9 & 0xfd;
            }
            break;
          }
          iVar8 = (int)puVar1[2];
        } while (iVar8 != -1);
      }
    }
    if (((DAT_14c75f00c == '\x01') && (2 < *(byte *)(param_3 + 0xc))) &&
       (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc))) {
      uVar7 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      lVar10 = param_1 + 0x100;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        lVar10 = *(longlong *)(param_1 + 0x108);
      }
      iVar8 = *(int *)(lVar10 + (ulonglong)
                                (*(int *)(param_1 + 0x110) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
      if (iVar8 != -1) {
        do {
          lVar10 = *(longlong *)(param_1 + 200) + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar8 * 0x20) == param_3) {
            if (((lVar10 + 8U & 0xfffffffffffffff7) != 0) &&
               ((longlong)*(int *)(lVar10 + 0x10) != 0)) {
              plVar16 = *(longlong **)(lVar10 + 8);
              plVar15 = plVar16 + *(int *)(lVar10 + 0x10);
              local_58 = plVar15;
              do {
                plVar4 = (longlong *)*plVar16;
                if ((plVar4 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar4 + 0xc))) {
                  lVar10 = (longlong)(int)plVar4[1] * 0x10;
                  plVar2 = (longlong *)(*(longlong *)(*plVar4 + 0x668) + lVar10);
                  iVar8 = *(int *)(*(longlong *)(*plVar4 + 0x668) + 8 + lVar10);
                  uVar13 = (longlong)iVar8;
                  if (0 < (longlong)iVar8) {
                    do {
                      lVar10 = (uVar13 - 1) * 0x10;
                      plVar15 = *(longlong **)(*plVar2 + lVar10);
                      cVar6 = FUN_14299128a(plVar4,*plVar2 + lVar10);
                      if (cVar6 != '\0') {
                        uVar7 = *(uint *)(plVar2 + 1);
                        if (uVar13 != uVar7) {
                          iVar8 = uVar7 - (int)uVar13;
                          if (0 < iVar8) {
                            iVar8 = 1;
                          }
                          memmove((void *)(lVar10 + *plVar2),
                                  (void *)((longlong)(int)(uVar7 - iVar8) * 0x10 + *plVar2),
                                  (longlong)iVar8 << 4);
                          uVar7 = *(uint *)(plVar2 + 1);
                        }
                        *(uint *)(plVar2 + 1) = uVar7 - 1;
                        if (*(byte *)((longlong)plVar15 + 0xc) < 3) {
                          plVar15 = (longlong *)0x0;
                        }
                        lVar10 = *(longlong *)(*plVar15 + 0x668);
                        lVar11 = (longlong)(int)plVar15[1] * 0x10;
                        iVar8 = *(int *)(lVar10 + 8 + lVar11);
                        if ((longlong)iVar8 != 0) {
                          lVar3 = lVar10 + lVar11;
                          lVar10 = *(longlong *)(lVar10 + lVar11);
                          iVar12 = 1;
                          lVar14 = 0;
                          lVar11 = 0;
                          do {
                            if (*(longlong **)(lVar10 + lVar14) == plVar4) {
                              if (iVar12 != 0) {
                                iVar12 = iVar8 - iVar12;
                                if (iVar12 != 0) {
                                  if (0 < iVar12) {
                                    iVar12 = 1;
                                  }
                                  memmove((void *)((lVar11 >> 0x20) * 0x10 + lVar10),
                                          (void *)((longlong)(iVar8 - iVar12) * 0x10 + lVar10),
                                          (longlong)iVar12 << 4);
                                  iVar8 = *(int *)(lVar3 + 8);
                                }
                                *(int *)(lVar3 + 8) = iVar8 + -1;
                                FUN_1400c78b2(lVar3);
                              }
                              break;
                            }
                            lVar11 = lVar11 + 0x100000000;
                            iVar12 = iVar12 + 1;
                            lVar14 = lVar14 + 0x10;
                          } while ((longlong)iVar8 << 4 != lVar14);
                        }
                      }
                      bVar5 = 1 < (longlong)uVar13;
                      uVar13 = uVar13 - 1;
                    } while (bVar5);
                    iVar8 = (int)plVar2[1];
                    plVar15 = local_58;
                  }
                  if (*(int *)((longlong)plVar2 + 0xc) != iVar8) {
                    FUN_146ce3842(plVar2,iVar8);
                  }
                }
                plVar16 = plVar16 + 1;
              } while (plVar16 != plVar15);
            }
            break;
          }
          iVar8 = *(int *)(lVar10 + 0x18);
        } while (iVar8 != -1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142991092 FUN_142991092 body=331 status=ok
// SIG undefined FUN_142991092(void)

void FUN_142991092(longlong param_1,undefined4 param_2,longlong *param_3,longlong *param_4,
                  byte param_5)

{
  ulonglong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_3;
  FUN_146cb7fae(param_1,param_1 + 0x10,param_2,3);
  iVar3 = (int)param_3[1];
  iVar6 = (int)param_4[1];
  if (0 < iVar6 && 0 < iVar3) {
    lVar8 = 0;
    lVar11 = 1;
    do {
      uVar1 = *(ulonglong *)(*param_3 + -8 + lVar11 * 8);
      if (uVar1 != 0) {
        local_50 = uVar1;
        if (*(byte *)(uVar1 + 0xc) < 3) {
          local_50 = 0;
        }
        if ((local_50 != 0) &&
           (uVar4 = ((uint)(local_50 >> 0x14) & 0xffff ^ (uint)(local_50 >> 4)) * -0x7a143595,
           uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb,
           puVar5 = (undefined8 *)FUN_146ceaf0e(param_1 + 0xb0,uVar4 >> 0x10 ^ uVar4,&local_50),
           (byte)(*(byte *)(puVar5 + 0xc) ^ 1 | param_5) == 1)) {
          puVar9 = (undefined8 *)(*param_4 + lVar8);
          puVar10 = puVar5;
          for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
          *(byte *)(puVar5 + 0xc) = param_5;
          *(undefined4 *)((longlong)puVar5 + 100) = param_2;
        }
        iVar3 = (int)param_3[1];
        iVar6 = (int)param_4[1];
      }
      if (iVar3 <= lVar11) break;
      lVar8 = lVar8 + 0x60;
      bVar2 = lVar11 < iVar6;
      lVar11 = lVar11 + 1;
    } while (bVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429911de FUN_1429911de body=172 status=ok
// SIG undefined FUN_1429911de(void)

undefined8 FUN_1429911de(longlong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  if ((param_2 != 0) && (lVar2 = *param_1, *(int *)(lVar2 + 0x38) != *(int *)(lVar2 + 100))) {
    uVar4 = ((uint)(uint7)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar5 = lVar2 + 0x68;
    if (*(longlong *)(lVar2 + 0x70) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x70);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0x78) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4)
    ;
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_2) {
          puVar3 = puVar1 + 1;
          if (puVar3 == (ulonglong *)0x0 || puVar1 == (ulonglong *)0x0) {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)puVar3 >> 8),(*puVar3 & 1) == 0);
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 14299128a FUN_14299128a body=110 status=ok
// SIG undefined FUN_14299128a(void)

longlong * FUN_14299128a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_2 = (longlong *)*param_2;
  plVar3 = (longlong *)0x0;
  if (param_2 != (longlong *)0x0) {
    if (*(byte *)((longlong)param_1 + 0xc) < 3) {
      param_1 = plVar3;
    }
    if ((2 < *(byte *)((longlong)param_2 + 0xc)) && (param_1 != (longlong *)0x0)) {
      lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x5a8) + (longlong)(int)param_1[1] * 0x10);
      lVar2 = 0;
      if ((lVar1 != 0) && (2 < *(byte *)(lVar1 + 0xc))) {
        lVar2 = lVar1;
      }
      lVar1 = *(longlong *)(*(longlong *)(*param_2 + 0x5a8) + (longlong)(int)param_2[1] * 0x10);
      lVar4 = 0;
      if ((lVar1 != 0) && (2 < *(byte *)(lVar1 + 0xc))) {
        lVar4 = lVar1;
      }
      plVar3 = (longlong *)CONCAT71((int7)((ulonglong)lVar2 >> 8),lVar2 != lVar4);
    }
  }
  return plVar3;
}



// FUNCTION 1429912f8 FUN_1429912f8 body=76 status=ok
// SIG undefined FUN_1429912f8(void)

longlong * FUN_1429912f8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != (longlong *)0x0) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(*param_2 + 0x5a8) + (longlong)(int)param_2[1] * 0x10);
      if (plVar1 == (longlong *)0x0) {
        if ((longlong *)*param_1 != (longlong *)0x0) {
          param_2 = (longlong *)0x0;
        }
        return param_2;
      }
      plVar2 = plVar1;
      if (*(byte *)((longlong)plVar1 + 0xc) < 3) {
        plVar2 = (longlong *)0x0;
      }
      if (plVar2 == (longlong *)*param_1) {
        return param_2;
      }
      param_2 = plVar1;
    } while (plVar2 != (longlong *)0x0);
  }
  return (longlong *)0x0;
}



// FUNCTION 142991344 FUN_142991344 body=69 status=ok
// SIG undefined FUN_142991344(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142991344(void)

{
  _DAT_14c992b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142991386. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992b50,1);
  return;
}



// FUNCTION 142991389 FUN_142991389 body=69 status=ok
// SIG undefined FUN_142991389(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142991389(void)

{
  _DAT_14c992b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429913cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992b68,1);
  return;
}



// FUNCTION 1429913ce FUN_1429913ce body=30 status=ok
// SIG undefined FUN_1429913ce(void)

void FUN_1429913ce(undefined8 param_1,undefined8 *param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = *param_4;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 8 + (longlong)param_3 * 0xc);
  *param_2 = *(undefined8 *)(lVar1 + (longlong)param_3 * 0xc);
  return;
}



// FUNCTION 1429913ec FUN_1429913ec body=27 status=ok
// SIG undefined FUN_1429913ec(void)

byte FUN_1429913ec(undefined8 param_1,int param_2,longlong *param_3)

{
  return -(*(float *)(*param_3 + (longlong)param_2 * 0xc) != 0.0) & 1;
}



// FUNCTION 142991408 FUN_142991408 body=16 status=ok
// SIG undefined FUN_142991408(void)

int FUN_142991408(undefined8 param_1,int param_2,longlong *param_3)

{
  return (int)*(float *)(*param_3 + (longlong)param_2 * 0xc);
}



// FUNCTION 142991418 FUN_142991418 body=69 status=ok
// SIG undefined FUN_142991418(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142991418(void)

{
  _DAT_14c992ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299145a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992bb0,1);
  return;
}



// FUNCTION 14299145d FUN_14299145d body=69 status=ok
// SIG undefined FUN_14299145d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299145d(void)

{
  _DAT_14c992bb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299149f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992bc0,1);
  return;
}



// FUNCTION 1429914a2 FUN_1429914a2 body=69 status=ok
// SIG undefined FUN_1429914a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429914a2(void)

{
  _DAT_14c992bc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429914e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992bd0,1);
  return;
}



// FUNCTION 1429914e7 FUN_1429914e7 body=69 status=ok
// SIG undefined FUN_1429914e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429914e7(void)

{
  _DAT_14c992bd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142991529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992be0,1);
  return;
}



// FUNCTION 14299152c FUN_14299152c body=69 status=ok
// SIG undefined FUN_14299152c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299152c(void)

{
  _DAT_14c992be8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299156e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992bf0,1);
  return;
}



// FUNCTION 142991572 FUN_142991572 body=383 status=ok
// SIG undefined FUN_142991572(void)

void FUN_142991572(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1405c2e9e(param_2,0);
  }
  local_88 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  FUN_146ce43a0(&local_98,0);
  local_60 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  FUN_146ce440e(&local_70,0);
  lVar7 = FUN_146ce38a2(&local_a8,param_1);
  if (lVar7 != 0) {
    lVar8 = FUN_146ce3fb8(&local_a8,lVar7 + 0x10);
    *(undefined8 *)(lVar8 + 0x28) = 0;
    *(longlong *)(lVar8 + 0x30) = lVar7;
    *(longlong *)(lVar7 + 0x28) = lVar8;
    lVar7 = FUN_146ce40ee(param_1,*(undefined8 *)(lVar8 + 0x30));
    if (lVar7 != 0) {
      do {
        cVar6 = FUN_146ce41b4(&local_a8,param_1,lVar7,param_3);
        if (cVar6 == '\0') goto LAB_1429915fb;
        lVar7 = FUN_146ce40ee(param_1,*(undefined8 *)(lVar8 + 0x30));
      } while (lVar7 != 0);
    }
    for (puVar9 = *(undefined8 **)(lVar8 + 0x30); puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)puVar9[6]) {
      puVar5 = *(undefined4 **)((undefined4 *)*puVar9 + 4);
      uVar1 = **(undefined4 **)(puVar5 + 4);
      uVar2 = *puVar5;
      uVar3 = *(undefined4 *)*puVar9;
      iVar4 = (int)param_2[1];
      lVar7 = (longlong)iVar4;
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_141087970(param_2,iVar4);
      }
      lVar8 = *param_2;
      *(undefined4 *)(lVar8 + lVar7 * 0xc) = uVar3;
      *(undefined4 *)(lVar8 + 4 + lVar7 * 0xc) = uVar2;
      *(undefined4 *)(lVar8 + 8 + lVar7 * 0xc) = uVar1;
    }
  }
LAB_1429915fb:
  FUN_146ce433e(&local_a8);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429916f2 FUN_1429916f2 body=4224 status=ok
// SIG undefined FUN_1429916f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429916f2(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  float *param_5,uint param_6)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong **pplVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_2c8 [32];
  undefined4 local_2a8;
  longlong **local_298;
  uint local_290;
  undefined4 local_28c;
  uint *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  float local_274;
  code *local_270;
  longlong ***local_268;
  undefined1 *local_260;
  longlong ***local_258;
  code *local_250;
  longlong ***local_248;
  undefined1 *local_240;
  longlong ***local_238;
  longlong **local_230;
  longlong **local_228;
  uint **ppuStack_220;
  longlong *local_218;
  longlong *local_210;
  longlong *local_208;
  float *local_200;
  longlong local_1f8;
  uint local_1f0;
  undefined8 local_1e4;
  float local_1dc;
  longlong local_1d8;
  ulonglong uStack_1d0;
  longlong *local_1c8;
  uint local_1bc;
  uint *local_1b8;
  longlong ***ppplStack_1b0;
  undefined1 local_1a8 [16];
  longlong local_198;
  undefined4 local_190;
  uint local_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  longlong local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  int iStack_160;
  int iStack_15c;
  uint uStack_158;
  float local_154;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  int local_140;
  uint local_13c;
  undefined4 uStack_138;
  int local_134;
  undefined4 local_130 [2];
  undefined4 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14004bbe0(param_2,0);
  }
  puVar21 = (ulonglong *)(param_1 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_140163800(param_4,0);
  }
  *param_5 = 3.4028235e+38;
  param_5[1] = 3.4028235e+38;
  param_5[2] = 3.4028235e+38;
  param_5[3] = -3.4028235e+38;
  *(undefined1 **)(param_5 + 4) = &DAT_ff7fffffff7fffff;
  if ((uint)*puVar21 == 0) goto LAB_1429917db;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e4 = 0;
  local_1dc = 0.0;
  local_1c8 = param_1;
  if ((uint)*puVar21 == 3) {
    lVar9 = *param_1;
    cVar6 = FUN_146cb8822(lVar9,lVar9 + 0xc,lVar9 + 0x18,&local_1e4);
    if (cVar6 != '\0') {
      uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
      FUN_140627580(&local_1d8,6,1);
      lVar9 = 0;
      do {
        lVar12 = *param_1;
        *(undefined4 *)(local_1d8 + 8 + lVar9) = *(undefined4 *)(lVar12 + 8 + lVar9);
        *(undefined8 *)(local_1d8 + lVar9) = *(undefined8 *)(lVar12 + lVar9);
        lVar12 = *param_1;
        fVar24 = *(float *)(lVar12 + 8 + lVar9);
        fVar25 = *(float *)(lVar12 + 4 + lVar9);
        *(float *)(local_1d8 + 0x24 + lVar9) = *(float *)(lVar12 + lVar9) + (float)local_1e4 * 0.1;
        *(float *)(local_1d8 + 0x28 + lVar9) = fVar25 + local_1e4._4_4_ * 0.1;
        *(float *)(local_1d8 + 0x2c + lVar9) = fVar24 + local_1dc * 0.1;
        lVar9 = lVar9 + 0xc;
      } while (lVar9 != 0x24);
LAB_142991a6b:
      param_1 = &local_1d8;
      local_1c8 = param_1;
      puVar21 = &uStack_1d0;
      goto LAB_142991a7b;
    }
  }
  else {
    cVar6 = FUN_146cb8916(param_1,&local_1e4);
    if (cVar6 != '\0') {
      uVar7 = (uint)*puVar21;
      bVar23 = (longlong)uStack_1d0 < 0;
      uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
      if (bVar23) {
        FUN_140163800(&local_1d8,0);
      }
      FUN_140627580(&local_1d8,uVar7 * 2);
      if (0 < (int)uVar7) {
        lVar9 = 0;
        do {
          lVar12 = *param_1;
          *(undefined4 *)(local_1d8 + 8 + lVar9) = *(undefined4 *)(lVar12 + 8 + lVar9);
          *(undefined8 *)(local_1d8 + lVar9) = *(undefined8 *)(lVar12 + lVar9);
          lVar12 = *param_1;
          fVar24 = *(float *)(lVar12 + 8 + lVar9);
          fVar25 = *(float *)(lVar12 + 4 + lVar9);
          lVar22 = local_1d8 + (ulonglong)uVar7 * 0xc;
          *(float *)(lVar9 + lVar22) = *(float *)(lVar12 + lVar9) + (float)local_1e4 * 0.1;
          *(float *)(lVar9 + 4 + lVar22) = fVar25 + local_1e4._4_4_ * 0.1;
          *(float *)(lVar9 + 8 + lVar22) = fVar24 + local_1dc * 0.1;
          lVar9 = lVar9 + 0xc;
        } while ((ulonglong)uVar7 * 0xc != lVar9);
      }
      goto LAB_142991a6b;
    }
LAB_142991a7b:
    iVar8 = (int)param_1[1];
    puVar2 = (undefined8 *)*param_1;
    iStack_160 = *(undefined4 *)(puVar2 + 1);
    uVar3 = *puVar2;
    local_168 = (undefined4)uVar3;
    uStack_164 = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar4 = *puVar2;
    iStack_15c = (int)uVar4;
    uStack_158 = (uint)((ulonglong)uVar4 >> 0x20);
    local_154 = *(float *)(puVar2 + 1);
    uVar5 = *puVar2;
    param_5[2] = *(float *)(puVar2 + 1);
    *(undefined8 *)param_5 = uVar5;
    param_5[5] = local_154;
    *(undefined8 *)(param_5 + 3) = uVar4;
    if (0 < (longlong)iVar8) {
      fVar24 = param_5[2];
      fVar25 = *param_5;
      fVar26 = param_5[1];
      fVar28 = param_5[5];
      fVar30 = param_5[4];
      fVar31 = param_5[3];
      lVar9 = 0;
      do {
        lVar12 = *param_1;
        fVar33 = *(float *)(lVar12 + 8 + lVar9);
        if (fVar33 <= fVar24) {
          fVar24 = fVar33;
        }
        fVar33 = *(float *)(lVar12 + 4 + lVar9);
        if (fVar33 <= fVar26) {
          fVar26 = fVar33;
        }
        if (*(float *)(lVar12 + lVar9) <= fVar25) {
          fVar25 = *(float *)(lVar12 + lVar9);
        }
        *param_5 = fVar25;
        param_5[1] = fVar26;
        param_5[2] = fVar24;
        fVar33 = *(float *)(lVar12 + 8 + lVar9);
        if (fVar28 <= fVar33) {
          fVar28 = fVar33;
        }
        fVar33 = *(float *)(lVar12 + 4 + lVar9);
        if (fVar30 <= fVar33) {
          fVar30 = fVar33;
        }
        if (fVar31 <= *(float *)(lVar12 + lVar9)) {
          fVar31 = *(float *)(lVar12 + lVar9);
        }
        param_5[3] = fVar31;
        param_5[4] = fVar30;
        param_5[5] = fVar28;
        lVar9 = lVar9 + 0xc;
      } while ((longlong)iVar8 * 0xc != lVar9);
      if (3 < iVar8) {
        if (param_6 == 0) {
          if (DAT_14c75f014 == '\0') goto LAB_142991efb;
          bVar23 = true;
          if (DAT_14c992ba0 == '\0') goto LAB_142991baf;
LAB_142991bb5:
          uStack_164 = 0;
          iStack_160 = 0xffffffff;
          iStack_15c = -0x800001;
          uStack_158 = 0xff7fffff;
          local_150 = 0;
          uStack_144 = (undefined4)DAT_14c846330;
          local_140 = (int)((ulonglong)DAT_14c846330 >> 0x20);
          local_13c = DAT_14c846338;
          uStack_138 = (undefined4)_DAT_14c84637c;
          local_134 = (int)((ulonglong)_DAT_14c84637c >> 0x20);
          local_130[0] = DAT_14c846384;
          local_11c = 0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          local_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
          uStack_100 = 0;
          local_fc = 0;
          local_168 = CONCAT31((int3)((ulonglong)uVar3 >> 8),1);
          local_298 = (longlong **)CONCAT71(local_298._1_7_,bVar23);
          if (bVar23 != false) {
            uStack_164 = 0x322bcc77;
          }
          local_1f8 = *param_1;
          local_288 = (uint *)&local_1f8;
          local_1f0 = (uint)*puVar21;
          local_1b8 = (uint *)&LAB_142995734;
          ppuStack_220 = &local_288;
          local_228 = (longlong **)&LAB_142995738;
          ppplStack_1b0 = &local_230;
          cVar6 = FUN_140ab3054(&local_168,local_1f0,&local_228,&local_1b8);
          if (cVar6 != '\0') {
            local_198 = 0;
            local_190 = 0;
            local_1b8 = (uint *)0x0;
            ppplStack_1b0 = (longlong ***)0x0;
            local_18c = 0x80;
            uStack_188 = 0xffffffff;
            local_184 = 0;
            local_178 = 0;
            local_170 = 0;
            local_230 = &local_1c8;
            local_200 = param_5;
            local_228 = local_230;
            ppuStack_220 = &local_1b8;
            local_218 = param_2;
            local_210 = param_3;
            local_208 = param_4;
            if ((char)local_298 == '\0') {
              local_260 = &LAB_1429959ec;
              local_270 = FUN_14299577c;
              local_268 = &local_228;
              local_258 = &local_230;
              FUN_146baac98(&local_168);
            }
            else {
              local_240 = &LAB_1429959ec;
              local_250 = FUN_14299577c;
              local_2a8 = 0x3f800000;
              local_248 = &local_228;
              local_238 = &local_230;
              FUN_146bab96a(&local_168,&local_250,&local_240,0x3f800000);
            }
            puVar2 = (undefined8 *)*param_4;
            local_274 = *(float *)(puVar2 + 1);
            uVar3 = *puVar2;
            uStack_27c = (undefined4)uVar3;
            uStack_278 = (undefined4)((ulonglong)uVar3 >> 0x20);
            uVar4 = *puVar2;
            param_5[2] = *(float *)(puVar2 + 1);
            *(undefined8 *)param_5 = uVar4;
            param_5[5] = local_274;
            *(undefined8 *)(param_5 + 3) = uVar3;
            if (1 < (int)param_4[1]) {
              fVar24 = param_5[2];
              fVar25 = *param_5;
              fVar26 = param_5[1];
              fVar28 = param_5[5];
              fVar30 = param_5[4];
              fVar31 = param_5[3];
              lVar9 = 1;
              lVar12 = 0x14;
              do {
                lVar22 = *param_4;
                if (*(float *)(lVar22 + lVar12) <= fVar24) {
                  fVar24 = *(float *)(lVar22 + lVar12);
                }
                fVar33 = *(float *)(lVar22 + -4 + lVar12);
                if (fVar33 <= fVar26) {
                  fVar26 = fVar33;
                }
                fVar33 = *(float *)(lVar22 + -8 + lVar12);
                if (fVar33 <= fVar25) {
                  fVar25 = fVar33;
                }
                *param_5 = fVar25;
                param_5[1] = fVar26;
                param_5[2] = fVar24;
                if (fVar28 <= *(float *)(lVar22 + lVar12)) {
                  fVar28 = *(float *)(lVar22 + lVar12);
                }
                fVar33 = *(float *)(lVar22 + -4 + lVar12);
                if (fVar30 <= fVar33) {
                  fVar30 = fVar33;
                }
                fVar33 = *(float *)(lVar22 + -8 + lVar12);
                if (fVar31 <= fVar33) {
                  fVar31 = fVar33;
                }
                param_5[3] = fVar31;
                param_5[4] = fVar30;
                param_5[5] = fVar28;
                lVar9 = lVar9 + 1;
                lVar12 = lVar12 + 0xc;
              } while (lVar9 < (int)param_4[1]);
            }
            local_170 = 0;
            if (local_178 != 0) {
              FUN_1400020a8();
            }
            uVar20 = (ulonglong)ppplStack_1b0 >> 0x20;
            ppplStack_1b0 = (longlong ***)((ulonglong)ppplStack_1b0 & 0xffffffff00000000);
            if ((int)uVar20 != 0) {
              FUN_14472eb64(&local_1b8,0);
            }
            uStack_188 = 0xffffffff;
            local_184 = 0;
            local_190 = 0;
            if (0x80 < local_18c) {
              local_18c = 0x80;
              FUN_1446efbd8(local_1a8,0);
            }
            if (local_198 != 0) {
              FUN_1400020a8();
            }
            if (local_1b8 != (uint *)0x0) {
              FUN_1400020a8();
            }
          }
          if (CONCAT44(uStack_104,uStack_108) != 0) {
            FUN_1400020a8();
          }
          pplVar11 = (longlong **)CONCAT44(uStack_114,uStack_118);
        }
        else {
          if ((param_6 & 0xfffffffe) == 2) {
LAB_142991baf:
            bVar23 = param_6 == 3;
            goto LAB_142991bb5;
          }
LAB_142991efb:
          local_228 = (longlong **)0x0;
          ppuStack_220 = (uint **)0x0;
          local_28c = 0x3dcccccd;
          local_28c = FUN_146cb8794(param_1);
          FUN_142991572(param_1,&local_228,&local_28c);
          if ((int)ppuStack_220 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((ulonglong)ppuStack_220 & 0xffffffff);
          }
          if (*(int *)((longlong)param_2 + 0xc) < (int)ppuStack_220) {
            FUN_14004bbe0(param_2);
          }
          local_148 = 0;
          uStack_144 = 0;
          local_140 = 0;
          local_168 = 0;
          uStack_164 = 0;
          iStack_160 = 0;
          iStack_15c = 0;
          local_13c = 0x80;
          uStack_138 = 0xffffffff;
          local_134 = 0;
          local_128 = (undefined4 *)0x0;
          local_120 = 0;
          local_290 = 0;
          iVar8 = 0;
          if ((int)ppuStack_220 != 0) {
            local_298 = (longlong **)((longlong)local_228 + (longlong)(int)ppuStack_220 * 0xc);
            pplVar11 = local_228;
            do {
              lVar12 = (longlong)(int)*(uint *)pplVar11;
              lVar9 = *local_1c8;
              fVar24 = *(float *)(lVar9 + lVar12 * 0xc);
              fVar25 = *(float *)(lVar9 + 4 + lVar12 * 0xc);
              fVar26 = *(float *)(lVar9 + 8 + lVar12 * 0xc);
              lVar12 = (longlong)(int)*(uint *)((longlong)pplVar11 + 4);
              fVar28 = *(float *)(lVar9 + lVar12 * 0xc);
              fVar30 = *(float *)(lVar9 + 4 + lVar12 * 0xc);
              fVar31 = *(float *)(lVar9 + 8 + lVar12 * 0xc);
              lVar12 = (longlong)(int)*(uint *)(pplVar11 + 1);
              fVar33 = *(float *)(lVar9 + lVar12 * 0xc);
              fVar32 = *(float *)(lVar9 + 4 + lVar12 * 0xc);
              fVar27 = *(float *)(lVar9 + 8 + lVar12 * 0xc);
              iVar8 = (int)param_2[1];
              lVar9 = (longlong)iVar8;
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_146ccf99a(param_2,iVar8);
              }
              fVar27 = fVar27 - fVar26;
              fVar32 = fVar32 - fVar25;
              fVar33 = fVar33 - fVar24;
              fVar31 = fVar31 - fVar26;
              fVar30 = fVar30 - fVar25;
              fVar28 = fVar28 - fVar24;
              fVar29 = fVar28 * fVar32 - fVar33 * fVar30;
              fVar28 = fVar31 * fVar33 - fVar27 * fVar28;
              fVar31 = fVar30 * fVar27 - fVar31 * fVar32;
              fVar30 = 1.0 / SQRT(fVar29 * fVar29 + fVar31 * fVar31 + fVar28 * fVar28);
              lVar12 = *param_2;
              *(float *)(lVar12 + lVar9 * 0x18) = fVar24;
              *(float *)(lVar12 + 4 + lVar9 * 0x18) = fVar25;
              *(float *)(lVar12 + 8 + lVar9 * 0x18) = fVar26;
              *(float *)(lVar12 + 0xc + lVar9 * 0x18) = fVar30 * fVar31;
              *(float *)(lVar12 + 0x10 + lVar9 * 0x18) = fVar28 * fVar30;
              *(float *)(lVar12 + 0x14 + lVar9 * 0x18) = fVar29 * fVar30;
              local_288 = (uint *)0x0;
              uStack_27c = 0;
              iStack_280 = 3;
              FUN_1446f48e2(&local_288,0);
              local_288[2] = 0;
              local_288[0] = 0;
              local_288[1] = 0;
              local_1bc = *(uint *)pplVar11;
              if (iStack_160 != local_134) {
                puVar13 = local_128;
                if (local_128 == (undefined4 *)0x0) {
                  puVar13 = local_130;
                }
                iVar8 = puVar13[local_120 - 1U & local_1bc];
                if (iVar8 != -1) {
                  do {
                    lVar9 = CONCAT44(uStack_164,local_168) + (longlong)iVar8 * 0x10;
                    if (*(uint *)(CONCAT44(uStack_164,local_168) + (longlong)iVar8 * 0x10) ==
                        local_1bc) {
                      if ((uint *)(lVar9 + 4) != (uint *)0x0 && lVar9 != 0) {
                        uVar7 = *(uint *)(lVar9 + 4);
                        goto LAB_1429921ed;
                      }
                      break;
                    }
                    iVar8 = *(int *)(lVar9 + 8);
                  } while (iVar8 != -1);
                }
              }
              local_1b8 = &local_1bc;
              ppplStack_1b0 = (longlong ***)&local_290;
              FUN_140263e2a(&local_168,&local_230,&local_1b8,0);
              uVar7 = local_290;
              local_290 = local_290 + 1;
LAB_1429921ed:
              *local_288 = uVar7;
              local_1bc = *(uint *)((longlong)pplVar11 + 4);
              if (iStack_160 != local_134) {
                puVar13 = local_128;
                if (local_128 == (undefined4 *)0x0) {
                  puVar13 = local_130;
                }
                iVar8 = puVar13[local_120 - 1U & local_1bc];
                if (iVar8 != -1) {
                  do {
                    lVar9 = CONCAT44(uStack_164,local_168) + (longlong)iVar8 * 0x10;
                    if (*(uint *)(CONCAT44(uStack_164,local_168) + (longlong)iVar8 * 0x10) ==
                        local_1bc) {
                      if ((uint *)(lVar9 + 4) != (uint *)0x0 && lVar9 != 0) {
                        uVar7 = *(uint *)(lVar9 + 4);
                        goto LAB_1429922a7;
                      }
                      break;
                    }
                    iVar8 = *(int *)(lVar9 + 8);
                  } while (iVar8 != -1);
                }
              }
              local_1b8 = &local_1bc;
              ppplStack_1b0 = (longlong ***)&local_290;
              FUN_140263e2a(&local_168,&local_230,&local_1b8,0);
              uVar7 = local_290;
              local_290 = local_290 + 1;
LAB_1429922a7:
              local_288[1] = uVar7;
              local_1bc = *(uint *)(pplVar11 + 1);
              if (iStack_160 != local_134) {
                puVar13 = local_128;
                if (local_128 == (undefined4 *)0x0) {
                  puVar13 = local_130;
                }
                iVar8 = puVar13[local_120 - 1U & local_1bc];
                if (iVar8 != -1) {
                  do {
                    lVar9 = CONCAT44(uStack_164,local_168) + (longlong)iVar8 * 0x10;
                    if (*(uint *)(CONCAT44(uStack_164,local_168) + (longlong)iVar8 * 0x10) ==
                        local_1bc) {
                      if ((uint *)(lVar9 + 4) != (uint *)0x0 && lVar9 != 0) {
                        uVar7 = *(uint *)(lVar9 + 4);
                        goto LAB_142992362;
                      }
                      break;
                    }
                    iVar8 = *(int *)(lVar9 + 8);
                  } while (iVar8 != -1);
                }
              }
              local_1b8 = &local_1bc;
              ppplStack_1b0 = (longlong ***)&local_290;
              FUN_140263e2a(&local_168,&local_230,&local_1b8,0);
              uVar7 = local_290;
              local_290 = local_290 + 1;
LAB_142992362:
              local_288[2] = uVar7;
              lVar9 = param_3[1];
              uVar7 = (int)lVar9 + 1;
              *(uint *)(param_3 + 1) = uVar7;
              if (*(uint *)((longlong)param_3 + 0xc) < uVar7) {
                FUN_140bfc2d4(param_3);
              }
              puVar14 = local_288;
              lVar12 = *param_3;
              lVar9 = (longlong)(int)lVar9 * 0x10;
              puVar2 = (undefined8 *)(lVar12 + lVar9);
              *(undefined8 *)(lVar12 + lVar9) = 0;
              lVar22 = (longlong)iStack_280;
              *(int *)(lVar12 + 8 + lVar9) = iStack_280;
              if (lVar22 == 0) {
                *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
              }
              else {
                FUN_144a06ca8(puVar2,iStack_280,0);
                memcpy((void *)*puVar2,puVar14,lVar22 << 2);
              }
              if (local_288 != (uint *)0x0) {
                FUN_1400020a8();
              }
              pplVar11 = (longlong **)((longlong)pplVar11 + 0xc);
            } while (pplVar11 != local_298);
            iVar8 = iStack_160 - local_134;
          }
          uVar20 = 0;
          FUN_140627580(param_4,iVar8);
          if (local_140 == 0) {
            uVar15 = 1;
            iVar10 = 0;
            iVar8 = 0;
          }
          else {
            puVar14 = (uint *)CONCAT44(uStack_144,local_148);
            if ((uint *)CONCAT44(uStack_144,local_148) == (uint *)0x0) {
              puVar14 = &uStack_158;
            }
            uVar7 = *puVar14;
            if (uVar7 == 0) {
              iVar8 = local_140 + 0x1e;
              if (-1 < local_140 + -1) {
                iVar8 = local_140 + -1;
              }
              uVar20 = 0;
              uVar15 = (ulonglong)(uint)(iVar8 >> 5);
              if (iVar8 >> 5 < 1) {
                uVar15 = uVar20;
              }
              iVar10 = 0;
              do {
                if (uVar15 == uVar20) goto LAB_14299254c;
                iVar10 = iVar10 + 0x20;
                uVar7 = puVar14[uVar20 + 1];
                uVar20 = uVar20 + 1;
              } while (uVar7 == 0);
            }
            else {
              uVar20 = 0;
              iVar10 = 0;
            }
            uVar15 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar15 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar8 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (local_140 <= iVar8) {
              iVar8 = local_140;
            }
          }
          if (iVar8 != local_140) {
            uVar7 = 0xffffffff;
            do {
              lVar22 = (longlong)*(int *)(CONCAT44(uStack_164,local_168) + (longlong)iVar8 * 0x10);
              lVar9 = *local_1c8;
              lVar16 = (longlong)
                       *(int *)(CONCAT44(uStack_164,local_168) + 4 + (longlong)iVar8 * 0x10);
              lVar12 = *param_4;
              *(undefined4 *)(lVar12 + 8 + lVar16 * 0xc) = *(undefined4 *)(lVar9 + 8 + lVar22 * 0xc)
              ;
              *(undefined8 *)(lVar12 + lVar16 * 0xc) = *(undefined8 *)(lVar9 + lVar22 * 0xc);
              uVar7 = ~(uint)uVar15 & uVar7;
              puVar14 = (uint *)CONCAT44(uStack_144,local_148);
              if ((uint *)CONCAT44(uStack_144,local_148) == (uint *)0x0) {
                puVar14 = &uStack_158;
              }
              iVar8 = (int)uVar20;
              lVar9 = (longlong)iVar8;
              uVar17 = puVar14[lVar9] & uVar7;
              if (uVar17 == 0) {
                iVar18 = local_140 + 0x1e;
                if (-1 < local_140 + -1) {
                  iVar18 = local_140 + -1;
                }
                iVar18 = iVar18 >> 5;
                iVar10 = iVar10 + 0x20;
                iVar19 = iVar18;
                if (iVar18 < iVar8) {
                  iVar19 = iVar8;
                }
                if (iVar8 < iVar18) {
                  lVar12 = 0;
                  do {
                    uVar17 = puVar14[lVar9 + lVar12 + 1];
                    if (uVar17 != 0) {
                      uVar20 = (ulonglong)(iVar8 + (int)lVar12 + 1);
                      uVar7 = 0xffffffff;
                      goto LAB_1429926a7;
                    }
                    iVar10 = iVar10 + 0x20;
                    lVar12 = lVar12 + 1;
                  } while (iVar19 - lVar9 != lVar12);
                  uVar7 = 0xffffffff;
                  iVar8 = iVar19;
                }
                uVar20 = (ulonglong)(iVar8 + 1);
                iVar8 = local_140;
              }
              else {
LAB_1429926a7:
                uVar15 = (ulonglong)(-uVar17 & uVar17);
                uVar1 = uVar15 * 2 + 1;
                lVar9 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                iVar8 = (iVar10 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                if (local_140 <= iVar8) {
                  iVar8 = local_140;
                }
              }
            } while (iVar8 != local_140);
          }
LAB_14299254c:
          local_120 = 0;
          if (local_128 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          iStack_160 = 0;
          if (iStack_15c != 0) {
            FUN_14472eb64(&local_168,0);
          }
          uStack_138 = 0xffffffff;
          local_134 = 0;
          local_140 = 0;
          if (0x80 < local_13c) {
            local_13c = 0x80;
            FUN_1446efbd8(&uStack_158,0);
          }
          if (CONCAT44(uStack_144,local_148) != 0) {
            FUN_1400020a8();
          }
          pplVar11 = local_228;
          if (CONCAT44(uStack_164,local_168) != 0) {
            FUN_1400020a8();
            pplVar11 = local_228;
          }
        }
        if (pplVar11 != (longlong **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (local_1d8 != 0) {
    FUN_1400020a8();
  }
LAB_1429917db:
  if ((local_f0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142992773 FUN_142992773 body=69 status=ok
// SIG undefined FUN_142992773(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992773(void)

{
  _DAT_14c992c00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429927b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c08,1);
  return;
}



// FUNCTION 1429927b8 FUN_1429927b8 body=69 status=ok
// SIG undefined FUN_1429927b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429927b8(void)

{
  _DAT_14c992c10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429927fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c18,1);
  return;
}



// FUNCTION 1429927fd FUN_1429927fd body=69 status=ok
// SIG undefined FUN_1429927fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429927fd(void)

{
  _DAT_14c992c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299283f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c28,1);
  return;
}



// FUNCTION 142992842 FUN_142992842 body=69 status=ok
// SIG undefined FUN_142992842(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992842(void)

{
  _DAT_14c992c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c38,1);
  return;
}



// FUNCTION 142992887 FUN_142992887 body=69 status=ok
// SIG undefined FUN_142992887(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992887(void)

{
  _DAT_14c992c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429928c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c48,1);
  return;
}



// FUNCTION 1429928cc FUN_1429928cc body=69 status=ok
// SIG undefined FUN_1429928cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429928cc(void)

{
  _DAT_14c992c50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299290e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c58,1);
  return;
}



// FUNCTION 142992911 FUN_142992911 body=69 status=ok
// SIG undefined FUN_142992911(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992911(void)

{
  _DAT_14c992c60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992953. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c68,1);
  return;
}



// FUNCTION 142992956 FUN_142992956 body=69 status=ok
// SIG undefined FUN_142992956(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992956(void)

{
  _DAT_14c992c70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c78,1);
  return;
}



// FUNCTION 14299299b FUN_14299299b body=69 status=ok
// SIG undefined FUN_14299299b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299299b(void)

{
  _DAT_14c992c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429929dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c88,1);
  return;
}



// FUNCTION 1429929e0 FUN_1429929e0 body=69 status=ok
// SIG undefined FUN_1429929e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429929e0(void)

{
  _DAT_14c992c90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992a22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992c98,1);
  return;
}



// FUNCTION 142992a25 FUN_142992a25 body=69 status=ok
// SIG undefined FUN_142992a25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992a25(void)

{
  _DAT_14c992ca0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992a67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992ca8,1);
  return;
}



// FUNCTION 142992a6a FUN_142992a6a body=69 status=ok
// SIG undefined FUN_142992a6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992a6a(void)

{
  _DAT_14c992cb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992cb8,1);
  return;
}



// FUNCTION 142992aaf FUN_142992aaf body=69 status=ok
// SIG undefined FUN_142992aaf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992aaf(void)

{
  _DAT_14c992cc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992af1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992cc8,1);
  return;
}



// FUNCTION 142992af4 FUN_142992af4 body=69 status=ok
// SIG undefined FUN_142992af4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992af4(void)

{
  _DAT_14c992cd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992b36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992cd8,1);
  return;
}



// FUNCTION 142992b39 FUN_142992b39 body=69 status=ok
// SIG undefined FUN_142992b39(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992b39(void)

{
  _DAT_14c992ce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992b7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992ce8,1);
  return;
}



// FUNCTION 142992b7e FUN_142992b7e body=69 status=ok
// SIG undefined FUN_142992b7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992b7e(void)

{
  _DAT_14c992cf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992cf8,1);
  return;
}



// FUNCTION 142992bc3 FUN_142992bc3 body=69 status=ok
// SIG undefined FUN_142992bc3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992bc3(void)

{
  _DAT_14c992d00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992c05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d08,1);
  return;
}



// FUNCTION 142992c08 FUN_142992c08 body=69 status=ok
// SIG undefined FUN_142992c08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992c08(void)

{
  _DAT_14c992d10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992c4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d18,1);
  return;
}



// FUNCTION 142992c4d FUN_142992c4d body=69 status=ok
// SIG undefined FUN_142992c4d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992c4d(void)

{
  _DAT_14c992d20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d28,1);
  return;
}



// FUNCTION 142992c92 FUN_142992c92 body=69 status=ok
// SIG undefined FUN_142992c92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992c92(void)

{
  _DAT_14c992d30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d38,1);
  return;
}



// FUNCTION 142992cd7 FUN_142992cd7 body=69 status=ok
// SIG undefined FUN_142992cd7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992cd7(void)

{
  _DAT_14c992d40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992d19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d48,1);
  return;
}



// FUNCTION 142992d1c FUN_142992d1c body=69 status=ok
// SIG undefined FUN_142992d1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992d1c(void)

{
  _DAT_14c992d50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d58,1);
  return;
}



// FUNCTION 142992d61 FUN_142992d61 body=69 status=ok
// SIG undefined FUN_142992d61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992d61(void)

{
  _DAT_14c992d60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d68,1);
  return;
}



// FUNCTION 142992da6 FUN_142992da6 body=69 status=ok
// SIG undefined FUN_142992da6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992da6(void)

{
  _DAT_14c992d70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d78,1);
  return;
}



// FUNCTION 142992deb FUN_142992deb body=69 status=ok
// SIG undefined FUN_142992deb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992deb(void)

{
  _DAT_14c992d80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992e2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d88,1);
  return;
}



// FUNCTION 142992e30 FUN_142992e30 body=69 status=ok
// SIG undefined FUN_142992e30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992e30(void)

{
  _DAT_14c992d90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992e72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992d98,1);
  return;
}



// FUNCTION 142992e75 FUN_142992e75 body=69 status=ok
// SIG undefined FUN_142992e75(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992e75(void)

{
  _DAT_14c992da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992db0,1);
  return;
}



// FUNCTION 142992eba FUN_142992eba body=69 status=ok
// SIG undefined FUN_142992eba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992eba(void)

{
  _DAT_14c992dc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992dc8,1);
  return;
}



// FUNCTION 142992eff FUN_142992eff body=69 status=ok
// SIG undefined FUN_142992eff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992eff(void)

{
  _DAT_14c992dd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992f41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992de0,1);
  return;
}



// FUNCTION 142992f44 FUN_142992f44 body=69 status=ok
// SIG undefined FUN_142992f44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992f44(void)

{
  _DAT_14c992de8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992f86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992df0,1);
  return;
}



// FUNCTION 142992f89 FUN_142992f89 body=69 status=ok
// SIG undefined FUN_142992f89(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992f89(void)

{
  _DAT_14c992df8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142992fcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e00,1);
  return;
}



// FUNCTION 142992fce FUN_142992fce body=69 status=ok
// SIG undefined FUN_142992fce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142992fce(void)

{
  _DAT_14c992e08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142993010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e10,1);
  return;
}



// FUNCTION 142993013 FUN_142993013 body=69 status=ok
// SIG undefined FUN_142993013(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142993013(void)

{
  _DAT_14c992e18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142993055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e20,1);
  return;
}



// FUNCTION 142993058 FUN_142993058 body=69 status=ok
// SIG undefined FUN_142993058(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142993058(void)

{
  _DAT_14c992e28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014299309a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e30,1);
  return;
}



// FUNCTION 14299309d FUN_14299309d body=69 status=ok
// SIG undefined FUN_14299309d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299309d(void)

{
  _DAT_14c992e38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429930df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e40,1);
  return;
}



// FUNCTION 1429930e2 FUN_1429930e2 body=69 status=ok
// SIG undefined FUN_1429930e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429930e2(void)

{
  _DAT_14c992e48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142993124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e50,1);
  return;
}



// FUNCTION 142993127 FUN_142993127 body=69 status=ok
// SIG undefined FUN_142993127(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142993127(void)

{
  _DAT_14c992e58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142993169. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e60,1);
  return;
}



// FUNCTION 14299316c FUN_14299316c body=69 status=ok
// SIG undefined FUN_14299316c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299316c(void)

{
  _DAT_14c992e68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429931ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e70,1);
  return;
}



// FUNCTION 1429931b1 FUN_1429931b1 body=69 status=ok
// SIG undefined FUN_1429931b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429931b1(void)

{
  _DAT_14c992e80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429931f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992e88,1);
  return;
}



// FUNCTION 1429931fe FUN_1429931fe body=662 status=ok
// SIG undefined FUN_1429931fe(void)

void FUN_1429931fe(longlong param_1,longlong *param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_d8 [40];
  double local_b0 [2];
  double *local_a0;
  double local_98 [3];
  double local_80 [6];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = *param_4;
  if ((iVar1 < *(int *)(*(longlong *)(param_1 + 8) + 0x18)) &&
     (*(longlong *)(param_1 + 0x18) !=
      *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (longlong)iVar1 * 8))) {
    param_2 = (longlong *)*param_2;
    (**(code **)(*param_2 + 0x88))(param_2,local_80);
    local_80[0] = local_80[0] + -5.0;
    local_80[1] = local_80[1] + -5.0;
    local_80[2] = local_80[2] + -5.0;
    local_80[3] = local_80[3] + 5.0;
    local_80[4] = local_80[4] + 5.0;
    local_80[5] = local_80[5] + 5.0;
    if (*(char *)((longlong)param_2 + 0x1c) == '\x06') {
      lVar5 = (longlong)(int)(*(longlong **)(param_1 + 0x18))[1];
      lVar7 = *(longlong *)(**(longlong **)(param_1 + 0x18) + 0xf8);
      iVar4 = *(int *)(lVar7 + 0x10 + lVar5 * 0x18);
      if (0 < iVar4) {
        lVar7 = lVar7 + lVar5 * 0x18;
        lVar5 = 0;
        do {
          lVar6 = *(longlong *)(lVar7 + 8);
          if (*(longlong *)(lVar7 + 8) == 0) {
            lVar6 = lVar7;
          }
          lVar6 = *(longlong *)(lVar6 + lVar5 * 8);
          if ((lVar6 != 0) && (plVar2 = *(longlong **)(lVar6 + 0x10), plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x88))(plVar2,local_b0,*(undefined8 *)(param_1 + 0x10));
            local_b0[0] = local_b0[0] + -5.0;
            local_b0[1] = local_b0[1] + -5.0;
            local_a0 = (double *)((double)local_a0 + -5.0);
            local_98[0] = local_98[0] + 5.0;
            local_98[1] = local_98[1] + 5.0;
            local_98[2] = local_98[2] + 5.0;
            lVar6 = 0;
            while ((local_b0[lVar6] < local_80[lVar6 + 3] || local_b0[lVar6] == local_80[lVar6 + 3]
                   && (local_80[lVar6] < local_b0[lVar6 + 3] ||
                       local_80[lVar6] == local_b0[lVar6 + 3]))) {
              lVar6 = lVar6 + 1;
              if (lVar6 == 3) goto LAB_14299341d;
            }
            iVar4 = *(int *)(lVar7 + 0x10);
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < iVar4);
      }
    }
    else {
      local_b0[0] = *(double *)(param_1 + 0x18);
      local_b0[1] = *(double *)(param_1 + 0x10);
      local_98[0] = 5.0;
      local_a0 = local_80;
      cVar3 = FUN_142993495(param_2,param_3);
      if (cVar3 != '\0') {
LAB_14299341d:
        lVar7 = *(longlong *)(param_1 + 0x18);
        lVar5 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + (longlong)iVar1 * 8);
        if (lVar5 != 0 && lVar7 != 0) {
          if (*(byte *)(lVar5 + 0xc) < 3) {
            lVar5 = 0;
          }
          if (*(byte *)(lVar7 + 0xc) < 3) {
            lVar7 = 0;
          }
          FUN_1429c8ddb(lVar7,lVar5,0,0);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142993495 FUN_142993495 body=1836 status=ok
// SIG undefined FUN_142993495(void)

undefined8 FUN_142993495(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 *local_110;
  undefined1 local_108 [104];
  double local_a0 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar3 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar3) {
  case 1:
switchD_142993692_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
  case 3:
switchD_142993692_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_108,param_2);
    uVar8 = FUN_142993495(*(undefined8 *)(param_1 + 0x20),local_108,param_3);
    break;
  case 8:
switchD_142993692_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
  default:
    switch(uVar3) {
    case 0x40:
      break;
    case 0x41:
      goto switchD_142993692_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_142993692_caseD_3;
    case 0x48:
      goto switchD_142993692_caseD_8;
    default:
      switch(uVar3) {
      case 0x80:
        lVar9 = (longlong)(int)((longlong *)*param_3)[1];
        lVar4 = *(longlong *)(*(longlong *)*param_3 + 0xf8);
        iVar7 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
        if (0 < iVar7) {
          lVar4 = lVar4 + lVar9 * 0x18;
          lVar9 = 0;
          do {
            lVar10 = *(longlong *)(lVar4 + 8);
            if (*(longlong *)(lVar4 + 8) == 0) {
              lVar10 = lVar4;
            }
            lVar10 = *(longlong *)(lVar10 + lVar9 * 8);
            if ((lVar10 != 0) && (plVar5 = *(longlong **)(lVar10 + 0x10), plVar5 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar5 + 0x88))(plVar5,local_a0,param_3[1]);
              local_a0[0] = local_a0[0] + -5.0;
              local_a0[1] = local_a0[1] + -5.0;
              local_a0[2] = local_a0[2] + -5.0;
              local_a0[3] = local_a0[3] + 5.0;
              local_a0[4] = local_a0[4] + 5.0;
              local_a0[5] = local_a0[5] + 5.0;
              lVar10 = 0;
              do {
                pdVar1 = (double *)(param_3[2] + 0x18 + lVar10 * 8);
                if ((*pdVar1 <= local_a0[lVar10] && local_a0[lVar10] != *pdVar1) ||
                   (dVar2 = *(double *)(param_3[2] + lVar10 * 8),
                   local_a0[lVar10 + 3] <= dVar2 && dVar2 != local_a0[lVar10 + 3]))
                goto LAB_14299366b;
                lVar10 = lVar10 + 1;
              } while (lVar10 != 3);
              local_110 = local_108;
              local_118 = 0x4014000000000000;
              cVar6 = FUN_146cd55a9(plVar5,param_3[1],param_1,param_2);
              if (cVar6 != '\0') goto LAB_142993c82;
LAB_14299366b:
              iVar7 = *(int *)(lVar4 + 0x10);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar7);
        }
        break;
      case 0x81:
        lVar9 = (longlong)(int)((longlong *)*param_3)[1];
        lVar4 = *(longlong *)(*(longlong *)*param_3 + 0xf8);
        iVar7 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
        if (0 < iVar7) {
          lVar4 = lVar4 + lVar9 * 0x18;
          lVar9 = 0;
          do {
            lVar10 = *(longlong *)(lVar4 + 8);
            if (*(longlong *)(lVar4 + 8) == 0) {
              lVar10 = lVar4;
            }
            lVar10 = *(longlong *)(lVar10 + lVar9 * 8);
            if ((lVar10 != 0) && (plVar5 = *(longlong **)(lVar10 + 0x10), plVar5 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar5 + 0x88))(plVar5,local_a0,param_3[1]);
              local_a0[0] = local_a0[0] + -5.0;
              local_a0[1] = local_a0[1] + -5.0;
              local_a0[2] = local_a0[2] + -5.0;
              local_a0[3] = local_a0[3] + 5.0;
              local_a0[4] = local_a0[4] + 5.0;
              local_a0[5] = local_a0[5] + 5.0;
              lVar10 = 0;
              do {
                pdVar1 = (double *)(param_3[2] + 0x18 + lVar10 * 8);
                if ((*pdVar1 <= local_a0[lVar10] && local_a0[lVar10] != *pdVar1) ||
                   (dVar2 = *(double *)(param_3[2] + lVar10 * 8),
                   local_a0[lVar10 + 3] <= dVar2 && dVar2 != local_a0[lVar10 + 3]))
                goto LAB_142993940;
                lVar10 = lVar10 + 1;
              } while (lVar10 != 3);
              local_110 = local_108;
              local_118 = 0x4014000000000000;
              cVar6 = FUN_146cd93af(plVar5,param_3[1],param_1,param_2);
              if (cVar6 != '\0') goto LAB_142993c82;
LAB_142993940:
              iVar7 = *(int *)(lVar4 + 0x10);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar7);
        }
        break;
      default:
        goto switchD_142993509_caseD_82;
      case 0x83:
        lVar9 = (longlong)(int)((longlong *)*param_3)[1];
        lVar4 = *(longlong *)(*(longlong *)*param_3 + 0xf8);
        iVar7 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
        if (0 < iVar7) {
          lVar4 = lVar4 + lVar9 * 0x18;
          lVar9 = 0;
          do {
            lVar10 = *(longlong *)(lVar4 + 8);
            if (*(longlong *)(lVar4 + 8) == 0) {
              lVar10 = lVar4;
            }
            lVar10 = *(longlong *)(lVar10 + lVar9 * 8);
            if ((lVar10 != 0) && (plVar5 = *(longlong **)(lVar10 + 0x10), plVar5 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar5 + 0x88))(plVar5,local_a0,param_3[1]);
              local_a0[0] = local_a0[0] + -5.0;
              local_a0[1] = local_a0[1] + -5.0;
              local_a0[2] = local_a0[2] + -5.0;
              local_a0[3] = local_a0[3] + 5.0;
              local_a0[4] = local_a0[4] + 5.0;
              local_a0[5] = local_a0[5] + 5.0;
              lVar10 = 0;
              do {
                pdVar1 = (double *)(param_3[2] + 0x18 + lVar10 * 8);
                if ((*pdVar1 <= local_a0[lVar10] && local_a0[lVar10] != *pdVar1) ||
                   (dVar2 = *(double *)(param_3[2] + lVar10 * 8),
                   local_a0[lVar10 + 3] <= dVar2 && dVar2 != local_a0[lVar10 + 3]))
                goto LAB_142993c2e;
                lVar10 = lVar10 + 1;
              } while (lVar10 != 3);
              local_110 = local_108;
              local_118 = 0x4014000000000000;
              cVar6 = FUN_146cdd0cb(plVar5,param_3[1],param_1,param_2);
              if (cVar6 != '\0') goto LAB_142993c82;
LAB_142993c2e:
              iVar7 = *(int *)(lVar4 + 0x10);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar7);
        }
        break;
      case 0x88:
        lVar9 = (longlong)(int)((longlong *)*param_3)[1];
        lVar4 = *(longlong *)(*(longlong *)*param_3 + 0xf8);
        iVar7 = *(int *)(lVar4 + 0x10 + lVar9 * 0x18);
        if (0 < iVar7) {
          lVar4 = lVar4 + lVar9 * 0x18;
          lVar9 = 0;
          do {
            lVar10 = *(longlong *)(lVar4 + 8);
            if (*(longlong *)(lVar4 + 8) == 0) {
              lVar10 = lVar4;
            }
            lVar10 = *(longlong *)(lVar10 + lVar9 * 8);
            if ((lVar10 != 0) && (plVar5 = *(longlong **)(lVar10 + 0x10), plVar5 != (longlong *)0x0)
               ) {
              (**(code **)(*plVar5 + 0x88))(plVar5,local_a0,param_3[1]);
              local_a0[0] = local_a0[0] + -5.0;
              local_a0[1] = local_a0[1] + -5.0;
              local_a0[2] = local_a0[2] + -5.0;
              local_a0[3] = local_a0[3] + 5.0;
              local_a0[4] = local_a0[4] + 5.0;
              local_a0[5] = local_a0[5] + 5.0;
              lVar10 = 0;
              do {
                pdVar1 = (double *)(param_3[2] + 0x18 + lVar10 * 8);
                if ((*pdVar1 <= local_a0[lVar10] && local_a0[lVar10] != *pdVar1) ||
                   (dVar2 = *(double *)(param_3[2] + lVar10 * 8),
                   local_a0[lVar10 + 3] <= dVar2 && dVar2 != local_a0[lVar10 + 3]))
                goto LAB_142993ab9;
                lVar10 = lVar10 + 1;
              } while (lVar10 != 3);
              local_110 = local_108;
              local_118 = 0x4014000000000000;
              cVar6 = FUN_140a08058(plVar5,param_3[1],param_1,param_2);
              if (cVar6 != '\0') goto LAB_142993c82;
LAB_142993ab9:
              iVar7 = *(int *)(lVar4 + 0x10);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar7);
        }
      }
      uVar8 = 0;
      goto LAB_142993c44;
    }
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142993509_caseD_82:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_138);
  }
  goto LAB_142993c44;
LAB_142993c82:
  uVar8 = 1;
LAB_142993c44:
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142993e62 FUN_142993e62 body=475 status=ok
// SIG undefined FUN_142993e62(void)

undefined8 FUN_142993e62(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [56];
  double local_a0 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = (longlong)(int)((longlong *)*param_1)[1];
  lVar3 = *(longlong *)(*(longlong *)*param_1 + 0xf8);
  iVar6 = *(int *)(lVar3 + 0x10 + lVar7 * 0x18);
  if (0 < iVar6) {
    lVar3 = lVar3 + lVar7 * 0x18;
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(lVar3 + 8);
      if (*(longlong *)(lVar3 + 8) == 0) {
        lVar9 = lVar3;
      }
      lVar9 = *(longlong *)(lVar9 + lVar7 * 8);
      if ((lVar9 != 0) && (plVar4 = *(longlong **)(lVar9 + 0x10), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x88))(plVar4,local_a0,param_1[1]);
        local_a0[0] = local_a0[0] + -5.0;
        local_a0[1] = local_a0[1] + -5.0;
        local_a0[2] = local_a0[2] + -5.0;
        local_a0[3] = local_a0[3] + 5.0;
        local_a0[4] = local_a0[4] + 5.0;
        local_a0[5] = local_a0[5] + 5.0;
        lVar9 = 0;
        do {
          pdVar1 = (double *)(param_1[2] + 0x18 + lVar9 * 8);
          if ((*pdVar1 <= local_a0[lVar9] && local_a0[lVar9] != *pdVar1) ||
             (dVar2 = *(double *)(param_1[2] + lVar9 * 8),
             local_a0[lVar9 + 3] <= dVar2 && dVar2 != local_a0[lVar9 + 3])) goto LAB_142993fe6;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        local_e0 = local_d8;
        local_e8 = 0x4014000000000000;
        cVar5 = FUN_1405c9af5(plVar4,param_1[1],param_2,param_3);
        if (cVar5 != '\0') {
          uVar8 = 1;
          goto LAB_142993ffc;
        }
LAB_142993fe6:
        iVar6 = *(int *)(lVar3 + 0x10);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  uVar8 = 0;
LAB_142993ffc:
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299403e FUN_14299403e body=475 status=ok
// SIG undefined FUN_14299403e(void)

undefined8 FUN_14299403e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [56];
  double local_a0 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = (longlong)(int)((longlong *)*param_1)[1];
  lVar3 = *(longlong *)(*(longlong *)*param_1 + 0xf8);
  iVar6 = *(int *)(lVar3 + 0x10 + lVar7 * 0x18);
  if (0 < iVar6) {
    lVar3 = lVar3 + lVar7 * 0x18;
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(lVar3 + 8);
      if (*(longlong *)(lVar3 + 8) == 0) {
        lVar9 = lVar3;
      }
      lVar9 = *(longlong *)(lVar9 + lVar7 * 8);
      if ((lVar9 != 0) && (plVar4 = *(longlong **)(lVar9 + 0x10), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x88))(plVar4,local_a0,param_1[1]);
        local_a0[0] = local_a0[0] + -5.0;
        local_a0[1] = local_a0[1] + -5.0;
        local_a0[2] = local_a0[2] + -5.0;
        local_a0[3] = local_a0[3] + 5.0;
        local_a0[4] = local_a0[4] + 5.0;
        local_a0[5] = local_a0[5] + 5.0;
        lVar9 = 0;
        do {
          pdVar1 = (double *)(param_1[2] + 0x18 + lVar9 * 8);
          if ((*pdVar1 <= local_a0[lVar9] && local_a0[lVar9] != *pdVar1) ||
             (dVar2 = *(double *)(param_1[2] + lVar9 * 8),
             local_a0[lVar9 + 3] <= dVar2 && dVar2 != local_a0[lVar9 + 3])) goto LAB_1429941c2;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        local_e0 = local_d8;
        local_e8 = 0x4014000000000000;
        cVar5 = FUN_144945691(plVar4,param_1[1],param_2,param_3);
        if (cVar5 != '\0') {
          uVar8 = 1;
          goto LAB_1429941d8;
        }
LAB_1429941c2:
        iVar6 = *(int *)(lVar3 + 0x10);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  uVar8 = 0;
LAB_1429941d8:
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299421a FUN_14299421a body=475 status=ok
// SIG undefined FUN_14299421a(void)

undefined8 FUN_14299421a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [56];
  double local_a0 [6];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar7 = (longlong)(int)((longlong *)*param_1)[1];
  lVar3 = *(longlong *)(*(longlong *)*param_1 + 0xf8);
  iVar6 = *(int *)(lVar3 + 0x10 + lVar7 * 0x18);
  if (0 < iVar6) {
    lVar3 = lVar3 + lVar7 * 0x18;
    lVar7 = 0;
    do {
      lVar9 = *(longlong *)(lVar3 + 8);
      if (*(longlong *)(lVar3 + 8) == 0) {
        lVar9 = lVar3;
      }
      lVar9 = *(longlong *)(lVar9 + lVar7 * 8);
      if ((lVar9 != 0) && (plVar4 = *(longlong **)(lVar9 + 0x10), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x88))(plVar4,local_a0,param_1[1]);
        local_a0[0] = local_a0[0] + -5.0;
        local_a0[1] = local_a0[1] + -5.0;
        local_a0[2] = local_a0[2] + -5.0;
        local_a0[3] = local_a0[3] + 5.0;
        local_a0[4] = local_a0[4] + 5.0;
        local_a0[5] = local_a0[5] + 5.0;
        lVar9 = 0;
        do {
          pdVar1 = (double *)(param_1[2] + 0x18 + lVar9 * 8);
          if ((*pdVar1 <= local_a0[lVar9] && local_a0[lVar9] != *pdVar1) ||
             (dVar2 = *(double *)(param_1[2] + lVar9 * 8),
             local_a0[lVar9 + 3] <= dVar2 && dVar2 != local_a0[lVar9 + 3])) goto LAB_14299439e;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        local_e0 = local_d8;
        local_e8 = 0x4014000000000000;
        cVar5 = FUN_140ea601d(plVar4,param_1[1],param_2,param_3);
        if (cVar5 != '\0') {
          uVar8 = 1;
          goto LAB_1429943b4;
        }
LAB_14299439e:
        iVar6 = *(int *)(lVar3 + 0x10);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar6);
  }
  uVar8 = 0;
LAB_1429943b4:
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429943f6 FUN_1429943f6 body=99 status=ok
// SIG undefined FUN_1429943f6(void)

void FUN_1429943f6(ulonglong *param_1,longlong param_2)

{
  ulonglong *puVar1;
  
  *param_1 = *param_1 << 0x20 | *param_1 >> 0x20;
  *(undefined4 *)
   ((longlong)*(int *)((longlong)param_1 + 0x34) * 0x50 + param_2 + 0x3c +
   (longlong)(int)param_1[8] * 4) = 2;
  *(undefined4 *)
   ((longlong)(int)param_1[7] * 0x50 + param_2 + 0x3c +
   (longlong)*(int *)((longlong)param_1 + 0x44) * 4) = 1;
  puVar1 = (ulonglong *)((longlong)param_1 + 0x34);
  *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
  puVar1 = param_1 + 8;
  *puVar1 = *puVar1 << 0x20 | *puVar1 >> 0x20;
  *(int *)(param_1 + 2) = (int)param_1[2];
  *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) ^ 0x80000000;
  *(int *)(param_1 + 3) = (int)param_1[3];
  *(uint *)((longlong)param_1 + 0x1c) = *(uint *)((longlong)param_1 + 0x1c) ^ 0x80000000;
  *(int *)(param_1 + 4) = (int)param_1[4];
  *(uint *)((longlong)param_1 + 0x24) = *(uint *)((longlong)param_1 + 0x24) ^ 0x80000000;
  *(int *)(param_1 + 5) = (int)param_1[5];
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) ^ 0x80000000;
  return;
}



// FUNCTION 142994466 FUN_142994466 body=897 status=ok
// SIG undefined FUN_142994466(void)

undefined1 FUN_142994466(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [43];
  undefined1 local_7d;
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar10 = (longlong)(int)param_2[1];
  if (lVar10 < 1) {
    iVar12 = 0;
  }
  else {
    lVar16 = 0;
    iVar12 = 0;
    do {
      iVar12 = iVar12 + *(int *)(*param_2 + 8 + lVar16);
      lVar16 = lVar16 + 0x10;
    } while (lVar10 << 4 != lVar16);
  }
  uVar7 = (param_3 < 0xff && iVar12 < 0xff) && (int)param_2[1] < 0xff;
  if ((bool)uVar7) {
    local_7d = uVar7;
    FUN_146cd199a(param_1,lVar10,1);
    plVar1 = param_1 + 2;
    FUN_146cd1a10(plVar1,iVar12,1);
    FUN_146cd1a84(param_1 + 4,param_3,1);
    FUN_14004b2f4(param_1 + 8,param_3,1);
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    FUN_146cd1af4();
    iVar5 = (int)uStack_60;
    lVar10 = (longlong)(int)uStack_60;
    if ((int)uStack_60 < iVar12) {
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar12);
      uVar13 = iVar12 - iVar5;
      if ((uint)(uStack_60._4_4_ - iVar5) < uVar13) {
        FUN_1447403be(&local_68);
      }
      memset((void *)(lVar10 + local_68),0,(longlong)(int)uVar13);
    }
    else {
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar12);
      }
      if (iVar12 < (int)uStack_60) {
        uStack_60 = CONCAT44(uStack_60._4_4_,iVar12);
        FUN_140b3f66e();
      }
    }
    if (0 < (int)param_1[5]) {
      lVar10 = 0;
      do {
        *(undefined1 *)(param_1[4] + lVar10) = 0xff;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[5]);
    }
    if (0 < (int)param_2[1]) {
      lVar10 = 0;
      iVar12 = 0;
      do {
        lVar16 = *param_2;
        lVar8 = lVar10 * 0x10;
        uVar7 = *(undefined1 *)(lVar16 + 8 + lVar8);
        lVar14 = *param_1;
        *(char *)(lVar14 + lVar10 * 2) = (char)iVar12;
        *(undefined1 *)(lVar14 + 1 + lVar10 * 2) = uVar7;
        uVar13 = *(uint *)(lVar16 + 8 + lVar8);
        uVar15 = (ulonglong)uVar13;
        iVar5 = iVar12;
        if (0 < (int)uVar13) {
          lVar14 = (longlong)iVar12 * 3 + 2;
          uVar17 = 0;
          do {
            lVar6 = *(longlong *)(lVar16 + lVar8);
            iVar5 = *(int *)(lVar6 + uVar17 * 4);
            lVar11 = (longlong)iVar5;
            uVar18 = uVar17 + 1;
            uVar7 = *(undefined1 *)
                     (lVar6 + ((longlong)
                               ((ulonglong)(uint)((int)uVar18 >> 0x1f) << 0x20 | uVar18 & 0xffffffff
                               ) % (longlong)(int)uVar15 & 0xffffffffU) * 4);
            lVar6 = *plVar1;
            *(char *)(lVar6 + -2 + lVar14) = (char)lVar10;
            *(char *)(lVar6 + -1 + lVar14) = (char)iVar5;
            *(undefined1 *)(lVar6 + lVar14) = uVar7;
            *(undefined1 *)(uVar17 + local_68 + iVar12) = uVar7;
            lVar6 = param_1[4];
            cVar9 = (char)uVar17 + (char)iVar12;
            if (*(char *)(lVar6 + lVar11) == -1) {
              *(char *)(lVar6 + lVar11) = cVar9;
            }
            bVar3 = *(byte *)(local_58 + 3 + lVar11 * 4);
            *(byte *)(local_58 + 3 + lVar11 * 4) = bVar3 + 1;
            *(char *)((ulonglong)bVar3 + local_58 + lVar11 * 4) = cVar9;
            lVar6 = param_1[8];
            bVar3 = *(byte *)(lVar6 + 3 + lVar11 * 4);
            *(byte *)(lVar6 + 3 + lVar11 * 4) = bVar3 + 1;
            *(char *)((ulonglong)bVar3 + lVar6 + lVar11 * 4) = (char)lVar10;
            uVar15 = (ulonglong)(int)((longlong *)(lVar16 + lVar8))[1];
            lVar14 = lVar14 + 3;
            uVar17 = uVar18;
          } while ((longlong)uVar18 < (longlong)uVar15);
          iVar5 = iVar12 + (int)uVar18;
          local_7c = iVar12;
        }
        iVar12 = iVar5;
        lVar10 = lVar10 + 1;
        local_78 = param_2;
        local_70 = param_1;
      } while (lVar10 < (int)param_2[1]);
    }
    plVar2 = param_1 + 6;
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
      FUN_144893a1c(plVar2,0);
    }
    iVar12 = (int)param_1[3];
    if (iVar12 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12 / 2);
    }
    if (*(int *)((longlong)param_1 + 0x3c) < iVar12 / 2) {
      FUN_144893a1c(plVar2);
      iVar12 = (int)param_1[3];
    }
    if (0 < iVar12) {
      lVar10 = 0;
      do {
        lVar16 = *plVar1;
        lVar14 = lVar10 * 3;
        bVar3 = *(byte *)(lVar16 + 1 + lVar14);
        uVar17 = (ulonglong)*(byte *)(lVar16 + 2 + lVar14);
        uVar15 = (ulonglong)*(byte *)(local_58 + 3 + uVar17 * 4);
        if (uVar15 != 0) {
          uVar18 = 0;
          do {
            bVar4 = *(byte *)(local_58 + uVar17 * 4 + uVar18);
            if (*(byte *)(local_68 + (ulonglong)bVar4) == bVar3) {
              *(byte *)(lVar16 + 2 + lVar14) = bVar4;
              lVar16 = *plVar1;
              break;
            }
            uVar18 = uVar18 + 1;
          } while (uVar15 != uVar18);
        }
        if (bVar3 < *(byte *)(lVar16 + 1 + (ulonglong)*(byte *)(lVar16 + 2 + lVar14) * 3)) {
          iVar12 = (int)param_1[7];
          *(uint *)(param_1 + 7) = iVar12 + 1U;
          if (*(uint *)((longlong)param_1 + 0x3c) < iVar12 + 1U) {
            FUN_1447403be(plVar2,iVar12);
          }
          *(char *)(*plVar2 + (longlong)iVar12) = (char)lVar10;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[3]);
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    uVar7 = local_7d;
    if (local_58 != 0) {
      FUN_1400020a8();
      uVar7 = local_7d;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429947ea FUN_1429947ea body=850 status=ok
// SIG undefined FUN_1429947ea(void)

undefined1 FUN_1429947ea(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_98 [39];
  undefined1 local_71;
  longlong *local_70;
  void *local_68;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = (longlong)(int)param_2[1];
  if (lVar8 < 1) {
    iVar14 = 0;
  }
  else {
    lVar10 = 0;
    iVar14 = 0;
    do {
      iVar14 = iVar14 + *(int *)(*param_2 + 8 + lVar10);
      lVar10 = lVar10 + 0x10;
    } while (lVar8 << 4 != lVar10);
  }
  uVar5 = (param_3 < 0xff && iVar14 < 0xff) && (int)param_2[1] < 0xff;
  if ((bool)uVar5) {
    local_71 = uVar5;
    FUN_146cd199a(param_1,lVar8,1);
    plVar1 = param_1 + 2;
    FUN_146cd1a10(plVar1,iVar14,1);
    FUN_146cd1a84(param_1 + 4);
    if (0 < (int)param_1[5]) {
      lVar8 = 0;
      do {
        *(undefined1 *)(param_1[4] + lVar8) = 0xff;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)param_1[5]);
    }
    if (0 < (int)param_2[1]) {
      lVar8 = 0;
      iVar14 = 0;
      do {
        lVar10 = *param_2;
        lVar6 = lVar8 * 0x10;
        uVar5 = *(undefined1 *)(lVar10 + 8 + lVar6);
        lVar11 = *param_1;
        *(char *)(lVar11 + lVar8 * 2) = (char)iVar14;
        *(undefined1 *)(lVar11 + 1 + lVar8 * 2) = uVar5;
        uVar13 = *(uint *)(lVar10 + 8 + lVar6);
        uVar12 = (ulonglong)uVar13;
        if (0 < (int)uVar13) {
          lVar11 = (longlong)iVar14 * 3 + 2;
          uVar7 = 0;
          do {
            lVar4 = *(longlong *)(lVar10 + lVar6);
            iVar3 = *(int *)(lVar4 + uVar7 * 4);
            uVar2 = uVar7 + 1;
            uVar5 = *(undefined1 *)
                     (lVar4 + ((longlong)
                               ((ulonglong)(uint)((int)uVar2 >> 0x1f) << 0x20 | uVar2 & 0xffffffff)
                               % (longlong)(int)uVar12 & 0xffffffffU) * 4);
            lVar4 = *plVar1;
            *(char *)(lVar4 + -2 + lVar11) = (char)lVar8;
            *(char *)(lVar4 + -1 + lVar11) = (char)iVar3;
            *(undefined1 *)(lVar4 + lVar11) = uVar5;
            lVar4 = param_1[4];
            if (*(char *)(lVar4 + iVar3) == -1) {
              *(char *)(lVar4 + iVar3) = (char)uVar7 + (char)iVar14;
            }
            uVar12 = (ulonglong)(int)((longlong *)(lVar10 + lVar6))[1];
            lVar11 = lVar11 + 3;
            uVar7 = uVar2;
          } while ((longlong)uVar2 < (longlong)uVar12);
          iVar14 = iVar14 + (int)uVar2;
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)param_2[1]);
    }
    local_58 = 0;
    uStack_50 = 0;
    local_68 = (void *)0x0;
    uStack_60 = 0;
    uVar13 = *(uint *)(param_1 + 3);
    uVar12 = (ulonglong)uVar13;
    local_70 = param_1;
    if ((int)uVar13 < 1) {
      if ((int)uVar13 < 0) {
LAB_142994b14:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar12);
      }
    }
    else {
      uStack_60 = (ulonglong)uVar13;
      FUN_1447403be(&local_68);
      memset(local_68,0,uVar12);
      uVar13 = *(uint *)(param_1 + 3);
      uVar12 = (ulonglong)uVar13;
      iVar14 = (int)uStack_50;
      lVar8 = (longlong)(int)uStack_50;
      if ((int)uStack_50 < (int)uVar13) {
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar13);
        uVar13 = uVar13 - iVar14;
        if ((uint)(uStack_50._4_4_ - iVar14) < uVar13) {
          FUN_1401c3474(&local_58);
        }
        memset((void *)(lVar8 + local_58),0,(longlong)(int)uVar13);
      }
      else {
        if ((int)uVar13 < 0) goto LAB_142994b14;
        param_1 = local_70;
        if ((int)uVar13 < (int)uStack_50) {
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar13);
          FUN_1403ed828();
        }
      }
    }
    if (0 < (int)uStack_60) {
      lVar8 = 0;
      do {
        *(undefined1 *)((longlong)local_68 + lVar8) = 0xff;
        *(undefined1 *)(local_58 + lVar8) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 < (int)uStack_60);
    }
    uVar12 = (ulonglong)*(uint *)(param_1 + 3);
    if (0 < (int)*(uint *)(param_1 + 3)) {
      lVar8 = 0;
      do {
        if (0 < (int)uVar12) {
          lVar10 = *plVar1;
          pcVar9 = (char *)(lVar10 + 2);
          uVar7 = 0;
          do {
            if ((pcVar9[-1] == *(char *)(lVar10 + 2 + lVar8 * 3)) &&
               (*pcVar9 == *(char *)(lVar10 + 1 + lVar8 * 3))) {
              if (*(char *)(local_58 + uVar7) == '\0') {
                *(char *)((longlong)local_68 + lVar8) = (char)uVar7;
                *(undefined1 *)(local_58 + uVar7) = 1;
              }
              else {
                *(undefined1 *)((longlong)local_68 + lVar8) = 0xff;
              }
              break;
            }
            uVar7 = uVar7 + 1;
            pcVar9 = pcVar9 + 3;
          } while ((uVar12 & 0xffffffff) != uVar7);
        }
        lVar8 = lVar8 + 1;
        uVar12 = (ulonglong)(int)param_1[3];
      } while (lVar8 < (longlong)uVar12);
      if (0 < (int)param_1[3]) {
        lVar8 = 2;
        lVar10 = 0;
        do {
          *(undefined1 *)(param_1[2] + lVar8) = *(undefined1 *)((longlong)local_68 + lVar10);
          lVar10 = lVar10 + 1;
          lVar8 = lVar8 + 3;
        } while (lVar10 < (int)param_1[3]);
      }
    }
    FUN_1447395ec(param_1);
    FUN_146cd24ac(param_1);
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar5 = local_71;
    if (local_58 != 0) {
      FUN_1400020a8();
      uVar5 = local_71;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142994b3e FUN_142994b3e body=848 status=ok
// SIG undefined FUN_142994b3e(void)

undefined1 FUN_142994b3e(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  undefined2 uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined1 uVar6;
  longlong lVar7;
  short sVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [47];
  undefined1 local_89;
  longlong *local_88;
  int local_7c;
  longlong *local_78;
  longlong *local_70;
  longlong local_68 [5];
  
  local_68[4] = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = (longlong)(int)param_2[1];
  if (lVar9 < 1) {
    iVar15 = 0;
  }
  else {
    lVar12 = 0;
    iVar15 = 0;
    do {
      iVar15 = iVar15 + *(int *)(*param_2 + 8 + lVar12);
      lVar12 = lVar12 + 0x10;
    } while (lVar9 << 4 != lVar12);
  }
  uVar6 = (param_3 < 0x8000 && iVar15 < 0x8000) && (int)param_2[1] < 0x8000;
  if ((bool)uVar6) {
    local_89 = uVar6;
    FUN_146005ee2(param_1,lVar9,1);
    local_88 = param_1 + 2;
    FUN_14602223a(local_88,iVar15,1);
    FUN_145ffd9fe(param_1 + 4,param_3,1);
    FUN_14004d464(param_1 + 8,param_3,1);
    local_68[2] = 0;
    local_68[3] = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_146cd257e(local_68 + 2,param_3,1);
    FUN_1405b54a2(local_68,iVar15);
    if (0 < (int)param_1[5]) {
      lVar9 = 0;
      do {
        *(undefined2 *)(param_1[4] + lVar9 * 2) = 0x8000;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_1[5]);
    }
    if (0 < (int)param_2[1]) {
      lVar9 = 0;
      iVar15 = 0;
      do {
        lVar12 = *param_2;
        lVar7 = lVar9 * 0x10;
        uVar2 = *(undefined2 *)(lVar12 + 8 + lVar7);
        lVar10 = *param_1;
        *(short *)(lVar10 + lVar9 * 4) = (short)iVar15;
        *(undefined2 *)(lVar10 + 2 + lVar9 * 4) = uVar2;
        uVar4 = *(uint *)(lVar12 + 8 + lVar7);
        uVar13 = (ulonglong)uVar4;
        iVar5 = iVar15;
        if (0 < (int)uVar4) {
          lVar10 = (longlong)iVar15 * 3 + 2;
          uVar16 = 0;
          do {
            lVar14 = *(longlong *)(lVar12 + lVar7);
            iVar5 = *(int *)(lVar14 + uVar16 * 4);
            lVar11 = (longlong)iVar5;
            uVar17 = uVar16 + 1;
            uVar2 = *(undefined2 *)
                     (lVar14 + ((longlong)
                                ((ulonglong)(uint)((int)uVar17 >> 0x1f) << 0x20 |
                                uVar17 & 0xffffffff) % (longlong)(int)uVar13 & 0xffffffffU) * 4);
            lVar14 = *local_88;
            *(short *)(lVar14 + -4 + lVar10 * 2) = (short)lVar9;
            *(short *)(lVar14 + -2 + lVar10 * 2) = (short)iVar5;
            *(undefined2 *)(lVar14 + lVar10 * 2) = uVar2;
            *(undefined2 *)(local_68[0] + (longlong)iVar15 * 2 + uVar16 * 2) = uVar2;
            lVar14 = param_1[4];
            sVar8 = (short)uVar16 + (short)iVar15;
            if (SBORROW2(0,*(short *)(lVar14 + lVar11 * 2))) {
              *(short *)(lVar14 + lVar11 * 2) = sVar8;
            }
            lVar14 = local_68[2] + lVar11 * 8;
            sVar3 = *(short *)(lVar14 + 6);
            *(short *)(lVar14 + 6) = sVar3 + 1;
            *(short *)(lVar14 + (longlong)sVar3 * 2) = sVar8;
            lVar14 = param_1[8] + lVar11 * 8;
            sVar8 = *(short *)(lVar14 + 6);
            *(short *)(lVar14 + 6) = sVar8 + 1;
            *(short *)(lVar14 + (longlong)sVar8 * 2) = (short)lVar9;
            uVar13 = (ulonglong)(int)((longlong *)(lVar12 + lVar7))[1];
            lVar10 = lVar10 + 3;
            uVar16 = uVar17;
          } while ((longlong)uVar17 < (longlong)uVar13);
          iVar5 = iVar15 + (int)uVar17;
          local_7c = iVar15;
        }
        iVar15 = iVar5;
        lVar9 = lVar9 + 1;
        local_78 = param_2;
        local_70 = param_1;
      } while (lVar9 < (int)param_2[1]);
    }
    plVar1 = param_1 + 6;
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
      FUN_140ca8596(plVar1,0);
    }
    iVar15 = (int)param_1[3];
    if (iVar15 < -1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15 / 2);
    }
    if (*(int *)((longlong)param_1 + 0x3c) < iVar15 / 2) {
      FUN_140ca8596(plVar1);
      iVar15 = (int)param_1[3];
    }
    if (0 < iVar15) {
      lVar9 = 0;
      do {
        lVar12 = *local_88;
        sVar8 = *(short *)(lVar12 + 2 + lVar9 * 6);
        lVar7 = (longlong)*(short *)(lVar12 + 4 + lVar9 * 6);
        lVar10 = (longlong)*(short *)(local_68[2] + 6 + lVar7 * 8);
        if (0 < lVar10) {
          lVar14 = 0;
          do {
            sVar3 = *(short *)(local_68[2] + lVar7 * 8 + lVar14 * 2);
            if (*(short *)(local_68[0] + (longlong)sVar3 * 2) == sVar8) {
              *(short *)(lVar12 + 4 + lVar9 * 6) = sVar3;
              lVar12 = *local_88;
              break;
            }
            lVar14 = lVar14 + 1;
          } while (lVar10 != lVar14);
        }
        if (sVar8 < *(short *)(lVar12 + 2 + (longlong)*(short *)(lVar12 + 4 + lVar9 * 6) * 6)) {
          iVar15 = (int)param_1[7];
          *(uint *)(param_1 + 7) = iVar15 + 1U;
          if (*(uint *)((longlong)param_1 + 0x3c) < iVar15 + 1U) {
            FUN_1405b572a(plVar1,iVar15);
          }
          *(short *)(*plVar1 + (longlong)iVar15 * 2) = (short)lVar9;
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_1[3]);
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    uVar6 = local_89;
    if (local_68[2] != 0) {
      FUN_1400020a8();
      uVar6 = local_89;
    }
  }
  if ((local_68[4] ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142994e94 FUN_142994e94 body=673 status=ok
// SIG undefined FUN_142994e94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142994e94(longlong param_1,double *param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar9 = *param_2 - *(double *)(param_1 + 0x50);
  dVar11 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar3 = param_2[2] - *(double *)(param_1 + 0x60);
  dVar10 = -*(double *)(param_1 + 0x30);
  dVar12 = -*(double *)(param_1 + 0x38);
  dVar7 = *(double *)(param_1 + 0x40) * -1.0;
  dVar8 = *(double *)(param_1 + 0x48) * 1.0;
  dVar5 = dVar9 * dVar7 - dVar10 * dVar3;
  dVar2 = dVar11 * dVar10 - dVar9 * dVar12;
  dVar6 = dVar3 * dVar12 - dVar11 * dVar7;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar5 + dVar5;
  dVar2 = dVar2 + dVar2;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  auVar4 = divpd(_DAT_149934d80,auVar1);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar4._0_8_) *
             ((dVar2 * dVar12 - dVar5 * dVar7) + dVar8 * dVar6 + dVar9);
  dStack_80 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar4._8_8_) *
              (*(double *)(param_1 + 0x30) * dVar2 + dVar7 * dVar6 + dVar8 * dVar5 + dVar11);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x80))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x80))) *
             (dVar8 * dVar2 + dVar3 + (dVar5 * dVar10 - dVar6 * dVar12));
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0x70))();
  dVar9 = *(double *)*param_3 * *(double *)(param_1 + 0x70);
  dVar6 = *(double *)(*param_3 + 8) * *(double *)(param_1 + 0x78);
  dVar8 = *(double *)param_3[1] * *(double *)(param_1 + 0x80);
  dVar5 = *(double *)(param_1 + 0x30);
  dVar3 = *(double *)(param_1 + 0x38);
  dVar7 = *(double *)(param_1 + 0x40);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar10 = dVar6 * dVar5 - dVar9 * dVar3;
  dVar11 = dVar8 * dVar3 - dVar6 * dVar7;
  dVar12 = dVar9 * dVar7 - dVar5 * dVar8;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar6 = (dVar7 * dVar11 - dVar5 * dVar10) + *(double *)(param_1 + 0x48) * dVar12 + dVar6;
  auVar1._8_4_ = SUB84(dVar6,0);
  auVar1._0_8_ = (dVar10 * dVar3 - dVar12 * dVar7) + dVar2 * dVar11 + dVar9;
  auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *param_3 = auVar1;
  *(double *)param_3[1] = dVar10 * dVar2 + dVar8 + (dVar12 * dVar5 - dVar11 * dVar3);
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142995166 FUN_142995166 body=787 status=ok
// SIG undefined FUN_142995166(void)

double * FUN_142995166(longlong param_1,double *param_2,double *param_3,undefined8 param_4,
                      double *param_5)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  double dVar2;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar2 = *param_3;
  dVar1 = param_3[1];
  dVar3 = *(double *)(param_1 + 0x30);
  dVar6 = -dVar3;
  dVar7 = -*(double *)(param_1 + 0x38);
  dVar4 = *(double *)(param_1 + 0x40) * -1.0;
  dVar5 = *(double *)(param_1 + 0x48) * 1.0;
  dVar8 = dVar1 * dVar6 - dVar2 * dVar7;
  dVar9 = param_3[2] * dVar7 - dVar1 * dVar4;
  dVar10 = dVar2 * dVar4 - param_3[2] * dVar6;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  local_78 = dVar8 * dVar5 + param_3[2] + (dVar10 * dVar6 - dVar9 * dVar7);
  local_88 = (dVar8 * dVar7 - dVar10 * dVar4) + dVar5 * dVar9 + dVar2;
  dStack_80 = dVar3 * dVar8 + dVar4 * dVar9 + dVar5 * dVar10 + dVar1;
  dVar2 = *param_5;
  dVar1 = param_5[1];
  dVar8 = dVar1 * dVar6 - dVar7 * dVar2;
  dVar9 = param_5[2] * dVar7 - dVar4 * dVar1;
  dVar10 = dVar2 * dVar4 - dVar6 * param_5[2];
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  local_98 = dVar8 * dVar5 + param_5[2] + (dVar10 * dVar6 - dVar9 * dVar7);
  local_a8 = (dVar8 * dVar7 - dVar10 * dVar4) + dVar5 * dVar9 + dVar2;
  dStack_a0 = dVar3 * dVar8 + dVar4 * dVar9 + dVar5 * dVar10 + dVar1;
  local_d8 = &local_a8;
  (**(code **)(**(longlong **)(param_1 + 0x20) + 0xc0))(*(longlong **)(param_1 + 0x20),&local_c8);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar5 = *(double *)(param_1 + 0x40);
  dVar1 = *(double *)(param_1 + 0x48);
  dVar2 = *(double *)(param_1 + 0x48);
  dVar6 = dStack_c0 * dVar3 - local_c8 * dVar4;
  dVar7 = local_b8 * dVar4 - dStack_c0 * dVar5;
  dVar8 = local_c8 * dVar5 - dVar3 * local_b8;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  *param_2 = (dVar6 * dVar4 - dVar8 * dVar5) + dVar1 * dVar7 + local_c8;
  param_2[1] = (dVar5 * dVar7 - dVar3 * dVar6) + dVar2 * dVar8 + dStack_c0;
  param_2[2] = dVar6 * dVar1 + local_b8 + (dVar8 * dVar3 - dVar7 * dVar4);
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14299547a FUN_14299547a body=605 status=ok
// SIG undefined FUN_14299547a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14299547a(double *param_1,double *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  uint uVar4;
  longlong lVar5;
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
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 8);
  auVar2 = *(undefined1 (*) [16])(param_1 + 10);
  lVar5 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
  auVar16._8_4_ = (int)lVar5;
  auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
  auVar16._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  iVar3 = movmskpd((int)param_2,auVar16);
  lVar5 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar19._8_4_ = (int)lVar5;
  auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
  auVar19._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
  uVar4 = movmskpd(param_3,auVar19);
  dVar6 = DAT_14c8464c0;
  dVar7 = DAT_14c8464c8;
  dVar10 = DAT_14c846490;
  dVar11 = DAT_14c846498;
  dVar12 = DAT_14c846480;
  dVar13 = DAT_14c846488;
  dVar15 = DAT_14c8464a0;
  dVar17 = DAT_14c8464a8;
  dVar8 = DAT_14c8464d0;
  dVar9 = dRam000000014c8464d8;
  dVar14 = DAT_14c8464b0;
  dVar18 = DAT_14c8464b8;
  if ((uVar4 & 0x3fffffff) != 0 || iVar3 != 0) {
    auVar19 = divpd(_DAT_149934d80,auVar1);
    auVar16 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
    dVar6 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar19._0_8_);
    dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar19._8_8_);
    dVar8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar16._0_8_);
    dVar10 = param_1[2] * -1.0;
    dVar11 = param_1[3] * 1.0;
    dVar12 = -*param_1;
    dVar13 = -param_1[1];
    dVar15 = param_1[4] * dVar6;
    dVar17 = param_1[5] * dVar7;
    dVar14 = param_1[6] * dVar8;
    dVar18 = dVar17 * dVar12 - dVar13 * dVar15;
    dVar20 = dVar14 * dVar13 - dVar10 * dVar17;
    dVar21 = dVar15 * dVar10 - dVar12 * dVar14;
    dVar20 = dVar20 + dVar20;
    dVar21 = dVar21 + dVar21;
    dVar18 = dVar18 + dVar18;
    dVar15 = 0.0 - ((dVar18 * dVar13 - dVar21 * dVar10) + dVar11 * dVar20 + dVar15);
    dVar17 = 0.0 - (dVar18 * *param_1 + dVar10 * dVar20 + dVar11 * dVar21 + dVar17);
    dVar9 = 0.0;
    dVar14 = 0.0 - (dVar11 * dVar18 + dVar14 + (dVar21 * dVar12 - dVar20 * dVar13));
    dVar18 = 0.0;
  }
  *param_2 = dVar12;
  param_2[1] = dVar13;
  param_2[2] = dVar10;
  param_2[3] = dVar11;
  param_2[4] = dVar15;
  param_2[5] = dVar17;
  param_2[6] = dVar14;
  param_2[7] = dVar18;
  param_2[8] = dVar6;
  param_2[9] = dVar7;
  param_2[10] = dVar8;
  param_2[0xb] = dVar9;
  return;
}



// FUNCTION 1429956d8 FUN_1429956d8 body=16 status=ok
// SIG undefined FUN_1429956d8(void)

void FUN_1429956d8(undefined8 *param_1)

{
  *(undefined1 *)(*(longlong *)*param_1 + 0x371) = *(undefined1 *)(param_1 + 1);
  return;
}



// FUNCTION 142995700 FUN_142995700 body=5 status=ok
// SIG undefined FUN_142995700(void)

longlong FUN_142995700(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 142995706 FUN_142995706 body=12 status=ok
// SIG undefined FUN_142995706(void)

void FUN_142995706(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014299570f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142995712 FUN_142995712 body=29 status=ok
// SIG undefined FUN_142995712(void)

undefined8 FUN_142995712(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14299577c FUN_14299577c body=621 status=ok
// SIG undefined FUN_14299577c(void)

void FUN_14299577c(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [40];
  longlong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_54;
  uint local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = *param_3;
  local_78 = *(undefined4 *)(param_3 + 1);
  plVar3 = (longlong *)param_1[3];
  iVar5 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
    FUN_140bfc2d4(plVar3,iVar5);
  }
  plVar1 = (longlong *)(*plVar3 + (longlong)iVar5 * 0x10);
  puVar9 = (undefined8 *)(*plVar3 + (longlong)iVar5 * 0x10);
  *puVar9 = 0;
  puVar9[1] = 0;
  iVar5 = (int)param_2[1];
  if (iVar5 < 1) {
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4();
    }
  }
  else {
    *(int *)(plVar1 + 1) = iVar5;
    FUN_1446f48e2(plVar1,0);
    local_88 = (ulonglong)(int)param_2[1];
    if (0 < (longlong)local_88) {
      uVar8 = 0;
      local_90 = local_88 * 4;
      do {
        local_50 = *(uint *)(*param_2 + uVar8 * 4);
        plVar3 = (longlong *)param_1[1];
        if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
          plVar6 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar6 = (longlong *)plVar3[8];
          }
          iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar3[9] - 1U & local_50) * 4);
          if (iVar5 != -1) {
            do {
              lVar7 = *plVar3 + (longlong)iVar5 * 0x10;
              if (*(uint *)(*plVar3 + (longlong)iVar5 * 0x10) == local_50) {
                if ((int *)(lVar7 + 4) != (int *)0x0 && lVar7 != 0) {
                  iVar5 = *(int *)(lVar7 + 4);
                  goto LAB_1429959b4;
                }
                break;
              }
              iVar5 = *(int *)(lVar7 + 8);
            } while (iVar5 != -1);
          }
        }
        puVar9 = (undefined8 *)((longlong)(int)local_50 * 0xc + **(longlong **)*param_1);
        plVar3 = (longlong *)param_1[4];
        local_54 = (int)plVar3[1];
        lVar7 = (longlong)local_54;
        *(uint *)(plVar3 + 1) = local_54 + 1U;
        if (*(uint *)((longlong)plVar3 + 0xc) < local_54 + 1U) {
          FUN_140aacb36(plVar3,local_54);
        }
        lVar4 = *plVar3;
        *(undefined4 *)(lVar4 + 8 + lVar7 * 0xc) = *(undefined4 *)(puVar9 + 1);
        *(undefined8 *)(lVar4 + lVar7 * 0xc) = *puVar9;
        local_70 = &local_50;
        uStack_68 = &local_54;
        FUN_140263e2a(param_1[1],local_4c,&local_70,0);
        iVar5 = local_54;
LAB_1429959b4:
        *(int *)(*plVar1 + local_90 + ~uVar8 * 4) = iVar5;
        uVar8 = uVar8 + 1;
      } while (uVar8 != local_88);
    }
  }
  plVar3 = (longlong *)param_1[2];
  uStack_68._0_4_ = *(undefined4 *)(*(longlong *)param_1[4] + 8 + (longlong)*(int *)*plVar1 * 0xc);
  local_70 = *(uint **)(*(longlong *)param_1[4] + (longlong)*(int *)*plVar1 * 0xc);
  uStack_68._4_4_ = (undefined4)local_80;
  uStack_60 = (undefined4)((ulonglong)local_80 >> 0x20);
  uStack_5c = local_78;
  iVar5 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar5 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
    FUN_146ccf99a(plVar3,iVar5);
  }
  lVar7 = *plVar3;
  *(ulonglong *)(lVar7 + 0x10 + (longlong)iVar5 * 0x18) = CONCAT44(uStack_5c,uStack_60);
  puVar2 = (undefined4 *)(lVar7 + (longlong)iVar5 * 0x18);
  *puVar2 = (undefined4)local_70;
  puVar2[1] = local_70._4_4_;
  puVar2[2] = (undefined4)uStack_68;
  puVar2[3] = uStack_68._4_4_;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142995a10 FUN_142995a10 body=301 status=ok
// SIG undefined FUN_142995a10(void)

void FUN_142995a10(double *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  pdVar4 = *(double **)*param_2;
  dVar5 = dVar3 * pdVar4[5] + dVar1 * pdVar4[3] + dVar2 * pdVar4[4];
  if (0.0 <= dVar5) {
    dVar6 = pdVar4[6];
    dVar8 = pdVar4[5] * dVar6 + pdVar4[2];
    dVar7 = pdVar4[4] * dVar6 + pdVar4[1];
    dVar6 = pdVar4[3] * dVar6 + *pdVar4;
  }
  else {
    dVar6 = *pdVar4;
    dVar7 = pdVar4[1];
    dVar8 = pdVar4[2];
  }
  *(uint *)param_2[2] = (uint)(0.0 <= dVar5);
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (2.2250738585072014e-308 < dVar5) {
    dVar5 = SQRT(dVar5);
    dVar8 = dVar8 + (dVar3 / dVar5) * 0.0;
    dVar7 = dVar7 + (dVar2 / dVar5) * 0.0;
    dVar6 = dVar6 + (dVar1 / dVar5) * 0.0;
  }
  *param_1 = dVar6;
  param_1[1] = dVar7;
  param_1[2] = dVar8;
  return;
}



// FUNCTION 142995b3e FUN_142995b3e body=301 status=ok
// SIG undefined FUN_142995b3e(void)

void FUN_142995b3e(double *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  pdVar4 = *(double **)*param_2;
  dVar5 = dVar3 * pdVar4[5] + dVar1 * pdVar4[3] + dVar2 * pdVar4[4];
  if (0.0 <= dVar5) {
    dVar6 = pdVar4[6];
    dVar8 = pdVar4[5] * dVar6 + pdVar4[2];
    dVar7 = pdVar4[4] * dVar6 + pdVar4[1];
    dVar6 = pdVar4[3] * dVar6 + *pdVar4;
  }
  else {
    dVar6 = *pdVar4;
    dVar7 = pdVar4[1];
    dVar8 = pdVar4[2];
  }
  *(uint *)param_2[2] = (uint)(0.0 <= dVar5);
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (2.2250738585072014e-308 < dVar5) {
    dVar5 = SQRT(dVar5);
    dVar8 = dVar8 + (dVar3 / dVar5) * 0.0;
    dVar7 = dVar7 + (dVar2 / dVar5) * 0.0;
    dVar6 = dVar6 + (dVar1 / dVar5) * 0.0;
  }
  *param_1 = dVar6;
  param_1[1] = dVar7;
  param_1[2] = dVar8;
  return;
}



// FUNCTION 142995c6c FUN_142995c6c body=301 status=ok
// SIG undefined FUN_142995c6c(void)

void FUN_142995c6c(double *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  pdVar4 = *(double **)*param_2;
  dVar5 = dVar3 * pdVar4[5] + dVar1 * pdVar4[3] + dVar2 * pdVar4[4];
  if (0.0 <= dVar5) {
    dVar6 = pdVar4[6];
    dVar8 = pdVar4[5] * dVar6 + pdVar4[2];
    dVar7 = pdVar4[4] * dVar6 + pdVar4[1];
    dVar6 = pdVar4[3] * dVar6 + *pdVar4;
  }
  else {
    dVar6 = *pdVar4;
    dVar7 = pdVar4[1];
    dVar8 = pdVar4[2];
  }
  *(uint *)param_2[2] = (uint)(0.0 <= dVar5);
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (2.2250738585072014e-308 < dVar5) {
    dVar5 = SQRT(dVar5);
    dVar8 = dVar8 + (dVar3 / dVar5) * 0.0;
    dVar7 = dVar7 + (dVar2 / dVar5) * 0.0;
    dVar6 = dVar6 + (dVar1 / dVar5) * 0.0;
  }
  *param_1 = dVar6;
  param_1[1] = dVar7;
  param_1[2] = dVar8;
  return;
}



// FUNCTION 142995d9a FUN_142995d9a body=189 status=ok
// SIG undefined FUN_142995d9a(void)

undefined4 * FUN_142995d9a(undefined4 *param_1,undefined8 *param_2,double *param_3)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  double local_58 [4];
  uint local_34 [3];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  piVar1 = (int *)param_2[2];
  local_58[2] = param_3[2];
  local_58[0] = *param_3;
  local_58[1] = param_3[1];
  lVar2 = *(longlong *)*param_2;
  lVar6 = 0;
  do {
    bVar3 = local_58[lVar6] == 0.0;
    bVar4 = 0.0 < local_58[lVar6];
    lVar5 = lVar2 + 0x38;
    if (!bVar4 && !bVar3) {
      lVar5 = lVar2 + 0x20;
    }
    (&local_28)[lVar6] = *(undefined8 *)(lVar5 + lVar6 * 8);
    local_34[lVar6] = (uint)(bVar4 || bVar3);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 3);
  *piVar1 = local_34[1] * 2 + local_34[0] + local_34[2] * 4;
  *(undefined8 *)(param_1 + 4) = local_18;
  *param_1 = (undefined4)local_28;
  param_1[1] = local_28._4_4_;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_78);
}



// FUNCTION 142995e58 FUN_142995e58 body=301 status=ok
// SIG undefined FUN_142995e58(void)

void FUN_142995e58(double *param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  pdVar4 = *(double **)*param_2;
  dVar5 = dVar3 * pdVar4[5] + dVar1 * pdVar4[3] + dVar2 * pdVar4[4];
  if (0.0 <= dVar5) {
    dVar6 = pdVar4[6];
    dVar8 = pdVar4[5] * dVar6 + pdVar4[2];
    dVar7 = pdVar4[4] * dVar6 + pdVar4[1];
    dVar6 = pdVar4[3] * dVar6 + *pdVar4;
  }
  else {
    dVar6 = *pdVar4;
    dVar7 = pdVar4[1];
    dVar8 = pdVar4[2];
  }
  *(uint *)param_2[2] = (uint)(0.0 <= dVar5);
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (2.2250738585072014e-308 < dVar5) {
    dVar5 = SQRT(dVar5);
    dVar8 = dVar8 + (dVar3 / dVar5) * 0.0;
    dVar7 = dVar7 + (dVar2 / dVar5) * 0.0;
    dVar6 = dVar6 + (dVar1 / dVar5) * 0.0;
  }
  *param_1 = dVar6;
  param_1[1] = dVar7;
  param_1[2] = dVar8;
  return;
}



// FUNCTION 142995f85 FUN_142995f85 body=2886 status=ok
// SIG undefined FUN_142995f85(void)

void FUN_142995f85(void)

{
  uint uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  char *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140056680(&DAT_14c992a98,L"NoName");
  atexit((_func_5014 *)&LAB_14298ace4);
  local_48 = 0;
  FUN_141471170(&DAT_14c992ab0,L"p.simDelay",&DAT_14c992aa8,&DAT_149dfb77a);
  atexit(FUN_14298acf5);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992ac0,L"p.Resim.CachePushDataDirtyProxies",&DAT_14c75f000,
                L"Default = false. Set true to enable resim caching dirty proxies in the push data from game thread to physics thread. This will make physics proxy changes from GT play out during a resimulation."
               );
  atexit(FUN_14298ad3a);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992ad0,L"p.Resim.CachePushDataAsyncInputs",&DAT_14c75f001,
                L"Default = false. Set true to enable resim caching of async inputs in the push data from game thread to physics thread. This will make async inputs available again during a resimulation."
               );
  atexit(FUN_14298ad7f);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992ae0,L"p.Chaos.CharacterGroundConstraint.InputMovementThreshold",
                &DAT_14c75f004,L"Minimum per frame input movement distance in cm.");
  atexit(FUN_14298ae36);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992af0,L"p.Chaos.CharacterGroundConstraint.ExternalMovementThreshold",
                &DAT_14c75f008,
                L"If distance moved is less than this then retain current movement target relative to ground."
               );
  atexit(FUN_14298ae7b);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992b00,L"p.Chaos.ClusterUnion.GenerateInterclusterEdges",&DAT_14c75f00c,
                L"Whether to generate intercluster edges automatically when adding to a cluster union (and remove them when removing from the cluster union)."
               );
  atexit(FUN_14298b17b);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992b10,L"p.Chaos.ClusterUnion.DoNotAddEmptyClusters",&DAT_14c75f00d,
                L"Gating a risky bug fix.");
  atexit(FUN_14298b1c0);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992b20,L"p.Chaos.ClusterUnion.FixPartialDestruction",&DAT_14c75f00e,
                L"Fix the partial destruction.");
  atexit(FUN_14298b205);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992b48,L"ClusterUnion.StressSolver.EnableDebugDraw",&DAT_14c992b58,
                L"When enabled, this will draw visual debug information for about the stress solver execution."
               );
  atexit(FUN_142991344);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992b60,L"ClusterUnion.StressSolver.StrengthScalar",&DAT_14c75f010,
                L"Materioal strength scalar ( <1: weaker, >1: stronger)");
  atexit(FUN_142991389);
  local_38 = "Property";
  local_30 = 8;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14c992b70 = (ulonglong)uVar1;
  local_38 = "Key";
  local_30 = 3;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14c992b78 = (ulonglong)uVar1;
  local_38 = "LowValue";
  local_30 = 8;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14c992b80 = (ulonglong)uVar1;
  local_38 = "HighValue";
  local_30 = 9;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14c992b88 = (ulonglong)uVar1;
  local_38 = "StringValue";
  local_30 = 0xb;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14c992b90 = (ulonglong)uVar1;
  local_38 = "Flags";
  local_30 = 5;
  local_2c = 0;
  uVar1 = FUN_14001a6c0(&local_38,1);
  DAT_14c992b98 = (ulonglong)uVar1;
  local_48 = 0;
  FUN_141471170(&DAT_14c992ba8,L"p.Chaos.ConvexGeometryCheckEnable",&DAT_14c992ef0,
                L"Perform convex geometry complexity check for Chaos physics.");
  atexit(FUN_142991418);
  local_48 = 0;
  FUN_141471170(&DAT_14c992bb8,L"p.Chaos.PerformGeometryReduction",&DAT_14c992ef4,
                L"Perform convex geometry simplification to increase performance in Chaos physics.")
  ;
  atexit(FUN_14299145d);
  local_48 = 0;
  FUN_141471170(&DAT_14c992bc8,L"p.Chaos.ConvexParticlesWarningThreshold",&DAT_14c75f080,
                L"Threshold beyond which we warn about collision geometry complexity.");
  atexit(FUN_1429914a2);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992bd8,L"p.Chaos.Convex.UseTConvexHull3Builder",&DAT_14c75f014,
                L"Use the newer Geometry Tools code path for generating convex hulls when default build method is set.[def:true]"
               );
  atexit(FUN_1429914e7);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992be8,L"p.Chaos.Convex.UseSimplifierForTConvexHull3Builder",&DAT_14c992ba0,
                L"If default build is using the Geometry Tools convex hull algorithm, also use the corresponding simplifier. [def:false]"
               );
  atexit(FUN_14299152c);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c00,L"p.Chaos.Collision.Manifold.SphereCapsuleSizeThreshold",
                &DAT_14c75f02c,&DAT_149dfb77a);
  atexit(FUN_142992773);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c10,L"p.Chaos.Collision.Manifold.CapsuleAxisAlignedThreshold",
                &DAT_14c75f030,&DAT_149dfb77a);
  atexit(FUN_1429927b8);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c20,L"p.Chaos.Collision.Manifold.CapsuleDeepPenetrationFraction",
                &DAT_14c75f034,&DAT_149dfb77a);
  atexit(FUN_1429927fd);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c30,L"p.Chaos.Collision.Manifold.CapsuleRadialContactFraction",
                &DAT_14c75f038,&DAT_149dfb77a);
  atexit(FUN_142992842);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c40,L"p.Chaos.Collision.Manifold.CapsuleMinContactDistanceFraction",
                &DAT_14c75f01c,&DAT_149dfb77a);
  atexit(FUN_142992887);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c50,L"p.Chaos.Collision.Manifold.PlaneContactNormalEpsilon",
                &DAT_14c75f018,
                L"Normal tolerance used to distinguish face contacts from edge-edge contacts");
  atexit(FUN_1429928cc);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c60,L"p.Chaos.Collision.Manifold.TriangleNormalThreshold",&DAT_14c75f028,
                &DAT_149dfb77a);
  atexit(FUN_142992911);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c70,L"p.Chaos.Collision.Manifold.EdgeNormalThreshold",&DAT_14c75f024,
                &DAT_149dfb77a);
  atexit(FUN_142992956);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c80,L"p.Chaos.Collision.Manifold.TriangleConvexMarginMultiplier",
                &DAT_14c75f020,&DAT_149dfb77a);
  atexit(FUN_14299299b);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992c90,L"p.Chaos.Collision.Manifold.CullDistanceMarginMultiplier",
                &DAT_14c75f03c,&DAT_149dfb77a);
  atexit(FUN_1429929e0);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992ca0,L"p.Chaos.Collision.Manifold.MinFaceSearchDistance",&DAT_14c75f040,
                &DAT_149dfb77a);
  atexit(FUN_142992a25);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992cb0,
                L"p.Chaos.Collision.Manifold.ForceOneShotManifoldEdgeEdgeCaseZeroCullDistance",
                &DAT_14c992bf9,
                L"If enabled, if one shot manifold hits edge/edge case, we will force a cull distance of zero. That means edge/edge contacts will be thrown out if separated at all. Only applies to Convex/Convex oneshot impl."
               );
  atexit(FUN_142992a6a);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992cc0,L"p.Chaos.Collision.EnableManifoldGJKReplace",&DAT_14c992bf8,
                &DAT_149dfb77a);
  atexit(FUN_142992aaf);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992cd0,L"p.Chaos.Collision.EnableManifoldGJKInject",&DAT_14c992eed,
                &DAT_149dfb77a);
  atexit(FUN_142992af4);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992ce0,L"p.Chaos.Collision.Manifold.EnableGjkWarmStart",&DAT_14c75f015,
                &DAT_149dfb77a);
  atexit(FUN_142992b39);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992cf0,L"p.Chaos.Collision.GJKEpsilon",&DAT_14c75f068,&DAT_149dfb77a);
  atexit(FUN_142992b7e);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992d00,L"p.Chaos.Collision.EPAEpsilon",&DAT_14c75f06c,&DAT_149dfb77a);
  atexit(FUN_142992bc3);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992d10,L"p.Chaos.Collision.EnableEdgePrune",&DAT_14c75f060,&DAT_149dfb77a);
  atexit(FUN_142992c08);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992d20,L"p.Chaos.Collision.EdgePrunePlaneDistance",&DAT_14c75f05c,
                &DAT_149dfb77a);
  atexit(FUN_142992c4d);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992d30,L"p.Chaos.Collision.EnableLargeMeshManifolds",&DAT_14c75f07c,
                L"Whether to allow large mesh manifolds for collisions against meshes (required for good behaviour)"
               );
  atexit(FUN_142992c92);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992d40,L"p.Chaos.Collision.MeshContactNormalThreshold",&DAT_14c75f064,
                L"Treat contact with a dot product between the normal and the triangle face greater than this as face collisions"
               );
  atexit(FUN_142992cd7);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992d50,L"p.Chaos.Collision.MeshContactNormalRejectionThreshold",
                &DAT_14c75f078,
                L"Don\'t correct edge and vertex normals if they are beyond the valid range by more than this"
               );
  atexit(FUN_142992d1c);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992d60,L"p.Chaos.Collision.SortMeshManifoldByDistance",&DAT_14c992eec,
                L"Sort large mesh manifold points by |RxN| for improved solver stability (less rotation in first iteration)"
               );
  atexit(FUN_142992d61);
  local_48 = 0;
  FUN_141471170(&DAT_14c992d70,L"p.Chaos.Collision.MeshManifoldHashSize",&DAT_14c75f074,
                L"Hash table size to use in vertex and edge maps in convex-mesh collision");
  atexit(FUN_142992da6);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992d80,L"p.Chaos.Collision.EnableMeshManifoldOptimizedLoop",&DAT_14c75f044,
                &DAT_149dfb77a);
  atexit(FUN_142992deb);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992d90,L"p.Chaos.Collision.EnableMeshManifoldOptimizedLoopTriMesh",
                &DAT_14c75f045,&DAT_149dfb77a);
  atexit(FUN_142992e30);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992da8,L"p.Chaos.Collision.EnableMACDFallback",&DAT_14c992da0,&DAT_149dfb77a
               );
  atexit(FUN_142992e75);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992dc0,L"p.Chaos.Collision.EnableMACDPreManifoldFix",&DAT_14c992db8,
                &DAT_149dfb77a);
  atexit(FUN_142992eba);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992dd8,L"p.Chaos.Collision.UseGJK2",&DAT_14c992dd0,&DAT_149dfb77a);
  atexit(FUN_142992eff);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992de8,L"p.Chaos.Collision.OneSidedTriangleMesh",&DAT_14c75f046,
                &DAT_149dfb77a);
  atexit(FUN_142992f44);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992df8,L"p.Chaos.Collision.OneSidedHeightField",&DAT_14c75f07d,
                &DAT_149dfb77a);
  atexit(FUN_142992f89);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992e08,L"p.Chaos.Collision.TriangeMeshDistanceTolerance",&DAT_14c75f04c,
                &DAT_149dfb77a);
  atexit(FUN_142992fce);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c992e18,L"p.Chaos.Collision.TriangeMeshPhiToleranceScale",&DAT_14c75f048,
                &DAT_149dfb77a);
  atexit(FUN_142993013);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992e28,L"p.Chaos.Collision.UseCapsuleTriMesh2",&DAT_14c75f050,&DAT_149dfb77a
               );
  atexit(FUN_142993058);
  local_48 = 0;
  FUN_141471170(&DAT_14c992e38,L"p.Chaos.Collision.ConvexTriMeshMode",&DAT_14c75f054,&DAT_149dfb77a)
  ;
  atexit(FUN_14299309d);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992e48,L"p.Chaos.Collision.ConvexTriMeshBackFaceCull",&DAT_14c75f058,
                &DAT_149dfb77a);
  atexit(FUN_1429930e2);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992e58,L"p.Chaos.Collision.ConvexTriMeshInsideCull",&DAT_14c75f059,
                &DAT_149dfb77a);
  atexit(FUN_142993127);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992e68,L"p.Chaos.Collision.UseConvexTriangleGJKSAT",&DAT_14c75f070,
                &DAT_149dfb77a);
  atexit(FUN_14299316c);
  local_48 = 0;
  FUN_14153156c(&DAT_14c992e80,L"p.Chaos.Collision.ConvexTriMeshSortByPhi",&DAT_14c992e78,
                &DAT_149dfb77a);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    atexit(FUN_1429931b1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
}



// FUNCTION 142996acc FUN_142996acc body=69 status=ok
// SIG undefined FUN_142996acc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142996acc(void)

{
  _DAT_14c992ef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142996b0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f00,1);
  return;
}



// FUNCTION 142996b11 FUN_142996b11 body=69 status=ok
// SIG undefined FUN_142996b11(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142996b11(void)

{
  _DAT_14c992f10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142996b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f18,1);
  return;
}



// FUNCTION 142996b56 FUN_142996b56 body=69 status=ok
// SIG undefined FUN_142996b56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142996b56(void)

{
  _DAT_14c992f28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142996b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f30,1);
  return;
}



// FUNCTION 142996b9b FUN_142996b9b body=69 status=ok
// SIG undefined FUN_142996b9b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142996b9b(void)

{
  _DAT_14c992f38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142996bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f40,1);
  return;
}



// FUNCTION 142996be0 FUN_142996be0 body=69 status=ok
// SIG undefined FUN_142996be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142996be0(void)

{
  _DAT_14c992f48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142996c22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f50,1);
  return;
}



// FUNCTION 142996c25 FUN_142996c25 body=69 status=ok
// SIG undefined FUN_142996c25(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142996c25(void)

{
  _DAT_14c992f58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142996c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f60,1);
  return;
}



// FUNCTION 142996c6a FUN_142996c6a body=69 status=ok
// SIG undefined FUN_142996c6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142996c6a(void)

{
  _DAT_14c992f68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142996cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f70,1);
  return;
}



// FUNCTION 142996caf FUN_142996caf body=69 status=ok
// SIG undefined FUN_142996caf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142996caf(void)

{
  _DAT_14c992f78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142996cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f80,1);
  return;
}



// FUNCTION 142996cf4 FUN_142996cf4 body=170 status=ok
// SIG undefined FUN_142996cf4(void)

void FUN_142996cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_1404c7181(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_14299b380(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142996d9f FUN_142996d9f body=3191 status=ok
// SIG undefined FUN_142996d9f(void)

void FUN_142996d9f(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  void *pvVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  void **ppvVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_3c8 [32];
  double *local_3a8;
  void **local_3a0;
  int local_38c;
  undefined8 local_388 [4];
  double local_368;
  double dStack_360;
  double local_358;
  undefined8 local_328 [4];
  double local_308;
  double dStack_300;
  double local_2f8;
  void *local_2c8;
  ulonglong uStack_2c0;
  void *local_2b8;
  double dStack_2b0;
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [48];
  double local_228;
  double dStack_220;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double local_190;
  undefined1 local_188 [16];
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  undefined4 local_138;
  undefined1 local_134;
  void *local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  double local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  puVar16 = local_328;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *param_1;
    param_1 = param_1 + 1;
    puVar16 = puVar16 + 1;
  }
  iVar13 = _isnan(local_308);
  if (((iVar13 != 0) || (iVar13 = _isnan(dStack_300), iVar13 != 0)) ||
     (iVar13 = _isnan(local_2f8), iVar13 != 0)) goto LAB_142996eb9;
  puVar16 = local_388;
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *param_2;
    param_2 = param_2 + 1;
    puVar16 = puVar16 + 1;
  }
  iVar13 = _isnan(local_368);
  if (((iVar13 != 0) || (iVar13 = _isnan(dStack_360), iVar13 != 0)) ||
     ((iVar13 = _isnan(local_358), iVar13 != 0 ||
      (lVar14 = *(longlong *)(param_4 + 0x110), lVar14 == 0)))) goto LAB_142996eb9;
  uVar4 = *(undefined8 *)(param_4 + 0xe0);
  if (*(longlong *)(param_4 + 0x648) == 0) {
    FUN_146d0de96(local_328);
  }
  else {
    puVar16 = &DAT_14c846480;
    ppvVar17 = &local_2b8;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *ppvVar17 = (void *)*puVar16;
      puVar16 = puVar16 + 1;
      ppvVar17 = ppvVar17 + 1;
    }
    FUN_146d0dcbe(&local_1f8,uVar4);
    pfVar5 = *(float **)(param_4 + 0x648);
    if (pfVar5[0x4d] <= 1.1754944e-38) {
LAB_142996fb6:
      local_128 = *(void **)(pfVar5 + 0x30);
      dStack_120 = *(double *)(pfVar5 + 0x32);
      local_118 = *(double *)(pfVar5 + 0x34);
      uStack_110 = *(undefined8 *)(pfVar5 + 0x36);
    }
    else {
      fVar1 = pfVar5[5];
      fVar2 = pfVar5[6];
      if (((pfVar5[4] == 0.0) && (fVar1 == 0.0)) &&
         ((!NAN(fVar1) && ((fVar2 == 0.0 && (!NAN(fVar2))))))) goto LAB_142996fb6;
      local_2a8 = (double)fVar2;
      dStack_2b0 = (double)fVar1;
      local_2b8 = (void *)(double)pfVar5[4];
      FUN_14013720c(&local_128,pfVar5 + 0x30,&local_2b8,0x3ff0000000000000);
    }
    local_288 = (double)pfVar5[2] + *(double *)(pfVar5 + 0x48);
    dStack_290 = (double)pfVar5[1] + *(double *)(pfVar5 + 0x46);
    local_298 = (double)*pfVar5 + *(double *)(pfVar5 + 0x44);
    local_2b8 = local_128;
    dStack_2b0 = dStack_120;
    local_2a8 = local_118;
    uStack_2a0 = uStack_110;
    uStack_280 = 0;
    local_278 = 0x3ff0000000000000;
    uStack_270 = 0x3ff0000000000000;
    local_268 = 0x3ff0000000000000;
    uStack_260 = 0;
    FUN_1447dc19e(&local_1f8,local_328);
  }
  plVar6 = *(longlong **)(param_4 + 0xf8);
  dVar27 = (double)*(float *)(param_4 + 300);
  local_140 = 1.79769313486232e+308;
  local_138 = 0xffffffff;
  local_134 = 0;
  local_38c = -1;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_188 = ZEXT816(0);
  local_178 = 0.0;
  dStack_170 = 0.0;
  local_168 = 0.0;
  dStack_160 = 0.0;
  local_158 = 0.0;
  dStack_150 = 0.0;
  local_148 = 0.0;
  local_128 = (void *)0x0;
  dStack_120 = 0.0;
  local_118 = 0.0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  local_190 = 0.0;
  uVar3 = *(uint *)(lVar14 + 0x18);
  local_e0 = dVar27;
  FUN_1449437a2(local_328,&local_1f8,local_388);
  dVar12 = local_1c8;
  dVar11 = dStack_1d0;
  dVar10 = local_1d8;
  dVar26 = dStack_1e0;
  dVar25 = local_1e8;
  dVar28 = dStack_1f0;
  dVar7 = local_1f8;
  if ((DAT_14c75f090 < (int)uVar3) && (*(char *)((longlong)plVar6 + 0x1a) == '\x01')) {
    (**(code **)(*plVar6 + 0x80))(plVar6,local_258);
    FUN_1449437a2(local_388,&local_2b8,local_328);
    FUN_1400fd046(local_258,&local_228,&local_2b8);
    local_228 = local_228 - dVar27;
    dStack_220 = dStack_220 - dVar27;
    local_218 = local_218 - dVar27;
    local_210 = local_210 + dVar27;
    local_208 = local_208 + dVar27;
    local_200 = local_200 + dVar27;
    local_2c8 = (void *)0x0;
    uStack_2c0 = 0;
    FUN_146c9fea8(*(undefined8 *)(lVar14 + 0x40),&local_2b8,&local_228);
    pvVar9 = local_2b8;
    lVar19 = (longlong)dStack_2b0._0_4_;
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,dStack_2b0._0_4_);
    if (lVar19 == 0) {
      uStack_2c0 = (ulonglong)dStack_2b0 & 0xffffffff;
    }
    else {
      FUN_144a06ca8(&local_2c8,(ulonglong)dStack_2b0 & 0xffffffff,0);
      memcpy(local_2c8,pvVar9,lVar19 << 2);
    }
    if (local_2b8 != (void *)0x0) {
      FUN_1400020a8(local_2b8);
    }
    dVar12 = local_1c8;
    dVar11 = dStack_1d0;
    dVar10 = local_1d8;
    dVar26 = dStack_1e0;
    dVar25 = local_1e8;
    dVar28 = dStack_1f0;
    dVar7 = local_1f8;
    pvVar9 = local_2c8;
    lVar19 = (longlong)(int)uStack_2c0;
    local_38c = -1;
    if (lVar19 != 0) {
      local_38c = -1;
      lVar20 = 0;
      do {
        iVar13 = *(int *)((longlong)pvVar9 + lVar20);
        pdVar18 = (double *)((longlong)iVar13 * 0x18 + *(longlong *)(lVar14 + 0x28));
        if (DAT_14c992f88 == 0) {
          dVar21 = *pdVar18;
          dVar8 = pdVar18[1];
          dVar22 = dVar8 * dVar7 - dVar28 * dVar21;
          dVar23 = pdVar18[2] * dVar28 - dVar25 * dVar8;
          dVar24 = dVar21 * dVar25 - pdVar18[2] * dVar7;
          dVar23 = dVar23 + dVar23;
          dVar24 = dVar24 + dVar24;
          dVar22 = dVar22 + dVar22;
          local_2b8 = (void *)((dVar22 * dVar28 - dVar24 * dVar25) + dVar26 * dVar23 + dVar21 +
                              dVar10);
          dStack_2b0 = (dVar25 * dVar23 - dVar7 * dVar22) + dVar26 * dVar24 + dVar8 + dVar11;
          local_2a8 = dVar22 * dVar26 + pdVar18[2] + (dVar24 * dVar7 - dVar23 * dVar28) + dVar12;
          dVar21 = (double)(**(code **)(*plVar6 + 0x70))(plVar6,&local_2b8,local_258);
          if (dVar21 < local_e0) {
            local_38c = iVar13;
            local_e0 = dVar21;
          }
        }
        else {
          local_3a0 = &local_128;
          local_3a8 = &local_190;
          FUN_146d0df2a(plVar6,&local_1f8,pdVar18,dVar27);
        }
        lVar20 = lVar20 + 4;
      } while (lVar19 * 4 != lVar20);
    }
    if (local_2c8 != (void *)0x0) {
      FUN_1400020a8(local_2c8);
    }
  }
  else if (0 < (int)uVar3) {
    local_38c = -1;
    lVar19 = 0;
    uVar15 = 0;
    do {
      lVar20 = *(longlong *)(lVar14 + 0x28);
      if (DAT_14c992f88 == 0) {
        dVar8 = *(double *)(lVar20 + lVar19);
        dVar22 = ((double *)(lVar20 + lVar19))[1];
        dVar21 = *(double *)(lVar20 + 0x10 + lVar19);
        dVar23 = dVar22 * dVar7 - dVar28 * dVar8;
        dVar24 = dVar21 * dVar28 - dVar25 * dVar22;
        dVar21 = dVar8 * dVar25 - dVar21 * dVar7;
        dVar24 = dVar24 + dVar24;
        dVar21 = dVar21 + dVar21;
        dVar23 = dVar23 + dVar23;
        local_2b8 = (void *)((dVar23 * dVar28 - dVar21 * dVar25) + dVar26 * dVar24 + dVar8 + dVar10)
        ;
        dStack_2b0 = (dVar25 * dVar24 - dVar7 * dVar23) + dVar26 * dVar21 + dVar22 + dVar11;
        local_2a8 = dVar23 * dVar26 + *(double *)(lVar20 + 0x10 + lVar19) +
                    (dVar21 * dVar7 - dVar24 * dVar28) + dVar12;
        dVar21 = (double)(**(code **)(*plVar6 + 0x70))(plVar6,&local_2b8,&local_228);
        if (dVar21 < local_e0) {
          local_38c = (int)uVar15;
          local_e0 = dVar21;
        }
      }
      else {
        local_3a0 = &local_128;
        local_3a8 = &local_190;
        FUN_146d0df2a(plVar6,&local_1f8,lVar20 + lVar19);
      }
      uVar15 = uVar15 + 1;
      lVar19 = lVar19 + 0x18;
    } while (uVar3 != uVar15);
  }
  if (DAT_14c992f88 == 0) {
    if (local_e0 < dVar27) {
      lVar19 = *(longlong *)(lVar14 + 0x28);
      lVar20 = (longlong)local_38c * 0x18;
      dVar7 = *(double *)(lVar19 + lVar20);
      dVar28 = ((double *)(lVar19 + lVar20))[1];
      dVar27 = *(double *)(lVar19 + 0x10 + lVar20);
      dVar25 = dVar28 * local_1f8 - dVar7 * dStack_1f0;
      dVar26 = dVar27 * dStack_1f0 - dVar28 * local_1e8;
      dVar27 = dVar7 * local_1e8 - local_1f8 * dVar27;
      dVar26 = dVar26 + dVar26;
      dVar27 = dVar27 + dVar27;
      dVar25 = dVar25 + dVar25;
      local_2b8 = (void *)((dVar25 * dStack_1f0 - dVar27 * local_1e8) + dStack_1e0 * dVar26 + dVar7
                          + local_1d8);
      dStack_2b0 = (local_1e8 * dVar26 - local_1f8 * dVar25) + dStack_1e0 * dVar27 + dVar28 +
                   dStack_1d0;
      local_2a8 = dVar25 * dStack_1e0 + *(double *)(lVar19 + 0x10 + lVar20) +
                  (dVar27 * local_1f8 - dVar26 * dStack_1f0) + local_1c8;
      local_140 = (double)(**(code **)(*plVar6 + 0x70))(plVar6,&local_2b8,&local_228);
      local_188 = *(undefined1 (*) [16])(*(longlong *)(lVar14 + 0x28) + lVar20);
      local_178 = *(double *)(*(longlong *)(lVar14 + 0x28) + 0x10 + lVar20);
      dStack_160 = local_2a8 - local_140 * local_218;
      dStack_170 = (double)local_2b8 - local_228 * local_140;
      local_168 = dStack_2b0 - dStack_220 * local_140;
      local_148 = local_218;
      local_158 = local_228;
      dStack_150 = dStack_220;
    }
  }
  else if (local_190 < -9.999999747378752e-05) {
    local_2a8 = local_118 / local_190;
    dStack_2b0 = dStack_120 / local_190;
    local_2b8 = (void *)((double)local_128 / local_190);
    dVar27 = (double)(**(code **)(*plVar6 + 0x70))(plVar6,&local_2b8,&local_228);
    if (dVar27 < 1.79769313486232e+308) {
      local_1d8 = (double)local_2b8 - local_1d8;
      dStack_1d0 = dStack_2b0 - dStack_1d0;
      local_1c8 = local_2a8 - local_1c8;
      dVar7 = -local_1f8;
      dStack_1f0 = -dStack_1f0;
      local_1e8 = local_1e8 * -1.0;
      dStack_1e0 = dStack_1e0 * 1.0;
      dVar26 = local_1d8 * local_1e8 - dVar7 * local_1c8;
      dVar28 = dStack_1d0 * dVar7 - local_1d8 * dStack_1f0;
      dVar25 = local_1c8 * dStack_1f0 - dStack_1d0 * local_1e8;
      dVar25 = dVar25 + dVar25;
      dVar26 = dVar26 + dVar26;
      dVar28 = dVar28 + dVar28;
      local_178 = dStack_1e0 * dVar28 + local_1c8 + (dVar26 * dVar7 - dVar25 * dStack_1f0);
      dVar7 = local_1f8 * dVar28 + local_1e8 * dVar25 + dStack_1e0 * dVar26 + dStack_1d0;
      local_188._8_4_ = SUB84(dVar7,0);
      local_188._0_8_ = (dVar28 * dStack_1f0 - dVar26 * local_1e8) + dStack_1e0 * dVar25 + local_1d8
      ;
      local_188._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      dStack_160 = local_2a8 - dVar27 * local_218;
      local_168 = dStack_2b0 - dStack_220 * dVar27;
      dStack_170 = (double)local_2b8 - local_228 * dVar27;
      local_158 = local_228;
      dStack_150 = dStack_220;
      local_148 = local_218;
      local_140 = dVar27;
    }
  }
  FUN_146d0d32b(param_4,local_188);
LAB_142996eb9:
  if ((local_d0 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142997a17 FUN_142997a17 body=69 status=ok
// SIG undefined FUN_142997a17(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142997a17(void)

{
  _DAT_14c992f90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142997a59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992f98,1);
  return;
}



// FUNCTION 142997a5c FUN_142997a5c body=69 status=ok
// SIG undefined FUN_142997a5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142997a5c(void)

{
  _DAT_14c992fa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142997a9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c992fa8,1);
  return;
}



// FUNCTION 142997aa2 FUN_142997aa2 body=239 status=ok
// SIG undefined FUN_142997aa2(void)

void FUN_142997aa2(double *param_1,double *param_2,double param_3,double param_4,int *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar3 = param_2[2];
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if ((dVar7 < param_4) && (1.0000000000000002e-10 < dVar7)) {
    dVar7 = SQRT(dVar7);
    lVar6 = (longlong)*param_5;
    *param_5 = *param_5 + 1;
    param_3 = dVar7 - param_3;
    dVar4 = param_1[2];
    dVar5 = param_1[1];
    *(double *)(param_5 + lVar6 * 0x16 + 2) = param_3 * (dVar1 / dVar7) + *param_1;
    *(double *)(param_5 + lVar6 * 0x16 + 4) = param_3 * (dVar2 / dVar7) + dVar5;
    *(double *)(param_5 + lVar6 * 0x16 + 6) = param_3 * (dVar3 / dVar7) + dVar4;
    dVar4 = param_1[1];
    *(double *)(param_5 + lVar6 * 0x16 + 8) = *param_1;
    *(double *)((longlong)(param_5 + lVar6 * 0x16 + 8) + 8) = dVar4;
    *(double *)(param_5 + lVar6 * 0x16 + 0xc) = param_1[2];
    *(double *)(param_5 + lVar6 * 0x16 + 0xe) = dVar1 / dVar7;
    *(double *)(param_5 + lVar6 * 0x16 + 0x10) = dVar2 / dVar7;
    *(double *)(param_5 + lVar6 * 0x16 + 0x12) = dVar3 / dVar7;
    *(double *)(param_5 + lVar6 * 0x16 + 0x14) = param_3;
    *(undefined1 *)(param_5 + lVar6 * 0x16 + 0x17) = 2;
    param_5[lVar6 * 0x16 + 0x16] = -1;
  }
  return;
}



// FUNCTION 142997b92 FUN_142997b92 body=2126 status=ok
// SIG undefined FUN_142997b92(void)

void FUN_142997b92(undefined1 (*param_1) [16],double param_2,double *param_3,double *param_4,
                  double param_5,double param_6,double *param_7,double *param_8,double *param_9,
                  double param_10,double param_11,double *param_12,double *param_13,double param_14,
                  char param_15)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
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
  
  *(undefined8 *)(param_1[4] + 8) = 0x7fefffffffffffff;
  *(undefined4 *)param_1[5] = 0xffffffff;
  param_1[5][4] = 0;
  param_2 = param_2 * param_5;
  dVar10 = param_13[2] * param_6 + param_2 * param_4[2] + param_3[2];
  dVar13 = param_13[1] * param_6 + param_4[1] * param_2 + param_3[1];
  dVar12 = param_6 * *param_13 + *param_4 * param_2 + *param_3;
  dVar6 = param_8[2] - param_10 * param_9[2];
  dVar3 = param_8[1] - param_9[1] * param_10;
  dVar5 = *param_8 - *param_9 * param_10;
  dVar11 = (param_8[2] + param_10 * param_9[2]) - dVar6;
  dVar7 = (param_9[1] * param_10 + param_8[1]) - dVar3;
  dVar17 = (*param_9 * param_10 + *param_8) - dVar5;
  dVar2 = -((dVar6 - dVar10) * dVar11 + (dVar5 - dVar12) * dVar17 + (dVar3 - dVar13) * dVar7) /
          (dVar11 * dVar11 + dVar17 * dVar17 + dVar7 * dVar7);
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar6 = dVar11 * dVar2 + dVar6;
  dVar3 = dVar7 * dVar2 + dVar3;
  dVar5 = dVar2 * dVar17 + dVar5;
  dVar7 = dVar10 - dVar6;
  dVar2 = dVar13 - dVar3;
  dVar11 = dVar12 - dVar5;
  dVar17 = SQRT(dVar7 * dVar7 + dVar11 * dVar11 + dVar2 * dVar2);
  if (dVar17 - param_11 < param_14) {
    dVar7 = dVar7 / dVar17;
    dVar2 = dVar2 / dVar17;
    dVar11 = dVar11 / dVar17;
    dVar6 = dVar6 + param_11 * dVar7;
    dVar3 = dVar3 + dVar2 * param_11;
    dVar5 = dVar5 + dVar11 * param_11;
    if (param_15 == '\0') {
      dVar12 = dVar12 - param_7[4];
      dVar13 = dVar13 - param_7[5];
      dVar10 = dVar10 - param_7[6];
      dVar8 = *param_7;
      dVar16 = -dVar8;
      dVar19 = -param_7[1];
      dVar9 = param_7[2] * -1.0;
      dVar15 = param_7[3] * 1.0;
      dVar14 = dVar12 * dVar9 - dVar16 * dVar10;
      dVar18 = dVar13 * dVar16 - dVar12 * dVar19;
      dVar20 = dVar10 * dVar19 - dVar13 * dVar9;
      dVar20 = dVar20 + dVar20;
      dVar14 = dVar14 + dVar14;
      dVar18 = dVar18 + dVar18;
      *(double *)*param_1 = (dVar18 * dVar19 - dVar14 * dVar9) + dVar15 * dVar20 + dVar12;
      *(double *)(*param_1 + 8) = dVar8 * dVar18 + dVar9 * dVar20 + dVar15 * dVar14 + dVar13;
      *(double *)param_1[1] = dVar15 * dVar18 + dVar10 + (dVar14 * dVar16 - dVar20 * dVar19);
      dVar5 = dVar5 - param_12[4];
      dVar3 = dVar3 - param_12[5];
      dVar6 = dVar6 - param_12[6];
      dVar19 = *param_12;
      dVar9 = -dVar19;
      dVar15 = -param_12[1];
      dVar18 = param_12[2] * -1.0;
      dVar8 = param_12[3] * 1.0;
      dVar16 = dVar3 * dVar9 - dVar5 * dVar15;
      dVar14 = dVar6 * dVar15 - dVar3 * dVar18;
      dVar20 = dVar5 * dVar18 - dVar6 * dVar9;
      dVar14 = dVar14 + dVar14;
      dVar20 = dVar20 + dVar20;
      dVar16 = dVar16 + dVar16;
      dVar13 = dVar2 * dVar9 - dVar11 * dVar15;
      dVar10 = dVar7 * dVar15 - dVar2 * dVar18;
      dVar12 = dVar11 * dVar18 - dVar7 * dVar9;
      dVar10 = dVar10 + dVar10;
      dVar12 = dVar12 + dVar12;
      dVar13 = dVar13 + dVar13;
      *(double *)(param_1[1] + 8) = (dVar16 * dVar15 - dVar20 * dVar18) + dVar8 * dVar14 + dVar5;
      *(double *)param_1[2] = dVar19 * dVar16 + dVar18 * dVar14 + dVar8 * dVar20 + dVar3;
      *(double *)(param_1[2] + 8) = dVar16 * dVar8 + dVar6 + (dVar20 * dVar9 - dVar14 * dVar15);
      dVar5 = dVar13 * dVar8 + dVar7 + (dVar12 * dVar9 - dVar10 * dVar15);
      *(double *)param_1[3] = (dVar13 * dVar15 - dVar12 * dVar18) + dVar8 * dVar10 + dVar11;
      *(double *)(param_1[3] + 8) = dVar19 * dVar13 + dVar18 * dVar10 + dVar8 * dVar12 + dVar2;
    }
    else {
      dVar5 = dVar5 - param_12[4];
      dVar3 = dVar3 - param_12[5];
      dVar6 = dVar6 - param_12[6];
      dVar15 = -*param_12;
      dVar16 = -param_12[1];
      dVar8 = param_12[2] * -1.0;
      dVar9 = param_12[3] * 1.0;
      dVar20 = dVar5 * dVar8 - dVar15 * dVar6;
      dVar18 = dVar3 * dVar15 - dVar5 * dVar16;
      dVar19 = dVar6 * dVar16 - dVar3 * dVar8;
      dVar19 = dVar19 + dVar19;
      dVar20 = dVar20 + dVar20;
      dVar18 = dVar18 + dVar18;
      dVar3 = *param_12 * dVar18 + dVar8 * dVar19 + dVar9 * dVar20 + dVar3;
      auVar1._8_4_ = SUB84(dVar3,0);
      auVar1._0_8_ = (dVar18 * dVar16 - dVar20 * dVar8) + dVar9 * dVar19 + dVar5;
      auVar1._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *param_1 = auVar1;
      *(double *)param_1[1] = dVar9 * dVar18 + dVar6 + (dVar20 * dVar15 - dVar19 * dVar16);
      dVar12 = dVar12 - param_7[4];
      dVar13 = dVar13 - param_7[5];
      dVar10 = dVar10 - param_7[6];
      dVar8 = *param_7;
      dVar5 = -dVar8;
      dVar3 = -param_7[1];
      dVar6 = param_7[2] * -1.0;
      dVar18 = param_7[3] * 1.0;
      dVar15 = dVar13 * dVar5 - dVar12 * dVar3;
      dVar16 = dVar10 * dVar3 - dVar13 * dVar6;
      dVar20 = dVar12 * dVar6 - dVar10 * dVar5;
      dVar16 = dVar16 + dVar16;
      dVar20 = dVar20 + dVar20;
      dVar15 = dVar15 + dVar15;
      dVar9 = dVar2 * dVar5 - dVar11 * dVar3;
      dVar14 = dVar7 * dVar3 - dVar2 * dVar6;
      dVar19 = dVar11 * dVar6 - dVar7 * dVar5;
      dVar14 = dVar14 + dVar14;
      dVar19 = dVar19 + dVar19;
      dVar9 = dVar9 + dVar9;
      dVar13 = dVar8 * dVar15 + dVar6 * dVar16 + dVar18 * dVar20 + dVar13;
      auVar4._8_4_ = SUB84(dVar13,0);
      auVar4._0_8_ = (dVar15 * dVar3 - dVar20 * dVar6) + dVar18 * dVar16 + dVar12;
      auVar4._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      *(undefined1 (*) [16])(param_1[1] + 8) = auVar4;
      *(double *)(param_1[2] + 8) = dVar15 * dVar18 + dVar10 + (dVar20 * dVar5 - dVar16 * dVar3);
      dVar5 = -(dVar9 * dVar18 + dVar7 + (dVar19 * dVar5 - dVar14 * dVar3));
      *(double *)param_1[3] = -((dVar9 * dVar3 - dVar19 * dVar6) + dVar18 * dVar14 + dVar11);
      *(double *)(param_1[3] + 8) = -(dVar8 * dVar9 + dVar6 * dVar14 + dVar18 * dVar19 + dVar2);
    }
    *(double *)param_1[4] = dVar5;
    *(double *)(param_1[4] + 8) = dVar17 - param_11;
    *(undefined4 *)param_1[5] = 0xffffffff;
    param_1[5][4] = 1;
  }
  return;
}



// FUNCTION 1429983e0 FUN_1429983e0 body=537 status=ok
// SIG undefined FUN_1429983e0(void)

void FUN_1429983e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_1;
  local_80 = param_1[1];
  lVar2 = param_1[2];
  uVar1 = *(undefined1 *)(lVar2 + 0x1c);
  local_98 = param_2;
  local_90 = param_3;
  switch(uVar1) {
  case 0:
    local_a8 = local_80;
    FUN_146d0f14c(param_2,param_3,lVar2);
    break;
  case 1:
    local_a8 = local_80;
    FUN_146d100b8(param_2,param_3,lVar2);
    break;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142998436_caseD_2:
    local_a8 = local_80;
    FUN_146d0f14c(param_2,param_3,lVar2);
    if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_a8 = local_80;
    FUN_146d1059e(param_2,param_3,lVar2);
    break;
  case 4:
    FUN_1447dc19e(lVar2 + 0x30,local_78,param_1[3]);
    FUN_14299909a(*(undefined8 *)(lVar2 + 0x20),local_78,&local_98);
    break;
  case 8:
    local_a8 = local_80;
    FUN_146d10a84(param_2,param_3,lVar2);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_a8 = local_80;
      FUN_146d12302(param_2,param_3,lVar2);
      break;
    case 0x41:
      local_a8 = local_80;
      FUN_146d1280a(param_2,param_3,lVar2);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142998436_caseD_2;
    case 0x43:
      local_a8 = local_80;
      FUN_146d12db4(param_2,param_3,lVar2);
      break;
    case 0x48:
      local_a8 = local_80;
      FUN_146d13334(param_2,param_3,lVar2);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_a8 = local_80;
        FUN_146d10f6a(param_2,param_3,lVar2);
        break;
      case 0x81:
        local_a8 = local_80;
        FUN_146d11450(param_2,param_3,lVar2);
        break;
      default:
        goto switchD_142998436_caseD_2;
      case 0x83:
        local_a8 = local_80;
        FUN_146d11936(param_2,param_3,lVar2);
        break;
      case 0x88:
        local_a8 = local_80;
        FUN_146d11e1c(param_2,param_3,lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1429985fa FUN_1429985fa body=537 status=ok
// SIG undefined FUN_1429985fa(void)

void FUN_1429985fa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_1;
  local_80 = param_1[1];
  lVar2 = param_1[2];
  uVar1 = *(undefined1 *)(lVar2 + 0x1c);
  local_98 = param_2;
  local_90 = param_3;
  switch(uVar1) {
  case 0:
    local_a8 = local_80;
    FUN_146d16d28(param_2,param_3,lVar2);
    break;
  case 1:
    local_a8 = local_80;
    FUN_146d1720e(param_2,param_3,lVar2);
    break;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142998650_caseD_2:
    local_a8 = local_80;
    FUN_146d16d28(param_2,param_3,lVar2);
    if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_a8 = local_80;
    FUN_146d17708(param_2,param_3,lVar2);
    break;
  case 4:
    FUN_1447dc19e(lVar2 + 0x30,local_78,param_1[3]);
    FUN_142999533(*(undefined8 *)(lVar2 + 0x20),local_78,&local_98);
    break;
  case 8:
    local_a8 = local_80;
    FUN_146d17be8(param_2,param_3,lVar2);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_a8 = local_80;
      FUN_146d19466(param_2,param_3,lVar2);
      break;
    case 0x41:
      local_a8 = local_80;
      FUN_146d1994c(param_2,param_3,lVar2);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142998650_caseD_2;
    case 0x43:
      local_a8 = local_80;
      FUN_146d19e32(param_2,param_3,lVar2);
      break;
    case 0x48:
      local_a8 = local_80;
      FUN_146d1a318(param_2,param_3,lVar2);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_a8 = local_80;
        FUN_146d180ce(param_2,param_3,lVar2);
        break;
      case 0x81:
        local_a8 = local_80;
        FUN_146d185b4(param_2,param_3,lVar2);
        break;
      default:
        goto switchD_142998650_caseD_2;
      case 0x83:
        local_a8 = local_80;
        FUN_146d18a9a(param_2,param_3,lVar2);
        break;
      case 0x88:
        local_a8 = local_80;
        FUN_146d18f80(param_2,param_3,lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 142998814 FUN_142998814 body=537 status=ok
// SIG undefined FUN_142998814(void)

void FUN_142998814(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_1;
  local_80 = param_1[1];
  lVar2 = param_1[2];
  uVar1 = *(undefined1 *)(lVar2 + 0x1c);
  local_98 = param_2;
  local_90 = param_3;
  switch(uVar1) {
  case 0:
    local_a8 = local_80;
    FUN_146d1e00e(param_2,param_3,lVar2);
    break;
  case 1:
    local_a8 = local_80;
    FUN_146d1e4f4(param_2,param_3,lVar2);
    break;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_14299886a_caseD_2:
    local_a8 = local_80;
    FUN_146d1e00e(param_2,param_3,lVar2);
    if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_a8 = local_80;
    FUN_146d1e9da(param_2,param_3,lVar2);
    break;
  case 4:
    FUN_1447dc19e(lVar2 + 0x30,local_78,param_1[3]);
    FUN_1429999c3(*(undefined8 *)(lVar2 + 0x20),local_78,&local_98);
    break;
  case 8:
    local_a8 = local_80;
    FUN_146d1eec0(param_2,param_3,lVar2);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_a8 = local_80;
      FUN_146d20738(param_2,param_3,lVar2);
      break;
    case 0x41:
      local_a8 = local_80;
      FUN_146d20c1e(param_2,param_3,lVar2);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_14299886a_caseD_2;
    case 0x43:
      local_a8 = local_80;
      FUN_146d21104(param_2,param_3,lVar2);
      break;
    case 0x48:
      local_a8 = local_80;
      FUN_146d215ea(param_2,param_3,lVar2);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_a8 = local_80;
        FUN_146d1f3a6(param_2,param_3,lVar2);
        break;
      case 0x81:
        local_a8 = local_80;
        FUN_146d1f886(param_2,param_3,lVar2);
        break;
      default:
        goto switchD_14299886a_caseD_2;
      case 0x83:
        local_a8 = local_80;
        FUN_146d1fd6c(param_2,param_3,lVar2);
        break;
      case 0x88:
        local_a8 = local_80;
        FUN_146d20252(param_2,param_3,lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 142998a2e FUN_142998a2e body=537 status=ok
// SIG undefined FUN_142998a2e(void)

void FUN_142998a2e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_1;
  local_80 = param_1[1];
  lVar2 = param_1[2];
  uVar1 = *(undefined1 *)(lVar2 + 0x1c);
  local_98 = param_2;
  local_90 = param_3;
  switch(uVar1) {
  case 0:
    local_a8 = local_80;
    FUN_146d21ad0(param_2,param_3,lVar2);
    break;
  case 1:
    local_a8 = local_80;
    FUN_146d21fb6(param_2,param_3,lVar2);
    break;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142998a84_caseD_2:
    local_a8 = local_80;
    FUN_146d21ad0(param_2,param_3,lVar2);
    if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_a8 = local_80;
    FUN_146d2249c(param_2,param_3,lVar2);
    break;
  case 4:
    FUN_1447dc19e(lVar2 + 0x30,local_78,param_1[3]);
    FUN_142999bf1(*(undefined8 *)(lVar2 + 0x20),local_78,&local_98);
    break;
  case 8:
    local_a8 = local_80;
    FUN_146d22982(param_2,param_3,lVar2);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_a8 = local_80;
      FUN_146d241fa(param_2,param_3,lVar2);
      break;
    case 0x41:
      local_a8 = local_80;
      FUN_146d246e0(param_2,param_3,lVar2);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142998a84_caseD_2;
    case 0x43:
      local_a8 = local_80;
      FUN_146d24bc6(param_2,param_3,lVar2);
      break;
    case 0x48:
      local_a8 = local_80;
      FUN_146d250ac(param_2,param_3,lVar2);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_a8 = local_80;
        FUN_146d22e68(param_2,param_3,lVar2);
        break;
      case 0x81:
        local_a8 = local_80;
        FUN_146d2334e(param_2,param_3,lVar2);
        break;
      default:
        goto switchD_142998a84_caseD_2;
      case 0x83:
        local_a8 = local_80;
        FUN_146d2382e(param_2,param_3,lVar2);
        break;
      case 0x88:
        local_a8 = local_80;
        FUN_146d23d14(param_2,param_3,lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 142998c48 FUN_142998c48 body=537 status=ok
// SIG undefined FUN_142998c48(void)

void FUN_142998c48(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_1;
  local_80 = param_1[1];
  lVar2 = param_1[2];
  uVar1 = *(undefined1 *)(lVar2 + 0x1c);
  local_98 = param_2;
  local_90 = param_3;
  switch(uVar1) {
  case 0:
    local_a8 = local_80;
    FUN_146d25592(param_2,param_3,lVar2);
    break;
  case 1:
    local_a8 = local_80;
    FUN_146d25a78(param_2,param_3,lVar2);
    break;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142998c9e_caseD_2:
    local_a8 = local_80;
    FUN_146d25592(param_2,param_3,lVar2);
    if ((local_18 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_a8 = local_80;
    FUN_146d25f5e(param_2,param_3,lVar2);
    break;
  case 4:
    FUN_1447dc19e(lVar2 + 0x30,local_78,param_1[3]);
    FUN_142999e1f(*(undefined8 *)(lVar2 + 0x20),local_78,&local_98);
    break;
  case 8:
    local_a8 = local_80;
    FUN_146d26444(param_2,param_3,lVar2);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_a8 = local_80;
      FUN_146d27cbc(param_2,param_3,lVar2);
      break;
    case 0x41:
      local_a8 = local_80;
      FUN_146d281a2(param_2,param_3,lVar2);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142998c9e_caseD_2;
    case 0x43:
      local_a8 = local_80;
      FUN_146d28688(param_2,param_3,lVar2);
      break;
    case 0x48:
      local_a8 = local_80;
      FUN_146d28b6e(param_2,param_3,lVar2);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_a8 = local_80;
        FUN_146d2692a(param_2,param_3,lVar2);
        break;
      case 0x81:
        local_a8 = local_80;
        FUN_146d26e10(param_2,param_3,lVar2);
        break;
      default:
        goto switchD_142998c9e_caseD_2;
      case 0x83:
        local_a8 = local_80;
        FUN_146d272f6(param_2,param_3,lVar2);
        break;
      case 0x88:
        local_a8 = local_80;
        FUN_146d277d6(param_2,param_3,lVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_c8);
}



// FUNCTION 142998e62 FUN_142998e62 body=371 status=ok
// SIG undefined FUN_142998e62(void)

void FUN_142998e62(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_142998ef3_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_142998ef3_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_142998eb9_caseD_82;
  case 3:
switchD_142998ef3_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_142998e62(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_142998ef3_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x40:
      goto switchD_142998ef3_caseD_0;
    case 0x41:
      goto switchD_142998ef3_caseD_1;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      break;
    case 0x43:
      goto switchD_142998ef3_caseD_3;
    case 0x48:
      goto switchD_142998ef3_caseD_8;
    default:
      switch(uVar1) {
      case 0x80:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x81:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x83:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      case 0x88:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
switchD_142998eb9_caseD_82:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1429983e0(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 14299909a FUN_14299909a body=557 status=ok
// SIG undefined FUN_14299909a(void)

void FUN_14299909a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999214:
    FUN_146d100b8(uVar2,uVar3,param_1);
    goto LAB_1429990fc;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1429990d7_caseD_2:
    local_98 = param_3[3];
    FUN_146d0f14c(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_1429991da:
    FUN_146d1059e(uVar2,uVar3,param_1);
    goto LAB_1429990fc;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_14299909a(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_1429990fc;
  case 8:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999231:
    FUN_146d10a84(uVar2,uVar3,param_1);
    goto LAB_1429990fc;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999214;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1429990d7_caseD_2;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_1429991da;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999231;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d10f6a(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d11450(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_1429990d7_caseD_2;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d11936(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_98 = param_3[3];
        FUN_146d11e1c(*param_3,param_3[1],param_1);
      }
      goto LAB_1429990fc;
    }
  }
  FUN_146d0f14c(uVar2,uVar3,param_1);
LAB_1429990fc:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1429992c8 FUN_1429992c8 body=618 status=ok
// SIG undefined FUN_1429992c8(void)

void FUN_1429992c8(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [104];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
    break;
  case 1:
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_14299947e:
    FUN_146d13d32(uVar2,uVar3,param_1);
    goto LAB_1429993d5;
  case 2:
  case 5:
  case 6:
  case 7:
switchD_142999319_caseD_82:
    local_98 = param_3[3];
    FUN_146d1384c(*param_3,param_3[1],param_1);
    if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 3:
    local_98 = param_3[3];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_142999452:
    FUN_146d13e30(uVar2,uVar3,param_1);
    goto LAB_1429993d5;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_1429992c8(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
    goto LAB_1429993d5;
  case 8:
    local_90 = param_3[3];
    local_98 = *(undefined8 *)param_3[2];
    uVar2 = *param_3;
    uVar3 = param_3[1];
LAB_1429993d0:
    FUN_140f1a1a0(uVar2,uVar3,param_1);
    goto LAB_1429993d5;
  default:
    switch(uVar1) {
    case 0x40:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      break;
    case 0x41:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_14299947e;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_142999319_caseD_82;
    case 0x43:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_98 = param_3[3];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_142999452;
    case 0x48:
      param_1 = *(longlong *)(param_1 + 0x28);
      local_90 = param_3[3];
      local_98 = *(undefined8 *)param_3[2];
      uVar2 = *param_3;
      uVar3 = param_3[1];
      goto LAB_1429993d0;
    default:
      switch(uVar1) {
      case 0x80:
        local_98 = param_3[3];
        FUN_146d14750(*param_3,param_3[1],param_1);
        break;
      case 0x81:
        local_98 = param_3[3];
        FUN_146d14c36(*param_3,param_3[1],param_1);
        break;
      default:
        goto switchD_142999319_caseD_82;
      case 0x83:
        local_98 = param_3[3];
        FUN_146d1511c(*param_3,param_3[1],param_1);
        break;
      case 0x88:
        local_90 = param_3[3];
        local_98 = *(undefined8 *)param_3[2];
        FUN_140aba258(*param_3,param_3[1],param_1);
      }
      goto LAB_1429993d5;
    }
  }
  FUN_146d1384c(uVar2,uVar3,param_1);
LAB_1429993d5:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_b8);
}


