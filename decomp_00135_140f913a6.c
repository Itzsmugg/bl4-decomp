// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f913a6 FUN_140f913a6 body=142 status=ok
// SIG undefined FUN_140f913a6(void)

void FUN_140f913a6(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140f91434 FUN_140f91434 body=135 status=ok
// SIG undefined FUN_140f91434(void)

void FUN_140f91434(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_2 + 8) != -1) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
    uVar1 = *(uint *)(param_2 + 8);
    lVar2 = param_1 + 0x228;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x238);
    }
    uVar3 = uVar1 + 0x1f;
    if (-1 < (int)uVar1) {
      uVar3 = uVar1;
    }
    if ((*(uint *)(lVar2 + (longlong)((int)uVar3 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
      FUN_140f48678(param_1 + 0x218,uVar1,1);
    }
    *(undefined4 *)(param_2 + 8) = 0xffffffff;
                    /* WARNING: Could not recover jumptable at 0x000140f914ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1f0));
    return;
  }
  return;
}



// FUNCTION 140f914bc FUN_140f914bc body=1245 status=ok
// SIG undefined FUN_140f914bc(void)

void FUN_140f914bc(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  undefined4 local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  longlong local_a8 [5];
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 *local_78;
  int local_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined4 local_58;
  code *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = param_1[10];
  if (lVar6 == 0) {
    lVar6 = FUN_140f9199a(param_1 + 7);
    if (lVar6 != 0) {
      puVar3 = (uint *)(lVar6 + 0x90);
      if ((((*(int *)(lVar6 + 0x94) == 0) || (uVar4 = *puVar3, (int)uVar4 < 0)) ||
          (DAT_14c9647dc <= (int)uVar4)) ||
         (((plVar10 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
           plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(lVar6 + 0x94))) ||
          (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar8 = *plVar10, lVar8 == 0)))))) {
        if (*(longlong *)(lVar6 + 0x98) != 0) {
          lVar8 = FUN_140007850();
          cVar5 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar8 == 0) || (cVar5 == '\0')) {
            FUN_14485c47a(puVar3,lVar8);
            if (lVar8 == 0) goto LAB_140f9150d;
          }
          else {
            uVar4 = *(uint *)(lVar8 + 0xc);
            if ((int)uVar4 < DAT_14c9647dc) {
              lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
            }
            else {
              lVar7 = 0;
            }
            if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(puVar3,lVar8);
            }
          }
          if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_140f915bf;
        }
      }
      else {
LAB_140f915bf:
        if (DAT_14c949118 == 0) {
          local_50 = FUN_140631fbe;
          lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
          DAT_14c949118 = lVar7;
          FUN_1446f470e(local_a8,L"Class",1);
          local_b8 = &LAB_146891e90;
          local_c0 = &LAB_146273097;
          local_d0 = L"Engine";
          local_c8 = 199;
          local_d8 = 0x20;
          local_e0 = 0x10000000;
          local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,8);
          local_b0 = &local_50;
          FUN_14574b4b2(lVar7);
          DAT_14c949118 = lVar7;
          uVar12 = FUN_144a7a812();
          lVar7 = DAT_14c949118;
          uVar9 = FUN_1449e2fb2();
          local_e8 = L"Class";
          FUN_14574b446(uVar9,lVar7,uVar12,L"/Script/CoreUObject");
        }
        if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
            (lVar7 = FUN_140d12354(), lVar7 != 0)) &&
           ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)))) {
          local_a8[1] = 0;
          local_a8[2] = 0;
          local_a8[3] = 0;
          local_a8[4] = 0;
          local_80 = 0x10000;
          local_7c = 0;
          local_78 = (undefined8 *)0x0;
          uVar12 = 0;
          local_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          if (*(int *)((longlong)param_1 + 100) != 0) {
            uVar4 = *(uint *)(param_1 + 0xc);
            uVar12 = 0;
            if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
              puVar11 = (undefined8 *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if ((puVar11 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar11 + 2) != *(int *)((longlong)param_1 + 100) ||
                  ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) {
                uVar12 = 0;
              }
              else {
                uVar12 = *puVar11;
              }
            }
          }
          local_a8[0] = lVar6;
          FUN_140fb04f0(local_a8,uVar12);
          FUN_140fb05f2(local_a8,&local_50);
          plVar1 = local_48;
          param_1[10] = (longlong)local_50;
          local_50 = (code *)0x0;
          plVar10 = (longlong *)param_1[0xb];
          if (local_48 == plVar10) {
LAB_140f91917:
            plVar10 = local_48;
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_48 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_48)(local_48);
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
          else {
            local_48 = (longlong *)0x0;
            param_1[0xb] = (longlong)plVar1;
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
              goto LAB_140f91917;
            }
          }
          FUN_140861e20(local_68,uStack_60 & 0xffffffff);
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          if (local_70 == 0) {
LAB_140f91740:
            if (local_78 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_78 != (undefined8 *)0x0) {
            (**(code **)*local_78)(local_78,0);
            FUN_1446efa72(&local_78,0,0,0x10);
            local_70 = 0;
            goto LAB_140f91740;
          }
          lVar6 = param_1[10];
          if (lVar6 != 0) goto LAB_140f914ef;
        }
      }
    }
  }
  else {
LAB_140f914ef:
    if (((*(char *)(lVar6 + 0x68) != '\x01') || (*(char *)(lVar6 + 0x69) != '\x01')) ||
       (*(char *)(lVar6 + 0x6a) != '\x01')) goto LAB_140f91514;
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
LAB_140f9150d:
  *(undefined1 *)(param_1 + 0x38) = 1;
LAB_140f91514:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f9199a FUN_140f9199a body=122 status=ok
// SIG undefined FUN_140f9199a(void)

longlong FUN_140f9199a(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    lVar1 = FUN_140a4bd48(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f91a16 FUN_140f91a16 body=4770 status=ok
// SIG undefined FUN_140f91a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f91a16(longlong param_1,undefined8 param_2)

{
  double dVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 *puVar18;
  int iVar19;
  int iVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_3a8 [32];
  wchar_t *local_388;
  undefined4 local_380;
  undefined8 local_378;
  wchar_t *local_370;
  wchar_t *local_368;
  code *local_360;
  undefined1 *local_358;
  code **local_350;
  code *local_348;
  code *local_340;
  undefined8 local_338;
  longlong local_330;
  code *local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  code *local_2c8;
  undefined1 local_2c0 [8];
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined4 local_298;
  char local_294;
  undefined4 local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined1 local_270 [48];
  undefined1 *local_240;
  undefined4 local_238;
  undefined4 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined **local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  ulonglong uStack_1c8;
  char local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  code *local_198 [2];
  undefined8 *local_188;
  code *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  byte local_126;
  undefined1 local_125;
  uint local_124;
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [5];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar9 = FUN_140f9199a(param_1 + 0x38);
  if (lVar9 == 0) goto LAB_140f91dd1;
  if (((((*(int *)(lVar9 + 0x94) == 0) || (uVar2 = *(uint *)(lVar9 + 0x90), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar16 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(lVar9 + 0x94))))) ||
     (((*(uint *)(plVar16 + 1) & 0x10200000) != 0 || (lVar11 = *plVar16, lVar11 == 0)))) {
    if (*(longlong *)(lVar9 + 0x98) == 0) goto LAB_140f91dd1;
    lVar11 = FUN_140007850(lVar9 + 0x98);
    cVar7 = (*(code *)PTR_FUN_14c758760)();
    lVar10 = DAT_14c9647c8;
    if ((lVar11 == 0) || (cVar7 == '\0')) {
      if (lVar11 == 0) {
        *(undefined8 *)(lVar9 + 0x90) = 0;
        goto LAB_140f91dd1;
      }
      uVar2 = *(uint *)(lVar11 + 0xc);
      *(uint *)(lVar9 + 0x90) = uVar2;
      if (DAT_14c9647dc <= (int)uVar2) goto LAB_140f91e4c;
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
LAB_140f91d9c:
      iVar8 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar20 = DAT_14c964868 + 1;
        bVar23 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar23) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar20);
        }
        LOCK();
        iVar8 = *(int *)(lVar10 + 0x10);
        bVar23 = iVar8 == 0;
        if (bVar23) {
          *(int *)(lVar10 + 0x10) = iVar20;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar23) {
          iVar8 = iVar20;
        }
      }
      *(int *)(lVar9 + 0x94) = iVar8;
    }
    else {
      uVar2 = *(uint *)(lVar11 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar2 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *(uint *)(lVar9 + 0x90) = uVar2;
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(lVar10 + (ulonglong)(uVar2 >> 0x10) * 8);
          goto LAB_140f91d9c;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(lVar9 + 0x90) = uVar2;
LAB_140f91e4c:
        lVar10 = 0;
        goto LAB_140f91d9c;
      }
    }
    if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0) goto LAB_140f91dd1;
  }
  if (DAT_14c949118 == 0) {
    local_328 = FUN_140631fbe;
    lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar10;
    FUN_1446f470e(&local_158,L"Class",1);
    local_358 = &LAB_146891e90;
    local_360 = (code *)&LAB_146273097;
    local_370 = L"Engine";
    local_368 = (wchar_t *)CONCAT44(local_368._4_4_,199);
    local_378 = 0x20;
    local_380 = 0x10000000;
    local_388._0_4_ = 8;
    local_350 = &local_328;
    FUN_14574b4b2(lVar10);
    DAT_14c949118 = lVar10;
    if (DAT_14c951858 == 0) {
      local_350 = (code **)&local_2b8;
      local_2b8 = FUN_1449e2820;
      local_340 = FUN_14081d0ea;
      local_348 = FUN_14081d0ea;
      local_358 = &LAB_1468c5283;
      local_360 = FUN_142809da0;
      local_368 = L"Engine";
      local_370 = (wchar_t *)0x400000000;
      local_378 = CONCAT44(local_378._4_4_,0x10000000);
      local_380 = 8;
      local_388._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar17 = DAT_14c951858;
    lVar10 = DAT_14c949118;
    uVar14 = FUN_1449e2fb2();
    local_388 = L"Class";
    FUN_14574b446(uVar14,lVar10,lVar17,L"/Script/CoreUObject");
  }
  if ((((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
      (lVar10 = FUN_140d12354(), lVar10 == 0)) ||
     ((*(int *)(lVar11 + 0x38) < *(int *)(lVar10 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30)))) {
LAB_140f91dd1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_3a8);
  }
  local_138 = 0;
  uStack_130 = 0;
  local_158 = (code *)0x0;
  uStack_150 = 0;
  local_128 = 0x100;
  local_125 = 0;
  local_124 = 8;
  local_148 = 0;
  local_118 = 0;
  local_108 = (longlong *)0x0;
  local_126 = local_126 & 0xe0 | 6;
  if (*(int *)(param_1 + 100) != 0) {
    uVar2 = *(uint *)(param_1 + 0x60);
    local_148 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar16 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar16 == (longlong *)0x0) ||
         (((int)plVar16[2] != *(int *)(param_1 + 100) ||
          ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) {
        local_148 = 0;
      }
      else {
        local_148 = *plVar16;
      }
    }
  }
  if (*(int *)(param_1 + 0x6c) == 0) {
LAB_140f927d0:
    uStack_140 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x68);
    uStack_140 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar15 = (undefined8 *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar15 == (undefined8 *)0x0) ||
         ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x6c) ||
          ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_140f927d0;
      uStack_140 = *puVar15;
    }
  }
  puVar21 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
    puVar21 = *(undefined4 **)(lVar9 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar11 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar11);
    DAT_14c947fe0 = lVar11;
  }
  FUN_140045924(DAT_14c947fe0,&local_2b8,puVar21,1);
  local_158 = local_2b8;
  local_125 = 3;
  local_128 = CONCAT11(local_128._1_1_,1);
  if (local_148 == 0) {
    local_124 = 0x40;
  }
  else {
    local_124 = *(uint *)(local_148 + 8) & 0x69;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    dVar1 = *(double *)(param_1 + 0xb0);
    dVar29 = *(double *)(param_1 + 0xb8);
    uVar24 = (undefined4)*(undefined8 *)(param_1 + 0xc0);
    uVar25 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0xc0) >> 0x20);
  }
  else {
    dVar26 = *(double *)(param_1 + 0x90);
    dVar1 = *(double *)(param_1 + 0x98);
    uVar24 = SUB84(dVar1,0);
    uVar25 = (undefined4)((ulonglong)dVar1 >> 0x20);
    dVar29 = 0.0;
    if ((((dVar26 != 0.0) || (NAN(dVar26))) || (dVar1 != 0.0)) || (NAN(dVar1))) {
      dVar29 = atan2(dVar1,dVar26);
      dVar29 = dVar29 * 57.29577951308232;
      dVar26 = *(double *)(param_1 + 0x90);
      uVar24 = (undefined4)*(undefined8 *)(param_1 + 0x98);
      uVar25 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
    }
    dVar26 = SQRT(dVar26 * dVar26 +
                  (double)CONCAT44(uVar25,uVar24) * (double)CONCAT44(uVar25,uVar24));
    dVar1 = *(double *)(param_1 + 0xa0);
    uVar24 = 0;
    uVar25 = 0;
    if (((dVar1 != 0.0) || (NAN(dVar1))) || ((dVar26 != 0.0 || (NAN(dVar26))))) {
      dVar1 = atan2(dVar1,dVar26);
      dVar1 = dVar1 * 57.29577951308232;
    }
    else {
      dVar1 = 0.0;
    }
  }
  auVar27._8_8_ = dVar29;
  auVar27._0_8_ = dVar1;
  auVar27 = divpd(auVar27,_DAT_1499387d0);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = (double)CONCAT44(uVar25,uVar24) / 360.0;
  auVar27 = roundpd(auVar27,auVar27,3);
  auVar28 = roundpd(auVar28,auVar28,3);
  dVar5 = (dVar1 - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar6 = (dVar29 - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar30 = ((double)CONCAT44(uVar25,uVar24) - auVar28._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar31 = (0.0 - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar29 = sin(dVar5);
  dVar1 = sin(dVar6);
  dVar26 = sin(dVar30);
  sin(dVar31);
  dVar5 = cos(dVar5);
  dVar6 = cos(dVar6);
  dVar30 = cos(dVar30);
  cos(dVar31);
  dVar31 = dVar1 * dVar29 * dVar26 + dVar6 * dVar5 * dVar30;
  local_328 = (code *)(dVar29 * dVar1 * dVar30 - dVar5 * dVar6 * dVar26);
  dStack_320 = -(dVar29 * dVar6 * dVar30) - dVar5 * dVar1 * dVar26;
  local_318._8_4_ = SUB84(dVar31,0);
  local_318._0_8_ = -(dVar6 * dVar29 * dVar26) + dVar1 * dVar5 * dVar30;
  local_318._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  local_308 = *(undefined8 *)(param_1 + 0x78);
  uStack_300 = *(undefined8 *)(param_1 + 0x80);
  local_2f8 = *(undefined8 *)(param_1 + 0x88);
  uStack_2f0 = 0;
  local_2e8 = 0x3ff0000000000000;
  uStack_2e0 = 0x3ff0000000000000;
  local_2d8 = 0x3ff0000000000000;
  uStack_2d0 = 0;
  if (((*(int *)(lVar9 + 0x94) == 0) || (uVar2 = *(uint *)(lVar9 + 0x90), (int)uVar2 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar2 ||
      ((((plVar16 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)(lVar9 + 0x94))) ||
        ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) || (lVar11 = *plVar16, lVar11 == 0)))))) {
    if (*(longlong *)(lVar9 + 0x98) != 0) {
      lVar11 = FUN_140007850(lVar9 + 0x98);
      cVar7 = (*(code *)PTR_FUN_14c758760)();
      lVar10 = DAT_14c9647c8;
      if ((lVar11 == 0) || (cVar7 == '\0')) {
        if (lVar11 != 0) {
          uVar2 = *(uint *)(lVar11 + 0xc);
          *(uint *)(lVar9 + 0x90) = uVar2;
          if (DAT_14c9647dc <= (int)uVar2) goto LAB_140f927dd;
          lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          goto LAB_140f9220c;
        }
        *(undefined8 *)(lVar9 + 0x90) = 0;
      }
      else {
        uVar2 = *(uint *)(lVar11 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar2 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(lVar9 + 0x90) = uVar2;
            lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(lVar10 + (ulonglong)(uVar2 >> 0x10) * 8);
LAB_140f9220c:
            iVar8 = *(int *)(lVar10 + 0x10);
            if (*(int *)(lVar10 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar20 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar23) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar20);
              }
              LOCK();
              iVar8 = *(int *)(lVar10 + 0x10);
              bVar23 = iVar8 == 0;
              if (bVar23) {
                *(int *)(lVar10 + 0x10) = iVar20;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar23) {
                iVar8 = iVar20;
              }
            }
            *(int *)(lVar9 + 0x94) = iVar8;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(lVar9 + 0x90) = uVar2;
LAB_140f927dd:
          lVar10 = 0;
          goto LAB_140f9220c;
        }
        if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_140f920f9;
      }
    }
  }
  else {
LAB_140f920f9:
    if (DAT_14c949118 == 0) {
      local_2c8 = FUN_140631fbe;
      lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar10;
      FUN_1446f470e(local_2c0,L"Class",1);
      local_358 = &LAB_146891e90;
      local_360 = (code *)&LAB_146273097;
      local_370 = L"Engine";
      local_368 = (wchar_t *)CONCAT44(local_368._4_4_,199);
      local_378 = 0x20;
      local_380 = 0x10000000;
      local_388._0_4_ = 8;
      local_350 = &local_2c8;
      FUN_14574b4b2(lVar10);
      DAT_14c949118 = lVar10;
      if (DAT_14c951858 == 0) {
        local_2b8 = FUN_1449e2820;
        local_340 = FUN_14081d0ea;
        local_348 = FUN_14081d0ea;
        local_358 = &LAB_1468c5283;
        local_360 = FUN_142809da0;
        local_368 = L"Engine";
        local_370 = (wchar_t *)0x400000000;
        local_378 = CONCAT44(local_378._4_4_,0x10000000);
        local_380 = 8;
        local_388._0_4_ = 0x50;
        local_350 = (code **)&local_2b8;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar17 = DAT_14c951858;
      lVar10 = DAT_14c949118;
      uVar14 = FUN_1449e2fb2();
      local_388 = L"Class";
      FUN_14574b446(uVar14,lVar10,lVar17,L"/Script/CoreUObject");
    }
    if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
       ((lVar10 = FUN_140d12354(), lVar10 != 0 &&
        (*(int *)(lVar10 + 0x38) <= *(int *)(lVar11 + 0x38))))) {
      lVar17 = 0;
      if (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
          lVar10 + 0x30) {
        lVar17 = lVar11;
      }
      goto LAB_140f92244;
    }
  }
  lVar17 = 0;
LAB_140f92244:
  pcVar12 = (code *)FUN_141037e38(param_2,lVar17,&local_328,&local_158);
  if (pcVar12 == (code *)0x0) {
    DAT_14cb89f80 = DAT_14cb89f80 + 1;
    *(undefined8 *)(param_1 + 0x1c4) = 0;
    FUN_1447f69b6(param_1 + 0x20);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x1b0);
    if ((*(longlong *)(pcVar12 + 0xd00) != *(longlong *)(param_1 + 0x1a8)) ||
       (*(int *)(pcVar12 + 0xd08) != iVar8)) {
      *(longlong *)(pcVar12 + 0xd00) = *(longlong *)(param_1 + 0x1a8);
      *(int *)(pcVar12 + 0xd08) = iVar8;
      *(undefined8 *)(pcVar12 + 0xd10) = 0;
    }
    local_338 = *(undefined8 *)(param_1 + 0x50);
    local_330 = *(longlong *)(param_1 + 0x58);
    if (local_330 != 0) {
      LOCK();
      *(int *)(local_330 + 8) = *(int *)(local_330 + 8) + 1;
      UNLOCK();
    }
    uStack_2b0 = *(undefined4 *)(param_1 + 0x90);
    uStack_2ac = *(undefined4 *)(param_1 + 0x94);
    uStack_2a8 = *(undefined4 *)(param_1 + 0x98);
    uStack_2a4 = *(undefined4 *)(param_1 + 0x9c);
    uStack_2a0 = *(undefined8 *)(param_1 + 0xa0);
    local_294 = *(char *)(param_1 + 0xac);
    if (local_294 == '\x01') {
      local_298 = *(undefined4 *)(param_1 + 0xa8);
    }
    local_1c0 = *(char *)(param_1 + 0x1a0);
    local_2b8 = pcVar12;
    if (local_1c0 == '\x01') {
      local_290 = *(undefined4 *)(param_1 + 0xd0);
      local_288 = *(undefined8 *)(param_1 + 0xd8);
      local_280 = *(undefined4 *)(param_1 + 0xe0);
      local_278 = 0;
      local_240 = (undefined1 *)0x0;
      lVar11 = param_1 + 0xf0;
      if (*(longlong *)(param_1 + 0x120) != 0) {
        lVar11 = *(longlong *)(param_1 + 0x120);
      }
      FUN_1400709d4(local_270,lVar11,*(undefined4 *)(param_1 + 0x128),0);
      local_230 = *(undefined4 *)(param_1 + 0x130);
      local_228 = *(undefined8 *)(param_1 + 0x138);
      local_220 = *(undefined4 *)(param_1 + 0x140);
      local_218 = *(undefined8 *)(param_1 + 0x148);
      local_210 = *(undefined4 *)(param_1 + 0x150);
      local_208 = 0;
      local_200 = *(undefined8 *)(param_1 + 0x160);
      uStack_1f8 = *(undefined8 *)(param_1 + 0x168);
      local_1f0 = *(undefined8 *)(param_1 + 0x170);
      uStack_1e8 = *(undefined8 *)(param_1 + 0x178);
      local_1e0 = (undefined **)&DAT_14a171d50;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1d8 = *(undefined8 *)(param_1 + 0x188);
      FUN_1406022fe(&local_1d0,param_1 + 400);
      local_1e0 = &PTR_FUN_14b0394b0;
    }
    local_1b8 = *(undefined8 *)(param_1 + 0x70);
    local_1b0 = *(undefined8 *)(param_1 + 0x1a8);
    local_1a8 = *(undefined4 *)(param_1 + 0x1b0);
    local_1a0 = 0;
    local_198[0] = (code *)0x0;
    puVar15 = (undefined8 *)FUN_14001cc68(0x128,8);
    *puVar15 = &PTR_FUN_14b4227b0;
    puVar15[3] = CONCAT44(uStack_2a4,uStack_2a8);
    puVar15[4] = uStack_2a0;
    *(undefined4 *)(puVar15 + 1) = (undefined4)local_2b8;
    *(undefined4 *)((longlong)puVar15 + 0xc) = local_2b8._4_4_;
    *(undefined4 *)(puVar15 + 2) = uStack_2b0;
    *(undefined4 *)((longlong)puVar15 + 0x14) = uStack_2ac;
    *(char *)((longlong)puVar15 + 0x2c) = local_294;
    if (local_294 == '\x01') {
      *(undefined4 *)(puVar15 + 5) = local_298;
    }
    *(char *)(puVar15 + 0x20) = local_1c0;
    local_188 = puVar15;
    if (local_1c0 == '\x01') {
      *(undefined4 *)(puVar15 + 6) = local_290;
      puVar15[7] = local_288;
      *(undefined4 *)(puVar15 + 8) = local_280;
      puVar15[9] = 0;
      puVar15[0x10] = 0;
      puVar18 = local_240;
      if (local_240 == (undefined1 *)0x0) {
        puVar18 = local_270;
      }
      FUN_1400709d4(puVar15 + 10,puVar18,local_238,0);
      *(undefined4 *)(puVar15 + 0x12) = local_230;
      puVar15[0x13] = local_228;
      *(undefined4 *)(puVar15 + 0x14) = local_220;
      puVar15[0x15] = local_218;
      *(undefined4 *)(puVar15 + 0x16) = local_210;
      puVar15[0x17] = 0;
      puVar15[0x18] = local_200;
      puVar15[0x19] = uStack_1f8;
      puVar15[0x1a] = local_1f0;
      puVar15[0x1b] = uStack_1e8;
      puVar15[0x1c] = &DAT_14a171d50;
      puVar15[0x1e] = 0;
      puVar15[0x1f] = 0;
      puVar15[0x1d] = local_1d8;
      FUN_1406022fe(puVar15 + 0x1e,&local_1d0);
      puVar15[0x1c] = &PTR_FUN_14b0394b0;
    }
    puVar15[0x21] = local_1b8;
    puVar15[0x22] = local_1b0;
    *(undefined4 *)(puVar15 + 0x23) = local_1a8;
    puVar15[0x24] = 0;
    if (puVar15 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_198[0] = FUN_143e13b88;
    }
    FUN_1410672ce(pcVar12,lVar9,local_198,&local_338);
    if (local_1c0 == '\x01') {
      local_1e0 = (undefined **)&DAT_14a171d50;
      uVar13 = uStack_1c8 >> 0x20;
      uStack_1c8 = uStack_1c8 & 0xffffffff00000000;
      if ((int)uVar13 != 0) {
        FUN_140115c12(&local_1d0,0);
      }
      local_1d8 = 0;
      if (local_1d0 != 0) {
        FUN_1400020a8();
      }
      if (local_240 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    DAT_14cb89f80 = DAT_14cb89f80 + 1;
    uVar2 = *(uint *)(pcVar12 + 0xc);
    *(uint *)(param_1 + 0x1c4) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar20 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar20);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar23 = iVar8 == 0;
      if (bVar23) {
        *(int *)(lVar9 + 0x10) = iVar20;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar8 = iVar20;
      }
    }
    *(int *)(param_1 + 0x1c8) = iVar8;
    iVar8 = *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = iVar8 + 1;
    uVar13 = (ulonglong)*(int *)(param_1 + 0x10);
    if ((longlong)uVar13 < 1) {
      *(int *)(param_1 + 0x1c) = iVar8;
    }
    else {
      plVar16 = (longlong *)(param_1 + 8);
      bVar23 = false;
      do {
        lVar9 = uVar13 * 0x10 + -8;
        uVar22 = uVar13;
        while (((*(int *)(*plVar16 + lVar9) != 0 &&
                (plVar3 = *(longlong **)(*plVar16 + -8 + lVar9), plVar3 != (longlong *)0x0)) &&
               (cVar7 = (**(code **)(*plVar3 + 0x60))(plVar3,pcVar12), cVar7 != '\0'))) {
          lVar9 = lVar9 + -0x10;
          bVar4 = uVar22 < 2;
          uVar22 = uVar22 - 1;
          if (bVar4) {
            iVar8 = *(int *)(param_1 + 0x1c) + -1;
            *(int *)(param_1 + 0x1c) = iVar8;
            if (bVar23) goto LAB_140f9285b;
            goto LAB_140f9270d;
          }
        }
        uVar13 = uVar22 - 1;
        bVar23 = true;
      } while (1 < uVar22);
      iVar8 = *(int *)(param_1 + 0x1c) + -1;
      *(int *)(param_1 + 0x1c) = iVar8;
LAB_140f9285b:
      if (iVar8 < 1) {
        iVar8 = *(int *)(param_1 + 0x10);
        iVar20 = iVar8;
        if (0 < iVar8) {
          iVar19 = 0;
          do {
            if (((*(int *)(*plVar16 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar16 + (longlong)iVar19 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar3 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(plVar16,iVar19);
              FUN_14005b248(plVar16);
            }
            else {
              iVar19 = iVar19 + 1;
            }
            iVar20 = *(int *)(param_1 + 0x10);
          } while (iVar19 < iVar20);
        }
        iVar19 = 2;
        if (2 < iVar20 * 2) {
          iVar19 = iVar20 * 2;
        }
        *(int *)(param_1 + 0x18) = iVar19;
        if ((iVar19 < iVar8) && (*(int *)(param_1 + 0x14) != iVar20)) {
          FUN_14045812c(plVar16);
        }
      }
    }
  }
LAB_140f9270d:
  if (local_118 != 0) {
    plVar16 = local_108;
    if (local_108 == (longlong *)0x0) {
      plVar16 = local_f8;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  if ((local_d0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f92d1a FUN_140f92d1a body=981 status=ok
// SIG undefined FUN_140f92d1a(void)

void FUN_140f92d1a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_68 = FUN_1446ddbd2();
    local_60 = FUN_1468d96f0;
    local_70 = 0;
    local_78 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_48 = 0;
  local_40 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar4 = &local_48;
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    puVar5 = *(undefined **)(*(longlong *)(param_2 + 0x30) + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9520b0) && (FUN_144b3d300(&DAT_14c9520b0), DAT_14c9520b0 == -1)) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
    if (DAT_14c952068 == 0) {
      bVar6 = puVar5 != (undefined *)0x0;
      if (puVar5 != &DAT_14c952060 && bVar6) {
        do {
          puVar5 = *(undefined **)(puVar5 + 0x30);
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 == &DAT_14c952060) break;
        } while (puVar5 != (undefined *)0x0);
      }
      if (!bVar6) goto LAB_140f92eb9;
    }
    else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c952068) == 0) goto LAB_140f92eb9;
    local_48 = *puVar4;
    local_40 = 0xffffffff;
    puVar4 = &local_48;
  }
LAB_140f92eb9:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140f930f0(&local_58,local_38,puVar4);
  if (*param_3 != local_58) {
    *param_3 = local_58;
    *(undefined4 *)(param_3 + 1) = local_50;
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f930f0 FUN_140f930f0 body=367 status=ok
// SIG undefined FUN_140f930f0(void)

undefined8 * FUN_140f930f0(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  bool bVar11;
  
  if ((param_2 == (longlong *)0x0) || ((*param_3 == 0 && ((int)param_3[1] == -1))))
  goto LAB_140f9314e;
  uVar3 = FUN_140437988();
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_140f9314e;
  uVar3 = FUN_140437988();
  plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
  if (plVar4 == plVar5 || plVar5 == (longlong *)0x0) goto LAB_140f9314e;
  plVar4 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5);
  lVar2 = *param_3;
  uVar7 = *(uint *)(param_3 + 1);
  if (lVar2 == 0 && uVar7 == 0xffffffff) goto LAB_140f9314e;
  if ((int)uVar7 < 0) {
    lVar6 = *plVar4;
    uVar9 = *(uint *)(plVar4 + 1);
LAB_140f9319a:
    if (uVar9 != 0) {
      uVar8 = (ulonglong)(int)uVar9;
LAB_140f931ad:
      uVar10 = 0;
      do {
        if (*(longlong *)(lVar6 + 0x68 + uVar10) == lVar2) {
          uVar7 = (int)(uVar10 >> 3) * -0xf0f0f0f;
          goto LAB_140f931e4;
        }
        lVar1 = lVar6 + uVar10;
        uVar10 = uVar10 + 0x88;
      } while (lVar1 + 0x88 != uVar8 * 0x88 + lVar6);
    }
    uVar7 = 0xffffffff;
LAB_140f931e4:
    *(uint *)(param_3 + 1) = uVar7;
    bVar11 = uVar7 != 0xffffffff;
    lVar6 = *plVar4;
  }
  else {
    uVar9 = *(uint *)(plVar4 + 1);
    uVar8 = (ulonglong)uVar9;
    lVar6 = *plVar4;
    if ((int)uVar9 <= (int)uVar7) goto LAB_140f9319a;
    if (*(longlong *)(lVar6 + 0x68 + (ulonglong)uVar7 * 0x88) != lVar2) goto LAB_140f931ad;
    bVar11 = true;
  }
  if ((bVar11) && (lVar6 = lVar6 + (longlong)(int)uVar7 * 0x88, lVar6 != 0)) {
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(lVar6 + 0x80);
    *param_1 = *(undefined8 *)(lVar6 + 0x78);
    return param_1;
  }
LAB_140f9314e:
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  return param_1;
}



// FUNCTION 140f93260 FUN_140f93260 body=94 status=ok
// SIG undefined FUN_140f93260(void)

void FUN_140f93260(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x30 + 0x28);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_140f932be();
  return;
}



// FUNCTION 140f932be FUN_140f932be body=122 status=ok
// SIG undefined FUN_140f932be(void)

void FUN_140f932be(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
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



// FUNCTION 140f93338 FUN_140f93338 body=106 status=ok
// SIG undefined FUN_140f93338(void)

void FUN_140f93338(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  FUN_140f933a4(param_1 + 0x78,&local_28,1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f933a4 FUN_140f933a4 body=175 status=ok
// SIG undefined FUN_140f933a4(void)

undefined8 FUN_140f933a4(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_140f93454(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 140f93454 FUN_140f93454 body=137 status=ok
// SIG undefined FUN_140f93454(void)

void FUN_140f93454(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 140f934dd FUN_140f934dd body=705 status=ok
// SIG undefined FUN_140f934dd(void)

void FUN_140f934dd(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar3 = (undefined8 *)*param_1;
  FUN_1406ed334(puVar3,param_1);
  *puVar3 = &PTR_FUN_14a4b4e20;
  puVar3[0x1f] = &PTR_FUN_14a4b5190;
  FUN_1406ed278(puVar3 + 0x20);
  FUN_1406ed278(puVar3 + 0x42);
  FUN_1406ed278(puVar3 + 100);
  FUN_1406ed278(puVar3 + 0x86);
  local_88 = 0xd2704c107b5ae74c;
  uStack_80 = 0xb212a5aa9585798;
  iVar5 = FUN_1448a256a(puVar3);
  if (iVar5 < 4) {
    cVar4 = '\0';
  }
  else {
    local_98 = 0xd2704c107b5ae74c;
    uStack_90 = 0xb212a5aa9585798;
    iVar5 = FUN_1448a256a(puVar3);
    cVar4 = '\x02' - (iVar5 < 6);
  }
  *(undefined1 *)(puVar3 + 0xb) = 1;
  *(char *)((longlong)puVar3 + 0x59) = cVar4;
  *(undefined1 *)((longlong)puVar3 + 0xda) = 1;
  *(undefined2 *)(puVar3 + 0x1b) = 0x101;
  local_60 = 0;
  local_58 = 0x100000000;
  FUN_140f937a0(&local_78,puVar3 + 0x20);
  FUN_140f937a0(&local_78,puVar3 + 0x42);
  FUN_140f937a0(&local_78,puVar3 + 100);
  FUN_140f937a0(&local_78,puVar3 + 0x86);
  local_a0 = (longlong *)FUN_14001cc68(0x60,0x10);
  local_a0[1] = (longlong)&DAT_100000001;
  *local_a0 = (longlong)&PTR_FUN_14a492060;
  local_a8 = local_a0 + 2;
  local_a0[2] = 0;
  local_a0[3] = 0;
  local_a0[4] = 0;
  local_a0[5] = 0;
  local_a0[6] = 2;
  if (local_60 == 0) {
    local_a0[9] = local_68;
    *(undefined4 *)(local_a0 + 7) = local_78;
    *(undefined4 *)((longlong)local_a0 + 0x3c) = uStack_74;
    *(undefined4 *)(local_a0 + 8) = uStack_70;
    *(undefined4 *)((longlong)local_a0 + 0x44) = uStack_6c;
  }
  local_a0[10] = local_60;
  local_60 = 0;
  *(undefined4 *)(local_a0 + 0xb) = (undefined4)local_58;
  *(undefined4 *)((longlong)local_a0 + 0x5c) = local_58._4_4_;
  local_58 = 0x100000000;
  FUN_140aec6f8(&local_a8);
  plVar1 = local_a0;
  if (local_a0 == (longlong *)0x0) {
    puVar3[0x1c] = local_a8;
    plVar6 = (longlong *)puVar3[0x1d];
    if (plVar6 == (longlong *)0x0) goto LAB_140f936c3;
    puVar3[0x1d] = 0;
LAB_140f93738:
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140f936c3;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    UNLOCK();
    plVar1 = plVar6;
  }
  else {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
    puVar3[0x1c] = local_a8;
    plVar6 = (longlong *)puVar3[0x1d];
    if (local_a0 != plVar6) {
      puVar3[0x1d] = local_a0;
      if (plVar6 == (longlong *)0x0) goto LAB_140f936c3;
      goto LAB_140f93738;
    }
    LOCK();
    plVar6 = local_a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_140f936c3;
    (**(code **)*local_a0)(local_a0);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar5 = *piVar2;
    UNLOCK();
  }
  if (iVar5 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_140f936c3:
  plVar1 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a0 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  FUN_1404dbc0c(&local_78);
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f937a0 FUN_140f937a0 body=346 status=ok
// SIG undefined FUN_140f937a0(void)

uint FUN_140f937a0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = FUN_140f938fc();
  uVar3 = *(ulonglong *)(lVar7 + 0x18);
  uVar10 = *(uint *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar7 = param_1;
  }
  if ((int)uVar10 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    local_68 = param_2;
    do {
      uVar1 = uVar9 + (uVar10 >> 1);
      uVar4 = *(ulonglong *)(lVar7 + (ulonglong)uVar1 * 0x18);
      if ((int)uVar4 == (int)uVar3) {
        iVar6 = (int)(uVar4 >> 0x20) - (int)(uVar3 >> 0x20);
      }
      else {
        iVar6 = FUN_14002c2bd(uVar4 & 0xffffffff,uVar3 & 0xffffffff);
      }
      if (iVar6 < 0) {
        uVar9 = uVar1 + (uVar10 & 1);
      }
      bVar5 = 1 < uVar10;
      uVar10 = uVar10 >> 1;
    } while (bVar5);
    uVar10 = *(uint *)(param_1 + 0x20);
    param_2 = local_68;
  }
  if ((int)uVar9 < (int)uVar10) {
    lVar7 = *(longlong *)(param_1 + 0x18);
    lVar8 = lVar7;
    if (lVar7 == 0) {
      lVar8 = param_1;
    }
    if (*(ulonglong *)(lVar8 + (ulonglong)uVar9 * 0x18) == uVar3) goto LAB_140f93853;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_60 = uVar3;
  FUN_140f93936(param_1,&local_60,uVar9);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
LAB_140f93853:
  if (lVar7 != 0) {
    param_1 = lVar7;
  }
  plVar2 = (longlong *)(param_1 + 8 + (ulonglong)uVar9 * 0x18);
  iVar6 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar6 + 1U) {
    FUN_140aec898(plVar2,iVar6);
  }
  *(undefined8 *)(*plVar2 + (longlong)iVar6 * 8) = param_2;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f938fc FUN_140f938fc body=57 status=ok
// SIG undefined FUN_140f938fc(void)

void FUN_140f938fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cab23f0 == 0) {
    uVar1 = FUN_140bd662f();
    DAT_14cab23f0 = FUN_140002ddd(FUN_14179ca83,uVar1,L"MovieSceneFloatChannel");
  }
  return;
}



// FUNCTION 140f93936 FUN_140f93936 body=177 status=ok
// SIG undefined FUN_140f93936(void)

int FUN_140f93936(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1457d67de(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = param_1;
  }
  lVar2 = (longlong)param_3 * 0x18;
  memmove((void *)(lVar3 + lVar2 + 0x18),(void *)(lVar3 + lVar2),
          (ulonglong)(uint)(iVar1 - param_3) * 0x18);
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar3 = param_1;
  }
  *(undefined8 *)(lVar3 + lVar2) = *param_2;
  *(undefined8 *)(lVar3 + 8 + lVar2) = 0;
  *(undefined8 *)(lVar3 + 8 + lVar2) = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(lVar3 + 0x10 + lVar2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(lVar3 + 0x14 + lVar2) = *(undefined4 *)((longlong)param_2 + 0x14);
  param_2[2] = 0;
  return param_3;
}



// FUNCTION 140f939e8 FUN_140f939e8 body=21 status=ok
// SIG undefined FUN_140f939e8(void)

undefined8 FUN_140f939e8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140f93a2a FUN_140f93a2a body=284 status=ok
// SIG undefined FUN_140f93a2a(void)

undefined8 FUN_140f93a2a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f93b40;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f93b40;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140f93b40:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f93aed;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_140f93aed;
    }
  }
  uVar6 = 0;
LAB_140f93aed:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f93b48 FUN_140f93b48 body=109 status=ok
// SIG undefined FUN_140f93b48(void)

void FUN_140f93b48(longlong param_1,char param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0xb90);
  *(undefined1 *)(param_1 + 0xb91) = 0;
  *(byte *)(param_1 + 0xb90) = bVar1 & 0xcf;
  *(undefined8 *)(param_1 + 0xb88) = 0;
  if (((param_2 == '\x01' && (bVar1 & 1) != 0) && ((bVar1 & 2) == 0)) &&
     (*(longlong *)(param_1 + 0xd60) == DAT_14cb94e30)) {
    FUN_14129cfaa(param_1);
  }
  if ((bVar1 & 0x20) != 0) {
    *(byte *)(param_1 + 0xb90) = *(byte *)(param_1 + 0xb90) & 0xf9;
  }
  return;
}



// FUNCTION 140f93bc4 FUN_140f93bc4 body=40 status=ok
// SIG undefined FUN_140f93bc4(void)

undefined8 FUN_140f93bc4(undefined8 param_1,int param_2)

{
  FUN_140f93bec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f93bec FUN_140f93bec body=463 status=ok
// SIG undefined FUN_140f93bec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f93bec(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b677820;
  if ((param_1[0x39] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x39] + 0x50));
  }
  if ((param_1[0x33] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x33] + 0x50));
  }
  if ((param_1[0x2d] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x2d] + 0x50));
  }
  if ((param_1[0x27] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x27] + 0x50));
  }
  if ((param_1[0x21] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x21] + 0x50));
  }
  if ((param_1[0x1b] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x1b] + 0x50));
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140f93dbb(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140f93d31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140f93dbb FUN_140f93dbb body=49 status=ok
// SIG undefined FUN_140f93dbb(void)

void FUN_140f93dbb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f93dfa FUN_140f93dfa body=71 status=ok
// SIG undefined FUN_140f93dfa(void)

undefined8 * FUN_140f93dfa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f93e4c FUN_140f93e4c body=69 status=ok
// SIG undefined FUN_140f93e4c(void)

longlong FUN_140f93e4c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar1 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1400e0fde(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f93e92 FUN_140f93e92 body=122 status=ok
// SIG undefined FUN_140f93e92(void)

void FUN_140f93e92(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_140f93f0c();
  if (param_2 != 0) {
    lVar1 = FUN_140859b94();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_2 + 0x990), lVar1 != 0)) {
      *(undefined1 *)(param_1 + 0xa9) = *(undefined1 *)(lVar1 + 0x988);
      lVar1 = *(longlong *)(lVar1 + 0x1a0);
      if ((lVar1 != 0) && (0 < *(int *)(lVar1 + 0xf0))) {
        *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(*(longlong *)(lVar1 + 0xe8) + 0x30);
      }
    }
  }
  return;
}



// FUNCTION 140f93f0c FUN_140f93f0c body=1411 status=ok
// SIG undefined FUN_140f93f0c(void)

void FUN_140f93f0c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  
  if (param_2 != 0) {
    lVar14 = FUN_140859b94();
    if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar14 + 0x38)) {
      return;
    }
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(lVar14 + 0x38) * 8) != lVar14 + 0x30) {
      return;
    }
    lVar14 = *(longlong *)(param_2 + 0x990);
    if (lVar14 == 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar14 + 0x180);
    uVar11 = *(undefined4 *)(lVar14 + 0x174);
    uVar12 = *(undefined4 *)(lVar14 + 0x178);
    uVar13 = *(undefined4 *)(lVar14 + 0x17c);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(lVar14 + 0x170);
    *(undefined4 *)(param_1 + 0x1c) = uVar11;
    *(undefined4 *)(param_1 + 0x20) = uVar12;
    *(undefined4 *)(param_1 + 0x24) = uVar13;
    lVar15 = *(longlong *)(lVar14 + 0x1a0);
    if (lVar15 == 0) {
      return;
    }
    if (0 < *(int *)(lVar15 + 0x10)) {
      *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(*(longlong *)(lVar15 + 8) + 0x28);
      lVar15 = *(longlong *)(lVar14 + 0x1a0);
    }
    uVar8 = *(uint *)(lVar15 + 0x40);
    if ((int)uVar8 < 1) {
      iVar18 = 0;
    }
    else {
      lVar17 = 0;
      iVar18 = 0;
      do {
        iVar18 = iVar18 + *(int *)(*(longlong *)(lVar15 + 0x48) + 0x80 + lVar17);
        lVar17 = lVar17 + 0x88;
      } while ((ulonglong)uVar8 * 0x88 != lVar17);
    }
    plVar1 = (longlong *)(param_1 + 0x60);
    iVar9 = *(int *)(param_1 + 0x68);
    if (iVar9 < (int)uVar8) {
      *(uint *)(param_1 + 0x68) = uVar8;
      if ((uint)(*(int *)(param_1 + 0x6c) - iVar9) < uVar8 - iVar9) {
        FUN_14475e4ac(plVar1);
      }
      memset((void *)((longlong)iVar9 * 4 + *plVar1),0,(longlong)(int)(uVar8 - iVar9) << 2);
    }
    else {
      if ((int)uVar8 < 0) goto LAB_140f9441b;
      if ((int)uVar8 < iVar9) {
        *(uint *)(param_1 + 0x68) = uVar8;
        FUN_1401fef06(plVar1);
      }
    }
    plVar2 = (longlong *)(param_1 + 0x50);
    iVar9 = *(int *)(param_1 + 0x58);
    if (iVar9 < (int)uVar8) {
      *(uint *)(param_1 + 0x58) = uVar8;
      if ((uint)(*(int *)(param_1 + 0x5c) - iVar9) < uVar8 - iVar9) {
        FUN_14475e4ac(plVar2);
      }
      memset((void *)((longlong)iVar9 * 4 + *plVar2),0,(longlong)(int)(uVar8 - iVar9) << 2);
    }
    else {
      if ((int)uVar8 < 0) goto LAB_140f9441b;
      if ((int)uVar8 < iVar9) {
        *(uint *)(param_1 + 0x58) = uVar8;
        FUN_1401fef06(plVar2);
      }
    }
    plVar6 = (longlong *)(param_1 + 0x80);
    iVar9 = *(int *)(param_1 + 0x88);
    if (iVar9 < (int)uVar8) {
      *(uint *)(param_1 + 0x88) = uVar8;
      if ((uint)(*(int *)(param_1 + 0x8c) - iVar9) < uVar8 - iVar9) {
        FUN_1446f48e2(plVar6);
      }
      memset((void *)((longlong)iVar9 * 4 + *plVar6),0,(longlong)(int)(uVar8 - iVar9) << 2);
    }
    else {
      if ((int)uVar8 < 0) goto LAB_140f9441b;
      if ((int)uVar8 < iVar9) {
        *(uint *)(param_1 + 0x88) = uVar8;
        FUN_14479f406(plVar6);
      }
    }
    plVar7 = (longlong *)(param_1 + 0x90);
    iVar9 = *(int *)(param_1 + 0x98);
    if (iVar9 < (int)uVar8) {
      *(uint *)(param_1 + 0x98) = uVar8;
      if ((uint)(*(int *)(param_1 + 0x9c) - iVar9) < uVar8 - iVar9) {
        FUN_1446f48e2(plVar7);
      }
      memset((void *)((longlong)iVar9 * 4 + *plVar7),0,(longlong)(int)(uVar8 - iVar9) << 2);
    }
    else {
      if ((int)uVar8 < 0) goto LAB_140f9441b;
      if ((int)uVar8 < iVar9) {
        *(uint *)(param_1 + 0x98) = uVar8;
        FUN_14479f406(plVar7);
      }
    }
    plVar3 = (longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x78);
    if (iVar9 < iVar18) {
      *(int *)(param_1 + 0x78) = iVar18;
      if ((uint)(*(int *)(param_1 + 0x7c) - iVar9) < (uint)(iVar18 - iVar9)) {
        FUN_14475e4ac(plVar3);
      }
      memset((void *)((longlong)iVar9 * 4 + *plVar3),0,(longlong)(iVar18 - iVar9) << 2);
    }
    else {
      if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar18);
      }
      if (iVar18 < iVar9) {
        *(int *)(param_1 + 0x78) = iVar18;
        FUN_1401fef06(plVar3);
      }
    }
    plVar4 = (longlong *)(param_1 + 0x40);
    iVar18 = *(int *)(param_1 + 0x48);
    if (iVar18 < (int)uVar8) {
      *(uint *)(param_1 + 0x48) = uVar8;
      if ((uint)(*(int *)(param_1 + 0x4c) - iVar18) < uVar8 - iVar18) {
        FUN_14475e4ac(plVar4);
      }
      memset((void *)((longlong)iVar18 * 4 + *plVar4),0,(longlong)(int)(uVar8 - iVar18) << 2);
    }
    else {
      if ((int)uVar8 < 0) goto LAB_140f9441b;
      if ((int)uVar8 < iVar18) {
        *(uint *)(param_1 + 0x48) = uVar8;
        FUN_1401fef06(plVar4);
      }
    }
    plVar5 = (longlong *)(param_1 + 0x30);
    iVar18 = *(int *)(param_1 + 0x38);
    if (iVar18 < (int)uVar8) {
      *(uint *)(param_1 + 0x38) = uVar8;
      if ((uint)(*(int *)(param_1 + 0x3c) - iVar18) < uVar8 - iVar18) {
        FUN_14475e4ac(plVar5);
      }
      memset((void *)((longlong)iVar18 * 4 + *plVar5),0,(longlong)(int)(uVar8 - iVar18) << 2);
    }
    else {
      if ((int)uVar8 < 0) {
LAB_140f9441b:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((ulonglong)uVar8);
      }
      if ((int)uVar8 < iVar18) {
        *(uint *)(param_1 + 0x38) = uVar8;
        FUN_1401fef06(plVar5);
      }
    }
    lVar15 = *(longlong *)(lVar14 + 0x1a0);
    if (0 < *(int *)(lVar15 + 0x40)) {
      lVar17 = 0;
      lVar16 = 0x54;
      iVar18 = 0;
      do {
        lVar15 = *(longlong *)(lVar15 + 0x48);
        lVar10 = lVar17 * 0x88;
        *(undefined4 *)(*plVar1 + lVar17 * 4) = *(undefined4 *)(lVar15 + 0x50 + lVar10);
        *(undefined4 *)(*plVar2 + lVar17 * 4) = *(undefined4 *)(lVar15 + 0xc + lVar10);
        *(undefined4 *)(*plVar6 + lVar17 * 4) = *(undefined4 *)(lVar15 + 0x7c + lVar10);
        iVar9 = *(int *)(lVar15 + 0x80 + lVar10);
        *(int *)(*plVar7 + lVar17 * 4) = iVar9;
        if (0 < iVar9) {
          lVar19 = 0;
          do {
            *(undefined4 *)(*plVar3 + (longlong)iVar18 * 4 + lVar19 * 4) =
                 *(undefined4 *)(lVar15 + lVar16 + lVar19 * 4);
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)(lVar10 + lVar15 + 0x80));
          iVar18 = iVar18 + (int)lVar19;
        }
        lVar15 = *(longlong *)(*(longlong *)(lVar14 + 0x1a0) + 0x38);
        *(undefined4 *)(*plVar5 + lVar17 * 4) = *(undefined4 *)(lVar15 + 0x30 + lVar17 * 0xe8);
        *(undefined4 *)(*plVar4 + lVar17 * 4) = *(undefined4 *)(lVar15 + 0x60 + lVar17 * 0xe8);
        lVar17 = lVar17 + 1;
        lVar15 = *(longlong *)(lVar14 + 0x1a0);
        lVar16 = lVar16 + 0x88;
      } while (lVar17 < *(int *)(lVar15 + 0x40));
    }
  }
  return;
}



// FUNCTION 140f94490 FUN_140f94490 body=1572 status=ok
// SIG undefined FUN_140f94490(void)

void FUN_140f94490(longlong *param_1)

{
  uint *_Dst;
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  char acStack_46 [6];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x15f] == 0) {
LAB_140f949b4:
    param_1[0x1fa] = 0;
  }
  else {
    lVar13 = FUN_14069636a();
    lVar18 = param_1[0x15f];
    if ((((lVar18 == 0) || (lVar13 == 0)) || (lVar2 = *(longlong *)(lVar18 + 0x10), lVar2 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar13 + 0x38) ||
        (lVar2 = *(longlong *)(lVar2 + 0x30),
        *(longlong *)(lVar2 + (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30))))
    goto LAB_140f949b4;
    param_1[0x1fa] = lVar18;
    (**(code **)(*param_1 + 0x718))(param_1,CONCAT71((int7)((ulonglong)lVar2 >> 8),1));
    plVar3 = param_1 + 0x106;
    FUN_1401ba5e8(&local_68);
    if (param_1 == (longlong *)0x0) {
      uVar15 = 0;
      uVar19 = 0;
    }
    else {
      uVar19 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar19 < DAT_14c9647dc) {
        lVar18 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
      }
      else {
        lVar18 = 0;
      }
      uVar12 = *(uint *)(lVar18 + 0x10);
      if (*(uint *)(lVar18 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar12 = *(uint *)(lVar18 + 0x10);
        bVar20 = uVar12 == 0;
        if (bVar20) {
          *(uint *)(lVar18 + 0x10) = uVar16;
          uVar12 = 0;
        }
        UNLOCK();
        if (bVar20) {
          uVar12 = uVar16;
        }
      }
      uVar15 = (ulonglong)uVar12;
      if (local_68 == 0) {
        local_68 = 0;
      }
      else if (uVar12 == 0) {
        uVar15 = 0;
      }
      else if (((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) &&
              ((plVar14 = (longlong *)
                          ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
               plVar14 != (longlong *)0x0 &&
               (((*(uint *)(plVar14 + 2) == uVar12 && ((*(uint *)(plVar14 + 1) & 0x10200000) == 0))
                && (*plVar14 != 0)))))) {
        FUN_1400796d0(*(undefined8 *)(*plVar14 + 0x10),local_68);
      }
    }
    local_60 = (ulonglong)uVar19 | uVar15 << 0x20;
    local_58 = local_68;
    FUN_1403350f6(plVar3);
    iVar11 = (int)param_1[0x107];
    if (0 < iVar11) {
      lVar18 = 0;
      bVar20 = false;
      do {
        while( true ) {
          lVar13 = *plVar3;
          _Dst = (uint *)(lVar13 + lVar18 * 0x10);
          if (((*(longlong *)(lVar13 + 8 + lVar18 * 0x10) != 0) && (_Dst[1] != 0)) &&
             ((((uVar19 = *_Dst, -1 < (int)uVar19 &&
                (((int)uVar19 < DAT_14c9647dc &&
                 (plVar14 = (longlong *)
                            ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
                 plVar14 != (longlong *)0x0)))) && (*(uint *)(plVar14 + 2) == _Dst[1])) &&
              (((*(uint *)(plVar14 + 1) >> 0x1c & 1) == 0 && (*plVar14 != 0)))))) break;
          iVar17 = ~(uint)lVar18 + iVar11;
          if (iVar17 != 0) {
            if (0 < iVar17) {
              iVar17 = 1;
            }
            memmove(_Dst,(void *)(lVar13 + (longlong)(iVar11 - iVar17) * 0x10),(longlong)iVar17 << 4
                   );
            iVar11 = (int)param_1[0x107];
          }
          iVar11 = iVar11 + -1;
          *(int *)(param_1 + 0x107) = iVar11;
          bVar20 = true;
          if (iVar11 <= lVar18) goto LAB_140f94977;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar11);
      if (bVar20) {
LAB_140f94977:
        FUN_1400bbcfc(plVar3);
      }
    }
  }
  FUN_140f94e08(param_1);
  lVar18 = param_1[0x16];
  if (lVar18 == 0) {
    lVar18 = FUN_1448abda6(param_1);
  }
  if (((lVar18 == 0) || (param_1[0x15] == 0)) ||
     (plVar3 = (longlong *)param_1[0x1f6], plVar3 == (longlong *)0x0)) goto LAB_140f946e9;
  if ((longlong *)plVar3[0x24] != param_1) {
    FUN_1401bf202(plVar3);
    (**(code **)(*plVar3 + 0x4a0))(plVar3,&DAT_14cadad9c);
    FUN_140486fc4(plVar3,param_1,0);
  }
  FUN_140b506a4(plVar3);
  lVar13 = 0;
  do {
    bVar20 = *(char *)((longlong)&local_60 + lVar13) == '\0';
    bVar4 = *(char *)((longlong)&local_60 + lVar13 + 1) == '\0';
    bVar5 = *(char *)((longlong)&local_60 + lVar13 + 2) == '\0';
    bVar6 = *(char *)((longlong)&local_60 + lVar13 + 3) == '\0';
    bVar7 = *(char *)((longlong)&local_60 + lVar13 + 4) == '\0';
    bVar8 = *(char *)((longlong)&local_60 + lVar13 + 5) == '\0';
    bVar9 = *(char *)((longlong)&local_60 + lVar13 + 6) == '\0';
    bVar10 = *(char *)((longlong)&local_60 + lVar13 + 7) == '\0';
    if ((bool)(~bVar20 & 1)) {
      *(undefined1 *)((longlong)&local_60 + lVar13) = 0;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_60 + lVar13 + 1) = 0;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_60 + lVar13 + 2) = 0;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_60 + lVar13 + 3) = 0;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_60 + lVar13 + 4) = 0;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_60 + lVar13 + 5) = 0;
    }
    if ((bool)(~bVar9 & 1)) {
      *(undefined1 *)((longlong)&local_60 + lVar13 + 6) = 0;
    }
    if ((bool)(~bVar10 & 1)) {
      *(undefined1 *)((longlong)&local_60 + lVar13 + 7) = 0;
    }
    if ((bool)(~bVar20 & 1)) {
      *(undefined1 *)((longlong)&local_58 + lVar13) = 0;
    }
    if ((bool)(~bVar4 & 1)) {
      *(undefined1 *)((longlong)&local_58 + lVar13 + 1) = 0;
    }
    if ((bool)(~bVar5 & 1)) {
      *(undefined1 *)((longlong)&local_58 + lVar13 + 2) = 0;
    }
    if ((bool)(~bVar6 & 1)) {
      *(undefined1 *)((longlong)&local_58 + lVar13 + 3) = 0;
    }
    if ((bool)(~bVar7 & 1)) {
      *(undefined1 *)((longlong)&local_58 + lVar13 + 4) = 0;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_58 + lVar13 + 5) = 0;
    }
    if ((bool)(~bVar9 & 1)) {
      *(undefined1 *)((longlong)&local_58 + lVar13 + 6) = 0;
    }
    if ((bool)(~bVar10 & 1)) {
      *(undefined1 *)((longlong)&local_58 + lVar13 + 7) = 0;
    }
    lVar13 = lVar13 + 0x10;
  } while (lVar13 != 0x20);
  lVar13 = 0x1a;
  do {
    if (*(char *)((longlong)&local_60 + lVar13) != (&DAT_14cad0ed0)[lVar13]) {
      *(undefined1 *)((longlong)&local_60 + lVar13) = (&DAT_14cad0ed0)[lVar13];
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x20);
  bVar1 = *(byte *)(lVar18 + 0x152);
  if ((bVar1 == 1) || ((uVar15 = 2, bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
    lVar18 = DAT_14cb24ad0;
    if (DAT_14cb24ad0 == 0) {
      plVar14 = (longlong *)FUN_145a7712c();
      lVar18 = plVar14[0x22];
      if (plVar14[0x22] == 0) {
        (**(code **)(*plVar14 + 1000))(plVar14);
        lVar18 = plVar14[0x22];
      }
    }
    DAT_14cb24ad0 = lVar18;
    if (((param_1[0x15f] != 0) && (*(char *)(param_1[0x15f] + 0x2b8) == '\x01')) &&
       (uVar15 = (ulonglong)*(byte *)(DAT_14cb24ad0 + 0xb8), uVar15 < 0x20)) goto LAB_140f94a68;
  }
  else {
LAB_140f94a68:
    if (*(char *)((longlong)&local_60 + uVar15) != '\x02') {
      *(undefined1 *)((longlong)&local_60 + uVar15) = 2;
    }
  }
  FUN_140f94af0(param_1);
  (**(code **)(*plVar3 + 0x948))(plVar3,&local_60);
  if (param_1[0x1f6] != 0) {
    lVar18 = FUN_14477bcf0();
    FUN_140f94ab6(param_1[0x1f6],*(undefined8 *)(lVar18 + 0x60));
    if ((*(byte *)((longlong)param_1 + 0x2d3) & 8) == 0) {
      *(byte *)((longlong)param_1 + 0x2d3) = *(byte *)((longlong)param_1 + 0x2d3) | 8;
      (**(code **)(*param_1 + 0x958))(param_1);
    }
  }
LAB_140f946e9:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f94ab6 FUN_140f94ab6 body=57 status=ok
// SIG undefined FUN_140f94ab6(void)

void FUN_140f94ab6(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x688) = param_2;
  FUN_140acf01e(param_1);
  return;
}



// FUNCTION 140f94af0 FUN_140f94af0 body=790 status=ok
// SIG undefined FUN_140f94af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f94af0(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = param_1[0x1f6];
  if ((((lVar2 == 0) ||
       (((lVar8 = param_1[0x16], lVar8 == 0 && (lVar8 = FUN_1448abda6(param_1), lVar8 == 0)) ||
        ((*(byte *)(lVar8 + 0x155) & 0x20) != 0)))) ||
      (bVar1 = *(byte *)(lVar8 + 0x152), bVar1 == 1)) ||
     ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) goto LAB_140f94b52;
  (**(code **)(*param_1 + 0x530))(param_1,&local_a0);
  if (((local_88 == 0.0) && ((!NAN(local_88) && (local_80 == 0.0)))) &&
     ((!NAN(local_80) && ((local_78 == 0.0 && (!NAN(local_78))))))) goto LAB_140f94b52;
  if (param_1[0x1fa] == 0) {
    local_b8 = 5.0;
  }
  else {
    local_b8 = (double)*(float *)(param_1[0x1fa] + 0x4a0);
  }
  local_a8 = local_78 + local_b8;
  local_b0 = local_80 + local_b8;
  local_b8 = local_88 + local_b8;
  FUN_140c9cc04(lVar2,&local_b8,1);
  local_c8 = local_90;
  local_d8 = local_a0;
  uStack_d0 = uStack_98;
  auVar10 = *(undefined1 (*) [16])(lVar2 + 0x1b0);
  dVar5 = auVar10._0_8_;
  dVar6 = auVar10._8_8_;
  dVar15 = *(double *)(lVar2 + 0x1c0);
  puVar9 = *(undefined8 **)(lVar2 + 0x230);
  if (puVar9 == (undefined8 *)0x0) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
    uVar7 = DAT_14c8463d8;
    *puVar9 = DAT_14c8463d0;
    puVar9[1] = uVar7;
    uVar7 = DAT_14c8463e8;
    puVar9[2] = DAT_14c8463e0;
    puVar9[3] = uVar7;
    uVar7 = DAT_14c846500;
    puVar9[4] = DAT_14c8464f8;
    puVar9[5] = uVar7;
    puVar9[6] = DAT_14c846508;
    *(undefined8 **)(lVar2 + 0x230) = puVar9;
  }
  if (((((double)puVar9[4] != dVar5) || (NAN((double)puVar9[4]) || NAN(dVar5))) ||
      ((double)puVar9[5] != dVar6)) || (NAN((double)puVar9[5]) || NAN(dVar6))) {
LAB_140f94c85:
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar15;
    dVar3 = (double)DAT_1499387d0;
    dVar4 = DAT_1499387d0._8_8_;
    auVar10 = divpd(auVar10,_DAT_1499387d0);
    auVar13 = divpd(auVar18,_DAT_1499387d0);
    auVar10 = roundpd(auVar10,auVar10,3);
    auVar13 = roundpd(auVar13,auVar13,3);
    dVar5 = dVar5 - auVar10._0_8_ * dVar3;
    dVar6 = dVar6 - auVar10._8_8_ * dVar4;
    auVar19._0_8_ = dVar15 - auVar13._0_8_ * dVar3;
    auVar19._8_8_ = 0.0 - auVar13._8_8_ * dVar4;
    auVar17._0_8_ = dVar5 + dVar3;
    auVar17._8_8_ = dVar6 + dVar4;
    auVar16._0_8_ = dVar3 + auVar19._0_8_;
    auVar16._8_8_ = dVar4 + auVar19._8_8_;
    auVar13._8_8_ = -(ulonglong)(0.0 <= dVar6);
    auVar13._0_8_ = -(ulonglong)(0.0 <= dVar5);
    auVar10._8_4_ = SUB84(dVar6,0);
    auVar10._0_8_ = dVar5;
    auVar10._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar13 = blendvpd(auVar17,auVar10,auVar13);
    auVar11._8_8_ = -(ulonglong)(0.0 <= auVar19._8_8_);
    auVar11._0_8_ = -(ulonglong)(0.0 <= auVar19._0_8_);
    auVar10 = blendvpd(auVar16,auVar19,auVar11);
    auVar14._0_8_ = auVar13._0_8_ + -360.0;
    auVar14._8_8_ = auVar13._8_8_ + -360.0;
    auVar12._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
    auVar12._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
    auVar13 = blendvpd(auVar13,auVar14,auVar12);
    dVar15 = auVar10._0_8_;
    *(undefined1 (*) [16])(puVar9 + 4) = auVar13;
    puVar9[6] = ~-(ulonglong)(180.0 < dVar15) & (ulonglong)dVar15 |
                (ulonglong)(dVar15 + -360.0) & -(ulonglong)(180.0 < dVar15);
    FUN_144a7484c(puVar9 + 4,&local_68);
    puVar9[2] = local_58;
    puVar9[3] = uStack_50;
    *puVar9 = local_68;
    puVar9[1] = uStack_60;
  }
  else if (((double)puVar9[6] != dVar15) || (NAN((double)puVar9[6]) || NAN(dVar15)))
  goto LAB_140f94c85;
  local_68 = *puVar9;
  uStack_60 = puVar9[1];
  local_58 = puVar9[2];
  uStack_50 = puVar9[3];
  local_e0 = 0;
  local_e8 = 0;
  FUN_144927ad4(lVar2,&local_d8,&local_68,0);
LAB_140f94b52:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f94e08 FUN_140f94e08 body=3521 status=ok
// SIG undefined FUN_140f94e08(void)

void FUN_140f94e08(longlong *param_1)

{
  uint *_Dst;
  uint uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int *piVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
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
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_228 [40];
  undefined1 local_200 [48];
  longlong local_1d0;
  undefined1 local_1c8 [60];
  undefined4 local_18c;
  ulonglong local_188;
  longlong lStack_180;
  wchar_t local_178 [16];
  undefined6 uStack_158;
  undefined2 uStack_152;
  undefined6 uStack_150;
  longlong local_120;
  longlong local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (*(char *)((longlong)param_1 + 0xfa1) != '\0') goto LAB_140f95a0d;
  FUN_14179639c(param_1,1);
  if (param_1[0x15f] == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_1[0x15f] + 0xf8);
    if ((lVar15 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar15);
    }
  }
  FUN_1406cc26a(param_1,lVar15,1,0);
  lVar15 = param_1[0x15f];
  if (lVar15 != 0) {
    *(undefined4 *)(param_1 + 0x97) = *(undefined4 *)(lVar15 + 0xdc);
    *(undefined4 *)((longlong)param_1 + 0x4bc) = *(undefined4 *)(lVar15 + 0xe0);
  }
  lVar15 = param_1[0x149];
  if (lVar15 != 0) {
    FUN_1449bd3ca(local_1c8,lVar15);
    FUN_140569e92(local_1c8,&DAT_14c996900,1,0);
    FUN_1448a161e(&local_188,lVar15);
    if (((CONCAT26(uStack_152,uStack_158) == 0) || (local_120 == 0)) || (local_e8 == 0)) {
      FUN_1401c1f10(&local_188);
      FUN_1401c1f4e(&local_188,local_1c8);
    }
    FUN_1401c0a16(local_200,lVar15);
    if (local_1d0 == 0) {
      local_18c = 0;
      FUN_1406f094e(local_200,&local_18c,1,0);
    }
  }
  FUN_140757002(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb24af8) && (FUN_144b3d300(&DAT_14cb24af8), DAT_14cb24af8 == -1)) {
    uStack_158 = 0x610062006c;
    uStack_152 = 99;
    uStack_150 = 0x73006b;
    builtin_wcsncpy(local_178 + 8,L"ctionCal",8);
    builtin_wcsncpy(local_178,L"unDestru",8);
    local_188 = 0x720042006e004f;
    lStack_180 = 0x52006b00610065;
    FUN_1446f470e(&DAT_14cb24af0);
    _Init_thread_footer(&DAT_14cb24af8);
  }
  lVar15 = DAT_14cb24af0;
  plVar8 = param_1 + 0xf6;
  if (param_1 == (longlong *)0x0) {
    uVar14 = 0;
    uVar16 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    uVar16 = (ulonglong)uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar6 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar6 = *(uint *)(lVar13 + 0x10);
      bVar17 = uVar6 == 0;
      if (bVar17) {
        *(uint *)(lVar13 + 0x10) = uVar11;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar6 = uVar11;
      }
    }
    uVar14 = (ulonglong)uVar6;
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else if (uVar6 == 0) {
      uVar14 = 0;
    }
    else if (((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
            ((plVar7 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 &&
             (((*(uint *)(plVar7 + 2) == uVar6 && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) &&
              (*plVar7 != 0)))))) {
      FUN_1400796d0(*(undefined8 *)(*plVar7 + 0x10),lVar15);
    }
  }
  local_188 = uVar16 | uVar14 << 0x20;
  lStack_180 = lVar15;
  FUN_1403350f6(plVar8);
  iVar5 = (int)param_1[0xf7];
  if (0 < iVar5) {
    lVar15 = 0;
    bVar17 = false;
    do {
      while( true ) {
        lVar13 = *plVar8;
        _Dst = (uint *)(lVar13 + lVar15 * 0x10);
        if (((*(longlong *)(lVar13 + 8 + lVar15 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((((uVar1 = *_Dst, -1 < (int)uVar1 &&
              (((int)uVar1 < DAT_14c9647dc &&
               (plVar7 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar7 != (longlong *)0x0)))) && (*(uint *)(plVar7 + 2) == _Dst[1])) &&
            (((*(uint *)(plVar7 + 1) >> 0x1c & 1) == 0 && (*plVar7 != 0)))))) break;
        iVar12 = iVar5 + ~(uint)lVar15;
        if (iVar12 != 0) {
          if (0 < iVar12) {
            iVar12 = 1;
          }
          memmove(_Dst,(void *)(lVar13 + (longlong)(iVar5 - iVar12) * 0x10),(longlong)iVar12 << 4);
          iVar5 = (int)param_1[0xf7];
        }
        iVar5 = iVar5 + -1;
        *(int *)(param_1 + 0xf7) = iVar5;
        bVar17 = true;
        if (iVar5 <= lVar15) goto LAB_140f957f8;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar5);
    if (bVar17) {
LAB_140f957f8:
      FUN_1400bbcfc(plVar8);
    }
  }
  lVar15 = param_1[0x14a];
  if ((lVar15 != 0) && (param_1[0x15f] != 0)) {
    FUN_1400f437c();
    if (param_1 == (longlong *)0x0) {
      uRam0000000000000f30 = 0;
      iVar5 = 0;
    }
    else {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(param_1 + 0x1e6) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar5 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar17 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar17) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
        }
        LOCK();
        iVar5 = *(int *)(lVar13 + 0x10);
        bVar17 = iVar5 == 0;
        if (bVar17) {
          *(int *)(lVar13 + 0x10) = iVar12;
          iVar5 = 0;
        }
        UNLOCK();
        if (bVar17) {
          iVar5 = iVar12;
        }
      }
    }
    *(int *)((longlong)param_1 + 0xf34) = iVar5;
    uVar1 = *(uint *)(lVar15 + 0xc);
    *(uint *)(param_1 + 0x1be) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar5 = *(int *)(lVar15 + 0x10);
    if (iVar5 == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      lVar13 = 0;
      LOCK();
      iVar5 = *(int *)(lVar15 + 0x10);
      bVar17 = iVar5 == 0;
      if (bVar17) {
        *(int *)(lVar15 + 0x10) = iVar12;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar5 = iVar12;
      }
      *(int *)((longlong)param_1 + 0xdf4) = iVar5;
      if (iVar5 != 0) goto LAB_140f9526b;
    }
    else {
      *(int *)((longlong)param_1 + 0xdf4) = iVar5;
LAB_140f9526b:
      uVar1 = *(uint *)(param_1 + 0x1be);
      lVar13 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar8 == (longlong *)0x0) ||
           (((int)plVar8[2] != iVar5 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) {
          lVar13 = 0;
        }
        else {
          lVar13 = *plVar8;
        }
      }
    }
    *(undefined1 *)(lVar13 + 0x31) = 2;
    *(byte *)((longlong)param_1 + 0xe2b) =
         *(byte *)((longlong)param_1 + 0xe2b) | *(byte *)((longlong)param_1 + 1099) & 0x20;
  }
  lVar15 = DAT_14cb24ad0;
  if (DAT_14cb24ad0 == 0) {
    plVar8 = (longlong *)FUN_145a7712c();
    lVar15 = plVar8[0x22];
    if (plVar8[0x22] == 0) {
      (**(code **)(*plVar8 + 1000))(plVar8);
      lVar15 = plVar8[0x22];
    }
  }
  DAT_14cb24ad0 = lVar15;
  lVar15 = DAT_14cb24ad0;
  dVar19 = (double)param_1[0x142] - (double)param_1[0x13f];
  dVar2 = (double)param_1[0x143] - (double)param_1[0x140];
  *(bool *)(param_1 + 0x1f5) = dVar2 < dVar19;
  if (dVar2 < dVar19) {
    dVar28 = dVar2 / dVar19;
  }
  else {
    dVar28 = dVar19 / dVar2;
  }
  *(float *)((longlong)param_1 + 0xfa4) = (float)dVar28;
  if ((char)param_1[0x145] == '\0') {
    dVar25 = 0.0;
    dVar21 = 0.0;
    dVar27 = 0.0;
    dVar19 = 0.0;
    dVar32 = 0.0;
    dVar28 = 0.0;
  }
  else {
    dVar18 = (double)param_1[0x48];
    dVar20 = (double)param_1[0x49];
    dVar22 = (double)param_1[0x4a];
    dVar24 = (double)param_1[0x50];
    dVar26 = (double)param_1[0x51];
    dVar32 = dVar22 + dVar22;
    dVar21 = dVar18 + dVar18;
    dVar27 = dVar20 + dVar20;
    dVar23 = (double)param_1[0x48] * dVar32;
    dVar28 = (double)param_1[0x4b];
    dVar25 = (double)param_1[0x4b];
    dVar34 = dVar27 * dVar28;
    dVar28 = dVar32 * dVar28;
    dVar30 = dVar21 * dVar25;
    dVar3 = (double)param_1[0x52];
    auVar33._0_8_ = (dVar34 + dVar23) * dVar3;
    auVar33._8_8_ = (dVar21 * dVar25 + (double)param_1[0x48] * dVar21) * (double)param_1[0x53];
    dVar4 = (1.0 - (dVar32 * dVar22 + dVar27 * dVar20)) * dVar24;
    dVar25 = (1.0 - (dVar32 * dVar22 + dVar21 * dVar18)) * dVar26;
    dVar29 = (dVar28 + dVar27 * dVar18) * dVar24;
    dVar31 = (dVar30 + dVar32 * dVar20) * dVar26;
    dVar24 = (dVar23 - dVar34) * dVar24;
    auVar35._0_8_ = dVar26 * (dVar27 * dVar18 - dVar28);
    auVar35._8_8_ = dVar3 * (dVar32 * dVar20 - dVar30);
    auVar33 = blendpd(auVar33,auVar35,2);
    auVar36._8_4_ = SUB84(dVar25,0);
    auVar36._0_8_ = dVar4;
    auVar36._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    auVar36 = blendpd(auVar35,auVar36,2);
    dVar3 = (1.0 - (dVar21 * dVar18 + dVar27 * dVar20)) * dVar3;
    dVar20 = ((double)param_1[0x13f] + (double)param_1[0x142]) * 0.5;
    dVar22 = ((double)param_1[0x140] + (double)param_1[0x143]) * 0.5;
    dVar26 = ((double)param_1[0x141] + (double)param_1[0x144]) * 0.5;
    dVar19 = dVar19 * 0.5;
    dVar2 = dVar2 * 0.5;
    dVar18 = ((double)param_1[0x144] - (double)param_1[0x141]) * 0.5;
    dVar25 = ABS(dVar18 * auVar33._0_8_) + ABS(auVar36._0_8_ * dVar2) + ABS(dVar19 * dVar4);
    dVar21 = ABS(dVar18 * auVar33._8_8_) + ABS(auVar36._8_8_ * dVar2) + ABS(dVar19 * dVar29);
    dVar27 = dVar26 * auVar33._0_8_ + dVar22 * auVar36._0_8_ + dVar20 * dVar4 +
             (double)param_1[0x4c];
    dVar4 = dVar26 * auVar33._8_8_ + dVar22 * auVar36._8_8_ + dVar20 * dVar29 +
            (double)param_1[0x4d];
    dVar32 = dVar27 - dVar25;
    dVar28 = dVar4 - dVar21;
    dVar25 = dVar25 + dVar27;
    dVar21 = dVar21 + dVar4;
    dVar27 = dVar26 * dVar3 + dVar22 * dVar31 + dVar20 * dVar24 + (double)param_1[0x4e];
    dVar2 = ABS(dVar2 * dVar31) + ABS(dVar19 * dVar24) + ABS(dVar18 * dVar3);
    dVar19 = dVar27 - dVar2;
    dVar27 = dVar27 + dVar2;
  }
  dVar27 = (dVar27 - dVar19) * 0.5;
  dVar21 = (dVar21 - dVar28) * 0.5;
  dVar2 = (dVar25 - dVar32) * 0.5;
  dVar19 = dVar19 + dVar27;
  dVar28 = dVar28 + dVar21;
  dVar32 = dVar32 + dVar2;
  lVar13 = param_1[0x15f];
  if ((((lVar13 == 0) || (*(char *)(lVar13 + 0x10c) != '\x01')) ||
      (dVar25 = *(double *)(lVar13 + 0x110), dVar25 <= 9.99999993922529e-09)) ||
     ((dVar3 = *(double *)(lVar13 + 0x118), dVar3 <= 9.99999993922529e-09 ||
      (dVar4 = *(double *)(lVar13 + 0x120), dVar4 <= 9.99999993922529e-09)))) {
    dVar25 = (double)*(float *)(lVar15 + 0x74);
    dVar2 = dVar2 * dVar25;
    dVar21 = dVar21 * dVar25;
    dVar27 = dVar27 * dVar25;
    param_1[0x162] = (longlong)(dVar32 - dVar2);
    param_1[0x163] = (longlong)(dVar28 - dVar21);
    param_1[0x164] = (longlong)(dVar19 - dVar27);
    param_1[0x165] = (longlong)(dVar32 + dVar2);
    param_1[0x166] = (longlong)(dVar28 + dVar21);
    param_1[0x167] = (longlong)(dVar19 + dVar27);
    *(undefined1 *)(param_1 + 0x168) = 1;
    if (lVar13 != 0) goto LAB_140f956cd;
  }
  else {
    param_1[0x162] = (longlong)(dVar32 - dVar25);
    param_1[0x163] = (longlong)(dVar28 - dVar3);
    param_1[0x164] = (longlong)(dVar19 - dVar4);
    param_1[0x165] = (longlong)(dVar32 + dVar25);
    param_1[0x166] = (longlong)(dVar28 + dVar3);
    param_1[0x167] = (longlong)(dVar19 + dVar4);
    *(undefined1 *)(param_1 + 0x168) = 1;
LAB_140f956cd:
    if (((*(char *)(lVar13 + 0xa0) == '\x01') &&
        (lVar15 = (**(code **)(*param_1 + 0x7b8))(param_1,0,1,0xffffffff), lVar15 != 0)) &&
       ((*(longlong *)(lVar15 + 0x138) != 0 &&
        (lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x138) + 0x50), lVar15 != 0)))) {
      FUN_1457e7c5c(lVar15,param_1 + 0x16d,param_1[0x15f],param_1 + 0x48);
    }
  }
  lVar15 = param_1[0xcc];
  if (lVar15 == 0) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
    uVar10 = 1;
  }
  else {
    lVar13 = *(longlong *)(lVar15 + 0x218);
    plVar8 = *(longlong **)(lVar15 + 0x220);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar9 = (int *)((longlong)plVar8 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (lVar13 == 0) {
LAB_140f95911:
      iVar5 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_1[0xcc] + 0x218);
      plVar8 = *(longlong **)(param_1[0xcc] + 0x220);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar9 = (int *)((longlong)plVar8 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if ((longlong)*(int *)(lVar15 + 200) < 1) goto LAB_140f95911;
      piVar9 = *(int **)(lVar15 + 0x1f0);
      lVar13 = 0;
      iVar5 = 0;
      do {
        if ((*piVar9 != 3) ||
           (*(int *)(*(longlong *)(lVar15 + 0x140) + 0x34 + lVar13) <
            *(int *)(*(longlong *)(lVar15 + 0x140) + 8 + lVar13))) {
          iVar5 = iVar5 + 1;
        }
        lVar13 = lVar13 + 0x50;
        piVar9 = piVar9 + 1;
      } while ((longlong)*(int *)(lVar15 + 200) * 0x50 != lVar13);
    }
    lVar15 = param_1[0xcc];
    *(int *)(param_1 + 0x16c) = iVar5;
    uVar10 = 1;
    if (lVar15 != 0) {
      lVar13 = *(longlong *)(lVar15 + 0x218);
      plVar8 = *(longlong **)(lVar15 + 0x220);
      if (plVar8 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar9 = (int *)((longlong)plVar8 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if ((lVar13 != 0) && (0 < (longlong)*(int *)(lVar13 + 0x148))) {
        piVar9 = (int *)(*(longlong *)(lVar13 + 0x140) + 8);
        lVar15 = 0;
        do {
          if ((*piVar9 == piVar9[0xb]) &&
             (*(int *)(*(longlong *)(lVar13 + 0x1f0) + lVar15 * 4) == 3)) goto LAB_140f9598b;
          lVar15 = lVar15 + 1;
          piVar9 = piVar9 + 0x14;
        } while (*(int *)(lVar13 + 0x148) != lVar15);
      }
      uVar10 = 0;
    }
  }
LAB_140f9598b:
  *(undefined1 *)((longlong)param_1 + 0xb64) = uVar10;
  if ((char)param_1[0x160] == '\x01') {
    *(undefined1 *)(param_1 + 0x161) = 0;
    *(undefined1 *)((longlong)param_1 + 0xfa3) = 0;
    while (lVar15 = *(longlong *)param_1[0x1f1], lVar15 != 0) {
      lVar13 = param_1[0x1f1];
      param_1[0x1f1] = lVar15;
      *(undefined4 *)(lVar15 + 8) = 0;
      if (lVar13 != 0) {
        FUN_1400020a8();
      }
    }
    *(undefined4 *)(param_1 + 499) = 0;
    if (*(int *)((longlong)param_1 + 0xf9c) != 0) {
      FUN_14481578e(param_1 + 0x1f2,0);
    }
    (**(code **)(param_1[0x15e] + 0x68))(param_1 + 0x15e);
  }
LAB_140f95a0d:
  if ((local_d0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f95bca FUN_140f95bca body=4564 status=ok
// SIG undefined FUN_140f95bca(void)

ulonglong FUN_140f95bca(longlong *param_1,int *param_2,longlong param_3,uint *param_4,
                       longlong *param_5,uint param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
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
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  char cVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  byte bVar24;
  int iVar25;
  int iVar26;
  longlong *plVar27;
  uint *puVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong *puVar31;
  longlong *plVar32;
  uint uVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  int iVar36;
  uint uVar37;
  undefined *puVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  int iVar43;
  undefined1 uVar44;
  int *piVar45;
  bool bVar46;
  undefined1 auStack_158 [32];
  uint *local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  int local_dc;
  uint *local_d8;
  int *local_d0;
  uint *local_c8;
  ulonglong local_c0;
  longlong *local_b8;
  longlong *local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  code *local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  uint local_54;
  int local_50;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = (uint *)CONCAT44(local_138._4_4_,param_6);
  FUN_140f96e2c(param_1,&local_54,param_2);
  if (((((local_50 != 0) && (-1 < (int)local_54)) && ((int)local_54 < DAT_14c9647dc)) &&
      ((puVar31 = (ulonglong *)
                  ((ulonglong)((local_54 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_54 >> 0x10) * 8)),
       puVar31 != (ulonglong *)0x0 && ((int)puVar31[2] == local_50)))) &&
     (((puVar31[1] & 0x10200000) == 0 && (uVar23 = *puVar31, *puVar31 != 0)))) goto LAB_140f96424;
  lVar20 = FUN_1400d1226(*param_5,param_4);
  if (lVar20 != 0) {
    iVar19 = FUN_140c7f2b4(param_3,param_2);
    if ((iVar19 == -1) ||
       (lVar21 = (longlong)iVar19 * 0xf0 + *(longlong *)(param_3 + 0x60), lVar21 == 0)) {
      lVar21 = FUN_140ce4600();
      if (DAT_14c951858 == 0) {
        local_100 = &local_98;
        local_98 = FUN_1449e2820;
        local_f0 = FUN_14081d0ea;
        local_f8 = FUN_14081d0ea;
        local_108 = &LAB_1468c5283;
        local_110 = FUN_142809da0;
        local_118 = L"Engine";
        local_120 = 0x400000000;
        local_128 = 0x10000000;
        local_130 = (longlong *)CONCAT44(local_130._4_4_,8);
        local_138 = (uint *)CONCAT44(local_138._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      plVar22 = *(longlong **)(param_3 + 0x20);
      if (plVar22 != (longlong *)0x0) {
        do {
          if ((*(int *)(plVar22[2] + 0x38) < *(int *)(lVar21 + 0x38)) ||
             (plVar27 = plVar22,
             *(longlong *)(*(longlong *)(plVar22[2] + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8)
             != lVar21 + 0x30)) {
            plVar27 = (longlong *)0x0;
          }
        } while ((plVar27 == (longlong *)0x0) &&
                (plVar22 = (longlong *)plVar22[4], plVar22 != (longlong *)0x0));
        if ((plVar27 != (longlong *)0x0) &&
           ((lVar21 = (**(code **)(*plVar27 + 0x2a8))(), lVar21 != 0 &&
            (lVar21 = FUN_140bf242e(lVar21,param_2,param_6), lVar21 != 0)))) {
          local_78 = *param_5;
          local_70 = param_5[1];
          if (local_70 != 0) {
            LOCK();
            *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
            UNLOCK();
          }
          plVar22 = (longlong *)FUN_140f96da0(lVar21,&local_78);
          if ((plVar22 != (longlong *)0x0) &&
             ((local_50 == 0 ||
              (((((-1 < (int)local_54 && ((int)local_54 < DAT_14c9647dc)) &&
                 (lVar21 = (ulonglong)((local_54 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_54 >> 0x10) * 8),
                 lVar21 != 0)) &&
                ((*(int *)(lVar21 + 0x10) == local_50 && ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)
                 ))) || (*(char *)((longlong)plVar22 + 0x29) == '\x01')))))) {
            uVar44 = (undefined1)plVar22[5];
            local_88 = *param_5;
            local_80 = param_5[1];
            if (local_80 != 0) {
              LOCK();
              *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
              UNLOCK();
            }
            local_130 = &local_88;
            local_138 = param_4;
            uVar23 = (**(code **)(*plVar22 + 0x2e0))(plVar22,param_2,param_6,param_3);
            goto LAB_140f95dc0;
          }
        }
      }
    }
    else {
      cVar18 = FUN_144a76f74(&local_54,1,0);
      if ((cVar18 == '\0') || (*(char *)(lVar21 + 0x70) == '\x01')) {
        uVar44 = *(undefined1 *)(lVar21 + 0xd8);
        local_68 = *param_5;
        local_60 = param_5[1];
        if (local_60 != 0) {
          LOCK();
          *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
          UNLOCK();
        }
        uVar23 = (**(code **)(*param_1 + 8))(param_1,lVar21,param_4,&local_68);
LAB_140f95dc0:
        if (uVar23 != 0) {
          uVar39 = *(uint *)(lVar20 + 0xc);
          local_dc = CONCAT31(local_dc._1_3_,uVar44);
          if ((int)uVar39 < DAT_14c9647dc) {
            lVar20 = (ulonglong)((uVar39 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8);
          }
          else {
            lVar20 = 0;
          }
          uVar42 = *param_4;
          iVar43 = *param_2;
          iVar25 = param_2[1];
          iVar36 = param_2[2];
          iVar26 = param_2[3];
          iVar19 = *(int *)(lVar20 + 0x10);
          local_d0 = param_2;
          local_c8 = param_4;
          local_c0 = uVar23;
          local_b0 = param_1;
          if (*(int *)(lVar20 + 0x10) == 0) {
            LOCK();
            iVar19 = DAT_14c964868 + 1;
            UNLOCK();
            iVar41 = DAT_14c964868 + 1;
            bVar46 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar19;
            if (bVar46) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                           );
            }
            LOCK();
            iVar19 = *(int *)(lVar20 + 0x10);
            bVar46 = iVar19 == 0;
            if (bVar46) {
              *(int *)(lVar20 + 0x10) = iVar41;
              iVar19 = 0;
            }
            UNLOCK();
            if (bVar46) {
              iVar19 = iVar41;
            }
          }
          if (((iVar25 == 0 && iVar43 == 0) && iVar36 == 0) && iVar26 == 0) {
            FUN_1475900a8(local_c0);
            puVar28 = local_c8;
            piVar45 = local_d0;
          }
          else {
            uVar34 = CONCAT44(iVar19,uVar39);
            EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3d18);
            puVar28 = local_c8;
            piVar45 = local_d0;
            iVar17 = DAT_14cab3cfc;
            iVar41 = DAT_14cab3cf8;
            iVar19 = DAT_14cab3cd0;
            DAT_14cab3d40 = local_c0;
            DAT_14cab3d48 = iVar43;
            DAT_14cab3d4c = iVar25;
            DAT_14cab3d50 = iVar36;
            DAT_14cab3d54 = iVar26;
            DAT_14cab3d58 = uVar34;
            DAT_14cab3d60 = uVar42;
            if (DAT_14cab3cfc == 0) {
              iVar43 = DAT_14cab3cd0 + 1;
              bVar46 = DAT_14cab3cd4 == DAT_14cab3cd0;
              DAT_14cab3cd0 = iVar43;
              if (bVar46) {
                FUN_140044672(&DAT_14cab3cc8,iVar19);
              }
              iVar43 = DAT_14cab3cf0;
              if (DAT_14cab3cf0 == 0) {
                iVar25 = -1;
              }
              else {
                iVar25 = DAT_14cab3cf0 + 0x1e;
                if (-1 < DAT_14cab3cf0 + -1) {
                  iVar25 = DAT_14cab3cf0 + -1;
                }
                iVar25 = iVar25 >> 5;
              }
              iVar36 = DAT_14cab3cf0 + 1;
              iVar26 = DAT_14cab3cf0 + 0x1f;
              if (-1 < DAT_14cab3cf0) {
                iVar26 = DAT_14cab3cf0;
              }
              if (iVar26 >> 5 != iVar25) {
                if (DAT_14cab3cf4 <= DAT_14cab3cf0) {
                  if (DAT_14cab3cf0 + 0x20U < 0xa0) {
                    DAT_14cab3cf4 = 0x80;
                  }
                  else {
                    uVar39 = DAT_14cab3cf0 + 0x20U >> 5;
                    if (DAT_14cab3cf4 + 0x1fU < 0xa0) {
                      uVar42 = 4;
                      if (4 < uVar39) {
                        uVar42 = uVar39;
                      }
                    }
                    else {
                      uVar42 = (uVar39 * 3 >> 3) + uVar39 + 0x10;
                    }
                    uVar23 = FUN_144a3809e(uVar42 << 2,0);
                    iVar25 = (int)(uVar23 >> 2);
                    DAT_14cab3cf4 = -0x20;
                    if ((int)uVar39 <= iVar25) {
                      DAT_14cab3cf4 = iVar25 << 5;
                    }
                  }
                  FUN_1446efbd8(&DAT_14cab3cd8,DAT_14cab3cf0);
                  iVar36 = DAT_14cab3cf0 + 1;
                }
                iVar25 = iVar36 + 0x1f;
                if (-1 < iVar36) {
                  iVar25 = iVar36;
                }
                if (iVar36 % 0x20 != 0) {
                  puVar38 = &DAT_14cab3cd8;
                  if (DAT_14cab3ce8 != (undefined *)0x0) {
                    puVar38 = DAT_14cab3ce8;
                  }
                  bVar24 = -(char)(iVar36 % 0x20);
                  DAT_14cab3cf0 = iVar36;
                  *(uint *)(puVar38 + (longlong)(iVar25 >> 5) * 4) =
                       (uint)(*(int *)(puVar38 + (longlong)(iVar25 >> 5) * 4) << (bVar24 & 0x1f)) >>
                       (bVar24 & 0x1f);
                  iVar36 = DAT_14cab3cf0;
                }
              }
              DAT_14cab3cf0 = iVar36;
              lVar20 = (longlong)iVar19;
              puVar38 = &DAT_14cab3cd8;
              if (DAT_14cab3ce8 != (undefined *)0x0) {
                puVar38 = DAT_14cab3ce8;
              }
              bVar24 = (byte)iVar43 & 0x1f;
              *(uint *)(puVar38 + (longlong)(iVar26 >> 5) * 4) =
                   *(uint *)(puVar38 + (longlong)(iVar26 >> 5) * 4) &
                   (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24);
              iVar41 = iVar19;
            }
            else {
              lVar20 = (longlong)DAT_14cab3cf8;
              DAT_14cab3cf8 = *(int *)(DAT_14cab3cc8 + 4 + lVar20 * 0x30);
              DAT_14cab3cfc = DAT_14cab3cfc + -1;
              if (DAT_14cab3cfc != 0) {
                *(undefined4 *)(DAT_14cab3cc8 + (longlong)DAT_14cab3cf8 * 0x30) = 0xffffffff;
              }
            }
            puVar38 = &DAT_14cab3cd8;
            if (DAT_14cab3ce8 != (undefined *)0x0) {
              puVar38 = DAT_14cab3ce8;
            }
            iVar43 = iVar41 + 0x1f;
            if (-1 < iVar41) {
              iVar43 = iVar41;
            }
            *(uint *)(puVar38 + (longlong)(iVar43 >> 5) * 4) =
                 *(uint *)(puVar38 + (longlong)(iVar43 >> 5) * 4) | 1 << ((byte)iVar41 & 0x1f);
            uVar23 = DAT_14cab3d40;
            lVar21 = DAT_14cab3cc8;
            iVar36 = 1;
            lVar20 = lVar20 * 0x30;
            puVar1 = (undefined4 *)(DAT_14cab3cc8 + lVar20);
            *(ulonglong *)(DAT_14cab3cc8 + lVar20) = DAT_14cab3d40;
            uVar34 = CONCAT44(DAT_14cab3d54,DAT_14cab3d50);
            puVar3 = (undefined8 *)(lVar21 + 8 + lVar20);
            *puVar3 = CONCAT44(DAT_14cab3d4c,DAT_14cab3d48);
            puVar3[1] = uVar34;
            uVar39 = DAT_14cab3d60;
            iVar43 = (int)DAT_14cab3d58;
            iVar25 = DAT_14cab3d58._4_4_;
            piVar4 = (int *)(lVar21 + 0x14 + lVar20);
            *piVar4 = DAT_14cab3d54;
            piVar4[1] = iVar43;
            piVar4[2] = iVar25;
            piVar4[3] = uVar39;
            *(undefined4 *)(lVar21 + 0x28 + lVar20) = 0xffffffff;
            uVar39 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
            uVar39 = (uVar39 >> 0xd ^ uVar39) * -0x3d4d51cb;
            uVar39 = uVar39 >> 0x10 ^ uVar39;
            uVar42 = DAT_14cab3cd0 - DAT_14cab3cfc;
            if ((uVar42 != 0) && (uVar42 != 1)) {
              puVar38 = &DAT_14cab3d00;
              if (DAT_14cab3d08 != (undefined *)0x0) {
                puVar38 = DAT_14cab3d08;
              }
              iVar43 = *(int *)(puVar38 + (ulonglong)(DAT_14cab3d10 - 1U & uVar39) * 4);
              while (iVar43 != -1) {
                puVar2 = (undefined4 *)(DAT_14cab3cc8 + (longlong)iVar43 * 0x30);
                if (*(ulonglong *)(DAT_14cab3cc8 + (longlong)iVar43 * 0x30) == uVar23) {
                  uVar5 = *puVar1;
                  uVar6 = puVar1[1];
                  uVar7 = puVar1[2];
                  uVar8 = puVar1[3];
                  uVar9 = puVar1[4];
                  uVar10 = puVar1[5];
                  uVar11 = puVar1[6];
                  uVar12 = puVar1[7];
                  *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(puVar1 + 8);
                  puVar2[4] = uVar9;
                  puVar2[5] = uVar10;
                  puVar2[6] = uVar11;
                  puVar2[7] = uVar12;
                  *puVar2 = uVar5;
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar7;
                  puVar2[3] = uVar8;
                  FUN_140f932be(&DAT_14cab3cc8);
                  goto LAB_140f9609b;
                }
                iVar43 = puVar2[10];
              }
            }
            if (3 < uVar42) {
              uVar23 = (ulonglong)(uVar42 & 0xfffffffe) + 0xf;
              lVar20 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar36 = 1 << ((byte)lVar20 & 0x1f);
            }
            if (((int)uVar42 < 1) || (iVar36 <= DAT_14cab3d10)) {
              uVar39 = DAT_14cab3d10 - 1U & uVar39;
              puVar1[0xb] = uVar39;
              puVar38 = DAT_14cab3d08;
              if (DAT_14cab3d08 == (undefined *)0x0) {
                puVar38 = &DAT_14cab3d00;
              }
              puVar1[10] = *(undefined4 *)
                            (puVar38 + ((longlong)DAT_14cab3d10 - 1U & (longlong)(int)uVar39) * 4);
              puVar38 = DAT_14cab3d08;
              if (DAT_14cab3d08 == (undefined *)0x0) {
                puVar38 = &DAT_14cab3d00;
              }
              *(int *)(puVar38 + ((longlong)DAT_14cab3d10 - 1U & (longlong)(int)uVar39) * 4) =
                   iVar41;
            }
            else {
              DAT_14cab3d10 = iVar36;
              FUN_140f970f4(&DAT_14cab3cc8);
            }
LAB_140f9609b:
            if (iVar19 == iVar17) {
              FUN_140f9708a(&DAT_14c9647b8,&DAT_14cab3cc0);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cab3d18);
          }
          local_98 = *(code **)piVar45;
          uStack_90 = *(undefined8 *)(piVar45 + 2);
          uVar39 = *puVar28;
          local_a8 = *piVar45;
          iStack_a4 = piVar45[1];
          iStack_a0 = piVar45[2];
          iStack_9c = piVar45[3];
          uVar42 = *(uint *)(local_c0 + 0xc);
          if ((int)uVar42 < DAT_14c9647dc) {
            lVar20 = (ulonglong)((uVar42 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar42 >> 0x10) * 8);
          }
          else {
            lVar20 = 0;
          }
          iVar19 = *(int *)(lVar20 + 0x10);
          if (*(int *)(lVar20 + 0x10) == 0) {
            LOCK();
            iVar19 = DAT_14c964868 + 1;
            UNLOCK();
            iVar43 = DAT_14c964868 + 1;
            bVar46 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar19;
            if (bVar46) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar43);
            }
            LOCK();
            iVar19 = *(int *)(lVar20 + 0x10);
            bVar46 = iVar19 == 0;
            if (bVar46) {
              *(int *)(lVar20 + 0x10) = iVar43;
              iVar19 = 0;
            }
            UNLOCK();
            if (bVar46) {
              iVar19 = iVar43;
            }
          }
          plVar22 = local_b0;
          local_b8 = local_b0 + 3;
          if (*(int *)((longlong)local_b0 + 0x4c) == 0) {
            iVar43 = (int)local_b0[4];
            *(int *)(local_b0 + 4) = iVar43 + 1;
            if (*(int *)((longlong)local_b0 + 0x24) == iVar43) {
              FUN_1404783e8(local_b8,iVar43);
            }
            iVar25 = (int)plVar22[8];
            if (iVar25 == 0) {
              iVar36 = -1;
            }
            else {
              iVar36 = iVar25 + 0x1e;
              if (-1 < iVar25 + -1) {
                iVar36 = iVar25 + -1;
              }
              iVar36 = iVar36 >> 5;
            }
            plVar27 = plVar22 + 5;
            iVar26 = iVar25 + 1;
            iVar41 = iVar25 + 0x1f;
            if (-1 < iVar25) {
              iVar41 = iVar25;
            }
            if (iVar41 >> 5 == iVar36) {
              *(int *)(plVar22 + 8) = iVar26;
            }
            else {
              if (*(int *)((longlong)plVar22 + 0x44) <= iVar25) {
                if (iVar25 + 0x20U < 0xa0) {
                  iVar26 = 0x80;
                  iVar36 = iVar25;
                }
                else {
                  uVar33 = iVar25 + 0x20U >> 5;
                  local_d8 = (uint *)(ulonglong)uVar33;
                  if (*(int *)((longlong)plVar22 + 0x44) + 0x1fU < 0xa0) {
                    uVar30 = 4;
                    if (4 < uVar33) {
                      uVar30 = uVar33;
                    }
                  }
                  else {
                    uVar30 = (uVar33 * 3 >> 3) + uVar33 + 0x10;
                  }
                  uVar23 = FUN_144a3809e(uVar30 << 2,0);
                  iVar36 = (int)(uVar23 >> 2);
                  iVar26 = -0x20;
                  if ((int)local_d8 <= iVar36) {
                    iVar26 = iVar36 << 5;
                  }
                  iVar36 = (int)plVar22[8];
                }
                *(int *)((longlong)plVar22 + 0x44) = iVar26;
                FUN_1446efbd8(plVar27,iVar36);
                iVar26 = (int)plVar22[8] + 1;
              }
              iVar36 = iVar26 + 0x1f;
              if (-1 < iVar26) {
                iVar36 = iVar26;
              }
              *(int *)(plVar22 + 8) = iVar26;
              if (iVar26 % 0x20 != 0) {
                plVar32 = (longlong *)plVar22[7];
                if ((longlong *)plVar22[7] == (longlong *)0x0) {
                  plVar32 = plVar27;
                }
                bVar24 = -(char)(iVar26 % 0x20);
                *(uint *)((longlong)plVar32 + (longlong)(iVar36 >> 5) * 4) =
                     (uint)(*(int *)((longlong)plVar32 + (longlong)(iVar36 >> 5) * 4) <<
                           (bVar24 & 0x1f)) >> (bVar24 & 0x1f);
              }
            }
            lVar20 = (longlong)iVar43;
            if ((longlong *)plVar22[7] != (longlong *)0x0) {
              plVar27 = (longlong *)plVar22[7];
            }
            bVar24 = (byte)iVar25 & 0x1f;
            puVar28 = (uint *)((longlong)plVar27 + (longlong)(iVar41 >> 5) * 4);
            *puVar28 = *puVar28 & (-2 << bVar24 | 0xfffffffeU >> 0x20 - bVar24);
          }
          else {
            iVar43 = (int)local_b0[9];
            lVar20 = (longlong)iVar43;
            iVar25 = *(int *)(local_b0[3] + 4 + lVar20 * 0x3c);
            *(int *)(local_b0 + 9) = iVar25;
            iVar36 = *(int *)((longlong)local_b0 + 0x4c) + -1;
            *(int *)((longlong)local_b0 + 0x4c) = iVar36;
            if (iVar36 != 0) {
              *(undefined4 *)(local_b0[3] + (longlong)iVar25 * 0x3c) = 0xffffffff;
            }
          }
          local_d8 = (uint *)(plVar22 + 5);
          uVar33 = 1;
          puVar28 = (uint *)plVar22[7];
          if ((uint *)plVar22[7] == (uint *)0x0) {
            puVar28 = local_d8;
          }
          iVar25 = iVar43 + 0x1f;
          if (-1 < iVar43) {
            iVar25 = iVar43;
          }
          puVar28[iVar25 >> 5] = puVar28[iVar25 >> 5] | 1 << ((byte)iVar43 & 0x1f);
          lVar21 = plVar22[3];
          lVar20 = lVar20 * 0x3c;
          puVar1 = (undefined4 *)(lVar21 + lVar20);
          *(undefined8 *)(lVar21 + lVar20) = local_98;
          ((undefined8 *)(lVar21 + lVar20))[1] = uStack_90;
          *(uint *)(lVar21 + 0x10 + lVar20) = uVar39;
          *(uint *)(lVar21 + 0x14 + lVar20) = param_6;
          piVar45 = (int *)(lVar21 + 0x18 + lVar20);
          *piVar45 = local_a8;
          piVar45[1] = iStack_a4;
          piVar45[2] = iStack_a0;
          piVar45[3] = iStack_9c;
          *(uint *)(lVar21 + 0x28 + lVar20) = uVar42;
          *(int *)(lVar21 + 0x2c + lVar20) = iVar19;
          *(undefined1 *)(lVar21 + 0x30 + lVar20) = (undefined1)local_dc;
          *(undefined2 *)(lVar21 + 0x31 + lVar20) = local_4b;
          *(undefined1 *)(lVar21 + 0x33 + lVar20) = local_49;
          *(undefined4 *)(lVar21 + 0x34 + lVar20) = 0xffffffff;
          iVar19 = FUN_1447addd0(puVar1,0x10);
          plVar27 = local_b8;
          uVar42 = uVar39 >> 0xd ^ iVar19 - uVar39;
          uVar30 = uVar42 << 8 ^ (-0x61c88647 - uVar39) - uVar42;
          uVar37 = uVar30 >> 0xd ^ (uVar39 - uVar42) - uVar30;
          uVar40 = uVar37 >> 0xc ^ (uVar42 - uVar30) - uVar37;
          uVar39 = uVar40 << 0x10 ^ (uVar30 - uVar37) - uVar40;
          uVar42 = uVar39 >> 5 ^ (uVar37 - uVar40) - uVar39;
          uVar30 = uVar42 >> 3 ^ (uVar40 - uVar39) - uVar42;
          uVar39 = uVar30 << 10 ^ (uVar39 - uVar42) - uVar30;
          uVar42 = param_6 >> 0xd ^ (uVar39 >> 0xf ^ uVar42 - (uVar30 + uVar39)) - param_6;
          uVar30 = uVar42 << 8 ^ (-0x61c88647 - uVar42) - param_6;
          uVar39 = uVar30 >> 0xd ^ (param_6 - uVar42) - uVar30;
          uVar37 = uVar39 >> 0xc ^ (uVar42 - uVar30) - uVar39;
          uVar42 = uVar37 << 0x10 ^ (uVar30 - uVar39) - uVar37;
          uVar30 = uVar42 >> 5 ^ (uVar39 - uVar37) - uVar42;
          uVar39 = uVar30 >> 3 ^ (uVar37 - uVar42) - uVar30;
          uVar42 = uVar39 << 10 ^ (uVar42 - uVar30) - uVar39;
          uVar39 = uVar42 >> 0xf ^ uVar30 - (uVar39 + uVar42);
          if ((int)plVar22[4] - *(int *)((longlong)plVar22 + 0x4c) == 1) {
            uVar42 = 1;
LAB_140f96398:
            if (((int)uVar42 < 1) || ((int)uVar33 <= (int)plVar22[0xc])) {
              uVar39 = (int)plVar22[0xc] - 1U & uVar39;
              puVar1[0xe] = uVar39;
              plVar27 = (longlong *)plVar22[0xb];
              if ((longlong *)plVar22[0xb] == (longlong *)0x0) {
                plVar27 = plVar22 + 10;
              }
              puVar1[0xd] = *(undefined4 *)
                             ((longlong)plVar27 +
                             ((longlong)(int)plVar22[0xc] - 1U & (longlong)(int)uVar39) * 4);
              plVar27 = (longlong *)plVar22[0xb];
              if ((longlong *)plVar22[0xb] == (longlong *)0x0) {
                plVar27 = plVar22 + 10;
              }
              *(int *)((longlong)plVar27 +
                      ((longlong)(int)plVar22[0xc] - 1U & (longlong)(int)uVar39) * 4) = iVar43;
            }
            else {
              *(uint *)(plVar22 + 0xc) = uVar33;
              plVar27 = plVar22 + 0xb;
              if (plVar22[0xb] != 0) {
                FUN_1446efa72(plVar27,0,0,4);
                uVar33 = *(uint *)(plVar22 + 0xc);
              }
              plVar32 = plVar22 + 10;
              if (uVar33 == 1) {
                if (*plVar27 != 0) {
                  FUN_1446efa72(plVar27,0,0,4);
                }
LAB_140f96520:
                uVar39 = 0;
                do {
                  plVar27 = (longlong *)plVar22[0xb];
                  if ((longlong *)plVar22[0xb] == (longlong *)0x0) {
                    plVar27 = plVar32;
                  }
                  *(undefined4 *)
                   ((longlong)plVar27 + (ulonglong)((int)plVar22[0xc] + 0x7fffffffU & uVar39) * 4) =
                       0xffffffff;
                  uVar39 = uVar39 + 1;
                } while (uVar33 != uVar39);
              }
              else {
                if (uVar33 == 0) goto LAB_140f963eb;
                FUN_1446efa72(plVar27,0,uVar33,4);
                if (0 < (int)uVar33) goto LAB_140f96520;
              }
              iVar19 = (int)plVar22[8];
              if (iVar19 == 0) {
                uVar23 = 0;
                uVar35 = 1;
                iVar25 = 0;
                iVar43 = 0;
              }
              else {
                puVar28 = (uint *)plVar22[7];
                if ((uint *)plVar22[7] == (uint *)0x0) {
                  puVar28 = local_d8;
                }
                uVar39 = *puVar28;
                if (uVar39 == 0) {
                  iVar43 = iVar19 + 0x1e;
                  if (-1 < iVar19 + -1) {
                    iVar43 = iVar19 + -1;
                  }
                  uVar23 = 0;
                  uVar35 = (ulonglong)(uint)(iVar43 >> 5);
                  if (iVar43 >> 5 < 1) {
                    uVar35 = uVar23;
                  }
                  iVar43 = 0;
                  do {
                    if (uVar35 == uVar23) goto LAB_140f963eb;
                    iVar43 = iVar43 + 0x20;
                    uVar39 = puVar28[uVar23 + 1];
                    uVar23 = uVar23 + 1;
                  } while (uVar39 == 0);
                }
                else {
                  uVar23 = 0;
                  iVar43 = 0;
                }
                uVar35 = (ulonglong)(-uVar39 & uVar39);
                uVar29 = uVar35 * 2 + 1;
                lVar20 = 0x3f;
                if (uVar29 != 0) {
                  for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                iVar25 = (iVar43 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                if (iVar19 <= iVar25) {
                  iVar25 = iVar19;
                }
              }
              if (iVar25 < iVar19) {
                uVar39 = 0xffffffff;
                do {
                  lVar20 = plVar22[3];
                  local_b8 = (longlong *)(longlong)iVar25;
                  lVar21 = (longlong)local_b8 * 0x3c;
                  uVar42 = *(uint *)(lVar20 + 0x10 + lVar21);
                  uVar33 = *(uint *)(lVar20 + 0x14 + lVar21);
                  local_dc = iVar43;
                  iVar19 = FUN_1447addd0(lVar21 + lVar20,0x10);
                  uVar37 = uVar42 >> 0xd ^ iVar19 - uVar42;
                  uVar30 = uVar37 << 8 ^ (-0x61c88647 - uVar42) - uVar37;
                  uVar42 = uVar30 >> 0xd ^ (uVar42 - uVar37) - uVar30;
                  uVar37 = uVar42 >> 0xc ^ (uVar37 - uVar30) - uVar42;
                  uVar30 = uVar37 << 0x10 ^ (uVar30 - uVar42) - uVar37;
                  uVar42 = uVar30 >> 5 ^ (uVar42 - uVar37) - uVar30;
                  uVar37 = uVar42 >> 3 ^ (uVar37 - uVar30) - uVar42;
                  uVar30 = uVar37 << 10 ^ (uVar30 - uVar42) - uVar37;
                  uVar42 = uVar33 >> 0xd ^ (uVar30 >> 0xf ^ uVar42 - (uVar37 + uVar30)) - uVar33;
                  uVar30 = uVar42 << 8 ^ (-0x61c88647 - uVar33) - uVar42;
                  uVar33 = uVar30 >> 0xd ^ (uVar33 - uVar42) - uVar30;
                  uVar37 = uVar33 >> 0xc ^ (uVar42 - uVar30) - uVar33;
                  uVar42 = uVar37 << 0x10 ^ (uVar30 - uVar33) - uVar37;
                  uVar33 = uVar42 >> 5 ^ (uVar33 - uVar37) - uVar42;
                  uVar30 = uVar33 >> 3 ^ (uVar37 - uVar42) - uVar33;
                  uVar42 = uVar30 << 10 ^ (uVar42 - uVar33) - uVar30;
                  uVar29 = (longlong)(int)(uVar42 >> 0xf ^ uVar33 - (uVar30 + uVar42)) &
                           (longlong)(int)local_b0[0xc] - 1U;
                  iVar19 = (int)uVar29;
                  *(int *)(lVar20 + 0x38 + lVar21) = iVar19;
                  plVar22 = (longlong *)local_b0[0xb];
                  if ((longlong *)local_b0[0xb] == (longlong *)0x0) {
                    plVar22 = plVar32;
                  }
                  *(undefined4 *)(lVar20 + 0x34 + lVar21) =
                       *(undefined4 *)
                        ((longlong)plVar22 + ((longlong)(int)local_b0[0xc] - 1U & uVar29) * 4);
                  plVar22 = (longlong *)local_b0[0xb];
                  if ((longlong *)local_b0[0xb] == (longlong *)0x0) {
                    plVar22 = plVar32;
                  }
                  *(int *)((longlong)plVar22 +
                          ((longlong)iVar19 & (longlong)(int)local_b0[0xc] - 1U) * 4) =
                       (int)local_b8;
                  uVar39 = ~(uint)uVar35 & uVar39;
                  puVar28 = (uint *)local_b0[7];
                  if ((uint *)local_b0[7] == (uint *)0x0) {
                    puVar28 = local_d8;
                  }
                  iVar19 = (int)local_b0[8];
                  iVar25 = (int)uVar23;
                  lVar20 = (longlong)iVar25;
                  uVar42 = puVar28[lVar20] & uVar39;
                  iVar43 = local_dc;
                  if (uVar42 == 0) {
                    iVar36 = iVar19 + 0x1e;
                    if (-1 < iVar19 + -1) {
                      iVar36 = iVar19 + -1;
                    }
                    iVar36 = iVar36 >> 5;
                    iVar26 = iVar36;
                    if (iVar36 < iVar25) {
                      iVar26 = iVar25;
                    }
                    if (iVar36 <= iVar25) break;
                    lVar21 = 0;
                    while( true ) {
                      iVar43 = iVar43 + 0x20;
                      uVar42 = puVar28[lVar20 + lVar21 + 1];
                      if (uVar42 != 0) break;
                      lVar21 = lVar21 + 1;
                      if (iVar26 - lVar20 == lVar21) goto LAB_140f963eb;
                    }
                    uVar23 = (ulonglong)(iVar25 + (int)lVar21 + 1);
                    uVar39 = 0xffffffff;
                  }
                  uVar35 = (ulonglong)(-uVar42 & uVar42);
                  uVar29 = uVar35 * 2 + 1;
                  lVar20 = 0x3f;
                  if (uVar29 != 0) {
                    for (; uVar29 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                    }
                  }
                  iVar25 = (iVar43 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
                  plVar22 = local_b0;
                } while (iVar25 < iVar19);
              }
            }
          }
          else {
            iVar19 = FUN_140f96fde(local_b8,uVar39,puVar1);
            if (iVar19 == -1) {
              uVar42 = (int)plVar22[4] - *(int *)((longlong)plVar22 + 0x4c);
              if (3 < uVar42) {
                uVar23 = (ulonglong)(uVar42 & 0xfffffffe) + 0xf;
                lVar20 = 0x3f;
                if (uVar23 != 0) {
                  for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                  }
                }
                uVar33 = 1 << ((byte)lVar20 & 0x1f);
              }
              goto LAB_140f96398;
            }
            lVar20 = *plVar27;
            lVar21 = (longlong)iVar19 * 0x3c;
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            uVar9 = puVar1[4];
            uVar10 = puVar1[5];
            uVar11 = puVar1[6];
            uVar12 = puVar1[7];
            uVar13 = puVar1[8];
            uVar14 = puVar1[9];
            uVar15 = puVar1[10];
            uVar16 = puVar1[0xb];
            *(undefined4 *)(lVar20 + 0x30 + lVar21) = puVar1[0xc];
            puVar1 = (undefined4 *)(lVar20 + 0x20 + lVar21);
            *puVar1 = uVar13;
            puVar1[1] = uVar14;
            puVar1[2] = uVar15;
            puVar1[3] = uVar16;
            puVar1 = (undefined4 *)(lVar20 + 0x10 + lVar21);
            *puVar1 = uVar9;
            puVar1[1] = uVar10;
            puVar1[2] = uVar11;
            puVar1[3] = uVar12;
            puVar1 = (undefined4 *)(lVar20 + lVar21);
            *puVar1 = uVar5;
            puVar1[1] = uVar6;
            puVar1[2] = uVar7;
            puVar1[3] = uVar8;
            FUN_1400a655e(plVar27,iVar43);
          }
LAB_140f963eb:
          lVar20 = FUN_1405e0c42(*param_5 + 0x38);
          uVar23 = local_c0;
          if (lVar20 != 0) {
            FUN_140e06640(lVar20,local_d0,local_c8);
            uVar23 = local_c0;
          }
          goto LAB_140f96424;
        }
      }
    }
  }
  uVar23 = 0;
LAB_140f96424:
  plVar22 = (longlong *)param_5[1];
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar27 = plVar22 + 1;
    *(int *)plVar27 = (int)*plVar27 + -1;
    UNLOCK();
    if ((int)*plVar27 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar45 = (int *)((longlong)plVar22 + 0xc);
      *piVar45 = *piVar45 + -1;
      UNLOCK();
      if (*piVar45 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23;
}



// FUNCTION 140f96da0 FUN_140f96da0 body=139 status=ok
// SIG undefined FUN_140f96da0(void)

undefined8 FUN_140f96da0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar4 = (**(code **)(*param_1 + 0x2d0))(param_1,&local_28);
  plVar3 = (longlong *)param_2[1];
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f96e2c FUN_140f96e2c body=432 status=ok
// SIG undefined FUN_140f96e2c(void)

undefined8 *
FUN_140f96e2c(longlong param_1,undefined8 *param_2,undefined4 *param_3,uint *param_4,uint param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  uVar5 = *param_4;
  local_34 = param_5;
  local_38 = uVar5;
  iVar2 = FUN_1447addd0(&local_48,0x10);
  uVar4 = uVar5 >> 0xd ^ iVar2 - uVar5;
  uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar5) - uVar4;
  uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar4) - uVar7;
  uVar9 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
  uVar5 = uVar9 << 0x10 ^ (uVar7 - uVar8) - uVar9;
  uVar4 = uVar5 >> 5 ^ (uVar8 - uVar9) - uVar5;
  uVar7 = uVar4 >> 3 ^ (uVar9 - uVar5) - uVar4;
  uVar5 = uVar7 << 10 ^ (uVar5 - uVar4) - uVar7;
  uVar4 = param_5 >> 0xd ^ (uVar5 >> 0xf ^ uVar4 - (uVar7 + uVar5)) - param_5;
  uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar4) - param_5;
  uVar5 = uVar7 >> 0xd ^ (param_5 - uVar4) - uVar7;
  uVar8 = uVar5 >> 0xc ^ (uVar4 - uVar7) - uVar5;
  uVar4 = uVar8 << 0x10 ^ (uVar7 - uVar5) - uVar8;
  uVar7 = uVar4 >> 5 ^ (uVar5 - uVar8) - uVar4;
  uVar5 = uVar7 >> 3 ^ (uVar8 - uVar4) - uVar7;
  uVar4 = uVar5 << 10 ^ (uVar4 - uVar7) - uVar5;
  iVar2 = FUN_140f96fde((longlong *)(param_1 + 0x18),uVar4 >> 0xf ^ uVar7 - (uVar5 + uVar4),
                        &local_48);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x18);
    uVar3 = 0;
    lVar6 = lVar1 + (longlong)iVar2 * 0x3c;
    if ((lVar6 != 0) && (lVar1 + (longlong)iVar2 * 0x3c != -0x18)) {
      uVar3 = *(undefined8 *)(lVar6 + 0x28);
    }
  }
  *param_2 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f96fde FUN_140f96fde body=108 status=ok
// SIG undefined FUN_140f96fde(void)

int FUN_140f96fde(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar1 = FUN_140f9704a(lVar3 + (longlong)iVar4 * 0x3c,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x34 + (longlong)iVar4 * 0x3c);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 140f9704a FUN_140f9704a body=64 status=ok
// SIG undefined FUN_140f9704a(void)

undefined4 FUN_140f9704a(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (uVar1 = 0, param_1[3] == param_2[3])) {
    if (param_1[4] == param_2[4]) {
      uVar1 = CONCAT31((int3)((uint)param_1[5] >> 8),param_1[5] == param_2[5]);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 140f9708a FUN_140f9708a body=105 status=ok
// SIG undefined FUN_140f9708a(void)

void FUN_140f9708a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  iVar1 = *(int *)(param_1 + 0x80);
  *(uint *)(param_1 + 0x80) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x84) < iVar1 + 1U) {
    FUN_1457d6900((longlong *)(param_1 + 0x78),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000140f970df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x88));
  return;
}



// FUNCTION 140f970f4 FUN_140f970f4 body=595 status=ok
// SIG undefined FUN_140f970f4(void)

void FUN_140f970f4(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x30;
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x2c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x28 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140f972fe;
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
LAB_140f972fe:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f97348 FUN_140f97348 body=91 status=ok
// SIG undefined FUN_140f97348(void)

void FUN_140f97348(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f973a4(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b8098d0;
  puVar1[0x73] = &PTR_FUN_14b809f10;
  puVar1[0x74] = &PTR_FUN_14b809f30;
  puVar1[0x75] = &PTR_FUN_14b809fd0;
  puVar1[0x76] = &PTR_FUN_14b80a020;
  return;
}



// FUNCTION 140f973a4 FUN_140f973a4 body=254 status=ok
// SIG undefined FUN_140f973a4(void)

undefined8 * FUN_140f973a4(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"CollisionComp",1);
  uVar2 = FUN_140f974a4();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar2,0);
  FUN_140e2e424(param_1,param_2);
  *param_1 = &PTR_FUN_14b2cb490;
  param_1[0x73] = &PTR_FUN_14b2cbad0;
  param_1[0x74] = &PTR_FUN_14b2cbaf0;
  param_1[0x75] = &PTR_FUN_14b2cbb90;
  param_1[0x76] = &PTR_FUN_14b2cbbe0;
  plVar1 = (longlong *)param_1[0x72];
  *(undefined4 *)(plVar1 + 0xc5) = 0xff64ff64;
  *(undefined4 *)(plVar1 + 200) = 0x42200000;
  (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cb8cf60,1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f974a4 FUN_140f974a4 body=228 status=ok
// SIG undefined FUN_140f974a4(void)

longlong FUN_140f974a4(void)

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
  if (DAT_14cad2df0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b576a;
    local_38 = &LAB_147a1951a;
    local_40 = FUN_1417c1b7b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x650;
    FUN_14081cfa3(L"/Script/Engine",L"SphereComponent",&DAT_14cad2df0,FUN_1463bd9b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2df0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f97590 FUN_140f97590 body=57 status=ok
// SIG undefined FUN_140f97590(void)

void FUN_140f97590(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0f80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0f80 = FUN_140002ddd(FUN_1465ad8b1,uVar1,L"GbxBrainTask_Revive");
  }
  return;
}



// FUNCTION 140f975ca FUN_140f975ca body=89 status=ok
// SIG undefined FUN_140f975ca(void)

undefined8 FUN_140f975ca(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x4208);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x5d30) != '\0')) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x4588) != 0) &&
     ((*(char *)(*(longlong *)(param_1 + 0x4588) + 0x1c) == '\x01' &&
      (cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3b48) + 0x60))(lVar1 + 0x3b48), cVar2 != '\0')))
     ) {
    return 0;
  }
  uVar3 = FUN_140f97624(param_1);
  return uVar3;
}



// FUNCTION 140f97624 FUN_140f97624 body=193 status=ok
// SIG undefined FUN_140f97624(void)

undefined8 FUN_140f97624(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (((param_1[0x76c] != 0) && ((char)param_1[0x37d] == '\0')) &&
     (cVar2 = (**(code **)(*param_1 + 0xe78))(param_1,4), cVar2 != '\0')) {
    plVar1 = param_1 + 0x2f;
    cVar2 = (**(code **)(param_1[0x2f] + 0xe8))(plVar1);
    if ((cVar2 == '\0') &&
       ((((longlong *)param_1[0x3d7] == (longlong *)0x0 ||
         (cVar2 = (**(code **)(*(longlong *)param_1[0x3d7] + 0x38))(), cVar2 == '\0')) ||
        ((param_1[0x3d7] == 0 ||
         (fVar4 = (float)FUN_1457d6986(), fVar4 < *(float *)(param_1[0x76c] + 0x128))))))) {
      cVar2 = (**(code **)(*plVar1 + 0xe0))(plVar1);
      if (cVar2 != '\0') {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x000140f976b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0xd8))(plVar1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140f976e6 FUN_140f976e6 body=139 status=ok
// SIG undefined FUN_140f976e6(void)

undefined1 * FUN_140f976e6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 *puVar3;
  
  if ((*(longlong *)(param_1 + 0x1b70) == 0) ||
     (*(byte *)(*(longlong *)(param_1 + 0x1b70) + 0x178) < 2)) {
    cVar2 = *(char *)(param_1 + 0x1d68);
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x1d40);
    if (plVar1 == (longlong *)0x0) goto LAB_140f97739;
    if (*(code **)(*plVar1 + 0x40) == (code *)&LAB_1449cc0ea) {
      if (*(char *)((longlong)plVar1 + 0xb2) == '\0') {
        if (*(char *)((longlong)plVar1 + 0x79) != '\0') {
          return &LAB_1449cc001;
        }
        if ((0 < (int)plVar1[4]) && ((char)plVar1[0xf] != '\0')) {
          return &LAB_1449cc001;
        }
      }
      goto LAB_140f97739;
    }
    cVar2 = (**(code **)(*plVar1 + 0x40))();
  }
  if (cVar2 != '\0') {
    return &DAT_00000001;
  }
LAB_140f97739:
  if (*(char *)(param_1 + 0x119) == '\x04') {
    puVar3 = (undefined1 *)(ulonglong)(*(longlong *)(param_1 + -0x68) != 0);
  }
  else {
    puVar3 = (undefined1 *)0x0;
  }
  return puVar3;
}



// FUNCTION 140f97772 FUN_140f97772 body=103 status=ok
// SIG undefined FUN_140f97772(void)

ulonglong FUN_140f97772(longlong param_1)

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
LAB_140f977ca:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140f977ca;
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



// FUNCTION 140f97806 FUN_140f97806 body=57 status=ok
// SIG undefined FUN_140f97806(void)

void FUN_140f97806(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_1 + 0x88);
  if (((((bVar1 & 2) == 0) && (*(byte *)(param_1 + 0x88) = bVar1 | 2, (bVar1 & 0xc) != 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) &&
     (plVar2 = *(longlong **)(param_1 + 0x18), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140f9783b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))(plVar2,*(undefined4 *)(param_1 + 0x38),*(code **)(*plVar2 + 0x60))
    ;
    return;
  }
  return;
}



// FUNCTION 140f97840 FUN_140f97840 body=97 status=ok
// SIG undefined FUN_140f97840(void)

void FUN_140f97840(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  
  if ((*(byte *)(param_1 + 0x11) & 0x42) == 0) {
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x40;
    (**(code **)(*param_1 + 0x60))();
    bVar1 = *(byte *)(param_1 + 0x11);
    if (((((bVar1 & 2) == 0) && (*(byte *)(param_1 + 0x11) = bVar1 | 2, (bVar1 & 0xc) != 0)) &&
        ((int)param_1[4] != 0)) && (plVar2 = (longlong *)param_1[3], plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140f97897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x60))(plVar2,(int)param_1[7]);
      return;
    }
  }
  return;
}



// FUNCTION 140f978a4 FUN_140f978a4 body=151 status=ok
// SIG undefined FUN_140f978a4(void)

void FUN_140f978a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b4267c0;
  if (*(char *)(param_1 + 0xc9) == '\x01') {
    *(undefined1 *)(param_1 + 0xc9) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0xb8);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14b426850;
  plVar3 = *(longlong **)(param_1 + 0xa8);
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
  FUN_140f97a52(param_1 + 0x10);
  return;
}



// FUNCTION 140f9793c FUN_140f9793c body=277 status=ok
// SIG undefined FUN_140f9793c(void)

undefined8 FUN_140f9793c(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f97a4b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f97a4b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_140f97a4b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f979f8;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140f979f8;
    }
  }
  uVar6 = 0;
LAB_140f979f8:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f97a52 FUN_140f97a52 body=371 status=ok
// SIG undefined FUN_140f97a52(void)

void FUN_140f97a52(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_LAB_14b427790;
  if (*(char *)((longlong)param_1 + 0x84) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x84) = 0;
  }
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xc];
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
  FUN_1401b95a9(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x44) = 0;
  }
  plVar3 = param_1 + 5;
  if (*(int *)(param_1 + 6) == 0) {
LAB_140f97ac8:
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,0);
      FUN_1446efa72(plVar3,0,0,0x10);
      *(undefined4 *)(param_1 + 6) = 0;
      goto LAB_140f97ac8;
    }
  }
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140f97aea;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140f97aea:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f97bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140f97bc6 FUN_140f97bc6 body=510 status=ok
// SIG undefined FUN_140f97bc6(void)

void FUN_140f97bc6(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  longlong *local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 *local_40;
  undefined1 local_38;
  undefined8 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x48);
    lVar3 = (longlong)*(int *)(param_1 + 0x50) * 0x38;
    do {
      if (*(int *)(*plVar4 + 8) == param_2) {
        if ((plVar4 != (longlong *)0x0) && (lVar3 = plVar4[5], lVar3 != 0)) {
          local_b0 = (longlong *)plVar4[6];
          lVar5 = lVar3;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
            UNLOCK();
            lVar5 = plVar4[5];
          }
          if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
            local_58 = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            local_58 = 0;
          }
          local_40 = &local_a8;
          uStack_88 = 0;
          uStack_84 = 0;
          uStack_70 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_98 = (longlong *)0x0;
          uStack_90 = 0;
          uStack_8c = 0;
          local_a8 = 0;
          lStack_a0 = 0;
          uStack_80 = 0x8000000000;
          local_78 = 0xffffffff;
          local_38 = 0;
          local_34 = 0xffffffff;
          local_b8 = lVar3;
          local_50 = param_1;
          local_48 = plVar4;
          FUN_140f97dc6(lVar5,&local_58);
          if ((int)local_34 != -1) {
            local_34 = 0xffffffff;
          }
          uStack_60 = uStack_60 & 0xffffffff00000000;
          if (local_68 != 0) {
            FUN_1400020a8();
          }
          FUN_140333f4e(&local_a8);
          if ((*(int *)(*plVar4 + 0xc) == -1) || ((longlong)*(int *)(param_1 + 0x60) == 0))
          goto LAB_140f97d0c;
          plVar4 = *(longlong **)(param_1 + 0x58);
          lVar3 = (longlong)*(int *)(param_1 + 0x60) << 5;
          goto LAB_140f97cf9;
        }
        break;
      }
      plVar4 = plVar4 + 7;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  goto LAB_140f97d1c;
  while( true ) {
    plVar4 = plVar4 + 4;
    lVar3 = lVar3 + -0x20;
    if (lVar3 == 0) break;
LAB_140f97cf9:
    if (*(int *)(*plVar4 + 8) == *(int *)(*(longlong *)(local_b8 + 0x58) + 0xc)) {
      if ((plVar4 != (longlong *)0x0) && (plVar4[2] != 0)) {
        if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
          local_a8 = *(undefined8 *)(param_1 + 0x20);
        }
        else {
          local_a8 = 0;
        }
        uStack_90 = uStack_90 & 0xffffff00;
        uStack_8c = 0xffffffff;
        uStack_88 = 0;
        lStack_a0 = param_1;
        local_98 = plVar4;
        FUN_140f9814e(plVar4[2],&local_a8,&local_b8);
      }
      break;
    }
  }
LAB_140f97d0c:
  plVar4 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_140f97d1c:
  if ((local_28 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f97dc6 FUN_140f97dc6 body=776 status=ok
// SIG undefined FUN_140f97dc6(void)

void FUN_140f97dc6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_138 [40];
  char *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  (**(code **)(*param_1 + 0x40))();
  if (((((*(int *)((longlong)param_1 + 0x6c) != 0) &&
        (uVar2 = *(uint *)(param_1 + 0xd), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) &&
      ((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0 &&
       (*(int *)(lVar5 + 0x10) == *(int *)((longlong)param_1 + 0x6c))))) &&
     (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
      (lVar5 = FUN_14479d2ce(), *(char *)(lVar5 + 0x5c) == '\x03')))) {
    FUN_1457d6990(lVar5);
    *(undefined1 *)(lVar5 + 0x5c) = 0;
  }
  if ((*(byte *)(param_1 + 0x11) & 0x18) == 8) {
    local_88 = 0;
    local_80 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_7c = 0xffffffff00000080;
    local_74 = 0;
    local_68 = 0;
    local_60 = 0;
    FUN_1457d69f0(param_1,&local_a8);
    lVar5 = param_1[0xb];
    local_110 = DAT_14cb8ae00;
    local_108 = DAT_14cb8ae10;
    local_e0 = 0;
    local_d8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_d4 = 0xffffffff00000080;
    local_cc = 0;
    local_c0 = 0;
    local_b8 = 0;
    FUN_140725242(&local_100,&local_a8);
    local_b0 = 1;
    FUN_14109984c(lVar5,param_2,&local_110);
    local_b8 = 0;
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_100);
    local_60 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_a8);
  }
  lVar5 = *(longlong *)(param_2 + 0x10);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  plVar3 = *(longlong **)(lVar5 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(lVar5 + 0x30) = 0;
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_140f980d0(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x10));
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  lVar5 = param_1[0xb];
  FUN_141099676(param_1,param_2,lVar5 + 0x98,0);
  FUN_1410994b4(param_1,param_2,lVar5 + 0x80,0);
  (**(code **)(*param_1 + 0x58))(param_1,&local_110,param_2);
  if ((char)local_100 != '\x01') goto LAB_140f97f3b;
  if (local_110 != (char *)0x0) {
    if ((*(byte *)(param_1 + 0x11) & 0x40) == 0) {
      if (*local_110 != '\x01') goto LAB_140f97f3b;
    }
    else if (local_110[1] == '\0') goto LAB_140f97f3b;
  }
  lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 8) + 0x70);
  if (lVar5 != 0) {
    piVar4 = *(int **)(*(longlong *)(param_2 + 8) + 0x68);
    lVar5 = lVar5 << 5;
    do {
      if ((*piVar4 == (int)param_1[7]) && (*(longlong *)(piVar4 + 1) == local_108)) {
        if ((piVar4 != (int *)0x0) &&
           ((piVar4[6] != 0 && (*(longlong **)(piVar4 + 4) != (longlong *)0x0)))) {
          (**(code **)(**(longlong **)(piVar4 + 4) + 0x60))();
        }
        break;
      }
      piVar4 = piVar4 + 8;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
LAB_140f97f3b:
  if ((local_50 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f980d0 FUN_140f980d0 body=51 status=ok
// SIG undefined FUN_140f980d0(void)

void FUN_140f980d0(undefined8 *param_1)

{
  FUN_140f98103(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_1457d69c0(param_1);
  return;
}



// FUNCTION 140f98103 FUN_140f98103 body=75 status=ok
// SIG undefined FUN_140f98103(void)

void FUN_140f98103(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f9814e FUN_140f9814e body=116 status=ok
// SIG undefined FUN_140f9814e(void)

void FUN_140f9814e(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(**(longlong **)(param_2 + 0x10) + 0x30))) &&
     (lVar2 = (longlong)iVar1 * 0xa0 + *(longlong *)(**(longlong **)(param_2 + 0x10) + 0x28),
     lVar2 != 0)) {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_2 + 8) + 0x50);
    if (lVar4 != 0) {
      plVar3 = *(longlong **)(*(longlong *)(param_2 + 8) + 0x48);
      lVar4 = lVar4 * 0x38;
      do {
        if (*(int *)(*plVar3 + 8) == *(int *)(lVar2 + 8)) {
          if (plVar3 == (longlong *)0x0) {
            return;
          }
          if (*(int *)(lVar2 + 8) != *(int *)(*param_3 + 0x38)) {
            return;
          }
          FUN_143e2b6bc(param_1,lVar2 + 0xc,param_2);
          return;
        }
        plVar3 = plVar3 + 7;
        lVar4 = lVar4 + -0x38;
      } while (lVar4 != 0);
    }
  }
  return;
}



// FUNCTION 140f981c2 FUN_140f981c2 body=40 status=ok
// SIG undefined FUN_140f981c2(void)

undefined8 FUN_140f981c2(undefined8 param_1,int param_2)

{
  FUN_140f981ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f981ea FUN_140f981ea body=125 status=ok
// SIG undefined FUN_140f981ea(void)

void FUN_140f981ea(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a51ece0;
  param_1[5] = &PTR_FUN_14a51f000;
  plVar3 = (longlong *)param_1[0x31];
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
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_140cdcfea(param_1);
  return;
}



// FUNCTION 140f98276 FUN_140f98276 body=40 status=ok
// SIG undefined FUN_140f98276(void)

undefined8 FUN_140f98276(undefined8 param_1,int param_2)

{
  FUN_140f9829e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f9829e FUN_140f9829e body=163 status=ok
// SIG undefined FUN_140f9829e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f9829e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b1a65f0;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  FUN_140f98341(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140f98333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140f98341 FUN_140f98341 body=49 status=ok
// SIG undefined FUN_140f98341(void)

void FUN_140f98341(longlong param_1,int param_2)

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



// FUNCTION 140f98372 FUN_140f98372 body=71 status=ok
// SIG undefined FUN_140f98372(void)

void FUN_140f98372(longlong param_1)

{
  FUN_140f983ba();
  *(undefined4 *)(param_1 + 0xf0) = 0;
  if (*(int *)(param_1 + 0xf4) != 0) {
    FUN_140f73ca6(param_1 + 0xe8,0);
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  return;
}



// FUNCTION 140f983ba FUN_140f983ba body=455 status=ok
// SIG undefined FUN_140f983ba(void)

void FUN_140f983ba(longlong *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  local_40 = (int)param_1[4];
  lVar8 = (longlong)local_40;
  pvVar1 = (void *)param_1[3];
  if (lVar8 == 0) {
    local_3c = 0;
  }
  else {
    FUN_140306928(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar8 << 3);
  }
  (**(code **)(*param_1 + 0xf8))(param_1,2);
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_140f73ca6(param_1 + 3,0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  uVar4 = DAT_14c8462c8._4_4_;
  uVar3 = (undefined4)DAT_14c8462c8;
  uVar2 = DAT_14c8462c0._4_4_;
  *(undefined4 *)(param_1 + 0xc) = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0xd) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar4;
  param_1[0xe] = DAT_14c8462d0;
  if (param_1 + 8 != &DAT_14c8464e0) {
    param_1[10] = DAT_14c8464f0;
    uVar4 = DAT_14c8464e8._4_4_;
    uVar3 = (undefined4)DAT_14c8464e8;
    uVar2 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 8) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
    *(undefined4 *)(param_1 + 9) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  (**(code **)(*param_1 + 0x60))(param_1,0);
  pvVar1 = local_48;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb5) = 0;
  lVar8 = *(longlong *)(param_1[0x1c] + 0xa8);
  if ((lVar8 != 0) && (lVar10 = (longlong)local_40, lVar10 != 0)) {
    lVar9 = 0;
    do {
      local_50 = *(undefined8 *)((longlong)pvVar1 + lVar9);
      cVar5 = FUN_144729dda(&local_50);
      if (((cVar5 != '\0') && (lVar6 = FUN_14479d2ce(&local_50), *(longlong *)(lVar6 + 0xa8) != 0))
         && (cVar5 = FUN_14064aef8(lVar8), cVar5 != '\0')) {
        uVar7 = FUN_14479d2ce(&local_50);
        FUN_140f98582(param_1,uVar7);
      }
      lVar9 = lVar9 + 8;
    } while (lVar10 * 8 != lVar9);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f98582 FUN_140f98582 body=650 status=ok
// SIG undefined FUN_140f98582(void)

void FUN_140f98582(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  uint local_58;
  int local_54;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_1[4] == 0) {
    bVar1 = *(double *)(param_1[0x1c] + 0x138) <= 0.0;
  }
  else {
    lVar9 = param_1[3];
    lVar10 = (longlong)(int)param_1[4] << 3;
    bVar1 = false;
    do {
      cVar2 = FUN_140f9880e(lVar9,param_2);
      if (cVar2 != '\0') {
        bVar1 = false;
        goto LAB_140f98657;
      }
      lVar9 = lVar9 + 8;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  if (param_2 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar4 = *(uint *)(lVar9 + 0x10);
      bVar11 = uVar4 == 0;
      if (bVar11) {
        *(uint *)(lVar9 + 0x10) = uVar5;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar4 = uVar5;
      }
      uVar8 = (ulonglong)uVar4;
    }
  }
  iVar3 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar3 + 1U) {
    FUN_1410872ba(param_1 + 3,iVar3);
  }
  *(ulonglong *)(param_1[3] + (longlong)iVar3 * 8) = (ulonglong)uVar7 | uVar8 << 0x20;
  (**(code **)(*param_1 + 0x60))(param_1,0);
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
LAB_140f98657:
  if ((longlong)(int)param_1[6] != 0) {
    lVar9 = param_1[5];
    lVar10 = (longlong)(int)param_1[6] << 3;
    do {
      cVar2 = FUN_140f9880e(lVar9,param_2);
      if (cVar2 != '\0') {
        local_54 = 0;
        if (param_2 == 0) {
          local_58 = 0;
          iVar3 = 0;
        }
        else {
          local_58 = *(uint *)(param_2 + 0xc);
          if ((int)local_58 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((local_58 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar3 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar11 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar11) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar3 = *(int *)(lVar9 + 0x10);
            bVar11 = iVar3 == 0;
            if (bVar11) {
              *(int *)(lVar9 + 0x10) = iVar6;
              iVar3 = 0;
            }
            UNLOCK();
            if (bVar11) {
              iVar3 = iVar6;
            }
          }
        }
        local_50 = &local_58;
        local_54 = iVar3;
        FUN_141086cf2(param_1 + 5);
        break;
      }
      lVar9 = lVar9 + 8;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  if (bVar1) {
    FUN_140f9894a(param_1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f9880e FUN_140f9880e body=315 status=ok
// SIG undefined FUN_140f9880e(void)

ulonglong FUN_140f9880e(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140f9894a FUN_140f9894a body=1521 status=ok
// SIG undefined FUN_140f9894a(void)

void FUN_140f9894a(longlong param_1,char param_2)

{
  int *piVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8;
  longlong *local_2c0;
  undefined4 local_2b8;
  longlong local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  undefined1 local_288 [4];
  undefined4 local_284;
  double local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined4 local_1e4;
  undefined4 local_1b8;
  longlong local_188;
  longlong *plStack_180;
  longlong local_178;
  undefined8 uStack_170;
  longlong local_168;
  undefined8 uStack_160;
  longlong local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  lVar3 = (*(longlong **)(param_1 + 0xe0))[0x15];
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x178) != '\x03')) goto LAB_140f989a7;
  lVar9 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
  lVar3 = *(longlong *)(&DAT_00001ce8 + *(longlong *)(param_1 + 0xe0));
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 0xb0);
  if (lVar10 == 0) {
    lVar10 = FUN_1448abda6();
  }
  if (((lVar3 == 0) || (lVar9 == 0)) || (lVar10 == 0)) goto LAB_140f989a7;
  lVar10 = (*(longlong **)(param_1 + 0xe0))[0x22];
  if (lVar10 == 0) {
    uVar20 = 0xe0000000;
    uVar21 = 0x47efffff;
    uVar22 = 0xe0000000;
    uVar23 = 0x47efffff;
  }
  else {
    uVar20 = *(undefined4 *)(lVar10 + 0x260);
    uVar21 = *(undefined4 *)(lVar10 + 0x264);
    uVar22 = *(undefined4 *)(lVar10 + 0x268);
    uVar23 = *(undefined4 *)(lVar10 + 0x26c);
  }
  lVar10 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0xdc0))();
  uVar16 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  if (lVar10 == 0) {
    uVar18 = (undefined4)DAT_14c8464e0;
    uVar19 = (undefined4)((ulonglong)DAT_14c8464e0 >> 0x20);
    uVar16 = (undefined4)DAT_14c8464e8;
    uVar17 = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
  }
  dVar5 = (double)CONCAT44(uVar23,uVar22) + (double)CONCAT44(uVar17,uVar16);
  dVar4 = (double)CONCAT44(uVar19,uVar18) + (double)CONCAT44(uVar21,uVar20);
  fVar2 = *(float *)(param_1 + 0x38);
  memset(local_288,0,0x100);
  local_1b8 = 0xffffffff;
  local_1e4 = 0xffffffff;
  local_284 = 0x3f800000;
  local_230 = *(undefined8 *)(param_1 + 0x60);
  uStack_228 = *(undefined8 *)(param_1 + 0x68);
  local_220 = *(undefined8 *)(param_1 + 0x70);
  local_248 = *(undefined4 *)(param_1 + 0x60);
  uStack_244 = *(undefined4 *)(param_1 + 100);
  uStack_240 = *(undefined4 *)(param_1 + 0x68);
  uStack_23c = *(undefined4 *)(param_1 + 0x6c);
  local_238 = *(undefined8 *)(param_1 + 0x70);
  if (param_2 == '\0') {
    local_2a8 = *(longlong *)(lVar9 + 0x350);
    lVar14 = 0x360;
    lVar10 = 0x358;
  }
  else {
    lStack_2a0 = 0;
    local_298 = 0;
    if (((*(char *)(param_1 + 0xb2) == '\0') &&
        ((&DAT_00001100)[*(longlong *)(param_1 + 0xe0)] != '\x03')) &&
       ((&DAT_00001100)[*(longlong *)(param_1 + 0xe0)] != '\f')) {
      local_2a8 = *(longlong *)(lVar9 + 0x368);
      lVar14 = 0x378;
      lVar10 = 0x370;
    }
    else {
      local_2a8 = *(longlong *)(lVar9 + 0x380);
      lVar14 = 0x390;
      lVar10 = 0x388;
    }
  }
  local_278 = dVar4;
  local_270 = dVar5;
  local_268 = (double)fVar2;
  local_260 = dVar4;
  local_258 = dVar5;
  local_250 = (double)fVar2;
  uVar11 = FUN_14477b664(*(undefined8 *)(lVar9 + lVar10));
  lStack_2a0 = FUN_14477b664(uVar11);
  local_298 = *(longlong *)(lVar9 + lVar14);
  FUN_1407f7f84(&local_188);
  if (plStack_180 == (longlong *)0x0) goto LAB_140f989a7;
  iVar8 = (int)plStack_180[1];
  do {
    if (iVar8 == 0) {
      plVar13 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar6 = (int)plStack_180[1];
    bVar15 = iVar8 == iVar6;
    if (bVar15) {
      *(int *)(plStack_180 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
    plVar13 = plStack_180;
  } while (!bVar15);
  LOCK();
  piVar1 = (int *)((longlong)plStack_180 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plStack_180 + 0x10))();
  }
  lVar10 = local_188;
  if (plVar13 == (longlong *)0x0) goto LAB_140f989a7;
  if (local_188 != 0) {
    if (lStack_2a0 == 0) {
      uVar11 = FUN_1405bb4b8();
      lStack_2a0 = FUN_14477b664(uVar11);
    }
    if (local_298 == 0) {
      if ((lStack_2a0 != 0) && (local_2a8 != 0)) {
        plVar12 = *(longlong **)(lStack_2a0 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar7 == '\0')) {
          local_298 = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar12 + 0x110))(plVar12);
          local_298 = FUN_144aff482(uVar11);
          if (local_298 != 0) goto LAB_140f98c57;
        }
      }
    }
    else {
LAB_140f98c57:
      local_158 = 0;
      uStack_150 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      plStack_180 = (longlong *)0x0;
      local_148 = 0xc0;
      local_138 = 0;
      local_128 = (longlong *)0x0;
      local_f8 = 0;
      local_e8 = (longlong *)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0x3ff0000000000000;
      local_98 = 0x3ff0000000000000;
      local_90 = 0x3ff0000000000000;
      local_88 = 0x3f80000000000000;
      local_80 = ABS((float)*(double *)(*(longlong *)(param_1 + 0xe0) + 0x138));
      if (lStack_2a0 == 0) {
        uVar11 = FUN_1405bb4b8();
        lStack_2a0 = FUN_14477b664(uVar11);
        if (local_298 != 0) goto LAB_140f98d16;
        if ((lStack_2a0 != 0) && (local_2a8 != 0)) {
          plVar12 = *(longlong **)(lStack_2a0 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar7 == '\0')) {
            local_298 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar12 + 0x110))(plVar12);
            local_298 = FUN_144aff482(uVar11,&local_2a8);
            if (local_298 != 0) goto LAB_140f98d16;
          }
        }
      }
      else {
LAB_140f98d16:
        local_2b8 = 0;
        local_2c8 = 1;
        local_2c0 = &local_188;
        FUN_1408f2522(lVar10,local_298,lVar3,local_288);
      }
      if (local_f8 != 0) {
        plVar12 = local_e8;
        if (local_e8 == (longlong *)0x0) {
          plVar12 = local_d8;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_138 != 0) {
        plVar12 = local_128;
        if (local_128 == (longlong *)0x0) {
          plVar12 = local_118;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      if (local_168 != 0) {
        FUN_1400020a8();
      }
      if (local_178 != 0) {
        FUN_1400020a8();
      }
      if (local_188 != 0) {
        FUN_1400020a8();
      }
    }
  }
  LOCK();
  plVar12 = plVar13 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_140f989a7:
  if ((local_70 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f98f3c FUN_140f98f3c body=259 status=ok
// SIG undefined FUN_140f98f3c(void)

longlong FUN_140f98f3c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(char *)(param_1 + 0x178) == '\x03') && (*(longlong *)(param_1 + 0x2578) == 0)) &&
     (*(longlong **)(param_1 + 0x608) != (longlong *)0x0)) {
    plVar3 = (longlong *)(param_1 + 0x608);
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x608) + 0x2b8))();
    if (lVar1 != 0) {
      lVar1 = (**(code **)(*(longlong *)*plVar3 + 0x2b8))();
      plVar3 = (longlong *)(lVar1 + 0x1de8);
    }
    if (*plVar3 != 0) {
      lVar1 = FUN_141364a4a(*plVar3,&DAT_14cbccb60,2,0xffffffff);
      if (lVar1 != 0) {
        lVar2 = FUN_1459ba1e2();
        if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
          }
          *(longlong *)(param_1 + 0x2578) = lVar1;
          FUN_1457d6ad6(lVar1,param_1);
          goto LAB_140f98f58;
        }
      }
      *(undefined8 *)(param_1 + 0x2578) = 0;
    }
  }
LAB_140f98f58:
  lVar1 = *(longlong *)(param_1 + 0x2578);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else if (*(longlong *)(lVar1 + 0x28) == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140f9916c FUN_140f9916c body=124 status=ok
// SIG undefined FUN_140f9916c(void)

longlong * FUN_140f9916c(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  ulonglong *puVar1;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = param_3;
  FUN_1449daf8c(param_2,param_1,0);
  *(byte *)((longlong)param_2 + 0xf4) = *(byte *)((longlong)param_2 + 0xf4) | 0x10;
  puVar1 = (ulonglong *)param_2[1];
  if (puVar1[1] < *puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_11,1);
  }
  else {
    *puVar1 = *puVar1 + 1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f991ea FUN_140f991ea body=276 status=ok
// SIG undefined FUN_140f991ea(void)

longlong FUN_140f991ea(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  FUN_140055966();
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  uVar1 = *(undefined4 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  uVar5 = *(undefined4 *)(param_2 + 0xd8);
  uVar6 = *(undefined4 *)(param_2 + 0xdc);
  uVar7 = *(undefined4 *)(param_2 + 0xe0);
  uVar8 = *(undefined4 *)(param_2 + 0xe4);
  uVar9 = *(undefined4 *)(param_2 + 0xeb);
  uVar10 = *(undefined4 *)(param_2 + 0xef);
  uVar11 = *(undefined4 *)(param_2 + 0xf3);
  *(undefined4 *)(param_1 + 0xe7) = *(undefined4 *)(param_2 + 0xe7);
  *(undefined4 *)(param_1 + 0xeb) = uVar9;
  *(undefined4 *)(param_1 + 0xef) = uVar10;
  *(undefined4 *)(param_1 + 0xf3) = uVar11;
  *(undefined4 *)(param_1 + 0xd8) = uVar5;
  *(undefined4 *)(param_1 + 0xdc) = uVar6;
  *(undefined4 *)(param_1 + 0xe0) = uVar7;
  *(undefined4 *)(param_1 + 0xe4) = uVar8;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
    *(undefined8 *)(param_2 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x104);
    *(undefined8 *)(param_2 + 0x100) = 0;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_2 + 0x110);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x114);
    *(undefined8 *)(param_2 + 0x110) = 0;
  }
  FUN_140f992fe(param_1 + 0x118,param_2 + 0x118);
  return param_1;
}



// FUNCTION 140f992fe FUN_140f992fe body=98 status=ok
// SIG undefined FUN_140f992fe(void)

undefined4 * FUN_140f992fe(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_2 + 4) == 0) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0x400000000;
  }
  return param_1;
}



// FUNCTION 140f99360 thunk_FUN_14006e79a body=5 status=ok
// SIG undefined thunk_FUN_14006e79a(void)

void thunk_FUN_14006e79a(void)

{
  FUN_14006e79a();
  return;
}



// FUNCTION 140f99366 FUN_140f99366 body=35 status=ok
// SIG undefined FUN_140f99366(void)

void FUN_140f99366(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140ea9606(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f9937b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_140f9938a();
  return;
}



// FUNCTION 140f9938a FUN_140f9938a body=121 status=ok
// SIG undefined FUN_140f9938a(void)

undefined8 * FUN_140f9938a(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140f99404(&DAT_14cb70530);
  memset(puVar1 + 2,0,0xa8);
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b075620;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0xffffffff00000080;
  puVar1[0xb] = 0;
  puVar1[0x11] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0xffffffff00000080;
  puVar1[0x15] = 0;
  return puVar1;
}



// FUNCTION 140f99404 FUN_140f99404 body=96 status=ok
// SIG undefined FUN_140f99404(void)

void FUN_140f99404(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1700,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x17;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140f99464 FUN_140f99464 body=19 status=ok
// SIG undefined FUN_140f99464(void)

longlong FUN_140f99464(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_2 < 0x32) {
    lVar1 = (ulonglong)param_2 * 0x68 + param_1;
  }
  return lVar1;
}



// FUNCTION 140f99478 FUN_140f99478 body=3606 status=ok
// SIG undefined FUN_140f99478(void)

void FUN_140f99478(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  void *pvVar5;
  longlong *plVar6;
  ushort *puVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  longlong *plVar11;
  int *piVar12;
  longlong lVar13;
  undefined8 uVar14;
  longlong lVar15;
  int *piVar16;
  longlong lVar17;
  undefined *puVar18;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  longlong lVar22;
  int *piVar23;
  int *piVar24;
  int iVar25;
  longlong lVar26;
  PSRWLOCK pRVar27;
  int *piVar28;
  bool bVar29;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int *local_a0;
  longlong *local_98;
  PSRWLOCK local_90;
  int *local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) == 0) goto LAB_140f994a6;
  lVar13 = *(longlong *)(param_1 + 0x288);
  if (lVar13 != 0) {
    FUN_1448d5e3c(&local_68,param_1 + 0x208);
    lVar20 = local_68[0x58];
    pRVar27 = (PSRWLOCK)(lVar20 + 0x168);
    AcquireSRWLockShared(pRVar27);
    plVar11 = uStack_60;
    if (uStack_60 != (longlong *)0x0) {
      LOCK();
      plVar6 = uStack_60 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*uStack_60)(uStack_60);
        LOCK();
        piVar28 = (int *)((longlong)plVar11 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (*(int *)(lVar13 + 0xac) == *(int *)(lVar20 + 0x160)) {
      ReleaseSRWLockShared(pRVar27);
      FUN_1448d5e3c(&local_68,param_1 + 0x208);
      plVar11 = (longlong *)local_68[8];
      pRVar27 = (PSRWLOCK)(plVar11 + 5);
      AcquireSRWLockShared(pRVar27);
      plVar6 = uStack_60;
      if (uStack_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = uStack_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*uStack_60)(uStack_60);
          LOCK();
          piVar28 = (int *)((longlong)plVar6 + 0xc);
          *piVar28 = *piVar28 + -1;
          UNLOCK();
          if (*piVar28 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (*(int *)(lVar13 + 0x330) != (int)plVar11[4]) {
        *(int *)(lVar13 + 0x330) = (int)plVar11[4];
        if ((longlong)(int)plVar11[1] != 0) {
          lVar20 = *plVar11;
          lVar15 = 0;
          do {
            if (*(int *)(lVar20 + lVar15) == DAT_14cb790d0) {
              if (*(int *)(lVar13 + 0x2d4) != *(int *)(lVar20 + 0x9c + lVar15)) {
                *(undefined4 *)(lVar13 + 0x2d0) = *(undefined4 *)(lVar20 + 0x98 + lVar15);
                *(undefined4 *)(lVar13 + 0x2d4) = *(undefined4 *)(lVar20 + 0x9c + lVar15);
                goto LAB_140f99f3c;
              }
              break;
            }
            lVar15 = lVar15 + 0xf8;
          } while ((longlong)(int)plVar11[1] * 0xf8 - lVar15 != 0);
        }
      }
      ReleaseSRWLockShared(pRVar27);
      cVar8 = FUN_140f9a344(param_1,lVar13);
      if (cVar8 == '\0') goto LAB_140f995a8;
    }
    else {
      *(int *)(lVar13 + 0xac) = *(int *)(lVar20 + 0x160);
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_140f9a162:
        lVar15 = 0;
      }
      else {
        uVar4 = *(uint *)(param_1 + 0x30);
        lVar15 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((plVar11 == (longlong *)0x0) ||
             (((int)plVar11[2] != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140f9a162;
          lVar15 = *plVar11;
        }
      }
      cVar8 = FUN_140426394(lVar15 + 0x3c0,&DAT_14cbd9378);
      if (cVar8 == '\0') {
        uVar9 = *(undefined1 *)(lVar20 + 0x159);
      }
      else {
        uVar9 = 1;
      }
      *(undefined1 *)(lVar13 + 0x2f1) = uVar9;
      iVar25 = *(int *)(lVar13 + 0x2b8);
      local_90 = pRVar27;
      local_80 = lVar20;
      if ((-1 < (longlong)iVar25) && (iVar25 < *(int *)(lVar13 + 0x1c0))) {
        *(int *)(lVar13 + 0x1c8) = *(int *)(lVar13 + 0x1c8) + 1;
        lVar15 = (longlong)iVar25 * 0x1e8;
        lVar17 = (longlong)*(int *)(*(longlong *)(lVar13 + 0x1b8) + 0xf8 + lVar15);
        if (lVar17 != 0) {
          plVar11 = *(longlong **)(*(longlong *)(lVar13 + 0x1b8) + 0xf0 + lVar15);
          local_98 = plVar11 + lVar17 * 5;
LAB_140f99760:
          if ((longlong)*(int *)(lVar20 + 0x58) != 0) {
            lVar15 = *(longlong *)(lVar20 + 0x50);
            lVar17 = (longlong)*(int *)(lVar20 + 0x58) * 0x1e8 + lVar15;
            do {
              if ((longlong)*(int *)(lVar15 + 0xf8) != 0) {
                piVar28 = *(int **)(lVar15 + 0xf0);
                lVar22 = (longlong)*(int *)(lVar15 + 0xf8) * 0x28;
                do {
                  if ((*piVar28 == (int)*plVar11) && (piVar28[1] == *(int *)((longlong)plVar11 + 4))
                     ) {
                    if (piVar28 == (int *)0x0) goto LAB_140f9990f;
                    if (*(int *)((longlong)plVar11 + 0x24) != piVar28[9]) {
                      iVar25 = piVar28[8];
                      *(char *)(plVar11 + 4) = (char)iVar25;
                      *(int *)((longlong)plVar11 + 0x24) = piVar28[9];
                      if ((char)iVar25 == '\x01') {
                        FUN_140de1078(param_1,&DAT_14cbe2090,0,0);
                      }
                    }
                    if ((longlong)(int)plVar11[2] == 0) goto LAB_140f9990f;
                    piVar23 = (int *)plVar11[1];
                    local_88 = piVar23 + (longlong)(int)plVar11[2] * 10;
                    goto LAB_140f99800;
                  }
                  piVar28 = piVar28 + 10;
                  lVar22 = lVar22 + -0x28;
                } while (lVar22 != 0);
              }
              lVar15 = lVar15 + 0x1e8;
            } while (lVar15 != lVar17);
          }
          goto LAB_140f9990f;
        }
      }
LAB_140f9991e:
      iVar25 = *(int *)(lVar20 + 0x38) + -1;
      if (*(int *)(lVar20 + 0x38) == 0) {
        iVar25 = 0;
      }
      FUN_1446f82e2(&local_68,iVar25,*(undefined8 *)(lVar20 + 0x30),1);
      *(longlong **)(lVar13 + 0xd0) = local_68;
      puVar2 = (undefined8 *)(lVar13 + 0x1a0);
      if (puVar2 != (undefined8 *)(lVar20 + 0x40)) {
        iVar25 = *(int *)(lVar20 + 0x48);
        pvVar5 = *(void **)(lVar20 + 0x40);
        *(int *)(lVar13 + 0x1a8) = iVar25;
        if (iVar25 == 0 && *(int *)(lVar13 + 0x1ac) == 0) {
          *(undefined4 *)(lVar13 + 0x1ac) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar25);
          if (iVar25 != 0) {
            memcpy((void *)*puVar2,pvVar5,(longlong)iVar25 * 2);
          }
        }
      }
      puVar2 = (undefined8 *)(lVar13 + 0x120);
      if (puVar2 != (undefined8 *)(lVar20 + 0xb0)) {
        iVar25 = *(int *)(lVar20 + 0xb8);
        pvVar5 = *(void **)(lVar20 + 0xb0);
        *(int *)(lVar13 + 0x128) = iVar25;
        if (iVar25 == 0 && *(int *)(lVar13 + 300) == 0) {
          *(undefined4 *)(lVar13 + 300) = 0;
        }
        else {
          FUN_1446dd670(puVar2,iVar25);
          if (iVar25 != 0) {
            memcpy((void *)*puVar2,pvVar5,(longlong)iVar25 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar13 + 0x130);
      local_70 = puVar2;
      if (puVar3 != (undefined8 *)(lVar20 + 0xc0)) {
        iVar25 = *(int *)(lVar20 + 200);
        pvVar5 = *(void **)(lVar20 + 0xc0);
        *(int *)(lVar13 + 0x138) = iVar25;
        if (iVar25 == 0 && *(int *)(lVar13 + 0x13c) == 0) {
          *(undefined4 *)(lVar13 + 0x13c) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar25);
          if (iVar25 != 0) {
            memcpy((void *)*puVar3,pvVar5,(longlong)iVar25 * 2);
          }
        }
      }
      *(undefined4 *)(lVar13 + 0x2d8) = *(undefined4 *)(lVar20 + 0x13c);
      plVar11 = *(longlong **)(lVar20 + 0x148);
      plVar6 = *(longlong **)(lVar13 + 0x2e0);
      if (plVar6 != plVar11) {
        *(longlong **)(lVar13 + 0x2e0) = plVar11;
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 8))();
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      *(undefined4 *)(lVar13 + 0x2e8) = *(undefined4 *)(lVar20 + 0x150);
      iVar25 = *(int *)(lVar20 + 0x58);
      local_78 = puVar3;
      if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar25);
      }
      FUN_140f9a609(*(undefined8 *)(lVar13 + 0x1b8),*(undefined4 *)(lVar13 + 0x1c0));
      *(undefined4 *)(lVar13 + 0x1c0) = 0;
      if (*(int *)(lVar13 + 0x1c4) != iVar25) {
        FUN_1457d8442(lVar13 + 0x1b8,iVar25);
      }
      *(int *)(lVar13 + 0x1c8) = *(int *)(lVar13 + 0x1c8) + 1;
      FUN_140f9a5ac(lVar13 + 0x1b8,lVar20 + 0x50);
      *(int *)(lVar13 + 0x1c8) = *(int *)(lVar13 + 0x1c8) + 1;
      *(undefined4 *)(lVar13 + 700) = *(undefined4 *)(lVar20 + 0x140);
      *(undefined2 *)(lVar13 + 0x2f3) = 0;
      *(undefined1 *)(lVar13 + 0x2f5) = 0;
      *(undefined4 *)(lVar13 + 0x2b8) = *(undefined4 *)(param_1 + 0x2cc);
      FUN_140f9b5a6(param_1,&local_68);
      pRVar27 = local_90;
      if ((longlong **)(lVar13 + 0x2c0) == &local_68) {
        if (local_68 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(lVar13 + 0x2c0) != 0) {
          FUN_1400020a8();
        }
        *(longlong **)(lVar13 + 0x2c0) = local_68;
        *(int *)(lVar13 + 0x2c8) = (int)uStack_60;
        *(undefined4 *)(lVar13 + 0x2cc) = uStack_60._4_4_;
      }
      local_58 = 0;
      uStack_50 = 0;
      local_68 = (longlong *)0x0;
      uStack_60 = (longlong *)0x0;
      piVar28 = *(int **)(lVar13 + 0x1b8);
      *(int *)(lVar13 + 0x1c8) = *(int *)(lVar13 + 0x1c8) + 2;
      if ((longlong)*(int *)(lVar13 + 0x1c0) == 0) {
LAB_140f9a1a2:
        FUN_14025a15c(param_1 + 0x378,0);
      }
      else {
        local_88 = piVar28 + (longlong)*(int *)(lVar13 + 0x1c0) * 0x7a;
        do {
          if ((char)piVar28[0x2e] == '\x01') {
            FUN_140608954(&local_68,piVar28 + 0x35);
            if (1 < piVar28[0x26]) {
              FUN_1402980a2(local_70,*(undefined8 *)(piVar28 + 0x24),piVar28[0x26] + -1);
            }
            if (1 < piVar28[0x2a]) {
              FUN_1402980a2(local_78,*(undefined8 *)(piVar28 + 0x28),piVar28[0x2a] + -1);
            }
          }
          plVar11 = (longlong *)(piVar28 + 0x42);
          FUN_140f9a994(*(undefined8 *)(piVar28 + 0x42),piVar28[0x44]);
          piVar28[0x44] = 0;
          iVar10 = 0;
          iVar25 = 0;
          if (piVar28[0x45] != 0) {
            FUN_148ed87ca(plVar11);
            iVar25 = piVar28[0x44];
            iVar10 = piVar28[0x45];
          }
          uVar4 = *(uint *)(lVar20 + 0x140);
          piVar28[0x44] = uVar4 + iVar25;
          if ((uint)(iVar10 - iVar25) < uVar4) {
            FUN_140f9b42c(plVar11,iVar25);
          }
          FUN_140f9a66e((longlong)iVar25 * 200 + *(longlong *)(piVar28 + 0x42),uVar4);
          *(undefined2 *)(piVar28 + 0x6a) = 0;
          iVar25 = piVar28[0x69];
          if (((char)piVar28[0x68] != '\0') || (bVar29 = iVar25 == 0, iVar25 = 0, bVar29)) {
            *(undefined1 *)(piVar28 + 0x68) = 0;
            piVar28[0x69] = iVar25 + 1;
          }
          local_98 = plVar11;
          if ((longlong)piVar28[0x3e] != 0) {
            piVar23 = piVar28 + 0x46;
            lVar15 = *(longlong *)(piVar28 + 0x3c);
            lVar20 = lVar15 + (longlong)piVar28[0x3e] * 0x28;
            do {
              if ((longlong)*(int *)(lVar15 + 0x10) != 0) {
                lVar17 = *(longlong *)(lVar15 + 8);
                lVar22 = (longlong)*(int *)(lVar15 + 0x10) * 0x28 + lVar17;
                do {
                  if ((longlong)*(int *)(lVar17 + 0x10) != 0) {
                    lVar26 = *(longlong *)(lVar17 + 8) + 0x68;
                    lVar19 = (longlong)*(int *)(lVar17 + 0x10) * 200;
                    do {
                      *(byte *)(lVar13 + 0x2f5) =
                           *(byte *)(lVar13 + 0x2f5) | *(byte *)(piVar28 + 0x2c);
                      if ((((char)piVar28[0x2e] == '\x01') && (*(char *)(lVar26 + 0x20) == '\x01'))
                         && ((*(byte *)(lVar26 + -0x48) & 0xfe) == 2)) {
                        if (*(byte *)(lVar26 + -0x48) == 2) {
                          *(undefined1 *)(piVar28 + 0x78) = 0;
                        }
                        else {
                          *(undefined1 *)((longlong)piVar28 + 0x1e1) = 0;
                        }
                        if (*(char *)(lVar26 + -0x48) == '\x02') {
                          *(undefined1 *)(lVar13 + 0x2f3) = 1;
                        }
                        else {
                          *(undefined1 *)(lVar13 + 0x2f4) = 1;
                        }
                        if (*(char *)(lVar26 + 0x28) == '\x01') {
                          local_a8 = lVar20;
                          local_a0 = piVar23;
                          FUN_140608954(&local_68,lVar26 + 0x44);
                          piVar23 = local_a0;
                          lVar20 = local_a8;
                        }
                      }
                      if (*(char *)(lVar26 + 0x29) == '\x01') {
                        if (*(char *)(lVar26 + -0x48) == '\x03') {
                          local_a8 = lVar20;
                          local_a0 = piVar23;
                          FUN_1457d76be(piVar23);
                          piVar23 = local_a0;
                          lVar20 = local_a8;
                          if ((char)piVar28[0x2e] == '\x01') {
                            if (1 < *(int *)(lVar26 + 8)) {
                              FUN_144a787a6(local_70,lVar26);
                            }
                            piVar23 = local_a0;
                            lVar20 = local_a8;
                            if (1 < *(int *)(lVar26 + 0x18)) {
                              FUN_144a787a6(local_78,lVar26 + 0x10);
                              piVar23 = local_a0;
                              lVar20 = local_a8;
                            }
                          }
                        }
                        else if (*(char *)(lVar26 + -0x48) == '\x02') {
                          iVar25 = *(int *)(lVar26 + 0x2c);
                          if ((-1 < (longlong)iVar25) && (iVar25 < piVar28[0x44])) {
                            local_a8 = lVar20;
                            local_a0 = piVar23;
                            FUN_1457d76be((longlong)iVar25 * 200 + *local_98);
                            piVar23 = local_a0;
                            lVar20 = local_a8;
                          }
                        }
                      }
                      lVar26 = lVar26 + 200;
                      lVar19 = lVar19 + -200;
                    } while (lVar19 != 0);
                  }
                  lVar17 = lVar17 + 0x28;
                } while (lVar17 != lVar22);
              }
              lVar15 = lVar15 + 0x28;
            } while (lVar15 != lVar20);
          }
          pRVar27 = local_90;
          piVar28 = piVar28 + 0x7a;
          lVar20 = local_80;
        } while (piVar28 != local_88);
        if ((longlong)(int)uStack_60 == 0) goto LAB_140f9a1a2;
        iVar25 = *(int *)(param_1 + 0x380);
        if ((longlong)iVar25 == 0) {
LAB_140f9a24b:
          uVar14 = FUN_1457d768a(&local_68);
          FUN_1457d84b6(param_1,uVar14);
        }
        else {
          plVar11 = local_68;
          do {
            lVar20 = 0;
            while (*(longlong *)(*(longlong *)(param_1 + 0x378) + lVar20) != *plVar11) {
              lVar20 = lVar20 + 8;
              if ((longlong)iVar25 * 8 - lVar20 == 0) goto LAB_140f9a24b;
            }
            plVar11 = plVar11 + 1;
          } while (plVar11 != local_68 + (int)uStack_60);
          if ((int)uStack_60 < iVar25) goto LAB_140f9a24b;
        }
        FUN_1403de7ba(param_1 + 0x378,&local_68);
      }
      FUN_140f9c09a(param_1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
LAB_140f99f3c:
      ReleaseSRWLockShared(pRVar27);
    }
    FUN_140f9b7a8(param_1,*(undefined4 *)(param_1 + 0x2cc));
    uVar9 = FUN_140f9a51a(param_1);
    *(undefined1 *)(lVar13 + 0x2f2) = uVar9;
    puVar7 = *(ushort **)(lVar13 + 0x80);
    if (puVar7 != (ushort *)0x0) {
      *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar13 + 0x78) & 0x3f));
    }
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_140f9a0b0:
      lVar13 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x30);
      lVar13 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_140f9a0b0;
        lVar13 = *plVar11;
      }
    }
    cVar8 = FUN_140426394(lVar13 + 0x3c0,&DAT_14cbd9378);
    if ((cVar8 == '\0') && (lVar13 = *(longlong *)(param_1 + 0x288), lVar13 != 0)) {
      if (*(char *)(lVar13 + 0x2f3) == '\x01') {
        FUN_140afad18(param_1,&DAT_14cbe2330);
      }
      if (*(char *)(lVar13 + 0x2f4) == '\x01') {
        FUN_140afad18(param_1,&DAT_14cbe2340);
      }
    }
  }
LAB_140f995a8:
  if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
    plVar11 = (longlong *)FUN_140f9a2c8(param_1);
    lVar13 = *plVar11;
    AcquireSRWLockShared((PSRWLOCK)(lVar13 + 0xa0));
    if (*(int *)(param_1 + 0x324) == *(int *)(lVar13 + 0xc)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
    }
    *(undefined1 *)(param_1 + 800) = *(undefined1 *)(lVar13 + 8);
    *(undefined4 *)(param_1 + 0x324) = *(undefined4 *)(lVar13 + 0xc);
    ReleaseSRWLockShared((PSRWLOCK)(lVar13 + 0xa0));
    if (*(char *)(param_1 + 800) == '\x01') {
      lVar13 = FUN_14479d2ce(param_1 + 0x30);
      cVar8 = FUN_140426394(lVar13 + 0x3c0,&DAT_14cbd9378);
      if (cVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
      }
    }
  }
LAB_140f994a6:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_140f99800:
  do {
    if ((longlong)piVar28[4] != 0) {
      piVar21 = *(int **)(piVar28 + 2);
      lVar20 = (longlong)piVar28[4] * 0x28;
LAB_140f9981c:
      if ((*piVar21 != *piVar23) || (piVar21[1] != piVar23[1])) goto LAB_140f9982a;
      if (piVar21 != (int *)0x0) {
        if ((longlong)piVar23[4] != 0) {
          piVar12 = *(int **)(piVar23 + 2);
          piVar16 = piVar12 + (longlong)piVar23[4] * 0x32;
          do {
            if (((*(byte *)(piVar12 + 8) & 0xfe) == 2) && ((longlong)piVar28[4] != 0)) {
              lVar15 = *(longlong *)(piVar28 + 2);
              lVar20 = lVar15 + (longlong)piVar28[4] * 0x28;
              do {
                if ((longlong)*(int *)(lVar15 + 0x10) != 0) {
                  piVar24 = *(int **)(lVar15 + 8);
                  lVar17 = (longlong)*(int *)(lVar15 + 0x10) * 200;
                  do {
                    if ((*piVar24 == *piVar12) && (piVar24[1] == piVar12[1])) {
                      if ((piVar24 == (int *)0x0) || (piVar12[0x23] == piVar24[0x23]))
                      goto LAB_140f9986d;
                      iVar25 = piVar24[0x22];
                      *(char *)(piVar12 + 0x22) = (char)iVar25;
                      piVar12[0x23] = piVar24[0x23];
                      if ((char)iVar25 != '\x01') goto LAB_140f9986d;
                      puVar18 = &DAT_14cbe22e0;
                      if (*(byte *)(piVar12 + 8) == 2) {
                        puVar18 = &DAT_14cbe22c8;
                      }
                      FUN_1457d7894(param_1,puVar18);
                      goto LAB_140f998ee;
                    }
                    piVar24 = piVar24 + 0x32;
                    lVar17 = lVar17 + -200;
                  } while (lVar17 != 0);
                }
                lVar15 = lVar15 + 0x28;
              } while (lVar15 != lVar20);
            }
LAB_140f9986d:
            piVar12 = piVar12 + 0x32;
          } while (piVar12 != piVar16);
        }
LAB_140f998ee:
        if (piVar23[8] == piVar21[8]) goto LAB_140f998fb;
        iVar25 = piVar21[7];
        *(char *)(piVar23 + 7) = (char)iVar25;
        piVar23[8] = piVar21[8];
        if ((char)iVar25 != '\x01') goto LAB_140f998fb;
        FUN_140de1078(param_1,&DAT_14cbe2080,0,0);
        lVar20 = local_80;
        break;
      }
    }
LAB_140f998fb:
    piVar23 = piVar23 + 10;
    lVar20 = local_80;
  } while (piVar23 != local_88);
LAB_140f9990f:
  plVar11 = plVar11 + 5;
  if (plVar11 == local_98) goto LAB_140f9991e;
  goto LAB_140f99760;
LAB_140f9982a:
  piVar21 = piVar21 + 10;
  lVar20 = lVar20 + -0x28;
  if (lVar20 == 0) goto LAB_140f998fb;
  goto LAB_140f9981c;
}



// FUNCTION 140f9a2c8 FUN_140f9a2c8 body=123 status=ok
// SIG undefined FUN_140f9a2c8(void)

longlong FUN_140f9a2c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
    return local_28 + 0x600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f9a344 FUN_140f9a344 body=468 status=ok
// SIG undefined FUN_140f9a344(void)

ulonglong FUN_140f9a344(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  char cVar16;
  longlong lVar17;
  undefined1 auStack_88 [47];
  byte local_59;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1448d5e3c(&local_58,param_1 + 0x208);
  plVar6 = *(longlong **)(local_58 + 0x2b0);
  AcquireSRWLockShared((PSRWLOCK)(plVar6 + 4));
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
  if ((int)plVar6[3] == *(int *)(param_1 + 0x300)) {
    uVar13 = 0;
    goto LAB_140f9a3b6;
  }
  *(int *)(param_1 + 0x300) = (int)plVar6[3];
  bVar3 = *(byte *)(param_2 + 0x2f8);
  uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),bVar3);
  uVar10 = *(uint *)(param_2 + 0x2fc);
  if (bVar3 == 0) {
    uVar11 = 1;
    if (uVar10 == 0) goto LAB_140f9a40c;
  }
  else {
    uVar11 = uVar10 + 1;
LAB_140f9a40c:
    *(undefined1 *)(param_2 + 0x2f8) = 0;
    *(uint *)(param_2 + 0x2fc) = uVar11;
    uVar10 = uVar11;
  }
  uVar9 = DAT_14cbe1b68;
  uVar8 = DAT_14cbe1b50;
  uVar12 = (ulonglong)uVar10;
  if ((longlong)(int)plVar6[1] != 0) {
    lVar14 = *plVar6;
    lVar15 = (longlong)(int)plVar6[1] * 0x50 + lVar14;
    local_59 = bVar3 ^ 1;
    cVar16 = '\0';
    do {
      iVar5 = *(int *)(lVar14 + 0x28);
      if ((longlong)iVar5 != 0) {
        lVar7 = *(longlong *)(lVar14 + 0x20);
        lVar17 = 0;
        do {
          cVar4 = *(char *)(lVar7 + 0xc + lVar17);
          if (((*(int *)(lVar7 + lVar17) == (int)uVar8) &&
              (*(int *)(lVar7 + 4 + lVar17) == (int)((ulonglong)uVar8 >> 0x20))) ||
             ((*(int *)(lVar7 + lVar17) == (int)uVar9 &&
              (*(int *)(lVar7 + 4 + lVar17) == (int)((ulonglong)uVar9 >> 0x20))))) {
            if ((cVar4 != cVar16) || ((int)uVar12 == 0)) {
              *(char *)(param_2 + 0x2f8) = cVar4;
              uVar10 = (int)uVar12 + 1;
              uVar12 = (ulonglong)uVar10;
              *(uint *)(param_2 + 0x2fc) = uVar10;
            }
            cVar16 = cVar4;
            if (cVar4 != '\0') {
              uVar13 = CONCAT71((int7)(uVar12 >> 8),bVar3) ^ 1;
              goto LAB_140f9a3b6;
            }
          }
          lVar17 = lVar17 + 0x1c;
        } while ((longlong)iVar5 * 0x1c != lVar17);
      }
      lVar14 = lVar14 + 0x50;
    } while (lVar14 != lVar15);
  }
LAB_140f9a3b6:
  ReleaseSRWLockShared((PSRWLOCK)(plVar6 + 4));
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 140f9a51a FUN_140f9a51a body=146 status=ok
// SIG undefined FUN_140f9a51a(void)

undefined8 FUN_140f9a51a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x330) != *(int *)(param_1 + 0x35c)) {
    uVar1 = *(uint *)(param_1 + 0x2cc);
    lVar2 = param_1 + 0x360;
    if (*(longlong *)(param_1 + 0x368) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x368);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x370) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_1 + 0x328);
      iVar5 = iVar4;
      while (*(uint *)(lVar2 + (longlong)iVar5 * 0x20) != uVar1) {
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + lVar2 + 0x18);
        if (iVar5 == -1) {
          return 0;
        }
      }
      do {
        lVar3 = lVar2 + (longlong)iVar4 * 0x20;
        if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == uVar1) goto LAB_140f9a581;
        iVar4 = *(int *)(lVar3 + 0x18);
      } while (iVar4 != -1);
      lVar3 = 0;
LAB_140f9a581:
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),0 < *(int *)(lVar3 + 0x10));
    }
  }
  return 0;
}



// FUNCTION 140f9a5ac FUN_140f9a5ac body=93 status=ok
// SIG undefined FUN_140f9a5ac(void)

undefined8 * FUN_140f9a5ac(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140f9a609(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f9b64e(param_1,iVar1);
      FUN_140f9a632(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140f9a609 FUN_140f9a609 body=41 status=ok
// SIG undefined FUN_140f9a609(void)

void FUN_140f9a609(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140f9a7ba(param_1);
    param_1 = param_1 + 0x1e8;
  }
  return;
}



// FUNCTION 140f9a632 FUN_140f9a632 body=60 status=ok
// SIG undefined FUN_140f9a632(void)

void FUN_140f9a632(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140f9aa1a(param_1,param_2);
    param_1 = param_1 + 0x1e8;
    param_2 = param_2 + 0x1e8;
  }
  return;
}



// FUNCTION 140f9a66e FUN_140f9a66e body=332 status=ok
// SIG undefined FUN_140f9a66e(void)

void FUN_140f9a66e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
    plVar1 = DAT_14c844840;
    param_1[2] = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 3) = DAT_14c844848;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined8 *)((longlong)param_1 + 0x24) = 0;
    *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x32) = 0;
    *(undefined8 *)((longlong)param_1 + 0x3a) = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *(undefined8 *)((longlong)param_1 + 0x94) = 0;
    *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
    *(undefined8 *)((longlong)param_1 + 0xac) = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1 = param_1 + 0x19;
  }
  return;
}



// FUNCTION 140f9a7ba FUN_140f9a7ba body=358 status=ok
// SIG undefined FUN_140f9a7ba(void)

void FUN_140f9a7ba(longlong *param_1)

{
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x25] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x25] + 0x10))();
  }
  FUN_140f9a994(param_1[0x21],(int)param_1[0x22]);
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140f9a920(param_1[0x1e],(int)param_1[0x1f]);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f9a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140f9a920 FUN_140f9a920 body=58 status=ok
// SIG undefined FUN_140f9a920(void)

void FUN_140f9a920(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_140f9a95a(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f9a95a FUN_140f9a95a body=58 status=ok
// SIG undefined FUN_140f9a95a(void)

void FUN_140f9a95a(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_140f9a994(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f9a994 FUN_140f9a994 body=133 status=ok
// SIG undefined FUN_140f9a994(void)

void FUN_140f9a994(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xb8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-10] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xc] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xe] != 0) {
        FUN_1400020a8();
      }
      if ((longlong *)plVar1[-0x15] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-0x15] + 0x10))();
      }
      plVar1 = plVar1 + 0x19;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f9aa1a FUN_140f9aa1a body=370 status=ok
// SIG undefined FUN_140f9aa1a(void)

longlong * FUN_140f9aa1a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  longlong lVar3;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(char *)(param_1 + 2) = (char)param_2[2];
  param_1[3] = 0;
  iVar1 = (int)param_2[4];
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  FUN_140f9ad38(param_1 + 5,param_2 + 5);
  param_1[0x1e] = 0;
  iVar1 = (int)param_2[0x1f];
  lVar3 = param_2[0x1e];
  *(int *)(param_1 + 0x1f) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  else {
    FUN_140f9b2de(param_1 + 0x1e,iVar1,0);
    FUN_140f9ab8c(param_1[0x1e],lVar3,iVar1);
  }
  *(int *)(param_1 + 0x20) = (int)param_2[0x20];
  param_1[0x21] = 0;
  iVar1 = (int)param_2[0x22];
  lVar3 = param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_140f9af66(param_1 + 0x21,iVar1,0);
    FUN_140f9acfc(param_1[0x21],lVar3,iVar1);
  }
  FUN_140f9ad38(param_1 + 0x23,param_2 + 0x23);
  *(short *)(param_1 + 0x3c) = (short)param_2[0x3c];
  *(undefined1 *)((longlong)param_1 + 0x1e2) = *(undefined1 *)((longlong)param_2 + 0x1e2);
  return param_1;
}



// FUNCTION 140f9ab8c FUN_140f9ab8c body=184 status=ok
// SIG undefined FUN_140f9ab8c(void)

void FUN_140f9ab8c(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      *(undefined8 *)(param_1 + 8 + lVar3) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar3);
      uVar2 = *(undefined8 *)(param_2 + 8 + lVar3);
      *(int *)(param_1 + 0x10 + lVar3) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar3) = 0;
      }
      else {
        FUN_140f9b0b8(param_1 + 8 + lVar3,iVar1,0);
        FUN_140f9ac44(*(undefined8 *)(param_1 + 8 + lVar3),uVar2);
      }
      *(undefined8 *)(param_1 + 0x18 + lVar3) = *(undefined8 *)(param_2 + 0x18 + lVar3);
      *(undefined1 *)(param_1 + 0x20 + lVar3) = 0;
      *(undefined4 *)(param_1 + 0x24 + lVar3) = 0;
      *(undefined1 *)(param_1 + 0x20 + lVar3) = *(undefined1 *)(param_2 + 0x20 + lVar3);
      *(undefined4 *)(param_1 + 0x24 + lVar3) = *(undefined4 *)(param_2 + 0x24 + lVar3);
      lVar3 = lVar3 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f9ac44 FUN_140f9ac44 body=184 status=ok
// SIG undefined FUN_140f9ac44(void)

void FUN_140f9ac44(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      *(undefined8 *)(param_1 + 8 + lVar3) = 0;
      iVar1 = *(int *)(param_2 + 0x10 + lVar3);
      uVar2 = *(undefined8 *)(param_2 + 8 + lVar3);
      *(int *)(param_1 + 0x10 + lVar3) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x14 + lVar3) = 0;
      }
      else {
        FUN_140f9af66(param_1 + 8 + lVar3,iVar1,0);
        FUN_140f9acfc(*(undefined8 *)(param_1 + 8 + lVar3),uVar2);
      }
      *(undefined4 *)(param_1 + 0x18 + lVar3) = *(undefined4 *)(param_2 + 0x18 + lVar3);
      *(undefined1 *)(param_1 + 0x1c + lVar3) = 0;
      *(undefined4 *)(param_1 + 0x20 + lVar3) = 0;
      *(undefined1 *)(param_1 + 0x1c + lVar3) = *(undefined1 *)(param_2 + 0x1c + lVar3);
      *(undefined4 *)(param_1 + 0x20 + lVar3) = *(undefined4 *)(param_2 + 0x20 + lVar3);
      lVar3 = lVar3 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f9acfc FUN_140f9acfc body=60 status=ok
// SIG undefined FUN_140f9acfc(void)

void FUN_140f9acfc(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_140f9ad38(param_1,param_2);
    param_1 = param_1 + 200;
    param_2 = param_2 + 200;
  }
  return;
}



// FUNCTION 140f9ad38 FUN_140f9ad38 body=557 status=ok
// SIG undefined FUN_140f9ad38(void)

undefined4 * FUN_140f9ad38(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  plVar2 = *(longlong **)(param_2 + 4);
  *(longlong **)(param_1 + 4) = plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  param_1[6] = param_2[6];
  uVar4 = param_2[9];
  uVar5 = param_2[10];
  uVar6 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar8 = param_2[0xd];
  uVar9 = param_2[0xe];
  uVar10 = param_2[0xf];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  param_1[10] = uVar5;
  param_1[0xb] = uVar6;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar8;
  param_1[0xe] = uVar9;
  param_1[0xf] = uVar10;
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar3 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  pvVar3 = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x16,iVar1,0);
    memcpy(*(void **)(param_1 + 0x16),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x1a) = 0;
  iVar1 = param_2[0x1c];
  pvVar3 = *(void **)(param_2 + 0x1a);
  param_1[0x1c] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x1d] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1a),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x1e) = 0;
  iVar1 = param_2[0x20];
  pvVar3 = *(void **)(param_2 + 0x1e);
  param_1[0x20] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x21] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1e,iVar1,0);
    memcpy(*(void **)(param_1 + 0x1e),pvVar3,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  param_1[0x23] = param_2[0x23];
  uVar4 = param_2[0x25];
  uVar5 = param_2[0x26];
  uVar6 = param_2[0x27];
  uVar7 = param_2[0x28];
  uVar8 = param_2[0x29];
  uVar9 = param_2[0x2a];
  uVar10 = param_2[0x2b];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar4;
  param_1[0x26] = uVar5;
  param_1[0x27] = uVar6;
  param_1[0x28] = uVar7;
  param_1[0x29] = uVar8;
  param_1[0x2a] = uVar9;
  param_1[0x2b] = uVar10;
  param_1[0x2c] = param_2[0x2c];
  *(undefined8 *)(param_1 + 0x2e) = 0;
  iVar1 = param_2[0x30];
  pvVar3 = *(void **)(param_2 + 0x2e);
  param_1[0x30] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x31] = 0;
  }
  else {
    FUN_140f9b206(param_1 + 0x2e,iVar1,0);
    memcpy(*(void **)(param_1 + 0x2e),pvVar3,(longlong)iVar1 << 5);
  }
  return param_1;
}



// FUNCTION 140f9af66 FUN_140f9af66 body=337 status=ok
// SIG undefined FUN_140f9af66(void)

void FUN_140f9af66(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 200;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f9afd7;
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
LAB_140f9afd7:
    iVar5 = (int)(uVar4 / 200);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,200,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f9b0b8 FUN_140f9b0b8 body=334 status=ok
// SIG undefined FUN_140f9b0b8(void)

void FUN_140f9b0b8(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f9b12a;
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
LAB_140f9b12a:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f9b206 FUN_140f9b206 body=216 status=ok
// SIG undefined FUN_140f9b206(void)

void FUN_140f9b206(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,4);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,4);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f9b2de FUN_140f9b2de body=334 status=ok
// SIG undefined FUN_140f9b2de(void)

void FUN_140f9b2de(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x28;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f9b350;
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
LAB_140f9b350:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f9b42c FUN_140f9b42c body=376 status=ok
// SIG undefined FUN_140f9b42c(void)

void FUN_140f9b42c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 200;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f9b4b4;
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
LAB_140f9b4b4:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 200)) {
    uVar7 = uVar5 / 200 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,200,8);
  return;
}



// FUNCTION 140f9b5a6 FUN_140f9b5a6 body=167 status=ok
// SIG undefined FUN_140f9b5a6(void)

undefined8 * FUN_140f9b5a6(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  void *_Src;
  
  puVar4 = DAT_14cbe1f40;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x2cc);
    if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(lVar5 + 0x1c0))) &&
       (lVar5 = (ulonglong)uVar1 * 0x1e8 + *(longlong *)(lVar5 + 0x1b8), lVar5 != 0)) {
      uVar3 = (ulonglong)*(byte *)(lVar5 + 0x10);
      *param_2 = 0;
      iVar2 = *(int *)(puVar4 + uVar3 * 2 + 1);
      _Src = (void *)puVar4[uVar3 * 2];
      goto LAB_140f9b5fc;
    }
  }
  *param_2 = 0;
  iVar2 = *(int *)(puVar4 + 1);
  _Src = (void *)*puVar4;
LAB_140f9b5fc:
  *(int *)(param_2 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar2,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar2 * 2);
  }
  return param_2;
}



// FUNCTION 140f9b64e FUN_140f9b64e body=346 status=ok
// SIG undefined FUN_140f9b64e(void)

void FUN_140f9b64e(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x1e8;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f9b6bf;
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
LAB_140f9b6bf:
    iVar5 = (int)(uVar4 / 0x1e8);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x1e8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f9b7a8 FUN_140f9b7a8 body=593 status=ok
// SIG undefined FUN_140f9b7a8(void)

void FUN_140f9b7a8(longlong param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  wchar_t *_Str;
  size_t sVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_208 [40];
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 *local_1d0;
  char local_1c8;
  undefined1 local_1c0 [256];
  undefined1 local_c0 [128];
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (((lVar2 != 0) && (*(char *)(lVar2 + 0x1dd) == '\0')) &&
     (bVar1 = *(byte *)(lVar2 + 0x1d8), bVar1 < 5)) {
    FUN_140f9bb7c(lVar2 + 0x1d0);
    if (bVar1 != 0) {
      if (bVar1 == 4) {
        lVar4 = *(longlong *)(param_1 + 0x288);
        if (((lVar4 != 0) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar4 + 0x1c0))) {
          *(int *)(lVar4 + 0x1c8) = *(int *)(lVar4 + 0x1c8) + 1;
          lVar4 = (ulonglong)param_2 * 0x1e8 + *(longlong *)(lVar4 + 0x1b8);
          lVar8 = lVar4 + 0x28;
          if (lVar8 != 0) {
            FUN_140f9ba4c(param_1,lVar8,0);
            FUN_140f9c46c(param_1,lVar4 + 0x80);
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x288);
        if (((lVar4 != 0) && (-1 < (int)param_2)) &&
           (((int)param_2 < *(int *)(lVar4 + 0x1c0) &&
            (lVar4 = FUN_140f9b9fa((ulonglong)param_2 * 0x1e8 + *(longlong *)(lVar4 + 0x1b8),
                                   *(undefined4 *)(lVar2 + 0x1f0),*(undefined4 *)(lVar2 + 500),
                                   *(undefined4 *)(lVar2 + 0x1f8)), lVar4 != 0)))) {
          FUN_140f9ba4c(param_1,lVar4,0);
          FUN_140f9c46c(param_1,lVar4 + 0x58);
          if (*(char *)(lVar4 + 0x20) == '\0') {
            cVar3 = FUN_144729dda(param_1 + 0x30);
            if (cVar3 == '\0') goto LAB_140f9b88c;
            uVar5 = FUN_14479d2ce(param_1 + 0x30);
            local_1e0 = local_1c0;
            local_1c8 = '\0';
            local_1d0 = local_c0;
            puVar7 = DAT_14cbe2118;
            if (DAT_14cbe2120 == 0) {
              puVar7 = &DAT_149dfb77a;
            }
            local_1d8 = local_1e0;
            _Str = (wchar_t *)FUN_140c7f682(param_1,puVar7,&local_1e0);
            local_40 = 0;
            if (_Str == (wchar_t *)0x0) {
              local_38 = 0;
              local_30 = 0;
            }
            else {
              sVar6 = wcslen(_Str);
              FUN_1446fe5a4(local_c0,_Str,sVar6 & 0xffffffff,1);
            }
            FUN_1412a486e(uVar5,local_38);
            if (local_40 != 0) {
              FUN_1400020a8();
            }
            if (local_1c8 == '\x01') {
              FUN_1400020a8(local_1e0);
            }
          }
        }
      }
    }
    *(undefined1 *)(lVar2 + 0x308) = 0;
  }
LAB_140f9b88c:
  if ((local_28 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f9b9fa FUN_140f9b9fa body=82 status=ok
// SIG undefined FUN_140f9b9fa(void)

longlong FUN_140f9b9fa(longlong param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xf8))) {
    if (-1 < (int)param_3) {
      if (((int)param_3 < *(int *)(*(longlong *)(param_1 + 0xf0) + 0x10 + (ulonglong)param_2 * 0x28)
          ) && (-1 < (int)param_4)) {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 8 + (ulonglong)param_2 * 0x28);
        if ((int)param_4 < *(int *)(lVar1 + 0x10 + (ulonglong)param_3 * 0x28)) {
          return (ulonglong)param_4 * 200 + *(longlong *)(lVar1 + 8 + (ulonglong)param_3 * 0x28);
        }
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 140f9ba4c FUN_140f9ba4c body=303 status=ok
// SIG undefined FUN_140f9ba4c(void)

void FUN_140f9ba4c(longlong param_1,longlong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    *(undefined1 *)(lVar3 + 0x308) = 1;
    *(undefined1 *)(lVar3 + 0x1dd) = param_3;
    lVar7 = param_2[1];
    if (lVar7 == 0) {
      lVar7 = *param_2;
    }
    *(longlong *)(lVar3 + 0x1d0) = lVar7;
    *(char *)(lVar3 + 0x1d8) = (char)param_2[4];
    plVar1 = (longlong *)(lVar3 + 0x218);
    if (plVar1 != param_2 + 0xb) {
      iVar2 = (int)param_2[0xc];
      _Src = (void *)param_2[0xb];
      *(int *)(lVar3 + 0x220) = iVar2;
      if (iVar2 == 0 && *(int *)(lVar3 + 0x224) == 0) {
        *(undefined4 *)(lVar3 + 0x224) = 0;
      }
      else {
        FUN_1446dd670(plVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*plVar1,_Src,(longlong)iVar2 * 2);
        }
      }
    }
    *(char *)(lVar3 + 0x1da) = (char)param_2[0x12];
    *(undefined1 *)(lVar3 + 0x1db) = *(undefined1 *)((longlong)param_2 + 0x91);
    *(char *)(lVar3 + 0x1dc) = (char)param_2[0x11];
    *(undefined4 *)(lVar3 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x9c);
    *(int *)(lVar3 + 0x208) = (int)param_2[0x14];
    *(int *)(lVar3 + 0x20c) = (int)param_2[0x15];
    *(int *)(lVar3 + 0x210) = (int)param_2[0x13];
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x2c);
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x34);
    uVar6 = *(undefined8 *)((longlong)param_2 + 0x3c);
    *(undefined8 *)(lVar3 + 0x1e4) = *(undefined8 *)((longlong)param_2 + 0x24);
    *(undefined8 *)(lVar3 + 0x1ec) = uVar4;
    *(undefined8 *)(lVar3 + 500) = uVar5;
    *(undefined8 *)(lVar3 + 0x1fc) = uVar6;
    *(undefined4 *)(lVar3 + 0x1e0) = *(undefined4 *)((longlong)param_2 + 0x94);
  }
  return;
}



// FUNCTION 140f9bb7c FUN_140f9bb7c body=1202 status=ok
// SIG undefined FUN_140f9bb7c(void)

void FUN_140f9bb7c(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_1446f8c06(param_1 + 0xd,0);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    FUN_1446f8c06(param_1 + 9,0);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int *)((longlong)param_1 + 100) != 0) {
    FUN_1446f8c06(param_1 + 0xb,0);
  }
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
  plVar3 = DAT_14c844840;
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != DAT_14c844840) {
    param_1[0xf] = DAT_14c844840;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x10) = DAT_14c844848;
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
  plVar3 = DAT_14c844840;
  plVar2 = (longlong *)param_1[0x11];
  if (plVar2 != DAT_14c844840) {
    param_1[0x11] = DAT_14c844840;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x12) = DAT_14c844848;
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
  plVar3 = DAT_14c844840;
  plVar2 = (longlong *)param_1[0x13];
  if (plVar2 != DAT_14c844840) {
    param_1[0x13] = DAT_14c844840;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x14) = DAT_14c844848;
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
  plVar3 = DAT_14c844840;
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != DAT_14c844840) {
    param_1[0x15] = DAT_14c844840;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 0x16) = DAT_14c844848;
  FUN_140f9c06b(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (*(int *)((longlong)param_1 + 0xd4) != 0) {
    FUN_1457d768e(param_1 + 0x19);
  }
  iVar1 = *(int *)((longlong)param_1 + 0xe4);
  FUN_140f9c02e(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xe4) != 0)) {
    FUN_148a07b08(param_1 + 0x1b,0);
    return;
  }
  return;
}



// FUNCTION 140f9c02e FUN_140f9c02e body=61 status=ok
// SIG undefined FUN_140f9c02e(void)

void FUN_140f9c02e(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f9c06b FUN_140f9c06b body=46 status=ok
// SIG undefined FUN_140f9c06b(void)

void FUN_140f9c06b(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if ((longlong *)*param_1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*param_1 + 0x10))();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140f9c09a FUN_140f9c09a body=977 status=ok
// SIG undefined FUN_140f9c09a(void)

undefined8 FUN_140f9c09a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  byte *pbVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined7 uVar19;
  
  lVar16 = *(longlong *)(param_1 + 0x288);
  plVar9 = (longlong *)FUN_140f9a2c8();
  lVar3 = *plVar9;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
  *(int *)(lVar3 + 0x98) = *(int *)(lVar3 + 0x98) + 1;
  *(undefined2 *)(param_1 + 0x2f0) = 0;
  *(undefined1 *)(param_1 + 0x2f2) = 0;
  if (*(char *)(lVar16 + 0x2f8) == '\0') {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_140f9c2b0:
      lVar14 = 0;
    }
    else {
      uVar8 = *(uint *)(param_1 + 0x30);
      lVar14 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_140f9c2b0;
        lVar14 = *plVar9;
      }
    }
    uVar8 = FUN_140426394(lVar14 + 0x3c0,&DAT_14cbd9378);
    uVar17 = (ulonglong)uVar8;
    cVar7 = (char)uVar8;
    if (((lVar16 == 0) || (*(char *)(param_1 + 0x2d8) != '\0')) ||
       ((cVar7 != '\0' && (*(char *)(param_1 + 0x2e8) != '\0')))) {
LAB_140f9c1cf:
      if (*(char *)(lVar3 + 0x10) == cVar7) {
        if (*(int *)(lVar3 + 0x14) != 0) goto LAB_140f9c1dd;
        iVar13 = 1;
      }
      else {
        iVar13 = *(int *)(lVar3 + 0x14) + 1;
      }
      *(char *)(lVar3 + 0x10) = cVar7;
      uVar18 = 0;
    }
    else {
      plVar9 = *(longlong **)(lVar16 + 0x2e0);
      if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
      }
      FUN_1447a1fc0(plVar9);
      plVar9 = *(longlong **)(lVar16 + 0x2e0);
      pcVar4 = *(code **)(*plVar9 + 0x28);
      if (pcVar4 == FUN_14482841c) {
        plVar12 = plVar9 + 3;
        if (plVar9[5] != 0) {
          plVar12 = (longlong *)(plVar9[5] + 8);
        }
      }
      else if (pcVar4 == (code *)&LAB_14010c34c) {
        plVar12 = plVar9 + 2;
      }
      else {
        plVar12 = (longlong *)(*pcVar4)(plVar9);
      }
      if ((int)plVar12[1] < 2) goto LAB_140f9c1cf;
      if ((longlong)*(int *)(lVar16 + 0x1c0) != 0) {
        lVar14 = *(longlong *)(lVar16 + 0x1b8);
        lVar20 = 0;
LAB_140f9c23f:
        if (*(char *)(lVar14 + 0xb8 + lVar20) != '\x01') goto code_r0x000140f9c24a;
        lVar15 = (longlong)*(int *)(lVar14 + 0x110 + lVar20);
        if (lVar15 == 0) {
          iVar13 = 0;
        }
        else {
          lVar21 = 0;
          iVar13 = 0;
          do {
            iVar13 = iVar13 + (uint)*(byte *)(*(longlong *)(lVar14 + 0x108 + lVar20) + 0x90 + lVar21
                                             );
            lVar21 = lVar21 + 200;
          } while (lVar15 * 200 - lVar21 != 0);
        }
        lVar15 = (longlong)*(int *)(lVar14 + 0xf8 + lVar20);
        uVar8 = 0;
        if (lVar15 != 0) {
          lVar21 = *(longlong *)(lVar14 + 0xf0 + lVar20);
          lVar15 = lVar21 + lVar15 * 0x28;
          do {
            if ((longlong)*(int *)(lVar21 + 0x10) != 0) {
              lVar22 = *(longlong *)(lVar21 + 8);
              lVar1 = lVar22 + (longlong)*(int *)(lVar21 + 0x10) * 0x28;
              do {
                if ((longlong)*(int *)(lVar22 + 0x10) != 0) {
                  lVar5 = *(longlong *)(lVar22 + 8);
                  lVar10 = 0;
                  do {
                    if ((*(char *)(lVar5 + 0x20 + lVar10) == '\x02') &&
                       (*(char *)(lVar5 + 0x88 + lVar10) == '\x01')) {
                      uVar17 = 0;
                      uVar8 = uVar8 + (*(byte *)(lVar5 + 0x90 + lVar10) ^ 1);
                    }
                    lVar10 = lVar10 + 200;
                  } while ((longlong)*(int *)(lVar22 + 0x10) * 200 - lVar10 != 0);
                }
                lVar22 = lVar22 + 0x28;
              } while (lVar22 != lVar1);
            }
            lVar21 = lVar21 + 0x28;
          } while (lVar21 != lVar15);
          uVar8 = (uint)(0 < (int)uVar8);
        }
        iVar2 = *(int *)(lVar16 + 700);
        if (0 < iVar2) {
          pbVar11 = (byte *)(param_1 + 0x2f1);
          if (iVar2 == 1) {
            pbVar11 = (byte *)(param_1 + 0x2f0);
          }
          *pbVar11 = ~*(byte *)(lVar14 + 0x1e0 + lVar20) & (byte)uVar8 & iVar13 < iVar2;
        }
        if (*(char *)(lVar14 + 0x1e1 + lVar20) == '\0') {
          bVar6 = *(byte *)(lVar14 + 0x1a8 + lVar20) ^ 1;
        }
        else {
          bVar6 = 0;
        }
        *(byte *)(param_1 + 0x2f2) = bVar6;
      }
LAB_140f9c3b7:
      uVar19 = (undefined7)(uVar17 >> 8);
      uVar18 = CONCAT71(uVar19,1);
      cVar7 = '\x01';
      if (((*(byte *)(param_1 + 0x2f0) == 0) &&
          (uVar18 = CONCAT71(uVar19,1), *(byte *)(param_1 + 0x2f1) == 0)) &&
         (uVar18 = CONCAT71(uVar19,1), *(char *)(param_1 + 0x2f2) == '\0')) {
        if (*(int *)(param_1 + 0x34) == 0) {
LAB_140f9c453:
          lVar16 = 0;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x30);
          lVar16 = 0;
          if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
            plVar9 = (longlong *)
                     ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
            if ((plVar9 == (longlong *)0x0) ||
               (((int)plVar9[2] != *(int *)(param_1 + 0x34) ||
                ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_140f9c453;
            lVar16 = *plVar9;
          }
        }
        cVar7 = FUN_140426394(lVar16 + 0x3c0,&DAT_14cbd9378);
        uVar18 = 0;
      }
      if (cVar7 == *(char *)(lVar3 + 0x10)) {
        if (*(int *)(lVar3 + 0x14) != 0) goto LAB_140f9c1f4;
        iVar13 = 1;
      }
      else {
        iVar13 = *(int *)(lVar3 + 0x14) + 1;
      }
      *(char *)(lVar3 + 0x10) = cVar7;
    }
    *(int *)(lVar3 + 0x14) = iVar13;
  }
  else {
LAB_140f9c1dd:
    uVar18 = 0;
  }
LAB_140f9c1f4:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0xa0));
  return uVar18;
code_r0x000140f9c24a:
  lVar20 = lVar20 + 0x1e8;
  if ((longlong)*(int *)(lVar16 + 0x1c0) * 0x1e8 - lVar20 == 0) goto LAB_140f9c3b7;
  goto LAB_140f9c23f;
}



// FUNCTION 140f9c46c FUN_140f9c46c body=3398 status=ok
// SIG undefined FUN_140f9c46c(void)

void FUN_140f9c46c(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ushort *puVar7;
  void *_Src;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  char *pcVar21;
  longlong lVar22;
  int iVar23;
  bool bVar24;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 *local_120;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  code **local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined4 local_90;
  code *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_140f9c962;
  puVar7 = *(ushort **)(lVar6 + 0x80);
  if (puVar7 != (ushort *)0x0) {
    *puVar7 = *puVar7 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
  }
  *(undefined1 *)(lVar6 + 0x1d9) = 1;
  cVar11 = *(char *)(lVar6 + 0x1d8);
  if (cVar11 == '\x06') {
    plVar17 = (longlong *)FUN_140e82300();
    plVar15 = (longlong *)*plVar17;
    plVar16 = *(longlong **)(lVar6 + 0x288);
    if (plVar16 != plVar15) {
      *(longlong **)(lVar6 + 0x288) = plVar15;
      if (plVar15 != (longlong *)0x0) {
        (**(code **)(*plVar15 + 8))();
      }
      if (plVar16 != (longlong *)0x0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    *(int *)(lVar6 + 0x290) = (int)plVar17[1];
    FUN_140f9bb7c(lVar6 + 0x1d0);
    *(undefined1 *)(lVar6 + 0x1d8) = 6;
    if (*(char *)(lVar6 + 800) == '\x01') {
      *(undefined1 *)(lVar6 + 0x1d9) = 0;
      uVar13 = FUN_14001cc68(0x148,0x10);
      local_120 = &local_108;
      local_108 = (undefined4)DAT_14c8464e0;
      uStack_104 = DAT_14c8464e0._4_4_;
      uStack_100 = (undefined4)DAT_14c8464e8;
      uStack_fc = DAT_14c8464e8._4_4_;
      local_f8 = DAT_14c8464f0;
      local_128 = *(undefined4 *)(lVar6 + 0x324);
      FUN_14664e342(uVar13,*(undefined8 *)(param_1 + 0x30),0,*(undefined8 *)(lVar6 + 0x328));
      FUN_140391314(param_1,uVar13);
      puVar14 = (undefined8 *)FUN_14001cc68(0x40,0x10);
      uVar13 = *(undefined8 *)(param_1 + 0x30);
      *puVar14 = &PTR_FUN_14b9c7290;
      FUN_1446ddc76(&local_88,"SetGlyphs",1);
      FUN_14039176c(puVar14,uVar13,local_88,1);
      *puVar14 = &PTR_FUN_14b9c7290;
      *(undefined4 *)(puVar14 + 7) = 0;
      FUN_140391314(param_1,puVar14);
    }
    else {
      lVar22 = 0;
      FUN_14000bbd8(&local_88,param_2,0);
      if (DAT_14cb93020 != 0) {
        lVar22 = FUN_144837462(DAT_14cb93020,&local_88);
      }
      if (CONCAT44(uStack_6c,local_70) != 0) {
        FUN_1400020a8();
      }
      if (lVar22 != 0) {
        uVar13 = FUN_140f9d1b4();
        cVar11 = FUN_1448093f4(lVar22,uVar13);
        if (cVar11 != '\0') {
          plVar15 = *(longlong **)(lVar22 + 0x30);
          plVar16 = *(longlong **)(lVar6 + 0x248);
          if (plVar16 != plVar15) {
            *(longlong **)(lVar6 + 0x248) = plVar15;
            if (plVar15 != (longlong *)0x0) {
              (**(code **)(*plVar15 + 8))();
            }
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          *(undefined4 *)(lVar6 + 0x250) = *(undefined4 *)(lVar22 + 0x38);
          plVar15 = *(longlong **)(lVar22 + 0x40);
          plVar16 = *(longlong **)(lVar6 + 600);
          if (plVar16 != plVar15) {
            *(longlong **)(lVar6 + 600) = plVar15;
            if (plVar15 != (longlong *)0x0) {
              (**(code **)(*plVar15 + 8))();
            }
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          *(undefined4 *)(lVar6 + 0x260) = *(undefined4 *)(lVar22 + 0x48);
          plVar15 = *(longlong **)(lVar22 + 0x50);
          plVar16 = *(longlong **)(lVar6 + 0x278);
          if (plVar16 != plVar15) {
            *(longlong **)(lVar6 + 0x278) = plVar15;
            if (plVar15 != (longlong *)0x0) {
              (**(code **)(*plVar15 + 8))();
            }
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          *(undefined4 *)(lVar6 + 0x280) = *(undefined4 *)(lVar22 + 0x58);
        }
      }
    }
  }
  else {
    local_118 = (void *)0x0;
    local_110 = *(int *)(param_2 + 1);
    lVar22 = (longlong)local_110;
    _Src = (void *)*param_2;
    if (lVar22 == 0) {
      local_10c = 0;
    }
    else {
      FUN_1446dd670(&local_118,local_110,0);
      memcpy(local_118,_Src,lVar22 * 2);
      cVar11 = *(char *)(lVar6 + 0x1d8);
    }
    if (((byte)(cVar11 - 1U) < 4) && (1 < *(int *)(lVar6 + 0x220))) {
      FUN_1402980a2(&local_118,*(undefined8 *)(lVar6 + 0x218),*(int *)(lVar6 + 0x220) + -1);
    }
    lVar22 = 0;
    FUN_14000bbd8(&local_88,&local_118,0);
    if (DAT_14cb93020 != 0) {
      lVar22 = FUN_144837462(DAT_14cb93020,&local_88);
    }
    if (CONCAT44(uStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
    if (lVar22 != 0) {
      uVar13 = FUN_140f9d1b4();
      cVar11 = FUN_1448093f4(lVar22,uVar13);
      if (cVar11 != '\0') {
        lVar18 = lVar6 + 0x298;
        FUN_140f9c06b(*(undefined8 *)(lVar6 + 0x298),*(undefined4 *)(lVar6 + 0x2a0));
        *(undefined4 *)(lVar6 + 0x2a0) = 0;
        if (*(int *)(lVar6 + 0x2a4) != 0) {
          FUN_1457d768e(lVar18);
        }
        plVar15 = *(longlong **)(lVar22 + 0x98);
        if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
          plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
        }
        FUN_1447a1fc0(plVar15);
        plVar15 = *(longlong **)(lVar22 + 0x98);
        pcVar8 = *(code **)(*plVar15 + 0x28);
        if (pcVar8 == FUN_14482841c) {
          plVar16 = plVar15 + 3;
          if (plVar15[5] != 0) {
            plVar16 = (longlong *)(plVar15[5] + 8);
          }
        }
        else if (pcVar8 == (code *)&LAB_14010c34c) {
          plVar16 = plVar15 + 2;
        }
        else {
          plVar16 = (longlong *)(*pcVar8)(plVar15);
        }
        if (1 < (int)plVar16[1]) {
          plVar17 = (longlong *)FUN_1457d8342(lVar18);
          plVar15 = *(longlong **)(lVar22 + 0x98);
          plVar16 = (longlong *)*plVar17;
          if (plVar16 != plVar15) {
            *plVar17 = (longlong)plVar15;
            if (plVar15 != (longlong *)0x0) {
              (**(code **)(*plVar15 + 8))();
            }
            if (plVar16 != (longlong *)0x0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          *(undefined4 *)(plVar17 + 1) = *(undefined4 *)(lVar22 + 0xa0);
        }
        plVar15 = *(longlong **)(lVar22 + 0x30);
        plVar16 = *(longlong **)(lVar6 + 0x248);
        if (plVar16 != plVar15) {
          *(longlong **)(lVar6 + 0x248) = plVar15;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 8))();
          }
          if (plVar16 != (longlong *)0x0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        *(undefined4 *)(lVar6 + 0x250) = *(undefined4 *)(lVar22 + 0x38);
        plVar15 = *(longlong **)(lVar22 + 0x40);
        plVar16 = *(longlong **)(lVar6 + 600);
        if (plVar16 != plVar15) {
          *(longlong **)(lVar6 + 600) = plVar15;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 8))();
          }
          if (plVar16 != (longlong *)0x0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        *(undefined4 *)(lVar6 + 0x260) = *(undefined4 *)(lVar22 + 0x48);
        plVar15 = *(longlong **)(lVar22 + 0x50);
        plVar16 = *(longlong **)(lVar6 + 0x278);
        if (plVar16 != plVar15) {
          *(longlong **)(lVar6 + 0x278) = plVar15;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 8))();
          }
          if (plVar16 != (longlong *)0x0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        *(undefined4 *)(lVar6 + 0x280) = *(undefined4 *)(lVar22 + 0x58);
        iVar23 = *(int *)(lVar6 + 0x2b4);
        FUN_140f9c02e(*(undefined8 *)(lVar6 + 0x2a8));
        *(undefined4 *)(lVar6 + 0x2b0) = 0;
        if ((iVar23 < 0) && (*(int *)(lVar6 + 0x2b4) != 0)) {
          FUN_148a07b08(lVar6 + 0x2a8);
        }
        if (*(longlong *)(lVar22 + 0x68) != 0) {
          FUN_140390f7a(lVar22 + 0x60);
        }
        bVar2 = *(byte *)(lVar6 + 0x1d8);
        if (bVar2 == 1) {
          FUN_140002266(&local_88,L"%d/%d ",*(undefined4 *)(lVar6 + 0x204),
                        *(undefined4 *)(lVar6 + 0x210));
          if ((code **)(lVar6 + 0x238) == &local_88) {
            if (local_88 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*(longlong *)(lVar6 + 0x238) != 0) {
              FUN_1400020a8();
            }
            *(code **)(lVar6 + 0x238) = local_88;
            local_88 = (code *)0x0;
            *(undefined4 *)(lVar6 + 0x240) = (undefined4)local_80;
            *(undefined4 *)(lVar6 + 0x244) = local_80._4_4_;
          }
          if (0 < *(int *)(lVar6 + 0x208)) {
            FUN_144a5dc74(local_c8);
            FUN_140ac6c96(&DAT_14cbe2138,local_c8);
            iVar23 = *(int *)(lVar6 + 0x208);
            FUN_14023409e(&local_e8,local_c8,1);
            local_a0 = local_68;
            local_88 = (code *)((ulonglong)local_88 & 0xffffffff00000000);
            local_78 = (longlong *)0x0;
            local_70 = 0;
            local_a8 = &local_88;
            local_80 = (longlong)iVar23;
            FUN_14010d304(&local_98);
            local_b8 = local_e8;
            local_b0 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_d8,&local_b8,&local_98);
            FUN_14007f2db(local_98,local_90);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            if (local_78 != (longlong *)0x0) {
              (**(code **)(*local_78 + 0x10))();
            }
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar15 = local_e0 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar1 = (int *)((longlong)local_e0 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_e0 + 0x10))(local_e0);
                }
              }
            }
            puVar14 = (undefined8 *)FUN_1447a1f4a(local_d8);
            iVar23 = *(int *)(puVar14 + 1) + -1;
            if (*(int *)(puVar14 + 1) == 0) {
              iVar23 = 0;
            }
            FUN_1400020e8((code **)(lVar6 + 0x238),*puVar14,iVar23);
            if (local_d8[0] != (longlong *)0x0) {
              (**(code **)(*local_d8[0] + 0x10))();
            }
            if (local_c8[0] != (longlong *)0x0) {
              (**(code **)(*local_c8[0] + 0x10))();
            }
          }
          lVar18 = *(longlong *)(param_1 + 0x288);
          if (lVar18 != 0) {
            uVar4 = *(uint *)(lVar6 + 0x2b8);
            if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar18 + 0x1c0))) {
              uVar5 = *(uint *)(lVar6 + 0x1f0);
              if (-1 < (int)uVar5) {
                if (((int)uVar5 <
                     *(int *)(*(longlong *)(lVar18 + 0x1b8) + 0xf8 + (ulonglong)uVar4 * 0x1e8)) &&
                   (lVar18 = (ulonglong)uVar5 * 0x28 +
                             *(longlong *)
                              (*(longlong *)(lVar18 + 0x1b8) + 0xf0 + (ulonglong)uVar4 * 0x1e8),
                   lVar18 != 0)) {
                  if ((*(char *)(lVar18 + 0x20) == '\x01') &&
                     (((*(char *)(lVar6 + 0x1dc) == '\x01' && (0 < *(int *)(lVar6 + 0x2d0))) &&
                      (*(uint *)(lVar6 + 0x1ec) == uVar4)))) {
                    iVar23 = *(int *)(lVar6 + 0x210);
                    iVar20 = *(int *)(lVar6 + 0x204);
                    iVar12 = iVar23 - iVar20;
                    if (iVar23 != iVar20 && *(int *)(lVar6 + 0x204) <= iVar23) {
                      iVar23 = 1;
                      if (iVar12 <= *(int *)(lVar6 + 0x2d0)) {
                        iVar23 = *(int *)(lVar22 + 0x90);
                      }
                      if (iVar12 < 2) {
                        iVar23 = 1;
                      }
                      if (0 < iVar23) {
                        iVar20 = 0;
                        do {
                          FUN_140f9d1ee(lVar6 + 0x1d0,lVar22,iVar20);
                          iVar20 = iVar20 + 1;
                        } while (iVar23 != iVar20);
                      }
                      goto LAB_140f9c893;
                    }
                  }
                  FUN_1457d7dca(param_1,lVar6);
                }
              }
            }
          }
        }
        else if (bVar2 - 2 < 2) {
          if (*(char *)(lVar6 + 0x1dd) == '\0') {
            lVar18 = *(longlong *)(param_1 + 0x288);
            if (lVar18 != 0) {
              uVar4 = *(uint *)(param_1 + 0x2c8);
              if ((((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar18 + 0x1c0))) &&
                  (lVar18 = FUN_140f9b9fa((ulonglong)uVar4 * 0x1e8 + *(longlong *)(lVar18 + 0x1b8),
                                          *(undefined4 *)(lVar6 + 0x1f0),
                                          *(undefined4 *)(lVar6 + 500),
                                          *(undefined4 *)(lVar6 + 0x1f8)), lVar18 != 0)) &&
                 (FUN_1457d7a88(param_1,lVar6), *(char *)(lVar18 + 0x88) == '\0')) {
                FUN_1457d7dca(param_1,lVar6);
              }
            }
          }
          else if (*(char *)(lVar6 + 0x1da) == '\0') {
            lVar9 = *(longlong *)(param_1 + 0x288);
            if (lVar9 != 0) {
              *(int *)(lVar9 + 0x1c8) = *(int *)(lVar9 + 0x1c8) + 2;
              if ((longlong)*(int *)(lVar9 + 0x1c0) != 0) {
                lVar19 = 0;
                do {
                  if (*(char *)(*(longlong *)(lVar9 + 0x1b8) + 0xb8 + lVar19) != '\0')
                  goto LAB_140f9ca1f;
                  lVar19 = lVar19 + 0x1e8;
                } while ((longlong)*(int *)(lVar9 + 0x1c0) * 0x1e8 - lVar19 != 0);
              }
            }
            FUN_140f9c06b(*(undefined8 *)(lVar6 + 0x298),*(undefined4 *)(lVar6 + 0x2a0));
            *(undefined4 *)(lVar6 + 0x2a0) = 0;
            if (*(int *)(lVar6 + 0x2a4) != 0) {
              FUN_1457d768e(lVar18);
            }
            uVar13 = FUN_1457d8342(lVar18);
            FUN_140ac6c96(&DAT_14cbe2188,uVar13);
          }
LAB_140f9ca1f:
          if (*(char *)(lVar6 + 0x1dc) == '\x01') {
            *(char *)(lVar6 + 0x1de) = *(char *)(lVar6 + 0x2f8);
            if (*(char *)(lVar6 + 0x2f8) == '\0') {
              lVar18 = *(longlong *)(param_1 + 0x288);
              if (lVar18 != 0) {
                uVar4 = *(uint *)(param_1 + 0x2cc);
                if (((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar18 + 0x1c0))) &&
                   ((lVar18 = (ulonglong)uVar4 * 0x1e8 + *(longlong *)(lVar18 + 0x1b8), lVar18 != 0
                    && (*(char *)(lVar18 + 0xb8) == '\x01')))) {
                  plVar15 = *(longlong **)(lVar22 + 0x20);
                  plVar16 = *(longlong **)(lVar6 + 0x268);
                  if (plVar16 != plVar15) {
                    *(longlong **)(lVar6 + 0x268) = plVar15;
                    if (plVar15 != (longlong *)0x0) {
                      (**(code **)(*plVar15 + 8))();
                    }
                    if (plVar16 != (longlong *)0x0) {
                      (**(code **)(*plVar16 + 0x10))(plVar16);
                    }
                  }
                  *(undefined4 *)(lVar6 + 0x270) = *(undefined4 *)(lVar22 + 0x28);
                  cVar3 = *(char *)(lVar6 + 0x1da);
                  cVar11 = cVar3;
                  if (*(char *)(lVar6 + 0x1d8) == '\x02') {
                    if (cVar3 == '\0') {
                      iVar23 = *(int *)(lVar6 + 700);
                      if ((0 < (longlong)iVar23) && (iVar23 <= *(int *)(lVar18 + 0x110))) {
                        pcVar21 = (char *)(*(longlong *)(lVar18 + 0x108) + (longlong)iVar23 * 200 +
                                          -0x38);
                        goto LAB_140f9cb0d;
                      }
                    }
                  }
                  else if ((*(char *)(lVar6 + 0x1d8) == '\x03') && (cVar3 == '\0')) {
                    pcVar21 = (char *)(lVar18 + 0x1a8);
LAB_140f9cb0d:
                    cVar11 = '\x02';
                    if (*pcVar21 == '\0') {
                      cVar11 = cVar3;
                    }
                  }
LAB_140f9cb21:
                  FUN_140f9d1ee(lVar6 + 0x1d0,lVar22,cVar11);
                }
              }
            }
            else {
              plVar17 = (longlong *)FUN_140e82300();
              plVar15 = (longlong *)*plVar17;
              plVar16 = *(longlong **)(lVar6 + 0x268);
              if (plVar16 != plVar15) {
                *(longlong **)(lVar6 + 0x268) = plVar15;
                if (plVar15 != (longlong *)0x0) {
                  (**(code **)(*plVar15 + 8))();
                }
                if (plVar16 != (longlong *)0x0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16);
                }
              }
              *(int *)(lVar6 + 0x270) = (int)plVar17[1];
            }
          }
        }
        else if (bVar2 == 4) {
          if ((*(int *)(param_1 + 0x2c8) == 1) || (*(char *)(lVar6 + 0x1dd) == '\x01')) {
            cVar11 = *(char *)(lVar6 + 0x2f8);
            if ((cVar11 == '\0') && (*(char *)(lVar6 + 0x2f5) == '\x01')) {
              cVar11 = *(char *)(lVar6 + 0x1da);
              goto LAB_140f9cb21;
            }
          }
          else {
            cVar11 = *(char *)(lVar6 + 0x2f8);
          }
          *(char *)(lVar6 + 0x1de) = cVar11;
        }
        else if (bVar2 == 0) {
          FUN_140f9c06b(*(undefined8 *)(lVar6 + 0x298),*(undefined4 *)(lVar6 + 0x2a0));
          *(undefined4 *)(lVar6 + 0x2a0) = 0;
          if (*(int *)(lVar6 + 0x2a4) != 0) {
            FUN_1457d768e(lVar18);
          }
        }
LAB_140f9c893:
        plVar15 = *(longlong **)(param_1 + 0x10);
        bVar10 = true;
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
          lVar18 = 0;
        }
        else {
          iVar23 = (int)plVar15[1];
          lVar18 = 0;
          do {
            if (iVar23 == 0) {
              plVar15 = (longlong *)0x0;
              goto LAB_140f9c8c3;
            }
            LOCK();
            iVar20 = (int)plVar15[1];
            bVar24 = iVar23 == iVar20;
            if (bVar24) {
              *(int *)(plVar15 + 1) = iVar23 + 1;
              iVar20 = iVar23;
            }
            iVar23 = iVar20;
            UNLOCK();
          } while (!bVar24);
          lVar18 = *(longlong *)(param_1 + 8);
          bVar10 = false;
        }
LAB_140f9c8c3:
        local_88 = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x30,8);
        *local_78 = (longlong)&PTR_FUN_14b9d35a0;
        local_78[1] = param_1;
        local_78[2] = lVar18;
        local_78[3] = (longlong)plVar15;
        if (!bVar10) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        local_78[4] = lVar6;
        local_78[5] = lVar22;
        if (local_78 != (longlong *)&DAT_fffffffffffffff8) {
          local_88 = FUN_1443066c0;
        }
        FUN_1403911de(param_1,&local_88);
        if (!bVar10) {
          LOCK();
          plVar16 = plVar15 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
    }
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  *(uint *)(lVar6 + 0x1b0) = (uint)*(byte *)(lVar6 + 0x1d8);
LAB_140f9c962:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f9d1b4 FUN_140f9d1b4 body=57 status=ok
// SIG undefined FUN_140f9d1b4(void)

void FUN_140f9d1b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbb3848 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbb3848 = FUN_140002ddd(FUN_1465f8ae2,uVar1,L"OakUISkillTooltipDataDef");
  }
  return;
}



// FUNCTION 140f9d1ee FUN_140f9d1ee body=444 status=ok
// SIG undefined FUN_140f9d1ee(void)

void FUN_140f9d1ee(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  void *_Src;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((int)param_3 < 0) || (*(int *)(param_2 + 0x90) <= (int)param_3)) goto LAB_140f9d2f6;
  puVar4 = (undefined8 *)FUN_140f9d3ac(param_1 + 0xd8);
  puVar9 = (undefined8 *)((ulonglong)param_3 * 0x28 + *(longlong *)(param_2 + 0x88));
  if (puVar4 != puVar9) {
    iVar1 = *(int *)(puVar9 + 1);
    _Src = (void *)*puVar9;
    *(int *)(puVar4 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)puVar4 + 0xc) == 0) {
      *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar4,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar4,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  lVar7 = puVar9[3];
  if (lVar7 == 0) {
    uVar5 = FUN_14036a63e();
    lVar7 = FUN_14477b664(uVar5);
    puVar9[3] = lVar7;
  }
  lVar6 = puVar9[4];
  if (((lVar6 == 0) && (lVar6 = 0, lVar7 != 0)) && (puVar9[2] != 0)) {
    plVar2 = *(longlong **)(lVar7 + 0xb8);
    if (plVar2 == (longlong *)0x0) {
LAB_140f9d3a7:
      lVar6 = 0;
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 == '\0') goto LAB_140f9d3a7;
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,puVar9 + 2);
    }
    puVar9[4] = lVar6;
  }
  puVar8 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
    puVar8 = *(undefined4 **)(lVar6 + 8);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_1400b2348(puVar8,&local_38,1);
  if (puVar4 + 2 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (puVar4[2] != 0) {
      FUN_1400020a8();
    }
    puVar4[2] = local_38;
    *(undefined4 *)(puVar4 + 3) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uStack_30._4_4_;
  }
LAB_140f9d2f6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f9d3ac FUN_140f9d3ac body=66 status=ok
// SIG undefined FUN_140f9d3ac(void)

longlong FUN_140f9d3ac(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1457d7810(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_140f9d3ee(lVar2,1);
  return lVar2;
}



// FUNCTION 140f9d3ee FUN_140f9d3ee body=62 status=ok
// SIG undefined FUN_140f9d3ee(void)

void FUN_140f9d3ee(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1400b22c2(param_1,&DAT_149e02088);
    FUN_1400b22c2(param_1 + 0x10,&DAT_149e02088);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 140f9d43a FUN_140f9d43a body=155 status=ok
// SIG undefined FUN_140f9d43a(void)

bool FUN_140f9d43a(longlong param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  param_2 = *(float *)(param_1 + 0x618) - param_2;
  *(float *)(param_1 + 0x618) = param_2;
  if (param_2 <= 0.0) {
    FUN_14127b1cd(*(undefined8 *)(param_1 + 0x5f8),*(undefined4 *)(param_1 + 0x600));
    *(undefined4 *)(param_1 + 0x600) = 0;
    if (*(int *)(param_1 + 0x604) != 0) {
      FUN_1459b6c3c(param_1 + 0x5f8,0);
    }
    plVar2 = *(longlong **)(param_1 + 0x610);
    *(undefined8 *)(param_1 + 0x608) = 0;
    *(undefined8 *)(param_1 + 0x610) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  return 0.0 < param_2;
}



// FUNCTION 140f9d4d6 FUN_140f9d4d6 body=83 status=ok
// SIG undefined FUN_140f9d4d6(void)

void FUN_140f9d4d6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f9d52a FUN_140f9d52a body=1660 status=ok
// SIG undefined FUN_140f9d52a(void)

void FUN_140f9d52a(ulonglong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined *puVar7;
  ulonglong *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined *puVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  ulonglong *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_2;
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0xb9) = 2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar11 = *(int *)(param_1 + 0x2a8);
    *(uint *)(param_1 + 0x2a8) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x2ac) < iVar11 + 1U) {
      FUN_14092ecf6((longlong *)(param_1 + 0x2a0),iVar11);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar11 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar10 = DAT_14cac9ef8;
    iVar11 = DAT_14cac9ed8;
    if ((*(byte *)(param_1 + 0x65) & 0x20) == 0) {
      bVar3 = *(byte *)(param_2 + 0x9c);
    }
    else {
      uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar4 = uVar4 >> 0x10 ^ uVar4;
      if (DAT_14cac9ed8 != DAT_14cac9efc) {
        puVar7 = &DAT_14cac9f00;
        if (DAT_14cac9f08 != (undefined *)0x0) {
          puVar7 = DAT_14cac9f08;
        }
        iVar9 = *(int *)(puVar7 + (ulonglong)(DAT_14cac9f10 - 1U & uVar4) * 4);
        if (iVar9 != -1) {
          puVar7 = &DAT_14cac9d50;
          if (DAT_14cac9ed0 != (undefined *)0x0) {
            puVar7 = DAT_14cac9ed0;
          }
          do {
            puVar13 = puVar7 + (longlong)iVar9 * 0x60;
            if (*(ulonglong *)(puVar7 + (longlong)iVar9 * 0x60) == param_1) {
              if (puVar13 != (undefined *)0x0) goto LAB_140f9d662;
              break;
            }
            iVar9 = *(int *)(puVar13 + 0x58);
          } while (iVar9 != -1);
        }
      }
      if (DAT_14cac9efc == 0) {
        iVar10 = DAT_14cac9ed8 + 1;
        bVar15 = DAT_14cac9edc == DAT_14cac9ed8;
        DAT_14cac9ed8 = iVar10;
        if (bVar15) {
          FUN_1478c8f84(&DAT_14cac9d50,iVar11);
        }
        lVar12 = (longlong)iVar11;
        iVar10 = FUN_14489e6aa(&DAT_14cac9ee0,1);
        puVar7 = DAT_14cac9ee8;
        if (DAT_14cac9ee8 == (undefined *)0x0) {
          puVar7 = &DAT_14cac9ee0;
        }
        iVar9 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar9 = iVar10;
        }
        bVar3 = (byte)iVar10 & 0x1f;
        *(uint *)(puVar7 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(puVar7 + (longlong)(iVar9 >> 5) * 4) &
             (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      }
      else {
        puVar7 = &DAT_14cac9d50;
        if (DAT_14cac9ed0 != (undefined *)0x0) {
          puVar7 = DAT_14cac9ed0;
        }
        lVar12 = (longlong)DAT_14cac9ef8;
        DAT_14cac9ef8 = *(int *)(puVar7 + lVar12 * 0x60 + 4);
        DAT_14cac9efc = DAT_14cac9efc + -1;
        iVar11 = iVar10;
        if (DAT_14cac9efc != 0) {
          *(undefined4 *)(puVar7 + (longlong)DAT_14cac9ef8 * 0x60) = 0xffffffff;
        }
      }
      puVar7 = &DAT_14cac9ee0;
      if (DAT_14cac9ee8 != (undefined *)0x0) {
        puVar7 = DAT_14cac9ee8;
      }
      iVar10 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar10 = iVar11;
      }
      *(uint *)(puVar7 + (longlong)(iVar10 >> 5) * 4) =
           *(uint *)(puVar7 + (longlong)(iVar10 >> 5) * 4) | 1 << ((byte)iVar11 & 0x1f);
      puVar7 = DAT_14cac9ed0;
      if (DAT_14cac9ed0 == (undefined *)0x0) {
        puVar7 = &DAT_14cac9d50;
      }
      plVar14 = (longlong *)(puVar7 + lVar12 * 0x60);
      local_78 = 0;
      uStack_60 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      puStack_90 = (ulonglong *)0x0;
      uStack_70 = 0x8000000000;
      local_68 = 0xffffffff;
      puVar8 = (ulonglong *)(puVar7 + lVar12 * 0x60);
      *puVar8 = param_1;
      puVar8[5] = 0;
      *(undefined4 *)(puVar8 + 6) = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      *(undefined8 *)((longlong)puVar8 + 0x34) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
      if (puVar8 + 1 != &local_98) {
        *(undefined4 *)(plVar14 + 3) = 0;
        *(undefined4 *)((longlong)plVar14 + 0x1c) = 0;
        *(undefined4 *)(plVar14 + 4) = 0;
        *(undefined4 *)((longlong)plVar14 + 0x24) = 0;
        uStack_70 = 0;
      }
      *(undefined4 *)(plVar14 + 8) = 0;
      plVar14[9] = 0;
      local_58 = 0;
      *(undefined4 *)(plVar14 + 10) = 0;
      uStack_50 = 0;
      FUN_140f9dba8();
      *(undefined4 *)(plVar14 + 0xb) = 0xffffffff;
      uVar5 = DAT_14cac9ed8 - DAT_14cac9efc;
      if ((uVar5 != 1) && (DAT_14cac9ed8 != DAT_14cac9efc)) {
        puVar7 = &DAT_14cac9f00;
        if (DAT_14cac9f08 != (undefined *)0x0) {
          puVar7 = DAT_14cac9f08;
        }
        iVar10 = *(int *)(puVar7 + (ulonglong)(DAT_14cac9f10 - 1U & uVar4) * 4);
        if (iVar10 != -1) {
          puVar7 = DAT_14cac9ed0;
          if (DAT_14cac9ed0 == (undefined *)0x0) {
            puVar7 = &DAT_14cac9d50;
          }
          do {
            puVar13 = puVar7 + (longlong)iVar10 * 0x60;
            if (*(longlong *)(puVar7 + (longlong)iVar10 * 0x60) == *plVar14) {
              *(undefined4 *)(puVar13 + 0x50) = 0;
              if (*(longlong *)(puVar13 + 0x48) != 0) {
                FUN_1400020a8();
              }
              FUN_140f9dba8(puVar13 + 8);
              memmove(puVar13,plVar14,0x58);
              FUN_1433c19a2(iVar11);
              goto LAB_140f9da33;
            }
            iVar10 = *(int *)(puVar13 + 0x58);
          } while (iVar10 != -1);
        }
      }
      uVar6 = (ulonglong)(((uVar5 >> 1) - 1) + (uint)(uVar5 >> 1 == 0)) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar12 & 0x1f);
      if (lVar12 == 0) {
        iVar10 = 2;
      }
      if (uVar5 < 4) {
        iVar10 = 2;
      }
      if (((int)uVar5 < 1) || (iVar10 <= DAT_14cac9f10)) {
        uVar4 = DAT_14cac9f10 - 1U & uVar4;
        *(uint *)((longlong)plVar14 + 0x5c) = uVar4;
        puVar7 = DAT_14cac9f08;
        if (DAT_14cac9f08 == (undefined *)0x0) {
          puVar7 = &DAT_14cac9f00;
        }
        *(undefined4 *)(plVar14 + 0xb) =
             *(undefined4 *)(puVar7 + ((longlong)DAT_14cac9f10 - 1U & (longlong)(int)uVar4) * 4);
        puVar7 = DAT_14cac9f08;
        if (DAT_14cac9f08 == (undefined *)0x0) {
          puVar7 = &DAT_14cac9f00;
        }
        *(int *)(puVar7 + ((longlong)DAT_14cac9f10 - 1U & (longlong)(int)uVar4) * 4) = iVar11;
      }
      else {
        DAT_14cac9f10 = iVar10;
        FUN_1457d893c();
      }
LAB_140f9da33:
      puVar13 = &DAT_14cac9d50;
      if (DAT_14cac9ed0 != (undefined *)0x0) {
        puVar13 = DAT_14cac9ed0;
      }
      puVar13 = puVar13 + (longlong)iVar11 * 0x60;
LAB_140f9d662:
      plVar14 = (longlong *)(puVar13 + 8);
      uVar6 = FUN_144938c96(param_2);
      uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      uVar4 = uVar4 >> 0x10 ^ uVar4;
      if (*(int *)(puVar13 + 0x10) != *(int *)(puVar13 + 0x3c)) {
        puVar7 = puVar13 + 0x40;
        if (*(undefined **)(puVar13 + 0x48) != (undefined *)0x0) {
          puVar7 = *(undefined **)(puVar13 + 0x48);
        }
        iVar11 = *(int *)(puVar7 + (ulonglong)(*(int *)(puVar13 + 0x50) - 1U & uVar4) * 4);
        if (iVar11 != -1) {
          do {
            puVar8 = (ulonglong *)(*plVar14 + (longlong)iVar11 * 0x18);
            if (*puVar8 == uVar6) {
              if (puVar8 != (ulonglong *)0x0) goto LAB_140f9d7af;
              break;
            }
            iVar11 = (int)puVar8[2];
          } while (iVar11 != -1);
        }
      }
      FUN_140f9dcf2(plVar14,&local_98);
      puVar8 = puStack_90;
      *puStack_90 = uVar6;
      *(undefined4 *)(puStack_90 + 1) = 0;
      *(undefined4 *)(puStack_90 + 2) = 0xffffffff;
      iVar11 = (int)local_98;
      lVar12 = (longlong)(int)local_98;
      local_a8 = 0;
      cVar2 = FUN_140f9dc5a(plVar14,uVar4,puStack_90,&local_98);
      if (cVar2 == '\0') {
        uVar5 = *(int *)(puVar13 + 0x10) - *(int *)(puVar13 + 0x3c);
        iVar10 = 1;
        if (3 < uVar5) {
          uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
          lVar1 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar1 == 0; lVar1 = lVar1 + -1) {
            }
          }
          iVar10 = 1 << ((byte)lVar1 & 0x1f);
        }
        if (((int)uVar5 < 1) || (iVar10 <= *(int *)(puVar13 + 0x50))) {
          uVar4 = *(int *)(puVar13 + 0x50) - 1U & uVar4;
          *(uint *)((longlong)puVar8 + 0x14) = uVar4;
          puVar7 = *(undefined **)(puVar13 + 0x48);
          if (*(undefined **)(puVar13 + 0x48) == (undefined *)0x0) {
            puVar7 = puVar13 + 0x40;
          }
          *(undefined4 *)(puVar8 + 2) =
               *(undefined4 *)
                (puVar7 + ((longlong)*(int *)(puVar13 + 0x50) - 1U & (longlong)(int)uVar4) * 4);
          puVar7 = *(undefined **)(puVar13 + 0x48);
          if (*(undefined **)(puVar13 + 0x48) == (undefined *)0x0) {
            puVar7 = puVar13 + 0x40;
          }
          *(int *)(puVar7 + ((longlong)*(int *)(puVar13 + 0x50) - 1U & (longlong)(int)uVar4) * 4) =
               iVar11;
        }
        else {
          *(int *)(puVar13 + 0x50) = iVar10;
          FUN_140f9dece(plVar14);
        }
      }
      puVar8 = (ulonglong *)(*plVar14 + lVar12 * 0x18);
LAB_140f9d7af:
      iVar11 = (int)puVar8[1];
      *(int *)(param_2 + 0x94) = iVar11;
      *(int *)(puVar8 + 1) = iVar11 + 1;
      bVar3 = *(byte *)(param_2 + 0x9c) | 0x20;
      *(byte *)(param_2 + 0x9c) = bVar3;
    }
    if ((char)bVar3 < '\0') {
      FUN_14010efee(param_1 + 0x230,&local_a0);
      FUN_14010f056(param_1,local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f9dba8 FUN_140f9dba8 body=55 status=ok
// SIG undefined FUN_140f9dba8(void)

void FUN_140f9dba8(longlong *param_1)

{
  FUN_140f9dbe0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f9dbe0 FUN_140f9dbe0 body=121 status=ok
// SIG undefined FUN_140f9dbe0(void)

void FUN_140f9dbe0(longlong param_1,int param_2)

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



// FUNCTION 140f9dc5a FUN_140f9dc5a body=152 status=ok
// SIG undefined FUN_140f9dc5a(void)

void FUN_140f9dc5a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
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
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1478c9014((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_140f9dcc3;
    }
  }
  uVar5 = 0;
LAB_140f9dcc3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140f9dcf2 FUN_140f9dcf2 body=476 status=ok
// SIG undefined FUN_140f9dcf2(void)

int * FUN_140f9dcf2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
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
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
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
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 140f9dece FUN_140f9dece body=679 status=ok
// SIG undefined FUN_140f9dece(void)

void FUN_140f9dece(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_140f9df32;
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
LAB_140f9df32:
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
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
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



// FUNCTION 140f9e176 FUN_140f9e176 body=38 status=ok
// SIG undefined FUN_140f9e176(void)

void FUN_140f9e176(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x20))();
  FUN_140f9e19c(uVar1,param_2,param_3);
  return;
}



// FUNCTION 140f9e19c FUN_140f9e19c body=128 status=ok
// SIG undefined FUN_140f9e19c(void)

void FUN_140f9e19c(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar5 + *(int *)(param_1 + 0x38);
    do {
      lVar2 = *plVar5;
      if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x78) != 0)) {
        plVar4 = *(longlong **)(lVar2 + 0x70);
        lVar3 = (longlong)*(int *)(lVar2 + 0x78) * 0x28;
        do {
          if ((longlong *)*plVar4 == (longlong *)0x0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *(longlong *)*plVar4;
          }
          if (lVar6 == param_2) {
            if (plVar4 != (longlong *)0x0) {
              FUN_1409d1d6a(lVar2,plVar4,param_3);
            }
            break;
          }
          plVar4 = plVar4 + 5;
          lVar3 = lVar3 + -0x28;
        } while (lVar3 != 0);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 140f9e21c FUN_140f9e21c body=40 status=ok
// SIG undefined FUN_140f9e21c(void)

undefined8 FUN_140f9e21c(undefined8 param_1,int param_2)

{
  FUN_140f9e244();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f9e244 FUN_140f9e244 body=175 status=ok
// SIG undefined FUN_140f9e244(void)

void FUN_140f9e244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a55d570;
  param_1[5] = &PTR_FUN_14a55d810;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_144727cd0(param_1 + 7,0);
  }
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 100)) {
    *(undefined4 *)((longlong)param_1 + 100) = 0x80;
    FUN_1446efbd8(param_1 + 9,0);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140f9e2f4 FUN_140f9e2f4 body=297 status=ok
// SIG undefined FUN_140f9e2f4(void)

undefined8 FUN_140f9e2f4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140f9e416;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f9e416;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140f9e416:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f9e3c1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140f9e3c1;
    }
  }
  uVar6 = 0;
LAB_140f9e3c1:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f9e41e FUN_140f9e41e body=41 status=ok
// SIG undefined FUN_140f9e41e(void)

void FUN_140f9e41e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140f9e448(param_1 + 0x48,param_3);
  *(bool *)(param_1 + 0x70) = 0 < *(int *)(param_1 + 0x50);
  FUN_140f9e5f0(param_1);
  return;
}



// FUNCTION 140f9e448 FUN_140f9e448 body=89 status=ok
// SIG undefined FUN_140f9e448(void)

undefined8 * FUN_140f9e448(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f9e4a2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x48);
      }
    }
  }
  return param_1;
}



// FUNCTION 140f9e4a2 FUN_140f9e4a2 body=333 status=ok
// SIG undefined FUN_140f9e4a2(void)

void FUN_140f9e4a2(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x48;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f9e514;
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
LAB_140f9e514:
    iVar5 = (int)(uVar4 / 0x48);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x48,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f9e5f0 FUN_140f9e5f0 body=1948 status=ok
// SIG undefined FUN_140f9e5f0(void)

void FUN_140f9e5f0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  char cVar16;
  int iVar17;
  longlong lVar18;
  double *pdVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined1 uVar24;
  longlong lVar25;
  PSRWLOCK SRWLock;
  int iVar26;
  uint *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  bool bVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  float fVar36;
  undefined1 auStack_1d8 [32];
  undefined2 *local_1b8;
  char local_1ad;
  int local_1ac;
  double local_1a8;
  undefined8 local_1a0;
  longlong *local_198;
  longlong *local_190;
  PSRWLOCK local_188;
  undefined8 *local_180;
  int local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined2 local_150 [2];
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  byte local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_1449027d0(param_1,&local_148);
  uVar29 = *(ulonglong *)(local_148 + 0x50);
  SRWLock = (PSRWLOCK)(uVar29 + 0x200);
  AcquireSRWLockExclusive(SRWLock);
  *(int *)(uVar29 + 0x1f8) = *(int *)(uVar29 + 0x1f8) + 1;
  plVar22 = (longlong *)CONCAT44(uStack_13c,local_140);
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar22 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar2 = (int *)((longlong)plVar22 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
  }
  FUN_140f9ed8d(*(undefined8 *)(uVar29 + 0x48),*(undefined4 *)(uVar29 + 0x50));
  *(undefined4 *)(uVar29 + 0x50) = 0;
  if (*(int *)(uVar29 + 0x54) != 0) {
    FUN_140f9edf6((longlong *)(uVar29 + 0x48),0);
  }
  *(int *)(uVar29 + 0x58) = *(int *)(uVar29 + 0x58) + 1;
  local_198 = (longlong *)(uVar29 + 0x48);
  FUN_140f9ed8d(*(undefined8 *)(uVar29 + 0x60));
  *(undefined4 *)(uVar29 + 0x68) = 0;
  if (*(int *)(uVar29 + 0x6c) != 0) {
    FUN_140f9edf6((longlong *)(uVar29 + 0x60));
  }
  *(int *)(uVar29 + 0x70) = *(int *)(uVar29 + 0x70) + 1;
  local_190 = (longlong *)(uVar29 + 0x60);
  lVar18 = FUN_1400d7050(param_1 + 0x30);
  if ((lVar18 != 0) && (*(longlong *)(lVar18 + 0x3d0) != 0)) {
    lVar23 = *(longlong *)(*(longlong *)(lVar18 + 0x3d0) + 0x1c8);
    if (lVar23 == 0) {
      pdVar19 = (double *)&DAT_14c8464e0;
      local_1a8 = DAT_14c8464f0;
    }
    else {
      local_1a8 = *(double *)(lVar23 + 0x270);
      pdVar19 = (double *)(lVar23 + 0x260);
    }
    if (0 < *(int *)(param_1 + 0x50)) {
      dVar14 = *pdVar19;
      dVar15 = pdVar19[1];
      lVar28 = 0;
      lVar23 = 0;
      local_188 = SRWLock;
      do {
        fVar36 = 1.0;
        lVar25 = *(longlong *)(param_1 + 0x48);
        puVar27 = (uint *)(lVar28 + 8 + lVar25);
        cVar16 = FUN_14079e1ea(puVar27);
        if (cVar16 == '\0') {
          local_168 = (undefined4)DAT_14c846320;
          uStack_164 = DAT_14c846320._4_4_;
          uStack_160 = (undefined4)DAT_14c846328;
          uStack_15c = DAT_14c846328._4_4_;
          local_1a0 = *(undefined8 *)(lVar25 + lVar28);
          lVar20 = FUN_1402735c8();
          uVar5 = *(undefined8 *)(lVar20 + 0x698);
          uVar6 = *(undefined8 *)(lVar20 + 0x6a0);
          uVar7 = *(undefined8 *)(lVar20 + 0x6a8);
          local_1ad = *(char *)(lVar25 + 0x18 + lVar28);
          iVar17 = *(int *)(lVar25 + 0xc + lVar28);
          if ((iVar17 == 0) || (uVar8 = *puVar27, (int)uVar8 < 0)) {
LAB_140f9ecb8:
            lVar20 = 0;
          }
          else {
            lVar20 = 0;
            if ((int)uVar8 < DAT_14c9647dc) {
              plVar22 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if (((plVar22 == (longlong *)0x0) || ((int)plVar22[2] != iVar17)) ||
                 ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) goto LAB_140f9ecb8;
              lVar20 = *plVar22;
            }
          }
          lVar20 = *(longlong *)(lVar20 + 0x1c8);
          if (lVar20 == 0) {
            pdVar19 = (double *)&DAT_14c8464e0;
            uVar34 = SUB84(DAT_14c8464f0,0);
            uVar35 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar34 = (undefined4)*(undefined8 *)(lVar20 + 0x270);
            uVar35 = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x270) >> 0x20);
            pdVar19 = (double *)(lVar20 + 0x260);
          }
          dVar11 = (double)CONCAT44(uVar35,uVar34) + *(double *)(lVar25 + 0x38 + lVar28);
          dVar13 = pdVar19[1] + *(double *)(lVar25 + 0x30 + lVar28);
          dVar12 = *pdVar19 + *(double *)(lVar25 + 0x28 + lVar28);
          if (local_1ad == '\0') {
            dVar9 = dVar12 - dVar14;
            dVar33 = dVar13 - dVar15;
            dVar10 = dVar11 - local_1a8;
            fVar31 = (float)SQRT(dVar10 * dVar10 + dVar33 * dVar33 + dVar9 * dVar9);
            fVar32 = *(float *)(lVar25 + 0x10 + lVar28) - *(float *)(lVar25 + 0x14 + lVar28);
            fVar36 = 0.0;
            if (0.0 <= fVar32) {
              fVar36 = fVar32;
            }
            fVar36 = 1.0 - (float)(-(uint)(0.0 < fVar36) & (uint)((fVar31 - fVar36) / fVar36) |
                                  ~-(uint)(0.0 < fVar36) & (uint)fVar31);
            if (1.0 <= fVar36) {
              fVar36 = 1.0;
            }
            if (fVar36 <= 0.0) {
              fVar36 = 0.0;
            }
          }
          uVar29 = uVar29 & 0xffffff0000000000;
          lVar20 = *(longlong *)(lVar25 + 0x1c + lVar28);
          if (lVar20 == DAT_14cbd63f8) {
            uVar24 = 5;
            plVar22 = local_198;
            if (*(char *)(lVar25 + 0x41 + lVar28) == '\x01') {
              local_170 = 0;
              uVar21 = FUN_1401b4c98(lVar18);
              local_180 = (undefined8 *)0x0;
              local_178 = 0;
              FUN_1446efa72(&local_180,0,3,0x10);
              puVar4 = local_180;
              local_178 = 3;
              *local_180 = &PTR_LAB_14a1c8830;
              LOCK();
              UNLOCK();
              lVar20 = DAT_14c758608 + 1;
              lVar25 = DAT_14c758608 + 1;
              if (lVar20 == 0) {
                LOCK();
                UNLOCK();
                lVar20 = DAT_14c758608 + 2;
                lVar25 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar25;
              local_180[2] = lVar20;
              *local_180 = &PTR_FUN_14b9ad040;
              local_180[3] = 0;
              if (param_1 == 0) {
                iVar17 = 0;
              }
              else {
                uVar8 = *(uint *)(param_1 + 0xc);
                *(uint *)(local_180 + 3) = uVar8;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar25 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar25 = 0;
                }
                iVar17 = *(int *)(lVar25 + 0x10);
                if (*(int *)(lVar25 + 0x10) == 0) {
                  LOCK();
                  iVar17 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar26 = DAT_14c964868 + 1;
                  bVar30 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar17;
                  if (bVar30) {
                    local_1ac = iVar26;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar26);
                    iVar26 = local_1ac;
                  }
                  LOCK();
                  iVar17 = *(int *)(lVar25 + 0x10);
                  bVar30 = iVar17 == 0;
                  if (bVar30) {
                    *(int *)(lVar25 + 0x10) = iVar26;
                    iVar17 = 0;
                  }
                  UNLOCK();
                  if (bVar30) {
                    iVar17 = iVar26;
                  }
                }
              }
              *(int *)((longlong)puVar4 + 0x1c) = iVar17;
              puVar4[4] = local_1a0;
              puVar4[5] = param_1;
              local_148 = 0;
              local_140 = 0;
              FUN_14487d8d8(&local_148,&local_180);
              local_108 = 1;
              local_150[0] = 0;
              local_14c = 0xbf800000;
              local_1b8 = local_150;
              FUN_1406f4044(uVar21,&local_170,&local_148,0x3f000000);
              (*(code *)(&PTR_LAB_14a1c87a0)[local_108])(&local_148);
              if (local_178 == 0) {
LAB_140f9eaa2:
                if (local_180 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
              else if (local_180 != (undefined8 *)0x0) {
                (**(code **)*local_180)(local_180,0);
                FUN_1446efa72(&local_180,0,0,0x10);
                local_178 = 0;
                goto LAB_140f9eaa2;
              }
              uVar24 = 0;
              plVar22 = local_198;
            }
LAB_140f9eab7:
            iVar17 = (int)plVar22[1];
            *(uint *)(plVar22 + 1) = iVar17 + 1U;
            if (*(uint *)((longlong)plVar22 + 0xc) < iVar17 + 1U) {
              FUN_140f9ee6a(plVar22,iVar17);
            }
            lVar25 = *plVar22;
            lVar20 = (longlong)iVar17 * 0xb8;
            *(undefined8 *)(lVar25 + lVar20) = local_1a0;
            *(undefined8 *)(lVar25 + 8 + lVar20) = 0;
            *(undefined1 *)(lVar25 + 0x10 + lVar20) = uVar24;
            uVar34 = (undefined4)local_148;
            *(undefined4 *)(lVar25 + 0x11 + lVar20) = uVar34;
            *(undefined4 *)(lVar25 + 0x14 + lVar20) = local_148._3_4_;
            *(double *)(lVar25 + 0x18 + lVar20) = dVar12;
            *(double *)(lVar25 + 0x20 + lVar20) = dVar13;
            *(double *)(lVar25 + 0x28 + lVar20) = dVar11;
            puVar3 = (undefined4 *)(lVar25 + 0x30 + lVar20);
            *puVar3 = local_168;
            puVar3[1] = uStack_164;
            puVar3[2] = uStack_160;
            puVar3[3] = uStack_15c;
            *(undefined8 *)(lVar25 + 0x40 + lVar20) = uVar5;
            *(undefined8 *)(lVar25 + 0x48 + lVar20) = uVar6;
            *(undefined8 *)(lVar25 + 0x50 + lVar20) = uVar7;
            *(float *)(lVar25 + 0x58 + lVar20) = fVar36;
            puVar4 = (undefined8 *)(lVar25 + 0x60 + lVar20);
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4 = (undefined8 *)(lVar25 + 0x70 + lVar20);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(char *)(lVar25 + 0x80 + lVar20) = local_1ad;
            *(undefined4 *)(lVar25 + 0x81 + lVar20) = 0x1010000;
            *(undefined2 *)(lVar25 + 0x85 + lVar20) = 0;
            puVar4 = (undefined8 *)(lVar25 + 0x88 + lVar20);
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4 = (undefined8 *)(lVar25 + 0x98 + lVar20);
            *puVar4 = 0;
            puVar4[1] = 0;
            *(ulonglong *)(lVar25 + 0xa8 + lVar20) = uVar29;
            *(undefined4 *)(lVar25 + 0xb0 + lVar20) = 0x3f800000;
            if (iVar17 != -1) {
              *(int *)(plVar22 + 2) = (int)plVar22[2] + 1;
            }
          }
          else {
            uVar24 = 6;
            plVar22 = local_190;
            if (lVar20 == DAT_14cbd6400) goto LAB_140f9eab7;
          }
        }
        lVar23 = lVar23 + 1;
        lVar28 = lVar28 + 0x48;
        SRWLock = local_188;
      } while (lVar23 < *(int *)(param_1 + 0x50));
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
  if ((local_f0 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f9ed8d FUN_140f9ed8d body=105 status=ok
// SIG undefined FUN_140f9ed8d(void)

void FUN_140f9ed8d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x98);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-7] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x17;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f9edf6 FUN_140f9edf6 body=115 status=ok
// SIG undefined FUN_140f9edf6(void)

void FUN_140f9edf6(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb8,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xb8)) {
      uVar2 = uVar1 / 0xb8 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xb8,8);
  }
  return;
}



// FUNCTION 140f9ee6a FUN_140f9ee6a body=372 status=ok
// SIG undefined FUN_140f9ee6a(void)

void FUN_140f9ee6a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xb8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f9eef2;
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
LAB_140f9eef2:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xb8)) {
    uVar7 = uVar5 / 0xb8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xb8,8);
  return;
}



// FUNCTION 140f9f06f FUN_140f9f06f body=49 status=ok
// SIG undefined FUN_140f9f06f(void)

longlong FUN_140f9f06f(void)

{
  if (DAT_14cb9c130 == 0) {
    FUN_140f50038(&DAT_14cb9c130,&PTR_s__Script_GbxUIUMG_14b563950);
  }
  return DAT_14cb9c130;
}



// FUNCTION 140f9f0a0 FUN_140f9f0a0 body=49 status=ok
// SIG undefined FUN_140f9f0a0(void)

longlong FUN_140f9f0a0(void)

{
  if (DAT_14cc30740 == 0) {
    FUN_140f50038(&DAT_14cc30740,&PTR_s__Script_DatasmithContent_14bed9ca8);
  }
  return DAT_14cc30740;
}



// FUNCTION 140f9f0d8 FUN_140f9f0d8 body=57 status=ok
// SIG undefined FUN_140f9f0d8(void)

void FUN_140f9f0d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21640 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21640 = FUN_140002ddd(FUN_146433b35,uVar1,L"GbxBrainAspect_Loop");
  }
  return;
}



// FUNCTION 140f9f112 FUN_140f9f112 body=262 status=ok
// SIG undefined FUN_140f9f112(void)

void FUN_140f9f112(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar3;
      }
      uVar4 = (ulonglong)uVar2;
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1449bcc2e(param_1 + 8,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) =
       (ulonglong)uVar6 | uVar4 << 0x20;
  if ((*(int *)(param_1 + 0x10) != 0) && (DAT_14c761230 <= *(int *)(param_1 + 0x10))) {
    FUN_140f9f218(param_1,param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140f9f218 FUN_140f9f218 body=88 status=ok
// SIG undefined FUN_140f9f218(void)

void FUN_140f9f218(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1404936e2((longlong *)(param_1 + 0x18),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return;
}



// FUNCTION 140f9f270 FUN_140f9f270 body=34 status=ok
// SIG undefined FUN_140f9f270(void)

void FUN_140f9f270(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_140f9f2a8(param_2);
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140f9f28f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar1[1],uVar2,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 140f9f2a8 FUN_140f9f2a8 body=366 status=ok
// SIG undefined FUN_140f9f2a8(void)

undefined8 FUN_140f9f2a8(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [76];
  undefined8 local_7c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = FUN_140f9f418();
  lVar4 = *(longlong *)(param_1 + 8);
  if ((longlong)*(int *)(lVar4 + 0x10) == 0) {
    iVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 8);
    lVar8 = (longlong)*(int *)(lVar4 + 0x10) << 5;
    lVar4 = 0;
    do {
      if ((lVar3 != 0) && (lVar2 = *(longlong *)(lVar5 + 8), lVar2 != 0)) {
        iVar6 = *(int *)(lVar3 + 0x38);
        iVar1 = *(int *)(lVar2 + 0x38);
        if ((iVar6 <= iVar1) &&
           (lVar7 = lVar5,
           *(longlong **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) ==
           (longlong *)(lVar3 + 0x30))) break;
        if ((iVar1 <= iVar6) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
          memset(local_c8,0,0x90);
          local_7c = 0xffffffff00000080;
          local_58 = 0;
          uStack_50 = 0;
          uStack_4c = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          FUN_1470b0ad4(lVar5,local_c8,lVar3);
          FUN_1488d1368(lVar5,local_c8);
          FUN_1458c8138(local_c8);
          lVar4 = lVar5;
        }
      }
      lVar5 = lVar5 + 0x20;
      lVar8 = lVar8 + -0x20;
      lVar7 = lVar4;
    } while (lVar8 != 0);
    if (lVar7 != 0) goto LAB_140f9f32d;
    lVar4 = *(longlong *)(param_1 + 8);
    iVar6 = *(int *)(lVar4 + 0x10);
  }
  *(uint *)(lVar4 + 0x10) = iVar6 + 1U;
  if (*(uint *)(lVar4 + 0x14) < iVar6 + 1U) {
    FUN_1457d8b76((longlong *)(lVar4 + 8),iVar6);
  }
  lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(lVar4 + 8);
  FUN_1457d8b58(lVar7);
  FUN_1457d8ca4(lVar7);
LAB_140f9f32d:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined8 *)(lVar7 + 0x10);
}



// FUNCTION 140f9f418 FUN_140f9f418 body=57 status=ok
// SIG undefined FUN_140f9f418(void)

void FUN_140f9f418(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a6c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a6c8 = FUN_140002ddd(FUN_146526c94,uVar1,L"GbxAnalyticsPlayerTransactions");
  }
  return;
}



// FUNCTION 140f9f452 FUN_140f9f452 body=272 status=ok
// SIG undefined FUN_140f9f452(void)

void FUN_140f9f452(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uVar4 = 0;
  if (*(int *)(param_2 + 0x78) < 1) {
    iVar1 = 0;
  }
  else {
    QueryPerformanceCounter(&local_30);
    iVar1 = 0;
    uVar4 = 0;
    if ((double)local_30.QuadPart * DAT_14c83f420 + 16777216.0 <= *(double *)(param_2 + 0x70)) {
      *(byte *)(param_2 + 0x7c) = *(byte *)(param_2 + 0x7c) | 2;
      uVar4 = *(undefined4 *)(param_2 + 0x78);
      iVar1 = *(int *)(param_2 + 0x88);
      if (local_38 == 0) {
        local_38 = *(longlong *)(param_2 + 0x80);
      }
    }
  }
  if ((0 < **(longlong **)(param_1 + 8)) || (iVar1 == 2)) {
    puVar2 = (undefined4 *)FUN_1457d8c4c(param_2);
    FUN_1447325ac(*(undefined8 *)(param_1 + 0x10),&local_30,1);
    ((LARGE_INTEGER *)(puVar2 + 1))->QuadPart = (LONGLONG)local_30;
    *(undefined8 *)(puVar2 + 4) = **(undefined8 **)(param_1 + 8);
    *(undefined8 *)(puVar2 + 6) = **(undefined8 **)(param_1 + 0x18);
    plVar3 = &local_38;
    if (**(longlong **)(param_1 + 0x20) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x20);
    }
    *(longlong *)(puVar2 + 8) = *plVar3;
    *puVar2 = uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f9f564 FUN_140f9f564 body=1147 status=ok
// SIG undefined FUN_140f9f564(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f9f564(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  _struct_19 *p_Var6;
  longlong lVar7;
  longlong *plVar8;
  LARGE_INTEGER LVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [32];
  longlong local_78;
  LARGE_INTEGER local_70;
  int local_68;
  LARGE_INTEGER local_60;
  int local_58;
  _struct_19 local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uVar10 = 0;
  if (*(int *)(param_2 + 0x78) < 1) {
    iVar13 = 0;
  }
  else {
    QueryPerformanceCounter(&local_60);
    iVar13 = 0;
    uVar10 = 0;
    if ((double)local_60.QuadPart * DAT_14c83f420 + 16777216.0 <= *(double *)(param_2 + 0x70)) {
      *(byte *)(param_2 + 0x7c) = *(byte *)(param_2 + 0x7c) | 1;
      uVar10 = *(undefined4 *)(param_2 + 0x78);
      iVar13 = *(int *)(param_2 + 0x88);
      if (local_78 == 0) {
        local_78 = *(longlong *)(param_2 + 0x80);
      }
    }
  }
  lVar7 = **(longlong **)(param_1 + 8);
  if (lVar7 != 0) {
    lVar1 = FUN_14087dee0();
    lVar2 = FUN_14001d26e(lVar7);
    if (((*(byte *)(lVar7 + 0x368) & 0x10) == 0 || iVar13 == 1) ||
       (((lVar1 != 0 && (DAT_14c76398c != 0)) && (*(int *)(lVar1 + 0x140) < DAT_14c76398c)))) {
      if (iVar13 != 2) {
        if (iVar13 == 1) {
          iVar13 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110);
          if (lVar1 == 0) {
            LVar9 = DAT_14cb84178;
            if ((iVar13 < DAT_14cb84180) &&
               (FUN_144b3d300(&DAT_14cb84180), LVar9 = DAT_14cb84178, DAT_14cb84180 == -1)) {
              FUN_1446ddc76(&DAT_14cb84178,"As_Trash",1);
              _Init_thread_footer(&DAT_14cb84180);
              LVar9 = DAT_14cb84178;
            }
          }
          else {
            if ((iVar13 < DAT_14cb84170) && (FUN_144b3d300(&DAT_14cb84170), DAT_14cb84170 == -1)) {
              _DAT_14cb84140 = 0;
              _DAT_14cb84148 = 0;
              _DAT_14cb84120 = 0;
              uRam000000014cb84128 = 0;
              _DAT_14cb8414c = 0xffffffff00000080;
              _DAT_14cb84154 = 0;
              DAT_14cb84160 = 0;
              _DAT_14cb84168 = 0;
              atexit(FUN_143dae9bc);
              _Init_thread_footer(&DAT_14cb84170);
            }
            FUN_144a79b68(local_48,lVar1);
            uVar12 = local_48._0_4_ & 0xffff;
            p_Var6 = (_struct_19 *)
                     FUN_140a3272e(&DAT_14cb84120,
                                   (local_48._0_4_ << 0x10 | uVar12) + local_48._4_4_ +
                                   (local_48._2_4_ << 0x13 | local_48._2_4_ & 0xffff) +
                                   (uVar12 >> 4),local_48);
            LVar9.s = *p_Var6;
            if ((undefined2 *)LVar9.QuadPart == (undefined2 *)0x0) {
              FUN_1400021e4(local_48,&local_70);
              LVar9.QuadPart = (LONGLONG)&DAT_149dfb77a;
              if (local_68 != 0) {
                LVar9 = local_70;
              }
              FUN_140002266(&local_60,L"%s_As_Trash",LVar9.QuadPart);
              LVar9.QuadPart = (LONGLONG)&DAT_149dfb77a;
              if (local_58 != 0) {
                LVar9 = local_60;
              }
              FUN_1446f470e(&local_50,LVar9.QuadPart,1);
              *p_Var6 = local_50;
              if ((undefined2 *)local_60.QuadPart != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if ((undefined2 *)local_70.QuadPart != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              LVar9.s = *p_Var6;
            }
          }
        }
        else {
          if (lVar2 != 0) {
            lVar7 = lVar2;
          }
          puVar4 = &DAT_14c9485f0;
          if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
            puVar4 = *(undefined4 **)(lVar7 + 8);
          }
          if (DAT_14c947fe0 == 0) {
            lVar7 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar7);
            DAT_14c947fe0 = lVar7;
          }
          FUN_140045924(DAT_14c947fe0,&local_70,puVar4,1);
          LVar9 = local_70;
        }
        uVar12 = (uint)((ulonglong)LVar9 >> 0x10);
        uVar11 = LVar9.s.LowPart & 0xffff;
        local_60 = LVar9;
        piVar3 = (int *)FUN_140dfb35a(param_2 + 0x20,
                                      (LVar9.s.LowPart << 0x10 | uVar11) + LVar9.s.HighPart +
                                      (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar11 >> 4),&local_60);
        *piVar3 = *piVar3 + 1;
      }
    }
    else {
      puVar4 = (undefined4 *)FUN_1457d8bfa(param_2 + 0x10);
      if (**(longlong **)(param_1 + 8) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_140a2d0dc();
      }
      FUN_144a79b68(&local_60,uVar5);
      *(LARGE_INTEGER *)(puVar4 + 1) = local_60;
      FUN_144a79b68(&local_60,lVar7);
      *(LARGE_INTEGER *)(puVar4 + 3) = local_60;
      FUN_144a79b68(&local_60,lVar2);
      *(LARGE_INTEGER *)(puVar4 + 5) = local_60;
      FUN_144a79b68(&local_60,lVar1);
      *(LARGE_INTEGER *)(puVar4 + 7) = local_60;
      FUN_144a79b68(&local_60,*(undefined8 *)(*(longlong *)(param_1 + 8) + 8));
      *(LARGE_INTEGER *)(puVar4 + 9) = local_60;
      plVar8 = &local_78;
      if (**(longlong **)(param_1 + 0x10) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x10);
      }
      *(longlong *)(puVar4 + 0xb) = *plVar8;
      *puVar4 = uVar10;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f9f9e8 FUN_140f9f9e8 body=475 status=ok
// SIG undefined FUN_140f9f9e8(void)

undefined8 * FUN_140f9f9e8(undefined8 *param_1)

{
  memset(param_1 + 2,0,0x218);
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b039520;
  *(undefined4 *)(param_1 + 4) = 0xf00000d0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf00000d0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  FUN_1405c5fa2();
  param_1[0x20] = &DAT_14cb769e8;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1f] = &PTR_FUN_14b0394b0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xf00000d0;
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xf00000d0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x1c1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xf00000d0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0x3f800000;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(undefined1 *)((longlong)param_1 + 0x222) = 1;
  *param_1 = &PTR_FUN_14b3f7ac0;
  *(undefined2 *)(param_1 + 0x45) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x22a) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0xf00000d0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return param_1;
}



// FUNCTION 140f9fbc4 FUN_140f9fbc4 body=1652 status=ok
// SIG undefined FUN_140f9fbc4(void)

longlong FUN_140f9fbc4(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 *local_c0;
  undefined2 *local_b8;
  longlong local_b0 [2];
  undefined2 *local_a0;
  int local_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint uStack_8c;
  undefined8 local_88;
  undefined2 *local_80;
  int local_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  ulonglong local_50;
  ulonglong local_48;
  int iVar15;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_50 = param_3;
  if ((*(longlong *)(param_1 + 0x2b8) != 0) &&
     ((((lVar5 = FUN_140a8ab54(), lVar5 == 0 || (*(int *)(param_1 + 0x38) < *(int *)(lVar5 + 0x38)))
       || (*(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
           lVar5 + 0x30)) && (param_1 != 0)))) {
    uVar10 = param_3 & 0xffffffff;
    do {
      lVar5 = *(longlong *)(param_1 + 0x2b8);
      if (lVar5 == 0) {
LAB_140f9fcc8:
        lVar5 = FUN_14797dbe8(param_1,0);
        if (lVar5 != 0) {
          if ((DAT_14c872ba8 == '\x01') && ((*(uint *)(lVar5 + 8) >> 10 & 1) != 0)) {
            FUN_1400021e4(&local_50,&local_80);
            puVar9 = local_80;
            if (local_78 == 0) {
              puVar9 = &DAT_149dfb77a;
            }
            if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
              FUN_140056680(&local_a0,&DAT_149e01fe8);
            }
            else {
              FUN_144750a86(param_2,&local_a0,0,0);
            }
            puVar13 = local_a0;
            if (local_98 == 0) {
              puVar13 = &DAT_149dfb77a;
            }
            if (*(longlong *)(lVar5 + 0x10) == 0) {
              FUN_140056680(&local_60,&DAT_149e01fe8);
            }
            else {
              FUN_144750a86(lVar5,&local_60,0,0);
            }
            local_c8 = puVar13;
            local_c0 = puVar9;
            FUN_140033559(".\\Runtime/Engine/Private/BlueprintGeneratedClass.cpp",0x5d6,
                          L"%s had RF_NeedLoad when searching for an archetype of %s named %s");
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_a0 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            param_3 = local_50;
            if (local_80 != (undefined2 *)0x0) {
              FUN_1400020a8();
              param_3 = local_50;
            }
          }
          FUN_147af15d2(lVar5,&local_80,param_3);
          if (local_80 == (undefined2 *)0x0) {
            if (param_3 != uVar10) goto LAB_140fa0067;
          }
          else {
            uVar12 = uStack_6c | uStack_70 | (uint)local_68 | local_68._4_4_;
            if (param_3 == uVar10 || uVar12 != 0) {
LAB_140fa0023:
              if ((uVar12 != 0) && (lVar5 = FUN_147af1658(lVar5,&local_80), lVar5 != 0)) {
                lVar6 = 0;
                if ((((*(uint *)(lVar5 + 8) & 0x40) == 0) && (lVar6 = lVar5, DAT_14c872ba8 != '\0'))
                   && ((*(uint *)(lVar5 + 8) >> 10 & 1) != 0)) {
                  FUN_1400021e4(&local_50,&local_a0);
                  puVar9 = local_a0;
                  if (local_98 == 0) {
                    puVar9 = &DAT_149dfb77a;
                  }
                  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) == 0)) {
                    FUN_140056680(&local_60,&DAT_149e01fe8);
                  }
                  else {
                    FUN_144750a86(param_2,&local_60,0,0);
                  }
                  puVar13 = local_60;
                  if (local_58 == 0) {
                    puVar13 = &DAT_149dfb77a;
                  }
                  if (*(longlong *)(lVar5 + 0x10) == 0) {
                    FUN_140056680(local_b0,&DAT_149e01fe8);
                  }
                  else {
                    FUN_144750a86(lVar5,local_b0,0,0);
                  }
                  local_c8 = puVar13;
                  local_c0 = puVar9;
                  FUN_140033559(".\\Runtime/Engine/Private/BlueprintGeneratedClass.cpp",0x5fc,
                                L"%s had RF_NeedLoad when searching for an archetype of %s named %s"
                               );
                  if (local_b0[0] != 0) {
                    FUN_1400020a8();
                  }
                  if (local_60 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_a0 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                goto LAB_140fa0095;
              }
            }
            else {
LAB_140fa0067:
              FUN_147af15d2(lVar5,&local_a0,uVar10);
              if (DAT_14c950c29 == '\x01') {
                if (local_a0 == (undefined2 *)0x0) goto LAB_140fa0092;
                FUN_1456cec3c();
              }
              local_80 = local_a0;
              local_78 = local_98;
              uStack_74 = uStack_94;
              uStack_70 = uStack_90;
              uStack_6c = uStack_8c;
              local_68 = local_88;
              uVar1 = local_68;
              local_68 = local_88;
              if (local_a0 != (undefined2 *)0x0) {
                local_68._0_4_ = (uint)local_88;
                local_68._4_4_ = (uint)((ulonglong)local_88 >> 0x20);
                uVar12 = uStack_8c | uStack_90 | (uint)local_68 | local_68._4_4_;
                if ((uVar12 == 0) || (local_68 = uVar1, CONCAT44(uStack_94,local_98) == 0))
                goto LAB_140fa0023;
              }
            }
          }
LAB_140fa0092:
          lVar6 = 0;
          goto LAB_140fa0095;
        }
      }
      else {
        if ((*(uint *)(lVar5 + 8) >> 10 & 1) != 0) {
          FUN_147d11dfa(lVar5);
        }
        lVar5 = FUN_140fa023a(lVar5,param_3);
        if (lVar5 == 0) goto LAB_140f9fcc8;
        lVar6 = *(longlong *)(lVar5 + 0x30);
        if (lVar6 == 0) goto LAB_140f9fd2c;
        if ((*(int *)(param_2 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(param_2 + 0x38) * 8) == param_2 + 0x30)) goto LAB_140f9fc97;
        if ((*(byte *)(param_2 + 0xd6) & 4) == 0) goto LAB_140f9fd2c;
        local_a0 = *(undefined2 **)(param_2 + 0x18);
        FUN_1400021e4(&local_a0,&local_80);
        FUN_1400b22c2(&local_a0,"REINST_");
        uVar11 = 0;
        uVar12 = local_98 - 1;
        puVar9 = local_a0;
        if (local_98 == 0) {
          puVar9 = &DAT_149dfb77a;
          uVar12 = uVar11;
        }
        cVar2 = FUN_144a791f8(&local_80,puVar9,uVar12);
        puVar9 = local_80;
        if (cVar2 != '\0') {
          uVar11 = 0;
          iVar4 = 0;
          iVar3 = local_78 + -1;
          if (local_78 == 0) {
            iVar3 = 0;
          }
          iVar15 = 7;
          if (7 < iVar3) {
            iVar15 = iVar3;
          }
          uVar14 = iVar15 - 7;
          local_b0[0] = *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x10) + 0x18);
          FUN_1400021e4(local_b0,&local_60);
          local_b8 = local_60;
          uVar12 = local_58 - 1;
          if (local_58 == 0) {
            uVar12 = 0;
          }
          uVar7 = uVar14;
          if ((int)uVar12 < (int)uVar14) {
            uVar7 = uVar12;
          }
          uVar8 = 0;
          if (0 < (int)uVar7) {
            uVar8 = uVar7;
          }
          if (uVar12 == uVar8) {
            if (0 < (int)uVar7) {
              iVar4 = FUN_144a54874(local_60,puVar9 + ((longlong)iVar3 - (ulonglong)uVar14),uVar12);
            }
            uVar11 = (uint)(iVar4 == 0);
          }
          if (local_b8 != (undefined2 *)0x0) {
            FUN_1400020a8(local_b8);
          }
        }
        if (local_a0 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if ((char)uVar11 == '\0') {
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)(lVar5 + 0x30);
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
LAB_140fa0095:
        if (lVar6 != 0) goto LAB_140f9fc97;
      }
LAB_140f9fd2c:
      lVar6 = FUN_1402ab8a4(param_1,param_2);
      param_3 = local_50;
      if ((lVar6 != 0) ||
         ((local_50 != uVar10 && (lVar6 = FUN_1402ab8a4(param_1,param_2), lVar6 != 0))))
      goto LAB_140f9fc97;
      param_1 = *(longlong *)(param_1 + 0x40);
      if (param_1 == 0) break;
      lVar5 = FUN_14043ab18();
      if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) break;
      lVar6 = 0;
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30) goto LAB_140f9fc97;
    } while( true );
  }
  lVar6 = 0;
LAB_140f9fc97:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 140fa023a FUN_140fa023a body=228 status=ok
// SIG undefined FUN_140fa023a(void)

longlong FUN_140fa023a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  if (*(int *)(param_1 + 0x8c) < *(int *)(param_1 + 0x60)) {
    uVar3 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar4 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar4 * 0x18),
            *plVar1 != param_2) {
        iVar4 = (int)plVar1[2];
        if (iVar4 == -1) {
          return 0;
        }
      }
      if (plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar5);
      if (lVar2 != 0) {
        if (*(longlong *)(lVar2 + 0xd0) == param_2) {
          return lVar2;
        }
        if ((*(longlong *)(lVar2 + 0x30) != 0) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x18) == param_2)) {
          return lVar2;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 140fa031e FUN_140fa031e body=29 status=ok
// SIG undefined FUN_140fa031e(void)

void FUN_140fa031e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140fa033c FUN_140fa033c body=31 status=ok
// SIG undefined FUN_140fa033c(void)

undefined8 FUN_140fa033c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa0372 FUN_140fa0372 body=584 status=ok
// SIG undefined FUN_140fa0372(void)

void FUN_140fa0372(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x68) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar3 = (**(code **)(*(longlong *)(lVar4 + 0x8c0) + 0xa8))(lVar4 + 0x8c0);
    if (lVar3 != 0) {
      lVar5 = FUN_144a745da();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        FUN_140fa0ae6(param_1);
      }
    }
    uVar2 = 0xff;
    if (0 < (longlong)*(int *)(lVar4 + 0xbf0)) {
      lVar3 = 0;
      do {
        lVar5 = (longlong)*(int *)(*(longlong *)(lVar4 + 0xbe8) + 0x50 + lVar3 * 0x88);
        if (lVar5 != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0xbe8) + 0x48 + lVar3 * 0x88) + lVar6) ==
                param_1) {
              uVar2 = (undefined1)lVar3;
              goto LAB_140fa0419;
            }
            lVar6 = lVar6 + 8;
          } while (lVar5 * 8 != lVar6);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != *(int *)(lVar4 + 0xbf0));
    }
LAB_140fa0419:
    *(undefined1 *)(param_1 + 0x54) = uVar2;
  }
  if (*(char *)(param_1 + 0x49) != '\x01') {
    FUN_140fa076e(param_1);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if ((*(char *)(lVar4 + 0x93) != '\0') || (*(char *)(lVar4 + 0x98) != '\0')) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    FUN_1457d8fdc(&local_30);
    FUN_1457d8f5e(lVar3 + 0xa00,param_1,local_30);
    FUN_1412a4182(&local_38);
    FUN_1457d8f5e(lVar3 + 0xa10,param_1,local_38);
    lVar4 = *(longlong *)(param_1 + 0x38);
    *(bool *)(param_1 + 0x4a) = *(char *)(lVar3 + 0xbd8) != *(char *)(lVar4 + 0xa0);
  }
  FUN_140fa05bc(param_1,&local_40,lVar4 + 0x170,param_1 + 0x80);
  lVar4 = local_40;
  if ((DAT_14c950c29 == '\x01') && (local_40 != 0)) {
    FUN_1456cec3c(local_40);
  }
  *(longlong *)(param_1 + 0x78) = lVar4;
  FUN_140fa05bc(param_1,&local_40,*(longlong *)(param_1 + 0x38) + 0xb0,param_1 + 0x98);
  if ((DAT_14c950c29 == '\x01') && (local_40 != 0)) {
    FUN_1456cec3c(local_40);
  }
  *(longlong *)(param_1 + 0x90) = local_40;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x38) + 0x91);
  if (*(char *)(param_1 + 0x48) != cVar1) {
    *(char *)(param_1 + 0x48) = cVar1;
    FUN_140c6f3ae(param_1,1);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa05bc FUN_140fa05bc body=258 status=ok
// SIG undefined FUN_140fa05bc(void)

longlong * FUN_140fa05bc(longlong param_1,longlong *param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_1402d1dc0(param_3);
  *param_2 = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  local_58 = *(undefined8 *)(param_3 + 0xa0);
  local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(param_3 + 0xa8));
  FUN_140fa06bf(&local_58,param_4);
  plVar2 = (longlong *)FUN_140b51ce6();
  if (plVar2 != (longlong *)0x0) {
    local_38 = 0;
    local_30 = 0;
    local_58 = *(undefined8 *)(param_1 + 0x30);
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    lVar1 = (**(code **)(*plVar2 + 0x20))(plVar2,&local_58,&local_38,0);
    if (lVar1 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
      *param_2 = lVar1;
      FUN_140fa06bf(&local_38,param_4);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa06bf FUN_140fa06bf body=174 status=ok
// SIG undefined FUN_140fa06bf(void)

void FUN_140fa06bf(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  
  iVar17 = (int)param_1[1];
  if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar17);
  }
  if (*(int *)((longlong)param_2 + 0xc) < iVar17) {
    FUN_1457d8ef0(param_2);
    iVar17 = (int)param_1[1];
  }
  if (iVar17 != 0) {
    lVar19 = (longlong)iVar17 * 0x58;
    lVar18 = *param_1 + 0x40;
    do {
      iVar17 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar17 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar17 + 1U) {
        FUN_1405bc420(param_2,iVar17);
      }
      uVar2 = *(undefined4 *)(lVar18 + -0x40);
      uVar3 = *(undefined4 *)(lVar18 + -0x3c);
      uVar4 = *(undefined4 *)(lVar18 + -0x38);
      uVar5 = *(undefined4 *)(lVar18 + -0x34);
      uVar6 = *(undefined4 *)(lVar18 + -0x30);
      uVar7 = *(undefined4 *)(lVar18 + -0x2c);
      uVar8 = *(undefined4 *)(lVar18 + -0x28);
      uVar9 = *(undefined4 *)(lVar18 + -0x24);
      uVar10 = *(undefined4 *)(lVar18 + -0x20);
      uVar11 = *(undefined4 *)(lVar18 + -0x1c);
      uVar12 = *(undefined4 *)(lVar18 + -0x18);
      uVar13 = *(undefined4 *)(lVar18 + -0x14);
      uVar14 = *(undefined4 *)(lVar18 + -0xc);
      uVar15 = *(undefined4 *)(lVar18 + -8);
      uVar16 = *(undefined4 *)(lVar18 + -4);
      lVar1 = *param_2 + 0x40 + (longlong)iVar17 * 0x58;
      *(undefined4 *)(lVar1 + -0x10) = *(undefined4 *)(lVar18 + -0x10);
      *(undefined4 *)(lVar1 + -0xc) = uVar14;
      *(undefined4 *)(lVar1 + -8) = uVar15;
      *(undefined4 *)(lVar1 + -4) = uVar16;
      *(undefined4 *)(lVar1 + -0x20) = uVar10;
      *(undefined4 *)(lVar1 + -0x1c) = uVar11;
      *(undefined4 *)(lVar1 + -0x18) = uVar12;
      *(undefined4 *)(lVar1 + -0x14) = uVar13;
      *(undefined4 *)(lVar1 + -0x30) = uVar6;
      *(undefined4 *)(lVar1 + -0x2c) = uVar7;
      *(undefined4 *)(lVar1 + -0x28) = uVar8;
      *(undefined4 *)(lVar1 + -0x24) = uVar9;
      *(undefined4 *)(lVar1 + -0x40) = uVar2;
      *(undefined4 *)(lVar1 + -0x3c) = uVar3;
      *(undefined4 *)(lVar1 + -0x38) = uVar4;
      *(undefined4 *)(lVar1 + -0x34) = uVar5;
      FUN_144a76ff0(lVar1,lVar18);
      lVar18 = lVar18 + 0x58;
      lVar19 = lVar19 + -0x58;
    } while (lVar19 != 0);
  }
  return;
}



// FUNCTION 140fa076e FUN_140fa076e body=485 status=ok
// SIG undefined FUN_140fa076e(void)

void FUN_140fa076e(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar3 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_58[2] = lVar4;
  *local_58 = &PTR_FUN_14b4aa7a0;
  local_58[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar5;
  puVar3[4] = &LAB_140c6f39a;
  FUN_140fa0954(uVar2,&local_58,param_1,local_48);
  if (local_50 != 0) {
    if (local_58 == (undefined8 *)0x0) goto LAB_140fa0883;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140fa0883:
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa0954 FUN_140fa0954 body=400 status=ok
// SIG undefined FUN_140fa0954(void)

void FUN_140fa0954(longlong param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0xbf0);
  if (0 < iVar3) {
    uVar5 = 0;
    do {
      if ((int)((uint)uVar5 & 0xff) < iVar3) {
        lVar1 = *(longlong *)(param_1 + 0xbe8);
        lVar2 = *(longlong *)
                 (lVar1 + 0x10 + (ulonglong)(uint)((int)(uVar5 & 0xff) << 7) + (uVar5 & 0xff) * 8);
        if (lVar2 != 0) {
          if (param_3 == 0) {
LAB_140fa0a04:
            local_58 = (undefined8 *)0x0;
            local_50 = 0;
            FUN_14009d848(&local_58,param_2);
            FUN_1448b6402(lVar2 + 0x40,&local_60,&local_58);
            if (local_50 == 0) {
LAB_140fa0a39:
              if (local_58 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_58 != (undefined8 *)0x0) {
              (**(code **)*local_58)(local_58,0);
              FUN_1446efa72(&local_58,0,0,0x10);
              local_50 = 0;
              goto LAB_140fa0a39;
            }
            iVar3 = (int)param_4[1];
            *(uint *)(param_4 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_4 + 0xc) < iVar3 + 1U) {
              FUN_14107bfdc(param_4,iVar3);
            }
            *(undefined8 *)(*param_4 + (longlong)iVar3 * 8) = local_60;
            iVar3 = *(int *)(param_1 + 0xbf0);
          }
          else {
            lVar4 = (longlong)*(int *)(lVar1 + 0x50 + uVar5 * 0x88);
            if (lVar4 != 0) {
              lVar6 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0x48 + uVar5 * 0x88) + lVar6) == param_3)
                goto LAB_140fa0a04;
                lVar6 = lVar6 + 8;
              } while (lVar4 * 8 != lVar6);
            }
          }
        }
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa0ae6 FUN_140fa0ae6 body=184 status=ok
// SIG undefined FUN_140fa0ae6(void)

void FUN_140fa0ae6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  plVar1 = (longlong *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) < 0) {
    FUN_14481578e(plVar1,0);
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x38) + 0x38);
  uVar6 = (ulonglong)uVar2;
  if (-1 < (int)uVar2) {
    if (*(int *)(param_1 + 0x6c) < (int)uVar2) {
      FUN_14481578e(plVar1,uVar2);
    }
    if (uVar6 != 0) {
      uVar5 = 0;
      do {
        iVar4 = FUN_144909502(param_2,*(undefined8 *)
                                       (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30) +
                                       uVar5 * 8));
        if (iVar4 != -1) {
          iVar3 = *(int *)(param_1 + 0x68);
          *(uint *)(param_1 + 0x68) = iVar3 + 1U;
          if (*(uint *)(param_1 + 0x6c) < iVar3 + 1U) {
            FUN_1446f48e2(plVar1,iVar3);
          }
          *(int *)(*plVar1 + (longlong)iVar3 * 4) = iVar4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar6);
}



// FUNCTION 140fa0ba0 FUN_140fa0ba0 body=1179 status=ok
// SIG undefined FUN_140fa0ba0(void)

void FUN_140fa0ba0(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  undefined8 uVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  char cVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  lVar15 = DAT_14cb541f8;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0x10] != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar11 = 0;
    }
    else {
      bVar9 = FUN_144a61b4f();
      uVar11 = (ulonglong)(bVar9 ^ 1);
    }
    if ((*(char *)(lVar15 + uVar11) == '\x01') && (0 < (longlong)(int)param_1[7])) {
      lVar12 = (longlong)(int)param_1[7] * 0x10;
      lVar15 = *(longlong *)(param_1[6] + -0x10 + lVar12);
      plVar17 = *(longlong **)(param_1[6] + -8 + lVar12);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
      }
      if (lVar15 != 0) {
        local_c8 = (longlong *)0x0;
        uStack_c0 = 1;
        FUN_14093c786(&local_c8,0);
        *local_c8 = lVar15;
        local_c8[1] = (longlong)plVar17;
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
          UNLOCK();
        }
        lVar15 = param_1[7];
        if ((longlong)(int)lVar15 != 0) {
          lVar12 = param_1[6];
          lVar18 = 0;
          do {
            uVar11 = uStack_c0;
            if ((*(float **)(lVar12 + lVar18) != (float *)0x0) &&
               (**(float **)(lVar12 + lVar18) <= param_2)) {
              lVar20 = (longlong)(int)uStack_c0;
              uVar10 = (int)uStack_c0 + 1;
              uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar10);
              if (uStack_c0._4_4_ < uVar10) {
                FUN_14093c786(&local_c8,uVar11 & 0xffffffff);
              }
              local_c8[lVar20 * 2] = *(longlong *)(lVar12 + lVar18);
              lVar6 = *(longlong *)(lVar12 + 8 + lVar18);
              local_c8[lVar20 * 2 + 1] = lVar6;
              if (lVar6 != 0) {
                LOCK();
                *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
                UNLOCK();
              }
            }
            lVar18 = lVar18 + 0x10;
          } while ((longlong)(int)lVar15 * 0x10 != lVar18);
        }
        lVar15 = (longlong)(int)uStack_c0;
        pfVar7 = (float *)local_c8[lVar15 * 2 + -2];
        plVar21 = (longlong *)local_c8[lVar15 * 2 + -1];
        local_c8[lVar15 * 2 + -2] = 0;
        (local_c8 + lVar15 * 2 + -2)[1] = 0;
        FUN_140fa20d4(&local_c8,(int)uStack_c0 + -1);
        FUN_140fa214e(&local_c8);
        if (pfVar7 != (float *)0x0) {
          puVar19 = *(undefined8 **)(pfVar7 + 2);
          fVar24 = *pfVar7;
          local_e8 = plVar21;
          local_e0 = plVar17;
          plVar13 = (longlong *)FUN_14001cc68(0x20,0x10);
          plVar13[1] = (longlong)&DAT_100000001;
          *plVar13 = (longlong)&PTR_FUN_14afe2ca0;
          plVar13[2] = 0;
          plVar13[3] = 0;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            LOCK();
            plVar17 = plVar13 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          plVar17 = plVar13 + 2;
          lVar15 = (longlong)*(int *)(puVar19 + 1);
          if (lVar15 != 0) {
            param_2 = param_2 - (float)(~-(uint)(param_2 < fVar24) & (uint)fVar24 |
                                       (uint)(fVar24 + -1.0) & -(uint)(param_2 < fVar24));
            puVar19 = (undefined8 *)*puVar19;
            lVar15 = lVar15 * 0x24;
            do {
              fVar22 = *(float *)(puVar19 + 3) - param_2;
              fVar24 = 0.0;
              if (0.0 <= fVar22) {
                fVar24 = fVar22;
              }
              cVar16 = *(char *)((longlong)puVar19 + 0x14);
              if ((0.0 < fVar24) || (cVar16 == '\0')) {
                fVar23 = *(float *)((longlong)puVar19 + 0xc) - param_2;
                puVar14 = puVar19;
                fVar22 = 0.0;
                if (0.0 <= fVar23) {
                  fVar22 = fVar23;
                }
              }
              else {
                fVar24 = 0.0;
                cVar16 = '\0';
                puVar14 = (undefined8 *)(param_1[0x10] + 0x20);
                fVar22 = 0.0;
              }
              uVar8 = *puVar14;
              uVar3 = *(undefined4 *)(puVar19 + 1);
              uVar4 = *(undefined4 *)((longlong)puVar19 + 0x1c);
              iVar5 = (int)plVar13[3];
              lVar12 = (longlong)iVar5;
              *(uint *)(plVar13 + 3) = iVar5 + 1U;
              if (*(uint *)((longlong)plVar13 + 0x1c) < iVar5 + 1U) {
                FUN_140fa103c(plVar17,iVar5);
              }
              lVar18 = *plVar17;
              *(undefined8 *)(lVar18 + lVar12 * 0x24) = uVar8;
              *(undefined4 *)(lVar18 + 8 + lVar12 * 0x24) = uVar3;
              *(float *)(lVar18 + 0xc + lVar12 * 0x24) = fVar22;
              *(undefined4 *)(lVar18 + 0x10 + lVar12 * 0x24) = 0;
              *(char *)(lVar18 + 0x14 + lVar12 * 0x24) = cVar16;
              *(float *)(lVar18 + 0x18 + lVar12 * 0x24) = fVar24;
              *(undefined4 *)(lVar18 + 0x1c + lVar12 * 0x24) = uVar4;
              *(undefined1 *)(lVar18 + 0x20 + lVar12 * 0x24) = 1;
              puVar19 = (undefined8 *)((longlong)puVar19 + 0x24);
              lVar15 = lVar15 + -0x24;
            } while (lVar15 != 0);
          }
          local_d8 = plVar17;
          local_d0 = plVar13;
          if (plVar13 == (longlong *)0x0) {
            (**(code **)(*param_1 + 0xa8))(param_1,&local_d8);
            plVar17 = local_e0;
            plVar21 = local_e8;
          }
          else {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            (**(code **)(*param_1 + 0xa8))(param_1,&local_d8);
            plVar17 = local_e0;
            plVar21 = local_e8;
            LOCK();
            plVar1 = plVar13 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
        if (plVar21 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar21 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar2 = (int *)((longlong)plVar21 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        FUN_14093d487(local_c8,uStack_c0 & 0xffffffff);
        if (local_c8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar17 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa103c FUN_140fa103c body=373 status=ok
// SIG undefined FUN_140fa103c(void)

void FUN_140fa103c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x24;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fa10c5;
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
LAB_140fa10c5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x24)) {
    uVar7 = uVar5 / 0x24 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x24,4);
  return;
}



// FUNCTION 140fa11b2 FUN_140fa11b2 body=828 status=ok
// SIG undefined FUN_140fa11b2(void)

void FUN_140fa11b2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint *puVar15;
  uint *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  uint uStack_64;
  undefined8 uStack_60;
  uint local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar11 = FUN_1457d96e2();
  if ((cVar11 != '\0') && (*(char *)(param_1 + 0x298) == '\x01')) {
    cVar11 = FUN_144729dda(param_1 + 8);
    if (cVar11 != '\0') {
      lVar12 = FUN_14479d2ce(param_1 + 8);
      bVar3 = *(byte *)(lVar12 + 0x152);
      if ((bVar3 != 1) && ((6 < bVar3 || ((0x68U >> (bVar3 & 0x1f) & 1) == 0)))) goto LAB_140fa145f;
    }
    plVar7 = (longlong *)*param_2;
    if (plVar7 != (longlong *)0x0) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 10.0;
      uVar5 = uStack_64 >> 8;
      uStack_64 = uStack_64 & 0xffffff00;
      uStack_60 = 0x4120000000000000;
      uVar9 = local_58 >> 8;
      local_58 = local_58 & 0xffffff00;
      uVar14 = *(int *)(param_1 + 0x294) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0x294) = uVar14;
      if ((longlong)(int)plVar7[1] != 0) {
        lVar12 = *plVar7;
        fVar18 = 0.0;
        lVar13 = 0;
        do {
          fVar19 = *(float *)(lVar12 + 8 + lVar13);
          fVar18 = fVar18 + fVar19;
          if ((float)(uVar14 >> 9 | 0x3f800000) + -1.0 < fVar18) {
            local_78 = *(undefined8 *)(lVar12 + lVar13);
            fVar18 = *(float *)(param_1 + 0x1f8);
            fVar17 = *(float *)(lVar12 + 0xc + lVar13) * fVar18;
            uStack_70 = CONCAT44(fVar17,fVar19);
            local_68 = *(float *)(lVar12 + 0x10 + lVar13) * fVar18;
            cVar11 = *(char *)(lVar12 + 0x14 + lVar13);
            uStack_64 = CONCAT31((int3)uVar5,cVar11);
            fVar19 = *(float *)(lVar12 + 0x18 + lVar13) * fVar18;
            uStack_60 = CONCAT44(fVar18 * *(float *)(lVar12 + 0x1c + lVar13),fVar19);
            cVar4 = *(char *)(lVar12 + 0x20 + lVar13);
            local_58 = CONCAT31((int3)uVar9,cVar4);
            if (cVar4 == '\0') goto LAB_140fa14cf;
            goto LAB_140fa1336;
          }
          lVar13 = lVar13 + 0x24;
        } while ((longlong)(int)plVar7[1] * 0x24 != lVar13);
      }
      fVar17 = 0.0;
      cVar11 = '\0';
      fVar19 = 0.0;
LAB_140fa14cf:
      if ((*(char *)((longlong)param_3 + 0x4c) != '\x01') || (*(float *)(param_3 + 10) <= 0.0)) {
LAB_140fa1336:
        if (&local_78 != param_3 + 5) {
          *(uint *)(param_3 + 9) = local_58;
          param_3[7] = CONCAT44(uStack_64,local_68);
          param_3[8] = uStack_60;
          param_3[5] = local_78;
          param_3[6] = uStack_70;
          *(undefined1 *)((longlong)param_3 + 0x4c) = 1;
        }
        *(float *)(param_3 + 10) = fVar17;
        if (cVar11 == '\0') {
          if (*(char *)(param_3 + 0xb) == '\x01') {
            *(undefined1 *)(param_3 + 0xb) = 0;
          }
        }
        else if (&uStack_60 != (undefined8 *)((longlong)param_3 + 0x54)) {
          *(float *)((longlong)param_3 + 0x54) = fVar19;
          *(undefined1 *)(param_3 + 0xb) = 1;
        }
        if ((longlong)*(int *)(param_3 + 2) != 0) {
          puVar16 = (uint *)param_3[1];
          puVar15 = puVar16 + (longlong)*(int *)(param_3 + 2) * 4;
          do {
            plVar7 = *(longlong **)(puVar16 + 2);
            if ((((puVar16[1] != 0 && plVar7 != (longlong *)0x0) &&
                 (uVar5 = *puVar16, -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
               (((lVar12 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8),
                 lVar12 != 0 && (*(uint *)(lVar12 + 0x10) == puVar16[1])) &&
                ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))) {
              (**(code **)(*plVar7 + 0x40))(plVar7,&local_78);
            }
            puVar16 = puVar16 + 4;
          } while (puVar16 != puVar15);
        }
        fVar18 = local_68;
        uVar10 = local_78;
        uVar8 = *param_3;
        iVar6 = *(int *)(param_1 + 0x4f0);
        lVar12 = (longlong)iVar6;
        *(uint *)(param_1 + 0x4f0) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x4f4) < iVar6 + 1U) {
          FUN_1457d97f6((longlong *)(param_1 + 0x4e8),iVar6);
        }
        lVar13 = *(longlong *)(param_1 + 0x4e8);
        *(undefined8 *)(lVar13 + lVar12 * 0x14) = uVar8;
        *(undefined8 *)(lVar13 + 8 + lVar12 * 0x14) = uVar10;
        *(float *)(lVar13 + 0x10 + lVar12 * 0x14) = fVar18;
      }
    }
  }
LAB_140fa145f:
  plVar7 = (longlong *)param_2[1];
  if (plVar7 != (longlong *)0x0) {
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
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa14f0 FUN_140fa14f0 body=264 status=ok
// SIG undefined FUN_140fa14f0(void)

void FUN_140fa14f0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = FUN_140d3be2e(param_1 + 0x70);
  if (lVar3 != 0) {
    lVar1 = *param_2;
    if (lVar1 == 0) {
LAB_140fa158c:
      if ((*(char *)((longlong)param_2 + 0x14) != '\x01') ||
         (uVar7 = 0, 0.0 < *(float *)(param_2 + 3))) {
        *(longlong *)(param_1 + 0x14) = *param_2;
        uVar7 = (undefined4)param_2[2];
      }
      else {
        FUN_140d3bf04(lVar3,&local_58,*(undefined8 *)(param_1 + 8));
        *(undefined8 *)(param_1 + 0x14) = local_58;
      }
      *(undefined4 *)(param_1 + 0x1c) = uVar7;
    }
    else if ((longlong)*(int *)(lVar3 + 0x98) != 0) {
      puVar6 = *(undefined8 **)(lVar3 + 0x90);
      lVar5 = (longlong)*(int *)(lVar3 + 0x98) * 0x90;
      do {
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(puVar6 + 1) != 0) {
          puVar4 = (undefined2 *)*puVar6;
        }
        cVar2 = FUN_1402ca022(lVar1,puVar4);
        if (cVar2 != '\0') {
          if (puVar6 != (undefined8 *)0x0) goto LAB_140fa158c;
          break;
        }
        puVar6 = puVar6 + 0x12;
        lVar5 = lVar5 + -0x90;
      } while (lVar5 != 0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa15fa FUN_140fa15fa body=1713 status=ok
// SIG undefined FUN_140fa15fa(void)

void FUN_140fa15fa(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_b8 [40];
  ulonglong local_90;
  longlong *local_88;
  undefined8 local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar11 = (int)param_1[5];
  if (iVar11 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar5 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar5 = iVar11 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar9 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_140fa1771;
        iVar9 = iVar9 + 0x20;
        uVar15 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar9 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar17 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar5) {
      iVar5 = iVar11;
    }
  }
  if (iVar5 != iVar11) {
    uVar15 = 0xffffffff;
    iVar10 = iVar11;
    do {
      plVar2 = *(longlong **)(*param_1 + 8 + (longlong)iVar5 * 0x20);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,param_3);
        iVar10 = (int)param_1[5];
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar5 = (int)uVar16;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar4[lVar12] & uVar15;
      if (uVar6 == 0) {
        iVar7 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar7 = iVar10 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar13 = 0;
          do {
            uVar6 = puVar4[lVar12 + lVar13 + 1];
            if (uVar6 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140fa1745;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          lVar12 = (longlong)iVar8;
        }
        uVar16 = lVar12 + 1U & 0xffffffff;
        iVar5 = iVar10;
      }
      else {
LAB_140fa1745:
        uVar17 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar17 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar5) {
          iVar5 = iVar10;
        }
      }
    } while (iVar5 != iVar11);
  }
LAB_140fa1771:
  iVar11 = (int)param_1[0xf];
  if (iVar11 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar4 = (uint *)param_1[0xe];
    if ((uint *)param_1[0xe] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0xc);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar5 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar5 = iVar11 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar9 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_140fa18b7;
        iVar9 = iVar9 + 0x20;
        uVar15 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar9 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar17 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar5) {
      iVar5 = iVar11;
    }
  }
  if (iVar5 != iVar11) {
    uVar15 = 0xffffffff;
    iVar10 = iVar11;
    do {
      plVar2 = *(longlong **)(param_1[10] + 8 + (longlong)iVar5 * 0x20);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,param_3);
        iVar10 = (int)param_1[0xf];
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar4 = (uint *)param_1[0xe];
      if ((uint *)param_1[0xe] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0xc);
      }
      iVar5 = (int)uVar16;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar4[lVar12] & uVar15;
      if (uVar6 == 0) {
        iVar7 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar7 = iVar10 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar13 = 0;
          do {
            uVar6 = puVar4[lVar12 + lVar13 + 1];
            if (uVar6 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140fa188b;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          lVar12 = (longlong)iVar8;
        }
        uVar16 = lVar12 + 1U & 0xffffffff;
        iVar5 = iVar10;
      }
      else {
LAB_140fa188b:
        uVar17 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar17 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar5) {
          iVar5 = iVar10;
        }
      }
    } while (iVar5 != iVar11);
  }
LAB_140fa18b7:
  iVar11 = (int)param_1[0x19];
  if (iVar11 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar4 = (uint *)param_1[0x18];
    if ((uint *)param_1[0x18] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x16);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar5 = iVar11 + 0x1e;
      if (-1 < iVar11 + -1) {
        iVar5 = iVar11 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar9 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_140fa1a0f;
        iVar9 = iVar9 + 0x20;
        uVar15 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar9 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar17 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar11 <= iVar5) {
      iVar5 = iVar11;
    }
  }
  if (iVar5 != iVar11) {
    uVar15 = 0xffffffff;
    iVar10 = iVar11;
    do {
      plVar2 = *(longlong **)(param_1[0x14] + 8 + (longlong)iVar5 * 0x20);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,param_3);
        iVar10 = (int)param_1[0x19];
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar4 = (uint *)param_1[0x18];
      if ((uint *)param_1[0x18] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x16);
      }
      iVar5 = (int)uVar16;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar4[lVar12] & uVar15;
      if (uVar6 == 0) {
        iVar7 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar7 = iVar10 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar13 = 0;
          do {
            uVar6 = puVar4[lVar12 + lVar13 + 1];
            if (uVar6 != 0) {
              uVar16 = (ulonglong)(iVar5 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140fa19e3;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          lVar12 = (longlong)iVar8;
        }
        uVar16 = lVar12 + 1U & 0xffffffff;
        iVar5 = iVar10;
      }
      else {
LAB_140fa19e3:
        uVar17 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar17 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar5) {
          iVar5 = iVar10;
        }
      }
    } while (iVar5 != iVar11);
  }
LAB_140fa1a0f:
  plVar2 = param_1 + 0x20;
  local_90 = 0x100000000;
  local_80 = 0xffffffff;
  local_78 = 0;
  local_88 = plVar2;
  if ((int)param_1[0x23] == 0) {
    uVar16 = 1;
    local_80._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_80._4_4_ = 0;
    local_90._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    uVar16 = local_90 >> 0x20;
    iVar11 = (int)param_1[0x23];
  }
  plVar3 = local_88;
  iVar5 = (int)local_90;
  uVar15 = (uint)local_80;
  iVar9 = local_80._4_4_;
  iVar10 = local_78;
  if (local_80._4_4_ != iVar11 || local_88 != plVar2) {
    do {
      plVar14 = *(longlong **)(param_1[0x1e] + 8 + (longlong)iVar9 * 0x20);
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 0xa0))(plVar14,param_2,param_3);
      }
      uVar15 = uVar15 & ~(uint)uVar16;
      plVar14 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar14 = plVar3;
      }
      iVar7 = (int)plVar3[3];
      lVar12 = (longlong)iVar5;
      uVar6 = *(uint *)((longlong)plVar14 + lVar12 * 4) & uVar15;
      if (uVar6 == 0) {
        iVar9 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar9 = iVar7 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar9) {
          lVar13 = 0;
          do {
            uVar6 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar6 != 0) {
              iVar5 = iVar5 + (int)lVar13 + 1;
              uVar15 = 0xffffffff;
              goto LAB_140fa1b1b;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          iVar5 = iVar8;
        }
        iVar5 = iVar5 + 1;
        iVar9 = iVar7;
      }
      else {
LAB_140fa1b1b:
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar17 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar9) {
          iVar9 = iVar7;
        }
      }
    } while (iVar9 != iVar11 || plVar3 != plVar2);
  }
  plVar2 = (longlong *)param_1[0x28];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0xa0))(plVar2,param_2,param_3);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa1cae FUN_140fa1cae body=121 status=ok
// SIG undefined FUN_140fa1cae(void)

void FUN_140fa1cae(longlong param_1,float param_2,float param_3)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (ulonglong)(0.0 < param_3) * 0x10;
  lVar2 = (longlong)*(int *)(param_1 + 0x38 + lVar3);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30 + lVar3);
    lVar4 = 0;
    do {
      pfVar1 = *(float **)(lVar3 + lVar4);
      if (pfVar1 != (float *)0x0) {
        *(bool *)(pfVar1 + 6) = *pfVar1 <= param_2 && param_2 != *pfVar1;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar2 * 0x10 != lVar4);
  }
  lVar2 = (ulonglong)(0.0 < param_3) * 0x10;
  lVar3 = (longlong)*(int *)(param_1 + 0x58 + lVar2);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x50 + lVar2);
    lVar4 = 0;
    do {
      pfVar1 = *(float **)(lVar2 + lVar4);
      if (pfVar1 != (float *)0x0) {
        *(bool *)(pfVar1 + 6) = *pfVar1 <= param_2 && param_2 != *pfVar1;
      }
      lVar4 = lVar4 + 0x10;
    } while (lVar3 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 140fa1d28 FUN_140fa1d28 body=938 status=ok
// SIG undefined FUN_140fa1d28(void)

void FUN_140fa1d28(longlong param_1,float param_2,float param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0 [2];
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140fa1cae();
  lVar6 = (ulonglong)(0.0 < param_3) * 0x10;
  lVar2 = param_1 + lVar6;
  plVar7 = (longlong *)(param_1 + 0x30 + lVar6);
  if (0 < *(int *)(lVar2 + 0x58)) {
    plVar7 = (longlong *)(lVar2 + 0x50);
  }
  if ((longlong)(int)plVar7[1] < 1) {
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar6 = (longlong)(int)plVar7[1] * 0x10;
    lVar2 = *(longlong *)(*plVar7 + -0x10 + lVar6);
    plVar10 = *(longlong **)(*plVar7 + -8 + lVar6);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      local_78 = (longlong *)0x0;
      uStack_70 = 1;
      FUN_14093c786(&local_78,0);
      *local_78 = lVar2;
      local_78[1] = (longlong)plVar10;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      lVar2 = plVar7[1];
      if ((longlong)(int)lVar2 != 0) {
        lVar6 = *plVar7;
        lVar11 = 0;
        do {
          uVar4 = uStack_70;
          if ((*(float **)(lVar6 + lVar11) != (float *)0x0) &&
             (**(float **)(lVar6 + lVar11) <= param_2)) {
            lVar12 = (longlong)(int)uStack_70;
            uVar5 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
            if (uStack_70._4_4_ < uVar5) {
              FUN_14093c786(&local_78,uVar4 & 0xffffffff);
            }
            local_78[lVar12 * 2] = *(longlong *)(lVar6 + lVar11);
            lVar3 = *(longlong *)(lVar6 + 8 + lVar11);
            local_78[lVar12 * 2 + 1] = lVar3;
            if (lVar3 != 0) {
              LOCK();
              *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
              UNLOCK();
            }
          }
          lVar11 = lVar11 + 0x10;
        } while ((longlong)(int)lVar2 * 0x10 != lVar11);
      }
      lVar6 = (longlong)(int)uStack_70;
      lVar2 = local_78[lVar6 * 2 + -2];
      plVar7 = (longlong *)local_78[lVar6 * 2 + -1];
      local_78[lVar6 * 2 + -2] = 0;
      (local_78 + lVar6 * 2 + -2)[1] = 0;
      FUN_140fa20d4(&local_78,(int)uStack_70 + -1);
      FUN_140fa214e(&local_78);
      local_88 = *(undefined8 *)(lVar2 + 8);
      local_80 = *(longlong *)(lVar2 + 0x10);
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      FUN_140fa2c3e(param_1 + 0x18,&local_88);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar7 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      FUN_14093d487(local_78,uStack_70 & 0xffffffff);
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140fa1ee7;
    }
  }
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14afe2c80;
  plVar7[2] = 0;
  *(undefined1 *)(plVar7 + 3) = 0;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  *(undefined1 *)(plVar7 + 3) = 0;
  uVar8 = FUN_14571e1e4();
  FUN_1401cfad2(uVar8,local_a0,0);
  FUN_140ba7826(&local_78,&DAT_149e060ac,local_a0);
  plVar9 = local_78;
  if ((int)uStack_70 == 0) {
    plVar9 = (longlong *)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_90,plVar9,1);
  plVar7[2] = local_90;
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0[0] != 0) {
    FUN_1400020a8();
  }
  local_b0 = plVar7 + 2;
  local_a8 = plVar7;
  if (plVar7 == (longlong *)0x0) {
    FUN_140fa2c3e(param_1 + 0x18,&local_b0);
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    FUN_140fa2c3e(param_1 + 0x18,&local_b0);
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_140fa1ee7:
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar10 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa20d4 FUN_140fa20d4 body=122 status=ok
// SIG undefined FUN_140fa20d4(void)

void FUN_140fa20d4(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 140fa214e FUN_140fa214e body=143 status=ok
// SIG undefined FUN_140fa214e(void)

void FUN_140fa214e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 140fa21de FUN_140fa21de body=2655 status=ok
// SIG undefined FUN_140fa21de(void)

void FUN_140fa21de(longlong param_1,float param_2,float param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  float *pfVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong **pplVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  float fVar22;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  longlong *local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140fa1cae();
  if (0.0 < param_3) {
    uVar21 = (ulonglong)(0 < *(int *)(param_1 + 0x68)) * 0x20;
    uVar10 = *(uint *)(param_1 + 0x48 + uVar21);
    uVar21 = uVar21 | 0x40;
    if ((int)uVar10 < 1) {
      plVar16 = (longlong *)0x0;
      lVar20 = 0;
LAB_140fa2b3f:
      lVar18 = 0;
LAB_140fa2b42:
      plVar14 = (longlong *)0x0;
    }
    else {
      plVar14 = *(longlong **)(param_1 + uVar21);
      lVar20 = *plVar14;
      plVar16 = (longlong *)plVar14[1];
      if (plVar16 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        uVar10 = *(uint *)(param_1 + 8 + uVar21);
        if ((int)uVar10 < 1) goto LAB_140fa2b3f;
        plVar14 = *(longlong **)(param_1 + uVar21);
      }
      lVar18 = plVar14[(ulonglong)uVar10 * 2 + -2];
      plVar14 = (longlong *)plVar14[(ulonglong)uVar10 * 2 + -1];
      if (plVar14 == (longlong *)0x0) goto LAB_140fa2b42;
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
    }
    if (lVar20 != 0 || lVar18 != 0) {
      local_98 = (longlong *)0x0;
      uStack_90 = 1;
      FUN_14093c786(&local_98,0);
      *local_98 = lVar18;
      local_98[1] = (longlong)plVar14;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      lVar20 = (longlong)*(int *)(param_1 + 8 + uVar21);
      if (lVar20 != 0) {
        lVar18 = *(longlong *)(param_1 + uVar21);
        lVar17 = 0;
        do {
          uVar21 = uStack_90;
          if ((*(float **)(lVar18 + lVar17) != (float *)0x0) &&
             (**(float **)(lVar18 + lVar17) <= param_2)) {
            lVar19 = (longlong)(int)uStack_90;
            uVar10 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
            if (uStack_90._4_4_ < uVar10) {
              FUN_14093c786(&local_98,uVar21 & 0xffffffff);
            }
            local_98[lVar19 * 2] = *(longlong *)(lVar18 + lVar17);
            lVar4 = *(longlong *)(lVar18 + 8 + lVar17);
            local_98[lVar19 * 2 + 1] = lVar4;
            if (lVar4 != 0) {
              LOCK();
              *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
              UNLOCK();
            }
          }
          lVar17 = lVar17 + 0x10;
        } while (lVar20 * 0x10 != lVar17);
      }
      lVar18 = (longlong)(int)uStack_90;
      lVar20 = local_98[lVar18 * 2 + -2];
      plVar12 = (longlong *)local_98[lVar18 * 2 + -1];
      local_98[lVar18 * 2 + -2] = 0;
      (local_98 + lVar18 * 2 + -2)[1] = 0;
      FUN_140fa20d4(&local_98,(int)uStack_90 + -1);
      FUN_140fa214e(&local_98);
      plVar11 = *(longlong **)(lVar20 + 8);
      plVar13 = (longlong *)FUN_140fa2e17();
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        plVar6 = plVar13 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      plVar13[2] = *plVar11;
      uVar8 = *(undefined4 *)((longlong)plVar11 + 0xc);
      lVar20 = plVar11[2];
      uVar9 = *(undefined4 *)((longlong)plVar11 + 0x14);
      *(int *)(plVar13 + 3) = (int)plVar11[1];
      *(undefined4 *)((longlong)plVar13 + 0x1c) = uVar8;
      *(int *)(plVar13 + 4) = (int)lVar20;
      *(undefined4 *)((longlong)plVar13 + 0x24) = uVar9;
      FUN_144a787a6(plVar13 + 5,plVar11 + 3);
      *(int *)(plVar13 + 7) = (int)plVar11[5];
      *(undefined1 *)(plVar13 + 8) = 1;
      local_a8 = plVar13 + 2;
      local_a0 = plVar13;
      if (plVar13 == (longlong *)0x0) {
        FUN_140fa2c3e(param_1 + 0x18,&local_a8);
      }
      else {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        FUN_140fa2c3e(param_1 + 0x18,&local_a8);
        LOCK();
        plVar11 = plVar13 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar20 = *plVar13;
            goto LAB_140fa294a;
          }
        }
      }
LAB_140fa2707:
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar12 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      FUN_14093d487(local_98,uStack_90 & 0xffffffff);
      if (local_98 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140fa23c7;
    }
    plVar11 = (longlong *)FUN_140fa2e17();
    plVar12 = plVar11 + 2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar11 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    *plVar12 = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    if (*(int *)((longlong)plVar11 + 0x34) < 0) {
      FUN_1446f8c06(plVar11 + 5,0);
    }
    puVar7 = (undefined2 *)plVar11[5];
    if (puVar7 != (undefined2 *)0x0) {
      *puVar7 = 0;
    }
    *(undefined1 *)(plVar11 + 8) = 1;
    local_80 = plVar12;
    local_78 = plVar11;
    if (plVar11 == (longlong *)0x0) {
      pplVar15 = &local_80;
      goto LAB_140fa2a54;
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    pplVar15 = &local_80;
  }
  else {
    lVar20 = (ulonglong)(0 < *(int *)(param_1 + 0x58)) * 0x20;
    uVar10 = *(uint *)(param_1 + 0x38 + lVar20);
    if ((int)uVar10 < 1) {
      plVar14 = (longlong *)0x0;
      plVar16 = (longlong *)0x0;
    }
    else {
      lVar20 = lVar20 + 0x30;
      plVar14 = *(longlong **)(param_1 + lVar20);
      lVar18 = *plVar14;
      plVar16 = (longlong *)plVar14[1];
      if (plVar16 == (longlong *)0x0) {
LAB_140fa2272:
        lVar17 = plVar14[(ulonglong)uVar10 * 2 + -2];
        plVar14 = (longlong *)plVar14[(ulonglong)uVar10 * 2 + -1];
        if (plVar14 == (longlong *)0x0) goto LAB_140fa2a27;
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        uVar10 = *(uint *)(param_1 + 8 + lVar20);
        if (0 < (int)uVar10) {
          plVar14 = *(longlong **)(param_1 + lVar20);
          goto LAB_140fa2272;
        }
        lVar17 = 0;
LAB_140fa2a27:
        plVar14 = (longlong *)0x0;
      }
      if (lVar18 != 0 || lVar17 != 0) {
        if (lVar18 == lVar17) {
          plVar13 = *(longlong **)(lVar18 + 8);
          plVar11 = (longlong *)FUN_14001cc68(0x48,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_14afe2cc0;
          plVar12 = plVar11 + 5;
          plVar11[2] = 0;
          plVar11[3] = 0;
          plVar11[4] = 0;
          plVar11[5] = 0;
          plVar11[6] = 0;
          plVar11[7] = 0x3dcccccd;
          *(undefined2 *)(plVar11 + 8) = 0;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = plVar11 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          plVar11[2] = *plVar13;
          uVar8 = *(undefined4 *)((longlong)plVar13 + 0xc);
          lVar20 = plVar13[2];
          uVar9 = *(undefined4 *)((longlong)plVar13 + 0x14);
          *(int *)(plVar11 + 3) = (int)plVar13[1];
          *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar8;
          *(int *)(plVar11 + 4) = (int)lVar20;
          *(undefined4 *)((longlong)plVar11 + 0x24) = uVar9;
          if (plVar12 != plVar13 + 3) {
            iVar3 = (int)plVar13[4];
            _Src = (void *)plVar13[3];
            *(int *)(plVar11 + 6) = iVar3;
            if (iVar3 == 0 && *(int *)((longlong)plVar11 + 0x34) == 0) {
              *(undefined4 *)((longlong)plVar11 + 0x34) = 0;
            }
            else {
              FUN_1446dd670(plVar12,iVar3);
              if (iVar3 != 0) {
                memcpy((void *)*plVar12,_Src,(longlong)iVar3 * 2);
              }
            }
          }
          *(undefined4 *)(plVar11 + 7) = 0;
          *(undefined1 *)((longlong)plVar11 + 0x41) = 1;
          local_c8 = plVar11 + 2;
          local_c0 = plVar11;
          if (plVar11 == (longlong *)0x0) {
            pplVar15 = &local_c8;
            goto LAB_140fa2a54;
          }
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          pplVar15 = &local_c8;
          goto LAB_140fa23a0;
        }
        local_98 = (longlong *)0x0;
        lVar18 = *(longlong *)(param_1 + lVar20);
        lVar17 = (longlong)*(int *)(param_1 + 8 + lVar20) * 0x10;
        uStack_90._0_4_ = 1;
        uStack_90._4_4_ = 0;
        FUN_14093c786(&local_98,0);
        iVar3 = (int)uStack_90;
        *local_98 = *(longlong *)(lVar18 + -0x20 + lVar17);
        lVar18 = *(longlong *)(lVar18 + -0x18 + lVar17);
        local_98[1] = lVar18;
        if (lVar18 != 0) {
          LOCK();
          *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
          UNLOCK();
        }
        lVar18 = (longlong)*(int *)(param_1 + 8 + lVar20) * 0x10 + *(longlong *)(param_1 + lVar20);
        lVar17 = (longlong)(int)uStack_90;
        uVar10 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
        if (uStack_90._4_4_ < uVar10) {
          FUN_14093c786(&local_98,iVar3);
        }
        local_98[lVar17 * 2] = *(longlong *)(lVar18 + -0x10);
        lVar18 = *(longlong *)(lVar18 + -8);
        local_98[lVar17 * 2 + 1] = lVar18;
        if (lVar18 != 0) {
          LOCK();
          *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
          UNLOCK();
        }
        lVar18 = (longlong)*(int *)(param_1 + 8 + lVar20);
        if (lVar18 != 0) {
          lVar20 = *(longlong *)(param_1 + lVar20);
          lVar17 = 0;
          do {
            uVar21 = uStack_90;
            if ((*(float **)(lVar20 + lVar17) != (float *)0x0) &&
               (**(float **)(lVar20 + lVar17) <= param_2)) {
              lVar19 = (longlong)(int)uStack_90;
              uVar10 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
              if (uStack_90._4_4_ < uVar10) {
                FUN_14093c786(&local_98,uVar21 & 0xffffffff);
              }
              local_98[lVar19 * 2] = *(longlong *)(lVar20 + lVar17);
              lVar4 = *(longlong *)(lVar20 + 8 + lVar17);
              local_98[lVar19 * 2 + 1] = lVar4;
              if (lVar4 != 0) {
                LOCK();
                *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
                UNLOCK();
              }
            }
            lVar17 = lVar17 + 0x10;
          } while (lVar18 * 0x10 != lVar17);
        }
        plVar12 = (longlong *)FUN_140fa2e17();
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          LOCK();
          plVar11 = plVar12 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
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
        lVar20 = local_98[(longlong)(int)uStack_90 * 2 + -4];
        local_f0 = (longlong *)local_98[(longlong)(int)uStack_90 * 2 + -3];
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_f0 + 1) = (int)local_f0[1] + 1;
          UNLOCK();
        }
        plVar11 = *(longlong **)(lVar20 + 8);
        plVar12[2] = *plVar11;
        uVar8 = *(undefined4 *)((longlong)plVar11 + 0xc);
        lVar20 = plVar11[2];
        uVar9 = *(undefined4 *)((longlong)plVar11 + 0x14);
        *(int *)(plVar12 + 3) = (int)plVar11[1];
        *(undefined4 *)((longlong)plVar12 + 0x1c) = uVar8;
        *(int *)(plVar12 + 4) = (int)lVar20;
        *(undefined4 *)((longlong)plVar12 + 0x24) = uVar9;
        FUN_144a787a6(plVar12 + 5,plVar11 + 3);
        *(undefined4 *)(plVar12 + 7) = 0;
        *(undefined1 *)((longlong)plVar12 + 0x41) = 1;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        local_d8 = plVar12 + 2;
        local_d0 = plVar12;
        FUN_140fa2c3e(param_1 + 0x18,&local_d8);
        plVar11 = (longlong *)FUN_140fa2e17();
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          plVar13 = plVar11 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        local_f8 = plVar11 + 2;
        pfVar5 = (float *)local_98[(longlong)(int)uStack_90 * 2 + -2];
        plVar13 = (longlong *)local_98[(longlong)(int)uStack_90 * 2 + -1];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
        }
        plVar6 = *(longlong **)(pfVar5 + 2);
        plVar11[2] = *plVar6;
        uVar8 = *(undefined4 *)((longlong)plVar6 + 0xc);
        lVar20 = plVar6[2];
        uVar9 = *(undefined4 *)((longlong)plVar6 + 0x14);
        *(int *)(plVar11 + 3) = (int)plVar6[1];
        *(undefined4 *)((longlong)plVar11 + 0x1c) = uVar8;
        *(int *)(plVar11 + 4) = (int)lVar20;
        *(undefined4 *)((longlong)plVar11 + 0x24) = uVar9;
        FUN_144a787a6(plVar11 + 5,plVar6 + 3);
        fVar2 = *pfVar5;
        fVar22 = *(float *)(plVar6 + 5);
        *(float *)(plVar11 + 7) = fVar22;
        fVar22 = ((float)(~-(uint)(param_2 < fVar2) & (uint)param_2 |
                         (uint)(param_2 + 1.0) & -(uint)(param_2 < fVar2)) - *pfVar5) / fVar22;
        if (1.0 <= fVar22) {
          fVar22 = 1.0;
        }
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        *(float *)((longlong)plVar11 + 0x3c) = fVar22;
        local_e8 = local_f8;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        local_e0 = plVar11;
        FUN_140fa2c3e(param_1 + 0x18,&local_e8);
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar13 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
        }
        plVar13 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_f0 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 != 0) goto LAB_140fa2707;
          (**(code **)*local_f0)(local_f0);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) goto LAB_140fa2707;
          lVar20 = *plVar13;
LAB_140fa294a:
          (**(code **)(lVar20 + 0x10))(plVar13);
        }
        goto LAB_140fa2707;
      }
    }
    plVar11 = (longlong *)FUN_140fa2e17();
    plVar12 = plVar11 + 2;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar11 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    *plVar12 = 0;
    plVar11[3] = 0;
    plVar11[4] = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    if (*(int *)((longlong)plVar11 + 0x34) < 0) {
      FUN_1446f8c06(plVar11 + 5,0);
    }
    puVar7 = (undefined2 *)plVar11[5];
    if (puVar7 != (undefined2 *)0x0) {
      *puVar7 = 0;
    }
    *(undefined4 *)(plVar11 + 7) = 0;
    *(undefined1 *)((longlong)plVar11 + 0x41) = 1;
    local_b8 = plVar12;
    local_b0 = plVar11;
    if (plVar11 == (longlong *)0x0) {
      pplVar15 = &local_b8;
LAB_140fa2a54:
      FUN_140fa2c3e(param_1 + 0x18,pplVar15);
      goto LAB_140fa23c7;
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    pplVar15 = &local_b8;
  }
LAB_140fa23a0:
  FUN_140fa2c3e(param_1 + 0x18,pplVar15);
  LOCK();
  plVar12 = plVar11 + 1;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)*plVar12 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_140fa23c7:
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar14 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar14 = plVar16 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa2c3e FUN_140fa2c3e body=334 status=ok
// SIG undefined FUN_140fa2c3e(void)

void FUN_140fa2c3e(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  bool bVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  iVar2 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar2 + 1;
  uVar8 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar8 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar2;
  }
  else {
    bVar9 = false;
    do {
      lVar10 = uVar8 * 0x10 + -8;
      uVar11 = uVar8;
      while ((*(int *)(*param_1 + lVar10) != 0 &&
             (plVar5 = *(longlong **)(*param_1 + -8 + lVar10), plVar5 != (longlong *)0x0))) {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_58 = uVar3;
        local_50 = plVar4;
        cVar7 = (**(code **)(*plVar5 + 0x60))(plVar5,&local_58);
        if (cVar7 == '\0') break;
        lVar10 = lVar10 + -0x10;
        bVar6 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar6) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar9) goto LAB_140fa2cf4;
          goto LAB_140fa2d4f;
        }
      }
      uVar8 = uVar11 - 1;
      bVar9 = true;
    } while (1 < uVar11);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140fa2d4f:
    FUN_14474d06a(param_1,0);
  }
LAB_140fa2cf4:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa2d8e FUN_140fa2d8e body=136 status=ok
// SIG undefined FUN_140fa2d8e(void)

undefined8 FUN_140fa2d8e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x18);
  pcVar5 = *(code **)(param_1 + 0x20);
  local_20 = *param_2;
  local_18 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar5)(iVar3 + lVar4);
  plVar6 = (longlong *)param_2[1];
  if (plVar6 != (longlong *)0x0) {
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
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa2e17 FUN_140fa2e17 body=81 status=ok
// SIG undefined FUN_140fa2e17(void)

void FUN_140fa2e17(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14afe2cc0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0x3dcccccd;
  *(undefined2 *)(puVar1 + 8) = 0;
  return;
}



// FUNCTION 140fa2e68 FUN_140fa2e68 body=322 status=ok
// SIG undefined FUN_140fa2e68(void)

void FUN_140fa2e68(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0xc))) &&
       (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 && (lVar6 = *param_2, lVar6 != 0)))) {
      if (((*(int *)(param_1 + 0x23c) != 0) && (uVar2 = *(uint *)(param_1 + 0x238), -1 < (int)uVar2)
          ) && ((int)uVar2 < DAT_14c9647dc)) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x23c))) &&
           ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
          if ((*(float *)(param_1 + 0x248) <= 0.0) || (*(char *)(lVar6 + 0x31) != '\0')) {
            FUN_140fa35bc(param_1);
          }
          else {
            *(longlong *)(param_1 + 0x250) = lVar6;
            plVar3 = (longlong *)param_2[1];
            plVar5 = *(longlong **)(param_1 + 600);
            if (plVar5 != plVar3) {
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
                UNLOCK();
                plVar5 = *(longlong **)(param_1 + 600);
              }
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))();
                }
              }
              *(longlong **)(param_1 + 600) = plVar3;
            }
          }
        }
      }
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140fa2f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140fa2faa FUN_140fa2faa body=661 status=ok
// SIG undefined FUN_140fa2faa(void)

void FUN_140fa2faa(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  char cVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 unaff_RBX;
  bool bVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined4 local_60;
  undefined1 local_59;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(int *)(param_1 + 0xc) != 0) && (uVar4 = *(uint *)(param_1 + 8), -1 < (int)uVar4)) &&
      ((int)uVar4 < DAT_14c9647dc)) &&
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0xc))) &&
      ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar13 = *plVar9;
    }
    else {
      lVar13 = 0;
    }
    bVar2 = *(byte *)(lVar13 + 0x152);
    if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) goto LAB_140fa312e;
  }
  lVar13 = *param_2;
  if (lVar13 == 0) goto LAB_140fa312e;
  local_50 = param_2[1];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_58 = lVar13;
  FUN_140fa3434(param_1,&local_58);
  local_59 = *(undefined1 *)(param_1 + 0x1b0);
  uVar3 = *(undefined1 *)(*param_2 + 8);
  *(undefined1 *)(param_1 + 0x1b0) = uVar3;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_140fa3169:
    uVar14 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 8);
    uVar14 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_140fa3169;
      uVar14 = *puVar10;
    }
  }
  iVar5 = *(int *)(param_1 + 0x2e4);
  *(int *)(param_1 + 0x2e4) = iVar5 + 1;
  uVar8 = (ulonglong)*(int *)(param_1 + 0x2d8);
  if ((longlong)uVar8 < 1) {
    *(int *)(param_1 + 0x2e4) = iVar5;
  }
  else {
    local_68 = (longlong *)(param_1 + 0x2d0);
    bVar11 = false;
    do {
      lVar13 = uVar8 * 0x10 + -8;
      uVar12 = uVar8;
      while (((*(int *)(*local_68 + lVar13) != 0 &&
              (plVar9 = *(longlong **)(*local_68 + -8 + lVar13), plVar9 != (longlong *)0x0)) &&
             (cVar7 = (**(code **)(*plVar9 + 0x60))
                                (plVar9,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar3) &
                                        0xffffffff,uVar14), cVar7 != '\0'))) {
        lVar13 = lVar13 + -0x10;
        bVar6 = uVar12 < 2;
        uVar12 = uVar12 - 1;
        if (bVar6) {
          *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + -1;
          if (bVar11) goto LAB_140fa3249;
          goto LAB_140fa30f6;
        }
      }
      uVar8 = uVar12 - 1;
      bVar11 = true;
    } while (1 < uVar12);
    *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + -1;
LAB_140fa3249:
    FUN_14474d06a(local_68,0);
  }
LAB_140fa30f6:
  local_60 = 0;
  FUN_140fa325a(param_1 + 0x260,&local_59,&local_60);
  local_60 = 0x3f800000;
  FUN_140fa325a(param_1 + 0x260,param_1 + 0x1b0,&local_60);
LAB_140fa312e:
  puVar10 = (undefined8 *)param_2[1];
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(puVar10);
      LOCK();
      piVar1 = (int *)((longlong)puVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa325a FUN_140fa325a body=473 status=ok
// SIG undefined FUN_140fa325a(void)

void FUN_140fa325a(uint *param_1,undefined1 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong local_60 [2];
  longlong local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_1[0xb] != 0) && (uVar1 = param_1[10], -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar2 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar2 != (undefined8 *)0x0) && (*(uint *)(puVar2 + 2) == param_1[0xb])) &&
       ((*(uint *)(puVar2 + 1) & 0x10200000) == 0)) {
      if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)
         ) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar5 != (undefined8 *)0x0) && (*(uint *)(puVar5 + 2) == param_1[1])) &&
           ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar2 + 1) & 0x10200000) == 0) {
            uVar3 = *puVar2;
          }
          else {
            uVar3 = 0;
          }
          if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
            uVar6 = *puVar5;
          }
          else {
            uVar6 = 0;
          }
          uVar3 = FUN_1448e494c(uVar3,uVar6);
          FUN_1401cfad2(*(undefined8 *)(param_1 + 8),local_60,*param_2);
          FUN_1400b22c2(local_70,&DAT_14afe0534);
          FUN_1401c7f3e(&local_50,local_70,local_60);
          iVar4 = local_48 + -1;
          if (local_48 == 0) {
            iVar4 = 0;
          }
          FUN_1446f82e2(&local_40,iVar4,local_50,1);
          if (local_50 != 0) {
            FUN_1400020a8();
          }
          if (local_70[0] != 0) {
            FUN_1400020a8();
          }
          if (local_60[0] != 0) {
            FUN_1400020a8();
          }
          FUN_14490d20c(uVar3,local_40,*param_3);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa3434 FUN_140fa3434 body=366 status=ok
// SIG undefined FUN_140fa3434(void)

void FUN_140fa3434(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar3 = *(uint *)(param_1 + 8), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar9 != (longlong *)0x0 && ((int)plVar9[2] == *(int *)(param_1 + 0xc))))) &&
     ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
      lVar7 = *plVar9;
    }
    else {
      lVar7 = 0;
    }
    bVar2 = *(byte *)(lVar7 + 0x152);
    if ((bVar2 != 1) && ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) goto LAB_140fa34c6;
  }
  puVar5 = (undefined8 *)*param_2;
  if ((puVar5 != (undefined8 *)0x0) && (iVar4 = *(int *)(param_1 + 0x1e8), (longlong)iVar4 != 0)) {
    lVar7 = *(longlong *)(param_1 + 0x1e0);
    lVar10 = 0;
    do {
      local_48 = *(undefined8 *)(lVar7 + lVar10);
      cVar6 = FUN_144729dda(&local_48);
      if (cVar6 != '\0') {
        plVar9 = (longlong *)FUN_14479d2ce(&local_48);
        lVar8 = FUN_1400796d0(plVar9[2],*puVar5,1);
        if (lVar8 != 0) {
          (**(code **)(*plVar9 + 0x248))(plVar9,lVar8,0);
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar4 * 8 != lVar10);
  }
LAB_140fa34c6:
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa35bc FUN_140fa35bc body=473 status=ok
// SIG undefined FUN_140fa35bc(void)

void FUN_140fa35bc(longlong param_1,longlong param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  
  if ((((param_2 != 0) && (*(int *)(param_1 + 0x23c) != 0)) &&
      (uVar8 = *(uint *)(param_1 + 0x238), -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar8 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0x23c))) &&
       ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar7 = *plVar6;
      }
      else {
        lVar7 = 0;
      }
      lVar4 = FUN_140fa3a32(param_2);
      if ((*(longlong *)(*(longlong *)(lVar7 + 0x3f8) + 0x8f0) != lVar4) ||
         (*(char *)(param_2 + 0x31) == '\x01')) {
        FUN_140fa3838(lVar7,lVar4);
        lVar4 = DAT_14cb54390;
        fVar9 = *(float *)(param_2 + 0x28);
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if ((iVar1 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar1 == 2)))) {
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
        if (*(char *)(param_2 + 0x30) == '\x01') {
          fVar9 = *(float *)(lVar4 + uVar5 * 4) / *(float *)(param_1 + 0x1f8);
          fVar10 = *(float *)(param_1 + 0x240) / *(float *)(param_1 + 0x1f8);
          uVar8 = -(uint)(fVar9 <= fVar10);
          fVar9 = (float)(uVar8 & (uint)fVar10 | ~uVar8 & (uint)fVar9);
        }
        if ((fVar9 <= 0.0) || (1.0 <= *(float *)(param_2 + 0x2c))) {
          *(undefined4 *)(param_1 + 0x248) = 0xbf800000;
          FUN_140fa3796(lVar7);
          return;
        }
        *(float *)(param_1 + 0x248) = *(float *)(param_2 + 0x2c);
        FUN_140fa38fc(*(undefined8 *)(lVar7 + 0x3f8));
        *(float *)(param_1 + 0x24c) = 1.0 / (fVar9 * *(float *)(param_1 + 0x1f8));
      }
    }
  }
  return;
}



// FUNCTION 140fa3796 FUN_140fa3796 body=70 status=ok
// SIG undefined FUN_140fa3796(void)

void FUN_140fa3796(longlong param_1)

{
  longlong lVar1;
  
  FUN_140fa37dc(*(undefined8 *)(param_1 + 0x3f8));
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + 0x8f0);
  if (lVar1 != 0) {
    FUN_140fa388e(*(undefined8 *)(param_1 + 0x3e0),*(undefined8 *)(lVar1 + 0x40));
  }
  FUN_140fa3984(param_1,1);
  return;
}



// FUNCTION 140fa37dc FUN_140fa37dc body=91 status=ok
// SIG undefined FUN_140fa37dc(void)

void FUN_140fa37dc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x8f8);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
  *(longlong *)(param_1 + 0x8f0) = lVar1;
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  FUN_14112cdf4(param_1);
  FUN_14112cb58(param_1);
  FUN_140fa38fc(param_1,0);
  return;
}



// FUNCTION 140fa3838 FUN_140fa3838 body=85 status=ok
// SIG undefined FUN_140fa3838(void)

void FUN_140fa3838(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3f8);
  if (*(longlong *)(lVar1 + 0x8f0) != 0) {
    FUN_140fa388e(*(undefined8 *)(param_1 + 0x3e0),
                  *(undefined8 *)(*(longlong *)(lVar1 + 0x8f0) + 0x40));
    lVar1 = *(longlong *)(param_1 + 0x3f8);
  }
  *(undefined8 *)(lVar1 + 0x8f8) = param_2;
  FUN_14112cdf4(lVar1);
  FUN_14112cb58(lVar1);
  return;
}



// FUNCTION 140fa388e FUN_140fa388e body=109 status=ok
// SIG undefined FUN_140fa388e(void)

void FUN_140fa388e(longlong param_1,longlong param_2)

{
  if (((((*(longlong *)(param_1 + 0xa8) != 0) &&
        ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 100) & 0x20) != 0)) ||
       ((*(byte *)(param_1 + 0x9c) & 1) == 0)) || (*(char *)(param_1 + 0x1fb) != '\0')) &&
     (*(longlong *)(param_1 + 0x2c8) != param_2)) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x2c8) = param_2;
    FUN_1448215fa(param_1);
    return;
  }
  return;
}



// FUNCTION 140fa38fc FUN_140fa38fc body=134 status=ok
// SIG undefined FUN_140fa38fc(void)

void FUN_140fa38fc(longlong param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0x668) != 0) {
    puVar1 = DAT_14cb53c60;
    if (DAT_14cb53c68 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_38,puVar1,1);
    FUN_140219d5e(param_1,local_38,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa3984 FUN_140fa3984 body=173 status=ok
// SIG undefined FUN_140fa3984(void)

uint FUN_140fa3984(longlong param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  float fVar4;
  
  uVar2 = FUN_1414e0206(*(undefined8 *)(param_1 + 0x3d0));
  uVar1 = DAT_14cb54754;
  if ((char)uVar2 != '\0') {
    if (param_2 != 0) {
      LOCK();
      DAT_14cb54754 = 0x101;
      UNLOCK();
      uVar2 = uVar1;
    }
    if (DAT_14cb54754 != 0) {
      LOCK();
      DAT_14cb54754 = DAT_14cb54754 - 1;
      UNLOCK();
      bVar3 = (DAT_14cb54754 & 0x3f) == 0;
      uVar2 = (uint)bVar3;
      param_2 = param_2 | bVar3;
    }
    if (((param_2 != 0) ||
        (fVar4 = *(float *)(param_1 + 0x428) - *(float *)(param_1 + 0x520),
        1.0 / (1440.0 / *(float *)(param_1 + 0x4f0)) <= fVar4)) || (fVar4 < 0.0)) {
      uVar2 = FUN_14349bdfc(*(undefined8 *)(param_1 + 0x3d0));
      *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_1 + 0x428);
    }
  }
  return uVar2;
}



// FUNCTION 140fa3a32 FUN_140fa3a32 body=386 status=ok
// SIG undefined FUN_140fa3a32(void)

longlong FUN_140fa3a32(uint *param_1)

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
  lVar7 = FUN_140fa3bb4();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140fa3bb4 FUN_140fa3bb4 body=228 status=ok
// SIG undefined FUN_140fa3bb4(void)

longlong FUN_140fa3bb4(void)

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
  if (DAT_14cb53b20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1485fc8a5;
    local_40 = FUN_1418423b1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/GbxCloudscape",L"GbxCloudscapeData",&DAT_14cb53b20,&DAT_1485fc8a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb53b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa3c9a FUN_140fa3c9a body=26 status=ok
// SIG undefined FUN_140fa3c9a(void)

longlong FUN_140fa3c9a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    lVar1 = lVar1 + 0x28;
  }
  return lVar1;
}



// FUNCTION 140fa3cf4 FUN_140fa3cf4 body=148 status=ok
// SIG undefined FUN_140fa3cf4(void)

undefined8 * FUN_140fa3cf4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = &PTR_FUN_14b7ba750;
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14b9e0f70;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar2) && (param_1[5] = puVar2, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 140fa3d88 FUN_140fa3d88 body=277 status=ok
// SIG undefined FUN_140fa3d88(void)

undefined8 FUN_140fa3d88(longlong param_1)

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
    if (iVar1 == 2) goto LAB_140fa3e97;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140fa3e97;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140fa3e97:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140fa3e45;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140fa3e45;
    }
  }
  uVar6 = 0;
LAB_140fa3e45:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa3e9e FUN_140fa3e9e body=42 status=ok
// SIG undefined FUN_140fa3e9e(void)

void FUN_140fa3e9e(longlong param_1)

{
  if (*(char *)(param_1 + 0xa48) == '\x01') {
    FUN_140b361ee(param_1,1);
  }
  *(undefined1 *)(param_1 + 0xa48) = 1;
  return;
}



// FUNCTION 140fa3ec8 FUN_140fa3ec8 body=45 status=ok
// SIG undefined FUN_140fa3ec8(void)

void FUN_140fa3ec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b50ad80;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140fa3f0c FUN_140fa3f0c body=465 status=ok
// SIG undefined FUN_140fa3f0c(void)

void FUN_140fa3f0c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
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
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_14011be0c(param_1 + 0x30);
  if (lVar5 == 0) {
LAB_140fa40b9:
    lVar5 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
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
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140fa40b9;
  }
  cVar3 = FUN_14011bf50(lVar5);
  if (cVar3 == '\0') {
    if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403adc5e(&local_30,lVar5);
  lVar5 = *(longlong *)(local_30 + 0x60);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xb0));
  *(int *)(lVar5 + 0xa8) = *(int *)(lVar5 + 0xa8) + 1;
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
  if (*(char *)(lVar5 + 8) == '\0') {
    iVar4 = *(int *)(lVar5 + 0xc) + 1;
  }
  else {
    if (*(int *)(lVar5 + 0xc) != 0) goto LAB_140fa3fd2;
    iVar4 = 1;
  }
  *(undefined1 *)(lVar5 + 8) = 1;
  *(int *)(lVar5 + 0xc) = iVar4;
LAB_140fa3fd2:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140fa4108 FUN_140fa4108 body=465 status=ok
// SIG undefined FUN_140fa4108(void)

void FUN_140fa4108(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
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
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_14011be0c(param_1 + 0x30);
  if (lVar5 == 0) {
LAB_140fa42b5:
    lVar5 = 0;
  }
  else {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
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
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140fa42b5;
  }
  cVar3 = FUN_14011bf50(lVar5);
  if (cVar3 == '\0') {
    if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403adc5e(&local_30,lVar5);
  lVar5 = *(longlong *)(local_30 + 0x60);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0xb0));
  *(int *)(lVar5 + 0xa8) = *(int *)(lVar5 + 0xa8) + 1;
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
  if (*(char *)(lVar5 + 8) == '\0') {
    if (*(int *)(lVar5 + 0xc) != 0) goto LAB_140fa41ce;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(lVar5 + 0xc) + 1;
  }
  *(undefined1 *)(lVar5 + 8) = 0;
  *(int *)(lVar5 + 0xc) = iVar4;
LAB_140fa41ce:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140fa42ee FUN_140fa42ee body=40 status=ok
// SIG undefined FUN_140fa42ee(void)

undefined8 FUN_140fa42ee(undefined8 param_1,int param_2)

{
  FUN_140fa4316();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa4316 FUN_140fa4316 body=104 status=ok
// SIG undefined FUN_140fa4316(void)

void FUN_140fa4316(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7316c0;
  param_1[5] = &PTR_FUN_14b731b50;
  param_1[6] = &PTR_LAB_14b731b90;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  FUN_140fa437e(param_1);
  return;
}



// FUNCTION 140fa437e FUN_140fa437e body=110 status=ok
// SIG undefined FUN_140fa437e(void)

void FUN_140fa437e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b508d60;
  param_1[5] = &PTR_FUN_14b5091f0;
  param_1[6] = &PTR_LAB_14b509230;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e852(param_1);
  return;
}



// FUNCTION 140fa43ec FUN_140fa43ec body=110 status=ok
// SIG undefined FUN_140fa43ec(void)

void FUN_140fa43ec(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 0x20, 0x20 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x20c)) {
    return;
  }
  *(int *)(param_1 + 0x20c) = (int)uVar2;
  FUN_140fa445a(param_1,*(undefined4 *)(param_1 + 0x208),uVar2,0x10);
  return;
}



// FUNCTION 140fa445a FUN_140fa445a body=141 status=ok
// SIG undefined FUN_140fa445a(void)

void FUN_140fa445a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x200);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x200,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,param_3,param_4);
  return;
}



// FUNCTION 140fa44e8 FUN_140fa44e8 body=136 status=ok
// SIG undefined FUN_140fa44e8(void)

undefined8 * FUN_140fa44e8(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a1744a0;
  param_1[1] = param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140fa4598(param_1 + 2,iVar1);
    FUN_140fa4570(param_1[2],uVar2,iVar1);
  }
  param_1[4] = *(undefined8 *)(param_2 + 0xa0);
  lVar3 = *(longlong *)(param_2 + 0xa8);
  param_1[5] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 140fa4570 FUN_140fa4570 body=40 status=ok
// SIG undefined FUN_140fa4570(void)

void FUN_140fa4570(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 140fa4598 FUN_140fa4598 body=213 status=ok
// SIG undefined FUN_140fa4598(void)

void FUN_140fa4598(longlong param_1,int param_2)

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



// FUNCTION 140fa466d FUN_140fa466d body=370 status=ok
// SIG undefined FUN_140fa466d(void)

void FUN_140fa466d(longlong *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar2 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar2;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar2 = &PTR_FUN_14a59b510;
  *(undefined1 *)(puVar2 + 5) = 0;
  FUN_140056680(&local_48,L"/Engine/Sequencer/DefaultBurnIn.DefaultBurnIn_C");
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  local_38 = local_48;
  local_30 = local_40 + -1;
  if (local_40 == 0) {
    local_30 = 0;
  }
  FUN_14475bf92(puVar2 + 6);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  puVar2[10] = 0;
  lVar6 = FUN_140fa47e0();
  puVar7 = *(undefined8 **)(lVar6 + 0x110);
  if (puVar7 == (undefined8 *)0x0) {
    FUN_140aa6c08(lVar6);
    puVar7 = *(undefined8 **)(lVar6 + 0x110);
    if (puVar7 == (undefined8 *)0x0) goto LAB_140fa4789;
  }
  if (puVar7[6] != 0) {
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0x34);
    uVar4 = *(undefined4 *)(puVar7 + 7);
    uVar5 = *(undefined4 *)((longlong)puVar7 + 0x3c);
    *(undefined4 *)(puVar2 + 6) = *(undefined4 *)(puVar7 + 6);
    *(undefined4 *)((longlong)puVar2 + 0x34) = uVar3;
    *(undefined4 *)(puVar2 + 7) = uVar4;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar5;
    if (puVar7 != puVar2) {
      iVar1 = *(int *)(puVar7 + 9);
      _Src = (void *)puVar7[8];
      *(int *)(puVar2 + 9) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)puVar2 + 0x4c) == 0) {
        *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
      }
      else {
        FUN_1446dd670(puVar2 + 8,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)puVar2[8],_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
LAB_140fa4789:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa47e0 FUN_140fa47e0 body=221 status=ok
// SIG undefined FUN_140fa47e0(void)

longlong FUN_140fa47e0(void)

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
  if (DAT_14cabcaf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14781c740;
    local_40 = FUN_140fa466d;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/LevelSequence",L"LevelSequenceBurnInOptions",&DAT_14cabcaf0,
                  FUN_14636761c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabcaf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa48be FUN_140fa48be body=138 status=ok
// SIG undefined FUN_140fa48be(void)

void FUN_140fa48be(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_140fa4948((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2 * 8) =
       *(undefined8 *)(lVar1 + (longlong)(int)param_2 * 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)(*(longlong *)(param_1 + 8) + (longlong)(int)param_2 * 8),
            (void *)(*(longlong *)(param_1 + 8) + (longlong)(iVar2 - iVar4) * 8),
            (longlong)iVar4 << 3);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 140fa4948 FUN_140fa4948 body=353 status=ok
// SIG undefined FUN_140fa4948(void)

void FUN_140fa4948(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140fa49cf;
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
LAB_140fa49cf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140fa4aaa FUN_140fa4aaa body=1250 status=ok
// SIG undefined FUN_140fa4aaa(void)

undefined8 FUN_140fa4aaa(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
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
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  byte bVar22;
  undefined1 uVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  
  if (param_4 != 0) {
    lVar26 = 0;
    do {
      lVar25 = param_3 + lVar26;
      lVar2 = param_2 + 0x20 + lVar26;
      *(undefined2 *)(lVar2 + -0x10) = *(undefined2 *)(lVar25 + 0x10);
      *(undefined8 *)(lVar2 + -0x18) = *(undefined8 *)(lVar25 + 8);
      *(undefined1 *)(lVar2 + -8) = *(undefined1 *)(lVar25 + 0x18);
      FUN_1404306dc(lVar2,lVar25 + 0x20);
      uVar7 = *(undefined4 *)(lVar25 + 0x34);
      uVar8 = *(undefined4 *)(lVar25 + 0x38);
      uVar9 = *(undefined4 *)(lVar25 + 0x3c);
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar25 + 0x30);
      *(undefined4 *)(lVar2 + 0x14) = uVar7;
      *(undefined4 *)(lVar2 + 0x18) = uVar8;
      *(undefined4 *)(lVar2 + 0x1c) = uVar9;
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar25 + 0x40);
      lVar25 = param_2 + 0x48 + lVar26;
      FUN_140430734(lVar25,param_3 + lVar26 + 0x48);
      *(undefined8 *)(lVar25 + 0x10) = *(undefined8 *)(param_3 + lVar26 + 0x58);
      if (param_2 != param_3) {
        if (*(char *)(param_3 + 100 + lVar26) == '\x01') {
          *(undefined4 *)(param_2 + 0x60 + lVar26) = *(undefined4 *)(param_3 + 0x60 + lVar26);
          uVar23 = 1;
        }
        else {
          if (*(char *)(param_2 + 100 + lVar26) != '\x01') goto LAB_140fa4b4b;
          uVar23 = 0;
        }
        *(undefined1 *)(param_2 + 100 + lVar26) = uVar23;
      }
LAB_140fa4b4b:
      lVar25 = param_3 + lVar26;
      lVar2 = param_2 + lVar26;
      lVar24 = param_2 + lVar26;
      lVar1 = param_3 + lVar26;
      FUN_14043078c(lVar24 + 0x68,lVar1 + 0x68);
      FUN_1404307f4(lVar2 + 0x100,lVar25 + 0x100);
      uVar7 = *(undefined4 *)(lVar1 + 0x134);
      uVar8 = *(undefined4 *)(lVar1 + 0x138);
      uVar9 = *(undefined4 *)(lVar1 + 0x13c);
      *(undefined4 *)(lVar24 + 0x130) = *(undefined4 *)(lVar1 + 0x130);
      *(undefined4 *)(lVar24 + 0x134) = uVar7;
      *(undefined4 *)(lVar24 + 0x138) = uVar8;
      *(undefined4 *)(lVar24 + 0x13c) = uVar9;
      *(undefined8 *)(lVar24 + 0x140) = *(undefined8 *)(lVar1 + 0x140);
      if (lVar2 != lVar25) {
        iVar5 = *(int *)(param_3 + 0x150 + lVar26);
        uVar6 = *(undefined8 *)(param_3 + 0x148 + lVar26);
        *(int *)(param_2 + 0x150 + lVar26) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x154 + lVar26) == 0) {
          *(undefined4 *)(param_2 + 0x154 + lVar26) = 0;
        }
        else {
          puVar28 = (undefined8 *)(param_2 + lVar26 + 0x148);
          FUN_140fa4f8c(puVar28,iVar5);
          FUN_140fa5071(*puVar28,uVar6,iVar5);
        }
      }
      *(undefined1 *)(param_2 + 0x15c + lVar26) = *(undefined1 *)(param_3 + 0x15c + lVar26);
      *(undefined4 *)(param_2 + 0x158 + lVar26) = *(undefined4 *)(param_3 + 0x158 + lVar26);
      lVar24 = *(longlong *)(param_3 + 0x160 + lVar26);
      if (DAT_14c950c29 == 1) {
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          FUN_14689c22e();
          lVar24 = *(longlong *)(param_3 + 0x160 + lVar26);
        }
      }
      bVar22 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x160 + lVar26) = lVar24;
      lVar24 = *(longlong *)(param_3 + 0x168 + lVar26);
      if ((bVar22 & 1) != 0) {
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          FUN_14689c22e();
          lVar24 = *(longlong *)(param_3 + 0x168 + lVar26);
          bVar22 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x168 + lVar26) = lVar24;
      *(undefined1 *)(param_2 + 0x170 + lVar26) = *(undefined1 *)(param_3 + 0x170 + lVar26);
      *(undefined1 *)(param_2 + 0x17c + lVar26) = *(undefined1 *)(param_3 + 0x17c + lVar26);
      *(undefined4 *)(param_2 + 0x178 + lVar26) = *(undefined4 *)(param_3 + 0x178 + lVar26);
      lVar24 = *(longlong *)(param_3 + 0x180 + lVar26);
      if ((bVar22 & 1) != 0) {
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          FUN_14689c22e();
          lVar24 = *(longlong *)(param_3 + 0x180 + lVar26);
          bVar22 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x180 + lVar26) = lVar24;
      lVar24 = *(longlong *)(param_3 + 0x188 + lVar26);
      if ((bVar22 & 1) != 0) {
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          FUN_14689c22e();
          lVar24 = *(longlong *)(param_3 + 0x188 + lVar26);
          bVar22 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x188 + lVar26) = lVar24;
      *(undefined1 *)(param_2 + 400 + lVar26) = *(undefined1 *)(param_3 + 400 + lVar26);
      *(undefined2 *)(param_2 + 0x1a8 + lVar26) = *(undefined2 *)(param_3 + 0x1a8 + lVar26);
      *(undefined8 *)(param_2 + 0x1a0 + lVar26) = *(undefined8 *)(param_3 + 0x1a0 + lVar26);
      puVar3 = (undefined4 *)(param_3 + 0x1b0 + lVar26);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x1c0 + lVar26);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x1b0 + lVar26);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar3 = (undefined4 *)(param_2 + 0x1c0 + lVar26);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      *(undefined8 *)(param_2 + 0x1cd + lVar26) = *(undefined8 *)(param_3 + 0x1cd + lVar26);
      *(undefined8 *)(param_2 + 0x1d8 + lVar26) = *(undefined8 *)(param_3 + 0x1d8 + lVar26);
      *(undefined4 *)(param_2 + 0x1e8 + lVar26) = *(undefined4 *)(param_3 + 0x1e8 + lVar26);
      *(undefined8 *)(param_2 + 0x1e0 + lVar26) = *(undefined8 *)(param_3 + 0x1e0 + lVar26);
      lVar24 = *(longlong *)(param_3 + 0x1f0 + lVar26);
      if ((bVar22 & 1) != 0) {
        if (lVar24 == 0) {
          lVar24 = 0;
        }
        else {
          FUN_14689c22e();
          lVar24 = *(longlong *)(param_3 + 0x1f0 + lVar26);
          bVar22 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x1f0 + lVar26) = lVar24;
      puVar3 = (undefined4 *)(param_3 + 0x1f8 + lVar26);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x208 + lVar26);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0x218 + lVar26);
      uVar14 = *puVar4;
      uVar15 = puVar4[1];
      uVar16 = puVar4[2];
      uVar17 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0x222 + lVar26);
      uVar18 = *puVar4;
      uVar19 = puVar4[1];
      uVar20 = puVar4[2];
      uVar21 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x1f8 + lVar26);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar3 = (undefined4 *)(param_2 + 0x208 + lVar26);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      puVar3 = (undefined4 *)(param_2 + 0x218 + lVar26);
      *puVar3 = uVar14;
      puVar3[1] = uVar15;
      puVar3[2] = uVar16;
      puVar3[3] = uVar17;
      puVar3 = (undefined4 *)(param_2 + 0x222 + lVar26);
      *puVar3 = uVar18;
      puVar3[1] = uVar19;
      puVar3[2] = uVar20;
      puVar3[3] = uVar21;
      puVar28 = (undefined8 *)(lVar25 + 0x238);
      puVar27 = (undefined8 *)(lVar2 + 0x238);
      for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
        *puVar27 = *puVar28;
        puVar28 = puVar28 + 1;
        puVar27 = puVar27 + 1;
      }
      *(undefined4 *)(param_2 + 0x2a0 + lVar26) = *(undefined4 *)(param_3 + 0x2a0 + lVar26);
      *(undefined8 *)(param_2 + 0x298 + lVar26) = *(undefined8 *)(param_3 + 0x298 + lVar26);
      *(undefined1 *)(param_2 + 0x2ac + lVar26) = *(undefined1 *)(param_3 + 0x2ac + lVar26);
      *(undefined4 *)(param_2 + 0x2a8 + lVar26) = *(undefined4 *)(param_3 + 0x2a8 + lVar26);
      lVar25 = *(longlong *)(param_3 + 0x2b0 + lVar26);
      if ((bVar22 & 1) != 0) {
        if (lVar25 == 0) {
          lVar25 = 0;
        }
        else {
          FUN_14689c22e();
          lVar25 = *(longlong *)(param_3 + 0x2b0 + lVar26);
          bVar22 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + 0x2b0 + lVar26) = lVar25;
      lVar25 = *(longlong *)(param_3 + 0x2b8 + lVar26);
      if ((bVar22 & 1) != 0) {
        if (lVar25 == 0) {
          lVar25 = 0;
        }
        else {
          FUN_14689c22e();
          lVar25 = *(longlong *)(param_3 + 0x2b8 + lVar26);
        }
      }
      *(longlong *)(param_2 + 0x2b8 + lVar26) = lVar25;
      *(undefined1 *)(param_2 + 0x2c0 + lVar26) = *(undefined1 *)(param_3 + 0x2c0 + lVar26);
      lVar26 = lVar26 + 0x2c8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140fa4f8c FUN_140fa4f8c body=229 status=ok
// SIG undefined FUN_140fa4f8c(void)

void FUN_140fa4f8c(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140fa5071 FUN_140fa5071 body=349 status=ok
// SIG undefined FUN_140fa5071(void)

void FUN_140fa5071(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
      lVar2 = *(longlong *)(param_2 + 8 + lVar6);
      *(longlong *)(param_1 + 8 + lVar6) = lVar2;
      if (((bVar5 & 1) != 0) && (lVar2 != 0)) {
        FUN_14689c22e();
        bVar5 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar6;
      lVar1 = param_2 + lVar6;
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(lVar2 + 0x1d) = *(undefined8 *)(lVar1 + 0x1d);
      *(undefined8 *)(lVar2 + 0x18) = uVar3;
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x2c) = *(undefined1 *)(lVar1 + 0x2c);
      lVar4 = *(longlong *)(lVar1 + 0x30);
      *(longlong *)(lVar2 + 0x30) = lVar4;
      if (((bVar5 & 1) != 0) && (lVar4 != 0)) {
        FUN_14689c22e();
        bVar5 = DAT_14c950c29;
      }
      lVar4 = *(longlong *)(lVar1 + 0x38);
      *(longlong *)(lVar2 + 0x38) = lVar4;
      if (((bVar5 & 1) != 0) && (lVar4 != 0)) {
        FUN_14689c22e();
        bVar5 = DAT_14c950c29;
      }
      *(undefined1 *)(lVar2 + 0x40) = *(undefined1 *)(lVar1 + 0x40);
      *(undefined1 *)(lVar2 + 0x48) = *(undefined1 *)(lVar1 + 0x48);
      *(undefined4 *)(lVar2 + 0x50) = *(undefined4 *)(lVar1 + 0x50);
      *(undefined1 *)(lVar2 + 0x54) = *(undefined1 *)(lVar1 + 0x54);
      lVar4 = *(longlong *)(lVar1 + 0x58);
      *(longlong *)(lVar2 + 0x58) = lVar4;
      if (((bVar5 & 1) != 0) && (lVar4 != 0)) {
        FUN_14689c22e();
        bVar5 = DAT_14c950c29;
      }
      lVar4 = *(longlong *)(lVar1 + 0x60);
      *(longlong *)(lVar2 + 0x60) = lVar4;
      if (((bVar5 & 1) != 0) && (lVar4 != 0)) {
        FUN_14689c22e();
        bVar5 = DAT_14c950c29;
      }
      *(undefined1 *)(lVar2 + 0x68) = *(undefined1 *)(lVar1 + 0x68);
      lVar6 = lVar6 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140fa51dc FUN_140fa51dc body=115 status=ok
// SIG undefined FUN_140fa51dc(void)

undefined8 * FUN_140fa51dc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a426730;
  FUN_1448d844e(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140280a77(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa524f FUN_140fa524f body=38 status=ok
// SIG undefined FUN_140fa524f(void)

void FUN_140fa524f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140fa5276(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 140fa5276 FUN_140fa5276 body=61 status=ok
// SIG undefined FUN_140fa5276(void)

void FUN_140fa5276(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 8) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 8) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140fa52b4 FUN_140fa52b4 body=61 status=ok
// SIG undefined FUN_140fa52b4(void)

void FUN_140fa52b4(longlong param_1)

{
  FUN_140fa52f1(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fa52f1 FUN_140fa52f1 body=54 status=ok
// SIG undefined FUN_140fa52f1(void)

void FUN_140fa52f1(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140fa5328 FUN_140fa5328 body=572 status=ok
// SIG undefined FUN_140fa5328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fa5328(void)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = 0x100000000;
  local_58 = &DAT_14cab2a28;
  local_50 = 0xffffffff;
  local_48 = 0;
  if (DAT_14cab2a40 == 0) {
    uVar12 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar12 = local_60 >> 0x20;
  }
  puVar4 = local_58;
  iVar8 = (int)local_60;
  uVar9 = (uint)local_50;
  iVar6 = local_50._4_4_;
  iVar10 = local_48;
  if (local_50._4_4_ < *(int *)(local_58 + 0x18)) {
    do {
      lVar13 = DAT_14cab2a18;
      lVar11 = (longlong)iVar6 * 0x60;
      FUN_140fa52f1(*(undefined8 *)(DAT_14cab2a18 + 0x48 + lVar11),
                    *(undefined4 *)(DAT_14cab2a18 + 0x50 + lVar11));
      if (*(longlong *)(lVar13 + 0x48 + lVar11) != 0) {
        FUN_1400020a8();
      }
      lVar13 = lVar13 + lVar11;
      if (*(longlong *)(lVar13 + 0x38) != 0) {
        FUN_1400020a8();
      }
      FUN_140fa52f1(*(undefined8 *)(lVar13 + 0x20),*(undefined4 *)(lVar13 + 0x28));
      if (*(longlong *)(lVar13 + 0x20) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar13 + 0x10) != 0) {
        FUN_1400020a8();
      }
      uVar9 = uVar9 & ~(uint)uVar12;
      puVar7 = *(undefined **)(puVar4 + 0x10);
      if (*(undefined **)(puVar4 + 0x10) == (undefined *)0x0) {
        puVar7 = puVar4;
      }
      iVar2 = *(int *)(puVar4 + 0x18);
      lVar13 = (longlong)iVar8;
      uVar5 = *(uint *)(puVar7 + lVar13 * 4) & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar8) {
          iVar3 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar11 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)(puVar7 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar3 - lVar13 == lVar11) goto LAB_140fa54cc;
        }
        iVar8 = iVar8 + (int)lVar11 + 1;
        uVar9 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140fa54cc:
  _DAT_14cab2a20 = 0;
  if (DAT_14cab2a24 != 0) {
    FUN_1448fc38a(&DAT_14cab2a18,0);
  }
  _DAT_14cab2a48 = 0xffffffff;
  DAT_14cab2a40 = 0;
  if (0x80 < DAT_14cab2a44) {
    DAT_14cab2a44 = 0x80;
    FUN_1446efbd8(&DAT_14cab2a28,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa5566 FUN_140fa5566 body=85 status=ok
// SIG undefined FUN_140fa5566(void)

void FUN_140fa5566(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140fa55bc();
  if (lVar1 != 0) {
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_14480f766(lVar1 + 0x1200);
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    FUN_140f19034(param_1,lVar1);
    return;
  }
  return;
}



// FUNCTION 140fa55bc FUN_140fa55bc body=351 status=ok
// SIG undefined FUN_140fa55bc(void)

longlong FUN_140fa55bc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0)))) &&
     ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c) &&
      (((*(uint *)(lVar2 + 8) & 0x10200000) == 0 &&
       (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(), lVar2 != 0)))))) {
    if (DAT_14cb5b388 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146431698;
      local_38 = &LAB_1486775cb;
      local_40 = &LAB_1464cee35;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 0x10;
      local_68 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) goto LAB_140fa5624;
  }
  lVar2 = 0;
LAB_140fa5624:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140fa572a FUN_140fa572a body=77 status=ok
// SIG undefined FUN_140fa572a(void)

undefined8 * FUN_140fa572a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b694088;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa5778 FUN_140fa5778 body=40 status=ok
// SIG undefined FUN_140fa5778(void)

undefined8 FUN_140fa5778(undefined8 param_1,int param_2)

{
  FUN_140fa57a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa57a0 FUN_140fa57a0 body=107 status=ok
// SIG undefined FUN_140fa57a0(void)

void FUN_140fa57a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b080a30;
  param_1[0x72] = &PTR_FUN_14b081070;
  param_1[0x73] = &PTR_FUN_14b081090;
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f4a8(param_1 + 0x74);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140fa580c FUN_140fa580c body=103 status=ok
// SIG undefined FUN_140fa580c(void)

ulonglong FUN_140fa580c(longlong param_1)

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
LAB_140fa5856:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140fa5856;
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



// FUNCTION 140fa5880 FUN_140fa5880 body=1425 status=ok
// SIG undefined FUN_140fa5880(void)

void FUN_140fa5880(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint ****ppppuVar11;
  int iVar12;
  int iVar13;
  undefined *puVar14;
  int *piVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  uint ***local_a0 [3];
  ushort local_88;
  undefined6 uStack_86;
  byte local_80;
  char local_78 [16];
  longlong *local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar9 = FUN_1447210f0();
  lVar10 = FUN_140149a73(uVar9,0);
  if ((lVar10 != 0) && (local_b8 = FUN_140d84236(lVar10), local_b8 != 0)) {
    uVar9 = FUN_140df7d20(uVar9);
    local_78[0] = '\0';
    local_50 = 0;
    FUN_1456bb102(local_78,uVar9);
    if ((longlong)*(int *)(param_2 + 1) != 0) {
      piVar15 = (int *)*param_2;
      piVar1 = piVar15 + (longlong)*(int *)(param_2 + 1) * 3;
      local_c0 = (longlong *)(param_1 + 0x7a0);
      local_c8 = (longlong *)(param_1 + 0x750);
      bVar18 = false;
      do {
        while( true ) {
          local_b0 = *(undefined8 *)piVar15;
          local_a8 = piVar15[2];
          FUN_1448075d0(local_a0,&local_b0);
          lVar10 = FUN_140fa5e12(local_a0);
          if (CONCAT62(uStack_86,local_88) != 0) {
            FUN_1400020a8();
          }
          if (lVar10 != 0) break;
LAB_140fa59d1:
          piVar15 = piVar15 + 3;
          if (piVar15 == piVar1) {
            if (!bVar18) goto LAB_140fa5bcb;
            goto LAB_140fa5c5d;
          }
        }
        lVar17 = *(longlong *)(lVar10 + 0x7a8);
        if (lVar17 == 0) {
          uVar9 = FUN_14086ad12();
          lVar17 = FUN_14477b664(uVar9);
          *(longlong *)(lVar10 + 0x7a8) = lVar17;
        }
        plVar2 = (longlong *)(lVar10 + 0x7a0);
        if (*(longlong *)(lVar10 + 0x7b0) == 0) {
          if ((lVar17 != 0) && (*plVar2 != 0)) {
            plVar4 = *(longlong **)(lVar17 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
LAB_140fa5e02:
              *(undefined8 *)(lVar10 + 0x7b0) = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar17 = FUN_144aff482(uVar9,plVar2);
              *(longlong *)(lVar10 + 0x7b0) = lVar17;
              if (lVar17 != 0) goto LAB_140fa5991;
            }
          }
          goto LAB_140fa59d1;
        }
LAB_140fa5991:
        if ((longlong)*(int *)(param_1 + 0x7a8) != 0) {
          lVar17 = 0;
          do {
            if ((*(int *)(*(longlong *)(param_1 + 0x7a0) + lVar17) == *piVar15) &&
               (*(int *)(*(longlong *)(param_1 + 0x7a0) + 8 + lVar17) == piVar15[2]))
            goto LAB_140fa59d1;
            lVar17 = lVar17 + 0xc;
          } while ((longlong)*(int *)(param_1 + 0x7a8) * 0xc != lVar17);
        }
        cVar7 = FUN_140fa5e9e(lVar10 + 0x5e0,local_b8);
        if (cVar7 == '\0') goto LAB_140fa59d1;
        iVar12 = *(int *)(param_1 + 0x7a8);
        *(uint *)(param_1 + 0x7a8) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0x7ac) < iVar12 + 1U) {
          FUN_1446dd912(local_c0,iVar12);
        }
        lVar17 = *local_c0;
        *(int *)(lVar17 + 8 + (longlong)iVar12 * 0xc) = piVar15[2];
        *(undefined8 *)(lVar17 + (longlong)iVar12 * 0xc) = *(undefined8 *)piVar15;
        FUN_1448729ea(lVar10 + 0x7b8,local_a0);
        uVar8 = FUN_140fa5f12(local_a0,0);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
        if (pcVar5 != (code *)0x0) {
          ppppuVar11 = local_a0;
          if (0x18 < local_88) {
            ppppuVar11 = (uint ****)local_a0[0];
          }
          (*pcVar5)(ppppuVar11);
        }
        if (0x18 < local_88) {
          FUN_1400020a8(local_a0[0]);
        }
        if (uVar8 == 0) goto LAB_140fa59d1;
        lVar17 = *(longlong *)(lVar10 + 0x7a8);
        if (lVar17 == 0) {
          uVar9 = FUN_14086ad12();
          lVar17 = FUN_14477b664(uVar9);
          *(longlong *)(lVar10 + 0x7a8) = lVar17;
        }
        lVar16 = *(longlong *)(lVar10 + 0x7b0);
        if (lVar16 == 0) {
          if ((lVar17 != 0) && (*plVar2 != 0)) {
            local_d0 = *(longlong **)(lVar17 + 0xb8);
            if ((local_d0 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*local_d0 + 0x108))(), cVar7 == '\0')) goto LAB_140fa5e02;
            uVar9 = (**(code **)(*local_d0 + 0x110))();
            lVar16 = FUN_144aff482(uVar9,plVar2);
            *(longlong *)(lVar10 + 0x7b0) = lVar16;
            if (lVar16 != 0) goto LAB_140fa5b08;
          }
          goto LAB_140fa59d1;
        }
LAB_140fa5b08:
        lVar10 = FUN_140307b1c(lVar16);
        plVar2 = local_c8;
        if (lVar10 == 0) goto LAB_140fa59d1;
        ppppuVar11 = *(uint *****)(lVar10 + 8);
        if (ppppuVar11 == (uint ****)0x0) {
          ppppuVar11 = (uint ****)&DAT_14c9485f0;
        }
        uVar3 = *(uint *)ppppuVar11;
        if (*(int *)(param_1 + 0x758) != *(int *)(param_1 + 0x784)) {
          lVar10 = param_1 + 0x788;
          if (*(longlong *)(param_1 + 0x790) != 0) {
            lVar10 = *(longlong *)(param_1 + 0x790);
          }
          iVar12 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x798) - 1U & uVar3) * 4);
          if (iVar12 != -1) {
            do {
              lVar10 = *local_c8 + (longlong)iVar12 * 0x40;
              if (*(uint *)(*local_c8 + (longlong)iVar12 * 0x40) == uVar3) {
                if (lVar10 != 0) goto LAB_140fa5b9c;
                break;
              }
              iVar12 = *(int *)(lVar10 + 0x38);
            } while (iVar12 != -1);
          }
        }
        local_a0[0] = (uint ***)ppppuVar11;
        FUN_1457d9d06(local_c8,&local_a4,uVar3,local_a0);
        lVar10 = *plVar2 + (longlong)local_a4 * 0x40;
LAB_140fa5b9c:
        *(longlong *)(lVar10 + 0x28) = *(longlong *)(lVar10 + 0x28) + (ulonglong)uVar8;
        piVar15 = piVar15 + 3;
        bVar18 = true;
      } while (piVar15 != piVar1);
LAB_140fa5c5d:
      FUN_14150518c(param_1);
    }
LAB_140fa5bcb:
    lVar10 = DAT_14c9a3da0;
    if ((longlong)local_50 != 0) {
      lVar17 = (longlong)local_50 + -1;
      lVar16 = lVar17 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
      if (*(longlong *)(lVar10 + lVar16) != 0) {
        FUN_1400020a8();
      }
      lVar10 = DAT_14c9a3da0;
      iVar12 = (int)lVar17;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
      }
      *(undefined4 *)(lVar10 + lVar16) = 0xffffffff;
      iVar13 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar13 = DAT_14c9a3dd0;
      }
      *(int *)(lVar10 + 4 + lVar16) = iVar13;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar14 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar14 = DAT_14c9a3dc0;
      }
      iVar13 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar13 = iVar12;
      }
      bVar6 = (byte)lVar17 & 0x1f;
      DAT_14c9a3dd0 = iVar12;
      *(uint *)(puVar14 + (longlong)(iVar13 >> 5) * 4) =
           *(uint *)(puVar14 + (longlong)(iVar13 >> 5) * 4) &
           (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
      local_50 = 0;
    }
    if ((local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_68 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa5e12 FUN_140fa5e12 body=82 status=ok
// SIG undefined FUN_140fa5e12(void)

longlong * FUN_140fa5e12(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14060eaf6();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_140fa5e64();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140fa5e64 FUN_140fa5e64 body=57 status=ok
// SIG undefined FUN_140fa5e64(void)

void FUN_140fa5e64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbacd90 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbacd90 = FUN_140002ddd(FUN_1465e4524,uVar1,L"OakMissionDef");
  }
  return;
}



// FUNCTION 140fa5e9e FUN_140fa5e9e body=116 status=ok
// SIG undefined FUN_140fa5e9e(void)

ulonglong FUN_140fa5e9e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_2 == (longlong *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (0 < (int)param_1[1]) {
      uVar2 = (**(code **)(*param_2 + 0x2b0))(param_2);
      if ((longlong)(int)param_1[1] != 0) {
        lVar3 = *param_1;
        lVar5 = (longlong)(int)param_1[1] * 0x30;
        do {
          lVar5 = lVar5 + -0x30;
          uVar1 = FUN_1457d9c7e(lVar3,uVar2);
          uVar4 = (ulonglong)uVar1;
          if ((char)uVar1 == '\0') break;
          lVar3 = lVar3 + 0x30;
        } while (lVar5 != 0);
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 140fa5f12 FUN_140fa5f12 body=189 status=ok
// SIG undefined FUN_140fa5f12(void)

int FUN_140fa5f12(longlong param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x20) == '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  piVar3 = &local_48;
  FUN_1400b56fe(piVar3,param_1,2);
  iVar2 = 0;
  if (0 < local_48) {
    iVar2 = local_48;
  }
  if (local_28 == 0) {
    iVar2 = param_2;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_30) {
      piVar3 = (int *)CONCAT44(uStack_44,local_48);
    }
    (*pcVar1)(piVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(CONCAT44(uStack_44,local_48));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa5fd2 FUN_140fa5fd2 body=1 status=ok
// SIG undefined FUN_140fa5fd2(void)

void FUN_140fa5fd2(void)

{
  return;
}



// FUNCTION 140fa5fd4 FUN_140fa5fd4 body=17 status=ok
// SIG undefined FUN_140fa5fd4(void)

void FUN_140fa5fd4(longlong param_1,undefined8 param_2)

{
  FUN_144928d62(param_1 + 0x10,1,param_2);
  return;
}



// FUNCTION 140fa5fe6 FUN_140fa5fe6 body=17 status=ok
// SIG undefined FUN_140fa5fe6(void)

void FUN_140fa5fe6(longlong param_1,undefined8 param_2)

{
  FUN_144928d62(param_1 + 0x10,4,param_2);
  return;
}



// FUNCTION 140fa5ff8 FUN_140fa5ff8 body=17 status=ok
// SIG undefined FUN_140fa5ff8(void)

void FUN_140fa5ff8(longlong param_1,undefined8 param_2)

{
  FUN_144928d62(param_1 + 0x10,2,param_2);
  return;
}



// FUNCTION 140fa600a FUN_140fa600a body=129 status=ok
// SIG undefined FUN_140fa600a(void)

undefined8 * FUN_140fa600a(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(longlong *)(param_1 + 0x4d8);
  if ((local_18 == 0 & *(byte *)(param_1 + 0x750)) == 1) {
    *(undefined4 *)(param_2 + 1) = DAT_14cb88800;
    *param_2 = DAT_14cb887f8;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_1401533ba(param_2,&local_18,1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa608e FUN_140fa608e body=38 status=ok
// SIG undefined FUN_140fa608e(void)

undefined8 FUN_140fa608e(undefined8 param_1,int param_2)

{
  FUN_140fa60b4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa60b4 FUN_140fa60b4 body=198 status=ok
// SIG undefined FUN_140fa60b4(void)

void FUN_140fa60b4(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aad7d00;
  param_1[10] = &PTR_FUN_14aad7dd0;
  param_1[0xc] = &PTR_FUN_14aad7e50;
  if ((longlong *)param_1[0x19] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x19] + 0x38))();
  }
  if (param_1[0x14] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x14] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x13] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x13] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[10] = &PTR_LAB_14aadd7d0;
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
  FUN_1401c04d8(param_1);
  return;
}



// FUNCTION 140fa6188 FUN_140fa6188 body=45 status=ok
// SIG undefined FUN_140fa6188(void)

undefined8 FUN_140fa6188(undefined8 param_1,int param_2)

{
  FUN_140fb6454();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 140fa61b6 FUN_140fa61b6 body=31 status=ok
// SIG undefined FUN_140fa61b6(void)

undefined8 FUN_140fa61b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa61d5 FUN_140fa61d5 body=266 status=ok
// SIG undefined FUN_140fa61d5(void)

undefined4 FUN_140fa61d5(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  void *_Src;
  undefined4 uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined2 *)0x0;
  local_60 = *(int *)(param_2 + 1);
  lVar3 = (longlong)local_60;
  _Src = (void *)*param_2;
  if (lVar3 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar3 * 2);
    puVar2 = local_68;
    if (local_60 != 0) goto LAB_140fa6260;
  }
  puVar2 = &DAT_149dfb77a;
LAB_140fa6260:
  uVar1 = FUN_140fa62e0(puVar2,&local_58);
  if ((char)uVar1 != '\0') {
    local_78 = local_58;
    local_70 = (int)uStack_50 + -1;
    if ((int)uStack_50 == 0) {
      local_70 = 0;
    }
    FUN_140fa6601(param_1,&local_78,param_3,param_2);
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140fa62e0 FUN_140fa62e0 body=801 status=ok
// SIG undefined FUN_140fa62e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140fa62e0(wchar_t *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  wchar_t *pwVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  LPCRITICAL_SECTION unaff_RBX;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  ulonglong uVar14;
  bool bVar15;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c866f20) && (FUN_144b3d300(&DAT_14c866f20), DAT_14c866f20 == -1)) {
    DAT_14c866f10 = 0;
    _DAT_14c866f18 = 0;
    atexit((_func_5014 *)&LAB_14277ac64);
    _Init_thread_footer(&DAT_14c866f20);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c866f38) && (FUN_144b3d300(&DAT_14c866f38), DAT_14c866f38 == -1)) {
    DAT_14c866f28 = 0;
    _DAT_14c866f30 = 0;
    atexit((_func_5014 *)&LAB_14277ac75);
    _Init_thread_footer(&DAT_14c866f38);
  }
  pwVar7 = wcsrchr(param_1,L'/');
  if ((pwVar7 == (wchar_t *)0x0) && (pwVar7 = wcsrchr(param_1,L'\\'), pwVar7 == (wchar_t *)0x0)) {
    bVar5 = false;
    bVar4 = false;
LAB_140fa6472:
    unaff_RBX = (LPCRITICAL_SECTION)FUN_14170a578();
    EnterCriticalSection(unaff_RBX);
    iVar11 = *(int *)((longlong)&unaff_RBX[1].OwningThread + 4);
    *(int *)((longlong)&unaff_RBX[1].OwningThread + 4) = iVar11 + 1;
    uVar8 = (ulonglong)unaff_RBX[1].LockCount;
    if ((longlong)uVar8 < 1) {
      *(int *)((longlong)&unaff_RBX[1].OwningThread + 4) = iVar11;
    }
    else {
      bVar15 = false;
      do {
        lVar9 = uVar8 * 0x10 + -8;
        uVar14 = uVar8;
        while (((*(int *)((longlong)&(unaff_RBX[1].DebugInfo)->Type + lVar9) != 0 &&
                (plVar2 = *(longlong **)((longlong)unaff_RBX[1].DebugInfo + lVar9 + -8),
                plVar2 != (longlong *)0x0)) &&
               (cVar6 = (**(code **)(*plVar2 + 0x60))(plVar2,param_1,param_2), cVar6 != '\0'))) {
          lVar9 = lVar9 + -0x10;
          bVar3 = uVar14 < 2;
          uVar14 = uVar14 - 1;
          if (bVar3) {
            piVar1 = (int *)((longlong)&unaff_RBX[1].OwningThread + 4);
            *piVar1 = *piVar1 + -1;
            if (bVar15) goto LAB_140fa65e3;
            goto LAB_140fa649c;
          }
        }
        uVar8 = uVar14 - 1;
        bVar15 = true;
      } while (1 < uVar14);
      piVar1 = (int *)((longlong)&unaff_RBX[1].OwningThread + 4);
      *piVar1 = *piVar1 + -1;
LAB_140fa65e3:
      FUN_14109be94(unaff_RBX,0);
    }
LAB_140fa649c:
    LeaveCriticalSection(unaff_RBX);
    if (*(uint *)(param_2 + 1) < 2) {
      unaff_RBX = (LPCRITICAL_SECTION)0x0;
      cVar6 = FUN_140f7cb10(param_2,param_1,0,0);
      if (cVar6 == '\0') goto LAB_140fa6455;
      if (bVar4) {
        iVar11 = *(int *)(param_2 + 1) + -1;
        if (*(int *)(param_2 + 1) == 0) {
          iVar11 = 0;
        }
        uVar10 = *param_2;
        param_2 = &DAT_14c866f10;
      }
      else {
        if (!bVar5) goto LAB_140fa6453;
        iVar11 = *(int *)(param_2 + 1) + -1;
        if (*(int *)(param_2 + 1) == 0) {
          iVar11 = 0;
        }
        uVar10 = *param_2;
        param_2 = &DAT_14c866f28;
      }
      goto LAB_140fa644e;
    }
  }
  else {
    lVar9 = 0;
    while( true ) {
      uVar12 = *(ushort *)((longlong)pwVar7 + lVar9 + 2);
      uVar8 = (ulonglong)uVar12;
      uVar13 = *(ushort *)((longlong)L"Base.ini" + lVar9);
      if (uVar12 != uVar13) break;
      if (uVar12 == 0) goto LAB_140fa63bc;
LAB_140fa638c:
      lVar9 = lVar9 + 2;
    }
    if ((uVar13 | uVar12) < 0x80) {
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar14 = (ulonglong)uVar13;
      uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar14]) goto LAB_140fa638c;
    }
    if (uVar12 != uVar13) {
      bVar4 = false;
      goto LAB_140fa63de;
    }
LAB_140fa63bc:
    iVar11 = DAT_14c866f18 + -1;
    if (DAT_14c866f18 == 0) {
      iVar11 = 0;
    }
    uVar10 = DAT_14c866f10;
    if (iVar11 < 1) {
      bVar4 = true;
LAB_140fa63de:
      lVar9 = 0;
      while( true ) {
        uVar12 = *(ushort *)((longlong)pwVar7 + lVar9 + 2);
        uVar8 = (ulonglong)uVar12;
        uVar13 = *(ushort *)((longlong)L"PluginBase.ini" + lVar9);
        if (uVar12 != uVar13) break;
        if (uVar12 == 0) goto LAB_140fa642e;
LAB_140fa63fd:
        lVar9 = lVar9 + 2;
      }
      if ((uVar13 | uVar12) < 0x80) {
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar14 = (ulonglong)uVar13;
        uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar14]) goto LAB_140fa63fd;
      }
      if (uVar12 != uVar13) {
        bVar5 = false;
        goto LAB_140fa6472;
      }
LAB_140fa642e:
      iVar11 = DAT_14c866f30 + -1;
      if (DAT_14c866f30 == 0) {
        iVar11 = 0;
      }
      uVar10 = DAT_14c866f28;
      if (iVar11 < 1) {
        bVar5 = true;
        goto LAB_140fa6472;
      }
    }
LAB_140fa644e:
    FUN_1402980a2(param_2,uVar10,iVar11);
  }
LAB_140fa6453:
  unaff_RBX = (LPCRITICAL_SECTION)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
LAB_140fa6455:
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// FUNCTION 140fa6601 FUN_140fa6601 body=2887 status=ok
// SIG undefined FUN_140fa6601(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fa6601(longlong param_1,longlong *param_2,char param_3,undefined8 *param_4)

{
  wchar_t *pwVar1;
  ushort uVar2;
  void *_Src;
  longlong *plVar3;
  short *psVar4;
  wchar_t wVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  wchar_t *_Str;
  longlong *plVar9;
  wchar_t wVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined *puVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined8 *puVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  bool bVar22;
  undefined1 auStack_288 [32];
  ulonglong local_268;
  undefined2 **local_260;
  undefined1 local_249;
  undefined4 local_248;
  char local_241;
  longlong local_240;
  longlong *local_238;
  longlong *local_230;
  ulonglong local_228;
  longlong local_220;
  longlong *local_218;
  undefined8 *local_210;
  longlong local_208;
  longlong local_200;
  undefined2 *local_1f8;
  int local_1f0;
  undefined2 *local_1e8;
  undefined8 uStack_1e0;
  longlong *local_1d0;
  int local_1c8;
  undefined4 local_1bc;
  undefined2 *local_1b8;
  ulonglong uStack_1b0;
  undefined2 *local_1a8;
  undefined8 uStack_1a0;
  short *local_190;
  undefined1 local_188 [8];
  wchar_t *local_180;
  wchar_t *local_178;
  ulonglong *local_170;
  char local_168;
  wchar_t local_160 [128];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_288;
  puVar19 = param_4;
  local_241 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c866f44) && (FUN_144b3d300(&DAT_14c866f44), DAT_14c866f44 == -1)) {
    FUN_1446f470e(&DAT_14c866f3c,L"ConfigFile",1);
    _Init_thread_footer(&DAT_14c866f44);
  }
  puVar13 = &DAT_149dfb77a;
  if (*(int *)(param_4 + 1) != 0) {
    puVar13 = (undefined2 *)*param_4;
  }
  local_210 = param_4;
  FUN_1446f470e(local_188,puVar13,1);
  local_190 = (short *)*param_2;
  local_1a8 = (undefined2 *)0x0;
  uStack_1a0 = 0;
  local_180 = local_160;
  local_168 = '\0';
  local_170 = local_60;
  local_208 = param_1 + 0x80;
  local_1b8 = (undefined2 *)0x0;
  uStack_1b0 = 0;
  local_240 = 0;
  local_218 = (longlong *)0x0;
  local_228 = 0;
  local_238 = (longlong *)0x0;
  local_230 = param_2;
  local_200 = param_1;
  local_178 = local_180;
  do {
    psVar4 = local_190;
    if ((longlong)(int)param_2[1] <= (longlong)local_190 - *param_2 >> 1) break;
    do {
      do {
        local_190 = psVar4;
        psVar4 = local_190 + 1;
      } while (*local_190 == 0xd);
    } while (*local_190 == 10);
    local_1bc = 0;
    uVar11 = CONCAT71((int7)((ulonglong)puVar19 >> 8),*(undefined1 *)(param_1 + 0x50)) &
             0xffffffffffffff08;
    puVar19 = (undefined8 *)CONCAT71((int7)(uVar11 >> 8),(byte)uVar11 >> 3);
    FUN_1449e675e(&local_190,&local_180,&local_1bc,puVar19);
    pwVar20 = local_180;
    if ((local_190 == (short *)0x0) || (*local_190 == 0)) {
      local_248 = (undefined4)CONCAT71((int7)((ulonglong)local_190 >> 8),1);
    }
    else {
      local_248 = 0;
    }
    *local_178 = L'\0';
LAB_140fa67ca:
    if (*pwVar20 == L'\0') {
      wVar10 = L'\0';
    }
    else {
      sVar8 = wcslen(pwVar20);
      iVar6 = iswspace(pwVar20[(longlong)(int)sVar8 + -1]);
      if (iVar6 != 0) goto code_r0x000140fa67eb;
      wVar10 = *pwVar20;
      if (wVar10 == L'[') {
        sVar8 = wcslen(pwVar20);
        wVar10 = L'[';
        if (pwVar20[(longlong)(int)sVar8 + -1] == L']') {
          sVar8 = wcslen(pwVar20 + 1);
          pwVar20[(int)sVar8] = L'\0';
          FUN_14020fad6(&local_1a8);
          uVar11 = 0;
          iVar6 = (int)uStack_1a0 + -1;
          if ((int)uStack_1a0 == 0) {
            iVar6 = 0;
          }
          if (0 < iVar6) {
            puVar13 = &DAT_149dfb77a;
            if ((int)uStack_1a0 != 0) {
              puVar13 = local_1a8;
            }
            lVar17 = 0;
            uVar11 = 0;
            do {
              uVar16 = ((uint)(0x19 < (ushort)puVar13[lVar17] - 0x61) * 0x20 +
                       (uint)(ushort)puVar13[lVar17]) - 0x20;
              uVar18 = (uint)(uVar11 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar16) & 0xff) * 4);
              puVar19 = (undefined8 *)(ulonglong)(uVar18 & 0xff ^ uVar16 >> 8 & 0xff);
              uVar11 = (ulonglong)(uVar18 >> 8 ^ *(uint *)(&DAT_14c75d150 + (longlong)puVar19 * 4));
              lVar17 = lVar17 + 1;
            } while (iVar6 != (int)lVar17);
          }
          iVar6 = FUN_1457511aa(&DAT_14c866c00,uVar11,&local_1a8);
          lVar17 = 0;
          if (iVar6 != -1) {
            lVar17 = (longlong)iVar6 * 0x28 + _DAT_14c866c00;
          }
          if ((lVar17 != 0) &&
             (FUN_14277adbe(&local_1a8,(undefined2 **)(lVar17 + 0x10),local_210),
             &local_1a8 != (undefined2 **)(lVar17 + 0x10))) {
            uVar16 = *(uint *)(lVar17 + 0x18);
            _Src = *(void **)(lVar17 + 0x10);
            uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar16);
            if (uVar16 == 0 && uStack_1a0._4_4_ == 0) {
              uStack_1a0 = (ulonglong)uVar16;
            }
            else {
              FUN_1446dd670(&local_1a8,uVar16);
              if (uVar16 != 0) {
                memcpy(local_1a8,_Src,(longlong)(int)uVar16 * 2);
              }
            }
          }
          lVar17 = local_240;
          if (local_240 != 0) {
            FUN_14170a154(local_240);
            FUN_14277ad3c(lVar17,*(int *)(lVar17 + 8) - *(int *)(lVar17 + 0x34));
          }
          param_1 = local_200;
          local_240 = FUN_140d68e64(local_200,&local_1a8);
          iVar6 = (int)uStack_1a0 + -1;
          local_238 = (longlong *)0x0;
          if ((int)uStack_1a0 == 0) {
            iVar6 = 0;
          }
          uVar11 = 0;
          if (0 < iVar6) {
            puVar13 = &DAT_149dfb77a;
            if ((int)uStack_1a0 != 0) {
              puVar13 = local_1a8;
            }
            lVar17 = 0;
            uVar11 = 0;
            do {
              uVar16 = ((uint)(0x19 < (ushort)puVar13[lVar17] - 0x61) * 0x20 +
                       (uint)(ushort)puVar13[lVar17]) - 0x20;
              uVar18 = (uint)(uVar11 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar16) & 0xff) * 4);
              puVar19 = (undefined8 *)(ulonglong)(uVar18 & 0xff ^ uVar16 >> 8 & 0xff);
              uVar11 = (ulonglong)(uVar18 >> 8 ^ *(uint *)(&DAT_14c75d150 + (longlong)puVar19 * 4));
              lVar17 = lVar17 + 1;
            } while (iVar6 != (int)lVar17);
          }
          iVar6 = FUN_14136f700(uVar11,&local_1a8);
          lVar17 = 0;
          if (iVar6 != -1) {
            lVar17 = (longlong)iVar6 * 0x68 + DAT_14c866c50;
          }
          local_218 = (longlong *)(lVar17 + 0x10);
          if (lVar17 == 0) {
            local_218 = (longlong *)0x0;
          }
          if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x88)) {
            FUN_1406e2264(local_240,&local_1a8,local_208);
          }
          local_228 = 0;
          param_2 = local_230;
          goto LAB_140fa707f;
        }
      }
    }
    if (local_240 == 0) {
      local_240 = 0;
    }
    else if ((wVar10 != L'\0') && (wVar10 != L';')) {
      if (((*(byte *)(param_1 + 0x50) & 8) == 0) ||
         (((int)local_238 == 0 && (int)local_228 == 0 ||
          (iVar6 = iswspace(wVar10), _Str = pwVar20, iVar6 == 0)))) {
        _Str = wcsstr(pwVar20,L"=");
      }
      if (_Str != (wchar_t *)0x0) {
        if (_Str == pwVar20) {
          local_249 = 1;
          local_220 = local_240;
        }
        else {
          *_Str = L'\0';
          wVar10 = *pwVar20;
          while (wVar10 != L'\0') {
            iVar6 = iswspace(wVar10);
            if (iVar6 == 0) {
              uVar11 = (ulonglong)((uint)(*pwVar20 == L'~') * 2);
              goto LAB_140fa6a2c;
            }
            pwVar1 = pwVar20 + 1;
            pwVar20 = pwVar20 + 1;
            wVar10 = *pwVar1;
          }
          uVar11 = 0;
LAB_140fa6a2c:
          pwVar20 = (wchar_t *)((longlong)pwVar20 + uVar11);
          if (local_241 != '\0') {
            wVar10 = *pwVar20;
            uVar16 = (ushort)wVar10 - 0x21;
            wVar5 = L'\0';
            if ((uVar16 < 0x20) && ((0x80003601U >> (uVar16 & 0x1f) & 1) != 0)) {
              pwVar20 = pwVar20 + 1;
              wVar5 = wVar10;
            }
            if (DAT_14c866ca8 != DAT_14c866cd4) {
              puVar14 = DAT_14c866ce0;
              if (DAT_14c866ce0 == (undefined *)0x0) {
                puVar14 = &DAT_14c866cd8;
              }
              puVar19 = (undefined8 *)0x7fff;
              iVar6 = *(int *)(puVar14 +
                              (ulonglong)(DAT_14c866ce8 + 0x7fffU & (uint)(ushort)wVar5) * 4);
              while (iVar6 != -1) {
                pwVar1 = (wchar_t *)(DAT_14c866ca0 + (longlong)iVar6 * 0xc);
                if (*pwVar1 == wVar5) {
                  if (pwVar1 + 1 != (wchar_t *)0x0 && pwVar1 != (wchar_t *)0x0) {
                    local_249 = (undefined1)pwVar1[1];
                    goto LAB_140fa6ad2;
                  }
                  break;
                }
                iVar6 = *(int *)(pwVar1 + 2);
              }
            }
            goto LAB_140fa707f;
          }
          local_249 = 1;
LAB_140fa6ad2:
          wVar10 = *pwVar20;
          while (wVar10 != L'\0') {
            sVar8 = wcslen(pwVar20);
            iVar6 = iswspace(*(wint_t *)
                              ((longlong)pwVar20 +
                              ((longlong)((sVar8 << 0x20) + -0x100000000) >> 0x1f)));
            if (iVar6 == 0) break;
            sVar8 = wcslen(pwVar20);
            *(undefined2 *)
             ((longlong)pwVar20 + ((longlong)((sVar8 << 0x20) + -0x100000000) >> 0x1f)) = 0;
            wVar10 = *pwVar20;
          }
          lVar17 = local_240;
          if (local_218 != (longlong *)0x0) {
            FUN_140056680(&local_1d0);
            plVar3 = local_218;
            uVar11 = 0;
            iVar6 = local_1c8 + -1;
            if (local_1c8 == 0) {
              iVar6 = 0;
            }
            if (0 < iVar6) {
              plVar9 = (longlong *)&DAT_149dfb77a;
              if (local_1c8 != 0) {
                plVar9 = local_1d0;
              }
              lVar17 = 0;
              uVar11 = 0;
              do {
                uVar2 = *(ushort *)((longlong)plVar9 + lVar17 * 2);
                uVar16 = ((uint)(0x19 < uVar2 - 0x61) * 0x20 + (uint)uVar2) - 0x20;
                uVar18 = (uint)(uVar11 >> 8) ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar11 ^ uVar16) & 0xff) * 4)
                ;
                puVar19 = (undefined8 *)(ulonglong)(uVar18 & 0xff ^ uVar16 >> 8 & 0xff);
                uVar11 = (ulonglong)
                         (uVar18 >> 8 ^ *(uint *)(&DAT_14c75d150 + (longlong)puVar19 * 4));
                lVar17 = lVar17 + 1;
              } while (iVar6 != (int)lVar17);
            }
            iVar6 = FUN_1457511aa(local_218,uVar11,&local_1d0);
            param_2 = local_230;
            if (iVar6 == -1) {
              lVar17 = 0;
            }
            else {
              lVar17 = (longlong)iVar6 * 0x28 + *plVar3;
            }
            local_238 = (longlong *)(lVar17 + 0x10);
            if (lVar17 == 0) {
              local_238 = (longlong *)0x0;
            }
            if (local_1d0 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            plVar3 = local_238;
            lVar17 = local_240;
            if (local_238 != (longlong *)0x0) {
              FUN_140056680(&local_1d0,pwVar20);
              puVar19 = local_210;
              FUN_14277b31a(&local_1d0,plVar3,&local_1a8,local_210);
              if (local_1d0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              iVar6 = (int)local_238[1];
              pwVar20 = L"";
              lVar17 = local_240;
              if ((longlong)iVar6 != 0) {
                pwVar20 = (wchar_t *)*local_238;
                lVar15 = (longlong)iVar6 * 2;
                lVar12 = 0;
                lVar21 = 0;
                do {
                  param_2 = local_230;
                  if (pwVar20[lVar12] == L':') {
                    uVar16 = (uint)lVar12;
                    if (uVar16 != 0xffffffff) {
                      if ((int)uVar16 < 0) {
                        local_1e8 = (undefined2 *)0x0;
                        uStack_1e0 = 0;
LAB_140fa6e9a:
                        puVar13 = &DAT_149dfb77a;
                      }
                      else {
                        iVar7 = iVar6 + -1;
                        if (iVar6 == 0) {
                          iVar7 = 0;
                        }
                        uVar11 = (longlong)iVar7;
                        if ((longlong)(ulonglong)(uVar16 & 0x7fffffff) < (longlong)iVar7) {
                          uVar11 = (ulonglong)(uVar16 & 0x7fffffff);
                        }
                        if ((longlong)uVar11 < 1) {
                          uVar11 = 0;
                        }
                        FUN_14006620a(&local_1e8,pwVar20,uVar11);
                        puVar13 = local_1e8;
                        if ((int)uStack_1e0 == 0) goto LAB_140fa6e9a;
                      }
                      FUN_140056680(&local_1d0,puVar13);
                      local_220 = FUN_140d68e64(param_1,&local_1d0);
                      if (local_1d0 != (longlong *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_1e8 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      puVar13 = &DAT_149dfb77a;
                      if ((int)local_238[1] != 0) {
                        puVar13 = (undefined2 *)*local_238;
                      }
                      pwVar20 = puVar13 + (lVar21 >> 0x20) + 1;
                      lVar17 = local_220;
                      param_2 = local_230;
                    }
                    break;
                  }
                  lVar21 = lVar21 + 0x100000000;
                  lVar12 = lVar12 + 1;
                  lVar15 = lVar15 + -2;
                } while (lVar15 != 0);
              }
            }
          }
          _Str = _Str + 1;
          local_220 = lVar17;
          FUN_1446f470e(&local_1d0,pwVar20,1);
          local_238 = local_1d0;
          local_228 = (ulonglong)local_1d0 >> 0x20;
        }
        wVar10 = *_Str;
        while (wVar10 != L'\0') {
          iVar6 = iswspace(wVar10);
          if (iVar6 == 0) goto LAB_140fa6f8c;
          pwVar20 = _Str + 1;
          _Str = _Str + 1;
          wVar10 = *pwVar20;
        }
LAB_140fa6fae:
        bVar22 = (longlong)uStack_1b0 < 0;
        uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
        if (bVar22) {
          FUN_1446f8c06(&local_1b8,0);
        }
        if (local_1b8 != (undefined2 *)0x0) {
          *local_1b8 = 0;
        }
        if (*_Str == L'\"') {
          FUN_140c9761d(_Str,&local_1b8,0);
        }
        else {
          FUN_14020fad6(&local_1b8,_Str);
        }
        local_260 = &local_1b8;
        local_268 = (ulonglong)local_238 & 0xffffffff | local_228 << 0x20;
        local_1f8 = local_1a8;
        local_1f0 = (int)uStack_1a0 + -1;
        if ((int)uStack_1a0 == 0) {
          local_1f0 = 0;
        }
        puVar19 = (undefined8 *)CONCAT71((int7)((ulonglong)puVar19 >> 8),local_249);
        FUN_1406e07e8(param_1,local_220,&local_1f8,puVar19);
        *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
      }
    }
LAB_140fa707f:
  } while ((char)local_248 == '\0');
  FUN_14277389c(param_1);
  if (local_1b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 == '\x01') {
    FUN_1400020a8(local_180);
  }
  if (local_1a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140fa67eb:
  sVar8 = wcslen(pwVar20);
  pwVar20[(longlong)(int)sVar8 + -1] = L'\0';
  goto LAB_140fa67ca;
LAB_140fa6f8c:
  if (*_Str == L'\0') goto LAB_140fa6fae;
  sVar8 = wcslen(_Str);
  iVar6 = iswspace(*(wint_t *)
                    ((longlong)_Str + ((longlong)((sVar8 << 0x20) + -0x100000000) >> 0x1f)));
  if (iVar6 == 0) goto LAB_140fa6fae;
  sVar8 = wcslen(_Str);
  *(undefined2 *)((longlong)_Str + ((longlong)((sVar8 << 0x20) + -0x100000000) >> 0x1f)) = 0;
  goto LAB_140fa6f8c;
}



// FUNCTION 140fa714a FUN_140fa714a body=242 status=ok
// SIG undefined FUN_140fa714a(void)

undefined8 *
FUN_140fa714a(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  
  bVar3 = *(byte *)(*param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar3;
  *(byte *)((longlong)param_1 + 0x1d) = bVar3;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f55940;
  lVar4 = *param_2;
  param_1[0x11] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar4 = param_1[0x11];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar4 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar4 + 0x19);
  param_1[10] = param_4;
  FUN_140fa723c(param_1,param_3);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 140fa723c FUN_140fa723c body=128 status=ok
// SIG undefined FUN_140fa723c(void)

void FUN_140fa723c(longlong param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 4;
  do {
    dVar1 = *(double *)(param_2 + -0x20 + lVar2 * 8);
    uVar3 = -(ulonglong)(ABS(dVar1) < 9.999999974752427e-07);
    dVar1 = (double)(uVar3 & 0x3eb0c6f7a0000000 | ~uVar3 & (ulonglong)dVar1);
    *(double *)(param_1 + lVar2 * 8) = dVar1;
    *(double *)(param_1 + 0x18 + lVar2 * 8) = 1.0 / dVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  *(double *)(param_1 + 0x10) =
       *(double *)(param_1 + 0x20) * *(double *)(*(longlong *)(param_1 + 0x88) + 0x10) +
       *(double *)(param_1 + 0x50);
  FUN_140fa72bc();
  return;
}



// FUNCTION 140fa72bc FUN_140fa72bc body=193 status=ok
// SIG undefined FUN_140fa72bc(void)

void FUN_140fa72bc(longlong param_1)

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
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  dVar5 = *(double *)(lVar1 + 0x98) * *(double *)(param_1 + 0x30);
  dVar9 = *(double *)(lVar1 + 0x90) * *(double *)(param_1 + 0x28);
  dVar10 = *(double *)(lVar1 + 0x88) * *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_1 + 0x30) * *(double *)(lVar1 + 0xb0);
  dVar8 = *(double *)(param_1 + 0x28) * *(double *)(lVar1 + 0xa8);
  dVar7 = *(double *)(param_1 + 0x20) * *(double *)(lVar1 + 0xa0);
  dVar2 = dVar5;
  if (dVar6 <= dVar5) {
    dVar2 = dVar6;
  }
  dVar3 = dVar9;
  if (dVar8 <= dVar9) {
    dVar3 = dVar8;
  }
  dVar4 = dVar10;
  if (dVar7 <= dVar10) {
    dVar4 = dVar7;
  }
  *(double *)(param_1 + 0x58) = dVar4;
  *(double *)(param_1 + 0x60) = dVar3;
  *(double *)(param_1 + 0x68) = dVar2;
  if (dVar5 <= dVar6) {
    dVar5 = dVar6;
  }
  if (dVar9 <= dVar8) {
    dVar9 = dVar8;
  }
  if (dVar10 <= dVar7) {
    dVar10 = dVar7;
  }
  *(double *)(param_1 + 0x70) = dVar10;
  *(double *)(param_1 + 0x78) = dVar9;
  *(double *)(param_1 + 0x80) = dVar5;
  return;
}



// FUNCTION 140fa737e FUN_140fa737e body=102 status=ok
// SIG undefined FUN_140fa737e(void)

undefined8 * FUN_140fa737e(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aac7a10;
  param_1[6] = &PTR_LAB_14b80e960;
  FUN_1409e1656(param_1 + 7);
  *param_1 = &PTR_FUN_14b80ba60;
  param_1[6] = &PTR_LAB_14b80bd20;
  param_1[7] = &PTR_LAB_14b80bdb0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 140fa73e4 FUN_140fa73e4 body=96 status=ok
// SIG undefined FUN_140fa73e4(void)

void FUN_140fa73e4(longlong param_1)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    FUN_1400020a8();
  }
  FUN_140fa7444(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fa7444 FUN_140fa7444 body=505 status=ok
// SIG undefined FUN_140fa7444(void)

void FUN_140fa7444(longlong *param_1)

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
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar10) goto LAB_140fa751c;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar7[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar8 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar10;
      lVar12 = (longlong)iVar6;
      uVar3 = puVar7[lVar12] & uVar14;
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
          iVar11 = iVar11 + 0x20;
          uVar3 = puVar7[lVar12 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_140fa751c;
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140fa751c:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140fa763e FUN_140fa763e body=325 status=ok
// SIG undefined FUN_140fa763e(void)

void FUN_140fa763e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 140fa7784 FUN_140fa7784 body=497 status=ok
// SIG undefined FUN_140fa7784(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fa7784(longlong *param_1)

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
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [44];
  uint local_6c;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_6c = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    local_6c = (uint)local_58;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      plVar7 = *(longlong **)(lVar11 + 0x28 + (longlong)iVar6 * 0x38);
      if (plVar7 != (longlong *)0x0) {
        (**(code **)*plVar7)(plVar7,0);
        _DAT_14cb7cc74 = _DAT_14cb7cc74 + -1;
        *plVar7 = (longlong)DAT_14cb7cc68;
        DAT_14cb7cc68 = plVar7;
      }
      if (*(longlong *)(lVar11 + (longlong)iVar6 * 0x38 + 0x18) != 0) {
        FUN_1400020a8();
      }
      uVar10 = local_6c & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar10;
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
          if (iVar3 - lVar11 == lVar8) goto LAB_140fa790b;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        local_6c = 0xffffffff;
        uVar10 = local_6c;
      }
      local_6c = uVar10;
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140fa790b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa7976 FUN_140fa7976 body=955 status=ok
// SIG undefined FUN_140fa7976(void)

void FUN_140fa7976(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  undefined1 auStack_a8 [36];
  int local_84;
  int local_80;
  uint local_7c;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1;
  cVar6 = (**(code **)(*param_1 + 0x300))();
  if (cVar6 == '\0') {
    lVar7 = FUN_14012b3c6(param_1 + 0x5a);
    if (lVar7 == 0) goto LAB_140fa7a0e;
    plVar11 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar11;
    if ((int)param_1[0x54] == 0) {
      uVar14 = 1;
      iVar15 = 0;
      local_58._4_4_ = 0;
      uVar18 = 0xffffffff;
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar14 = local_68 >> 0x20;
      iVar15 = (int)param_1[0x54];
      uVar18 = (uint)local_58;
      iVar10 = (int)local_68;
    }
    plVar5 = local_60;
    iVar9 = local_58._4_4_;
    iVar19 = local_50;
    if (local_58._4_4_ != iVar15 || local_60 != plVar11) {
      do {
        local_80 = iVar15;
        plVar17 = local_70;
        lVar7 = param_1[0x4f];
        lVar16 = *(longlong *)(lVar7 + 0x10 + (longlong)iVar9 * 0x20);
        local_84 = iVar19;
        local_7c = uVar18;
        if ((lVar16 != 0) && (plVar3 = *(longlong **)(lVar16 + 0x30), plVar3 != (longlong *)0x0)) {
          local_78 = plVar11;
          uVar8 = (**(code **)(*plVar3 + 8))(plVar3);
          FUN_14012b5ea(plVar17,&local_68,uVar8);
          uVar2 = local_68;
          if ((*(int *)(local_68 + 0x3c) == 0) ||
             (uVar18 = *(uint *)(local_68 + 0x38), (int)uVar18 < 0)) {
LAB_140fa7cc5:
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)0x0;
            if ((int)uVar18 < DAT_14c9647dc) {
              puVar12 = (undefined8 *)
                        ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8));
              if (((puVar12 == (undefined8 *)0x0) ||
                  (*(int *)(puVar12 + 2) != *(int *)(local_68 + 0x3c))) ||
                 ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_140fa7cc5;
              plVar11 = (longlong *)*puVar12;
            }
          }
          (**(code **)(*plVar11 + 0x2f0))(plVar11,plVar3,1);
          plVar11 = local_60;
          *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + -1;
          *plVar3 = *(longlong *)(uVar2 + 8);
          *(longlong **)(uVar2 + 8) = plVar3;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar17 = local_60 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
          }
          *(undefined8 *)(*(longlong *)(lVar7 + (longlong)iVar9 * 0x20 + 0x10) + 0x30) = 0;
          plVar11 = local_78;
        }
        uVar18 = local_7c & ~(uint)uVar14;
        plVar17 = (longlong *)plVar5[2];
        if ((longlong *)plVar5[2] == (longlong *)0x0) {
          plVar17 = plVar5;
        }
        iVar15 = (int)plVar5[3];
        lVar7 = (longlong)iVar10;
        uVar13 = *(uint *)((longlong)plVar17 + lVar7 * 4) & uVar18;
        iVar19 = local_84;
        if (uVar13 == 0) {
          iVar9 = iVar15 + 0x1e;
          if (-1 < iVar15 + -1) {
            iVar9 = iVar15 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar19 = local_84 + 0x20;
          iVar4 = iVar9;
          if (iVar9 < iVar10) {
            iVar4 = iVar10;
          }
          if (iVar10 < iVar9) {
            lVar16 = 0;
            do {
              uVar13 = *(uint *)((longlong)plVar17 + lVar16 * 4 + lVar7 * 4 + 4);
              if (uVar13 != 0) {
                iVar10 = iVar10 + (int)lVar16 + 1;
                uVar18 = 0xffffffff;
                goto LAB_140fa7c43;
              }
              iVar19 = iVar19 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar4 - lVar7 != lVar16);
            uVar18 = 0xffffffff;
            iVar10 = iVar4;
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar15;
        }
        else {
LAB_140fa7c43:
          uVar14 = (ulonglong)(-uVar13 & uVar13);
          uVar2 = uVar14 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar9 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar9) {
            iVar9 = iVar15;
          }
        }
        iVar15 = local_80;
      } while ((iVar9 != local_80) || (plVar5 != plVar11));
    }
  }
  else {
    FUN_140fa8126(param_1 + 0x39,&local_70);
    FUN_140fa8126(param_1 + 0x43,&local_70);
  }
  lVar7 = param_1[0x65];
  if ((longlong)(int)lVar7 != 0) {
    lVar16 = param_1[100];
    lVar20 = 0;
    do {
      FUN_142b40aec(&local_70,*(undefined8 *)(lVar16 + lVar20));
      lVar20 = lVar20 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar20);
  }
  *(undefined4 *)(param_1 + 0x65) = 0;
  if (*(int *)((longlong)param_1 + 0x32c) != 0) {
    FUN_1470a4d4a(param_1 + 100,0);
  }
  FUN_140fa7d32(param_1 + 0x66,0);
  FUN_140fa7ee4(param_1);
LAB_140fa7a0e:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa7d32 FUN_140fa7d32 body=107 status=ok
// SIG undefined FUN_140fa7d32(void)

void FUN_140fa7d32(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_140fa7d81:
      FUN_140bd54f0(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_14012bf40(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_140fa7d81;
  FUN_140fa7d9e(param_1);
  FUN_140bd54f0(param_1,param_2);
  return;
}



// FUNCTION 140fa7d9e FUN_140fa7d9e body=325 status=ok
// SIG undefined FUN_140fa7d9e(void)

void FUN_140fa7d9e(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 140fa7ee4 FUN_140fa7ee4 body=577 status=ok
// SIG undefined FUN_140fa7ee4(void)

void FUN_140fa7ee4(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    plVar1 = param_1 + 0x51;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)param_1[0x54] == 0) {
      uVar15 = 1;
      iVar11 = 0;
      local_58._4_4_ = 0;
      uVar9 = 0xffffffff;
      iVar7 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar15 = local_68 >> 0x20;
      iVar11 = (int)param_1[0x54];
      uVar9 = (uint)local_58;
      iVar7 = (int)local_68;
    }
    plVar4 = local_60;
    plVar10 = param_1 + 0x4f;
    iVar6 = local_58._4_4_;
    iVar14 = local_50;
    if (local_58._4_4_ != iVar11 || local_60 != plVar1) {
      do {
        local_70 = plVar10;
        local_74 = iVar11;
        lVar12 = *local_70;
        lVar13 = *(longlong *)(lVar12 + 0x10 + (longlong)iVar6 * 0x20);
        if (lVar13 != 0) {
          FUN_1401c38e0(lVar13);
          FUN_1400020a8(lVar13);
          *(undefined8 *)(lVar12 + (longlong)iVar6 * 0x20 + 0x10) = 0;
        }
        uVar9 = uVar9 & ~(uint)uVar15;
        plVar10 = (longlong *)plVar4[2];
        if ((longlong *)plVar4[2] == (longlong *)0x0) {
          plVar10 = plVar4;
        }
        iVar11 = (int)plVar4[3];
        lVar12 = (longlong)iVar7;
        uVar8 = *(uint *)((longlong)plVar10 + lVar12 * 4) & uVar9;
        if (uVar8 == 0) {
          iVar6 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar6 = iVar11 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar3 = iVar6;
          if (iVar6 < iVar7) {
            iVar3 = iVar7;
          }
          if (iVar7 < iVar6) {
            lVar13 = 0;
            do {
              uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4 + lVar12 * 4 + 4);
              if (uVar8 != 0) {
                iVar7 = iVar7 + (int)lVar13 + 1;
                uVar9 = 0xffffffff;
                goto LAB_140fa8045;
              }
              iVar14 = iVar14 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar3 - lVar12 != lVar13);
            uVar9 = 0xffffffff;
            iVar7 = iVar3;
          }
          iVar7 = iVar7 + 1;
          iVar6 = iVar11;
        }
        else {
LAB_140fa8045:
          uVar15 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar6 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar11 <= iVar6) {
            iVar6 = iVar11;
          }
        }
        plVar10 = local_70;
        iVar11 = local_74;
      } while (iVar6 != local_74 || plVar4 != plVar1);
    }
    FUN_1401c3a74(plVar10,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa8126 FUN_140fa8126 body=846 status=ok
// SIG undefined FUN_140fa8126(void)

void FUN_140fa8126(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_e8 [40];
  uint *local_c0;
  undefined8 *local_b8;
  undefined1 local_b0 [7];
  char local_a9;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar20 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_a9 = '\0';
  puVar18 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  local_b8 = param_2;
  if (iVar3 == 0) {
    uVar21 = 1;
    iVar19 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar18;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      uVar20 = 0;
      uVar21 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar21 = uVar20;
      }
      iVar19 = 0;
      do {
        if (uVar21 == uVar20) goto LAB_140fa8219;
        iVar19 = iVar19 + 0x20;
        uVar15 = puVar8[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar20 = 0;
      iVar19 = 0;
    }
    uVar21 = (ulonglong)(-uVar15 & uVar15);
    uVar2 = uVar21 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar7 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 != iVar3) {
    uVar15 = 0xffffffff;
    local_c0 = puVar18;
    do {
      lVar16 = *param_1;
      lVar17 = *(longlong *)(lVar16 + 0x10 + (longlong)iVar7 * 0x20);
      if ((lVar17 != 0) &&
         (local_a8 = lVar17, FUN_14042e430(&local_98,local_b0,&local_a8,&local_a9),
         puVar18 = local_c0, local_a9 == '\0')) {
        plVar5 = *(longlong **)((longlong)iVar7 * 0x20 + 0x10 + lVar16);
        uVar6 = *local_b8;
        uVar9 = (**(code **)(*plVar5 + 8))(plVar5);
        FUN_14012b5ea(uVar6,&local_a8,uVar9);
        lVar16 = local_a8;
        if ((*(int *)(local_a8 + 0x3c) == 0) ||
           (uVar14 = *(uint *)(local_a8 + 0x38), (int)uVar14 < 0)) {
LAB_140fa8453:
          plVar12 = (longlong *)0x0;
        }
        else {
          plVar12 = (longlong *)0x0;
          if ((int)uVar14 < DAT_14c9647dc) {
            puVar13 = (undefined8 *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
            if (((puVar13 == (undefined8 *)0x0) ||
                (*(int *)(puVar13 + 2) != *(int *)(local_a8 + 0x3c))) ||
               ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_140fa8453;
            plVar12 = (longlong *)*puVar13;
          }
        }
        (**(code **)(*plVar12 + 0x2f0))(plVar12,plVar5,1);
        plVar12 = local_a0;
        *(int *)(lVar16 + 0x14) = *(int *)(lVar16 + 0x14) + -1;
        *plVar5 = *(longlong *)(lVar16 + 8);
        *(longlong **)(lVar16 + 8) = plVar5;
        puVar18 = local_c0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_a0 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            puVar18 = local_c0;
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              puVar18 = local_c0;
            }
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar21;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar18;
      }
      iVar4 = (int)param_1[5];
      iVar7 = (int)uVar20;
      lVar16 = (longlong)iVar7;
      uVar14 = puVar8[lVar16] & uVar15;
      if (uVar14 == 0) {
        iVar10 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar10 = iVar4 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar7) {
          iVar11 = iVar7;
        }
        if (iVar7 < iVar10) {
          lVar17 = 0;
          do {
            uVar14 = puVar8[lVar16 + lVar17 + 1];
            if (uVar14 != 0) {
              uVar20 = (ulonglong)(iVar7 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
              goto LAB_140fa841f;
            }
            iVar19 = iVar19 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar11 - lVar16 != lVar17);
          uVar15 = 0xffffffff;
          iVar7 = iVar11;
        }
        uVar20 = (ulonglong)(iVar7 + 1);
        puVar18 = local_c0;
        iVar7 = iVar4;
      }
      else {
LAB_140fa841f:
        uVar21 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar21 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar7 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar7) {
          iVar7 = iVar4;
        }
      }
    } while (iVar7 != iVar3);
  }
LAB_140fa8219:
  FUN_1410f1df6(param_1,0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14041e672(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140fa8476 FUN_140fa8476 body=471 status=ok
// SIG undefined FUN_140fa8476(void)

void FUN_140fa8476(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = param_1 + 0x1810;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  local_58 = lVar1;
  if (*(int *)(param_1 + 0x1838) == 0) {
    uVar14 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_144a844ac(&local_60);
    uVar14 = local_60 >> 0x20;
  }
  lVar5 = local_58;
  iVar6 = *(int *)(local_58 + 0x28);
  iVar15 = (int)local_60;
  uVar12 = (uint)local_50;
  iVar8 = local_50._4_4_;
  iVar11 = local_48;
  if (local_50._4_4_ < iVar6) {
    do {
      lVar9 = *(longlong *)(param_1 + 0x1800);
      if (*(longlong *)(param_1 + 0x1800) == 0) {
        lVar9 = param_1;
      }
      puVar3 = *(undefined8 **)(lVar9 + 8 + (longlong)iVar8 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        iVar6 = *(int *)(lVar5 + 0x28);
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      lVar9 = *(longlong *)(lVar5 + 0x20);
      if (*(longlong *)(lVar5 + 0x20) == 0) {
        lVar9 = lVar5;
      }
      lVar13 = (longlong)iVar15;
      uVar7 = *(uint *)(lVar9 + lVar13 * 4) & uVar12;
      if (uVar7 == 0) {
        iVar8 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar8 = iVar6 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar4 = iVar8;
        if (iVar8 < iVar15) {
          iVar4 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)(lVar9 + lVar13 * 4 + 4 + lVar10 * 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar4 - lVar13 == lVar10) goto LAB_140fa85bb;
        }
        iVar15 = iVar15 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar6);
  }
LAB_140fa85bb:
  *(undefined4 *)(param_1 + 0x1808) = 0;
  if (*(int *)(param_1 + 0x180c) != 0) {
    FUN_1457da48c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x1840) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1838) = 0;
  if (0x100 < *(uint *)(param_1 + 0x183c)) {
    *(undefined4 *)(param_1 + 0x183c) = 0x100;
    FUN_1456d07e4(lVar1,0);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa864e FUN_140fa864e body=100 status=ok
// SIG undefined FUN_140fa864e(void)

undefined8 * FUN_140fa864e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b4336b8;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa86b2 FUN_140fa86b2 body=107 status=ok
// SIG undefined FUN_140fa86b2(void)

void FUN_140fa86b2(undefined8 param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 local_c;
  undefined1 local_b;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c[0] = 100;
  local_20 = 0;
  local_1c = *param_3;
  uStack_18 = param_3[1];
  uStack_14 = param_3[2];
  uStack_10 = param_3[3];
  local_b = 1;
  local_38 = 0;
  local_28 = param_2;
  local_24 = param_2;
  local_c = param_4;
  FUN_140fa871e(local_1c,&local_38,local_2c);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa871e FUN_140fa871e body=198 status=ok
// SIG undefined FUN_140fa871e(void)

void FUN_140fa871e(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_78 [36];
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined4 local_30;
  float local_2c;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_54[0] = *param_3;
  local_50 = *(undefined4 *)(param_3 + 4);
  local_4c = *(undefined4 *)(param_3 + 8);
  local_48 = *(float *)(param_3 + 0xc);
  local_44 = *(undefined4 *)(param_3 + 0x10);
  uStack_40 = *(undefined4 *)(param_3 + 0x14);
  uStack_3c = *(undefined4 *)(param_3 + 0x18);
  uStack_38 = *(undefined4 *)(param_3 + 0x1c);
  local_34 = param_3[0x20];
  local_33 = param_3[0x21];
  local_30 = local_50;
  if (local_48 <= 0.0) {
    local_30 = local_4c;
  }
  local_20 = local_54;
  local_2c = local_48;
  local_28 = param_2;
  FUN_140fa87e6(param_1 + 0x3a58,local_14,&local_28,0);
  *(byte *)(param_1 + 0x2e58) = *(byte *)(param_1 + 0x2e58) | 8;
  FUN_1404775ec(param_1);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa87e6 FUN_140fa87e6 body=518 status=ok
// SIG undefined FUN_140fa87e6(void)

int * FUN_140fa87e6(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  char cVar17;
  longlong *plVar18;
  ulonglong uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1404780c2(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *local_48 = lVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  lVar11 = *(longlong *)(puVar1 + 4);
  lVar12 = *(longlong *)(puVar1 + 6);
  uVar9 = *(undefined8 *)(puVar1 + 7);
  uVar10 = *(undefined8 *)(puVar1 + 9);
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = uVar3;
  *(undefined4 *)(local_48 + 2) = uVar4;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar5;
  local_48[3] = lVar11;
  local_48[4] = lVar12;
  *(undefined8 *)((longlong)local_48 + 0x24) = uVar9;
  *(undefined8 *)((longlong)local_48 + 0x2c) = uVar10;
  *(undefined4 *)((longlong)local_48 + 0x34) = 0xffffffff;
  uVar22 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar16 = (uint)lVar2 & 0xffff;
  uVar22 = ((uint)lVar2 << 0x10 | uVar16) + (int)((ulonglong)lVar2 >> 0x20) +
           (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar16 >> 4);
  cVar17 = '\0';
  iVar21 = local_50[0];
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar18 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar18 + (ulonglong)((int)param_1[9] - 1U & uVar22) * 4);
    if (iVar20 == -1) {
      cVar17 = '\0';
    }
    else {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar20 * 0x3c);
        if (*(longlong *)(*param_1 + (longlong)iVar20 * 0x3c) == lVar2) {
          lVar2 = *local_48;
          uVar3 = *(undefined4 *)((longlong)local_48 + 4);
          lVar11 = local_48[1];
          uVar4 = *(undefined4 *)((longlong)local_48 + 0xc);
          lVar12 = local_48[2];
          uVar5 = *(undefined4 *)((longlong)local_48 + 0x14);
          lVar13 = local_48[3];
          uVar6 = *(undefined4 *)((longlong)local_48 + 0x1c);
          lVar14 = local_48[4];
          uVar7 = *(undefined4 *)((longlong)local_48 + 0x24);
          lVar15 = local_48[5];
          uVar8 = *(undefined4 *)((longlong)local_48 + 0x2c);
          puVar1[0xc] = (int)local_48[6];
          puVar1[8] = (int)lVar14;
          puVar1[9] = uVar7;
          puVar1[10] = (int)lVar15;
          puVar1[0xb] = uVar8;
          puVar1[4] = (int)lVar12;
          puVar1[5] = uVar5;
          puVar1[6] = (int)lVar13;
          puVar1[7] = uVar6;
          *puVar1 = (int)lVar2;
          puVar1[1] = uVar3;
          puVar1[2] = (int)lVar11;
          puVar1[3] = uVar4;
          FUN_140fa89ee(param_1,local_50[0]);
          cVar17 = '\x01';
          iVar21 = iVar20;
          break;
        }
        iVar20 = puVar1[0xd];
        cVar17 = '\0';
      } while (iVar20 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar17;
  }
  if (cVar17 == '\0') {
    uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar20 = 1;
    if (3 < uVar16) {
      uVar19 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar16 < 1) || (iVar20 <= (int)param_1[9])) {
      uVar22 = (int)param_1[9] - 1U & uVar22;
      *(uint *)(local_48 + 7) = uVar22;
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = param_1 + 7;
      }
      *(undefined4 *)((longlong)local_48 + 0x34) =
           *(undefined4 *)
            ((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4);
      plVar18 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar18 = param_1 + 7;
      }
      *(int *)((longlong)plVar18 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4) =
           iVar21;
    }
    else {
      *(int *)(param_1 + 9) = iVar20;
      FUN_140477d5c(param_1);
    }
  }
  *param_2 = iVar21;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140fa89ee FUN_140fa89ee body=118 status=ok
// SIG undefined FUN_140fa89ee(void)

void FUN_140fa89ee(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x3c) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x3c) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x3c + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140fa8a64 FUN_140fa8a64 body=248 status=ok
// SIG undefined FUN_140fa8a64(void)

longlong * FUN_140fa8a64(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar2 = *(longlong **)(param_1 + 0x30);
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  plVar2 = *(longlong **)(param_1 + 0x30);
  pcVar1 = *(code **)(*plVar2 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar2 + 3;
    if (plVar2[5] != 0) {
      plVar3 = (longlong *)(plVar2[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar2 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(plVar2);
  }
  if ((int)plVar3[1] < 2) {
    puVar4 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(param_1 + 8);
    }
    FUN_1447325ac(puVar4,local_20,1);
    FUN_145715fae(param_2,local_20);
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x30);
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x38);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140fa8b6c FUN_140fa8b6c body=40 status=ok
// SIG undefined FUN_140fa8b6c(void)

undefined8 FUN_140fa8b6c(undefined8 param_1,int param_2)

{
  FUN_140fa8b94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140fa8b94 FUN_140fa8b94 body=320 status=ok
// SIG undefined FUN_140fa8b94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140fa8b94(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b7f15e0;
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  param_1[0x9d] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)((longlong)param_1 + 0x504) != 0) {
    FUN_140115c12(param_1 + 0x9f,0);
  }
  param_1[0x9e] = 0;
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140fa8c9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}


