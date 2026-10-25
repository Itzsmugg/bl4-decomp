// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1410a3c4a FUN_1410a3c4a body=120 status=ok
// SIG undefined FUN_1410a3c4a(void)

void FUN_1410a3c4a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  do {
    FUN_1408c28ac(*(undefined8 *)(param_1 + 0x150 + lVar1),*(undefined4 *)(param_1 + 0x158 + lVar1))
    ;
    if (*(longlong *)(param_1 + 0x150 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x60);
  lVar1 = 0;
  do {
    FUN_1408c28ac(*(undefined8 *)(param_1 + 0xf0 + lVar1),*(undefined4 *)(param_1 + 0xf8 + lVar1));
    if (*(longlong *)(param_1 + 0xf0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x60);
  return;
}



// FUNCTION 1410a3cc2 FUN_1410a3cc2 body=149 status=ok
// SIG undefined FUN_1410a3cc2(void)

undefined4 FUN_1410a3cc2(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  uVar3 = DAT_14c98e618;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = (longlong *)param_2[1];
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
  }
  uVar5 = FUN_1410a3d58(uVar3,*(undefined4 *)(param_1 + 0x18),&local_28,param_3);
  plVar4 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a3d58 FUN_1410a3d58 body=784 status=ok
// SIG undefined FUN_1410a3d58(void)

uint FUN_1410a3d58(longlong param_1,uint param_2,longlong *param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 auStack_1e8 [40];
  longlong local_1c0;
  longlong *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0 [8];
  undefined1 local_198 [288];
  undefined1 *local_78;
  ulonglong local_70;
  undefined1 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x318) <= (int)param_2)) {
    uVar10 = 0;
    goto LAB_1410a3ef1;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)param_2 * 0x10);
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)param_2 * 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  lVar5 = *param_3;
  uVar10 = 0;
  if ((lVar5 != 0) && (lVar3 != 0)) {
    local_1a0[0] = DAT_14c96b238;
    local_78 = (undefined1 *)0x0;
    local_70 = 0x400000000;
    local_68 = 0;
    local_60 = 0;
    plStack_58 = (longlong *)0x0;
    local_50 = 0;
    uStack_48 = 0;
    plVar6 = (longlong *)param_3[1];
    local_1b0 = lVar5;
    if (plVar6 == (longlong *)0x0) {
      local_1a8 = (longlong *)0x0;
      cVar9 = FUN_1407c4db4(param_1 + 0x1b0,&local_1b0,local_1a0);
      if (cVar9 == '\0') goto LAB_1410a3f5b;
LAB_1410a3e60:
      uVar10 = FUN_1410a406a(param_1,lVar3,local_1a0,param_4);
      bVar7 = false;
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      local_1a8 = plVar6;
      uVar10 = FUN_1407c4db4(param_1 + 0x1b0,&local_1b0,local_1a0);
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      if ((char)uVar10 != '\0') goto LAB_1410a3e60;
LAB_1410a3f5b:
      uVar8 = DAT_14c96b238;
      local_1c0 = *param_3;
      plVar6 = (longlong *)param_3[1];
      if (plVar6 == (longlong *)0x0) {
        local_1b8 = (longlong *)0x0;
        cVar9 = FUN_1407c4db4(param_1 + 0x1c0,&local_1c0,local_1a0,DAT_14c96b238);
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        local_1b8 = plVar6;
        uVar10 = FUN_1407c4db4(param_1 + 0x1c0,&local_1c0,local_1a0,uVar8);
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        cVar9 = (char)uVar10;
      }
      if (cVar9 != '\0') goto LAB_1410a3e60;
      bVar7 = true;
    }
    FUN_1447fa2ac(local_50,uStack_48 & 0xffffffff);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    plVar6 = plStack_58;
    if (plStack_58 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_58 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_58)(plStack_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    puVar11 = local_78;
    if (local_78 == (undefined1 *)0x0) {
      puVar11 = local_198;
    }
    FUN_1447157bd(puVar11,local_70 & 0xffffffff);
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar7) {
      uVar10 = 0;
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar4 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1410a3ef1:
  if ((local_40 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar10 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a406a FUN_1410a406a body=4540 status=ok
// SIG undefined FUN_1410a406a(void)

ulonglong FUN_1410a406a(longlong *param_1,longlong param_2,longlong **param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong **pplVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  undefined7 uVar15;
  int iVar16;
  longlong *plVar17;
  bool bVar18;
  uint uVar19;
  ulonglong unaff_RDI;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 auStack_4b8 [32];
  longlong **local_498;
  longlong **local_490;
  char local_479;
  longlong *local_478;
  longlong local_470;
  longlong **local_468;
  undefined4 local_45c;
  longlong *local_458;
  longlong *local_450;
  longlong *local_448;
  undefined1 local_440 [24];
  longlong *local_428 [3];
  longlong *local_410;
  longlong *local_408;
  longlong local_3f0;
  longlong local_3d8;
  longlong *local_3c0;
  longlong *local_3b8;
  longlong *local_3b0;
  longlong *local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  undefined1 local_390 [24];
  longlong *local_378 [3];
  undefined4 local_360;
  undefined4 uStack_35c;
  longlong *local_358;
  longlong *local_350;
  longlong *local_348;
  longlong *plStack_340;
  longlong *local_338;
  longlong *plStack_330;
  longlong *local_328;
  int local_320;
  undefined4 local_31c;
  undefined8 local_318;
  longlong *local_310;
  char local_308;
  char local_307;
  longlong *local_300 [3];
  longlong local_2e8;
  longlong local_2d0;
  longlong **local_1e0;
  undefined4 local_1d8;
  undefined1 local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong local_1b8;
  undefined4 local_1b0;
  longlong *local_1a8;
  longlong *aplStack_1a0 [7];
  longlong *local_168;
  longlong *local_160 [28];
  longlong **local_80;
  ulonglong local_78;
  undefined1 local_70;
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  local_479 = param_4;
  local_468 = param_3;
  if (0 < *(int *)(param_3 + 0x26)) {
    pplVar11 = param_3 + 1;
    if ((longlong **)param_3[0x25] != (longlong **)0x0) {
      pplVar11 = (longlong **)param_3[0x25];
    }
    plVar17 = pplVar11[7];
    plVar21 = pplVar11[8];
    if (plVar21 == (longlong *)0x0) {
      aplStack_1a0[0] = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      aplStack_1a0[0] = plVar21;
    }
    local_1a8 = plVar17;
    cVar7 = (**(code **)(*param_1 + 0x118))(param_1,&local_1a8);
    plVar12 = aplStack_1a0[0];
    if (aplStack_1a0[0] != (longlong *)0x0) {
      LOCK();
      plVar3 = aplStack_1a0[0] + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*aplStack_1a0[0])(aplStack_1a0[0]);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    param_3 = local_468;
    uVar15 = (undefined7)(unaff_RDI >> 8);
    unaff_RDI = CONCAT71(uVar15,1);
    if (cVar7 == '\0') {
      uVar19 = *(uint *)(param_1 + 0x3d);
      if ((ulonglong)uVar19 == 0) {
        unaff_RDI = 0;
      }
      else {
        if ((int)uVar19 < 1) {
          local_1a8 = (longlong *)0x0;
          aplStack_1a0[0] = (longlong *)0x0;
        }
        else {
          lVar9 = (ulonglong)uVar19 * 0x10;
          local_1a8 = *(longlong **)(param_1[0x3c] + -0x10 + lVar9);
          aplStack_1a0[0] = *(longlong **)(param_1[0x3c] + -8 + lVar9);
          if (aplStack_1a0[0] != (longlong *)0x0) {
            LOCK();
            *(int *)(aplStack_1a0[0] + 1) = (int)aplStack_1a0[0][1] + 1;
            UNLOCK();
          }
        }
        cVar7 = FUN_146981260(plVar17,&local_1a8);
        plVar12 = aplStack_1a0[0];
        bVar18 = true;
        if (cVar7 == '\0') {
          plVar3 = *(longlong **)(param_1[0x3c] + (longlong)((int)param_1[0x3d] + -1) * 0x10);
          bVar18 = plVar3 == plVar17 && plVar3 != (longlong *)0x0;
        }
        if (aplStack_1a0[0] != (longlong *)0x0) {
          LOCK();
          plVar17 = aplStack_1a0[0] + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*aplStack_1a0[0])(aplStack_1a0[0]);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        unaff_RDI = CONCAT71(uVar15,bVar18) ^ 1;
      }
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar21 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
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
    if ((char)unaff_RDI != '\0') {
      uVar20 = 0;
      goto LAB_1410a4f50;
    }
  }
  plVar17 = (longlong *)param_1[0x82];
  uVar20 = CONCAT71((int7)(unaff_RDI >> 8),1);
  if (plVar17 == (longlong *)0x0) {
LAB_1410a4269:
    plVar17 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar17[1];
    do {
      if (iVar8 == 0) goto LAB_1410a4269;
      LOCK();
      iVar16 = (int)plVar17[1];
      bVar18 = iVar8 == iVar16;
      if (bVar18) {
        *(int *)(plVar17 + 1) = iVar8 + 1;
        iVar16 = iVar8;
      }
      iVar8 = iVar16;
      UNLOCK();
    } while (!bVar18);
    if ((longlong *)param_1[0x81] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x81] + 0x10))();
    }
    uVar20 = 0;
  }
  local_328 = (longlong *)0x0;
  iVar8 = *(int *)(param_2 + 0x78);
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  local_320 = iVar8;
  if (iVar8 == 0) {
    local_31c = 0;
  }
  else {
    FUN_1402d86b0(&local_328,iVar8,0);
    param_3 = local_468;
    FUN_14494310f(local_328,uVar4,iVar8);
  }
  local_318 = *(undefined8 *)(param_2 + 0x80);
  local_310 = *(longlong **)(param_2 + 0x88);
  if (local_310 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)local_310 + 0xc) = *(int *)((longlong)local_310 + 0xc) + 1;
    UNLOCK();
  }
  lVar9 = (longlong)local_320;
  local_45c = (undefined4)uVar20;
  local_470 = param_2;
  local_458 = plVar17;
  if ((lVar9 < 1) || (plVar17 = (longlong *)local_328[lVar9 * 2 + -1], plVar17 == (longlong *)0x0))
  {
    local_338 = (longlong *)0x0;
    plStack_330 = (longlong *)0x0;
  }
  else {
    plVar21 = (longlong *)local_328[lVar9 * 2 + -2];
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
    UNLOCK();
    local_338 = (longlong *)0x0;
    iVar8 = (int)plVar17[1];
    do {
      if (iVar8 == 0) {
        plStack_330 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar16 = (int)plVar17[1];
      bVar18 = iVar8 == iVar16;
      if (bVar18) {
        *(int *)(plVar17 + 1) = iVar8 + 1;
        iVar16 = iVar8;
      }
      iVar8 = iVar16;
      UNLOCK();
      plStack_330 = plVar17;
    } while (!bVar18);
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
    if (plStack_330 != (longlong *)0x0) {
      local_338 = plVar21;
    }
  }
  local_1a8 = (longlong *)CONCAT71(local_1a8._1_7_,DAT_14c96b238);
  local_80 = (longlong **)0x0;
  local_78 = 0x400000000;
  local_70 = 0;
  local_68 = 0;
  plStack_60 = (longlong *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  local_348 = (longlong *)0x0;
  plStack_340 = (longlong *)0x0;
  iVar8 = *(int *)(param_3 + 0x26);
  local_478 = param_1;
  if ((longlong)iVar8 < 1) {
LAB_1410a466c:
    iVar16 = *(int *)(local_470 + 0xa4) + 1;
    *(int *)(local_470 + 0xa4) = iVar16;
    uStack_35c = *(undefined4 *)(local_470 + 0x18);
    local_360 = CONCAT31(local_360._1_3_,local_479);
    iVar8 = *(int *)((longlong)param_1 + 0x60c);
    *(int *)((longlong)param_1 + 0x60c) = iVar8 + 1;
    uVar10 = (ulonglong)(int)param_1[0xc0];
    if ((longlong)uVar10 < 1) {
      *(int *)((longlong)param_1 + 0x60c) = iVar8;
      lVar9 = local_470;
    }
    else {
      param_1 = param_1 + 0xbf;
      bVar18 = false;
      param_3 = (longlong **)&local_360;
      do {
        lVar9 = uVar10 * 0x10 + -8;
        uVar20 = uVar10;
        while ((*(int *)(*param_1 + lVar9) != 0 &&
               (plVar17 = *(longlong **)(*param_1 + -8 + lVar9), plVar17 != (longlong *)0x0))) {
          local_490 = &local_348;
          local_498 = &local_1a8;
          cVar7 = (**(code **)(*plVar17 + 0x60))(plVar17,param_3,&local_328,&local_338);
          if (cVar7 == '\0') break;
          lVar9 = lVar9 + -0x10;
          bVar5 = uVar20 < 2;
          uVar20 = uVar20 - 1;
          if (bVar5) {
            iVar8 = *(int *)((longlong)local_478 + 0x60c) + -1;
            *(int *)((longlong)local_478 + 0x60c) = iVar8;
            uVar20 = 0;
            lVar9 = local_470;
            if (bVar18) goto LAB_1410a506c;
            goto LAB_1410a46bf;
          }
        }
        uVar10 = uVar20 - 1;
        bVar18 = true;
      } while (1 < uVar20);
      iVar8 = *(int *)((longlong)local_478 + 0x60c) + -1;
      *(int *)((longlong)local_478 + 0x60c) = iVar8;
LAB_1410a506c:
      uVar20 = 0;
      lVar9 = local_470;
      if (iVar8 < 1) {
        uVar19 = *(uint *)(local_478 + 0xc0);
        uVar20 = (ulonglong)uVar19;
        uVar13 = uVar19;
        if (0 < (int)uVar19) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar17 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar17 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar17 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            uVar13 = *(uint *)(local_478 + 0xc0);
          } while (iVar8 < (int)uVar13);
        }
        lVar9 = local_470;
        iVar8 = 2;
        if (2 < (int)(uVar13 * 2)) {
          iVar8 = uVar13 * 2;
        }
        *(int *)(local_478 + 0xc1) = iVar8;
        if ((iVar8 < (int)uVar19) && (*(uint *)((longlong)local_478 + 0x604) != uVar13)) {
          FUN_14045812c(param_1);
        }
      }
    }
LAB_1410a46bf:
    plVar17 = local_310;
    if (0 < local_320) {
      if (local_310 != (longlong *)0x0) {
        iVar8 = (int)local_310[1];
        do {
          if (iVar8 == 0) goto LAB_1410a470c;
          LOCK();
          iVar6 = (int)local_310[1];
          bVar18 = iVar8 == iVar6;
          if (bVar18) {
            *(int *)(local_310 + 1) = iVar8 + 1;
            iVar6 = iVar8;
          }
          iVar8 = iVar6;
          UNLOCK();
        } while (!bVar18);
        LOCK();
        plVar21 = local_310 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*local_310)(local_310);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
LAB_1410a470c:
        if (local_320 < 1) goto LAB_1410a47ba;
      }
      lVar14 = 0;
      param_3 = &local_328;
      do {
        plVar17 = (longlong *)local_328[lVar14 * 2 + 1];
        if (plVar17 != (longlong *)0x0) {
          iVar8 = (int)plVar17[1];
          do {
            if (iVar8 == 0) goto LAB_1410a47a6;
            LOCK();
            iVar6 = (int)plVar17[1];
            bVar18 = iVar8 == iVar6;
            if (bVar18) {
              *(int *)(plVar17 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar18);
          plVar21 = (longlong *)local_328[lVar14 * 2];
          if ((plVar21 != (longlong *)0x0) &&
             ((**(code **)(*plVar21 + 0x28))(plVar21,param_3,&local_1a8,&local_360),
             iVar16 != *(int *)(lVar9 + 0xa4))) goto LAB_1410a4e03;
          LOCK();
          plVar21 = plVar17 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
LAB_1410a47a6:
        lVar14 = lVar14 + 1;
      } while (lVar14 < local_320);
    }
LAB_1410a47ba:
    if ((int)local_78 < 1) {
LAB_1410a496c:
      uVar19 = 0;
      uVar10 = CONCAT71((int7)((ulonglong)param_3 >> 8),local_479);
      plVar21 = local_478;
      goto LAB_1410a4971;
    }
    pplVar11 = local_80 + 8;
    if (local_80 == (longlong **)0x0) {
      pplVar11 = local_160;
    }
    plVar17 = *pplVar11;
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      plVar21 = plVar17 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      LOCK();
      plVar21 = plVar17 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    lVar9 = local_470;
    if ((int)local_78 < 1) goto LAB_1410a496c;
    uVar20 = 0x40;
    lVar14 = 0;
    param_3 = &local_328;
    while( true ) {
      pplVar11 = local_80;
      if (local_80 == (longlong **)0x0) {
        pplVar11 = aplStack_1a0;
      }
      plVar21 = *(longlong **)((longlong)pplVar11 + (uVar20 - 8));
      plVar17 = *(longlong **)((longlong)pplVar11 + uVar20);
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
        UNLOCK();
      }
      if ((plVar21 != (longlong *)0x0) &&
         ((**(code **)(*plVar21 + 0x28))(plVar21,param_3,&local_1a8,&local_360),
         iVar16 != *(int *)(local_470 + 0xa4))) break;
      if (plVar17 != (longlong *)0x0) {
        LOCK();
        plVar21 = plVar17 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      lVar9 = local_470;
      plVar21 = local_478;
      lVar14 = lVar14 + 1;
      lVar22 = (longlong)(int)local_78;
      uVar20 = uVar20 + 0x48;
      if (lVar22 <= lVar14) goto code_r0x0001410a48e6;
    }
    if (plVar17 == (longlong *)0x0) goto LAB_1410a4e26;
LAB_1410a4e03:
    LOCK();
    plVar21 = plVar17 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 != 0) goto LAB_1410a4e26;
    (**(code **)*plVar17)(plVar17);
    uVar20 = 0;
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar8 = *piVar1;
    UNLOCK();
joined_r0x0001410a4e19:
    if (iVar8 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
  else {
    uVar20 = (ulonglong)(iVar8 + 1);
    lVar9 = (longlong)iVar8 * 0x48 + 0x40;
    do {
      lVar14 = lVar9;
      uVar19 = (int)uVar20 - 1;
      uVar20 = (ulonglong)uVar19;
      if ((int)uVar19 < 1) goto LAB_1410a466c;
      pplVar11 = (longlong **)param_3[0x25];
      if ((longlong **)param_3[0x25] == (longlong **)0x0) {
        pplVar11 = param_3 + 1;
      }
      cVar7 = (**(code **)(**(longlong **)((longlong)pplVar11 + lVar14 + -0x50) + 400))();
      plVar17 = plStack_340;
      lVar9 = lVar14 + -0x48;
    } while (cVar7 == '\0');
    plVar21 = *(longlong **)((longlong)pplVar11 + lVar14 + -0x50);
    if ((local_338 == (longlong *)0x0) || (local_338 != plVar21)) {
      plVar12 = *(longlong **)((longlong)pplVar11 + lVar14 + -0x48);
      local_348 = plVar21;
      if (plVar12 == (longlong *)0x0) {
        if (plStack_340 != (longlong *)0x0) {
          plStack_340 = (longlong *)0x0;
LAB_1410a4497:
          LOCK();
          plVar21 = plVar17 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
joined_r0x0001410a44c9:
            if (iVar8 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
          goto LAB_1410a44d5;
        }
LAB_1410a4508:
        local_350 = (longlong *)0x0;
        bVar18 = true;
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        if (plVar12 == plStack_340) {
          LOCK();
          plVar17 = plVar12 + 1;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)*plVar17 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
            plVar17 = plVar12;
            goto joined_r0x0001410a44c9;
          }
LAB_1410a44d5:
          if (plStack_340 == (longlong *)0x0) goto LAB_1410a4508;
        }
        else {
          bVar18 = plStack_340 != (longlong *)0x0;
          plStack_340 = plVar12;
          if (bVar18) goto LAB_1410a4497;
        }
        LOCK();
        *(int *)(plStack_340 + 1) = (int)plStack_340[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plStack_340 + 1) = (int)plStack_340[1] + 1;
        UNLOCK();
        bVar18 = false;
        local_350 = plStack_340;
      }
      plVar17 = local_350;
      local_358 = local_348;
      FUN_140d95bee(local_468,&local_308,&local_358);
      local_1a8 = (longlong *)CONCAT71(local_1a8._1_7_,local_308);
      FUN_1400e223c(aplStack_1a0,local_300);
      plVar12 = plStack_60;
      plVar21 = local_1c0;
      local_70 = local_1d0;
      local_68 = local_1c8;
      local_1c8 = 0;
      if (local_1c0 != plStack_60) {
        local_1c0 = (longlong *)0x0;
        plStack_60 = plVar21;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar21 = plVar12 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
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
      }
      FUN_1400e21ec(&local_58,&local_1b8);
      FUN_1447fa2ac(local_1b8,local_1b0);
      if (local_1b8 != 0) {
        FUN_1400020a8();
      }
      plVar21 = local_1c0;
      if (local_1c0 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_1c0 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_1c0)(local_1c0);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      param_3 = local_300;
      if (local_1e0 != (longlong **)0x0) {
        param_3 = local_1e0;
      }
      FUN_1447157bd(param_3,local_1d8);
      if (local_1e0 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      param_1 = local_478;
      if (!bVar18) {
        LOCK();
        plVar21 = plVar17 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      goto LAB_1410a466c;
    }
LAB_1410a4e26:
    uVar20 = 0;
  }
  goto LAB_1410a4e28;
code_r0x0001410a48e6:
  if ((int)local_78 < 1) goto LAB_1410a496c;
  uVar10 = CONCAT71((int7)((ulonglong)param_3 >> 8),local_479);
  uVar15 = (undefined7)((ulonglong)&local_360 >> 8);
  uVar19 = (uint)CONCAT71(uVar15,local_479 == '\x01');
  uVar20 = lVar22 * 0x48 - 0x10;
  uVar23 = lVar22 + 1;
  do {
    pplVar11 = local_80;
    if (local_80 == (longlong **)0x0) {
      pplVar11 = aplStack_1a0;
    }
    (**(code **)(**(longlong **)((longlong)pplVar11 + uVar20) + 0x118))
              (*(longlong **)((longlong)pplVar11 + uVar20),&local_308,uVar10 & 0xffffffff);
    if (local_307 == '\x01') {
      uVar19 = (uint)CONCAT71(uVar15,local_308);
      break;
    }
    uVar20 = uVar20 - 0x48;
    uVar23 = uVar23 - 1;
  } while (1 < uVar23);
LAB_1410a4971:
  FUN_141720814(lVar9,&local_1a8,uVar10 & 0xffffffff,uVar19 & 0xffffff01);
  plVar17 = local_310;
  if (local_338 != (longlong *)0x0) {
    if (local_310 != (longlong *)0x0) {
      iVar8 = (int)local_310[1];
      do {
        if (iVar8 == 0) goto LAB_1410a49d9;
        LOCK();
        iVar16 = (int)local_310[1];
        bVar18 = iVar8 == iVar16;
        if (bVar18) {
          *(int *)(local_310 + 1) = iVar8 + 1;
          iVar16 = iVar8;
        }
        iVar8 = iVar16;
        UNLOCK();
      } while (!bVar18);
      LOCK();
      plVar12 = local_310 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_310)(local_310);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
LAB_1410a49d9:
    (**(code **)(*local_338 + 0x20))(local_338,&local_360);
    lVar14 = plVar21[0x19];
    plVar17 = (longlong *)plVar21[0x1a];
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
    }
    uVar2 = *(undefined4 *)(lVar9 + 0x18);
    FUN_14171d2aa(local_378,0);
    FUN_14171d2aa(local_390,1);
    local_3a0 = local_338;
    local_398 = plStack_330;
    if (plStack_330 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_330 + 1) = (int)plStack_330[1] + 1;
      UNLOCK();
    }
    local_490 = (longlong **)CONCAT44(local_490._4_4_,uVar2);
    local_498 = local_378;
    FUN_14171f2ba(&local_308,&local_3a0,0,local_390);
    FUN_1428785ec(lVar14,&local_308);
    if (local_2d0 != 0) {
      FUN_1400020a8();
    }
    plVar21 = local_478;
    if (local_2e8 != 0) {
      FUN_1400020a8();
    }
    if (local_300[0] != (longlong *)0x0) {
      LOCK();
      plVar12 = local_300[0] + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_300[0])(local_300[0]);
        LOCK();
        piVar1 = (int *)((longlong)local_300[0] + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_300[0] + 0x10))(local_300[0]);
        }
      }
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar17 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if (local_348 == (longlong *)0x0) {
    uVar20 = CONCAT71((int7)(uVar20 >> 8),1);
  }
  else {
    pplVar11 = local_80 + 7;
    if (local_80 == (longlong **)0x0) {
      pplVar11 = &local_168;
    }
    plVar12 = *pplVar11;
    pplVar11 = local_160;
    if (local_80 != (longlong **)0x0) {
      pplVar11 = local_80 + 8;
    }
    plVar17 = *pplVar11;
    if (plVar17 == (longlong *)0x0) {
      plVar21[0x3a] = (longlong)plVar12;
      plVar12 = (longlong *)plVar21[0x3b];
      if (plVar12 != (longlong *)0x0) {
LAB_1410a4ba7:
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
        goto LAB_1410a4bb3;
      }
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar17 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      plVar3 = plVar17 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
      plVar21[0x3a] = (longlong)plVar12;
      if ((longlong *)plVar21[0x3b] != plVar17) {
        LOCK();
        *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
        UNLOCK();
        plVar12 = (longlong *)plVar21[0x3b];
        if (plVar12 != (longlong *)0x0) goto LAB_1410a4ba7;
LAB_1410a4bb3:
        plVar21[0x3b] = (longlong)plVar17;
      }
    }
    pplVar11 = aplStack_1a0;
    if (local_80 != (longlong **)0x0) {
      pplVar11 = local_80;
    }
    (**(code **)(*local_348 + 0x18))
              (local_348,&local_308,pplVar11 + (longlong)((int)local_78 + -1) * 9,&local_360);
    if (local_308 == '\x01') {
      local_490 = (longlong **)CONCAT44(local_490._4_4_,*(undefined4 *)(lVar9 + 0x18));
      local_498 = (longlong **)0x0;
      FUN_1402c1d72(plVar21,local_468,&local_308,0);
    }
    FUN_1405df8b8(plVar21,&local_410,*(undefined4 *)(lVar9 + 0x18));
    local_3b0 = local_348;
    local_3a8 = plStack_340;
    if (plStack_340 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_340 + 1) = (int)plStack_340[1] + 1;
      UNLOCK();
    }
    local_3c0 = local_338;
    local_3b8 = plStack_330;
    if (plStack_330 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_330 + 1) = (int)plStack_330[1] + 1;
      UNLOCK();
    }
    (**(code **)(*local_410 + 0x30))(local_410,&local_3c0,&local_3b0,CONCAT44(uStack_35c,local_360))
    ;
    plVar12 = local_408;
    if (local_408 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_408 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_408)(local_408);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    lVar9 = plVar21[0x19];
    plVar21 = (longlong *)plVar21[0x1a];
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
    }
    uVar2 = *(undefined4 *)(local_470 + 0x18);
    FUN_14171d2aa(local_428,1);
    FUN_14171d2aa(local_440,0);
    local_450 = local_348;
    local_448 = plStack_340;
    if (plStack_340 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_340 + 1) = (int)plStack_340[1] + 1;
      UNLOCK();
    }
    local_490 = (longlong **)CONCAT44(local_490._4_4_,uVar2);
    local_498 = local_428;
    FUN_14171f2ba(&local_410,&local_450,0,local_440);
    FUN_1428785ec(lVar9,&local_410);
    if (local_3d8 != 0) {
      FUN_1400020a8();
    }
    if (local_3f0 != 0) {
      FUN_1400020a8();
    }
    if (local_408 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_408 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_408)(local_408);
        LOCK();
        piVar1 = (int *)((longlong)local_408 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_408 + 0x10))(local_408);
        }
      }
    }
    if (plVar21 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar21 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    FUN_14493db24(&local_308);
    uVar15 = (undefined7)((ulonglong)local_408 >> 8);
    uVar20 = CONCAT71(uVar15,1);
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar21 = plVar17 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar1 = (int *)((longlong)plVar17 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        uVar20 = CONCAT71(uVar15,1);
        goto joined_r0x0001410a4e19;
      }
    }
  }
LAB_1410a4e28:
  plVar17 = plStack_340;
  if (plStack_340 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_340 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plStack_340)(plStack_340);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  FUN_1447fa2ac(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar17 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar21 = plStack_60 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  pplVar11 = local_80;
  if (local_80 == (longlong **)0x0) {
    pplVar11 = aplStack_1a0;
  }
  FUN_1447157bd(pplVar11,local_78 & 0xffffffff);
  if (local_80 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  plVar21 = plStack_330;
  plVar17 = local_458;
  if (plStack_330 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_330 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_330)(plStack_330);
      LOCK();
      piVar1 = (int *)((longlong)plVar21 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if (local_310 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_310 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_310 + 0x10))();
    }
  }
  FUN_1447de57f(local_328,local_320);
  if (local_328 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((char)local_45c == '\0') {
    LOCK();
    plVar21 = plVar17 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
LAB_1410a4f50:
  if ((local_48 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 1410a5228 FUN_1410a5228 body=315 status=ok
// SIG undefined FUN_1410a5228(void)

longlong * FUN_1410a5228(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined1 local_29;
  undefined1 local_28 [8];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844970) {
    FUN_144b3d300(&DAT_14c844970);
    if (DAT_14c844970 == -1) {
      FUN_140234344(local_28);
      local_29 = 1;
      FUN_140e82300();
      local_40 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        (**(code **)(*DAT_14c844840 + 8))();
      }
      local_38 = 0;
      DAT_14c844968 = FUN_1457f2f7c(&local_40,&local_29,local_28);
      DAT_14c844960 = DAT_14c844968 + 0x10;
      if (local_40 != (longlong *)0x0) {
        (**(code **)(*local_40 + 0x10))();
      }
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
      atexit(FUN_142760d5e);
      _Init_thread_footer(&DAT_14c844970);
    }
  }
  *param_1 = DAT_14c844960;
  lVar3 = DAT_14c844968;
  param_1[1] = DAT_14c844968;
  if (lVar3 != 0) {
    LOCK();
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a5372 FUN_1410a5372 body=141 status=ok
// SIG undefined FUN_1410a5372(void)

undefined8 * FUN_1410a5372(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b240ba0;
  FUN_1410a53ff(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140b47c46(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1410a53ff FUN_1410a53ff body=152 status=ok
// SIG undefined FUN_1410a53ff(void)

void FUN_1410a53ff(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b240a30;
    FUN_140b47c46(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    plVar3 = (longlong *)param_1[9];
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
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14b23dd30;
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0xd;
  }
  return;
}



// FUNCTION 1410a549c FUN_1410a549c body=221 status=ok
// SIG undefined FUN_1410a549c(void)

longlong FUN_1410a549c(void)

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
  if (DAT_14cad5568 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1434b5846;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a492b7;
    local_40 = &LAB_141071f01;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"DataTable",&DAT_14cad5568,&DAT_147a492b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad5568;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a5580 FUN_1410a5580 body=221 status=ok
// SIG undefined FUN_1410a5580(void)

longlong FUN_1410a5580(void)

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
  if (DAT_14cb4d628 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14851b111;
    local_40 = FUN_146494f28;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PreviewMesh",&DAT_14cb4d628,&DAT_14851b110);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4d628;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a565e FUN_1410a565e body=471 status=ok
// SIG undefined FUN_1410a565e(void)

void FUN_1410a565e(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
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
    uVar15 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
  }
  plVar7 = local_60;
  iVar16 = (int)local_68;
  uVar14 = (uint)local_58;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_1410a57a1;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_1410a57a1:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a5836 FUN_1410a5836 body=85 status=ok
// SIG undefined FUN_1410a5836(void)

void FUN_1410a5836(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    puVar2 = (undefined8 *)plVar1[5];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
    if (plVar1[2] != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 1410a588c FUN_1410a588c body=522 status=ok
// SIG undefined FUN_1410a588c(void)

void FUN_1410a588c(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
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
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
  }
  plVar6 = local_60;
  iVar15 = (int)local_68;
  uVar13 = (uint)local_58;
  iVar8 = local_58._4_4_;
  iVar11 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar12 = *param_1 + (longlong)iVar8 * 0x20;
      plVar10 = (longlong *)(lVar12 + 8);
      if (*(int *)(lVar12 + 0x10) == 0) {
LAB_1410a592a:
        if (*plVar10 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar4 = (undefined8 *)*plVar10;
        if (puVar4 != (undefined8 *)0x0) {
          (**(code **)*puVar4)(puVar4,0);
          FUN_1446efa72(plVar10,0,0,0x10);
          *(undefined4 *)(lVar12 + 0x10) = 0;
          goto LAB_1410a592a;
        }
      }
      uVar13 = uVar13 & ~(uint)uVar14;
      plVar10 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar10 = plVar6;
      }
      iVar3 = (int)plVar6[3];
      lVar12 = (longlong)iVar15;
      uVar7 = *(uint *)((longlong)plVar10 + lVar12 * 4) & uVar13;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar15) {
          iVar5 = iVar15;
        }
        if (iVar8 <= iVar15) break;
        lVar9 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)((longlong)plVar10 + lVar9 * 4 + lVar12 * 4 + 4);
          if (uVar7 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar12 == lVar9) goto LAB_1410a5a13;
        }
        iVar15 = iVar15 + (int)lVar9 + 1;
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar7 & uVar7);
      uVar2 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_1410a5a13:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a5a98 FUN_1410a5a98 body=45 status=ok
// SIG undefined FUN_1410a5a98(void)

undefined8 FUN_1410a5a98(undefined8 param_1,int param_2)

{
  FUN_1410a5ac6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x6e8);
  }
  return param_1;
}



// FUNCTION 1410a5ac6 FUN_1410a5ac6 body=491 status=ok
// SIG undefined FUN_1410a5ac6(void)

void FUN_1410a5ac6(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b485360;
  plVar1 = param_1 + 0x3c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x40) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3f)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x34;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x37)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x37)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
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
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1410a5cb2 FUN_1410a5cb2 body=131 status=ok
// SIG undefined FUN_1410a5cb2(void)

void FUN_1410a5cb2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b47ac00;
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_1410a5d35(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14b47ae80;
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  FUN_1410ecf08(param_1);
  return;
}



// FUNCTION 1410a5d35 FUN_1410a5d35 body=38 status=ok
// SIG undefined FUN_1410a5d35(void)

void FUN_1410a5d35(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1407ccd86(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1410a5d5c FUN_1410a5d5c body=129 status=ok
// SIG undefined FUN_1410a5d5c(void)

void FUN_1410a5d5c(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xf62) = 1;
  (**(code **)(*param_1 + 0x38))(param_1,0);
  if ((*(char *)((longlong)param_1 + 0xf64) == '\0') &&
     (((char)param_1[-0x52] == '\x03' || ((*(byte *)(param_1 + -0x75) & 1) != 0)))) {
    *(undefined1 *)((longlong)param_1 + 0xf64) = 1;
    (**(code **)(param_1[-0x81] + 0x688))(param_1 + -0x81);
    (**(code **)(param_1[-0x81] + 0x690))(param_1 + -0x81);
  }
  *(undefined1 *)((longlong)param_1 + 0xf61) = 1;
  FUN_1447cd2ec(param_1 + 0x1e6,0);
  return;
}



// FUNCTION 1410a5dfc FUN_1410a5dfc body=162 status=ok
// SIG undefined FUN_1410a5dfc(void)

void FUN_1410a5dfc(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if ((param_1[0x10] == 0) || (uVar2 = *(uint *)(param_1 + 0x20), (uVar2 & 1) == 0)) {
    uVar2 = 0x80;
    if (param_1[0x4f] == 0) {
      uVar2 = (uint)(param_1[0x50] != 0) << 7;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xffffff7f | uVar2;
    return;
  }
  uVar3 = uVar2 & 0xffffff7f;
  uVar4 = (ulonglong)uVar3;
  *(uint *)(param_1 + 0x20) = uVar3;
  if ((uVar2 & 0x20) == 0) {
    cVar1 = (char)param_1[99];
    uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar1);
    if ((cVar1 == *(char *)((longlong)param_1 + 0x107)) && (cVar1 == (char)param_1[0x23])) {
      return;
    }
  }
  if ((param_1[0x4f] == 0) && (param_1[0x50] == 0)) {
    if ((uVar2 & 0x10) == 0) {
      return;
    }
    FUN_14028ef70(param_1,CONCAT71((int7)(uVar4 >> 8),1));
    return;
  }
  if ((uVar2 & 0x10) != 0) {
    FUN_14028e526();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001410a5e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3d8))();
  return;
}



// FUNCTION 1410a5e9e FUN_1410a5e9e body=63 status=ok
// SIG undefined FUN_1410a5e9e(void)

longlong FUN_1410a5e9e(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_140ce13fe();
  if (lVar1 != 0) {
    lVar2 = FUN_1410a5ede();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1410a5ede FUN_1410a5ede body=228 status=ok
// SIG undefined FUN_1410a5ede(void)

longlong FUN_1410a5ede(void)

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
  if (DAT_14cba71a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459942e8;
    local_38 = &LAB_148bf1a61;
    local_40 = FUN_145c291ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 600;
    FUN_14081cfa3(L"/Script/OakGame",L"OakAudioUserSettings",&DAT_14cba71a8,&DAT_148bf1a60);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba71a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a5fc4 FUN_1410a5fc4 body=297 status=ok
// SIG undefined FUN_1410a5fc4(void)

undefined8 FUN_1410a5fc4(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1410a60e6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410a60e6;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1410a60e6:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410a6091;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1410a6091;
    }
  }
  uVar6 = 0;
LAB_1410a6091:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a60ee FUN_1410a60ee body=333 status=ok
// SIG undefined FUN_1410a60ee(void)

void FUN_1410a60ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar2 = FUN_140a30c40(param_3);
  if (cVar2 == '\0') goto LAB_1410a6153;
  lVar3 = FUN_140a489cc(param_3);
  if (lVar3 == 0) goto LAB_1410a6153;
  lVar4 = FUN_1410a623c();
  lVar5 = *(longlong *)(lVar4 + 0x58);
  if (lVar5 == 0) {
    uVar6 = FUN_145764ed6();
    lVar5 = FUN_14477b664(uVar6);
    *(longlong *)(lVar4 + 0x58) = lVar5;
  }
  lVar7 = *(longlong *)(lVar4 + 0x60);
  if (lVar7 == 0) {
    if ((lVar5 == 0) || (*(longlong *)(lVar4 + 0x50) == 0)) goto LAB_1410a6153;
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_1410a6238:
      lVar7 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))();
      if (cVar2 == '\0') goto LAB_1410a6238;
      uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar4 + 0x50));
    }
    *(longlong *)(lVar4 + 0x60) = lVar7;
  }
  if (lVar3 == lVar7) {
    FUN_1410a6380(param_3,local_70);
    FUN_14000bbd8(local_60,local_70,0);
    FUN_1410a6474(param_1,local_60);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_1410a6153:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a623c FUN_1410a623c body=323 status=ok
// SIG undefined FUN_1410a623c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1410a623c(void)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbd1070 == (longlong *)0x0) {
    _DAT_14cbd1088 = 0;
    DAT_14cbd1080 = 0;
    plVar2 = &DAT_14cbd1080;
    _DAT_14cbd1090 = 0xffffffff;
    _DAT_14cbd1078 = &PTR_FUN_14b775460;
    _DAT_14cbd1098 = 0;
    uRam000000014cbd10a0 = 0;
    _DAT_14cbd10a8 = 0;
    uRam000000014cbd10b0 = 0;
    _DAT_14cbd10b8 = 0;
    uRam000000014cbd10c0 = 0;
    _DAT_14cbd10c8 = 0;
    uRam000000014cbd10d0 = 0;
    _DAT_14cbd10d8 = 0;
    DAT_14cbd1070 = (longlong *)&DAT_14cbd1078;
LAB_1410a626d:
    plVar4 = DAT_14cbd1070;
    if (*plVar2 == 0) goto LAB_1410a6321;
    cVar1 = FUN_1449e3c20(DAT_14cbd1070);
    if (cVar1 == '\0') goto LAB_1410a6287;
  }
  else {
    plVar2 = DAT_14cbd1070 + 1;
    if ((char)DAT_14cbd1070[2] == '\0') goto LAB_1410a626d;
    if ((char)DAT_14cbd1070[2] == '\x02') {
      plVar2 = (longlong *)(*plVar2 + 0x30);
      goto LAB_1410a626d;
    }
LAB_1410a6321:
    plVar4 = DAT_14cbd1070;
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_1410a6287;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_oak_globals_progression",0);
    FUN_140024ada(&local_48,plVar4);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar4 + 0x20))(plVar4);
LAB_1410a6287:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a6380 FUN_1410a6380 body=169 status=ok
// SIG undefined FUN_1410a6380(void)

undefined8 FUN_1410a6380(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 == 0) {
    uVar4 = FUN_140e2014e();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x110) = lVar3;
  }
  if (((*(longlong *)(param_1 + 0x118) != 0) || (lVar3 == 0)) ||
     (*(longlong *)(param_1 + 0x108) == 0)) goto LAB_1410a63a7;
  plVar1 = *(longlong **)(lVar3 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_1410a6425:
    uVar4 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_1410a6425;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x108));
  }
  *(undefined8 *)(param_1 + 0x118) = uVar4;
LAB_1410a63a7:
  FUN_1410a642a(param_2);
  return param_2;
}



// FUNCTION 1410a642a FUN_1410a642a body=74 status=ok
// SIG undefined FUN_1410a642a(void)

undefined8 * FUN_1410a642a(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  
  if (param_2 == 0) {
    FUN_140056680(param_1,&DAT_149e01fe8);
  }
  else {
    puVar1 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_2 + 8);
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_1400b2348(puVar1,param_1,1);
  }
  return param_1;
}



// FUNCTION 1410a6474 FUN_1410a6474 body=186 status=ok
// SIG undefined FUN_1410a6474(void)

void FUN_1410a6474(undefined8 param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (((*param_2 != 0) && (param_2[1] != 0)) && (*param_2 != DAT_14c948000)) {
    plVar4 = (longlong *)FUN_140f566ec();
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      if (lVar5 != 0) {
        lVar6 = FUN_140b3986e(param_2);
        if ((lVar6 != 0) && (iVar1 = *(int *)(lVar5 + 0xb8), (longlong)iVar1 != 0)) {
          lVar2 = *(longlong *)(lVar5 + 0xb0);
          lVar8 = 0;
          do {
            lVar3 = *(longlong *)(lVar2 + lVar8);
            if (lVar3 != 0) {
              lVar7 = FUN_1401cd362(lVar3);
              if (lVar7 == lVar6) {
                FUN_1410a652e(param_1,lVar5,lVar3);
                return;
              }
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)iVar1 * 8 != lVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1410a652e FUN_1410a652e body=2501 status=ok
// SIG undefined FUN_1410a652e(void)

void FUN_1410a652e(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined2 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  code **local_150;
  undefined1 *local_148;
  code *local_140;
  ulonglong local_138;
  longlong *local_130;
  PSRWLOCK local_128;
  longlong local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  ulonglong uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int iStack_c8;
  int iStack_c4;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  char cStack_b8;
  undefined8 local_b4;
  int local_ac;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined8 local_88;
  longlong *local_80;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((*(int *)(param_1 + 0x44) == 0) ||
     (local_110 = (longlong *)FUN_140f566ec(), local_110 == (longlong *)0x0)) goto LAB_1410a6eb1;
  FUN_1449027d0(param_1,&local_f0);
  plVar11 = *(longlong **)(local_f0 + 0x500);
  local_128 = (PSRWLOCK)(plVar11 + 4);
  AcquireSRWLockExclusive(local_128);
  plVar5 = uStack_e8;
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  local_130 = plVar11;
  if (uStack_e8 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_e8 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*uStack_e8)(uStack_e8);
      LOCK();
      piVar13 = (int *)((longlong)plVar5 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  plVar11 = local_130;
  iVar7 = *(int *)((longlong)local_130 + 0xc);
  FUN_1414bf41f(*local_130,(int)local_130[1]);
  *(undefined4 *)(plVar11 + 1) = 0;
  if ((iVar7 < 0) && (*(int *)((longlong)plVar11 + 0xc) != 0)) {
    FUN_148e3d0ec(plVar11);
  }
  uVar9 = FUN_140a489cc(param_3);
  iVar7 = FUN_140a4890a(param_2,uVar9);
  if (iVar7 == (int)plVar11[2]) {
    if (*(int *)((longlong)plVar11 + 0x14) == 0) {
      iVar16 = 1;
      goto LAB_1410a6639;
    }
  }
  else {
    iVar16 = *(int *)((longlong)plVar11 + 0x14) + 1;
LAB_1410a6639:
    *(int *)(plVar11 + 2) = iVar7;
    *(int *)((longlong)plVar11 + 0x14) = iVar16;
  }
  if ((longlong)*(int *)(param_3 + 0x150) != 0) {
    lVar23 = *(longlong *)(param_3 + 0x148);
    local_118 = (longlong)*(int *)(param_3 + 0x150) * 0x88 + lVar23;
    param_1 = param_1 + 0x30;
    local_120 = param_1;
    do {
      lVar12 = *(longlong *)(lVar23 + 0x50);
      if (lVar12 != 0) {
        local_f0 = 0;
        local_b4 = 0;
        local_ac = 0;
        uStack_c0 = 0;
        uStack_bf = 0;
        cStack_b8 = '\0';
        local_d0 = 0;
        iStack_c8 = 0;
        iStack_c4 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        lVar10 = FUN_14426d286(lVar12);
        plVar11 = (longlong *)0x0;
        if (lVar10 != 0) {
          plVar11 = (longlong *)FUN_14426d286(lVar12);
          uVar9 = FUN_1418d0ea2();
          cVar6 = FUN_1448093f4(plVar11,uVar9);
          if (cVar6 == '\0') {
            plVar11 = (longlong *)0x0;
          }
        }
        local_f0 = *(longlong *)(lVar23 + 0x48);
        uStack_e8 = plVar11;
        iVar7 = FUN_1413d6430(lVar23);
        plVar11 = uStack_e8;
        if (local_e0._4_4_ == 0 || iVar7 != (int)local_e0) {
          local_e0 = CONCAT44(local_e0._4_4_ + 1,iVar7);
        }
        iVar16 = 0;
        iVar7 = 0;
        if (((uStack_e8 != (longlong *)0x0) &&
            (iVar7 = iVar16, *(char *)((longlong)uStack_e8 + 0x3e) == '\0')) &&
           (lVar12 = FUN_1400d7050(param_1), lVar12 != 0)) {
          if (DAT_14cbadd90 == 0) {
            local_90 = FUN_141030f22;
            local_140 = FUN_14081d0ea;
            local_148 = &LAB_1459f2e4c;
            local_150 = &local_90;
            local_158 = &LAB_148c39de3;
            local_160 = &LAB_1457a9eb2;
            local_168 = &DAT_149e063b2;
            local_170 = 0;
            local_178 = 0x10000004;
            local_180 = 0x10;
            local_188 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            if (*(char *)((longlong)plVar11 + 0x39) == '\x01') {
              piVar13 = (int *)((ulonglong)*(byte *)((longlong)plVar11 + 0x3a) * 0x40 + lVar12 +
                               0x2608);
            }
            else {
              if (*(char *)((longlong)plVar11 + 0x3b) != '\x01') {
LAB_1410a67c9:
                if (*(char *)((longlong)plVar11 + 0x3d) == '\x01') {
                  lVar10 = FUN_14011c349();
                  local_90 = *(code **)(lVar10 + 0x60);
                  lVar10 = FUN_140254f32(lVar12,&local_90);
                  if (lVar10 != 0) goto LAB_1410a6844;
                }
                if (*(char *)((longlong)plVar11 + 0x3c) == '\x01') {
                  lVar12 = FUN_1402a1246(lVar12);
                  if ((lVar12 != 0) && (*(longlong *)(lVar12 + 0xf78) != 0)) {
                    piVar13 = (int *)(*(longlong *)(lVar12 + 0xf78) + 0x34);
                    goto LAB_1410a684a;
                  }
                }
                else {
                  iVar7 = -1;
                }
                goto LAB_1410a684c;
              }
              lVar10 = FUN_14011c349();
              local_90 = *(code **)(lVar10 + 0x48);
              lVar10 = FUN_140254f32(lVar12,&local_90);
              if (lVar10 == 0) goto LAB_1410a67c9;
LAB_1410a6844:
              piVar13 = (int *)(lVar10 + 0x94);
            }
LAB_1410a684a:
            iVar7 = *piVar13;
          }
        }
LAB_1410a684c:
        if (iStack_c4 == 0 || iVar7 != iStack_c8) {
          iStack_c4 = iStack_c4 + 1;
          iStack_c8 = iVar7;
        }
        iVar7 = *(int *)(lVar23 + 0x68);
        if (uStack_d8._4_4_ == 0 || iVar7 != (int)uStack_d8) {
          uStack_d8 = CONCAT44(uStack_d8._4_4_ + 1,iVar7);
        }
        if (iVar7 < 1) {
          local_138 = 0;
          uVar9 = 0;
        }
        else {
          uVar22 = 0;
          uVar9 = 0;
          local_138 = 0;
          do {
            lVar12 = *(longlong *)(*(longlong *)(lVar23 + 0x60) + uVar22 * 8);
            if (lVar12 != 0) {
              uVar3 = *(undefined8 *)(lVar12 + 0x48);
              uVar2 = *(undefined1 *)(lVar12 + 0x91);
              plVar11 = (longlong *)FUN_143e0b062(lVar12);
              if (plVar11 == (longlong *)0x0) {
                iVar7 = 0;
                uVar21 = 0;
              }
              else {
                local_108 = 0;
                uStack_100 = 0;
                local_68 = 0;
                local_90 = (code *)CONCAT71(local_90._1_7_,1);
                local_88 = (**(code **)(*local_110 + 8))();
                if (local_68 != 0) {
                  FUN_1417398fc(&DAT_14c9a3da0,local_68 + -1,1);
                  local_68 = 0;
                }
                (**(code **)(*plVar11 + 0x18))(plVar11,&local_90,&local_108);
                lVar10 = DAT_14c9a3da0;
                if ((longlong)local_68 != 0) {
                  lVar17 = (longlong)local_68 + -1;
                  lVar19 = lVar17 * 0x10;
                  FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar19),
                                *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar19));
                  if (*(longlong *)(lVar10 + lVar19) != 0) {
                    FUN_1400020a8();
                  }
                  lVar10 = DAT_14c9a3da0;
                  iVar7 = (int)lVar17;
                  if (DAT_14c9a3dd4 != 0) {
                    *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
                  }
                  *(undefined4 *)(lVar10 + lVar19) = 0xffffffff;
                  iVar16 = -1;
                  if (0 < DAT_14c9a3dd4) {
                    iVar16 = DAT_14c9a3dd0;
                  }
                  *(int *)(lVar10 + 4 + lVar19) = iVar16;
                  DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                  puVar15 = DAT_14c9a3dc0;
                  if (DAT_14c9a3dc0 == (undefined *)0x0) {
                    puVar15 = &DAT_14c9a3db0;
                  }
                  iVar16 = iVar7 + 0x1f;
                  if (-1 < iVar7) {
                    iVar16 = iVar7;
                  }
                  bVar4 = (byte)lVar17 & 0x1f;
                  DAT_14c9a3dd0 = iVar7;
                  *(uint *)(puVar15 + (longlong)(iVar16 >> 5) * 4) =
                       *(uint *)(puVar15 + (longlong)(iVar16 >> 5) * 4) &
                       (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
                  local_68 = 0;
                }
                if (((char)local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
                  LOCK();
                  piVar13 = (int *)((longlong)local_80 + 0xc);
                  *piVar13 = *piVar13 + -1;
                  UNLOCK();
                  if (*piVar13 == 0) {
                    (**(code **)(*local_80 + 0x10))();
                  }
                }
                if ((int)uStack_100 == 0) {
                  uVar18 = 0;
                  iVar7 = 0;
                  uVar21 = 0;
                }
                else {
                  iVar7 = FUN_1405d5f74(local_108);
                  iVar16 = iVar7;
                  if (*(char *)(lVar12 + 0x91) == '\0') {
                    iVar16 = 0;
                  }
                  local_138 = (ulonglong)(uint)((int)local_138 + iVar16);
                  uVar21 = 1;
                  uVar18 = uStack_100 & 0xffffffff;
                }
                FUN_1401b95a9(local_108,uVar18);
                if (local_108 != 0) {
                  FUN_1400020a8();
                }
              }
              lVar10 = FUN_14426d31e(*(undefined8 *)(lVar12 + 0x50));
              if (lVar10 == 0) {
                uVar9 = 0;
              }
              else {
                uVar9 = FUN_14426d31e(*(undefined8 *)(lVar12 + 0x50));
                uVar14 = FUN_14036a63e();
                cVar6 = FUN_1448093f4(uVar9,uVar14);
                if (cVar6 == '\0') {
                  uVar9 = 0;
                }
              }
              uVar18 = uStack_98;
              if (uVar22 == (local_e0 & 0xffffffff)) {
                lVar12 = *(longlong *)(lVar12 + 0x50);
                if (lVar12 == 0) {
                  iVar16 = 0;
                }
                else if (*(char *)(lVar12 + 8) == '\x01') {
                  iVar16 = *(int *)(lVar12 + 0xc);
                }
                else {
                  iVar16 = 0x7fffffff;
                }
                if (local_d0._4_4_ == 0 || iVar16 != (int)local_d0) {
                  local_d0 = CONCAT44(local_d0._4_4_ + 1,iVar16);
                }
              }
              lVar12 = (longlong)(int)uStack_98;
              uVar8 = (int)uStack_98 + 1;
              uStack_98 = CONCAT44(uStack_98._4_4_,uVar8);
              if (uStack_98._4_4_ < uVar8) {
                FUN_1418f73e0(&local_a0,uVar18 & 0xffffffff);
              }
              lVar12 = lVar12 * 0x20;
              *(undefined8 *)(local_a0 + lVar12) = uVar3;
              *(undefined1 *)(local_a0 + 8 + lVar12) = uVar2;
              *(undefined4 *)(local_a0 + 0xc + lVar12) = 1;
              *(int *)(local_a0 + 0x10 + lVar12) = iVar7;
              *(undefined4 *)(local_a0 + 0x14 + lVar12) = uVar21;
              *(undefined8 *)(local_a0 + 0x18 + lVar12) = uVar9;
              iVar7 = *(int *)(lVar23 + 0x68);
            }
            uVar22 = uVar22 + 1;
          } while ((longlong)uVar22 < (longlong)iVar7);
        }
        param_1 = local_120;
        plVar11 = local_130;
        iVar7 = (int)local_138;
        if (local_ac == 0 || iVar7 != local_b4._4_4_) {
          local_b4 = CONCAT44(iVar7,(int)local_b4);
          local_ac = local_ac + 1;
        }
        if ((int)local_b4 == 0 || (bool)cStack_b8 != 0 < iVar7) {
          local_b4 = CONCAT44(local_b4._4_4_,(int)local_b4 + 1);
          cStack_b8 = 0 < iVar7;
        }
        iVar7 = (int)local_130[1];
        *(uint *)(local_130 + 1) = iVar7 + 1U;
        local_a8 = uVar9;
        if (*(uint *)((longlong)local_130 + 0xc) < iVar7 + 1U) {
          FUN_1466414ba(local_130,iVar7);
        }
        uVar22 = uStack_98;
        lVar10 = local_a0;
        lVar12 = *plVar11;
        lVar17 = (longlong)iVar7 * 0x60;
        puVar1 = (undefined4 *)(lVar12 + lVar17);
        *puVar1 = (undefined4)local_f0;
        puVar1[1] = local_f0._4_4_;
        puVar1[2] = (undefined4)uStack_e8;
        puVar1[3] = uStack_e8._4_4_;
        *(undefined8 *)(lVar12 + 0x10 + lVar17) = 0;
        *(int *)(lVar12 + 0x10 + lVar17) = (int)local_e0;
        *(int *)(lVar12 + 0x14 + lVar17) = local_e0._4_4_;
        *(undefined8 *)(lVar12 + 0x18 + lVar17) = 0;
        *(int *)(lVar12 + 0x18 + lVar17) = (int)uStack_d8;
        *(int *)(lVar12 + 0x1c + lVar17) = uStack_d8._4_4_;
        *(undefined8 *)(lVar12 + 0x20 + lVar17) = 0;
        *(int *)(lVar12 + 0x20 + lVar17) = (int)local_d0;
        *(int *)(lVar12 + 0x24 + lVar17) = local_d0._4_4_;
        *(undefined8 *)(lVar12 + 0x28 + lVar17) = 0;
        *(int *)(lVar12 + 0x28 + lVar17) = iStack_c8;
        *(int *)(lVar12 + 0x2c + lVar17) = iStack_c4;
        *(ulonglong *)(lVar12 + 0x30 + lVar17) = CONCAT71(uStack_bf,uStack_c0);
        *(undefined1 *)(lVar12 + 0x38 + lVar17) = 0;
        *(undefined4 *)(lVar12 + 0x3c + lVar17) = 0;
        *(char *)(lVar12 + 0x38 + lVar17) = cStack_b8;
        *(int *)(lVar12 + 0x3c + lVar17) = (int)local_b4;
        *(undefined8 *)(lVar12 + 0x40 + lVar17) = 0;
        *(int *)(lVar12 + 0x40 + lVar17) = local_b4._4_4_;
        *(int *)(lVar12 + 0x44 + lVar17) = local_ac;
        *(undefined8 *)(lVar12 + 0x48 + lVar17) = local_a8;
        *(undefined8 *)(lVar12 + 0x50 + lVar17) = 0;
        *(int *)(lVar12 + 0x58 + lVar17) = (int)uStack_98;
        if ((int)uStack_98 == 0) {
          *(undefined4 *)(lVar12 + lVar17 + 0x5c) = 0;
        }
        else {
          puVar20 = (undefined8 *)(lVar12 + lVar17 + 0x50);
          FUN_1418f74da(puVar20,uStack_98 & 0xffffffff);
          FUN_144279f14(*puVar20,lVar10,uVar22 & 0xffffffff);
        }
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
      }
      lVar23 = lVar23 + 0x88;
    } while (lVar23 != local_118);
  }
  ReleaseSRWLockExclusive(local_128);
LAB_1410a6eb1:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410a6ef4 FUN_1410a6ef4 body=22 status=ok
// SIG undefined FUN_1410a6ef4(void)

undefined1 FUN_1410a6ef4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1410a6f0a(param_2,param_3);
  return 1;
}



// FUNCTION 1410a6f0a FUN_1410a6f0a body=774 status=ok
// SIG undefined FUN_1410a6f0a(void)

longlong * FUN_1410a6f0a(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  char *pcVar2;
  int *piVar3;
  ulonglong *puVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  uint *puVar9;
  char *pcVar10;
  longlong *plVar11;
  undefined1 auStack_98 [40];
  char local_70 [4];
  char local_6c [12];
  longlong local_60 [2];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_6c[0] = '\0';
  local_6c[1] = '\0';
  local_6c[2] = '\0';
  local_6c[3] = '\0';
  local_6c[4] = '\0';
  local_6c[5] = '\0';
  local_6c[6] = '\0';
  local_6c[7] = '\0';
  local_6c[8] = 0;
  local_60[0] = 0;
  local_60[1] = 0;
  (**(code **)(*param_1 + 0x218))(0,&DAT_14bcd7810);
  bVar1 = *(byte *)(param_1 + 5);
  pcVar2 = (char *)*param_2;
  pcVar8 = local_70;
  if ((bVar1 & 1) == 0) {
    pcVar8 = pcVar2;
  }
  if (pcVar8 == (char *)0x0) {
    if ((bVar1 & 4) == 0) goto LAB_1410a702e;
    local_4c = CONCAT31(local_4c._1_3_,0xff);
    puVar4 = (ulonglong *)param_1[1];
    if (*puVar4 + 1 <= puVar4[1]) {
      *puVar4 = *puVar4 + 1;
      goto LAB_1410a702e;
    }
    lVar7 = *param_1;
    puVar9 = &local_4c;
  }
  else {
    pcVar10 = *(char **)param_1[1];
    if ((char *)((undefined8 *)param_1[1])[1] < pcVar10 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,pcVar8,1);
    }
    else {
      *pcVar8 = *pcVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    iVar5 = FUN_1448332aa(param_1,&DAT_14bcd7810);
    if (-1 < iVar5) {
      pcVar10 = local_70;
      if ((bVar1 & 1) == 0) {
        pcVar10 = pcVar2;
      }
      piVar3 = *(int **)param_1[1];
      if ((int *)((undefined8 *)param_1[1])[1] < piVar3 + 1) {
        local_4c = (uint)(byte)pcVar10[0xc];
        (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
        if (1 < local_4c) {
          FUN_14572541c(param_1);
        }
        pcVar10[0xc] = local_4c != 0;
      }
      else {
        pcVar10[0xc] = *piVar3 != 0;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
    }
    if (*pcVar8 == '\x04') {
      plVar11 = (longlong *)(pcVar2 + 0x10);
      pcVar2 = pcVar2 + 4;
      if ((bVar1 & 1) != 0) {
        plVar11 = local_60;
        pcVar2 = local_6c;
      }
      (**(code **)(*param_1 + 0x160))(param_1,pcVar2);
      FUN_14945d4b4(param_1,plVar11);
      goto LAB_1410a702e;
    }
    pcVar8 = pcVar2;
    if ((bVar1 & 1) != 0) {
      pcVar8 = local_70;
    }
    pcVar10 = *(char **)param_1[1];
    if ((char *)((undefined8 *)param_1[1])[1] < pcVar10 + 1) {
      (**(code **)(*param_1 + 0x170))(param_1,pcVar8 + 1,1);
    }
    else {
      pcVar8[1] = *pcVar10;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
    }
    if (pcVar8[1] == '\x01') {
      pcVar8 = local_70;
      if ((bVar1 & 1) == 0) {
        pcVar8 = pcVar2;
      }
      puVar9 = (uint *)(pcVar8 + 2);
    }
    else {
      if (pcVar8[1] != '\x02') goto LAB_1410a702e;
      pcVar8 = local_70;
      if ((bVar1 & 1) == 0) {
        pcVar8 = pcVar2;
      }
      pcVar10 = *(char **)param_1[1];
      if ((char *)((undefined8 *)param_1[1])[1] < pcVar10 + 1) {
        (**(code **)(*param_1 + 0x170))(param_1,pcVar8 + 2,1);
      }
      else {
        pcVar8[2] = *pcVar10;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      }
      pcVar8 = local_70;
      if ((bVar1 & 1) == 0) {
        pcVar8 = pcVar2;
      }
      puVar9 = (uint *)(pcVar8 + 3);
    }
    pcVar2 = *(char **)param_1[1];
    if (pcVar2 + 1 <= (char *)((undefined8 *)param_1[1])[1]) {
      *(char *)puVar9 = *pcVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
      goto LAB_1410a702e;
    }
    lVar7 = *param_1;
  }
  (**(code **)(lVar7 + 0x170))(param_1,puVar9,1);
LAB_1410a702e:
  if ((*(byte *)(param_1 + 5) & 1) != 0) {
    uVar6 = FUN_1410a7212(local_70);
    *param_2 = uVar6;
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a7212 FUN_1410a7212 body=207 status=ok
// SIG undefined FUN_1410a7212(void)

undefined8 * FUN_1410a7212(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 **ppuVar4;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_1;
  uVar2 = FUN_1410a73e0();
  iVar3 = FUN_1410a72e2(&DAT_14cc1aad0,uVar2,&local_20);
  ppuVar4 = (undefined8 **)((longlong)iVar3 * 0x10 + DAT_14cc1aad0);
  if (ppuVar4 == (undefined8 **)0x0 || iVar3 == -1) {
    local_20 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    uVar1 = *(undefined8 *)((longlong)param_1 + 5);
    *local_20 = *param_1;
    *(undefined8 *)((longlong)local_20 + 5) = uVar1;
    local_20[2] = param_1[2];
    param_1[2] = 0;
    *(undefined4 *)(local_20 + 3) = *(undefined4 *)(param_1 + 3);
    *(undefined4 *)((longlong)local_20 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x1c);
    param_1[3] = 0;
    FUN_1410a772c(&DAT_14cc1aad0,local_24,&local_20,0);
    ppuVar4 = &local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return *ppuVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a72e2 FUN_1410a72e2 body=107 status=ok
// SIG undefined FUN_1410a72e2(void)

int FUN_1410a72e2(longlong *param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar1 = *param_1;
      uVar2 = *param_3;
      do {
        cVar3 = FUN_1410a734e(*(undefined8 *)(lVar1 + (longlong)iVar5 * 0x10),uVar2);
        if (cVar3 != '\0') {
          return iVar5;
        }
        iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  return -1;
}



// FUNCTION 1410a734e FUN_1410a734e body=146 status=ok
// SIG undefined FUN_1410a734e(void)

undefined8 FUN_1410a734e(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if ((*param_1 == *param_2) && (param_1[0xc] == param_2[0xc])) {
    if (*param_1 == '\x04') {
      if (*(longlong *)(param_1 + 4) == *(longlong *)(param_2 + 4)) {
        uVar2 = *(uint *)(param_1 + 0x18);
        uVar3 = (ulonglong)uVar2;
        if (uVar2 == *(uint *)(param_2 + 0x18)) {
          if (0 < (int)uVar2) {
            uVar3 = uVar3 << 4;
            uVar4 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0x10) + uVar4) !=
                  *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar4)) {
                return 0;
              }
              if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 8 + uVar4) !=
                  *(longlong *)(*(longlong *)(param_2 + 0x10) + 8 + uVar4)) {
                return 0;
              }
              uVar4 = uVar4 + 0x10;
            } while (uVar3 != uVar4);
          }
          goto LAB_1410a737c;
        }
      }
    }
    else {
      cVar1 = param_1[1];
      uVar3 = 0;
      if (cVar1 == param_2[1]) {
        if (cVar1 == '\x01') {
          uVar3 = 0;
          if (param_1[2] == param_2[2]) {
LAB_1410a737c:
            return CONCAT71((int7)(uVar3 >> 8),1);
          }
        }
        else if ((cVar1 != '\x02') ||
                ((param_1[2] == param_2[2] && (uVar3 = 0, param_1[3] == param_2[3]))))
        goto LAB_1410a737c;
      }
    }
  }
  return 0;
}



// FUNCTION 1410a73e0 FUN_1410a73e0 body=843 status=ok
// SIG undefined FUN_1410a73e0(void)

uint FUN_1410a73e0(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  
  bVar1 = *param_1;
  if (bVar1 == 4) {
    uVar3 = *(undefined8 *)(param_1 + 4);
    uVar4 = (uint)((ulonglong)uVar3 >> 0x10);
    uVar9 = (uint)uVar3 & 0xffff;
    uVar5 = FUN_144a78877(bVar1,((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                                (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4));
    uVar4 = FUN_144a78877(uVar5,*(undefined4 *)(param_1 + 0x18));
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      puVar12 = *(undefined8 **)(param_1 + 0x10);
      puVar8 = puVar12 + (longlong)*(int *)(param_1 + 0x18) * 2;
      do {
        uVar3 = *puVar12;
        uVar9 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar10 = (uint)uVar3 & 0xffff;
        uVar5 = FUN_144a78877(uVar4,((uint)uVar3 << 0x10 | uVar10) + (int)((ulonglong)uVar3 >> 0x20)
                                    + (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar10 >> 4));
        uVar6 = FUN_1410a73e0(puVar12[1]);
        uVar4 = FUN_144a78877(uVar5,uVar6);
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar8);
    }
  }
  else {
    bVar2 = param_1[1];
    iVar7 = (uint)bVar1 - (uint)bVar2;
    uVar9 = iVar7 * 0x100 ^ 0x9e3779b9 - bVar1;
    uVar4 = uVar9 >> 0xd ^ ((uint)bVar2 - iVar7) - uVar9;
    uVar11 = uVar4 >> 0xc ^ (iVar7 - uVar9) - uVar4;
    uVar9 = uVar11 << 0x10 ^ (uVar9 - uVar4) - uVar11;
    uVar10 = uVar9 >> 5 ^ (uVar4 - uVar11) - uVar9;
    uVar11 = uVar10 >> 3 ^ (uVar11 - uVar9) - uVar10;
    uVar4 = uVar11 << 10 ^ (uVar9 - uVar10) - uVar11;
    uVar4 = uVar4 >> 0xf ^ uVar10 - (uVar11 + uVar4);
    if (bVar2 == 1) {
      iVar7 = uVar4 - param_1[2];
      uVar10 = iVar7 * 0x100 ^ 0x9e3779b9 - uVar4;
      uVar4 = uVar10 >> 0xd ^ ((uint)param_1[2] - iVar7) - uVar10;
      uVar9 = uVar4 >> 0xc ^ (iVar7 - uVar10) - uVar4;
      uVar11 = uVar9 << 0x10 ^ (uVar10 - uVar4) - uVar9;
      uVar4 = uVar11 >> 5 ^ (uVar4 - uVar9) - uVar11;
      uVar10 = uVar4 >> 3 ^ (uVar9 - uVar11) - uVar4;
      uVar9 = uVar10 << 10 ^ (uVar11 - uVar4) - uVar10;
      uVar4 = uVar4 - (uVar10 + uVar9);
    }
    else {
      if (bVar2 != 2) goto LAB_1410a75f7;
      iVar7 = uVar4 - param_1[2];
      uVar10 = iVar7 * 0x100 ^ 0x9e3779b9 - uVar4;
      uVar9 = uVar10 >> 0xd ^ ((uint)param_1[2] - iVar7) - uVar10;
      uVar4 = uVar9 >> 0xc ^ (iVar7 - uVar10) - uVar9;
      uVar11 = uVar4 << 0x10 ^ (uVar10 - uVar9) - uVar4;
      uVar10 = uVar11 >> 5 ^ (uVar9 - uVar4) - uVar11;
      uVar9 = uVar10 >> 3 ^ (uVar4 - uVar11) - uVar10;
      uVar4 = uVar9 << 10 ^ (uVar11 - uVar10) - uVar9;
      uVar4 = uVar4 >> 0xf ^ uVar10 - (uVar9 + uVar4);
      iVar7 = uVar4 - param_1[3];
      uVar10 = iVar7 * 0x100 ^ 0x9e3779b9 - uVar4;
      uVar4 = uVar10 >> 0xd ^ ((uint)param_1[3] - iVar7) - uVar10;
      uVar9 = uVar4 >> 0xc ^ (iVar7 - uVar10) - uVar4;
      uVar11 = uVar9 << 0x10 ^ (uVar10 - uVar4) - uVar9;
      uVar4 = uVar11 >> 5 ^ (uVar4 - uVar9) - uVar11;
      uVar10 = uVar4 >> 3 ^ (uVar9 - uVar11) - uVar4;
      uVar9 = uVar10 << 10 ^ (uVar11 - uVar4) - uVar10;
      uVar4 = uVar4 - (uVar10 + uVar9);
    }
    uVar4 = uVar9 >> 0xf ^ uVar4;
  }
LAB_1410a75f7:
  iVar7 = uVar4 - param_1[0xc];
  uVar10 = iVar7 * 0x100 ^ 0x9e3779b9 - uVar4;
  uVar9 = uVar10 >> 0xd ^ ((uint)param_1[0xc] - iVar7) - uVar10;
  uVar4 = uVar9 >> 0xc ^ (iVar7 - uVar10) - uVar9;
  uVar11 = uVar4 << 0x10 ^ (uVar10 - uVar9) - uVar4;
  uVar10 = uVar11 >> 5 ^ (uVar9 - uVar4) - uVar11;
  uVar9 = uVar10 >> 3 ^ (uVar4 - uVar11) - uVar10;
  uVar4 = uVar9 << 10 ^ (uVar11 - uVar10) - uVar9;
  return uVar4 >> 0xf ^ uVar10 - (uVar9 + uVar4);
}



// FUNCTION 1410a772c FUN_1410a772c body=767 status=ok
// SIG undefined FUN_1410a772c(void)

int * FUN_1410a772c(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_1446efaca(param_1,iVar13);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar5 = iVar7 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar11 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        if (iVar7 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar7;
        }
        else {
          uVar6 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar6) {
              uVar8 = uVar6;
            }
          }
          else {
            uVar8 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar8 << 2,0);
          iVar5 = (int)(uVar12 >> 2);
          iVar11 = -0x20;
          if ((int)uVar6 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar14,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar14;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar7 & 0x1f;
    puVar2 = (uint *)((longlong)plVar14 + (longlong)(iVar16 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar9 = (longlong)iVar13;
    iVar7 = *(int *)(*param_1 + 4 + lVar9 * 0x10);
    *(int *)(param_1 + 6) = iVar7;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x10) = 0xffffffff;
    }
  }
  plVar14 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar14 = (longlong *)param_1[4];
  }
  iVar7 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar7 = iVar13;
  }
  puVar2 = (uint *)((longlong)plVar14 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar13 & 0x1f);
  lVar3 = *param_1;
  lVar9 = lVar9 * 0x10;
  puVar1 = (undefined8 *)(lVar3 + lVar9);
  *(undefined8 *)(lVar3 + lVar9) = *param_3;
  *(undefined4 *)(lVar3 + 8 + lVar9) = 0xffffffff;
  uVar6 = FUN_1410a73e0();
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar7 = FUN_1410a72e2(param_1,uVar6,puVar1);
    if (iVar7 != -1) {
      *(undefined8 *)(*param_1 + (longlong)iVar7 * 0x10) = *puVar1;
      FUN_14945d3e2(param_1,iVar13);
      cVar4 = '\x01';
      goto LAB_1410a7839;
    }
  }
  cVar4 = '\0';
  iVar7 = iVar13;
LAB_1410a7839:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar8 < 4) {
      iVar13 = 1;
    }
    else {
      uVar12 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar13 <= (int)param_1[9])) {
      uVar6 = (int)param_1[9] - 1U & uVar6;
      *(uint *)((longlong)puVar1 + 0xc) = uVar6;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      *(undefined4 *)(puVar1 + 1) =
           *(undefined4 *)
            ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = param_1 + 7;
      }
      *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) =
           iVar7;
    }
    else {
      *(int *)(param_1 + 9) = iVar13;
      FUN_1410a7a2c(param_1);
    }
  }
  *param_2 = iVar7;
  return param_2;
}



// FUNCTION 1410a7a2c FUN_1410a7a2c body=579 status=ok
// SIG undefined FUN_1410a7a2c(void)

void FUN_1410a7a2c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar11 = *(uint *)(param_1 + 9);
  if (uVar11 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar11,4);
    if (0 < (int)uVar11) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar11 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar13 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar5 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar10 = *param_1;
        lVar9 = (longlong)iVar7 * 0x10;
        local_74 = iVar5;
        iVar5 = FUN_1410a73e0(*(undefined8 *)(lVar10 + lVar9));
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0xc + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 8 + lVar9) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar11 = ~(uint)uVar12 & uVar11;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar2 = (int)plVar1[3];
        lVar10 = (longlong)iVar13;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar11;
        iVar5 = local_74;
        if (uVar4 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar13) {
            iVar3 = iVar13;
          }
          if (iVar7 <= iVar13) break;
          lVar9 = 0;
          while( true ) {
            iVar5 = iVar5 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_1410a7c32;
          }
          iVar13 = iVar13 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar5 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar2);
    }
  }
LAB_1410a7c32:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a7c70 FUN_1410a7c70 body=319 status=ok
// SIG undefined FUN_1410a7c70(void)

void FUN_1410a7c70(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined1 auStack_248 [32];
  longlong *local_228;
  undefined8 local_218;
  undefined1 local_210 [8];
  int local_208;
  undefined1 local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [424];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  cVar3 = (**(code **)(*param_1 + 0x180))(param_1,param_4,1);
  if (cVar3 != '\0') {
    local_1f8 = 0;
    uStack_1f0 = 0;
    FUN_14000e9de(local_1e8,(int)param_1[0x10]);
    lVar2 = param_1[0xe];
    iVar1 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar1 + 1U) {
      FUN_14000e500(param_5,iVar1);
    }
    *(longlong *)(*param_5 + (longlong)iVar1 * 8) = lVar2;
    local_228 = param_5;
    (**(code **)(*(longlong *)param_1[0xe] + 0x188))((longlong *)param_1[0xe],local_1e8,0,param_4);
    FUN_1446f07d6(local_1e8,&local_218,0);
    iVar1 = *(int *)((longlong)param_1 + 0x44);
    FUN_14000e6f0(local_210,6);
    local_204 = 6;
    local_200 = local_218;
    local_208 = param_3 + iVar1;
    FUN_14000e760(param_2,local_210);
    *(int *)(param_5 + 1) = (int)param_5[1] + -1;
    FUN_14000e472(param_5);
    FUN_14000eb08(local_1e8);
  }
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a7dc2 FUN_1410a7dc2 body=44 status=ok
// SIG undefined FUN_1410a7dc2(void)

void FUN_1410a7dc2(longlong param_1)

{
  FUN_1410a7dee();
  FUN_140e5d35e(*(undefined8 *)(param_1 + 0x1b0),param_1,1,*(undefined4 *)(param_1 + 0xe44));
  return;
}



// FUNCTION 1410a7dee FUN_1410a7dee body=955 status=ok
// SIG undefined FUN_1410a7dee(void)

void FUN_1410a7dee(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_2b8 [32];
  undefined1 local_298;
  longlong *local_290;
  undefined4 local_288;
  undefined1 local_278 [4];
  undefined4 local_274;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined4 local_1d4;
  undefined4 local_1a8;
  longlong local_178;
  undefined1 local_170 [24];
  longlong local_158;
  longlong local_148;
  longlong *plStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  longlong local_f8;
  longlong *local_e8;
  longlong local_d8 [4];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar5 = FUN_1447210f0();
  if (lVar5 != 0) {
    FUN_1407f7f84(&local_148);
    if (plStack_140 != (longlong *)0x0) {
      iVar4 = (int)plStack_140[1];
      do {
        if (iVar4 == 0) {
          plVar9 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)plStack_140[1];
        bVar10 = iVar4 == iVar3;
        if (bVar10) {
          *(int *)(plStack_140 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar9 = plStack_140;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)plStack_140 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_140 + 0x10))();
      }
      lVar5 = local_148;
      if (plVar9 != (longlong *)0x0) {
        if ((local_148 != 0) && (lVar7 = *(longlong *)(param_1 + 0xf10), lVar7 != 0)) {
          memset(local_278,0,0x100);
          local_1a8 = 0xffffffff;
          local_274 = 0x3f800000;
          local_1d4 = 0xffffffff;
          if (*(char *)(param_1 + 0x1118) == '\x01') {
            memcpy(local_278,(void *)(param_1 + 0x1018),0x100);
          }
          else {
            lVar2 = *(longlong *)(param_1 + 0x1c8);
            if (lVar2 == 0) {
              puVar6 = &DAT_14c8464e0;
              uVar11 = (undefined4)DAT_14c8464f0;
              uVar12 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar11 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
              uVar12 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
              puVar6 = (undefined8 *)(lVar2 + 0x260);
            }
            local_268 = *puVar6;
            uStack_260 = puVar6[1];
            local_258 = CONCAT44(uVar12,uVar11);
            local_220 = DAT_14c8462c0;
            uStack_218 = DAT_14c8462c8;
            local_210 = DAT_14c8462d0;
            local_238 = DAT_14c8462c0;
            uStack_230 = DAT_14c8462c8;
            local_228 = DAT_14c8462d0;
            local_250 = local_268;
            uStack_248 = uStack_260;
            local_240 = local_258;
          }
          local_118 = 0;
          uStack_110 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_148 = 0;
          plStack_140 = (longlong *)0x0;
          local_108 = 0xc0;
          local_f8 = 0;
          local_e8 = (longlong *)0x0;
          local_b8 = 0;
          local_a8 = (longlong *)0x0;
          local_78 = 0;
          uStack_70 = 0;
          local_68 = 0;
          local_60 = 0x3ff0000000000000;
          local_58 = 0x3ff0000000000000;
          local_50 = 0x3ff0000000000000;
          local_40 = 0;
          local_48 = *(undefined4 *)(param_1 + 0xe44);
          local_44 = *(undefined4 *)(param_1 + 0x74);
          lVar2 = *(longlong *)(param_1 + 0x1b0);
          local_178 = lVar7;
          FUN_1446dcdd4(local_170);
          if (((DAT_14cb78ff0 != 0) && (lVar7 = FUN_144837462(DAT_14cb78ff0,local_170), lVar2 != 0))
             && (lVar7 != 0)) {
            local_288 = 0;
            local_298 = 0;
            local_290 = &local_148;
            FUN_1408f2522(lVar5,lVar7,lVar2,local_278);
          }
          if (local_158 != 0) {
            FUN_1400020a8();
          }
          if (local_b8 != 0) {
            plVar8 = local_a8;
            if (local_a8 == (longlong *)0x0) {
              plVar8 = local_98;
            }
            (**(code **)(*plVar8 + 0x10))();
          }
          if (local_f8 != 0) {
            plVar8 = local_e8;
            if (local_e8 == (longlong *)0x0) {
              plVar8 = local_d8;
            }
            (**(code **)(*plVar8 + 0x10))();
          }
          if (local_118 != 0) {
            FUN_1400020a8();
          }
          if (local_128 != 0) {
            FUN_1400020a8();
          }
          if (local_138 != 0) {
            FUN_1400020a8();
          }
          if (local_148 != 0) {
            FUN_1400020a8();
          }
        }
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
  }
  if ((local_38 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410a81aa FUN_1410a81aa body=57 status=ok
// SIG undefined FUN_1410a81aa(void)

void FUN_1410a81aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6ee18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6ee18 = FUN_140002ddd(FUN_14653e7a6,uVar1,L"RadialBlurDef");
  }
  return;
}



// FUNCTION 1410a81e3 FUN_1410a81e3 body=127 status=ok
// SIG undefined FUN_1410a81e3(void)

void FUN_1410a81e3(longlong param_1,int param_2)

{
  byte *pbVar1;
  code *pcVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if (param_2 != 0) {
    pbVar4 = (byte *)(param_1 + 0x38);
    do {
      pbVar1 = pbVar4 + -0x20;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*pbVar4 * 0x120));
      if (pcVar2 != (code *)0x0) {
        pbVar3 = pbVar1;
        if (0x18 < *(ushort *)(pbVar4 + -8)) {
          pbVar3 = *(byte **)pbVar1;
        }
        (*pcVar2)(pbVar3);
      }
      if (0x18 < *(ushort *)(pbVar4 + -8)) {
        FUN_1400020a8(*(longlong *)pbVar1);
      }
      if (*(longlong **)(pbVar4 + -0x38) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(pbVar4 + -0x38) + 0x10))();
      }
      pbVar4 = pbVar4 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410a8324 FUN_1410a8324 body=21 status=ok
// SIG undefined FUN_1410a8324(void)

undefined8 FUN_1410a8324(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1410a833a FUN_1410a833a body=229 status=ok
// SIG undefined FUN_1410a833a(void)

void FUN_1410a833a(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar4 = (longlong *)*param_2;
    plVar1 = plVar4 + (int)param_2[1];
    do {
      if ((*plVar4 != 0) && ((longlong)*(int *)(param_1 + 1) != 0)) {
        plVar3 = (longlong *)*param_1;
        lVar2 = (longlong)*(int *)(param_1 + 1) * 0x90;
        do {
          if (*plVar3 == *plVar4) {
            if (plVar3 != (longlong *)0x0) {
              FUN_140898270(param_1,plVar3,0,0,0);
            }
            break;
          }
          plVar3 = plVar3 + 0x12;
          lVar2 = lVar2 + -0x90;
        } while (lVar2 != 0);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  if ((longlong)(int)param_3[1] != 0) {
    plVar4 = (longlong *)*param_3;
    plVar1 = plVar4 + (int)param_3[1];
    do {
      if ((*plVar4 != 0) && ((longlong)*(int *)(param_1 + 1) != 0)) {
        plVar3 = (longlong *)*param_1;
        lVar2 = (longlong)*(int *)(param_1 + 1) * 0x90;
        do {
          if (*plVar3 == *plVar4) {
            if (plVar3 != (longlong *)0x0) {
              FUN_140898270(param_1,plVar3,1,0,0);
            }
            break;
          }
          plVar3 = plVar3 + 0x12;
          lVar2 = lVar2 + -0x90;
        } while (lVar2 != 0);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return;
}



// FUNCTION 1410a8420 FUN_1410a8420 body=158 status=ok
// SIG undefined FUN_1410a8420(void)

undefined8 FUN_1410a8420(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 2);
  iVar6 = iVar2 + 7;
  iVar3 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar6 = iVar2;
    iVar3 = iVar2;
  }
  if ((iVar2 % 4 == 2) || ((iVar6 >> 3 & 0x80000001U) != 1)) {
    iVar6 = iVar2 + 0xf;
    if (-1 < iVar2) {
      iVar6 = iVar2;
    }
    if (((iVar6 >> 4 & 0x80000001U) != 1) || (iVar2 % 4 == 3 && (iVar3 >> 2 & 0x80000001U) != 1)) {
      uVar1 = *param_1;
      cVar4 = FUN_144a787fd();
      if ((cVar4 != '\0') &&
         (lVar5 = (ulonglong)uVar1 * 0x3c,
         (*(byte *)((longlong)&DAT_14ca814d0 + lVar5 + 5) & 8) != 0)) {
        return CONCAT71((int7)((ulonglong)lVar5 >> 8),
                        2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar1 * 0xf]);
      }
    }
  }
  return 0;
}



// FUNCTION 1410a84cc FUN_1410a84cc body=215 status=ok
// SIG undefined FUN_1410a84cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410a84cc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ab9a580;
  FUN_14052c7cd(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_14052c796(param_1 + 3);
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
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1410a85be FUN_1410a85be body=96 status=ok
// SIG undefined FUN_1410a85be(void)

void FUN_1410a85be(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x430);
  if (lVar2 != 0) {
    bVar3 = *(byte *)(param_1 + 0x550) & 2;
    *(byte *)(lVar2 + 0x5b5) = bVar3 << 4 | *(byte *)(lVar2 + 0x5b5) & 0xdf;
    (**(code **)(**(longlong **)(param_1 + 0x430) + 0x7e8 + (ulonglong)(bVar3 == 0) * 8))
              (*(longlong **)(param_1 + 0x430),1);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x430) + 0x5b4);
    *pbVar1 = *pbVar1 | 0x40;
  }
  return;
}



// FUNCTION 1410a861e FUN_1410a861e body=53 status=ok
// SIG undefined FUN_1410a861e(void)

undefined8 FUN_1410a861e(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x358) != 0) &&
     (cVar1 = FUN_1410a8654(param_2 + 0x18,*(longlong *)(param_1 + 0x358) + 0xf88), cVar1 != '\0'))
  {
    return 0;
  }
  return 1;
}



// FUNCTION 1410a8654 FUN_1410a8654 body=428 status=ok
// SIG undefined FUN_1410a8654(void)

ulonglong FUN_1410a8654(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar10 = DAT_14caa8580;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14caa8580 + 0x250);
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)(lVar10 + 0x130) != *(int *)(lVar10 + 0x15c)) {
    lVar9 = *param_1;
    uVar3 = (uint)((ulonglong)lVar9 >> 0x10);
    uVar6 = (uint)lVar9 & 0xffff;
    lVar5 = lVar10 + 0x160;
    if (*(longlong *)(lVar10 + 0x168) != 0) {
      lVar5 = *(longlong *)(lVar10 + 0x168);
    }
    iVar7 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar10 + 0x170) - 1U &
                             (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        lVar5 = *(longlong *)(lVar10 + 0x128) + (longlong)iVar7 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar10 + 0x128) + (longlong)iVar7 * 0x20) == lVar9) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
            lVar10 = *(longlong *)(lVar5 + 8);
            plVar8 = *(longlong **)(lVar5 + 0x10);
            if (plVar8 == (longlong *)0x0) {
              plVar8 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
              UNLOCK();
            }
            goto LAB_1410a8730;
          }
          break;
        }
        iVar7 = *(int *)(lVar5 + 0x18);
      } while (iVar7 != -1);
    }
  }
  plVar8 = (longlong *)0x0;
  lVar10 = 0;
LAB_1410a8730:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((lVar10 == 0) || ((longlong)(int)param_2[1] == 0)) {
    param_2 = (longlong *)0x0;
  }
  else {
    plVar4 = (longlong *)*param_2;
    plVar2 = plVar4 + (int)param_2[1];
    do {
      if (*(int *)(lVar10 + 0x10) != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(*(longlong *)(lVar10 + 8) + lVar9) == *plVar4) goto LAB_1410a87b2;
          lVar9 = lVar9 + 8;
        } while ((longlong)*(int *)(lVar10 + 0x10) << 3 != lVar9);
      }
      if ((longlong)*(int *)(lVar10 + 0x20) != 0) {
        param_2 = (longlong *)*plVar4;
        lVar9 = 0;
        do {
          if (*(longlong **)(*(longlong *)(lVar10 + 0x18) + lVar9) == param_2) goto LAB_1410a87b2;
          lVar9 = lVar9 + 8;
        } while ((longlong)*(int *)(lVar10 + 0x20) * 8 != lVar9);
      }
      plVar4 = plVar4 + 1;
      param_2 = (longlong *)0x0;
    } while (plVar4 != plVar2);
  }
LAB_1410a87b5:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  return (ulonglong)param_2 & 0xffffffff;
LAB_1410a87b2:
  param_2 = (longlong *)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  goto LAB_1410a87b5;
}



// FUNCTION 1410a8800 FUN_1410a8800 body=70 status=ok
// SIG undefined FUN_1410a8800(void)

void FUN_1410a8800(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    FUN_1447cd778(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1410a8846 FUN_1410a8846 body=40 status=ok
// SIG undefined FUN_1410a8846(void)

undefined8 FUN_1410a8846(undefined8 param_1,int param_2)

{
  FUN_1410a886e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410a886e FUN_1410a886e body=302 status=ok
// SIG undefined FUN_1410a886e(void)

void FUN_1410a886e(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3c750;
  plVar1 = param_1 + 0x1c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x20) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1f)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 1410a899c FUN_1410a899c body=4515 status=ok
// SIG undefined FUN_1410a899c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_1410a899c(longlong param_1,longlong *param_2,undefined1 (*param_3) [16],double *param_4,
             double param_5,double *param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 *param_9,undefined8 *param_10,double param_11,undefined1 param_12,
             double *param_13)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  ushort uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double *pdVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  int iVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar44;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar45;
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  double dVar48;
  float fVar56;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar57;
  float fVar65;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar66;
  float fVar76;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  double dVar82;
  float fVar84;
  float fVar85;
  undefined1 auVar83 [16];
  float fVar86;
  float fVar87;
  float fVar88;
  undefined1 auStack_618 [32];
  double *local_5f8;
  undefined8 *local_5f0;
  float *local_5e8;
  longlong **local_5e0;
  undefined1 **local_5d8;
  undefined1 local_5d0;
  undefined *local_5c8;
  double local_5b8;
  double local_5b0;
  double local_5a8;
  double dStack_5a0;
  double local_598;
  double dStack_590;
  longlong local_588;
  double *local_580;
  longlong *local_578;
  double *local_570;
  double *local_568;
  double *local_560;
  undefined1 *local_558;
  undefined1 (*local_550) [16];
  undefined8 *local_548;
  double *local_540;
  double *local_538;
  double *local_530;
  undefined8 *puStack_528;
  undefined8 *local_520;
  undefined4 *puStack_518;
  undefined8 *local_510;
  undefined1 *local_508;
  undefined1 local_4f9;
  double local_4f8;
  double dStack_4f0;
  double local_4e8;
  double dStack_4e0;
  undefined1 local_4d8 [16];
  double local_4c8;
  undefined8 uStack_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  double local_490;
  double local_488;
  double dStack_480;
  double local_478;
  undefined1 local_461;
  double local_460 [3];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 auStack_428 [16];
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  longlong local_3b8;
  longlong *local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  longlong *local_348;
  undefined1 local_340;
  double local_338;
  undefined8 local_328;
  undefined8 uStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined1 local_2f8 [8];
  float fStack_2f0;
  float local_2e8;
  float local_2e4;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  double dStack_288;
  double local_280;
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [8];
  float fStack_240;
  undefined1 local_238 [8];
  float fStack_230;
  undefined1 local_228 [8];
  undefined8 uStack_220;
  undefined1 local_218 [8];
  undefined8 uStack_210;
  longlong local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  double dStack_1f0;
  code *local_1e8;
  double dStack_1e0;
  longlong lStack_1d8;
  longlong local_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined1 *local_1a8;
  undefined8 local_1a0;
  code *local_198;
  longlong *local_190;
  float local_188;
  undefined4 local_184;
  code *local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  undefined1 *local_118;
  double dStack_110;
  code *local_108;
  double dStack_100;
  float local_f4;
  ulonglong local_f0;
  
  pdVar11 = param_13;
  auVar83 = _DAT_1499314a0;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_618;
  local_461 = param_12;
  dVar48 = *param_13;
  dVar3 = param_13[1];
  dVar4 = param_13[2];
  local_478 = param_4[2] * dVar4;
  dStack_480 = param_4[1] * dVar3;
  dVar82 = *param_4 * dVar48;
  local_490 = SQRT(local_478 * local_478 + dVar82 * dVar82 + dStack_480 * dStack_480);
  dVar9 = 1.0 / local_490;
  local_488 = (double)(~-(ulonglong)(2.2250738585072014e-308 < local_490) & 0x3ff0000000000000 |
                      (ulonglong)(dVar82 * dVar9) &
                      -(ulonglong)(2.2250738585072014e-308 < local_490));
  if (2.2250738585072014e-308 < local_490) {
    local_478 = local_478 * dVar9;
    dStack_480 = dStack_480 * dVar9;
  }
  else {
    dStack_480 = 0.0;
    local_478 = 0.0;
  }
  local_570 = &local_488;
  local_568 = &local_490;
  local_4f8 = *(double *)*param_3;
  dStack_4f0 = *(double *)(*param_3 + 8);
  local_4e8 = *(double *)param_3[1];
  dStack_4e0 = *(double *)(param_3[1] + 8);
  local_4c8 = *(double *)param_3[3] * dVar4;
  dVar82 = *(double *)(param_3[2] + 8) * dVar3;
  dVar9 = *(double *)param_3[2] * dVar48;
  local_560 = &local_4f8;
  local_4d8._8_4_ = SUB84(dVar82,0);
  local_4d8._0_8_ = dVar9;
  local_4d8._12_4_ = (int)((ulonglong)dVar82 >> 0x20);
  uStack_4c0 = 0;
  local_4b8 = 0x3ff0000000000000;
  uStack_4b0 = 0x3ff0000000000000;
  local_4a8 = 0x3ff0000000000000;
  uStack_4a0 = 0;
  local_508 = &local_4f9;
  local_4f9 = 0;
  local_580 = param_13;
  local_558 = &local_461;
  local_548 = &param_11;
  local_538 = &param_5;
  local_530 = param_6;
  puStack_528 = param_7;
  local_520 = param_8;
  puStack_518 = param_9;
  local_510 = param_10;
  local_588 = param_1;
  local_578 = param_2;
  local_550 = param_3;
  local_540 = param_4;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    FUN_146e60634(&local_588,param_1 + 0x60);
  }
  else {
    local_3b0 = (longlong *)(param_1 + 0x70);
    local_338 = 0.0;
    if (*(char *)(param_1 + 0xd8) == '\x01') {
      uVar27 = ~-(ulonglong)(0.0 <= dVar48) & ((&DAT_149931160)[0.0 <= dVar3] ^ 0x8000000000000000)
               | -(ulonglong)(0.0 <= dVar48) & (&DAT_149931160)[0.0 <= dVar3];
      local_338 = (double)(~-(ulonglong)(0.0 <= dVar4) & (uVar27 ^ 0x8000000000000000) |
                          uVar27 & -(ulonglong)(0.0 <= dVar4));
    }
    local_280 = param_13[2];
    local_290 = *param_13;
    dStack_288 = param_13[1];
    local_3a8 = 0;
    uStack_3a0 = 0;
    local_398 = 0;
    uStack_394 = 0;
    uStack_390 = 0;
    uStack_38c = 0x3ff00000;
    local_388 = 0;
    uStack_380 = 0;
    local_378 = 0;
    uStack_370 = 0;
    local_368 = 0x3ff0000000000000;
    uStack_360 = 0x3ff0000000000000;
    local_358 = 0x3ff0000000000000;
    uStack_350 = 0;
    local_340 = param_12;
    local_2e8 = (float)local_490;
    local_2e4 = 3.4028235e+38;
    local_2b0 = 0xffffffff;
    uStack_220 = 0x7f7fc99e7f7fc99e;
    local_228 = (undefined1  [8])0x7f7fc99e7f7fc99e;
    uStack_210 = 0xff7fc99eff7fc99e;
    local_218 = (undefined1  [8])0xff7fc99eff7fc99e;
    local_2f8._0_4_ = (undefined4)local_488;
    local_2f8._4_4_ = (undefined4)dStack_480;
    fStack_2f0 = (float)local_478;
    register0x0000124c = 0;
    local_328 = CONCAT44((float)local_338,(float)local_338);
    fVar46 = (float)local_4e8;
    fVar56 = (float)dStack_4e0;
    fVar57 = (float)local_4f8;
    fVar65 = (float)dStack_4f0;
    local_268._0_4_ = (float)dVar9;
    local_268._4_4_ = (float)dVar82;
    local_268._8_4_ = (float)local_4c8;
    local_268._12_4_ = 0;
    fVar31 = fVar57 * fVar57 + fVar65 * fVar65;
    fVar44 = fVar46 * fVar46 + fVar56 * fVar56;
    auVar49._0_4_ = fVar44 + fVar31;
    auVar49._4_4_ = fVar44 + fVar31;
    auVar49._8_4_ = fVar31 + fVar44;
    auVar49._12_4_ = fVar31 + fVar44;
    auVar35._4_4_ = -(uint)(1e-08 <= auVar49._4_4_);
    auVar35._0_4_ = -(uint)(1e-08 <= auVar49._0_4_);
    auVar35._8_4_ = -(uint)(1e-08 <= auVar49._8_4_);
    auVar35._12_4_ = -(uint)(1e-08 <= auVar49._12_4_);
    auVar49 = sqrtps(auVar49,auVar49);
    auVar49 = divps(_DAT_1499314a0,auVar49);
    auVar77._0_4_ = auVar49._0_4_ * fVar57;
    auVar77._4_4_ = auVar49._4_4_ * fVar65;
    auVar77._8_4_ = auVar49._8_4_ * fVar46;
    auVar77._12_4_ = auVar49._12_4_ * fVar56;
    local_278 = blendvps(_DAT_149932320,auVar77,auVar35);
    local_258._0_4_ = (float)local_488;
    local_258._4_4_ = (float)dStack_480;
    local_258._8_4_ = (float)local_478;
    local_258._12_4_ = 0;
    local_1e8 = (code *)param_2[6];
    local_1f8 = (longlong *)param_2[4];
    dStack_1f0 = (double)param_2[5];
    dStack_1e0 = (double)param_2[7];
    lStack_1d8 = param_2[8];
    local_1d0 = param_2[9];
    local_3b8 = param_1;
    local_348 = param_2;
    uStack_320 = local_328;
    local_318 = local_488;
    dStack_310 = dStack_480;
    local_308 = local_478;
    FUN_1400c6592(&local_1f8,local_448,&local_4f8);
    local_228._0_4_ = (undefined4)(double)local_448._0_8_;
    local_228._4_4_ = (undefined4)(double)local_448._8_8_;
    uStack_220._0_4_ = (float)(double)local_438._0_8_;
    uStack_220._4_4_ = 0.0;
    local_218._0_4_ = (undefined4)(double)local_438._8_8_;
    local_218._4_4_ = (undefined4)(double)auStack_428._0_8_;
    uStack_210._0_4_ = (float)(double)auStack_428._8_8_;
    uStack_210._4_4_ = 0.0;
    local_448 = *param_3;
    local_438 = param_3[1];
    auStack_428._8_8_ = DAT_14c8464e8;
    auStack_428._0_8_ = DAT_14c8464e0;
    local_418 = DAT_14c8464f0;
    uStack_410 = 0;
    local_408 = 0x3ff0000000000000;
    uStack_400 = 0x3ff0000000000000;
    local_3f8 = 0x3ff0000000000000;
    uStack_3f0 = 0;
    (**(code **)(*param_2 + 0x80))(param_2,&local_1f8);
    FUN_1400c6592(&local_1f8,&local_3e8,local_448);
    lVar17 = 0;
    do {
      uVar27 = -(ulonglong)(ABS(pdVar11[lVar17]) < 9.999999974752427e-07);
      local_460[lVar17] =
           (double)(uVar27 & 0x412e8480014aeccc | ~uVar27 & (ulonglong)(1.0 / pdVar11[lVar17]));
      lVar17 = lVar17 + 1;
    } while (lVar17 != 3);
    local_5b8 = param_5;
    dVar48 = param_5;
    if (*(int *)(param_1 + 0xe8) != 0) {
      dVar48 = *(double *)param_3[3];
      dVar3 = *(double *)(param_3[2] + 8);
      dVar4 = *(double *)param_3[2];
      local_5b0 = param_11;
      local_598 = *param_4;
      dStack_590 = param_4[1];
      local_5a8 = param_4[2];
      dStack_5a0 = 0.0;
      local_208 = 0;
      uStack_200 = 0;
      FUN_14481578e(&local_208,0x10);
      uVar27 = uStack_200;
      lVar17 = (longlong)(int)uStack_200;
      uVar14 = (int)uStack_200 + 1;
      uStack_200 = CONCAT44(uStack_200._4_4_,uVar14);
      if (uStack_200._4_4_ < uVar14) {
        FUN_1446f48e2(&local_208,uVar27 & 0xffffffff);
      }
      *(undefined4 *)(local_208 + lVar17 * 4) = 0;
      if ((int)uStack_200 != 0) {
        fVar44 = (float)(((local_3c0 - local_3d8) * 0.5 + local_3d8) * local_460[2] + dVar48);
        fVar56 = (float)(((local_3d0 - local_3e8) * 0.5 + local_3e8) * local_460[0] + dVar4);
        fVar57 = (float)(((local_3c8 - local_3e0) * 0.5 + local_3e0) * local_460[1] + dVar3);
        fVar46 = (float)((local_3c0 - local_3d8) * ABS(local_460[2]) * 0.5 + local_5b0);
        fVar65 = (float)((local_3d0 - local_3e8) * ABS(local_460[0]) * 0.5 + local_5b0);
        fVar87 = (float)((local_3c8 - local_3e0) * ABS(local_460[1]) * 0.5 + local_5b0);
        fVar31 = (float)local_5b8;
        auVar10._4_4_ = (float)dStack_590;
        auVar10._0_4_ = (float)local_598;
        auVar10._8_4_ = (float)local_5a8;
        auVar10._12_4_ = (float)dStack_5a0;
        auVar83 = divps(auVar83,auVar10);
        uVar14 = -(uint)(ABS((float)local_598) < 1e-08);
        uVar28 = -(uint)(ABS((float)dStack_590) < 1e-08);
        uVar29 = -(uint)(ABS((float)local_5a8) < 1e-08);
        uVar30 = -(uint)(ABS((float)dStack_5a0) < 1e-08);
        do {
          lVar17 = (longlong)(int)uStack_200;
          uStack_200 = CONCAT44(uStack_200._4_4_,(int)uStack_200 + -1);
          lVar26 = (longlong)*(int *)(local_208 + -4 + lVar17 * 4) * 0x50 +
                   *(longlong *)(param_1 + 0xe0);
          lVar17 = 0;
          bVar12 = true;
          do {
            bVar25 = bVar12;
            uVar27 = uStack_200;
            iVar6 = *(int *)(lVar26 + 0x40 + lVar17 * 4);
            lVar24 = (longlong)iVar6;
            if (lVar24 != -1) {
              lVar20 = lVar17 * 0x20;
              pfVar2 = (float *)(lVar26 + 0x10 + lVar20);
              pfVar1 = (float *)(lVar26 + lVar20);
              auVar50._4_4_ = -(uint)(fVar57 < pfVar1[1] - fVar87);
              auVar50._0_4_ = -(uint)(fVar56 < *pfVar1 - fVar65);
              auVar50._8_4_ = -(uint)(fVar44 < pfVar1[2] - fVar46);
              auVar50._12_4_ = -(uint)(0.0 < pfVar1[3] - 0.0);
              auVar67._4_4_ = -(uint)(pfVar2[1] + fVar87 < fVar57);
              auVar67._0_4_ = -(uint)(*pfVar2 + fVar65 < fVar56);
              auVar67._8_4_ = -(uint)(pfVar2[2] + fVar46 < fVar44);
              auVar67._12_4_ = -(uint)(pfVar2[3] + 0.0 < 0.0);
              auVar67 = auVar67 | auVar50;
              auVar68._0_4_ = auVar67._0_4_ & uVar14;
              auVar68._4_4_ = auVar67._4_4_ & uVar28;
              auVar68._8_4_ = auVar67._8_4_ & uVar29;
              auVar68._12_4_ = auVar67._12_4_ & uVar30;
              iVar18 = movmskps((int)lVar20,auVar68);
              if (iVar18 == 0) {
                auVar51._4_4_ = fVar31;
                auVar51._0_4_ = fVar31;
                auVar51._8_4_ = fVar31;
                auVar51._12_4_ = fVar31;
                fVar81 = auVar83._0_4_;
                fVar84 = auVar83._4_4_;
                fVar85 = auVar83._8_4_;
                fVar86 = auVar83._12_4_;
                auVar58._0_4_ = ((*pfVar2 + fVar65) - fVar56) * fVar81;
                auVar58._4_4_ = ((pfVar2[1] + fVar87) - fVar57) * fVar84;
                auVar58._8_4_ = ((pfVar2[2] + fVar46) - fVar44) * fVar85;
                auVar58._12_4_ = ((pfVar2[3] + 0.0) - 0.0) * fVar86;
                auVar69._0_8_ =
                     CONCAT44(~uVar28 & (uint)(((pfVar1[1] - fVar87) - fVar57) * fVar84),
                              ~uVar14 & (uint)(((*pfVar1 - fVar65) - fVar56) * fVar81));
                auVar69._8_4_ = ~uVar29 & (uint)(((pfVar1[2] - fVar46) - fVar44) * fVar85);
                auVar69._12_4_ = ~uVar30 & (uint)(((pfVar1[3] - 0.0) - 0.0) * fVar86);
                auVar33._4_4_ = uVar28;
                auVar33._0_4_ = uVar14;
                auVar33._8_4_ = uVar29;
                auVar33._12_4_ = uVar30;
                auVar49 = blendvps(auVar58,auVar51,auVar33);
                auVar34._8_4_ = auVar69._8_4_;
                auVar34._0_8_ = auVar69._0_8_;
                auVar34._12_4_ = auVar69._12_4_;
                auVar35 = minps(auVar34,auVar49);
                auVar49 = maxps(auVar69,auVar49);
                auVar36._12_4_ = auVar35._12_4_;
                auVar59._0_8_ = auVar35._4_8_;
                auVar59._8_4_ = auVar35._0_4_;
                auVar59._12_4_ = auVar36._12_4_;
                auVar77 = maxps(auVar35,auVar59);
                auVar36._4_4_ = auVar35._0_4_;
                auVar36._0_4_ = auVar35._8_4_;
                auVar36._8_4_ = auVar35._4_4_;
                auVar35 = maxps(auVar77,auVar36);
                auVar77 = maxps(auVar35,ZEXT816(0));
                auVar70._12_4_ = auVar49._12_4_;
                auVar37._0_8_ = auVar49._4_8_;
                auVar37._8_4_ = auVar49._0_4_;
                auVar37._12_4_ = auVar70._12_4_;
                auVar35 = minps(auVar49,auVar37);
                auVar70._4_4_ = auVar49._0_4_;
                auVar70._0_4_ = auVar49._8_4_;
                auVar70._8_4_ = auVar49._4_4_;
                auVar35 = minps(auVar35,auVar70);
                auVar35 = minps(auVar35,auVar51);
                auVar60._4_4_ = -(uint)(auVar35._4_4_ < auVar77._4_4_);
                auVar60._0_4_ = -(uint)(auVar35._0_4_ < auVar77._0_4_);
                auVar60._8_4_ = -(uint)(auVar35._8_4_ < auVar77._8_4_);
                auVar60._12_4_ = -(uint)(auVar35._12_4_ < auVar77._12_4_);
                iVar18 = movmskps(0,auVar60);
                if (iVar18 == 0) {
                  iVar18 = *(int *)(lVar26 + 0x48 + lVar17 * 4);
                  if (iVar18 == 0) {
                    lVar17 = (longlong)(int)uStack_200;
                    uVar15 = (int)uStack_200 + 1;
                    uStack_200 = CONCAT44(uStack_200._4_4_,uVar15);
                    if (uStack_200._4_4_ < uVar15) {
                      FUN_1446f48e2(&local_208,uVar27 & 0xffffffff);
                    }
                    *(int *)(local_208 + lVar17 * 4) = iVar6;
                  }
                  else if (0 < iVar18) {
                    lVar17 = lVar24 << 0x20;
                    uVar27 = lVar24 << 5 | 0x10;
                    do {
                      lVar20 = *(longlong *)(param_1 + 0xf0);
                      pfVar1 = (float *)(lVar20 + uVar27);
                      pfVar2 = (float *)(lVar20 + -0x10 + uVar27);
                      auVar52._4_4_ = -(uint)(fVar57 < pfVar2[1] - fVar87);
                      auVar52._0_4_ = -(uint)(fVar56 < *pfVar2 - fVar65);
                      auVar52._8_4_ = -(uint)(fVar44 < pfVar2[2] - fVar46);
                      auVar52._12_4_ = -(uint)(0.0 < pfVar2[3] - 0.0);
                      auVar71._4_4_ = -(uint)(pfVar1[1] + fVar87 < fVar57);
                      auVar71._0_4_ = -(uint)(*pfVar1 + fVar65 < fVar56);
                      auVar71._8_4_ = -(uint)(pfVar1[2] + fVar46 < fVar44);
                      auVar71._12_4_ = -(uint)(pfVar1[3] + 0.0 < 0.0);
                      auVar71 = auVar71 | auVar52;
                      auVar72._0_4_ = auVar71._0_4_ & uVar14;
                      auVar72._4_4_ = auVar71._4_4_ & uVar28;
                      auVar72._8_4_ = auVar71._8_4_ & uVar29;
                      auVar72._12_4_ = auVar71._12_4_ & uVar30;
                      iVar16 = movmskps((int)lVar20,auVar72);
                      if (iVar16 == 0) {
                        auVar53._4_4_ = fVar31;
                        auVar53._0_4_ = fVar31;
                        auVar53._8_4_ = fVar31;
                        auVar53._12_4_ = fVar31;
                        auVar61._0_4_ = ((*pfVar1 + fVar65) - fVar56) * fVar81;
                        auVar61._4_4_ = ((pfVar1[1] + fVar87) - fVar57) * fVar84;
                        auVar61._8_4_ = ((pfVar1[2] + fVar46) - fVar44) * fVar85;
                        auVar61._12_4_ = ((pfVar1[3] + 0.0) - 0.0) * fVar86;
                        auVar73._0_8_ =
                             CONCAT44(~uVar28 & (uint)(((pfVar2[1] - fVar87) - fVar57) * fVar84),
                                      ~uVar14 & (uint)(((*pfVar2 - fVar65) - fVar56) * fVar81));
                        auVar73._8_4_ = ~uVar29 & (uint)(((pfVar2[2] - fVar46) - fVar44) * fVar85);
                        auVar73._12_4_ = ~uVar30 & (uint)(((pfVar2[3] - 0.0) - 0.0) * fVar86);
                        auVar38._4_4_ = uVar28;
                        auVar38._0_4_ = uVar14;
                        auVar38._8_4_ = uVar29;
                        auVar38._12_4_ = uVar30;
                        auVar49 = blendvps(auVar61,auVar53,auVar38);
                        auVar39._8_4_ = auVar73._8_4_;
                        auVar39._0_8_ = auVar73._0_8_;
                        auVar39._12_4_ = auVar73._12_4_;
                        auVar35 = minps(auVar39,auVar49);
                        auVar49 = maxps(auVar73,auVar49);
                        auVar40._12_4_ = auVar35._12_4_;
                        auVar62._0_8_ = auVar35._4_8_;
                        auVar62._8_4_ = auVar35._0_4_;
                        auVar62._12_4_ = auVar40._12_4_;
                        auVar77 = maxps(auVar35,auVar62);
                        auVar40._4_4_ = auVar35._0_4_;
                        auVar40._0_4_ = auVar35._8_4_;
                        auVar40._8_4_ = auVar35._4_4_;
                        auVar35 = maxps(auVar77,auVar40);
                        auVar77 = maxps(auVar35,ZEXT816(0));
                        auVar74._12_4_ = auVar49._12_4_;
                        auVar41._0_8_ = auVar49._4_8_;
                        auVar41._8_4_ = auVar49._0_4_;
                        auVar41._12_4_ = auVar74._12_4_;
                        auVar35 = minps(auVar49,auVar41);
                        auVar74._4_4_ = auVar49._0_4_;
                        auVar74._0_4_ = auVar49._8_4_;
                        auVar74._8_4_ = auVar49._4_4_;
                        auVar35 = minps(auVar35,auVar74);
                        auVar35 = minps(auVar35,auVar53);
                        auVar63._4_4_ = -(uint)(auVar35._4_4_ < auVar77._4_4_);
                        auVar63._0_4_ = -(uint)(auVar35._0_4_ < auVar77._0_4_);
                        auVar63._8_4_ = -(uint)(auVar35._8_4_ < auVar77._8_4_);
                        auVar63._12_4_ = -(uint)(auVar35._12_4_ < auVar77._12_4_);
                        iVar16 = movmskps(0,auVar63);
                        if (iVar16 == 0) {
                          fVar47 = (float)local_280;
                          fVar66 = (float)local_290;
                          fVar76 = (float)dStack_288;
                          lVar20 = *local_3b0;
                          lVar21 = lVar17 >> 0x20;
                          uVar22 = (ulonglong)*(ushort *)(lVar20 + lVar21 * 6);
                          lVar7 = *(longlong *)(local_3b8 + 0x48);
                          uVar23 = (ulonglong)*(ushort *)(lVar20 + 2 + lVar21 * 6);
                          auVar42._8_8_ = 0;
                          auVar42._0_8_ = *(ulonglong *)(lVar7 + uVar22 * 0xc);
                          auVar35 = insertps(auVar42,*(undefined4 *)(lVar7 + 8 + uVar22 * 0xc),0x28)
                          ;
                          uVar5 = *(ushort *)(lVar20 + 4 + lVar21 * 6);
                          auVar54._8_8_ = 0;
                          auVar54._0_8_ = *(ulonglong *)(lVar7 + uVar23 * 0xc);
                          auVar49 = insertps(auVar54,*(undefined4 *)(lVar7 + 8 + uVar23 * 0xc),0x28)
                          ;
                          auVar64._8_8_ = 0;
                          auVar64._0_8_ = *(ulonglong *)(lVar7 + (ulonglong)uVar5 * 0xc);
                          auVar77 = insertps(auVar64,*(undefined4 *)
                                                      (lVar7 + 8 + (ulonglong)uVar5 * 0xc),0x28);
                          fVar32 = auVar35._0_4_ * fVar66;
                          fVar45 = auVar35._4_4_ * fVar76;
                          local_448._0_8_ = CONCAT44(fVar45,fVar32);
                          local_448._8_4_ = auVar35._8_4_ * fVar47;
                          local_448._12_4_ = auVar35._12_4_ * 0.0;
                          local_438._0_4_ = auVar49._0_4_ * fVar66;
                          local_438._4_4_ = auVar49._4_4_ * fVar76;
                          local_438._8_4_ = auVar49._8_4_ * fVar47;
                          local_438._12_4_ = auVar49._12_4_ * 0.0;
                          auStack_428._0_4_ = auVar77._0_4_ * fVar66;
                          auStack_428._4_4_ = auVar77._4_4_ * fVar76;
                          auStack_428._8_4_ = auVar77._8_4_ * fVar47;
                          auStack_428._12_4_ = auVar77._12_4_ * 0.0;
                          fVar66 = (auStack_428._4_4_ - fVar45) * (local_438._0_4_ - fVar32) -
                                   (local_438._4_4_ - fVar45) * (auStack_428._0_4_ - fVar32);
                          fVar76 = (auStack_428._8_4_ - local_448._8_4_) *
                                   (local_438._4_4_ - fVar45) -
                                   (local_438._8_4_ - local_448._8_4_) *
                                   (auStack_428._4_4_ - fVar45);
                          fVar88 = (auStack_428._0_4_ - fVar32) *
                                   (local_438._8_4_ - local_448._8_4_) -
                                   (local_438._0_4_ - fVar32) *
                                   (auStack_428._8_4_ - local_448._8_4_);
                          fVar47 = fStack_2f0 * fVar66 +
                                   (float)local_2f8._0_4_ * fVar76 + (float)local_2f8._4_4_ * fVar88
                          ;
                          auVar78._4_4_ = -(uint)(0.0 < fVar47 * local_328._4_4_);
                          auVar78._0_4_ = -(uint)(0.0 < fVar47 * (float)local_328);
                          auVar78._8_4_ = -(uint)(0.0 < fVar47 * (float)uStack_320);
                          auVar78._12_4_ = -(uint)(0.0 < fVar47 * uStack_320._4_4_);
                          uVar19 = movmskps((uint)uVar5 * 3,auVar78);
                          if (((local_338 != 0.0) || (NAN(local_338))) && ((char)uVar19 != '\0')) {
                            auVar75._8_4_ = local_448._8_4_;
                            auVar75._0_8_ = local_448._0_8_;
                            auVar75._12_4_ = local_448._12_4_;
                            auVar35 = minps(auVar75,local_438);
                            auVar35 = minps(auVar35,auStack_428);
                            auVar79._8_4_ = local_448._8_4_;
                            auVar79._0_8_ = local_448._0_8_;
                            auVar79._12_4_ = local_448._12_4_;
                            auVar49 = maxps(auVar79,local_438);
                            auVar49 = maxps(auVar49,auStack_428);
                            auVar80._4_4_ = -(uint)(auVar49._4_4_ < (float)local_228._4_4_);
                            auVar80._0_4_ = -(uint)(auVar49._0_4_ < (float)local_228._0_4_);
                            auVar80._8_4_ = -(uint)(auVar49._8_4_ < (float)uStack_220);
                            auVar80._12_4_ = -(uint)(auVar49._12_4_ < uStack_220._4_4_);
                            auVar8._4_4_ = -(uint)((float)local_218._4_4_ < auVar35._4_4_);
                            auVar8._0_4_ = -(uint)((float)local_218._0_4_ < auVar35._0_4_);
                            auVar8._8_4_ = -(uint)((float)uStack_210 < auVar35._8_4_);
                            auVar8._12_4_ = -(uint)(uStack_210._4_4_ < auVar35._12_4_);
                            iVar16 = movmskps((int)lVar7,auVar80 | auVar8);
                            if (iVar16 != 0) goto LAB_1410a934d;
                          }
                          local_5b8 = (double)CONCAT44(local_5b8._4_4_,uVar19);
                          auVar55._0_8_ =
                               CONCAT44(local_438._4_4_ - auStack_428._4_4_,
                                        local_438._0_4_ - auStack_428._0_4_) & 0x7fffffff7fffffff;
                          auVar55._8_4_ = ABS(local_438._8_4_ - auStack_428._8_4_);
                          auVar55._12_4_ = ABS(local_438._12_4_ - auStack_428._12_4_);
                          auVar43._0_8_ =
                               CONCAT44(fVar45 - local_438._4_4_,fVar32 - local_438._0_4_) &
                               0x7fffffff7fffffff;
                          auVar43._8_4_ = ABS(local_448._8_4_ - local_438._8_4_);
                          auVar43._12_4_ = ABS(local_448._12_4_ - local_438._12_4_);
                          auVar35 = maxps(auVar43,auVar55);
                          local_5e0 = (longlong **)local_248;
                          if (1e+10 < auVar35._8_4_ * auVar35._8_4_ +
                                      auVar35._0_4_ * auVar35._0_4_ + auVar35._4_4_ * auVar35._4_4_)
                          {
                            local_138 = (double)local_258._0_4_;
                            dStack_130 = (double)local_258._4_4_;
                            local_128 = (double)local_258._8_4_;
                            dStack_120 = (double)local_258._12_4_;
                            local_158 = (double)local_268._0_4_;
                            dStack_150 = (double)local_268._4_4_;
                            local_148 = (double)local_268._8_4_;
                            dStack_140 = (double)local_268._12_4_;
                            local_178 = (double)local_278._0_4_;
                            dStack_170 = (double)local_278._4_4_;
                            local_168 = (double)local_278._8_4_;
                            dStack_160 = (double)local_278._12_4_;
                            local_190 = local_348;
                            local_188 = (float)(double)local_348[2];
                            local_184 = 0;
                            local_180 = FUN_144857b9e;
                            local_1a8 = local_448;
                            local_1a0 = 0;
                            local_198 = FUN_14014b546;
                            local_5d0 = local_340;
                            local_5d8 = &local_118;
                            local_5e0 = &local_1f8;
                            local_5e8 = &local_f4;
                            local_5f0 = (undefined8 *)CONCAT44(local_5f0._4_4_,local_2e8 * fVar31);
                            local_5f8 = &local_138;
                            cVar13 = FUN_146e5a99a(&local_1a8,&local_190,&local_178,&local_158);
                            register0x0000124c = (float)dStack_1e0;
                            fStack_240 = (float)(double)local_1e8;
                            local_248._0_4_ = (undefined4)(double)local_1f8;
                            local_248._4_4_ = (undefined4)dStack_1f0;
                            register0x0000120c = (float)dStack_100;
                            fStack_230 = (float)(double)local_108;
                            local_238._0_4_ = (undefined4)(double)local_118;
                            local_238._4_4_ = (undefined4)dStack_110;
                          }
                          else {
                            local_1f8 = local_348;
                            dStack_1f0 = (double)(ulonglong)(uint)(float)(double)local_348[2];
                            local_1e8 = FUN_144857b9e;
                            local_118 = local_448;
                            dStack_110 = 0.0;
                            local_108 = FUN_14014b546;
                            local_5c8 = &DAT_149f52c20;
                            local_5d0 = local_340;
                            local_5e8 = &local_f4;
                            local_5f0 = (undefined8 *)CONCAT44(local_5f0._4_4_,local_2e8 * fVar31);
                            local_5f8 = (double *)local_258;
                            local_5d8 = (undefined1 **)local_238;
                            cVar13 = FUN_1448541f8(&local_118,&local_1f8,local_278,local_268);
                          }
                          fVar32 = local_f4;
                          if (cVar13 != '\0') {
                            if (((local_f4 <= 0.0) || (local_5b8._0_1_ == '\0')) &&
                               (local_f4 < local_2e4 * local_2e8)) {
                              local_118 = (undefined1 *)(double)(float)local_238._0_4_;
                              dStack_110 = (double)(float)local_238._4_4_;
                              local_108 = (code *)(double)fStack_230;
                              local_1f8 = (longlong *)(double)(float)local_248._0_4_;
                              dStack_1f0 = (double)(float)local_248._4_4_;
                              local_1e8 = (code *)(double)fStack_240;
                              local_1c8 = local_290;
                              dStack_1c0 = dStack_288;
                              local_1b8 = local_280;
                              local_5e0 = (longlong **)&local_2e4;
                              local_5f8 = (double *)CONCAT44(local_5f8._4_4_,local_f4);
                              local_5f0 = &local_2c8;
                              local_5e8 = (float *)&local_2e0;
                              FUN_1409130d6(&local_1c8,&local_118,&local_1f8);
                              local_2b0 = (undefined4)lVar24;
                              local_2a8 = (double)fVar76;
                              dStack_2a0 = (double)fVar88;
                              local_298 = (double)fVar66;
                              fVar31 = local_2e4;
                              if (fVar32 <= 0.0) goto LAB_1410a95e2;
                            }
                          }
                        }
                      }
LAB_1410a934d:
                      lVar24 = lVar24 + 1;
                      lVar17 = lVar17 + 0x100000000;
                      uVar27 = uVar27 + 0x20;
                    } while (lVar24 < iVar18 + iVar6);
                  }
                }
              }
            }
            lVar17 = 1;
            bVar12 = false;
          } while (bVar25);
        } while ((int)uStack_200 != 0);
      }
LAB_1410a95e2:
      if (local_208 != 0) {
        FUN_1400020a8();
      }
      dVar48 = *local_538;
    }
    if ((double)local_2e4 <= dVar48) {
      *local_530 = (double)local_2e4;
      puStack_528[2] = local_2d0;
      *puStack_528 = local_2e0;
      puStack_528[1] = uStack_2d8;
      local_520[2] = local_2b8;
      *local_520 = local_2c8;
      local_520[1] = uStack_2c0;
      *puStack_518 = local_2b0;
      FUN_140490318(param_1,local_448);
      local_510[2] = local_438._0_8_;
      *local_510 = local_448._0_8_;
      local_510[1] = local_448._8_8_;
      *local_508 = 1;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_618) == DAT_14c707940) {
    return local_4f9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410a9b40 FUN_1410a9b40 body=140 status=ok
// SIG undefined FUN_1410a9b40(void)

void FUN_1410a9b40(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_144837e54(param_3,0);
  lVar2 = *(longlong *)(param_3 + 0x30);
  if (lVar2 == 0) {
    uVar1 = (**(code **)(*param_1 + 0x470))(param_1);
    *(undefined8 *)(param_3 + 0x30) = uVar1;
    uVar1 = (**(code **)(*param_1 + 0x480))(param_1);
    *(undefined8 *)(param_3 + 0x38) = uVar1;
    FUN_1400f0d6e(param_1,param_3,0);
    lVar2 = *(longlong *)(param_3 + 0x30);
  }
  if (*(int *)(param_3 + 0x40) != *(int *)(param_3 + 0x44)) {
    uVar1 = FUN_140c9dc26();
    FUN_1446e7478(param_3 + 0x48,lVar2,uVar1,1);
    *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x44);
  }
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x48) = *(undefined8 *)(param_3 + 0x38);
  }
  return;
}



// FUNCTION 1410a9bcc FUN_1410a9bcc body=74 status=ok
// SIG undefined FUN_1410a9bcc(void)

void FUN_1410a9bcc(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14181ad18();
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[1] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = &PTR_FUN_14acb7ac0;
  *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 1410a9c16 FUN_1410a9c16 body=176 status=ok
// SIG undefined FUN_1410a9c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410a9c16(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar1 = DAT_14cb26460;
  if (DAT_14cb26460 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)FUN_140595974(0x3800,0);
    lVar4 = 0xff;
    puVar3 = puVar1;
    do {
      puVar2 = puVar3 + 7;
      *puVar3 = puVar2;
      lVar4 = lVar4 + -1;
      puVar3 = puVar2;
    } while (lVar4 != 0);
    *puVar2 = DAT_14cb26460;
    _DAT_14cb26468 = _DAT_14cb26468 + 0x100;
  }
  DAT_14cb26460 = (undefined8 *)*puVar1;
  _DAT_14cb2646c = _DAT_14cb2646c + 1;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[6] = 0;
  *(undefined4 *)puVar1 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(puVar1 + 1));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(puVar1 + 1),4000);
  *(undefined4 *)(puVar1 + 6) = 0;
  return puVar1;
}



// FUNCTION 1410a9cc6 FUN_1410a9cc6 body=31 status=ok
// SIG undefined FUN_1410a9cc6(void)

undefined8 FUN_1410a9cc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410a9cf4 FUN_1410a9cf4 body=161 status=ok
// SIG undefined FUN_1410a9cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410a9cf4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b134850;
  if (param_1[3] != 0) {
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
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1410a9d96 FUN_1410a9d96 body=36 status=ok
// SIG undefined FUN_1410a9d96(void)

undefined8 FUN_1410a9d96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1410a9dba FUN_1410a9dba body=36 status=ok
// SIG undefined FUN_1410a9dba(void)

undefined8 FUN_1410a9dba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1410a9dde FUN_1410a9dde body=31 status=ok
// SIG undefined FUN_1410a9dde(void)

undefined8 FUN_1410a9dde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410a9dfe FUN_1410a9dfe body=31 status=ok
// SIG undefined FUN_1410a9dfe(void)

undefined8 FUN_1410a9dfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410a9ec8 FUN_1410a9ec8 body=416 status=ok
// SIG undefined FUN_1410a9ec8(void)

void FUN_1410a9ec8(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = *(int *)(param_1 + 0x548);
  if (iVar2 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar9 = 0;
    iVar5 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x540);
    if (*(uint **)(param_1 + 0x540) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0x530);
    }
    uVar12 = *puVar4;
    if (uVar12 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar14 == uVar13) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar4[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar14 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar12 = 0xffffffff;
    iVar3 = iVar2;
    do {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x520) + 0x18 + (longlong)iVar5 * 0x30);
      if (lVar10 != 0) {
        FUN_14129ffc2(lVar10 + 0x28);
        iVar3 = *(int *)(param_1 + 0x548);
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar4 = *(uint **)(param_1 + 0x540);
      if (*(uint **)(param_1 + 0x540) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0x530);
      }
      iVar5 = (int)uVar13;
      lVar10 = (longlong)iVar5;
      uVar6 = puVar4[lVar10] & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar11 = 0;
          do {
            uVar6 = puVar4[lVar10 + lVar11 + 1];
            if (uVar6 != 0) {
              uVar13 = (ulonglong)(iVar5 + (int)lVar11 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1410aa020;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar10 != lVar11);
          uVar12 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar13 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1410aa020:
        uVar14 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar14 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 1410aa068 FUN_1410aa068 body=536 status=ok
// SIG undefined FUN_1410aa068(void)

void FUN_1410aa068(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0xa8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar1;
  if (*(int *)(param_1 + 0xc0) == 0) {
    uVar16 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar16 = local_68 >> 0x20;
    iVar11 = *(int *)(param_1 + 0xc0);
  }
  lVar6 = local_60;
  iVar8 = (int)local_68;
  uVar15 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  lVar14 = param_1;
  if (local_58._4_4_ != iVar11 || local_60 != lVar1) {
    do {
      local_70 = lVar14;
      lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10 + (longlong)iVar7 * 0x28);
      if (((*(char *)(lVar14 + 0xf8) == '\x01') &&
          (lVar12 = FUN_14092c0b8(), param_1 = local_70, *(char *)(lVar12 + 0xb0) == '\0')) &&
         (plVar4 = *(longlong **)(lVar14 + 0x150), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x80))(plVar4,*(undefined4 *)(lVar14 + 400));
        param_1 = local_70;
      }
      uVar15 = uVar15 & ~(uint)uVar16;
      lVar14 = *(longlong *)(lVar6 + 0x10);
      if (*(longlong *)(lVar6 + 0x10) == 0) {
        lVar14 = lVar6;
      }
      iVar3 = *(int *)(lVar6 + 0x18);
      lVar12 = (longlong)iVar8;
      uVar9 = *(uint *)(lVar14 + lVar12 * 4) & uVar15;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar5 = iVar7;
        if (iVar7 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar13 = 0;
          do {
            uVar9 = *(uint *)(lVar14 + lVar12 * 4 + 4 + lVar13 * 4);
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar13 + 1;
              uVar15 = 0xffffffff;
              goto LAB_1410aa197;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar5 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          iVar8 = iVar5;
        }
        iVar8 = iVar8 + 1;
        param_1 = local_70;
        iVar7 = iVar3;
      }
      else {
LAB_1410aa197:
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
      lVar14 = local_70;
    } while (iVar7 != iVar11 || lVar6 != lVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410aa284 FUN_1410aa284 body=67 status=ok
// SIG undefined FUN_1410aa284(void)

void FUN_1410aa284(longlong *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)((longlong)param_1 + 0x52) == '\x01') {
    cVar1 = (**(code **)(*param_1 + 0x30))();
    if (cVar1 == '\0') {
      iVar2 = FUN_14092bea2(param_1,*(undefined8 *)((longlong)param_1 + 0x54));
      *(int *)(param_1 + 5) = iVar2 + *(int *)((longlong)param_1 + 0x2c);
      iVar3 = FUN_1407aff76(param_1);
      iVar2 = (int)param_1[8];
      if ((int)param_1[8] < iVar3) {
        iVar2 = iVar3;
      }
      *(int *)(param_1 + 8) = iVar2;
    }
  }
  return;
}



// FUNCTION 1410aa2c8 FUN_1410aa2c8 body=122 status=ok
// SIG undefined FUN_1410aa2c8(void)

void FUN_1410aa2c8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (*(char *)((longlong)param_1 + 0x66) == '\x01') {
    cVar3 = (**(code **)(*param_1 + 0x30))();
    if (cVar3 == '\0') {
      iVar4 = FUN_14092bea2(param_1,param_1[7]);
      iVar5 = *(int *)((longlong)param_1 + 0x4c);
      uVar6 = (ulonglong)(uint)(iVar5 + iVar4);
      *(int *)(param_1 + 9) = iVar5 + iVar4;
      if ((int)param_1[8] != 0x7fffffff) {
        iVar1 = *(int *)((longlong)param_1 + 0x44);
        uVar6 = (longlong)iVar1 % (longlong)iVar5 & 0xffffffff;
        *(int *)(param_1 + 8) = (iVar1 / iVar5) * iVar4 + iVar1;
      }
      iVar5 = FUN_1402e04a8(param_1,uVar6);
      lVar2 = param_1[0x10];
      if (((int)lVar2 != iVar5) && (*(int *)(param_1 + 0x10) = iVar5, iVar5 < (int)lVar2)) {
        FUN_1402e0832(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410aa342 FUN_1410aa342 body=2295 status=ok
// SIG undefined FUN_1410aa342(void)

void FUN_1410aa342(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  undefined4 *_Src;
  int *_Src_00;
  undefined8 *puVar7;
  undefined1 *_Src_01;
  undefined1 auStack_188 [32];
  ulonglong local_168;
  undefined8 local_160;
  undefined *local_158;
  code *local_150;
  undefined8 local_148;
  int local_140;
  undefined4 local_13c;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  memset(local_138,0,0x100);
  local_68 = 0xffffffff;
  local_134 = 0x3f800000;
  local_94 = 0xffffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_158 = (undefined *)FUN_1446ddbd2();
      local_150 = FUN_1403a682c;
      local_160 = 0;
      local_168 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_138);
            goto LAB_1410aa457;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_138) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_138,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_138,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_160 = CONCAT44(local_160._4_4_,(int)plVar1[6]);
        local_168 = local_168 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_138,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_138,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
LAB_1410aa457:
  local_13c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_150 = FUN_1408a629c;
      local_158 = &DAT_14c9520b8;
      local_160 = 0;
      local_168 = 0x1008101;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_13c);
            goto LAB_1410aa523;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_13c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_13c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_13c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_160 = CONCAT44(local_160._4_4_,(int)plVar1[6]);
        local_168 = local_168 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_13c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_13c,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_13c);
  }
LAB_1410aa523:
  local_140 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_158 = (undefined *)FUN_1446ddbd2();
      local_150 = FUN_14067a048;
      local_160 = 0;
      local_168 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_140);
            goto LAB_1410aa5ef;
          }
        }
        _Src_00 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_140) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_140,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_140,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_160 = CONCAT44(local_160._4_4_,(int)plVar1[6]);
        local_168 = local_168 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_140,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_140,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
LAB_1410aa5ef:
  iVar5 = local_140;
  local_148 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_158 = (undefined *)FUN_1446ddbd2();
      local_150 = FUN_1409e12a0;
      local_160 = 0;
      local_168 = 0xa001;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_148);
            goto LAB_1410aa6c0;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_148) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_148,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_148,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_160 = CONCAT44(local_160._4_4_,(int)plVar1[6]);
        local_168 = local_168 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_148,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_148,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
LAB_1410aa6c0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_168 = local_148;
  (**(code **)(*param_1 + 0x918))(param_1,local_138,local_13c,iVar5 != 0);
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410aac3a FUN_1410aac3a body=130 status=ok
// SIG undefined FUN_1410aac3a(void)

void FUN_1410aac3a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
      FUN_1402ef0c8(param_1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1410aacbc FUN_1410aacbc body=284 status=ok
// SIG undefined FUN_1410aacbc(void)

undefined8 FUN_1410aacbc(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_1410aadd2;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410aadd2;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1410aadd2:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410aad7f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1410aad7f;
    }
  }
  uVar6 = 0;
LAB_1410aad7f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410aadda thunk_FUN_1410aade0 body=5 status=ok
// SIG undefined thunk_FUN_1410aade0(void)

void thunk_FUN_1410aade0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined4 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined2 *puStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  code **ppcStack_70;
  undefined1 *puStack_68;
  code *pcStack_60;
  code *pcStack_58;
  longlong *plStack_50;
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_1410aaf05;
  if (DAT_14cba8288 == 0) {
    ppcStack_70 = &pcStack_58;
    pcStack_58 = FUN_141864c34;
    pcStack_60 = FUN_14081d0ea;
    puStack_68 = &LAB_1464cee30;
    puStack_78 = &LAB_148bfac22;
    puStack_80 = &LAB_140f21842;
    puStack_88 = &DAT_149e063b2;
    uStack_90 = 0;
    uStack_98 = 0x10000004;
    uStack_a0 = 0x10;
    uStack_a8 = 0x9cd0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
  }
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1410aaf05;
  *(undefined1 *)(param_1 + 0x1a4) = *(undefined1 *)(lVar5 + 0x4944);
  FUN_1410ab14c(lVar5 + 0x4780,param_1 + 400,param_1 + 0x194,param_1 + 0x198);
  if (*(char *)(lVar5 + 0x4958) == '\0') {
    bVar11 = 1 < *(int *)(lVar5 + 0x4924);
  }
  else {
    bVar11 = true;
  }
  *(bool *)(param_1 + 0x18c) = bVar11;
  if (*(char *)(lVar5 + 0x4958) == '\x01') {
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
LAB_1410ab100:
      lVar7 = 0;
    }
    else {
      lVar6 = FUN_144a2f878();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) goto LAB_1410ab100;
    }
    lVar7 = FUN_140eaf14a(lVar7);
    iVar8 = 0;
    if (lVar7 != 0) {
      lVar6 = FUN_144a5dd5e();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        iVar8 = *(int *)(lVar7 + 0x2740);
      }
    }
  }
  else {
    iVar4 = *(int *)(lVar5 + 0x4924) - *(int *)(lVar5 + 0x4918);
    iVar8 = 0;
    if (0 < iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x188) = iVar8;
  lVar5 = FUN_1407afa82(lVar5);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar5 + 0x96c);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar5 + 0x93c);
  }
LAB_1410aaf05:
  lVar5 = *(longlong *)(param_1 + 0x180);
  if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x128) != 0)) {
    puVar9 = *(undefined8 **)(lVar5 + 0x120);
    puVar10 = puVar9 + (longlong)*(int *)(lVar5 + 0x128) * 2;
    do {
      plVar3 = (longlong *)puVar9[1];
      if (plVar3 == (longlong *)0x0) {
        plStack_50 = (longlong *)0x0;
LAB_1410ab08f:
        pcStack_58 = (code *)0x0;
        FUN_140dcab30(param_1,&pcStack_58);
      }
      else {
        pcStack_58 = (code *)*puVar9;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar8 = (int)plVar3[1];
        do {
          if (iVar8 == 0) {
            plStack_50 = (longlong *)0x0;
            goto LAB_1410ab08f;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar11 = iVar8 == iVar4;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
            iVar4 = iVar8;
          }
          iVar8 = iVar4;
          UNLOCK();
        } while (!bVar11);
        plStack_50 = plVar3;
        if (plVar3 == (longlong *)0x0) goto LAB_1410ab08f;
        FUN_140dcab30(param_1,&pcStack_58);
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar10);
  }
  if ((uStack_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410aade0 FUN_1410aade0 body=874 status=ok
// SIG undefined FUN_1410aade0(void)

void FUN_1410aade0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
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
  longlong *plStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  lVar5 = *(longlong *)(param_1 + 0x20);
  if (lVar5 == 0) goto LAB_1410aaf05;
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
  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_1410aaf05;
  *(undefined1 *)(param_1 + 0x1a4) = *(undefined1 *)(lVar5 + 0x4944);
  FUN_1410ab14c(lVar5 + 0x4780,param_1 + 400,param_1 + 0x194,param_1 + 0x198);
  if (*(char *)(lVar5 + 0x4958) == '\0') {
    bVar11 = 1 < *(int *)(lVar5 + 0x4924);
  }
  else {
    bVar11 = true;
  }
  *(bool *)(param_1 + 0x18c) = bVar11;
  if (*(char *)(lVar5 + 0x4958) == '\x01') {
    lVar7 = *(longlong *)(param_1 + 0x20);
    if (lVar7 == 0) {
LAB_1410ab100:
      lVar7 = 0;
    }
    else {
      lVar6 = FUN_144a2f878();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) goto LAB_1410ab100;
    }
    lVar7 = FUN_140eaf14a(lVar7);
    iVar8 = 0;
    if (lVar7 != 0) {
      lVar6 = FUN_144a5dd5e();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        iVar8 = *(int *)(lVar7 + 0x2740);
      }
    }
  }
  else {
    iVar4 = *(int *)(lVar5 + 0x4924) - *(int *)(lVar5 + 0x4918);
    iVar8 = 0;
    if (0 < iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x188) = iVar8;
  lVar5 = FUN_1407afa82(lVar5);
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(lVar5 + 0x96c);
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(lVar5 + 0x93c);
  }
LAB_1410aaf05:
  lVar5 = *(longlong *)(param_1 + 0x180);
  if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x128) != 0)) {
    puVar9 = *(undefined8 **)(lVar5 + 0x120);
    puVar10 = puVar9 + (longlong)*(int *)(lVar5 + 0x128) * 2;
    do {
      plVar3 = (longlong *)puVar9[1];
      if (plVar3 == (longlong *)0x0) {
        plStack_50 = (longlong *)0x0;
LAB_1410ab08f:
        local_58 = (code *)0x0;
        FUN_140dcab30(param_1,&local_58);
      }
      else {
        local_58 = (code *)*puVar9;
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        iVar8 = (int)plVar3[1];
        do {
          if (iVar8 == 0) {
            plStack_50 = (longlong *)0x0;
            goto LAB_1410ab08f;
          }
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar11 = iVar8 == iVar4;
          if (bVar11) {
            *(int *)(plVar3 + 1) = iVar8 + 1;
            iVar4 = iVar8;
          }
          iVar8 = iVar4;
          UNLOCK();
        } while (!bVar11);
        plStack_50 = plVar3;
        if (plVar3 == (longlong *)0x0) goto LAB_1410ab08f;
        FUN_140dcab30(param_1,&local_58);
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
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      puVar9 = puVar9 + 2;
    } while (puVar9 != puVar10);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ab14c FUN_1410ab14c body=164 status=ok
// SIG undefined FUN_1410ab14c(void)

void FUN_1410ab14c(longlong param_1,undefined4 *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  int iVar2;
  
  *param_2 = 0;
  *param_3 = 0.0;
  *param_4 = 0;
  if (*(char *)(param_1 + 0x1c4) != '\0') {
    if ((*(byte *)(param_1 + 0x55) & 2) == 0) {
      *param_2 = *(undefined4 *)(param_1 + 0x1bc);
      *param_3 = *(float *)(param_1 + 0x1b0);
      *param_4 = *(undefined4 *)(param_1 + 0x1b4);
    }
    else if (*(int *)(param_1 + 0x1d0) != 0) {
      iVar2 = FUN_1410ab1f0(param_1);
      *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x1c8) + 4 + (longlong)iVar2 * 0x20);
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x1c8) + (longlong)iVar2 * 0x20);
      if (0.0 < fVar1) {
        *param_3 = 1.0 / fVar1;
      }
    }
  }
  return;
}



// FUNCTION 1410ab1f0 FUN_1410ab1f0 body=141 status=ok
// SIG undefined FUN_1410ab1f0(void)

ulonglong FUN_1410ab1f0(longlong param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  cVar1 = *(char *)(param_1 + 0x1c4);
  uVar2 = 0;
  if ((cVar1 != '\0') && (1 < (longlong)*(int *)(param_1 + 0x1d0))) {
    fVar6 = *(float *)(&DAT_14b964a90 + (ulonglong)(cVar1 == '\x01') * 4);
    uVar3 = 0;
    lVar4 = 4;
    uVar2 = 0;
    do {
      if (cVar1 == '\x01') {
        lVar5 = *(longlong *)(param_1 + 0x1c8);
        if ((*(char *)(lVar5 + 0x18 + lVar4) == '\0') && (fVar6 < *(float *)(lVar5 + lVar4))) {
LAB_1410ab266:
          fVar6 = *(float *)(lVar5 + lVar4);
          uVar2 = uVar3 & 0xffffffff;
        }
      }
      else if (((cVar1 == '\x02') &&
               (lVar5 = *(longlong *)(param_1 + 0x1c8), *(char *)(lVar5 + 0x18 + lVar4) == '\x01'))
              && (*(float *)(lVar5 + lVar4) <= fVar6 && fVar6 != *(float *)(lVar5 + lVar4)))
      goto LAB_1410ab266;
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x1d0) != uVar3);
  }
  return uVar2;
}



// FUNCTION 1410ab27e FUN_1410ab27e body=284 status=ok
// SIG undefined FUN_1410ab27e(void)

undefined8 FUN_1410ab27e(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_1410ab394;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410ab394;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1410ab394:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410ab341;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1410ab341;
    }
  }
  uVar6 = 0;
LAB_1410ab341:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ab39c FUN_1410ab39c body=53 status=ok
// SIG undefined FUN_1410ab39c(void)

void FUN_1410ab39c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x6e8))();
  if (param_1[0x16e] != 0) {
    FUN_1447f69b6(param_1[0x16e] + 0x6078);
    return;
  }
  return;
}



// FUNCTION 1410ab3da FUN_1410ab3da body=355 status=ok
// SIG undefined FUN_1410ab3da(void)

undefined8 * FUN_1410ab3da(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(ulonglong *)(param_1 + 0x60) == 0) ||
     (*(ulonglong *)(param_1 + 0x60) < *(ulonglong *)(param_3 + 0x250))) {
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_3 + 0x248);
    plVar1 = (longlong *)(param_1 + 0x68);
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (*(int *)(param_1 + 0x74) != 0) {
      FUN_1410ab53e(plVar1,0);
    }
    if (*(char *)(param_3 + 0x270) == '\0') {
      *(int *)(param_3 + 0x264) = *(int *)(param_3 + 0x264) + 1;
    }
    else {
      LOCK();
      *(int *)(param_3 + 0x264) = *(int *)(param_3 + 0x264) + 1;
      UNLOCK();
    }
    local_60 = param_1;
    local_58 = param_3;
    iVar6 = FUN_1403b8464(&local_60,0);
    lVar5 = local_58;
    iVar2 = *(int *)(param_3 + 0x10);
    for (; local_50 = iVar6, iVar6 != iVar2; iVar6 = FUN_1403b8464(&local_60,iVar6 + 1)) {
      uVar4 = *(undefined8 *)(*(longlong *)(lVar5 + 0x60) + (longlong)iVar6 * 8);
      iVar3 = *(int *)(param_1 + 0x70);
      *(uint *)(param_1 + 0x70) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
        FUN_1410ab59e(plVar1,iVar3);
      }
      *(undefined8 *)(*plVar1 + (longlong)iVar3 * 8) = uVar4;
    }
    if (local_60 != 0) {
      if (*(char *)(local_58 + 0x270) == '\0') {
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_58 + 0x264) = *(int *)(local_58 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  *param_2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x70);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ab53e FUN_1410ab53e body=96 status=ok
// SIG undefined FUN_1410ab53e(void)

void FUN_1410ab53e(longlong param_1,int param_2)

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



// FUNCTION 1410ab59e FUN_1410ab59e body=353 status=ok
// SIG undefined FUN_1410ab59e(void)

void FUN_1410ab59e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410ab623;
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
LAB_1410ab623:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1410ab700 FUN_1410ab700 body=94 status=ok
// SIG undefined FUN_1410ab700(void)

undefined8 * FUN_1410ab700(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14bcd68a0;
  return param_1;
}



// FUNCTION 1410ab75e FUN_1410ab75e body=347 status=ok
// SIG undefined FUN_1410ab75e(void)

void FUN_1410ab75e(int *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auVar4 [16];
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar3 = param_1[6];
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 4);
    lVar8 = 0;
    do {
      *param_1 = *param_1 + *(int *)(lVar5 + 8 + lVar8);
      if (*(longlong *)(lVar5 + lVar8) != 0) {
        FUN_1400020a8();
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
    param_1[6] = 0;
    if (param_1[7] != 0) {
      FUN_1410ab8ba(param_1 + 4);
    }
    uVar7 = (ulonglong)*param_1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar7;
    lVar8 = SUB168(auVar4 * ZEXT816(0x2a0),0);
    lVar5 = -1;
    if (SUB168(auVar4 * ZEXT816(0x2a0),8) == 0) {
      lVar5 = lVar8 + (ulonglong)(lVar8 == 0);
    }
    lVar5 = FUN_14001cc68(lVar5);
    if (uVar7 != 0) {
      lVar8 = lVar5;
      do {
        lVar6 = 0;
        do {
          *(undefined8 *)(lVar8 + lVar6) = 0;
          ((undefined8 *)(lVar8 + lVar6))[1] = 0;
          puVar1 = (undefined4 *)(lVar8 + 0x10 + lVar6);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          puVar1[3] = 0x3ff00000;
          puVar2 = (undefined8 *)(lVar8 + 0x20 + lVar6);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar8 + 0x30 + lVar6);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar8 + 0x40 + lVar6);
          *puVar2 = 0x3ff0000000000000;
          puVar2[1] = 0x3ff0000000000000;
          puVar2 = (undefined8 *)(lVar8 + 0x50 + lVar6);
          *puVar2 = 0x3ff0000000000000;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar8 + 0x88 + lVar6);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar8 + 0x98 + lVar6);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar8 + 0xa8 + lVar6);
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2 = (undefined8 *)(lVar8 + 0xb8 + lVar6);
          *puVar2 = 0;
          puVar2[1] = 0;
          *(undefined8 *)(lVar8 + 200 + lVar6) = 0;
          lVar6 = lVar6 + 0xd0;
        } while (lVar6 != 0x1a0);
        *(undefined4 *)(lVar8 + 0x288) = 0xffffffff;
        lVar8 = lVar8 + 0x2a0;
      } while (lVar8 != lVar5 + uVar7 * 0x2a0);
    }
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 2) = lVar5;
  }
  param_1[1] = 0;
  return;
}



// FUNCTION 1410ab8ba FUN_1410ab8ba body=48 status=ok
// SIG undefined FUN_1410ab8ba(void)

void FUN_1410ab8ba(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1410ab8f2 FUN_1410ab8f2 body=133 status=ok
// SIG undefined FUN_1410ab8f2(void)

undefined8 * FUN_1410ab8f2(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14b405110;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0x19100;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  return param_1;
}



// FUNCTION 1410ab978 FUN_1410ab978 body=169 status=ok
// SIG undefined FUN_1410ab978(void)

undefined8 * FUN_1410ab978(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b53d700;
  FUN_1410aba21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b53d730;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140d4e9b8(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[4] + 0x10))();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410aba21 FUN_1410aba21 body=73 status=ok
// SIG undefined FUN_1410aba21(void)

void FUN_1410aba21(longlong param_1,int param_2)

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



// FUNCTION 1410aba6a FUN_1410aba6a body=203 status=ok
// SIG undefined FUN_1410aba6a(void)

void FUN_1410aba6a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bc22110;
  FUN_1410abb6d(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x22) = 0;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_1410abb36(param_1 + 0x19);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_1410abb36(param_1 + 0xf);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1410abb36 FUN_1410abb36 body=55 status=ok
// SIG undefined FUN_1410abb36(void)

void FUN_1410abb36(longlong *param_1)

{
  FUN_1410abb98(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410abb6d FUN_1410abb6d body=43 status=ok
// SIG undefined FUN_1410abb6d(void)

void FUN_1410abb6d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1493015fe(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1410abb98 FUN_1410abb98 body=123 status=ok
// SIG undefined FUN_1410abb98(void)

void FUN_1410abb98(longlong param_1,int param_2)

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



// FUNCTION 1410abc14 FUN_1410abc14 body=64 status=ok
// SIG undefined FUN_1410abc14(void)

void FUN_1410abc14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = FUN_14052bcbc(param_1,param_5);
  if (lVar1 != 0) {
    FUN_1410abc54(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 1410abc54 FUN_1410abc54 body=527 status=ok
// SIG undefined FUN_1410abc54(void)

void FUN_1410abc54(longlong param_1,undefined8 param_2,undefined8 param_3,wchar_t *param_4)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  wchar_t *_Str1;
  uint uVar7;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  undefined1 local_88;
  undefined7 uStack_87;
  undefined2 *local_80;
  int local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140056680(&local_88);
  plVar4 = (longlong *)FUN_140d68e64(param_1,&local_88);
  if (CONCAT71(uStack_87,local_88) != 0) {
    FUN_1400020a8();
  }
  FUN_1446f470e(&local_58,param_3,1);
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    uVar2 = (uint)((ulonglong)local_58 >> 0x10);
    uVar7 = (uint)local_58 & 0xffff;
    plVar5 = plVar4 + 7;
    if ((longlong *)plVar4[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar4[8];
    }
    iVar3 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)plVar4[9] - 1U &
                    (int)((ulonglong)local_58 >> 0x20) + ((uint)local_58 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *plVar4 + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*plVar4 + (longlong)iVar3 * 0x40) == local_58) {
          if ((lVar1 != 0) && (lVar1 + 8 != 0)) {
            if (*(int *)(lVar1 + 0x18) == 0) {
              _Str1 = L"";
            }
            else {
              _Str1 = *(wchar_t **)(lVar1 + 0x10);
            }
            iVar3 = wcscmp(_Str1,param_4);
            if (iVar3 != 0) {
              *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
              FUN_1457f38f8(lVar1 + 8,param_4);
            }
            goto LAB_1410abda2;
          }
          break;
        }
        iVar3 = *(int *)(lVar1 + 0x38);
      } while (iVar3 != -1);
    }
  }
  FUN_1446f470e(local_90,param_3,1);
  local_88 = 7;
  FUN_140056680(&local_80,param_4);
  local_70 = 0;
  uStack_68 = 0;
  puVar6 = local_80;
  if (local_78 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  local_60 = FUN_144a1ccda(puVar6,0);
  FUN_1406e0f98(&local_88);
  FUN_1446f470e(local_98,param_3,1);
  local_50 = local_98;
  local_48 = &local_88;
  FUN_1457f3958(plVar4,local_3c,&local_50,0);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
LAB_1410abda2:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410abe72 FUN_1410abe72 body=522 status=ok
// SIG undefined FUN_1410abe72(void)

undefined8 FUN_1410abe72(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  uint local_58 [6];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = DAT_14cbcdbe8;
  local_78 = DAT_14cbcdbe0;
  FUN_1448075d0(local_58);
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
      iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar6[10] - 1U & local_58[0]) * 4);
      if (iVar8 != -1) {
        do {
          lVar2 = *plVar6 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar8 * 0x40) == local_58[0]) {
            if ((((lVar2 != 0) &&
                 (puVar7 = (undefined8 *)(lVar2 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_1410abf24;
            break;
          }
          iVar8 = *(int *)(lVar2 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_1410abf24:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar7 != (byte *)0x0) && ((*(byte *)*puVar7 & 3) == 1)) {
    uVar5 = FUN_146612b16();
    FUN_148d7ecdc(param_1 + 0x11,uVar5,0,0);
    FUN_148d8a83e(param_1 + 0x11,&local_78);
    FUN_14049dff8(local_78 + 8,puVar7);
    local_60 = DAT_14cbcdc00;
    local_68 = DAT_14cbcdbf8;
    FUN_1448075d0(local_58);
    uVar5 = FUN_144a06846(param_2,local_58);
    uVar4 = FUN_1410c4486(uVar5,0);
    *(undefined1 *)(local_78 + 0x14) = uVar4;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    plVar6 = (longlong *)CONCAT44(uStack_6c,local_70);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar6 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  uVar5 = (**(code **)(*param_1 + 8))(param_1);
  FUN_1402057ac(param_2,param_1,uVar5,0);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1410ac07e FUN_1410ac07e body=234 status=ok
// SIG undefined FUN_1410ac07e(void)

longlong * FUN_1410ac07e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x3f8);
  if (lVar2 == 0) {
    uVar4 = FUN_145c272be();
    lVar2 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x3f8) = lVar2;
  }
  plVar5 = *(longlong **)(param_1 + 0x400);
  if (plVar5 == (longlong *)0x0) {
    if (lVar2 == 0) {
      return (longlong *)0x0;
    }
    if (*(longlong *)(param_1 + 0x3f0) == 0) {
      return (longlong *)0x0;
    }
    plVar5 = *(longlong **)(lVar2 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar1 == '\0')) {
      *(undefined8 *)(param_1 + 0x400) = 0;
      return (longlong *)0x0;
    }
    uVar4 = (**(code **)(*plVar5 + 0x110))(plVar5);
    plVar5 = (longlong *)FUN_144aff482(uVar4,(longlong *)(param_1 + 0x3f0));
    *(longlong **)(param_1 + 0x400) = plVar5;
    if (plVar5 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  lVar2 = (**(code **)(*plVar5 + 8))(plVar5);
  lVar3 = FUN_1410ac168();
  if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30) {
      return plVar5;
    }
    return (longlong *)0x0;
  }
  return (longlong *)0x0;
}



// FUNCTION 1410ac168 FUN_1410ac168 body=57 status=ok
// SIG undefined FUN_1410ac168(void)

void FUN_1410ac168(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaca08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaca08 = FUN_140002ddd(FUN_1465e3382,uVar1,L"OakMapViewerDef");
  }
  return;
}



// FUNCTION 1410ac1a1 FUN_1410ac1a1 body=73 status=ok
// SIG undefined FUN_1410ac1a1(void)

void FUN_1410ac1a1(longlong param_1,int param_2)

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



// FUNCTION 1410ac1ea FUN_1410ac1ea body=311 status=ok
// SIG undefined FUN_1410ac1ea(void)

undefined8 FUN_1410ac1ea(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1410ac31a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410ac31a;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_1410ac31a:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410ac2c3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1410ac2c3;
    }
  }
  uVar6 = 0;
LAB_1410ac2c3:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ac360 FUN_1410ac360 body=371 status=ok
// SIG undefined FUN_1410ac360(void)

void FUN_1410ac360(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(longlong *)(param_1 + 0x8c4) != 0) &&
      (*(longlong *)(param_1 + 0x8c4) != *(longlong *)(param_1 + 0x8a8))) &&
     (plVar3 = *(longlong **)(param_1 + 0x888), plVar3 != (longlong *)0x0)) {
    uVar2 = FUN_140437988();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140437988();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        uVar2 = (**(code **)(*plVar4 + 0x18))(plVar4);
        local_1c = 0;
        local_30 = *(undefined8 *)(param_1 + 0x8a0);
        local_28 = 0xffffffff;
        cVar1 = FUN_140f8b8f2(uVar2,&local_30,param_1 + 0x8c4);
        if (cVar1 != '\0') goto LAB_1410ac392;
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x8d0) != 0) &&
     ((*(longlong *)(param_1 + 0x8dc) != *(longlong *)(param_1 + 0x8b4) ||
      (*(longlong *)(param_1 + 0x8e4) != *(longlong *)(param_1 + 0x8bc))))) {
    FUN_140ef5478(param_1,param_1 + 0x8d0,0);
    if (*(longlong *)(param_1 + 0x8d0) != 0) {
      *(undefined8 *)(param_1 + 0x8d0) = 0;
      *(undefined4 *)(param_1 + 0x8d8) = 0xffffffff;
    }
    *(undefined8 *)(param_1 + 0x8dc) = 0;
    *(undefined8 *)(param_1 + 0x8e4) = 0;
    if (*(longlong *)(param_1 + 0x8ec) != 0) {
      *(undefined8 *)(param_1 + 0x8ec) = 0;
      *(undefined4 *)(param_1 + 0x8f4) = 0xffffffff;
    }
  }
LAB_1410ac392:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ac4d4 FUN_1410ac4d4 body=140 status=ok
// SIG undefined FUN_1410ac4d4(void)

void FUN_1410ac4d4(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  FUN_1410ac560();
  if (((param_2 != 0) && (*(char *)(param_1 + 0x178) == '\x03')) &&
     (iVar1 = *(int *)(param_1 + 0xe20), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xe18);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_144a2f878();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (lVar5 = param_2,
           *(longlong *)
            (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
          lVar5 = 0;
        }
        (**(code **)(*plVar3 + 0x18))(plVar3,lVar5);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 1410ac560 FUN_1410ac560 body=148 status=ok
// SIG undefined FUN_1410ac560(void)

void FUN_1410ac560(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 0x103) = 1;
  if (((param_2 != 0) && ((char)param_1[0x2f] == '\x03')) && ((int)param_1[0x102] == 0)) {
    FUN_140c3fa48(param_1,param_1 + 0x101,param_2,1);
  }
  if (((*(byte *)(param_1 + 0x7c) & 2) != 0) && (*(char *)((longlong)param_1 + 0x819) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x819) = 1;
    (**(code **)(*param_1 + 0x6b0))(param_1,1);
  }
  plVar1 = (longlong *)param_1[0x104];
  if (((plVar1 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x81a) == '\x01')) &&
     (*(char *)((longlong)plVar1 + 0x3c) == '\0')) {
    *(undefined1 *)((longlong)plVar1 + 0x3c) = 1;
                    /* WARNING: Could not recover jumptable at 0x0001410ac5e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 1410ac5f4 FUN_1410ac5f4 body=3149 status=ok
// SIG undefined FUN_1410ac5f4(void)

void FUN_1410ac5f4(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  uint uVar9;
  byte extraout_var;
  byte extraout_var_00;
  byte extraout_var_01;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 *puVar23;
  int *piVar25;
  ulonglong *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint *puVar29;
  longlong lVar30;
  int iVar31;
  bool bVar32;
  float fVar33;
  undefined1 auStack_408 [40];
  longlong local_3e0;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  ulonglong local_3c8;
  undefined1 local_3bc [4];
  ulonglong local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_388;
  undefined4 local_380;
  undefined8 local_37c;
  int local_374;
  int local_370 [2];
  int *local_368;
  int local_360;
  ulonglong local_358;
  undefined8 *local_350;
  undefined8 local_348;
  ulonglong local_340;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  undefined8 *puVar24;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_408;
  local_3b8 = 0;
  uStack_3b0 = 0;
  iVar17 = 0;
  local_388 = 0;
  local_380 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_37c = 0xffffffff00000080;
  local_374 = 0;
  local_368 = (int *)0x0;
  local_360 = 0;
  local_3d8 = (undefined8 *)(param_1 + 0x90);
  local_358 = 0x100000000;
  local_350 = local_3d8;
  local_348 = 0xffffffff;
  local_340 = local_340 & 0xffffffff00000000;
  if (*(int *)(param_1 + 0xa8) == 0) {
    uVar21 = 1;
    local_348._0_4_ = 0xffffffff;
    iVar22 = 0;
    local_348._4_4_ = 0;
    local_358._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_358);
    uVar21 = local_358 >> 0x20;
    iVar17 = *(int *)(param_1 + 0xa8);
    iVar22 = (int)local_340;
  }
  local_3e0 = param_1;
  if (local_348._4_4_ != iVar17 || local_350 != local_3d8) {
    local_3c8 = 0;
    puVar18 = local_350;
    iVar13 = (int)local_358;
    iVar12 = local_348._4_4_;
    uVar19 = (uint)local_348;
    local_3d0 = local_350;
    do {
      puVar26 = (ulonglong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar12 * 0x28);
      local_358 = *puVar26;
      local_350 = (undefined8 *)0x0;
      local_348 = local_348 & 0xffffffff00000000;
      FUN_1410ad242(&local_350,puVar26 + 1);
      uVar7 = local_358;
      uVar28 = uStack_3b0;
      local_340 = puVar26[3];
      if (((uint)local_340 & 0xff00) != 0x400) {
        iVar12 = (int)(local_340 >> 0x20);
        if (99 < iVar12) {
          iVar12 = 100;
        }
        if (iVar12 < 0) {
          iVar12 = -1;
        }
        local_58 = CONCAT44(local_58._4_4_,iVar12);
        lVar27 = (longlong)(int)uStack_3b0;
        uVar9 = (int)uStack_3b0 + 1;
        uStack_3b0 = CONCAT44(uStack_3b0._4_4_,uVar9);
        if (uStack_3b0._4_4_ < uVar9) {
          FUN_1410ad374(&local_3b8,uVar28 & 0xffffffff);
        }
        lVar27 = lVar27 * 0x10;
        *(ulonglong *)(local_3b8 + lVar27) = uVar7;
        iVar31 = (int)local_3c8;
        *(int *)(local_3b8 + 8 + lVar27) = iVar31;
        *(int *)(local_3b8 + 0xc + lVar27) = iVar12;
        if (-1 < (int)local_58) {
          FUN_1447cbafe(&local_3a8,local_3bc,&local_58,0);
        }
        local_3c8 = (ulonglong)(iVar31 + 1);
        puVar18 = local_3d0;
      }
      param_1 = local_3e0;
      if ((uint)local_348 == 0) {
LAB_1410ac814:
        if (local_350 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_350 != (undefined8 *)0x0) {
        (**(code **)*local_350)(local_350,0);
        FUN_1446efa72(&local_350,0,0,0x10);
        local_348 = local_348 & 0xffffffff00000000;
        goto LAB_1410ac814;
      }
      uVar19 = uVar19 & ~(uint)uVar21;
      puVar16 = (undefined8 *)puVar18[2];
      if ((undefined8 *)puVar18[2] == (undefined8 *)0x0) {
        puVar16 = puVar18;
      }
      iVar31 = *(int *)(puVar18 + 3);
      lVar27 = (longlong)iVar13;
      uVar9 = *(uint *)((longlong)puVar16 + lVar27 * 4) & uVar19;
      if (uVar9 == 0) {
        iVar12 = iVar31 + 0x1e;
        if (-1 < iVar31 + -1) {
          iVar12 = iVar31 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar3 = iVar12;
        if (iVar12 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar13 < iVar12) {
          lVar30 = 0;
          do {
            uVar9 = *(uint *)((longlong)puVar16 + lVar30 * 4 + lVar27 * 4 + 4);
            if (uVar9 != 0) {
              iVar13 = iVar13 + (int)lVar30 + 1;
              uVar19 = 0xffffffff;
              goto LAB_1410ac88f;
            }
            iVar22 = iVar22 + 0x20;
            lVar30 = lVar30 + 1;
          } while (iVar3 - lVar27 != lVar30);
          uVar19 = 0xffffffff;
          iVar13 = iVar3;
        }
        iVar13 = iVar13 + 1;
        param_1 = local_3e0;
        puVar18 = local_3d0;
        iVar12 = iVar31;
      }
      else {
LAB_1410ac88f:
        uVar21 = (ulonglong)(-uVar9 & uVar9);
        uVar28 = uVar21 * 2 + 1;
        lVar27 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar12 = (iVar22 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
        if (iVar31 <= iVar12) {
          iVar12 = iVar31;
        }
      }
    } while (iVar12 != iVar17 || puVar18 != local_3d8);
  }
  uVar21 = local_3b8;
  iVar17 = (int)uStack_3b0;
  uVar28 = (ulonglong)(int)uStack_3b0;
  *(int *)(param_1 + 0xf0) = (int)uStack_3b0;
  if (1 < (longlong)uVar28) {
    memset(&local_348,0,0x2f0);
    local_358 = uVar21;
    local_350 = (undefined8 *)(uVar28 * 0x10 + uVar21 + -0x10);
    fVar33 = logf((float)iVar17);
    local_348 = CONCAT44(local_348._4_4_,(int)(longlong)(fVar33 + fVar33));
    puVar26 = &local_358;
    do {
      puVar16 = (undefined8 *)*puVar26;
      puVar18 = (undefined8 *)puVar26[1];
      iVar17 = (int)puVar26[2];
      iVar22 = (int)((ulonglong)((longlong)puVar18 - (longlong)puVar16) >> 4);
      uVar19 = iVar22 + 1;
      if (iVar17 != 0) {
LAB_1410ac9c0:
        if (8 < (int)uVar19) {
          uVar4 = puVar16[(ulonglong)(uVar19 >> 1) * 2];
          uVar5 = (puVar16 + (ulonglong)(uVar19 >> 1) * 2)[1];
          uVar6 = puVar16[1];
          puVar16[(ulonglong)(uVar19 >> 1) * 2] = *puVar16;
          (puVar16 + (ulonglong)(uVar19 >> 1) * 2)[1] = uVar6;
          local_58._0_4_ = (int)uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar5;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(int *)puVar16 = (int)local_58;
          *(undefined4 *)((longlong)puVar16 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_50._4_4_;
          puVar23 = puVar16;
          puVar20 = puVar18 + 2;
          local_58 = uVar4;
          uStack_50 = uVar5;
LAB_1410ac9f8:
          while (puVar24 = puVar23, puVar23 = puVar24 + 2, puVar23 <= puVar18) {
            if (*(int *)((longlong)puVar16 + 0xc) == *(int *)((longlong)puVar24 + 0x1c))
            goto LAB_1410ad12a;
            if (*(int *)((longlong)puVar16 + 0xc) < *(int *)((longlong)puVar24 + 0x1c)) break;
          }
          goto LAB_1410aca0f;
        }
        for (; puVar20 = puVar16, puVar23 = puVar16, puVar16 < puVar18; puVar18 = puVar18 + -2) {
          while (puVar24 = puVar20, puVar20 = puVar23 + 2, puVar20 <= puVar18) {
            if (*(int *)((longlong)puVar24 + 0xc) == *(int *)((longlong)puVar23 + 0x1c)) {
              FUN_144a78538(puVar24,puVar20);
              bVar32 = (bool)(extraout_var >> 7);
            }
            else {
              bVar32 = *(int *)((longlong)puVar24 + 0xc) < *(int *)((longlong)puVar23 + 0x1c);
            }
            puVar23 = puVar20;
            if (bVar32 == false) {
              puVar20 = puVar24;
            }
          }
          local_58 = *puVar24;
          uStack_50 = puVar24[1];
          uVar5 = local_58;
          uVar6 = uStack_50;
          uVar4 = puVar18[1];
          *puVar24 = *puVar18;
          puVar24[1] = uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(int *)puVar18 = (int)local_58;
          *(undefined4 *)((longlong)puVar18 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_50._4_4_;
          local_58 = uVar5;
          uStack_50 = uVar6;
        }
        goto LAB_1410acc48;
      }
LAB_1410ad0b3:
      if (uVar19 != 0) {
        iVar17 = (iVar22 - (iVar22 + -1 >> 0x1f)) + -1 >> 1;
        iVar22 = iVar17;
joined_r0x0001410acc64:
        do {
          iVar13 = iVar17 * 2 + 1;
          if (iVar13 < (int)uVar19) {
            iVar12 = iVar17 * 2 + 2;
            if (iVar12 < (int)uVar19) {
              iVar31 = *(int *)((longlong)puVar16 + (longlong)iVar13 * 0x10 + 0xc);
              iVar3 = *(int *)((longlong)puVar16 + (longlong)iVar12 * 0x10 + 0xc);
              if (iVar3 == iVar31) {
                FUN_144a78538(puVar16 + (longlong)iVar12 * 2,puVar16 + (longlong)iVar13 * 2);
                bVar32 = (bool)(extraout_var_01 >> 7);
              }
              else {
                bVar32 = iVar3 < iVar31;
              }
              if (bVar32 == false) {
                iVar13 = iVar12;
              }
            }
            puVar18 = puVar16 + (longlong)iVar17 * 2;
            puVar20 = puVar16 + (longlong)iVar13 * 2;
            iVar12 = *(int *)((longlong)puVar16 + (longlong)iVar13 * 0x10 + 0xc);
            iVar17 = *(int *)((longlong)puVar16 + (longlong)iVar17 * 0x10 + 0xc);
            if (iVar17 == iVar12) {
              iVar17 = FUN_144a78538(puVar18,puVar20);
              if (iVar17 < 0) goto LAB_1410accc6;
            }
            else if (iVar17 < iVar12) {
LAB_1410accc6:
              local_58 = *puVar18;
              uStack_50 = puVar18[1];
              uVar5 = local_58;
              uVar6 = uStack_50;
              uVar4 = puVar20[1];
              *puVar18 = *puVar20;
              puVar18[1] = uVar4;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(int *)puVar20 = (int)local_58;
              *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
              iVar17 = iVar13;
              local_58 = uVar5;
              uStack_50 = uVar6;
              goto joined_r0x0001410acc64;
            }
          }
          bVar32 = iVar22 != 0;
          iVar17 = iVar22 + -1;
          iVar22 = iVar17;
        } while (bVar32);
        if (1 < (int)uVar19) {
          uVar21 = (ulonglong)uVar19 - 1;
          local_58 = *puVar16;
          uStack_50 = puVar16[1];
          uVar5 = local_58;
          uVar6 = uStack_50;
          uVar4 = (puVar16 + uVar21 * 2)[1];
          *puVar16 = puVar16[uVar21 * 2];
          puVar16[1] = uVar4;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar18 = puVar16 + uVar21 * 2;
          *(int *)puVar18 = (int)local_58;
          *(undefined4 *)((longlong)puVar18 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_50._4_4_;
          local_58 = uVar5;
          uStack_50 = uVar6;
          if (uVar19 != 2) {
            do {
              iVar17 = 0;
              iVar13 = 1;
              iVar22 = 0;
              do {
                lVar27 = (longlong)(iVar17 + 2);
                iVar12 = iVar13;
                if (lVar27 < (longlong)uVar21) {
                  iVar31 = *(int *)((longlong)puVar16 + (longlong)iVar13 * 0x10 + 0xc);
                  iVar3 = *(int *)((longlong)puVar16 + lVar27 * 0x10 + 0xc);
                  if (iVar3 == iVar31) {
                    FUN_144a78538(puVar16 + lVar27 * 2,puVar16 + (longlong)iVar13 * 2);
                    bVar32 = (bool)(extraout_var_00 >> 7);
                  }
                  else {
                    bVar32 = iVar3 < iVar31;
                  }
                  if (bVar32 == false) {
                    iVar12 = iVar17 + 2;
                  }
                }
                puVar18 = puVar16 + (longlong)iVar22 * 2;
                puVar20 = puVar16 + (longlong)iVar12 * 2;
                iVar17 = *(int *)((longlong)puVar16 + (longlong)iVar12 * 0x10 + 0xc);
                iVar22 = *(int *)((longlong)puVar16 + (longlong)iVar22 * 0x10 + 0xc);
                if (iVar22 == iVar17) {
                  iVar17 = FUN_144a78538(puVar18,puVar20);
                  if (-1 < iVar17) break;
                }
                else if (iVar17 <= iVar22) break;
                uVar4 = *puVar18;
                uVar5 = puVar18[1];
                uVar6 = puVar20[1];
                *puVar18 = *puVar20;
                puVar18[1] = uVar6;
                local_58._0_4_ = (int)uVar4;
                local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
                uStack_50._0_4_ = (undefined4)uVar5;
                uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
                *(int *)puVar20 = (int)local_58;
                *(undefined4 *)((longlong)puVar20 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_50._4_4_;
                iVar17 = iVar12 * 2;
                iVar13 = iVar12 * 2 + 1;
                local_58 = uVar4;
                uStack_50 = uVar5;
                iVar22 = iVar12;
              } while ((longlong)iVar13 < (longlong)uVar21);
              uVar28 = uVar21 - 1;
              local_58 = *puVar16;
              uStack_50 = puVar16[1];
              uVar5 = local_58;
              uVar6 = uStack_50;
              uVar4 = (puVar16 + uVar28 * 2)[1];
              *puVar16 = puVar16[uVar28 * 2];
              puVar16[1] = uVar4;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar18 = puVar16 + uVar28 * 2;
              *(int *)puVar18 = (int)local_58;
              *(undefined4 *)((longlong)puVar18 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar18 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar18 + 0xc) = uStack_50._4_4_;
              bVar32 = 2 < uVar21;
              uVar21 = uVar28;
              local_58 = uVar5;
              uStack_50 = uVar6;
            } while (bVar32);
          }
        }
      }
LAB_1410acc48:
      puVar26 = puVar26 + -3;
    } while (&local_358 <= puVar26);
    uVar28 = uStack_3b0 & 0xffffffff;
  }
  if ((int)uVar28 < 1) {
    uVar21 = 1;
  }
  else {
    lVar27 = 0;
    uVar19 = 0;
    do {
      uVar9 = *(uint *)(local_3b8 + 0xc + lVar27 * 0x10);
      if (uVar9 == 0xffffffff) {
        uVar9 = 0;
        local_358 = local_358 & 0xffffffff00000000;
        if ((int)uStack_3a0 != local_374) {
          piVar25 = local_368;
          if (local_368 == (int *)0x0) {
            piVar25 = local_370;
          }
          iVar17 = *piVar25;
          if (iVar17 != -1) {
            uVar9 = 0;
            do {
              if (*(uint *)(local_3a8 + (longlong)iVar17 * 0xc) == uVar9) {
                uVar9 = uVar9 + 1;
                local_358 = CONCAT44(local_358._4_4_,uVar9);
                iVar17 = piVar25[uVar9 & local_360 + 0x7fffffffU];
              }
              else {
                iVar17 = *(int *)(local_3a8 + (longlong)iVar17 * 0xc + 4);
              }
            } while (iVar17 != -1);
          }
        }
        puVar29 = (uint *)(local_3b8 + lVar27 * 0x10 + 0xc);
        *puVar29 = uVar9;
        FUN_1447cbafe(&local_3a8,&local_58,&local_358,0);
        uVar9 = *puVar29;
        uVar28 = uStack_3b0 & 0xffffffff;
      }
      if ((int)uVar19 < (int)uVar9) {
        uVar19 = uVar9;
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 < (int)uVar28);
    uVar21 = (ulonglong)(uVar19 + 1);
  }
  lVar27 = local_3e0;
  plVar1 = (longlong *)(local_3e0 + 0xd0);
  iVar17 = *(int *)(local_3e0 + 0xdc);
  FUN_144716727(*(undefined8 *)(local_3e0 + 0xd0),*(undefined4 *)(local_3e0 + 0xd8));
  *(undefined4 *)(lVar27 + 0xd8) = 0;
  if ((iVar17 < 0) && (*(int *)(lVar27 + 0xdc) != 0)) {
    FUN_1403b10bc(plVar1,0);
  }
  plVar2 = (longlong *)(lVar27 + 0xe0);
  iVar17 = *(int *)(lVar27 + 0xec);
  FUN_1447a1747(*(undefined8 *)(lVar27 + 0xe0));
  *(undefined4 *)(lVar27 + 0xe8) = 0;
  if ((iVar17 < 0) && (*(int *)(lVar27 + 0xec) != 0)) {
    FUN_1408be2c4(plVar2);
  }
  iVar17 = *(int *)(lVar27 + 0xd8);
  uVar19 = (uint)uVar21;
  *(uint *)(lVar27 + 0xd8) = iVar17 + uVar19;
  if ((uint)(*(int *)(lVar27 + 0xdc) - iVar17) < uVar19) {
    FUN_140bfc2d4(plVar1);
  }
  memset((void *)((longlong)iVar17 * 0x10 + *(longlong *)(lVar27 + 0xd0)),0,uVar21 << 4);
  iVar17 = *(int *)(lVar27 + 0xe8);
  *(uint *)(lVar27 + 0xe8) = iVar17 + uVar19;
  if ((uint)(*(int *)(lVar27 + 0xec) - iVar17) < uVar19) {
    FUN_1447a1bd6(plVar2);
  }
  memset((void *)((longlong)iVar17 * 0x10 + *plVar2),0,uVar21 << 4);
  if (0 < (int)uStack_3b0) {
    lVar30 = 0;
    lVar27 = 0;
    do {
      uVar21 = local_3b8;
      lVar10 = (longlong)*(int *)(local_3b8 + 0xc + lVar30) * 0x10;
      if (1 < *(uint *)(*plVar2 + 8 + lVar10)) {
        FUN_140002184(*plVar2 + lVar10,0x2b);
      }
      FUN_1400021e4(uVar21 + lVar30,&local_358);
      iVar17 = (int)local_350 + -1;
      if ((int)local_350 == 0) {
        iVar17 = 0;
      }
      FUN_1400020e8((longlong)*(int *)(uVar21 + 0xc + lVar30) * 0x10 + *plVar2,local_358,iVar17);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
      lVar10 = *plVar1;
      lVar11 = (longlong)*(int *)(uVar21 + 0xc + lVar30) * 0x10;
      iVar17 = *(int *)(lVar10 + 8 + lVar11);
      *(uint *)(lVar10 + 8 + lVar11) = iVar17 + 1U;
      if (*(uint *)(lVar10 + 0xc + lVar11) < iVar17 + 1U) {
        FUN_1446f48e2((longlong *)(lVar10 + lVar11),iVar17);
      }
      *(undefined4 *)(*(longlong *)(lVar10 + lVar11) + (longlong)iVar17 * 4) =
           *(undefined4 *)(uVar21 + 8 + lVar30);
      lVar27 = lVar27 + 1;
      lVar30 = lVar30 + 0x10;
    } while (lVar27 < (int)uStack_3b0);
  }
  FUN_1447f69b6(local_3e0);
  local_360 = 0;
  if (local_368 != (int *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(&local_3a8);
  if (local_3b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1410ad12a:
  iVar22 = FUN_144a78538(puVar16,puVar23);
  if (-1 < iVar22) goto LAB_1410ac9f8;
LAB_1410aca0f:
  puVar15 = puVar20 + -2;
  puVar8 = puVar20;
  if (puVar16 < puVar15) {
    do {
      puVar20 = puVar8;
      puVar14 = puVar15;
      if (*(int *)((longlong)puVar20 - 4) == *(int *)((longlong)puVar16 + 0xc)) {
        iVar22 = FUN_144a78538(puVar20 + -2,puVar16);
        puVar15 = puVar14;
        if (iVar22 < 0) goto LAB_1410aca47;
      }
      else {
        puVar15 = puVar20 + -2;
        if (*(int *)((longlong)puVar20 - 4) < *(int *)((longlong)puVar16 + 0xc)) goto LAB_1410aca47;
      }
      puVar15 = puVar14 + -2;
      puVar8 = puVar20 + -2;
    } while (puVar16 < puVar20 + -4);
    puVar15 = puVar20 + -4;
    puVar20 = puVar14;
  }
LAB_1410aca47:
  if (puVar23 <= puVar15) {
    uVar4 = *puVar23;
    uVar5 = puVar24[3];
    uVar6 = puVar15[1];
    *puVar23 = *puVar15;
    puVar24[3] = uVar6;
    local_58._0_4_ = (int)uVar4;
    local_58._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_50._0_4_ = (undefined4)uVar5;
    uStack_50._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
    *(int *)puVar15 = (int)local_58;
    *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
    *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
    puVar20 = puVar15;
    local_58 = uVar4;
    uStack_50 = uVar5;
    goto LAB_1410ac9f8;
  }
  local_58 = *puVar16;
  uStack_50 = puVar16[1];
  uVar5 = local_58;
  uVar6 = uStack_50;
  uVar4 = puVar15[1];
  *puVar16 = *puVar15;
  puVar16[1] = uVar4;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(int *)puVar15 = (int)local_58;
  *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
  *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
  iVar17 = iVar17 + -1;
  puVar20 = puVar20 + -4;
  local_58 = uVar5;
  uStack_50 = uVar6;
  if ((longlong)puVar20 - (longlong)puVar16 < (longlong)puVar18 - (longlong)puVar23) {
    if (puVar23 < puVar18) {
      *puVar26 = (ulonglong)puVar23;
      puVar26[1] = (ulonglong)puVar18;
      *(int *)(puVar26 + 2) = iVar17;
      puVar26 = puVar26 + 3;
    }
    if (puVar15 <= puVar16 + 2) goto LAB_1410acc48;
  }
  else {
    if (puVar16 + 2 < puVar15) {
      *puVar26 = (ulonglong)puVar16;
      puVar26[1] = (ulonglong)puVar20;
      *(int *)(puVar26 + 2) = iVar17;
      puVar26 = puVar26 + 3;
    }
    puVar20 = puVar18;
    puVar16 = puVar23;
    if (puVar18 <= puVar23) goto LAB_1410acc48;
  }
  iVar22 = (int)((ulonglong)((longlong)puVar20 - (longlong)puVar16) >> 4);
  uVar19 = iVar22 + 1;
  puVar18 = puVar20;
  if (iVar17 == 0) goto LAB_1410ad0b3;
  goto LAB_1410ac9c0;
}



// FUNCTION 1410ad242 FUN_1410ad242 body=305 status=ok
// SIG undefined FUN_1410ad242(void)

void FUN_1410ad242(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1410ad2dc;
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
LAB_1410ad2b5:
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
      goto LAB_1410ad2b5;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1410ad2dc;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410ad2dc:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ad374 FUN_1410ad374 body=262 status=ok
// SIG undefined FUN_1410ad374(void)

void FUN_1410ad374(longlong param_1,int param_2)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1410ad47a FUN_1410ad47a body=75 status=ok
// SIG undefined FUN_1410ad47a(void)

void FUN_1410ad47a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410ad4c5 FUN_1410ad4c5 body=73 status=ok
// SIG undefined FUN_1410ad4c5(void)

void FUN_1410ad4c5(longlong param_1,int param_2)

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



// FUNCTION 1410ad50e FUN_1410ad50e body=76 status=ok
// SIG undefined FUN_1410ad50e(void)

void FUN_1410ad50e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x10);
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
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1410ad55a FUN_1410ad55a body=297 status=ok
// SIG undefined FUN_1410ad55a(void)

undefined8 FUN_1410ad55a(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1410ad67c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410ad67c;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1410ad67c:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410ad627;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1410ad627;
    }
  }
  uVar6 = 0;
LAB_1410ad627:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ad684 FUN_1410ad684 body=4956 status=ok
// SIG undefined FUN_1410ad684(void)

void FUN_1410ad684(longlong param_1,longlong param_2,PSRWLOCK *param_3)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  PVOID pvVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 uVar16;
  uint *puVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  PSRWLOCK pRVar24;
  PSRWLOCK pRVar25;
  uint uVar26;
  undefined7 uVar27;
  PSRWLOCK pRVar28;
  undefined7 uVar29;
  uint uVar30;
  PSRWLOCK *ppRVar31;
  byte bVar32;
  ulonglong uVar33;
  longlong *plVar34;
  ulonglong uVar35;
  longlong *plVar36;
  int iVar37;
  bool bVar38;
  bool bVar39;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  PSRWLOCK *local_170;
  undefined1 *local_168;
  code *local_160;
  PSRWLOCK local_158;
  undefined8 local_150;
  undefined8 local_148;
  ulonglong local_140;
  longlong *local_138;
  longlong local_130;
  uint local_124;
  PSRWLOCK local_120;
  longlong *local_118;
  PSRWLOCK local_110;
  PSRWLOCK *local_108;
  longlong *local_100;
  PSRWLOCK local_f8;
  PSRWLOCK local_f0;
  PVOID local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  int local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  longlong *local_88;
  undefined8 *local_80;
  int local_78;
  PSRWLOCK local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar19 = *(uint *)(param_2 + 4);
  if (((int)uVar19 < 2 && *(int *)(param_2 + 0x24) < 1) || ((int)uVar19 < 4)) goto LAB_1410ad713;
  lVar23 = *(longlong *)(param_2 + 0x18);
  lVar11 = FUN_1400d7050((PSRWLOCK)(param_1 + 0x30));
  if (lVar11 == 0) goto LAB_1410ad713;
  if (DAT_14cbadd90 == 0) {
    local_170 = &local_70;
    local_70 = (PSRWLOCK)FUN_141030f22;
    local_160 = FUN_14081d0ea;
    local_168 = &LAB_1459f2e4c;
    local_178 = &LAB_148c39de3;
    local_180 = &LAB_1457a9eb2;
    local_188 = &DAT_149e063b2;
    local_190 = 0;
    local_198 = 0x10000004;
    local_1a0 = 0x10;
    local_1a8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (plVar12 = (longlong *)FUN_140e06fb1(lVar11), pRVar24 = DAT_14cb88948, pRVar28 = DAT_14cb88940,
     pRVar25 = DAT_14cb88938, uVar16 = DAT_14cb88930, plVar12 == (longlong *)0x0))
  goto LAB_1410ad713;
  local_148 = DAT_14cb88950;
  local_150 = DAT_14cb88958;
  local_158 = DAT_14cb88960;
  local_120 = DAT_14cb88968;
  local_110 = DAT_14cb88970;
  local_80 = (undefined8 *)0x0;
  local_78 = 9;
  local_130 = lVar23;
  local_108 = param_3;
  local_100 = plVar12;
  local_f0 = (PSRWLOCK)(param_1 + 0x30);
  FUN_1401b309e(&local_80,9,0);
  *local_80 = uVar16;
  local_80[1] = pRVar25;
  local_80[2] = pRVar28;
  local_80[3] = pRVar24;
  local_80[4] = local_148;
  local_80[5] = local_150;
  local_80[6] = local_158;
  local_80[7] = local_120;
  local_80[8] = local_110;
  FUN_1449027d0(param_1,&local_70);
  pvVar4 = local_70[0x12].Ptr;
  pRVar25 = (PSRWLOCK)((longlong)pvVar4 + 0x110);
  AcquireSRWLockShared(pRVar25);
  plVar12 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_68 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  uVar7 = FUN_140aa68bc(pvVar4,param_2);
  if ((char)uVar7 == '\0') {
    FUN_1405f62be(local_100,&local_70);
    pRVar28 = local_70;
    lVar23 = local_130;
    local_120 = pRVar25;
    if (local_70 == (PSRWLOCK)0x0) {
      local_158 = (PSRWLOCK)CONCAT44(local_158._4_4_,0xffffffff);
      bVar38 = true;
      local_148 = (PSRWLOCK)((ulonglong)local_148 & 0xffffffff00000000);
      local_150 = (PSRWLOCK)((ulonglong)local_150 & 0xffffffff00000000);
      bVar32 = 0;
      bVar39 = false;
      uVar33 = 0;
    }
    else {
      plVar12 = (longlong *)(**(code **)((longlong)local_70->Ptr + 0xd0))(local_70);
      if ((longlong)(int)plVar12[1] != 0) {
        uVar33 = 0;
        do {
          if ((*(int *)(*plVar12 + uVar33) == *(int *)(lVar23 + 0x18)) &&
             (*(int *)(*plVar12 + 8 + uVar33) == *(int *)(lVar23 + 0x20))) {
            local_158 = (PSRWLOCK)CONCAT44(local_158._4_4_,0xffffffff);
            iVar8 = (int)(uVar33 >> 2) * -0x55555555;
            uVar29 = (undefined7)((ulonglong)pRVar25 >> 8);
            if (iVar8 == 0) {
              uVar33 = CONCAT71(uVar29,1);
              local_148 = (PSRWLOCK)((ulonglong)local_148._4_4_ << 0x20);
              local_150 = (PSRWLOCK)((ulonglong)local_150._4_4_ << 0x20);
              bVar32 = 0;
              bVar39 = false;
              bVar38 = false;
              goto LAB_1410add22;
            }
            if (iVar8 == 2) {
              uVar35 = (ulonglong)local_148._4_4_;
              uVar33 = CONCAT71(uVar29,4);
            }
            else {
              if (iVar8 != 1) break;
              uVar35 = (ulonglong)local_148 >> 0x20;
              uVar33 = CONCAT71(uVar29,2);
            }
            local_158 = (PSRWLOCK)CONCAT44(local_158._4_4_,0xffffffff);
            local_148 = (PSRWLOCK)(uVar35 << 0x20);
            local_150 = (PSRWLOCK)((ulonglong)local_150._4_4_ << 0x20);
            bVar32 = 0;
            bVar39 = false;
            bVar38 = false;
            goto LAB_1410add22;
          }
          uVar33 = uVar33 + 0xc;
        } while ((longlong)(int)plVar12[1] * 0xc != uVar33);
      }
      (**(code **)((longlong)pRVar28->Ptr + 0x78))(pRVar28,&local_90);
      local_110 = (PSRWLOCK)CONCAT71(uStack_8f,local_90);
      if (local_110 == (PSRWLOCK)0x0) {
        iVar8 = -1;
        local_148 = (PSRWLOCK)((ulonglong)local_148 & 0xffffffff00000000);
        local_150 = (PSRWLOCK)((ulonglong)local_150 & 0xffffffff00000000);
        bVar39 = false;
        uVar33 = 0;
      }
      else {
        plVar12 = (longlong *)FUN_1405f6336();
        uVar16 = FUN_140fa5e64();
        cVar5 = FUN_1448093f4(plVar12,uVar16);
        if (cVar5 == '\0') {
          plVar12 = (longlong *)0x0;
        }
        uVar13 = (**(code **)(*plVar12 + 0x80))(plVar12);
        lVar23 = local_130;
        iVar8 = (int)uVar13;
        uVar29 = (undefined7)((ulonglong)uVar13 >> 8);
        uVar27 = (undefined7)((ulonglong)uVar16 >> 8);
        if (iVar8 == 2) {
          local_140 = CONCAT71(uVar27,4);
          if ((longlong)*(int *)((longlong)pvVar4 + 0x100) != 0) {
            plVar18 = *(longlong **)((longlong)pvVar4 + 0xf8);
            lVar11 = (longlong)*(int *)((longlong)pvVar4 + 0x100) << 4;
            do {
              if (*(int *)(*plVar18 + 0x30) == 1) goto LAB_1410adc77;
              plVar18 = plVar18 + 2;
              lVar11 = lVar11 + -0x10;
            } while (lVar11 != 0);
          }
LAB_1410adc55:
          plVar18 = (longlong *)0x0;
LAB_1410adc77:
          uVar9 = (undefined4)CONCAT71(uVar29,plVar18 == (longlong *)0x0);
        }
        else {
          if (iVar8 == 1) {
            local_140 = CONCAT71(uVar27,2);
            if ((longlong)*(int *)((longlong)pvVar4 + 0xf0) != 0) {
              plVar18 = *(longlong **)((longlong)pvVar4 + 0xe8);
              lVar11 = (longlong)*(int *)((longlong)pvVar4 + 0xf0) << 4;
              do {
                if (*(int *)(*plVar18 + 0x30) == 1) goto LAB_1410adc77;
                plVar18 = plVar18 + 2;
                lVar11 = lVar11 + -0x10;
              } while (lVar11 != 0);
            }
            goto LAB_1410adc55;
          }
          if (iVar8 == 0) {
            if ((longlong)*(int *)((longlong)pvVar4 + 0xe0) != 0) {
              plVar18 = *(longlong **)((longlong)pvVar4 + 0xd8);
              lVar11 = (longlong)*(int *)((longlong)pvVar4 + 0xe0) << 4;
              do {
                if (*(int *)(*plVar18 + 0x30) == 1) {
                  local_140 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
                  goto LAB_1410adc77;
                }
                plVar18 = plVar18 + 2;
                lVar11 = lVar11 + -0x10;
              } while (lVar11 != 0);
            }
            local_140 = 1;
            goto LAB_1410adc55;
          }
          local_140 = 0;
          uVar9 = (undefined4)CONCAT71(uVar29,1);
        }
        local_148 = (PSRWLOCK)CONCAT44(local_148._4_4_,uVar9);
        lVar11 = FUN_1406b1d14(plVar12,(ulonglong)uVar19 * 0xc + -0x18 + local_130);
        uVar9 = FUN_1418eb602(plVar12);
        local_150 = (PSRWLOCK)CONCAT44(local_150._4_4_,uVar9);
        uVar33 = local_140;
        if ((lVar11 == 0) ||
           (lVar23 = (ulonglong)uVar19 * 0xc + lVar23,
           *(uint *)(lVar23 + -0xc) != (uint)DAT_14cb88978)) {
          bVar39 = false;
        }
        else if (((*(uint *)(lVar23 + -4) == DAT_14cb88980) && (*(char *)(lVar11 + 0x3ab) == '\0'))
                && ((longlong)local_78 != 0)) {
          lVar23 = 0;
          do {
            bVar39 = *(PSRWLOCK *)((longlong)local_80 + lVar23) == *local_108;
            if (bVar39) break;
            bVar38 = (longlong)local_78 * 8 + -8 != lVar23;
            lVar23 = lVar23 + 8;
          } while (bVar38);
        }
        else {
          bVar39 = false;
        }
      }
      local_158 = (PSRWLOCK)CONCAT44(local_158._4_4_,iVar8);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar12 = local_88 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar1 = (int *)((longlong)local_88 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
          }
        }
      }
      bVar38 = local_110 == (PSRWLOCK)0x0;
      bVar32 = 1;
    }
LAB_1410add22:
    plVar12 = local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_68 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    pRVar25 = local_120;
    if (bVar38) {
      ReleaseSRWLockShared(local_120);
      goto LAB_1410add6b;
    }
  }
  else {
    uVar33 = (ulonglong)uVar7;
    local_158 = (PSRWLOCK)CONCAT44(local_158._4_4_,0xffffffff);
    local_148 = (PSRWLOCK)((ulonglong)local_148 & 0xffffffff00000000);
    local_150 = (PSRWLOCK)((ulonglong)local_150 & 0xffffffff00000000);
    bVar32 = 0;
    bVar39 = false;
  }
  plVar12 = (longlong *)FUN_140495e96(local_f0);
  iVar8 = (**(code **)(*plVar12 + 0x328))(plVar12);
  ReleaseSRWLockShared(pRVar25);
  if (((char)uVar33 == '\x02') || (iVar8 == 0)) {
    FUN_1449027d0(param_1,&local_70);
    pvVar4 = local_70[0x12].Ptr;
    local_120 = (PSRWLOCK)((longlong)pvVar4 + 0x110);
    AcquireSRWLockExclusive(local_120);
    plVar12 = local_68;
    *(int *)((longlong)pvVar4 + 0x108) = *(int *)((longlong)pvVar4 + 0x108) + 1;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_68 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (*(int *)((longlong)pvVar4 + 0x88) != *(int *)((longlong)pvVar4 + 0xb4)) {
      lVar23 = (longlong)pvVar4 + 0xb8;
      if (*(longlong *)((longlong)pvVar4 + 0xc0) != 0) {
        lVar23 = *(longlong *)((longlong)pvVar4 + 0xc0);
      }
      iVar8 = *(int *)(lVar23 + (ulonglong)
                                (*(int *)((longlong)pvVar4 + 200) - 1U & (uint)uVar33 & 0xff) * 4);
      if (iVar8 != -1) {
        do {
          lVar23 = *(longlong *)((longlong)pvVar4 + 0x80) + (longlong)iVar8 * 0x20;
          if (*(char *)(*(longlong *)((longlong)pvVar4 + 0x80) + (longlong)iVar8 * 0x20) ==
              (char)uVar33) {
            if (((longlong *)(lVar23 + 8) != (longlong *)0x0 && lVar23 != 0) && (bVar32 == 0)) {
              plVar12 = *(longlong **)(lVar23 + 8);
              local_90 = 0;
              local_d8 = (undefined8 *)((longlong)plVar12 + 0x5c);
              local_148 = (PSRWLOCK)(plVar12 + 0x19);
              local_110 = (PSRWLOCK)(ulonglong)(uVar19 - 1);
              local_f0 = (PSRWLOCK)&DAT_00000004;
              if (4 < uVar19) {
                local_f0 = (PSRWLOCK)(ulonglong)uVar19;
              }
              pRVar25 = (PSRWLOCK)(local_130 + (longlong)local_110 * 0xc);
              local_124 = (uint)CONCAT71((int7)((ulonglong)((longlong)local_110 * 3) >> 8),4);
              pRVar28 = (PSRWLOCK)&DAT_00000003;
              plVar36 = (longlong *)0x0;
              plVar18 = (longlong *)0x0;
              local_138 = (longlong *)0x0;
              local_100 = (longlong *)0x0;
              lVar23 = local_130;
              local_158 = pRVar25;
              local_150 = (PSRWLOCK)plVar12;
              local_140 = uVar33;
              local_e8 = pvVar4;
              goto LAB_1410ade95;
            }
            break;
          }
          iVar8 = *(int *)(lVar23 + 0x18);
        } while (iVar8 != -1);
      }
    }
    ReleaseSRWLockExclusive(local_120);
    if ((char)local_150 == '\0' && (byte)((byte)local_148 & bVar39 & bVar32) == 1) {
      FUN_14147f19c(param_1,(ulonglong)local_158 & 0xffffffff,local_130 + 0x18,1);
    }
  }
  goto LAB_1410add6b;
LAB_1410ade95:
  do {
    if (pRVar28 == local_110) {
      if (plVar18 == (longlong *)0x0) {
        bVar38 = false;
      }
      else {
        uVar19 = *(uint *)&pRVar25->Ptr;
        uVar7 = *(uint *)&pRVar25[1].Ptr;
        if (uVar7 != 0) {
          uVar19 = uVar7 >> 0xd ^ uVar19 - uVar7;
          uVar26 = uVar19 << 8 ^ (-0x61c88647 - uVar7) - uVar19;
          uVar30 = uVar26 >> 0xd ^ (uVar7 - uVar19) - uVar26;
          uVar19 = uVar30 >> 0xc ^ (uVar19 - uVar26) - uVar30;
          uVar7 = uVar19 << 0x10 ^ (uVar26 - uVar30) - uVar19;
          uVar30 = uVar7 >> 5 ^ (uVar30 - uVar19) - uVar7;
          uVar26 = uVar30 >> 3 ^ (uVar19 - uVar7) - uVar30;
          uVar19 = uVar26 << 10 ^ (uVar7 - uVar30) - uVar26;
          uVar19 = uVar19 >> 0xf ^ uVar30 - (uVar26 + uVar19);
        }
        iVar8 = FUN_14427e4d6(plVar18 + 0x15,uVar19,local_158);
        plVar12 = plVar18;
        if (iVar8 == -1) {
LAB_1410adf6f:
          uVar19 = *(uint *)&local_158->Ptr;
          uVar7 = *(uint *)&local_158[1].Ptr;
          if (uVar7 != 0) {
            uVar19 = uVar7 >> 0xd ^ uVar19 - uVar7;
            uVar26 = uVar19 << 8 ^ (-0x61c88647 - uVar7) - uVar19;
            uVar30 = uVar26 >> 0xd ^ (uVar7 - uVar19) - uVar26;
            uVar19 = uVar30 >> 0xc ^ (uVar19 - uVar26) - uVar30;
            uVar7 = uVar19 << 0x10 ^ (uVar26 - uVar30) - uVar19;
            uVar30 = uVar7 >> 5 ^ (uVar30 - uVar19) - uVar7;
            uVar26 = uVar30 >> 3 ^ (uVar19 - uVar7) - uVar30;
            uVar19 = uVar26 << 10 ^ (uVar7 - uVar30) - uVar26;
            uVar19 = uVar19 >> 0xf ^ uVar30 - (uVar26 + uVar19);
          }
          iVar8 = FUN_14427e4d6(plVar18 + 0x1f,uVar19,local_158);
          bVar38 = true;
          pRVar25 = local_158;
          if ((iVar8 == -1) ||
             (lVar11 = plVar18[0x1f] + (longlong)iVar8 * 0x28,
             puVar14 = (undefined8 *)(lVar11 + 0x10), puVar14 == (undefined8 *)0x0 || lVar11 == 0))
          goto LAB_1410ae0ae;
        }
        else {
          lVar11 = plVar18[0x15];
          if (lVar11 + (longlong)iVar8 * 0x28 == 0) goto LAB_1410adf6f;
          puVar14 = (undefined8 *)(lVar11 + (longlong)iVar8 * 0x28 + 0x10);
        }
        plVar15 = local_138;
        local_100 = (longlong *)*puVar14;
        plVar34 = (longlong *)puVar14[1];
        if (plVar34 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
          UNLOCK();
        }
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_138 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        bVar38 = false;
        pRVar25 = local_158;
        local_138 = plVar34;
      }
LAB_1410ae0ae:
      plVar34 = plVar12;
      if (local_100 != (longlong *)0x0) {
        plVar34 = local_100;
      }
      if ((*(uint *)&pRVar25->Ptr == (uint)DAT_14cb88978) &&
         (*(uint *)&pRVar25[1].Ptr == DAT_14cb88980)) {
        local_70 = *local_108;
        pRVar24 = DAT_14cb88970;
        if ((((local_70 == DAT_14cb88970 || (local_70 == DAT_14cb88960 || local_70 == DAT_14cb88968)
              ) || local_70 == DAT_14cb88958) ||
            (pRVar24 = DAT_14cb88950,
            (local_70 == DAT_14cb88950 || (local_70 == DAT_14cb88948 || local_70 == DAT_14cb88940))
            || local_70 == DAT_14cb88938)) ||
           (pRVar24 = DAT_14cb889a8,
           (local_70 == DAT_14cb889a8 || (local_70 == DAT_14cb889a0 || local_70 == DAT_14cb88998))
           || local_70 == DAT_14cb88990)) {
          local_70 = pRVar24;
        }
        lVar11 = *plVar34;
        ppRVar31 = &local_70;
      }
      else {
        lVar11 = *plVar34;
        ppRVar31 = local_108;
      }
      (**(code **)(lVar11 + 8))(plVar34,pRVar25,ppRVar31);
      plVar12 = (longlong *)local_150;
      if (plVar18 == (longlong *)0x0) {
        if ((*(int *)&pRVar25->Ptr == DAT_14cb889b0) &&
           (local_124 = local_124 & 0xff, *(int *)&pRVar25[1].Ptr == DAT_14cb889b4._4_4_)) {
          local_124 = 3;
        }
      }
      else if ((bVar38) && ((int)plVar18[0x11] != 0)) {
        local_98 = (undefined4)plVar18[0x12];
        local_a0 = plVar18[0x11];
        local_118 = plVar18;
        plVar15 = (longlong *)FUN_146637100(local_150,&local_a0,&local_90);
        plVar18 = local_118;
        plVar12 = (longlong *)local_150;
        pRVar25 = local_158;
        if (plVar15 != (longlong *)0x0) {
          uVar19 = (uint)DAT_14cb88978;
          if (DAT_14cb88980 != 0) {
            uVar19 = DAT_14cb88980 >> 0xd ^ (uint)DAT_14cb88978 - DAT_14cb88980;
            uVar7 = uVar19 << 8 ^ (-0x61c88647 - DAT_14cb88980) - uVar19;
            uVar26 = uVar7 >> 0xd ^ (DAT_14cb88980 - uVar19) - uVar7;
            uVar19 = uVar26 >> 0xc ^ (uVar19 - uVar7) - uVar26;
            uVar7 = uVar19 << 0x10 ^ (uVar7 - uVar26) - uVar19;
            uVar30 = uVar7 >> 5 ^ (uVar26 - uVar19) - uVar7;
            uVar26 = uVar30 >> 3 ^ (uVar19 - uVar7) - uVar30;
            uVar19 = uVar26 << 10 ^ (uVar7 - uVar30) - uVar26;
            uVar19 = uVar19 >> 0xf ^ uVar30 - (uVar26 + uVar19);
          }
          iVar8 = FUN_140d9f664(plVar34 + 1,uVar19);
          if (iVar8 == -1) {
            lVar23 = 0;
          }
          else {
            lVar23 = (longlong)iVar8 * 0x1c + plVar34[1];
          }
          if ((longlong)local_78 != 0) {
            plVar12 = (longlong *)(lVar23 + 0xc);
            if (lVar23 == 0) {
              plVar12 = (longlong *)0x0;
            }
            lVar23 = 0;
            do {
              if (*(longlong *)((longlong)local_80 + lVar23) == *plVar12) {
                uVar6 = 1;
                goto LAB_1410ae724;
              }
              lVar23 = lVar23 + 8;
            } while ((longlong)local_78 * 8 != lVar23);
          }
          uVar6 = 0;
LAB_1410ae724:
          *(undefined1 *)(*plVar15 + 0x94) = uVar6;
          plVar18 = local_118;
          plVar12 = (longlong *)local_150;
          lVar23 = local_130;
          pRVar25 = local_158;
        }
      }
    }
    piVar1 = (int *)(lVar23 + (longlong)pRVar28 * 0xc);
    if ((*piVar1 == (int)DAT_14cb889c8) && (piVar1[2] == DAT_14cb889d0)) {
      local_124 = (uint)CONCAT71((int7)((ulonglong)piVar1 >> 8),2);
      if (plVar12 != (longlong *)0x0) {
        local_c0 = *local_d8;
        local_b8 = *(undefined4 *)(local_d8 + 1);
        local_118 = plVar18;
        local_f8 = pRVar28;
        FUN_1448075d0(&local_70,&local_c0);
        uVar16 = FUN_140fa5e12(&local_70);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        iVar8 = (int)*(longlong *)(local_150 + 0x1c);
        plVar18 = local_118;
        pRVar28 = local_f8;
        plVar12 = (longlong *)local_150;
        lVar23 = local_130;
        pRVar25 = local_158;
        if (iVar8 == 0) {
          uVar35 = 1;
          uVar33 = 0;
          iVar37 = 0;
          iVar20 = 0;
        }
        else {
          puVar17 = local_150[0x1b].Ptr;
          if (local_150[0x1b].Ptr == (uint *)0x0) {
            puVar17 = (uint *)local_148;
          }
          uVar19 = *puVar17;
          if (uVar19 == 0) {
            iVar20 = iVar8 + 0x1e;
            if (-1 < iVar8 + -1) {
              iVar20 = iVar8 + -1;
            }
            uVar33 = 0;
            uVar35 = (ulonglong)(uint)(iVar20 >> 5);
            if (iVar20 >> 5 < 1) {
              uVar35 = uVar33;
            }
            iVar37 = 0;
            do {
              if (uVar35 == uVar33) goto LAB_1410ae637;
              iVar37 = iVar37 + 0x20;
              uVar19 = puVar17[uVar33 + 1];
              uVar33 = uVar33 + 1;
            } while (uVar19 == 0);
          }
          else {
            uVar33 = 0;
            iVar37 = 0;
          }
          uVar35 = (ulonglong)(-uVar19 & uVar19);
          uVar3 = uVar35 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar20 = (iVar37 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar20) {
            iVar20 = iVar8;
          }
        }
        if (iVar20 != iVar8) {
          uVar19 = 0xffffffff;
          iVar10 = iVar8;
          local_e0 = plVar36;
          do {
            lVar23 = *(longlong *)(plVar12[0x17] + 0x10 + (longlong)iVar20 * 0x28);
            if (lVar23 != 0) {
              FUN_1400021e4(local_108,&local_70);
              pRVar25 = (PSRWLOCK)&DAT_149dfb77a;
              if ((int)local_68 != 0) {
                pRVar25 = local_70;
              }
              iVar20 = _wtoi((wchar_t *)pRVar25);
              local_d0 = *(undefined8 *)(lVar23 + 0x5c);
              local_c8 = *(undefined4 *)(lVar23 + 100);
              uVar6 = FUN_143def7a2(uVar16,&local_d0,iVar20);
              *(undefined1 *)(lVar23 + 0x68) = uVar6;
              if (local_70 != (PSRWLOCK)0x0) {
                FUN_1400020a8();
              }
              iVar10 = (int)*(longlong *)(local_150 + 0x1c);
              plVar12 = (longlong *)local_150;
            }
            uVar19 = uVar19 & ~(uint)uVar35;
            puVar17 = (uint *)plVar12[0x1b];
            if ((uint *)plVar12[0x1b] == (uint *)0x0) {
              puVar17 = (uint *)local_148;
            }
            iVar20 = (int)uVar33;
            lVar23 = (longlong)iVar20;
            uVar7 = puVar17[lVar23] & uVar19;
            if (uVar7 == 0) {
              iVar21 = iVar10 + 0x1e;
              if (-1 < iVar10 + -1) {
                iVar21 = iVar10 + -1;
              }
              iVar21 = iVar21 >> 5;
              iVar37 = iVar37 + 0x20;
              iVar22 = iVar21;
              if (iVar21 < iVar20) {
                iVar22 = iVar20;
              }
              if (iVar20 < iVar21) {
                lVar11 = 0;
                do {
                  uVar7 = puVar17[lVar23 + lVar11 + 1];
                  if (uVar7 != 0) {
                    uVar33 = (ulonglong)(iVar20 + (int)lVar11 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_1410ae5c1;
                  }
                  iVar37 = iVar37 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar22 - lVar23 != lVar11);
                uVar19 = 0xffffffff;
                iVar20 = iVar22;
              }
              uVar33 = (ulonglong)(iVar20 + 1);
              plVar12 = (longlong *)local_150;
              iVar20 = iVar10;
            }
            else {
LAB_1410ae5c1:
              uVar35 = (ulonglong)(-uVar7 & uVar7);
              uVar3 = uVar35 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              iVar20 = (iVar37 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
              if (iVar10 <= iVar20) {
                iVar20 = iVar10;
              }
            }
            plVar18 = local_118;
            pRVar28 = local_f8;
            lVar23 = local_130;
            plVar36 = local_e0;
            pRVar25 = local_158;
          } while (iVar20 != iVar8);
        }
      }
    }
    else if (plVar18 == (longlong *)0x0) {
      local_a8 = piVar1[2];
      local_b0 = *(undefined8 *)piVar1;
      puVar14 = (undefined8 *)FUN_146637100(plVar12,&local_b0,&local_90);
      if (puVar14 == (undefined8 *)0x0) break;
      plVar18 = (longlong *)*puVar14;
      plVar34 = (longlong *)puVar14[1];
      if (plVar34 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
        UNLOCK();
      }
      if (plVar36 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar36 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar36)(plVar36);
          LOCK();
          piVar1 = (int *)((longlong)plVar36 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar36 + 0x10))(plVar36);
          }
        }
      }
      plVar12 = (longlong *)local_150;
      plVar36 = plVar34;
      if (plVar18 == (longlong *)0x0) break;
    }
LAB_1410ae637:
    pRVar28 = (PSRWLOCK)((longlong)&pRVar28->Ptr + 1);
  } while (pRVar28 != local_f0);
  uVar19 = local_124;
  plVar12 = local_138;
  pRVar28 = (PSRWLOCK)FUN_14001cc68(0x40,0x10);
  pRVar25 = *local_108;
  pRVar28->Ptr = &PTR_FUN_14b8194d0;
  FUN_1447a97f4(pRVar28 + 1,param_2);
  *(uint *)&pRVar28[6].Ptr = uVar19 & 0xff;
  *(char *)((longlong)&pRVar28[6].Ptr + 4) = (char)local_140;
  pRVar28->Ptr = &PTR_FUN_14b819640;
  pRVar28[7].Ptr = pRVar25;
  plVar18 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar18[1] = (longlong)&DAT_100000001;
  *plVar18 = (longlong)&PTR_FUN_14b9affc0;
  plVar18[2] = (longlong)pRVar28;
  local_70 = pRVar28;
  local_68 = plVar18;
  if (plVar18 == (longlong *)0x0) {
    FUN_14147c8e0(local_e8,&local_70);
    pRVar25 = local_120;
  }
  else {
    LOCK();
    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
    UNLOCK();
    FUN_14147c8e0(local_e8);
    pRVar25 = local_120;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar34 = plVar18 + 1;
      *(int *)plVar34 = (int)*plVar34 + -1;
      UNLOCK();
      if ((int)*plVar34 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    LOCK();
    plVar34 = plVar18 + 1;
    *(int *)plVar34 = (int)*plVar34 + -1;
    UNLOCK();
    if ((int)*plVar34 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar12 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  if (plVar36 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar36 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plVar36)(plVar36);
      LOCK();
      piVar1 = (int *)((longlong)plVar36 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar36 + 0x10))(plVar36);
      }
    }
  }
  ReleaseSRWLockExclusive(pRVar25);
LAB_1410add6b:
  if (local_80 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410ad713:
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410ae9e2 FUN_1410ae9e2 body=749 status=ok
// SIG undefined FUN_1410ae9e2(void)

void FUN_1410ae9e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1457f4196(param_1 + 0x18);
  if (param_2 != (longlong *)0x0) {
    if (*(char *)(param_1 + 0xa0) == '\x01') {
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      FUN_1457f4184(param_2,&local_78);
      if ((longlong)(int)uStack_70 != 0) {
        local_d0 = local_78 + (int)uStack_70;
        plVar6 = local_78;
        do {
          lVar3 = *plVar6;
          if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x68), (longlong)iVar2 != 0)) {
            lVar3 = *(longlong *)(lVar3 + 0x60);
            lVar9 = 0;
            do {
              lVar7 = *(longlong *)(lVar3 + lVar9);
              if (lVar7 != 0) {
                if (*(int *)(lVar7 + 0x18) != 0) {
                  FUN_144a78877(*(undefined4 *)(lVar7 + 0x10),*(int *)(lVar7 + 0x18));
                }
                puVar5 = (undefined4 *)FUN_1410af470(param_1 + 0x18);
                *puVar5 = *(undefined4 *)(lVar7 + 0xa8);
                FUN_1410aed5a(puVar5 + 2,lVar7 + 0xb0);
              }
              lVar9 = lVar9 + 8;
            } while ((longlong)iVar2 * 8 != lVar9);
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != local_d0);
      }
      if (local_78 != (longlong *)0x0) {
        FUN_1400020a8(local_78);
      }
    }
    else {
      lVar3 = param_2[0x5e];
      local_d0 = param_2;
      if ((longlong)(int)lVar3 != 0) {
        lVar9 = param_2[0x5d];
        lVar7 = 0;
        do {
          local_90 = *(undefined4 *)(lVar9 + 8 + lVar7);
          local_98 = *(undefined8 *)(lVar9 + lVar7);
          local_88 = local_98;
          local_80 = local_90;
          FUN_1448075d0(&local_78,&local_98);
          plVar6 = (longlong *)FUN_14060eaf6(&local_78);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if ((plVar6 != (longlong *)0x0) &&
             (cVar4 = (**(code **)(*plVar6 + 0x50))(plVar6), cVar4 == '\0')) {
            local_a0 = local_80;
            local_a8 = local_88;
            FUN_1410aecd0(param_1,&local_a8,0);
          }
          lVar7 = lVar7 + 0xc;
        } while ((longlong)(int)lVar3 * 0xc != lVar7);
      }
      if ((longlong)(int)local_d0[0x58] != 0) {
        puVar8 = (undefined8 *)local_d0[0x57];
        puVar1 = (undefined8 *)((longlong)puVar8 + (longlong)(int)local_d0[0x58] * 0xc);
        do {
          local_b0 = *(undefined4 *)(puVar8 + 1);
          local_b8 = *puVar8;
          local_88 = local_b8;
          local_80 = local_b0;
          FUN_1448075d0(&local_78,&local_b8);
          plVar6 = (longlong *)FUN_14060eaf6(&local_78);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (((plVar6 != (longlong *)0x0) &&
              (cVar4 = (**(code **)(*plVar6 + 0x50))(plVar6), cVar4 == '\0')) &&
             (lVar3 = plVar6[0xd], (longlong)(int)lVar3 != 0)) {
            lVar9 = plVar6[0xc];
            lVar7 = 0;
            do {
              local_c0 = local_80;
              local_c8 = local_88;
              FUN_1410aeee4(param_1,&local_c8,*(undefined4 *)(lVar9 + lVar7),0);
              lVar7 = lVar7 + 0xc0;
            } while ((longlong)(int)lVar3 * 0xc0 != lVar7);
          }
          puVar8 = (undefined8 *)((longlong)puVar8 + 0xc);
        } while (puVar8 != puVar1);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410aecd0 FUN_1410aecd0 body=137 status=ok
// SIG undefined FUN_1410aecd0(void)

void FUN_1410aecd0(longlong param_1,undefined8 *param_2,byte param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 1) == 0) {
    uVar1 = *(undefined4 *)param_2;
  }
  else {
    uVar1 = FUN_144a78877(*(undefined4 *)param_2,*(int *)(param_2 + 1));
  }
  puVar2 = (uint *)FUN_1410af470(param_1 + 0x18,uVar1,param_2);
  *puVar2 = *puVar2 | 1 << (param_3 & 0x1f);
  local_30 = *(undefined4 *)(param_2 + 1);
  local_38 = *param_2;
  FUN_1410af366(param_1);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410aed5a FUN_1410aed5a body=394 status=ok
// SIG undefined FUN_1410aed5a(void)

undefined8 * FUN_1410aed5a(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 9);
  plVar1 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1410aed96;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  puVar6 = param_1 + 7;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*plVar1;
  }
  puVar7 = param_2 + 7;
  if ((undefined8 *)param_2[8] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_2[8];
  }
  memcpy(puVar6,puVar7,(longlong)iVar2 << 2);
LAB_1410aed96:
  *(int *)(param_1 + 9) = iVar2;
  uVar3 = *(uint *)(param_2 + 1);
  FUN_140d5a396(param_1,uVar3);
  iVar2 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar2 + uVar3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar3) {
    FUN_144869a3c(param_1);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar5 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = *(int *)(param_2 + 5);
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    puVar6 = param_2 + 2;
    if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_2[4];
    }
    puVar7 = param_1 + 2;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[4];
    }
    memcpy(puVar7,puVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar3 != 0) {
    memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar3 << 4);
  }
  return param_1;
}



// FUNCTION 1410aeee4 FUN_1410aeee4 body=1001 status=ok
// SIG undefined FUN_1410aeee4(void)

void FUN_1410aeee4(longlong param_1,undefined8 *param_2,uint param_3,byte param_4)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  byte local_79;
  ulonglong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = param_4;
  if (*(int *)(param_2 + 1) == 0) {
    uVar7 = *(undefined4 *)param_2;
  }
  else {
    uVar7 = FUN_144a78877(*(undefined4 *)param_2,*(int *)(param_2 + 1));
  }
  lVar8 = FUN_1410af470(param_1 + 0x18,uVar7,param_2);
  plVar1 = (longlong *)(lVar8 + 8);
  iVar17 = *(int *)(lVar8 + 0x10);
  iVar16 = *(int *)(lVar8 + 0x3c);
  if (iVar17 != iVar16) {
    lVar10 = lVar8 + 0x40;
    if (*(longlong *)(lVar8 + 0x48) != 0) {
      lVar10 = *(longlong *)(lVar8 + 0x48);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar8 + 0x50) - 1U & param_3) * 4);
    if (iVar6 != -1) {
      do {
        lVar10 = *plVar1 + (longlong)iVar6 * 0x10;
        if (*(uint *)(*plVar1 + (longlong)iVar6 * 0x10) == param_3) {
          if (lVar10 != 0) goto LAB_1410af041;
          break;
        }
        iVar6 = *(int *)(lVar10 + 8);
      } while (iVar6 != -1);
    }
  }
  if (iVar16 == 0) {
    *(int *)(lVar8 + 0x10) = iVar17 + 1;
    local_70 = param_1;
    if (*(int *)(lVar8 + 0x14) == iVar17) {
      FUN_144869a3c(plVar1,iVar17);
    }
    iVar16 = *(int *)(lVar8 + 0x30);
    if (iVar16 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar6 = iVar16 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    lVar10 = lVar8 + 0x18;
    iVar12 = iVar16 + 1;
    iVar15 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar15 = iVar16;
    }
    if (iVar15 >> 5 == iVar6) {
      *(int *)(lVar8 + 0x30) = iVar12;
    }
    else {
      if (*(int *)(lVar8 + 0x34) <= iVar16) {
        if (iVar16 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar6 = iVar16;
        }
        else {
          uVar5 = iVar16 + 0x20U >> 5;
          local_78 = (ulonglong)uVar5;
          if (*(int *)(lVar8 + 0x34) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar5) {
              uVar13 = uVar5;
            }
          }
          else {
            uVar13 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar13 << 2,0);
          iVar6 = (int)(uVar14 >> 2);
          iVar12 = -0x20;
          if ((int)local_78 <= iVar6) {
            iVar12 = iVar6 << 5;
          }
          iVar6 = *(int *)(lVar8 + 0x30);
        }
        *(int *)(lVar8 + 0x34) = iVar12;
        FUN_1446efbd8(lVar10,iVar6);
        iVar12 = *(int *)(lVar8 + 0x30) + 1;
      }
      iVar6 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar6 = iVar12;
      }
      *(int *)(lVar8 + 0x30) = iVar12;
      if (iVar12 % 0x20 != 0) {
        lVar9 = *(longlong *)(lVar8 + 0x28);
        if (*(longlong *)(lVar8 + 0x28) == 0) {
          lVar9 = lVar10;
        }
        bVar11 = -(char)(iVar12 % 0x20);
        *(uint *)(lVar9 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(lVar9 + (longlong)(iVar6 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar17;
    if (*(longlong *)(lVar8 + 0x28) != 0) {
      lVar10 = *(longlong *)(lVar8 + 0x28);
    }
    bVar11 = (byte)iVar16 & 0x1f;
    puVar2 = (uint *)(lVar10 + (longlong)(iVar15 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
    param_1 = local_70;
  }
  else {
    iVar17 = *(int *)(lVar8 + 0x38);
    lVar9 = (longlong)iVar17;
    iVar6 = *(int *)(*(longlong *)(lVar8 + 8) + 4 + lVar9 * 0x10);
    *(int *)(lVar8 + 0x38) = iVar6;
    *(int *)(lVar8 + 0x3c) = iVar16 + -1;
    if (iVar16 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(lVar8 + 8) + (longlong)iVar6 * 0x10) = 0xffffffff;
    }
  }
  iVar16 = 1;
  lVar10 = lVar8 + 0x18;
  if (*(longlong *)(lVar8 + 0x28) != 0) {
    lVar10 = *(longlong *)(lVar8 + 0x28);
  }
  iVar6 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar6 = iVar17;
  }
  puVar2 = (uint *)(lVar10 + (longlong)(iVar6 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar17 & 0x1f);
  lVar3 = *(longlong *)(lVar8 + 8);
  lVar9 = lVar9 * 0x10;
  lVar10 = lVar3 + lVar9;
  *(uint *)(lVar3 + lVar9) = param_3;
  *(undefined8 *)(lVar3 + 4 + lVar9) = 0xffffffff00000000;
  local_88 = 0;
  local_58 = iVar17;
  local_50 = lVar10;
  cVar4 = FUN_1410af2ce(plVar1,param_3,lVar10);
  if (cVar4 == '\0') {
    uVar5 = *(int *)(lVar8 + 0x10) - *(int *)(lVar8 + 0x3c);
    if (3 < uVar5) {
      uVar14 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar16 <= *(int *)(lVar8 + 0x50))) {
      param_3 = *(int *)(lVar8 + 0x50) - 1U & param_3;
      *(uint *)(lVar10 + 0xc) = param_3;
      lVar9 = *(longlong *)(lVar8 + 0x48);
      if (*(longlong *)(lVar8 + 0x48) == 0) {
        lVar9 = lVar8 + 0x40;
      }
      *(undefined4 *)(lVar10 + 8) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(lVar8 + 0x50) - 1U & (longlong)(int)param_3) * 4);
      lVar10 = lVar8 + 0x40;
      if (*(longlong *)(lVar8 + 0x48) != 0) {
        lVar10 = *(longlong *)(lVar8 + 0x48);
      }
      *(int *)(lVar10 + ((longlong)*(int *)(lVar8 + 0x50) - 1U & (longlong)(int)param_3) * 4) =
           iVar17;
    }
    else {
      *(int *)(lVar8 + 0x50) = iVar16;
      FUN_1410af8c2(plVar1);
    }
  }
  lVar10 = *plVar1 + (longlong)iVar17 * 0x10;
LAB_1410af041:
  *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | 1 << (local_79 & 0x1f);
  local_60 = *(undefined4 *)(param_2 + 1);
  local_68 = *param_2;
  FUN_1410af366(param_1);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410af2ce FUN_1410af2ce body=152 status=ok
// SIG undefined FUN_1410af2ce(void)

void FUN_1410af2ce(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

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
          FUN_144b399da(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_1410af2f2;
    }
  }
  uVar2 = 0;
LAB_1410af2f2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1410af366 FUN_1410af366 body=266 status=ok
// SIG undefined FUN_1410af366(void)

void FUN_1410af366(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  
  if ((*(char *)(param_1 + 0xa0) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 0x98), plVar3 != (longlong *)0x0)) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar7 = *(longlong *)(param_1 + 0x90);
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
    if ((lVar7 != 0) && (lVar7 = FUN_140bc5192(lVar7,param_2), lVar7 != 0)) {
      if (param_2[2] != 0) {
        FUN_144a78877(*param_2,param_2[2]);
      }
      iVar6 = FUN_1410af862((longlong *)(param_1 + 0x18));
      if (iVar6 != -1) {
        lVar4 = *(longlong *)(param_1 + 0x18);
        lVar8 = lVar4 + (longlong)iVar6 * 0x70;
        if ((lVar8 != 0) && ((longlong)iVar6 * 0x70 + lVar4 != -0x10)) {
          *(undefined4 *)(lVar7 + 0xa8) = *(undefined4 *)(lVar8 + 0x10);
          FUN_1410aed5a(lVar7 + 0xb0,lVar8 + 0x18);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410af470 FUN_1410af470 body=1008 status=ok
// SIG undefined FUN_1410af470(void)

longlong FUN_1410af470(longlong *param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  void *_Src;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = FUN_1410af862();
  if (iVar3 != -1) {
    if (*param_1 + (longlong)iVar3 * 0x70 != 0) {
      lVar6 = (longlong)iVar3 * 0x70 + *param_1;
      goto LAB_1410af69c;
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar3 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar3) {
      FUN_140275bcc(param_1,iVar3);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar4 = iVar15 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar10 = iVar15 + 1;
    iVar14 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar14 = iVar15;
    }
    if (iVar14 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar4 = iVar15;
        }
        else {
          uVar5 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar5) {
              uVar9 = uVar5;
            }
          }
          else {
            uVar9 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar4 = (int)(uVar11 >> 2);
          iVar10 = -0x20;
          if ((int)uVar5 <= iVar4) {
            iVar10 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar12,iVar4);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar4 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar4 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar8 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar3;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar15 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar3 = (int)param_1[6];
    lVar6 = (longlong)iVar3;
    iVar15 = *(int *)(*param_1 + 4 + lVar6 * 0x70);
    *(int *)(param_1 + 6) = iVar15;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar15 * 0x70) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar15 = iVar3 + 0x1f;
  if (-1 < iVar3) {
    iVar15 = iVar3;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar15 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar3 & 0x1f);
  iVar15 = 1;
  _Src = (void *)(*param_1 + lVar6 * 0x70);
  local_78 = 0;
  uStack_6c = 0;
  local_68 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_74 = 0x80;
  uStack_70 = 0xffffffff;
  puVar2 = (undefined8 *)(*param_1 + 0x18 + lVar6 * 0x70);
  *(undefined4 *)(puVar2 + -2) = *(undefined4 *)(param_3 + 1);
  puVar2[-3] = *param_3;
  *(undefined4 *)(puVar2 + -1) = 0;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  if (puVar2 != &uStack_a0) {
    *(undefined4 *)((longlong)_Src + 0x28) = 0;
    *(undefined4 *)((longlong)_Src + 0x2c) = 0;
    *(undefined4 *)((longlong)_Src + 0x30) = 0;
    *(undefined4 *)((longlong)_Src + 0x34) = 0;
    uStack_74 = 0;
  }
  *(undefined4 *)((longlong)_Src + 0x50) = 0;
  *(undefined8 *)((longlong)_Src + 0x58) = 0;
  uStack_60 = 0;
  *(undefined4 *)((longlong)_Src + 0x60) = 0;
  local_58 = 0;
  FUN_140d5a322();
  *(undefined4 *)((longlong)_Src + 0x68) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar5 = 1;
LAB_1410af638:
    if (((int)uVar5 < 1) || (iVar15 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)_Src + 0x6c) = param_2;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(undefined4 *)((longlong)_Src + 0x68) =
           *(undefined4 *)
            ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           iVar3;
    }
    else {
      *(int *)(param_1 + 9) = iVar15;
      FUN_1410afb42(param_1);
    }
  }
  else {
    iVar4 = FUN_1410af862(param_1,param_2,_Src);
    if (iVar4 == -1) {
      uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (3 < uVar5) {
        uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
        lVar6 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar15 = 1 << ((byte)lVar6 & 0x1f);
      }
      goto LAB_1410af638;
    }
    lVar6 = *param_1;
    lVar7 = (longlong)iVar4 * 0x70;
    *(undefined4 *)(lVar6 + 0x60 + lVar7) = 0;
    if (*(longlong *)(lVar6 + 0x58 + lVar7) != 0) {
      FUN_1400020a8();
    }
    FUN_140d5a322(lVar6 + lVar7 + 0x18);
    memmove((void *)(lVar6 + lVar7),_Src,0x68);
    FUN_1489222c2(param_1,iVar3);
  }
  lVar6 = *param_1 + (longlong)iVar3 * 0x70;
LAB_1410af69c:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar6 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410af862 FUN_1410af862 body=95 status=ok
// SIG undefined FUN_1410af862(void)

int FUN_1410af862(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x70;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x68 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1410af8c2 FUN_1410af8c2 body=640 status=ok
// SIG undefined FUN_1410af8c2(void)

void FUN_1410af8c2(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1410af925;
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
LAB_1410af925:
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



// FUNCTION 1410afb42 FUN_1410afb42 body=614 status=ok
// SIG undefined FUN_1410afb42(void)

void FUN_1410afb42(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x70);
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar11 * 0x70);
        local_70 = uVar5;
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        else {
          local_78 = plVar13;
          iVar4 = FUN_144a78877(*piVar1,iVar4);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[0x1b] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[0x1a] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_1410afd3e;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_1410afd3e:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410afdaa FUN_1410afdaa body=528 status=ok
// SIG undefined FUN_1410afdaa(void)

void FUN_1410afdaa(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
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
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x70;
      *(undefined4 *)(lVar11 + 0x60 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x58 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_140d5a322(lVar11 + lVar10 + 0x18);
      uVar12 = uVar12 & ~(uint)uVar8;
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
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_1410aff24;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1410aff24:
  plVar4 = local_70;
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140875b54(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar4,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410affbc FUN_1410affbc body=96 status=ok
// SIG undefined FUN_1410affbc(void)

ulonglong FUN_1410affbc(longlong param_1)

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
LAB_1410affff:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1410affff;
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



// FUNCTION 1410b001c FUN_1410b001c body=1364 status=ok
// SIG undefined FUN_1410b001c(void)

void FUN_1410b001c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint *puVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong *local_e8;
  undefined4 local_d0 [4];
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_2 != (longlong *)0x0) &&
      (lVar5 = (**(code **)(*param_2 + 0x100))(param_2), lVar5 != 0)) &&
     (*(char *)(param_1 + 0x34) == '\0')) {
    lVar6 = FUN_1403ca43f();
    uVar7 = (**(code **)(*param_2 + 0xd8))(param_2);
    if ((longlong)*(int *)(lVar6 + 0xd8) != 0) {
      lVar12 = *(longlong *)(lVar6 + 0xd0);
      lVar15 = (longlong)*(int *)(lVar6 + 0xd8) * 0x18;
      do {
        cVar3 = FUN_140334510(uVar7,lVar12,0);
        if (cVar3 != '\0') {
          local_f8 = local_f8 & 0xffffffffffffff00;
          local_d0[0] = 0;
          FUN_14575a19a(&local_f8,0);
          pfVar16 = &local_c0;
          FUN_1448729ea(lVar6 + 0x68,pfVar16,&local_f8);
          if (local_a0 == 3) {
            uVar14 = 3;
            fVar21 = local_c0;
          }
          else {
            pfVar17 = &local_98;
            FUN_1400b56fe(pfVar17,&local_c0,3);
            fVar21 = 0.0;
            if (local_78 != 0) {
              fVar21 = local_98;
            }
            pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
            if (pcVar2 != (code *)0x0) {
              if (0x18 < local_80) {
                pfVar17 = (float *)CONCAT44(uStack_94,local_98);
              }
              (*pcVar2)(pfVar17);
            }
            if (0x18 < local_80) {
              FUN_1400020a8(CONCAT44(uStack_94,local_98));
            }
            uVar14 = (uint)local_a0;
          }
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar14 * 0x120));
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_a8) {
              pfVar16 = (float *)CONCAT44(uStack_bc,local_c0);
            }
            (*pcVar2)(pfVar16);
          }
          if (0x18 < local_a8) {
            FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
          }
          FUN_1448173f8(local_d0);
          if (((char)local_f8 == '\x03') && (local_e8 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_e8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_e8 + 0x10))();
            }
          }
          uStack_f0 = 0;
          local_e8 = (longlong *)0x0;
          uVar14 = *(uint *)(lVar5 + 0xc);
          local_f8 = (ulonglong)uVar14;
          if ((int)uVar14 < DAT_14c9647dc) {
            lVar5 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
          }
          else {
            lVar5 = 0;
          }
          iVar4 = *(int *)(lVar5 + 0x10);
          if (*(int *)(lVar5 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            iVar8 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
            }
            LOCK();
            iVar4 = *(int *)(lVar5 + 0x10);
            bVar18 = iVar4 == 0;
            if (bVar18) {
              *(int *)(lVar5 + 0x10) = iVar8;
              iVar4 = 0;
            }
            UNLOCK();
            uVar14 = (uint)local_f8;
            if (bVar18) {
              iVar4 = iVar8;
            }
          }
          local_f8._0_4_ = uVar14;
          local_f8 = CONCAT44(iVar4,(uint)local_f8);
          lVar5 = (**(code **)(*param_2 + 0x108))(param_2);
          if (lVar5 == 0) {
            uStack_f0 = 0;
            iVar4 = 0;
          }
          else {
            uVar14 = *(uint *)(lVar5 + 0xc);
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar14);
            if ((int)uVar14 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar4 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar8 = DAT_14c964868 + 1;
              bVar18 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar18) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar8);
              }
              LOCK();
              iVar4 = *(int *)(lVar5 + 0x10);
              bVar18 = iVar4 == 0;
              if (bVar18) {
                *(int *)(lVar5 + 0x10) = iVar8;
                iVar4 = 0;
              }
              UNLOCK();
              if (bVar18) {
                iVar4 = iVar8;
              }
            }
          }
          uStack_f0 = CONCAT44(iVar4,(undefined4)uStack_f0);
          local_e8 = (longlong *)(**(code **)(*param_2 + 0xe0))(param_2);
          if (0 < (longlong)*(int *)(param_1 + 0x18)) {
            plVar11 = (longlong *)(param_1 + 0x10);
            uVar9 = (longlong)*(int *)(param_1 + 0x18);
            goto LAB_1410b0252;
          }
          break;
        }
        lVar12 = lVar12 + 0x18;
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != 0);
    }
  }
  goto LAB_1410b00c4;
LAB_1410b0252:
  do {
    uVar10 = uVar9 - 1;
    iVar4 = *(int *)(*plVar11 + 4 + uVar10 * 0x20);
    if (iVar4 == 0) {
LAB_1410b034f:
      FUN_1457f441a(plVar11,uVar10 & 0xffffffff);
      FUN_1457f43dc(plVar11);
    }
    else {
      puVar13 = (uint *)(*plVar11 + uVar10 * 0x20);
      uVar14 = *puVar13;
      if ((((int)uVar14 < 0) || (DAT_14c9647dc <= (int)uVar14)) ||
         ((lVar5 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar5 == 0 ||
          ((*(int *)(lVar5 + 0x10) != iVar4 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0))))))
      goto LAB_1410b034f;
      uVar7 = (**(code **)(*param_2 + 0xf8))(param_2);
      cVar3 = FUN_1410b05aa(puVar13,uVar7);
      if (cVar3 == '\0') {
        uVar14 = 0;
        fVar19 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
        if ((longlong)(int)puVar13[6] != 0) {
          lVar5 = *(longlong *)(puVar13 + 4);
          lVar6 = (longlong)(int)puVar13[6] << 5;
          do {
            cVar3 = FUN_140383372(lVar5,&local_f8);
            if (((cVar3 != '\0') && (cVar3 = FUN_1410b0572(lVar5 + 8,&uStack_f0), cVar3 != '\0')) &&
               (*(longlong **)(lVar5 + 0x10) == local_e8)) {
              fVar20 = *(float *)(lVar5 + 0x18);
              goto LAB_1410b036c;
            }
            lVar5 = lVar5 + 0x20;
            lVar6 = lVar6 + -0x20;
          } while (lVar6 != 0);
          uVar14 = puVar13[6];
        }
        puVar13[6] = uVar14 + 1;
        if (puVar13[7] < uVar14 + 1) {
          FUN_1457f44d0(puVar13 + 4,uVar14);
        }
        lVar6 = *(longlong *)(puVar13 + 4);
        lVar12 = (longlong)(int)uVar14 * 0x20;
        lVar5 = lVar6 + lVar12;
        *(longlong **)(lVar6 + 0x10 + lVar12) = local_e8;
        *(ulonglong *)(lVar6 + lVar12) = local_f8;
        ((ulonglong *)(lVar6 + lVar12))[1] = uStack_f0;
        *(undefined4 *)(lVar6 + 0x18 + lVar12) = 0;
        fVar20 = 0.0;
LAB_1410b036c:
        *(float *)(lVar5 + 0x18) = fVar19 * fVar21 + fVar20;
      }
    }
    bVar18 = 1 < uVar9;
    uVar9 = uVar10;
  } while (bVar18);
LAB_1410b00c4:
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410b0572 FUN_1410b0572 body=55 status=ok
// SIG undefined FUN_1410b0572(void)

ulonglong FUN_1410b0572(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1410b05aa FUN_1410b05aa body=325 status=ok
// SIG undefined FUN_1410b05aa(void)

ulonglong FUN_1410b05aa(uint *param_1,longlong param_2)

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



// FUNCTION 1410b06f0 FUN_1410b06f0 body=123 status=ok
// SIG undefined FUN_1410b06f0(void)

void FUN_1410b06f0(longlong param_1,int param_2)

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



// FUNCTION 1410b076c FUN_1410b076c body=9 status=ok
// SIG undefined FUN_1410b076c(void)

void FUN_1410b076c(longlong param_1)

{
  FUN_1410b0776(param_1 + 0x10);
  return;
}



// FUNCTION 1410b0776 FUN_1410b0776 body=1542 status=ok
// SIG undefined FUN_1410b0776(void)

void FUN_1410b0776(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  
  FUN_1408969b2();
  if (*(int *)(param_1 + 0x7f8) != -1) {
    *(undefined8 *)(param_1 + 0x7f8) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x7f4) == '\x01') {
    *(undefined1 *)(param_1 + 0x7f4) = 0;
  }
  if (*(int *)(param_1 + 0x7e8) != -1) {
    *(undefined8 *)(param_1 + 0x7e8) = 0xffffffff;
  }
  if (*(char *)(param_1 + 0x7e4) == '\x01') {
    *(undefined1 *)(param_1 + 0x7e4) = 0;
  }
  if (*(char *)(param_1 + 0x7dc) == '\x01') {
    *(undefined1 *)(param_1 + 0x7dc) = 0;
  }
  if (*(int *)(param_1 + 0x7d4) != -1) {
    if (*(longlong *)(param_1 + 0x7c8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    *(undefined8 *)(param_1 + 2000) = 0xffffffff00000000;
  }
  if (*(char *)(param_1 + 0x7c4) == '\x01') {
    *(undefined1 *)(param_1 + 0x7c4) = 0;
  }
  FUN_141743852(param_1 + 0x6d0);
  FUN_141743852(param_1 + 0x5e0);
  if (*(longlong *)(param_1 + 0x5d0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x5c0) != 0) {
    FUN_1400020a8();
  }
  FUN_1402c741b(*(undefined8 *)(param_1 + 0x5b0),*(undefined4 *)(param_1 + 0x5b8));
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FUN_1400020a8();
  }
  FUN_1402c741b(*(undefined8 *)(param_1 + 0x5a0),*(undefined4 *)(param_1 + 0x5a8));
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447ad90f(*(undefined8 *)(param_1 + 0x590),*(undefined4 *)(param_1 + 0x598));
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FUN_1400020a8();
  }
  FUN_1447ad90f(*(undefined8 *)(param_1 + 0x580),*(undefined4 *)(param_1 + 0x588));
  if (*(longlong *)(param_1 + 0x580) != 0) {
    FUN_1400020a8();
  }
  FUN_1447ad90f(*(undefined8 *)(param_1 + 0x570),*(undefined4 *)(param_1 + 0x578));
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x568) = 0;
  if (*(longlong *)(param_1 + 0x560) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x528) = 0;
  if (*(int *)(param_1 + 0x52c) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x520),0);
  }
  *(undefined8 *)(param_1 + 0x550) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x548) = 0;
  if (0x80 < *(uint *)(param_1 + 0x54c)) {
    *(undefined4 *)(param_1 + 0x54c) = 0x80;
    FUN_1446efbd8(param_1 + 0x530,0);
  }
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x520) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x518) = 0;
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FUN_1400020a8();
  }
  puVar3 = (uint *)(param_1 + 0x4e0);
  iVar4 = *(int *)(param_1 + 0x4f8);
  if (iVar4 == 0) {
    uVar11 = 0;
    uVar17 = 1;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x4f0);
    if (*(uint **)(param_1 + 0x4f0) == (uint *)0x0) {
      puVar8 = puVar3;
    }
    uVar16 = *puVar8;
    if (uVar16 == 0) {
      iVar12 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar12 = iVar4 + -1;
      }
      uVar11 = 0;
      uVar9 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar9 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar9 == uVar11) goto LAB_1410b0993;
        iVar12 = iVar12 + 0x20;
        uVar16 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar9 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar7) {
      iVar7 = iVar4;
    }
  }
  if (iVar7 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      FUN_1470d8784((longlong)iVar7 * 0x1f0 + *(longlong *)(param_1 + 0x4d0) + 0x10);
      uVar16 = ~(uint)uVar17 & uVar16;
      puVar8 = *(uint **)(param_1 + 0x4f0);
      if (*(uint **)(param_1 + 0x4f0) == (uint *)0x0) {
        puVar8 = puVar3;
      }
      iVar4 = *(int *)(param_1 + 0x4f8);
      iVar7 = (int)uVar11;
      lVar15 = (longlong)iVar7;
      uVar6 = puVar8[lVar15] & uVar16;
      if (uVar6 == 0) {
        iVar13 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar13 = iVar4 + -1;
        }
        iVar14 = iVar13 >> 5;
        if (iVar13 >> 5 < iVar7) {
          iVar14 = iVar7;
        }
        lVar10 = 0;
        do {
          if (iVar14 - lVar15 == lVar10) goto LAB_1410b0993;
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar8[lVar15 + lVar10 + 1];
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar11 = (ulonglong)(uint)(iVar7 + (int)lVar10);
        uVar16 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar6 & uVar6);
      uVar9 = uVar17 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar4);
  }
LAB_1410b0993:
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  if (*(int *)(param_1 + 0x4dc) != 0) {
    FUN_1471024be((longlong *)(param_1 + 0x4d0));
  }
  *(undefined8 *)(param_1 + 0x500) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  if (0x80 < *(uint *)(param_1 + 0x4fc)) {
    *(undefined4 *)(param_1 + 0x4fc) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FUN_1400020a8();
  }
  FUN_14499ee64(*(undefined8 *)(param_1 + 0x4c0),*(undefined4 *)(param_1 + 0x4c8));
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x450) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x418) != 0) {
    FUN_1400020a8();
  }
  FUN_140b7c31b(*(undefined8 *)(param_1 + 0x408),*(undefined4 *)(param_1 + 0x410));
  if (*(longlong *)(param_1 + 0x408) != 0) {
    FUN_1400020a8();
  }
  plVar5 = *(longlong **)(param_1 + 0x3b0);
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
  if (*(char *)(param_1 + 0x360) == '\x01') {
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  if (*(char *)(param_1 + 0x2f0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4cde(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  FUN_1413495c2(param_1);
  return;
}



// FUNCTION 1410b0d7c FUN_1410b0d7c body=35 status=ok
// SIG undefined FUN_1410b0d7c(void)

void FUN_1410b0d7c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140996524(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001410b0d91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_1410b0da0();
  return;
}



// FUNCTION 1410b0da0 FUN_1410b0da0 body=95 status=ok
// SIG undefined FUN_1410b0da0(void)

void FUN_1410b0da0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1410b0e00();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b406a10;
  *(undefined1 *)((longlong)puVar1 + 0x3a) = 0;
  *(undefined2 *)(puVar1 + 3) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x1a) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = 1;
  *(undefined1 *)(puVar1 + 4) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  *(undefined2 *)((longlong)puVar1 + 0x2c) = 0x100;
  *(undefined8 *)((longlong)puVar1 + 0x2e) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x36) = 0;
  return;
}



// FUNCTION 1410b0e00 FUN_1410b0e00 body=84 status=ok
// SIG undefined FUN_1410b0e00(void)

void FUN_1410b0e00(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x580,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0xb;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1410b0e54 FUN_1410b0e54 body=102 status=ok
// SIG undefined FUN_1410b0e54(void)

undefined8 * FUN_1410b0e54(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14bc1fde0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1410b0eba FUN_1410b0eba body=799 status=ok
// SIG undefined FUN_1410b0eba(void)

longlong FUN_1410b0eba(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 != 0) && (plVar6 = *(longlong **)(param_1 + 0x20), plVar6 != (longlong *)0x0)) {
    plVar7 = (longlong *)plVar6[0xcb];
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)plVar6[0xcc];
      if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_1410b11a7;
      if (plVar7 == (longlong *)0x0) goto LAB_1410b117c;
LAB_1410b113f:
      plVar7 = (longlong *)plVar6[0xcc];
      if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) {
LAB_1410b11cd:
        FUN_1456cec3c(plVar7);
      }
    }
    else if (DAT_14c950c29 != 0) {
LAB_1410b11a7:
      FUN_1456cec3c(plVar7);
      plVar7 = (longlong *)plVar6[0xcb];
      if (plVar7 == (longlong *)0x0) goto LAB_1410b113f;
      if ((DAT_14c950c29 & 1) == 0) goto LAB_1410b0f15;
      goto LAB_1410b11cd;
    }
LAB_1410b0f15:
    lVar5 = (**(code **)(*plVar7 + 0x3f8))(plVar7);
    if (lVar5 != 0) {
      cVar4 = (**(code **)(*plVar6 + 0x3b8))(plVar6);
      if (cVar4 == '\0') {
        (**(code **)(*plVar6 + 0x3b0))(plVar6,1);
      }
      plVar7 = (longlong *)plVar6[0xcb];
      if (plVar7 == (longlong *)0x0) {
        plVar7 = (longlong *)plVar6[0xcc];
        if ((DAT_14c950c29 & plVar7 != (longlong *)0x0) != 0) goto LAB_1410b116f;
      }
      else if (DAT_14c950c29 == 1) {
LAB_1410b116f:
        FUN_1456cec3c(plVar7);
      }
      lVar5 = (**(code **)(*plVar7 + 0x3f8))(plVar7);
      if (*(int *)(lVar5 + 0x290) != *(int *)(lVar5 + 700)) {
        lVar1 = *param_2;
        uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
        uVar9 = (uint)lVar1 & 0xffff;
        lVar8 = lVar5 + 0x2c0;
        if (*(longlong *)(lVar5 + 0x2c8) != 0) {
          lVar8 = *(longlong *)(lVar5 + 0x2c8);
        }
        iVar10 = *(int *)(lVar8 + (ulonglong)
                                  (*(int *)(lVar5 + 0x2d0) - 1U &
                                  (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar9) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
        if (iVar10 != -1) {
          do {
            plVar6 = (longlong *)(*(longlong *)(lVar5 + 0x288) + (longlong)iVar10 * 0x18);
            if (*plVar6 == lVar1) goto LAB_1410b0fff;
            iVar10 = (int)plVar6[2];
          } while (iVar10 != -1);
        }
      }
      plVar6 = (longlong *)0x0;
LAB_1410b0fff:
      plVar7 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      plVar6 = &DAT_14cacd708;
      if (plVar7 != (longlong *)0x0) {
        plVar6 = plVar7;
      }
      local_40 = *plVar6;
      FUN_140671584(param_1);
      local_78 = *param_4;
      if ((local_78 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_1410b11da(&local_70,param_2,param_3,&local_78);
      iVar10 = *(int *)(param_1 + 0x428);
      *(uint *)(param_1 + 0x428) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0x42c) < iVar10 + 1U) {
        FUN_1410b124e((longlong *)(param_1 + 0x420),iVar10);
      }
      lVar1 = *(longlong *)(param_1 + 0x420);
      lVar8 = (longlong)iVar10 * 0x30;
      lVar5 = lVar1 + lVar8;
      *(undefined8 *)(lVar1 + lVar8) = local_70;
      *(longlong *)(lVar1 + 8 + lVar8) = local_68;
      if ((local_68 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      bVar3 = DAT_14c950c29;
      *(undefined1 *)(lVar5 + 0x20) = local_50;
      *(undefined4 *)(lVar5 + 0x10) = local_60;
      *(undefined4 *)(lVar5 + 0x14) = uStack_5c;
      *(undefined4 *)(lVar5 + 0x18) = uStack_58;
      *(undefined4 *)(lVar5 + 0x1c) = uStack_54;
      *(longlong *)(lVar5 + 0x28) = local_48;
      if ((local_48 != 0 & bVar3) == 1) {
        FUN_1456cec3c();
      }
      goto LAB_1410b10e8;
    }
  }
LAB_1410b117c:
  lVar5 = 0;
LAB_1410b10e8:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1410b11da FUN_1410b11da body=115 status=ok
// SIG undefined FUN_1410b11da(void)

undefined8 *
FUN_1410b11da(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_3;
  if (param_3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  bVar2 = DAT_14c950c29;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  lVar1 = *param_4;
  param_1[5] = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1410b124e FUN_1410b124e body=272 status=ok
// SIG undefined FUN_1410b124e(void)

void FUN_1410b124e(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
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



// FUNCTION 1410b135e FUN_1410b135e body=394 status=ok
// SIG undefined FUN_1410b135e(void)

void FUN_1410b135e(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    puVar8 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar8 = *(undefined4 **)(param_2 + 8);
    }
    uVar4 = FUN_140d2f994(puVar8);
  }
  local_58 = 0;
  lStack_50 = 0;
  local_48 = 0;
  uVar5 = FUN_1410b14ea();
  lStack_50 = FUN_14477b664(uVar5);
  lVar6 = FUN_1410b14ea();
  uVar5 = FUN_1410b14ea();
  FUN_1402d1bfa(&local_40,uVar5,uVar4);
  lVar3 = local_40;
  if (local_58 != local_40) {
    local_48 = 0;
  }
  local_58 = local_40;
  lVar7 = FUN_1410b14ea();
  if (lVar6 != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
      goto LAB_1410b142d;
    }
    if ((*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
        lVar7 + 0x30)) goto LAB_1410b142d;
  }
  lVar7 = lVar6;
LAB_1410b142d:
  if (lStack_50 != lVar7) {
    local_48 = 0;
  }
  uVar5 = FUN_14477b664(lVar7);
  lStack_50 = FUN_14477b664(uVar5);
  if ((lVar3 != 0) && (lStack_50 != 0)) {
    local_48 = uVar4;
  }
  FUN_1410b15be(param_1,&local_40,&local_58);
  if (local_40 != 0) {
    FUN_1410b1524(local_40,param_2);
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b14ea FUN_1410b14ea body=57 status=ok
// SIG undefined FUN_1410b14ea(void)

void FUN_1410b14ea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb65a80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb65a80 = FUN_140002ddd(FUN_14650bfd9,uVar1,L"GbxSkillStateMachineDef");
  }
  return;
}



// FUNCTION 1410b1524 FUN_1410b1524 body=153 status=ok
// SIG undefined FUN_1410b1524(void)

void FUN_1410b1524(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2;
  if (param_2 != 0) {
    local_20 = 0;
    local_1c = 0;
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    local_28 = param_2;
    lVar2 = FUN_1415e8f78(param_1 + 200,uVar1 >> 0x10 ^ uVar1,&local_18);
    if ((*(byte *)(lVar2 + 0xc) & 1) == 0) {
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      FUN_140e9bafc(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b15be FUN_1410b15be body=253 status=ok
// SIG undefined FUN_1410b15be(void)

longlong * FUN_1410b15be(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    plVar7 = *(longlong **)(param_1 + 0x188);
    lVar8 = (longlong)*(int *)(param_1 + 400) << 4;
    do {
      lVar1 = *(longlong *)(*plVar7 + 0x10);
      lVar4 = param_3[1];
      if (lVar4 == 0) {
        uVar5 = FUN_1410b14ea();
        lVar4 = FUN_14477b664(uVar5);
        param_3[1] = lVar4;
      }
      lVar6 = param_3[2];
      if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*param_3 != 0)) {
        plVar2 = *(longlong **)(lVar4 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          lVar6 = 0;
        }
        else {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar6 = FUN_144aff482(uVar5,param_3);
        }
        param_3[2] = lVar6;
      }
      if (lVar1 == lVar6) {
        if (plVar7 != (longlong *)0x0) {
          *param_2 = *plVar7;
          lVar8 = plVar7[1];
          param_2[1] = lVar8;
          if (lVar8 == 0) {
            return param_2;
          }
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
          return param_2;
        }
        break;
      }
      plVar7 = plVar7 + 2;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1410b16bc FUN_1410b16bc body=60 status=ok
// SIG undefined FUN_1410b16bc(void)

void FUN_1410b16bc(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_140c733be();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_140c733be();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1410b16f8 FUN_1410b16f8 body=56 status=ok
// SIG undefined FUN_1410b16f8(void)

void FUN_1410b16f8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x3d8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x3d8) = 0;
  }
  FUN_140872622(param_1);
  return;
}



// FUNCTION 1410b1730 FUN_1410b1730 body=426 status=ok
// SIG undefined FUN_1410b1730(void)

void FUN_1410b1730(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_20);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_20);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar2)(uVar3,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = FUN_1410b18dc(local_20);
  *param_3 = uVar3;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b18dc FUN_1410b18dc body=563 status=ok
// SIG undefined FUN_1410b18dc(void)

longlong FUN_1410b18dc(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x5d8))();
    if (lVar1 == 0) {
LAB_1410b19a8:
      lVar1 = FUN_1410b1b10(param_1);
      if (lVar1 != 0) goto LAB_1410b1964;
      lVar1 = (**(code **)(*param_1 + 0x5e0))(param_1);
    }
    else {
      if (DAT_14cb61cd0 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1463b31ae;
        local_48 = &LAB_1486dca4f;
        local_50 = &LAB_1464f50a6;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
      goto LAB_1410b19a8;
LAB_1410b1964:
      lVar1 = *(longlong *)(lVar1 + 0xa08);
    }
    if (lVar1 != 0) {
      if (DAT_14cb5b388 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_146431698;
        local_48 = &LAB_1486775cb;
        local_50 = &LAB_1464cee35;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000005;
        local_70 = 0x10;
        local_78 = 0x3a20;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      }
      if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30))
      goto LAB_1410b18fe;
    }
  }
  lVar1 = 0;
LAB_1410b18fe:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b1b10 FUN_1410b1b10 body=98 status=ok
// SIG undefined FUN_1410b1b10(void)

longlong FUN_1410b1b10(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x3c0);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
    else if (lVar1 == 0) {
      return 0;
    }
    lVar2 = FUN_1449f3324();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1410b1b72 FUN_1410b1b72 body=40 status=ok
// SIG undefined FUN_1410b1b72(void)

undefined8 FUN_1410b1b72(undefined8 param_1,int param_2)

{
  FUN_1410b1b9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410b1b9a FUN_1410b1b9a body=190 status=ok
// SIG undefined FUN_1410b1b9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410b1b9a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2ecfb0;
  FUN_1408c28ac(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b1c58(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001410b1c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1410b1c58 FUN_1410b1c58 body=63 status=ok
// SIG undefined FUN_1410b1c58(void)

void FUN_1410b1c58(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      FUN_1408c28ac(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410b1c98 FUN_1410b1c98 body=905 status=ok
// SIG undefined FUN_1410b1c98(void)

undefined8 * FUN_1410b1c98(undefined8 *param_1,longlong param_2)

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
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 uVar18;
  
  *param_1 = &PTR_FUN_14a16f790;
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 0x10);
  uVar5 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined4 *)(param_2 + 0x18);
  uVar7 = *(undefined4 *)(param_2 + 0x1c);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar9 = *(undefined4 *)(param_2 + 0x24);
  uVar10 = *(undefined4 *)(param_2 + 0x28);
  uVar11 = *(undefined4 *)(param_2 + 0x2c);
  uVar12 = *(undefined4 *)(param_2 + 0x30);
  uVar13 = *(undefined4 *)(param_2 + 0x34);
  uVar14 = *(undefined4 *)(param_2 + 0x34);
  uVar15 = *(undefined4 *)(param_2 + 0x38);
  uVar16 = *(undefined4 *)(param_2 + 0x3c);
  uVar17 = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
  *(undefined4 *)(param_1 + 5) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar11;
  *(undefined4 *)(param_1 + 6) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar13;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar14;
  *(undefined4 *)(param_1 + 7) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar16;
  *(undefined4 *)(param_1 + 8) = uVar17;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  pvVar2 = *(void **)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0x60);
  uVar18 = *(undefined8 *)(param_2 + 0x58);
  *(int *)(param_1 + 0xc) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_140b856de(param_1 + 0xb,iVar1,0);
    FUN_140b8566a(param_1[0xb],uVar18,iVar1);
  }
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_14058acb2(param_1 + 0xd,param_2 + 0x68);
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_1410b2022(param_1 + 0x17,param_2 + 0xb8);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  uVar4 = *(undefined4 *)(param_2 + 0x110);
  uVar5 = *(undefined4 *)(param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x108);
  *(undefined4 *)((longlong)param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x22) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar5;
  param_1[0x23] = 0;
  iVar1 = *(int *)(param_2 + 0x120);
  pvVar2 = *(void **)(param_2 + 0x118);
  *(int *)(param_1 + 0x24) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x23,iVar1,0);
    memcpy((void *)param_1[0x23],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x25] = *(undefined8 *)(param_2 + 0x128);
  uVar3 = *(undefined4 *)(param_2 + 0x134);
  uVar4 = *(undefined4 *)(param_2 + 0x138);
  uVar5 = *(undefined4 *)(param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar3;
  *(undefined4 *)(param_1 + 0x27) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar5;
  param_1[0x28] = 0;
  iVar1 = *(int *)(param_2 + 0x148);
  pvVar2 = *(void **)(param_2 + 0x140);
  *(int *)(param_1 + 0x29) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x28,iVar1,0);
    memcpy((void *)param_1[0x28],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x2a] = *(undefined8 *)(param_2 + 0x150);
  uVar3 = *(undefined4 *)(param_2 + 0x15c);
  uVar4 = *(undefined4 *)(param_2 + 0x160);
  uVar5 = *(undefined4 *)(param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x158);
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar3;
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar5;
  param_1[0x2d] = 0;
  iVar1 = *(int *)(param_2 + 0x170);
  pvVar2 = *(void **)(param_2 + 0x168);
  *(int *)(param_1 + 0x2e) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x2d,iVar1,0);
    memcpy((void *)param_1[0x2d],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x2f] = *(undefined8 *)(param_2 + 0x178);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x180);
  param_1[0x31] = 0;
  param_1[0x32] = *(undefined8 *)(param_2 + 400);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x198);
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x35] = *(undefined8 *)(param_2 + 0x1a8);
  uVar18 = FUN_14477b664(*(undefined8 *)(param_2 + 0x1b0));
  uVar18 = FUN_14477b664(uVar18);
  param_1[0x36] = uVar18;
  param_1[0x37] = *(undefined8 *)(param_2 + 0x1b8);
  param_1[0x3a] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x38] = *(undefined8 *)(param_2 + 0x1c0);
  uVar18 = FUN_14477b664(*(undefined8 *)(param_2 + 0x1c8));
  uVar18 = FUN_14477b664(uVar18);
  param_1[0x39] = uVar18;
  param_1[0x3a] = *(undefined8 *)(param_2 + 0x1d0);
  return param_1;
}



// FUNCTION 1410b2022 FUN_1410b2022 body=154 status=ok
// SIG undefined FUN_1410b2022(void)

longlong FUN_1410b2022(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_1410b2077;
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
LAB_1410b2077:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1410b20bc(param_1,param_2);
  return param_1;
}



// FUNCTION 1410b20bc FUN_1410b20bc body=419 status=ok
// SIG undefined FUN_1410b20bc(void)

undefined8 * FUN_1410b20bc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_144a40be0(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar6 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar6 = param_2 + 2;
      }
      puVar7 = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)param_1[4];
      }
      memcpy(puVar7,puVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar6 = (undefined8 *)*param_1;
      puVar7 = (undefined8 *)*param_2;
      uVar8 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar8 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar8 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)puVar6 = *(undefined4 *)puVar7;
          *(undefined4 *)((longlong)puVar6 + 4) = *(undefined4 *)((longlong)puVar7 + 4);
        }
        else {
          *puVar6 = 0;
          iVar2 = *(int *)(puVar7 + 1);
          _Src = (void *)*puVar7;
          *(int *)(puVar6 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar6,iVar2,0);
            memcpy((void *)*puVar6,_Src,(longlong)iVar2 * 2);
          }
          puVar6[2] = puVar7[2];
        }
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 3;
        puVar6 = puVar6 + 3;
      } while (uVar1 != uVar8);
    }
  }
  return param_1;
}



// FUNCTION 1410b225f FUN_1410b225f body=2851 status=ok
// SIG undefined FUN_1410b225f(void)

void FUN_1410b225f(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  undefined2 *puVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  undefined2 *puVar28;
  undefined1 auStack_d8 [44];
  uint local_ac;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = FUN_144a78877(*(undefined2 *)(param_1 + 10),*(undefined1 *)(param_1 + 8));
  uVar3 = FUN_144a78877(*(undefined4 *)(param_1 + 0xc),uVar3);
  uVar3 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x10),uVar3);
  uVar3 = FUN_144a78877((int)*(char *)(param_1 + 0x18),uVar3);
  uVar3 = FUN_144a78877((int)*(short *)(param_1 + 0x1a),uVar3);
  uVar3 = FUN_144a78877(*(undefined4 *)(param_1 + 0x1c),uVar3);
  uVar3 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x20),uVar3);
  uVar3 = FUN_144a78877(*(undefined4 *)(param_1 + 0x28),uVar3);
  uVar3 = FUN_144a78877((int)((ulonglong)*(undefined8 *)(param_1 + 0x30) >> 0x20) * 0x17 +
                        (int)*(undefined8 *)(param_1 + 0x30),uVar3);
  uVar3 = FUN_144a78877(*(undefined1 *)(param_1 + 0x38),uVar3);
  uVar12 = *(undefined8 *)(param_1 + 0x3c);
  iVar4 = FUN_144a788f7();
  uVar3 = FUN_144a78877((int)((ulonglong)uVar12 >> 0x20) + iVar4,uVar3);
  iVar4 = *(int *)(param_1 + 0x50);
  if (iVar4 == 0) {
    puVar28 = &DAT_149dfb77a;
  }
  else {
    puVar28 = *(undefined2 **)(param_1 + 0x48);
  }
  uVar18 = 0;
  uVar6 = iVar4 - 1;
  if (iVar4 == 0) {
    uVar6 = uVar18;
  }
  uVar5 = FUN_144a49b4a(uVar6,puVar28);
  uVar3 = FUN_144a78877(uVar5,uVar3);
  uVar5 = FUN_1410b2d83(param_1 + 0x58);
  uVar6 = FUN_144a78877(uVar5,uVar3);
  uVar22 = (ulonglong)uVar6;
  lVar13 = param_1 + 0x78;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar13;
  if (*(int *)(param_1 + 0x90) == 0) {
    local_68 = 1;
    uVar6 = 0xffffffff;
    local_50 = 0;
    local_58._4_4_ = 0;
    uVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 & 0xffffffff;
    local_68 = local_68 >> 0x20;
    uVar6 = (uint)local_58;
    uVar18 = *(uint *)(param_1 + 0x90);
  }
  if (local_58._4_4_ != uVar18 || local_60 != lVar13) {
    local_a0 = *(longlong *)(param_1 + 0x68);
    local_80 = *(longlong *)(local_60 + 0x10);
    if (*(longlong *)(local_60 + 0x10) == 0) {
      local_80 = local_60;
    }
    uVar14 = *(uint *)(local_60 + 0x18);
    local_a8 = (ulonglong)uVar14;
    iVar4 = uVar14 + 0x1e;
    if (-1 < (int)(uVar14 - 1)) {
      iVar4 = uVar14 - 1;
    }
    iVar4 = iVar4 >> 5;
    local_88 = CONCAT44(local_88._4_4_,iVar4);
    local_70 = local_80 + 4;
    local_90 = CONCAT44(local_90._4_4_,uVar18);
    local_ac = uVar6;
    do {
      iVar19 = (int)uVar11;
      puVar1 = (undefined8 *)(local_a0 + (longlong)(int)local_58._4_4_ * 0x28);
      iVar21 = *(int *)(puVar1 + 1);
      iVar7 = iVar21 + -1;
      if (iVar21 == 0) {
        iVar7 = 0;
      }
      uVar6 = 0;
      if (0 < iVar7) {
        puVar28 = &DAT_149dfb77a;
        if (iVar21 != 0) {
          puVar28 = (undefined2 *)*puVar1;
        }
        lVar10 = 0;
        uVar6 = 0;
        do {
          uVar15 = ((uint)(ushort)puVar28[lVar10] +
                   (uint)(0x19 < (ushort)puVar28[lVar10] - 0x61) * 0x20) - 0x20;
          uVar6 = uVar6 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar6 ^ uVar15) & 0xff) * 4);
          uVar6 = uVar6 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar15 >> 8 & 0xff) * 4);
          lVar10 = lVar10 + 1;
        } while (iVar7 != (int)lVar10);
      }
      iVar21 = *(int *)(puVar1 + 3);
      uVar15 = 0;
      iVar7 = iVar21 + -1;
      if (iVar21 == 0) {
        iVar7 = 0;
      }
      if (0 < iVar7) {
        puVar28 = &DAT_149dfb77a;
        if (iVar21 != 0) {
          puVar28 = (undefined2 *)puVar1[2];
        }
        lVar10 = 0;
        uVar15 = 0;
        do {
          uVar16 = ((uint)(ushort)puVar28[lVar10] +
                   (uint)(0x19 < (ushort)puVar28[lVar10] - 0x61) * 0x20) - 0x20;
          uVar15 = uVar15 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar15 ^ uVar16) & 0xff) * 4);
          uVar15 = uVar15 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar15 & 0xff ^ uVar16 >> 8 & 0xff) * 4);
          lVar10 = lVar10 + 1;
        } while (iVar7 != (int)lVar10);
      }
      local_ac = local_ac & ~(uint)local_68;
      lVar10 = (longlong)iVar19;
      uVar16 = *(uint *)(local_80 + lVar10 * 4) & local_ac;
      if (uVar16 == 0) {
        local_50 = local_50 + 0x20;
        iVar21 = iVar4;
        if (iVar4 < iVar19) {
          iVar21 = iVar19;
        }
        if (iVar19 < iVar4) {
          lVar27 = 0;
          do {
            uVar16 = *(uint *)(local_70 + lVar10 * 4 + lVar27 * 4);
            if (uVar16 != 0) {
              uVar11 = (ulonglong)(iVar19 + (int)lVar27 + 1);
              local_ac = 0xffffffff;
              goto LAB_1410b25cb;
            }
            local_50 = local_50 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar21 - lVar10 != lVar27);
          local_ac = 0xffffffff;
          iVar19 = iVar21;
        }
        uVar11 = (ulonglong)(iVar19 + 1);
        local_58._4_4_ = uVar14;
      }
      else {
LAB_1410b25cb:
        local_68 = (ulonglong)(-uVar16 & uVar16);
        uVar17 = local_68 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_58._4_4_ = (local_50 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)local_58._4_4_) {
          local_58._4_4_ = uVar14;
        }
      }
      iVar21 = (int)uVar22;
      uVar6 = (uint)(uVar22 >> 0xd) ^ uVar6 - iVar21;
      uVar16 = uVar6 << 8 ^ (-0x61c88647 - iVar21) - uVar6;
      uVar25 = uVar16 >> 0xd ^ (iVar21 - uVar6) - uVar16;
      uVar26 = uVar25 >> 0xc ^ (uVar6 - uVar16) - uVar25;
      uVar6 = uVar26 << 0x10 ^ (uVar16 - uVar25) - uVar26;
      uVar16 = uVar6 >> 5 ^ (uVar25 - uVar26) - uVar6;
      uVar25 = uVar16 >> 3 ^ (uVar26 - uVar6) - uVar16;
      uVar6 = uVar25 << 10 ^ (uVar6 - uVar16) - uVar25;
      uVar6 = uVar6 >> 0xf ^ uVar16 - (uVar25 + uVar6);
      uVar15 = uVar6 >> 0xd ^ uVar15 - uVar6;
      uVar16 = uVar15 << 8 ^ (-0x61c88647 - uVar6) - uVar15;
      uVar25 = uVar16 >> 0xd ^ (uVar6 - uVar15) - uVar16;
      uVar6 = uVar25 >> 0xc ^ (uVar15 - uVar16) - uVar25;
      uVar15 = uVar6 << 0x10 ^ (uVar16 - uVar25) - uVar6;
      uVar16 = uVar15 >> 5 ^ (uVar25 - uVar6) - uVar15;
      uVar25 = uVar16 >> 3 ^ (uVar6 - uVar15) - uVar16;
      uVar6 = uVar25 << 10 ^ (uVar15 - uVar16) - uVar25;
      uVar22 = (ulonglong)(uVar6 >> 0xf ^ uVar16 - (uVar25 + uVar6));
      local_98 = lVar13;
      local_78 = local_60;
    } while (local_58._4_4_ != uVar18 || local_60 != lVar13);
  }
  lVar13 = param_1 + 200;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar13;
  if (*(int *)(param_1 + 0xe0) == 0) {
    uVar11 = 1;
    local_ac = 0xffffffff;
    iVar4 = 0;
    uVar17 = 0;
    uVar24 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar24 = local_68 & 0xffffffff;
    uVar11 = local_68 >> 0x20;
    local_ac = (uint)local_58;
    uVar17 = local_58 >> 0x20;
    iVar4 = *(int *)(param_1 + 0xe0);
  }
  if ((int)uVar17 != iVar4 || local_60 != lVar13) {
    local_90 = *(longlong *)(param_1 + 0xb8);
    local_80 = *(longlong *)(local_60 + 0x10);
    if (*(longlong *)(local_60 + 0x10) == 0) {
      local_80 = local_60;
    }
    uVar18 = *(uint *)(local_60 + 0x18);
    local_a8 = (ulonglong)uVar18;
    iVar21 = uVar18 + 0x1e;
    if (-1 < (int)(uVar18 - 1)) {
      iVar21 = uVar18 - 1;
    }
    iVar21 = iVar21 >> 5;
    local_88 = local_80 + 4;
    local_78 = CONCAT44(local_78._4_4_,iVar4);
    iVar19 = local_50;
    do {
      iVar23 = (int)uVar24;
      iVar7 = *(int *)(local_90 + 8 + (longlong)(int)uVar17 * 0x18);
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = 0;
      }
      uVar6 = 0;
      if (0 < iVar8) {
        puVar28 = &DAT_149dfb77a;
        if (iVar7 != 0) {
          puVar28 = *(undefined2 **)(local_90 + (longlong)(int)uVar17 * 0x18);
        }
        lVar10 = 0;
        uVar6 = 0;
        do {
          uVar14 = ((uint)(ushort)puVar28[lVar10] +
                   (uint)(0x19 < (ushort)puVar28[lVar10] - 0x61) * 0x20) - 0x20;
          uVar6 = uVar6 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar6 ^ uVar14) & 0xff) * 4);
          uVar6 = uVar6 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar6 & 0xff ^ uVar14 >> 8 & 0xff) * 4);
          lVar10 = lVar10 + 1;
        } while (iVar8 != (int)lVar10);
      }
      local_ac = local_ac & ~(uint)uVar11;
      lVar10 = (longlong)iVar23;
      uVar14 = *(uint *)(local_80 + lVar10 * 4) & local_ac;
      if (uVar14 == 0) {
        iVar19 = iVar19 + 0x20;
        iVar7 = iVar21;
        if (iVar21 < iVar23) {
          iVar7 = iVar23;
        }
        if (iVar23 < iVar21) {
          lVar27 = 0;
          do {
            uVar14 = *(uint *)(local_88 + lVar10 * 4 + lVar27 * 4);
            if (uVar14 != 0) {
              uVar24 = (ulonglong)(iVar23 + (int)lVar27 + 1);
              local_ac = 0xffffffff;
              goto LAB_1410b28f1;
            }
            iVar19 = iVar19 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar7 - lVar10 != lVar27);
          local_ac = 0xffffffff;
          iVar23 = iVar7;
        }
        uVar24 = (ulonglong)(iVar23 + 1);
        uVar17 = local_a8;
      }
      else {
LAB_1410b28f1:
        uVar11 = (ulonglong)(-uVar14 & uVar14);
        uVar17 = uVar11 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar14 = (iVar19 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        uVar17 = (ulonglong)uVar14;
        if ((int)uVar18 <= (int)uVar14) {
          uVar17 = local_a8;
        }
      }
      iVar7 = (int)uVar22;
      uVar6 = (uint)(uVar22 >> 0xd) ^ uVar6 - iVar7;
      uVar14 = uVar6 << 8 ^ (-0x61c88647 - iVar7) - uVar6;
      uVar16 = uVar14 >> 0xd ^ (iVar7 - uVar6) - uVar14;
      uVar15 = uVar16 >> 0xc ^ (uVar6 - uVar14) - uVar16;
      uVar6 = uVar15 << 0x10 ^ (uVar14 - uVar16) - uVar15;
      uVar14 = uVar6 >> 5 ^ (uVar16 - uVar15) - uVar6;
      uVar15 = uVar14 >> 3 ^ (uVar15 - uVar6) - uVar14;
      uVar6 = uVar15 << 10 ^ (uVar6 - uVar14) - uVar15;
      uVar22 = (ulonglong)(uVar6 >> 0xf ^ uVar14 - (uVar15 + uVar6));
      local_a0 = local_60;
      local_98 = lVar13;
    } while ((int)uVar17 != iVar4 || local_60 != lVar13);
  }
  uVar12 = *(undefined8 *)(param_1 + 0x110);
  iVar4 = FUN_144a788f7();
  uVar2 = *(undefined8 *)(param_1 + 0x108);
  iVar21 = FUN_144a788f7();
  uVar18 = (int)((ulonglong)uVar2 >> 0x20) + iVar21;
  iVar21 = 0;
  uVar3 = FUN_144a78877(0,(uVar18 >> 2) + 0x9e3779b9 +
                          iVar4 + (int)((ulonglong)uVar12 >> 0x20) + uVar18 * 0x40 ^ uVar18);
  puVar20 = &DAT_149dfb77a;
  puVar28 = &DAT_149dfb77a;
  iVar4 = iVar21;
  if (*(int *)(param_1 + 0x120) != 0) {
    puVar28 = *(undefined2 **)(param_1 + 0x118);
    iVar4 = *(int *)(param_1 + 0x120) + -1;
  }
  uVar5 = FUN_144a49b4a(iVar4,puVar28);
  uVar3 = FUN_144a78877(uVar3,uVar5);
  uVar3 = FUN_144a78877(uVar3,uVar22);
  uVar12 = *(undefined8 *)(param_1 + 0x138);
  iVar4 = FUN_144a788f7();
  uVar2 = *(undefined8 *)(param_1 + 0x130);
  iVar19 = FUN_144a788f7();
  uVar18 = (int)((ulonglong)uVar2 >> 0x20) + iVar19;
  uVar5 = FUN_144a78877(0,(uVar18 >> 2) + 0x9e3779b9 +
                          iVar4 + (int)((ulonglong)uVar12 >> 0x20) + uVar18 * 0x40 ^ uVar18);
  puVar28 = &DAT_149dfb77a;
  iVar4 = iVar21;
  if (*(int *)(param_1 + 0x148) != 0) {
    puVar28 = *(undefined2 **)(param_1 + 0x140);
    iVar4 = *(int *)(param_1 + 0x148) + -1;
  }
  uVar9 = FUN_144a49b4a(iVar4,puVar28);
  uVar5 = FUN_144a78877(uVar5,uVar9);
  uVar3 = FUN_144a78877(uVar5,uVar3);
  uVar12 = *(undefined8 *)(param_1 + 0x160);
  iVar4 = FUN_144a788f7();
  uVar2 = *(undefined8 *)(param_1 + 0x158);
  iVar19 = FUN_144a788f7();
  uVar18 = (int)((ulonglong)uVar2 >> 0x20) + iVar19;
  uVar5 = FUN_144a78877(0,(uVar18 >> 2) + 0x9e3779b9 +
                          iVar4 + (int)((ulonglong)uVar12 >> 0x20) + uVar18 * 0x40 ^ uVar18);
  if (*(int *)(param_1 + 0x170) != 0) {
    puVar20 = *(undefined2 **)(param_1 + 0x168);
    iVar21 = *(int *)(param_1 + 0x170) + -1;
  }
  uVar9 = FUN_144a49b4a(iVar21,puVar20);
  uVar5 = FUN_144a78877(uVar5,uVar9);
  uVar5 = FUN_144a78877(uVar5,uVar3);
  uVar3 = *(undefined4 *)(param_1 + 0x180);
  uVar12 = *(undefined8 *)(param_1 + 0x178);
  iVar4 = FUN_144a788f7();
  uVar3 = FUN_144a78877((int)((ulonglong)uVar12 >> 0x20) + iVar4,uVar3);
  uVar5 = FUN_144a78877(uVar3,uVar5);
  uVar3 = *(undefined4 *)(param_1 + 0x198);
  uVar12 = *(undefined8 *)(param_1 + 400);
  iVar4 = FUN_144a788f7();
  uVar3 = FUN_144a78877((int)((ulonglong)uVar12 >> 0x20) + iVar4,uVar3);
  uVar3 = FUN_144a78877(uVar3,uVar5);
  uVar12 = *(undefined8 *)(param_1 + 0x1a8);
  uVar18 = ((uint)(*(ulonglong *)(param_1 + 0x1b0) >> 0x14) & 0xffff ^
           (uint)(*(ulonglong *)(param_1 + 0x1b0) >> 4)) * -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  iVar4 = FUN_144a788f7();
  uVar5 = FUN_144a78877((int)((ulonglong)uVar12 >> 0x20) + iVar4,uVar18 >> 0x10 ^ uVar18);
  uVar3 = FUN_144a78877(uVar5,uVar3);
  lVar13 = *(longlong *)(param_1 + 0x1c8);
  if ((*(longlong *)(param_1 + 0x1c8) == 0) && (lVar13 = DAT_14c9a08f8, DAT_14c9a08f8 == 0)) {
    uVar12 = FUN_140e3c68b();
    lVar13 = FUN_140002ddd(FUN_1462a16ba,uVar12,L"NexusSerializeTest_BasicDef");
    DAT_14c9a08f8 = lVar13;
  }
  uVar22 = *(ulonglong *)(param_1 + 0x1c0);
  uVar11 = FUN_14477b664(lVar13);
  uVar18 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
  uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
  iVar4 = FUN_144a788f7(uVar22 & 0xffffffff);
  uVar5 = FUN_144a78877((int)(uVar22 >> 0x20) + iVar4,uVar18 >> 0x10 ^ uVar18);
  FUN_144a78877(uVar5,uVar3);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b2d83 FUN_1410b2d83 body=219 status=ok
// SIG undefined FUN_1410b2d83(void)

uint FUN_1410b2d83(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  if ((longlong)*(int *)(param_1 + 1) == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined8 *)*param_1;
    puVar9 = puVar4 + (longlong)*(int *)(param_1 + 1) * 2;
    uVar2 = 0;
    do {
      iVar1 = *(int *)(puVar4 + 1);
      iVar6 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      uVar7 = 0;
      if (0 < iVar6) {
        puVar3 = &DAT_149dfb77a;
        if (iVar1 != 0) {
          puVar3 = (undefined2 *)*puVar4;
        }
        lVar8 = 0;
        uVar7 = 0;
        do {
          uVar5 = ((uint)(ushort)puVar3[lVar8] + (uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20)
                  - 0x20;
          uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar7 ^ uVar5) & 0xff) * 4);
          uVar7 = uVar7 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
          lVar8 = lVar8 + 1;
        } while (iVar6 != (int)lVar8);
      }
      uVar2 = uVar7 + (uVar2 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
      puVar4 = puVar4 + 2;
    } while (puVar4 != puVar9);
  }
  return uVar2;
}



// FUNCTION 1410b2e5e FUN_1410b2e5e body=273 status=ok
// SIG undefined FUN_1410b2e5e(void)

void FUN_1410b2e5e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar3 = FUN_1410b2f8c();
    lVar4 = FUN_144718840(param_2,uVar3);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  FUN_14490f2e4(param_2,&local_48,1,0);
  if ((int)uStack_40 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_40 & 0xffffffff);
  }
  if (*(int *)((longlong)param_3 + 0xc) < (int)uStack_40) {
    FUN_14480809c(param_3);
  }
  lVar4 = local_48;
  if ((int)uStack_40 != 0) {
    lVar5 = (longlong)(int)uStack_40;
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar6) != 0) {
        uVar1 = *(undefined4 *)(*(longlong *)(lVar4 + lVar6) + 0xc);
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_1447808da(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = uVar1;
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410b2f8c FUN_1410b2f8c body=228 status=ok
// SIG undefined FUN_1410b2f8c(void)

longlong FUN_1410b2f8c(void)

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
  if (DAT_14cb67b78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14873f75f;
    local_40 = FUN_146518a6d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTraceInfoProvider",&DAT_14cb67b78,&DAT_14873f75e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67b78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b3080 FUN_1410b3080 body=40 status=ok
// SIG undefined FUN_1410b3080(void)

undefined8 FUN_1410b3080(undefined8 param_1,int param_2)

{
  FUN_1410b30a8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410b30a8 FUN_1410b30a8 body=295 status=ok
// SIG undefined FUN_1410b30a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410b30a8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b2cc480;
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 0x1e);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b3208(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b31d0(param_1 + 10);
  if (param_1[8] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001410b3199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1410b31d0 FUN_1410b31d0 body=55 status=ok
// SIG undefined FUN_1410b31d0(void)

void FUN_1410b31d0(longlong *param_1)

{
  FUN_1410b3240(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410b3208 FUN_1410b3208 body=55 status=ok
// SIG undefined FUN_1410b3208(void)

void FUN_1410b3208(longlong *param_1)

{
  FUN_1410b33ca(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410b3240 FUN_1410b3240 body=393 status=ok
// SIG undefined FUN_1410b3240(void)

void FUN_1410b3240(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 0x20 + (longlong)iStack_54 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410b33ca FUN_1410b33ca body=510 status=ok
// SIG undefined FUN_1410b33ca(void)

void FUN_1410b33ca(longlong *param_1,int param_2)

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
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar12 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_1410b34b3;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      FUN_14051f4c4((longlong)iVar6 * 0xc0 + *param_1 + 8);
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar12;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar13;
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
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_1410b34b3;
        }
        uVar12 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1410b34b3:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1407da7e2(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar3 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1410b35c8 FUN_1410b35c8 body=84 status=ok
// SIG undefined FUN_1410b35c8(void)

undefined8 * FUN_1410b35c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aba5470;
  param_1[0x39e] = &PTR_FUN_14aba54d8;
  if (param_1[0x39f] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b361c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410b361c FUN_1410b361c body=1419 status=ok
// SIG undefined FUN_1410b361c(void)

void FUN_1410b361c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_LAB_14aba5380;
  if (*(char *)(param_1 + 0x39c) == '\x01') {
    if (*(char *)(param_1 + 0x39b) == '\x01') {
      *(undefined1 *)(param_1 + 0x39b) = 0;
    }
    if (*(char *)(param_1 + 0x397) == '\x01') {
      *(undefined1 *)(param_1 + 0x397) = 0;
    }
    *(undefined1 *)(param_1 + 0x39c) = 0;
  }
  if (*(char *)(param_1 + 0x392) == '\x01') {
    *(undefined1 *)(param_1 + 0x392) = 0;
  }
  *(undefined4 *)(param_1 + 0x38a) = 0;
  if (param_1[0x389] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x382) = 0;
  if (*(int *)((longlong)param_1 + 0x1c14) != 0) {
    FUN_1401ad22e(param_1 + 0x381,0);
  }
  param_1[0x387] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x386) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x1c34)) {
    *(undefined4 *)((longlong)param_1 + 0x1c34) = 0x80;
    FUN_1446efbd8(param_1 + 899,0);
  }
  if (param_1[0x385] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x381] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x37f];
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
  plVar3 = (longlong *)param_1[0x376];
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
  plVar3 = (longlong *)param_1[0x367];
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
  plVar3 = (longlong *)param_1[0x35c];
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
  if (*(char *)(param_1 + 0x330) == '\x01') {
    *(undefined1 *)(param_1 + 0x330) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x1934) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1934) = 0;
  }
  if (*(char *)(param_1 + 0x325) == '\x01') {
    *(undefined1 *)(param_1 + 0x325) = 0;
  }
  if (*(char *)(param_1 + 0x321) == '\x01') {
    if (*(char *)(param_1 + 800) == '\x01') {
      *(undefined1 *)(param_1 + 800) = 0;
    }
    plVar3 = (longlong *)param_1[0x30c];
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
    *(undefined1 *)(param_1 + 0x321) = 0;
  }
  if (*(char *)(param_1 + 0x2f5) == '\x01') {
    if (*(char *)(param_1 + 0x2f4) == '\x01') {
      *(undefined1 *)(param_1 + 0x2f4) = 0;
    }
    plVar3 = (longlong *)param_1[0x2e0];
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
    *(undefined1 *)(param_1 + 0x2f5) = 0;
  }
  if (*(char *)(param_1 + 0x2c9) == '\x01') {
    if (*(char *)(param_1 + 0x2c8) == '\x01') {
      *(undefined1 *)(param_1 + 0x2c8) = 0;
    }
    plVar3 = (longlong *)param_1[0x2b4];
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
    *(undefined1 *)(param_1 + 0x2c9) = 0;
  }
  if (*(char *)(param_1 + 0x29d) == '\x01') {
    *(undefined1 *)(param_1 + 0x29d) = 0;
  }
  if (*(char *)(param_1 + 0x29a) == '\x01') {
    plVar3 = (longlong *)param_1[0x297];
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
    *(undefined1 *)(param_1 + 0x29a) = 0;
  }
  FUN_1402f4baa(param_1 + 0x252);
  if (param_1[0x24f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x248] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x239];
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
  puVar4 = param_1 + 0xfe;
  if ((undefined8 *)param_1[0x226] != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x226];
  }
  FUN_14494a6e2(puVar4,*(undefined4 *)(param_1 + 0x227));
  if (param_1[0x226] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xfd) == '\x01') {
    if (*(char *)(param_1 + 0xfb) == '\x01') {
      *(undefined1 *)(param_1 + 0xfb) = 0;
    }
    plVar3 = (longlong *)param_1[0xf6];
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
    *(undefined1 *)(param_1 + 0xfd) = 0;
  }
  puVar4 = (undefined8 *)param_1[0xea];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar3 = (longlong *)param_1[0xe8];
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
  plVar3 = (longlong *)param_1[0xdc];
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
  FUN_1449493b2(param_1 + 0x6d);
  if (*(char *)(param_1 + 0x6a) == '\x01') {
    FUN_1449493b2(param_1 + 3);
    *(undefined1 *)(param_1 + 0x6a) = 0;
  }
  return;
}



// FUNCTION 1410b3ba7 FUN_1410b3ba7 body=47 status=ok
// SIG undefined FUN_1410b3ba7(void)

void FUN_1410b3ba7(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
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



// FUNCTION 1410b3bd6 FUN_1410b3bd6 body=38 status=ok
// SIG undefined FUN_1410b3bd6(void)

void FUN_1410b3bd6(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457f5696(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 1410b3bfc FUN_1410b3bfc body=1122 status=ok
// SIG undefined FUN_1410b3bfc(void)

void FUN_1410b3bfc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong **pplVar4;
  int iVar5;
  int iVar6;
  longlong **pplVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong **pplVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined4 local_64;
  longlong **local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401c3c2c();
  if (*(longlong *)(param_1 + 0x638) == 0) {
    local_70 = (longlong *)0x0;
  }
  else {
    local_70 = *(longlong **)(*(longlong *)(param_1 + 0x638) + 0x30);
  }
  lVar19 = *(longlong *)(param_1 + 0xb0);
  if (lVar19 == 0) {
    lVar19 = FUN_1448abda6(param_1);
  }
  FUN_140c88a82(&local_60,lVar19);
  if (local_58 != (longlong *)0x0) {
    iVar5 = (int)local_58[1];
    do {
      if (iVar5 == 0) {
        plVar15 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar8 = (int)local_58[1];
      bVar22 = iVar5 == iVar8;
      if (bVar22) {
        *(int *)(local_58 + 1) = iVar5 + 1;
        iVar8 = iVar5;
      }
      iVar5 = iVar8;
      UNLOCK();
      plVar15 = local_58;
    } while (!bVar22);
    LOCK();
    piVar1 = (int *)((longlong)local_58 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
    pplVar4 = local_60;
    if (plVar15 != (longlong *)0x0) {
      if ((local_60 != (longlong **)0x0) && (local_70 != (longlong *)0x0)) {
        pplVar7 = local_60 + 6;
        if (*(int *)(local_60 + 7) != *(int *)((longlong)local_60 + 100)) {
          uVar13 = (uint)((ulonglong)local_70 >> 0x10);
          uVar9 = (uint)local_70 & 0xffff;
          pplVar12 = local_60 + 0xd;
          if ((longlong **)local_60[0xe] != (longlong **)0x0) {
            pplVar12 = (longlong **)local_60[0xe];
          }
          iVar5 = *(int *)((longlong)pplVar12 +
                          (ulonglong)
                          (*(int *)(local_60 + 0xf) - 1U &
                          (int)((ulonglong)local_70 >> 0x20) + ((uint)local_70 << 0x10 | uVar9) +
                          (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar5 != -1) {
            do {
              plVar2 = (longlong *)((longlong)*pplVar7 + (longlong)iVar5 * 0x14);
              if ((longlong *)*plVar2 == local_70) {
                plVar16 = plVar2 + 1;
                if (plVar16 != (longlong *)0x0 && plVar2 != (longlong *)0x0) {
                  *(int *)plVar16 = (int)*plVar16 + 1;
                  goto LAB_1410b3d78;
                }
                break;
              }
              iVar5 = *(int *)((longlong)plVar2 + 0xc);
            } while (iVar5 != -1);
          }
        }
        local_58 = (longlong *)&local_64;
        local_64 = 1;
        local_60 = &local_70;
        uVar20 = 0;
        FUN_1410b4060(pplVar7,local_4c,&local_60,0);
        iVar5 = *(int *)(pplVar4 + 0x15);
        if (iVar5 == 0) {
          uVar21 = 1;
          iVar8 = 0;
          iVar14 = 0;
        }
        else {
          pplVar7 = (longlong **)pplVar4[0x14];
          if ((longlong **)pplVar4[0x14] == (longlong **)0x0) {
            pplVar7 = pplVar4 + 0x12;
          }
          uVar13 = *(uint *)pplVar7;
          if (uVar13 == 0) {
            iVar8 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar8 = iVar5 + -1;
            }
            uVar20 = 0;
            uVar21 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar21 = uVar20;
            }
            iVar14 = 0;
            do {
              if (uVar21 == uVar20) goto LAB_1410b3d78;
              iVar14 = iVar14 + 0x20;
              uVar13 = *(uint *)((longlong)pplVar7 + (uVar20 + 1) * 4);
              uVar20 = uVar20 + 1;
            } while (uVar13 == 0);
          }
          else {
            uVar20 = 0;
            iVar14 = 0;
          }
          uVar21 = (ulonglong)(-uVar13 & uVar13);
          uVar3 = uVar21 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar8 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar8) {
            iVar8 = iVar5;
          }
        }
        if (iVar8 != iVar5) {
          uVar13 = 0xffffffff;
          iVar6 = iVar5;
          do {
            pplVar7 = (longlong **)pplVar4[0x10][(longlong)iVar8 * 3];
            if (*(int *)(pplVar7 + 4) != *(int *)((longlong)pplVar7 + 0x4c)) {
              uVar9 = (uint)((ulonglong)local_70 >> 0x10);
              uVar18 = (uint)local_70 & 0xffff;
              pplVar12 = pplVar7 + 10;
              if ((longlong **)pplVar7[0xb] != (longlong **)0x0) {
                pplVar12 = (longlong **)pplVar7[0xb];
              }
              iVar8 = *(int *)((longlong)pplVar12 +
                              (ulonglong)
                              (*(int *)(pplVar7 + 0xc) - 1U &
                              (int)((ulonglong)local_70 >> 0x20) + ((uint)local_70 << 0x10 | uVar18)
                              + (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar18 >> 4)) * 4);
              if (iVar8 != -1) {
                do {
                  plVar2 = pplVar7[3] + (longlong)iVar8 * 7;
                  if ((longlong *)pplVar7[3][(longlong)iVar8 * 7] == local_70) {
                    if ((plVar2 != (longlong *)0xfffffffffffffff8 && plVar2 != (longlong *)0x0) &&
                       (plVar2[2] != 0)) {
                      local_58 = local_70;
                      local_60 = pplVar7;
                      FUN_1410b4430(pplVar4,&local_60);
                      iVar6 = *(int *)(pplVar4 + 0x15);
                    }
                    break;
                  }
                  iVar8 = (int)plVar2[6];
                } while (iVar8 != -1);
              }
            }
            uVar13 = uVar13 & ~(uint)uVar21;
            pplVar7 = (longlong **)pplVar4[0x14];
            if ((longlong **)pplVar4[0x14] == (longlong **)0x0) {
              pplVar7 = pplVar4 + 0x12;
            }
            iVar8 = (int)uVar20;
            lVar19 = (longlong)iVar8;
            uVar9 = *(uint *)((longlong)pplVar7 + lVar19 * 4) & uVar13;
            if (uVar9 == 0) {
              iVar10 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar10 = iVar6 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar8) {
                iVar11 = iVar8;
              }
              if (iVar8 < iVar10) {
                lVar17 = 0;
                do {
                  uVar9 = *(uint *)((longlong)pplVar7 + (lVar19 + lVar17 + 1) * 4);
                  if (uVar9 != 0) {
                    uVar20 = (ulonglong)(iVar8 + (int)lVar17 + 1);
                    uVar13 = 0xffffffff;
                    goto LAB_1410b3eb6;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar17 = lVar17 + 1;
                } while (iVar11 - lVar19 != lVar17);
                uVar13 = 0xffffffff;
                iVar8 = iVar11;
              }
              uVar20 = (ulonglong)(iVar8 + 1);
              iVar8 = iVar6;
            }
            else {
LAB_1410b3eb6:
              uVar21 = (ulonglong)(-uVar9 & uVar9);
              uVar3 = uVar21 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar8 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
              if (iVar6 <= iVar8) {
                iVar8 = iVar6;
              }
            }
          } while (iVar8 != iVar5);
        }
      }
LAB_1410b3d78:
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
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410b4060 FUN_1410b4060 body=356 status=ok
// SIG undefined FUN_1410b4060(void)

undefined4 *
FUN_1410b4060(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_1410b4260(param_1,local_48);
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
  cVar3 = FUN_1410b41c6(param_1,uVar8,local_40);
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
      FUN_1410b4a72(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b41c6 FUN_1410b41c6 body=153 status=ok
// SIG undefined FUN_1410b41c6(void)

void FUN_1410b41c6(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  uVar2 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar2 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 == -1) {
      uVar2 = 0;
    }
    else {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_140f5ea74(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        uVar2 = 0;
      } while (iVar4 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1410b4260 FUN_1410b4260 body=463 status=ok
// SIG undefined FUN_1410b4260(void)

int * FUN_1410b4260(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 1410b4430 FUN_1410b4430 body=1602 status=ok
// SIG undefined FUN_1410b4430(void)

void FUN_1410b4430(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  void *_Src;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  int iVar28;
  ulonglong uVar29;
  int iVar30;
  uint uVar31;
  undefined8 *puVar32;
  
  lVar16 = FUN_140963a30(param_3);
  if (lVar16 != 0) {
    lVar17 = FUN_140bb5692();
    if (((*(int *)(lVar17 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar17 + 0x38) * 8) == lVar17 + 0x30)) &&
       (iVar28 = *(int *)(lVar16 + 0xa0), (longlong)iVar28 != 0)) {
      lVar16 = *(longlong *)(lVar16 + 0x98);
      lVar17 = 0;
      do {
        if (*(longlong *)(lVar16 + lVar17) != 0) {
          lVar19 = FUN_140bb554a();
          lVar5 = *(longlong *)(lVar16 + lVar17);
          if (((lVar5 == 0) || (lVar19 == 0)) ||
             ((lVar5 = *(longlong *)(lVar5 + 0x10), lVar5 == 0 ||
              ((*(int *)(lVar5 + 0x38) < *(int *)(lVar19 + 0x38) ||
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8)
                != lVar19 + 0x30)))))) {
            return;
          }
        }
        lVar17 = lVar17 + 0x10;
      } while ((longlong)iVar28 * 0x10 != lVar17);
    }
  }
  plVar1 = (longlong *)(param_1 + 0xe0);
  if (*(int *)(param_1 + 0x114) == 0) {
    iVar28 = *(int *)(param_1 + 0xe8);
    *(int *)(param_1 + 0xe8) = iVar28 + 1;
    if (*(int *)(param_1 + 0xec) == iVar28) {
      FUN_1406cd6a8(plVar1,iVar28);
    }
    iVar30 = *(int *)(param_1 + 0x108);
    if (iVar30 == 0) {
      iVar23 = -1;
    }
    else {
      iVar23 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar23 = iVar30 + -1;
      }
      iVar23 = iVar23 >> 5;
    }
    lVar17 = param_1 + 0xf0;
    iVar21 = iVar30 + 1;
    iVar27 = iVar30 + 0x1f;
    if (-1 < iVar30) {
      iVar27 = iVar30;
    }
    if (iVar27 >> 5 == iVar23) {
      *(int *)(param_1 + 0x108) = iVar21;
    }
    else {
      if (*(int *)(param_1 + 0x10c) <= iVar30) {
        iVar23 = iVar30;
        if (iVar30 + 0x20U < 0xa0) {
          iVar21 = 0x80;
        }
        else {
          uVar24 = iVar30 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x10c) + 0x1fU < 0xa0) {
            uVar25 = 4;
            if (4 < uVar24) {
              uVar25 = uVar24;
            }
          }
          else {
            uVar25 = uVar24 + (uVar24 * 3 >> 3) + 0x10;
          }
          uVar18 = (ulonglong)(uVar25 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar31 = (uint)(uVar18 + 0xf);
              if (uVar25 < 0x1ffd) {
                uVar18 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar18 + 0xf >> 4]];
              }
              else {
                uVar22 = (ulonglong)(uVar31 & 0xfffffff0);
                if (uVar22 < 0x7ff1) {
                  bVar20 = (&DAT_14c841e00)[uVar31 >> 4];
                  uVar26 = 0x32;
                  if (0x32 < bVar20) {
                    uVar26 = (ulonglong)bVar20;
                  }
                  uVar29 = 0x32 - (ulonglong)bVar20;
                  do {
                    uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar29 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar29 & 0xffffffff] & 0xf) == 0) goto LAB_1410b4911;
                    lVar16 = uVar26 + 1 + uVar29;
                    uVar29 = uVar29 - 1;
                  } while (lVar16 != 0x33);
                }
                uVar18 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar18 = (ulonglong)DAT_14c841df8;
                }
                uVar18 = -uVar18 & (uVar22 + uVar18) - 1;
              }
            }
            else {
              uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18,0);
              iVar23 = *(int *)(param_1 + 0x108);
            }
          }
LAB_1410b4911:
          iVar15 = (int)(uVar18 >> 2);
          iVar21 = -0x20;
          if ((int)uVar24 <= iVar15) {
            iVar21 = iVar15 << 5;
          }
        }
        *(int *)(param_1 + 0x10c) = iVar21;
        FUN_1446efbd8(lVar17,iVar23);
        iVar21 = *(int *)(param_1 + 0x108) + 1;
      }
      iVar23 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar23 = iVar21;
      }
      *(int *)(param_1 + 0x108) = iVar21;
      if (iVar21 % 0x20 != 0) {
        lVar16 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar16 = lVar17;
        }
        bVar20 = -(char)(iVar21 % 0x20);
        *(uint *)(lVar16 + (longlong)(iVar23 >> 5) * 4) =
             (uint)(*(int *)(lVar16 + (longlong)(iVar23 >> 5) * 4) << (bVar20 & 0x1f)) >>
             (bVar20 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar28;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x100);
    }
    bVar20 = (byte)iVar30 & 0x1f;
    puVar2 = (uint *)(lVar17 + (longlong)(iVar27 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    iVar28 = *(int *)(param_1 + 0x110);
    lVar16 = (longlong)iVar28;
    iVar30 = *(int *)(*(longlong *)(param_1 + 0xe0) + 4 + lVar16 * 0x40);
    *(int *)(param_1 + 0x110) = iVar30;
    iVar23 = *(int *)(param_1 + 0x114) + -1;
    *(int *)(param_1 + 0x114) = iVar23;
    if (iVar23 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar30 * 0x40) = 0xffffffff;
    }
  }
  lVar17 = param_1 + 0xf0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar17 = *(longlong *)(param_1 + 0x100);
  }
  iVar30 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar30 = iVar28;
  }
  puVar2 = (uint *)(lVar17 + (longlong)(iVar30 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar28 & 0x1f);
  lVar17 = *(longlong *)(param_1 + 0xe0);
  lVar16 = lVar16 * 0x40;
  puVar3 = (ulonglong *)(lVar17 + lVar16);
  uVar12 = param_2[1];
  *(undefined8 *)(lVar17 + lVar16) = *param_2;
  ((undefined8 *)(lVar17 + lVar16))[1] = uVar12;
  *(undefined8 *)(lVar17 + 0x10 + lVar16) = *param_3;
  uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar7 = *(undefined4 *)(param_3 + 2);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar4 = (undefined4 *)(lVar17 + 0x18 + lVar16);
  *puVar4 = *(undefined4 *)(param_3 + 1);
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  *(undefined8 *)(lVar17 + 0x28 + lVar16) = 0;
  iVar30 = *(int *)(param_3 + 4);
  _Src = (void *)param_3[3];
  *(int *)(lVar17 + 0x30 + lVar16) = iVar30;
  if ((longlong)iVar30 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x34) = 0;
  }
  else {
    puVar32 = (undefined8 *)(lVar17 + lVar16 + 0x28);
    FUN_1446dd670(puVar32,iVar30,0);
    memcpy((void *)*puVar32,_Src,(longlong)iVar30 * 2);
  }
  *(undefined4 *)(puVar3 + 7) = 0xffffffff;
  uVar18 = *puVar3;
  uVar22 = puVar3[1];
  uVar24 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
  uVar25 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
  uVar25 = uVar25 >> 0x10 ^ uVar25;
  uVar24 = (uint)(uVar22 >> 0x10);
  uVar31 = (uint)uVar22 & 0xffff;
  uVar25 = (uVar25 >> 2) +
           ((uint)uVar22 << 0x10 | uVar31) + (int)(uVar22 >> 0x20) +
           (uVar24 << 0x13 | uVar24 & 0xffff) + (uVar31 >> 4) + uVar25 * 0x40 + 0x9e3779b9 ^ uVar25;
  uVar24 = *(int *)(param_1 + 0xe8) - *(int *)(param_1 + 0x114);
  if ((uVar24 != 0) && (uVar24 != 1)) {
    lVar16 = param_1 + 0x118;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x120);
    }
    iVar30 = *(int *)(lVar16 + (ulonglong)(*(int *)(param_1 + 0x128) - 1U & uVar25) * 4);
    if (iVar30 != -1) {
      lVar16 = *plVar1;
      do {
        lVar17 = (longlong)iVar30 * 0x40;
        puVar4 = (undefined4 *)(lVar16 + lVar17);
        if ((*(ulonglong *)(lVar16 + lVar17) == uVar18) &&
           (*(ulonglong *)(lVar16 + 8 + lVar17) == uVar22)) {
          if (*(longlong *)(puVar4 + 10) != 0) {
            FUN_1400020a8();
          }
          uVar18 = *puVar3;
          uVar6 = *(undefined4 *)((longlong)puVar3 + 4);
          uVar22 = puVar3[1];
          uVar7 = *(undefined4 *)((longlong)puVar3 + 0xc);
          uVar26 = puVar3[2];
          uVar8 = *(undefined4 *)((longlong)puVar3 + 0x14);
          uVar29 = puVar3[3];
          uVar9 = *(undefined4 *)((longlong)puVar3 + 0x1c);
          uVar13 = puVar3[4];
          uVar10 = *(undefined4 *)((longlong)puVar3 + 0x24);
          uVar14 = puVar3[5];
          uVar11 = *(undefined4 *)((longlong)puVar3 + 0x2c);
          *(ulonglong *)(puVar4 + 0xc) = puVar3[6];
          puVar4[8] = (int)uVar13;
          puVar4[9] = uVar10;
          puVar4[10] = (int)uVar14;
          puVar4[0xb] = uVar11;
          puVar4[4] = (int)uVar26;
          puVar4[5] = uVar8;
          puVar4[6] = (int)uVar29;
          puVar4[7] = uVar9;
          *puVar4 = (int)uVar18;
          puVar4[1] = uVar6;
          puVar4[2] = (int)uVar22;
          puVar4[3] = uVar7;
          FUN_143e06e2c(plVar1,iVar28);
          goto LAB_1410b4762;
        }
        iVar30 = puVar4[0xe];
      } while (iVar30 != -1);
    }
  }
  if (uVar24 < 4) {
    iVar30 = 1;
  }
  else {
    uVar18 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar30 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar24 < 1) || (iVar30 <= *(int *)(param_1 + 0x128))) {
    uVar25 = *(int *)(param_1 + 0x128) - 1U & uVar25;
    *(uint *)((longlong)puVar3 + 0x3c) = uVar25;
    lVar16 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar16 = param_1 + 0x118;
    }
    *(undefined4 *)(puVar3 + 7) =
         *(undefined4 *)
          (lVar16 + ((longlong)*(int *)(param_1 + 0x128) - 1U & (longlong)(int)uVar25) * 4);
    lVar16 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar16 = param_1 + 0x118;
    }
    *(int *)(lVar16 + ((longlong)*(int *)(param_1 + 0x128) - 1U & (longlong)(int)uVar25) * 4) =
         iVar28;
  }
  else {
    *(int *)(param_1 + 0x128) = iVar30;
    FUN_1418a2d62(plVar1);
  }
LAB_1410b4762:
  FUN_1418a0d8e(param_1);
  return;
}



// FUNCTION 1410b4a72 FUN_1410b4a72 body=607 status=ok
// SIG undefined FUN_1410b4a72(void)

void FUN_1410b4a72(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x14);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x10 + lVar13 * 0x14) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0xc + lVar13 * 0x14) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1410b4c6b;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1410b4c6b:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b4ce0 FUN_1410b4ce0 body=158 status=ok
// SIG undefined FUN_1410b4ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410b4ce0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14ac5b3a0;
  if (param_1[7] != 0) {
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
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410b4d7e FUN_1410b4d7e body=532 status=ok
// SIG undefined FUN_1410b4d7e(void)

void FUN_1410b4d7e(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
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
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x68;
      *(undefined4 *)(lVar11 + 0x58 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x50 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_1410b4f94(lVar11 + lVar10 + 0x10);
      uVar12 = uVar12 & ~(uint)uVar8;
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
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar3 - lVar11 == lVar10) goto LAB_1410b4eca;
        }
        iVar13 = iVar13 + (int)lVar10 + 1;
        uVar12 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1410b4eca:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_14059f004(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar12 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b4f94 FUN_1410b4f94 body=55 status=ok
// SIG undefined FUN_1410b4f94(void)

void FUN_1410b4f94(longlong *param_1)

{
  FUN_1410b4fcc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410b4fcc FUN_1410b4fcc body=537 status=ok
// SIG undefined FUN_1410b4fcc(void)

void FUN_1410b4fcc(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_1410b50cc;
        iVar9 = iVar9 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x38;
      FUN_1410b51e5(*(undefined8 *)(lVar11 + 0x18 + lVar10),*(undefined4 *)(lVar11 + 0x20 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x18 + lVar10) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
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
        lVar10 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar3 = puVar7[lVar11 + lVar10 + 1];
          if (uVar3 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar11 == lVar10) goto LAB_1410b50cc;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1410b50cc:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1410b51e5 FUN_1410b51e5 body=96 status=ok
// SIG undefined FUN_1410b51e5(void)

void FUN_1410b51e5(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_1410b51fa:
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
        goto LAB_1410b51fa;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 1410b5246 FUN_1410b5246 body=31 status=ok
// SIG undefined FUN_1410b5246(void)

undefined8 FUN_1410b5246(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410b5266 FUN_1410b5266 body=510 status=ok
// SIG undefined FUN_1410b5266(void)

void FUN_1410b5266(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined2 *_Src;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2a = 0;
  FUN_140e98e1a();
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2a);
            goto LAB_1410b532f;
          }
        }
        _Src = (undefined2 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2a) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2a,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2a,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_40 = (undefined4)plVar1[6];
        local_48 = 0;
        FUN_1400746b0(plVar1,&local_2a,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2a,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2a);
  }
LAB_1410b532f:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = (**(code **)(*param_1 + 0x720))(param_1,local_2a);
  if (cVar5 == '\0') {
    FUN_1468998ea(L"ServerSetPatternSeed_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x728))(param_1,local_2a);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b5472 FUN_1410b5472 body=1111 status=ok
// SIG undefined FUN_1410b5472(void)

undefined8 FUN_1410b5472(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  code **local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = *(longlong *)(param_1 + 0x18);
  if (lVar6 == 0) {
    uVar7 = FUN_140927942();
    lVar6 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x18) = lVar6;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    uVar7 = 0;
    if ((lVar6 == 0) || (uVar7 = 0, *plVar1 == 0)) goto LAB_1410b54f1;
    plVar8 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
      lVar6 = FUN_144aff482(uVar7,plVar1);
      *(longlong *)(param_1 + 0x20) = lVar6;
      if (lVar6 != 0) goto LAB_1410b54b4;
    }
  }
  else {
LAB_1410b54b4:
    lVar6 = FUN_1447262c2(param_3);
    if (lVar6 != 0) {
      if (DAT_14cac9ca8 == 0) {
        local_70 = &local_58;
        local_58 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_1478c0a72;
        local_80 = &LAB_1417b2375;
        local_88 = L"Engine";
        local_90 = 0x1000000000;
        local_98 = 0x10000004;
        local_a0 = (code **)CONCAT44(local_a0._4_4_,8);
        local_a8 = CONCAT44(local_a8._4_4_,0x390);
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
        uVar7 = FUN_1401b0f18();
        plVar8 = (longlong *)FUN_144718840(lVar6,uVar7);
        if (plVar8 != (longlong *)0x0) {
          uVar7 = (**(code **)(*plVar8 + 0x28))(plVar8);
          FUN_1406c9d00(uVar7,&local_58);
          if (local_50 == 0) {
            uVar7 = FUN_140927942();
            local_50 = FUN_14477b664(uVar7);
          }
          if (local_48 != 0) {
LAB_1410b5566:
            if (*(char *)(param_1 + 0x28) == '\x01') {
              if (*(longlong *)(param_1 + 0x18) == 0) {
                uVar7 = FUN_140927942();
                uVar7 = FUN_14477b664(uVar7);
                *(undefined8 *)(param_1 + 0x18) = uVar7;
              }
              lVar6 = local_50;
              if (local_50 == 0) {
                lVar6 = FUN_140927942();
              }
              pcVar2 = local_58;
              uVar9 = FUN_14477b664(lVar6);
              local_38 = pcVar2;
              uVar4 = FUN_144a7891a(uVar9);
              local_40 = *(undefined8 *)(param_1 + 0x10);
              uVar7 = *(undefined8 *)(param_1 + 0x18);
              uVar5 = FUN_144a7891a(uVar7);
              local_a8 = uVar9;
              local_a0 = &local_38;
              uVar7 = FUN_144a789b8(uVar5,uVar7,&local_40,uVar4);
            }
            else {
              lVar6 = local_48;
              if (local_50 == 0) {
                uVar7 = FUN_140927942();
                local_50 = FUN_14477b664(uVar7);
                lVar6 = local_48;
                if (((local_48 == 0) && (lVar6 = 0, local_50 != 0)) && (local_58 != (code *)0x0)) {
                  plVar8 = *(longlong **)(local_50 + 0xb8);
                  if ((plVar8 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
                    lVar6 = 0;
                    local_48 = lVar6;
                  }
                  else {
                    uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
                    lVar6 = FUN_144aff482(uVar7,&local_58);
                    local_48 = lVar6;
                  }
                }
              }
              lVar10 = *(longlong *)(param_1 + 0x18);
              if (lVar10 == 0) {
                uVar7 = FUN_140927942();
                lVar10 = FUN_14477b664(uVar7);
                *(longlong *)(param_1 + 0x18) = lVar10;
              }
              if (((*(longlong *)(param_1 + 0x20) == 0) && (lVar10 != 0)) && (*plVar1 != 0)) {
                plVar8 = *(longlong **)(lVar10 + 0xb8);
                if ((plVar8 == (longlong *)0x0) ||
                   (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 == '\0')) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
                  uVar7 = FUN_144aff482(uVar7,plVar1);
                }
                *(undefined8 *)(param_1 + 0x20) = uVar7;
              }
              uVar7 = FUN_14030fbf6(lVar6);
            }
            goto LAB_1410b54f1;
          }
          uVar7 = 0;
          if ((local_50 == 0) || (local_58 == (code *)0x0)) goto LAB_1410b54f1;
          plVar8 = *(longlong **)(local_50 + 0xb8);
          if ((plVar8 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar3 != '\0')) {
            uVar7 = (**(code **)(*plVar8 + 0x110))(plVar8);
            local_48 = FUN_144aff482(uVar7,&local_58);
            if (local_48 != 0) goto LAB_1410b5566;
          }
        }
      }
    }
  }
  uVar7 = 0;
LAB_1410b54f1:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1410b58ca FUN_1410b58ca body=8 status=ok
// SIG undefined FUN_1410b58ca(void)

bool FUN_1410b58ca(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 1410b58d2 FUN_1410b58d2 body=8 status=ok
// SIG undefined FUN_1410b58d2(void)

undefined8 * FUN_1410b58d2(void)

{
  return &DAT_14cb82350;
}



// FUNCTION 1410b58da FUN_1410b58da body=93 status=ok
// SIG undefined FUN_1410b58da(void)

undefined8 * FUN_1410b58da(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1409839df(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1410b5974(param_1,iVar1);
      FUN_1410b5937(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1410b5937 FUN_1410b5937 body=60 status=ok
// SIG undefined FUN_1410b5937(void)

void FUN_1410b5937(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1447a97f4(param_1,param_2);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1410b5974 FUN_1410b5974 body=233 status=ok
// SIG undefined FUN_1410b5974(void)

void FUN_1410b5974(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
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
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1410b5a5e FUN_1410b5a5e body=140 status=ok
// SIG undefined FUN_1410b5a5e(void)

undefined4 FUN_1410b5a5e(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x110))(param_1,&local_28,param_2);
  uVar3 = 0;
  if (local_28 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x130))(param_1);
  }
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
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b5aec FUN_1410b5aec body=178 status=ok
// SIG undefined FUN_1410b5aec(void)

undefined4 FUN_1410b5aec(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x100))(param_1,&local_28,param_2);
  plVar2 = local_20;
  if (local_28 == 0) {
    uVar4 = 0;
  }
  else if (local_20 == (longlong *)0x0) {
    uVar4 = *(undefined4 *)(local_28 + 0x14);
  }
  else {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
    uVar4 = *(undefined4 *)(local_28 + 0x14);
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar3 = (int *)((longlong)local_20 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b5ba0 FUN_1410b5ba0 body=104 status=ok
// SIG undefined FUN_1410b5ba0(void)

undefined8 FUN_1410b5ba0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *param_2;
  FUN_1446dcdd4(local_40);
  uVar1 = FUN_1410b5c0a(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b5c0a FUN_1410b5c0a body=83 status=ok
// SIG undefined FUN_1410b5c0a(void)

undefined8 FUN_1410b5c0a(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = DAT_14cb8be38;
  if (DAT_14cb8be38 != 0) {
    uVar2 = FUN_1400e3c00(DAT_14cb8be38,param_1,1);
    lVar3 = FUN_14013f0dc(lVar1,uVar2,param_1,1);
    if (lVar3 != 0) {
      uVar2 = FUN_140cbed0a(lVar1,lVar3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1410b5c5e FUN_1410b5c5e body=602 status=ok
// SIG undefined FUN_1410b5c5e(void)

void FUN_1410b5c5e(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_68 [32];
  int *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2[0x1b] != 0) {
    *(byte *)(param_2 + 0xac) = *(byte *)(param_2 + 0xac) & 0x7f;
    uVar7 = param_2[0x15];
    if (param_2[0x17] != 0) {
      uVar7 = FUN_144a78877(uVar7);
    }
    uVar8 = param_2[0x18];
    if (param_2[0x1a] != 0) {
      uVar8 = FUN_144a78877(uVar8,param_2[0x1a]);
    }
    plVar2 = (longlong *)(param_1 + 0x528);
    piVar1 = param_2 + 0x15;
    uVar5 = param_2[0x1b];
    uVar12 = param_2[0x1d];
    if (uVar12 != 0) {
      uVar11 = uVar12 >> 0xd ^ uVar5 - uVar12;
      uVar5 = uVar11 << 8 ^ (-0x61c88647 - uVar12) - uVar11;
      uVar14 = uVar5 >> 0xd ^ (uVar12 - uVar11) - uVar5;
      uVar12 = uVar14 >> 0xc ^ (uVar11 - uVar5) - uVar14;
      uVar5 = uVar12 << 0x10 ^ (uVar5 - uVar14) - uVar12;
      uVar11 = uVar5 >> 5 ^ (uVar14 - uVar12) - uVar5;
      uVar12 = uVar11 >> 3 ^ (uVar12 - uVar5) - uVar11;
      uVar5 = uVar12 << 10 ^ (uVar5 - uVar11) - uVar12;
      uVar5 = uVar5 >> 0xf ^ uVar11 - (uVar12 + uVar5);
    }
    iVar6 = FUN_140ac163e(plVar2,uVar8 ^ uVar7 ^ uVar5,piVar1);
    if (iVar6 != -1) {
      lVar15 = *plVar2 + (longlong)iVar6 * 0xb0;
      if ((lVar15 != 0) && (lVar16 = *plVar2 + (longlong)iVar6 * 0xb0 + 0x28, lVar16 != 0)) {
        local_48 = param_2;
        FUN_1410b5ed2(lVar15 + 0x40);
        if (*(int *)(lVar15 + 0x58) != *(int *)(lVar15 + 0x84)) {
          lVar9 = lVar15 + 0x88;
          if (*(longlong *)(lVar15 + 0x90) != 0) {
            lVar9 = *(longlong *)(lVar15 + 0x90);
          }
          iVar6 = *(int *)(lVar9 + ((longlong)*(int *)(lVar15 + 0x98) - 1U & (longlong)*param_2) * 4
                          );
          if (iVar6 != -1) {
            lVar4 = *(longlong *)(lVar15 + 0x50);
            do {
              piVar3 = (int *)(lVar4 + (longlong)iVar6 * 0xc);
              if (*piVar3 == *param_2) {
                iVar13 = *(int *)(lVar9 + (longlong)piVar3[2] * 4);
                if (iVar13 == iVar6) {
                  piVar10 = (int *)(lVar9 + (longlong)piVar3[2] * 4);
                }
                else {
                  do {
                    lVar9 = (longlong)iVar13;
                    iVar13 = *(int *)(lVar4 + 4 + lVar9 * 0xc);
                  } while (iVar13 != iVar6);
                  piVar10 = (int *)(lVar4 + lVar9 * 0xc + 4);
                }
                *piVar10 = piVar3[1];
                FUN_1410b64cc();
                break;
              }
              iVar6 = piVar3[1];
            } while (iVar6 != -1);
          }
        }
        if (*(int *)(lVar15 + 0x48) == 0) {
          FUN_1457f5aec(param_1,piVar1,lVar16);
          FUN_1457f59e8(plVar2,piVar1);
        }
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



// FUNCTION 1410b5ed2 FUN_1410b5ed2 body=202 status=ok
// SIG undefined FUN_1410b5ed2(void)

void FUN_1410b5ed2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar1 = *(int *)(param_1 + 1);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    piVar2 = (int *)*param_1;
    iVar5 = 0;
    bVar10 = *piVar2 == *(int *)*param_2;
    iVar7 = 0;
    do {
      iVar3 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar3 = iVar1;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar3;
        if (lVar4 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (piVar2[lVar6] == *(int *)*param_2));
      if (bVar10 == false) {
        if (iVar5 != iVar7) {
          memmove(piVar2 + iVar5,piVar2 + iVar7,(longlong)(iVar9 - iVar7) << 2);
        }
        iVar5 = iVar5 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar4);
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 1410b5f9c FUN_1410b5f9c body=1216 status=ok
// SIG undefined FUN_1410b5f9c(void)

void FUN_1410b5f9c(longlong param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  
  if (((((*(int *)(param_1 + 0x20) != 0) && (uVar4 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar4)) &&
       ((int)uVar4 < DAT_14c9647dc)) &&
      ((lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar10 != 0 &&
       (*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x20))))) &&
     (((*(uint *)(lVar10 + 8) & 0x10200000) == 0 && (iVar3 = FUN_140ac16d8(param_1), iVar3 == 3))))
  {
    return;
  }
  lVar10 = FUN_140718ac0(param_1,param_2);
  if (lVar10 == 0) {
    return;
  }
  if (*(int *)(lVar10 + 0x6c) == 0) {
LAB_1410b6022:
    uVar4 = *(uint *)(lVar10 + 0x30);
    if (*(int *)(lVar10 + 0x38) != 0) {
      uVar4 = FUN_144a78877(uVar4);
    }
    uVar5 = *(uint *)(lVar10 + 0x3c);
    if (*(int *)(lVar10 + 0x44) != 0) {
      uVar5 = FUN_144a78877(uVar5);
    }
    uVar6 = *(uint *)(lVar10 + 0x48);
    if (*(int *)(lVar10 + 0x50) != 0) {
      uVar6 = FUN_144a78877(uVar6);
    }
    iVar3 = FUN_1410b645c((longlong *)(param_1 + 0x4d8),uVar5 ^ uVar4 ^ uVar6,lVar10 + 0x30);
    cVar2 = '\x01';
    if (iVar3 == -1) goto LAB_1410b6084;
    lVar10 = *(longlong *)(param_1 + 0x4d8);
    lVar13 = lVar10 + (longlong)iVar3 * 0x50;
    if ((lVar13 == 0) || (lVar10 + (longlong)iVar3 * 0x50 == -0x28)) goto LAB_1410b6084;
    iVar3 = *(int *)(lVar13 + 0x40);
    if ((longlong)iVar3 != 0) {
      lVar10 = *(longlong *)(lVar13 + 0x38);
      lVar13 = 0;
      do {
        cVar2 = FUN_148844e06(*(undefined8 *)(lVar10 + lVar13));
        if (cVar2 != '\0') break;
        bVar16 = (longlong)iVar3 * 0x10 + -0x10 != lVar13;
        lVar13 = lVar13 + 0x10;
      } while (bVar16);
      goto LAB_1410b6084;
    }
  }
  else {
    uVar4 = *(uint *)(lVar10 + 0x54);
    if (*(int *)(lVar10 + 0x5c) != 0) {
      uVar4 = FUN_144a78877(uVar4);
    }
    uVar5 = *(uint *)(lVar10 + 0x60);
    if (*(int *)(lVar10 + 0x68) != 0) {
      uVar5 = FUN_144a78877(uVar5,*(int *)(lVar10 + 0x68));
    }
    uVar6 = *(uint *)(lVar10 + 0x6c);
    uVar14 = *(uint *)(lVar10 + 0x74);
    if (uVar14 != 0) {
      uVar8 = uVar14 >> 0xd ^ uVar6 - uVar14;
      uVar6 = uVar8 << 8 ^ (-0x61c88647 - uVar14) - uVar8;
      uVar15 = uVar6 >> 0xd ^ (uVar14 - uVar8) - uVar6;
      uVar14 = uVar15 >> 0xc ^ (uVar8 - uVar6) - uVar15;
      uVar6 = uVar14 << 0x10 ^ (uVar6 - uVar15) - uVar14;
      uVar8 = uVar6 >> 5 ^ (uVar15 - uVar14) - uVar6;
      uVar14 = uVar8 >> 3 ^ (uVar14 - uVar6) - uVar8;
      uVar6 = uVar14 << 10 ^ (uVar6 - uVar8) - uVar14;
      uVar6 = uVar6 >> 0xf ^ uVar8 - (uVar14 + uVar6);
    }
    iVar3 = FUN_140ac163e((longlong *)(param_1 + 0x528),uVar5 ^ uVar4 ^ uVar6,lVar10 + 0x54);
    if (iVar3 == -1) goto LAB_1410b6022;
    lVar13 = *(longlong *)(param_1 + 0x528);
    lVar9 = lVar13 + (longlong)iVar3 * 0xb0;
    if ((((lVar9 == 0) || ((longlong)iVar3 * 0xb0 + lVar13 == -0x28)) ||
        ((*(int *)(lVar9 + 0x3c) == 0 ||
         (((uVar4 = *(uint *)(lVar9 + 0x38), (int)uVar4 < 0 || (DAT_14c9647dc <= (int)uVar4)) ||
          (plVar11 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
          plVar11 == (longlong *)0x0)))))) ||
       ((((int)plVar11[2] != *(int *)(lVar9 + 0x3c) || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))
        || (lVar13 = *plVar11, lVar13 == 0)))) goto LAB_1410b6022;
    uVar7 = FUN_140ef2452();
    plVar11 = (longlong *)FUN_144718840(lVar13,uVar7);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar11 + 0x30))(plVar11), cVar2 == '\0')) goto LAB_1410b6022;
  }
  cVar2 = '\0';
LAB_1410b6084:
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    lVar10 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x428);
    }
    iVar3 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 1000) + (longlong)iVar3 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar3 * 0x10) == param_2) {
          if ((uint *)(lVar10 + 4) == (uint *)0x0 || lVar10 == 0) {
            return;
          }
          uVar4 = *(uint *)(lVar10 + 4);
          if ((int)uVar4 < 0) {
            return;
          }
          if (*(int *)(param_1 + 0x60) <= (int)uVar4) {
            return;
          }
          lVar10 = param_1 + 0x48;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            lVar10 = *(longlong *)(param_1 + 0x58);
          }
          if ((*(uint *)(lVar10 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0) {
            return;
          }
          bVar1 = *(byte *)(*(longlong *)(param_1 + 0x38) + 0x2b0 + (ulonglong)uVar4 * 0x300);
          if (((bVar1 & 8) == 0) != (bool)cVar2) {
            return;
          }
          lVar10 = *(longlong *)(param_1 + 0x38) + (ulonglong)uVar4 * 0x300;
          *(byte *)(lVar10 + 0x2b0) = bVar1 & 0xf7 | cVar2 << 3;
          FUN_1410b6c04(param_1,lVar10,CONCAT71((uint7)(uint3)(uVar4 >> 0xd),0x10));
          plVar11 = *(longlong **)(lVar10 + 0x108);
          if (plVar11 == (longlong *)0x0) {
            return;
          }
          if (*(int *)(lVar10 + 0x104) == 0) {
            return;
          }
          uVar4 = *(uint *)(lVar10 + 0x100);
          if ((int)uVar4 < 0) {
            return;
          }
          if (DAT_14c9647dc <= (int)uVar4) {
            return;
          }
          lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
          if (lVar13 == 0) {
            return;
          }
          if (*(int *)(lVar13 + 0x10) != *(int *)(lVar10 + 0x104)) {
            return;
          }
          if ((*(uint *)(lVar13 + 8) & 0x10200000) != 0) {
            return;
          }
          uVar12 = (ulonglong)CONCAT11((char)(uVar4 >> 0x18),*(undefined1 *)(lVar10 + 0x2b0)) &
                   0xffffffffffffff08;
                    /* WARNING: Could not recover jumptable at 0x0001410b63a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar11 + 0x78))(plVar11,CONCAT71((int7)(uVar12 >> 8),(byte)uVar12 >> 3));
          return;
        }
        iVar3 = *(int *)(lVar10 + 8);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 1410b645c FUN_1410b645c body=112 status=ok
// SIG undefined FUN_1410b645c(void)

int FUN_1410b645c(longlong *param_1,uint param_2,undefined8 param_3)

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
        cVar1 = FUN_140ac16b0(lVar3 + (longlong)iVar4 * 0x50,param_3);
        if (cVar1 != '\0') {
          return iVar4;
        }
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x48 + (longlong)iVar4 * 0x50);
      } while (iVar4 != -1);
    }
  }
  return -1;
}



// FUNCTION 1410b64cc FUN_1410b64cc body=114 status=ok
// SIG undefined FUN_1410b64cc(void)

void FUN_1410b64cc(longlong *param_1,int param_2)

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



// FUNCTION 1410b653e FUN_1410b653e body=186 status=ok
// SIG undefined FUN_1410b653e(void)

void FUN_1410b653e(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar6 = (longlong)param_2 * 0xb0;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xac + lVar6);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0xa8 + lVar5 * 0xb0);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0xb0 + 0xa8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + lVar6 + 0xa8);
  lVar5 = *param_1;
  lVar1 = lVar5 + lVar6;
  *(undefined4 *)(lVar1 + 0x98) = 0;
  if (*(longlong *)(lVar1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_143d3382a(lVar1 + 0x50);
  if (*(longlong *)(lVar5 + 0x40 + lVar6) != 0) {
    FUN_1400020a8();
  }
  FUN_148840de0(param_1,param_2);
  return;
}



// FUNCTION 1410b65f8 FUN_1410b65f8 body=151 status=ok
// SIG undefined FUN_1410b65f8(void)

undefined8 FUN_1410b65f8(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
        (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
         ((*plVar4 != 0 && (lVar2 = *(longlong *)(*plVar4 + 0x1e0), lVar2 != 0)))))) &&
       (plVar4 = *(longlong **)(lVar2 + 0x38), plVar4 != (longlong *)0x0)) {
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x308))(plVar4,0);
      if (plVar4 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
        if (lVar2 != 0) {
          uVar3 = FUN_1401499e8(lVar2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1410b6690 FUN_1410b6690 body=1093 status=ok
// SIG undefined FUN_1410b6690(void)

void FUN_1410b6690(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar4 = FUN_1401144ce(param_2);
  if (cVar4 == '\0') goto LAB_1410b6954;
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
LAB_1410b6a7d:
    local_40 = DAT_14c948620;
    uVar13 = DAT_14c948618;
  }
  else {
    lVar11 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 3)) goto LAB_1410b6a7d;
    local_40 = *(uint *)(lVar11 + 0x20);
    uVar13 = *(ulonglong *)(lVar11 + 0x18);
  }
  local_48._0_4_ = (uint)uVar13;
  if (local_40 != 0) {
    uVar6 = local_40 >> 0xd ^ (uint)local_48 - local_40;
    uVar9 = uVar6 << 8 ^ (-0x61c88647 - local_40) - uVar6;
    uVar12 = uVar9 >> 0xd ^ (local_40 - uVar6) - uVar9;
    uVar8 = uVar12 >> 0xc ^ (uVar6 - uVar9) - uVar12;
    uVar6 = uVar8 << 0x10 ^ (uVar9 - uVar12) - uVar8;
    uVar9 = uVar6 >> 5 ^ (uVar12 - uVar8) - uVar6;
    uVar8 = uVar9 >> 3 ^ (uVar8 - uVar6) - uVar9;
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar9) - uVar8;
    local_48._0_4_ = uVar6 >> 0xf ^ uVar9 - (uVar8 + uVar6);
  }
  uVar6 = (uint)local_48;
  local_48 = uVar13;
  iVar5 = FUN_140502a60((longlong *)(param_1 + 0x78),uVar6,&local_48);
  if (iVar5 == -1) goto LAB_1410b6954;
  lVar11 = *(longlong *)(param_1 + 0x78);
  if ((lVar11 + (longlong)iVar5 * 0x70 == 0) ||
     (plVar10 = (longlong *)(lVar11 + (longlong)iVar5 * 0x70 + 0x10), plVar10 == (longlong *)0x0))
  goto LAB_1410b6954;
  if ((*(int *)(param_2 + 0x10) == 0) ||
     ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (*(int *)(param_2 + 0x10) == DAT_14c948000)))
     ) {
LAB_1410b6a93:
    local_40 = DAT_14c948620;
    local_48 = DAT_14c948618;
  }
  else {
    lVar11 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 4)) goto LAB_1410b6a93;
    local_40 = *(uint *)(lVar11 + 0x2c);
    local_48 = *(ulonglong *)(lVar11 + 0x24);
  }
  uVar13 = local_48 & 0xffffffff;
  if (local_40 != 0) {
    uVar6 = FUN_144a78877(uVar13,local_40);
    uVar13 = (ulonglong)uVar6;
  }
  iVar5 = FUN_144a24328(plVar10,uVar13,&local_48);
  if (iVar5 == -1) goto LAB_1410b6954;
  if ((*plVar10 + (longlong)iVar5 * 0x68 == 0) ||
     (plVar10 = (longlong *)(*plVar10 + (longlong)iVar5 * 0x68 + 0x10), plVar10 == (longlong *)0x0))
  goto LAB_1410b6954;
  if ((*(int *)(param_2 + 0x10) == 0) ||
     ((iVar5 = *(int *)(param_2 + 0x14), iVar5 == 0 || (*(int *)(param_2 + 0x10) == DAT_14c948000)))
     ) {
LAB_1410b6aa9:
    local_40 = DAT_14c948620;
    uVar13 = DAT_14c948618;
  }
  else {
    lVar11 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar5) {
      lVar11 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar5 == 1) || (iVar5 < 5)) goto LAB_1410b6aa9;
    local_40 = *(uint *)(lVar11 + 0x38);
    uVar13 = *(ulonglong *)(lVar11 + 0x30);
  }
  local_48._0_4_ = (uint)uVar13;
  if (local_40 != 0) {
    uVar6 = local_40 >> 0xd ^ (uint)local_48 - local_40;
    uVar9 = uVar6 << 8 ^ (-0x61c88647 - local_40) - uVar6;
    uVar12 = uVar9 >> 0xd ^ (local_40 - uVar6) - uVar9;
    uVar8 = uVar12 >> 0xc ^ (uVar6 - uVar9) - uVar12;
    uVar6 = uVar8 << 0x10 ^ (uVar9 - uVar12) - uVar8;
    uVar9 = uVar6 >> 5 ^ (uVar12 - uVar8) - uVar6;
    uVar8 = uVar9 >> 3 ^ (uVar8 - uVar6) - uVar9;
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar9) - uVar8;
    local_48._0_4_ = uVar6 >> 0xf ^ uVar9 - (uVar8 + uVar6);
  }
  uVar6 = (uint)local_48;
  local_48 = uVar13;
  iVar5 = FUN_140727b76(plVar10,uVar6,&local_48);
  if (iVar5 != -1) {
    lVar11 = *plVar10 + (longlong)iVar5 * 0xa8;
    if (((lVar11 != 0) && ((longlong)iVar5 * 0xa8 + *plVar10 != -0x10)) &&
       (uVar13 = (ulonglong)*(int *)(lVar11 + 0x78), 0 < (longlong)uVar13)) {
      plVar10 = (longlong *)(lVar11 + 0x70);
      lVar11 = uVar13 * 0x10 + -8;
      do {
        lVar1 = *plVar10;
        if ((*(int *)(lVar1 + lVar11) == 0) ||
           (plVar2 = *(longlong **)(lVar1 + -8 + lVar11), plVar2 == (longlong *)0x0)) {
          uVar7 = 0;
        }
        else {
          (**(code **)(*plVar2 + 0x38))(plVar2,&local_48);
          uVar7 = local_48;
        }
        if (((uVar7 == param_3) || (*(int *)(lVar1 + lVar11) == 0)) ||
           ((plVar2 = *(longlong **)(lVar1 + -8 + lVar11), plVar2 == (longlong *)0x0 ||
            (cVar4 = (**(code **)(*plVar2 + 0x30))(), cVar4 == '\0')))) {
          FUN_1410b6b64(plVar10,(int)uVar13 + -1);
          FUN_1410b6ad6(plVar10);
        }
        lVar11 = lVar11 + -0x10;
        bVar3 = 1 < uVar13;
        uVar13 = uVar13 - 1;
      } while (bVar3);
    }
  }
LAB_1410b6954:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410b6ad6 FUN_1410b6ad6 body=142 status=ok
// SIG undefined FUN_1410b6ad6(void)

void FUN_1410b6ad6(longlong param_1)

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



// FUNCTION 1410b6b64 FUN_1410b6b64 body=159 status=ok
// SIG undefined FUN_1410b6b64(void)

void FUN_1410b6b64(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  lVar1 = *param_1;
  _Dst = (longlong *)(lVar1 + (longlong)(int)param_2 * 0x10);
  if (*(int *)(lVar1 + 8 + (longlong)(int)param_2 * 0x10) != 0) {
    puVar2 = (undefined8 *)*_Dst;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1410b6b8e;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(_Dst,0,0,0x10);
    *(undefined4 *)(_Dst + 1) = 0;
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
LAB_1410b6b8e:
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar4 = 1;
    if (iVar5 < 1) {
      iVar4 = iVar5;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar3 - iVar4) * 0x10),(longlong)iVar4 << 4);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 1410b6c04 FUN_1410b6c04 body=239 status=ok
// SIG undefined FUN_1410b6c04(void)

void FUN_1410b6c04(longlong param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (((((*(int *)(param_1 + 0x20) != 0) && (uVar1 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0 &&
       (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x20))))) &&
     (((*(uint *)(lVar3 + 8) & 0x10200000) == 0 && (iVar2 = FUN_140ac16d8(param_1), iVar2 == 3)))) {
    return;
  }
  if (((*(byte *)((longlong)param_2 + 0x2b1) & 2) != 0) &&
     (*(byte *)(param_2 + 0xbe) = (byte)param_2[0xbe] | param_3,
     *(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c))) {
    lVar3 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x428);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 1000) + (longlong)iVar2 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar2 * 0x10) == *param_2) {
          if (lVar3 == 0) {
            return;
          }
          if (lVar3 == -4) {
            return;
          }
          FUN_140d82884(param_1 + 0x350);
          return;
        }
        iVar2 = *(int *)(lVar3 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1410b6cf4 FUN_1410b6cf4 body=375 status=ok
// SIG undefined FUN_1410b6cf4(void)

undefined8 * FUN_1410b6cf4(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1410b6e77 FUN_1410b6e77 body=838 status=ok
// SIG undefined FUN_1410b6e77(void)

void FUN_1410b6e77(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410b71be(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b91db00;
  puVar1[0x72] = &PTR_FUN_14b91e1a0;
  puVar1[0x73] = &PTR_FUN_14b91e1c0;
  puVar1[0x74] = &PTR_FUN_14b91e1f0;
  puVar1[0x75] = &PTR_FUN_14b91e200;
  puVar1[0x76] = &PTR_FUN_14b91e270;
  puVar1[0x77] = &PTR_FUN_14b91e2a0;
  puVar1[0x78] = &PTR_FUN_14b91e2d0;
  puVar1[0x7f] = &PTR_FUN_14b91e380;
  puVar1[0x80] = &PTR_FUN_14b91e3f0;
  puVar1[0x81] = &PTR_FUN_14b91e460;
  puVar1[0x82] = &PTR_FUN_14b91e490;
  puVar1[0x83] = &PTR_FUN_14b91e4d0;
  puVar1[0x84] = &PTR_FUN_14b91e570;
  puVar1[0x85] = &PTR_FUN_14b91e590;
  puVar1[0x89] = &PTR_FUN_14b91e5b0;
  puVar1[0x8a] = &PTR_FUN_14b91e670;
  puVar1[0x8b] = &PTR_FUN_14b91e6f0;
  puVar1[0x8c] = &PTR_FUN_14b91e740;
  puVar1[0x8d] = &PTR_FUN_14b91e780;
  puVar1[0x8e] = &PTR_FUN_14b91e7a0;
  puVar1[0x8f] = &PTR_FUN_14b91e7c0;
  puVar1[0x90] = &PTR_FUN_14b91e7e0;
  puVar1[0x91] = &PTR_FUN_14b91e800;
  puVar1[0x92] = &PTR_FUN_14b91e820;
  puVar1[0x93] = &PTR_FUN_14b91e840;
  puVar1[0x94] = &PTR_FUN_14b91e860;
  puVar1[0x95] = &PTR_FUN_14b91e880;
  puVar1[0x96] = &PTR_FUN_14b91e8a0;
  puVar1[0x34b] = &PTR_FUN_14b91e8c0;
  puVar1[0x352] = &PTR_FUN_14b91e8d0;
  puVar1[0x353] = &PTR_FUN_14b91e910;
  puVar1[0x354] = &PTR_FUN_14b91e950;
  puVar1[0x355] = &PTR_FUN_14b91e9a0;
  puVar1[0x356] = &PTR_FUN_14b91e9d0;
  puVar1[0x359] = &PTR_FUN_14b91ea10;
  puVar1[0x35a] = &PTR_FUN_14b91ea20;
  puVar1[0x35b] = &PTR_FUN_14b91ea50;
  puVar1[0x35c] = &PTR_FUN_14b91eaf0;
  puVar1[0x4bf] = &PTR_FUN_14b91eb10;
  puVar1[0x4e5] = 0;
  puVar1[0x4e6] = 0;
  puVar1[0x4e3] = 0;
  puVar1[0x4e4] = 0;
  puVar1[0x4e1] = 0;
  puVar1[0x4e2] = 0;
  *(undefined4 *)(puVar1 + 0x4e7) = 2;
  puVar1[0x4f8] = 0;
  *(undefined4 *)(puVar1 + 0x4f9) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x273c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2744) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x274c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2754) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x275c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2764) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x276c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2774) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x277c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2784) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x278c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2794) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x279c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x27a4) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x27ac) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x27cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x27d4) = 0;
  puVar1[0x4fc] = 0;
  *(undefined4 *)(puVar1 + 0x4fd) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x27fd) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x2805) = 0;
  puVar1[0x4fe] = 0;
  puVar1[0x4ff] = 0;
  puVar1[0x506] = 0;
  puVar1[0x507] = 0;
  puVar1[0x504] = 0;
  puVar1[0x505] = 0;
  puVar1[0x502] = 0;
  puVar1[0x503] = 0;
  *(undefined4 *)(puVar1 + 0x508) = 2;
  *(undefined1 *)(puVar1 + 0x51e) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2847) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x2844) = 0;
  puVar1[0x510] = 0;
  puVar1[0x50e] = 0;
  puVar1[0x50f] = 0;
  puVar1[0x50c] = 0;
  puVar1[0x50d] = 0;
  puVar1[0x50a] = 0;
  puVar1[0x50b] = 0;
  puVar1[0x522] = 0;
  puVar1[0x523] = 0;
  puVar1[0x520] = 0;
  puVar1[0x521] = 0;
  puVar1[0x4e0] = &PTR_FUN_14b929bc0;
  return;
}



// FUNCTION 1410b71be FUN_1410b71be body=876 status=ok
// SIG undefined FUN_1410b71be(void)

undefined8 * FUN_1410b71be(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = FUN_14007ca06();
  FUN_14064ffa8(param_1,uVar1);
  *param_1 = &PTR_FUN_14b93aac0;
  param_1[0x72] = &PTR_FUN_14b93b150;
  param_1[0x73] = &PTR_FUN_14b93b170;
  param_1[0x74] = &PTR_FUN_14b93b1a0;
  param_1[0x75] = &PTR_FUN_14b93b1b0;
  param_1[0x76] = &PTR_FUN_14b93b220;
  param_1[0x77] = &PTR_FUN_14b93b250;
  param_1[0x78] = &PTR_FUN_14b93b280;
  param_1[0x7f] = &PTR_FUN_14b93b330;
  param_1[0x80] = &PTR_FUN_14b93b3a0;
  param_1[0x81] = &PTR_FUN_14b93b410;
  param_1[0x82] = &PTR_FUN_14b93b440;
  param_1[0x83] = &PTR_FUN_14b93b480;
  param_1[0x84] = &PTR_FUN_14b93b520;
  param_1[0x85] = &PTR_FUN_14b93b540;
  param_1[0x89] = &PTR_FUN_14b93b560;
  param_1[0x8a] = &PTR_FUN_14b93b620;
  param_1[0x8b] = &PTR_FUN_14b93b6a0;
  param_1[0x8c] = &PTR_FUN_14b93b6f0;
  param_1[0x8d] = &PTR_FUN_14b93b730;
  param_1[0x8e] = &PTR_FUN_14b93b750;
  param_1[0x8f] = &PTR_FUN_14b93b770;
  param_1[0x90] = &PTR_FUN_14b93b790;
  param_1[0x91] = &PTR_FUN_14b93b7b0;
  param_1[0x92] = &PTR_FUN_14b93b7d0;
  param_1[0x93] = &PTR_FUN_14b93b7f0;
  param_1[0x94] = &PTR_FUN_14b93b810;
  param_1[0x95] = &PTR_FUN_14b93b830;
  param_1[0x96] = &PTR_FUN_14b93b850;
  param_1[0x34b] = &PTR_FUN_14b93b870;
  param_1[0x352] = &PTR_FUN_14b93b880;
  param_1[0x353] = &PTR_FUN_14b93b8c0;
  param_1[0x354] = &PTR_FUN_14b93b900;
  param_1[0x355] = &PTR_FUN_14b93b950;
  param_1[0x356] = &PTR_FUN_14b93b980;
  param_1[0x359] = &PTR_FUN_14b93b9c0;
  param_1[0x35a] = &PTR_FUN_14b93b9d0;
  param_1[0x35b] = &PTR_FUN_14b93ba00;
  param_1[0x35c] = &PTR_FUN_14b93baa0;
  param_1[0x4bf] = &PTR_FUN_14b93bac0;
  param_1[0x4c8] = 0;
  param_1[0x4c6] = 0;
  param_1[0x4c7] = 0;
  param_1[0x4c4] = 0;
  param_1[0x4c5] = 0;
  param_1[0x4c2] = 0;
  param_1[0x4c3] = 0;
  param_1[0x4c0] = 0;
  param_1[0x4c1] = 0;
  *(undefined4 *)(param_1 + 0x4c9) = 0x6000;
  param_1[0x4ca] = 0;
  param_1[0x4cb] = 0;
  *(undefined4 *)(param_1 + 0x4cc) = 0x6000;
  param_1[0x4cd] = 0;
  param_1[0x4ce] = 0;
  param_1[0x4cf] = 0;
  param_1[0x4d0] = 0;
  param_1[0x4d1] = 0;
  param_1[0x4d2] = 0;
  param_1[0x4d3] = 0;
  param_1[0x4d4] = 0;
  param_1[0x4d5] = 0;
  param_1[0x4d6] = 0;
  param_1[0x4d7] = 0;
  param_1[0x4d8] = 0;
  *(undefined1 *)(param_1 + 0x4d9) = 1;
  param_1[0x4da] = 0;
  param_1[0x4db] = 0;
  param_1[0x4dc] = 0;
  param_1[0x4dd] = 0;
  param_1[0x4de] = 0;
  uVar1 = DAT_14cbd42a0;
  uVar2 = FUN_1410b752a();
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2,0,0);
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x4ce] = lVar3;
    if (lVar3 == 0) {
      return param_1;
    }
  }
  else {
    FUN_1456cec3c(lVar3);
    param_1[0x4ce] = lVar3;
  }
  FUN_140486fc4(lVar3,param_1[0x39],0);
  *(undefined1 *)(param_1[0x4ce] + 0x668) = 1;
  *(undefined4 *)(param_1[0x4ce] + 0x670) = 0x43960000;
  *(undefined4 *)(param_1[0x4ce] + 0x66c) = 0x447a0000;
  return param_1;
}



// FUNCTION 1410b752a FUN_1410b752a body=228 status=ok
// SIG undefined FUN_1410b752a(void)

longlong FUN_1410b752a(void)

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
  if (DAT_14cb5a0f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_148662993;
    local_40 = &LAB_140df04d3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x690;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAreaComponent",&DAT_14cb5a0f0,&DAT_148662992);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5a0f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b7610 FUN_1410b7610 body=78 status=ok
// SIG undefined FUN_1410b7610(void)

void FUN_1410b7610(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined8 local_14;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  local_c = 0x3f800000;
  local_18 = param_2;
  FUN_1410b7660(param_1,&local_18,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b7660 FUN_1410b7660 body=239 status=ok
// SIG undefined FUN_1410b7660(void)

void FUN_1410b7660(longlong param_1,float *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == '\0') {
    if ((*param_2 == *(float *)(param_1 + 0x60)) &&
       (!NAN(*param_2) && !NAN(*(float *)(param_1 + 0x60)))) {
      if ((param_2[1] == *(float *)(param_1 + 100)) &&
         (!NAN(param_2[1]) && !NAN(*(float *)(param_1 + 100)))) {
        if ((param_2[2] == *(float *)(param_1 + 0x68)) &&
           (!NAN(param_2[2]) && !NAN(*(float *)(param_1 + 0x68)))) {
          if ((param_2[3] == *(float *)(param_1 + 0x6c)) &&
             (!NAN(param_2[3]) && !NAN(*(float *)(param_1 + 0x6c)))) {
            return;
          }
        }
      }
    }
    if (*(int *)(param_1 + 0x34) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      FUN_1488ee310(param_1 + 0x28,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    fVar3 = (float)FUN_14090c622(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x34) < 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      FUN_1488ee310(param_1 + 0x28,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    fVar3 = (float)FUN_14090c622(param_1);
    fVar3 = (fVar3 - *(float *)(param_1 + 0x48)) + -1.0;
  }
  *(float *)(param_1 + 0x1c) = fVar3;
  fVar3 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  *(float *)(param_1 + 0x60) = *param_2;
  *(float *)(param_1 + 100) = fVar3;
  *(float *)(param_1 + 0x68) = fVar1;
  *(float *)(param_1 + 0x6c) = fVar2;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 1;
  if ((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001410b76be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 8) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1410b7750 FUN_1410b7750 body=35 status=ok
// SIG undefined FUN_1410b7750(void)

void FUN_1410b7750(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return;
  }
  if (param_3 == '\0') {
    FUN_1410b7774();
    return;
  }
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    lVar1 = 0;
  }
  FUN_146ef1722(lVar1);
  return;
}



// FUNCTION 1410b7774 FUN_1410b7774 body=122 status=ok
// SIG undefined FUN_1410b7774(void)

void FUN_1410b7774(longlong param_1,double *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  double local_20;
  double local_18;
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x40);
  local_20 = 0.0;
  if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x90))) {
    local_20 = *(double *)(lVar1 + 0x148);
  }
  local_10 = param_2[2] * local_20;
  local_18 = param_2[1] * local_20;
  local_20 = local_20 * *param_2;
  FUN_140e0d8e0();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b77f0 FUN_1410b77f0 body=79 status=ok
// SIG undefined FUN_1410b77f0(void)

undefined8 * FUN_1410b77f0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1410b787e(param_1,iVar1);
      FUN_1410b783f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1410b783f FUN_1410b783f body=63 status=ok
// SIG undefined FUN_1410b783f(void)

void FUN_1410b783f(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined1 *)(param_1 + 8 + lVar2) = *(undefined1 *)(param_2 + 8 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      puVar1 = (undefined8 *)(param_1 + 0xc + lVar2);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(param_1 + 0xc + lVar2) = *(undefined8 *)(param_2 + 0xc + lVar2);
      *(undefined8 *)(param_1 + 0x14 + lVar2) = *(undefined8 *)(param_2 + 0x14 + lVar2);
      lVar2 = lVar2 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1410b787e FUN_1410b787e body=340 status=ok
// SIG undefined FUN_1410b787e(void)

void FUN_1410b787e(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x1c;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410b78f3;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_1410b78f3:
    iVar5 = (int)(uVar4 / 0x1c);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x1c,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1410b79d2 FUN_1410b79d2 body=416 status=ok
// SIG undefined FUN_1410b79d2(void)

undefined4 * FUN_1410b79d2(undefined4 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0;
  uVar1 = DAT_14c8462c8;
  *(undefined8 *)(param_1 + 2) = DAT_14c8462c0;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = DAT_14c8462d0;
  uVar1 = DAT_14c8462c8;
  *(undefined8 *)(param_1 + 8) = DAT_14c8462c0;
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_1 + 0xc) = DAT_14c8462d0;
  memset(param_1 + 0xe,0,0x100);
  param_1[0x42] = 0xffffffff;
  param_1[0x37] = 0xffffffff;
  param_1[0xf] = 0x3f800000;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x4e) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x52) = DAT_14c8464f0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = (undefined8 *)(param_1 + 0x58);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x74) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x70) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x72) = uVar1;
  *(undefined8 *)(param_1 + 0x7a) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x76) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  *(undefined8 *)(param_1 + 0x80) = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x7c) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x7e) = uVar1;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x82) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x84) = uVar1;
  *(undefined8 *)(param_1 + 0x86) = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined1 *)((longlong)param_1 + 0x25a) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x227) = 0;
  *(undefined8 *)(param_1 + 0x8b) = 0;
  *(undefined8 *)(param_1 + 0x8d) = 0;
  *(undefined8 *)(param_1 + 0x8f) = 0;
  *(undefined8 *)(param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x245) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24d) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  *(undefined8 *)(param_1 + 0x97) = 0;
  *(undefined8 *)(param_1 + 0x99) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0x9f) = 0;
  *(undefined8 *)(param_1 + 0xa1) = 0;
  uVar1 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0xa6) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  *(undefined8 *)(param_1 + 0xaa) = DAT_14c8464f0;
  param_1[0xac] = 0x3f800000;
  *(undefined8 *)(param_1 + 0xad) = 0;
  *(undefined8 *)(param_1 + 0xaf) = 0;
  return param_1;
}



// FUNCTION 1410b7b72 FUN_1410b7b72 body=997 status=ok
// SIG undefined FUN_1410b7b72(void)

int * FUN_1410b7b72(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_1447711aa(param_1,iVar20);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar16 = iVar12 + 1;
    iVar19 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar19 = iVar12;
    }
    if (iVar19 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar16;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar16 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar21 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar21) {
              uVar22 = uVar21;
            }
          }
          else {
            uVar22 = (uVar21 * 3 >> 3) + uVar21 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar22 << 2,0);
          iVar11 = (int)(uVar14 >> 2);
          iVar16 = -0x20;
          if ((int)uVar21 <= iVar11) {
            iVar16 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar16;
        FUN_1446efbd8(plVar13,iVar11);
        iVar16 = (int)param_1[5] + 1;
      }
      iVar11 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar11 = iVar16;
      }
      *(int *)(param_1 + 5) = iVar16;
      if (iVar16 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar13;
        }
        bVar15 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar11 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar17 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar17 = (longlong)iVar20;
    iVar12 = *(int *)(*param_1 + 4 + lVar17 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar12 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar12 = iVar20;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar20 & 0x1f);
  iVar12 = 1;
  lVar25 = *param_1;
  lVar17 = lVar17 * 0x20;
  puVar2 = (undefined4 *)(lVar25 + lVar17);
  puVar4 = (undefined4 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  uVar7 = puVar4[1];
  uVar8 = puVar4[2];
  uVar9 = puVar4[3];
  puVar3 = (undefined4 *)(lVar25 + lVar17);
  *puVar3 = *puVar4;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  *(undefined8 *)(lVar25 + 0x10 + lVar17) = *puVar5;
  *puVar5 = 0;
  *(undefined4 *)(lVar25 + 0x18 + lVar17) = 0xffffffff;
  lVar6 = *(longlong *)(lVar25 + lVar17);
  uVar14 = *(ulonglong *)(lVar25 + 8 + lVar17);
  uVar24 = ((lVar6 + 0x9ae16a3b2f90404fU << 0x27 | lVar6 + 0x9ae16a3b2f90404fU >> 0x19) + uVar14) *
           -0x651e95c4d06fbf91;
  uVar23 = (lVar6 + (uVar14 << 0x1b | uVar14 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
           uVar24) * -0x651e95c4d06fbf91;
  lVar17 = (uVar23 >> 0x2f ^ uVar24 ^ uVar23) * -0x651e95c4d06fbf91;
  uVar21 = ((uint)((ulonglong)lVar17 >> 0x2f) ^ (uint)lVar17) * 0x2f90406f;
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar22 != 0) && (uVar22 != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar21) * 4);
    if (iVar11 != -1) {
      lVar17 = *param_1;
      do {
        lVar25 = (longlong)iVar11 * 0x20;
        puVar3 = (undefined4 *)(lVar17 + lVar25);
        if ((((*(int *)(lVar17 + lVar25) == (int)lVar6) &&
             (*(int *)(lVar17 + 4 + lVar25) == (int)((ulonglong)lVar6 >> 0x20))) &&
            (*(int *)(lVar17 + 8 + lVar25) == (int)uVar14)) &&
           (*(int *)(lVar17 + 0xc + lVar25) == (int)(uVar14 >> 0x20))) {
          if (*(longlong *)(puVar3 + 4) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)(puVar3 + 4) + 8);
            uVar21 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar21 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar7;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          FUN_1457f662c(param_1,iVar20);
          iVar20 = iVar11;
          goto LAB_1410b7d8c;
        }
        iVar11 = puVar3[6];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar22) {
    uVar14 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar22 < 1) || (iVar12 <= (int)param_1[9])) {
    uVar21 = (int)param_1[9] - 1U & uVar21;
    puVar2[7] = uVar21;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar21) * 4) =
         iVar20;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_14126a9c8(param_1);
  }
LAB_1410b7d8c:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 1410b7f58 FUN_1410b7f58 body=92 status=ok
// SIG undefined FUN_1410b7f58(void)

void FUN_1410b7f58(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  uVar1 = FUN_14477b072(param_1,DAT_14cac9a18);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b7fb6 FUN_1410b7fb6 body=186 status=ok
// SIG undefined FUN_1410b7fb6(void)

longlong * FUN_1410b7fb6(longlong param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar4 = FUN_1447210f0();
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x238))) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar7 * 8);
      if ((((((iVar1 != 0) &&
             (uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar7 * 8), -1 < (int)uVar2)) &&
            ((int)uVar2 < DAT_14c9647dc)) &&
           ((plVar6 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar1)))) &&
          (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
           ((plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0 &&
            (cVar3 = (**(code **)(*plVar6 + 0x6c8))(plVar6), cVar3 != '\0')))))) &&
         (lVar5 = (**(code **)(*plVar6 + 0x6b8))(plVar6), lVar5 == param_1)) {
        return plVar6;
      }
      lVar7 = lVar7 + 1;
    } while ((int)lVar7 < *(int *)(lVar4 + 0x238));
  }
  return (longlong *)0x0;
}



// FUNCTION 1410b8070 FUN_1410b8070 body=510 status=ok
// SIG undefined FUN_1410b8070(void)

void FUN_1410b8070(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar3 = *(longlong *)(param_1 + 0x20), lVar3 != 0))
  {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1410b8247;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x28) = lVar3;
    plVar1 = *(longlong **)(lVar3 + 0x3d0);
    if (plVar1 == (longlong *)0x0) {
LAB_1410b8128:
      lVar4 = 0;
    }
    else {
      uVar2 = FUN_144a78ab8();
      lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
      if (lVar3 == 0) goto LAB_1410b8128;
      uVar2 = FUN_144a78ab8();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 == lVar4) goto LAB_1410b8128;
    }
    *(longlong *)(param_1 + 0x30) = lVar4;
    if (*(longlong *)(param_1 + 0x28) != 0) {
      lVar3 = FUN_14497e828();
      if (lVar3 != 0) {
        lVar4 = FUN_1403ca142();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          goto LAB_1410b8181;
        }
      }
    }
  }
  else {
LAB_1410b8247:
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  lVar3 = 0;
LAB_1410b8181:
  *(longlong *)(param_1 + 0x38) = lVar3;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b8270 FUN_1410b8270 body=522 status=ok
// SIG undefined FUN_1410b8270(void)

undefined8 * FUN_1410b8270(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bee7840;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (param_1[0x67] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)((longlong)param_1 + 0x304) != 0) {
    FUN_14472eb64(param_1 + 0x5f,0);
  }
  param_1[0x65] = 0xffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x324)) {
    *(undefined4 *)((longlong)param_1 + 0x324) = 0x80;
    FUN_1446efbd8(param_1 + 0x61,0);
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b852e(param_1 + 0x38,0);
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_1410b847a(param_1 + 7);
  FUN_1403159fa(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410b847a FUN_1410b847a body=55 status=ok
// SIG undefined FUN_1410b847a(void)

void FUN_1410b847a(longlong *param_1)

{
  FUN_1410b84b2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410b84b2 FUN_1410b84b2 body=123 status=ok
// SIG undefined FUN_1410b84b2(void)

void FUN_1410b84b2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1410b852e FUN_1410b852e body=123 status=ok
// SIG undefined FUN_1410b852e(void)

void FUN_1410b852e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
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



// FUNCTION 1410b85b2 FUN_1410b85b2 body=316 status=ok
// SIG undefined FUN_1410b85b2(void)

undefined8 * FUN_1410b85b2(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c51004();
  *param_1 = &PTR_FUN_14b9e0c60;
  *(undefined1 *)(param_1 + 0xe4) = 0;
  FUN_1400b22c2(&local_68,"/Script/OakGame.WeaponProjectile");
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = local_68;
  local_30 = local_60 + -1;
  if (local_60 == 0) {
    local_30 = 0;
  }
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x9c) = local_58._4_4_;
  *(undefined4 *)(param_1 + 0x14) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 0x15);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 0x16) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0xb4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)((longlong)param_1 + 0x715) = 0;
  *(undefined1 *)((longlong)param_1 + 0x71d) = 0;
  *(byte *)(param_1 + 0xde) = *(byte *)(param_1 + 0xde) & 0xfe;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b86f8 FUN_1410b86f8 body=148 status=ok
// SIG undefined FUN_1410b86f8(void)

undefined8 FUN_1410b86f8(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  if ((*(byte *)(param_2 + 0x28) & 5) != 0) {
    FUN_14021219d(param_2,local_28);
  }
  uVar1 = FUN_1410b878e();
  FUN_14047320e(uVar1,param_2,param_1 + 0x18,0);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    FUN_1457f673a(param_1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b878e FUN_1410b878e body=57 status=ok
// SIG undefined FUN_1410b878e(void)

void FUN_1410b878e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5360 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5360 = FUN_140002ddd(FUN_1462acf7e,uVar1,L"GbxExpressionVariablesContainer");
  }
  return;
}



// FUNCTION 1410b87c8 FUN_1410b87c8 body=790 status=ok
// SIG undefined FUN_1410b87c8(void)

void FUN_1410b87c8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_28 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_28);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_78);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_78);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_78 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_78);
    }
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  if (*(undefined8 **)(param_2 + 0x38) == (undefined8 *)0x0) {
    puVar5 = &local_78;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_1410b8ae0(local_28,puVar5);
  *param_3 = uVar4;
  FUN_1409ed859(local_48,uStack_40 & 0xffffffff);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b8ae0 FUN_1410b8ae0 body=118 status=ok
// SIG undefined FUN_1410b8ae0(void)

undefined8 FUN_1410b8ae0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140eca14a();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140eca14a();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if (lVar4 != 0) {
          uVar1 = FUN_143e46b86(lVar4,param_2);
          return uVar1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1410b8b72 FUN_1410b8b72 body=114 status=ok
// SIG undefined FUN_1410b8b72(void)

void FUN_1410b8b72(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  
  FUN_1410b8cda();
  FUN_1410b8be4(param_1);
  if ((((*(longlong *)(param_1 + 0x68) != 0) && (*(int *)(param_1 + 100) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 100))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      FUN_1409b52ac();
      return;
    }
  }
  return;
}



// FUNCTION 1410b8be4 FUN_1410b8be4 body=72 status=ok
// SIG undefined FUN_1410b8be4(void)

void FUN_1410b8be4(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(char *)(param_1 + 0x70) == '\0') {
    uVar2 = (undefined4)CONCAT71(uVar3,*(undefined1 *)(param_1 + 0x98));
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar3,1);
  }
  if (*(char *)(param_1 + 0x99) == (char)uVar2) {
    return;
  }
  *(char *)(param_1 + 0x99) = (char)uVar2;
  uVar1 = FUN_14070e69a();
  FUN_1410b8c2c(param_1 + 0x48,uVar1,uVar2);
  return;
}



// FUNCTION 1410b8c2c FUN_1410b8c2c body=173 status=ok
// SIG undefined FUN_1410b8c2c(void)

void FUN_1410b8c2c(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1410b8cc3;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1410b8cc3:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1410b8cda FUN_1410b8cda body=900 status=ok
// SIG undefined FUN_1410b8cda(void)

void FUN_1410b8cda(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  void *pvVar6;
  bool bVar7;
  int iVar8;
  void *_Src;
  void *pvVar9;
  void *pvVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_268 [36];
  int local_244;
  ulonglong local_240;
  uint local_238;
  uint local_234;
  ulonglong local_230;
  longlong local_228;
  void *local_220;
  ulonglong local_218;
  longlong local_210;
  void *local_208;
  undefined1 local_200 [440];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar1 = param_1 + 0xc0;
  FUN_1404967ae(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_1410b9060(lVar1);
  }
  FUN_1410b9090(lVar1,param_1 + 0xb0);
  FUN_1410b9090(lVar1,param_1 + 0xa0);
  iVar5 = *(int *)(param_1 + 200);
  uVar16 = (ulonglong)iVar5;
  if (0 < (longlong)uVar16) {
    pvVar6 = *(void **)(param_1 + 0xc0);
    uVar15 = 0;
    pvVar9 = pvVar6;
    do {
      if ((uVar15 + 1 < uVar16) &&
         (*(byte *)((longlong)pvVar9 + 0x1b0) < *(byte *)((longlong)pvVar9 + 0x368))) {
        memcpy(local_200,pvVar9,0x1b8);
        memcpy(pvVar9,(void *)((longlong)pvVar9 + 0x1b8),0x1b8);
        memcpy((void *)((longlong)pvVar9 + 0x1b8),local_200,0x1b8);
      }
      uVar15 = uVar15 + 2;
      pvVar9 = (void *)((longlong)pvVar9 + 0x370);
    } while (uVar15 < uVar16);
    if (2 < iVar5) {
      local_230 = 2;
      do {
        local_238 = (int)local_230 * 2;
        local_210 = (longlong)(int)local_238;
        local_228 = 0;
        do {
          iVar14 = (int)local_230;
          local_234 = iVar5 - (int)local_228;
          if ((int)local_238 <= iVar5 - (int)local_228) {
            local_234 = local_238;
          }
          if (iVar14 < (int)local_234 && 0 < iVar14) {
            local_220 = (void *)(local_228 * 0x1b8 + (longlong)pvVar6);
            iVar8 = 0;
            local_244 = iVar14;
            while( true ) {
              iVar14 = 0;
              if (local_244 - iVar8 != 0 && iVar8 <= local_244) {
                iVar14 = 0;
                uVar11 = local_244 - iVar8;
                do {
                  iVar2 = (uVar11 >> 1) + iVar14;
                  if (*(byte *)((longlong)local_220 + (longlong)local_244 * 0x1b8 + 0x1b0) <=
                      *(byte *)((longlong)local_220 +
                               (longlong)iVar2 * 0x1b8 + (longlong)iVar8 * 0x1b8 + 0x1b0)) {
                    iVar14 = iVar2 + (uVar11 & 1);
                  }
                  bVar7 = 1 < uVar11;
                  uVar11 = uVar11 >> 1;
                } while (bVar7);
              }
              uVar11 = iVar14 + iVar8;
              local_218 = (ulonglong)uVar11;
              iVar14 = local_244 - uVar11;
              if (iVar14 == 0 || local_244 < (int)uVar11) break;
              if (local_234 - local_244 == 0 || (int)local_234 < local_244) {
                local_240 = 0;
              }
              else {
                pvVar9 = (void *)((longlong)(int)uVar11 * 0x1b8 + (longlong)local_220);
                local_240 = 0;
                uVar12 = local_234 - local_244;
                do {
                  uVar13 = (int)local_240 + (uVar12 >> 1);
                  if (*(byte *)((longlong)pvVar9 + 0x1b0) <
                      *(byte *)((longlong)local_220 +
                               (ulonglong)uVar13 * 0x1b8 + (longlong)local_244 * 0x1b8 + 0x1b0)) {
                    local_240 = (ulonglong)(uVar13 + (uVar12 & 1));
                  }
                  bVar7 = 1 < uVar12;
                  uVar12 = uVar12 >> 1;
                } while (bVar7);
                local_244 = local_244 + (int)local_240;
                if (0 < (int)local_240) {
                  pvVar10 = (void *)((longlong)iVar14 * 0x1b8 + (longlong)pvVar9);
                  local_208 = (void *)((longlong)(int)(local_244 - uVar11) * 0x1b8 +
                                      (longlong)pvVar9);
                  _Src = pvVar10;
                  do {
                    while( true ) {
                      pvVar3 = (void *)((longlong)_Src + 0x1b8);
                      pvVar4 = (void *)((longlong)pvVar9 + 0x1b8);
                      memcpy(local_200,pvVar9,0x1b8);
                      memcpy(pvVar9,_Src,0x1b8);
                      memcpy(_Src,local_200,0x1b8);
                      if (pvVar3 == local_208) break;
                      if (pvVar4 == pvVar10) {
                        pvVar10 = pvVar3;
                      }
                      pvVar9 = (void *)((longlong)pvVar9 + 0x1b8);
                      _Src = pvVar3;
                    }
                    _Src = pvVar10;
                    pvVar9 = pvVar4;
                  } while (pvVar4 != pvVar10);
                }
              }
              if (((int)local_234 <= local_244) ||
                 (iVar8 = (int)local_240 + (int)local_218 + 1, local_244 <= iVar8)) break;
            }
          }
          local_228 = local_228 + local_210;
        } while (local_228 < (longlong)uVar16);
        local_230 = (ulonglong)local_238;
      } while ((int)local_238 < iVar5);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410b9060 FUN_1410b9060 body=48 status=ok
// SIG undefined FUN_1410b9060(void)

void FUN_1410b9060(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x1b8,8);
  }
  return;
}



// FUNCTION 1410b9090 FUN_1410b9090 body=95 status=ok
// SIG undefined FUN_1410b9090(void)

void FUN_1410b9090(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1410b90f0(param_1,iVar2);
    }
    FUN_140b17a8e((longlong)iVar2 * 0x1b8 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 1410b90f0 FUN_1410b90f0 body=373 status=ok
// SIG undefined FUN_1410b90f0(void)

void FUN_1410b90f0(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x1b8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410b9178;
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
LAB_1410b9178:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x1b8)) {
    uVar7 = uVar5 / 0x1b8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1b8,8);
  return;
}



// FUNCTION 1410b9266 FUN_1410b9266 body=207 status=ok
// SIG undefined FUN_1410b9266(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1410b9266(void)

{
  if ((DAT_14ca9f00f & 2) == 0) {
    DAT_14ca9f00f = DAT_14ca9f00f | 2;
    _DAT_14ca9efb0 = L"FShaderUniformBufferMemberParameter";
    _DAT_14ca9efc8 = FUN_146826540;
    _DAT_14ca9efd0 = FUN_146825d77;
    _DAT_14ca9efd8 = FUN_146825fd6;
    _DAT_14ca9efe0 = FUN_1407e02ea;
    _DAT_14ca9efe8 = FUN_146826273;
    _DAT_14ca9efc0 = &LAB_1474409b0;
    _DAT_14ca9f000 = 0xffffffff00000001;
    _DAT_14ca9f008 = 1;
    DAT_14ca9f00c = 0;
    _DAT_14ca9eff0 = &LAB_1474409b4;
    FUN_1457f6802();
    FUN_1407e00cc(&DAT_14ca9efa8);
  }
  return &DAT_14ca9efa8;
}



// FUNCTION 1410b9336 FUN_1410b9336 body=95 status=ok
// SIG undefined FUN_1410b9336(void)

undefined8
FUN_1410b9336(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  char cVar1;
  uint3 uVar2;
  bool bVar3;
  
  if (*(int *)(param_2 + 1) == *(int *)(param_3 + 1)) {
    cVar1 = FUN_1410b93c7(*param_2,*param_3);
    if ((cVar1 != '\0') && (*(int *)(param_2 + 3) == *(int *)(param_3 + 3))) {
      cVar1 = FUN_1410b9395(param_2[2],param_3[2]);
      if (cVar1 != '\0') {
        bVar3 = *(int *)(param_2 + 4) == *(int *)(param_3 + 4);
        uVar2 = (uint3)((uint)*(int *)(param_2 + 4) >> 8);
        goto LAB_1410b9385;
      }
    }
  }
  bVar3 = false;
  uVar2 = 0;
LAB_1410b9385:
  *param_5 = bVar3;
  return CONCAT71((uint7)uVar2,1);
}



// FUNCTION 1410b9395 FUN_1410b9395 body=50 status=ok
// SIG undefined FUN_1410b9395(void)

undefined8 FUN_1410b9395(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(param_1 + lVar1 * 8) != *(int *)(param_2 + lVar1 * 8)) ||
         (*(int *)(param_1 + 4 + lVar1 * 8) != *(int *)(param_2 + 4 + lVar1 * 8))) {
        return 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_3 != (int)lVar1);
  }
  return 1;
}



// FUNCTION 1410b93c7 FUN_1410b93c7 body=60 status=ok
// SIG undefined FUN_1410b93c7(void)

undefined8 FUN_1410b93c7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      if (((*(int *)(param_1 + lVar1) != *(int *)(param_2 + lVar1)) ||
          (*(int *)(param_1 + 4 + lVar1) != *(int *)(param_2 + 4 + lVar1))) ||
         (*(int *)(param_1 + 8 + lVar1) != *(int *)(param_2 + 8 + lVar1))) {
        return 0;
      }
      lVar1 = lVar1 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return 1;
}



// FUNCTION 1410b9404 FUN_1410b9404 body=334 status=ok
// SIG undefined FUN_1410b9404(void)

undefined4 *
FUN_1410b9404(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
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
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1410b9618(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  *local_48 = *(uint *)*param_3;
  local_48[2] = *puVar1;
  *(undefined8 *)(local_48 + 4) = *(undefined8 *)(puVar1 + 2);
  puVar1[2] = 0;
  puVar1[3] = 0;
  local_48[6] = puVar1[4];
  local_48[7] = puVar1[5];
  puVar1[4] = 0;
  puVar1[5] = 0;
  local_48[8] = 0xffffffff;
  local_54 = local_50[0];
  uVar4 = *local_48;
  local_68 = param_4;
  cVar2 = FUN_1410b9554(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[9] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[8] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1410b97f4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410b9554 FUN_1410b9554 body=195 status=ok
// SIG undefined FUN_1410b9554(void)

void FUN_1410b9554(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x28);
        if (*piVar1 == *param_3) {
          if (*(longlong *)(piVar1 + 4) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          iVar6 = param_3[5];
          iVar7 = param_3[6];
          iVar8 = param_3[7];
          piVar1[4] = param_3[4];
          piVar1[5] = iVar6;
          piVar1[6] = iVar7;
          piVar1[7] = iVar8;
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_148404fbe(param_1,*param_4,1);
          *param_4 = iVar11;
          uVar9 = 1;
          break;
        }
        iVar11 = piVar1[8];
        uVar9 = 0;
      } while (iVar11 != -1);
      goto LAB_1410b9582;
    }
  }
  uVar9 = 0;
LAB_1410b9582:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 1410b9618 FUN_1410b9618 body=476 status=ok
// SIG undefined FUN_1410b9618(void)

int * FUN_1410b9618(longlong *param_1,int *param_2)

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
      FUN_140549c28(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x28) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1410b97f4 FUN_1410b97f4 body=637 status=ok
// SIG undefined FUN_1410b97f4(void)

void FUN_1410b97f4(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1410b9857;
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
LAB_1410b9857:
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
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar12 * 0x28);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x24 + lVar12 * 0x28) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x20 + lVar12 * 0x28) =
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



// FUNCTION 1410b9a72 FUN_1410b9a72 body=40 status=ok
// SIG undefined FUN_1410b9a72(void)

undefined8 FUN_1410b9a72(undefined8 param_1,int param_2)

{
  FUN_1410b9a9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410b9a9a FUN_1410b9a9a body=88 status=ok
// SIG undefined FUN_1410b9a9a(void)

void FUN_1410b9a9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6778b0;
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  FUN_14097122c(param_1);
  return;
}



// FUNCTION 1410b9af2 FUN_1410b9af2 body=40 status=ok
// SIG undefined FUN_1410b9af2(void)

undefined8 FUN_1410b9af2(undefined8 param_1,int param_2)

{
  FUN_1410b9b1a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410b9b1a FUN_1410b9b1a body=110 status=ok
// SIG undefined FUN_1410b9b1a(void)

void FUN_1410b9b1a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3e3fa0;
  param_1[5] = &PTR_FUN_14b3e45d0;
  param_1[6] = &PTR_LAB_14b3e4610;
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  FUN_140b871ca(param_1);
  return;
}



// FUNCTION 1410b9b90 FUN_1410b9b90 body=150 status=ok
// SIG undefined FUN_1410b9b90(void)

undefined8 * FUN_1410b9b90(undefined8 *param_1)

{
  memset(param_1,0,0x2e0);
  FUN_140d75f9e(param_1);
  *(undefined4 *)(param_1 + 0x5b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x2dc) = 1;
  *param_1 = &PTR_FUN_14b945cf0;
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0x34002;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x304) = 0x3f80000000000000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0x3f800000;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 1;
  return param_1;
}



// FUNCTION 1410b9c2c FUN_1410b9c2c body=1435 status=ok
// SIG undefined FUN_1410b9c2c(void)

undefined8 FUN_1410b9c2c(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined2 *puVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  float fVar15;
  undefined1 auStack_a8 [32];
  undefined2 *local_88;
  int local_80;
  longlong local_78;
  int local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 uStack_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = param_3;
  cVar3 = FUN_140988638(&local_38,L"REATTACHCOMPONENTS",1);
  if (cVar3 != '\0') goto LAB_1410ba09b;
  cVar3 = FUN_140988638(&local_38,L"REREGISTERCOMPONENTS",1);
  if (cVar3 != '\0') goto LAB_1410ba09b;
  cVar3 = FUN_140988638(&local_38,L"EXIT",1);
  if (cVar3 == '\0') {
    cVar3 = FUN_140988638(&local_38,L"QUIT",1);
    if (cVar3 != '\0') goto LAB_1410b9dc2;
    plVar6 = (longlong *)(param_1 + -0x28);
    cVar3 = FUN_140988638(&local_38,L"GETMAXTICKRATE",1);
    if (cVar3 != '\0') {
      fVar15 = (float)(**(code **)(*plVar6 + 0x2f8))(plVar6,0,0);
      FUN_140047918(param_4,&DAT_149e02016,(double)fVar15);
      goto LAB_1410ba09b;
    }
    cVar3 = FUN_140988638(&local_38,L"CANCEL",1);
    if (cVar3 != '\0') {
      uVar5 = FUN_1405e677a(plVar6,param_2);
      (**(code **)(*plVar6 + 0x4f8))(plVar6,uVar5);
      goto LAB_1410ba09b;
    }
    cVar3 = FUN_140988638(&local_38,L"TOGGLECVAR",1);
    plVar2 = local_38;
    if (cVar3 == '\0') {
      if ((param_2 == 0) ||
         ((cVar3 = FUN_14098839e(param_2,param_2,local_38,param_4), cVar3 == '\0' &&
          ((plVar1 = *(longlong **)(param_2 + 0x170), plVar1 == (longlong *)0x0 ||
           (cVar3 = (**(code **)(*plVar1 + 0x260))(plVar1,plVar2,param_4,0), cVar3 == '\0')))))) {
        cVar3 = FUN_140988638(&local_38,&DAT_149e8fa80,1);
        if ((cVar3 != '\0') || (cVar3 = FUN_140988638(&local_38,L"SETNOPEC",1), cVar3 != '\0')) {
          lVar9 = FUN_1405e677a(plVar6,param_2);
          if ((*(longlong *)(lVar9 + 0x230) != 0) || (iVar4 = FUN_14490d72a(param_2), iVar4 != 0))
          goto LAB_1410ba09b;
          DAT_14cadad94 = 1;
        }
        cVar3 = FUN_14375cac2(param_1,param_2,local_38,param_4);
        if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
        }
      }
      goto LAB_1410ba09b;
    }
    local_48 = (undefined2 *)0x0;
    uStack_40 = 0;
    FUN_140ffc744(&local_38,&local_48,0,0);
    if ((int)uStack_40 - 2U < 0x7fffffff) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      puVar8 = local_48;
      if ((int)uStack_40 == 0) {
        puVar8 = &DAT_149dfb77a;
      }
      plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar8);
      if (plVar6 == (longlong *)0x0) {
        goto LAB_1410b9ff7;
      }
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      cVar3 = FUN_140ffc744(&local_38,&local_58,0,0);
      if (cVar3 != '\0') {
        cVar3 = FUN_140ffc744(&local_38,&local_68,0,0);
        if (cVar3 == '\0') {
          if (local_68 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_1410ba061;
        }
        (**(code **)(*plVar6 + 0xc0))(plVar6,&local_78);
        if (local_70 == (int)uStack_50) {
          if (1 < local_70) {
            lVar9 = 0;
            while( true ) {
              uVar11 = *(ushort *)(local_78 + lVar9);
              uVar12 = (ulonglong)uVar11;
              uVar13 = *(ushort *)((longlong)local_58 + lVar9);
              if (uVar11 != uVar13) break;
              if (uVar11 == 0) goto LAB_1410ba0ca;
LAB_1410b9fbf:
              lVar9 = lVar9 + 2;
            }
            if ((uVar13 | uVar11) < 0x80) {
              uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              uVar14 = (ulonglong)uVar13;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_1410b9fbf;
            }
            if (uVar11 != uVar13) goto LAB_1410ba0e6;
          }
LAB_1410ba0ca:
          puVar8 = local_68;
          if ((int)uStack_60 == 0) {
            puVar8 = &DAT_149dfb77a;
          }
        }
        else {
          if (local_70 + (int)uStack_50 == 1) goto LAB_1410ba0ca;
LAB_1410ba0e6:
          puVar8 = &DAT_149dfb77a;
          if ((int)uStack_50 != 0) {
            puVar8 = local_58;
          }
        }
        puVar10 = local_48;
        if ((int)uStack_40 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        FUN_140002266(&local_88,L"%s %s",puVar10,puVar8);
        lVar9 = DAT_14cb0d2b0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        puVar8 = local_88;
        if (local_80 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        (**(code **)(*(longlong *)(lVar9 + 0x28) + 8))
                  ((longlong *)(lVar9 + 0x28),param_2,puVar8,&DAT_14c872ee0);
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1410ba041;
      }
LAB_1410ba061:
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar7 = (undefined1 *)FUN_1400d7a00();
      (**(code **)(*param_4 + 0x10))
                (param_4,L"Usage: TOGGLECVAR CVarName Value1 Value2",*puVar7,puVar7 + 4);
    }
    else {
LAB_1410b9ff7:
      puVar8 = &DAT_149dfb77a;
      if ((int)uStack_40 != 0) {
        puVar8 = local_48;
      }
      FUN_140002266(&local_58,L"TOGGLECVAR: cvar \'%s\' was not found",puVar8);
      puVar8 = &DAT_149dfb77a;
      if ((int)uStack_50 != 0) {
        puVar8 = local_58;
      }
      puVar7 = (undefined1 *)FUN_1400d7a00();
      (**(code **)(*param_4 + 0x10))(param_4,puVar8,*puVar7,puVar7 + 4);
LAB_1410ba041:
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
LAB_1410b9dc2:
    FUN_14619c2be(&local_48,&local_38,0);
    puVar7 = (undefined1 *)FUN_1400d7a00();
    (**(code **)(*param_4 + 0x10))(param_4,L"Closing by request",*puVar7,puVar7 + 4);
    FUN_1411c1a08();
    FUN_1447f69b6(&DAT_14cad8b08);
    FUN_142797bc0(0,0);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410ba09b:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1410ba1e2 FUN_1410ba1e2 body=1321 status=ok
// SIG undefined FUN_1410ba1e2(void)

undefined4 *
FUN_1410ba1e2(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  wchar_t *pwVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    plVar6 = (longlong *)FUN_1447262c2(param_4);
    if (plVar6 == (longlong *)0x0) {
LAB_1410ba226:
      FUN_140232ee4(param_4,&local_60);
      if ((local_60 == (longlong *)0x0) ||
         (plVar6 = (longlong *)
                   (**(code **)(*local_60 + 0x50))(local_60,*(undefined1 *)(param_1 + 0x2c)),
         plVar6 == (longlong *)0x0)) {
LAB_1410ba40c:
        uVar16 = 0;
      }
      else {
        lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
        lVar8 = FUN_14018fb44();
        if ((lVar8 == 0) ||
           ((*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38) ||
            (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
             lVar8 + 0x30)))) goto LAB_1410ba40c;
        uVar16 = *(undefined1 *)((longlong)plVar6 + 0x121);
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_58 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar1 = (int *)((longlong)local_58 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
LAB_1410ba2ad:
      switch(uVar16) {
      case 0:
        goto switchD_1410ba2c9_caseD_0;
      case 1:
        pwVar15 = L"Corrosive";
        break;
      case 2:
        pwVar15 = L"Cryo";
        break;
      case 3:
        pwVar15 = L"Fire";
        break;
      case 4:
        pwVar15 = L"Shock";
        break;
      case 5:
        pwVar15 = L"Radiation";
        break;
      default:
        pwVar15 = L"INVALID";
      }
    }
    else {
      uVar10 = FUN_1406d192e();
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,uVar10);
      if (plVar6 == (longlong *)0x0) goto LAB_1410ba226;
      uVar10 = FUN_1406d192e();
      plVar11 = (longlong *)FUN_144718840(plVar6,uVar10);
      if (plVar11 == (longlong *)0x0 || plVar6 == plVar11) goto LAB_1410ba226;
      plVar6 = (longlong *)(**(code **)(*plVar11 + 0x10))(plVar11,*(undefined1 *)(param_1 + 0x2c));
      if (plVar6 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
        lVar8 = FUN_14018fb44();
        if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
            lVar8 + 0x30)) goto switchD_1410ba2c9_caseD_0;
        uVar16 = *(undefined1 *)((longlong)plVar6 + 0x121);
        goto LAB_1410ba2ad;
      }
switchD_1410ba2c9_caseD_0:
      pwVar15 = L"Default";
    }
    FUN_1446f470e(&local_60,pwVar15,1);
    plVar6 = local_60;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x24);
  }
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar10 = FUN_140261af2();
    lVar7 = FUN_14477b664(uVar10);
    *(longlong *)(param_1 + 0x10) = lVar7;
  }
  plVar11 = (longlong *)(param_1 + 8);
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 == 0) {
    uVar17 = 0;
    if ((lVar7 == 0) || (*plVar11 == 0)) goto LAB_1410ba33b;
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_1410ba33b;
    }
    uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar8 = FUN_144aff482(uVar10,plVar11);
    *(longlong *)(param_1 + 0x18) = lVar8;
    if (lVar8 == 0) goto LAB_1410ba33b;
    lVar7 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    uVar10 = FUN_140261af2();
    lVar7 = FUN_14477b664(uVar10);
    *(longlong *)(param_1 + 0x10) = lVar7;
    lVar8 = *(longlong *)(param_1 + 0x18);
    if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar11 != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar3 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
        lVar8 = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar8 = FUN_144aff482(uVar10,plVar11);
      }
      *(longlong *)(param_1 + 0x18) = lVar8;
    }
  }
  FUN_14016a17c(lVar8);
  lVar7 = *(longlong *)(lVar8 + 0x48);
  if (lVar7 == 0) {
    uVar17 = 0;
    if (*(longlong *)(lVar8 + 0x20) == 0) goto LAB_1410ba33b;
    lVar9 = FUN_14000e0c8(lVar8 + 0x18);
    lVar7 = *(longlong *)(lVar8 + 0x48);
    if (lVar9 == 0) {
      if (lVar7 == 0) goto LAB_1410ba33b;
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
LAB_1410ba53a:
      *(longlong *)(lVar8 + 0x48) = lVar9;
      lVar7 = lVar9;
    }
    else if (lVar7 != lVar9) {
      if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar9);
      goto LAB_1410ba53a;
    }
    if (lVar7 == 0) goto LAB_1410ba33b;
  }
  lVar9 = FUN_1410ba70c();
  uVar17 = 0;
  if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
      (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
       lVar9 + 0x30)) &&
     ((plVar6 != (longlong *)0x0 && (*(int *)(lVar8 + 0x58) != *(int *)(lVar8 + 0x84))))) {
    uVar4 = (uint)((ulonglong)plVar6 >> 0x10);
    uVar13 = (uint)plVar6 & 0xffff;
    lVar7 = lVar8 + 0x88;
    if (*(longlong *)(lVar8 + 0x90) != 0) {
      lVar7 = *(longlong *)(lVar8 + 0x90);
    }
    iVar14 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(lVar8 + 0x98) - 1U &
                              (int)((ulonglong)plVar6 >> 0x20) + ((uint)plVar6 << 0x10 | uVar13) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar14 != -1) {
      do {
        puVar2 = (undefined8 *)(*(longlong *)(lVar8 + 0x50) + (longlong)iVar14 * 0x18);
        if ((longlong *)*puVar2 == plVar6) {
          if (((puVar2 + 1 != (longlong *)0x0 && puVar2 != (undefined8 *)0x0) &&
              (lVar7 = puVar2[1], lVar7 != 0)) &&
             (bVar12 = *(char *)(param_1 + 0x2d) - 1, bVar12 < 6)) {
            uVar17 = *(undefined4 *)((ulonglong)bVar12 * 0x10 + 0x14 + lVar7);
          }
          break;
        }
        iVar14 = *(int *)(puVar2 + 2);
      } while (iVar14 != -1);
    }
  }
LAB_1410ba33b:
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar17;
  *(undefined1 *)(param_2 + 8) = 3;
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1410ba70c FUN_1410ba70c body=57 status=ok
// SIG undefined FUN_1410ba70c(void)

void FUN_1410ba70c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba3840 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba3840 =
         FUN_140002ddd(FUN_1465b9fc6,uVar1,L"GbxStatusEffectApplicationDefaults_OakDamage");
  }
  return;
}



// FUNCTION 1410ba74a FUN_1410ba74a body=221 status=ok
// SIG undefined FUN_1410ba74a(void)

longlong FUN_1410ba74a(void)

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
  if (DAT_14cab3548 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1475728e3;
    local_40 = FUN_146340351;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneFolder",&DAT_14cab3548,&DAT_1475728e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3548;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ba828 FUN_1410ba828 body=66 status=ok
// SIG undefined FUN_1410ba828(void)

undefined8 * FUN_1410ba828(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aac9170;
  FUN_1409e1656(param_1 + 6);
  *param_1 = &PTR_FUN_14aac94e0;
  param_1[6] = &PTR_LAB_14aac97c0;
  *(undefined1 *)(param_1 + 7) = 0;
  return param_1;
}



// FUNCTION 1410ba86a FUN_1410ba86a body=82 status=ok
// SIG undefined FUN_1410ba86a(void)

undefined8
FUN_1410ba86a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (((*(longlong **)(param_2 + 0x10) != (longlong *)0x0) &&
      (lVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x2b0))(), lVar1 != 0)) &&
     (plVar2 = (longlong *)FUN_1403a12cc(lVar1), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x50))(plVar2,param_3,param_4,param_5);
    return 1;
  }
  return 0;
}



// FUNCTION 1410ba8bc FUN_1410ba8bc body=814 status=ok
// SIG undefined FUN_1410ba8bc(void)

void FUN_1410ba8bc(longlong param_1,int *param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  int local_bc;
  longlong *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = param_4;
  if (((*(char *)(param_1 + 0x28) == '\x01') && (*param_2 == 0)) &&
     (iVar5 = FUN_1410babec(), iVar5 != 3)) {
    uVar17 = 0;
    FUN_14009b010(local_b8,3,0);
    uVar6 = *(uint *)(param_1 + 0x58);
    uVar13 = (ulonglong)uVar6;
    if (uVar6 == 0) {
      uVar11 = 1;
      uVar8 = 0;
      iVar5 = 0;
    }
    else {
      puVar7 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x40);
      }
      uVar8 = *puVar7;
      if (uVar8 == 0) {
        iVar5 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar5 = uVar6 - 1;
        }
        uVar17 = 0;
        uVar11 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar11 = uVar17;
        }
        iVar5 = 0;
        do {
          if (uVar11 == uVar17) goto LAB_1410bab40;
          iVar5 = iVar5 + 0x20;
          uVar8 = puVar7[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar17 = 0;
        iVar5 = 0;
      }
      uVar11 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar11 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar8 = (iVar5 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if ((int)uVar6 <= (int)uVar8) {
        uVar8 = uVar6;
      }
    }
    if (uVar8 != uVar6) {
      uVar15 = 0xffffffff;
      local_b0 = uVar13;
      do {
        lVar12 = *(longlong *)(param_1 + 0x30);
        lVar14 = (longlong)(int)uVar8 * 0x30;
        if (*(longlong *)(lVar12 + 0xc + lVar14) != 0) {
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          local_bc = iVar5;
          FUN_14009b010(&local_98,1,0);
          if (local_98 != 0) {
            FUN_1401269d0(local_98,lVar12 + lVar14 + 0xc);
          }
          local_a8 = *(undefined8 *)(lVar12 + lVar14);
          local_a0 = *(undefined4 *)((undefined8 *)(lVar12 + lVar14) + 1);
          FUN_1448075d0(local_88,&local_a8);
          if (*local_b8 != 0) {
            local_c8 = 0;
            FUN_14014191c(*local_b8,local_88,&local_98,0);
          }
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          plVar4 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_90 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar3 = (int *)((longlong)plVar4 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          uVar6 = *(uint *)(param_1 + 0x58);
          uVar13 = local_b0;
          iVar5 = local_bc;
        }
        uVar15 = uVar15 & ~(uint)uVar11;
        puVar7 = *(uint **)(param_1 + 0x50);
        if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x40);
        }
        iVar16 = (int)uVar17;
        lVar12 = (longlong)iVar16;
        uVar8 = puVar7[lVar12] & uVar15;
        if (uVar8 == 0) {
          iVar9 = uVar6 + 0x1e;
          if (-1 < (int)(uVar6 - 1)) {
            iVar9 = uVar6 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar5 = iVar5 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar16) {
            iVar10 = iVar16;
          }
          if (iVar16 < iVar9) {
            lVar14 = 0;
            do {
              uVar8 = puVar7[lVar12 + lVar14 + 1];
              if (uVar8 != 0) {
                uVar17 = (ulonglong)(iVar16 + (int)lVar14 + 1);
                uVar15 = 0xffffffff;
                goto LAB_1410bab05;
              }
              iVar5 = iVar5 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar10 - lVar12 != lVar14);
            uVar15 = 0xffffffff;
            iVar16 = iVar10;
          }
          uVar17 = (ulonglong)(iVar16 + 1);
          uVar8 = uVar6;
        }
        else {
LAB_1410bab05:
          uVar11 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar11 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          uVar8 = (iVar5 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if ((int)uVar6 <= (int)uVar8) {
            uVar8 = uVar6;
          }
        }
      } while (uVar8 != (uint)uVar13);
    }
  }
LAB_1410bab40:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410babec FUN_1410babec body=159 status=ok
// SIG undefined FUN_1410babec(void)

ulonglong FUN_1410babec(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  
  if (((*(int *)(param_1 + 0x14) != 0) && (uVar5 = *(uint *)(param_1 + 0x10), -1 < (int)uVar5)) &&
     ((int)uVar5 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x14))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar4;
      }
      else {
        lVar2 = 0;
      }
      uVar5 = *(uint *)(lVar2 + 0x4c);
      goto LAB_1410bac44;
    }
  }
  cVar1 = FUN_144729dda(param_1 + 8);
  uVar5 = 0;
  if (cVar1 != '\0') {
    lVar2 = FUN_14479d2ce(param_1 + 8);
    if ((*(longlong *)(lVar2 + 0x30) != 0) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x360) != 0)) {
      uVar3 = FUN_14490d72a();
      return uVar3;
    }
  }
LAB_1410bac44:
  return (ulonglong)uVar5;
}



// FUNCTION 1410bac8c FUN_1410bac8c body=40 status=ok
// SIG undefined FUN_1410bac8c(void)

undefined8 FUN_1410bac8c(undefined8 param_1,int param_2)

{
  FUN_1410bacb4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410bacb4 FUN_1410bacb4 body=545 status=ok
// SIG undefined FUN_1410bacb4(void)

void FUN_1410bacb4(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b997270;
  param_1[0x72] = &PTR_FUN_14b9978b0;
  param_1[0x73] = &PTR_FUN_14b997950;
  param_1[0x74] = &PTR_FUN_14b997970;
  param_1[0x75] = &PTR_FUN_14b9979a0;
  param_1[0x76] = &PTR_FUN_14b9979d0;
  param_1[0x77] = &PTR_FUN_14b997a18;
  if (param_1[0x1fb] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x1fa];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  param_1[0x16a] = &PTR_FUN_14b739090;
  if (param_1[0x1f7] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16a] = &PTR_FUN_14b127600;
  lVar2 = 0xdb8;
  do {
    FUN_14494dff0((longlong)param_1 + lVar2);
    lVar2 = lVar2 + -0x120;
  } while (lVar2 != 0xa58);
  param_1[0xeb] = &PTR_FUN_14b127600;
  lVar2 = 0x9c0;
  do {
    FUN_14494dff0((longlong)param_1 + lVar2);
    lVar2 = lVar2 + -0x120;
  } while (lVar2 != 0x660);
  FUN_1404d595a(param_1 + 0xe6,1);
  param_1[0xe0] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  if (*(int *)((longlong)param_1 + 0x71c) != 0) {
    FUN_140115c12(param_1 + 0xe2,0);
  }
  param_1[0xe1] = 0;
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  FUN_1410baed6(param_1 + 0xd5);
  FUN_14494dff0(param_1 + 0xb1);
  FUN_1403d7b38(param_1 + 0xa3);
  lVar2 = 0x508;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x4d8);
  lVar2 = 0x4d8;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x488);
  FUN_14028f4a8(param_1 + 0x78);
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1410baed6 FUN_1410baed6 body=55 status=ok
// SIG undefined FUN_1410baed6(void)

void FUN_1410baed6(longlong *param_1)

{
  FUN_1410baf0e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410baf0e FUN_1410baf0e body=121 status=ok
// SIG undefined FUN_1410baf0e(void)

void FUN_1410baf0e(longlong param_1,int param_2)

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



// FUNCTION 1410baf88 FUN_1410baf88 body=323 status=ok
// SIG undefined FUN_1410baf88(void)

void FUN_1410baf88(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1 + 0x30;
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x78))(lVar1);
  if (lVar2 != 0) {
    local_28 = FUN_145a258de();
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_28);
    }
    lVar2 = FUN_1457f6bfa(lVar2,&local_28);
    if (lVar2 != 0) {
      lVar3 = FUN_145a258de();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        if (*(longlong *)(param_1 + 0xa0) != 0) {
          FUN_14480f766(lVar2 + 0x58);
        }
        *(undefined8 *)(param_1 + 0xa0) = 0;
        if (*(longlong *)(param_1 + 0xa8) != 0) {
          FUN_14480f766(lVar2 + 0x70);
        }
        *(undefined8 *)(param_1 + 0xa8) = 0;
        if (*(longlong *)(param_1 + 0xb0) != 0) {
          FUN_14480f766(lVar2 + 0x88);
        }
        *(undefined8 *)(param_1 + 0xb0) = 0;
      }
    }
  }
  FUN_1410bb0cc(param_1);
  FUN_1449db8d8(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x28))(lVar1);
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x38))(lVar1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


