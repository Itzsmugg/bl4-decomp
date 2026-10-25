// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1477f212c FUN_1477f212c body=2270 status=ok
// SIG undefined FUN_1477f212c(void)

longlong *
FUN_1477f212c(longlong *param_1,longlong *param_2,ulonglong param_3,undefined1 param_4,int param_5)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  longlong lVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  float fVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  ulonglong uVar18;
  longlong **pplVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_468 [39];
  undefined1 local_441;
  longlong *local_440;
  undefined4 local_434;
  longlong *local_430;
  ulonglong local_428;
  longlong *local_420;
  longlong local_418;
  longlong *local_410;
  longlong local_408;
  longlong *local_400;
  longlong local_3f8;
  longlong *local_3f0;
  longlong local_3e8;
  longlong *local_3e0;
  longlong local_3d8;
  longlong *local_3d0;
  longlong *local_398;
  byte local_390;
  float local_388;
  float fStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined8 local_358;
  longlong local_350;
  longlong *local_348;
  undefined4 local_228 [74];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_441 = param_4;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 4));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 4),4000);
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = param_3;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  local_428 = param_3;
  (**(code **)(*(longlong *)(*param_2 + 200) + 0x10))(*param_2 + 200,&local_388);
  fVar4 = fStack_384;
  (**(code **)(*(longlong *)(*param_2 + 200) + 0x10))(*param_2 + 200,local_228);
  uVar18 = CONCAT44(fVar4,local_228[0]);
  plVar15 = *(longlong **)(*param_2 + 0x250);
  local_420 = param_2;
  if (plVar15 == (longlong *)0x0) {
    local_434 = 1;
    local_430 = (longlong *)0x0;
  }
  else {
    lVar8 = *(longlong *)(*param_2 + 0x248);
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    iVar11 = (int)plVar15[1];
    do {
      plVar16 = (longlong *)0x0;
      if (iVar11 == 0) break;
      LOCK();
      iVar9 = (int)plVar15[1];
      bVar24 = iVar11 == iVar9;
      if (bVar24) {
        *(int *)(plVar15 + 1) = iVar11 + 1;
        iVar9 = iVar11;
      }
      iVar11 = iVar9;
      UNLOCK();
      plVar16 = plVar15;
    } while (!bVar24);
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))();
    }
    plVar14 = DAT_14c98e618;
    local_434 = (undefined4)CONCAT71((int7)((ulonglong)plVar15 >> 8),plVar16 == (longlong *)0x0);
    local_430 = plVar16;
    if (lVar8 != 0 && plVar16 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      local_3f8 = lVar8;
      local_3f0 = plVar16;
      (**(code **)(*plVar14 + 0x28))(plVar14,&local_3e8);
      LOCK();
      plVar15 = plVar16 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      if (local_3e8 == 0) {
        uVar22 = 0;
        uVar20 = 0;
        uVar23 = 0;
      }
      else {
        *param_1 = local_3e8;
        FUN_1401e2e48(local_3e8,&local_e8);
        plVar15 = local_3e0;
        local_228[0] = CONCAT31(local_228[0]._1_3_,DAT_14c96b238);
        local_100 = 0;
        local_f8 = 0x400000000;
        local_f0 = 0;
        local_350 = local_3e8;
        local_348 = local_3e0;
        if (local_3e0 == (longlong *)0x0) {
          local_358 = local_b8;
          local_388 = local_e8;
          fStack_384 = fStack_e4;
          uStack_380 = uStack_e0;
          uStack_37c = uStack_dc;
          local_348 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
          UNLOCK();
          local_358 = local_b8;
          local_388 = local_e8;
          fStack_384 = fStack_e4;
          uStack_380 = uStack_e0;
          uStack_37c = uStack_dc;
          LOCK();
          *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
          UNLOCK();
          LOCK();
          plVar14 = local_3e0 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_3e0)(local_3e0);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        FUN_1402018be(local_228,&local_388);
        plVar14 = local_348;
        if (local_348 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_348 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_348)(local_348);
            LOCK();
            piVar1 = (int *)((longlong)plVar14 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar15 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        plVar15 = local_3e0;
        if (local_3e0 == (longlong *)0x0) {
          local_408 = local_3e8;
          local_400 = (longlong *)0x0;
          FUN_140d95de0(&local_388,&local_408,local_228);
        }
        else {
          LOCK();
          *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
          UNLOCK();
          local_408 = local_3e8;
          local_400 = local_3e0;
          LOCK();
          *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
          UNLOCK();
          FUN_140d95de0(&local_388,&local_408,local_228);
          LOCK();
          plVar2 = plVar15 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        uVar20 = CONCAT71((int7)((ulonglong)plVar14 >> 8),DAT_14c96b238);
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        plVar15 = plVar16 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        local_3d8 = lVar8;
        local_3d0 = plVar16;
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        cVar10 = FUN_14692fc6e(&local_388,&local_3d8,uVar20 & 0xffffffff);
        plVar15 = local_3d0;
        if (local_3d0 != (longlong *)0x0) {
          LOCK();
          plVar14 = local_3d0 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*local_3d0)(local_3d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        LOCK();
        plVar15 = plVar16 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar1 = (int *)((longlong)plVar16 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        if (cVar10 == '\0') {
          uVar22 = 0;
          uVar20 = 0;
          uVar23 = 0;
        }
        else {
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
          UNLOCK();
          local_418 = lVar8;
          local_410 = plVar16;
          FUN_14497fa56(&local_388,&local_3d8);
          plVar14 = (longlong *)FUN_140f0b848();
          plVar15 = plVar14;
          if (local_390 != 0) {
            plVar15 = &local_3d8;
          }
          lVar8 = *plVar15;
          fVar4 = *(float *)((longlong)plVar15 + 0x1c);
          fVar5 = *(float *)(plVar15 + 4);
          fVar6 = *(float *)((longlong)plVar15 + 0x24);
          fVar7 = *(float *)(plVar15 + 5);
          fVar25 = *(float *)((longlong)plVar15 + 0x2c);
          fVar26 = *(float *)(plVar15 + 6);
          pplVar19 = (longlong **)(plVar14 + 8);
          if (local_390 != 0) {
            pplVar19 = &local_398;
          }
          plVar15 = *pplVar19;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
            UNLOCK();
          }
          if ((local_390 & 1) != 0) {
            if (local_398 != (longlong *)0x0) {
              LOCK();
              plVar14 = local_398 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)*local_398)(local_398);
                LOCK();
                piVar1 = (int *)((longlong)local_398 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_398 + 0x10))(local_398);
                }
              }
            }
            local_390 = 0;
          }
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
          fVar26 = fVar26 + (float)DAT_14c84635c * fVar5 + fVar7 * DAT_14c84635c._4_4_;
          fVar25 = fVar25 + (float)DAT_14c84635c * fVar4 + DAT_14c84635c._4_4_ * fVar6;
          fVar17 = (float)lVar8;
          fVar12 = (float)((ulonglong)lVar8 >> 0x20);
          plVar16 = (longlong *)(ulonglong)(uint)(int)(fVar17 * fVar4 + fVar6 * fVar12 + fVar25);
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            plVar14 = plVar15 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              local_440 = plVar16;
              (**(code **)*plVar15)(plVar15);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar16 = local_440;
              if (*piVar1 == 0) {
                (**(code **)(*plVar15 + 0x10))(plVar15);
                plVar16 = local_440;
              }
            }
          }
          uVar23 = CONCAT44((int)fVar26,(int)fVar25);
          uVar18 = (ulonglong)(uint)(int)(fVar5 * fVar17 + fVar7 * fVar12 + fVar26) << 0x20 |
                   (ulonglong)plVar16;
          uVar20 = (ulonglong)(uint)(int)(local_c8 * local_e8 + fStack_c0 * fStack_e4) << 0x20;
          uVar22 = (ulonglong)(uint)(int)(local_e8 * fStack_cc + fStack_e4 * fStack_c4);
        }
        FUN_1447fa21a(&local_388);
        FUN_144715780();
      }
      if (local_3e0 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_3e0 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_3e0)();
          LOCK();
          piVar1 = (int *)((longlong)local_3e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_3e0 + 0x10))();
          }
        }
      }
      local_434 = 0;
      goto LAB_1477f22a7;
    }
  }
  uVar22 = 0;
  uVar20 = 0;
  uVar23 = 0;
LAB_1477f22a7:
  if (param_5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_5);
  }
  local_440 = param_1 + 9;
  if (*(int *)((longlong)param_1 + 0x54) < param_5) {
    FUN_1477fac3c(local_440,param_5);
  }
  if (param_5 != 0) {
    uVar21 = local_428 >> 0x20;
    do {
      iVar11 = (int)param_1[10];
      *(uint *)(param_1 + 10) = iVar11 + 1U;
      if (*(uint *)((longlong)param_1 + 0x54) < iVar11 + 1U) {
        FUN_1477facac(local_440,iVar11);
      }
      puVar3 = (undefined8 *)(param_1[9] + (longlong)iVar11 * 0x48);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *(undefined1 *)(puVar3 + 8) = local_441;
      *(undefined1 *)((longlong)puVar3 + 0x42) = 0;
      FUN_14336579c(puVar3 + 2,local_428,uVar21);
      lVar8 = param_1[9];
      lVar13 = (longlong)((int)param_1[10] + -1);
      *(undefined8 *)(lVar8 + 0x28 + lVar13 * 0x48) = uVar23;
      *(ulonglong *)(lVar8 + 0x30 + lVar13 * 0x48) = uVar18;
      *(ulonglong *)(param_1[9] + 0x38 + (longlong)((int)param_1[10] + -1) * 0x48) = uVar20 | uVar22
      ;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  *(undefined4 *)(param_1 + 0xf) = DAT_14cabbc90;
  FUN_14080c2b4();
  plVar15 = local_430;
  if ((char)local_434 == '\0') {
    LOCK();
    plVar16 = local_430 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_430)(local_430);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  plVar15 = (longlong *)local_420[1];
  if (plVar15 != (longlong *)0x0) {
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
  if ((local_b0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477f2a0c FUN_1477f2a0c body=154 status=ok
// SIG undefined FUN_1477f2a0c(void)

void FUN_1477f2a0c(longlong param_1)

{
  if ((*(longlong *)(param_1 + 8) != 0) && (DAT_14c98e618 != 0)) {
    FUN_141092d32(*(longlong *)(DAT_14c98e618 + 0x20) + 0x78);
  }
  if (0 < *(int *)(param_1 + 0x60)) {
    FUN_14080c2b4();
  }
  FUN_1477fabf2(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1477fab88(*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x50));
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  FUN_1477fab62(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477f2aa6 FUN_1477f2aa6 body=139 status=ok
// SIG undefined FUN_1477f2aa6(void)

void FUN_1477f2aa6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x7c) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    lVar1 = *(longlong *)(DAT_14c98e618 + 0x20);
    FUN_1477fad40(local_60,param_1);
    FUN_14574c986(lVar1 + 0x78,&local_68,local_60);
    FUN_1401cb1ee(local_60);
    *(undefined8 *)(param_1 + 8) = local_68;
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f2b32 FUN_1477f2b32 body=557 status=ok
// SIG undefined FUN_1477f2b32(void)

ulonglong FUN_1477f2b32(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_c8 [44];
  int local_9c;
  longlong local_98;
  undefined8 local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong *local_60;
  int local_58;
  ulonglong local_48;
  
  uVar7 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = uVar7;
  if (*param_1 == param_2) {
    uVar7 = FUN_144a5d717();
    if ((int)param_1[0xe] != 0) {
      local_90 = *(undefined8 *)param_1[0xd];
      plVar5 = (longlong *)((undefined8 *)param_1[0xd])[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      FUN_1477fb004();
      iVar11 = (int)param_1[0xf];
      if (iVar11 != DAT_14cabbc90) {
        FUN_14080c2b4();
        if ((longlong)(int)param_1[10] != 0) {
          lVar13 = (longlong)(int)param_1[10] * 0x48;
          lVar12 = param_1[9] + 0x10;
          do {
            FUN_1477f1e68(lVar12);
            *(undefined4 *)(param_1 + 0xb) = 0;
            lVar12 = lVar12 + 0x48;
            lVar13 = lVar13 + -0x48;
          } while (lVar13 != 0);
        }
        iVar11 = DAT_14cabbc90;
        *(int *)(param_1 + 0xf) = DAT_14cabbc90;
      }
      uVar4 = *(uint *)(param_1 + 10);
      iVar10 = uVar4 - 1;
      if (iVar11 < iVar10) {
        iVar10 = iVar11;
      }
      iVar11 = 0;
      if (0 < iVar10) {
        iVar11 = iVar10;
      }
      local_9c = (int)param_1[0xb];
      iVar11 = local_9c - iVar11;
      local_98 = (longlong)local_9c * 9;
      puVar3 = (undefined8 *)(param_1[9] + (longlong)local_9c * 0x48);
      plVar6 = (longlong *)puVar3[3];
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,0xffffffff,0);
        FUN_14018802a(puVar3[3]);
        puVar3[3] = 0;
      }
      uVar8 = FUN_1405d8a54(0);
      puVar3[3] = uVar8;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)puVar3[1];
      *puVar3 = local_90;
      puVar3[1] = plVar5;
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
      lVar13 = param_1[9] + (longlong)(int)((iVar11 >> 0x1f & uVar4) + iVar11) * 0x48;
      lVar9 = lVar13 + 0x10;
      lVar12 = 0;
      if (*(char *)(lVar13 + 0x42) != '\0') {
        lVar12 = lVar9;
      }
      if (iVar10 < 1) {
        lVar12 = lVar9;
      }
      local_78 = 0;
      local_68 = &PTR_LAB_14a5886c0;
      local_58 = local_9c;
      local_88 = FUN_1433695e0;
      local_60 = param_1;
      FUN_143365ce4(param_1[9] + 0x10 + local_98 * 8,lVar12,param_3);
      iVar11 = (int)param_1[0xb] + 1;
      uVar7 = (longlong)iVar11 / (longlong)(int)param_1[10] & 0xffffffff;
      *(int *)(param_1 + 0xb) = iVar11 % (int)param_1[10];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          uVar7 = (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f2d60 FUN_1477f2d60 body=147 status=ok
// SIG undefined FUN_1477f2d60(void)

void FUN_1477f2d60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 0x7c) = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x48);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 0x18 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
        FUN_14018802a(*(undefined8 *)(lVar2 + 0x18 + lVar4));
        *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0;
      }
      lVar4 = lVar4 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar4);
  }
  if ((DAT_14c98e618 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    FUN_141092d32(*(longlong *)(DAT_14c98e618 + 0x20) + 0x78);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 1477f2df4 FUN_1477f2df4 body=110 status=ok
// SIG undefined FUN_1477f2df4(void)

undefined8 * FUN_1477f2df4(longlong param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined8 uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x20);
  EnterCriticalSection(lpCriticalSection);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *param_2 = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_1477fab62(0,0);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x7c) == 2) {
    iVar1 = *(int *)(param_1 + 0x60);
    LeaveCriticalSection(lpCriticalSection);
    if (iVar1 == 0) {
      FUN_1477f2d60(param_1);
    }
  }
  else {
    LeaveCriticalSection(lpCriticalSection);
  }
  return param_2;
}



// FUNCTION 1477f2e62 FUN_1477f2e62 body=480 status=ok
// SIG undefined FUN_1477f2e62(void)

void FUN_1477f2e62(longlong param_1,int param_2,void *param_3,int param_4,int param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  void *_Dst;
  longlong lVar9;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != (void *)0x0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)param_2 * 0x48);
    plVar2 = (longlong *)*plVar1;
    if (plVar2 == (longlong *)0x0) {
      local_50 = 0;
    }
    else {
      cVar5 = (**(code **)(*plVar2 + 8))
                        (plVar2,param_3,CONCAT44(param_5,param_4),*(undefined8 *)(param_1 + 0x80));
      if (cVar5 == '\0') goto LAB_1477f2ed1;
      local_50 = *plVar1;
    }
    lStack_48 = plVar1[1];
    if (lStack_48 != 0) {
      LOCK();
      *(int *)(lStack_48 + 8) = *(int *)(lStack_48 + 8) + 1;
      UNLOCK();
    }
    local_58 = *(undefined8 *)(param_1 + 0x80);
    local_68 = (void *)0x0;
    iVar6 = (int)((ulonglong)local_58 >> 0x20);
    uVar7 = iVar6 * (int)local_58;
    uStack_60 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      FUN_14602b1fc(&local_68);
      iVar6 = *(int *)(param_1 + 0x84);
    }
    if (param_5 < iVar6) {
      iVar6 = param_5;
    }
    if (0 < iVar6) {
      iVar6 = *(int *)(param_1 + 0x80);
      if (param_4 <= *(int *)(param_1 + 0x80)) {
        iVar6 = param_4;
      }
      iVar8 = 0;
      _Dst = local_68;
      do {
        memcpy(_Dst,param_3,(longlong)iVar6 * 4);
        iVar8 = iVar8 + 1;
        iVar4 = *(int *)(param_1 + 0x84);
        if (param_5 < *(int *)(param_1 + 0x84)) {
          iVar4 = param_5;
        }
        param_3 = (void *)((longlong)param_3 + (longlong)param_4 * 4);
        _Dst = (void *)((longlong)_Dst + (longlong)iVar6 * 4);
      } while (iVar8 < iVar4);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    lVar9 = (longlong)*(int *)(param_1 + 0x18);
    uVar7 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar7;
    if (*(uint *)(param_1 + 0x1c) < uVar7) {
      FUN_1477fb066((longlong *)(param_1 + 0x10));
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    *(undefined8 *)(lVar3 + lVar9 * 0x28) = 0;
    *(void **)(lVar3 + lVar9 * 0x28) = local_68;
    local_68 = (void *)0x0;
    *(undefined4 *)(lVar3 + 8 + lVar9 * 0x28) = (undefined4)uStack_60;
    *(undefined4 *)(lVar3 + 0xc + lVar9 * 0x28) = uStack_60._4_4_;
    uStack_60 = 0;
    *(undefined8 *)(lVar3 + 0x10 + lVar9 * 0x28) = local_58;
    *(longlong *)(lVar3 + 0x18 + lVar9 * 0x28) = local_50;
    *(longlong *)(lVar3 + 0x20 + lVar9 * 0x28) = lStack_48;
    local_50 = 0;
    lStack_48 = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
    FUN_1477f3044(&local_68);
  }
LAB_1477f2ed1:
  LOCK();
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  UNLOCK();
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f3044 FUN_1477f3044 body=74 status=ok
// SIG undefined FUN_1477f3044(void)

void FUN_1477f3044(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[4];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477f3092 FUN_1477f3092 body=69 status=ok
// SIG undefined FUN_1477f3092(void)

ulonglong FUN_1477f3092(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
    if (*(int *)(lVar1 + 0x60) == 0) {
      uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0x18) == 0);
    }
    else {
      uVar2 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x20));
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1477f30d8 FUN_1477f30d8 body=181 status=ok
// SIG undefined FUN_1477f30d8(void)

undefined8 FUN_1477f30d8(longlong param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_14001cc68(0x88,0x10);
  local_38 = *(undefined4 *)(param_1 + 0x5c);
  uVar1 = *(undefined1 *)(param_1 + 0x58);
  local_30 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  local_28 = *(longlong *)(param_1 + 0x30);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1477f212c(lVar4,&local_30,uVar2,uVar1);
  lVar3 = *(longlong *)(param_1 + 0x60);
  lVar5 = lVar3;
  if ((lVar3 != lVar4) && (*(longlong *)(param_1 + 0x60) = lVar4, lVar5 = lVar4, lVar3 != 0)) {
    FUN_1477f2a0c(lVar3);
    FUN_1400020a8(lVar3);
    lVar5 = *(longlong *)(param_1 + 0x60);
  }
  FUN_1477f2aa6(lVar5);
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1477f31a0 FUN_1477f31a0 body=90 status=ok
// SIG undefined FUN_1477f31a0(void)

void FUN_1477f31a0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    (**(code **)(*param_1 + 0x318))(param_1,local_28,param_2);
    FUN_143366bda(lVar1,local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f31fc FUN_1477f31fc body=258 status=ok
// SIG undefined FUN_1477f31fc(void)

void FUN_1477f31fc(longlong *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[0xc] != 0) {
    FUN_1477f2df4(param_1[0xc],&local_60);
    if ((longlong)local_58 != 0) {
      puVar1 = local_60;
      do {
        local_88 = *puVar1;
        *puVar1 = 0;
        local_80 = *(undefined4 *)(puVar1 + 1);
        local_7c = *(undefined4 *)((longlong)puVar1 + 0xc);
        puVar1[1] = 0;
        local_78 = puVar1[2];
        local_70 = puVar1[3];
        local_68 = puVar1[4];
        puVar1[3] = 0;
        puVar1[4] = 0;
        (**(code **)(*param_1 + 800))(param_1,&local_88);
        puVar1 = puVar1 + 5;
      } while (puVar1 != local_60 + (longlong)local_58 * 5);
    }
    FUN_1477fab62(local_60,local_58);
    if (local_60 != (undefined8 *)0x0) {
      FUN_1400020a8(local_60);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f3300 FUN_1477f3300 body=69 status=ok
// SIG undefined FUN_1477f3300(void)

void FUN_1477f3300(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1477f2d60();
    lVar1 = *(longlong *)(param_1 + 0x60);
    if (lVar1 != 0) {
      *(undefined8 *)(param_1 + 0x60) = 0;
      FUN_1477f2a0c(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1477f3368 FUN_1477f3368 body=156 status=ok
// SIG undefined FUN_1477f3368(void)

void FUN_1477f3368(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 1;
  FUN_140807d8e((longlong *)(param_2 + 0x18),&local_30,L".{frame}",&DAT_149dfb77a);
  if ((longlong *)(param_2 + 0x18) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x18) = local_30;
    *(undefined4 *)(param_2 + 0x20) = local_28;
    *(undefined4 *)(param_2 + 0x24) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f3408 FUN_1477f3408 body=193 status=ok
// SIG undefined FUN_1477f3408(void)

undefined8 FUN_1477f3408(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *plStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_144a52528();
  FUN_1446ddc76(&local_20,"ImageWriteQueue",1);
  uVar3 = FUN_144a52528();
  plVar4 = (longlong *)FUN_14493e38c(uVar3,local_20);
  uVar3 = (**(code **)(*plVar4 + 0x40))(plVar4);
  *(undefined8 *)(param_1 + 0xc0) = uVar3;
  local_38 = 0;
  plStack_30 = (longlong *)0x0;
  FUN_14614a64a(param_1 + 200,&local_38);
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_1477f30d8(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f34ca FUN_1477f34ca body=65 status=ok
// SIG undefined FUN_1477f34ca(void)

undefined8 FUN_1477f34ca(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_1477f3092();
  if (cVar2 == '\0') {
    uVar3 = 0;
  }
  else {
    if (*(longlong *)(param_1 + 200) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x70);
                    /* WARNING: Could not recover jumptable at 0x0001477f34fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,0,0);
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1477f350c FUN_1477f350c body=174 status=ok
// SIG undefined FUN_1477f350c(void)

void FUN_1477f350c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  (**(code **)(**(longlong **)(param_1 + 0xc0) + 0x10))(*(longlong **)(param_1 + 0xc0),local_68);
  FUN_14614a64a(param_1 + 200,local_68);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (local_58 != 0) {
    plVar2 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar2 = local_38;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f35bc FUN_1477f35bc body=550 status=ok
// SIG undefined FUN_1477f35bc(void)

void FUN_1477f35bc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  longlong *local_a0 [2];
  LARGE_INTEGER local_90;
  undefined4 local_88;
  longlong *local_80;
  char local_54;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 200) != 0) {
    QueryPerformanceCounter(&local_90);
    plVar1 = DAT_14c872be8;
    local_90.QuadPart = 0x14a58282e;
    local_88 = 10;
    FUN_1446e940c(local_a4,&local_90);
    local_90.QuadPart = 0x14a582844;
    local_88 = 0x15;
    FUN_1446e940c(local_a8,&local_90);
    FUN_140208bae(local_a0,local_a8,local_a4,L"Finalizing write operations...");
    local_b8 = plVar1;
    FUN_140997f46(&local_90,0,local_a0,1);
    FUN_140997a0e(&local_90);
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    FUN_14681a77c(&local_90,0x3dcccccd,1,1);
    cVar2 = (**(code **)(*DAT_14c872be8 + 0x60))();
    if (cVar2 == '\0') {
      auVar4 = roundpd(ZEXT816(0x415312d020000000),ZEXT816(0x415312d020000000),1);
      uVar3 = (longlong)auVar4._0_8_ / 10000;
      if (0xfffffffe < (longlong)uVar3) {
        uVar3 = 0xffffffff;
      }
      if ((longlong)uVar3 < 1) {
        uVar3 = 0;
      }
      do {
        if ((*(longlong *)(param_1 + 200) != 0) &&
           (plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x70),
           cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,uVar3 & 0xffffffff,0), cVar2 != '\0'))
        break;
        FUN_144a5dc74(local_a0);
        FUN_140997b30(&local_90,0);
        if (local_a0[0] != (longlong *)0x0) {
          (**(code **)(*local_a0[0] + 0x10))();
        }
        cVar2 = (**(code **)(*DAT_14c872be8 + 0x60))();
      } while (cVar2 == '\0');
    }
    FUN_140997a5c(&local_90);
    if (local_54 == '\x01') {
      local_54 = '\0';
    }
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x10))();
    }
    if ((wchar_t *)local_90.QuadPart != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_90 + 0x10))();
    }
  }
  FUN_1477f3300(param_1);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f37e4 FUN_1477f37e4 body=409 status=ok
// SIG undefined FUN_1477f37e4(void)

undefined8 * FUN_1477f37e4(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  *puVar3 = &PTR_FUN_14a587e10;
  plVar1 = puVar3 + 1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a5886e0;
  plVar4[2] = (longlong)puVar3;
  if ((ulonglong)*(byte *)(param_1 + 0xd) < 6) {
    puVar5 = (undefined2 *)(&PTR_DAT_14a588ce8)[*(byte *)(param_1 + 0xd)];
  }
  else {
    puVar5 = &DAT_149dfb77a;
  }
  local_58 = 0;
  (**(code **)(*param_1 + 0x310))(param_1,&local_48,param_3,puVar5);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  puVar3[1] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar3 + 2) = local_40;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_3c;
  FUN_1477f397e(param_1,plVar1);
  if (*(int *)(puVar3 + 2) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*plVar1;
  }
  FUN_140a69a60(&local_48,puVar5,param_1 + 0xe);
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  puVar3[1] = local_48;
  local_48 = 0;
  *(undefined4 *)(puVar3 + 2) = local_40;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_3c;
  *param_2 = puVar3;
  param_2[1] = plVar4;
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
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f397e FUN_1477f397e body=983 status=ok
// SIG undefined FUN_1477f397e(void)

void FUN_1477f397e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_f0 [4];
  undefined1 local_ec [4];
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8 [2];
  longlong *local_b8 [2];
  undefined2 *local_a8;
  int local_a0;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140bee914(&local_a8);
  plVar4 = (longlong *)FUN_14054d1d4();
  puVar8 = local_a8;
  if (local_a0 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  cVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,puVar8);
  if (cVar3 == '\0') {
    plVar4 = (longlong *)FUN_14054d1d4();
    puVar8 = local_a8;
    if (local_a0 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,puVar8,0);
  }
  lVar5 = (**(code **)**(undefined8 **)(param_1 + 0x48))();
  if (*(char *)(lVar5 + 0x28) == '\x01') {
    plVar4 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_2 + 1) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    lVar5 = (**(code **)(*plVar4 + 0x108))(plVar4,puVar8);
    if (lVar5 != -1) {
      local_f8 = param_2;
      do {
        uVar6 = FUN_1400dbadc();
        plVar4 = (longlong *)FUN_1415bdc84(uVar6);
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(param_2 + 1) != 0) {
          puVar8 = (undefined2 *)*param_2;
        }
        cVar3 = (**(code **)(*plVar4 + 0x88))(plVar4,puVar8);
        if (cVar3 != '\0') break;
        FUN_140009b9a(local_c8,param_2);
        local_68 = L"UnableToRemoveFile_Format";
        local_60 = 0x19;
        FUN_1446e940c(local_ec,&local_68);
        local_68 = L"MovieSceneCaptureProtocol";
        local_60 = 0x19;
        FUN_1446e940c(local_f0,&local_68);
        FUN_140208bae(local_e8,local_f0,local_ec,
                      L"The destination file \'{0}\' could not be deleted because it\'s in use by another application.\n\nPlease close this application before continuing."
                     );
        FUN_14023409e(&local_d8,local_e8,1);
        local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
        FUN_14023423e(local_58,local_c8);
        local_80 = &local_48;
        local_88 = &local_68;
        FUN_14010d304(&local_78,&local_88);
        local_98 = local_d8;
        local_90 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_b8,&local_98,&local_78);
        FUN_14007f2db(local_78,local_70);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        param_2 = local_f8;
        if (local_58[0] != (longlong *)0x0) {
          (**(code **)(*local_58[0] + 0x10))();
        }
        plVar4 = local_d0;
        if (local_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar2 = (int *)((longlong)plVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        if (local_c8[0] != (longlong *)0x0) {
          (**(code **)(*local_c8[0] + 0x10))();
        }
        if (local_e8[0] != (longlong *)0x0) {
          (**(code **)(*local_e8[0] + 0x10))();
        }
        local_68 = L"UnableToRemoveFile";
        local_60 = 0x12;
        FUN_1446e940c(&local_78,&local_68);
        local_68 = L"MovieSceneCaptureProtocol";
        local_60 = 0x19;
        FUN_1446e940c(&local_88,&local_68);
        FUN_140208bae(&local_68,&local_88,&local_78,L"Unable to remove file");
        puVar7 = (undefined8 *)FUN_1447a1f4a(&local_68);
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(puVar7 + 1) != 0) {
          puVar8 = (undefined2 *)*puVar7;
        }
        puVar7 = (undefined8 *)FUN_1447a1f4a(local_b8);
        puVar9 = &DAT_149dfb77a;
        if (*(int *)(puVar7 + 1) != 0) {
          puVar9 = (undefined2 *)*puVar7;
        }
        FUN_14682f732(0,puVar9,puVar8);
        if (local_68 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_68 + 0x10))();
        }
        if (local_b8[0] != (longlong *)0x0) {
          (**(code **)(*local_b8[0] + 0x10))();
        }
        plVar4 = (longlong *)FUN_14054d1d4();
        puVar8 = &DAT_149dfb77a;
        if (*(int *)(param_2 + 1) != 0) {
          puVar8 = (undefined2 *)*param_2;
        }
        lVar5 = (**(code **)(*plVar4 + 0x108))(plVar4,puVar8);
      } while (lVar5 != -1);
    }
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f3d56 FUN_1477f3d56 body=466 status=ok
// SIG undefined FUN_1477f3d56(void)

void FUN_1477f3d56(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined1 local_a0;
  undefined8 **local_98;
  undefined8 *local_90;
  undefined1 local_88 [8];
  longlong *local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar9 = (undefined8 *)FUN_14001cc68(0x90,0x10);
  *puVar9 = &PTR_FUN_14a1e93c0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  *(undefined1 *)(puVar9 + 3) = 3;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
  *(undefined1 *)(puVar9 + 4) = 1;
  puVar9[6] = 0;
  puVar9[8] = 0;
  puVar9[0xf] = 0;
  puVar9[0x10] = 0;
  uVar5 = *param_2;
  *param_2 = 0;
  iVar3 = *(int *)(param_2 + 1);
  iVar4 = *(int *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  local_90 = puVar9;
  puVar10 = (undefined8 *)FUN_14001cc68(0x40,0x10);
  local_98 = &local_78;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_a0 = 4;
  local_a8 = 8;
  FUN_147129202(puVar10,param_2 + 2,0,1);
  puVar6 = local_90;
  *puVar10 = &PTR_FUN_14a1e9260;
  puVar10[5] = uVar5;
  puVar10[6] = (longlong)iVar3;
  puVar10[7] = (longlong)iVar4;
  puVar9[0xe] = puVar10;
  bVar7 = *(byte *)(param_1 + 0xd);
  if (bVar7 == 0) {
    FUN_147128be6(local_90);
    bVar7 = *(byte *)(param_1 + 0xd);
  }
  if ((bVar7 < 6) && ((0x2bU >> (bVar7 & 0x1f) & 1) != 0)) {
    *(byte *)(puVar6 + 3) = bVar7;
  }
  uVar8 = (**(code **)(*param_1 + 0x328))(param_1);
  *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar8;
  iVar3 = *(int *)(param_2[3] + 0x10);
  iVar4 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar4 = 0;
  }
  FUN_1402980a2(puVar9 + 1,*(undefined8 *)(param_2[3] + 8),iVar4);
  local_78 = puVar6;
  (**(code **)(*(longlong *)param_1[0x18] + 8))((longlong *)param_1[0x18],local_88,&local_78,1);
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_80 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if (local_78 != (undefined8 *)0x0) {
    (**(code **)*local_78)(local_78,1);
  }
  FUN_1477f3044(param_2);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f3f2a FUN_1477f3f2a body=151 status=ok
// SIG undefined FUN_1477f3f2a(void)

void FUN_1477f3f2a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58 [16];
  longlong local_48;
  longlong *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140230a18(local_58,&DAT_149dfb77a);
  FUN_140056680(local_68,L"quality");
  local_38 = local_68;
  local_30 = local_58;
  FUN_1472ad862(param_2,local_24,&local_38,0);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f3fc2 FUN_1477f3fc2 body=119 status=ok
// SIG undefined FUN_1477f3fc2(void)

undefined8 FUN_1477f3fc2(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"-MovieQuality=",param_1 + 0xd8);
  iVar2 = 100;
  if (*(int *)(param_1 + 0xd8) < 100) {
    iVar2 = *(int *)(param_1 + 0xd8);
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0xd8) = iVar1;
  FUN_1477f3408(param_1);
  return 1;
}



// FUNCTION 1477f403a FUN_1477f403a body=150 status=ok
// SIG undefined FUN_1477f403a(void)

void FUN_1477f403a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58 [16];
  longlong local_48;
  longlong *local_38;
  undefined1 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_142787b30(local_58,*(undefined4 *)(param_1 + 0xd8));
  FUN_140056680(local_68,L"quality");
  local_38 = local_68;
  local_30 = local_58;
  FUN_1472ad862(param_2,local_24,&local_38,0);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f40d2 FUN_1477f40d2 body=208 status=ok
// SIG undefined FUN_1477f40d2(void)

void FUN_1477f40d2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147d27fdc(*(undefined8 *)(param_1 + 0x28),&local_28);
  plVar2 = *(longlong **)(local_28 + 0x510);
  plVar3 = *(longlong **)(local_28 + 0x518);
  if (plVar3 == (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar2 + 0xc0))();
    FUN_147428700(uVar4);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    uVar4 = (**(code **)(*plVar2 + 0xc0))();
    FUN_147428700(uVar4);
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
  FUN_1477f35bc(param_1);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f41a4 FUN_1477f41a4 body=291 status=ok
// SIG undefined FUN_1477f41a4(void)

void FUN_1477f41a4(longlong param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60 [16];
  longlong local_50;
  longlong *local_40;
  undefined1 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pwVar1 = L"Uncompressed";
  if (*(char *)(param_1 + 0xd8) != '\0') {
    pwVar1 = L"Compressed";
  }
  FUN_140230a18(local_60,pwVar1);
  FUN_140056680(local_70,L"quality");
  local_40 = local_70;
  local_38 = local_60;
  FUN_1472ad862(param_2,local_2c,&local_40,0);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((ulonglong)*(byte *)(param_1 + 0xd9) < 6) {
    puVar2 = (undefined2 *)(&PTR_u_sRGB_14a588d18)[*(byte *)(param_1 + 0xd9)];
  }
  else {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140230a18(local_60,puVar2);
  FUN_140056680(local_70,L"gamut");
  local_40 = local_70;
  local_38 = local_60;
  FUN_1472ad862(param_2,local_2c,&local_40,0);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f42d4 FUN_1477f42d4 body=390 status=ok
// SIG undefined FUN_1477f42d4(void)

void FUN_1477f42d4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  lVar7 = param_1 + 0x44;
  if (*(char *)(param_1 + 0xac) != '\0') {
    lVar7 = param_1 + 0x50;
  }
  uVar3 = *(undefined8 *)(lVar7 + 0x60);
  *puVar5 = &PTR_FUN_14a583cc0;
  puVar5[1] = uVar3;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a588700;
  plVar6[2] = (longlong)puVar5;
  *(undefined8 **)(param_1 + 0xf8) = puVar5;
  plVar4 = *(longlong **)(param_1 + 0x100);
  if (plVar6 == plVar4) {
    if (plVar6 == (longlong *)0x0) goto LAB_1477f43ba;
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477f43ba;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar6;
  }
  else {
    *(longlong **)(param_1 + 0x100) = plVar6;
    if (plVar4 == (longlong *)0x0) goto LAB_1477f43ba;
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1477f43ba;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1477f43ba:
  (**(code **)(**(longlong **)(param_1 + 0xf8) + 8))();
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_143367526(param_1,&local_40);
  *(undefined4 *)(param_1 + 0x22c) = param_3;
  if (*(char *)(param_1 + 0x210) == '\x01') {
    FUN_1477f4470(param_1 + -0x28);
  }
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
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f4470 FUN_1477f4470 body=413 status=ok
// SIG undefined FUN_1477f4470(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1477f4470(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined1 *)(param_1 + 0x1c0) = 1;
  if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
    if (*(char *)(param_1 + 0x1c1) != '\x01') goto LAB_1477f456f;
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x10))();
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar3 = *(undefined8 *)(param_1 + 0xcc);
  *puVar6 = &PTR_FUN_14a583cf0;
  puVar6[1] = 0;
  puVar6[2] = (double)(int)((ulonglong)uVar3 >> 0x20) / (double)(int)uVar3;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a588720;
  plVar7[2] = (longlong)puVar6;
  *(undefined8 **)(param_1 + 0x120) = puVar6;
  plVar4 = *(longlong **)(param_1 + 0x128);
  if (plVar7 == plVar4) {
    if (plVar7 == (longlong *)0x0) goto LAB_1477f456f;
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477f456f;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar4 = plVar7;
  }
  else {
    *(longlong **)(param_1 + 0x128) = plVar7;
    if (plVar4 == (longlong *)0x0) goto LAB_1477f456f;
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_1477f456f;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_1477f456f:
  (**(code **)(**(longlong **)(param_1 + 0x120) + 8))();
  if (*(char *)(param_1 + 0x1c1) != '\0') {
    _DAT_14c75908c = 0x3f800000;
    FUN_14680030c(0x3f800000);
    plVar4 = *(longlong **)(param_1 + 0x80);
    if ((*(byte *)(plVar4 + 10) & 0xfd) != 0) {
      *(undefined1 *)(plVar4 + 10) = 2;
      cVar5 = (**(code **)(*plVar4 + 0x2c0))(plVar4);
      if (cVar5 == '\0') {
        *(undefined1 *)(plVar4 + 10) = 1;
      }
    }
    return;
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
  if ((*(byte *)(plVar4 + 10) & 0xfd) != 0) {
    *(undefined1 *)(plVar4 + 10) = 2;
    cVar5 = (**(code **)(*plVar4 + 0x2c0))(plVar4);
    if (cVar5 == '\0') {
      *(undefined1 *)(plVar4 + 10) = 1;
    }
  }
  _DAT_14c75908c = 0;
  FUN_14680030c(0);
  return;
}



// FUNCTION 1477f460e FUN_1477f460e body=489 status=ok
// SIG undefined FUN_1477f460e(void)

void FUN_1477f460e(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = param_1 + 0x23c;
  lVar4 = FUN_14479d2ce(lVar5);
  if (lVar4 == 0) {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    if (*(int *)(param_1 + 0x254) == -1) {
      uStack_50 = *(undefined8 *)(param_1 + 0x244);
      local_48 = *(undefined8 *)(param_1 + 0x24c);
    }
    else {
      local_68 = *(undefined4 *)(param_1 + 0x244);
      uStack_64 = *(undefined4 *)(param_1 + 0x248);
      uStack_60 = *(undefined4 *)(param_1 + 0x24c);
      uStack_5c = *(undefined4 *)(param_1 + 0x250);
      FUN_1468b521e(&local_68,&uStack_50);
    }
    local_58 = 0;
    lVar4 = FUN_14479d2ce();
    if (lVar4 == 0) {
      if (((uStack_50._4_4_ != 0 || (int)uStack_50 != 0) || (int)local_48 != 0) ||
          local_48._4_4_ != 0) {
        lVar4 = thunk_FUN_140971090();
        cVar3 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar4 == 0) || (cVar3 == '\0')) {
          FUN_14485c47a(&local_58,lVar4);
          if (lVar4 == 0) goto LAB_1477f4735;
        }
        else {
          uVar1 = *(uint *)(lVar4 + 0xc);
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(&local_58,lVar4);
          }
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_1477f4715;
      }
    }
    else {
LAB_1477f4715:
      lVar7 = FUN_144a6c4d8();
      if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) == lVar7 + 0x30)) {
        FUN_14485c47a(lVar5,lVar4);
        goto LAB_1477f4648;
      }
    }
LAB_1477f4735:
    lVar4 = 0;
    FUN_14485c47a(lVar5,0);
    bVar2 = true;
  }
  else {
LAB_1477f4648:
    lVar5 = FUN_1447210f0(lVar4);
    if (lVar5 != 0) {
      uVar6 = FUN_1447210f0(lVar4);
      cVar3 = FUN_140e50f4a(uVar6);
      if (cVar3 == '\0') goto LAB_1477f469d;
    }
    bVar2 = false;
  }
  if ((((*(int *)(param_1 + 0x248) == 0 && *(int *)(param_1 + 0x244) == 0) &&
       *(int *)(param_1 + 0x24c) == 0) && *(int *)(param_1 + 0x250) == 0) ||
     ((!bVar2 && ((*(byte *)(lVar4 + 0x65) & 0x18) == 0x10)))) {
    FUN_143368868(param_1,param_2);
  }
LAB_1477f469d:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f482c FUN_1477f482c body=185 status=ok
// SIG undefined FUN_1477f482c(void)

void FUN_1477f482c(undefined8 param_1,longlong param_2)

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
    FUN_1456cec3c();
  }
  FUN_1477f48e6(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f48e6 FUN_1477f48e6 body=206 status=ok
// SIG undefined FUN_1477f48e6(void)

void FUN_1477f48e6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145893246();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1477f4932;
    }
  }
  lVar2 = 0;
LAB_1477f4932:
  FUN_1400bbfc4(&local_40,lVar2);
  *(undefined4 *)(param_1 + 0x58) = local_40;
  *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x60) = uStack_38;
  *(undefined4 *)(param_1 + 100) = uStack_34;
  if ((undefined4 *)(param_1 + 0x58) == &local_40) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x68) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x70) = local_28;
    *(undefined4 *)(param_1 + 0x74) = local_24;
  }
  FUN_1477f4e58(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f49b6 FUN_1477f49b6 body=185 status=ok
// SIG undefined FUN_1477f49b6(void)

void FUN_1477f49b6(undefined8 param_1,longlong param_2)

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
    FUN_1456cec3c();
  }
  FUN_1477f4a70(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f4a70 FUN_1477f4a70 body=206 status=ok
// SIG undefined FUN_1477f4a70(void)

void FUN_1477f4a70(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_145893246();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1477f4abc;
    }
  }
  lVar2 = 0;
LAB_1477f4abc:
  FUN_1400bbfc4(&local_40,lVar2);
  *(undefined4 *)(param_1 + 0x38) = local_40;
  *(undefined4 *)(param_1 + 0x3c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x40) = uStack_38;
  *(undefined4 *)(param_1 + 0x44) = uStack_34;
  if ((undefined4 *)(param_1 + 0x38) == &local_40) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x48) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x50) = local_28;
    *(undefined4 *)(param_1 + 0x54) = local_24;
  }
  FUN_1477f4e58(param_1);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f4b52 FUN_1477f4b52 body=773 status=ok
// SIG undefined FUN_1477f4b52(void)

longlong * FUN_1477f4b52(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_1f8 [40];
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  uint local_1c0;
  longlong local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_58;
  undefined1 local_56;
  undefined8 local_54;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_1446f470e(&local_1a0,L"AssetRegistry",1);
  uVar4 = FUN_144a52528();
  plVar5 = (longlong *)FUN_14493e38c(uVar4,local_1a0);
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_128 = 0;
  local_120 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_158 = (undefined4 *)0x0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_cc = 0xffffffff00000080;
  local_c4 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_56 = 0;
  local_54 = 0;
  uVar4 = FUN_145893246();
  FUN_1414d7078(uVar4,&local_1d0);
  uStack_150 = CONCAT44(uStack_150._4_4_,1);
  FUN_1401d5364(&local_158,0);
  *local_158 = local_1d0;
  local_158[1] = uStack_1cc;
  local_158[2] = iStack_1c8;
  local_158[3] = uStack_1c4;
  local_58 = CONCAT11(1,(undefined1)local_58);
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5);
  (**(code **)(*plVar5 + 0x50))(plVar5,&local_198,&local_1b8,1);
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)(int)uStack_1b0 != 0) {
    lVar10 = (longlong)(int)uStack_1b0 * 0x70;
    lVar7 = local_1b8;
    do {
      lVar6 = FUN_146858078(lVar7,0);
      if (lVar6 != 0) {
        lVar2 = param_1[1];
        uVar3 = (int)lVar2 + 1;
        *(uint *)(param_1 + 1) = uVar3;
        if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
          FUN_140a0062e(param_1);
        }
        *(longlong *)(*param_1 + (longlong)(int)lVar2 * 8) = lVar6;
      }
      lVar7 = lVar7 + 0x70;
      lVar10 = lVar10 + -0x70;
    } while (lVar10 != 0);
  }
  FUN_1457a9e34(&local_1d0,0x10,1,0);
  uVar8 = (ulonglong)local_1c0;
  lVar7 = CONCAT44(uStack_1cc,local_1d0);
  if ((-1 < (int)local_1c0) && ((int)local_1c0 < iStack_1c8)) {
    do {
      lVar7 = *(longlong *)(lVar7 + (uVar8 & 0xffffffff) * 8);
      lVar10 = FUN_145893246();
      if ((lVar10 != 0) &&
         (((*(int *)(lVar10 + 0x38) <= *(int *)(lVar7 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
            lVar10 + 0x30)) &&
          (lVar7 = *(longlong *)(CONCAT44(uStack_1cc,local_1d0) + (longlong)(int)local_1c0 * 8),
          (*(uint *)(lVar7 + 0xd4) & 0x82000001) == 0)))) {
        iVar1 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
          FUN_140a0062e(param_1,iVar1);
        }
        *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar7;
      }
      lVar7 = CONCAT44(uStack_1cc,local_1d0);
      uVar8 = (longlong)(int)local_1c0;
      do {
        uVar9 = uVar8;
        uVar8 = uVar9 + 1;
        local_1c0 = (uint)uVar8;
        if ((longlong)iStack_1c8 <= (longlong)uVar8) break;
      } while (*(longlong *)(lVar7 + uVar8 * 8) == 0);
    } while ((-2 < (longlong)uVar9) && ((int)local_1c0 < iStack_1c8));
  }
  if (lVar7 != 0) {
    FUN_1400020a8();
  }
  FUN_14019571a(&local_198);
  FUN_140195631(local_1b8,uStack_1b0 & 0xffffffff);
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1477f4e58 FUN_1477f4e58 body=116 status=ok
// SIG undefined FUN_1477f4e58(void)

void FUN_1477f4e58(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1477f556c(param_1 + 0x38);
  lVar2 = FUN_1477f556c(param_1 + 0x58);
  if (lVar1 == 0 && lVar2 == 0) {
    if ((*(longlong *)(param_1 + 0x78) == 0) && (*(longlong *)(param_1 + 0x80) == 0)) {
      return;
    }
  }
  else if ((((lVar1 != 0) && (*(longlong *)(param_1 + 0x78) != 0)) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x10) == lVar1)) &&
          ((*(longlong *)(param_1 + 0x80) != 0 &&
           (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x10) == lVar2)))) {
    return;
  }
  FUN_1477f4ecc(param_1);
  return;
}



// FUNCTION 1477f4ecc FUN_1477f4ecc body=997 status=ok
// SIG undefined FUN_1477f4ecc(void)

void FUN_1477f4ecc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70 [2];
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = FUN_1477f52b2(param_1 + 0x38);
  lVar3 = FUN_1477f534a(param_1 + 0x58);
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2f8))(plVar1,param_1 + 0x88);
    FUN_1446ddc76(&local_48,"ImageCaptureProtocol_DEAD",1);
    uVar4 = FUN_1458d44fa();
    uVar5 = FUN_1409ffe1d();
    local_98 = (ulonglong)local_98._4_4_ << 0x20;
    FUN_140af9fb2(local_70,uVar5,uVar4,local_48);
    plVar1 = *(longlong **)(param_1 + 0x78);
    uVar4 = FUN_1409ffe1d();
    FUN_1400021e4(local_70,&local_58);
    puVar6 = local_58;
    if (local_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar1 + 0x170))(plVar1,puVar6,uVar4,0);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2f8))(plVar1,param_1 + 0x88);
    FUN_1446ddc76(&local_60,"AudioCaptureProtocol_DEAD",1);
    uVar4 = FUN_1458d440e();
    uVar5 = FUN_1409ffe1d();
    local_98 = local_98 & 0xffffffff00000000;
    FUN_140af9fb2(local_70,uVar5,uVar4,local_60);
    plVar1 = *(longlong **)(param_1 + 0x80);
    uVar4 = FUN_1409ffe1d();
    FUN_1400021e4(local_70,&local_58);
    puVar6 = local_58;
    if (local_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar1 + 0x170))(plVar1,puVar6,uVar4,0);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (lVar2 != 0) {
    local_58 = *(undefined2 **)(param_1 + 0x18);
    FUN_1400021e4(&local_58,local_70);
    FUN_144a882a8(&local_58,local_70,L"_ImageProtocol");
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
    puVar6 = local_58;
    if (local_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_78,puVar6,1);
    lVar2 = FUN_1477f53e1(param_1,lVar2,local_78);
    if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x78) = lVar2;
      if (lVar2 != 0) goto LAB_1477f51bd;
    }
    else {
      FUN_1456cec3c(lVar2);
      *(longlong *)(param_1 + 0x78) = lVar2;
LAB_1477f51bd:
      local_98 = 0;
      uStack_90 = 0;
      FUN_1400033ba(lVar2,0,0,0);
      (**(code **)(**(longlong **)(param_1 + 0x78) + 0x300))
                (*(longlong **)(param_1 + 0x78),param_1 + 0x88);
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (lVar3 == 0) goto LAB_1477f4f33;
  local_58 = *(undefined2 **)(param_1 + 0x18);
  FUN_1400021e4(&local_58,local_70);
  FUN_144a882a8(&local_58,local_70,L"_AudioProtocol");
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  puVar6 = local_58;
  if (local_50 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_80,puVar6,1);
  lVar2 = FUN_1477f54a6(param_1,lVar3,local_80);
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x80) = lVar2;
    if (lVar2 != 0) goto LAB_1477f5246;
  }
  else {
    FUN_1456cec3c(lVar2);
    *(longlong *)(param_1 + 0x80) = lVar2;
LAB_1477f5246:
    local_98 = 0;
    uStack_90 = 0;
    FUN_1400033ba(lVar2,0,0,0);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x300))
              (*(longlong **)(param_1 + 0x80),param_1 + 0x88);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1477f4f33:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f52b2 FUN_1477f52b2 body=150 status=ok
// SIG undefined FUN_1477f52b2(void)

undefined8 FUN_1477f52b2(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1458d44fa();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1477f534a FUN_1477f534a body=150 status=ok
// SIG undefined FUN_1477f534a(void)

undefined8 FUN_1477f534a(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_1458d440e();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1477f53e1 FUN_1477f53e1 body=196 status=ok
// SIG undefined FUN_1477f53e1(void)

undefined8 FUN_1477f53e1(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f54a6 FUN_1477f54a6 body=196 status=ok
// SIG undefined FUN_1477f54a6(void)

undefined8 FUN_1477f54a6(undefined8 param_1,undefined8 param_2,longlong param_3)

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
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  FUN_144a5c54a(local_b8,param_2);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a8 = param_3;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f556c FUN_1477f556c body=150 status=ok
// SIG undefined FUN_1477f556c(void)

undefined8 FUN_1477f556c(longlong *param_1)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_30;
  undefined2 *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_14475cc44(param_1,&local_20);
    puVar2 = local_20;
    if (local_18 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    uVar1 = FUN_145893246();
    local_30 = 0;
    local_38 = 0;
    uVar1 = FUN_141433b6f(uVar1,0,puVar2,0);
    if (local_20 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1477f5604 FUN_1477f5604 body=308 status=ok
// SIG undefined FUN_1477f5604(void)

longlong * FUN_1477f5604(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = *param_2;
  plVar4 = (longlong *)param_2[1];
  if (plVar4 == (longlong *)0x0) {
    *param_1 = lVar3;
    goto LAB_1477f5675;
  }
  LOCK();
  *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
  UNLOCK();
  plVar2 = (longlong *)param_1[1];
  *param_1 = lVar3;
  if (plVar4 == plVar2) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_1477f5675;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1477f5675;
    lVar3 = *plVar4;
  }
  else {
    param_1[1] = (longlong)plVar4;
    if (plVar2 == (longlong *)0x0) goto LAB_1477f5675;
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1477f5675;
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_1477f5675;
    lVar3 = *plVar2;
    plVar4 = plVar2;
  }
  (**(code **)(lVar3 + 0x10))(plVar4);
LAB_1477f5675:
  (**(code **)(*(longlong *)(*param_2 + 200) + 0x10))(*param_2 + 200,&local_30);
  param_1[2] = local_30;
  if (((int)DAT_14c967818 == (int)local_30) &&
     (DAT_14c967818._4_4_ == (int)((ulonglong)local_30 >> 0x20))) {
    *(undefined4 *)(param_1 + 2) = DAT_14cb0d27c;
    *(undefined4 *)((longlong)param_1 + 0x14) = DAT_14cb0d280;
    FUN_147d27e2c(*param_2);
  }
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f573a FUN_1477f573a body=115 status=ok
// SIG undefined FUN_1477f573a(void)

void FUN_1477f573a(longlong *param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  
  if (param_1 + 5 != param_2) {
    FUN_1477fca1a();
  }
  param_1[9] = param_3;
  if ((char)param_1[10] != '\x03') {
    if ((char)param_1[10] != '\x02') goto LAB_1477f5761;
    (**(code **)(*param_1 + 0x2d0))(param_1);
    *(undefined1 *)(param_1 + 10) = 3;
    (**(code **)(*param_1 + 0x2d8))(param_1);
  }
  FUN_1477f594c(param_1);
LAB_1477f5761:
  *(undefined1 *)(param_1 + 10) = 0;
  cVar1 = (**(code **)(*param_1 + 0x2a0))(param_1);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 10) = 1;
  }
  return;
}



// FUNCTION 1477f57ae FUN_1477f57ae body=198 status=ok
// SIG undefined FUN_1477f57ae(void)

undefined4 * FUN_1477f57ae(undefined4 *param_1,undefined4 *param_2)

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
  
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1447c510a(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1477f5874 FUN_1477f5874 body=215 status=ok
// SIG undefined FUN_1477f5874(void)

void FUN_1477f5874(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0xe9) == '\x01') {
    FUN_145be1251(param_1 + 0x1e0,0);
  }
  uVar4 = FUN_1477f0cba();
  FUN_1477f0d62(uVar4,param_1);
  if (*(char *)(param_1 + 0x1c0) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    if (*(longlong **)(param_1 + 0x120) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x120) + 0x10))();
      *(undefined8 *)(param_1 + 0x120) = 0;
      plVar3 = *(longlong **)(param_1 + 0x128);
      if (plVar3 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x128) = 0;
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
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1477f594c();
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1477f594c();
    }
    FUN_1477f4ecc(param_1);
    FUN_1447f69b6(param_1 + 0x1c8);
  }
  *(undefined1 *)(param_1 + 0x150) = 0;
  return;
}



// FUNCTION 1477f594c FUN_1477f594c body=90 status=ok
// SIG undefined FUN_1477f594c(void)

void FUN_1477f594c(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (char)param_1[10];
  if ((cVar1 != '\0') && (cVar1 != '\x03')) {
    if (cVar1 == '\x02') {
      (**(code **)(*param_1 + 0x2d0))(param_1);
    }
    *(undefined1 *)(param_1 + 10) = 3;
    (**(code **)(*param_1 + 0x2d8))(param_1);
    cVar1 = (char)param_1[10];
  }
  if (cVar1 == '\x03') {
    *(undefined1 *)(param_1 + 10) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001477f5998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2e8))(param_1);
    return;
  }
  return;
}



// FUNCTION 1477f59a6 FUN_1477f59a6 body=473 status=ok
// SIG undefined FUN_1477f59a6(void)

undefined8 FUN_1477f59a6(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  longlong *plVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined1 auStack_128 [40];
  longlong local_100 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0 [4];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  longlong *local_c0;
  undefined4 *local_b8;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_7c = 0xffffffff00000080;
  local_74 = 0;
  local_68 = 0;
  local_60 = 0;
  FUN_1477f9bf8(&local_a8,param_1 + 0x140);
  iVar3 = *(int *)(param_4 + 8);
  if (*(char *)(param_1 + 0x81) == '\0') {
    iVar3 = iVar3 + *(int *)(param_1 + 0x194);
  }
  FUN_140002266(&local_f0,L"%0*d",*(undefined1 *)(param_1 + 0x98),iVar3);
  local_e0[0] = 3;
  local_d0 = (undefined4)local_f0;
  uStack_cc = local_f0._4_4_;
  uStack_c8 = (undefined4)uStack_e8;
  uStack_c4 = uStack_e8._4_4_;
  local_f0 = 0;
  uStack_e8 = 0;
  FUN_140056680(local_100,L"frame");
  local_c0 = local_100;
  local_b8 = local_e0;
  FUN_1472ad862(&local_a8,local_ac,&local_c0,0);
  if (local_100[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_cc,local_d0) != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*(longlong *)(param_1 + -0x30) + 0x2d0))(param_1 + -0x30,&local_a8,param_4);
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_a8);
  }
  plVar1 = *(longlong **)(param_1 + 0x50);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2f0))(plVar1,&local_a8);
  }
  if (*(int *)(param_3 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_3;
  }
  FUN_140a69a60(param_2,puVar2,&local_a8);
  local_60 = 0;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(&local_a8);
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f5b80 FUN_1477f5b80 body=521 status=ok
// SIG undefined FUN_1477f5b80(void)

void FUN_1477f5b80(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined2 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *plStack_70;
  longlong local_68;
  longlong *plStack_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_1400033ba(param_1,0,0,0);
  FUN_1477f4e58(param_1);
  if (param_1[0xf] != 0) {
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_1400033ba(param_1[0xf],0,0,0);
  }
  if (param_1[0x10] != 0) {
    local_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_1400033ba(param_1[0x10],0,0,0);
  }
  local_48[0] = 0;
  local_48[1] = 0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  FUN_1401031ac(param_1[2],0,&local_68);
  FUN_144a882a8(&local_58,&local_68,L"_Json");
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  puVar5 = local_58;
  if (local_50 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_98 = &DAT_14c872a98;
  cVar4 = FUN_1449da20c(DAT_14c872ce0,puVar5,&DAT_149e383f0,local_48);
  if (cVar4 != '\0') {
    FUN_14681a016(&local_78,local_48);
    FUN_1467ad138(&local_78,0);
    local_68 = local_78;
    plStack_60 = plStack_70;
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    FUN_14047afda(&local_88);
    cVar4 = FUN_14047b282(local_88,&local_78,0);
    if ((cVar4 != '\0') && (local_78 != 0)) {
      (**(code **)(*param_1 + 0x2b8))(param_1);
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar2 = (int *)((longlong)local_80 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    plVar1 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_70 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f5d8a FUN_1477f5d8a body=643 status=ok
// SIG undefined FUN_1477f5d8a(void)

void FUN_1477f5d8a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58 [3];
  undefined8 *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar6[4] = 0;
  *(undefined4 *)(puVar6 + 5) = 0;
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x34) = 0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  local_40 = puVar6;
  local_38 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_149e49100;
  local_38[2] = (longlong)puVar6;
  (**(code **)(*param_1 + 0x2b0))(param_1,puVar6);
  local_58[0] = 0;
  local_58[1] = 0;
  FUN_14619f8aa(&local_68,local_58,0);
  cVar5 = FUN_145d35994(&local_40,local_68,1);
  if (cVar5 != '\0') {
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0;
    FUN_1401031ac(param_1[2],0,&local_88);
    FUN_144a882a8(&local_78,&local_88,L"_Json");
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_146819f20(&local_88,local_58);
    FUN_144832102(&local_88,0);
    puVar4 = local_88;
    puVar8 = local_88;
    if ((int)uStack_80 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    puVar7 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar7 = local_78;
    }
    local_98 = &DAT_14c872a98;
    FUN_1410abc14(DAT_14c872ce0,puVar7,&DAT_149e383f0,puVar8);
    FUN_140d6d8de(DAT_14c872ce0,0,&DAT_14c872a98);
    if (puVar4 != (undefined2 *)0x0) {
      FUN_1400020a8(puVar4);
    }
    if (local_78 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_98._0_1_ = 1;
  FUN_140d6793a(param_1,0x4000,0,DAT_14c872ce0);
  if (param_1[0xf] != 0) {
    local_98._0_1_ = 1;
    FUN_140d6793a(param_1[0xf],0x4000,0,DAT_14c872ce0);
  }
  if (param_1[0x10] != 0) {
    local_98._0_1_ = 1;
    FUN_140d6793a(param_1[0x10],0x4000,0,DAT_14c872ce0);
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar2 = (int *)((longlong)local_60 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f600e FUN_1477f600e body=949 status=ok
// SIG undefined FUN_1477f600e(void)

void FUN_1477f600e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 *local_90;
  int local_88;
  undefined4 uStack_84;
  wchar_t *local_80;
  undefined4 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 *local_58;
  int local_50;
  undefined4 uStack_4c;
  wchar_t *local_48;
  undefined4 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_48 = L"ImageProtocolType";
  local_40 = 0x11;
  FUN_1449ba96e(param_2,&local_38);
  if (local_38 != 0) {
    FUN_14047e026(local_38,&local_58);
    puVar7 = local_58;
    if (local_50 == 0) {
      puVar7 = (undefined8 *)&DAT_149dfb77a;
    }
    uVar4 = FUN_144a797b2();
    lVar5 = FUN_140277b32(uVar4,0,puVar7,0);
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if ((((lVar5 != 0) && (lVar6 = FUN_145893246(), lVar6 != 0)) &&
        (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      local_60 = lVar5;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      FUN_1477f4a70(param_1,&local_60);
      if (param_1[0xf] != 0) {
        local_70 = L"ImageProtocolData";
        local_68 = 0x11;
        FUN_1449ba96e(param_2,&local_58);
        if (local_58 != (undefined8 *)0x0) {
          lVar6 = param_1[0xf];
          puVar7 = (undefined8 *)(**(code **)*local_58)();
          local_b8 = 0;
          uStack_b0 = 0;
          local_c0 = 0;
          local_c8 = 0;
          FUN_146f0329c(*puVar7,lVar5,lVar6,0);
        }
        plVar3 = (longlong *)CONCAT44(uStack_4c,local_50);
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
      }
    }
  }
  local_80 = L"AudioProtocolType";
  local_78 = 0x11;
  FUN_1449ba96e(param_2,&local_58);
  if (local_58 != (undefined8 *)0x0) {
    FUN_14047e026(local_58,&local_90);
    puVar7 = local_90;
    if (local_88 == 0) {
      puVar7 = (undefined8 *)&DAT_149dfb77a;
    }
    uVar4 = FUN_144a797b2();
    lVar5 = FUN_140277b32(uVar4,0,puVar7,0);
    if (local_90 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (((lVar5 != 0) && (lVar6 = FUN_145893246(), lVar6 != 0)) &&
       ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)))) {
      local_98 = lVar5;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      FUN_1477f48e6(param_1,&local_98);
      if (param_1[0x10] != 0) {
        local_a8 = L"AudioProtocolData";
        local_a0 = 0x11;
        FUN_1449ba96e(param_2,&local_90);
        if (local_90 != (undefined8 *)0x0) {
          lVar6 = param_1[0x10];
          puVar7 = (undefined8 *)(**(code **)*local_90)();
          local_b8 = 0;
          uStack_b0 = 0;
          local_c0 = 0;
          local_c8 = 0;
          FUN_146f0329c(*puVar7,lVar5,lVar6,0);
        }
        plVar3 = (longlong *)CONCAT44(uStack_84,local_88);
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
      }
    }
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2);
  plVar3 = (longlong *)CONCAT44(uStack_4c,local_50);
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
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f63c4 FUN_1477f63c4 body=120 status=ok
// SIG undefined FUN_1477f63c4(void)

ulonglong FUN_1477f63c4(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong local_30;
  ulonglong local_20;
  undefined7 uVar4;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1459e6d58();
  FUN_1400bbfc4(local_40,uVar2);
  cVar1 = FUN_144a7afa6(param_1 + 0x58,local_40);
  uVar4 = (undefined7)((ulonglong)local_40 >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (cVar1 == '\0') {
    uVar3 = CONCAT71(uVar4,*(undefined1 *)(param_1 + 0x1c1));
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f643e FUN_1477f643e body=30 status=ok
// SIG undefined FUN_1477f643e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1477f643e(longlong param_1)

{
  _DAT_14c759070 = (double)*(int *)(param_1 + 0xc) / (double)*(int *)(param_1 + 8);
  DAT_14c846539 = 1;
  return;
}



// FUNCTION 1477f6464 FUN_1477f6464 body=1 status=ok
// SIG undefined FUN_1477f6464(void)

void FUN_1477f6464(void)

{
  return;
}



// FUNCTION 1477f64a0 FUN_1477f64a0 body=38 status=ok
// SIG undefined FUN_1477f64a0(void)

void FUN_1477f64a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477f64c6();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477f64c6 FUN_1477f64c6 body=90 status=ok
// SIG undefined FUN_1477f64c6(void)

longlong FUN_1477f64c6(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1477f6670();
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  if ((lVar2 != 0x28 && lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x58), lVar2 != 0)) {
    lVar3 = FUN_1458d440e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1477f6520 FUN_1477f6520 body=38 status=ok
// SIG undefined FUN_1477f6520(void)

void FUN_1477f6520(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1477f6546();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477f6546 FUN_1477f6546 body=90 status=ok
// SIG undefined FUN_1477f6546(void)

longlong FUN_1477f6546(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1477f6670();
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  if ((lVar2 != 0x28 && lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x50), lVar2 != 0)) {
    lVar3 = FUN_1458d44fa();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1477f65a0 FUN_1477f65a0 body=76 status=ok
// SIG undefined FUN_1477f65a0(void)

void FUN_1477f65a0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_1477f6670();
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  uVar3 = 0;
  if (lVar2 != 0x28 && lVar2 != 0) {
    uVar3 = *(undefined4 *)(lVar2 + 0x13c);
  }
  *param_3 = uVar3;
  return;
}



// FUNCTION 1477f65ec FUN_1477f65ec body=73 status=ok
// SIG undefined FUN_1477f65ec(void)

void FUN_1477f65ec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_1477f6670();
  lVar2 = (**(code **)(*plVar1 + 0x50))();
  uVar3 = 0;
  if (lVar2 != 0x28 && lVar2 != 0) {
    uVar3 = *(undefined4 *)(lVar2 + 0x138);
  }
  *param_3 = uVar3;
  return;
}



// FUNCTION 1477f663a FUN_1477f663a body=50 status=ok
// SIG undefined FUN_1477f663a(void)

void FUN_1477f663a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = (longlong *)FUN_1477f6670();
  lVar2 = (**(code **)(*plVar1 + 0x50))(plVar1);
  *(bool *)param_3 = lVar2 != 0;
  return;
}



// FUNCTION 1477f6670 FUN_1477f6670 body=126 status=ok
// SIG undefined FUN_1477f6670(void)

void FUN_1477f6670(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cabc008) {
    FUN_144b3d300(&DAT_14cabc008);
    if (DAT_14cabc008 == -1) {
      FUN_1446f470e(&DAT_14cabc000,L"MovieSceneCapture",1);
      _Init_thread_footer(&DAT_14cabc008);
    }
  }
  uVar1 = DAT_14cabc000;
  uVar2 = FUN_144a52528();
  FUN_14493e38c(uVar2,uVar1);
  return;
}



// FUNCTION 1477f6758 FUN_1477f6758 body=49 status=ok
// SIG undefined FUN_1477f6758(void)

bool FUN_1477f6758(undefined8 param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  
  bVar2 = true;
  if (param_3 == '\0') {
    plVar3 = (longlong *)FUN_14054d1d4();
    lVar1 = (**(code **)(*plVar3 + 0x108))(plVar3,param_2);
    bVar2 = lVar1 == -1;
  }
  return bVar2;
}



// FUNCTION 1477f678a FUN_1477f678a body=698 status=ok
// SIG undefined FUN_1477f678a(void)

longlong *
FUN_1477f678a(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  void *_Src;
  char cVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong local_98 [2];
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68 [2];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_4;
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)param_1[9])();
  local_58 = (void *)0x0;
  local_50 = *(int *)(puVar2 + 1);
  lVar5 = (longlong)local_50;
  _Src = (void *)*puVar2;
  if (lVar5 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar5 * 2);
  }
  FUN_1448097c4(&local_58,&DAT_149e01f64,&DAT_149e065c6,0);
  if (param_5 == 0) {
    param_5 = (*(code *)**(undefined8 **)param_1[9])();
    param_5 = param_5 + 0x18;
  }
  (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],&local_78,param_5,param_3);
  (**(code **)(*(longlong *)param_1[9] + 0x20))((longlong *)param_1[9],&local_88,&local_58,param_3);
  iVar4 = (int)local_70 + -1;
  if ((int)local_70 == 0) {
    iVar4 = 0;
  }
  FUN_1412cfe60(local_68,&local_88,iVar4 + 1 + (uint)(local_80 == 0));
  FUN_1401aebe8(local_68,local_78,iVar4);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1449b8608(param_2,local_68,local_a0);
  lVar5 = (*(code *)**(undefined8 **)param_1[9])();
  if ((int)param_2[1] == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  cVar1 = (**(code **)(*param_1 + 0x308))(param_1,puVar3,*(undefined1 *)(lVar5 + 0x28));
  if (cVar1 == '\0') {
    iVar4 = 2;
    do {
      FUN_140002266(local_98,L"_(%d)",iVar4);
      FUN_1407ec8fc(&local_88,local_68,local_98);
      FUN_144a882a8(&local_78,&local_88,local_a0);
      if (&local_78 == param_2) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_78;
        local_78 = 0;
        *(int *)(param_2 + 1) = (int)local_70;
        *(undefined4 *)((longlong)param_2 + 0xc) = local_70._4_4_;
        local_70 = 0;
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      lVar5 = (*(code *)**(undefined8 **)param_1[9])();
      puVar3 = &DAT_149dfb77a;
      if ((int)param_2[1] != 0) {
        puVar3 = (undefined2 *)*param_2;
      }
      cVar1 = (**(code **)(*param_1 + 0x308))(param_1,puVar3,*(undefined1 *)(lVar5 + 0x28));
      iVar4 = iVar4 + 1;
    } while (cVar1 == '\0');
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477f6a46 FUN_1477f6a46 body=246 status=ok
// SIG undefined FUN_1477f6a46(void)

void FUN_1477f6a46(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x328))(param_1,&local_48,puVar1);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f6b58 FUN_1477f6b58 body=140 status=ok
// SIG undefined FUN_1477f6b58(void)

void FUN_1477f6b58(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cabbee0);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001477f6be2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 800))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f6bf4 FUN_1477f6bf4 body=41 status=ok
// SIG undefined FUN_1477f6bf4(void)

void FUN_1477f6bf4(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 800))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477f6c1e FUN_1477f6c1e body=303 status=ok
// SIG undefined FUN_1477f6c1e(void)

/* WARNING: Removing unreachable block (ram,0x0001477f6d1c) */
/* WARNING: Removing unreachable block (ram,0x0001477f6d27) */
/* WARNING: Removing unreachable block (ram,0x0001477f6d3a) */

void FUN_1477f6c1e(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_a8 = *param_2;
  lStack_a0 = param_2[1];
  if (lStack_a0 == 0) {
    lStack_a0 = 0;
  }
  else {
    LOCK();
    *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
    UNLOCK();
  }
  FUN_141262aba(&local_98,param_3);
  local_48 = *param_4;
  uStack_40 = param_4[1];
  uVar1 = FUN_14477b072(param_1,DAT_14cabbf20);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_a8);
  FUN_1477f6d9e(&local_a8);
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f6d4e FUN_1477f6d4e body=80 status=ok
// SIG undefined FUN_1477f6d4e(void)

undefined8 * FUN_1477f6d4e(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_1[1];
  *param_1 = uVar3;
  param_1[1] = lVar4;
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
  return param_1;
}



// FUNCTION 1477f6d9e FUN_1477f6d9e body=95 status=ok
// SIG undefined FUN_1477f6d9e(void)

void FUN_1477f6d9e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001477f6df1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477f6dfe FUN_1477f6dfe body=140 status=ok
// SIG undefined FUN_1477f6dfe(void)

void FUN_1477f6dfe(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cabbf40);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001477f6e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x318))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f6e9a FUN_1477f6e9a body=41 status=ok
// SIG undefined FUN_1477f6e9a(void)

void FUN_1477f6e9a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x318))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1477f6ec4 FUN_1477f6ec4 body=324 status=ok
// SIG undefined FUN_1477f6ec4(void)

void FUN_1477f6ec4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477f700a(param_1,local_80,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f700a FUN_1477f700a body=472 status=ok
// SIG undefined FUN_1477f700a(void)

void FUN_1477f700a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_100;
  code *local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(char *)(param_1 + 0x50) != '\x02') &&
     (*(char *)(param_1 + 0x51 + (ulonglong)((uint)DAT_14c872be0 & 1)) == '\0')) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_138);
  }
  local_100 = 0;
  FUN_14485c47a(&local_100,param_1);
  local_118 = *(undefined4 *)(param_1 + 0x6c);
  uStack_114 = *(undefined4 *)(param_1 + 0x70);
  uStack_110 = *(undefined4 *)(param_1 + 0x74);
  uStack_10c = *(undefined4 *)(param_1 + 0x78);
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  FUN_141262aba(&local_b8,param_3);
  local_68 = local_118;
  uStack_64 = uStack_114;
  uStack_60 = uStack_110;
  uStack_5c = uStack_10c;
  local_58 = local_100;
  local_f8[0] = (code *)0x0;
  plVar2 = (longlong *)FUN_14001cc68(0x70,8);
  *plVar2 = (longlong)&PTR_FUN_14a588b40;
  plVar2[5] = 0;
  *(undefined4 *)(plVar2 + 6) = 0;
  plVar2[1] = 0;
  plVar2[2] = 0;
  *(undefined8 *)((longlong)plVar2 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar2 + 0x3c) = 0;
  plVar2[9] = 0;
  *(undefined4 *)(plVar2 + 10) = 0;
  local_e8 = plVar2;
  FUN_141262aba(plVar2 + 1,&local_b8);
  *(undefined4 *)(plVar2 + 0xb) = local_68;
  *(undefined4 *)((longlong)plVar2 + 0x5c) = uStack_64;
  *(undefined4 *)(plVar2 + 0xc) = uStack_60;
  *(undefined4 *)((longlong)plVar2 + 100) = uStack_5c;
  plVar2[0xd] = local_58;
  if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
    local_f8[0] = FUN_14336964e;
  }
  cVar1 = FUN_142b79566(param_2,local_f8);
  if (local_f8[0] != (code *)0x0) {
    plVar2 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar2 = local_d8;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (cVar1 != '\0') {
    LOCK();
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    UNLOCK();
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_b8);
  if ((local_50 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f720a FUN_1477f720a body=242 status=ok
// SIG undefined FUN_1477f720a(void)

void FUN_1477f720a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar1 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477f72fe(param_1,puVar1);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f72fe FUN_1477f72fe body=61 status=ok
// SIG undefined FUN_1477f72fe(void)

void FUN_1477f72fe(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x60) != 0) && (*(char *)(param_1 + 0x50) == '\x02')) &&
     (*(int *)(*(longlong *)(param_1 + 0x60) + 0x7c) != 1)) {
    FUN_141262aba(param_1 + 0x80);
    FUN_1477f2aa6(*(undefined8 *)(param_1 + 0x60));
    return;
  }
  return;
}



// FUNCTION 1477f736c FUN_1477f736c body=410 status=ok
// SIG undefined FUN_1477f736c(void)

void FUN_1477f736c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [40];
  longlong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477f7508(param_1,&local_90,puVar1);
  if (&local_90 == param_3) {
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_90;
    local_90 = 0;
    *(undefined4 *)(param_3 + 1) = local_88;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_84;
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_78);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f7508 FUN_1477f7508 body=140 status=ok
// SIG undefined FUN_1477f7508(void)

undefined8 * FUN_1477f7508(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  wchar_t *pwVar1;
  
  if (param_1[9] == 0) {
    FUN_1415b7ec4(L"Capture protocol is not currently set up to generate filenames.",2,0);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if ((ulonglong)*(byte *)(param_1 + 0x1b) < 4) {
      pwVar1 = (wchar_t *)(&PTR_DAT_14a588d48)[*(byte *)(param_1 + 0x1b)];
    }
    else {
      pwVar1 = L".ext";
    }
    param_1[0x1a] = param_3;
    (**(code **)(*param_1 + 0x310))(param_1,param_2,(longlong)param_1 + 0x6c,pwVar1,0);
    FUN_1477f397e(param_1,param_2);
    param_1[0x1a] = 0;
  }
  return param_2;
}



// FUNCTION 1477f7594 FUN_1477f7594 body=147 status=ok
// SIG undefined FUN_1477f7594(void)

void FUN_1477f7594(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x328))(param_1,&local_28,(longlong)param_1 + 0x6c);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f762e FUN_1477f762e body=576 status=ok
// SIG undefined FUN_1477f762e(void)

void FUN_1477f762e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar4 = &local_98;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar5 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar6 = &local_a8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_ac != 0;
  FUN_1477f7870(param_1,puVar4,puVar5,puVar6);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(&local_88);
  plVar3 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_90 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f7870 FUN_1477f7870 body=2192 status=ok
// SIG undefined FUN_1477f7870(void)

void FUN_1477f7870(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  byte param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  longlong *local_1c8;
  longlong *local_1c0 [2];
  longlong *local_1b0 [2];
  undefined1 local_1a0 [16];
  undefined1 local_190 [4];
  undefined1 local_18c [4];
  longlong *local_188 [2];
  undefined8 local_178;
  longlong *local_170;
  longlong local_168 [2];
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *plStack_140;
  longlong *local_130 [2];
  longlong *local_120 [2];
  undefined1 local_110 [8];
  undefined1 local_108 [16];
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 *local_e8;
  ulonglong *local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
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
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*param_2 == 0) goto LAB_1477f7b67;
  if (*(char *)(*param_2 + 0x15) == '\b') {
LAB_1477f78b7:
    puVar6 = (undefined8 *)FUN_14001cc68(0x90,0x10);
    *puVar6 = &PTR_FUN_14a1e93c0;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = 0;
    puVar6[6] = 0;
    puVar6[8] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    param_1[0x1a] = param_3;
    (**(code **)(*(longlong *)*param_2 + 0x10 + (ulonglong)(param_5 ^ 1) * 8))
              ((longlong *)*param_2,&local_88);
    puVar6[0xe] = local_88;
    (**(code **)(*param_1 + 0x328))(param_1,&local_88,param_4);
    lVar10 = param_1[0x1b];
    *(undefined4 *)(puVar6 + 1) = (undefined4)local_88;
    *(undefined4 *)((longlong)puVar6 + 0xc) = local_88._4_4_;
    *(undefined4 *)(puVar6 + 2) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_80._4_4_;
    cVar5 = FUN_147128476((char)lVar10);
    *(char *)(puVar6 + 3) = cVar5;
    *(undefined1 *)(puVar6 + 4) = 0;
    param_1[0x1a] = 0;
    if ((cVar5 == '\0') && (*(int *)(*param_2 + 0x10) == 0)) {
      cVar5 = FUN_1477f8cea(param_3,param_1 + 0x10);
      if (cVar5 != '\0') {
        FUN_147128be6(puVar6);
      }
    }
    if ((char)param_1[0x1b] == '\x03') {
      uVar9 = *(byte *)((longlong)param_1 + 0xd9) ^ 1;
    }
    else {
      uVar9 = 100;
      if (*(byte *)((longlong)param_1 + 0xd9) != 0) {
        uVar9 = *(uint *)((longlong)param_1 + 0xdc);
      }
    }
    *(uint *)((longlong)puVar6 + 0x1c) = uVar9;
    local_d8 = 0;
    FUN_14485c47a(&local_d8,param_1);
    local_c8 = (undefined8 *)puVar6[6];
    uStack_80 = (longlong *)puVar6[7];
    local_b8 = (longlong *)puVar6[8];
    uStack_70 = puVar6[9];
    local_68 = puVar6[10];
    uStack_60 = puVar6[0xb];
    local_58 = puVar6[0xc];
    uStack_50 = puVar6[0xd];
    uVar3 = local_58;
    uVar4 = uStack_50;
    local_78 = local_b8;
    uVar7 = uStack_70;
    local_88 = (wchar_t *)local_c8;
    plVar8 = uStack_80;
    puVar6[0xc] = CONCAT44(uStack_94,local_98);
    puVar6[0xd] = CONCAT44(uStack_8c,uStack_90);
    puVar6[10] = &PTR_LAB_14a588ba0;
    puVar6[0xb] = local_d8;
    puVar6[8] = 0;
    puVar6[9] = CONCAT44(uStack_ac,uStack_b0);
    puVar6[6] = &LAB_14336980c;
    puVar6[7] = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = plVar8;
    uStack_70 = uVar7;
    local_58 = uVar3;
    uStack_50 = uVar4;
    if (local_c8 != (undefined8 *)0x0) {
      plVar8 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar8 = &local_a8;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    FUN_144a52528();
    FUN_1446ddc76(&local_1d8,"ImageWriteQueue",1);
    uVar7 = FUN_144a52528();
    plVar8 = (longlong *)FUN_14493e38c(uVar7,local_1d8);
    plVar8 = (longlong *)(**(code **)(*plVar8 + 0x40))(plVar8);
    local_c8 = puVar6;
    (**(code **)(*plVar8 + 8))(plVar8,&local_88,&local_c8,1);
    if (local_c8 != (undefined8 *)0x0) {
      (**(code **)*local_c8)(local_c8,1);
    }
    plVar8 = uStack_80;
    if (local_88 != (wchar_t *)0x0) {
      LOCK();
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      UNLOCK();
    }
    if (uStack_80 != (longlong *)0x0) {
      LOCK();
      plVar1 = uStack_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*uStack_80)(uStack_80);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  else {
    if ((char)param_1[0x1b] == '\x01') {
      FUN_1446ddc76(local_110,&DAT_14a492018,1);
      FUN_14276766e(&local_c8,local_110);
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      FUN_1467cfb94(local_1b0,*(undefined1 *)(*param_2 + 0x15),0);
      FUN_1477f810c(param_3,local_168);
      FUN_140233b1a(local_1c0,local_168);
      local_88 = L"InvalidJPGExport";
      uStack_80._0_4_ = 0x10;
      FUN_1446e940c(local_18c,&local_88);
      local_88 = L"UserDefinedImageCaptureProtocol";
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,0x1f);
      FUN_1446e940c(local_190,&local_88);
      FUN_140208bae(local_188,local_190,local_18c,
                    L"Unable to write the specified render target (stream \'{0}\' is {1}bit) as JPG. JPGs must be supplied 8bit render targets."
                   );
      FUN_14023409e(&local_1d0,local_188,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(&local_78,local_1c0);
      local_68 = CONCAT44(local_68._4_4_,4);
      FUN_14023423e(&local_58,local_1b0);
      local_e0 = &local_48;
      local_e8 = &local_88;
      FUN_14010d304(&local_d8);
      local_f8 = local_1d0;
      local_f0 = local_1c8;
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1c8 + 1) = (int)local_1c8[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_120,&local_f8,&local_d8);
      FUN_14007f2db(local_d8,local_d0);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      lVar10 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_88 + lVar10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_88 + lVar10) + 0x10))();
          *(undefined8 *)((longlong)&local_88 + lVar10) = 0;
          *(undefined4 *)((longlong)&uStack_80 + lVar10) = 0;
        }
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != -0x10);
      if (local_1c8 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_1c8 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_1c8)(local_1c8);
          LOCK();
          piVar2 = (int *)((longlong)local_1c8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_1c8 + 0x10))(local_1c8);
          }
        }
      }
      if (local_1c0[0] != (longlong *)0x0) {
        (**(code **)(*local_1c0[0] + 0x10))();
      }
      if (local_1b0[0] != (longlong *)0x0) {
        (**(code **)(*local_1b0[0] + 0x10))();
      }
      puVar11 = local_1a0;
    }
    else {
      if ((char)param_1[0x1b] != '\x02') goto LAB_1477f78b7;
      FUN_1446ddc76(local_110,&DAT_14a492018,1);
      FUN_14276766e(&local_c8,local_110);
      local_148 = 0;
      plStack_140 = (longlong *)0x0;
      FUN_1467cfb94(local_130,*(undefined1 *)(*param_2 + 0x15),0);
      FUN_1477f810c(param_3,local_168);
      FUN_140233b1a(local_158,local_168);
      local_88 = L"InvalidBMPExport";
      uStack_80._0_4_ = 0x10;
      FUN_1446e940c(local_18c,&local_88);
      local_88 = L"UserDefinedImageCaptureProtocol";
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,0x1f);
      FUN_1446e940c(local_190,&local_88);
      FUN_140208bae(local_188,local_190,local_18c,
                    L"Unable to write the specified render target (stream \'{0}\' is {1}bit) as BMP. BMPs must be supplied 8bit render targets."
                   );
      FUN_14023409e(&local_178,local_188,1);
      local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
      FUN_14023423e(&local_78,local_158);
      local_68 = CONCAT44(local_68._4_4_,4);
      FUN_14023423e(&local_58,local_130);
      local_e0 = &local_48;
      local_e8 = &local_88;
      FUN_14010d304(&local_d8);
      local_f8 = local_178;
      local_f0 = local_170;
      if (local_170 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_170 + 1) = (int)local_170[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_120,&local_f8,&local_d8);
      FUN_14007f2db(local_d8,local_d0);
      if (local_d8 != 0) {
        FUN_1400020a8();
      }
      lVar10 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_88 + lVar10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_88 + lVar10) + 0x10))();
          *(undefined8 *)((longlong)&local_88 + lVar10) = 0;
          *(undefined4 *)((longlong)&uStack_80 + lVar10) = 0;
        }
        lVar10 = lVar10 + -0x20;
      } while (lVar10 != -0x10);
      if (local_170 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_170 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_170)(local_170);
          LOCK();
          piVar2 = (int *)((longlong)local_170 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_170 + 0x10))(local_170);
          }
        }
      }
      if (local_158[0] != (longlong *)0x0) {
        (**(code **)(*local_158[0] + 0x10))();
      }
      if (local_130[0] != (longlong *)0x0) {
        (**(code **)(*local_130[0] + 0x10))();
      }
      puVar11 = local_108;
    }
    FUN_1427679d4(&local_c8,puVar11,local_120);
    plVar8 = *(longlong **)(puVar11 + 8);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    if (local_188[0] != (longlong *)0x0) {
      (**(code **)(*local_188[0] + 0x10))();
    }
    if (local_168[0] != 0) {
      FUN_1400020a8();
    }
    plVar8 = plStack_140;
    if (plStack_140 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_140 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_140)(plStack_140);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    FUN_1427678c0(&local_c8);
  }
LAB_1477f7b67:
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f810c FUN_1477f810c body=576 status=ok
// SIG undefined FUN_1477f810c(void)

undefined8 * FUN_1477f810c(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  void *local_78;
  ulonglong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = plVar1;
  if ((int)param_1[5] == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar3 = (int)param_1[5];
  }
  uStack_80 = CONCAT44(uStack_4c,uStack_50);
  local_88 = local_58;
  iStack_84 = iStack_54;
  local_98 = (undefined4)local_68;
  uStack_94 = local_68._4_4_;
  uStack_90 = (int)uStack_60;
  uStack_8c = uStack_60._4_4_;
  local_a0 = param_1;
  if ((iStack_54 != iVar3) || (uStack_60 != plVar1)) {
    do {
      lVar4 = (longlong)iStack_84 * 0x18 + *local_a0;
      if ((int)uStack_70 - 2U < 0x7fffffff) {
        FUN_1400020e8(&local_78,&DAT_149e06196,1);
      }
      FUN_1400021e4(lVar4,&local_68);
      iVar2 = (int)uStack_60 + -1;
      if ((int)uStack_60 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(&local_78,local_68,iVar2);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar4 + 8) != 0) {
        FUN_1400020e8(&local_78,&DAT_149e31048,1);
        FUN_1400021e4(lVar4 + 8,&local_68);
        iVar2 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(&local_78,local_68,iVar2);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
      local_88 = local_88 & ~uStack_94;
      FUN_1449c0562(&local_98);
      _Src = local_78;
    } while (local_a0 != param_1 ||
             ((longlong *)CONCAT44(uStack_8c,uStack_90) != plVar1 || iStack_84 != iVar3));
    if ((int)uStack_70 - 2U < 0x7fffffff) {
      lVar4 = (longlong)(int)uStack_70;
      *param_2 = 0;
      *(int *)(param_2 + 1) = (int)uStack_70;
      FUN_1446dd670(param_2,uStack_70 & 0xffffffff,0);
      memcpy((void *)*param_2,_Src,lVar4 * 2);
      goto LAB_1477f81ba;
    }
  }
  FUN_140056680(param_2,L"<none>");
LAB_1477f81ba:
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f834e FUN_1477f834e body=47 status=ok
// SIG undefined FUN_1477f834e(void)

void FUN_1477f834e(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cabbf30);
                    /* WARNING: Could not recover jumptable at 0x0001477f837a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1477f837e FUN_1477f837e body=424 status=ok
// SIG undefined FUN_1477f837e(void)

void FUN_1477f837e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_14477b072(param_1,DAT_14cabbf60);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,0);
  if (param_1[0xc] != 0) {
    FUN_1477f2df4(param_1[0xc],&local_58);
    plVar6 = local_58;
    iVar7 = 0;
    if ((longlong)local_50 != 0) {
      plVar3 = local_58 + (longlong)local_50 * 5;
      plVar8 = local_58;
      do {
        local_80 = *plVar8;
        *plVar8 = 0;
        local_78 = (longlong)(int)plVar8[1];
        local_70 = (longlong)*(int *)((longlong)plVar8 + 0xc);
        plVar8[1] = 0;
        plVar6 = (longlong *)FUN_1477fca81(plVar8 + 2,&local_80);
        local_68 = plVar6 + 2;
        local_60 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
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
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        lVar4 = plVar8[3];
        local_98 = *(undefined4 *)(lVar4 + 8);
        uStack_94 = *(undefined4 *)(lVar4 + 0xc);
        uStack_90 = *(undefined4 *)(lVar4 + 0x10);
        uStack_8c = *(undefined4 *)(lVar4 + 0x14);
        FUN_1477f8528(param_1,&local_68,param_1 + 0x10,&local_98);
        plVar6 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        plVar8 = plVar8 + 5;
        plVar6 = local_58;
        iVar7 = local_50;
      } while (plVar8 != plVar3);
    }
    FUN_1477fab62(plVar6,iVar7);
    if (plVar6 != (longlong *)0x0) {
      FUN_1400020a8(plVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f8528 FUN_1477f8528 body=130 status=ok
// SIG undefined FUN_1477f8528(void)

void FUN_1477f8528(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  LOCK();
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  UNLOCK();
  local_30 = 0;
  local_38 = 0;
  cVar1 = FUN_147129038(*param_2);
  if (cVar1 != '\0') {
    local_48 = *param_4;
    uStack_44 = param_4[1];
    uStack_40 = param_4[2];
    uStack_3c = param_4[3];
    FUN_1477f6c1e(param_1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f85ac FUN_1477f85ac body=331 status=ok
// SIG undefined FUN_1477f85ac(void)

undefined4 FUN_1477f85ac(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x38);
  if (plVar2 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    lVar7 = (**(code **)(*plVar2 + 0x30))();
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    *(longlong *)(param_1 + 0x58) = lVar7;
  }
  uVar5 = FUN_140d25081();
  if (*(longlong *)(param_1 + 0x58) != 0) {
    iVar1 = *(int *)(DAT_14cb0d2b0 + 0x1150);
    if ((longlong)iVar1 != 0) {
      lVar7 = *(longlong *)(DAT_14cb0d2b0 + 0x1148);
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar7 + lVar8);
        if (*(longlong *)(param_1 + 0x58) == *(longlong *)(lVar3 + 0x360)) {
          FUN_14680e99f(*(undefined4 *)(lVar3 + 0x2c0));
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
  }
  lVar7 = FUN_14001cc68(0x88,0x10);
  local_40 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  local_38 = *(longlong *)(param_1 + 0x30);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_48 = 3;
  FUN_1477f212c(lVar7,&local_40,uVar4,2);
  lVar8 = *(longlong *)(param_1 + 0x60);
  if ((lVar8 != lVar7) && (*(longlong *)(param_1 + 0x60) = lVar7, lVar8 != 0)) {
    FUN_1477f2a0c(lVar8);
    FUN_1400020a8(lVar8);
  }
  uVar6 = FUN_1477f6dfe(param_1);
  FUN_14680e99f(uVar5);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f86f8 FUN_1477f86f8 body=47 status=ok
// SIG undefined FUN_1477f86f8(void)

void FUN_1477f86f8(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cabbf70);
                    /* WARNING: Could not recover jumptable at 0x0001477f8724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1477f8728 FUN_1477f8728 body=47 status=ok
// SIG undefined FUN_1477f8728(void)

undefined1 FUN_1477f8728(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14477b072(param_1,DAT_14cabbf50);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,0);
  return 1;
}



// FUNCTION 1477f8758 FUN_1477f8758 body=78 status=ok
// SIG undefined FUN_1477f8758(void)

void FUN_1477f8758(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0xc];
  if (((lVar1 != 0) && ((char)param_1[10] == '\x02')) && (*(int *)(lVar1 + 0x7c) == 1)) {
    *(undefined4 *)(lVar1 + 0x7c) = 2;
  }
  uVar2 = FUN_14477b072(param_1,DAT_14cabbed0);
                    /* WARNING: Could not recover jumptable at 0x0001477f87a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1477f87a6 FUN_1477f87a6 body=98 status=ok
// SIG undefined FUN_1477f87a6(void)

undefined8 FUN_1477f87a6(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    if (lVar2 == 0) {
LAB_1477f87f9:
      uVar3 = FUN_1477f6b58(param_1);
      return uVar3;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0x20);
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(lVar2 + 0x60) == 0) {
      iVar1 = *(int *)(lVar2 + 0x18);
      LeaveCriticalSection(lpCriticalSection);
      if (iVar1 == 0) goto LAB_1477f87f9;
    }
    else {
      LeaveCriticalSection(lpCriticalSection);
    }
  }
  return 0;
}



// FUNCTION 1477f8808 FUN_1477f8808 body=101 status=ok
// SIG undefined FUN_1477f8808(void)

void FUN_1477f8808(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1[0xc] != 0) {
    FUN_1477f2d60();
    lVar1 = param_1[0xc];
    if (lVar1 != 0) {
      param_1[0xc] = 0;
      FUN_1477f2a0c(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  uVar2 = FUN_14477b072(param_1,DAT_14cabbf00);
                    /* WARNING: Could not recover jumptable at 0x0001477f8842. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1477f886e FUN_1477f886e body=278 status=ok
// SIG undefined FUN_1477f886e(void)

void FUN_1477f886e(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  *(undefined4 *)((longlong)param_1 + 0x6c) = *param_2;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0xf) = uVar6;
  if ((param_1[0xc] != 0) && (*(int *)(param_1[0xc] + 0x7c) == 1)) {
    LOCK();
    *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    UNLOCK();
    lVar3 = param_1[0xc];
    plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14a588b10;
    local_38 = plVar9 + 2;
    plVar9[2] = (longlong)&PTR_FUN_14a588b28;
    lVar7 = param_1[0xe];
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x74);
    lVar8 = param_1[0xf];
    *(undefined4 *)(plVar9 + 3) = *(undefined4 *)((longlong)param_1 + 0x6c);
    *(int *)((longlong)plVar9 + 0x1c) = (int)lVar7;
    *(undefined4 *)(plVar9 + 4) = uVar4;
    *(int *)((longlong)plVar9 + 0x24) = (int)lVar8;
    local_30 = plVar9;
    if (plVar9 == (longlong *)0x0) {
      FUN_143366bda(lVar3,&local_38);
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      FUN_143366bda(lVar3,&local_38);
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar9)(plVar9);
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
  uVar10 = FUN_14477b072(param_1,DAT_14cabbef0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001477f897c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x248))(param_1,uVar10,0,*(code **)(*param_1 + 0x248));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f8986 FUN_1477f8986 body=89 status=ok
// SIG undefined FUN_1477f8986(void)

undefined8 * FUN_1477f8986(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x48) == 0) {
    FUN_1415b7ec4(L"Capture protocol is not currently set up to generate filenames.",2,0);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    FUN_1477f678a(param_1,param_2,param_3,&DAT_149dfb77a,0);
    FUN_1477f397e(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1477f89e0 FUN_1477f89e0 body=497 status=ok
// SIG undefined FUN_1477f89e0(void)

void FUN_1477f89e0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_108 [40];
  longlong local_e0;
  ulonglong uStack_d8;
  longlong local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong *local_78;
  undefined8 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar3 = *(longlong **)(param_1 + 0xd0);
  lVar2 = local_a8;
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 2;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    uStack_80 = uStack_80 & 0xffffffff00000000;
    uStack_90 = plVar1;
    if ((int)plVar3[5] == 0) {
      iVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_98);
      iVar5 = (int)plVar3[5];
    }
    local_a8 = local_88;
    lVar2 = local_a8;
    uStack_a0 = uStack_80;
    local_b8 = (undefined4)local_98;
    uStack_b4 = local_98._4_4_;
    uStack_b0 = (undefined4)uStack_90;
    uStack_ac = uStack_90._4_4_;
    local_a8._4_4_ = (int)((ulonglong)local_88 >> 0x20);
    local_c0 = plVar3;
    if ((local_a8._4_4_ != iVar5) || (uStack_90 != plVar1)) {
      iVar4 = local_a8._4_4_;
      local_a8 = lVar2;
      do {
        lVar2 = *local_c0 + (longlong)iVar4 * 0x18;
        if (*(longlong *)(lVar2 + 8) == 0) {
          local_88 = 0;
          uStack_80 = 0;
        }
        else {
          FUN_1400021e4(*local_c0 + (longlong)iVar4 * 0x18 + 8,&local_e0);
          local_88 = local_e0;
          uStack_80 = uStack_d8;
          local_e0 = 0;
          uStack_d8 = 0;
        }
        local_98 = CONCAT44(local_98._4_4_,3);
        FUN_1400021e4(lVar2,local_d0);
        local_70 = &local_98;
        local_78 = local_d0;
        FUN_1472ad862(param_2,local_64,&local_78,0);
        if (local_d0[0] != 0) {
          FUN_1400020a8();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8 & ~uStack_b4);
        FUN_1449c0562(&local_b8);
        iVar4 = local_a8._4_4_;
        lVar2 = local_a8;
      } while (local_c0 != plVar3 ||
               ((longlong *)CONCAT44(uStack_ac,uStack_b0) != plVar1 || local_a8._4_4_ != iVar5));
    }
  }
  local_a8 = lVar2;
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f8bd2 FUN_1477f8bd2 body=156 status=ok
// SIG undefined FUN_1477f8bd2(void)

void FUN_1477f8bd2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 1;
  FUN_140807d8e((longlong *)(param_2 + 0x18),&local_30,L".{frame}",&DAT_149dfb77a);
  if ((longlong *)(param_2 + 0x18) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x18) = local_30;
    *(undefined4 *)(param_2 + 0x20) = local_28;
    *(undefined4 *)(param_2 + 0x24) = local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f8c70 FUN_1477f8c70 body=122 status=ok
// SIG undefined FUN_1477f8c70(void)

undefined8 * FUN_1477f8c70(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  wchar_t *pwVar1;
  
  if (param_1[9] == 0) {
    FUN_1415b7ec4(L"Capture protocol is not currently set up to generate filenames.",2,0);
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if ((ulonglong)*(byte *)(param_1 + 0x1b) < 3) {
      pwVar1 = (wchar_t *)(&PTR_DAT_14a588d68)[*(byte *)(param_1 + 0x1b)];
    }
    else {
      pwVar1 = L".exr";
    }
    (**(code **)(*param_1 + 0x310))(param_1,param_2,param_3,pwVar1,0);
    FUN_1477f397e(param_1,param_2);
  }
  return param_2;
}



// FUNCTION 1477f8cea FUN_1477f8cea body=401 status=ok
// SIG undefined FUN_1477f8cea(void)

undefined8 FUN_1477f8cea(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
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
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_58 = local_38;
    uVar5 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_68 = local_48;
    local_60 = local_40;
    local_58._4_4_ = (uint)((ulonglong)local_38 >> 0x20);
    uVar4 = (ulonglong)local_58._4_4_;
    bVar2 = (int)local_58._4_4_ < (int)local_40[3];
    local_70 = param_1;
    local_58 = uVar5;
    if (bVar2) {
      do {
        uVar4 = *(ulonglong *)(*local_70 + (longlong)(int)uVar4 * 0x18);
        iVar3 = FUN_144a788f7(uVar4 & 0xffffffff);
        if ((int)param_2[1] == *(int *)((longlong)param_2 + 0x34)) goto LAB_1477f8e59;
        plVar6 = (longlong *)param_2[8];
        if ((longlong *)param_2[8] == (longlong *)0x0) {
          plVar6 = param_2 + 7;
        }
        iVar3 = *(int *)((longlong)plVar6 +
                        (ulonglong)((int)param_2[9] - 1U & iVar3 + (int)(uVar4 >> 0x20)) * 4);
        if (iVar3 == -1) goto LAB_1477f8e59;
        while (puVar1 = (ulonglong *)(*param_2 + (longlong)iVar3 * 0x18), *puVar1 != uVar4) {
          iVar3 = (int)puVar1[2];
          if (iVar3 == -1) goto LAB_1477f8e59;
        }
        uVar5 = 0;
        if ((puVar1 == (ulonglong *)0x0) || (puVar1 + 1 == (ulonglong *)0x0)) goto LAB_1477f8e5b;
        if (puVar1[1] != *(ulonglong *)(*local_70 + 8 + (longlong)(int)local_58._4_4_ * 0x18))
        goto LAB_1477f8e59;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        uVar4 = (ulonglong)local_58._4_4_;
      } while ((int)local_58._4_4_ < (int)local_60[3]);
    }
    uVar5 = CONCAT71((int7)(uVar4 >> 8),1);
  }
  else {
LAB_1477f8e59:
    uVar5 = 0;
  }
LAB_1477f8e5b:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1477f8e86 FUN_1477f8e86 body=16 status=ok
// SIG undefined FUN_1477f8e86(void)

undefined1 FUN_1477f8e86(void)

{
  FUN_1477f30d8();
  return 1;
}



// FUNCTION 1477f8e96 FUN_1477f8e96 body=703 status=ok
// SIG undefined FUN_1477f8e96(void)

void FUN_1477f8e96(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  float local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  float local_58;
  undefined4 local_54;
  float local_50;
  char local_4c;
  longlong local_48;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0;
  uStack_60 = 0;
  local_88 = 0;
  (**(code **)(*param_1 + 0x310))(0,&local_78,&local_68,L".avi");
  if ((int)param_1[0xf] != 0) {
    lVar2 = *(longlong *)(param_1[0xe] + (longlong)((int)param_1[0xf] + -1) * 8);
    iVar1 = *(int *)(lVar2 + 0x20);
    if ((int)uStack_70 == iVar1) {
      if (1 < (int)uStack_70) {
        lVar6 = 0;
        while( true ) {
          uVar7 = *(ushort *)(local_78 + lVar6);
          uVar8 = (ulonglong)uVar7;
          uVar9 = *(ushort *)(*(longlong *)(lVar2 + 0x18) + lVar6);
          if (uVar7 != uVar9) break;
          if (uVar7 == 0) goto LAB_1477f8f67;
LAB_1477f8f32:
          lVar6 = lVar6 + 2;
        }
        if ((uVar9 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
          uVar10 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
          if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_1477f8f32;
        }
        if (uVar7 != uVar9) goto LAB_1477f8f9d;
      }
      goto LAB_1477f8f67;
    }
    if (iVar1 + (int)uStack_70 == 1) goto LAB_1477f8f67;
  }
LAB_1477f8f9d:
  FUN_1477f397e(param_1,&local_78);
  FUN_1477f9156(&local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  local_68 = local_78;
  uStack_60 = uStack_70;
  local_78 = 0;
  uStack_70 = 0;
  (**(code **)(*(longlong *)param_1[9] + 0x10))((longlong *)param_1[9],&local_80);
  local_58 = local_80;
  (**(code **)(*(longlong *)param_1[9] + 0x10))((longlong *)param_1[9],&local_80);
  local_54 = local_7c;
  plVar4 = (longlong *)(**(code **)(*(longlong *)param_1[9] + 0x18))();
  local_38 = (**(code **)(*plVar4 + 0x18))(plVar4);
  local_34 = (undefined4)param_1[7];
  local_30 = *(undefined4 *)((longlong)param_1 + 0x3c);
  if ((char)param_1[0xd] == '\x01') {
    local_50 = *(float *)((longlong)param_1 + 0x6c) / 100.0;
    local_4c = 1;
    local_80 = 100.0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar3 = FUN_14170b16c(&DAT_14c846b20,L"-MovieQuality=",&local_80);
    if (cVar3 != '\0') {
      local_50 = local_80;
      if (100.0 <= local_80) {
        local_50 = 100.0;
      }
      if (local_50 <= 1.0) {
        local_50 = 1.0;
      }
      local_50 = local_50 / 100.0;
    }
    if (1.0 <= local_50) {
      local_50 = 1.0;
    }
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    local_4c = '\x01';
  }
  uVar5 = FUN_147087942(&local_68);
  iVar1 = (int)param_1[0xf];
  *(uint *)(param_1 + 0xf) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x7c) < iVar1 + 1U) {
    FUN_1477fcef4(param_1 + 0xe,iVar1);
  }
  *(undefined8 *)(param_1[0xe] + (longlong)iVar1 * 8) = uVar5;
  (**(code **)(**(longlong **)(param_1[0xe] + (longlong)((int)param_1[0xf] + -1) * 8) + 8))();
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_4c == '\x01') {
    local_4c = '\0';
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_1477f8f67:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477f9156 FUN_1477f9156 body=162 status=ok
// SIG undefined FUN_1477f9156(void)

longlong FUN_1477f9156(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145a3c074(&local_28);
  FUN_1412cfe60(param_1,&local_28,(local_20 == 0) + '\f');
  FUN_1401aebe8(param_1,L"Capture.avi",0xb);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0x10) = 0x10000001e;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f91fa FUN_1477f91fa body=177 status=ok
// SIG undefined FUN_1477f91fa(void)

undefined8 * FUN_1477f91fa(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  FUN_1477f8e96();
  puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar6 = &PTR_FUN_14a588368;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a588bc0;
  plVar7[2] = (longlong)puVar6;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(puVar6 + 1) = *param_3;
  *(undefined4 *)((longlong)puVar6 + 0xc) = uVar3;
  *(undefined4 *)(puVar6 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar6 + 0x14) = uVar5;
  *(int *)(puVar6 + 3) = *(int *)(param_1 + 0x78) + -1;
  *param_2 = puVar6;
  param_2[1] = plVar7;
  if (plVar7 != (longlong *)0x0) {
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
  }
  return param_2;
}



// FUNCTION 1477f92ac FUN_1477f92ac body=198 status=ok
// SIG undefined FUN_1477f92ac(void)

void FUN_1477f92ac(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_2[3];
  lVar4 = (longlong)*(int *)(lVar1 + 0x18);
  if (-1 < lVar4) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + lVar4 * 8);
    (**(code **)(*plVar2 + 0x18))(plVar2,*(undefined4 *)(lVar1 + 0x14));
    uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar4 * 8);
    local_38 = *param_2;
    *param_2 = 0;
    local_30 = *(undefined4 *)(param_2 + 1);
    local_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    FUN_1470877f8(uVar3,(double)*(float *)(lVar1 + 8));
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar4 = 0;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + lVar4 * 8) + 8) != 0) {
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x70) + lVar4 * 8) + 0x10))();
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(lVar1 + 0x18));
    }
  }
  FUN_1477f3044(param_2);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477f9374 FUN_1477f9374 body=118 status=ok
// SIG undefined FUN_1477f9374(void)

void FUN_1477f9374(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x70);
  iVar1 = *(int *)(param_1 + 0x78);
  uVar2 = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar3 + lVar4) + 8) != 0) {
        (**(code **)(**(longlong **)(lVar3 + lVar4) + 0x10))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    uVar2 = *(undefined4 *)(param_1 + 0x78);
    lVar3 = *(longlong *)(param_1 + 0x70);
  }
  FUN_145b22ae3(lVar3,uVar2);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_1477fcfb0(param_1 + 0x70);
  }
  FUN_1477f3300(param_1);
  return;
}



// FUNCTION 1477f93ea FUN_1477f93ea body=180 status=ok
// SIG undefined FUN_1477f93ea(void)

bool FUN_1477f93ea(longlong param_1,longlong param_2,char param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  bVar1 = true;
  if (param_3 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x78) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x70);
      plVar2 = plVar3 + *(int *)(param_1 + 0x78);
LAB_1477f9424:
      puVar7 = &DAT_149dfb77a;
      if (*(int *)(*plVar3 + 0x20) != 0) {
        puVar7 = *(undefined2 **)(*plVar3 + 0x18);
      }
      lVar6 = 0;
      do {
        uVar8 = *(ushort *)((longlong)puVar7 + lVar6);
        uVar9 = (ulonglong)uVar8;
        uVar4 = *(ushort *)(param_2 + lVar6);
        if (uVar8 == uVar4) {
          if (uVar8 == 0) {
            return true;
          }
        }
        else {
          if (0x7f < (uVar4 | uVar8)) goto LAB_1477f946c;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
          uVar5 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar5]) goto LAB_1477f946c;
        }
        lVar6 = lVar6 + 2;
      } while( true );
    }
LAB_1477f947d:
    plVar2 = (longlong *)FUN_14054d1d4();
    lVar6 = (**(code **)(*plVar2 + 0x108))(plVar2,param_2);
    bVar1 = lVar6 == -1;
  }
  return bVar1;
LAB_1477f946c:
  if (uVar8 == uVar4) {
    return true;
  }
  plVar3 = plVar3 + 1;
  if (plVar3 == plVar2) goto LAB_1477f947d;
  goto LAB_1477f9424;
}



// FUNCTION 1477f94be FUN_1477f94be body=54 status=ok
// SIG undefined FUN_1477f94be(void)

undefined8 * FUN_1477f94be(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\MovieSceneCapture\\Public\\Protocols/FrameGrabberProtocol.h",0x36,
                L"Pure virtual not implemented (%s)",L"UFrameGrabberProtocol::GetFramePayload");
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1477f94f4 FUN_1477f94f4 body=52 status=ok
// SIG undefined FUN_1477f94f4(void)

void FUN_1477f94f4(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\MovieSceneCapture\\Public\\Protocols/FrameGrabberProtocol.h",0x3d,
                L"Pure virtual not implemented (%s)",L"UFrameGrabberProtocol::ProcessFrame");
  FUN_1477f3044(param_2);
  return;
}



// FUNCTION 1477f9548 FUN_1477f9548 body=45 status=ok
// SIG undefined FUN_1477f9548(void)

longlong FUN_1477f9548(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ce034c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477f9608 FUN_1477f9608 body=45 status=ok
// SIG undefined FUN_1477f9608(void)

longlong FUN_1477f9608(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ce034c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477f9636 FUN_1477f9636 body=29 status=ok
// SIG undefined FUN_1477f9636(void)

undefined8 FUN_1477f9636(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477f9658 FUN_1477f9658 body=29 status=ok
// SIG undefined FUN_1477f9658(void)

undefined8 FUN_1477f9658(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477f9698 FUN_1477f9698 body=44 status=ok
// SIG undefined FUN_1477f9698(void)

void FUN_1477f9698(undefined8 param_1,longlong *param_2)

{
  FUN_1447a1747(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477f96da FUN_1477f96da body=54 status=ok
// SIG undefined FUN_1477f96da(void)

undefined1 FUN_1477f96da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140bee9ec(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1477f9738 FUN_1477f9738 body=59 status=ok
// SIG undefined FUN_1477f9738(void)

undefined8 FUN_1477f9738(longlong *param_1)

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



// FUNCTION 1477f97d6 FUN_1477f97d6 body=48 status=ok
// SIG undefined FUN_1477f97d6(void)

void FUN_1477f97d6(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_1447a1747(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1477f9872 FUN_1477f9872 body=59 status=ok
// SIG undefined FUN_1477f9872(void)

undefined8 FUN_1477f9872(longlong *param_1)

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



// FUNCTION 1477f9942 FUN_1477f9942 body=54 status=ok
// SIG undefined FUN_1477f9942(void)

undefined1 FUN_1477f9942(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1477f9a56(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1477f99a0 FUN_1477f99a0 body=59 status=ok
// SIG undefined FUN_1477f99a0(void)

undefined8 FUN_1477f99a0(longlong *param_1)

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



// FUNCTION 1477f99e6 FUN_1477f99e6 body=34 status=ok
// SIG undefined FUN_1477f99e6(void)

void FUN_1477f99e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_145ce04f8(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1477f9a56 FUN_1477f9a56 body=120 status=ok
// SIG undefined FUN_1477f9a56(void)

longlong FUN_1477f9a56(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  FUN_144a787a6();
  lVar6 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar6 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar6;
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x5c);
  uVar5 = *(undefined8 *)(param_2 + 100);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x5c) = uVar4;
  *(undefined8 *)(param_1 + 100) = uVar5;
  return param_1;
}



// FUNCTION 1477f9ad0 FUN_1477f9ad0 body=38 status=ok
// SIG undefined FUN_1477f9ad0(void)

undefined8 FUN_1477f9ad0(undefined8 param_1,int param_2)

{
  FUN_1477f9b4e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477f9afe FUN_1477f9afe body=45 status=ok
// SIG undefined FUN_1477f9afe(void)

longlong FUN_1477f9afe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_1477f9b4e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477f9b4e FUN_1477f9b4e body=108 status=ok
// SIG undefined FUN_1477f9b4e(void)

void FUN_1477f9b4e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a587da0;
  param_1[2] = &PTR_FUN_14a587dc0;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_140af926c(param_1 + 2);
  *param_1 = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1);
  return;
}



// FUNCTION 1477f9bba FUN_1477f9bba body=57 status=ok
// SIG undefined FUN_1477f9bba(void)

undefined8 * FUN_1477f9bba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a587e10;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477f9bf8 FUN_1477f9bf8 body=122 status=ok
// SIG undefined FUN_1477f9bf8(void)

longlong FUN_1477f9bf8(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_1477f9c72(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1477f9c72 FUN_1477f9c72 body=211 status=ok
// SIG undefined FUN_1477f9c72(void)

undefined8 * FUN_1477f9c72(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140b40c12(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1477f9d46(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1477f9d46 FUN_1477f9d46 body=112 status=ok
// SIG undefined FUN_1477f9d46(void)

undefined8 * FUN_1477f9d46(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1407adc08(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 1477f9e22 FUN_1477f9e22 body=59 status=ok
// SIG undefined FUN_1477f9e22(void)

undefined8 FUN_1477f9e22(longlong *param_1)

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



// FUNCTION 1477f9f12 FUN_1477f9f12 body=42 status=ok
// SIG undefined FUN_1477f9f12(void)

void FUN_1477f9f12(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_2);
  return;
}



// FUNCTION 1477f9f52 FUN_1477f9f52 body=54 status=ok
// SIG undefined FUN_1477f9f52(void)

undefined1 FUN_1477f9f52(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_141262aba(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 1477f9fb0 FUN_1477f9fb0 body=59 status=ok
// SIG undefined FUN_1477f9fb0(void)

undefined8 FUN_1477f9fb0(longlong *param_1)

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



// FUNCTION 1477f9ff6 FUN_1477f9ff6 body=53 status=ok
// SIG undefined FUN_1477f9ff6(void)

void FUN_1477f9ff6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_140105116(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 1477fa08c FUN_1477fa08c body=56 status=ok
// SIG undefined FUN_1477fa08c(void)

void FUN_1477fa08c(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001477fa0b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477fa0da FUN_1477fa0da body=54 status=ok
// SIG undefined FUN_1477fa0da(void)

undefined1 FUN_1477fa0da(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1477f6d4e(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1477fa138 FUN_1477fa138 body=59 status=ok
// SIG undefined FUN_1477fa138(void)

undefined8 FUN_1477fa138(longlong *param_1)

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



// FUNCTION 1477fa17e FUN_1477fa17e body=64 status=ok
// SIG undefined FUN_1477fa17e(void)

void FUN_1477fa17e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 8);
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
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1477fa20e FUN_1477fa20e body=29 status=ok
// SIG undefined FUN_1477fa20e(void)

undefined8 FUN_1477fa20e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fa22c FUN_1477fa22c body=190 status=ok
// SIG undefined FUN_1477fa22c(void)

void FUN_1477fa22c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    bVar5 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar5) == 1) {
        FUN_1456cec3c(lVar3);
        bVar5 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar6) == lVar3) {
        if ((int)(~uVar6 >> 3) != 0) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != uVar6);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1477fa4b6(param_1,iVar1);
  }
  lVar4 = *param_2;
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) != 1) {
    return;
  }
  FUN_1456cec3c();
  return;
}



// FUNCTION 1477fa2ea FUN_1477fa2ea body=303 status=ok
// SIG undefined FUN_1477fa2ea(void)

void FUN_1477fa2ea(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  
  iVar1 = (int)param_1[1];
  lVar12 = (longlong)iVar1;
  if (lVar12 != 0) {
    plVar2 = (longlong *)*param_1;
    lVar6 = *(longlong *)*param_2;
    if ((lVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar6);
    }
    iVar8 = 0;
    iVar9 = 0;
    bVar4 = *plVar2 == lVar6;
    do {
      lVar7 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar6 = lVar7;
      iVar5 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar5;
        if (lVar12 <= lVar6) break;
        lVar3 = *(longlong *)*param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar4 == (plVar2[lVar6] == lVar3));
      if (bVar4 == false) {
        if (iVar8 != iVar9) {
          memmove(plVar2 + iVar8,plVar2 + lVar7,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar8 = iVar8 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar4 = (bool)(bVar4 ^ 1);
    } while (lVar6 < lVar12);
    *(int *)(param_1 + 1) = iVar8;
  }
  return;
}



// FUNCTION 1477fa41a FUN_1477fa41a body=62 status=ok
// SIG undefined FUN_1477fa41a(void)

void FUN_1477fa41a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477fa458(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1477fa458 FUN_1477fa458 body=93 status=ok
// SIG undefined FUN_1477fa458(void)

ulonglong FUN_1477fa458(uint param_1,uint param_2)

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



// FUNCTION 1477fa4b6 FUN_1477fa4b6 body=132 status=ok
// SIG undefined FUN_1477fa4b6(void)

void FUN_1477fa4b6(longlong param_1,int param_2)

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



// FUNCTION 1477fa53c FUN_1477fa53c body=89 status=ok
// SIG undefined FUN_1477fa53c(void)

void FUN_1477fa53c(longlong param_1,int param_2)

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



// FUNCTION 1477fa595 FUN_1477fa595 body=77 status=ok
// SIG undefined FUN_1477fa595(void)

void FUN_1477fa595(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 1477fa5e2 FUN_1477fa5e2 body=272 status=ok
// SIG undefined FUN_1477fa5e2(void)

undefined8 *
FUN_1477fa5e2(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14a588380;
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = param_4;
  *(undefined4 *)(param_1 + 10) = param_5;
  param_1[0xb] = param_6;
  *(undefined1 *)(param_1 + 0xc) = param_7;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar2 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.BufferVisualizationDumpFrames",1);
  param_1[0xd] = uVar2;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar2 = (**(code **)(*DAT_14c8407a8 + 200))
                    (DAT_14c8407a8,L"r.BufferVisualizationDumpFramesAsHDR",1);
  param_1[0xe] = uVar2;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar2 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SaveEXR.CompressionQuality",1);
  param_1[0xf] = uVar2;
  uVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0xb0))();
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(*(longlong *)param_1[0xf] + 0xb0))();
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  FUN_1477f1c28(param_1,0);
  return param_1;
}



// FUNCTION 1477fa6f2 FUN_1477fa6f2 body=38 status=ok
// SIG undefined FUN_1477fa6f2(void)

undefined8 FUN_1477fa6f2(undefined8 param_1,int param_2)

{
  FUN_1477fa84a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fa724 FUN_1477fa724 body=282 status=ok
// SIG undefined FUN_1477fa724(void)

void FUN_1477fa724(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    *(undefined1 *)(param_3 + 0x2f70) = 1;
    *(undefined4 *)(param_3 + 0x2f38) = 0;
    if (*(int *)(param_3 + 0x2f3c) != 0) {
      FUN_1448831cc(param_3 + 0x2f30,0);
    }
    if (param_3 + 0x2f78 != param_1 + 0x38) {
      if (*(longlong *)(param_3 + 0x2f78) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_3 + 0x2f78) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined4 *)(param_3 + 0x2f80) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_3 + 0x2f84) = *(undefined4 *)(param_1 + 0x44);
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_38 = param_3 + 0x2510;
    uVar1 = FUN_14620d3a1();
    FUN_1477fa87e(uVar1,&local_38);
    lVar2 = *(longlong *)(param_1 + 0x58);
    if (lVar2 != 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
        lVar2 = *(longlong *)(param_1 + 0x58);
      }
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28,param_3,0x3f800000);
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fa84a FUN_1477fa84a body=52 status=ok
// SIG undefined FUN_1477fa84a(void)

void FUN_1477fa84a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a588380;
  FUN_1477f1c28(param_1,0);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_145806982(param_1);
  return;
}



// FUNCTION 1477fa87e FUN_1477fa87e body=258 status=ok
// SIG undefined FUN_1477fa87e(void)

void FUN_1477fa87e(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      FUN_1477fa982(param_2,*local_60 + (longlong)iStack_44 * 0x40 + 8,
                    *(undefined8 *)(*local_60 + (longlong)iStack_44 * 0x40 + 0x28));
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fa982 FUN_1477fa982 body=125 status=ok
// SIG undefined FUN_1477fa982(void)

void FUN_1477fa982(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  
  if ((*(int *)(param_1[1] + 8) != 0) && (cVar3 = FUN_144a23846(), cVar3 == '\0')) {
    lVar2 = param_1[1];
    uVar4 = FUN_1447a1f4a(param_4);
    cVar3 = FUN_144a23846(lVar2,uVar4);
    if (cVar3 == '\0') {
      return;
    }
  }
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0xa28);
  *(uint *)(lVar2 + 0xa28) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa2c) < iVar1 + 1U) {
    FUN_144769b64((longlong *)(lVar2 + 0xa20),iVar1);
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0xa20) + (longlong)iVar1 * 8) = param_3;
  return;
}



// FUNCTION 1477faa00 FUN_1477faa00 body=24 status=ok
// SIG undefined FUN_1477faa00(void)

void FUN_1477faa00(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477faa14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477faa18 FUN_1477faa18 body=29 status=ok
// SIG undefined FUN_1477faa18(void)

undefined8 FUN_1477faa18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477faa35 FUN_1477faa35 body=301 status=ok
// SIG undefined FUN_1477faa35(void)

void FUN_1477faa35(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar12 = FUN_144821ef4();
  lVar5 = *param_2;
  uVar6 = *param_4;
  FUN_144775fd8(lVar12,lVar5 + 0xe0,*param_5);
  FUN_144775e63(lVar12,lVar5 + 0xe4,uVar6);
  iVar10 = *(int *)(lVar12 + 0x30) + *(int *)(lVar12 + 0x20);
  iVar11 = iVar10 + *(int *)(lVar12 + 0x40);
  if (iVar11 != 0 && SCARRY4(iVar10,*(int *)(lVar12 + 0x40)) == iVar11 < 0) {
    puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar13 + 0xb;
    if ((undefined8 *)param_1[1] < puVar14) {
      FUN_140023dd8(param_1,0x60);
      puVar13 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar13 + 0xb;
    }
    *param_1 = (ulonglong)puVar14;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar13;
    param_1[6] = (ulonglong)(puVar13 + 1);
    uVar6 = *(undefined8 *)(lVar12 + 0x38);
    uVar1 = *(undefined4 *)(lVar12 + 0x40);
    uVar7 = *(undefined8 *)(lVar12 + 0x28);
    uVar2 = *(undefined4 *)(lVar12 + 0x30);
    uVar8 = *(undefined8 *)(lVar12 + 0x18);
    uVar3 = *(undefined4 *)(lVar12 + 0x20);
    uVar9 = *(undefined8 *)(lVar12 + 8);
    uVar4 = *(undefined4 *)(lVar12 + 0x10);
    puVar13[1] = 0;
    *puVar13 = &PTR_FUN_14a1e7fd8;
    puVar13[2] = param_3;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = uVar4;
    puVar13[5] = uVar8;
    *(undefined4 *)(puVar13 + 6) = uVar3;
    puVar13[7] = uVar7;
    *(undefined4 *)(puVar13 + 8) = uVar2;
    puVar13[9] = uVar6;
    *(undefined4 *)(puVar13 + 10) = uVar1;
    *(undefined8 *)(lVar12 + 8) = 0;
    *(undefined4 *)(lVar12 + 0x10) = 0;
    *(undefined8 *)(lVar12 + 0x18) = 0;
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(undefined8 *)(lVar12 + 0x28) = 0;
    *(undefined4 *)(lVar12 + 0x30) = 0;
    *(undefined8 *)(lVar12 + 0x38) = 0;
    *(undefined4 *)(lVar12 + 0x40) = 0;
  }
  return;
}



// FUNCTION 1477fab62 FUN_1477fab62 body=38 status=ok
// SIG undefined FUN_1477fab62(void)

void FUN_1477fab62(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477f3044(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 1477fab88 FUN_1477fab88 body=38 status=ok
// SIG undefined FUN_1477fab88(void)

void FUN_1477fab88(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1477fabae(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 1477fabae FUN_1477fabae body=68 status=ok
// SIG undefined FUN_1477fabae(void)

void FUN_1477fabae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1477f1de0(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001477fabe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477fabf2 FUN_1477fabf2 body=73 status=ok
// SIG undefined FUN_1477fabf2(void)

void FUN_1477fabf2(longlong param_1,int param_2)

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



// FUNCTION 1477fac3c FUN_1477fac3c body=112 status=ok
// SIG undefined FUN_1477fac3c(void)

void FUN_1477fac3c(longlong param_1,uint param_2)

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



// FUNCTION 1477facac FUN_1477facac body=147 status=ok
// SIG undefined FUN_1477facac(void)

void FUN_1477facac(longlong param_1,int param_2)

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



// FUNCTION 1477fad40 FUN_1477fad40 body=164 status=ok
// SIG undefined FUN_1477fad40(void)

LPCRITICAL_SECTION FUN_1477fad40(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  p_Var2 = (_LIST_ENTRY *)FUN_144a3f946();
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_14a588570;
  (p_Var1->ProcessLocksList).Blink = param_2;
  *(code **)&p_Var1->EntryCount = FUN_1477f2b32;
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 1477fade4 FUN_1477fade4 body=29 status=ok
// SIG undefined FUN_1477fade4(void)

undefined8 FUN_1477fade4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fae1e FUN_1477fae1e body=93 status=ok
// SIG undefined FUN_1477fae1e(void)

void FUN_1477fae1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a588570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477fae7c FUN_1477fae7c body=93 status=ok
// SIG undefined FUN_1477fae7c(void)

void FUN_1477fae7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a588570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477faeda FUN_1477faeda body=126 status=ok
// SIG undefined FUN_1477faeda(void)

void FUN_1477faeda(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a588570;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477faf49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477faf66 FUN_1477faf66 body=21 status=ok
// SIG undefined FUN_1477faf66(void)

undefined8 FUN_1477faf66(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477faf7e FUN_1477faf7e body=132 status=ok
// SIG undefined FUN_1477faf7e(void)

void FUN_1477faf7e(longlong param_1,int param_2)

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



// FUNCTION 1477fb004 FUN_1477fb004 body=97 status=ok
// SIG undefined FUN_1477fb004(void)

void FUN_1477fb004(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong *plVar3;
  int iVar4;
  
  _Dst = (void *)*param_1;
  plVar3 = *(longlong **)((longlong)_Dst + 8);
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
  if (*(int *)(param_1 + 1) + -1 == 0) {
    iVar4 = 0;
  }
  else {
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(*(int *)(param_1 + 1) + -1) << 4);
    iVar4 = *(int *)(param_1 + 1) + -1;
  }
  *(int *)(param_1 + 1) = iVar4;
  return;
}



// FUNCTION 1477fb066 FUN_1477fb066 body=147 status=ok
// SIG undefined FUN_1477fb066(void)

void FUN_1477fb066(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1477fb0fa FUN_1477fb0fa body=24 status=ok
// SIG undefined FUN_1477fb0fa(void)

void FUN_1477fb0fa(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fb10e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477fb112 FUN_1477fb112 body=29 status=ok
// SIG undefined FUN_1477fb112(void)

undefined8 FUN_1477fb112(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fb130 FUN_1477fb130 body=24 status=ok
// SIG undefined FUN_1477fb130(void)

void FUN_1477fb130(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fb144. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477fb148 FUN_1477fb148 body=29 status=ok
// SIG undefined FUN_1477fb148(void)

undefined8 FUN_1477fb148(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fb166 FUN_1477fb166 body=100 status=ok
// SIG undefined FUN_1477fb166(void)

undefined8 * FUN_1477fb166(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 3) == '\x01') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
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
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 1477fb1ca FUN_1477fb1ca body=425 status=ok
// SIG undefined FUN_1477fb1ca(void)

void FUN_1477fb1ca(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144748838(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_1447030e2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x38 + lVar2 + -0x34);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0xe;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1477fb374 FUN_1477fb374 body=24 status=ok
// SIG undefined FUN_1477fb374(void)

void FUN_1477fb374(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fb388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477fb38c FUN_1477fb38c body=29 status=ok
// SIG undefined FUN_1477fb38c(void)

undefined8 FUN_1477fb38c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fb3aa FUN_1477fb3aa body=40 status=ok
// SIG undefined FUN_1477fb3aa(void)

void FUN_1477fb3aa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14a5887b0;
  return;
}



// FUNCTION 1477fb3d2 FUN_1477fb3d2 body=31 status=ok
// SIG undefined FUN_1477fb3d2(void)

undefined8 FUN_1477fb3d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fb40e FUN_1477fb40e body=93 status=ok
// SIG undefined FUN_1477fb40e(void)

void FUN_1477fb40e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a588740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477fb46c FUN_1477fb46c body=126 status=ok
// SIG undefined FUN_1477fb46c(void)

void FUN_1477fb46c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a588740;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fb4db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477fb4f6 FUN_1477fb4f6 body=21 status=ok
// SIG undefined FUN_1477fb4f6(void)

undefined8 FUN_1477fb4f6(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477fb50c FUN_1477fb50c body=29 status=ok
// SIG undefined FUN_1477fb50c(void)

undefined8 FUN_1477fb50c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fb52a FUN_1477fb52a body=81 status=ok
// SIG undefined FUN_1477fb52a(void)

void FUN_1477fb52a(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined1 *)(param_1 + 0xc) = 0;
  FUN_1477fc0bc(local_18,param_1);
  FUN_1477fc18e(local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fb584 FUN_1477fb584 body=2305 status=ok
// SIG undefined FUN_1477fb584(void)

longlong * FUN_1477fb584(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_1a8 [32];
  ulonglong local_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  int local_15c;
  longlong *local_158;
  wchar_t *local_150;
  undefined4 local_148;
  undefined2 *local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  longlong *local_118;
  longlong *plStack_110;
  undefined8 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8 [5];
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar3 = FUN_14054d46e(&DAT_14c846b20,L"EmulateStereo");
  if (cVar3 != '\0') {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  local_78 = (longlong *)0x0;
  plStack_70 = (longlong *)0x0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_188 = 0;
  FUN_14063337c(&DAT_14c846b20,L"-MovieSceneCaptureType=",&local_78,1);
  local_88 = 0;
  uStack_80 = 0;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_188 = 0;
  bVar4 = FUN_14063337c(&DAT_14c846b20,L"-MovieSceneCaptureManifest=",&local_88,1);
  if (((byte)((int)uStack_80 < 2 | bVar4 ^ 1) == 1) && ((int)plStack_70 < 2)) {
    plVar10 = (longlong *)0x0;
  }
  else {
    local_b8[4] = 0;
    uStack_90 = 0;
    local_b8[2] = 0;
    local_b8[3] = 0;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    local_188 = 0;
    bVar14 = true;
    cVar3 = FUN_14063337c(&DAT_14c846b20,L"PlayAsList=",local_b8 + 2,1);
    if (cVar3 != '\0') {
      FUN_1403de9f2(local_b8 + 2,local_b8 + 4,&DAT_149e06124,1);
    }
    uVar12 = (ulonglong)((int)uStack_90 + (uint)((int)uStack_90 == 0));
    lVar9 = 0;
    uVar13 = 0;
    local_158 = (longlong *)0x0;
    do {
      if ((int)uStack_80 < 2) {
        if ((int)plStack_70 < 2) {
          plVar7 = (longlong *)0x0;
        }
        else {
          uVar5 = FUN_144a797b2();
          lVar6 = FUN_140277b32(uVar5,0);
          if (lVar6 == 0) {
            local_b8[0] = 0;
            local_108 = 0;
            local_118 = (longlong *)0x0;
            plStack_110 = (longlong *)0x0;
            FUN_140133bee(&local_130,&local_78);
            local_188 = local_188 & 0xffffffff00000000;
            cVar3 = FUN_14689995c(2,&local_130,&local_118);
            if (cVar3 == '\0') break;
            FUN_14103acde(&local_118,&local_130);
            uVar5 = FUN_144a797b2();
            lVar6 = FUN_140277b32(uVar5,0);
            if (local_130 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if (lVar6 == 0) break;
          }
          uVar5 = FUN_1409ffe1d();
          plVar7 = (longlong *)FUN_1477fc6b1(uVar5,lVar6);
          if (plVar7 == (longlong *)0x0) break;
        }
      }
      else {
        local_b8[0] = 0;
        local_b8[1] = 0;
        cVar3 = FUN_140f7cb10(local_b8,local_88,0,0);
        if (cVar3 == '\0') {
          bVar15 = true;
          plVar7 = (longlong *)0x0;
        }
        else {
          local_c8 = 0;
          plStack_c0 = (longlong *)0x0;
          FUN_14047afda(&local_d8,local_b8);
          bVar4 = FUN_14047b282(local_d8,&local_c8);
          if ((local_c8 != 0 & bVar4) == 1) {
            local_f8 = L"Type";
            local_f0 = 4;
            FUN_1449ba96e(local_c8,&local_e8);
            local_15c = 1;
            if (local_e8 == 0) {
LAB_1477fbade:
              plVar7 = (longlong *)0x0;
            }
            else {
              FUN_14047e026(local_e8,&local_118);
              if (local_78 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              local_78 = local_118;
              plStack_70 = plStack_110;
              uVar5 = FUN_144a797b2();
              lVar6 = FUN_140277b32(uVar5,0);
              if (lVar6 == 0) {
                local_100 = 0;
                local_108 = 0;
                local_118 = (longlong *)0x0;
                plStack_110 = (longlong *)0x0;
                FUN_140133bee(&local_130,&local_78);
                local_188 = local_188 & 0xffffffff00000000;
                cVar3 = FUN_14689995c(2,&local_130);
                if (cVar3 != '\0') {
                  FUN_14103acde(&local_118,&local_130);
                  uVar5 = FUN_144a797b2();
                  lVar6 = FUN_140277b32(uVar5,0);
                  if (local_130 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (lVar6 != 0) goto LAB_1477fbcc5;
                }
                goto LAB_1477fbade;
              }
LAB_1477fbcc5:
              uVar5 = FUN_1409ffe1d();
              plVar7 = (longlong *)FUN_1477fc6b1(uVar5,lVar6);
              if (plVar7 == (longlong *)0x0) goto LAB_1477fbade;
              local_140 = &DAT_149e383f0;
              local_138 = 4;
              FUN_1449ba96e(local_c8,&local_118);
              iVar11 = 1;
              if (local_118 != (longlong *)0x0) {
                puVar8 = (undefined8 *)(**(code **)*local_118)();
                local_178 = 0;
                uStack_170 = 0;
                local_180 = 0;
                local_188 = 0;
                cVar3 = FUN_146f0329c(*puVar8,lVar6);
                if (cVar3 != '\0') {
                  local_150 = L"AdditionalData";
                  local_148 = 0xe;
                  FUN_1449ba96e(local_c8,&local_130);
                  if (local_130 != (undefined8 *)0x0) {
                    puVar8 = (undefined8 *)(**(code **)*local_130)();
                    FUN_1477f600e(plVar7,*puVar8);
                  }
                  plVar10 = (longlong *)CONCAT44(uStack_124,local_128);
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
                  iVar11 = 0;
                }
              }
              plVar10 = plStack_110;
              local_15c = iVar11;
              if (plStack_110 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_110 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_110)(plStack_110);
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
            plVar10 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_e0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_e0)(local_e0);
                LOCK();
                piVar2 = (int *)((longlong)plVar10 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
            }
            bVar15 = local_15c == 0;
          }
          else {
            bVar15 = true;
            plVar7 = (longlong *)0x0;
          }
          plVar10 = local_d0;
          if (local_d0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_d0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_d0)(local_d0);
              LOCK();
              piVar2 = (int *)((longlong)plVar10 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          plVar10 = plStack_c0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_c0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_c0)(plStack_c0);
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
        if (local_b8[0] != 0) {
          FUN_1400020a8();
        }
        if (!bVar15) break;
      }
      if ((-1 < (int)uVar13) && ((int)uVar13 < (int)uStack_90)) {
        (**(code **)(*plVar7 + 0x2e0))(plVar7,local_b8[4] + lVar9);
      }
      if (uVar13 == 0) {
        (**(code **)(plVar7[5] + 0x28))(plVar7 + 5,&local_118);
        *(undefined4 *)(param_1 + 8) = local_118._0_4_;
        lVar6 = FUN_1477f0cba();
        local_118 = plVar7;
        if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar7);
        }
        FUN_1477fa22c(lVar6 + 0x18,&local_118);
        local_158 = plVar7;
      }
      else {
        lVar6 = FUN_1477f0cba();
        local_118 = plVar7;
        if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar7);
        }
        FUN_1477fa22c(lVar6 + 0x28,&local_118);
      }
      FUN_1477fc762(plVar7 + 0x39);
      uVar13 = uVar13 + 1;
      bVar14 = uVar13 < uVar12;
      lVar9 = lVar9 + 0x10;
    } while (uVar12 != uVar13);
    plVar7 = local_158 + 5;
    if (local_158 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    plVar10 = (longlong *)0x0;
    if (!bVar14) {
      plVar10 = plVar7;
    }
    if (local_b8[2] != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_b8[4],uStack_90 & 0xffffffff);
    if (local_b8[4] != 0) {
      FUN_1400020a8();
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return plVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fbe86 FUN_1477fbe86 body=178 status=ok
// SIG undefined FUN_1477fbe86(void)

longlong FUN_1477fbe86(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_1409ffe1d();
  lVar5 = FUN_1477fc985(uVar4);
  lVar6 = lVar5 + 0x28;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar6,&local_30,0xffffffff);
  FUN_1477f4470(lVar5);
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
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fbf3a FUN_1477fbf3a body=42 status=ok
// SIG undefined FUN_1477fbf3a(void)

longlong FUN_1477fbf3a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1477f0cba();
  if (*(int *)(lVar1 + 0x20) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = **(longlong **)(lVar1 + 0x18) + 0x28;
    if (**(longlong **)(lVar1 + 0x18) == 0) {
      lVar2 = 0;
    }
  }
  return lVar2;
}



// FUNCTION 1477fbf64 FUN_1477fbf64 body=159 status=ok
// SIG undefined FUN_1477fbf64(void)

longlong FUN_1477fbf64(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1477f0cba();
  iVar1 = *(int *)(lVar4 + 0x20);
  if ((longlong)iVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar4 + 0x18);
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x28))(lVar3 + 0x28,&local_4c);
      if (local_4c == param_2) {
        lVar4 = lVar3 + 0x28;
        if (lVar3 == 0) {
          lVar4 = 0;
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1477fc004 FUN_1477fc004 body=143 status=ok
// SIG undefined FUN_1477fc004(void)

void FUN_1477fc004(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_1477f0cba();
  iVar1 = *(int *)(lVar3 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x18);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar5);
      plVar4 = (longlong *)(lVar2 + 0x28);
      (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x28))(plVar4,&local_3c);
      if (local_3c == param_2) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
        break;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477fc094 FUN_1477fc094 body=36 status=ok
// SIG undefined FUN_1477fc094(void)

void FUN_1477fc094(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_140457ffc(&DAT_14c8673d8,param_1);
  uVar1 = FUN_1477f0cba();
  FUN_1477f11e2(uVar1);
  return;
}



// FUNCTION 1477fc0bc FUN_1477fc0bc body=186 status=ok
// SIG undefined FUN_1477fc0bc(void)

undefined8 FUN_1477fc0bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a588830;
  puVar1[3] = param_2;
  puVar1[4] = FUN_1477fc178;
  FUN_1448b6402(&DAT_14c8673d8,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fc178 FUN_1477fc178 body=21 status=ok
// SIG undefined FUN_1477fc178(void)

void FUN_1477fc178(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1477f0cba();
  FUN_1477f11e2(uVar1);
  return;
}



// FUNCTION 1477fc18e FUN_1477fc18e body=186 status=ok
// SIG undefined FUN_1477fc18e(void)

undefined8 FUN_1477fc18e(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
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
  *local_38 = &PTR_LAB_14a1e1a40;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a5888a0;
  puVar1[3] = param_2;
  puVar1[4] = FUN_1477fc24a;
  FUN_141211c46(&DAT_14c9647a0,param_1,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fc24a FUN_1477fc24a body=312 status=ok
// SIG undefined FUN_1477fc24a(void)

void FUN_1477fc24a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  lVar3 = DAT_14cb0d2b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = FUN_1413f862e();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && ((int)param_1[1] != 0)) {
      lVar4 = (**(code **)(**(longlong **)(*(longlong *)(lVar3 + 0x1370) + 0x38) + 0x30))();
      if (lVar4 == 0) {
        FUN_1427948c2(0,L"FMovieSceneCaptureModule::OnPostLoadMap");
      }
      else {
        plVar5 = (longlong *)(**(code **)(*param_1 + 0x58))(param_1,(int)param_1[1]);
        local_28 = *(undefined8 *)(lVar3 + 0x1370);
        plVar2 = *(longlong **)(lVar3 + 0x1378);
        if (plVar2 == (longlong *)0x0) {
          local_20 = (longlong *)0x0;
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_28,0xffffffff);
        }
        else {
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          local_20 = plVar2;
          (**(code **)(*plVar5 + 0x10))(plVar5,&local_28,0xffffffff);
          LOCK();
          plVar5 = plVar2 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_140457ffc(&DAT_14c9647a0,param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fc384 FUN_1477fc384 body=29 status=ok
// SIG undefined FUN_1477fc384(void)

undefined8 FUN_1477fc384(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fc3be FUN_1477fc3be body=93 status=ok
// SIG undefined FUN_1477fc3be(void)

void FUN_1477fc3be(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a588830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477fc41c FUN_1477fc41c body=93 status=ok
// SIG undefined FUN_1477fc41c(void)

void FUN_1477fc41c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a588830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477fc47a FUN_1477fc47a body=126 status=ok
// SIG undefined FUN_1477fc47a(void)

void FUN_1477fc47a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a588830;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fc4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477fc504 FUN_1477fc504 body=21 status=ok
// SIG undefined FUN_1477fc504(void)

undefined8 FUN_1477fc504(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477fc51a FUN_1477fc51a body=29 status=ok
// SIG undefined FUN_1477fc51a(void)

undefined8 FUN_1477fc51a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fc554 FUN_1477fc554 body=93 status=ok
// SIG undefined FUN_1477fc554(void)

void FUN_1477fc554(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5888a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477fc5b2 FUN_1477fc5b2 body=93 status=ok
// SIG undefined FUN_1477fc5b2(void)

void FUN_1477fc5b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1e1a40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a5888a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477fc610 FUN_1477fc610 body=126 status=ok
// SIG undefined FUN_1477fc610(void)

void FUN_1477fc610(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1e1a40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a5888a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fc67f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477fc69c FUN_1477fc69c body=21 status=ok
// SIG undefined FUN_1477fc69c(void)

undefined8 FUN_1477fc69c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477fc6b1 FUN_1477fc6b1 body=175 status=ok
// SIG undefined FUN_1477fc6b1(void)

undefined8 FUN_1477fc6b1(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 1477fc762 FUN_1477fc762 body=167 status=ok
// SIG undefined FUN_1477fc762(void)

undefined8 FUN_1477fc762(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  puVar1 = local_38;
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14a588a20;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fc80a FUN_1477fc80a body=29 status=ok
// SIG undefined FUN_1477fc80a(void)

undefined8 FUN_1477fc80a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fc83c FUN_1477fc83c body=85 status=ok
// SIG undefined FUN_1477fc83c(void)

void FUN_1477fc83c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a588a20;
  return;
}



// FUNCTION 1477fc892 FUN_1477fc892 body=85 status=ok
// SIG undefined FUN_1477fc892(void)

void FUN_1477fc892(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a588a20;
  return;
}



// FUNCTION 1477fc8e8 FUN_1477fc8e8 body=118 status=ok
// SIG undefined FUN_1477fc8e8(void)

void FUN_1477fc8e8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a588a20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fc94f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477fc96c FUN_1477fc96c body=25 status=ok
// SIG undefined FUN_1477fc96c(void)

undefined1 FUN_1477fc96c(void)

{
  FUN_1427948c2(0,L"FMovieSceneCaptureModule::InitializeFromCommandLine");
  return 1;
}



// FUNCTION 1477fc985 FUN_1477fc985 body=148 status=ok
// SIG undefined FUN_1477fc985(void)

undefined8 FUN_1477fc985(undefined8 param_1)

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
  uVar1 = FUN_1459d46d4();
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



// FUNCTION 1477fca1a FUN_1477fca1a body=103 status=ok
// SIG undefined FUN_1477fca1a(void)

undefined8 * FUN_1477fca1a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 3) == '\x01') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
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
  *param_1 = *param_2;
  lVar4 = param_2[1];
  param_1[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = 1;
  return param_1;
}



// FUNCTION 1477fca81 FUN_1477fca81 body=202 status=ok
// SIG undefined FUN_1477fca81(void)

undefined8 * FUN_1477fca81(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 *local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_LAB_14a588af0;
  local_58 = &local_48;
  local_48 = 0;
  uStack_40 = 0;
  local_60 = 4;
  local_68 = 8;
  FUN_147129202(puVar1 + 2,param_1,0,1);
  puVar1[2] = &PTR_FUN_14a1e9260;
  puVar1[7] = *param_2;
  *param_2 = 0;
  puVar1[8] = param_2[1];
  puVar1[9] = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fcb56 FUN_1477fcb56 body=29 status=ok
// SIG undefined FUN_1477fcb56(void)

undefined8 FUN_1477fcb56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fcb74 FUN_1477fcb74 body=1 status=ok
// SIG undefined FUN_1477fcb74(void)

void FUN_1477fcb74(void)

{
  return;
}



// FUNCTION 1477fcb76 FUN_1477fcb76 body=29 status=ok
// SIG undefined FUN_1477fcb76(void)

undefined8 FUN_1477fcb76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fcb94 FUN_1477fcb94 body=29 status=ok
// SIG undefined FUN_1477fcb94(void)

undefined8 FUN_1477fcb94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fcbb2 FUN_1477fcbb2 body=356 status=ok
// SIG undefined FUN_1477fcbb2(void)

/* WARNING: Removing unreachable block (ram,0x0001477fcc9d) */
/* WARNING: Removing unreachable block (ram,0x0001477fcca4) */
/* WARNING: Removing unreachable block (ram,0x0001477fccb7) */

void FUN_1477fcbb2(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 local_e8 [64];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_38 = 0;
  local_a8 = *param_3;
  lStack_a0 = param_3[1];
  if (lStack_a0 == 0) {
    lStack_a0 = 0;
  }
  else {
    LOCK();
    *(int *)(lStack_a0 + 8) = *(int *)(lStack_a0 + 8) + 1;
    UNLOCK();
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_141262aba(&local_98,param_1);
  local_38 = param_4;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1477fcdae(local_e8,&local_a8);
    FUN_1407461b0(1,local_e8);
  }
  else {
    lVar2 = FUN_14479d2ce(&local_38);
    if (lVar2 != 0) {
      local_f8 = local_48;
      uStack_f4 = uStack_44;
      uStack_f0 = uStack_40;
      uStack_ec = uStack_3c;
      FUN_1477f8528(lVar2,&local_a8,&local_98);
    }
  }
  FUN_1477fcd4e(&local_a8);
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1477fcd18 FUN_1477fcd18 body=24 status=ok
// SIG undefined FUN_1477fcd18(void)

void FUN_1477fcd18(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fcd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477fcd30 FUN_1477fcd30 body=29 status=ok
// SIG undefined FUN_1477fcd30(void)

undefined8 FUN_1477fcd30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fcd4e FUN_1477fcd4e body=95 status=ok
// SIG undefined FUN_1477fcd4e(void)

void FUN_1477fcd4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x0001477fcda1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477fcdae FUN_1477fcdae body=137 status=ok
// SIG undefined FUN_1477fcdae(void)

undefined8 * FUN_1477fcdae(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0;
  param_1[2] = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,8);
  param_1[2] = puVar2;
  *puVar2 = &PTR_LAB_14a588b80;
  puVar2[1] = *param_2;
  puVar2[2] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14105a876(puVar2 + 3,param_2 + 2);
  uVar1 = param_2[0xd];
  puVar2[0xd] = param_2[0xc];
  puVar2[0xe] = uVar1;
  puVar2[0xf] = param_2[0xe];
  if (puVar2 != (undefined8 *)&DAT_fffffffffffffff8) {
    *param_1 = FUN_1477fce38;
  }
  return param_1;
}



// FUNCTION 1477fce38 FUN_1477fce38 body=95 status=ok
// SIG undefined FUN_1477fce38(void)

void FUN_1477fce38(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14479d2ce(param_1 + 0x70);
  if (lVar1 != 0) {
    local_28 = *(undefined4 *)(param_1 + 0x60);
    uStack_24 = *(undefined4 *)(param_1 + 100);
    uStack_20 = *(undefined4 *)(param_1 + 0x68);
    uStack_1c = *(undefined4 *)(param_1 + 0x6c);
    FUN_1477f8528(lVar1,param_1,param_1 + 0x10);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fcea2 FUN_1477fcea2 body=29 status=ok
// SIG undefined FUN_1477fcea2(void)

void FUN_1477fcea2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1477fcec0 FUN_1477fcec0 body=52 status=ok
// SIG undefined FUN_1477fcec0(void)

undefined8 * FUN_1477fcec0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a588b80;
  FUN_1477fcd4e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fcef4 FUN_1477fcef4 body=132 status=ok
// SIG undefined FUN_1477fcef4(void)

void FUN_1477fcef4(longlong param_1,int param_2)

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



// FUNCTION 1477fcf7a FUN_1477fcf7a body=24 status=ok
// SIG undefined FUN_1477fcf7a(void)

void FUN_1477fcf7a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fcf8e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1477fcf92 FUN_1477fcf92 body=29 status=ok
// SIG undefined FUN_1477fcf92(void)

undefined8 FUN_1477fcf92(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1477fcfb0 FUN_1477fcfb0 body=48 status=ok
// SIG undefined FUN_1477fcfb0(void)

void FUN_1477fcfb0(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477fcfe0 FUN_1477fcfe0 body=301 status=ok
// SIG undefined FUN_1477fcfe0(void)

void FUN_1477fcfe0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plVar10;
  bool bVar11;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  uVar6 = 0;
  bVar9 = false;
LAB_1477fd007:
  do {
    lVar7 = *param_1;
    plVar10 = *(longlong **)(lVar7 + 8 + uVar6 * 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_1477fd030:
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar5 = (int)plVar10[1];
      do {
        if (iVar5 == 0) goto LAB_1477fd030;
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar11);
    }
    lVar7 = *(longlong *)(lVar7 + uVar6 * 0x10);
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
LAB_1477fd083:
      lVar8 = 0;
    }
    else {
      iVar5 = (int)plVar3[1];
      do {
        if (iVar5 == 0) goto LAB_1477fd083;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar3 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
      } while (!bVar11);
      lVar8 = *param_2;
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
    if (plVar10 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      LOCK();
      plVar3 = plVar10 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (lVar7 != lVar8) break;
    FUN_1477fd47a(param_1,uVar6 & 0xffffffff);
    bVar9 = true;
    if ((longlong)(int)param_1[1] <= (longlong)uVar6) goto LAB_1477fd0f5;
  } while( true );
  uVar6 = uVar6 + 1;
  if ((longlong)(int)param_1[1] <= (longlong)uVar6) {
    if (!bVar9) {
      return;
    }
LAB_1477fd0f5:
    FUN_1477fd4ec(param_1);
    return;
  }
  goto LAB_1477fd007;
}



// FUNCTION 1477fd122 FUN_1477fd122 body=89 status=ok
// SIG undefined FUN_1477fd122(void)

undefined8 FUN_1477fd122(longlong param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_1 + 0x38);
  while ((bVar1 & 1) == 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x20))
                      (*(longlong **)(param_1 + 0x60),0xffffffff,0);
    if (((cVar2 != '\0') && ((*(byte *)(param_1 + 0x38) & 1) == 0)) &&
       (FUN_1477fd17c(param_1), (*(byte *)(param_1 + 0x38) & 1) == 0)) {
      FUN_14000f986(0x3ba3d70a);
    }
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  return 0;
}



// FUNCTION 1477fd17c FUN_1477fd17c body=453 status=ok
// SIG undefined FUN_1477fd17c(void)

void FUN_1477fd17c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  bool bVar14;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  iVar8 = *(int *)(param_1 + 0x5c);
  FUN_145c4257d(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  if ((iVar8 < 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    FUN_1477fdbd8(plVar1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  iVar8 = *(int *)(param_1 + 0x48);
  if (0 < (longlong)iVar8) {
    plVar2 = (longlong *)(param_1 + 0x40);
    uVar10 = (longlong)iVar8;
    do {
      uVar11 = uVar10 - 1;
      lVar12 = *plVar2;
      plVar9 = *(longlong **)(lVar12 + 8 + uVar11 * 0x10);
      bVar14 = true;
      if (plVar9 == (longlong *)0x0) {
LAB_1477fd26c:
        plVar9 = (longlong *)0x0;
LAB_1477fd26f:
        FUN_1477fdc8e(plVar2,uVar11 & 0xffffffff);
        FUN_1477fdd00(plVar2);
        if (!bVar14) goto LAB_1477fd23d;
      }
      else {
        iVar8 = (int)plVar9[1];
        do {
          if (iVar8 == 0) goto LAB_1477fd26c;
          LOCK();
          iVar7 = (int)plVar9[1];
          bVar13 = iVar8 == iVar7;
          if (bVar13) {
            *(int *)(plVar9 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar13);
        lVar12 = *(longlong *)(lVar12 + uVar11 * 0x10);
        if (lVar12 == 0) {
          bVar14 = false;
          goto LAB_1477fd26f;
        }
        LOCK();
        *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
        UNLOCK();
        iVar8 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar8 + 1U) {
          FUN_1477fdc08(plVar1,iVar8);
        }
        lVar5 = *plVar1;
        *(longlong *)(lVar5 + (longlong)iVar8 * 0x10) = lVar12;
        *(longlong **)(lVar5 + 8 + (longlong)iVar8 * 0x10) = plVar9;
LAB_1477fd23d:
        LOCK();
        plVar3 = plVar9 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar4 = (int *)((longlong)plVar9 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      bVar14 = 1 < (longlong)uVar10;
      uVar10 = uVar11;
    } while (bVar14);
    iVar8 = *(int *)(param_1 + 0x48);
  }
  if (iVar8 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x18))();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar12 = 0;
    do {
      lVar5 = *plVar1;
      plVar2 = *(longlong **)(lVar5 + 8 + lVar12 * 0x10);
      if (plVar2 != (longlong *)0x0) {
        iVar8 = (int)plVar2[1];
        do {
          if (iVar8 == 0) goto LAB_1477fd317;
          LOCK();
          iVar7 = (int)plVar2[1];
          bVar14 = iVar8 == iVar7;
          if (bVar14) {
            *(int *)(plVar2 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar14);
        puVar6 = *(undefined8 **)(lVar5 + lVar12 * 0x10);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)();
        }
        LOCK();
        plVar9 = plVar2 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar4 = (int *)((longlong)plVar2 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_1477fd317:
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0x58));
  }
  return;
}



// FUNCTION 1477fd354 FUN_1477fd354 body=154 status=ok
// SIG undefined FUN_1477fd354(void)

void FUN_1477fd354(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  local_30 = *param_2;
  local_28 = (longlong *)param_2[1];
  if (local_28 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
    UNLOCK();
  }
  FUN_1477fd9e6(param_1 + 0x38,&local_30);
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0x10))();
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001477fd3e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fd3f0 FUN_1477fd3f0 body=43 status=ok
// SIG undefined FUN_1477fd3f0(void)

undefined8 FUN_1477fd3f0(undefined8 param_1,int param_2)

{
  FUN_145c42490();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1477fd41c FUN_1477fd41c body=43 status=ok
// SIG undefined FUN_1477fd41c(void)

undefined8 FUN_1477fd41c(undefined8 param_1,int param_2)

{
  FUN_145c42506();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1477fd448 FUN_1477fd448 body=50 status=ok
// SIG undefined FUN_1477fd448(void)

longlong FUN_1477fd448(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_145c42506(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 1477fd47a FUN_1477fd47a body=113 status=ok
// SIG undefined FUN_1477fd47a(void)

void FUN_1477fd47a(longlong *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 8 + (longlong)(int)param_2 * 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  iVar4 = (int)param_1[1];
  iVar6 = ~param_2 + iVar4;
  if (iVar6 != 0) {
    iVar5 = 1;
    if (iVar6 < 1) {
      iVar5 = iVar6;
    }
    memmove((void *)((longlong)(int)param_2 * 0x10 + lVar2),
            (void *)((longlong)(iVar4 - iVar5) * 0x10 + lVar2),(longlong)iVar5 << 4);
    iVar4 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return;
}



// FUNCTION 1477fd4ec FUN_1477fd4ec body=62 status=ok
// SIG undefined FUN_1477fd4ec(void)

void FUN_1477fd4ec(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1477fd52a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1477fd52a FUN_1477fd52a body=93 status=ok
// SIG undefined FUN_1477fd52a(void)

ulonglong FUN_1477fd52a(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1477fd588 FUN_1477fd588 body=36 status=ok
// SIG undefined FUN_1477fd588(void)

undefined8 FUN_1477fd588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1477fd5c8 FUN_1477fd5c8 body=93 status=ok
// SIG undefined FUN_1477fd5c8(void)

void FUN_1477fd5c8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a588e10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1477fd626 FUN_1477fd626 body=126 status=ok
// SIG undefined FUN_1477fd626(void)

void FUN_1477fd626(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a588e10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477fd695. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477fd6a4 FUN_1477fd6a4 body=21 status=ok
// SIG undefined FUN_1477fd6a4(void)

undefined8 FUN_1477fd6a4(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1477fd6ba FUN_1477fd6ba body=148 status=ok
// SIG undefined FUN_1477fd6ba(void)

void FUN_1477fd6ba(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x130);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,1);
    plVar1 = *(longlong **)(param_1 + 0x130);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,1);
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  if (*(int *)(param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    FUN_1477fd986(param_1 + 8);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (-1 < *(int *)(param_1 + 0xb4)) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  FUN_1477fd9b6(param_1 + 0xa8);
  return;
}



// FUNCTION 1477fd752 FUN_1477fd752 body=32 status=ok
// SIG undefined FUN_1477fd752(void)

undefined8 * FUN_1477fd752(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_140f7ad96(*param_3);
  uVar1 = *(undefined8 *)(lVar2 + 0x48);
  *param_2 = *(undefined8 *)(lVar2 + 0x40);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 1477fd780 FUN_1477fd780 body=163 status=ok
// SIG undefined FUN_1477fd780(void)

longlong * FUN_1477fd780(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
      if ((((local_48 == *param_2) && (local_44 == param_2[1])) && (local_40 == param_2[2])) &&
         (local_3c == param_2[3])) goto LAB_1477fd7fc;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  plVar3 = (longlong *)0x0;
LAB_1477fd7fc:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fd824 FUN_1477fd824 body=138 status=ok
// SIG undefined FUN_1477fd824(void)

longlong * FUN_1477fd824(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0xb0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
      if (local_40 == *param_2) goto LAB_1477fd887;
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  plVar3 = (longlong *)0x0;
LAB_1477fd887:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477fd90a FUN_1477fd90a body=88 status=ok
// SIG undefined FUN_1477fd90a(void)

void FUN_1477fd90a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x160);
  *(undefined8 *)(param_1 + 0x158) = uVar3;
  *(longlong *)(param_1 + 0x160) = lVar4;
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
                    /* WARNING: Could not recover jumptable at 0x0001477fd95e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1477fd986 FUN_1477fd986 body=48 status=ok
// SIG undefined FUN_1477fd986(void)

void FUN_1477fd986(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477fd9b6 FUN_1477fd9b6 body=48 status=ok
// SIG undefined FUN_1477fd9b6(void)

void FUN_1477fd9b6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1477fd9e6 FUN_1477fd9e6 body=89 status=ok
// SIG undefined FUN_1477fd9e6(void)

void FUN_1477fd9e6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_1477fda40();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1477fdc08(param_1,iVar2);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar2 * 0x10) = *param_2;
    *(undefined8 *)(lVar1 + 8 + (longlong)iVar2 * 0x10) = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}



// FUNCTION 1477fda40 FUN_1477fda40 body=240 status=ok
// SIG undefined FUN_1477fda40(void)

ulonglong FUN_1477fda40(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    param_1 = (longlong *)*param_1;
    plVar10 = param_1;
    do {
      plVar7 = (longlong *)plVar10[1];
      if (plVar7 == (longlong *)0x0) {
LAB_1477fda8e:
        plVar7 = (longlong *)0x0;
      }
      else {
        iVar6 = (int)plVar7[1];
        do {
          if (iVar6 == 0) goto LAB_1477fda8e;
          LOCK();
          iVar5 = (int)plVar7[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar7 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
      }
      lVar8 = *plVar10;
      plVar3 = (longlong *)param_2[1];
      if (plVar3 == (longlong *)0x0) {
LAB_1477fdad4:
        lVar9 = 0;
      }
      else {
        iVar6 = (int)plVar3[1];
        do {
          if (iVar6 == 0) goto LAB_1477fdad4;
          LOCK();
          iVar5 = (int)plVar3[1];
          bVar11 = iVar6 == iVar5;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
        } while (!bVar11);
        lVar9 = *param_2;
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
      if (plVar7 == (longlong *)0x0) {
        lVar8 = 0;
      }
      else {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
      if (lVar8 == lVar9) {
        return (ulonglong)((longlong)plVar10 - (longlong)param_1) >> 4 & 0xffffffff;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != param_1 + (longlong)(int)lVar4 * 2);
  }
  return 0xffffffff;
}


