// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140dcb5e2 FUN_140dcb5e2 body=101 status=ok
// SIG undefined FUN_140dcb5e2(void)

ulonglong FUN_140dcb5e2(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x58) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
      uVar1 = uVar1 / 0x58;
    }
  }
  return uVar1;
}



// FUNCTION 140dcb648 FUN_140dcb648 body=269 status=ok
// SIG undefined FUN_140dcb648(void)

void FUN_140dcb648(longlong param_1,int param_2)

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



// FUNCTION 140dcb756 FUN_140dcb756 body=406 status=ok
// SIG undefined FUN_140dcb756(void)

undefined4 FUN_140dcb756(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [38];
  undefined2 local_92;
  undefined **local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_1409efacc();
  FUN_1409efbf2(uVar5,&local_50,param_2,param_3);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x5d8) + 8))();
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_92);
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_88 = local_92;
  local_78 = 0;
  local_90 = &PTR_FUN_149eda6d0;
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  local_86 = param_4;
  local_84 = uVar4;
  local_80 = uVar4;
  local_58 = param_3;
  local_54 = param_2;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  uVar4 = FUN_140dcb8ee(param_1 + -0x148,&local_90);
  plVar2 = local_60;
  local_90 = &PTR_FUN_149eda6d0;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140dcb8ee FUN_140dcb8ee body=1814 status=ok
// SIG undefined FUN_140dcb8ee(void)

ulonglong FUN_140dcb8ee(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  int *piVar3;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 unaff_RBX;
  ulonglong uVar14;
  longlong lVar15;
  longlong **pplVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined4 local_380;
  longlong *local_378;
  longlong *local_370;
  longlong local_368;
  longlong local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined **local_338;
  undefined8 local_330;
  undefined8 uStack_328;
  longlong local_320;
  undefined8 local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  ulonglong local_2f8;
  longlong *local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2d8;
  undefined1 local_2d0 [136];
  undefined4 local_248;
  undefined1 local_244;
  longlong *local_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined1 local_220;
  undefined1 local_218 [136];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_168;
  undefined1 local_160 [136];
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  *(int *)(param_1 + 199) = (int)param_1[199] + 1;
  uStack_180 = &local_240;
  local_188 = &DAT_1428f5d74;
  local_240 = param_1;
  local_238 = param_2;
  cVar10 = FUN_1402c4aee(param_1 + 0xc9);
  uVar14 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar10 != '\0') goto LAB_140dcbf6d;
  local_240 = (longlong *)((ulonglong)local_240 & 0xffffffffffffff00);
  local_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  memset(local_218,0,0x88);
  local_190 = 0x20702;
  dVar18 = (double)(**(code **)(*param_1 + 0x60))(param_1);
  dVar19 = (double)param_1[0x6e];
  if ((dVar19 != dVar18) || (NAN(dVar19) || NAN(dVar18))) {
    param_1[0x6e] = (longlong)dVar18;
    FUN_1402c1cc6(param_1 + 0x70,dVar18);
    dVar19 = (double)param_1[0x6e];
  }
  param_1[0x6f] = (longlong)dVar19;
  iVar7 = *(int *)(param_2 + 0xc);
  if (((longlong)iVar7 < 0) || ((int)param_1[99] <= iVar7)) {
LAB_140dcbfca:
    FUN_141370954(param_1,&local_2f8,iVar7,0);
  }
  else {
    lVar11 = (longlong)iVar7 * 0x10;
    uVar14 = *(ulonglong *)(param_1[0x62] + lVar11);
    plVar13 = *(longlong **)(param_1[0x62] + 8 + lVar11);
    if (plVar13 == (longlong *)0x0) {
      if (uVar14 == 0) goto LAB_140dcbfca;
      local_2f0 = (longlong *)0x0;
      local_2f8 = uVar14;
    }
    else {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      if (uVar14 != 0) {
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        local_2f8 = uVar14;
        local_2f0 = plVar13;
      }
      LOCK();
      plVar1 = plVar13 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar3 = (int *)((longlong)plVar13 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      if (uVar14 == 0) goto LAB_140dcbfca;
    }
  }
  uVar14 = local_2f8;
  lVar11 = *(longlong *)(local_2f8 + 0x90);
  if (lVar11 == 0) {
    local_388 = CONCAT71(local_388._1_7_,DAT_14c96b238);
    FUN_1402c4e4c(local_2f8 + 0x70,&local_188,0,0);
    pplVar2 = uStack_180;
    puVar9 = local_188;
    if (uStack_180 == (longlong **)0x0) {
      *(undefined **)(uVar14 + 0x90) = local_188;
      pplVar16 = *(longlong ***)(uVar14 + 0x98);
      if (pplVar16 != (longlong **)0x0) {
        *(undefined8 *)(uVar14 + 0x98) = 0;
LAB_140dcbad1:
        LOCK();
        pplVar2 = pplVar16 + 1;
        *(int *)pplVar2 = *(int *)pplVar2 + -1;
        UNLOCK();
        if (*(int *)pplVar2 == 0) {
          (*(code *)**pplVar16)(pplVar16);
          LOCK();
          piVar3 = (int *)((longlong)pplVar16 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar7 = *piVar3;
          UNLOCK();
joined_r0x000140dcbafc:
          if (iVar7 == 0) {
            (*(code *)(*pplVar16)[2])(pplVar16);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(uStack_180 + 1) = *(int *)(uStack_180 + 1) + 1;
      UNLOCK();
      *(undefined **)(uVar14 + 0x90) = puVar9;
      pplVar16 = *(longlong ***)(uVar14 + 0x98);
      if (pplVar2 == pplVar16) {
        LOCK();
        pplVar16 = pplVar2 + 1;
        *(int *)pplVar16 = *(int *)pplVar16 + -1;
        UNLOCK();
        if (*(int *)pplVar16 == 0) {
          (*(code *)**pplVar2)(pplVar2);
          LOCK();
          piVar3 = (int *)((longlong)pplVar2 + 0xc);
          *piVar3 = *piVar3 + -1;
          iVar7 = *piVar3;
          UNLOCK();
          pplVar16 = pplVar2;
          goto joined_r0x000140dcbafc;
        }
      }
      else {
        *(longlong ***)(uVar14 + 0x98) = pplVar2;
        if (pplVar16 != (longlong **)0x0) goto LAB_140dcbad1;
      }
    }
    pplVar2 = uStack_180;
    if (uStack_180 != (longlong **)0x0) {
      LOCK();
      pplVar16 = uStack_180 + 1;
      *(int *)pplVar16 = *(int *)pplVar16 + -1;
      UNLOCK();
      if (*(int *)pplVar16 == 0) {
        (*(code *)**pplVar2)(pplVar2);
        LOCK();
        piVar3 = (int *)((longlong)pplVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (*(code *)(*pplVar2)[2])(pplVar2);
        }
      }
    }
    lVar11 = *(longlong *)(uVar14 + 0x90);
  }
  plVar1 = local_2f0;
  plVar13 = *(longlong **)(uVar14 + 0x98);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  if (local_2f0 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2f0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2f0)(local_2f0);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_348 = *(undefined8 *)(param_2 + 0x18);
  local_358 = *(undefined8 *)(param_2 + 8);
  uStack_350 = *(undefined8 *)(param_2 + 0x10);
  local_318 = *(undefined8 *)(param_2 + 0x20);
  local_310 = *(undefined8 *)(param_2 + 0x28);
  local_378 = *(longlong **)(param_2 + 0x30);
  if (local_378 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_378 + 1) = (int)local_378[1] + 1;
    UNLOCK();
  }
  local_300 = *(undefined8 *)(param_2 + 0x38);
  uVar8 = *(uint *)(lVar11 + 0x130);
  uVar14 = (ulonglong)uVar8;
  local_338 = &PTR_FUN_149eda6d0;
  if (local_378 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_378 + 1) = (int)local_378[1] + 1;
    UNLOCK();
  }
  local_2f8 = local_2f8 & 0xffffffffffffff00;
  local_2d8 = 0;
  local_2f0 = (longlong *)0x0;
  uStack_2e8 = 0;
  local_370 = plVar13;
  local_368 = param_2;
  local_330 = local_358;
  uStack_328 = uStack_350;
  local_320 = local_348;
  local_308 = local_378;
  memset(local_2d0,0,0x88);
  local_248 = 0x20702;
  local_244 = 0;
  local_320 = lVar11;
  if (0 < (int)uVar8) {
    local_360 = lVar11 + 8;
    lVar17 = uVar14 * 0x48 + -8;
    lVar15 = uVar14 * 0x14 + -4;
    do {
      local_70 = *(char *)(*(longlong *)(lVar11 + 0x150) + lVar15);
      if (local_70 == '\x01') {
        lVar12 = *(longlong *)(lVar11 + 0x150) + lVar15;
        local_188 = *(undefined **)(lVar12 + -0x10);
        uStack_180 = *(longlong ***)(lVar12 + -8);
      }
      lVar12 = *(longlong *)(lVar11 + 0x128);
      if (*(longlong *)(lVar11 + 0x128) == 0) {
        lVar12 = local_360;
      }
      local_98 = *(undefined8 *)(lVar12 + -0x10 + lVar17);
      puVar5 = (undefined4 *)(lVar12 + -0x40 + lVar17);
      local_c8 = *puVar5;
      uStack_c4 = puVar5[1];
      uStack_c0 = puVar5[2];
      uStack_bc = puVar5[3];
      puVar6 = (undefined8 *)(lVar12 + -0x30 + lVar17);
      local_b8 = *puVar6;
      uStack_b0 = puVar6[1];
      puVar5 = (undefined4 *)(lVar12 + -0x20 + lVar17);
      local_a8 = *puVar5;
      uStack_a4 = puVar5[1];
      uStack_a0 = puVar5[2];
      uStack_9c = puVar5[3];
      local_90 = *(longlong **)(lVar12 + -8 + lVar17);
      local_88 = *(longlong **)(lVar12 + lVar17);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      if (local_70 != '\0') {
        local_80 = (undefined4)local_188;
        uStack_7c = local_188._4_4_;
        uStack_78 = (undefined4)uStack_180;
        uStack_74 = uStack_180._4_4_;
      }
      if (*(char *)((longlong)local_90 + 0x3a) == '\x01') {
        (**(code **)(*local_90 + 0x48))(local_90,&local_188,&local_c8,&local_338);
      }
      else {
        local_188 = (undefined *)((ulonglong)local_188 & 0xffffffffffffff00);
        local_168 = 0;
        uStack_180 = (longlong **)0x0;
        uStack_178 = 0;
        memset(local_160,0,0x88);
        local_d8 = 0x20702;
        local_d4 = 0;
      }
      FUN_1402c173a(&local_188,&local_90);
      FUN_1402c17c2(&local_2f8,&local_188);
      FUN_14493db24(&local_188);
      local_380 = local_330._4_4_;
      local_388 = 0;
      FUN_1402c1d72(param_1,lVar11,&local_2f8,lVar11);
      plVar13 = local_88;
      if (local_70 == '\x01') {
        local_70 = '\0';
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar3 = (int *)((longlong)plVar13 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
      if (uVar14 < 2) break;
      lVar17 = lVar17 + -0x48;
      lVar15 = lVar15 + -0x14;
      uVar14 = uVar14 - 1;
    } while ((char)local_2f8 == '\0');
  }
  plVar13 = local_308;
  local_338 = &PTR_FUN_149eda6d0;
  if (local_308 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_308 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_308)(local_308);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  plVar13 = local_378;
  if (local_378 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_378 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_378)(local_378);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  FUN_1403d4924(&local_240,&local_2f8);
  FUN_14493db24(&local_2f8);
  lVar11 = local_368;
  if (((((char)local_240 == '\0') && ((int)param_1[0x9c] != 0)) &&
      ((longlong *)param_1[0x9b] != (longlong *)0x0)) &&
     (cVar10 = (**(code **)(*(longlong *)param_1[0x9b] + 0x30))(), cVar10 != '\0')) {
    if ((int)param_1[0x9c] == 0) {
      plVar13 = (longlong *)0x0;
    }
    else {
      plVar13 = (longlong *)param_1[0x9b];
    }
    (**(code **)(*plVar13 + 0x58))(plVar13,&local_188,lVar11);
    FUN_1403d4924(&local_240,&local_188);
    FUN_14493db24(&local_188);
  }
  plVar13 = local_370;
  uVar14 = CONCAT71((int7)((ulonglong)&local_2f8 >> 8),(char)local_240);
  if (local_370 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_370 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_370)(local_370);
      LOCK();
      piVar3 = (int *)((longlong)plVar13 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  FUN_14493db24(&local_240);
LAB_140dcbf6d:
  *(int *)(param_1 + 199) = (int)param_1[199] + -1;
  if ((local_60 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dcc014 FUN_140dcc014 body=231 status=ok
// SIG undefined FUN_140dcc014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140dcc014(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b471bd0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar3 = (longlong *)param_1[1], plVar3 != (longlong *)0x0)) {
    if (plVar3[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar3 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar3;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dcc10a FUN_140dcc10a body=40 status=ok
// SIG undefined FUN_140dcc10a(void)

undefined8 FUN_140dcc10a(undefined8 param_1,int param_2)

{
  FUN_140dcc132();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dcc132 FUN_140dcc132 body=148 status=ok
// SIG undefined FUN_140dcc132(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dcc132(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b302a10;
  FUN_140485972(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140dcc1b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140dcc1c6 FUN_140dcc1c6 body=1113 status=ok
// SIG undefined FUN_140dcc1c6(void)

void FUN_140dcc1c6(longlong param_1,int param_2,double *param_3,double *param_4,longlong *param_5)

{
  double *pdVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  int iVar12;
  double *pdVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  double *pdVar20;
  longlong lVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong local_118;
  longlong local_110;
  double local_108;
  double dStack_100;
  longlong *local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar14 = *(ulonglong *)(param_1 + 0x60);
  lVar21 = (longlong)param_2;
  local_118 = param_1;
  if (*(int *)(uVar14 + 4 + lVar21 * 8) != 0) {
    plVar17 = *(longlong **)(param_1 + 0x80);
    iVar15 = (int)plVar17[lVar21 * 2 + 1];
    lVar19 = (longlong)iVar15;
    if (lVar19 != 0) {
      lVar25 = plVar17[lVar21 * 2];
      pdVar20 = (double *)(lVar19 * 8);
      lVar24 = 0;
      local_110 = lVar21;
      do {
        pdVar1 = (double *)(lVar25 + 0x10 + lVar24);
        uVar2 = *(undefined8 *)(lVar25 + 0x28 + lVar24);
        auVar33._8_8_ =
             -(ulonglong)
              ((double)(float)((ulonglong)uVar2 >> 0x20) + param_4[5] < ABS(pdVar1[1] - param_4[1]))
        ;
        auVar33._0_8_ = -(ulonglong)((double)(float)uVar2 + param_4[4] < ABS(*pdVar1 - *param_4));
        lVar21 = -(ulonglong)(param_4[7] + 0.0 < ABS(0.0 - param_4[3]));
        uVar11 = movmskpd((int)uVar14,auVar33);
        uVar14 = (ulonglong)uVar11;
        auVar36._8_4_ = (int)lVar21;
        auVar36._0_8_ =
             -(ulonglong)
              ((double)*(float *)(lVar25 + 0x30 + lVar24) + param_4[6] <
              ABS(*(double *)(lVar25 + 0x20 + lVar24) - param_4[2]));
        auVar36._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
        iVar15 = movmskpd((int)plVar17,auVar36);
        uVar11 = iVar15 << 2 | uVar11;
        plVar17 = (longlong *)(ulonglong)uVar11;
        if (uVar11 == 0) {
          pdVar13 = (double *)(lVar24 + -0x24 + lVar25 + 0x34);
          pdVar1 = (double *)*param_5;
          plVar18 = (longlong *)param_5[1];
          dVar5 = pdVar13[-1];
          dVar26 = (double)*(float *)((longlong)pdVar13 + 0x24);
          dStack_f0 = (double)*(float *)(pdVar13 + 3);
          local_f8 = (longlong *)pdVar13[2];
          local_108 = *pdVar13;
          dStack_100 = pdVar13[1];
          local_e8._8_8_ = (double)*(float *)(pdVar13 + 4);
          local_e8._0_8_ = (double)*(float *)((longlong)pdVar13 + 0x1c);
          local_d8._0_8_ = dVar26;
          if (((ulonglong)pdVar1[7] & 3) != 0) {
            dVar28 = pdVar1[3] + dVar26;
            dVar26 = pdVar1[3] + dVar26;
            dVar27 = (pdVar1[1] - dStack_100) * (pdVar1[1] - dStack_100) +
                     (pdVar1[2] - (double)local_f8) * (pdVar1[2] - (double)local_f8) +
                     (*pdVar1 - local_108) * (*pdVar1 - local_108);
            lVar21 = -(ulonglong)(dVar26 * dVar26 < dVar27);
            auVar6._8_4_ = (int)lVar21;
            auVar6._0_8_ = -(ulonglong)(dVar28 * dVar28 < dVar27);
            auVar6._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
            uVar11 = movmskpd((int)pdVar13,auVar6);
            uVar14 = (ulonglong)uVar11;
            plVar17 = local_f8;
            if (uVar11 != 0) goto LAB_140dcc3d8;
          }
          plVar17 = *(longlong **)((longlong)pdVar1[6] + 0x28);
          pdVar20 = &local_108;
          uVar14 = (**(code **)(*plVar17 + 8))();
          if (((char)uVar14 != '\0') &&
             (((uVar14 = *(ulonglong *)((longlong)pdVar1[6] + 0x28),
               (*(byte *)(uVar14 + 0x1d1) & 4) == 0 ||
               ((*(byte *)((longlong)dVar5 + 0x73) & 2) != 0)) &&
              (bVar3 = *(byte *)((longlong)dVar5 + 0x82),
              plVar17 = (longlong *)CONCAT71((int7)((ulonglong)plVar17 >> 8),bVar3),
              (*(byte *)(uVar14 + 0x1e9) & bVar3) != 0)))) {
            pdVar20 = *(double **)(lVar25 + 0x34 + lVar24 + -0x34);
            uVar14 = FUN_14004123c();
            plVar17 = plVar18;
          }
        }
LAB_140dcc3d8:
        iVar15 = (int)pdVar20;
        lVar24 = lVar24 + 0x48;
      } while (lVar19 * 0x48 != lVar24);
      uVar14 = *(ulonglong *)(local_118 + 0x60);
      lVar21 = local_110;
    }
    iVar4 = *(int *)(uVar14 + lVar21 * 8);
    if (iVar4 != -1) {
      dVar32 = SUB168(*(undefined1 (*) [16])(param_3 + 2),0);
      dVar34 = SUB168(*(undefined1 (*) [16])(param_3 + 2),8);
      dVar26 = param_3[8];
      dVar5 = param_3[8];
      auVar35._8_8_ = dVar5;
      auVar35._0_8_ = dVar26;
      dVar27 = param_3[9];
      dVar28 = param_3[9];
      lVar21 = -(ulonglong)((param_3[1] + dVar28) - dVar5 < param_4[1] + param_4[5]);
      lVar19 = -(ulonglong)((dVar34 + dVar28) - dVar5 < param_4[3] + param_4[7]);
      auVar29._8_8_ = -(ulonglong)(param_4[1] - param_4[5] <= (param_3[1] - dVar28) + dVar5);
      auVar29._0_8_ = -(ulonglong)(*param_4 - param_4[4] <= (*param_3 - dVar27) + dVar26);
      lVar25 = -(ulonglong)(param_4[3] - param_4[7] <= (dVar34 - dVar28) + dVar5);
      auVar9._8_4_ = (int)lVar21;
      auVar9._0_8_ = -(ulonglong)((*param_3 + dVar27) - dVar26 < *param_4 + param_4[4]);
      auVar9._12_4_ = (int)((ulonglong)lVar21 >> 0x20);
      iVar12 = movmskpd((int)uVar14,auVar9);
      auVar10._8_4_ = (int)lVar19;
      auVar10._0_8_ = -(ulonglong)((dVar32 + dVar27) - dVar26 < param_4[2] + param_4[6]);
      auVar10._12_4_ = (int)((ulonglong)lVar19 >> 0x20);
      uVar11 = movmskpd((int)plVar17,auVar10);
      iVar16 = movmskpd(uVar11 & 1,auVar29);
      auVar7._8_4_ = (int)lVar25;
      auVar7._0_8_ = -(ulonglong)(param_4[2] - param_4[6] <= (dVar32 - dVar27) + dVar26);
      auVar7._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar15 = movmskpd(iVar15,auVar7);
      uVar23 = 0;
      auVar36 = pmovsxbd(auVar35,0x8040201);
      iVar22 = 0;
      do {
        if ((uVar23 ^ 0xffffffc7 | iVar15 * 0x20 + iVar16 * 8 | iVar12 + (uVar11 & 1) * 4) ==
            0xffffffff) {
          auVar30._4_4_ = iVar22;
          auVar30._0_4_ = iVar22;
          auVar30._8_4_ = iVar22;
          auVar30._12_4_ = iVar22;
          auVar30 = auVar30 & auVar36;
          dVar26 = param_3[9];
          dVar5 = param_3[9];
          dVar32 = (double)(float)-(uint)(auVar30._0_4_ == auVar36._0_4_);
          dVar34 = (double)(float)-(uint)(auVar30._4_4_ == auVar36._4_4_);
          dVar28 = (double)(float)-(uint)(auVar30._8_4_ == auVar36._8_4_);
          dVar27 = (double)(float)-(uint)(auVar30._12_4_ == auVar36._12_4_);
          uVar14 = (ulonglong)dVar5 & (ulonglong)dVar27;
          auVar31._0_8_ = ~(ulonglong)dVar28 & (ulonglong)-dVar26;
          auVar31._8_8_ = ~(ulonglong)dVar27 & (ulonglong)-dVar5;
          auVar8._8_4_ = (int)uVar14;
          auVar8._0_8_ = (ulonglong)dVar26 & (ulonglong)dVar28;
          auVar8._12_4_ = (int)(uVar14 >> 0x20);
          local_108 = (double)(~(ulonglong)dVar32 & (ulonglong)-dVar26 |
                              (ulonglong)dVar26 & (ulonglong)dVar32) + *param_3;
          dStack_100 = (double)(~(ulonglong)dVar34 & (ulonglong)-dVar5 |
                               (ulonglong)dVar5 & (ulonglong)dVar34) + param_3[1];
          local_f8 = (longlong *)((SUB168(auVar31 | auVar8,0) + param_3[2]) * 1.0);
          dStack_f0 = (SUB168(auVar31 | auVar8,8) + param_3[3]) * 0.0;
          local_c0 = param_3[8];
          local_e8._8_4_ = SUB84(local_c0,0);
          local_e8._0_8_ = local_c0;
          local_e8._12_4_ = (int)((ulonglong)local_c0 >> 0x20);
          local_d8._8_4_ = SUB84(local_c0 * 0.0,0);
          local_d8._0_8_ = local_c0 * 1.0;
          local_d8._12_4_ = (int)((ulonglong)(local_c0 * 0.0) >> 0x20);
          local_c8 = local_c0 * 0.5 * 1.0625;
          local_c0 = local_c0 - local_c8;
          local_128 = param_5;
          FUN_140dcc1c6(local_118,iVar4 + iVar22,&local_108,param_4);
        }
        iVar22 = iVar22 + 1;
        uVar23 = uVar23 + 9;
      } while (iVar22 != 8);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dcc62e FUN_140dcc62e body=40 status=ok
// SIG undefined FUN_140dcc62e(void)

undefined8 FUN_140dcc62e(undefined8 param_1,int param_2)

{
  FUN_14076bd02();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dcc656 FUN_140dcc656 body=239 status=ok
// SIG undefined FUN_140dcc656(void)

void FUN_140dcc656(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x49) != '\0') {
switchD_140dcc67e_caseD_4:
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x48)) {
  case 2:
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar3 = 3;
    break;
  case 3:
    lVar2 = *(longlong *)(param_1 + 0x40);
    lVar1 = lVar2;
    do {
      lVar4 = lVar1;
      lVar1 = *(longlong *)(lVar4 + 0xb8);
    } while (*(longlong *)(lVar4 + 0xb8) != 0);
    if ((*(longlong *)(lVar4 + 0x98) == 0) && (*(longlong *)(lVar4 + 0xa0) == 0)) {
      uVar3 = 4;
    }
    else {
      uVar3 = 5;
    }
    break;
  default:
    goto switchD_140dcc67e_caseD_4;
  case 6:
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar3 = 7;
    break;
  case 7:
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar3 = 8;
    break;
  case 8:
    FUN_140dcc746(*(undefined8 *)(param_1 + 0x40),9);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = 3;
    goto LAB_140dcc6d9;
  case 10:
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar3 = 0xb;
    break;
  case 0xb:
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar3 = 0xc;
    break;
  case 0xc:
    FUN_140dcc746(*(undefined8 *)(param_1 + 0x40),0xd);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = 1;
LAB_140dcc6d9:
    FUN_1457af436(uVar3,uVar5);
    return;
  case 0xe:
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar3 = 0xf;
    break;
  case 0xf:
    lVar2 = *(longlong *)(param_1 + 0x40);
    uVar3 = 0x10;
    break;
  case 0x10:
    FUN_140dcc746(*(undefined8 *)(param_1 + 0x40),0x11);
    FUN_148910500(*(undefined8 *)(param_1 + 0x40));
    return;
  }
  FUN_140dcc746(lVar2,uVar3);
  return;
}



// FUNCTION 140dcc746 FUN_140dcc746 body=85 status=ok
// SIG undefined FUN_140dcc746(void)

void FUN_140dcc746(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140dcc79c(param_1[5]);
  if (cVar1 != '\0') {
    lVar2 = FUN_140dcc81c(param_1);
    if (lVar2 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_141042fba(lVar2);
    }
    if (cVar1 != (char)param_2) {
                    /* WARNING: Could not recover jumptable at 0x000140dcc78c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd0))(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140dcc79c FUN_140dcc79c body=64 status=ok
// SIG undefined FUN_140dcc79c(void)

bool FUN_140dcc79c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  
  cVar1 = FUN_1401badd8(*(undefined8 *)(param_1 + 0xa0));
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    lVar2 = FUN_140f42f34(param_1);
    if (lVar2 == 0) {
      bVar3 = true;
    }
    else {
      cVar1 = FUN_1405f61f4(lVar2);
      bVar3 = cVar1 != '\x06';
    }
  }
  return bVar3;
}



// FUNCTION 140dcc7dc FUN_140dcc7dc body=63 status=ok
// SIG undefined FUN_140dcc7dc(void)

void FUN_140dcc7dc(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140dcc81c();
  if (lVar1 != 0) {
    FUN_141043170(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000140dcc810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 200))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 140dcc81c FUN_140dcc81c body=580 status=ok
// SIG undefined FUN_140dcc81c(void)

longlong FUN_140dcc81c(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_6c [12];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((char *)param_1[9] != (char *)0x0) && (*(char *)param_1[9] != '\0')) goto LAB_140dcca06;
  lVar5 = param_1[5];
  if ((*(char *)(lVar5 + 0x1ea) == '\0') &&
     ((*(char *)(lVar5 + 0x1eb) == '\0' && (*(char *)(*(longlong *)(lVar5 + 8) + 0x1c7) != '\x01')))
     ) {
    plVar3 = (longlong *)FUN_140d7e454(param_1[1]);
    if (plVar3 == (longlong *)0x0) goto LAB_140dcc9d0;
    piVar4 = &DAT_14c9485f0;
    if (*(int **)(param_1[8] + 8) != (int *)0x0) {
      piVar4 = *(int **)(param_1[8] + 8);
    }
    if (((*piVar4 == 0) || (iVar1 = piVar4[1], iVar1 == 0)) || (*piVar4 == DAT_14c948000)) {
LAB_140dcca2c:
      local_48 = DAT_14c948620;
      local_50 = DAT_14c948618;
    }
    else {
      if ((iVar1 < 2) && (piVar4[9] < 1)) {
        piVar4 = piVar4 + 2;
      }
      else {
        piVar4 = *(int **)(piVar4 + 6);
      }
      if (iVar1 < 1) goto LAB_140dcca2c;
      local_48 = piVar4[2];
      local_50 = *(undefined8 *)piVar4;
    }
    lVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if (lVar5 == 0) {
      local_60 = 0;
      local_58 = 0;
    }
    else {
      local_58 = *(undefined4 *)(lVar5 + 0x98);
      local_60 = *(undefined8 *)(lVar5 + 0x90);
    }
    FUN_143df58dc(param_1,local_6c);
    local_78 = &local_50;
    (**(code **)(*plVar3 + 0x80))(plVar3,&local_40,local_6c,&local_60);
    plVar3 = local_38;
    if (param_1 + 9 != &local_40) {
      param_1[9] = local_40;
      local_40 = 0;
      plVar2 = (longlong *)param_1[10];
      if (local_38 != plVar2) {
        local_38 = (longlong *)0x0;
        param_1[10] = (longlong)plVar3;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar2 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
      }
    }
    plVar3 = local_38;
    if (local_38 == (longlong *)0x0) goto LAB_140dcca06;
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_140dcca06;
    (**(code **)*local_38)(local_38);
    LOCK();
    piVar4 = (int *)((longlong)plVar3 + 0xc);
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 != 0) goto LAB_140dcca06;
    lVar5 = *plVar3;
  }
  else {
LAB_140dcc9d0:
    param_1[9] = 0;
    plVar3 = (longlong *)param_1[10];
    if (plVar3 == (longlong *)0x0) goto LAB_140dcca06;
    param_1[10] = 0;
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) goto LAB_140dcca06;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar4 = (int *)((longlong)plVar3 + 0xc);
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 != 0) goto LAB_140dcca06;
    lVar5 = *plVar3;
  }
  (**(code **)(lVar5 + 0x10))(plVar3);
LAB_140dcca06:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1[9];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dcca62 FUN_140dcca62 body=38 status=ok
// SIG undefined FUN_140dcca62(void)

undefined8 FUN_140dcca62(undefined8 param_1,int param_2)

{
  FUN_140dcca88();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dcca88 FUN_140dcca88 body=185 status=ok
// SIG undefined FUN_140dcca88(void)

undefined4 FUN_140dcca88(undefined8 *param_1)

{
  longlong *plVar1;
  
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)param_1[0x1a];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  plVar1 = (longlong *)param_1[0x19];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_1407fbce0(param_1 + 4);
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 140dccb42 FUN_140dccb42 body=79 status=ok
// SIG undefined FUN_140dccb42(void)

undefined8 * FUN_140dccb42(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3099e0;
  FUN_140dccb91(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dccb91 FUN_140dccb91 body=75 status=ok
// SIG undefined FUN_140dccb91(void)

void FUN_140dccb91(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140dccbdc FUN_140dccbdc body=481 status=ok
// SIG undefined FUN_140dccbdc(void)

void FUN_140dccbdc(longlong *param_1,undefined4 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  FUN_140dccde0(param_1 + 4,param_4,*(undefined4 *)(param_3 + 0x20),param_2);
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if ((param_4 != 0) && (cVar1 != '\0')) {
    lVar3 = param_1[0x34];
    if (0 < *(int *)(lVar3 + 0x50)) {
      lVar6 = 0x30;
      uVar5 = 0;
      do {
        FUN_140c309be(param_1 + 200,uVar5 & 0xffffffff,*(longlong *)(lVar3 + 0x48) + lVar6,param_4);
        uVar5 = uVar5 + 1;
        lVar3 = param_1[0x34];
        lVar6 = lVar6 + 0x88;
      } while ((longlong)uVar5 < (longlong)*(int *)(lVar3 + 0x50));
      if (0 < *(int *)(lVar3 + 0x50)) {
        lVar8 = 0x2c;
        lVar9 = 0;
        lVar6 = 0;
        lVar7 = 0;
        do {
          FUN_140c306e2(*(longlong *)(lVar3 + 0x48) + lVar9,param_1 + 4,
                        *(undefined4 *)(*(longlong *)(lVar3 + 0x38) + lVar8),param_1[0xd0] + lVar6);
          lVar7 = lVar7 + 1;
          lVar3 = param_1[0x34];
          lVar8 = lVar8 + 0xe8;
          lVar6 = lVar6 + 0x30;
          lVar9 = lVar9 + 0x88;
        } while (lVar7 < *(int *)(lVar3 + 0x50));
      }
    }
    if ((DAT_14c763b3c == '\0') && (*(char *)(lVar3 + 0xd8) == '\x01')) {
      (**(code **)(*param_1 + 0x80))
                (param_1,param_1 + 0xd0,param_3 + 0x70,param_3 + 0xf0,param_3 + 0x110,
                 *(undefined4 *)(param_3 + 0x120));
      lVar3 = param_1[0x34];
    }
    *(undefined1 *)((longlong)param_1 + 0x195) = 1;
    *(undefined4 *)(param_1 + 0x32) = 0;
    iVar4 = *(int *)(lVar3 + 0x40);
    if (iVar4 < 1) {
      iVar2 = 0;
    }
    else {
      lVar6 = 0x9c;
      lVar7 = 0xad;
      lVar8 = 0;
      do {
        *(byte *)(*(longlong *)(lVar3 + 0x38) + lVar6) = *(byte *)(param_1[0xd2] + lVar7) & 1;
        lVar3 = param_1[0x34];
        if (*(char *)(*(longlong *)(lVar3 + 0x38) + lVar6) == '\x01') {
          *(undefined1 *)((longlong)param_1 + 0x195) = 0;
          *(int *)(param_1 + 0x32) = (int)param_1[0x32] + 1;
        }
        lVar8 = lVar8 + 1;
        iVar4 = *(int *)(lVar3 + 0x40);
        lVar6 = lVar6 + 0xe8;
        lVar7 = lVar7 + 0x100;
      } while (lVar8 < iVar4);
      iVar2 = (int)param_1[0x32];
    }
    *(bool *)((longlong)param_1 + 0x194) = iVar2 == iVar4;
  }
  return;
}



// FUNCTION 140dccde0 FUN_140dccde0 body=1826 status=ok
// SIG undefined FUN_140dccde0(void)

void FUN_140dccde0(undefined1 (*param_1) [16],longlong param_2,float param_3,float param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined8 uVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  
  if (param_2 != 0) {
    lVar3 = **(longlong **)(param_2 + 0x48);
    lVar11 = (longlong)(int)(*(longlong **)(param_2 + 0x48))[1];
    lVar13 = *(longlong *)(lVar3 + 0x28);
    lVar3 = *(longlong *)(lVar3 + 0x48);
    lVar12 = lVar11 * 0x10;
    dVar14 = (double)*(float *)(lVar3 + 0xc + lVar12);
    dVar21 = (double)*(float *)(lVar3 + 8 + lVar12);
    dVar18 = (double)*(float *)(lVar3 + 4 + lVar12);
    dVar24 = (double)*(float *)(lVar3 + lVar12);
    puVar1 = (undefined8 *)(lVar13 + lVar11 * 0x18);
    uVar2 = *puVar1;
    uVar10 = puVar1[1];
    uVar26 = *(undefined8 *)(lVar13 + 0x10 + lVar11 * 0x18);
    auVar6._8_4_ = SUB84(dVar18,0);
    auVar6._0_8_ = dVar24;
    auVar6._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *param_1 = auVar6;
    auVar5._8_4_ = SUB84(dVar14,0);
    auVar5._0_8_ = dVar21;
    auVar5._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    param_1[1] = auVar5;
    *(undefined8 *)param_1[2] = uVar2;
    *(undefined8 *)(param_1[2] + 8) = uVar10;
    *(undefined8 *)param_1[3] = uVar26;
    *(undefined8 *)(param_1[3] + 8) = 0;
    *(undefined8 *)param_1[4] = 0x3ff0000000000000;
    *(undefined8 *)(param_1[4] + 8) = 0x3ff0000000000000;
    *(undefined8 *)param_1[5] = 0x3ff0000000000000;
    *(undefined8 *)(param_1[5] + 8) = 0;
    plVar4 = *(longlong **)(param_2 + 0x48);
    dVar25 = 0.0;
    dVar15 = 0.0;
    dVar9 = 0.0;
    dVar8 = 0.0;
    if ((plVar4 != (longlong *)0x0) &&
       (dVar9 = 0.0, dVar8 = 0.0, *(char *)((longlong)plVar4 + 0xc) != '\0')) {
      lVar13 = (longlong)(int)plVar4[1];
      lVar3 = *(longlong *)(*plVar4 + 0x278);
      dVar15 = (double)*(float *)(lVar3 + 8 + lVar13 * 0xc);
      dVar9 = (double)*(float *)(lVar3 + 4 + lVar13 * 0xc);
      dVar8 = (double)*(float *)(lVar3 + lVar13 * 0xc);
    }
    *(double *)param_1[6] = dVar8;
    *(double *)(param_1[6] + 8) = dVar9;
    *(double *)param_1[7] = dVar15;
    plVar4 = *(longlong **)(param_2 + 0x48);
    if (plVar4 == (longlong *)0x0) {
      dVar16 = 0.0;
      dVar22 = 0.0;
    }
    else {
      dVar16 = 0.0;
      dVar22 = 0.0;
      if (*(char *)((longlong)plVar4 + 0xc) != '\0') {
        lVar13 = (longlong)(int)plVar4[1];
        lVar3 = *(longlong *)(*plVar4 + 0x290);
        dVar22 = (double)*(float *)(lVar3 + 8 + lVar13 * 0xc);
        dVar16 = (double)*(float *)(lVar3 + 4 + lVar13 * 0xc);
        dVar25 = (double)*(float *)(lVar3 + lVar13 * 0xc);
      }
    }
    *(double *)param_1[9] = dVar25;
    *(double *)(param_1[9] + 8) = dVar16;
    *(double *)param_1[10] = dVar22;
    plVar4 = *(longlong **)(param_2 + 0x48);
    uVar19 = 0;
    uVar20 = 0;
    if (plVar4 == (longlong *)0x0) {
      uVar26 = 0;
      uVar30 = 0;
      uVar31 = 0;
    }
    else {
      uVar26 = 0;
      uVar30 = 0;
      uVar31 = 0;
      if (1 < *(byte *)((longlong)plVar4 + 0xc)) {
        lVar13 = (longlong)(int)plVar4[1];
        lVar3 = *(longlong *)(*plVar4 + 0x3e0);
        uVar26 = *(undefined8 *)(lVar3 + lVar13 * 0x18);
        uVar19 = (undefined4)uVar26;
        uVar20 = (undefined4)((ulonglong)uVar26 >> 0x20);
        uVar26 = *(undefined8 *)(lVar3 + 8 + lVar13 * 0x18);
        uVar2 = *(undefined8 *)(lVar3 + 0x10 + lVar13 * 0x18);
        uVar30 = (undefined4)uVar2;
        uVar31 = (undefined4)((ulonglong)uVar2 >> 0x20);
      }
    }
    *(ulonglong *)(param_1[10] + 8) = CONCAT44(uVar20,uVar19);
    *(undefined8 *)param_1[0xb] = uVar26;
    *(ulonglong *)(param_1[0xb] + 8) = CONCAT44(uVar31,uVar30);
    dVar25 = dVar15 * dVar15 + dVar8 * dVar8 + dVar9 * dVar9;
    if (((dVar25 != 1.0) || (dVar16 = dVar8, dVar22 = dVar15, dVar27 = dVar9, NAN(dVar25))) &&
       (dVar16 = DAT_14c8464e0, dVar22 = DAT_14c8464f0, dVar27 = DAT_14c8464e8,
       9.99999993922529e-09 <= dVar25)) {
      dVar25 = 1.0 / SQRT(dVar25);
      dVar16 = dVar8 * dVar25;
      dVar22 = dVar15 * dVar25;
      dVar27 = dVar9 * dVar25;
    }
    *(double *)param_1[0xc] = dVar16;
    *(double *)(param_1[0xc] + 8) = dVar27;
    *(double *)param_1[0xd] = dVar22;
    auVar28._8_4_ = SUB84(dVar21,0);
    auVar28._0_8_ = dVar18;
    auVar28._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    dVar8 = dVar24 * 0.0 - dVar18 * 0.0;
    dVar25 = dVar18 * 1.0 - dVar21 * 0.0;
    dVar16 = dVar21 * 0.0 - dVar24 * 1.0;
    dVar25 = dVar25 + dVar25;
    dVar16 = dVar16 + dVar16;
    dVar8 = dVar8 + dVar8;
    dVar17 = auVar28._8_8_;
    *(double *)(param_1[0xd] + 8) = (dVar8 * dVar18 - dVar16 * dVar17) + dVar14 * dVar25 + 0.0;
    *(double *)param_1[0xe] = (dVar21 * dVar25 - dVar24 * dVar8) + dVar14 * dVar16 + 0.0;
    *(double *)(param_1[0xe] + 8) = dVar8 * dVar14 + 1.0 + (dVar16 * dVar24 - dVar25 * dVar18);
    dVar8 = dVar24 * 0.0 - dVar18 * 1.0;
    dVar25 = dVar18 * 0.0 - dVar17 * 0.0;
    dVar16 = dVar21 * 1.0 - dVar24 * 0.0;
    dVar25 = dVar25 + dVar25;
    dVar16 = dVar16 + dVar16;
    dVar8 = dVar8 + dVar8;
    dVar27 = dVar8 * dVar14 + 0.0 + (dVar16 * dVar24 - dVar25 * dVar18);
    *(double *)param_1[0xf] = (dVar8 * dVar18 - dVar16 * dVar17) + dVar14 * dVar25 + 1.0;
    *(double *)(param_1[0xf] + 8) = (dVar21 * dVar25 - dVar24 * dVar8) + dVar14 * dVar16 + 0.0;
    dVar25 = dVar24 * 1.0 - dVar18 * 0.0;
    dVar16 = dVar18 * 0.0 - dVar17 * 1.0;
    dVar22 = dVar21 * 0.0 - dVar24 * 0.0;
    dVar16 = dVar16 + dVar16;
    dVar22 = dVar22 + dVar22;
    dVar25 = dVar25 + dVar25;
    *(double *)param_1[0x10] = dVar27;
    dVar8 = (dVar21 * dVar16 - dVar24 * dVar25) + dVar14 * dVar22 + 1.0;
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (dVar25 * dVar18 - dVar22 * dVar17) + dVar14 * dVar16 + 0.0;
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])(param_1[0x10] + 8) = auVar7;
    *(double *)(param_1[0x11] + 8) = dVar25 * dVar14 + 0.0 + (dVar22 * dVar24 - dVar16 * dVar18);
    dVar16 = *(double *)param_1[6];
    dVar22 = *(double *)(param_1[6] + 8);
    dVar8 = -dVar24;
    dVar18 = -dVar18;
    dVar21 = dVar21 * -1.0;
    dVar14 = dVar14 * 1.0;
    dVar23 = dVar16 * dVar21 - dVar8 * dVar15;
    dVar25 = dVar22 * dVar8 - dVar18 * dVar16;
    dVar29 = dVar15 * dVar18 - dVar21 * dVar22;
    dVar29 = dVar29 + dVar29;
    dVar23 = dVar23 + dVar23;
    dVar25 = dVar25 + dVar25;
    dVar8 = dVar14 * dVar25 + dVar15 + (dVar23 * dVar8 - dVar29 * dVar18);
    dVar17 = (dVar25 * dVar18 - dVar23 * dVar21) + dVar14 * dVar29 + dVar16;
    dVar18 = dVar24 * dVar25 + dVar21 * dVar29 + dVar14 * dVar23 + dVar22;
    *(double *)(param_1[7] + 8) = dVar17;
    *(double *)param_1[8] = dVar18;
    *(double *)(param_1[8] + 8) = dVar8;
    dVar24 = 1.0 / (double)param_4;
    dVar14 = (dVar8 - *(double *)param_1[0x16]) * dVar24;
    dVar18 = (dVar18 - *(double *)(param_1[0x15] + 8)) * dVar24;
    dVar24 = dVar24 * (dVar17 - *(double *)param_1[0x15]);
    dVar21 = 1.0 / (double)ABS(param_3);
    *(double *)param_1[0x12] = dVar24;
    *(double *)(param_1[0x12] + 8) = dVar18;
    *(double *)param_1[0x13] = dVar14;
    *(double *)(param_1[0x13] + 8) = dVar21 * dVar24;
    *(double *)param_1[0x14] = dVar18 * dVar21;
    *(double *)(param_1[0x14] + 8) = dVar14 * dVar21;
    *(undefined8 *)param_1[0x16] = *(undefined8 *)(param_1[8] + 8);
    *(undefined8 *)param_1[0x15] = *(undefined8 *)(param_1[7] + 8);
    *(undefined8 *)(param_1[0x15] + 8) = *(undefined8 *)param_1[8];
    *(float *)(param_1[0x16] + 8) =
         (float)(dVar27 * dVar15 +
                dVar16 * *(double *)param_1[0xf] + dVar9 * *(double *)(param_1[0xf] + 8));
    *(float *)(param_1[0x16] + 0xc) = (float)dVar24;
  }
  return;
}



// FUNCTION 140dcd502 FUN_140dcd502 body=3430 status=ok
// SIG undefined FUN_140dcd502(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dcd502(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined4 param_6)

{
  longlong lVar1;
  double *pdVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  void *pvVar18;
  undefined1 uVar19;
  char cVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  undefined8 *puVar27;
  longlong lVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_308 [32];
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  longlong local_2b8;
  void *local_2b0;
  longlong *local_2a8;
  double *local_2a0;
  longlong local_298;
  undefined8 local_290;
  double local_288;
  double local_280;
  undefined4 local_278;
  float local_274;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double local_230;
  double local_228;
  double local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  undefined8 local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined4 local_134;
  undefined4 local_108;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_c8 = _DAT_14cad0ee0;
  uStack_c0 = uRam000000014cad0ee8;
  local_d8 = _DAT_14cad0ed0;
  uStack_d0 = _DAT_14cad0ed8;
  lVar21 = 0;
  do {
    bVar8 = *(char *)((longlong)&local_d8 + lVar21) == '\x02';
    bVar9 = *(char *)((longlong)&local_d8 + lVar21 + 1) == '\x02';
    bVar10 = *(char *)((longlong)&local_d8 + lVar21 + 2) == '\x02';
    bVar11 = *(char *)((longlong)&local_d8 + lVar21 + 3) == '\x02';
    bVar12 = *(char *)((longlong)&local_d8 + lVar21 + 4) == '\x02';
    bVar13 = *(char *)((longlong)&local_d8 + lVar21 + 5) == '\x02';
    bVar14 = *(char *)((longlong)&local_d8 + lVar21 + 6) == '\x02';
    bVar15 = *(char *)((longlong)&local_d8 + lVar21 + 7) == '\x02';
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&local_d8 + lVar21) = 2;
    }
    if ((bool)(~bVar9 & 1)) {
      *(undefined1 *)((longlong)&local_d8 + lVar21 + 1) = 2;
    }
    if ((bool)(~bVar10 & 1)) {
      *(undefined1 *)((longlong)&local_d8 + lVar21 + 2) = 2;
    }
    if ((bool)(~bVar11 & 1)) {
      *(undefined1 *)((longlong)&local_d8 + lVar21 + 3) = 2;
    }
    if ((bool)(~bVar12 & 1)) {
      *(undefined1 *)((longlong)&local_d8 + lVar21 + 4) = 2;
    }
    if ((bool)(~bVar13 & 1)) {
      *(undefined1 *)((longlong)&local_d8 + lVar21 + 5) = 2;
    }
    if ((bool)(~bVar14 & 1)) {
      *(undefined1 *)((longlong)&local_d8 + lVar21 + 6) = 2;
    }
    if ((bool)(~bVar15 & 1)) {
      *(undefined1 *)((longlong)&local_d8 + lVar21 + 7) = 2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(undefined1 *)((longlong)&uStack_d0 + lVar21) = 2;
    }
    if ((bool)(~bVar9 & 1)) {
      *(undefined1 *)((longlong)&uStack_d0 + lVar21 + 1) = 2;
    }
    if ((bool)(~bVar10 & 1)) {
      *(undefined1 *)((longlong)&uStack_d0 + lVar21 + 2) = 2;
    }
    if ((bool)(~bVar11 & 1)) {
      *(undefined1 *)((longlong)&uStack_d0 + lVar21 + 3) = 2;
    }
    if ((bool)(~bVar12 & 1)) {
      *(undefined1 *)((longlong)&uStack_d0 + lVar21 + 4) = 2;
    }
    if ((bool)(~bVar13 & 1)) {
      *(undefined1 *)((longlong)&uStack_d0 + lVar21 + 5) = 2;
    }
    if ((bool)(~bVar14 & 1)) {
      *(undefined1 *)((longlong)&uStack_d0 + lVar21 + 6) = 2;
    }
    if ((bool)(~bVar15 & 1)) {
      *(undefined1 *)((longlong)&uStack_d0 + lVar21 + 7) = 2;
    }
    lVar21 = lVar21 + 0x10;
  } while (lVar21 != 0x20);
  local_d8 = *param_4;
  uStack_d0 = param_4[1];
  local_c8 = param_4[2];
  uStack_c0 = param_4[3];
  local_2b8 = param_1;
  local_2a8 = param_2;
  if (DAT_14c763b1a == '\0') {
    if (0 < (int)param_2[1]) {
      lVar24 = 0x16;
      lVar26 = 0;
      lVar21 = 0;
      lVar28 = 0;
      do {
        lVar25 = *(longlong *)(local_2b8 + 0x690) + lVar26;
        lVar1 = *local_2a8;
        local_1c8 = *(double *)(lVar1 + 0x10 + lVar21);
        local_1d8 = *(double *)(lVar1 + lVar21);
        dStack_1d0 = ((double *)(lVar1 + lVar21))[1];
        local_1e8 = *(double *)(lVar1 + 0x28 + lVar21);
        pdVar2 = (double *)(lVar1 + 0x18 + lVar21);
        local_1f8 = *pdVar2;
        uStack_1f0 = pdVar2[1];
        *(bool *)(param_3 + 2) = *(char *)(*param_5 + lVar28 * 2) == '\x01';
        if (0 < DAT_14c763b38) {
          *(bool *)(param_3 + 2) = DAT_14c763b38 == 2;
        }
        dVar30 = local_1c8 - local_1e8;
        dVar32 = dStack_1d0 - uStack_1f0;
        dVar31 = local_1d8 - local_1f8;
        dVar29 = dVar30 * dVar30 + dVar31 * dVar31 + dVar32 * dVar32;
        if (((dVar29 != 1.0) || (dVar34 = dVar30, dVar35 = dVar32, dVar33 = dVar31, NAN(dVar29))) &&
           (dVar34 = DAT_14c8464f0, dVar35 = DAT_14c8464e8, dVar33 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar29)) {
          dVar29 = 1.0 / SQRT(dVar29);
          dVar34 = dVar30 * dVar29;
          dVar35 = dVar32 * dVar29;
          dVar33 = dVar31 * dVar29;
        }
        if (*(char *)(*param_5 + 1 + lVar28 * 2) == '\x01') {
          local_274 = *(float *)(*(longlong *)(*(longlong *)(local_2b8 + 0x1a0) + 0x38) + lVar24 * 2
                                );
          local_278 = 2;
          dVar31 = (double)local_274;
          local_280 = local_1c8 + dVar34 * dVar31;
          local_288 = dStack_1d0 + dVar35 * dVar31;
          local_290 = local_1d8 + dVar33 * dVar31;
          local_2d8 = (undefined8 *)&local_278;
          local_2e0 = (undefined8 *)CONCAT44(local_2e0._4_4_,param_6);
          local_2e8 = &DAT_14c8463d0;
          local_2d0 = param_3;
          local_2c8 = &local_d8;
          FUN_14021655c(*(undefined8 *)(local_2b8 + 0x10),lVar25,&local_290,&local_1f8);
        }
        else {
          local_2e8 = (undefined8 *)CONCAT44(local_2e8._4_4_,param_6);
          local_2e0 = param_3;
          local_2d8 = &local_d8;
          FUN_1400b50cc(*(undefined8 *)(local_2b8 + 0x10),lVar25,&local_1d8,&local_1f8);
        }
        lVar28 = lVar28 + 1;
        lVar24 = lVar24 + 0x74;
        lVar21 = lVar21 + 0x30;
        lVar26 = lVar26 + 0x100;
      } while (lVar28 < (int)local_2a8[1]);
    }
  }
  else {
    if ((DAT_14c763b1b != '\x01') || (cVar20 = FUN_148adaaa0(param_1 + 0x6c8), cVar20 == '\0')) {
      *(undefined1 *)(local_2b8 + 0x6c0) = 0;
      puVar22 = (undefined8 *)(local_2b8 + 0x6b0);
      *(undefined4 *)(local_2b8 + 0x6b8) = 0;
      if (*(int *)(local_2b8 + 0x6bc) != 0) {
        FUN_1417bb680(puVar22);
      }
      lVar21 = local_2b8;
      *(double *)(local_2b8 + 0x6f0) = DAT_14c8464f0;
      dVar31 = DAT_14c8464e8;
      *(double *)(local_2b8 + 0x6e0) = DAT_14c8464e0;
      *(double *)(local_2b8 + 0x6e8) = dVar31;
      dVar31 = DAT_14c8464e8;
      *(double *)(local_2b8 + 0x6c8) = DAT_14c8464e0;
      *(double *)(local_2b8 + 0x6d0) = dVar31;
      *(double *)(local_2b8 + 0x6d8) = DAT_14c8464f0;
      *(undefined1 *)(local_2b8 + 0x6f8) = 0;
      if (0 < (int)param_2[1]) {
        lVar24 = 0;
        lVar26 = 0;
        do {
          lVar28 = *param_2;
          if (lVar26 == 0) {
            lVar1 = lVar28 + lVar24;
            puVar27 = (undefined8 *)(lVar28 + lVar24);
            uVar7 = puVar27[2];
            uVar16 = *puVar27;
            uVar17 = puVar27[1];
            local_1b0 = *(undefined8 *)(lVar1 + 0x28);
            local_1c0 = *(undefined8 *)(lVar1 + 0x18);
            uStack_1b8 = *(undefined8 *)(lVar1 + 0x20);
            *(undefined8 *)(local_2b8 + 0x6e8) = uStack_1b8;
            *(undefined8 *)(local_2b8 + 0x6f0) = local_1b0;
            *(undefined8 *)(local_2b8 + 0x6d8) = uVar7;
            *(undefined8 *)(local_2b8 + 0x6e0) = local_1c0;
            *(undefined8 *)(local_2b8 + 0x6c8) = uVar16;
            *(undefined8 *)(local_2b8 + 0x6d0) = uVar17;
            *(undefined1 *)(local_2b8 + 0x6f8) = 1;
          }
          else {
            dVar31 = *(double *)(lVar28 + 0x10 + lVar24);
            dVar29 = *(double *)(local_2b8 + 0x6d8);
            if (dVar31 <= *(double *)(local_2b8 + 0x6d8)) {
              dVar29 = dVar31;
            }
            dVar31 = *(double *)(lVar28 + 8 + lVar24);
            dVar30 = *(double *)(local_2b8 + 0x6d0);
            if (dVar31 <= *(double *)(local_2b8 + 0x6d0)) {
              dVar30 = dVar31;
            }
            dVar31 = *(double *)(local_2b8 + 0x6c8);
            if (*(double *)(lVar28 + lVar24) <= *(double *)(local_2b8 + 0x6c8)) {
              dVar31 = *(double *)(lVar28 + lVar24);
            }
            *(double *)(local_2b8 + 0x6c8) = dVar31;
            *(double *)(local_2b8 + 0x6d0) = dVar30;
            *(double *)(local_2b8 + 0x6d8) = dVar29;
            dVar32 = *(double *)(lVar28 + 0x28 + lVar24);
            if (dVar32 <= dVar29) {
              dVar29 = dVar32;
            }
            dVar32 = *(double *)(lVar28 + 0x20 + lVar24);
            if (dVar32 <= dVar30) {
              dVar30 = dVar32;
            }
            dVar32 = *(double *)(lVar28 + 0x18 + lVar24);
            if (dVar32 <= dVar31) {
              dVar31 = dVar32;
            }
            *(double *)(local_2b8 + 0x6c8) = dVar31;
            *(double *)(local_2b8 + 0x6d0) = dVar30;
            *(double *)(local_2b8 + 0x6d8) = dVar29;
            dVar31 = *(double *)(lVar28 + 0x10 + lVar24);
            dVar29 = *(double *)(local_2b8 + 0x6f0);
            if (*(double *)(local_2b8 + 0x6f0) <= dVar31) {
              dVar29 = dVar31;
            }
            dVar31 = *(double *)(lVar28 + 8 + lVar24);
            dVar30 = *(double *)(local_2b8 + 0x6e8);
            if (*(double *)(local_2b8 + 0x6e8) <= dVar31) {
              dVar30 = dVar31;
            }
            dVar31 = *(double *)(local_2b8 + 0x6e0);
            if (*(double *)(local_2b8 + 0x6e0) <= *(double *)(lVar28 + lVar24)) {
              dVar31 = *(double *)(lVar28 + lVar24);
            }
            *(double *)(local_2b8 + 0x6e0) = dVar31;
            *(double *)(local_2b8 + 0x6e8) = dVar30;
            *(double *)(local_2b8 + 0x6f0) = dVar29;
            dVar32 = *(double *)(lVar28 + 0x28 + lVar24);
            if (dVar29 <= dVar32) {
              dVar29 = dVar32;
            }
            dVar32 = *(double *)(lVar28 + 0x20 + lVar24);
            if (dVar30 <= dVar32) {
              dVar30 = dVar32;
            }
            dVar32 = *(double *)(lVar28 + 0x18 + lVar24);
            if (dVar31 <= dVar32) {
              dVar31 = dVar32;
            }
            *(double *)(local_2b8 + 0x6e0) = dVar31;
            *(double *)(local_2b8 + 0x6e8) = dVar30;
            *(double *)(local_2b8 + 0x6f0) = dVar29;
          }
          lVar26 = lVar26 + 1;
          lVar24 = lVar24 + 0x30;
        } while (lVar26 < (int)param_2[1]);
      }
      dVar31 = (double)_DAT_14c763b4c;
      dVar30 = *(double *)(local_2b8 + 0x6f0) + (double)_DAT_14c763b50;
      dVar33 = *(double *)(local_2b8 + 0x6e8) + dVar31;
      dVar34 = *(double *)(local_2b8 + 0x6e0) + dVar31;
      dVar29 = *(double *)(local_2b8 + 0x6d8) - (double)_DAT_14c763b50;
      dVar32 = *(double *)(local_2b8 + 0x6d0) - dVar31;
      dVar31 = *(double *)(local_2b8 + 0x6c8) - dVar31;
      *(double *)(local_2b8 + 0x6c8) = dVar31;
      *(double *)(local_2b8 + 0x6d0) = dVar32;
      *(double *)(local_2b8 + 0x6d8) = dVar29;
      *(double *)(local_2b8 + 0x6e0) = dVar34;
      *(double *)(local_2b8 + 0x6e8) = dVar33;
      *(double *)(local_2b8 + 0x6f0) = dVar30;
      *(undefined1 *)(local_2b8 + 0x6f8) = 1;
      local_1f8 = (double)CONCAT44((float)((dVar34 - dVar31) * 0.5),1);
      uStack_1f0 = (double)CONCAT44((float)((dVar30 - dVar29) * 0.5),
                                    (float)((dVar33 - dVar32) * 0.5));
      local_1c8 = (dVar29 + dVar30) * 0.5;
      dStack_1d0 = (dVar32 + dVar33) * 0.5;
      local_1d8 = (dVar31 + dVar34) * 0.5;
      local_2c8 = (undefined8 *)&DAT_14cad0f08;
      local_2d0 = &local_d8;
      local_2e0 = (undefined8 *)CONCAT44(local_2e0._4_4_,param_6);
      local_2e8 = puVar22;
      local_2d8 = param_3;
      uVar19 = FUN_14052f4ca(*(undefined8 *)(local_2b8 + 0x10),&local_1f8,&local_1d8,&DAT_14c8463d0)
      ;
      *(undefined1 *)(lVar21 + 0x6c0) = uVar19;
    }
    if (0 < (int)param_2[1]) {
      lVar21 = 0;
      do {
        lVar24 = local_2b8;
        local_2b0 = *(void **)(local_2b8 + 0x690);
        puVar22 = (undefined8 *)((longlong)local_2b0 + lVar21 * 0x100);
        *puVar22 = 0x3f80000000000000;
        memset(puVar22 + 1,0,0x9c);
        *(undefined4 *)((longlong)puVar22 + 0xa4) = 0xffffffff;
        puVar22[0x15] = 0;
        puVar22[0x16] = 0;
        puVar22[0x17] = 0;
        puVar22[0x18] = 0;
        puVar22[0x19] = 0;
        *(undefined4 *)(puVar22 + 0x1a) = 0xffffffff;
        *(undefined8 *)((longlong)puVar22 + 0xd4) = 0;
        *(undefined8 *)((longlong)puVar22 + 0xdc) = 0;
        *(undefined8 *)((longlong)puVar22 + 0xe4) = 0;
        *(undefined8 *)((longlong)puVar22 + 0xec) = 0;
        puVar22[0x1e] = 0;
        puVar22[0x1f] = 0;
        if (*(char *)(lVar24 + 0x6c0) == '\x01') {
          lVar24 = *local_2a8;
          *(bool *)(param_3 + 2) = *(char *)(*param_5 + lVar21 * 2) == '\x01';
          if (0 < DAT_14c763b38) {
            *(bool *)(param_3 + 2) = DAT_14c763b38 == 2;
          }
          pdVar2 = (double *)(lVar24 + lVar21 * 0x30);
          dVar31 = pdVar2[2] - pdVar2[5];
          dVar30 = pdVar2[1] - pdVar2[4];
          dVar29 = *pdVar2 - pdVar2[3];
          dVar32 = dVar31 * dVar31 + dVar29 * dVar29 + dVar30 * dVar30;
          if (((dVar32 != 1.0) || (dVar33 = dVar31, dVar34 = dVar30, dVar35 = dVar29, NAN(dVar32)))
             && (dVar33 = DAT_14c8464f0, dVar34 = DAT_14c8464e8, dVar35 = DAT_14c8464e0,
                9.99999993922529e-09 <= dVar32)) {
            dVar32 = 1.0 / SQRT(dVar32);
            dVar33 = dVar31 * dVar32;
            dVar34 = dVar30 * dVar32;
            dVar35 = dVar29 * dVar32;
          }
          iVar4 = *(int *)(local_2b8 + 0x6b8);
          if ((longlong)iVar4 != 0) {
            local_2b0 = (void *)((longlong)local_2b0 + lVar21 * 0x100);
            local_2a0 = (double *)(lVar24 + lVar21 * 0x30 + 0x18);
            lVar24 = *(longlong *)(local_2b8 + 0x6b0);
            local_298 = lVar21 * 0xe8;
            lVar26 = 0;
            do {
              if ((*(byte *)(lVar24 + 0x40 + lVar26) & 1) != 0) {
                uVar5 = *(uint *)(lVar24 + 0x20 + lVar26);
                iVar6 = *(int *)(lVar24 + 0x24 + lVar26);
                memset(&local_1d8,0,0x100);
                local_108 = 0xffffffff;
                local_1d8 = (double)CONCAT44(0x3f800000,(undefined4)local_1d8);
                local_134 = 0xffffffff;
                if (*(char *)(*param_5 + 1 + lVar21 * 2) == '\x01') {
                  fVar3 = *(float *)(*(longlong *)(*(longlong *)(local_2b8 + 0x1a0) + 0x38) + 0x2c +
                                    local_298);
                  dVar31 = (double)fVar3;
                  local_220 = dVar33 * dVar31 + pdVar2[2];
                  local_228 = dVar34 * dVar31 + pdVar2[1];
                  local_230 = dVar31 * dVar35 + *pdVar2;
                  local_208 = local_2a0[2];
                  dVar31 = *local_2a0;
                  dVar29 = local_2a0[1];
                  if ((iVar6 == 0) || ((int)uVar5 < 0)) {
LAB_140dcdf59:
                    plVar23 = (longlong *)0x0;
                  }
                  else {
                    plVar23 = (longlong *)0x0;
                    if ((int)uVar5 < DAT_14c9647dc) {
                      puVar22 = (undefined8 *)
                                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
                      if (((puVar22 == (undefined8 *)0x0) || (*(int *)(puVar22 + 2) != iVar6)) ||
                         ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)) goto LAB_140dcdf59;
                      plVar23 = (longlong *)*puVar22;
                    }
                  }
                  local_290 = (double)CONCAT44(fVar3,2);
                  local_1f8._0_4_ = SUB84(dVar31,0);
                  local_1f8._4_4_ = (undefined4)((ulonglong)dVar31 >> 0x20);
                  uStack_1f0._0_4_ = SUB84(dVar29,0);
                  uStack_1f0._4_4_ = (undefined4)((ulonglong)dVar29 >> 0x20);
                  local_218 = (undefined4)local_1f8;
                  uStack_214 = local_1f8._4_4_;
                  uStack_210 = (undefined4)uStack_1f0;
                  uStack_20c = uStack_1f0._4_4_;
                  local_2d8 = (undefined8 *)CONCAT71(local_2d8._1_7_,*(undefined1 *)(param_3 + 2));
                  local_2e0 = &local_290;
                  local_2e8 = &DAT_14c8463d0;
                  local_1f8 = dVar31;
                  uStack_1f0 = dVar29;
                  local_1e8 = local_208;
                  cVar20 = (**(code **)(*plVar23 + 0x988))
                                     (local_220,&local_1d8,&local_230,&local_218);
                }
                else {
                  if ((iVar6 == 0) || ((int)uVar5 < 0)) {
LAB_140dcdf60:
                    plVar23 = (longlong *)0x0;
                  }
                  else {
                    plVar23 = (longlong *)0x0;
                    if ((int)uVar5 < DAT_14c9647dc) {
                      puVar22 = (undefined8 *)
                                ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
                      if (((puVar22 == (undefined8 *)0x0) || (*(int *)(puVar22 + 2) != iVar6)) ||
                         ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)) goto LAB_140dcdf60;
                      plVar23 = (longlong *)*puVar22;
                    }
                  }
                  local_238 = local_2a0[2];
                  local_248 = *local_2a0;
                  dStack_240 = local_2a0[1];
                  local_268 = *pdVar2;
                  dStack_260 = pdVar2[1];
                  local_258 = pdVar2[2];
                  local_2e8 = param_3;
                  cVar20 = (**(code **)(*plVar23 + 0x978))
                                     (local_268,&local_1d8,&local_268,&local_248);
                }
                pvVar18 = local_2b0;
                if ((cVar20 != '\0') && (local_1d8._4_4_ < *(float *)((longlong)local_2b0 + 4))) {
                  memcpy(local_2b0,&local_1d8,0x100);
                  *(byte *)((longlong)pvVar18 + 0xad) = *(byte *)((longlong)pvVar18 + 0xad) | 1;
                }
              }
              lVar26 = lVar26 + 0x48;
            } while ((longlong)iVar4 * 0x48 != lVar26);
          }
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)local_2a8[1]);
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dce269 FUN_140dce269 body=64 status=ok
// SIG undefined FUN_140dce269(void)

void FUN_140dce269(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140dce2aa(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b6c9280;
  puVar1[5] = &PTR_FUN_14b6c98f0;
  puVar1[6] = &PTR_LAB_14b6c9930;
  *(undefined1 *)(puVar1 + 0x8d) = 1;
  return;
}



// FUNCTION 140dce2aa FUN_140dce2aa body=199 status=ok
// SIG undefined FUN_140dce2aa(void)

undefined8 * FUN_140dce2aa(undefined8 *param_1)

{
  FUN_140b96638();
  *param_1 = &PTR_FUN_14b486310;
  param_1[5] = &PTR_LAB_14b486980;
  param_1[6] = &PTR_LAB_14b4869c0;
  param_1[0x75] = &PTR_FUN_14b023b08;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  *(undefined2 *)(param_1 + 0x79) = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0x3b9cbb9e;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 10;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0x7fffffffffffffff;
  return param_1;
}



// FUNCTION 140dce3a6 FUN_140dce3a6 body=97 status=ok
// SIG undefined FUN_140dce3a6(void)

undefined8 FUN_140dce3a6(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if (lVar3 != lVar2) {
    iVar1 = *(int *)(lVar2 + 0x58);
    _Src = *(void **)(lVar2 + 0x50);
    *(int *)(lVar3 + 0x58) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar3 + 0x5c) == 0) {
      *(undefined4 *)(lVar3 + 0x5c) = 0;
    }
    else {
      FUN_14479fa02((undefined8 *)(lVar3 + 0x50),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(lVar3 + 0x50),_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return 1;
}



// FUNCTION 140dce408 FUN_140dce408 body=223 status=ok
// SIG undefined FUN_140dce408(void)

void FUN_140dce408(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b7127e0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  if (*(longlong *)(param_1 + 0x170) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0x130),0);
  }
  *(undefined8 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0;
  if (0x80 < *(uint *)(param_1 + 0x15c)) {
    *(undefined4 *)(param_1 + 0x15c) = 0x80;
    FUN_1446efbd8(param_1 + 0x140,0);
  }
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  FUN_140dce4e8(param_1 + 0x10);
  return;
}



// FUNCTION 140dce4e8 FUN_140dce4e8 body=68 status=ok
// SIG undefined FUN_140dce4e8(void)

void FUN_140dce4e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b42fa70;
  if (*(char *)(param_1 + 0xb) == '\x01') {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140dce52c FUN_140dce52c body=837 status=ok
// SIG undefined FUN_140dce52c(void)

undefined4 * FUN_140dce52c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
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
  undefined4 *puVar16;
  longlong lVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  FUN_1447715ec(param_1 + 6,param_2 + 6);
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))(param_1 + 0x10,0);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  FUN_1406022fe(param_1 + 0x14,param_2 + 0x14);
  (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))(param_1 + 0x18,0);
  *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  FUN_1406022fe(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  param_1[0x22] = param_2[0x22];
  uVar5 = param_2[0x25];
  uVar6 = param_2[0x26];
  uVar7 = param_2[0x27];
  uVar8 = param_2[0x28];
  uVar9 = param_2[0x29];
  uVar10 = param_2[0x2a];
  uVar11 = param_2[0x2b];
  uVar12 = param_2[0x2c];
  uVar13 = param_2[0x2d];
  uVar14 = param_2[0x2e];
  uVar15 = param_2[0x2f];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar5;
  param_1[0x26] = uVar6;
  param_1[0x27] = uVar7;
  param_1[0x28] = uVar8;
  param_1[0x29] = uVar9;
  param_1[0x2a] = uVar10;
  param_1[0x2b] = uVar11;
  param_1[0x2c] = uVar12;
  param_1[0x2d] = uVar13;
  param_1[0x2e] = uVar14;
  param_1[0x2f] = uVar15;
  param_1[0x30] = param_2[0x30];
  if (param_1 == param_2) {
    param_1[0x38] = param_2[0x38];
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
  }
  else {
    iVar2 = param_2[0x34];
    pvVar3 = *(void **)(param_2 + 0x32);
    param_1[0x34] = iVar2;
    if (iVar2 == 0 && param_1[0x35] == 0) {
      param_1[0x35] = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x32,iVar2);
      if (iVar2 != 0) {
        memcpy(*(void **)(param_1 + 0x32),pvVar3,(longlong)iVar2 * 2);
      }
    }
    param_1[0x38] = param_2[0x38];
    *(undefined8 *)(param_1 + 0x36) = *(undefined8 *)(param_2 + 0x36);
    FUN_1409c0f2d(*(undefined8 *)(param_1 + 0x3a),param_1[0x3c]);
    iVar2 = param_2[0x3c];
    uVar4 = *(undefined8 *)(param_2 + 0x3a);
    param_1[0x3c] = iVar2;
    if (iVar2 == 0 && param_1[0x3d] == 0) {
      param_1[0x3d] = 0;
    }
    else {
      FUN_140dce938(param_1 + 0x3a,iVar2);
      FUN_140dcec38(*(undefined8 *)(param_1 + 0x3a),uVar4,iVar2);
    }
  }
  FUN_14054c6c4(param_1 + 0x3e,param_2 + 0x3e);
  *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_2 + 0x42);
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  FUN_14054c6c4(param_1 + 0x46,param_2 + 0x46);
  if (param_1 != param_2) {
    puVar1 = param_1 + 0x4a;
    puVar16 = *(undefined4 **)(param_1 + 0x4e);
    if (*(undefined4 **)(param_1 + 0x4e) == (undefined4 *)0x0) {
      puVar16 = puVar1;
    }
    FUN_1409c0f00(puVar16,param_1[0x50]);
    iVar2 = param_2[0x50];
    puVar16 = *(undefined4 **)(param_2 + 0x4e);
    param_1[0x50] = iVar2;
    if (iVar2 == 0 && param_1[0x51] == 0) {
      param_1[0x51] = 1;
    }
    else {
      puVar18 = param_2 + 0x4a;
      if (puVar16 != (undefined4 *)0x0) {
        puVar18 = puVar16;
      }
      FUN_140dce872(puVar1,iVar2);
      puVar16 = *(undefined4 **)(param_1 + 0x4e);
      if (*(undefined4 **)(param_1 + 0x4e) == (undefined4 *)0x0) {
        puVar16 = puVar1;
      }
      FUN_140dce8c4(puVar16,puVar18,iVar2);
    }
  }
  FUN_140dcea22(param_1 + 0x52,param_2 + 0x52);
  FUN_140dcea22(param_1 + 0x66,param_2 + 0x66);
  puVar19 = (undefined8 *)(param_2 + 0x7c);
  puVar20 = (undefined8 *)(param_1 + 0x7c);
  for (lVar17 = 0xe; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar20 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar20 = puVar20 + 1;
  }
  if (param_1 != param_2) {
    iVar2 = param_2[0x9a];
    pvVar3 = *(void **)(param_2 + 0x98);
    param_1[0x9a] = iVar2;
    if (iVar2 == 0 && param_1[0x9b] == 0) {
      param_1[0x9b] = 0;
    }
    else {
      FUN_1487b4f6e(param_1 + 0x98,iVar2);
      if (iVar2 != 0) {
        memcpy(*(void **)(param_1 + 0x98),pvVar3,(longlong)iVar2 << 3);
      }
    }
  }
  FUN_1400fce78(param_1 + 0x9c,param_2 + 0x9c);
  return param_1;
}



// FUNCTION 140dce872 FUN_140dce872 body=82 status=ok
// SIG undefined FUN_140dce872(void)

void FUN_140dce872(longlong param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
    uVar1 = (uint)(uVar2 >> 4);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if ((int)param_3 < (int)uVar3) {
    FUN_1409c9b6c(param_1,0,uVar3);
    param_3 = uVar3;
  }
  *(uint *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 140dce8c4 FUN_140dce8c4 body=116 status=ok
// SIG undefined FUN_140dce8c4(void)

void FUN_140dce8c4(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1487b4f14(param_1,iVar1);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140dce938 FUN_140dce938 body=233 status=ok
// SIG undefined FUN_140dce938(void)

void FUN_140dce938(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x90;
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
    iVar1 = (int)(uVar3 / 0x90);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x90,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140dcea22 FUN_140dcea22 body=534 status=ok
// SIG undefined FUN_140dcea22(void)

longlong * FUN_140dcea22(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar1 = (int)param_2[9];
  plVar4 = param_1 + 8;
  if ((ulonglong)(longlong)iVar1 < 2) {
    if (*plVar4 != 0) {
      FUN_1446efa72(plVar4,0,0,4);
    }
    if (iVar1 == 0) goto LAB_140dcea6a;
  }
  else {
    FUN_1446efa72(plVar4,0,iVar1,4);
  }
  plVar6 = param_1 + 7;
  if ((longlong *)*plVar4 != (longlong *)0x0) {
    plVar6 = (longlong *)*plVar4;
  }
  plVar4 = param_2 + 7;
  if ((longlong *)param_2[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[8];
  }
  memcpy(plVar6,plVar4,(longlong)iVar1 << 2);
LAB_140dcea6a:
  *(int *)(param_1 + 9) = iVar1;
  uVar2 = *(uint *)(param_2 + 1);
  FUN_1409c0fdc(param_1,(ulonglong)uVar2);
  lVar9 = param_1[1];
  *(uint *)(param_1 + 1) = (int)lVar9 + uVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar9) < uVar2) {
    FUN_140044672(param_1);
  }
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar3 = (int)param_2[5] + 0x1fU & 0xffffffe0;
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
  iVar1 = (int)param_2[5];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 != 0) {
    plVar4 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar4 = param_2 + 2;
    }
    plVar6 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[4];
    }
    memcpy(plVar6,plVar4,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (0 < (int)uVar2) {
    lVar9 = *param_2 + 0x18;
    puVar8 = (undefined8 *)(*param_1 + 0x18);
    uVar7 = 0;
    do {
      plVar4 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar4 = param_2 + 2;
      }
      uVar3 = *(uint *)((longlong)plVar4 + (uVar7 >> 5 & 0x7ffffff) * 4);
      *(undefined4 *)(puVar8 + -3) = *(undefined4 *)(lVar9 + -0x18);
      if ((uVar3 >> ((uint)uVar7 & 0x1f) & 1) == 0) {
        *(undefined4 *)((longlong)puVar8 + -0x14) = *(undefined4 *)(lVar9 + -0x14);
      }
      else {
        puVar8[-2] = &DAT_14a171d50;
        puVar8[-1] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[-1] = *(undefined8 *)(lVar9 + -8);
        FUN_1406022fe(puVar8,lVar9);
        puVar8[2] = *(undefined8 *)(lVar9 + 0x10);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x30;
      puVar8 = puVar8 + 6;
    } while (uVar2 != uVar7);
  }
  return param_1;
}



// FUNCTION 140dcec38 FUN_140dcec38 body=273 status=ok
// SIG undefined FUN_140dcec38(void)

void FUN_140dcec38(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar5);
      puVar3 = (undefined8 *)(param_1 + 0x18 + lVar5);
      *(undefined4 *)(puVar3 + -3) = *puVar1;
      *(undefined2 *)(puVar3 + -2) = 0;
      *(undefined8 *)((longlong)puVar3 + -0xc) = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[-2] = *(undefined8 *)(puVar1 + 2);
      *(undefined4 *)(puVar3 + -1) = puVar1[4];
      FUN_1447715ec(puVar3,puVar1 + 6);
      puVar3[5] = &DAT_14a171d50;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[6] = *(undefined8 *)(puVar1 + 0x12);
      lVar4 = param_2 + 0x50 + lVar5;
      lVar2 = param_1 + lVar5;
      FUN_1406022fe(lVar2 + 0x50,lVar4);
      *(undefined2 **)(lVar2 + 0x60) = &DAT_14a171d50;
      *(undefined8 *)(lVar2 + 0x68) = 0;
      *(undefined8 *)(lVar2 + 0x70) = 0;
      *(undefined8 *)(lVar2 + 0x78) = 0;
      *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar4 + 0x18);
      lVar4 = param_2 + 0x70 + lVar5;
      lVar2 = param_1 + lVar5;
      FUN_1406022fe(lVar2 + 0x70,lVar4);
      *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar4 + 0x10);
      *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(lVar4 + 0x18);
      lVar5 = lVar5 + 0x90;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140dced4a FUN_140dced4a body=170 status=ok
// SIG undefined FUN_140dced4a(void)

longlong FUN_140dced4a(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (**(code **)(*param_1 + 0x38))();
  if (lVar4 == 0) {
    iVar1 = (int)param_1[7];
    *(uint *)(param_1 + 7) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x3c) < iVar1 + 1U) {
      FUN_1457af67c(param_1 + 6,iVar1);
    }
    lVar2 = param_1[6];
    lVar3 = (longlong)iVar1 * 0x88;
    lVar4 = lVar2 + lVar3;
    FUN_140dcef8a(lVar4,param_2);
    *(undefined ***)(lVar2 + lVar3) = &PTR_FUN_14b222c18;
    *(undefined4 *)(lVar2 + 0x80 + lVar3) = 0xffffffff;
    FUN_1411dcb92(lVar4,param_2 + 0x30);
    if ((*(byte *)(lVar2 + 0x78 + lVar3) & 1) != 0) {
      FUN_14106756e(param_1 + 8,lVar4);
    }
  }
  return lVar4;
}



// FUNCTION 140dcedf4 FUN_140dcedf4 body=79 status=ok
// SIG undefined FUN_140dcedf4(void)

longlong FUN_140dcedf4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x88;
    do {
      cVar1 = FUN_140dcee44(lVar3 + 8,param_2);
      if (cVar1 != '\0') {
        return lVar3;
      }
      lVar3 = lVar3 + 0x88;
      lVar2 = lVar2 + -0x88;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 140dcee44 FUN_140dcee44 body=325 status=ok
// SIG undefined FUN_140dcee44(void)

ulonglong FUN_140dcee44(uint *param_1,longlong param_2)

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



// FUNCTION 140dcef8a FUN_140dcef8a body=216 status=ok
// SIG undefined FUN_140dcef8a(void)

undefined8 * FUN_140dcef8a(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  *param_1 = &PTR_FUN_14b224338;
  param_1[1] = 0;
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 1) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xfe;
  return param_1;
}



// FUNCTION 140dcf062 FUN_140dcf062 body=241 status=ok
// SIG undefined FUN_140dcf062(void)

void FUN_140dcf062(longlong param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(~-(uint)(param_2 < param_3) & (*(uint *)(param_1 + 0x50) ^ 0x80000000) |
                 *(uint *)(param_1 + 0x4c) & -(uint)(param_2 < param_3));
  if ((1e-08 < ABS(fVar1)) &&
     (fVar2 = (param_2 - param_3) / fVar1,
     param_4 < fVar2 * fVar2 * fVar1 * 0.5 + ABS(fVar2) * param_2)) {
    FUN_140dcf153();
    return;
  }
  return;
}



// FUNCTION 140dcf153 FUN_140dcf153 body=225 status=ok
// SIG undefined FUN_140dcf153(void)

undefined8 FUN_140dcf153(float param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint extraout_XMM0_Db;
  uint uVar4;
  float fVar5;
  
  fVar2 = (float)param_2;
  if (ABS(param_1) < 0.0001) {
    fVar1 = 0.0;
    uVar4 = 0;
    if (0.0001 <= ABS(fVar2)) {
      fVar1 = ABS((float)param_3 / fVar2);
      uVar4 = (uint)((ulonglong)param_3 >> 0x20) & 0x7fffffff;
    }
  }
  else {
    fVar5 = fVar2 * fVar2 + param_1 * -4.0 * (float)param_3;
    fVar1 = 0.0;
    uVar3 = 0;
    if (0.0 < fVar5) {
      if (fVar5 < 0.0) {
        fVar1 = sqrtf(fVar5);
        uVar3 = extraout_XMM0_Db;
      }
      else {
        uVar3 = 0;
        fVar1 = SQRT(fVar5);
      }
    }
    fVar5 = (fVar1 - fVar2) / (param_1 + param_1);
    fVar2 = (-fVar2 - fVar1) / (param_1 + param_1);
    fVar1 = fVar2;
    uVar4 = (uint)((ulonglong)param_2 >> 0x20) ^ 0x80000000;
    if (((0.0 <= fVar5) && (fVar1 = fVar5, uVar4 = uVar3, 0.0 <= fVar2)) && (fVar2 <= fVar5)) {
      fVar1 = fVar2;
    }
  }
  return CONCAT44(uVar4,fVar1);
}



// FUNCTION 140dcf242 FUN_140dcf242 body=40 status=ok
// SIG undefined FUN_140dcf242(void)

undefined8 FUN_140dcf242(undefined8 param_1,int param_2)

{
  FUN_140dcf26a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dcf26a FUN_140dcf26a body=416 status=ok
// SIG undefined FUN_140dcf26a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140dcf26a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b77f980;
  lVar2 = 0x618;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0x528);
  lVar2 = 0x528;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0x410);
  *(undefined4 *)(param_1 + 0x83) = 0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  FUN_140c08aca(param_1 + 0x7a);
  lVar2 = 0x3c0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0x2d0);
  lVar2 = 0x2d0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0x1b8);
  lVar2 = 0x198;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 0xf8);
  lVar2 = 0xf8;
  do {
    if (*(longlong *)((longlong)param_1 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x28;
  } while (lVar2 != 8);
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
                    /* WARNING: Could not recover jumptable at 0x000140dcf3b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140dcf40a FUN_140dcf40a body=1416 status=ok
// SIG undefined FUN_140dcf40a(void)

void FUN_140dcf40a(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined8 *local_f0;
  int local_e8;
  undefined2 local_e0 [2];
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  byte local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) & 0xf8;
  lVar2 = param_1[6];
  FUN_140dcf9f6(param_1,1);
  FUN_140898514(param_1 + 8,param_2);
  FUN_140dcff80(param_1,0xbf800000);
  if ((0 < (int)param_1[0x16]) && ((*(byte *)((longlong)param_1 + 0xcc) & 2) == 0)) {
    FUN_148f154f8(lVar2 + 0x938,&local_d8,param_1);
    goto LAB_140dcf79d;
  }
  fVar10 = *(float *)(lVar2 + 0x74);
  uVar8 = -(uint)(0.0001 < fVar10);
  lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  if (*(longlong *)(lVar2 + 0x1f0) == 0) {
    puVar3 = (undefined8 *)(lVar2 + 0x458);
  }
  else {
    puVar3 = (undefined8 *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
  }
  fVar11 = (float)(~uVar8 & 0x3f800000 | (uint)(1.0 / fVar10) & uVar8);
  fVar10 = *(float *)((longlong)param_1 + 0xb4);
  if ((0 < (int)*(uint *)(param_1 + 0x17)) &&
     ((uint)*(byte *)((longlong)param_1 + 0xcf) < *(uint *)(param_1 + 0x17))) {
    fVar10 = *(float *)(param_1 + 0x19);
  }
  uVar1 = *puVar3;
  fVar9 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  fVar9 = fVar9 * fVar10;
  if (fVar9 <= 0.01) {
    fVar9 = 0.01;
  }
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  FUN_1446efa72(&local_f0,0,3,0x10);
  puVar3 = local_f0;
  local_e8 = 3;
  *local_f0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_f0[2] = lVar4;
  *local_f0 = &PTR_FUN_14b9e15d0;
  local_f0[3] = 0;
  iVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar8 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_f0 + 3) = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar5 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar2 + 0x10);
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(lVar2 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar5;
  puVar3[4] = FUN_140f1f37c;
  local_d8 = 0;
  local_d0 = 0;
  FUN_14487d8d8(&local_d8,&local_f0);
  local_98 = 1;
  local_e0[0] = 0;
  local_dc = 0xbf800000;
  local_f8 = local_e0;
  FUN_1406f4044(uVar1,param_1 + 0x1c,&local_d8,fVar9 * fVar11);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
  if (local_e8 == 0) {
LAB_140dcf644:
    if (local_f0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f0 != (undefined8 *)0x0) {
    (**(code **)*local_f0)(local_f0,0);
    FUN_1446efa72(&local_f0,0,0,0x10);
    local_e8 = 0;
    goto LAB_140dcf644;
  }
  fVar10 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  fVar11 = fVar11 * fVar10;
  local_f0 = (undefined8 *)0x0;
  local_e8 = 0;
  FUN_1446efa72(&local_f0,0,3,0x10);
  puVar3 = local_f0;
  local_e8 = 3;
  *local_f0 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  if (fVar11 <= 0.01) {
    fVar11 = 0.01;
  }
  local_f0[2] = lVar4;
  *local_f0 = &PTR_FUN_14b9e15d0;
  local_f0[3] = 0;
  iVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar8 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_f0 + 3) = uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar5 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar2 + 0x10);
      bVar7 = iVar5 == 0;
      if (bVar7) {
        *(int *)(lVar2 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar3 + 0x1c) = iVar5;
  puVar3[4] = FUN_140f1f2ce;
  local_d8 = 0;
  local_d0 = 0;
  FUN_14487d8d8(&local_d8,&local_f0);
  local_98 = 1;
  local_e0[0] = 0;
  local_dc = 0xbf800000;
  local_f8 = local_e0;
  FUN_1406f4044(uVar1,param_1 + 0x1b,&local_d8,fVar11);
  (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
  if (local_e8 != 0) {
    if (local_f0 == (undefined8 *)0x0) goto LAB_140dcf79d;
    (**(code **)*local_f0)(local_f0,0);
    FUN_1446efa72(&local_f0,0,0,0x10);
    local_e8 = 0;
  }
  if (local_f0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140dcf79d:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dcf994 FUN_140dcf994 body=98 status=ok
// SIG undefined FUN_140dcf994(void)

ulonglong FUN_140dcf994(longlong param_1)

{
  ulonglong uVar1;
  float fVar2;
  
  uVar1 = FUN_140dcfaf8();
  if ((0 < (int)*(uint *)(param_1 + 0xb8)) &&
     ((uint)*(byte *)(param_1 + 0xcf) < *(uint *)(param_1 + 0xb8))) {
    fVar2 = 1.0;
    if ((0.0 < *(float *)(param_1 + 0x90)) && (0.0 < *(float *)(param_1 + 0x8c))) {
      fVar2 = *(float *)(param_1 + 0x8c) / *(float *)(param_1 + 0x90);
    }
    uVar1 = (ulonglong)(uint)(*(float *)(param_1 + 0xc0) * fVar2);
  }
  return uVar1;
}



// FUNCTION 140dcf9f6 FUN_140dcf9f6 body=258 status=ok
// SIG undefined FUN_140dcf9f6(void)

void FUN_140dcf9f6(longlong param_1,char param_2)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  uint uVar7;
  
  if ((param_2 != '\x01') && (*(char *)(param_1 + 0xcd) == '\x01')) {
    FUN_140457ffc(*(longlong *)(param_1 + 0x30) + 0x938,param_1);
  }
  *(char *)(param_1 + 0xcd) = param_2;
  if ((*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) == '\x03') &&
     (bVar2 = *(byte *)(param_1 + 0xce) + 1 & 0xf | param_2 << 4, *(byte *)(param_1 + 0xce) != bVar2
     )) {
    *(byte *)(param_1 + 0xce) = bVar2;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar6 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar6 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140dcfaf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar1,1);
      return;
    }
    uVar7 = (uint)uVar1;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
      puVar4 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar4 = DAT_14c998080;
      }
      if ((*(uint *)(puVar4 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
        lVar3 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
        puVar5 = *(uint **)(lVar3 + 0x18);
        if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
          puVar5 = (uint *)(lVar3 + 8);
        }
        *puVar5 = *puVar5 | 2;
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 140dcfaf8 FUN_140dcfaf8 body=1159 status=ok
// SIG undefined FUN_140dcfaf8(void)

ulonglong FUN_140dcfaf8(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong local_a0;
  int local_94;
  float local_90;
  float local_8c;
  int local_88;
  float local_84;
  float local_80;
  int local_7c;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = 0;
  if (*(int *)(param_1 + 0x88) == 0) {
    fVar8 = *(float *)(param_1 + 0x90);
    local_80 = fVar8;
LAB_140dcfb4a:
    iVar3 = 0;
    local_80 = fVar8;
  }
  else {
    FUN_1402a453c(&local_88);
    iVar3 = local_88;
    iVar4 = *(int *)(param_1 + 0x88);
    lVar7 = (longlong)local_88;
    lVar1 = DAT_14c9a3d60 + lVar7 * 0x88;
    lVar6 = (longlong)iVar4 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar1 + -0x88,lVar6 + -0x88);
    if (iVar4 != iVar3) {
      FUN_1402a4744(lVar1 + -0x18,lVar6 + -0x18);
    }
    fVar8 = *(float *)(param_1 + 0x90);
    local_80 = fVar8;
    if (iVar3 == 0) goto LAB_140dcfb4a;
    fVar8 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar7 * 0x88 + -0x88,fVar8,0);
  }
  local_84 = fVar8;
  local_94 = 0;
  if (*(int *)(param_1 + 0x94) == 0) {
    fVar9 = *(float *)(param_1 + 0x9c);
    local_8c = fVar9;
LAB_140dcfb75:
    iVar2 = 0;
    local_8c = fVar9;
  }
  else {
    FUN_1402a453c(&local_94);
    iVar2 = local_94;
    iVar4 = *(int *)(param_1 + 0x94);
    lVar7 = (longlong)local_94;
    lVar1 = DAT_14c9a3d60 + lVar7 * 0x88;
    lVar6 = (longlong)iVar4 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar1 + -0x88,lVar6 + -0x88);
    if (iVar4 != iVar2) {
      FUN_1402a4744(lVar1 + -0x18,lVar6 + -0x18);
    }
    fVar9 = *(float *)(param_1 + 0x9c);
    local_8c = fVar9;
    if (iVar2 == 0) goto LAB_140dcfb75;
    fVar9 = (float)FUN_14020a770(DAT_14c9a3d60 + lVar7 * 0x88 + -0x88,fVar9,0);
  }
  piVar5 = &local_88;
  if (fVar8 < fVar9) {
    piVar5 = &local_94;
  }
  local_90 = fVar9;
  local_7c = 0;
  if (*piVar5 == 0) {
    piVar5 = &local_88;
    if (fVar8 < fVar9) {
      piVar5 = &local_94;
    }
    uVar11 = piVar5[2];
  }
  else {
    FUN_1402a453c(&local_7c);
    iVar4 = local_7c;
    local_a0 = (longlong)*piVar5;
    local_a8 = (longlong)local_7c * 0x88;
    lVar1 = DAT_14c9a3d60 + local_a8;
    lVar7 = local_a0 * 0x88 + DAT_14c9a3d60;
    FUN_1402a4668(lVar1 + -0x88,lVar7 + -0x88);
    if ((int)local_a0 != iVar4) {
      FUN_1402a4744(lVar1 + -0x18,lVar7 + -0x18);
    }
    piVar5 = &local_88;
    if (fVar8 < fVar9) {
      piVar5 = &local_94;
    }
    uVar11 = piVar5[2];
    if (iVar4 != 0) {
      uVar10 = FUN_14020a770(local_a8 + DAT_14c9a3d60 + -0x88,uVar11,0);
      goto LAB_140dcfbb3;
    }
  }
  uVar10 = (ulonglong)uVar11;
  iVar4 = 0;
LAB_140dcfbb3:
  lVar1 = DAT_14c9a3d60;
  local_78 = (undefined4)uVar10;
  if ((iVar2 != 0) && (DAT_14c9a3d68 != DAT_14c9a3d94)) {
    lVar6 = (longlong)(iVar2 + -1) * 0x88;
    lVar7 = DAT_14c9a3d60 + lVar6;
    FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar6),
                  *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar6));
    if (*(longlong *)(lVar1 + 0x70 + lVar6) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar7 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_14059507c(&DAT_14c9a3d60,iVar2 + -1,1);
  }
  lVar1 = DAT_14c9a3d60;
  if ((iVar3 != 0) && (DAT_14c9a3d68 != DAT_14c9a3d94)) {
    lVar6 = (longlong)(iVar3 + -1) * 0x88;
    lVar7 = DAT_14c9a3d60 + lVar6;
    FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar6),
                  *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar6));
    if (*(longlong *)(lVar1 + 0x70 + lVar6) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar7 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_14059507c(&DAT_14c9a3d60,iVar3 + -1,1);
  }
  lVar1 = DAT_14c9a3d60;
  if ((iVar4 != 0) && (DAT_14c9a3d68 != DAT_14c9a3d94)) {
    lVar6 = (longlong)(iVar4 + -1) * 0x88;
    lVar7 = DAT_14c9a3d60 + lVar6;
    FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar6),
                  *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar6));
    if (*(longlong *)(lVar1 + 0x70 + lVar6) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar7 + 0x60) != 0) {
      FUN_1400020a8();
    }
    FUN_14059507c(&DAT_14c9a3d60,iVar4 + -1,1);
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dcff80 FUN_140dcff80 body=676 status=ok
// SIG undefined FUN_140dcff80(void)

void FUN_140dcff80(longlong *param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68 [8];
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  fVar9 = param_2;
  if (param_2 <= 0.0) {
    fVar9 = (float)(**(code **)(*param_1 + 0x2c8))(param_1);
  }
  *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) & 0xfd;
  lVar4 = param_1[6];
  lVar6 = FUN_140831778();
  if (*(longlong *)(lVar6 + 0x1b0) != 0) {
    FUN_140dd0426(lVar4,lVar6 + 0x1b0);
  }
  local_70 = 0;
  local_78 = 0;
  cVar5 = FUN_140dd024a(lVar4,DAT_14cbe7988);
  *(char *)(param_1 + 0x1d) = cVar5;
  if (cVar5 != '\0') {
    lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
    param_1[0x1e] = *(longlong *)(lVar6 + 0x6d0);
    if (param_2 <= 0.0) {
      uVar8 = -(uint)(0.0001 < *(float *)(lVar4 + 0x74));
      param_2 = fVar9 * (float)(~uVar8 & 0x3f800000 | (uint)(1.0 / *(float *)(lVar4 + 0x74)) & uVar8
                               );
    }
    *(float *)(param_1 + 0x1f) = param_2;
  }
  local_78 = 0;
  FUN_140980406(lVar4,DAT_14cbe7a18,0,0);
  if ((0 < (int)param_1[0x16]) && ((*(byte *)((longlong)param_1 + 0xcc) & 2) == 0)) {
    if ((char)param_1[0x1d] == '\0') {
      FUN_140f1f37c(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_98);
    }
    lVar6 = FUN_1407ca824(*(undefined8 *)(param_1[6] + 0x1b0));
    if (lVar6 != 0) {
      FUN_140dc01da(lVar6,&local_60,(char)param_1[0x1d]);
      if (local_60 != 0) {
        lVar6 = *(longlong *)(local_60 + 0x30);
        lVar7 = FUN_140ed0e8c();
        lVar6 = *(longlong *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38)) {
          *(byte *)((longlong)param_1 + 0xcc) = *(byte *)((longlong)param_1 + 0xcc) | 2;
        }
        else {
          lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8);
          *(byte *)((longlong)param_1 + 0xcc) =
               *(byte *)((longlong)param_1 + 0xcc) & 0xfd | (lVar6 != lVar7 + 0x30) * '\x02';
          if (lVar6 == lVar7 + 0x30) {
            cVar5 = FUN_14130ac92(lVar4);
            plVar1 = local_58;
            if (cVar5 != '\0') {
              if (local_58 == (longlong *)0x0) {
                FUN_148f158e6(local_60 + 0x18,local_68,param_1);
              }
              else {
                LOCK();
                *(int *)(local_58 + 1) = (int)local_58[1] + 1;
                UNLOCK();
                FUN_148f158e6(local_60 + 0x18,local_68,param_1);
                LOCK();
                plVar3 = plVar1 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
                  (**(code **)*plVar1)(plVar1);
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
        }
      }
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)local_58 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_58 + 0x10))(local_58);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd024a FUN_140dd024a body=303 status=ok
// SIG undefined FUN_140dd024a(void)

undefined4
FUN_140dd024a(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4,
             undefined1 param_5,char param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined1 local_80;
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
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  if ((param_4 != 0.0) || (NAN(param_4))) {
    FUN_140dd037a(&local_78,param_4);
  }
  else {
    FUN_140dd04a4(&local_78,param_3);
  }
  if (param_6 != '\0') {
    FUN_140dd07e4(&local_78,2);
  }
  if ((*(longlong *)(param_1 + 0xb38) == 0) ||
     (plVar1 = *(longlong **)(param_1 + 0xb40), plVar1 == (longlong *)0x0)) {
    uVar2 = 0;
  }
  else {
    local_80 = param_5;
    local_88 = &local_78;
    uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_2,*(undefined8 *)(param_1 + 0xcfc),param_1);
  }
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_78);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd037a FUN_140dd037a body=170 status=ok
// SIG undefined FUN_140dd037a(void)

void FUN_140dd037a(undefined8 param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  undefined4 local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = &local_38;
  local_20 = 4;
  local_18 = 3;
  local_50 = &DAT_14cb8cc90;
  local_48 = puVar2;
  local_38 = param_2;
  FUN_140881f5a(param_1,local_3c,&local_50,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_20) {
      puVar2 = (undefined4 *)CONCAT44(uStack_34,local_38);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_20) {
    FUN_1400020a8(CONCAT44(uStack_34,local_38));
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd0426 FUN_140dd0426 body=125 status=ok
// SIG undefined FUN_140dd0426(void)

void FUN_140dd0426(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar3 = 0;
    do {
      FUN_140dd0572(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar3 = 0;
    do {
      FUN_140dd0572(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 140dd04a4 FUN_140dd04a4 body=205 status=ok
// SIG undefined FUN_140dd04a4(void)

void FUN_140dd04a4(undefined8 param_1,float param_2)

{
  code *pcVar1;
  float *pfVar2;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  float *local_48;
  undefined1 local_3c [4];
  float local_38;
  undefined4 uStack_34;
  ushort local_20;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (1e-08 < ABS(param_2 + -1.0)) {
    pfVar2 = &local_38;
    local_20 = 4;
    local_18 = 3;
    local_50 = &DAT_14cb8cc88;
    local_48 = pfVar2;
    local_38 = param_2;
    FUN_140881f5a(ABS(param_2 + -1.0),local_3c,&local_50,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_18 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_20) {
        pfVar2 = (float *)CONCAT44(uStack_34,local_38);
      }
      (*pcVar1)(pfVar2);
    }
    if (0x18 < local_20) {
      FUN_1400020a8(CONCAT44(uStack_34,local_38));
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd0572 FUN_140dd0572 body=603 status=ok
// SIG undefined FUN_140dd0572(void)

void FUN_140dd0572(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (lVar2 == 0) goto LAB_140dd07b7;
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    lVar2 = *(longlong *)(lVar2 + 0x120);
    if (lVar2 != 0) {
      lVar1 = DAT_14cad2858;
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
        lVar1 = DAT_14cad2858;
      }
      goto LAB_140dd05c4;
    }
  }
  else {
    lVar1 = FUN_144a74fb4();
LAB_140dd05c4:
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         == lVar1 + 0x30)) && (*(longlong *)(lVar2 + 0xae8) != 0)) {
      FUN_140671584(*(longlong *)(lVar2 + 0xae8),param_2);
    }
  }
  if (((*(byte *)(param_1 + 0x78) & 1) == 0) && (lVar2 = *(longlong *)(param_1 + 0x48), lVar2 != 0))
  {
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
    if (((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) &&
       (*(longlong *)(lVar2 + 0xae8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_140dd07b7:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd07e4 FUN_140dd07e4 body=203 status=ok
// SIG undefined FUN_140dd07e4(void)

void FUN_140dd07e4(undefined8 param_1,byte param_2)

{
  code *pcVar1;
  uint *puVar2;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  uint *local_50;
  undefined1 local_44 [4];
  uint local_40;
  undefined4 uStack_3c;
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  local_40 = (uint)param_2;
  puVar2 = &local_40;
  local_28 = 4;
  local_20 = 2;
  local_58 = &DAT_14cb8cca0;
  local_50 = puVar2;
  FUN_140881f5a(param_1,local_44,&local_58,0);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_28) {
      puVar2 = (uint *)CONCAT44(uStack_3c,local_40);
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(CONCAT44(uStack_3c,local_40));
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd08d0 FUN_140dd08d0 body=40 status=ok
// SIG undefined FUN_140dd08d0(void)

undefined8 FUN_140dd08d0(undefined8 param_1,int param_2)

{
  FUN_140dd08f8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dd08f8 FUN_140dd08f8 body=253 status=ok
// SIG undefined FUN_140dd08f8(void)

void FUN_140dd08f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0a2b10;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
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
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140dd0a04 FUN_140dd0a04 body=31 status=ok
// SIG undefined FUN_140dd0a04(void)

undefined8 FUN_140dd0a04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dd0a24 FUN_140dd0a24 body=26 status=ok
// SIG undefined FUN_140dd0a24(void)

void FUN_140dd0a24(undefined8 param_1)

{
  FUN_140f05dd8();
  FUN_140dd0a3e(param_1);
  return;
}



// FUNCTION 140dd0a3e FUN_140dd0a3e body=87 status=ok
// SIG undefined FUN_140dd0a3e(void)

void FUN_140dd0a3e(longlong param_1)

{
  char cVar1;
  
  if ((((*(byte *)(param_1 + 0x65) & 0x18) == 0x10) && (*(longlong *)(param_1 + 0x2600) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x2600) + 0x459) == '\x01')) {
    cVar1 = FUN_140c8232a(param_1);
    if ((bool)*(char *)(param_1 + 0x1ae8) != (cVar1 == '\x01')) {
      *(bool *)(param_1 + 0x1ae8) = cVar1 == '\x01';
      FUN_140917eae(param_1 + 0x1ae8);
      return;
    }
  }
  return;
}



// FUNCTION 140dd0a9e FUN_140dd0a9e body=416 status=ok
// SIG undefined FUN_140dd0a9e(void)

undefined8 * FUN_140dd0a9e(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined3 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b6847a0;
  *(undefined2 *)(param_1 + 0x8b) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 1;
  *(undefined1 *)((longlong)param_1 + 0x474) = 1;
  *(undefined1 *)(param_1 + 0x57) = 1;
  *(undefined1 *)(param_1 + 0x69) = 1;
  *(undefined1 *)(param_1 + 0x75) = 1;
  *(undefined1 *)((longlong)param_1 + 0x31a) = 1;
  *(undefined1 *)(param_1 + 99) = 1;
  lVar2 = DAT_14cbc18b8;
  if (param_1[0x60] != DAT_14cbc18b8) {
    param_1[0x62] = 0;
  }
  param_1[0x60] = lVar2;
  local_80 = 0;
  local_60 = 4;
  local_78 = 1;
  local_58 = 1;
  local_50 = (DAT_14c9a8634 & 0x20) == 0;
  local_48 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_40 = 0x41a00000;
  iVar1 = *(int *)(param_1 + 0x65);
  *(uint *)(param_1 + 0x65) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x32c) < iVar1 + 1U) {
    FUN_140b510b6(param_1 + 100,iVar1);
  }
  lVar2 = param_1[100];
  lVar5 = (longlong)iVar1 * 0x50;
  FUN_14034cca6(lVar2 + lVar5,&local_80);
  *(uint *)(lVar2 + 0x47 + lVar5) = CONCAT31(uStack_38,uStack_3c._3_1_);
  puVar4 = (undefined4 *)(lVar2 + 0x38 + lVar5);
  *puVar4 = (undefined4)local_48;
  puVar4[1] = local_48._4_4_;
  puVar4[2] = uStack_40;
  puVar4[3] = uStack_3c;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (local_60 < 0x19) {
      puVar4 = &local_78;
    }
    else {
      puVar4 = (undefined4 *)CONCAT44(uStack_74,local_78);
    }
    (*pcVar3)(puVar4);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(CONCAT44(uStack_74,local_78));
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd0c40 FUN_140dd0c40 body=1051 status=ok
// SIG undefined FUN_140dd0c40(void)

void FUN_140dd0c40(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar9 = (**(code **)(*(longlong *)(param_1 + -0xda8) + 0x6c8))(param_1 + -0xda8);
  if (cVar9 == '\0') goto LAB_140dd0e11;
  puVar13 = (uint *)(param_1 + 0x1b8);
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  *(undefined4 *)(param_1 + 0x1b8) = *param_2;
  *(undefined4 *)(param_1 + 0x1bc) = uVar6;
  *(undefined4 *)(param_1 + 0x1c0) = uVar7;
  *(undefined4 *)(param_1 + 0x1c4) = uVar8;
  FUN_140dd1076(param_1 + 0x1c8,param_2 + 4);
  FUN_140dd1076(param_1 + 0x648,param_2 + 0x124);
  if ((*(char *)(param_1 + 0x13d8) == '\x01') && (cVar9 = FUN_1457af714(puVar13), cVar9 == '\0')) {
    puVar13 = (uint *)(param_1 + 0xac8);
  }
  if (*(longlong *)(param_1 + -0x8a0) != 0) {
    lVar10 = FUN_140dd10c4();
    plVar3 = *(longlong **)(param_1 + -0x8a0);
    if ((((plVar3 != (longlong *)0x0) && (lVar10 != 0)) && (lVar4 = plVar3[2], lVar4 != 0)) &&
       ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar4 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
         lVar10 + 0x30)))) {
      if ((((puVar13 != (uint *)&DAT_fffffffffffffff0 & (byte)puVar13[0x122]) != 1) ||
          (((puVar13[0x8e] & 1) == 0 && ((puVar13[0x11a] & 1) == 0)))) ||
         (lVar10 = 0x308, (char)puVar13[0x121] == '\x01')) {
        lVar10 = 0x318;
      }
      (**(code **)(*plVar3 + lVar10))(plVar3,&DAT_14cbc9df0);
      if (((puVar13 != (uint *)0xfffffffffffffb70 & (byte)puVar13[0x242]) == 1) &&
         ((((puVar13[0x1ae] & 1) != 0 || ((puVar13[0x23a] & 1) != 0)) &&
          ((char)puVar13[0x241] != '\x01')))) {
        lVar10 = 0x308;
      }
      else {
        lVar10 = 0x318;
      }
      (**(code **)(*plVar3 + lVar10))(plVar3,&DAT_14cbc9df8);
      if ((((*(longlong **)(puVar13 + 2) == (longlong *)0x0) || (puVar13[1] == 0)) ||
          ((uVar2 = *puVar13, (int)uVar2 < 0 ||
           ((DAT_14c9647dc <= (int)uVar2 ||
            (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 == 0))))
          )) || ((*(uint *)(lVar10 + 0x10) != puVar13[1] ||
                 (((*(uint *)(lVar10 + 8) & 0x10200000) != 0 ||
                  (lVar10 = (**(code **)(**(longlong **)(puVar13 + 2) + 8))(), lVar10 == 0)))))) {
LAB_140dd0d85:
        lVar10 = 0x318;
      }
      else {
        if (DAT_14cb6a468 == 0) {
          local_60 = &local_40;
          local_40 = FUN_140940a0a;
          local_50 = FUN_14081d0ea;
          local_58 = &LAB_146522c10;
          local_68 = &LAB_14876160d;
          local_70 = &LAB_140e30382;
          local_78 = L"Engine";
          local_80 = 0;
          local_88 = 0x10000004;
          local_90 = 0x10;
          local_98 = 0x9c0;
          FUN_14081cfa3(L"/Script/GbxGame",L"InventoryPickup",&DAT_14cb6a468,FUN_146526160);
        }
        if ((((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb6a468 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb6a468 + 0x38) * 8) != DAT_14cb6a468 + 0x30)) ||
            (*(longlong *)(lVar10 + 0x3f0) == 0)) ||
           ((*(byte *)(*(longlong *)(lVar10 + 0x3f0) + 0x368) & 0x10) == 0)) goto LAB_140dd0d85;
        cVar9 = FUN_1412e04a6(param_1 + -0xda8,lVar10 + 0x3f0);
        lVar10 = 0x308;
        if (cVar9 == '\0') goto LAB_140dd0d85;
      }
      (**(code **)(*plVar3 + lVar10))(plVar3,&DAT_14cbc9e28);
    }
  }
  iVar1 = *(int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x3c) = iVar1 + 1;
  uVar11 = (ulonglong)*(int *)(param_1 + 0x30);
  if (0 < (longlong)uVar11) {
    bVar12 = false;
    do {
      lVar10 = uVar11 * 0x10 + -8;
      uVar14 = uVar11;
      while (((*(int *)(*(longlong *)(param_1 + 0x28) + lVar10) != 0 &&
              (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x28) + -8 + lVar10),
              plVar3 != (longlong *)0x0)) &&
             (cVar9 = (**(code **)(*plVar3 + 0x60))(plVar3,puVar13), cVar9 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar5 = uVar14 < 2;
        uVar14 = uVar14 - 1;
        if (bVar5) {
          *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
          if (bVar12) goto LAB_140dd104c;
          goto LAB_140dd0e11;
        }
      }
      uVar11 = uVar14 - 1;
      bVar12 = true;
      if (uVar14 < 2) {
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
LAB_140dd104c:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
      }
    } while( true );
  }
  *(int *)(param_1 + 0x3c) = iVar1;
LAB_140dd0e11:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dd1076 FUN_140dd1076 body=77 status=ok
// SIG undefined FUN_140dd1076(void)

longlong FUN_140dd1076(longlong param_1,longlong param_2)

{
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x478) == '\x01') {
      FUN_14007afac(param_1);
    }
    else if (*(char *)(param_1 + 0x478) == '\x01') {
      FUN_144908ac8(param_1 + 0x230);
      FUN_144908ac8(param_1);
      *(undefined1 *)(param_1 + 0x478) = 0;
    }
  }
  return param_1;
}



// FUNCTION 140dd10c4 FUN_140dd10c4 body=228 status=ok
// SIG undefined FUN_140dd10c4(void)

longlong FUN_140dd10c4(void)

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
  if (DAT_14cb91558 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1463b31ae;
    local_28 = &LAB_14644cc2c;
    local_38 = &LAB_1489f208a;
    local_40 = FUN_145cc9a36;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x8e8;
    FUN_14081cfa3(L"/Script/GbxEnhancedInput",L"GbxEnhancedPlayerInput",&DAT_14cb91558,FUN_146569566
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91558;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd11aa FUN_140dd11aa body=22 status=ok
// SIG undefined FUN_140dd11aa(void)

void FUN_140dd11aa(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_140dd11c8(uVar1);
  return;
}



// FUNCTION 140dd11c8 FUN_140dd11c8 body=176 status=ok
// SIG undefined FUN_140dd11c8(void)

bool FUN_140dd11c8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x100) != '\0') {
    if (((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0xc))))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if ((longlong)*(int *)(lVar3 + 0x1550) != 0) {
        lVar5 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x1548) + lVar5);
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0x40) == *(char *)(param_1 + 0x100))) {
            return true;
          }
          lVar5 = lVar5 + 0x10;
        } while ((longlong)*(int *)(lVar3 + 0x1550) * 0x10 != lVar5);
      }
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return *(int *)(param_1 + 0x28) != 0;
}



// FUNCTION 140dd1280 FUN_140dd1280 body=231 status=ok
// SIG undefined FUN_140dd1280(void)

undefined8 FUN_140dd1280(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [24];
  longlong local_58;
  undefined1 local_48 [4];
  int local_44;
  undefined8 local_40 [2];
  undefined8 *local_30;
  int local_24;
  ulonglong local_20;
  
  lVar1 = DAT_14cb84f20;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb84f20 != 0) {
    puVar4 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar4 = *(undefined4 **)(param_1 + 8);
    }
    FUN_1447a97f4(local_48,puVar4);
    if (0 < local_44) {
      puVar3 = local_40;
      if (0 < local_24) {
        puVar3 = local_30;
      }
      if (local_44 != 1) {
        puVar3 = local_30;
      }
      local_80 = *puVar3;
      local_78 = *(undefined4 *)(puVar3 + 1);
      FUN_1448075d0(local_70);
      uVar2 = FUN_140dd1368(lVar1,local_70,0);
      *(undefined8 *)(param_1 + 0x1b0) = uVar2;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd1368 FUN_140dd1368 body=862 status=ok
// SIG undefined FUN_140dd1368(void)

longlong * FUN_140dd1368(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_68 [40];
  int local_40;
  undefined4 uStack_3c;
  int iStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x300))();
  if (cVar2 == '\0') {
    if (1 < param_2[1]) {
      param_3 = FUN_1400e3c00(param_1,param_2,1);
    }
    if (param_3 != 0) {
      FUN_144a62e5c(&local_40,param_2,*(undefined4 *)(param_3 + 0xc0),
                    *(undefined4 *)(param_3 + 0xc4));
      if (iStack_38 != 0) {
        FUN_144a78877(local_40,iStack_38);
      }
      iVar3 = FUN_144b0847a((longlong *)(param_3 + 0x70));
      if (((iVar3 != -1) &&
          (lVar7 = (longlong)iVar3 * 0x20 + *(longlong *)(param_3 + 0x70),
          plVar6 = (longlong *)(lVar7 + 0x10), plVar6 != (longlong *)0x0 && lVar7 != 0)) &&
         (lVar7 = *plVar6, lVar7 != 0)) {
        plVar11 = *(longlong **)(lVar7 + 0x30);
        goto LAB_140dd1495;
      }
    }
    iVar3 = (int)param_1[0x67];
    local_40 = *param_2;
    if ((longlong)iVar3 == -1) {
      if (((local_40 != 0) && (param_2[1] != 0)) && (local_40 != DAT_14c948000)) {
        puVar5 = &DAT_14c948028;
        goto LAB_140dd13e8;
      }
LAB_140dd153a:
      puVar5 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      local_40 = (int)DAT_14c948618;
    }
    else {
      if (((local_40 == 0) || (iVar1 = param_2[1], iVar1 == 0)) || (local_40 == DAT_14c948000))
      goto LAB_140dd153a;
      piVar13 = param_2 + 2;
      if (0 < param_2[9]) {
        piVar13 = *(int **)(param_2 + 6);
      }
      if (1 < iVar1) {
        piVar13 = *(int **)(param_2 + 6);
      }
      if (iVar1 == 1 && 0 < iVar3) {
        piVar12 = (int *)&DAT_14c948618;
        if (*(int *)((longlong)param_1 + 0x33c) == 1) {
          piVar12 = piVar13;
        }
        local_40 = *piVar12;
        puVar5 = (ulonglong *)(piVar12 + 1);
      }
      else {
        if (iVar1 <= iVar3) goto LAB_140dd153a;
        puVar5 = (ulonglong *)(piVar13 + (longlong)iVar3 * 3 + 1);
        local_40 = piVar13[(longlong)iVar3 * 3];
      }
    }
LAB_140dd13e8:
    uVar9 = *puVar5;
    uStack_3c = (undefined4)uVar9;
    iStack_38 = (int)(uVar9 >> 0x20);
    iVar3 = local_40;
    if (uVar9 >> 0x20 != 0) {
      iVar3 = FUN_144a78877(local_40,uVar9 >> 0x20);
    }
    iVar3 = FUN_1447fa34e(param_1 + 0x5d,iVar3,&local_40);
    if (iVar3 != -1) {
      lVar7 = param_1[0x5d];
      if (((lVar7 + (longlong)iVar3 * 0x20 != 0) &&
          (plVar6 = (longlong *)((longlong)iVar3 * 0x20 + lVar7 + 0x10), plVar6 != (longlong *)0x0))
         && (lVar7 = *plVar6, lVar7 != 0)) {
        plVar6 = *(longlong **)(lVar7 + 0x30);
LAB_140dd1450:
        if (plVar6 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar6 + 8))(plVar6);
          lVar8 = FUN_140902b36();
          if ((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) {
            plVar11 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30) {
              plVar11 = plVar6;
            }
            goto LAB_140dd1495;
          }
        }
        plVar11 = (longlong *)0x0;
        goto LAB_140dd1495;
      }
    }
  }
  else if (param_2[1] == 1) {
    if ((*param_2 == 0) || (*param_2 == DAT_14c948000)) {
      iStack_38 = DAT_14c948620;
      uVar9 = CONCAT44(DAT_14c948618._4_4_,(int)DAT_14c948618);
    }
    else {
      if (param_2[9] < 1) {
        puVar5 = (ulonglong *)(param_2 + 2);
      }
      else {
        puVar5 = *(ulonglong **)(param_2 + 6);
      }
      iStack_38 = (int)puVar5[1];
      uVar9 = *puVar5;
    }
    local_40 = (int)uVar9;
    uStack_3c = (undefined4)(uVar9 >> 0x20);
    uVar9 = uVar9 & 0xffffffff;
    if (iStack_38 != 0) {
      uVar4 = FUN_144a78877(uVar9,iStack_38);
      uVar9 = (ulonglong)uVar4;
    }
    iVar3 = FUN_1448467de(param_1 + 0x3f,uVar9,&local_40);
    if (iVar3 != -1) {
      lVar7 = param_1[0x3f];
      if ((lVar7 + (longlong)iVar3 * 0x70 == 0) ||
         (puVar10 = (undefined8 *)((longlong)iVar3 * 0x70 + lVar7 + 0x10),
         puVar10 == (undefined8 *)0x0)) goto LAB_140dd15ad;
      plVar6 = (longlong *)*puVar10;
      goto LAB_140dd1450;
    }
  }
LAB_140dd15ad:
  FUN_1447325ac(param_2,&local_40,1);
  plVar11 = (longlong *)FUN_1457af754(param_1,&local_40);
LAB_140dd1495:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd16c8 FUN_140dd16c8 body=290 status=ok
// SIG undefined FUN_140dd16c8(void)

void FUN_140dd16c8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  
  FUN_1403d8a98();
  if (*(longlong *)(param_1 + 0xb48) != 0) {
    puVar3 = (undefined8 *)(param_1 + 0xb48);
    lVar7 = FUN_1447210f0(param_1);
    if (lVar7 != 0) {
      lVar7 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar7 + 0x1f0) == 0) {
        puVar8 = (undefined8 *)(lVar7 + 0x458);
      }
      else {
        puVar8 = (undefined8 *)(*(longlong *)(lVar7 + 0x1f0) + 0xf0);
      }
      uVar4 = *puVar8;
      lVar7 = FUN_144a61814(uVar4,puVar3);
      if (lVar7 != 0) {
        FUN_1405a424c(uVar4,*puVar3);
      }
    }
    *puVar3 = 0;
  }
  plVar9 = *(longlong **)(param_1 + 0x980);
  if (plVar9 == (longlong *)0x0) {
LAB_140dd17b6:
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar9[1];
    do {
      if (iVar6 == 0) goto LAB_140dd17b6;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar10 = iVar6 == iVar5;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar10);
  }
  FUN_140ebf9e6(param_1 + 0x3a0);
  if ((*(longlong **)(param_1 + 0xa38) != (longlong *)0x0) &&
     (**(longlong **)(param_1 + 0xa38) != -1)) {
    FUN_14033a7c0();
  }
  FUN_140b3e76a(param_1 + 0xa38);
  FUN_140dd17ea(param_1);
  if (plVar9 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140dd17dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar9 + 0x10))(plVar9);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140dd17ea FUN_140dd17ea body=126 status=ok
// SIG undefined FUN_140dd17ea(void)

void FUN_140dd17ea(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xa18);
  if ((plVar2 != (longlong *)0x0) && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
    uVar1 = *(uint *)((longlong)plVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      (**(code **)(*plVar2 + 0x2b0))();
      (**(code **)(**(longlong **)(param_1 + 0xa18) + 0x4a0))
                (*(longlong **)(param_1 + 0xa18),&DAT_14cadad9c);
      *(undefined8 *)(param_1 + 0xa18) = 0;
    }
  }
  return;
}



// FUNCTION 140dd1868 FUN_140dd1868 body=14813 status=ok
// SIG undefined FUN_140dd1868(void)

/* WARNING: Removing unreachable block (ram,0x000140dd48e1) */
/* WARNING: Removing unreachable block (ram,0x000140dd3ef6) */
/* WARNING: Removing unreachable block (ram,0x000140dd3ba1) */
/* WARNING: Removing unreachable block (ram,0x000140dd4247) */
/* WARNING: Removing unreachable block (ram,0x000140dd4596) */
/* WARNING: Removing unreachable block (ram,0x000140dd3855) */

void FUN_140dd1868(ulonglong param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                  ulonglong *param_5,longlong *param_6)

{
  void *pvVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  code *pcVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  code *pcVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 unaff_R15;
  undefined7 uVar22;
  undefined1 auStack_628 [32];
  uint *local_608;
  undefined1 *local_600;
  byte local_5e9;
  longlong *local_5e8;
  ulonglong local_5e0;
  int local_5d8;
  uint local_5d4;
  ulonglong local_5d0;
  ulonglong local_5c8;
  undefined1 local_5ba [2];
  undefined8 local_5b8;
  undefined1 local_5ad;
  uint local_5ac;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 local_568;
  undefined8 uStack_560;
  longlong local_558;
  undefined8 uStack_550;
  undefined8 local_548;
  longlong lStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined1 local_4f8 [8];
  undefined8 auStack_4f0 [12];
  undefined4 auStack_490 [12];
  undefined8 local_460 [6];
  longlong local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  undefined8 local_3d0;
  undefined1 local_3c0 [48];
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  undefined8 local_330;
  longlong local_320;
  undefined8 local_318;
  longlong local_310;
  undefined8 local_308;
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 local_278;
  undefined1 local_270 [16];
  undefined4 local_260;
  undefined2 local_25a;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined1 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  longlong lStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  ulonglong local_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined8 uStack_1c7;
  undefined2 local_1bf;
  undefined4 local_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined2 local_1a0 [4];
  undefined1 local_198 [216];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 local_88;
  uint local_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_628;
  cVar5 = (**(code **)(*param_3 + 0x400))(param_3);
  uVar22 = (undefined7)((ulonglong)unaff_R15 >> 8);
  if (cVar5 == '\0') {
    if ((param_3[2] == 0) ||
       (cVar5 = *(char *)(*(longlong *)(param_3[2] + 0x28) + 0x245), uVar12 = CONCAT71(uVar22,cVar5)
       , cVar5 == '\0')) goto LAB_140dd18cf;
  }
  else {
    uVar12 = CONCAT71(uVar22,0xff);
  }
  uVar3 = *param_5;
  pcVar14 = *(code **)(*param_3 + 0x38);
  plVar16 = param_3;
  local_5d0 = param_1;
  if (pcVar14 == FUN_144765e18) {
    plVar16 = (longlong *)param_3[9];
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)param_3[8];
      pcVar14 = *(code **)(*plVar16 + 0x420);
      pcVar17 = (code *)&LAB_144b24e8a;
    }
    else {
      pcVar14 = *(code **)(*plVar16 + 0x420);
      pcVar17 = (code *)&LAB_14497e108;
    }
    if (pcVar14 != pcVar17) goto LAB_140dd5224;
  }
  else {
LAB_140dd5224:
    (*pcVar14)(plVar16);
  }
  lVar9 = *param_3;
  if (*(code **)(lVar9 + 0x100) == (code *)&LAB_144b25520) {
    local_5e9 = (*(byte *)(param_3[8] + 0x1d0) & 0x40) >> 6;
  }
  else {
    local_5e9 = (**(code **)(lVar9 + 0x100))(param_3);
    lVar9 = *param_3;
  }
  pcVar14 = *(code **)(lVar9 + 0x38);
  plVar16 = param_3;
  if (pcVar14 == FUN_144765e18) {
    plVar16 = (longlong *)param_3[9];
    if (plVar16 == (longlong *)0x0) {
      plVar16 = (longlong *)param_3[8];
      pcVar14 = *(code **)(*plVar16 + 0x420);
      if (pcVar14 != (code *)&LAB_144b24e8a) goto LAB_140dd523f;
      bVar6 = *(byte *)(plVar16 + 0x30);
    }
    else {
      pcVar14 = *(code **)(*plVar16 + 0x420);
      if (pcVar14 != (code *)&LAB_14497e108) goto LAB_140dd523f;
      bVar6 = *(byte *)(plVar16 + 0x2a);
    }
    bVar6 = (bVar6 & 0x10) >> 4;
  }
  else {
LAB_140dd523f:
    bVar6 = (*pcVar14)(plVar16);
  }
  bVar6 = (byte)(uVar3 >> 0x11) & 1 | bVar6;
  local_5d4 = (uint)bVar6;
  local_5d8 = (((uint)uVar3 >> 0x10 & 1) != 0) + 1;
  if (bVar6 != 0) {
    local_5d8 = 0;
  }
  memset(local_4f8,0,0x98);
  FUN_140dd526c();
  auStack_4f0[DAT_14ca6de28] = &DAT_14ca6dde0;
  auStack_490[DAT_14ca6de28] = 0;
  FUN_140dd5388();
  auStack_4f0[DAT_14ca6df50] = &DAT_14ca6df08;
  auStack_490[DAT_14ca6df50] = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_548 = 0;
  lStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  cVar5 = FUN_14007744c(param_3,local_4f8,*param_4);
  lVar4 = lStack_540;
  lVar9 = local_558;
  uVar3 = DAT_14c9e7548;
  local_5e8 = param_4;
  if (cVar5 != '\0') {
    uVar21 = local_568;
    if (local_558 == 0) {
      uVar21 = 0;
    }
    uVar20 = local_568;
    if (lStack_540 == 0) {
      uVar20 = 0;
    }
    uVar13 = *(ulonglong *)(local_5d0 + 0x48);
    local_578 = 0;
    local_588 = 0;
    uStack_580 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_5e0 = CONCAT44(local_5e0._4_4_,*(undefined4 *)(local_5d0 + 8));
    local_1a0[0] = 0x100;
    local_90 = 0;
    local_88 = 0x300000000;
    local_80 = 0x7fffffff;
    lStack_78 = 0;
    cVar5 = FUN_1406917e6();
    local_318 = uVar21;
    local_308 = uVar20;
    if (cVar5 == '\0') {
      local_5c8 = uVar3;
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      local_230 = 1;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      lStack_210 = 0;
      local_208 = 0;
      lStack_200 = 0;
      local_1f8 = 0xffffffff;
      uStack_1f4 = 0xffffffff;
      uStack_1f0 = 0xffffffff;
      uStack_1ec = 0xffffffff;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1cf = 0;
      uStack_1c8 = 0;
      uStack_1c7 = 0;
      local_1bf = 1;
      local_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      lVar10 = local_5e8[1];
      if (lVar10 == 0) {
        uStack_298 = 0x1100000000;
        (**(code **)(*local_5e8 + 0x48))(0,&local_320);
        lVar10 = FUN_14486d71a(&local_320);
      }
      local_2e0 = ZEXT816(0);
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = ZEXT816(0);
      local_2f0 = ZEXT816(0);
      local_2d0 = ZEXT816(0);
      FUN_144765e6c(&local_248,lVar10);
      puVar15 = &DAT_14c9c0e10;
      if (local_5d8 == 2) {
        puVar15 = &DAT_14c9c0e28;
      }
      puVar18 = &DAT_14c9c0d68;
      if (local_5d8 == 2) {
        puVar18 = &DAT_14c9c0df8;
      }
      if ((char)local_5d4 != '\0') {
        puVar15 = &DAT_14c9c0e40;
      }
      puVar11 = &DAT_14c9c0db0;
      if ((char)local_5d4 == '\0') {
        puVar11 = puVar18;
      }
      if (local_5e9 != 0) {
        puVar11 = puVar15;
      }
      uStack_1e0 = *puVar11;
      local_1e8 = local_5c8;
      local_1d8 = uVar13;
      uVar8 = (**(code **)(*param_3 + 0x490))(param_3);
      uVar3 = local_5e0;
      param_4 = local_5e8;
      uVar19 = (uint)local_5e0;
      if (uVar8 < 4) {
        uVar7 = (undefined1)(0x5010400 >> ((byte)(uVar8 << 3) & 0x1f));
      }
      else {
        uVar7 = 0;
        if ((uVar8 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar7 = (undefined1)(0xa060900000000 >> ((byte)(uVar8 << 3) & 0x3f));
        }
      }
      local_1bf = CONCAT11(uVar7,(undefined1)local_1bf);
      cVar5 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1bf = CONCAT11(local_1bf._1_1_,uVar7);
      FUN_144a1fecc(&local_248,&local_320);
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        uStack_1b8 = (undefined4)local_250;
        uStack_1b4 = (undefined4)((ulonglong)local_250 >> 0x20);
        FUN_14573402d(local_3c0);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *param_4;
          local_460[0] = local_330;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_608 = &local_5ac;
          local_5ac = local_5ac & 0xffff0000;
          local_600 = local_5ba;
          FUN_14573482a(&DAT_14cafccf8,&local_5b8,
                        (int)((ulonglong)local_460[0] >> 0x20) * 0x17 + (int)local_460[0] &
                        0x7fffffff,local_460);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_5b8 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5b8 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar3 & 0xffffffff,lVar9);
          }
        }
        FUN_1457340f6(local_460,&local_248);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *param_4;
          local_5b8 = local_3d0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_608 = (uint *)local_5ba;
          local_5ba = (undefined1  [2])0x0;
          local_600 = &local_5ad;
          FUN_14573482a(&DAT_14cafd9c8,&local_5ac,
                        (int)((ulonglong)local_5b8 >> 0x20) * 0x17 + (int)local_5b8 & 0x7fffffff,
                        &local_5b8);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_5ac * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5ac * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,uVar3 & 0xffffffff,lVar9);
          }
        }
        if (local_418 != 0) {
          FUN_140021284();
        }
        if (local_420 != 0) {
          FUN_140021284();
        }
        if (local_428 != 0) {
          FUN_140021284();
        }
        if (local_430 != 0) {
          FUN_140021284();
        }
        if (local_378 != 0) {
          FUN_140021284();
        }
        if (local_380 != 0) {
          FUN_140021284();
        }
        if (local_388 != 0) {
          FUN_140021284();
        }
        if (local_390 != 0) {
          FUN_140021284();
        }
      }
      local_2d0._12_4_ = 1;
      local_2c0 = 2;
      local_2b8 = 0x19;
      local_2b0 = local_5a8;
      uStack_2a8 = uStack_5a0;
      local_2a0 = local_598;
      uStack_298 = uStack_590;
      local_290 = local_588;
      uStack_288 = uStack_580;
      local_280 = local_578;
      local_260 = 1;
      local_278 = 0;
      local_25a = 0;
      local_270 = ZEXT816(0);
      memcpy(local_198,&local_320,0xd8);
      if (lStack_200 != 0) {
        FUN_140021284();
      }
      if (local_208 != 0) {
        FUN_140021284();
      }
      if (lStack_210 != 0) {
        FUN_140021284();
      }
      if (local_218 != 0) {
        FUN_140021284();
      }
      local_80 = 0;
    }
    else {
      local_2e0 = ZEXT816(0);
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = ZEXT816(0);
      local_2f0 = ZEXT816(0);
      local_2d0 = ZEXT816(0);
      FUN_145734aa6(&local_320,&local_248);
      FUN_1457347b6(&local_c0,&local_248);
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      local_80 = local_80 & 0x80000000;
      param_4 = local_5e8;
      uVar19 = (uint)local_5e0;
    }
    local_1a0[0] = 0x100;
    local_80 = uVar19 & 0x7fffffff | local_80;
    lStack_78 = *param_4;
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      bVar6 = (**(code **)(*param_3 + 0x400))(param_3);
      local_80 = local_80 & 0x7fffffff | (uint)bVar6 << 0x1f;
      FUN_1406918b2();
    }
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_14069191a(param_6,iVar2);
    }
    lVar9 = *param_6;
    pvVar1 = (void *)(lVar9 + (longlong)iVar2 * 0x130);
    memcpy(pvVar1,local_1a0,0xe0);
    *(undefined8 *)(lVar9 + 0x110 + (longlong)iVar2 * 0x130) = 0;
    if (local_90 == 0) {
      *(undefined8 *)((longlong)pvVar1 + 0x100) = local_a0;
      *(undefined8 *)((longlong)pvVar1 + 0x108) = uStack_98;
      *(undefined8 *)((longlong)pvVar1 + 0xf0) = local_b0;
      *(undefined8 *)((longlong)pvVar1 + 0xf8) = uStack_a8;
      *(undefined8 *)((longlong)pvVar1 + 0xe0) = local_c0;
      *(undefined8 *)((longlong)pvVar1 + 0xe8) = uStack_b8;
    }
    *(longlong *)((longlong)pvVar1 + 0x110) = local_90;
    local_90 = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x118) = (undefined4)local_88;
    *(undefined4 *)((longlong)pvVar1 + 0x11c) = local_88._4_4_;
    local_88 = 0x300000000;
    *(ulonglong *)((longlong)pvVar1 + 0x120) = CONCAT44(uStack_7c,local_80);
    *(longlong *)((longlong)pvVar1 + 0x128) = lStack_78;
  }
  memset(local_4f8,0,0x98);
  FUN_140dd54a4();
  auStack_4f0[DAT_14ca6e078] = &DAT_14ca6e030;
  auStack_490[DAT_14ca6e078] = 0;
  FUN_140dd55c0();
  auStack_4f0[DAT_14ca6e1a0] = &DAT_14ca6e158;
  auStack_490[DAT_14ca6e1a0] = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_548 = 0;
  lStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  cVar5 = FUN_14007744c(param_3,local_4f8,*param_4);
  lVar4 = lStack_540;
  lVar9 = local_558;
  uVar3 = local_5d0;
  if (cVar5 != '\0') {
    uVar21 = local_568;
    if (local_558 == 0) {
      uVar21 = 0;
    }
    uVar20 = local_568;
    if (lStack_540 == 0) {
      uVar20 = 0;
    }
    local_5c8 = *(ulonglong *)(local_5d0 + 0x48);
    uVar13 = FUN_140dd5246(uVar12 & 0xffffffff);
    local_588 = 0;
    uStack_580 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_5e0 = CONCAT44(local_5e0._4_4_,*(undefined4 *)(uVar3 + 8));
    local_1a0[0] = 0x100;
    local_90 = 0;
    local_88 = 0x300000000;
    local_80 = 0x7fffffff;
    lStack_78 = 0;
    cVar5 = FUN_1406917e6();
    if (cVar5 == '\0') {
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      local_230 = 1;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      lStack_210 = 0;
      local_208 = 0;
      lStack_200 = 0;
      local_1f8 = 0xffffffff;
      uStack_1f4 = 0xffffffff;
      uStack_1f0 = 0xffffffff;
      uStack_1ec = 0xffffffff;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1cf = 0;
      uStack_1c8 = 0;
      uStack_1c7 = 0;
      local_1bf = 1;
      local_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      lVar10 = local_5e8[1];
      if (lVar10 == 0) {
        uStack_298 = 0x1100000000;
        (**(code **)(*local_5e8 + 0x48))(0,&local_320);
        lVar10 = FUN_14486d71a(&local_320);
      }
      local_2e0 = (undefined1  [16])0x0;
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = (undefined1  [16])0x0;
      local_2f0 = (undefined1  [16])0x0;
      local_2d0 = (undefined1  [16])0x0;
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_144765e6c(&local_248,lVar10);
      puVar15 = &DAT_14c9c0e10;
      if (local_5d8 == 2) {
        puVar15 = &DAT_14c9c0e28;
      }
      puVar18 = &DAT_14c9c0d68;
      if (local_5d8 == 2) {
        puVar18 = &DAT_14c9c0df8;
      }
      if ((char)local_5d4 != '\0') {
        puVar15 = &DAT_14c9c0e40;
      }
      puVar11 = &DAT_14c9c0db0;
      if ((char)local_5d4 == '\0') {
        puVar11 = puVar18;
      }
      if (local_5e9 != 0) {
        puVar11 = puVar15;
      }
      uStack_1e0 = *puVar11;
      local_1d8 = local_5c8;
      local_1e8 = uVar13;
      uVar8 = (**(code **)(*param_3 + 0x490))(param_3);
      uVar3 = local_5e0;
      param_4 = local_5e8;
      uVar19 = (uint)local_5e0;
      if (uVar8 < 4) {
        uVar7 = (undefined1)(0x5010400 >> ((byte)(uVar8 << 3) & 0x1f));
      }
      else {
        uVar7 = 0;
        if ((uVar8 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar7 = (undefined1)(0xa060900000000 >> ((byte)(uVar8 << 3) & 0x3f));
        }
      }
      local_1bf = CONCAT11(uVar7,(undefined1)local_1bf);
      cVar5 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1bf = CONCAT11(local_1bf._1_1_,uVar7);
      FUN_144a1fecc(&local_248,&local_320);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
        uStack_1b8 = (undefined4)local_250;
        uStack_1b4 = (undefined4)((ulonglong)local_250 >> 0x20);
        FUN_14573402d(local_3c0);
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 - 1U < 2)) {
          lVar9 = *param_4;
          local_460[0] = local_330;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_608 = &local_5ac;
          local_5ac = local_5ac & 0xffff0000;
          local_600 = local_5ba;
          FUN_14573482a(&DAT_14cafccf8,&local_5b8,
                        (int)((ulonglong)local_460[0] >> 0x20) * 0x17 + (int)local_460[0] &
                        0x7fffffff,local_460);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_5b8 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5b8 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar3 & 0xffffffff,lVar9);
          }
        }
        FUN_1457340f6(local_460,&local_248);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *param_4;
          local_5b8 = local_3d0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_608 = (uint *)local_5ba;
          local_5ba = (undefined1  [2])0x0;
          local_600 = &local_5ad;
          FUN_14573482a(&DAT_14cafd9c8,&local_5ac,
                        (int)((ulonglong)local_5b8 >> 0x20) * 0x17 + (int)local_5b8 & 0x7fffffff,
                        &local_5b8);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_5ac * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5ac * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,uVar3 & 0xffffffff,lVar9);
          }
        }
        if (local_418 != 0) {
          FUN_140021284();
        }
        if (local_420 != 0) {
          FUN_140021284();
        }
        if (local_428 != 0) {
          FUN_140021284();
        }
        if (local_430 != 0) {
          FUN_140021284();
        }
        if (local_378 != 0) {
          FUN_140021284();
        }
        if (local_380 != 0) {
          FUN_140021284();
        }
        if (local_388 != 0) {
          FUN_140021284();
        }
        if (local_390 != 0) {
          FUN_140021284();
        }
      }
      local_2d0._12_4_ = 2;
      local_2c0 = 0x202;
      local_2b8 = 9;
      local_2b0 = 9;
      uStack_2a8 = local_5a8;
      local_2a0 = uStack_5a0;
      uStack_298 = local_598;
      local_290 = uStack_590;
      uStack_288 = local_588;
      local_280 = uStack_580;
      local_260 = 1;
      local_278 = 0;
      local_25a = 0;
      local_270 = (undefined1  [16])0x0;
      memcpy(local_198,&local_320,0xd8);
      if (lStack_200 != 0) {
        FUN_140021284();
      }
      if (local_208 != 0) {
        FUN_140021284();
      }
      if (lStack_210 != 0) {
        FUN_140021284();
      }
      if (local_218 != 0) {
        FUN_140021284();
      }
      local_80 = 0;
    }
    else {
      local_2e0 = ZEXT816(0);
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = ZEXT816(0);
      local_2f0 = ZEXT816(0);
      local_2d0 = ZEXT816(0);
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_145734aa6(&local_320,&local_248);
      FUN_1457347b6(&local_c0,&local_248);
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      local_80 = local_80 & 0x80000000;
      param_4 = local_5e8;
      uVar19 = (uint)local_5e0;
    }
    local_1a0[0] = 0x100;
    local_80 = uVar19 & 0x7fffffff | local_80;
    lStack_78 = *param_4;
    if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
       (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
      bVar6 = (**(code **)(*param_3 + 0x400))(param_3);
      local_80 = local_80 & 0x7fffffff | (uint)bVar6 << 0x1f;
      FUN_1406918b2();
    }
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_14069191a(param_6,iVar2);
    }
    lVar9 = *param_6;
    pvVar1 = (void *)(lVar9 + (longlong)iVar2 * 0x130);
    memcpy(pvVar1,local_1a0,0xe0);
    *(undefined8 *)(lVar9 + 0x110 + (longlong)iVar2 * 0x130) = 0;
    if (local_90 == 0) {
      *(undefined8 *)((longlong)pvVar1 + 0x100) = local_a0;
      *(undefined8 *)((longlong)pvVar1 + 0x108) = uStack_98;
      *(undefined8 *)((longlong)pvVar1 + 0xf0) = local_b0;
      *(undefined8 *)((longlong)pvVar1 + 0xf8) = uStack_a8;
      *(undefined8 *)((longlong)pvVar1 + 0xe0) = local_c0;
      *(undefined8 *)((longlong)pvVar1 + 0xe8) = uStack_b8;
    }
    *(longlong *)((longlong)pvVar1 + 0x110) = local_90;
    local_90 = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x118) = (undefined4)local_88;
    *(undefined4 *)((longlong)pvVar1 + 0x11c) = local_88._4_4_;
    local_88 = 0x300000000;
    *(ulonglong *)((longlong)pvVar1 + 0x120) = CONCAT44(uStack_7c,local_80);
    *(longlong *)((longlong)pvVar1 + 0x128) = lStack_78;
  }
  memset(local_4f8,0,0x98);
  FUN_14049daba();
  auStack_4f0[DAT_14ca6e2c8] = &DAT_14ca6e280;
  auStack_490[DAT_14ca6e2c8] = 0;
  FUN_14049dbd6();
  auStack_4f0[DAT_14ca6e3f0] = &DAT_14ca6e3a8;
  auStack_490[DAT_14ca6e3f0] = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_548 = 0;
  lStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  cVar5 = FUN_14007744c(param_3,local_4f8,*param_4);
  lVar4 = lStack_540;
  lVar9 = local_558;
  uVar3 = local_5d0;
  if (cVar5 != '\0') {
    uVar21 = local_568;
    if (local_558 == 0) {
      uVar21 = 0;
    }
    uVar20 = local_568;
    if (lStack_540 == 0) {
      uVar20 = 0;
    }
    local_5e0 = *(ulonglong *)(local_5d0 + 0x48);
    uVar12 = FUN_14049da94(uVar12 & 0xffffffff);
    local_588 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    uVar19 = *(uint *)(uVar3 + 8);
    local_1a0[0] = 0x100;
    local_90 = 0;
    local_88 = 0x300000000;
    local_80 = 0x7fffffff;
    lStack_78 = 0;
    cVar5 = FUN_1406917e6();
    if (cVar5 == '\0') {
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      local_230 = 1;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      lStack_210 = 0;
      local_208 = 0;
      lStack_200 = 0;
      local_1f8 = 0xffffffff;
      uStack_1f4 = 0xffffffff;
      uStack_1f0 = 0xffffffff;
      uStack_1ec = 0xffffffff;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1cf = 0;
      uStack_1c8 = 0;
      uStack_1c7 = 0;
      local_1bf = 1;
      local_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      lVar10 = local_5e8[1];
      if (lVar10 == 0) {
        uStack_298 = 0x1100000000;
        (**(code **)(*local_5e8 + 0x48))(0,&local_320);
        lVar10 = FUN_14486d71a(&local_320);
      }
      local_2e0 = ZEXT816(0);
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = ZEXT816(0);
      local_2f0 = ZEXT816(0);
      local_2d0 = ZEXT816(0);
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_144765e6c(&local_248,lVar10);
      puVar15 = &DAT_14c9c0e10;
      if (local_5d8 == 2) {
        puVar15 = &DAT_14c9c0e28;
      }
      puVar18 = &DAT_14c9c0d68;
      if (local_5d8 == 2) {
        puVar18 = &DAT_14c9c0df8;
      }
      if ((char)local_5d4 != '\0') {
        puVar15 = &DAT_14c9c0e40;
      }
      puVar11 = &DAT_14c9c0db0;
      if ((char)local_5d4 == '\0') {
        puVar11 = puVar18;
      }
      if (local_5e9 != 0) {
        puVar11 = puVar15;
      }
      uStack_1e0 = *puVar11;
      local_1d8 = local_5e0;
      local_1e8 = uVar12;
      uVar8 = (**(code **)(*param_3 + 0x490))(param_3);
      param_4 = local_5e8;
      if (uVar8 < 4) {
        uVar7 = (undefined1)(0x5010400 >> ((byte)(uVar8 << 3) & 0x1f));
      }
      else {
        uVar7 = 0;
        if ((uVar8 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar7 = (undefined1)(0xa060900000000 >> ((byte)(uVar8 << 3) & 0x3f));
        }
      }
      local_1bf = CONCAT11(uVar7,(undefined1)local_1bf);
      cVar5 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1bf = CONCAT11(local_1bf._1_1_,uVar7);
      FUN_144a1fecc(&local_248,&local_320);
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        uStack_1b8 = (undefined4)local_250;
        uStack_1b4 = (undefined4)((ulonglong)local_250 >> 0x20);
        FUN_14573402d(local_3c0);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *param_4;
          local_460[0] = local_330;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_608 = &local_5ac;
          local_5ac = local_5ac & 0xffff0000;
          local_600 = local_5ba;
          FUN_14573482a(&DAT_14cafccf8,&local_5b8,
                        (int)((ulonglong)local_460[0] >> 0x20) * 0x17 + (int)local_460[0] &
                        0x7fffffff,local_460);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_5b8 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5b8 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar19,lVar9);
          }
        }
        FUN_1457340f6(local_460,&local_248);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *param_4;
          local_5b8 = local_3d0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_608 = (uint *)local_5ba;
          local_5ba = (undefined1  [2])0x0;
          local_600 = &local_5ad;
          FUN_14573482a(&DAT_14cafd9c8,&local_5ac,
                        (int)((ulonglong)local_5b8 >> 0x20) * 0x17 + (int)local_5b8 & 0x7fffffff,
                        &local_5b8);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_5ac * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5ac * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,uVar19,lVar9);
          }
        }
        if (local_418 != 0) {
          FUN_140021284();
        }
        if (local_420 != 0) {
          FUN_140021284();
        }
        if (local_428 != 0) {
          FUN_140021284();
        }
        if (local_430 != 0) {
          FUN_140021284();
        }
        if (local_378 != 0) {
          FUN_140021284();
        }
        if (local_380 != 0) {
          FUN_140021284();
        }
        if (local_388 != 0) {
          FUN_140021284();
        }
        if (local_390 != 0) {
          FUN_140021284();
        }
      }
      local_2d0._12_4_ = 3;
      local_2c0 = 0x20202;
      local_2b8 = 0x19;
      local_2b0 = 9;
      uStack_2a8 = 9;
      local_2a0 = local_5a8;
      uStack_298 = uStack_5a0;
      local_290 = local_598;
      uStack_288 = uStack_590;
      local_280 = local_588;
      local_260 = 1;
      local_278 = 0;
      local_25a = 0;
      local_270 = (undefined1  [16])0x0;
      memcpy(local_198,&local_320,0xd8);
      if (lStack_200 != 0) {
        FUN_140021284();
      }
      if (local_208 != 0) {
        FUN_140021284();
      }
      if (lStack_210 != 0) {
        FUN_140021284();
      }
      if (local_218 != 0) {
        FUN_140021284();
      }
      local_80 = 0;
    }
    else {
      local_2e0 = (undefined1  [16])0x0;
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = (undefined1  [16])0x0;
      local_2f0 = (undefined1  [16])0x0;
      local_2d0 = (undefined1  [16])0x0;
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_145734aa6(&local_320,&local_248);
      FUN_1457347b6(&local_c0,&local_248);
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      local_80 = local_80 & 0x80000000;
      param_4 = local_5e8;
    }
    local_1a0[0] = 0x100;
    local_80 = uVar19 & 0x7fffffff | local_80;
    lStack_78 = *param_4;
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      bVar6 = (**(code **)(*param_3 + 0x400))(param_3);
      local_80 = local_80 & 0x7fffffff | (uint)bVar6 << 0x1f;
      FUN_1406918b2();
    }
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_14069191a(param_6,iVar2);
    }
    lVar9 = *param_6;
    pvVar1 = (void *)(lVar9 + (longlong)iVar2 * 0x130);
    memcpy(pvVar1,local_1a0,0xe0);
    *(undefined8 *)(lVar9 + 0x110 + (longlong)iVar2 * 0x130) = 0;
    if (local_90 == 0) {
      *(undefined8 *)((longlong)pvVar1 + 0x100) = local_a0;
      *(undefined8 *)((longlong)pvVar1 + 0x108) = uStack_98;
      *(undefined8 *)((longlong)pvVar1 + 0xf0) = local_b0;
      *(undefined8 *)((longlong)pvVar1 + 0xf8) = uStack_a8;
      *(undefined8 *)((longlong)pvVar1 + 0xe0) = local_c0;
      *(undefined8 *)((longlong)pvVar1 + 0xe8) = uStack_b8;
    }
    *(longlong *)((longlong)pvVar1 + 0x110) = local_90;
    local_90 = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x118) = (undefined4)local_88;
    *(undefined4 *)((longlong)pvVar1 + 0x11c) = local_88._4_4_;
    local_88 = 0x300000000;
    *(ulonglong *)((longlong)pvVar1 + 0x120) = CONCAT44(uStack_7c,local_80);
    *(longlong *)((longlong)pvVar1 + 0x128) = lStack_78;
  }
  memset(local_4f8,0,0x98);
  FUN_140dd56dc();
  auStack_4f0[DAT_14ca6e518] = &DAT_14ca6e4d0;
  auStack_490[DAT_14ca6e518] = 0;
  FUN_140dd57f8();
  auStack_4f0[DAT_14ca6e640] = &DAT_14ca6e5f8;
  auStack_490[DAT_14ca6e640] = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_548 = 0;
  lStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  cVar5 = FUN_14007744c(param_3,local_4f8,*param_4);
  lVar4 = lStack_540;
  lVar9 = local_558;
  uVar12 = DAT_14ca716f8;
  if (cVar5 != '\0') {
    uVar21 = local_568;
    if (local_558 == 0) {
      uVar21 = 0;
    }
    uVar20 = local_568;
    if (lStack_540 == 0) {
      uVar20 = 0;
    }
    uVar3 = *(ulonglong *)(local_5d0 + 0x48);
    local_578 = 0;
    local_588 = 0;
    uStack_580 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_5e0 = CONCAT44(local_5e0._4_4_,*(undefined4 *)(local_5d0 + 8));
    local_1a0[0] = 0x100;
    local_90 = 0;
    local_88 = 0x300000000;
    local_80 = 0x7fffffff;
    lStack_78 = 0;
    cVar5 = FUN_1406917e6();
    if (cVar5 == '\0') {
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      local_230 = 1;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      lStack_210 = 0;
      local_208 = 0;
      lStack_200 = 0;
      local_1f8 = 0xffffffff;
      uStack_1f4 = 0xffffffff;
      uStack_1f0 = 0xffffffff;
      uStack_1ec = 0xffffffff;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1cf = 0;
      uStack_1c8 = 0;
      uStack_1c7 = 0;
      local_1bf = 1;
      local_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      lVar10 = local_5e8[1];
      if (lVar10 == 0) {
        uStack_298 = 0x1100000000;
        (**(code **)(*local_5e8 + 0x48))(0,&local_320);
        lVar10 = FUN_14486d71a(&local_320);
      }
      local_2e0 = (undefined1  [16])0x0;
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = (undefined1  [16])0x0;
      local_2f0 = (undefined1  [16])0x0;
      local_2d0 = (undefined1  [16])0x0;
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_144765e6c(&local_248,lVar10);
      puVar15 = &DAT_14c9c0e10;
      if (local_5d8 == 2) {
        puVar15 = &DAT_14c9c0e28;
      }
      puVar18 = &DAT_14c9c0d68;
      if (local_5d8 == 2) {
        puVar18 = &DAT_14c9c0df8;
      }
      if ((char)local_5d4 != '\0') {
        puVar15 = &DAT_14c9c0e40;
      }
      puVar11 = &DAT_14c9c0db0;
      if ((char)local_5d4 == '\0') {
        puVar11 = puVar18;
      }
      if (local_5e9 != 0) {
        puVar11 = puVar15;
      }
      uStack_1e0 = *puVar11;
      local_1e8 = uVar12;
      local_1d8 = uVar3;
      uVar8 = (**(code **)(*param_3 + 0x490))(param_3);
      uVar12 = local_5e0;
      param_4 = local_5e8;
      uVar19 = (uint)local_5e0;
      if (uVar8 < 4) {
        uVar7 = (undefined1)(0x5010400 >> ((byte)(uVar8 << 3) & 0x1f));
      }
      else {
        uVar7 = 0;
        if ((uVar8 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar7 = (undefined1)(0xa060900000000 >> ((byte)(uVar8 << 3) & 0x3f));
        }
      }
      local_1bf = CONCAT11(uVar7,(undefined1)local_1bf);
      cVar5 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1bf = CONCAT11(local_1bf._1_1_,uVar7);
      FUN_144a1fecc(&local_248,&local_320);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
        uStack_1b8 = (undefined4)local_250;
        uStack_1b4 = (undefined4)((ulonglong)local_250 >> 0x20);
        FUN_14573402d(local_3c0);
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 - 1U < 2)) {
          lVar9 = *param_4;
          local_460[0] = local_330;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_608 = &local_5ac;
          local_5ac = local_5ac & 0xffff0000;
          local_600 = local_5ba;
          FUN_14573482a(&DAT_14cafccf8,&local_5b8,
                        (int)((ulonglong)local_460[0] >> 0x20) * 0x17 + (int)local_460[0] &
                        0x7fffffff,local_460);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_5b8 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5b8 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar12 & 0xffffffff,lVar9);
          }
        }
        FUN_1457340f6(local_460,&local_248);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *param_4;
          local_5b8 = local_3d0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_608 = (uint *)local_5ba;
          local_5ba = (undefined1  [2])0x0;
          local_600 = &local_5ad;
          FUN_14573482a(&DAT_14cafd9c8,&local_5ac,
                        (int)((ulonglong)local_5b8 >> 0x20) * 0x17 + (int)local_5b8 & 0x7fffffff,
                        &local_5b8);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_5ac * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5ac * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,uVar12 & 0xffffffff,lVar9);
          }
        }
        if (local_418 != 0) {
          FUN_140021284();
        }
        if (local_420 != 0) {
          FUN_140021284();
        }
        if (local_428 != 0) {
          FUN_140021284();
        }
        if (local_430 != 0) {
          FUN_140021284();
        }
        if (local_378 != 0) {
          FUN_140021284();
        }
        if (local_380 != 0) {
          FUN_140021284();
        }
        if (local_388 != 0) {
          FUN_140021284();
        }
        if (local_390 != 0) {
          FUN_140021284();
        }
      }
      local_2d0._12_4_ = 1;
      local_2c0 = 2;
      local_2b8 = 0x19;
      local_2b0 = local_5a8;
      uStack_2a8 = uStack_5a0;
      local_2a0 = local_598;
      uStack_298 = uStack_590;
      local_290 = local_588;
      uStack_288 = uStack_580;
      local_280 = local_578;
      local_260 = 1;
      local_278 = 0;
      local_25a = 0;
      local_270 = (undefined1  [16])0x0;
      memcpy(local_198,&local_320,0xd8);
      if (lStack_200 != 0) {
        FUN_140021284();
      }
      if (local_208 != 0) {
        FUN_140021284();
      }
      if (lStack_210 != 0) {
        FUN_140021284();
      }
      if (local_218 != 0) {
        FUN_140021284();
      }
      local_80 = 0;
    }
    else {
      local_2e0 = ZEXT816(0);
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = ZEXT816(0);
      local_2f0 = ZEXT816(0);
      local_2d0 = ZEXT816(0);
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_145734aa6(&local_320,&local_248);
      FUN_1457347b6(&local_c0,&local_248);
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      local_80 = local_80 & 0x80000000;
      param_4 = local_5e8;
      uVar19 = (uint)local_5e0;
    }
    local_1a0[0] = 0x100;
    local_80 = uVar19 & 0x7fffffff | local_80;
    lStack_78 = *param_4;
    if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
       (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
      bVar6 = (**(code **)(*param_3 + 0x400))(param_3);
      local_80 = local_80 & 0x7fffffff | (uint)bVar6 << 0x1f;
      FUN_1406918b2();
    }
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_14069191a(param_6,iVar2);
    }
    lVar9 = *param_6;
    pvVar1 = (void *)(lVar9 + (longlong)iVar2 * 0x130);
    memcpy(pvVar1,local_1a0,0xe0);
    *(undefined8 *)(lVar9 + 0x110 + (longlong)iVar2 * 0x130) = 0;
    if (local_90 == 0) {
      *(undefined8 *)((longlong)pvVar1 + 0x100) = local_a0;
      *(undefined8 *)((longlong)pvVar1 + 0x108) = uStack_98;
      *(undefined8 *)((longlong)pvVar1 + 0xf0) = local_b0;
      *(undefined8 *)((longlong)pvVar1 + 0xf8) = uStack_a8;
      *(undefined8 *)((longlong)pvVar1 + 0xe0) = local_c0;
      *(undefined8 *)((longlong)pvVar1 + 0xe8) = uStack_b8;
    }
    *(longlong *)((longlong)pvVar1 + 0x110) = local_90;
    local_90 = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x118) = (undefined4)local_88;
    *(undefined4 *)((longlong)pvVar1 + 0x11c) = local_88._4_4_;
    local_88 = 0x300000000;
    *(ulonglong *)((longlong)pvVar1 + 0x120) = CONCAT44(uStack_7c,local_80);
    *(longlong *)((longlong)pvVar1 + 0x128) = lStack_78;
  }
  memset(local_4f8,0,0x98);
  FUN_14049dcf2();
  auStack_4f0[DAT_14ca6e768] = &DAT_14ca6e720;
  auStack_490[DAT_14ca6e768] = 0;
  FUN_14049de0e();
  auStack_4f0[DAT_14ca6e890] = &DAT_14ca6e848;
  auStack_490[DAT_14ca6e890] = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_548 = 0;
  lStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  cVar5 = FUN_14007744c(param_3,local_4f8,*param_4);
  lVar4 = lStack_540;
  lVar9 = local_558;
  uVar12 = DAT_14ca71710;
  if (cVar5 != '\0') {
    uVar21 = local_568;
    if (local_558 == 0) {
      uVar21 = 0;
    }
    uVar20 = local_568;
    if (lStack_540 == 0) {
      uVar20 = 0;
    }
    uVar3 = *(ulonglong *)(local_5d0 + 0x48);
    local_578 = 0;
    local_588 = 0;
    uStack_580 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_5e0 = CONCAT44(local_5e0._4_4_,*(undefined4 *)(local_5d0 + 8));
    local_1a0[0] = 0x100;
    local_90 = 0;
    local_88 = 0x300000000;
    local_80 = 0x7fffffff;
    lStack_78 = 0;
    cVar5 = FUN_1406917e6();
    if (cVar5 == '\0') {
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      local_230 = 1;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      lStack_210 = 0;
      local_208 = 0;
      lStack_200 = 0;
      local_1f8 = 0xffffffff;
      uStack_1f4 = 0xffffffff;
      uStack_1f0 = 0xffffffff;
      uStack_1ec = 0xffffffff;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1cf = 0;
      uStack_1c8 = 0;
      uStack_1c7 = 0;
      local_1bf = 1;
      local_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      lVar10 = local_5e8[1];
      if (lVar10 == 0) {
        uStack_298 = 0x1100000000;
        (**(code **)(*local_5e8 + 0x48))(0,&local_320);
        lVar10 = FUN_14486d71a(&local_320);
      }
      local_2e0 = ZEXT816(0);
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = ZEXT816(0);
      local_2f0 = ZEXT816(0);
      local_2d0 = ZEXT816(0);
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_144765e6c(&local_248,lVar10);
      puVar15 = &DAT_14c9c0e10;
      if (local_5d8 == 2) {
        puVar15 = &DAT_14c9c0e28;
      }
      puVar18 = &DAT_14c9c0d68;
      if (local_5d8 == 2) {
        puVar18 = &DAT_14c9c0df8;
      }
      if ((char)local_5d4 != '\0') {
        puVar15 = &DAT_14c9c0e40;
      }
      puVar11 = &DAT_14c9c0db0;
      if ((char)local_5d4 == '\0') {
        puVar11 = puVar18;
      }
      if (local_5e9 != 0) {
        puVar11 = puVar15;
      }
      uStack_1e0 = *puVar11;
      local_1e8 = uVar12;
      local_1d8 = uVar3;
      uVar8 = (**(code **)(*param_3 + 0x490))(param_3);
      uVar12 = local_5e0;
      param_4 = local_5e8;
      uVar19 = (uint)local_5e0;
      if (uVar8 < 4) {
        uVar7 = (undefined1)(0x5010400 >> ((byte)(uVar8 << 3) & 0x1f));
      }
      else {
        uVar7 = 0;
        if ((uVar8 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar7 = (undefined1)(0xa060900000000 >> ((byte)(uVar8 << 3) & 0x3f));
        }
      }
      local_1bf = CONCAT11(uVar7,(undefined1)local_1bf);
      cVar5 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1bf = CONCAT11(local_1bf._1_1_,uVar7);
      FUN_144a1fecc(&local_248,&local_320);
      if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
         (DAT_14cafb358 == 2)) {
        uStack_1b8 = (undefined4)local_250;
        uStack_1b4 = (undefined4)((ulonglong)local_250 >> 0x20);
        FUN_14573402d(local_3c0);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *param_4;
          local_460[0] = local_330;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_608 = &local_5ac;
          local_5ac = local_5ac & 0xffff0000;
          local_600 = local_5ba;
          FUN_14573482a(&DAT_14cafccf8,&local_5b8,
                        (int)((ulonglong)local_460[0] >> 0x20) * 0x17 + (int)local_460[0] &
                        0x7fffffff,local_460);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_5b8 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5b8 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar12 & 0xffffffff,lVar9);
          }
        }
        FUN_1457340f6(local_460,&local_248);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *param_4;
          local_5b8 = local_3d0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_608 = (uint *)local_5ba;
          local_5ba = (undefined1  [2])0x0;
          local_600 = &local_5ad;
          FUN_14573482a(&DAT_14cafd9c8,&local_5ac,
                        (int)((ulonglong)local_5b8 >> 0x20) * 0x17 + (int)local_5b8 & 0x7fffffff,
                        &local_5b8);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_5ac * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5ac * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,uVar12 & 0xffffffff,lVar9);
          }
        }
        if (local_418 != 0) {
          FUN_140021284();
        }
        if (local_420 != 0) {
          FUN_140021284();
        }
        if (local_428 != 0) {
          FUN_140021284();
        }
        if (local_430 != 0) {
          FUN_140021284();
        }
        if (local_378 != 0) {
          FUN_140021284();
        }
        if (local_380 != 0) {
          FUN_140021284();
        }
        if (local_388 != 0) {
          FUN_140021284();
        }
        if (local_390 != 0) {
          FUN_140021284();
        }
      }
      local_2d0._12_4_ = 1;
      local_2c0 = 4;
      local_2b8 = 9;
      local_2b0 = local_5a8;
      uStack_2a8 = uStack_5a0;
      local_2a0 = local_598;
      uStack_298 = uStack_590;
      local_290 = local_588;
      uStack_288 = uStack_580;
      local_280 = local_578;
      local_260 = 1;
      local_278 = 0;
      local_25a = 0;
      local_270 = (undefined1  [16])0x0;
      memcpy(local_198,&local_320,0xd8);
      if (lStack_200 != 0) {
        FUN_140021284();
      }
      if (local_208 != 0) {
        FUN_140021284();
      }
      if (lStack_210 != 0) {
        FUN_140021284();
      }
      if (local_218 != 0) {
        FUN_140021284();
      }
      local_80 = 0;
    }
    else {
      local_2e0 = (undefined1  [16])0x0;
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = (undefined1  [16])0x0;
      local_2f0 = (undefined1  [16])0x0;
      local_2d0 = (undefined1  [16])0x0;
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_145734aa6(&local_320,&local_248);
      FUN_1457347b6(&local_c0,&local_248);
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      local_80 = local_80 & 0x80000000;
      param_4 = local_5e8;
      uVar19 = (uint)local_5e0;
    }
    local_1a0[0] = 0x100;
    local_80 = uVar19 & 0x7fffffff | local_80;
    lStack_78 = *param_4;
    if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
       (DAT_14cafb358 == 2)) {
      bVar6 = (**(code **)(*param_3 + 0x400))(param_3);
      local_80 = local_80 & 0x7fffffff | (uint)bVar6 << 0x1f;
      FUN_1406918b2();
    }
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_14069191a(param_6,iVar2);
    }
    lVar9 = *param_6;
    pvVar1 = (void *)(lVar9 + (longlong)iVar2 * 0x130);
    memcpy(pvVar1,local_1a0,0xe0);
    *(undefined8 *)(lVar9 + 0x110 + (longlong)iVar2 * 0x130) = 0;
    if (local_90 == 0) {
      *(undefined8 *)((longlong)pvVar1 + 0x100) = local_a0;
      *(undefined8 *)((longlong)pvVar1 + 0x108) = uStack_98;
      *(undefined8 *)((longlong)pvVar1 + 0xf0) = local_b0;
      *(undefined8 *)((longlong)pvVar1 + 0xf8) = uStack_a8;
      *(undefined8 *)((longlong)pvVar1 + 0xe0) = local_c0;
      *(undefined8 *)((longlong)pvVar1 + 0xe8) = uStack_b8;
    }
    *(longlong *)((longlong)pvVar1 + 0x110) = local_90;
    local_90 = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x118) = (undefined4)local_88;
    *(undefined4 *)((longlong)pvVar1 + 0x11c) = local_88._4_4_;
    local_88 = 0x300000000;
    *(ulonglong *)((longlong)pvVar1 + 0x120) = CONCAT44(uStack_7c,local_80);
    *(longlong *)((longlong)pvVar1 + 0x128) = lStack_78;
  }
  memset(local_4f8,0,0x98);
  FUN_140dd5914();
  auStack_4f0[DAT_14ca6e9b8] = &DAT_14ca6e970;
  auStack_490[DAT_14ca6e9b8] = 0;
  FUN_140dd5a30();
  auStack_4f0[DAT_14ca6eae0] = &DAT_14ca6ea98;
  auStack_490[DAT_14ca6eae0] = 0;
  local_508 = 0;
  uStack_500 = 0;
  local_518 = 0;
  uStack_510 = 0;
  local_528 = 0;
  uStack_520 = 0;
  local_538 = 0;
  uStack_530 = 0;
  local_548 = 0;
  lStack_540 = 0;
  local_558 = 0;
  uStack_550 = 0;
  local_568 = 0;
  uStack_560 = 0;
  cVar5 = FUN_14007744c(param_3,local_4f8,*param_4);
  lVar4 = lStack_540;
  lVar9 = local_558;
  uVar12 = DAT_14ca71728;
  if (cVar5 != '\0') {
    uVar21 = local_568;
    if (local_558 == 0) {
      uVar21 = 0;
    }
    uVar20 = local_568;
    if (lStack_540 == 0) {
      uVar20 = 0;
    }
    uVar3 = *(ulonglong *)(local_5d0 + 0x48);
    local_578 = 0;
    local_588 = 0;
    uStack_580 = 0;
    local_598 = 0;
    uStack_590 = 0;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_5d0 = CONCAT44(local_5d0._4_4_,*(undefined4 *)(local_5d0 + 8));
    local_1a0[0] = 0x100;
    local_90 = 0;
    local_88 = 0x300000000;
    local_80 = 0x7fffffff;
    lStack_78 = 0;
    cVar5 = FUN_1406917e6();
    if (cVar5 == '\0') {
      local_248 = 0;
      uStack_240 = 0;
      local_238 = 0;
      local_230 = 1;
      local_228 = 0;
      uStack_220 = 0;
      local_218 = 0;
      lStack_210 = 0;
      local_208 = 0;
      lStack_200 = 0;
      local_1f8 = 0xffffffff;
      uStack_1f4 = 0xffffffff;
      uStack_1f0 = 0xffffffff;
      uStack_1ec = 0xffffffff;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = 0;
      uStack_1d0 = 0;
      uStack_1cf = 0;
      uStack_1c8 = 0;
      uStack_1c7 = 0;
      local_1bf = 1;
      local_1bc = 0;
      uStack_1b8 = 0;
      uStack_1b4 = 0;
      uStack_1b0 = 0;
      lVar10 = local_5e8[1];
      if (lVar10 == 0) {
        uStack_298 = 0x1100000000;
        (**(code **)(*local_5e8 + 0x48))(0,&local_320);
        lVar10 = FUN_14486d71a(&local_320);
      }
      local_2e0 = (undefined1  [16])0x0;
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = (undefined1  [16])0x0;
      local_2f0 = (undefined1  [16])0x0;
      local_2d0 = (undefined1  [16])0x0;
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_144765e6c(&local_248,lVar10);
      puVar15 = &DAT_14c9c0e10;
      if (local_5d8 == 2) {
        puVar15 = &DAT_14c9c0e28;
      }
      puVar18 = &DAT_14c9c0d68;
      if (local_5d8 == 2) {
        puVar18 = &DAT_14c9c0df8;
      }
      if ((char)local_5d4 != '\0') {
        puVar15 = &DAT_14c9c0e40;
      }
      puVar11 = &DAT_14c9c0db0;
      if ((char)local_5d4 == '\0') {
        puVar11 = puVar18;
      }
      if (local_5e9 != 0) {
        puVar11 = puVar15;
      }
      uStack_1e0 = *puVar11;
      local_1e8 = uVar12;
      local_1d8 = uVar3;
      uVar8 = (**(code **)(*param_3 + 0x490))(param_3);
      uVar12 = local_5d0;
      plVar16 = local_5e8;
      uVar19 = (uint)local_5d0;
      if (uVar8 < 4) {
        uVar7 = (undefined1)(0x5010400 >> ((byte)(uVar8 << 3) & 0x1f));
      }
      else {
        uVar7 = 0;
        if ((uVar8 < 7) && (DAT_14ca84f33 != '\0')) {
          uVar7 = (undefined1)(0xa060900000000 >> ((byte)(uVar8 << 3) & 0x3f));
        }
      }
      local_1bf = CONCAT11(uVar7,(undefined1)local_1bf);
      cVar5 = (**(code **)(*param_3 + 0x4a0))(param_3);
      if (cVar5 == '\0') {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_144a12f44(DAT_14ca85550);
      }
      local_1bf = CONCAT11(local_1bf._1_1_,uVar7);
      FUN_144a1fecc(&local_248,&local_320);
      if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
         (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
        uStack_1b8 = (undefined4)local_250;
        uStack_1b4 = (undefined4)((ulonglong)local_250 >> 0x20);
        FUN_14573402d(local_3c0);
        if ((((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) && ((DAT_14ca84f5a & 1) != 0)) &&
           (DAT_14cafb358 - 1U < 2)) {
          lVar9 = *plVar16;
          local_460[0] = local_330;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          local_608 = &local_5ac;
          local_5ac = local_5ac & 0xffff0000;
          local_600 = local_5ba;
          FUN_14573482a(&DAT_14cafccf8,&local_5b8,
                        (int)((ulonglong)local_460[0] >> 0x20) * 0x17 + (int)local_460[0] &
                        0x7fffffff,local_460);
          if (*(char *)(DAT_14cafccf8 + 8 + (longlong)(int)local_5b8 * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5b8 * 0x10 + DAT_14cafccf8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafccd0);
            FUN_140691a2a(&DAT_14cafc0a0,uVar12 & 0xffffffff,lVar9);
          }
        }
        FUN_1457340f6(local_460,&local_248);
        if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
           (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 - 1U < 2)))) {
          lVar9 = *plVar16;
          local_5b8 = local_3d0;
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          local_608 = (uint *)local_5ba;
          local_5ba = (undefined1  [2])0x0;
          local_600 = &local_5ad;
          FUN_14573482a(&DAT_14cafd9c8,&local_5ac,
                        (int)((ulonglong)local_5b8 >> 0x20) * 0x17 + (int)local_5b8 & 0x7fffffff,
                        &local_5b8);
          if (*(char *)(DAT_14cafd9c8 + 8 + (longlong)(int)local_5ac * 0x10) == '\x01') {
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
          }
          else {
            *(undefined1 *)((longlong)(int)local_5ac * 0x10 + DAT_14cafd9c8 + 8) = 1;
            LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cafd9a0);
            FUN_140691a2a(&DAT_14cafcd70,uVar12 & 0xffffffff,lVar9);
          }
        }
        if (local_418 != 0) {
          FUN_140021284();
        }
        if (local_420 != 0) {
          FUN_140021284();
        }
        if (local_428 != 0) {
          FUN_140021284();
        }
        if (local_430 != 0) {
          FUN_140021284();
        }
        if (local_378 != 0) {
          FUN_140021284();
        }
        if (local_380 != 0) {
          FUN_140021284();
        }
        if (local_388 != 0) {
          FUN_140021284();
        }
        if (local_390 != 0) {
          FUN_140021284();
        }
      }
      local_2d0._12_4_ = 1;
      local_2c0 = 4;
      local_2b8 = 9;
      local_2b0 = local_5a8;
      uStack_2a8 = uStack_5a0;
      local_2a0 = local_598;
      uStack_298 = uStack_590;
      local_290 = local_588;
      uStack_288 = uStack_580;
      local_280 = local_578;
      local_260 = 1;
      local_278 = 0;
      local_25a = 0;
      local_270 = (undefined1  [16])0x0;
      memcpy(local_198,&local_320,0xd8);
      if (lStack_200 != 0) {
        FUN_140021284();
      }
      if (local_208 != 0) {
        FUN_140021284();
      }
      if (lStack_210 != 0) {
        FUN_140021284();
      }
      if (local_218 != 0) {
        FUN_140021284();
      }
      local_80 = 0;
    }
    else {
      local_2e0 = ZEXT816(0);
      local_320 = lVar9;
      local_310 = lVar4;
      local_300 = ZEXT816(0);
      local_2f0 = ZEXT816(0);
      local_2d0 = ZEXT816(0);
      local_318 = uVar21;
      local_308 = uVar20;
      FUN_145734aa6(&local_320,&local_248);
      FUN_1457347b6(&local_c0,&local_248);
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      local_80 = local_80 & 0x80000000;
      plVar16 = local_5e8;
      uVar19 = (uint)local_5d0;
    }
    local_1a0[0] = 0x100;
    local_80 = uVar19 & 0x7fffffff | local_80;
    lStack_78 = *plVar16;
    if (((DAT_14cafb2b4 != 1) && (DAT_14c760d84 != 0)) &&
       (((DAT_14ca84f5a & 1) != 0 && (DAT_14cafb358 == 2)))) {
      bVar6 = (**(code **)(*param_3 + 0x400))(param_3);
      local_80 = local_80 & 0x7fffffff | (uint)bVar6 << 0x1f;
      FUN_1406918b2();
    }
    iVar2 = (int)param_6[1];
    *(uint *)(param_6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_6 + 0xc) < iVar2 + 1U) {
      FUN_14069191a(param_6,iVar2);
    }
    lVar9 = *param_6;
    pvVar1 = (void *)(lVar9 + (longlong)iVar2 * 0x130);
    memcpy(pvVar1,local_1a0,0xe0);
    *(undefined8 *)(lVar9 + 0x110 + (longlong)iVar2 * 0x130) = 0;
    if (local_90 == 0) {
      *(undefined8 *)((longlong)pvVar1 + 0x100) = local_a0;
      *(undefined8 *)((longlong)pvVar1 + 0x108) = uStack_98;
      *(undefined8 *)((longlong)pvVar1 + 0xf0) = local_b0;
      *(undefined8 *)((longlong)pvVar1 + 0xf8) = uStack_a8;
      *(undefined8 *)((longlong)pvVar1 + 0xe0) = local_c0;
      *(undefined8 *)((longlong)pvVar1 + 0xe8) = uStack_b8;
    }
    *(longlong *)((longlong)pvVar1 + 0x110) = local_90;
    local_90 = 0;
    *(undefined4 *)((longlong)pvVar1 + 0x118) = (undefined4)local_88;
    *(undefined4 *)((longlong)pvVar1 + 0x11c) = local_88._4_4_;
    local_88 = 0x300000000;
    *(ulonglong *)((longlong)pvVar1 + 0x120) = CONCAT44(uStack_7c,local_80);
    *(longlong *)((longlong)pvVar1 + 0x128) = lStack_78;
  }
LAB_140dd18cf:
  if ((local_70 ^ (ulonglong)auStack_628) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd5246 FUN_140dd5246 body=37 status=ok
// SIG undefined FUN_140dd5246(void)

undefined8 FUN_140dd5246(byte param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  
  bVar2 = (param_1 & 0x1f) - 1;
  if (bVar2 < 0x1e) {
    puVar1 = (undefined8 *)(&PTR_DAT_14a338598)[bVar2];
  }
  else {
    puVar1 = &DAT_14ca716c8;
  }
  return *puVar1;
}



// FUNCTION 140dd526c FUN_140dd526c body=284 status=ok
// SIG undefined FUN_140dd526c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140dd526c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6de88) {
    FUN_144b3d300(&DAT_14ca6de88);
    if (DAT_14ca6de88 == -1) {
      FUN_1457afb24();
      FUN_140db5666(&DAT_14ca6dde0,2,&DAT_14ca6dd78,L"TVirtualTextureVSBaseColor",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainVS",0,1,FUN_14733f6c6,
                    FUN_14733f69e,FUN_14107c9c6,&LAB_14733f69a,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6dde0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1431200ac);
      _Init_thread_footer(&DAT_14ca6de88);
    }
  }
  return &DAT_14ca6dde0;
}



// FUNCTION 140dd5388 FUN_140dd5388 body=284 status=ok
// SIG undefined FUN_140dd5388(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140dd5388(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6dfb0) {
    FUN_144b3d300(&DAT_14ca6dfb0);
    if (DAT_14ca6dfb0 == -1) {
      FUN_1457afc6e();
      FUN_140db5666(&DAT_14ca6df08,2,&DAT_14ca6dea0,L"TVirtualTexturePSBaseColor",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainPS",3,1,FUN_14733f768,
                    FUN_14733f740,FUN_1417873c6,&LAB_14733f73c,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6df08 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1431200b8);
      _Init_thread_footer(&DAT_14ca6dfb0);
    }
  }
  return &DAT_14ca6df08;
}



// FUNCTION 140dd54a4 FUN_140dd54a4 body=284 status=ok
// SIG undefined FUN_140dd54a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140dd54a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6e0d8) {
    FUN_144b3d300(&DAT_14ca6e0d8);
    if (DAT_14ca6e0d8 == -1) {
      FUN_1457afdb8();
      FUN_140db5666(&DAT_14ca6e030,2,&DAT_14ca6dfc8,L"TVirtualTextureVSBaseColorNormalRoughness",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainVS",0,1,FUN_14733f80a,
                    FUN_14733f7e2,FUN_1417873fc,&LAB_14733f7de,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e030 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1431200c4);
      _Init_thread_footer(&DAT_14ca6e0d8);
    }
  }
  return &DAT_14ca6e030;
}



// FUNCTION 140dd55c0 FUN_140dd55c0 body=284 status=ok
// SIG undefined FUN_140dd55c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140dd55c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6e200) {
    FUN_144b3d300(&DAT_14ca6e200);
    if (DAT_14ca6e200 == -1) {
      FUN_1457aff02();
      FUN_140db5666(&DAT_14ca6e158,2,&DAT_14ca6e0f0,L"TVirtualTexturePSBaseColorNormalRoughness",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainPS",3,1,FUN_14733f8ac,
                    FUN_14733f884,FUN_14178743a,&LAB_14733f880,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e158 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1431200d0);
      _Init_thread_footer(&DAT_14ca6e200);
    }
  }
  return &DAT_14ca6e158;
}



// FUNCTION 140dd56dc FUN_140dd56dc body=284 status=ok
// SIG undefined FUN_140dd56dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140dd56dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6e578) {
    FUN_144b3d300(&DAT_14ca6e578);
    if (DAT_14ca6e578 == -1) {
      FUN_1457b004c();
      FUN_140db5666(&DAT_14ca6e4d0,2,&DAT_14ca6e468,L"TVirtualTextureVSMask4",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainVS",0,1,FUN_14733fa92,
                    FUN_14733fa6a,FUN_1417874e4,&LAB_14733fa66,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e4d0 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1431200f4);
      _Init_thread_footer(&DAT_14ca6e578);
    }
  }
  return &DAT_14ca6e4d0;
}



// FUNCTION 140dd57f8 FUN_140dd57f8 body=284 status=ok
// SIG undefined FUN_140dd57f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140dd57f8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6e6a0) {
    FUN_144b3d300(&DAT_14ca6e6a0);
    if (DAT_14ca6e6a0 == -1) {
      FUN_1457b0196();
      FUN_140db5666(&DAT_14ca6e5f8,2,&DAT_14ca6e590,L"TVirtualTexturePSMask4",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainPS",3,1,FUN_14733fb34,
                    FUN_14733fb0c,FUN_141787522,&LAB_14733fb08,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e5f8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143120100);
      _Init_thread_footer(&DAT_14ca6e6a0);
    }
  }
  return &DAT_14ca6e5f8;
}



// FUNCTION 140dd5914 FUN_140dd5914 body=284 status=ok
// SIG undefined FUN_140dd5914(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140dd5914(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6ea18) {
    FUN_144b3d300(&DAT_14ca6ea18);
    if (DAT_14ca6ea18 == -1) {
      FUN_1457b02e0();
      FUN_140db5666(&DAT_14ca6e970,2,&DAT_14ca6e908,L"TVirtualTextureVSDisplacement",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainVS",0,1,FUN_14733fd1a,
                    FUN_14733fcf2,FUN_1417875cc,&LAB_14733fcee,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e970 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143120124);
      _Init_thread_footer(&DAT_14ca6ea18);
    }
  }
  return &DAT_14ca6e970;
}



// FUNCTION 140dd5a30 FUN_140dd5a30 body=284 status=ok
// SIG undefined FUN_140dd5a30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140dd5a30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6eb40) {
    FUN_144b3d300(&DAT_14ca6eb40);
    if (DAT_14ca6eb40 == -1) {
      FUN_1457b042a();
      FUN_140db5666(&DAT_14ca6ea98,2,&DAT_14ca6ea30,L"TVirtualTexturePSDisplacement",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainPS",3,1,FUN_14733fdbc,
                    FUN_14733fd94,FUN_14178760a,&LAB_14733fd90,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6ea98 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143120130);
      _Init_thread_footer(&DAT_14ca6eb40);
    }
  }
  return &DAT_14ca6ea98;
}



// FUNCTION 140dd5b4c FUN_140dd5b4c body=2316 status=ok
// SIG undefined FUN_140dd5b4c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140dd5b4c(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  lVar13 = param_2 + 0x430;
  FUN_140dd66ec(lVar13,&local_60,DAT_14cab6128);
  plVar17 = local_58;
  param_1[2] = (longlong)local_60;
  local_60 = (longlong *)0x0;
  plVar18 = (longlong *)param_1[3];
  if (local_58 == plVar18) {
LAB_140dd60ca:
    plVar18 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_58 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
  }
  else {
    local_58 = (longlong *)0x0;
    param_1[3] = (longlong)plVar17;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar18 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      goto LAB_140dd60ca;
    }
  }
  uVar5 = DAT_14cab612c;
  uVar2 = *(uint *)(param_2 + 0x520);
  lVar3 = *(longlong *)(param_2 + 0x518);
  uVar10 = 0;
  if (0 < (int)uVar2) {
    uVar14 = (ulonglong)uVar2;
    uVar15 = uVar2;
    do {
      uVar14 = uVar14 >> 1;
      uVar16 = (uint)uVar14 + (int)uVar10;
      if (*(uint *)(lVar3 + (ulonglong)uVar16 * 0x18) < DAT_14cab612c) {
        uVar10 = (ulonglong)(uVar16 + (uVar15 & 1));
      }
      bVar4 = 1 < uVar15;
      uVar15 = (uint)uVar14;
    } while (bVar4);
  }
  if (((int)uVar10 < (int)uVar2) && (*(uint *)(lVar3 + uVar10 * 0x18) <= DAT_14cab612c)) {
    lVar3 = lVar3 + uVar10 * 0x18;
    puVar6 = (undefined8 *)(lVar3 + 8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_140dd5c70;
    plVar18 = (longlong *)*puVar6;
    plVar17 = *(longlong **)(lVar3 + 0x10);
    if (plVar17 == (longlong *)0x0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar17 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  else {
LAB_140dd5c70:
    plVar17 = (longlong *)0x0;
    plVar18 = (longlong *)0x0;
  }
  if (plVar18 == (longlong *)0x0) {
    local_70 = lVar13;
    plVar8 = (longlong *)FUN_14001cc68(0xd8);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14a4e0910;
    memset(plVar8 + 3,0,0xc0);
    *(undefined8 *)((longlong)plVar8 + 0x54) = 0xffffffff00000080;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    *(undefined8 *)((longlong)plVar8 + 0xa4) = 0xffffffff00000080;
    *(undefined8 *)((longlong)plVar8 + 0xac) = 0;
    *(undefined8 *)((longlong)plVar8 + 0xb4) = 0;
    *(undefined8 *)((longlong)plVar8 + 0xbc) = 0;
    *(undefined8 *)((longlong)plVar8 + 0xc4) = 0;
    *(undefined8 *)((longlong)plVar8 + 0xcc) = 0xffffffff00000000;
    ppuVar7 = &PTR_FUN_14a4e0930;
    plVar18 = plVar8 + 2;
    *plVar18 = (longlong)&PTR_FUN_14a4e0930;
    plVar11 = plVar8;
    if (plVar18 == (longlong *)0x0) {
LAB_140dd61e9:
      local_64 = (undefined4)CONCAT71((int7)((ulonglong)ppuVar7 >> 8),1);
      if (plVar17 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
      }
      else {
LAB_140dd6250:
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
        plVar17 = plVar8;
        if ((char)local_64 == '\0') goto LAB_140dd5e85;
      }
    }
    else {
      if (plVar8 == (longlong *)0x0) {
        _DAT_00000018 = 0x10;
        plVar12 = (longlong *)&DAT_00000020;
        plVar9 = _DAT_00000020;
        if (_DAT_00000020 != (longlong *)0x0) {
LAB_140dd61d1:
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            ppuVar7 = (undefined **)(**(code **)(*plVar9 + 0x10))();
          }
          *plVar12 = (longlong)plVar8;
          if (plVar8 != (longlong *)0x0) goto LAB_140dd5e60;
        }
        goto LAB_140dd61e9;
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[3] = (longlong)plVar18;
      if ((longlong *)plVar8[4] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar8[4] != (longlong *)0x0) {
          plVar12 = plVar8 + 4;
          plVar9 = (longlong *)plVar8[4];
          goto LAB_140dd61d1;
        }
        plVar8[4] = (longlong)plVar8;
      }
LAB_140dd5e60:
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plVar8 != plVar17) {
        if (plVar17 == (longlong *)0x0) goto LAB_140dd5e85;
        local_64 = 0;
        goto LAB_140dd6250;
      }
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar11 = plVar17;
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
LAB_140dd5e85:
      plVar17 = plVar11;
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar11 = plVar17;
      if ((int)*plVar12 == 0) {
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
    (**(code **)(plVar8[2] + 0x10))(plVar18,uVar5,local_70);
    if (plVar11 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      local_58 = plVar11;
    }
    local_4c = uVar5;
    local_60 = plVar18;
    FUN_140dd6482(param_2 + 0x518,&local_4c,&local_60);
    plVar8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_58 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar13 = local_70;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        lVar13 = local_70;
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          lVar13 = local_70;
        }
      }
    }
  }
  param_1[4] = (longlong)plVar18;
  plVar18 = (longlong *)param_1[5];
  if (plVar17 == plVar18) {
LAB_140dd611e:
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar18 = plVar17 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
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
  else {
    param_1[5] = (longlong)plVar17;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar18 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      plVar17 = (longlong *)0x0;
      goto LAB_140dd611e;
    }
  }
  uVar5 = DAT_14cab6130;
  uVar2 = *(uint *)(param_2 + 0x520);
  lVar3 = *(longlong *)(param_2 + 0x518);
  uVar10 = 0;
  if (0 < (int)uVar2) {
    uVar14 = (ulonglong)uVar2;
    uVar15 = uVar2;
    do {
      uVar14 = uVar14 >> 1;
      uVar16 = (uint)uVar14 + (int)uVar10;
      if (*(uint *)(lVar3 + (ulonglong)uVar16 * 0x18) < DAT_14cab6130) {
        uVar10 = (ulonglong)(uVar16 + (uVar15 & 1));
      }
      bVar4 = 1 < uVar15;
      uVar15 = (uint)uVar14;
    } while (bVar4);
  }
  if (((int)uVar10 < (int)uVar2) && (*(uint *)(lVar3 + uVar10 * 0x18) <= DAT_14cab6130)) {
    lVar3 = lVar3 + uVar10 * 0x18;
    puVar6 = (undefined8 *)(lVar3 + 8);
    if (puVar6 == (undefined8 *)0x0) goto LAB_140dd5d3d;
    plVar18 = (longlong *)*puVar6;
    plVar17 = *(longlong **)(lVar3 + 0x10);
    if (plVar17 == (longlong *)0x0) {
      plVar17 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar17 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  else {
LAB_140dd5d3d:
    plVar17 = (longlong *)0x0;
    plVar18 = (longlong *)0x0;
  }
  if (plVar18 == (longlong *)0x0) {
    plVar8 = (longlong *)FUN_14001cc68(0xf0);
    plVar8[1] = (longlong)&DAT_100000001;
    *plVar8 = (longlong)&PTR_FUN_14a4e09d0;
    memset(plVar8 + 3,0,0xc0);
    *(undefined8 *)((longlong)plVar8 + 0x54) = 0xffffffff00000080;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    *(undefined8 *)((longlong)plVar8 + 0xa4) = 0xffffffff00000080;
    *(undefined8 *)((longlong)plVar8 + 0xac) = 0;
    *(undefined8 *)((longlong)plVar8 + 0xb4) = 0;
    *(undefined8 *)((longlong)plVar8 + 0xbc) = 0;
    *(undefined8 *)((longlong)plVar8 + 0xc4) = 0;
    *(undefined8 *)((longlong)plVar8 + 0xcc) = 0xffffffff00000000;
    plVar8[0x1b] = 0;
    plVar8[0x1c] = 0;
    plVar18 = plVar8 + 2;
    *plVar18 = (longlong)&PTR_FUN_14a4e09f0;
    plVar8[0x1d] = (longlong)&PTR_FUN_14a4e0a40;
    plVar11 = plVar8;
    if (plVar18 == (longlong *)0x0) {
LAB_140dd6340:
      bVar4 = true;
      if (plVar17 == (longlong *)0x0) {
        plVar11 = (longlong *)0x0;
        local_70 = lVar13;
      }
      else {
LAB_140dd63b9:
        LOCK();
        plVar12 = plVar17 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        local_70 = lVar13;
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
        lVar13 = local_70;
        plVar17 = plVar8;
        if (!bVar4) goto LAB_140dd6013;
      }
    }
    else {
      if (plVar8 == (longlong *)0x0) {
        _DAT_00000018 = 0x10;
        plVar12 = (longlong *)&DAT_00000020;
        plVar9 = _DAT_00000020;
        if (_DAT_00000020 != (longlong *)0x0) {
LAB_140dd6328:
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))();
          }
          *plVar12 = (longlong)plVar8;
          if (plVar8 != (longlong *)0x0) goto LAB_140dd5fec;
        }
        goto LAB_140dd6340;
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[3] = (longlong)plVar18;
      if ((longlong *)plVar8[4] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar8[4] != (longlong *)0x0) {
          plVar12 = plVar8 + 4;
          plVar9 = (longlong *)plVar8[4];
          goto LAB_140dd6328;
        }
        plVar8[4] = (longlong)plVar8;
      }
LAB_140dd5fec:
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      if (plVar8 != plVar17) {
        if (plVar17 == (longlong *)0x0) goto LAB_140dd6013;
        bVar4 = false;
        goto LAB_140dd63b9;
      }
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar11 = plVar17;
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
LAB_140dd6013:
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      plVar17 = plVar11;
      if ((int)*plVar12 == 0) {
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
    (**(code **)(plVar8[2] + 0x10))(plVar18,uVar5,lVar13);
    if (plVar11 == (longlong *)0x0) {
      local_58 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
      local_58 = plVar11;
    }
    local_4c = uVar5;
    local_60 = plVar18;
    FUN_140dd6482(param_2 + 0x518,&local_4c,&local_60);
    plVar8 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_58 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar11 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  }
  param_1[6] = (longlong)plVar18;
  plVar18 = (longlong *)param_1[7];
  if (plVar17 != plVar18) {
    param_1[7] = (longlong)plVar17;
    if (plVar18 == (longlong *)0x0) goto LAB_140dd5d6a;
    LOCK();
    plVar17 = plVar18 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    plVar17 = (longlong *)0x0;
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar17 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
LAB_140dd5d6a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140dd645a FUN_140dd645a body=14 status=ok
// SIG undefined FUN_140dd645a(void)

void FUN_140dd645a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  return;
}



// FUNCTION 140dd6468 FUN_140dd6468 body=25 status=ok
// SIG undefined FUN_140dd6468(void)

void FUN_140dd6468(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 140dd6482 FUN_140dd6482 body=243 status=ok
// SIG undefined FUN_140dd6482(void)

uint * FUN_140dd6482(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar2 = *(uint *)(param_1 + 1);
  lVar6 = *param_1;
  if ((int)uVar2 < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    uVar5 = uVar2;
    do {
      uVar1 = (uVar5 >> 1) + uVar7;
      if (*(uint *)(lVar6 + (ulonglong)uVar1 * 0x18) < *param_2) {
        uVar7 = uVar1 + (uVar5 & 1);
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 >> 1;
    } while (bVar3);
    if (((int)uVar7 < (int)uVar2) && (*(uint *)(lVar6 + (ulonglong)uVar7 * 0x18) <= *param_2)) {
      puVar8 = (uint *)(lVar6 + (ulonglong)uVar7 * 0x18);
      FUN_140956b39(puVar8,1);
      goto LAB_140dd6522;
    }
  }
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar2) {
    FUN_140dd6576(param_1,uVar2);
    lVar6 = *param_1;
  }
  lVar4 = (ulonglong)uVar7 * 0x18;
  memmove((void *)(lVar6 + lVar4 + 0x18),(void *)(lVar6 + lVar4),(ulonglong)(uVar2 - uVar7) * 0x18);
  puVar8 = (uint *)(lVar4 + *param_1);
LAB_140dd6522:
  *puVar8 = *param_2;
  *(undefined8 *)(puVar8 + 2) = *param_3;
  *(undefined8 *)(puVar8 + 4) = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  return puVar8 + 2;
}



// FUNCTION 140dd6576 FUN_140dd6576 body=373 status=ok
// SIG undefined FUN_140dd6576(void)

void FUN_140dd6576(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140dd65ff;
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
LAB_140dd65ff:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140dd66ec FUN_140dd66ec body=999 status=ok
// SIG undefined FUN_140dd66ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140dd66ec(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0xf0);
  lVar3 = *(longlong *)(param_1 + 0xe8);
  uVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = (ulonglong)uVar2;
    do {
      uVar11 = (int)(uVar10 >> 1) + (int)uVar8;
      uVar9 = (uint)uVar10;
      if (*(uint *)(lVar3 + (ulonglong)uVar11 * 0x18) < param_3) {
        uVar8 = (ulonglong)(uVar11 + (uVar9 & 1));
      }
      uVar10 = uVar10 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar8 < (int)uVar2) && (*(uint *)(lVar3 + uVar8 * 0x18) <= param_3)) {
    lVar3 = lVar3 + uVar8 * 0x18;
    plVar6 = (longlong *)(lVar3 + 8);
    if (plVar6 == (longlong *)0x0) goto LAB_140dd67c3;
    lVar5 = *plVar6;
    plVar6 = *(longlong **)(lVar3 + 0x10);
    if (plVar6 == (longlong *)0x0) goto LAB_140dd67c5;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = lVar5;
    param_2[1] = (longlong)plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar6 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    lVar5 = *param_2;
  }
  else {
LAB_140dd67c3:
    lVar5 = 0;
LAB_140dd67c5:
    *param_2 = lVar5;
    param_2[1] = 0;
  }
  if (lVar5 != 0) goto LAB_140dd679a;
  plVar6 = (longlong *)FUN_14001cc68(0xf0);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a4e07b0;
  memset(plVar6 + 3,0,0xc0);
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0xffffffff00000080;
  plVar6[0x13] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  *(undefined8 *)((longlong)plVar6 + 0xa4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)plVar6 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xcc) = 0xffffffff00000000;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar13 = plVar6 + 2;
  *plVar13 = (longlong)&PTR_FUN_14a4e07d0;
  plVar6[0x1d] = (longlong)&PTR_FUN_14a4e0820;
  if (plVar13 == (longlong *)0x0) {
    if (plVar6 == (longlong *)0x0) goto LAB_140dd69dd;
LAB_140dd68c0:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar13;
    plVar13 = (longlong *)param_2[1];
    if (plVar6 == plVar13) {
      LOCK();
      plVar13 = plVar6 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    else {
      param_2[1] = (longlong)plVar6;
      if (plVar13 != (longlong *)0x0) {
        bVar4 = false;
        goto LAB_140dd6a45;
      }
    }
LAB_140dd68e2:
    LOCK();
    plVar13 = plVar6 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  else {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar6[3] = (longlong)plVar13;
      if ((longlong *)plVar6[4] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar6[4] != (longlong *)0x0) {
          plVar12 = plVar6 + 4;
          plVar7 = (longlong *)plVar6[4];
          goto LAB_140dd69c5;
        }
        plVar6[4] = (longlong)plVar6;
      }
LAB_140dd68b5:
      LOCK();
      plVar12 = plVar6 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_140dd68c0;
    }
    _DAT_00000018 = 0x10;
    plVar12 = (longlong *)&DAT_00000020;
    plVar7 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_140dd69c5:
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      *plVar12 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) goto LAB_140dd68b5;
    }
LAB_140dd69dd:
    *param_2 = (longlong)plVar13;
    plVar13 = (longlong *)param_2[1];
    if (plVar13 != (longlong *)0x0) {
      param_2[1] = (longlong)plVar6;
      bVar4 = true;
LAB_140dd6a45:
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
      if (!bVar4) goto LAB_140dd68e2;
    }
  }
  plVar6 = (longlong *)*param_2;
  (**(code **)(*plVar6 + 0x10))(plVar6,param_3,param_1);
  plVar13 = (longlong *)param_2[1];
  if (plVar13 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    local_50 = plVar13;
  }
  local_58 = plVar6;
  local_44 = param_3;
  FUN_140dd6482(param_1 + 0xe8,&local_44,&local_58);
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_50 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
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
LAB_140dd679a:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140dd6ad4 FUN_140dd6ad4 body=25 status=ok
// SIG undefined FUN_140dd6ad4(void)

void FUN_140dd6ad4(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 140dd6aee FUN_140dd6aee body=195 status=ok
// SIG undefined FUN_140dd6aee(void)

void FUN_140dd6aee(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140dd6bb2(param_3,&local_28);
  plVar2 = local_20;
  if (&local_28 != param_1) {
    *param_1 = local_28;
    local_28 = 0;
    plVar3 = (longlong *)param_1[1];
    if (local_20 != plVar3) {
      local_20 = (longlong *)0x0;
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
  plVar2 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd6bb2 FUN_140dd6bb2 body=1019 status=ok
// SIG undefined FUN_140dd6bb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140dd6bb2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  
  uVar2 = *(uint *)(param_1 + 0x100);
  lVar10 = *(longlong *)(param_1 + 0xf8);
  uVar16 = 0;
  if (0 < (int)uVar2) {
    uVar16 = 0;
    uVar14 = (ulonglong)uVar2;
    uVar13 = uVar2;
    do {
      uVar14 = uVar14 >> 1;
      uVar15 = (uint)uVar14 + uVar16;
      if (*(uint *)(lVar10 + (ulonglong)uVar15 * 0x18) < DAT_14cab3260) {
        uVar16 = uVar15 + (uVar13 & 1);
      }
      bVar19 = 1 < uVar13;
      uVar13 = (uint)uVar14;
    } while (bVar19);
  }
  bVar19 = true;
  if (((int)uVar16 < (int)uVar2) && (*(uint *)(lVar10 + (ulonglong)uVar16 * 0x18) <= DAT_14cab3260))
  {
    lVar10 = lVar10 + (ulonglong)uVar16 * 0x18;
    plVar7 = (longlong *)(lVar10 + 8);
    if ((plVar7 == (longlong *)0x0) ||
       (plVar18 = *(longlong **)(lVar10 + 0x10), plVar18 == (longlong *)0x0)) goto LAB_140dd6ca5;
    lVar10 = *plVar7;
    LOCK();
    *(int *)((longlong)plVar18 + 0xc) = *(int *)((longlong)plVar18 + 0xc) + 1;
    UNLOCK();
    iVar6 = (int)plVar18[1];
    do {
      plVar8 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar5 = (int)plVar18[1];
      bVar19 = iVar6 == iVar5;
      if (bVar19) {
        *(int *)(plVar18 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar8 = plVar18;
    } while (!bVar19);
    LOCK();
    piVar1 = (int *)((longlong)plVar18 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
    bVar19 = plVar8 == (longlong *)0x0;
    plVar7 = plVar8;
    if ((!bVar19) && (lVar10 != 0)) {
      *param_2 = lVar10;
      param_2[1] = (longlong)plVar8;
      goto LAB_140dd6c83;
    }
  }
  else {
LAB_140dd6ca5:
    plVar7 = (longlong *)0x0;
  }
  plVar8 = (longlong *)FUN_14001cc68(0xd0);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_14a480eb0;
  memset(plVar8 + 3,0,0xb8);
  *(undefined8 *)((longlong)plVar8 + 0x54) = 0xffffffff00000080;
  plVar8[0xf] = 0;
  plVar8[0x10] = 0;
  *(undefined8 *)((longlong)plVar8 + 0xa4) = 0xffffffff00000080;
  plVar18 = plVar8 + 2;
  *plVar18 = (longlong)&PTR_FUN_14a480ed0;
  if (plVar18 == (longlong *)0x0) {
    if (plVar8 == (longlong *)0x0) goto LAB_140dd6e9e;
LAB_140dd6d4f:
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    bVar4 = false;
  }
  else {
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar8[3] = (longlong)plVar18;
      if ((longlong *)plVar8[4] != plVar8) {
        LOCK();
        *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar8[4] != (longlong *)0x0) {
          plVar17 = plVar8 + 4;
          plVar9 = (longlong *)plVar8[4];
          goto LAB_140dd6e85;
        }
        plVar8[4] = (longlong)plVar8;
      }
LAB_140dd6d45:
      LOCK();
      plVar17 = plVar8 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
      goto LAB_140dd6d4f;
    }
    _DAT_00000018 = 0x10;
    plVar17 = (longlong *)&DAT_00000020;
    plVar9 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_140dd6e85:
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))();
      }
      *plVar17 = (longlong)plVar8;
      if (plVar8 != (longlong *)0x0) goto LAB_140dd6d45;
    }
LAB_140dd6e9e:
    bVar4 = true;
  }
  plVar17 = (longlong *)0x0;
  if (plVar8 == plVar7) {
    plVar17 = plVar8;
  }
  if (!bVar19 && plVar8 != plVar7) {
    LOCK();
    plVar17 = plVar7 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar6 = *piVar1;
      UNLOCK();
joined_r0x000140dd6ede:
      if (iVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  else if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar17 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar6 = *piVar1;
      UNLOCK();
      plVar7 = plVar8;
      goto joined_r0x000140dd6ede;
    }
  }
  if (bVar4) {
    (**(code **)(*plVar18 + 8))(plVar18,param_1);
  }
  else {
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    (**(code **)(plVar8[2] + 8))(plVar18,param_1);
    LOCK();
    *(int *)((longlong)plVar8 + 0xc) = *(int *)((longlong)plVar8 + 0xc) + 1;
    UNLOCK();
  }
  uVar2 = *(uint *)(param_1 + 0x100);
  lVar10 = *(longlong *)(param_1 + 0xf8);
  uVar14 = 0;
  if ((int)uVar2 < 1) {
LAB_140dd6db2:
    plVar7 = (longlong *)(param_1 + 0xf8);
    *(uint *)(param_1 + 0x100) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x104) == uVar2) {
      FUN_140dd6fb6(plVar7,uVar2);
      lVar10 = *plVar7;
    }
    lVar3 = uVar14 * 0x18;
    memmove((void *)(lVar10 + lVar3 + 0x18),(void *)(lVar10 + lVar3),
            (ulonglong)(uVar2 - (int)uVar14) * 0x18);
    puVar11 = (uint *)(lVar3 + *plVar7);
  }
  else {
    uVar14 = 0;
    uVar12 = (ulonglong)uVar2;
    do {
      uVar13 = (int)(uVar12 >> 1) + (int)uVar14;
      uVar16 = (uint)uVar12;
      if (*(uint *)(lVar10 + (ulonglong)uVar13 * 0x18) < DAT_14cab3260) {
        uVar14 = (ulonglong)(uVar13 + (uVar16 & 1));
      }
      uVar12 = uVar12 >> 1;
    } while (1 < uVar16);
    if (((int)uVar2 <= (int)uVar14) || (DAT_14cab3260 < *(uint *)(lVar10 + uVar14 * 0x18)))
    goto LAB_140dd6db2;
    puVar11 = (uint *)(lVar10 + uVar14 * 0x18);
    FUN_140956aff(puVar11,1);
  }
  *puVar11 = DAT_14cab3260;
  *(longlong **)(puVar11 + 2) = plVar18;
  *(longlong **)(puVar11 + 4) = plVar8;
  *param_2 = (longlong)plVar18;
  param_2[1] = (longlong)plVar8;
  if (bVar4) {
    return param_2;
  }
LAB_140dd6c83:
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
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  return param_2;
}



// FUNCTION 140dd6fae FUN_140dd6fae body=8 status=ok
// SIG undefined FUN_140dd6fae(void)

void FUN_140dd6fae(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xb8) = param_2;
  return;
}



// FUNCTION 140dd6fb6 FUN_140dd6fb6 body=370 status=ok
// SIG undefined FUN_140dd6fb6(void)

void FUN_140dd6fb6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140dd703f;
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
LAB_140dd703f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140dd7130 FUN_140dd7130 body=316 status=ok
// SIG undefined FUN_140dd7130(void)

void FUN_140dd7130(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b073630;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = &DAT_14a171d50;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &DAT_14a171d50;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 1;
  param_1[0x2a] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x28] = DAT_14c8464e0;
  param_1[0x29] = uVar1;
  *(undefined1 *)(param_1 + 0x2b) = 1;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x42f00000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x4089000000000000;
  param_1[0x2f] = 0x42f00000ffffffff;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x4085e00000000000;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  param_1[0xc] = &DAT_14cb70058;
  param_1[0x10] = &DAT_14cb70058;
  return;
}



// FUNCTION 140dd7274 FUN_140dd7274 body=175 status=ok
// SIG undefined FUN_140dd7274(void)

undefined8 * FUN_140dd7274(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14ac47cd0;
  FUN_140440628(param_1 + 0x10,&DAT_14cb23dcc,0);
  FUN_140440628(param_1 + 0x17,&DAT_14cb23dd4,0);
  FUN_140440628(param_1 + 0x1e,&DAT_14cb23ddc,0);
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 140dd7324 FUN_140dd7324 body=639 status=ok
// SIG undefined FUN_140dd7324(void)

void FUN_140dd7324(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  PSRWLOCK SRWLock;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 *puVar12;
  ushort *puVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  lVar11 = *(longlong *)(local_40 + 0x3e0);
  SRWLock = (PSRWLOCK)(lVar11 + 0xc0);
  AcquireSRWLockShared(SRWLock);
  plVar2 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  iVar5 = *(int *)(lVar11 + 0xb8);
  if (*(int *)(param_1 + 0x2b0) == iVar5) {
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    *(int *)(param_1 + 0x2b0) = iVar5;
    ReleaseSRWLockShared(SRWLock);
    FUN_140dd8812(param_1);
    FUN_140dd8236(param_1);
    FUN_1457b0574(param_1);
  }
  FUN_1448d5e3c(&local_40,param_1 + 0x208);
  puVar12 = *(undefined1 **)(local_40 + 0x380);
  AcquireSRWLockShared((PSRWLOCK)(puVar12 + 0x6e0));
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if ((*(int *)(param_1 + 0x2b4) != *(int *)(puVar12 + 0x6d8)) &&
     (lVar11 = *(longlong *)(param_1 + 0x288), lVar11 != 0)) {
    *(int *)(param_1 + 0x2b4) = *(int *)(puVar12 + 0x6d8);
    iVar5 = *(int *)(param_1 + 0x368);
    iVar6 = *(int *)(puVar12 + 0xc);
    if (iVar5 != iVar6) {
      *(undefined1 *)(param_1 + 0x364) = puVar12[8];
      *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(puVar12 + 0xc);
    }
    iVar7 = *(int *)(param_1 + 0x378);
    iVar8 = *(int *)(puVar12 + 100);
    if (iVar7 != iVar8) {
      *(undefined1 *)(param_1 + 0x374) = puVar12[0x60];
      *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(puVar12 + 100);
    }
    iVar9 = *(int *)(param_1 + 0x380);
    iVar10 = *(int *)(puVar12 + 0x14);
    if (iVar9 != iVar10) {
      *(undefined1 *)(param_1 + 0x37c) = puVar12[0x10];
      *(undefined4 *)(param_1 + 0x380) = *(undefined4 *)(puVar12 + 0x14);
    }
    if (*(int *)(param_1 + 0x370) == *(int *)(puVar12 + 4)) {
      if ((bool)(~(iVar5 != iVar6 || iVar7 != iVar8) & iVar9 == iVar10)) goto LAB_140dd7401;
    }
    else {
      *(undefined1 *)(param_1 + 0x36c) = *puVar12;
      *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(puVar12 + 4);
    }
    if ((*(char *)(param_1 + 0x364) != '\0') || (bVar14 = 1, *(char *)(param_1 + 0x374) == '\0')) {
      bVar14 = *(byte *)(param_1 + 0x36c) ^ 1;
    }
    *(byte *)(lVar11 + 800) = bVar14;
    FUN_140dd75a4(param_1);
    uVar4 = (undefined1)*(undefined4 *)(lVar11 + 800);
    uVar15 = 1;
    if (*(char *)(param_1 + 0x37c) != '\0') {
      uVar15 = uVar4;
    }
    *(undefined1 *)(lVar11 + 0x278) = uVar15;
    *(undefined1 *)(lVar11 + 0x2f8) = uVar4;
    puVar13 = *(ushort **)(lVar11 + 0x80);
    if (puVar13 != (ushort *)0x0) {
      *puVar13 = *puVar13 | (ushort)(1L << (*(byte *)(lVar11 + 0x78) & 0x3f));
    }
  }
LAB_140dd7401:
  ReleaseSRWLockShared((PSRWLOCK)(puVar12 + 0x6e0));
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dd75a4 FUN_140dd75a4 body=3217 status=ok
// SIG undefined FUN_140dd75a4(void)

void FUN_140dd75a4(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  void *pvVar5;
  ushort *puVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  void **ppvVar12;
  int *piVar13;
  undefined8 uVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined2 *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 *local_1b0;
  undefined1 *local_1a8;
  code *local_1a0;
  longlong *local_198;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  int iStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  int iStack_170;
  undefined4 uStack_16c;
  void *local_168;
  int local_160;
  int local_15c;
  longlong local_158;
  longlong local_148;
  longlong local_138;
  longlong local_128 [2];
  longlong *local_118;
  longlong local_108;
  byte local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 == 0) goto LAB_140dd7eba;
  if (*(char *)(param_1 + 0x364) == '\0') {
    lVar9 = 0x308;
    if (*(byte *)(param_1 + 0x374) != 0) {
      lVar9 = 0x314;
    }
    bVar7 = *(byte *)(param_1 + 0x374) ^ 1;
  }
  else {
    bVar7 = 1;
    lVar9 = 0x308;
  }
  lVar9 = *(longlong *)(param_1 + lVar9);
  *(bool *)(lVar3 + 0x322) = lVar9 != 0;
  bVar20 = *(int *)(param_1 + 0x2e8) != 0;
  bVar21 = lVar9 != 0;
  if (bVar20) {
    bVar21 = bVar20;
  }
  if (bVar7 != 0) {
    bVar21 = bVar20;
  }
  iVar16 = *(int *)(lVar3 + 0xb4);
  if (bVar21 == (bool)*(char *)(lVar3 + 0xb0)) {
    if (iVar16 == 0) {
      iVar16 = 0;
      goto LAB_140dd7642;
    }
  }
  else {
LAB_140dd7642:
    *(bool *)(lVar3 + 0xb0) = bVar21;
    *(int *)(lVar3 + 0xb4) = iVar16 + 1;
  }
  local_198 = (longlong *)(lVar3 + 0x268);
  iVar16 = *(int *)(lVar3 + 0x274);
  FUN_140d47191(*(undefined8 *)(lVar3 + 0x268),*(undefined4 *)(lVar3 + 0x270));
  *(undefined4 *)(lVar3 + 0x270) = 0;
  if ((iVar16 < 0) && (*(int *)(lVar3 + 0x274) != 0)) {
    FUN_148e6b6d0(local_198,0);
  }
  FUN_1410d1d82(&local_d8);
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
  local_e8 = DAT_14c844840;
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
  local_e0 = 0;
  FUN_140ac6c96(&DAT_14cbdead8,&local_e8);
  plVar1 = local_e8;
  plVar15 = local_e8;
  if (*(code **)(*local_e8 + 0x50) != FUN_144828418) {
    plVar15 = (longlong *)(**(code **)(*local_e8 + 0x50))(local_e8);
  }
  FUN_1447a1fc0(plVar15);
  pcVar4 = *(code **)(*plVar1 + 0x28);
  if (pcVar4 == FUN_14482841c) {
    ppvVar12 = (void **)(plVar1 + 3);
    if (plVar1[5] != 0) {
      ppvVar12 = (void **)(plVar1[5] + 8);
    }
  }
  else if (pcVar4 == (code *)&LAB_14010c34c) {
    ppvVar12 = (void **)(plVar1 + 2);
  }
  else {
    ppvVar12 = (void **)(*pcVar4)(plVar1);
  }
  if (&local_c8 != ppvVar12) {
    iVar16 = *(int *)(ppvVar12 + 1);
    pvVar5 = *ppvVar12;
    local_c0 = iVar16;
    if (iVar16 == 0 && local_bc == 0) {
      local_bc = 0;
    }
    else {
      FUN_1446dd670(&local_c8,iVar16);
      if (iVar16 != 0) {
        memcpy(local_c8,pvVar5,(longlong)iVar16 * 2);
      }
    }
  }
  FUN_1400b22c2(&local_178,&DAT_149e02088);
  if (CONCAT44(uStack_d4,local_d8) != 0) {
    FUN_1400020a8();
  }
  local_d8 = (undefined4)local_178;
  uStack_d4 = local_178._4_4_;
  iStack_d0 = iStack_170;
  uStack_cc = uStack_16c;
  local_50 = local_50 | 0x20;
  iVar16 = *(int *)(lVar3 + 0x270);
  *(uint *)(lVar3 + 0x270) = iVar16 + 1U;
  if (*(uint *)(lVar3 + 0x274) < iVar16 + 1U) {
    FUN_1410d2002(local_198,iVar16);
  }
  FUN_1410d0c56((longlong)iVar16 * 0x90 + *local_198,&local_d8);
  if (lVar9 == 0) {
    iVar16 = *(int *)(lVar3 + 0x270);
    *(uint *)(param_1 + 0x2e4) = iVar16 - 1U;
    if ((0 < iVar16) && (uVar2 = *(uint *)(lVar3 + 0x270), iVar16 <= (int)uVar2)) {
      lVar17 = 0;
      do {
        *(byte *)(*local_198 + 0x88 + lVar17) =
             *(byte *)(*local_198 + 0x88 + lVar17) & 0xbf |
             ((ulonglong)(iVar16 - 1U) * 0x90 == lVar17) << 6;
        lVar17 = lVar17 + 0x90;
      } while ((ulonglong)uVar2 * 0x90 != lVar17);
    }
    iVar16 = local_c0 + -1;
    if (local_c0 == 0) {
      iVar16 = 0;
    }
    FUN_1402980a2(lVar3 + 0x228,local_c8,iVar16);
  }
  local_190 = param_1;
  if ((longlong)*(int *)(param_1 + 0x2f8) != 0) {
    plVar15 = *(longlong **)(param_1 + 0x2f0);
    plVar19 = plVar15 + (longlong)*(int *)(param_1 + 0x2f8) * 0x12;
    plVar1 = (longlong *)(lVar3 + 0x228);
    do {
      lVar17 = *plVar15;
      if (lVar9 == lVar17) {
        plVar10 = (longlong *)plVar15[8];
        if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
        }
        FUN_1447a1fc0(plVar10);
        plVar10 = (longlong *)plVar15[8];
        pcVar4 = *(code **)(*plVar10 + 0x28);
        if (pcVar4 == FUN_14482841c) {
          plVar11 = plVar10 + 3;
          if (plVar10[5] != 0) {
            plVar11 = (longlong *)(plVar10[5] + 8);
          }
        }
        else if (pcVar4 == (code *)&LAB_14010c34c) {
          plVar11 = plVar10 + 2;
        }
        else {
          plVar11 = (longlong *)(*pcVar4)(plVar10);
        }
        if (plVar1 != plVar11) {
          iVar16 = (int)plVar11[1];
          pvVar5 = (void *)*plVar11;
          *(int *)(lVar3 + 0x230) = iVar16;
          if (iVar16 == 0 && *(int *)(lVar3 + 0x234) == 0) {
            *(undefined4 *)(lVar3 + 0x234) = 0;
          }
          else {
            FUN_1446dd670(plVar1,iVar16);
            if (iVar16 != 0) {
              memcpy((void *)*plVar1,pvVar5,(longlong)iVar16 * 2);
            }
          }
        }
      }
      if ((char)plVar15[0x11] == '\x01') {
        FUN_1410d1d82(&local_178);
        FUN_1400021e4(plVar15,&local_188);
        if (local_178 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_178 = (code *)CONCAT44(uStack_184,local_188);
        iStack_170 = iStack_180;
        uStack_16c = uStack_17c;
        plVar10 = (longlong *)plVar15[8];
        if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
        }
        FUN_1447a1fc0(plVar10);
        plVar10 = (longlong *)plVar15[8];
        pcVar4 = *(code **)(*plVar10 + 0x28);
        if (pcVar4 == FUN_14482841c) {
          ppvVar12 = (void **)(plVar10 + 3);
          if (plVar10[5] != 0) {
            ppvVar12 = (void **)(plVar10[5] + 8);
          }
        }
        else if (pcVar4 == (code *)&LAB_14010c34c) {
          ppvVar12 = (void **)(plVar10 + 2);
        }
        else {
          ppvVar12 = (void **)(*pcVar4)(plVar10);
        }
        if (&local_168 != ppvVar12) {
          iVar16 = *(int *)(ppvVar12 + 1);
          pvVar5 = *ppvVar12;
          local_160 = iVar16;
          if (iVar16 == 0 && local_15c == 0) {
            local_15c = 0;
          }
          else {
            FUN_1446dd670(&local_168,iVar16);
            if (iVar16 != 0) {
              memcpy(local_168,pvVar5,(longlong)iVar16 * 2);
            }
          }
        }
        iVar16 = iStack_170 + -1;
        if (iStack_170 == 0) {
          iVar16 = 0;
        }
        FUN_1402980a2(local_128,local_178,iVar16);
        local_f0 = local_f0 | 0x20;
        iVar16 = *(int *)(lVar3 + 0x270);
        *(uint *)(lVar3 + 0x270) = iVar16 + 1U;
        if (*(uint *)(lVar3 + 0x274) < iVar16 + 1U) {
          FUN_1410d2002(local_198,iVar16);
        }
        FUN_1410d0c56((longlong)iVar16 * 0x90 + *local_198,&local_178);
        if (lVar9 == lVar17) {
          iVar16 = *(int *)(lVar3 + 0x270);
          *(uint *)(local_190 + 0x2e4) = iVar16 - 1U;
          if ((0 < iVar16) && (uVar2 = *(uint *)(lVar3 + 0x270), iVar16 <= (int)uVar2)) {
            lVar17 = 0;
            do {
              *(byte *)(*local_198 + 0x88 + lVar17) =
                   *(byte *)(*local_198 + 0x88 + lVar17) & 0xbf |
                   ((ulonglong)(iVar16 - 1U) * 0x90 == lVar17) << 6;
              lVar17 = lVar17 + 0x90;
            } while ((ulonglong)uVar2 * 0x90 != lVar17);
          }
        }
        if (local_108 != 0) {
          FUN_1400020a8();
        }
        if (local_118 != (longlong *)0x0) {
          (**(code **)(*local_118 + 0x10))();
        }
        if (local_128[0] != 0) {
          FUN_1400020a8();
        }
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        if (local_148 != 0) {
          FUN_1400020a8();
        }
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        if (local_168 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_178 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar15 = plVar15 + 0x12;
    } while (plVar15 != plVar19);
  }
  lVar17 = local_190;
  lVar9 = *(longlong *)(local_190 + 0x288);
  if (lVar9 != 0) {
    *(bool *)(lVar9 + 0x120) = *(int *)(local_190 + 0x2e4) != 0;
    puVar6 = *(ushort **)(lVar9 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar9 + 0x78) & 0x3f));
    }
  }
  if (((((*(int *)(local_190 + 0x34) != 0) && (uVar2 = *(uint *)(local_190 + 0x30), -1 < (int)uVar2)
        ) && ((int)uVar2 < DAT_14c9647dc)) &&
      ((puVar18 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar18 != (undefined8 *)0x0 && (*(int *)(puVar18 + 2) == *(int *)(local_190 + 0x34))))) &&
     ((*(uint *)(puVar18 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar18 + 1) & 0x10200000) == 0) {
      uVar14 = *puVar18;
    }
    else {
      uVar14 = 0;
    }
    lVar9 = FUN_1407f492e(uVar14);
    if (lVar9 == 0) {
LAB_140dd7d77:
      bVar7 = FUN_1441207ad(0);
    }
    else {
      if (DAT_14cbadd90 == 0) {
        local_178 = FUN_141030f22;
        local_1a0 = FUN_14081d0ea;
        local_1a8 = &LAB_1459f2e4c;
        local_1b0 = &local_178;
        local_1b8 = &LAB_148c39de3;
        local_1c0 = &LAB_1457a9eb2;
        local_1c8 = &DAT_149e063b2;
        local_1d0 = 0;
        local_1d8 = 0x10000004;
        local_1e0 = 0x10;
        local_1e8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30))
      goto LAB_140dd7d77;
      uVar14 = FUN_1447210f0(lVar9);
      bVar7 = FUN_1441207ad(uVar14);
      FUN_1447210f0(lVar9);
    }
    bVar8 = FUN_144120881();
    iVar16 = *(int *)(lVar17 + 0x34);
    if (iVar16 == 0) goto LAB_140dd7dd6;
    uVar2 = *(uint *)(lVar17 + 0x30);
    bVar21 = false;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140dd7dd8;
    puVar18 = (undefined8 *)
              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar18 == (undefined8 *)0x0) ||
       ((*(int *)(puVar18 + 2) != iVar16 || ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)))) {
LAB_140dd7dd6:
      bVar21 = false;
    }
    else {
      if ((*(uint *)(puVar18 + 1) & 0x10200000) == 0) {
        uVar14 = *puVar18;
      }
      else {
        uVar14 = 0;
      }
      lVar9 = FUN_1407f492e(uVar14);
      if ((lVar9 != 0) && (DAT_14cbadd90 == 0)) {
        local_178 = FUN_141030f22;
        local_1a0 = FUN_14081d0ea;
        local_1a8 = &LAB_1459f2e4c;
        local_1b0 = &local_178;
        local_1b8 = &LAB_148c39de3;
        local_1c0 = &LAB_1457a9eb2;
        local_1c8 = &DAT_149e063b2;
        local_1d0 = 0;
        local_1d8 = 0x10000004;
        local_1e0 = 0x10;
        local_1e8 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      lVar9 = FUN_1447210f0();
      if (lVar9 == 0) goto LAB_140dd7dd6;
      if ((*(longlong *)(lVar9 + 0x30) == 0) ||
         (lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x30) + 0x2b0), lVar9 == 0)) {
LAB_140dd7f7c:
        lVar9 = 0;
      }
      else {
        lVar17 = FUN_140a99ecc();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) goto LAB_140dd7f7c;
      }
      lVar17 = FUN_1411db1ae();
      bVar21 = false;
      if ((lVar9 != 0) && (lVar17 != 0)) {
        if (*(char *)(lVar9 + 0x6f8) != '\x01') goto LAB_140dd7dd6;
        if (*(longlong *)(lVar17 + 200) == 0) {
          piVar13 = (int *)&DAT_14c948618;
        }
        else {
          piVar13 = (int *)(*(longlong *)(lVar17 + 200) + 8);
        }
        bVar21 = *piVar13 != 0;
      }
    }
LAB_140dd7dd8:
    bVar7 = bVar8 | bVar7 | bVar21;
    if (*(byte *)(lVar3 + 0x32c) == bVar7) {
      if (*(int *)(lVar3 + 0x330) != 0) goto LAB_140dd7e01;
      iVar16 = 1;
    }
    else {
      iVar16 = *(int *)(lVar3 + 0x330) + 1;
    }
    *(byte *)(lVar3 + 0x32c) = bVar7;
    *(int *)(lVar3 + 0x330) = iVar16;
  }
LAB_140dd7e01:
  puVar6 = *(ushort **)(lVar3 + 0x80);
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
  }
  if (local_e8 != (longlong *)0x0) {
    (**(code **)(*local_e8 + 0x10))();
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_d4,local_d8) != 0) {
    FUN_1400020a8();
  }
LAB_140dd7eba:
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dd8236 FUN_140dd8236 body=1334 status=ok
// SIG undefined FUN_140dd8236(void)

void FUN_140dd8236(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong lVar4;
  code *pcVar5;
  void *_Src;
  ushort *puVar6;
  bool bVar7;
  undefined8 uVar8;
  longlong *plVar9;
  void **ppvVar10;
  int iVar11;
  longlong lVar12;
  PSRWLOCK SRWLock;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_128 [32];
  PSRWLOCK local_108;
  longlong local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1448d5e3c(&local_d8,param_1 + 0x208);
  lVar12 = *(longlong *)(CONCAT44(uStack_d4,local_d8) + 0x3e0);
  SRWLock = (PSRWLOCK)(lVar12 + 0xc0);
  AcquireSRWLockShared(SRWLock);
  plVar2 = (longlong *)CONCAT44(uStack_cc,uStack_d0);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar9 = plVar2 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  lVar4 = *(longlong *)(param_1 + 0x288);
  if (lVar4 == 0) goto LAB_140dd862e;
  local_108 = SRWLock;
  if ((*(int *)(param_1 + 0x330) == 0) || (*(int *)(param_1 + 0x330) != *(int *)(lVar12 + 0x48))) {
    *(int *)(param_1 + 0x330) = *(int *)(lVar12 + 0x48);
    FUN_1457b065a(param_1 + 800,lVar12 + 0x38);
    if (*(int *)(param_1 + 0x340) != *(int *)(lVar12 + 0x58)) goto LAB_140dd8753;
    uVar8 = *(undefined8 *)(param_1 + 0x338);
LAB_140dd82fb:
    plVar9 = (longlong *)(param_1 + 0x338);
    *(undefined8 *)(param_1 + 0x344) = uVar8;
    plVar2 = (longlong *)(lVar4 + 0x2e8);
    iVar11 = *(int *)(lVar4 + 0x2f4);
    local_f8 = lVar12;
    FUN_140d47191(*(undefined8 *)(lVar4 + 0x2e8),*(undefined4 *)(lVar4 + 0x2f0));
    *(undefined4 *)(lVar4 + 0x2f0) = 0;
    if ((iVar11 < 0) && (*(int *)(lVar4 + 0x2f4) != 0)) {
      FUN_148e6b6d0(plVar2,0);
    }
    plVar13 = *(longlong **)(param_1 + 800);
    *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + 2;
    if ((longlong)*(int *)(param_1 + 0x328) != 0) {
      plVar14 = plVar13 + (longlong)*(int *)(param_1 + 0x328) * 8;
      local_100 = lVar4 + 0x2a8;
      local_f0 = plVar9;
      do {
        FUN_1410d1d82(&local_d8);
        FUN_1400021e4(plVar13,&local_e8);
        if (CONCAT44(uStack_d4,local_d8) != 0) {
          FUN_1400020a8();
        }
        local_d8 = local_e8;
        uStack_d4 = uStack_e4;
        uStack_d0 = uStack_e0;
        uStack_cc = uStack_dc;
        plVar9 = (longlong *)plVar13[2];
        if (*(code **)(*plVar9 + 0x50) != FUN_144828418) {
          plVar9 = (longlong *)(**(code **)(*plVar9 + 0x50))();
        }
        FUN_1447a1fc0(plVar9);
        plVar9 = (longlong *)plVar13[2];
        pcVar5 = *(code **)(*plVar9 + 0x28);
        if (pcVar5 == FUN_14482841c) {
          ppvVar10 = (void **)(plVar9 + 3);
          if (plVar9[5] != 0) {
            ppvVar10 = (void **)(plVar9[5] + 8);
          }
        }
        else if (pcVar5 == (code *)&LAB_14010c34c) {
          ppvVar10 = (void **)(plVar9 + 2);
        }
        else {
          ppvVar10 = (void **)(*pcVar5)(plVar9);
        }
        if (&local_c8 != ppvVar10) {
          iVar11 = *(int *)(ppvVar10 + 1);
          _Src = *ppvVar10;
          local_c0 = iVar11;
          if (iVar11 == 0 && local_bc == 0) {
            local_bc = 0;
          }
          else {
            FUN_1446dd670(&local_c8,iVar11);
            if (iVar11 != 0) {
              memcpy(local_c8,_Src,(longlong)iVar11 * 2);
            }
          }
        }
        local_50 = local_50 | 0x20;
        iVar11 = *(int *)(lVar4 + 0x2f0);
        *(uint *)(lVar4 + 0x2f0) = iVar11 + 1U;
        if (*(uint *)(lVar4 + 0x2f4) < iVar11 + 1U) {
          FUN_1410d2002(plVar2,iVar11);
        }
        FUN_1410d0c56((longlong)iVar11 * 0x90 + *plVar2);
        plVar9 = local_f0;
        if (*local_f0 == *plVar13) {
          iVar11 = *(int *)(lVar4 + 0x2f0);
          if (0 < (longlong)iVar11) {
            lVar12 = 0;
            do {
              *(byte *)(*plVar2 + 0x88 + lVar12) =
                   *(byte *)(*plVar2 + 0x88 + lVar12) & 0xbf |
                   ((ulonglong)(iVar11 - 1) * 0x90 == lVar12) << 6;
              lVar12 = lVar12 + 0x90;
            } while ((longlong)iVar11 * 0x90 != lVar12);
          }
          uVar8 = FUN_1447a1f4a(plVar13 + 2);
          FUN_144a787a6(local_100,uVar8);
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x10))();
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_d4,local_d8) != 0) {
          FUN_1400020a8();
        }
        plVar13 = plVar13 + 8;
      } while (plVar13 != plVar14);
    }
    bVar7 = *plVar9 != DAT_14cbde978 && *plVar9 != DAT_14cbde920;
    lVar12 = local_f8;
    if ((bool)*(char *)(lVar4 + 0x318) == bVar7) {
      if (*(int *)(lVar4 + 0x31c) != 0) goto LAB_140dd8607;
      iVar11 = 1;
    }
    else {
      iVar11 = *(int *)(lVar4 + 0x31c) + 1;
    }
    *(bool *)(lVar4 + 0x318) = bVar7;
    *(int *)(lVar4 + 0x31c) = iVar11;
  }
  else if (*(int *)(param_1 + 0x340) != *(int *)(lVar12 + 0x58)) {
LAB_140dd8753:
    uVar8 = *(undefined8 *)(lVar12 + 0x50);
    *(undefined8 *)(param_1 + 0x338) = uVar8;
    *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(lVar12 + 0x58);
    goto LAB_140dd82fb;
  }
LAB_140dd8607:
  if (*(int *)(param_1 + 0x350) != *(int *)(lVar12 + 0x2c)) {
    uVar3 = *(undefined1 *)(lVar12 + 0x28);
    *(undefined1 *)(param_1 + 0x34c) = uVar3;
    *(undefined4 *)(param_1 + 0x350) = *(undefined4 *)(lVar12 + 0x2c);
    *(undefined1 *)(lVar4 + 0x141) = uVar3;
    uVar3 = *(undefined1 *)(param_1 + 0x34c);
    *(undefined1 *)(lVar4 + 0x140) = uVar3;
    *(undefined1 *)(param_1 + 0x354) = uVar3;
  }
  puVar6 = *(ushort **)(lVar4 + 0x80);
  SRWLock = local_108;
  if (puVar6 != (ushort *)0x0) {
    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar4 + 0x78) & 0x3f));
  }
LAB_140dd862e:
  ReleaseSRWLockShared(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dd876d FUN_140dd876d body=63 status=ok
// SIG undefined FUN_140dd876d(void)

void FUN_140dd876d(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-3] + 0x10))();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140dd87ac FUN_140dd87ac body=102 status=ok
// SIG undefined FUN_140dd87ac(void)

void FUN_140dd87ac(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      *(undefined8 *)(param_1 + -0x28) = 0;
      *(undefined4 *)(param_1 + -0x20) = 0;
      *(undefined8 *)(param_1 + -0x28) = *(undefined8 *)(param_2 + -0x28);
      *(undefined4 *)(param_1 + -0x20) = *(undefined4 *)(param_2 + -0x20);
      FUN_140dd90de(param_1 + -0x18,param_2 + -0x18);
      FUN_140dd90de(param_1,param_2);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140dd8812 FUN_140dd8812 body=1569 status=ok
// SIG undefined FUN_140dd8812(void)

void FUN_140dd8812(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  code *pcVar12;
  void *_Src;
  ushort *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  void **ppvVar16;
  longlong lVar17;
  longlong *plVar18;
  PSRWLOCK SRWLock;
  longlong *plVar19;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  PSRWLOCK local_f8;
  longlong local_f0;
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  longlong local_d8;
  int local_d0;
  undefined4 uStack_cc;
  void *local_c8;
  int local_c0;
  int local_bc;
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  longlong local_88 [2];
  longlong *local_78;
  longlong local_68;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1448d5e3c(&local_d8,param_1 + 0x208);
  puVar10 = *(undefined4 **)(local_d8 + 0x3e0);
  SRWLock = (PSRWLOCK)(puVar10 + 0x30);
  AcquireSRWLockShared(SRWLock);
  plVar19 = (longlong *)CONCAT44(uStack_cc,local_d0);
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar19 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  lVar11 = *(longlong *)(param_1 + 0x288);
  if (lVar11 == 0) goto LAB_140dd8d56;
  local_f8 = SRWLock;
  if ((*(int *)(param_1 + 0x2d0) == 0) || (*(int *)(param_1 + 0x2d0) != puVar10[0x1c])) {
    *(undefined4 *)(param_1 + 0x2d0) = puVar10[0x1c];
    FUN_140dd8e34(param_1 + 0x2c0,puVar10 + 0x18);
    if (*(int *)(param_1 + 0x2e0) != puVar10[0x20]) goto LAB_140dd8e11;
LAB_140dd88df:
    local_100 = (longlong *)(param_1 + 0x2d8);
    local_108 = (longlong *)(lVar11 + 0x110);
    iVar3 = *(int *)(lVar11 + 0x11c);
    FUN_140d47191(*(undefined8 *)(lVar11 + 0x110),*(undefined4 *)(lVar11 + 0x118));
    *(undefined4 *)(lVar11 + 0x118) = 0;
    if ((iVar3 < 0) && (*(int *)(lVar11 + 0x11c) != 0)) {
      FUN_148e6b6d0(local_108,0);
    }
    plVar19 = *(longlong **)(param_1 + 0x2c0);
    *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + 2;
    if ((longlong)*(int *)(param_1 + 0x2c8) != 0) {
      plVar18 = plVar19 + (longlong)*(int *)(param_1 + 0x2c8) * 0x12;
      local_f0 = lVar11 + 0xd0;
      do {
        FUN_1410d1d82(&local_d8);
        FUN_1400021e4(plVar19,&local_e8);
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        local_d8 = local_e8;
        local_d0 = local_e0;
        uStack_cc = local_dc;
        iVar3 = local_e0 + -1;
        if (local_e0 == 0) {
          iVar3 = 0;
        }
        FUN_1402980a2(local_88,local_e8,iVar3);
        plVar15 = (longlong *)plVar19[8];
        if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
          plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
        }
        FUN_1447a1fc0(plVar15);
        plVar15 = (longlong *)plVar19[8];
        pcVar12 = *(code **)(*plVar15 + 0x28);
        if (pcVar12 == FUN_14482841c) {
          ppvVar16 = (void **)(plVar15 + 3);
          if (plVar15[5] != 0) {
            ppvVar16 = (void **)(plVar15[5] + 8);
          }
        }
        else if (pcVar12 == (code *)&LAB_14010c34c) {
          ppvVar16 = (void **)(plVar15 + 2);
        }
        else {
          ppvVar16 = (void **)(*pcVar12)(plVar15);
        }
        if (&local_c8 != ppvVar16) {
          iVar3 = *(int *)(ppvVar16 + 1);
          _Src = *ppvVar16;
          local_c0 = iVar3;
          if (iVar3 == 0 && local_bc == 0) {
            local_bc = 0;
          }
          else {
            FUN_1446dd670(&local_c8,iVar3);
            if (iVar3 != 0) {
              memcpy(local_c8,_Src,(longlong)iVar3 * 2);
            }
          }
        }
        local_50 = local_50 | 0x20;
        iVar3 = *(int *)(lVar11 + 0x118);
        *(uint *)(lVar11 + 0x118) = iVar3 + 1U;
        if (*(uint *)(lVar11 + 0x11c) < iVar3 + 1U) {
          FUN_1410d2002(local_108,iVar3);
        }
        FUN_1410d0c56((longlong)iVar3 * 0x90 + *local_108,&local_d8);
        if (*local_100 == *plVar19) {
          iVar3 = *(int *)(lVar11 + 0x118);
          *(uint *)(param_1 + 700) = iVar3 - 1U;
          if ((0 < iVar3) && (uVar4 = *(uint *)(lVar11 + 0x118), iVar3 <= (int)uVar4)) {
            lVar17 = 0;
            do {
              *(byte *)(*local_108 + 0x88 + lVar17) =
                   *(byte *)(*local_108 + 0x88 + lVar17) & 0xbf |
                   ((ulonglong)(iVar3 - 1U) * 0x90 == lVar17) << 6;
              lVar17 = lVar17 + 0x90;
            } while ((ulonglong)uVar4 * 0x90 != lVar17);
          }
          uVar14 = FUN_1447a1f4a(plVar19 + 8);
          FUN_144a787a6(local_f0,uVar14);
        }
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != (longlong *)0x0) {
          (**(code **)(*local_78 + 0x10))();
        }
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        if (local_c8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_d8 != 0) {
          FUN_1400020a8();
        }
        plVar19 = plVar19 + 0x12;
      } while (plVar19 != plVar18);
    }
  }
  else if (*(int *)(param_1 + 0x2e0) != puVar10[0x20]) {
LAB_140dd8e11:
    local_100 = (longlong *)(param_1 + 0x2d8);
    *local_100 = *(undefined8 *)(puVar10 + 0x1e);
    *(undefined4 *)(param_1 + 0x2e0) = puVar10[0x20];
    goto LAB_140dd88df;
  }
  if (*(int *)(param_1 + 0x35c) != puVar10[0xd]) {
    uVar2 = *(undefined1 *)(puVar10 + 0xc);
    *(undefined1 *)(param_1 + 0x358) = uVar2;
    *(undefined4 *)(param_1 + 0x35c) = puVar10[0xd];
    *(undefined1 *)(lVar11 + 0x161) = uVar2;
    uVar2 = *(undefined1 *)(param_1 + 0x358);
    *(undefined1 *)(lVar11 + 0x160) = uVar2;
    *(undefined1 *)(param_1 + 0x360) = uVar2;
  }
  iVar3 = *(int *)(param_1 + 0x300);
  iVar5 = puVar10[0x26];
  if (iVar3 != iVar5 || iVar3 == 0) {
    *(int *)(param_1 + 0x300) = iVar5;
    FUN_140dd8e34(param_1 + 0x2f0,puVar10 + 0x22);
  }
  SRWLock = local_f8;
  iVar6 = *(int *)(param_1 + 0x310);
  iVar7 = puVar10[0x2a];
  if (iVar6 != iVar7) {
    *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(puVar10 + 0x28);
    *(undefined4 *)(param_1 + 0x310) = puVar10[0x2a];
  }
  iVar8 = *(int *)(param_1 + 0x31c);
  iVar9 = puVar10[0x2d];
  if (iVar8 != iVar9) {
    *(undefined8 *)(param_1 + 0x314) = *(undefined8 *)(puVar10 + 0x2b);
    *(undefined4 *)(param_1 + 0x31c) = puVar10[0x2d];
  }
  if (*(int *)(param_1 + 0x2ec) == puVar10[1]) {
    if (!(bool)(~((iVar3 != iVar5 || iVar3 == 0) || iVar6 != iVar7) & iVar8 == iVar9))
    goto LAB_140dd8d34;
  }
  else {
    *(undefined4 *)(param_1 + 0x2e8) = *puVar10;
    *(undefined4 *)(param_1 + 0x2ec) = puVar10[1];
LAB_140dd8d34:
    FUN_140dd75a4(param_1);
  }
  puVar13 = *(ushort **)(lVar11 + 0x80);
  if (puVar13 != (ushort *)0x0) {
    *puVar13 = *puVar13 | (ushort)(1L << (*(byte *)(lVar11 + 0x78) & 0x3f));
  }
LAB_140dd8d56:
  ReleaseSRWLockShared(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dd8e34 FUN_140dd8e34 body=93 status=ok
// SIG undefined FUN_140dd8e34(void)

undefined8 * FUN_140dd8e34(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140dd8e91(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140dd8ef4(param_1,iVar1);
      FUN_140dd8fdf(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140dd8e91 FUN_140dd8e91 body=99 status=ok
// SIG undefined FUN_140dd8e91(void)

void FUN_140dd8e91(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-3] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-3] + 0x10))();
      }
      if ((longlong *)plVar1[-6] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-6] + 0x10))();
      }
      if (plVar1[-9] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140dd8ef4 FUN_140dd8ef4 body=235 status=ok
// SIG undefined FUN_140dd8ef4(void)

void FUN_140dd8ef4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x90;
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
    iVar1 = (int)(uVar3 / 0x90);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x90,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140dd8fdf FUN_140dd8fdf body=254 status=ok
// SIG undefined FUN_140dd8fdf(void)

void FUN_140dd8fdf(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_3 != 0) {
    lVar4 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + lVar4);
      *puVar1 = 0;
      *(undefined4 *)(puVar1 + 1) = 0;
      lVar3 = param_2 + 0x10 + lVar4;
      *puVar1 = *(undefined8 *)(lVar3 + -0x10);
      *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(lVar3 + -8);
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(undefined4 *)(puVar1 + 4) = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      *(undefined4 *)(puVar1 + 7) = 0;
      FUN_1447715ec(puVar1 + 2,lVar3);
      *(undefined4 *)(puVar1 + 7) = *(undefined4 *)(lVar3 + 0x28);
      FUN_140dd90de(param_1 + lVar4 + 0x40,param_2 + lVar4 + 0x40);
      FUN_140dd90de(param_1 + lVar4 + 0x58,param_2 + lVar4 + 0x58);
      lVar3 = param_1 + lVar4;
      lVar2 = param_2 + lVar4;
      FUN_140dd90de(lVar3 + 0x70,lVar2 + 0x70);
      *(undefined1 *)(lVar3 + 0x88) = 0;
      *(undefined4 *)(lVar3 + 0x8c) = 0;
      *(undefined1 *)(lVar3 + 0x88) = *(undefined1 *)(lVar2 + 0x88);
      *(undefined4 *)(lVar3 + 0x8c) = *(undefined4 *)(lVar2 + 0x8c);
      lVar4 = lVar4 + 0x90;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140dd90de FUN_140dd90de body=306 status=ok
// SIG undefined FUN_140dd90de(void)

longlong * FUN_140dd90de(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
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
  plVar2 = DAT_14c844840;
  *param_1 = (longlong)DAT_14c844840;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = (longlong *)*param_1;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(int *)(param_1 + 2) = (int)param_2[2];
  return param_1;
}



// FUNCTION 140dd9210 FUN_140dd9210 body=724 status=ok
// SIG undefined FUN_140dd9210(void)

void FUN_140dd9210(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) == 1) {
    iVar12 = 0;
    uVar8 = 1;
  }
  else {
    FUN_140c04f5c(plVar1,1);
    iVar12 = *(int *)(param_1 + 0x18);
    uVar8 = *(uint *)(param_1 + 0x1c);
  }
  *(uint *)(param_1 + 0x18) = iVar12 + 1U;
  if (uVar8 < iVar12 + 1U) {
    FUN_1401fd32e(plVar1,iVar12);
  }
  lVar10 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(lVar10 + 8 + (longlong)iVar12 * 0x10) = 0xffffffff;
  *(undefined8 *)(lVar10 + (longlong)iVar12 * 0x10) = 0xffffffffffffffff;
  plVar2 = (longlong *)(param_1 + 0x20);
  FUN_1400e1c41(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == 1) {
    iVar12 = 0;
    uVar8 = 1;
  }
  else {
    FUN_140dd94e6(plVar2);
    iVar12 = *(int *)(param_1 + 0x28);
    uVar8 = *(uint *)(param_1 + 0x2c);
  }
  *(uint *)(param_1 + 0x28) = iVar12 + 1U;
  if (uVar8 < iVar12 + 1U) {
    FUN_1405a6c8c(plVar2,iVar12);
  }
  lVar10 = *plVar2;
  puVar3 = (undefined8 *)(lVar10 + (longlong)iVar12 * 0x18);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar10 + 0x10 + (longlong)iVar12 * 0x18) = 0;
  *(short *)(*plVar1 + 10) = (short)iVar12;
  lVar10 = param_2[1];
  if (lVar10 == 0) {
    uVar9 = FUN_14012344a();
    lVar10 = FUN_14477b664(uVar9);
    param_2[1] = lVar10;
  }
  lVar11 = param_2[2];
  local_98 = plVar2;
  if (((lVar11 == 0) && (lVar11 = 0, lVar10 != 0)) && (*param_2 != 0)) {
    plVar1 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar7 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar7 == '\0')) {
      lVar11 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar11 = FUN_144aff482(uVar9,param_2);
    }
    param_2[2] = lVar11;
  }
  iVar12 = *(int *)(lVar11 + 0x20);
  if ((longlong)iVar12 != 0) {
    lVar10 = *(longlong *)(lVar11 + 0x18);
    lVar11 = 0;
    do {
      local_88 = 0;
      local_90 = *param_2;
      local_80 = 0;
      uVar9 = FUN_14477b664(param_2[1]);
      local_88 = FUN_14477b664(uVar9);
      local_80 = param_2[2];
      uStack_70 = 0;
      uStack_68 = 0;
      local_78 = *(undefined8 *)(lVar10 + 8 + lVar11);
      FUN_1405a630a(&local_90);
      plVar1 = (longlong *)*local_98;
      iVar5 = (int)plVar1[1];
      *(uint *)(plVar1 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar1 + 0xc) < iVar5 + 1U) {
        FUN_1405a63b6(plVar1,iVar5);
      }
      lVar6 = *plVar1;
      lVar13 = (longlong)iVar5 * 0x30;
      *(undefined8 *)(lVar6 + lVar13) = 0;
      ((undefined8 *)(lVar6 + lVar13))[1] = 0;
      *(undefined8 *)(lVar6 + 0x10 + lVar13) = 0;
      *(longlong *)(lVar6 + lVar13) = local_90;
      uVar9 = FUN_14477b664(local_88);
      uVar9 = FUN_14477b664(uVar9);
      *(undefined8 *)(lVar6 + 8 + lVar13) = uVar9;
      *(longlong *)(lVar6 + 0x10 + lVar13) = local_80;
      puVar4 = (undefined4 *)(lVar6 + 0x18 + lVar13);
      *puVar4 = (undefined4)local_78;
      puVar4[1] = local_78._4_4_;
      puVar4[2] = (undefined4)uStack_70;
      puVar4[3] = uStack_70._4_4_;
      *(undefined8 *)(lVar6 + 0x28 + lVar13) = uStack_68;
      lVar11 = lVar11 + 0x60;
    } while ((longlong)iVar12 * 0x60 != lVar11);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dd94e6 FUN_140dd94e6 body=161 status=ok
// SIG undefined FUN_140dd94e6(void)

undefined8 FUN_140dd94e6(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar3 = 0x18;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e02];
  }
  else {
    uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x18,8);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if (0 < (int)(uVar3 / 0x18)) {
    uVar4 = uVar3 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar2;
}



// FUNCTION 140dd9588 FUN_140dd9588 body=196 status=ok
// SIG undefined FUN_140dd9588(void)

undefined8 FUN_140dd9588(undefined8 param_1,longlong param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    puVar4 = (undefined8 *)(param_2 + 0x18);
    do {
      lVar3 = param_3[1];
      if (DAT_14c950c29 == '\x01') {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = param_3[1];
        }
      }
      puVar4[-2] = lVar3;
      puVar4[-1] = param_3[2];
      if (puVar4 + -3 != param_3) {
        iVar2 = *(int *)(param_3 + 4);
        _Src = (void *)param_3[3];
        *(int *)(puVar4 + 1) = iVar2;
        if (iVar2 == 0 && *(int *)((longlong)puVar4 + 0xc) == 0) {
          *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        }
        else {
          FUN_140dd964c(puVar4,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*puVar4,_Src,(longlong)iVar2 << 3);
          }
        }
      }
      puVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      puVar4[2] = *puVar1;
      puVar4 = puVar4 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140dd964c FUN_140dd964c body=317 status=ok
// SIG undefined FUN_140dd964c(void)

void FUN_140dd964c(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140dd96ba;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140dd96ba:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140dd9790 FUN_140dd9790 body=334 status=ok
// SIG undefined FUN_140dd9790(void)

ulonglong FUN_140dd9790(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  DWORD DVar6;
  DWORD DVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  lVar4 = DAT_14ca2f7d0;
  iVar1 = *(int *)(param_1 + 4);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar2 = *(int *)(lVar3 + 0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    uVar9 = 0;
  }
  else if (iVar2 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  lVar5 = DAT_14ca2f878;
  iVar2 = *(int *)(lVar4 + uVar9 * 4);
  iVar8 = 2;
  if (iVar2 < 2) {
    iVar8 = iVar2;
  }
  iVar10 = 0;
  if (0 < iVar8) {
    iVar10 = iVar8;
  }
  if ((iVar1 / 2) % 3 == iVar10) {
    iVar2 = *(int *)(lVar3 + 0xc60);
    if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
      uVar9 = 0;
    }
    else if (iVar2 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar6 != DVar7);
    }
    else {
      uVar9 = 1;
    }
    uVar9 = (ulonglong)(byte)(((iVar1 / 6) % 2 != (uint)(0 < *(int *)(lVar5 + uVar9 * 4))) * '\x02')
    ;
  }
  else {
    uVar9 = CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),2);
  }
  return uVar9;
}



// FUNCTION 140dd98de FUN_140dd98de body=838 status=ok
// SIG undefined FUN_140dd98de(void)

void FUN_140dd98de(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  longlong lVar9;
  undefined **ppuVar10;
  longlong lVar11;
  longlong lVar12;
  undefined **_Src;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar7 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar7,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_140dd9b1b;
    bVar3 = DAT_14c8442b8 & 1;
  }
  if (((bVar3 == 0) &&
      (((DAT_14c760d84 != 0 && ((DAT_14ca84f5a & 1) != 0)) ||
       (cVar5 = FUN_1406917e6(), cVar5 != '\0')))) && (DAT_14c76194c != 0)) {
    local_88 = 0;
    uStack_80 = 0;
    (**(code **)(*param_1 + 0x790))(param_1,&local_88,0);
    local_58 = (undefined **)0x0;
    local_4c = 2;
    local_78 = &DAT_14caa7810;
    if (param_1[0xcf] == 0) {
      local_78 = &DAT_14caa77a0;
    }
    local_50 = 1;
    local_70 = 0;
    cVar5 = FUN_140dd9c25(DAT_14ca85550);
    if (cVar5 != '\0') {
      local_50 = 2;
      local_68 = &DAT_14caa7880;
      local_60 = 0;
    }
    cVar5 = FUN_140dd9c80(DAT_14ca85550);
    if (cVar5 != '\0') {
      puVar8 = (undefined *)FUN_14324bda9();
      uVar4 = local_50;
      lVar13 = (longlong)(int)local_50;
      local_50 = local_50 + 1;
      if (local_4c < local_50) {
        FUN_140df0cf8(&local_78,uVar4);
      }
      ppuVar10 = local_58;
      if (local_58 == (undefined **)0x0) {
        ppuVar10 = &local_78;
      }
      ppuVar10[lVar13 * 2] = puVar8;
      ppuVar10[lVar13 * 2 + 1] = (undefined *)0x0;
    }
    lVar13 = local_88;
    lVar12 = (longlong)(int)uStack_80;
    if (lVar12 != 0) {
      lVar11 = 0;
      do {
        lVar14 = *(longlong *)(lVar13 + lVar11);
        if (lVar14 != 0) {
          iVar2 = *(int *)(param_3 + 0x128);
          *(uint *)(param_3 + 0x128) = iVar2 + 1U;
          if (*(uint *)(param_3 + 300) < iVar2 + 1U) {
            FUN_1401acddc(param_3,iVar2);
          }
          lVar6 = *(longlong *)(param_3 + 0x120);
          if (*(longlong *)(param_3 + 0x120) == 0) {
            lVar6 = param_3;
          }
          lVar9 = (longlong)iVar2 * 0x48;
          FUN_1447244c4(lVar6 + lVar9,1);
          uVar4 = local_50;
          lVar6 = *(longlong *)(param_3 + 0x120);
          if (*(longlong *)(param_3 + 0x120) == 0) {
            lVar6 = param_3;
          }
          puVar1 = (undefined1 *)(lVar6 + lVar9);
          lVar9 = lVar9 + lVar6;
          ppuVar10 = (undefined **)(lVar9 + 0x18);
          *(longlong *)(lVar9 + 8) = lVar14;
          *(undefined8 *)(lVar9 + 0x10) = *local_90;
          if (ppuVar10 != &local_78) {
            _Src = local_58;
            if (local_58 == (undefined **)0x0) {
              _Src = &local_78;
            }
            lVar14 = (longlong)(int)local_50;
            *(uint *)(puVar1 + 0x40) = local_50;
            if (local_50 == 0 && *(int *)(puVar1 + 0x44) == 0) {
              *(undefined4 *)(puVar1 + 0x44) = 2;
            }
            else {
              FUN_1447376de(ppuVar10,local_50);
              if (uVar4 != 0) {
                if (*(undefined ***)(puVar1 + 0x38) != (undefined **)0x0) {
                  ppuVar10 = *(undefined ***)(puVar1 + 0x38);
                }
                memcpy(ppuVar10,_Src,lVar14 << 4);
              }
            }
          }
          *puVar1 = 1;
        }
        lVar11 = lVar11 + 8;
      } while (lVar12 * 8 != lVar11);
    }
    if (local_58 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
LAB_140dd9b1b:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dd9c25 FUN_140dd9c25 body=91 status=ok
// SIG undefined FUN_140dd9c25(void)

byte FUN_140dd9c25(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  bVar1 = FUN_1449d9015(param_1,0);
  bVar2 = FUN_144880847(param_1 & 0xffffffff,0);
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  lVar3 = (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Water.WaterInfo.RenderMethod",1);
  return lVar3 != 0 | bVar1 | bVar2;
}



// FUNCTION 140dd9c80 FUN_140dd9c80 body=600 status=ok
// SIG undefined FUN_140dd9c80(void)

ulonglong FUN_140dd9c80(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ushort uVar8;
  undefined8 uVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa2688) && (FUN_144b3d300(&DAT_14caa2688), DAT_14caa2688 == -1)) {
    FUN_1457b071c(&DAT_14caa2678);
    _Init_thread_footer(&DAT_14caa2688);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caa26a8) && (FUN_144b3d300(&DAT_14caa26a8), DAT_14caa26a8 == -1)) {
    FUN_140056680(&DAT_14caa2690,L"landscape.SupportGPUCulling");
    DAT_14caa26a0 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_14324bd98);
    _Init_thread_footer(&DAT_14caa26a8);
  }
  uVar8 = (ushort)param_1;
  uVar7 = (ulonglong)param_1 & 0xffff;
  puVar3 = &DAT_14ca84468;
  if (uVar8 != 0x31) {
    switch((int)uVar7) {
    case 0x30:
switchD_140dd9d5d_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_140dd9d5d_caseD_31:
      if ((uVar8 & 0xfff0) != 0x20) {
        uVar9 = 0;
        goto LAB_140dd9ce6;
      }
      lVar5 = FUN_14741392a();
      puVar3 = (undefined8 *)(lVar5 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_140dd9d5d_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_140dd9d5d_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(uVar7) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_140dd9d5d_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_140dd9d5d_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_140dd9d5d_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_140dd9d5d_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
  }
  uVar9 = *puVar3;
LAB_140dd9ce6:
  if (DAT_14caa26a0 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar6 = DAT_14caa2690;
    if (DAT_14caa2698 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    DAT_14caa26a0 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar6,1);
  }
  cVar1 = FUN_14002b5e0(uVar9,"Windows",7);
  if ((((cVar1 == '\0') && (DAT_14ca85550 != uVar8)) ||
      (iVar2 = (**(code **)(*DAT_14caa26a0 + 0xb0))(), iVar2 == 0)) ||
     (cVar1 = FUN_14005b4aa((ulonglong)param_1), cVar1 != '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
    if (((&DAT_14ca814cc)[uVar7 * 0x3c] & 0x10) != 0) {
      uVar4 = FUN_14745b4a0(&DAT_14caa2678);
      uVar4 = uVar4 ^ 1;
    }
  }
  return uVar4;
}



// FUNCTION 140dd9ed8 FUN_140dd9ed8 body=218 status=ok
// SIG undefined FUN_140dd9ed8(void)

void FUN_140dd9ed8(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = *(undefined4 *)(param_1 + 0x38);
  uStack_44 = *(undefined4 *)(param_1 + 0x3c);
  uStack_40 = *(undefined4 *)(param_1 + 0x40);
  uStack_3c = *(undefined4 *)(param_1 + 0x44);
  FUN_1407e4e88();
  local_38 = DAT_14cb8a448;
  local_34 = local_48;
  uStack_30 = uStack_44;
  uStack_2c = uStack_40;
  uStack_28 = uStack_3c;
  local_24 = 0;
  lVar2 = FUN_140d73496(param_2);
  if (lVar2 != 0) {
    if ((((*(int *)(lVar2 + 0x28) == *(int *)(param_1 + 0x60)) &&
         (*(int *)(lVar2 + 0x2c) == *(int *)(param_1 + 100))) &&
        (*(int *)(lVar2 + 0x30) == *(int *)(param_1 + 0x68))) &&
       (*(int *)(lVar2 + 0x34) == *(int *)(param_1 + 0x6c))) {
      FUN_140dd9fb4(lVar2);
    }
    pbVar1 = (byte *)(lVar2 + 9);
    *pbVar1 = *pbVar1 & 0xfe;
    if (*pbVar1 == 0) {
      local_48 = *(undefined4 *)(param_1 + 0x38);
      uStack_44 = *(undefined4 *)(param_1 + 0x3c);
      uStack_40 = *(undefined4 *)(param_1 + 0x40);
      uStack_3c = *(undefined4 *)(param_1 + 0x44);
      FUN_1407e4e88();
      local_38 = DAT_14cb8a448;
      local_34 = local_48;
      uStack_30 = uStack_44;
      uStack_2c = uStack_40;
      uStack_28 = uStack_3c;
      local_24 = 0;
      FUN_140dda022(*(undefined8 *)(param_2 + 0x10));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dd9fb4 FUN_140dd9fb4 body=109 status=ok
// SIG undefined FUN_140dd9fb4(void)

void FUN_140dd9fb4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  
  if (0 < *(int *)(param_1 + 0x68)) {
    iVar4 = 0;
    do {
      FUN_140dda8d8(param_1,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x68));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar3 = *(longlong **)(param_1 + 0x40);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140dda01d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140dda022 FUN_140dda022 body=559 status=ok
// SIG undefined FUN_140dda022(void)

void FUN_140dda022(longlong *param_1,uint *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong *plVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    uVar4 = FUN_1447addd0(param_2 + 1,0x10);
    uVar7 = uVar4 >> 0xd ^ param_2[5] - uVar4;
    uVar8 = uVar7 << 8 ^ (-0x61c88647 - uVar7) - uVar4;
    uVar10 = uVar8 >> 0xd ^ (uVar4 - uVar7) - uVar8;
    uVar4 = uVar10 >> 0xc ^ (uVar7 - uVar8) - uVar10;
    uVar7 = uVar4 << 0x10 ^ (uVar8 - uVar10) - uVar4;
    uVar8 = uVar7 >> 5 ^ (uVar10 - uVar4) - uVar7;
    uVar10 = uVar8 >> 3 ^ (uVar4 - uVar7) - uVar8;
    uVar4 = uVar10 << 10 ^ (uVar7 - uVar8) - uVar10;
    uVar7 = uVar6 >> 0xd ^ (uVar4 >> 0xf ^ uVar8 - (uVar10 + uVar4)) - uVar6;
    uVar4 = uVar7 << 8 ^ (-0x61c88647 - uVar6) - uVar7;
    uVar6 = uVar4 >> 0xd ^ (uVar6 - uVar7) - uVar4;
    uVar8 = uVar6 >> 0xc ^ (uVar7 - uVar4) - uVar6;
    uVar7 = uVar8 << 0x10 ^ (uVar4 - uVar6) - uVar8;
    uVar6 = uVar7 >> 5 ^ (uVar6 - uVar8) - uVar7;
    uVar4 = uVar6 >> 3 ^ (uVar8 - uVar7) - uVar6;
    uVar7 = uVar4 << 10 ^ (uVar7 - uVar6) - uVar4;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    uVar13 = (longlong)(int)(uVar7 >> 0xf ^ uVar6 - (uVar4 + uVar7)) &
             (longlong)(int)param_1[9] - 1U;
    lVar5 = (longlong)*(int *)((longlong)plVar14 + uVar13 * 4);
    if (lVar5 != -1) {
      lVar5 = lVar5 * 0x28 + *param_1;
      cVar3 = FUN_1407e4f53(lVar5,param_2);
      if (cVar3 == '\0') {
        do {
          lVar11 = lVar5;
          lVar5 = (longlong)*(int *)(lVar11 + 0x20);
          if (lVar5 == -1) {
            return;
          }
          lVar5 = lVar5 * 0x28 + *param_1;
          cVar3 = FUN_1407e4f53(lVar5,param_2);
        } while (cVar3 == '\0');
        piVar12 = (int *)(lVar11 + 0x20);
      }
      else {
        piVar12 = (int *)((longlong)plVar14 + uVar13 * 4);
      }
      iVar1 = *piVar12;
      plVar14 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar14 = (longlong *)param_1[8];
      }
      lVar5 = *param_1 + (longlong)iVar1 * 0x28;
      lVar11 = (longlong)*(int *)(lVar5 + 0x24);
      iVar9 = *(int *)((longlong)plVar14 + lVar11 * 4);
      if (iVar9 == iVar1) {
        piVar12 = (int *)((longlong)plVar14 + lVar11 * 4);
      }
      else {
        do {
          piVar12 = (int *)(*param_1 + (longlong)iVar9 * 0x28 + 0x20);
          iVar9 = *piVar12;
        } while (iVar9 != iVar1);
      }
      *piVar12 = *(int *)(lVar5 + 0x20);
      puVar2 = *(undefined8 **)(*param_1 + 0x18 + (longlong)iVar1 * 0x28);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      FUN_140dda278(param_1,iVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140dda252 FUN_140dda252 body=38 status=ok
// SIG undefined FUN_140dda252(void)

undefined8 FUN_140dda252(undefined8 param_1,int param_2)

{
  FUN_140dda302();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dda278 FUN_140dda278 body=138 status=ok
// SIG undefined FUN_140dda278(void)

void FUN_140dda278(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140dda302 FUN_140dda302 body=639 status=ok
// SIG undefined FUN_140dda302(void)

void FUN_140dda302(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b422db8;
  if (0 < DAT_14cb8a458) {
    uVar5 = 0;
    lVar3 = DAT_14cb8a450;
    iVar6 = DAT_14cb8a458;
    do {
      if (*(undefined8 **)(lVar3 + (longlong)(int)uVar5 * 8) == param_1) {
        iVar7 = ~uVar5 + iVar6;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove((void *)(lVar3 + (longlong)(int)uVar5 * 8),
                  (void *)(lVar3 + (longlong)(iVar6 - iVar7) * 8),(longlong)iVar7 << 3);
          lVar3 = DAT_14cb8a450;
          iVar6 = DAT_14cb8a458;
        }
        uVar5 = uVar5 - 1;
        iVar6 = iVar6 + -1;
        DAT_14cb8a458 = iVar6;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar6);
  }
  if ((((*(int *)((longlong)param_1 + 0x10c) != 0) &&
       (uVar5 = *(uint *)(param_1 + 0x21), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x10c))) &&
      (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar3 = *plVar4, lVar3 != 0)))))) {
    if (param_1[0x23] != 0) {
      FUN_14480f766(lVar3 + 0x300);
    }
    if (param_1[0x24] != 0) {
      FUN_14480f766(lVar3 + 0x318);
    }
    if (param_1[0x25] != 0) {
      FUN_14480f766(lVar3 + 0x2b8);
    }
    if (param_1[0x26] != 0) {
      FUN_14480f766(lVar3 + 0x330);
      param_1[0x26] = 0;
    }
  }
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar6 = 0;
    do {
      FUN_140dda826(param_1,iVar6);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x28));
  }
  if (((*(int *)((longlong)param_1 + 0x2c) != 0 || *(int *)(param_1 + 5) != 0) ||
      *(int *)(param_1 + 6) != 0) || *(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_140dd9fb4(param_1);
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_140dda584(param_1 + 0x11);
  FUN_140dda5bb(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[10];
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
  plVar4 = (longlong *)param_1[8];
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
  FUN_144760e21(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140dda582 FUN_140dda582 body=1 status=ok
// SIG undefined FUN_140dda582(void)

void FUN_140dda582(void)

{
  return;
}



// FUNCTION 140dda584 FUN_140dda584 body=55 status=ok
// SIG undefined FUN_140dda584(void)

void FUN_140dda584(longlong *param_1)

{
  FUN_140dda5fc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140dda5bb FUN_140dda5bb body=65 status=ok
// SIG undefined FUN_140dda5bb(void)

void FUN_140dda5bb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
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



// FUNCTION 140dda5fc FUN_140dda5fc body=553 status=ok
// SIG undefined FUN_140dda5fc(void)

void FUN_140dda5fc(longlong *param_1,int param_2)

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
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar14 = 0;
    uVar12 = 1;
    iVar11 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar14) goto LAB_140dda7a4;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar7[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar12 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar6 * 0x60;
      *(undefined4 *)(lVar10 + 0x50 + lVar9) = 0;
      if (*(longlong *)(lVar10 + 0x48 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_1405b3e10(lVar10 + lVar9 + 8);
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar14;
      lVar10 = (longlong)iVar6;
      uVar3 = puVar7[lVar10] & uVar13;
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
          uVar3 = puVar7[lVar10 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar10 == lVar9) goto LAB_140dda7a4;
        }
        uVar14 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140dda7a4:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
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



// FUNCTION 140dda826 FUN_140dda826 body=178 status=ok
// SIG undefined FUN_140dda826(void)

void FUN_140dda826(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x138);
  lVar5 = (longlong)param_2;
  iVar1 = *(int *)(lVar4 + 4 + lVar5 * 0x18);
  if (((iVar1 != 0) && (uVar2 = *(uint *)(lVar4 + lVar5 * 0x18), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == iVar1)) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)))) {
      if (*(longlong *)(lVar4 + 8 + lVar5 * 0x18) != 0) {
        FUN_14480f766(lVar3 + 0x300);
        lVar4 = *(longlong *)(param_1 + 0x138);
      }
      if (*(longlong *)(lVar4 + 0x10 + lVar5 * 0x18) != 0) {
        FUN_14480f766(lVar3 + 0x318);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140dda8d8 FUN_140dda8d8 body=4437 status=ok
// SIG undefined FUN_140dda8d8(void)

void FUN_140dda8d8(longlong param_1,uint param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong *plVar11;
  void *_Dst;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  int *piVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  longlong *plVar20;
  longlong lVar21;
  undefined8 *puVar22;
  uint *puVar23;
  bool bVar24;
  longlong lVar25;
  float fVar26;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  uint *local_a8;
  longlong *local_a0;
  uint *local_98;
  uint *local_90;
  longlong local_88;
  longlong local_80;
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x68) <= (int)param_2)) goto LAB_140ddae22;
  lVar25 = (ulonglong)param_2 * 0x38;
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10 + lVar25);
  if ((iVar10 != 0) &&
     (((((uVar6 = *(uint *)(*(longlong *)(param_1 + 0x60) + lVar25 + 0xc), -1 < (int)uVar6 &&
         ((int)uVar6 < DAT_14c9647dc)) &&
        (plVar20 = (longlong *)
                   ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
        plVar20 != (longlong *)0x0)) &&
       (((int)plVar20[2] == iVar10 && ((*(uint *)(plVar20 + 1) & 0x10200000) == 0)))) &&
      (plVar20 = (longlong *)*plVar20, plVar20 != (longlong *)0x0)))) {
    if ((((*(int *)(param_1 + 0x114) != 0) && (uVar6 = *(uint *)(param_1 + 0x110), -1 < (int)uVar6))
        && ((int)uVar6 < DAT_14c9647dc)) &&
       ((((plVar11 = (longlong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
          plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + 0x114))) &&
         ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) && (*plVar11 != 0)))) {
      FUN_140ddbaba(plVar20);
    }
    if (DAT_14cb63950 == 0) {
      local_c0 = &local_78;
      local_78 = FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1464ec72a;
      local_c8 = &LAB_1486f5f75;
      local_d0 = &LAB_140945686;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(plVar20[2] + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
       (plVar11 = plVar20,
       *(longlong *)
        (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) !=
       DAT_14cb63950 + 0x30)) {
      plVar11 = (longlong *)0x0;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
LAB_140ddab19:
      bVar24 = false;
    }
    else {
      uVar6 = *(uint *)(param_1 + 0xe0);
      bVar24 = false;
      if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
        lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        if ((lVar13 != 0) &&
           ((*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0xe4) &&
            ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)))) {
          lVar13 = (**(code **)(*plVar20 + 0x658))(plVar20);
          if (*(int *)(param_1 + 0xe4) == 0) {
LAB_140ddb088:
            lVar21 = 0;
          }
          else {
            uVar6 = *(uint *)(param_1 + 0xe0);
            lVar21 = 0;
            if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
              plVar14 = (longlong *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
              if ((plVar14 == (longlong *)0x0) ||
                 (((int)plVar14[2] != *(int *)(param_1 + 0xe4) ||
                  ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_140ddb088;
              lVar21 = *plVar14;
            }
          }
          if (lVar13 == lVar21) {
            (**(code **)(*plVar20 + 0x660))(plVar20,0);
            bVar24 = true;
            goto LAB_140ddab1c;
          }
          if (plVar11 != (longlong *)0x0) {
            lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x30 + lVar25);
            if (lVar13 != 0) {
              local_a8 = *(uint **)(*(longlong *)(param_1 + 0x60) + lVar25 + 0x28);
              lVar21 = 0;
              bVar24 = false;
              do {
                uVar3 = *(undefined4 *)((longlong)local_a8 + lVar21);
                lVar15 = FUN_140ddba74(plVar11,uVar3);
                if ((*(int *)(param_1 + 0xe4) == 0) ||
                   (uVar6 = *(uint *)(param_1 + 0xe0), (int)uVar6 < 0)) {
LAB_140ddb5f2:
                  lVar8 = 0;
                }
                else {
                  lVar8 = 0;
                  if ((int)uVar6 < DAT_14c9647dc) {
                    plVar14 = (longlong *)
                              ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                    if (((plVar14 == (longlong *)0x0) ||
                        ((int)plVar14[2] != *(int *)(param_1 + 0xe4))) ||
                       ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_140ddb5f2;
                    lVar8 = *plVar14;
                  }
                }
                if (lVar15 == lVar8) {
                  FUN_140ddc36e(plVar11,uVar3);
                  bVar24 = true;
                }
                lVar21 = lVar21 + 4;
              } while (lVar13 * 4 != lVar21);
              goto LAB_140ddab1c;
            }
          }
        }
        goto LAB_140ddab19;
      }
    }
LAB_140ddab1c:
    if ((((*(int *)(param_1 + 0xf4) != 0) && (uVar6 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar6))
        && (((int)uVar6 < DAT_14c9647dc &&
            ((lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar13 != 0 &&
             (*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0xf4))))))) &&
       ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)) {
      lVar13 = (**(code **)(*plVar20 + 0x648))(plVar20);
      if (*(int *)(param_1 + 0xf4) == 0) {
LAB_140ddb08f:
        lVar21 = 0;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0xf0);
        lVar21 = 0;
        if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             (((int)plVar14[2] != *(int *)(param_1 + 0xf4) ||
              ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_140ddb08f;
          lVar21 = *plVar14;
        }
      }
      if (lVar13 == lVar21) {
        (**(code **)(*plVar20 + 0x650))(plVar20,0);
        bVar24 = true;
      }
      else if (plVar11 != (longlong *)0x0) {
        lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x30 + lVar25);
        if (lVar13 != 0) {
          local_a8 = *(uint **)(*(longlong *)(param_1 + 0x60) + lVar25 + 0x28);
          lVar21 = 0;
          do {
            uVar3 = *(undefined4 *)((longlong)local_a8 + lVar21);
            lVar15 = FUN_140ddba2e(plVar11,uVar3);
            if ((*(int *)(param_1 + 0xf4) == 0) ||
               (uVar6 = *(uint *)(param_1 + 0xf0), (int)uVar6 < 0)) {
LAB_140ddb5b4:
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              if ((int)uVar6 < DAT_14c9647dc) {
                plVar14 = (longlong *)
                          ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                if (((plVar14 == (longlong *)0x0) || ((int)plVar14[2] != *(int *)(param_1 + 0xf4)))
                   || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) goto LAB_140ddb5b4;
                lVar8 = *plVar14;
              }
            }
            if (lVar15 == lVar8) {
              FUN_140ddbc00(plVar11,uVar3);
              bVar24 = true;
            }
            lVar21 = lVar21 + 4;
          } while (lVar13 * 4 != lVar21);
        }
      }
    }
    iVar10 = *(int *)(param_1 + 0x104);
    if ((((iVar10 != 0) && (uVar6 = *(uint *)(param_1 + 0x100), -1 < (int)uVar6)) &&
        (((int)uVar6 < DAT_14c9647dc &&
         ((lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar13 != 0 &&
          (*(int *)(lVar13 + 0x10) == iVar10)))))) && ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)) {
      lVar13 = plVar20[0xc6];
      if (lVar13 == 0) {
        if (*(code **)(*plVar20 + 0xa68) == (code *)&LAB_14470a070) {
          lVar13 = 0;
          goto LAB_140ddaf52;
        }
        lVar13 = (**(code **)(*plVar20 + 0xa68))(plVar20);
        iVar10 = *(int *)(param_1 + 0x104);
        if (iVar10 != 0) goto LAB_140ddaf52;
LAB_140ddb5ad:
        lVar21 = 0;
      }
      else {
LAB_140ddaf52:
        uVar6 = *(uint *)(param_1 + 0x100);
        lVar21 = 0;
        if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
          plVar11 = (longlong *)
                    ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
          if ((plVar11 == (longlong *)0x0) ||
             (((int)plVar11[2] != iVar10 || ((*(uint *)(plVar11 + 1) & 0x10200000) != 0))))
          goto LAB_140ddb5ad;
          lVar21 = *plVar11;
        }
      }
      if (lVar13 == lVar21) {
        FUN_14054853a(plVar20,0);
        bVar24 = true;
      }
    }
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar25);
    if ((-1 < iVar10) && (plVar20[0x15] != 0)) {
      iVar5 = (**(code **)(*plVar20 + 0x7b0))(plVar20);
      local_98 = (uint *)CONCAT44(local_98._4_4_,(int)plVar20[0xc5]);
      iVar12 = (int)plVar20[0xc5] - iVar5;
      if (-1 < iVar12) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar25);
        iVar18 = iVar2 * iVar5;
        local_a0 = (longlong *)CONCAT44(local_a0._4_4_,iVar5);
        local_a8 = (uint *)CONCAT44(local_a8._4_4_,iVar12);
        if ((iVar5 < iVar12) && ((longlong)DAT_14cb8a458 != 0)) {
          local_90 = DAT_14cb8a450 + (longlong)DAT_14cb8a458 * 2;
          puVar7 = DAT_14cb8a450;
          do {
            lVar13 = *(longlong *)puVar7;
            if ((lVar13 != param_1) && ((longlong)*(int *)(lVar13 + 0x68) != 0)) {
              piVar16 = *(int **)(lVar13 + 0x60);
              lVar13 = (longlong)*(int *)(lVar13 + 0x68) * 0x38;
              do {
                if ((piVar16[4] == 0) || (uVar6 = piVar16[3], (int)uVar6 < 0)) {
LAB_140ddb6fb:
                  plVar11 = (longlong *)0x0;
                }
                else {
                  plVar11 = (longlong *)0x0;
                  if ((int)uVar6 < DAT_14c9647dc) {
                    puVar22 = (undefined8 *)
                              ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                    if (((puVar22 == (undefined8 *)0x0) || (*(int *)(puVar22 + 2) != piVar16[4])) ||
                       ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)) goto LAB_140ddb6fb;
                    plVar11 = (longlong *)*puVar22;
                  }
                }
                if (plVar11 == plVar20) {
                  if ((piVar16 != (int *)0x0) && (iVar10 < *piVar16)) {
                    *piVar16 = *piVar16 + -1;
                  }
                  break;
                }
                piVar16 = piVar16 + 0xe;
                lVar13 = lVar13 + -0x38;
              } while (lVar13 != 0);
            }
            puVar7 = puVar7 + 2;
          } while (puVar7 != local_90);
        }
        local_78 = (code *)0x0;
        uStack_70 = 0;
        if (iVar18 < iVar12) {
          iVar5 = (iVar2 + 1) * iVar5;
          do {
            uVar9 = (**(code **)(*plVar20 + 0x610))(plVar20,iVar5);
            uVar19 = uStack_70;
            lVar13 = (longlong)(int)uStack_70;
            uVar6 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
            if (uStack_70._4_4_ < uVar6) {
              FUN_1457b0878(&local_78,uVar19 & 0xffffffff);
            }
            *(int *)(local_78 + lVar13 * 0x10) = iVar18;
            *(undefined8 *)(local_78 + lVar13 * 0x10 + 8) = uVar9;
            iVar18 = iVar18 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar18 < (int)local_a8);
          uVar19 = uStack_70 & 0xffffffff;
        }
        else {
          uVar19 = 0;
        }
        FUN_1409d8efe(plVar20,local_78,uVar19);
        iVar10 = (int)local_a0;
        if ((int)local_a0 != 0) {
          iVar12 = (int)plVar20[0xc5] - (int)local_98;
          iVar5 = (int)local_a8;
          if (iVar12 != 0) {
            _Dst = (void *)(((ulonglong)local_a8 & 0xffffffff) * 8 + plVar20[0xc4]);
            memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)local_a0 * 8),
                    (longlong)iVar12 << 3);
            iVar5 = (int)plVar20[0xc5] - iVar10;
          }
          *(int *)(plVar20 + 0xc5) = iVar5;
          FUN_140ddbe62(plVar20 + 0xc4);
        }
        FUN_1448215fa(plVar20);
        if (local_78 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    if ((bVar24) && ((longlong)DAT_14cb8a458 != 0)) {
      puVar7 = DAT_14cb8a450 + (longlong)DAT_14cb8a458 * 2;
      fVar26 = -1.0;
      puVar17 = DAT_14cb8a450;
      do {
        lVar13 = *(longlong *)puVar17;
        if (((((lVar13 != param_1) &&
              (((*(int *)(lVar13 + 0x2c) != 0 || *(int *)(lVar13 + 0x28) != 0) ||
               *(int *)(lVar13 + 0x30) != 0) || *(int *)(lVar13 + 0x34) != 0)) &&
             (fVar1 = *(float *)(lVar13 + 0x58), fVar26 < fVar1)) &&
            (((((*(int *)(lVar13 + 0xec) != 0 && (uVar6 = *(uint *)(lVar13 + 0xe8), -1 < (int)uVar6)
                ) && (((int)uVar6 < DAT_14c9647dc &&
                      ((lVar21 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8),
                       lVar21 != 0 && (*(int *)(lVar21 + 0x10) == *(int *)(lVar13 + 0xec))))))) &&
              ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)) ||
             (((((*(int *)(lVar13 + 0xdc) != 0 &&
                 (uVar6 = *(uint *)(lVar13 + 0xd8), -1 < (int)uVar6)) &&
                ((int)uVar6 < DAT_14c9647dc)) &&
               ((lVar21 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar21 != 0
                && (*(int *)(lVar21 + 0x10) == *(int *)(lVar13 + 0xdc))))) &&
              ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)))))) &&
           ((longlong)*(int *)(lVar13 + 0x68) != 0)) {
          lVar21 = *(longlong *)(lVar13 + 0x60);
          lVar15 = (longlong)*(int *)(lVar13 + 0x68) * 0x38;
LAB_140ddad2b:
          if ((*(int *)(lVar21 + 0x10) == 0) || (uVar6 = *(uint *)(lVar21 + 0xc), (int)uVar6 < 0)) {
LAB_140ddafc6:
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = (longlong *)0x0;
            if ((int)uVar6 < DAT_14c9647dc) {
              puVar22 = (undefined8 *)
                        ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
              if (((puVar22 == (undefined8 *)0x0) ||
                  (*(int *)(puVar22 + 2) != *(int *)(lVar21 + 0x10))) ||
                 ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)) goto LAB_140ddafc6;
              plVar11 = (longlong *)*puVar22;
            }
          }
          if (plVar11 != plVar20) goto code_r0x000140ddad91;
          if ((lVar21 != 0) && (*(char *)(lVar21 + 9) == '\0')) {
            if (DAT_14cb63950 == 0) {
              local_c0 = &local_78;
              local_78 = FUN_144a7958c;
              local_b0 = FUN_14081d0ea;
              local_b8 = &LAB_1464ec72a;
              local_c8 = &LAB_1486f5f75;
              local_d0 = &LAB_140945686;
              local_d8 = L"Engine";
              local_e0 = 0;
              local_e8 = 0x10000004;
              local_f0 = 0x10;
              local_f8 = 0x19d0;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                            FUN_1464fe8ee);
            }
            if ((*(int *)(plVar20[2] + 0x38) < *(int *)(DAT_14cb63950 + 0x38)) ||
               (plVar11 = plVar20,
               *(longlong *)
                (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) !=
               DAT_14cb63950 + 0x30)) {
              plVar11 = (longlong *)0x0;
            }
            puVar23 = (uint *)(lVar13 + 0xe0);
            if ((((*(int *)(lVar13 + 0xdc) == 0) ||
                 (uVar6 = *(uint *)(lVar13 + 0xd8), (int)uVar6 < 0)) ||
                (DAT_14c9647dc <= (int)uVar6)) ||
               (((plVar14 = (longlong *)
                            ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                 plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(lVar13 + 0xdc))) ||
                (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 || (lVar15 = *plVar14, lVar15 == 0)))))
               ) {
              if (*(int *)(lVar13 + 0xe4) != 0 || *(int *)(lVar13 + 0xe0) != 0) {
                *(undefined8 *)(lVar13 + 0xe0) = 0;
              }
            }
            else {
              if (((*(int *)(lVar13 + 0xe4) != 0) && (uVar6 = *puVar23, -1 < (int)uVar6)) &&
                 (((int)uVar6 < DAT_14c9647dc &&
                  (((plVar14 = (longlong *)
                               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                    plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(lVar13 + 0xe4))) &&
                   ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)))))) {
                if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
                  lVar8 = *plVar14;
                }
                else {
                  lVar8 = 0;
                }
                if (*(longlong *)(lVar8 + 0x110) == lVar15) goto LAB_140ddb1cf;
              }
              plVar14 = (longlong *)plVar20[0x15];
              if ((longlong *)plVar20[0x15] == (longlong *)0x0) {
                plVar14 = plVar20;
              }
              local_a0 = plVar11;
              uVar9 = FUN_14090ceee(lVar15,plVar14,0);
              FUN_14485c47a(puVar23,uVar9);
              plVar11 = local_a0;
            }
LAB_140ddb1cf:
            local_a8 = (uint *)(lVar13 + 0xf0);
            if ((((*(int *)(lVar13 + 0xec) == 0) ||
                 (uVar6 = *(uint *)(lVar13 + 0xe8), (int)uVar6 < 0)) ||
                ((DAT_14c9647dc <= (int)uVar6 ||
                 ((plVar14 = (longlong *)
                             ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                  plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(lVar13 + 0xec))))))) ||
               (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 || (lVar15 = *plVar14, lVar15 == 0)))) {
              if (*(int *)(lVar13 + 0xf4) != 0 || *(int *)(lVar13 + 0xf0) != 0) {
                *(undefined8 *)(lVar13 + 0xf0) = 0;
              }
            }
            else {
              if (((((*(int *)(lVar13 + 0xf4) != 0) && (uVar6 = *local_a8, -1 < (int)uVar6)) &&
                   ((int)uVar6 < DAT_14c9647dc)) &&
                  ((plVar14 = (longlong *)
                              ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                   plVar14 != (longlong *)0x0 && ((int)plVar14[2] == *(int *)(lVar13 + 0xf4))))) &&
                 ((*(uint *)(plVar14 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
                  lVar8 = *plVar14;
                }
                else {
                  lVar8 = 0;
                }
                if (*(longlong *)(lVar8 + 0x110) == lVar15) goto LAB_140ddb2c8;
              }
              plVar14 = (longlong *)plVar20[0x15];
              if ((longlong *)plVar20[0x15] == (longlong *)0x0) {
                plVar14 = plVar20;
              }
              local_a0 = plVar11;
              uVar9 = FUN_14090ceee(lVar15,plVar14,0);
              FUN_14485c47a(local_a8,uVar9);
              plVar11 = local_a0;
            }
LAB_140ddb2c8:
            local_90 = (uint *)(lVar13 + 0x100);
            if (((*(int *)(lVar13 + 0xfc) == 0) ||
                (uVar6 = *(uint *)(lVar13 + 0xf8), (int)uVar6 < 0)) ||
               (((DAT_14c9647dc <= (int)uVar6 ||
                 (((plVar14 = (longlong *)
                              ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                   plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(lVar13 + 0xfc))) ||
                  ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) ||
                (lVar15 = *plVar14, lVar15 == 0)))) {
              if (*(int *)(lVar13 + 0x104) != 0 || *(int *)(lVar13 + 0x100) != 0) {
                *(undefined8 *)(lVar13 + 0x100) = 0;
              }
            }
            else {
              local_a0 = plVar11;
              local_98 = puVar23;
              cVar4 = FUN_144729dda(local_90);
              if ((cVar4 == '\0') ||
                 (lVar8 = FUN_14479d2ce(local_90), plVar11 = local_a0, puVar23 = local_98,
                 *(longlong *)(lVar8 + 0x110) != lVar15)) {
                plVar11 = (longlong *)plVar20[0x15];
                if ((longlong *)plVar20[0x15] == (longlong *)0x0) {
                  plVar11 = plVar20;
                }
                uVar9 = FUN_14090ceee(lVar15,plVar11,0);
                FUN_14485c47a(local_90,uVar9);
                plVar11 = local_a0;
                puVar23 = local_98;
              }
            }
            if ((plVar11 == (longlong *)0x0) || (*(int *)(lVar21 + 0x30) == 0)) {
              if (((*(int *)(lVar13 + 0xe4) != 0) &&
                  (((uVar6 = *puVar23, -1 < (int)uVar6 && ((int)uVar6 < DAT_14c9647dc)) &&
                   (puVar22 = (undefined8 *)
                              ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                   puVar22 != (undefined8 *)0x0)))) &&
                 ((*(int *)(puVar22 + 2) == *(int *)(lVar13 + 0xe4) &&
                  ((*(uint *)(puVar22 + 1) & 0x10200000) == 0)))) {
                if ((*(uint *)(puVar22 + 1) & 0x10200000) == 0) {
                  uVar9 = *puVar22;
                }
                else {
                  uVar9 = 0;
                }
                (**(code **)(*plVar20 + 0x660))(plVar20,uVar9);
              }
              if (((*(int *)(lVar13 + 0xf4) != 0) && (uVar6 = *local_a8, -1 < (int)uVar6)) &&
                 (((int)uVar6 < DAT_14c9647dc &&
                  (((puVar22 = (undefined8 *)
                               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                    puVar22 != (undefined8 *)0x0 &&
                    (*(int *)(puVar22 + 2) == *(int *)(lVar13 + 0xf4))) &&
                   ((*(uint *)(puVar22 + 1) & 0x10200000) == 0)))))) {
                if ((*(uint *)(puVar22 + 1) & 0x10200000) == 0) {
                  uVar9 = *puVar22;
                }
                else {
                  uVar9 = 0;
                }
                (**(code **)(*plVar20 + 0x650))(plVar20,uVar9);
              }
            }
            else {
              local_88 = *(longlong *)(lVar21 + 0x28);
              local_80 = (longlong)*(int *)(lVar21 + 0x30) << 2;
              lVar21 = 0;
              local_a0 = plVar11;
              local_98 = puVar23;
              do {
                uVar3 = *(undefined4 *)(local_88 + lVar21);
                cVar4 = FUN_144729dda(local_98);
                if (cVar4 != '\0') {
                  uVar9 = FUN_14479d2ce(local_98);
                  FUN_140ddc36e(local_a0,uVar3,uVar9);
                }
                cVar4 = FUN_144729dda(local_a8);
                if (cVar4 != '\0') {
                  uVar9 = FUN_14479d2ce(local_a8);
                  FUN_140ddbc00(local_a0,uVar3,uVar9);
                }
                lVar21 = lVar21 + 4;
              } while (local_80 != lVar21);
            }
            fVar26 = fVar1;
            if ((((*(int *)(lVar13 + 0x104) != 0) && (uVar6 = *local_90, -1 < (int)uVar6)) &&
                (((int)uVar6 < DAT_14c9647dc &&
                 ((lVar21 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8),
                  lVar21 != 0 && (*(int *)(lVar21 + 0x10) == *(int *)(lVar13 + 0x104))))))) &&
               ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)) {
              uVar9 = FUN_14479d2ce(local_90);
              FUN_14054853a(plVar20,uVar9);
            }
          }
        }
LAB_140ddad9b:
        puVar17 = puVar17 + 2;
      } while (puVar17 != puVar7);
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar25) = 0xffffffff;
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 4 + lVar25) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8 + lVar25) = 0;
LAB_140ddae22:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140ddad91:
  lVar21 = lVar21 + 0x38;
  lVar15 = lVar15 + -0x38;
  if (lVar15 == 0) goto LAB_140ddad9b;
  goto LAB_140ddad2b;
}



// FUNCTION 140ddba2e FUN_140ddba2e body=69 status=ok
// SIG undefined FUN_140ddba2e(void)

longlong FUN_140ddba2e(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x1810) <= (int)param_2)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1808) + (ulonglong)param_2 * 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 140ddba74 FUN_140ddba74 body=69 status=ok
// SIG undefined FUN_140ddba74(void)

longlong FUN_140ddba74(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x1820) <= (int)param_2)) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1818) + (ulonglong)param_2 * 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 140ddbaba FUN_140ddbaba body=305 status=ok
// SIG undefined FUN_140ddbaba(void)

void FUN_140ddbaba(longlong param_1)

{
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140457ffc(param_1 + 0xc0);
  if (param_1 != 0) {
    if (DAT_14cb63950 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464ec72a;
      local_48 = &LAB_1486f5f75;
      local_50 = &LAB_140945686;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddbc00 FUN_140ddbc00 body=483 status=ok
// SIG undefined FUN_140ddbc00(void)

void FUN_140ddbc00(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_68 [46];
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (-1 < (int)param_2) {
    if (((((param_3 == (longlong *)0x0) ||
          (lVar4 = (**(code **)(*param_3 + 0x2b8))(param_3), lVar4 == 0)) ||
         ((*(byte *)(lVar4 + 0x1c0) & 0x40) == 0)) ||
        (((~*(byte *)(lVar4 + 0x1c2) & 0x41) != 0 ||
         (cVar2 = (**(code **)(*param_3 + 0x460))(param_3), cVar2 != '\x01')))) ||
       (iVar3 = (**(code **)(*param_3 + 0x408))(param_3), iVar3 != 1)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      (**(code **)(*param_3 + 0x410))(param_3,&local_3a);
      plVar6 = (longlong *)0x0;
      if (local_3a == 1) {
        plVar6 = param_3;
      }
    }
    if (plVar6 != (longlong *)0x0 || (int)param_2 < (int)param_1[0x302]) {
      plVar1 = param_1 + 0x301;
      if ((int)param_1[0x302] <= (int)param_2) {
        FUN_140ddbde4(plVar1,param_2 + 1,1);
      }
      lVar4 = *plVar1;
      if (*(longlong **)(lVar4 + (ulonglong)param_2 * 8) != plVar6) {
        if ((plVar6 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar6);
        }
        *(longlong **)(lVar4 + (ulonglong)param_2 * 8) = plVar6;
        if ((longlong)(int)param_1[0x302] != 0) {
          plVar5 = (longlong *)param_1[0x301];
          lVar4 = (longlong)(int)param_1[0x302] << 3;
          do {
            if (*plVar5 != 0) {
              if (plVar5 != (longlong *)0x0) goto LAB_140ddbd52;
              break;
            }
            plVar5 = plVar5 + 1;
            lVar4 = lVar4 + -8;
          } while (lVar4 != 0);
        }
        *(undefined4 *)(param_1 + 0x302) = 0;
        if (*(int *)((longlong)param_1 + 0x1814) < 0) {
          FUN_1474ba72a(plVar1,0);
        }
LAB_140ddbd52:
        (**(code **)(*param_1 + 0x310))(param_1);
        if ((((*(char *)((longlong)param_1 + 0x1801) == '\x01') && (param_1[0x77] != 0)) &&
            (((int)param_1[0x65] == *(int *)((longlong)param_1 + 0x32c) ||
             (iVar3 = FUN_141890854(), plVar6 == (longlong *)0x0 || iVar3 == 0)))) &&
           (param_1[0x77] != 0)) {
          FUN_140ddbea2(param_1[0x77],param_2,plVar6);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ddbde4 FUN_140ddbde4 body=124 status=ok
// SIG undefined FUN_140ddbde4(void)

void FUN_140ddbde4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140655806(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140ddbe62(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140ddbe62 FUN_140ddbe62 body=64 status=ok
// SIG undefined FUN_140ddbe62(void)

void FUN_140ddbe62(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140ddca1e(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 140ddbea2 FUN_140ddbea2 body=1226 status=ok
// SIG undefined FUN_140ddbea2(void)

void FUN_140ddbea2(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_80 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140ddbeee;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140ddbef3;
      goto LAB_140ddbf1d;
    }
  }
  else {
LAB_140ddbeee:
    if (iVar6 != 0x10) {
LAB_140ddbf1d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_140ddbef3;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140ddbef3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140ddc087;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143d8905f);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_140ddc087:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140ddc107;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140ddc107:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14b40ebc0;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_80._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = uStack_78;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_74;
        puVar16[0x17] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14b40eb60;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        local_30 = local_70;
        local_68[0] = &LAB_143d8eeda;
        FUN_14005a792(&DAT_14ca9a440,L"FSetGestaltCustomMaskMaterial",&DAT_14cb81044);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_140ddbfc2;
    }
  }
LAB_140ddbef3:
  FUN_143d8eb12(&local_80);
LAB_140ddbfc2:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddc36e FUN_140ddc36e body=483 status=ok
// SIG undefined FUN_140ddc36e(void)

void FUN_140ddc36e(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [46];
  short local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (-1 < (int)param_2) {
    if (((((param_3 == (longlong *)0x0) ||
          (lVar5 = (**(code **)(*param_3 + 0x2b8))(param_3), lVar5 == 0)) ||
         ((*(byte *)(lVar5 + 0x1c0) & 0x40) == 0)) ||
        (((~*(byte *)(lVar5 + 0x1c2) & 0x41) != 0 ||
         (cVar2 = (**(code **)(*param_3 + 0x460))(param_3), cVar2 != '\x02')))) ||
       (uVar3 = (**(code **)(*param_3 + 0x408))(param_3), uVar3 < 2)) {
      plVar7 = (longlong *)0x0;
    }
    else {
      (**(code **)(*param_3 + 0x410))(param_3,&local_3a);
      plVar7 = (longlong *)0x0;
      if (local_3a == 1) {
        plVar7 = param_3;
      }
    }
    if (plVar7 != (longlong *)0x0 || (int)param_2 < (int)param_1[0x304]) {
      plVar1 = param_1 + 0x303;
      if ((int)param_1[0x304] <= (int)param_2) {
        FUN_140ddbde4(plVar1,param_2 + 1,1);
      }
      lVar5 = *plVar1;
      if (*(longlong **)(lVar5 + (ulonglong)param_2 * 8) != plVar7) {
        if ((plVar7 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(plVar7);
        }
        *(longlong **)(lVar5 + (ulonglong)param_2 * 8) = plVar7;
        if ((longlong)(int)param_1[0x304] != 0) {
          plVar6 = (longlong *)param_1[0x303];
          lVar5 = (longlong)(int)param_1[0x304] << 3;
          do {
            if (*plVar6 != 0) {
              if (plVar6 != (longlong *)0x0) goto LAB_140ddc4c0;
              break;
            }
            plVar6 = plVar6 + 1;
            lVar5 = lVar5 + -8;
          } while (lVar5 != 0);
        }
        *(undefined4 *)(param_1 + 0x304) = 0;
        if (*(int *)((longlong)param_1 + 0x1824) < 0) {
          FUN_1474ba72a(plVar1,0);
        }
LAB_140ddc4c0:
        (**(code **)(*param_1 + 0x310))(param_1);
        if ((((*(char *)((longlong)param_1 + 0x1801) == '\x01') && (param_1[0x77] != 0)) &&
            (((int)param_1[0x65] == *(int *)((longlong)param_1 + 0x32c) ||
             (iVar4 = FUN_141890854(), plVar7 == (longlong *)0x0 || iVar4 == 0)))) &&
           (param_1[0x77] != 0)) {
          FUN_140ddc552(param_1[0x77],param_2,plVar7);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ddc552 FUN_140ddc552 body=1226 status=ok
// SIG undefined FUN_140ddc552(void)

void FUN_140ddc552(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_80 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140ddc59e;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140ddc5a3;
      goto LAB_140ddc5cd;
    }
  }
  else {
LAB_140ddc59e:
    if (iVar6 != 0x10) {
LAB_140ddc5cd:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_140ddc5a3;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140ddc5a3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_140ddc737;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143d8905f);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_140ddc737:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x18);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x18);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_140ddc7b7;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_140ddc7b7:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14b40ec30;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_80._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = uStack_78;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_74;
        puVar16[0x17] = local_70;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar6 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_88 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14b40ebd0;
        local_40 = (undefined4)local_80;
        uStack_3c = local_80._4_4_;
        uStack_38 = uStack_78;
        uStack_34 = uStack_74;
        local_30 = local_70;
        local_68[0] = &LAB_143d8f452;
        FUN_14005a792(&DAT_14ca9a440,L"FSetGestaltCustomGlowMaterial",&DAT_14cb81074);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_140ddc672;
    }
  }
LAB_140ddc5a3:
  FUN_143d8f08a(&local_80);
LAB_140ddc672:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddca1e FUN_140ddca1e body=87 status=ok
// SIG undefined FUN_140ddca1e(void)

ulonglong FUN_140ddca1e(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 140ddca76 FUN_140ddca76 body=277 status=ok
// SIG undefined FUN_140ddca76(void)

undefined8 FUN_140ddca76(longlong param_1)

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
    if (iVar1 == 2) goto LAB_140ddcb85;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140ddcb85;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140ddcb85:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140ddcb33;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140ddcb33;
    }
  }
  uVar6 = 0;
LAB_140ddcb33:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddcb8c FUN_140ddcb8c body=418 status=ok
// SIG undefined FUN_140ddcb8c(void)

void FUN_140ddcb8c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x2600) + 0x30))(param_1 + 0x2600);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1e0) == '\x01')) {
    lVar2 = FUN_1401f2ad8(lVar1 + 0x1e8);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(param_1 + 0x1c8), lVar2 != 0)) {
      if (DAT_14cac6e60 == 0) {
        local_40 = &local_28;
        local_28 = FUN_144a7958c;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_142b47bc4;
        local_48 = &LAB_1478989f1;
        local_50 = &LAB_146391124;
        local_58 = L"Engine";
        local_60 = 0x10000000000;
        local_68 = 0x10000005;
        local_70 = 0x10;
        local_78 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
        lVar2 = *(longlong *)(param_1 + 0x1c8);
        if (lVar2 == 0) goto LAB_140ddcd23;
      }
      if ((((DAT_14cac6e60 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) &&
          (*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
          == DAT_14cac6e60 + 0x30)) {
        FUN_1401f2ad8(lVar1 + 0x1e8);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
LAB_140ddcd23:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ddcd46 FUN_140ddcd46 body=164 status=ok
// SIG undefined FUN_140ddcd46(void)

longlong FUN_140ddcd46(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x300);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0x460);
  if (lVar5 == 0) {
    uVar4 = FUN_1457deb06();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x460) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0x468) != 0) {
    return *(longlong *)(lVar1 + 0x468);
  }
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar1 + 0x458) != 0) {
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar5 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x458));
    }
    *(longlong *)(lVar1 + 0x468) = lVar5;
    return lVar5;
  }
  return 0;
}



// FUNCTION 140ddcdea FUN_140ddcdea body=2022 status=ok
// SIG undefined FUN_140ddcdea(void)

void FUN_140ddcdea(longlong param_1,undefined8 *param_2,longlong param_3,uint param_4,
                  longlong *param_5,longlong param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined1 auVar17 [8];
  uint uVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined8 *puVar27;
  bool bVar28;
  undefined1 local_488 [32];
  ulonglong local_468;
  uint local_45c;
  uint local_458;
  uint local_454;
  uint local_450;
  uint local_44c;
  longlong local_448;
  undefined8 *local_440;
  longlong local_438;
  ulonglong local_430;
  ulonglong local_428;
  undefined1 local_419;
  undefined8 local_418 [3];
  undefined1 auStack_3fc [4];
  undefined1 local_3f8 [8];
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  uint local_3c8 [4];
  undefined8 local_3b8 [4];
  undefined8 auStack_398 [103];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_488;
  uVar21 = *(uint *)(param_6 + 0xc);
  uVar18 = *(uint *)(param_6 + 0x10);
  lVar20 = 0x30;
  do {
    *(undefined1 *)((longlong)&local_3e8 + lVar20) = 0;
    *(undefined8 *)((longlong)local_418 + lVar20) = 0;
    *(undefined8 *)((longlong)local_418 + lVar20 + 8) = 0;
    *(undefined8 *)((longlong)local_418 + lVar20 + 0x10) = 0;
    *(undefined8 *)(&stack0xfffffffffffffc00 + lVar20) = 0;
    *(undefined8 *)(auStack_3fc + lVar20) = 0;
    *(undefined8 *)(local_3f8 + lVar20 + 4) = 0;
    lVar20 = lVar20 + 0x38;
  } while (lVar20 != 0x3b0);
  uVar26 = 0x10;
  if (uVar21 < 0x10) {
    uVar26 = uVar21;
  }
  uVar26 = uVar26 + (uVar26 == 0);
  local_458 = 0x80;
  if (uVar18 < 0x80) {
    local_458 = uVar18;
  }
  uVar21 = *(uint *)(param_3 + 4);
  uVar22 = (ulonglong)uVar21;
  uVar26 = ((uVar26 + uVar21) - 1) / uVar26;
  local_45c = 0x40;
  if (0x40 < uVar26) {
    local_45c = uVar26;
  }
  local_454 = param_4;
  local_448 = param_1;
  local_440 = param_2;
  local_438 = param_3;
  if (uVar21 == 0) {
    local_3f8 = (undefined1  [8])0x0;
    local_3f0 = 0x400000000;
LAB_140ddd56b:
    auVar17 = local_3f8;
    if (local_3f8 == (undefined1  [8])0x0) {
      auVar17 = (undefined1  [8])local_418;
    }
    FUN_144717c65(auVar17,local_3f0 & 0xffffffff);
    if (local_3f8 != (undefined1  [8])0x0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)local_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar25 = (undefined8 *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8)
  ;
  uVar12 = 1;
  uVar24 = 0;
  uVar21 = 0;
  local_428 = uVar22;
  do {
    local_450 = (int)uVar22 - uVar21;
    if (local_45c < local_450) {
      local_450 = local_45c;
    }
    local_44c = (int)uVar24 + 1;
    (&local_3e8)[uVar24 * 7] = local_448;
    local_3c8[uVar24 * 0xe + 3] = local_454;
    *(undefined1 *)(local_3b8 + uVar24 * 7) = *(undefined1 *)(param_6 + 4);
    (&local_3e0)[uVar24 * 7] = local_438;
    local_3c8[uVar24 * 0xe] = local_458;
    iVar1 = *(int *)(local_448 + 0x98);
    lVar20 = (longlong)iVar1;
    puVar13 = (uint *)*puVar25;
    local_468 = uVar24;
    local_430 = uVar12;
    if (puVar13 != (uint *)0x0) goto LAB_140ddcf7b;
    while( true ) {
      FUN_144769a66(puVar25);
      puVar13 = (uint *)*puVar25;
LAB_140ddcf7b:
      puVar27 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar19 = (uint *)(puVar27 + lVar20 * 0x22 + 3);
      if (puVar19 <= puVar13 + 0x4000) break;
      uVar22 = lVar20 * 0x110 + 0x78;
      if (0x10000 < uVar22) {
        puVar13 = (uint *)FUN_14472e5b2(uVar22);
        *puVar13 = 0xffffffff;
        puVar13[0x12] = 0;
        puVar27 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        *(uint **)(puVar13 + 0x10) = puVar13 + lVar20 * 0x44 + 0x1e;
        *puVar13 = 1;
        goto LAB_140ddcfe9;
      }
      uVar18 = puVar13[0x12];
      while( true ) {
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar26 = *puVar13;
        *puVar13 = *puVar13 + uVar18 + 1;
        UNLOCK();
        if ((uVar26 ^ uVar18) != 0xffffffff) break;
        puVar13 = (uint *)*puVar25;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar25 = puVar13;
        puVar27 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        puVar19 = (uint *)(puVar27 + lVar20 * 0x22 + 3);
        uVar18 = 0;
        if (puVar19 <= puVar13 + 0x4000) {
          uVar18 = 1;
          goto LAB_140ddcfde;
        }
      }
    }
    uVar18 = puVar13[0x12] + 1;
LAB_140ddcfde:
    *(uint **)(puVar13 + 0x10) = puVar19 + 2;
    puVar13[0x12] = uVar18;
LAB_140ddcfe9:
    *(int *)(puVar27 + -1) = ((int)puVar27 + -8) - (int)puVar13;
    *(int *)((longlong)puVar27 + -4) = (int)(lVar20 * 0x110) + 0x18;
    puVar27[1] = 0;
    *puVar27 = &PTR_FUN_14a3381a8;
    puVar27[2] = lVar20;
    lVar23 = *param_5;
    do {
      puVar27[1] = lVar23;
      LOCK();
      lVar14 = *param_5;
      bVar28 = lVar23 == lVar14;
      if (bVar28) {
        *param_5 = (longlong)puVar27;
        lVar14 = lVar23;
      }
      UNLOCK();
      lVar23 = lVar14;
    } while (!bVar28);
    if (iVar1 != 0) {
      lVar23 = (longlong)puVar27 + 0x124;
      do {
        memset((void *)(lVar23 + -0x10c),0,0x100);
        *(undefined8 *)(lVar23 + -0xc) = 0xffffffff;
        *(undefined8 *)(lVar23 + -4) = 0;
        lVar23 = lVar23 + 0x110;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    uVar22 = local_428;
    uVar11 = local_468;
    (&local_3d8)[uVar24 * 7] = puVar27 + 3;
    puVar27 = local_440;
    if (local_468 != 0) {
      puVar13 = (uint *)*puVar25;
      if (puVar13 != (uint *)0x0) goto LAB_140ddd087;
      while( true ) {
        FUN_144769a66(puVar25);
        puVar13 = (uint *)*puVar25;
LAB_140ddd087:
        puVar27 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
        uVar18 = puVar13[0x12];
        if (puVar27 + 0x1b0e <= puVar13 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
          LOCK();
          uVar26 = *puVar13;
          *puVar13 = *puVar13 + uVar18 + 1;
          UNLOCK();
          if ((uVar26 ^ uVar18) != 0xffffffff) break;
          puVar13 = (uint *)*puVar25;
          *puVar13 = 0xffffffff;
          *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar25 = puVar13;
          puVar27 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
          uVar18 = 0;
          if (puVar27 + 0x1b0e <= puVar13 + 0x4000) {
            uVar18 = 1;
            goto LAB_140ddd105;
          }
        }
      }
      uVar18 = uVar18 + 1;
LAB_140ddd105:
      *(undefined8 **)(puVar13 + 0x10) = puVar27 + 0x1b0f;
      puVar13[0x12] = uVar18;
      *(int *)(puVar27 + -1) = ((int)puVar27 + -8) - (int)puVar13;
      *(undefined4 *)((longlong)puVar27 + -4) = 0xd870;
      puVar27[1] = 0;
      *puVar27 = &PTR_FUN_14a338190;
      lVar20 = *param_5;
      do {
        puVar27[1] = lVar20;
        LOCK();
        lVar23 = *param_5;
        bVar28 = lVar20 == lVar23;
        if (bVar28) {
          *param_5 = (longlong)puVar27;
          lVar23 = lVar20;
        }
        UNLOCK();
        lVar20 = lVar23;
      } while (!bVar28);
      puVar27 = puVar27 + 2;
      FUN_144abc04a(puVar27,param_5);
    }
    uVar18 = local_44c;
    (&local_3d0)[uVar24 * 7] = puVar27;
    local_3c8[uVar24 * 0xe + 1] = uVar21;
    local_3c8[uVar24 * 0xe + 2] = local_450;
    uVar21 = uVar21 + local_450;
    uVar12 = (ulonglong)((int)local_430 + 1);
    uVar24 = (ulonglong)local_44c;
    if ((uint)uVar22 <= uVar21) {
      local_3f8 = (undefined1  [8])0x0;
      local_3f0 = 0x400000000;
      if (1 < local_44c) {
        if ((int)(uint)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar11);
        }
        if (4 < (uint)uVar11) {
          FUN_14473dbc4(local_418,uVar11 & 0xffffffff);
        }
        lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar25 = (undefined8 *)(lVar20 + 0x308);
        local_468 = (ulonglong)uVar18;
        uVar22 = 1;
LAB_140ddd279:
        lVar23 = uVar22 * 0x38;
        puVar13 = (uint *)*puVar25;
        if (puVar13 != (uint *)0x0) goto LAB_140ddd2f3;
        do {
          uVar21 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar21 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar21 | 1;
            __tlregdtor(&LAB_143134bf7);
          }
          puVar15 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar25 = puVar15;
          FUN_140217a48(puVar25);
          puVar13 = (uint *)*puVar25;
LAB_140ddd2f3:
          uVar12 = *(longlong *)(puVar13 + 0x10) + 7;
          uVar21 = puVar13[0x12];
          while( true ) {
            puVar27 = (undefined8 *)(uVar12 & 0xfffffffffffffff8);
            if (puVar27 + 0x1c <= puVar13 + 0x4000) {
              *(undefined8 **)(puVar13 + 0x10) = puVar27 + 0x1c;
              puVar13[0x12] = uVar21 + 1;
              FUN_1447247dc(puVar27,0);
              *puVar27 = &PTR_FUN_14a3381b0;
              puVar27[0x1b] = local_3b8[uVar22 * 7];
              uVar2 = *(undefined4 *)(&local_3e8 + uVar22 * 7);
              uVar3 = *(undefined4 *)((longlong)&local_3e8 + lVar23 + 4);
              uVar4 = *(undefined4 *)(&local_3e0 + uVar22 * 7);
              uVar5 = *(undefined4 *)((longlong)&local_3e0 + lVar23 + 4);
              uVar6 = *(undefined4 *)(&local_3d8 + uVar22 * 7);
              uVar7 = *(undefined4 *)((longlong)&local_3d8 + lVar23 + 4);
              uVar8 = *(undefined4 *)(&local_3d0 + uVar22 * 7);
              uVar21 = local_3c8[uVar22 * 0xe + -1];
              uVar26 = local_3c8[uVar22 * 0xe + 1];
              uVar9 = local_3c8[uVar22 * 0xe + 2];
              uVar10 = local_3c8[uVar22 * 0xe + 3];
              *(uint *)(puVar27 + 0x19) = local_3c8[uVar22 * 0xe];
              *(uint *)((longlong)puVar27 + 0xcc) = uVar26;
              *(uint *)(puVar27 + 0x1a) = uVar9;
              *(uint *)((longlong)puVar27 + 0xd4) = uVar10;
              *(undefined4 *)(puVar27 + 0x17) = uVar6;
              *(undefined4 *)((longlong)puVar27 + 0xbc) = uVar7;
              *(undefined4 *)(puVar27 + 0x18) = uVar8;
              *(uint *)((longlong)puVar27 + 0xc4) = uVar21;
              *(undefined4 *)(puVar27 + 0x15) = uVar2;
              *(undefined4 *)((longlong)puVar27 + 0xac) = uVar3;
              *(undefined4 *)(puVar27 + 0x16) = uVar4;
              *(undefined4 *)((longlong)puVar27 + 0xb4) = uVar5;
              if (*(code **)(puVar27[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar27[0xe] + 0x18))(puVar27 + 0xe,puVar27 + 9);
              }
              puVar27[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar27[9] = puVar27;
              puVar27[10] = puVar27;
              if (*(longlong *)(lVar20 + 0x2b8) == 0) {
                uVar16 = 0;
              }
              else {
                uVar16 = *(undefined8 *)(*(longlong *)(lVar20 + 0x2b8) + 0x30);
              }
              puVar27[0xf] = uVar16;
              puVar27[0x10] = 0xc00000527800b400;
              *(undefined4 *)((longlong)puVar27 + 0x1c) = 0;
              if (puVar27 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
                UNLOCK();
              }
              local_419 = 1;
              FUN_1447439e4(puVar27,&local_419);
              uVar12 = local_3f0;
              lVar23 = (longlong)(int)local_3f0;
              uVar21 = (int)local_3f0 + 1;
              local_3f0 = CONCAT44(local_3f0._4_4_,uVar21);
              if (local_3f0._4_4_ < uVar21) {
                FUN_14476a5c8(local_418,uVar12 & 0xffffffff);
              }
              auVar17 = local_3f8;
              if (local_3f8 == (undefined1  [8])0x0) {
                auVar17 = (undefined1  [8])local_418;
              }
              *(undefined8 **)((longlong)auVar17 + lVar23 * 8) = puVar27;
              uVar22 = uVar22 + 1;
              if (uVar22 == local_468) goto LAB_140ddd4eb;
              goto LAB_140ddd279;
            }
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar26 = *puVar13;
            *puVar13 = *puVar13 + uVar21 + 1;
            UNLOCK();
            if ((uVar26 ^ uVar21) != 0xffffffff) break;
            puVar13 = (uint *)*puVar25;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar25 = puVar13;
            uVar12 = (longlong)puVar13 + 0x5f;
            uVar21 = 0;
          }
        } while( true );
      }
LAB_140ddd4eb:
      if (uVar18 != 0) {
        FUN_143126ae8(local_448,&local_3e8);
        if (0 < (int)local_3f0) {
          (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,local_418,0xff);
        }
        if (1 < uVar18) {
          lVar20 = (local_430 & 0xffffffff) - 1;
          puVar25 = auStack_398;
          do {
            FUN_147341572(local_440,*puVar25,param_5);
            puVar25 = puVar25 + 7;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
      }
      goto LAB_140ddd56b;
    }
  } while( true );
}



// FUNCTION 140ddd5d2 FUN_140ddd5d2 body=853 status=ok
// SIG undefined FUN_140ddd5d2(void)

void FUN_140ddd5d2(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 *local_68;
  int local_60;
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined1 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (((((param_1[0x32] != 0) || (iVar3 = FUN_140ddd928(), 1 < iVar3 - 1U)) ||
       ((longlong *)param_1[0x1b] == (longlong *)0x0)) ||
      (((*(int *)((longlong)param_1 + 0xd4) == 0 ||
        (uVar1 = *(uint *)(param_1 + 0x1a), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        ((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0 ||
         (*(int *)(lVar7 + 0x10) != *(int *)((longlong)param_1 + 0xd4))))))))) ||
     (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
      (lVar7 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))(), lVar7 == 0))))
  goto LAB_140ddd697;
  lVar4 = FUN_140ddd994();
  if ((((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) || (lVar4 = FUN_1410ef012(param_1), lVar4 == 0)) ||
     (lVar4 = *(longlong *)(lVar4 + 0x3f0), lVar4 == 0)) goto LAB_140ddd697;
  local_58[0] = 0;
  local_54 = 0x44bb800043fa0000;
  local_4c = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_14053cd36(local_58,lVar7 + 0x588);
  local_68 = (undefined8 *)0x0;
  local_60 = 0;
  FUN_1446efa72(&local_68,0,3,0x10);
  puVar2 = local_68;
  local_60 = 3;
  *local_68 = &PTR_LAB_14b3f8df0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_68[2] = lVar5;
  *local_68 = &PTR_FUN_14b9679f0;
  local_68[3] = 0;
  iVar3 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_68 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar3 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar3 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = &LAB_1459c24f6;
  local_80 = 0;
  local_78 = 0;
  FUN_1404ebbc8(&local_80,&local_68);
  (**(code **)(*param_1 + 0x2b0))(param_1,local_f8);
  local_98 = local_d8;
  uStack_90 = uStack_d0;
  local_88 = local_c8;
  local_108 = &local_80;
  FUN_1404eb494(lVar4,&local_70,&local_98,local_58);
  param_1[0x32] = local_70;
  if (local_60 == 0) {
LAB_140ddd858:
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (undefined8 *)0x0) {
    (**(code **)*local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_140ddd858;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_140ddd697:
  if ((local_38 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ddd928 FUN_140ddd928 body=107 status=ok
// SIG undefined FUN_140ddd928(void)

undefined4 FUN_140ddd928(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar3 = 0;
  uVar2 = 0;
  if ((((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)), uVar3 = uVar2,
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x2c))) &&
      ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
    uVar3 = 0;
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = 0;
    }
    if (*(longlong *)(lVar5 + 0x30) != 0) {
      uVar3 = *(undefined4 *)(*(longlong *)(lVar5 + 0x30) + 0x120);
    }
  }
  return uVar3;
}



// FUNCTION 140ddd994 FUN_140ddd994 body=228 status=ok
// SIG undefined FUN_140ddd994(void)

longlong FUN_140ddd994(void)

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
  if (DAT_14cbbfad8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_148cb03b1;
    local_40 = &LAB_14133f00c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xfe8;
    FUN_14081cfa3(L"/Script/OakGame",L"PoAActor",&DAT_14cbbfad8,&DAT_148cb03b0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbfad8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddda7a FUN_140ddda7a body=102 status=ok
// SIG undefined FUN_140ddda7a(void)

ulonglong FUN_140ddda7a(longlong param_1)

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
LAB_140dddac3:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140dddac3;
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



// FUNCTION 140dddae6 FUN_140dddae6 body=21 status=ok
// SIG undefined FUN_140dddae6(void)

undefined8 FUN_140dddae6(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff6b;
    return CONCAT71((int7)(uVar2 >> 8),(char)uVar2 == '\x03');
  }
  return 0;
}



// FUNCTION 140dddafc FUN_140dddafc body=29 status=ok
// SIG undefined FUN_140dddafc(void)

undefined8 * FUN_140dddafc(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  
  pbVar1 = (byte *)*param_1;
  puVar2 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    puVar2 = (undefined8 *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  return puVar2;
}



// FUNCTION 140dddb1a FUN_140dddb1a body=43 status=ok
// SIG undefined FUN_140dddb1a(void)

ulonglong FUN_140dddb1a(undefined8 *param_1,ulonglong param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
     (*(char **)(pbVar1 + 8) != (char *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140dddb3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = _strtoui64(*(char **)(pbVar1 + 8),(char **)0x0,0);
    return uVar2;
  }
  return param_2;
}



// FUNCTION 140dddb46 FUN_140dddb46 body=275 status=ok
// SIG undefined FUN_140dddb46(void)

void FUN_140dddb46(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_64 [12];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_14479d2ce(param_1 + 0x48);
  if ((*(char *)(lVar2 + 0x178) == '\x03') && (DAT_14cb758b8 != 0)) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1457b0c52(DAT_14cb758b8,&local_58);
    lVar2 = local_58;
    lVar4 = (longlong)(int)uStack_50;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        lVar1 = *(longlong *)(lVar2 + lVar5);
        if (param_3 == 1) {
          if ((lVar1 != 0) && (*(char *)(lVar1 + 0x41) == '\x01')) {
LAB_140dddbe8:
            puVar3 = *(undefined4 **)(lVar1 + 8);
            if (puVar3 == (undefined4 *)0x0) {
              puVar3 = &DAT_14c9485f0;
            }
            FUN_144a7660c(puVar3,local_64,1);
            local_78 = 1;
            FUN_14105a17e(param_1,local_64,0,param_2);
          }
        }
        else if ((lVar1 != 0) && (*(char *)(lVar1 + 0x41) == '\0')) goto LAB_140dddbe8;
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dddc5a FUN_140dddc5a body=892 status=ok
// SIG undefined FUN_140dddc5a(void)

void FUN_140dddc5a(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar13 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar13;
    if ((int)param_1[0x54] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar6 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = lVar6, plStack_60 != plVar13)) {
      do {
        local_78 = lVar6;
        lVar6 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar9 * 0x20);
        if (lVar6 != 0) {
          plVar15 = (longlong *)(*local_90 + (longlong)iVar9 * 0x20 + 0x10);
          if (param_3 != '\0') {
            FUN_144837e54(lVar6,0);
            lVar6 = *plVar15;
          }
          cVar5 = FUN_140dddae6(lVar6 + 0x48);
          if ((cVar5 != '\0') &&
             (plVar15 = *(longlong **)(*plVar15 + 0x30), plVar15 != (longlong *)0x0)) {
            lVar6 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar7 = FUN_140dddfde();
            if ((lVar7 != 0) &&
               ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                 == lVar7 + 0x30)))) {
              (*(code *)*local_98)(local_98[1],plVar15);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        lVar6 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar13 || local_78._4_4_ != iVar12));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar11 = 1;
      uVar16 = 0xffffffff;
      iVar12 = 0;
      iVar14 = 0;
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar11 = (ulonglong)local_90 >> 0x20;
      iVar12 = (int)param_1[0x3e];
      iVar9 = (int)local_90;
      uVar16 = (uint)uStack_80;
      iVar8 = uStack_80._4_4_;
      iVar14 = (uint)local_78;
    }
    plVar1 = local_88;
    plVar13 = param_1;
    if (iVar8 != iVar12 || local_88 != local_a0) {
      do {
        local_a8 = plVar13;
        plVar13 = *(longlong **)(local_a8[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar13 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar13 + 8))(plVar13);
          lVar7 = FUN_140dddfde();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar13);
          }
        }
        uVar16 = uVar16 & ~(uint)uVar11;
        plVar13 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar6 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar13 + lVar6 * 4) & uVar16;
        if (uVar10 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar13 + lVar7 * 4 + lVar6 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar7 + 1;
                uVar16 = 0xffffffff;
                goto LAB_140dddde1;
              }
              iVar14 = iVar14 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar4 - lVar6 != lVar7);
            uVar16 = 0xffffffff;
            iVar9 = iVar4;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar3;
        }
        else {
LAB_140dddde1:
          uVar11 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar11 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
        plVar13 = local_a8;
      } while (iVar8 != iVar12 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140dddfde FUN_140dddfde body=57 status=ok
// SIG undefined FUN_140dddfde(void)

void FUN_140dddfde(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5c1e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5c1e0 = FUN_140002ddd(FUN_1464d4791,uVar1,L"GbxCurrencyDef");
  }
  return;
}



// FUNCTION 140dde018 FUN_140dde018 body=67 status=ok
// SIG undefined FUN_140dde018(void)

void FUN_140dde018(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dde05c FUN_140dde05c body=59 status=ok
// SIG undefined FUN_140dde05c(void)

void FUN_140dde05c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*(char *)(lVar2 + 0x40) == '\x01') {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1457b0ce6(param_1,iVar1);
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 140dde0a0 FUN_140dde0a0 body=274 status=ok
// SIG undefined FUN_140dde0a0(void)

undefined8 * FUN_140dde0a0(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d4f264();
  *param_1 = &PTR_FUN_14b687a70;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_38 = L"/Script/OakGame.InventoryAugment_ActorScript";
  local_30 = 0x2c;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
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
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dde1bc FUN_140dde1bc body=337 status=ok
// SIG undefined FUN_140dde1bc(void)

undefined8 * FUN_140dde1bc(undefined8 *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14b49c1c0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0xf00000d0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0xf00000d0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0xf00000d0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf00000d0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  FUN_1405c5fa2();
  param_1[0x30] = &DAT_14cb769e8;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x2f] = &PTR_FUN_14b0394b0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0x3f4000003f400000;
  *(byte *)(param_1 + 0x1a) = (*(byte *)(param_1 + 0x1a) & 0xf0) + 1;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 1;
  return param_1;
}



// FUNCTION 140dde30e FUN_140dde30e body=29 status=ok
// SIG undefined FUN_140dde30e(void)

void FUN_140dde30e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140dde32c FUN_140dde32c body=85 status=ok
// SIG undefined FUN_140dde32c(void)

undefined8 * FUN_140dde32c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b478240;
  FUN_140dde381(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140dde381 FUN_140dde381 body=103 status=ok
// SIG undefined FUN_140dde381(void)

void FUN_140dde381(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x28);
    do {
      FUN_1403e75f6(*(undefined8 *)(puVar1 + -2),*puVar1);
      if (*(longlong *)(puVar1 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1403e75f6(*(undefined8 *)(puVar1 + -6),puVar1[-4]);
      if (*(longlong *)(puVar1 + -6) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(puVar1 + -10) != 0) {
        FUN_1400020a8();
      }
      puVar1 = puVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140dde3e8 FUN_140dde3e8 body=100 status=ok
// SIG undefined FUN_140dde3e8(void)

undefined8 FUN_140dde3e8(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x48);
    FUN_140dde44c(*(longlong *)(param_1 + 0xd8),1);
    *(bool *)(*(longlong *)(param_1 + 0xd8) + 0x756) = *(char *)(lVar1 + 0x81) == '\0';
    *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x757) = *(undefined1 *)(lVar1 + 0x81);
    *(undefined1 *)(*(longlong *)(param_1 + 0xd8) + 0x7d8) = *(undefined1 *)(lVar1 + 0x82);
  }
  return 1;
}



// FUNCTION 140dde44c FUN_140dde44c body=105 status=ok
// SIG undefined FUN_140dde44c(void)

void FUN_140dde44c(longlong param_1,char param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_1407766ee();
  cVar1 = *(char *)(param_1 + 0x6e8);
  if (*(char *)(param_1 + 0x6e8) != param_2) {
    *(undefined4 *)(param_1 + 0x6ec) = uVar3;
    cVar1 = param_2;
  }
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  *(undefined1 *)(param_1 + 0x6e9) = 1;
  *(char *)(param_1 + 0x6e8) = cVar1;
  uVar2 = FUN_14070ca4c(param_1);
  FUN_140dde4b6(param_1,uVar2);
  if (param_2 != '\0') {
    return;
  }
  FUN_14070caa6(param_1);
  return;
}



// FUNCTION 140dde4b6 FUN_140dde4b6 body=240 status=ok
// SIG undefined FUN_140dde4b6(void)

void FUN_140dde4b6(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  char local_28;
  longlong local_24;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (longlong *)0x0) goto LAB_140dde56c;
  uVar3 = FUN_140427846();
  plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
  if (plVar4 == (longlong *)0x0) goto LAB_140dde56c;
  uVar3 = FUN_140427846();
  plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
  if ((plVar4 == plVar5) || (plVar5 == (longlong *)0x0)) goto LAB_140dde56c;
  lVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
  if ((lVar6 == 0) || (*(char *)(lVar6 + 0xd) != '\x02')) goto LAB_140dde56c;
  local_28 = '\0';
  local_24 = 0;
  local_1c = 0;
  cVar1 = FUN_140459d0c(lVar6,&DAT_14cb7e148);
  if (cVar1 == '\0') goto LAB_140dde56c;
  if (local_28 == '\x03') {
    bVar7 = local_24 == 0;
LAB_140dde563:
    uVar2 = !bVar7;
  }
  else if (local_28 == '\x02') {
    uVar2 = (undefined1)local_1c;
  }
  else {
    if (local_28 == '\x01') {
      bVar7 = local_1c == 0;
      goto LAB_140dde563;
    }
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0xa0) = uVar2;
LAB_140dde56c:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140dde5a8 FUN_140dde5a8 body=123 status=ok
// SIG undefined FUN_140dde5a8(void)

void FUN_140dde5a8(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54c);
  FUN_140dde623(*(undefined8 *)(param_1 + 0x540),*(undefined4 *)(param_1 + 0x548));
  *(undefined4 *)(param_1 + 0x548) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x54c) != 0)) {
    FUN_14181c28a(param_1 + 0x540,0);
  }
  if (*(int *)(param_1 + 0x558) != *(int *)(param_1 + 0x584)) {
    FUN_140dde85c(param_1 + 0x550);
    FUN_140dde68c(param_1 + 0x550);
  }
  *(byte *)(param_1 + 0x334) = *(byte *)(param_1 + 0x334) & 0xfe;
  return;
}



// FUNCTION 140dde623 FUN_140dde623 body=105 status=ok
// SIG undefined FUN_140dde623(void)

void FUN_140dde623(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 140dde68c FUN_140dde68c body=464 status=ok
// SIG undefined FUN_140dde68c(void)

void FUN_140dde68c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_140dde7d7;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar6 * 0x28);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_140dde7d7;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_140dde7d7:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140dde85c FUN_140dde85c body=468 status=ok
// SIG undefined FUN_140dde85c(void)

void FUN_140dde85c(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar9 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar9 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar9 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar12 = 0;
      uVar14 = 1;
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      uVar10 = *puVar13;
      if (uVar10 == 0) {
        iVar9 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar9 = iVar2 + -1;
        }
        uVar12 = 0;
        uVar14 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar14 = uVar12;
        }
        iVar11 = 0;
        do {
          if (uVar14 == uVar12) {
            return;
          }
          iVar11 = iVar11 + 0x20;
          uVar10 = puVar13[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar12 = 0;
        iVar11 = 0;
      }
      uVar14 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar14 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar9) {
        iVar9 = iVar2;
      }
    }
    if (iVar9 != iVar2) {
      uVar10 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x24 + (longlong)iVar9 * 0x28) * 4) =
             0xffffffff;
        uVar10 = ~(uint)uVar14 & uVar10;
        puVar13 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar13 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar9 = (int)uVar12;
        lVar5 = (longlong)iVar9;
        uVar8 = puVar13[lVar5] & uVar10;
        if (uVar8 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar9) {
            iVar7 = iVar9;
          }
          if (iVar9 < iVar6) {
            lVar15 = 0;
            do {
              uVar8 = puVar13[lVar5 + lVar15 + 1];
              if (uVar8 != 0) {
                uVar12 = (ulonglong)(iVar9 + (int)lVar15 + 1);
                uVar10 = 0xffffffff;
                goto LAB_140dde9bb;
              }
              iVar11 = iVar11 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar7 - lVar5 != lVar15);
            uVar10 = 0xffffffff;
            iVar9 = iVar7;
          }
          uVar12 = (ulonglong)(iVar9 + 1);
          iVar9 = iVar3;
        }
        else {
LAB_140dde9bb:
          uVar14 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar14 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar9 = (iVar11 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar9) {
            iVar9 = iVar3;
          }
        }
      } while (iVar9 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar5 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar5 * 4) = 0xffffffff;
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 140ddea30 FUN_140ddea30 body=205 status=ok
// SIG undefined FUN_140ddea30(void)

void FUN_140ddea30(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1[0x2c6] == 0) && (cVar1 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar1 == '\0'))
      && (cVar1 = FUN_140769252(param_1), cVar1 == '\0')) && (param_1[0x2c7] == 0)) {
    if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_140ddeb08(param_1,param_2);
    return;
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_1447a68a4(param_1);
  if (0 < (longlong)(int)uStack_30) {
    plVar3 = (longlong *)(local_38 + 8);
    lVar2 = 0;
    do {
      if (*plVar3 == param_2) break;
      lVar2 = lVar2 + 1;
      plVar3 = plVar3 + 5;
    } while ((int)uStack_30 != lVar2);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 140ddeb08 FUN_140ddeb08 body=258 status=ok
// SIG undefined FUN_140ddeb08(void)

ulonglong FUN_140ddeb08(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x658);
  if (plVar1 == (longlong *)0x0) {
    plVar1 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar1 != (longlong *)0x0) != 0) goto LAB_140ddeba0;
    if (plVar1 == (longlong *)0x0) {
      return 0xffffffff;
    }
LAB_140ddeb8b:
    if ((DAT_14c950c29 & plVar1 != (longlong *)0x0) != 0) goto LAB_140ddebd2;
LAB_140ddeb95:
    if (((DAT_14c950c29 & 1) == 0) || (plVar1 == (longlong *)0x0)) goto LAB_140ddeb2a;
  }
  else {
    if (DAT_14c950c29 == 0) goto LAB_140ddeb2a;
LAB_140ddeba0:
    FUN_1456cec3c(plVar1);
    plVar1 = *(longlong **)(param_1 + 0x658);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x660);
      goto LAB_140ddeb8b;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_140ddeb2a;
LAB_140ddebd2:
    FUN_1456cec3c(plVar1);
    plVar1 = *(longlong **)(param_1 + 0x658);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x660);
      goto LAB_140ddeb95;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_140ddeb2a;
  }
  FUN_1456cec3c(plVar1);
LAB_140ddeb2a:
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x3b8))(plVar1);
  if (0 < (longlong)(int)plVar1[1]) {
    plVar2 = (longlong *)(*plVar1 + 8);
    uVar3 = 0;
    do {
      if (*plVar2 == param_2) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 5;
    } while ((longlong)(int)plVar1[1] != uVar3);
  }
  return 0xffffffff;
}



// FUNCTION 140ddec18 FUN_140ddec18 body=71 status=ok
// SIG undefined FUN_140ddec18(void)

undefined8 * FUN_140ddec18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b25f3d0;
  FUN_140a271cf(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ddec60 FUN_140ddec60 body=28 status=ok
// SIG undefined FUN_140ddec60(void)

undefined8 * FUN_140ddec60(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140ddec7c();
  return param_2;
}



// FUNCTION 140ddec7c FUN_140ddec7c body=79 status=ok
// SIG undefined FUN_140ddec7c(void)

void FUN_140ddec7c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  
  if ((*param_1 != 0) && ((longlong)(int)param_1[1] != -1)) {
    puVar2 = *(undefined8 **)(*(longlong *)(*param_1 + 0x50) + (longlong)(int)param_1[1] * 8);
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1446f84a2(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar2;
  }
  return;
}



// FUNCTION 140ddeccc FUN_140ddeccc body=422 status=ok
// SIG undefined FUN_140ddeccc(void)

longlong FUN_140ddeccc(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar2 = FUN_140279a58();
  if (iVar2 != -1) {
    if (*param_1 + (longlong)iVar2 * 0x40 != 0) {
      lVar5 = (longlong)iVar2 * 0x40 + *param_1;
      goto LAB_140ddee18;
    }
  }
  FUN_140ddef16(param_1,local_50);
  local_48[2] = 0;
  *local_48 = 0;
  local_48[1] = 0;
  *local_48 = *param_3;
  uVar4 = FUN_14477b664(param_3[1]);
  uVar4 = FUN_14477b664(uVar4);
  local_48[1] = uVar4;
  local_48[2] = param_3[2];
  local_48[3] = 0;
  local_48[3] = param_3[3];
  param_3[3] = 0;
  *(undefined4 *)(local_48 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)local_48 + 0x24) = *(undefined4 *)((longlong)param_3 + 0x24);
  param_3[4] = 0;
  local_48[5] = param_3[5];
  *(undefined4 *)(local_48 + 6) = 0;
  *(undefined4 *)(local_48 + 7) = 0xffffffff;
  local_58 = 0;
  cVar1 = FUN_140ddee74(param_1,param_2,local_48,local_50);
  if (cVar1 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar2 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_48 + 0x3c) = param_2;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(undefined4 *)(local_48 + 7) =
           *(undefined4 *)
            ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_50[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar2;
      FUN_140ddf0fc(param_1);
    }
  }
  lVar5 = *param_1 + (longlong)local_50[0] * 0x40;
LAB_140ddee18:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar5 + 0x30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddee74 FUN_140ddee74 body=161 status=ok
// SIG undefined FUN_140ddee74(void)

void FUN_140ddee74(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
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
  undefined1 uVar14;
  int iVar15;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar15 = FUN_140279a58();
    if (iVar15 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar15 * 0x40) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      *(undefined8 *)(puVar1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
      puVar1[8] = uVar10;
      puVar1[9] = uVar11;
      puVar1[10] = uVar12;
      puVar1[0xb] = uVar13;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14882b32e(param_1,*param_4,1);
      *param_4 = iVar15;
      uVar14 = 1;
      goto LAB_140ddeea8;
    }
  }
  uVar14 = 0;
LAB_140ddeea8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 140ddef16 FUN_140ddef16 body=485 status=ok
// SIG undefined FUN_140ddef16(void)

int * FUN_140ddef16(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x40);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 140ddf0fc FUN_140ddf0fc body=572 status=ok
// SIG undefined FUN_140ddf0fc(void)

void FUN_140ddf0fc(longlong *param_1)

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
        lVar9 = (longlong)iVar7 * 0x40;
        local_74 = iVar5;
        iVar5 = FUN_14027a0c2(lVar9 + lVar10);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0x3c + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 0x38 + lVar9) =
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
            if (iVar3 - lVar10 == lVar9) goto LAB_140ddf2fb;
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
LAB_140ddf2fb:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddf342 FUN_140ddf342 body=167 status=ok
// SIG undefined FUN_140ddf342(void)

undefined8 * FUN_140ddf342(undefined8 *param_1)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b955c00;
  *(undefined2 *)(param_1 + 0x8b) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0x404000003f800000;
  *(undefined1 *)(param_1 + 0x38) = 1;
  local_20 = "usabilitydata_door_default";
  local_18 = 0x1a;
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  if (param_1[0x35] != (ulonglong)uVar1) {
    param_1[0x37] = 0;
  }
  param_1[0x35] = (ulonglong)uVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddf3f8 FUN_140ddf3f8 body=85 status=ok
// SIG undefined FUN_140ddf3f8(void)

undefined8 * FUN_140ddf3f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a1a8050;
  FUN_140ddf44d(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 140ddf44d FUN_140ddf44d body=76 status=ok
// SIG undefined FUN_140ddf44d(void)

void FUN_140ddf44d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x60);
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
      plVar4 = plVar4 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ddf49a FUN_140ddf49a body=83 status=ok
// SIG undefined FUN_140ddf49a(void)

void FUN_140ddf49a(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x158);
  FUN_140ddf4ee(param_2);
  *(undefined1 *)((longlong)param_2 + 0x128) = 0;
  *(undefined4 *)((longlong)param_2 + 300) = 0x42c80000;
  *(undefined1 *)((longlong)param_2 + 0x130) = 0;
  *(undefined8 *)((longlong)param_2 + 0x138) = 0;
  *(undefined8 *)((longlong)param_2 + 0x140) = 0;
  *(undefined8 *)((longlong)param_2 + 0x148) = 0;
  *(undefined8 *)((longlong)param_2 + 0x150) = 0;
  return;
}



// FUNCTION 140ddf4ee FUN_140ddf4ee body=359 status=ok
// SIG undefined FUN_140ddf4ee(void)

undefined8 * FUN_140ddf4ee(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = param_1 + 6;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x24] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_140ddf9fa(puVar1,4);
  *(undefined4 *)(param_1 + 0xf) = 0x10;
  FUN_140ddfbf6(puVar1);
  local_3c = 1;
  local_38 = &local_3c;
  FUN_140ddf656(puVar1,local_2c,&local_38);
  local_3c = 2;
  local_38 = &local_3c;
  FUN_140ddf656(puVar1,local_2c,&local_38);
  local_3c = 3;
  local_38 = &local_3c;
  FUN_140ddf656(puVar1,local_2c,&local_38);
  local_3c = 4;
  local_38 = &local_3c;
  FUN_140ddf656(puVar1,local_2c,&local_38);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddf656 FUN_140ddf656 body=280 status=ok
// SIG undefined FUN_140ddf656(void)

undefined4 * FUN_140ddf656(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140ddf814(param_1,local_48);
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[5] = 0;
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_140ddf770(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140ddfbf6(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ddf770 FUN_140ddf770 body=163 status=ok
// SIG undefined FUN_140ddf770(void)

undefined8 FUN_140ddf770(longlong *param_1,uint param_2,int *param_3,int *param_4)

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
          FUN_147dfa5e2(param_1,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[6];
      } while (iVar7 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140ddf814 FUN_140ddf814 body=485 status=ok
// SIG undefined FUN_140ddf814(void)

int * FUN_140ddf814(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140ddf9fa FUN_140ddf9fa body=506 status=ok
// SIG undefined FUN_140ddf9fa(void)

void FUN_140ddf9fa(longlong *param_1,int param_2)

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
  uint uVar12;
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
    uVar12 = *puVar7;
    if (uVar12 == 0) {
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
        if (uVar8 == uVar13) goto LAB_140ddfadf;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
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
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
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
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140ddfadf;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
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
LAB_140ddfadf:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 140ddfbf6 FUN_140ddfbf6 body=506 status=ok
// SIG undefined FUN_140ddfbf6(void)

void FUN_140ddfbf6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
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
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar2 = *(uint *)(param_1 + 9);
  if (uVar2 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
LAB_140ddfc3a:
    uVar5 = 0;
    do {
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar2 != uVar5);
  }
  else {
    uVar4 = local_58;
    if (uVar2 == 0) goto LAB_140ddfce1;
    FUN_1446efa72(plVar7,0,uVar2,4);
    if (0 < (int)uVar2) goto LAB_140ddfc3a;
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
    iVar6 = local_58._4_4_;
    local_58 = uVar4;
    do {
      lVar3 = *local_70;
      lVar8 = (longlong)iVar6 * 0x20;
      uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar8);
      iVar9 = (int)uVar10;
      *(int *)(lVar3 + 0x1c + lVar8) = iVar9;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar3 + 0x18 + lVar8) =
           *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
      FUN_1449c0562(&local_68);
      iVar6 = local_58._4_4_;
      uVar4 = local_58;
    } while (local_58._4_4_ < (int)local_60[3]);
  }
LAB_140ddfce1:
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ddfdf2 FUN_140ddfdf2 body=25 status=ok
// SIG undefined FUN_140ddfdf2(void)

undefined8 FUN_140ddfdf2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140ddfe0c FUN_140ddfe0c body=108 status=ok
// SIG undefined FUN_140ddfe0c(void)

void FUN_140ddfe0c(longlong param_1)

{
  ushort *puVar1;
  
  *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 1;
  LOCK();
  *(undefined4 *)(param_1 + 0x17c) = 1;
  UNLOCK();
  puVar1 = *(ushort **)(param_1 + 0x158);
  if (puVar1 != (ushort *)0x0) {
    *puVar1 = *puVar1 | (ushort)(1L << (*(byte *)(param_1 + 0x150) & 0x3f));
  }
  if ((*(longlong *)(param_1 + 0x210) != 0) && (*(longlong *)(param_1 + 0x220) != 0)) {
    FUN_14480f766(*(longlong *)(param_1 + 0x210) + 0x88);
    *(undefined8 *)(param_1 + 0x220) = 0;
  }
  return;
}



// FUNCTION 140ddfe78 FUN_140ddfe78 body=435 status=ok
// SIG undefined FUN_140ddfe78(void)

void FUN_140ddfe78(longlong *param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
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
    lVar4 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if (DAT_14c86a9f8 == '\x01') {
        iVar1 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
        ;
        if (iVar1 != 2) {
          if (iVar1 != 1) goto LAB_140ddff02;
          DVar2 = FUN_140ad26c0();
          DVar3 = GetCurrentThreadId();
          if (DVar2 != DVar3) goto LAB_140ddff02;
        }
      }
      FUN_14036294a(param_1[4],1,1);
    }
  }
LAB_140ddff02:
  lVar4 = param_1[0x7c];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar4;
  }
  *(undefined8 *)(lVar4 + 0xae0) = 0;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    FUN_140de002c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de002c FUN_140de002c body=3723 status=ok
// SIG undefined FUN_140de002c(void)

void FUN_140de002c(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 uVar20;
  longlong *plVar21;
  int iVar22;
  ulonglong uVar23;
  uint *puVar24;
  ulonglong uVar25;
  longlong lVar26;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  undefined1 *local_c8;
  code *local_c0;
  longlong *local_b8;
  longlong local_b0;
  uint *local_a8;
  uint local_9c;
  longlong *local_98;
  ulonglong local_90;
  longlong local_88 [2];
  code *local_78 [2];
  code *local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    if (DAT_14cad2858 == 0) {
      local_d0 = &local_68;
      local_68 = FUN_144a7958c;
      local_c0 = FUN_14081d0ea;
      local_c8 = &LAB_146395584;
      local_d8 = &LAB_147a0ba80;
      local_e0 = &LAB_14575ccce;
      local_e8 = L"Engine";
      local_f0 = 0x40000000000;
      local_f8 = 0x10000004;
      local_100 = 0x10;
      local_108 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent");
    }
    lVar6 = *(longlong *)(lVar6 + 0x10);
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar14 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar14 != 2)) {
        if (iVar14 != 1) goto LAB_140de00c0;
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 != DVar4) goto LAB_140de00c0;
      }
      FUN_14036294a(param_1[4],1);
    }
  }
LAB_140de00c0:
  local_b0 = param_1[0x7c];
  if (local_b0 == 0) {
    local_b0 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = local_b0;
  }
  local_98 = param_1 + 0x87;
  local_a8 = (uint *)(param_1 + 0x89);
  iVar14 = (int)param_1[0x8c];
  iVar22 = iVar14;
  local_b8 = param_1;
  if (iVar14 == 0) {
    uVar25 = 1;
    uVar15 = 0;
    iVar17 = 0;
    iVar11 = 0;
  }
  else {
    puVar5 = (uint *)param_1[0x8b];
    if ((uint *)param_1[0x8b] == (uint *)0x0) {
      puVar5 = local_a8;
    }
    uVar2 = *puVar5;
    if (uVar2 == 0) {
      iVar11 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar11 = iVar14 + -1;
      }
      uVar15 = 0;
      uVar25 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar25 = uVar15;
      }
      iVar17 = 0;
      do {
        if (uVar25 == uVar15) goto LAB_140de0199;
        iVar17 = iVar17 + 0x20;
        uVar2 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar2 == 0);
    }
    else {
      uVar15 = 0;
      iVar17 = 0;
    }
    uVar25 = (ulonglong)(-uVar2 & uVar2);
    uVar23 = uVar25 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar11 = (iVar17 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar11) {
      iVar11 = iVar14;
    }
  }
  if (iVar11 != iVar14) {
    uVar2 = 0xffffffff;
    do {
      lVar26 = local_b0;
      lVar6 = *local_98;
      lVar16 = *(longlong *)(lVar6 + 8 + (longlong)iVar11 * 0x18);
      iVar22 = *(int *)(lVar16 + 0x38);
      if ((longlong)iVar22 != 0) {
        lVar16 = *(longlong *)(lVar16 + 0x30);
        lVar9 = 0;
        local_9c = uVar2;
        local_90 = uVar15;
        do {
          FUN_140a02586(lVar26,*(undefined8 *)(lVar16 + lVar9));
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar22 * 8 != lVar9);
        lVar16 = *(longlong *)(lVar6 + (longlong)iVar11 * 0x18 + 8);
        uVar15 = local_90;
        param_1 = local_b8;
        uVar2 = local_9c;
      }
      FUN_140b4c2a0(lVar16);
      uVar2 = uVar2 & ~(uint)uVar25;
      puVar5 = (uint *)param_1[0x8b];
      if ((uint *)param_1[0x8b] == (uint *)0x0) {
        puVar5 = local_a8;
      }
      iVar22 = (int)param_1[0x8c];
      iVar11 = (int)uVar15;
      lVar6 = (longlong)iVar11;
      uVar18 = puVar5[lVar6] & uVar2;
      if (uVar18 == 0) {
        iVar19 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar19 = iVar22 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar12 = iVar19;
        if (iVar19 < iVar11) {
          iVar12 = iVar11;
        }
        if (iVar11 < iVar19) {
          lVar16 = 0;
          do {
            uVar18 = puVar5[lVar6 + lVar16 + 1];
            if (uVar18 != 0) {
              uVar15 = (ulonglong)(iVar11 + (int)lVar16 + 1);
              uVar2 = 0xffffffff;
              goto LAB_140de07e1;
            }
            iVar17 = iVar17 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar12 - lVar6 != lVar16);
          uVar2 = 0xffffffff;
          iVar11 = iVar12;
        }
        uVar15 = (ulonglong)(iVar11 + 1);
        param_1 = local_b8;
        iVar11 = iVar22;
      }
      else {
LAB_140de07e1:
        uVar25 = (ulonglong)(-uVar18 & uVar18);
        uVar23 = uVar25 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar11 = (iVar17 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar22 <= iVar11) {
          iVar11 = iVar22;
        }
      }
    } while (iVar11 != iVar14);
  }
LAB_140de0199:
  if ((int)param_1[0x88] != *(int *)((longlong)param_1 + 0x46c)) {
    plVar10 = param_1 + 0x8e;
    if ((longlong *)param_1[0x8f] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x8f];
    }
    iVar14 = (int)param_1[0x90];
    iVar11 = iVar14 + 3;
    if (-1 < iVar14) {
      iVar11 = iVar14;
    }
    if ((int)param_1[0x88] - *(int *)((longlong)param_1 + 0x46c) < iVar11 >> 2) {
      if (iVar22 != 0) {
        puVar5 = (uint *)param_1[0x8b];
        if ((uint *)param_1[0x8b] == (uint *)0x0) {
          puVar5 = local_a8;
        }
        uVar2 = *puVar5;
        param_1 = local_b8;
        if (uVar2 == 0) {
          iVar14 = iVar22 + 0x1e;
          if (-1 < iVar22 + -1) {
            iVar14 = iVar22 + -1;
          }
          uVar15 = 0;
          uVar25 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar25 = uVar15;
          }
          iVar14 = 0;
          do {
            if (uVar25 == uVar15) goto LAB_140de09b0;
            iVar14 = iVar14 + 0x20;
            uVar2 = puVar5[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar2 == 0);
        }
        else {
          iVar14 = 0;
          uVar15 = 0;
        }
        uVar23 = (ulonglong)(-uVar2 & uVar2);
        uVar25 = uVar23 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar11 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar11 < iVar22) {
          uVar2 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar10 +
             (longlong)*(int *)(local_b8[0x87] + 0x14 + (longlong)iVar11 * 0x18) * 4) = 0xffffffff;
            uVar2 = ~(uint)uVar23 & uVar2;
            puVar5 = (uint *)local_b8[0x8b];
            if ((uint *)local_b8[0x8b] == (uint *)0x0) {
              puVar5 = local_a8;
            }
            iVar17 = (int)local_b8[0x8c];
            iVar11 = (int)uVar15;
            lVar6 = (longlong)iVar11;
            uVar18 = puVar5[lVar6] & uVar2;
            if (uVar18 == 0) {
              iVar19 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar19 = iVar17 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar14 = iVar14 + 0x20;
              iVar12 = iVar19;
              if (iVar19 < iVar11) {
                iVar12 = iVar11;
              }
              if (iVar11 < iVar19) {
                lVar16 = 0;
                do {
                  uVar18 = puVar5[lVar6 + lVar16 + 1];
                  if (uVar18 != 0) {
                    uVar15 = (ulonglong)(iVar11 + (int)lVar16 + 1);
                    uVar2 = 0xffffffff;
                    goto LAB_140de0ca6;
                  }
                  iVar14 = iVar14 + 0x20;
                  lVar16 = lVar16 + 1;
                } while (iVar12 - lVar6 != lVar16);
                uVar2 = 0xffffffff;
                iVar11 = iVar12;
              }
              uVar15 = (ulonglong)(iVar11 + 1);
              iVar11 = iVar17;
            }
            else {
LAB_140de0ca6:
              uVar23 = (ulonglong)(-uVar18 & uVar18);
              uVar25 = uVar23 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar11 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if (iVar17 <= iVar11) {
                iVar11 = iVar17;
              }
            }
          } while (iVar11 != iVar22);
        }
      }
    }
    else if (0 < iVar14) {
      lVar6 = 0;
      do {
        *(undefined4 *)((longlong)plVar10 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[0x90]);
    }
LAB_140de09b0:
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(int *)((longlong)param_1 + 0x444) < 0) {
      FUN_144727cd0(local_98,0);
    }
    param_1[0x8d] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if ((int)param_1[0x92] != *(int *)((longlong)param_1 + 0x4bc)) {
    plVar10 = param_1 + 0x98;
    if ((longlong *)param_1[0x99] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x99];
    }
    iVar14 = (int)param_1[0x9a];
    iVar22 = iVar14 + 3;
    if (-1 < iVar14) {
      iVar22 = iVar14;
    }
    if ((int)param_1[0x92] - *(int *)((longlong)param_1 + 0x4bc) < iVar22 >> 2) {
      iVar14 = (int)param_1[0x96];
      if (iVar14 != 0) {
        puVar5 = (uint *)(param_1 + 0x93);
        puVar24 = (uint *)param_1[0x95];
        if ((uint *)param_1[0x95] == (uint *)0x0) {
          puVar24 = puVar5;
        }
        uVar2 = *puVar24;
        param_1 = local_b8;
        if (uVar2 == 0) {
          iVar22 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar22 = iVar14 + -1;
          }
          uVar15 = 0;
          uVar25 = (ulonglong)(uint)(iVar22 >> 5);
          if (iVar22 >> 5 < 1) {
            uVar25 = uVar15;
          }
          iVar22 = 0;
          do {
            if (uVar25 == uVar15) goto LAB_140de0a30;
            iVar22 = iVar22 + 0x20;
            uVar2 = puVar24[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar2 == 0);
        }
        else {
          uVar15 = 0;
          iVar22 = 0;
        }
        uVar23 = (ulonglong)(-uVar2 & uVar2);
        uVar25 = uVar23 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar11 = (iVar22 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar11 < iVar14) {
          uVar2 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar10 +
             (longlong)*(int *)(local_b8[0x91] + 0x14 + (longlong)iVar11 * 0x18) * 4) = 0xffffffff;
            uVar2 = ~(uint)uVar23 & uVar2;
            puVar24 = (uint *)local_b8[0x95];
            if ((uint *)local_b8[0x95] == (uint *)0x0) {
              puVar24 = puVar5;
            }
            iVar17 = (int)local_b8[0x96];
            iVar11 = (int)uVar15;
            lVar6 = (longlong)iVar11;
            uVar18 = puVar24[lVar6] & uVar2;
            if (uVar18 == 0) {
              iVar19 = iVar17 + 0x1e;
              if (-1 < iVar17 + -1) {
                iVar19 = iVar17 + -1;
              }
              iVar19 = iVar19 >> 5;
              iVar22 = iVar22 + 0x20;
              iVar12 = iVar19;
              if (iVar19 < iVar11) {
                iVar12 = iVar11;
              }
              if (iVar11 < iVar19) {
                lVar16 = 0;
                do {
                  uVar18 = puVar24[lVar6 + lVar16 + 1];
                  if (uVar18 != 0) {
                    uVar15 = (ulonglong)(iVar11 + (int)lVar16 + 1);
                    uVar2 = 0xffffffff;
                    goto LAB_140de0e42;
                  }
                  iVar22 = iVar22 + 0x20;
                  lVar16 = lVar16 + 1;
                } while (iVar12 - lVar6 != lVar16);
                uVar2 = 0xffffffff;
                lVar6 = (longlong)iVar12;
              }
              uVar15 = lVar6 + 1U & 0xffffffff;
              iVar11 = iVar17;
            }
            else {
LAB_140de0e42:
              uVar23 = (ulonglong)(-uVar18 & uVar18);
              uVar25 = uVar23 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar11 = (iVar22 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if (iVar17 <= iVar11) {
                iVar11 = iVar17;
              }
            }
          } while (iVar11 != iVar14);
        }
      }
    }
    else if (0 < iVar14) {
      lVar6 = 0;
      do {
        *(undefined4 *)((longlong)plVar10 + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)param_1[0x9a]);
    }
LAB_140de0a30:
    *(undefined4 *)(param_1 + 0x92) = 0;
    if (*(int *)((longlong)param_1 + 0x494) < 0) {
      FUN_144727cd0(param_1 + 0x91,0);
    }
    param_1[0x97] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x96) = 0;
  }
  while( true ) {
    plVar21 = (longlong *)param_1[0x9e];
    plVar10 = plVar21 + (int)param_1[0x9f];
    if ((longlong)(int)param_1[0x9f] == 0) break;
    plVar13 = plVar21;
    while (*plVar13 != *(longlong *)(local_b0 + 0x170)) {
      plVar13 = plVar13 + 1;
      if (plVar13 == plVar10) goto LAB_140de01fd;
    }
    FUN_1470d7b1c(param_1);
  }
LAB_140de01fd:
  local_68 = (code *)0x0;
  uStack_60 = 0;
  lVar6 = local_b0;
  if (plVar21 != plVar10) {
    do {
      plVar13 = (longlong *)*plVar21;
      lVar6 = (**(code **)(*plVar13 + 0xa8))(plVar13);
      uVar15 = uStack_60;
      if (lVar6 == 0) {
        lVar6 = (longlong)(int)uStack_60;
        uVar2 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar2);
        if (uStack_60._4_4_ < uVar2) {
          FUN_140c4a4dc(&local_68,uVar15 & 0xffffffff);
        }
        *(longlong **)(local_68 + lVar6 * 8) = plVar13;
      }
      lVar6 = local_b0;
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar10);
    lVar16 = (longlong)(int)uStack_60;
    if (lVar16 != 0) {
      lVar26 = 0;
      do {
        FUN_140a02510(param_1,lVar6);
        lVar26 = lVar26 + 8;
      } while (lVar16 * 8 != lVar26);
    }
  }
  plVar10 = *(longlong **)(lVar6 + 0x170);
  if ((plVar10 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar10 + 0xc0))(plVar10), cVar1 != '\0')) {
    iVar14 = (int)param_1[0xa1];
    *(uint *)(param_1 + 0xa1) = iVar14 + 1U;
    if (*(uint *)((longlong)param_1 + 0x50c) < iVar14 + 1U) {
      FUN_140c4a4dc(param_1 + 0xa0,iVar14);
    }
    *(longlong **)(param_1[0xa0] + (longlong)iVar14 * 8) = plVar10;
  }
  if ((longlong)(int)param_1[0xa1] != 0) {
    plVar21 = (longlong *)param_1[0xa0];
    plVar10 = plVar21 + (int)param_1[0xa1];
    iVar14 = (int)param_1[0x9f];
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    do {
      plVar13 = (longlong *)*plVar21;
      if (plVar13 != (longlong *)0x0 && iVar14 != 0) {
        do {
          lVar16 = (**(code **)(*plVar13 + 0xa8))(plVar13);
          if ((lVar16 != 0) &&
             (plVar7 = (longlong *)(**(code **)(*plVar13 + 0xa8))(plVar13), *plVar7 != 0)) {
            lVar16 = (**(code **)(*plVar13 + 0xa8))(plVar13);
            if (lVar16 == 0) {
              lVar16 = 0;
            }
            else {
              plVar7 = (longlong *)(**(code **)(*plVar13 + 0xa8))(plVar13);
              lVar16 = *plVar7;
            }
            if ((longlong)(int)param_1[0x9f] != 0) {
              lVar26 = 0;
              do {
                if (*(longlong *)(param_1[0x9e] + lVar26) == lVar16) {
                  lVar16 = param_1[4];
                  if (lVar16 != 0) {
                    if (DAT_14cad2858 == 0) {
                      local_78[0] = FUN_144a7958c;
                      local_c0 = FUN_14081d0ea;
                      local_c8 = &LAB_146395584;
                      local_d0 = local_78;
                      local_d8 = &LAB_147a0ba80;
                      local_e0 = &LAB_14575ccce;
                      local_e8 = L"Engine";
                      local_f0 = 0x40000000000;
                      local_f8 = 0x10000004;
                      local_100 = 0x10;
                      local_108 = 0x1180;
                      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,
                                    FUN_1463bcebe);
                    }
                    lVar16 = *(longlong *)(lVar16 + 0x10);
                    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar16 + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(lVar16 + 0x30) +
                         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
                      if ((DAT_14c86a9f8 == '\x01') &&
                         (iVar14 = *(int *)(lVar6 + 0xc60), iVar14 != 2)) {
                        if (iVar14 == 1) {
                          DVar3 = FUN_140ad26c0();
                          DVar4 = GetCurrentThreadId();
                          if (DVar3 == DVar4) goto LAB_140de05c9;
                        }
                      }
                      else {
LAB_140de05c9:
                        FUN_14036294a(param_1[4],1);
                      }
                    }
                  }
                  lVar16 = param_1[0x7c];
                  if (lVar16 == 0) {
                    lVar16 = (**(code **)(*param_1 + 0x350))(param_1);
                    param_1[0x7c] = lVar16;
                  }
                  lVar26 = (**(code **)(*plVar13 + 0xa8))(plVar13);
                  if (lVar26 != 0) {
                    plVar7 = (longlong *)(**(code **)(*plVar13 + 0xa8))(plVar13);
                    plVar7 = (longlong *)*plVar7;
                    if (plVar7 != (longlong *)0x0) {
                      lVar26 = (**(code **)(*plVar7 + 0xa8))(plVar7);
                      if (lVar26 == 0) {
                        uVar20 = 0;
                      }
                      else {
                        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0xa8))(plVar7);
                        uVar20 = *puVar8;
                      }
                      puVar8 = (undefined8 *)(**(code **)(*plVar13 + 0xa8))(plVar13);
                      if (puVar8 != (undefined8 *)0x0) {
                        *puVar8 = uVar20;
                        FUN_140a02510(param_1,lVar16);
                      }
                    }
                  }
                  goto LAB_140de03e4;
                }
                lVar26 = lVar26 + 8;
              } while ((longlong)(int)param_1[0x9f] * 8 != lVar26);
            }
          }
          lVar16 = (**(code **)(*plVar13 + 0xa8))(plVar13);
          if (lVar16 == 0) {
            iVar14 = (int)param_1[0x9f];
            break;
          }
          puVar8 = (undefined8 *)(**(code **)(*plVar13 + 0xa8))(plVar13);
          plVar13 = (longlong *)*puVar8;
LAB_140de03e4:
          iVar14 = (int)param_1[0x9f];
          if ((plVar13 == (longlong *)0x0) || (iVar14 == 0)) break;
        } while( true );
      }
      plVar21 = plVar21 + 1;
    } while (plVar21 != plVar10);
  }
  *(undefined4 *)(param_1 + 0xa1) = 0;
  if (*(int *)((longlong)param_1 + 0x50c) < 0) {
    FUN_1470d9a06(param_1 + 0xa0,0);
  }
  lVar6 = DAT_14c9a62a0;
  iVar14 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar14 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar14 == 2)) {
    uVar15 = 0;
  }
  else if (iVar14 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar15 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar15 = 1;
  }
  if ((*(int *)(lVar6 + uVar15 * 4) != 0) && (lVar6 = param_1[0x9f], (longlong)(int)lVar6 != 0)) {
    plVar10 = param_1 + 0x9e;
    lVar16 = *plVar10;
    lVar26 = 0;
    do {
      plVar21 = *(longlong **)(lVar16 + lVar26);
      if ((plVar21 != (longlong *)0x0) &&
         (lVar9 = (**(code **)(*plVar21 + 0xa8))(plVar21), lVar9 != 0)) {
        (**(code **)(*plVar21 + 0xa8))(plVar21);
      }
      lVar26 = lVar26 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar26);
    if (*(longlong *)(param_1[4] + 0xa8) == 0) {
      FUN_140056680(local_78,&DAT_149e01fe8);
    }
    else {
      local_88[0] = *(longlong *)(*(longlong *)(param_1[4] + 0xa8) + 0x18);
      FUN_1400021e4(local_88,local_78);
    }
    if (param_1[0x9d] == 0) {
      FUN_140056680(local_88,&DAT_149e01fe8);
    }
    else {
      local_50 = *(undefined8 *)(param_1[0x9d] + 0x18);
      FUN_1400021e4(&local_50,local_88);
    }
    plVar21 = *(longlong **)(local_b0 + 0x170);
    while ((plVar21 != (longlong *)0x0 &&
           (lVar6 = (**(code **)(*plVar21 + 0xa8))(plVar21), lVar6 != 0))) {
      puVar8 = (undefined8 *)(**(code **)(*plVar21 + 0xa8))(plVar21);
      plVar21 = (longlong *)*puVar8;
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar6 = param_1[0x9f];
    if ((longlong)(int)lVar6 != 0) {
      lVar16 = *plVar10;
      lVar26 = 0;
      do {
        puVar8 = *(undefined8 **)(lVar16 + lVar26);
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
        lVar26 = lVar26 + 8;
      } while ((longlong)(int)lVar6 * 8 != lVar26);
      *(undefined4 *)(param_1 + 0x9f) = 0;
      if (*(int *)((longlong)param_1 + 0x4fc) < 0) {
        FUN_1470d9a06(plVar10,0);
      }
    }
  }
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140de0eb8 FUN_140de0eb8 body=103 status=ok
// SIG undefined FUN_140de0eb8(void)

void FUN_140de0eb8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x000140de0f1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140de0eff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 140de0f20 FUN_140de0f20 body=343 status=ok
// SIG undefined FUN_140de0f20(void)

void FUN_140de0f20(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if ((*(byte *)(param_1 + 0x8d) & 0x20) != 0) {
    return;
  }
  if (*param_2 == 0) {
    return;
  }
  uVar3 = *(undefined8 *)(*param_2 + 0x18);
  cVar1 = *(char *)((longlong)param_2 + 0x13);
  lVar4 = param_2[0xb];
  if (cVar1 == '\x02') {
    puVar5 = &DAT_14cb92920;
  }
  else {
    if ((cVar1 != '\b') && (cVar1 != '\x10')) goto LAB_140de0f81;
    puVar5 = &DAT_14cb92940;
  }
  FUN_140de1078(param_1,puVar5,0,0);
LAB_140de0f81:
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar2 = *(uint *)(param_1 + 0x30), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x34))) &&
      ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar7;
    }
    else {
      lVar6 = 0;
    }
    if (((*(int *)(lVar6 + 0x388) != 0) && (uVar2 = *(uint *)(lVar6 + 900), -1 < (int)uVar2)) &&
       ((((int)uVar2 < DAT_14c9647dc &&
         (((plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar6 + 0x388))) &&
          ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) && (*plVar7 != 0)))) {
      FUN_140de1284(*plVar7,uVar3,cVar1,(int)lVar4);
      return;
    }
  }
  return;
}



// FUNCTION 140de1078 FUN_140de1078 body=523 status=ok
// SIG undefined FUN_140de1078(void)

void FUN_140de1078(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  void *pvVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_a0;
  code *local_98 [2];
  undefined8 *local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = (void *)0x0;
  local_b8 = *(int *)(param_2 + 1);
  lVar8 = (longlong)local_b8;
  pvVar3 = (void *)*param_2;
  local_c8 = param_1;
  if (lVar8 == 0) {
    local_b4 = 0;
  }
  else {
    FUN_1446dd670(&local_c0,local_b8,0);
    memcpy(local_c0,pvVar3,lVar8 * 2);
  }
  local_a0 = *(longlong **)(param_1 + 0x10);
  if (local_a0 == (longlong *)0x0) {
    local_a0 = (longlong *)0x0;
    local_a8 = 0;
  }
  else {
    iVar6 = (int)local_a0[1];
    local_a8 = 0;
    do {
      if (iVar6 == 0) {
        local_a0 = (longlong *)0x0;
        goto LAB_140de112c;
      }
      LOCK();
      iVar5 = (int)local_a0[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(local_a0 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    local_a8 = *(undefined8 *)(param_1 + 8);
  }
LAB_140de112c:
  local_98[0] = (code *)0x0;
  local_b0 = param_3;
  uStack_ac = param_4;
  puVar7 = (undefined8 *)FUN_14001cc68(0x38,8);
  pvVar3 = local_c0;
  *puVar7 = &PTR_FUN_14b478d20;
  puVar7[1] = local_c8;
  puVar7[2] = 0;
  lVar8 = (longlong)local_b8;
  *(int *)(puVar7 + 3) = local_b8;
  local_88 = puVar7;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar7 + 2,local_b8,0);
    memcpy((void *)puVar7[2],pvVar3,lVar8 * 2);
  }
  puVar7[4] = CONCAT44(uStack_ac,local_b0);
  puVar7[5] = local_a8;
  puVar7[6] = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
    UNLOCK();
  }
  if (puVar7 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_98[0] = FUN_143eb941e;
  }
  FUN_1403911de(param_1,local_98);
  plVar4 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140de1284 FUN_140de1284 body=328 status=ok
// SIG undefined FUN_140de1284(void)

void FUN_140de1284(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  undefined1 local_55;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_55 = param_3;
  local_54 = param_4;
  local_50 = param_2;
  FUN_1400021e4(&local_50,&local_78);
  uVar5 = local_70 - 1;
  if (local_70 == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    uVar6 = 0;
    do {
      uVar1 = *(ushort *)(local_78 + uVar6 * 2);
      *(ushort *)(local_78 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  local_68 = local_78;
  local_60 = local_70;
  local_5c = local_6c;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if ((*(char *)(lVar4 + 0xcd) == '\0') && (*(char *)(lVar4 + 0xce) == '\0')) {
        local_88 = &local_54;
        FUN_140de13ce(lVar4,"Event_Input_ActionTriggerEvent",&local_68,&local_55);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x50));
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140de13ce FUN_140de13ce body=674 status=ok
// SIG undefined FUN_140de13ce(void)

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffffa8 : 0x000140de1666 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_140de13ce(longlong param_1,char *param_2,undefined8 *param_3,undefined1 *param_4,
             undefined4 *param_5)

{
  void *pvVar1;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined1 auStack_1d8 [32];
  longlong local_1b8;
  undefined8 local_1b0;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined1 local_190 [256];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  code *local_78;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_90 = 0;
  if (param_2 == (char *)0x0) {
    local_88 = 0;
    local_80 = 0;
  }
  else {
    sVar2 = strlen(param_2);
    FUN_1446e6fe8(local_190,param_2,sVar2 & 0xffffffff,1);
  }
  FUN_140056680(&local_1b8,local_88);
  local_1a8 = (void *)0x0;
  local_1a0 = *(int *)(param_3 + 1);
  lVar7 = (longlong)local_1a0;
  pvVar1 = (void *)*param_3;
  if (lVar7 == 0) {
    local_19c = 0;
  }
  else {
    FUN_1446dd670(&local_1a8,local_1a0,0);
    memcpy(local_1a8,pvVar1,lVar7 * 2);
  }
  local_198 = CONCAT31(local_198._1_3_,*param_4);
  uStack_194 = *param_5;
  local_78 = (code *)0x0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  pvVar1 = local_1a8;
  *puVar3 = &PTR_FUN_14b478ce0;
  puVar3[1] = local_1b8;
  local_1b8 = 0;
  *(undefined4 *)(puVar3 + 2) = (undefined4)local_1b0;
  *(undefined4 *)((longlong)puVar3 + 0x14) = local_1b0._4_4_;
  local_1b0 = 0;
  puVar3[3] = 0;
  lVar7 = (longlong)local_1a0;
  *(int *)(puVar3 + 4) = local_1a0;
  if (lVar7 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 3,local_1a0,0);
    memcpy((void *)puVar3[3],pvVar1,lVar7 * 2);
  }
  puVar3[5] = CONCAT44(uStack_194,local_198);
  if (puVar3 == (undefined8 *)&DAT_fffffffffffffff8) {
    pcVar6 = (code *)0x0;
  }
  else {
    pcVar6 = FUN_1418b8eea;
    local_78 = FUN_1418b8eea;
  }
  puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  *puVar4 = 0;
  puVar4[2] = pcVar6;
  puVar4[4] = puVar3;
  local_68 = 0;
  *(undefined4 *)(puVar4 + 8) = local_48;
  *(undefined4 *)((longlong)puVar4 + 0x44) = uStack_44;
  *(undefined4 *)(puVar4 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(puVar4 + 6) = local_58;
  *(undefined4 *)((longlong)puVar4 + 0x34) = uStack_54;
  *(undefined4 *)(puVar4 + 7) = uStack_50;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = uStack_4c;
  if (puVar3 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_78 = (code *)0x0;
  }
  uVar5 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = *(undefined8 **)(param_1 + 0x30);
    *(undefined8 **)(param_1 + 0x30) = puVar4;
    UNLOCK();
    LOCK();
    uVar5 = *puVar3;
    *puVar3 = puVar4;
    UNLOCK();
    if (local_78 != (code *)0x0) {
      uVar5 = (**(code **)(CONCAT44(uStack_54,local_58) + 0x10))();
    }
  }
  if (local_1a8 != (void *)0x0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_1b8 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if (local_90 != 0) {
    uVar5 = FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140de1672 FUN_140de1672 body=147 status=ok
// SIG undefined FUN_140de1672(void)

void FUN_140de1672(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  lVar1 = FUN_1409231c6(param_2);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x178), lVar1 != 0)) {
    lVar2 = FUN_14041aabe();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      puVar3 = (undefined4 *)FUN_140de1706(lVar1,0);
      (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
      uVar4 = *puVar3;
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      goto LAB_140de16db;
    }
  }
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
LAB_140de16db:
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)(param_1 + 0x14) = uVar7;
  *(undefined1 *)(param_1 + 0x28) = 6;
  return;
}



// FUNCTION 140de1706 FUN_140de1706 body=127 status=ok
// SIG undefined FUN_140de1706(void)

longlong FUN_140de1706(longlong param_1,char param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     ((param_2 != '\0' ||
      (((*(int *)(param_1 + 0x4bc) == 0 && *(int *)(param_1 + 0x4b8) == 0) &&
       *(int *)(param_1 + 0x4c0) == 0) && *(int *)(param_1 + 0x4c4) == 0)))) {
    FUN_1412e3d1e(&local_28);
    *(undefined4 *)(param_1 + 0x4b8) = local_28;
    *(undefined4 *)(param_1 + 0x4bc) = uStack_24;
    *(undefined4 *)(param_1 + 0x4c0) = uStack_20;
    *(undefined4 *)(param_1 + 0x4c4) = uStack_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1 + 0x4b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de1786 FUN_140de1786 body=9 status=ok
// SIG undefined FUN_140de1786(void)

void FUN_140de1786(longlong param_1)

{
  FUN_140de1790(param_1 + 0x10);
  return;
}



// FUNCTION 140de1790 FUN_140de1790 body=102 status=ok
// SIG undefined FUN_140de1790(void)

void FUN_140de1790(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ab9ebf0;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_140de1838(*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20));
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    FUN_140de17f6(*(undefined8 *)(lVar1 + 8),*(undefined4 *)(lVar1 + 0x10));
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
  }
  FUN_140b25c50(param_1);
  return;
}



// FUNCTION 140de17f6 FUN_140de17f6 body=66 status=ok
// SIG undefined FUN_140de17f6(void)

void FUN_140de17f6(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48();
        }
        *(undefined8 *)(param_1 + lVar1 * 8) = 0;
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140de1838 FUN_140de1838 body=87 status=ok
// SIG undefined FUN_140de1838(void)

void FUN_140de1838(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
      *param_1 = 0;
    }
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 140de1890 FUN_140de1890 body=144 status=ok
// SIG undefined FUN_140de1890(void)

void FUN_140de1890(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1401b21c4();
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      local_18 = 0;
      goto LAB_140de18cb;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  local_18 = param_1 + 0x3a40;
LAB_140de18cb:
  local_20 = param_1;
  FUN_140c1cbb0(param_1 + 0x6c48);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_140de1922(param_1 + 0x6f90,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 140de1922 FUN_140de1922 body=119 status=ok
// SIG undefined FUN_140de1922(void)

void FUN_140de1922(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0xa8) = param_2;
    if (param_2 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0xa8) = param_2;
  }
  if (*(char *)(param_2 + 0x178) == '\x03') {
    lVar1 = FUN_140de1999(param_2);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) = param_1, DAT_14c950c29 == '\x01')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x138) = lVar1;
  }
  return;
}



// FUNCTION 140de1999 FUN_140de1999 body=177 status=ok
// SIG undefined FUN_140de1999(void)

undefined8 FUN_140de1999(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140db2b7c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de1a5a FUN_140de1a5a body=61 status=ok
// SIG undefined FUN_140de1a5a(void)

undefined8 * FUN_140de1a5a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b316ed0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140de1a98 FUN_140de1a98 body=69 status=ok
// SIG undefined FUN_140de1a98(void)

undefined8 FUN_140de1a98(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_140de1ade(param_1 + 0x98);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x28))(plVar1,0,param_1 + 0x98);
    if (lVar2 != 0) {
      uVar3 = FUN_1405c052c(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140de1ade FUN_140de1ade body=270 status=ok
// SIG undefined FUN_140de1ade(void)

undefined8 FUN_140de1ade(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)DAT_14cb1d168 >> 0x10);
    uVar5 = (uint)DAT_14cb1d168 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)DAT_14cb1d168 >> 0x20) + ((uint)DAT_14cb1d168 << 0x10 | uVar5)
                    + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x28);
        if (*plVar4 == DAT_14cb1d168) {
          uVar2 = 0;
          if ((plVar4 != (longlong *)0x0) && (plVar4 + 1 != (longlong *)0x0)) {
            local_40 = plVar4[1];
            FUN_1446dcdd4(local_38);
            if (DAT_14cb1d1f0 == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = FUN_144837462(DAT_14cb1d1f0,local_38);
            }
            if (local_20 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar3 = (int)plVar4[4];
        uVar2 = 0;
      } while (iVar3 != -1);
      goto LAB_140de1bae;
    }
  }
  uVar2 = 0;
LAB_140de1bae:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140de1bee FUN_140de1bee body=87 status=ok
// SIG undefined FUN_140de1bee(void)

void FUN_140de1bee(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_140de1c46(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x150) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de1c46 FUN_140de1c46 body=2492 status=ok
// SIG undefined FUN_140de1c46(void)

void FUN_140de1c46(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = *param_1;
  uVar2 = *param_2;
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_140de1c91:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de1c91;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  if ((char)param_2[0x11] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x10];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de1d27:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de1d27;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x1d] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x1c];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de1dbd:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de1dbd;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x29] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x28];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de1e53:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de1e53;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x35] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x34];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de1ee9:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de1ee9;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x41] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x40];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de1f85:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de1f85;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x4d] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x4c];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de2021:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de2021;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x59] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x58];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de20bd:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de20bd;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x65] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[100];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de2159:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de2159;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x71] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x70];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de21f5:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de21f5;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x7d] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x7c];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de2291:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de2291;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x89] == '\x01') {
    lVar4 = *param_1;
    uVar2 = param_2[0x88];
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140de232d:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de232d;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  if ((char)param_2[0x95] == '\x01') {
    FUN_140dba9e6(*param_1,param_2[0x94]);
  }
  lVar4 = *param_1;
  uVar2 = param_2[0xa0];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_140de2401;
  if (iVar3 == 0) {
LAB_140de23c2:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140de23c2;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_140de2401:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  return;
}



// FUNCTION 140de2610 FUN_140de2610 body=157 status=ok
// SIG undefined FUN_140de2610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140de2610(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
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



// FUNCTION 140de26ae FUN_140de26ae body=2582 status=ok
// SIG undefined FUN_140de26ae(void)

/* WARNING: Removing unreachable block (ram,0x000140de303e) */
/* WARNING: Removing unreachable block (ram,0x000140de304d) */
/* WARNING: Removing unreachable block (ram,0x000140de3064) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140de26ae(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int *piVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined1 *local_1d0;
  longlong local_1c8;
  int local_1bc;
  int local_1b8;
  char local_1b1;
  longlong local_1b0;
  longlong *local_1a8;
  int *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  undefined1 local_180;
  char local_17f;
  longlong *local_170;
  double local_160 [2];
  longlong *local_150;
  undefined1 local_148;
  longlong *local_140;
  longlong *local_138;
  int local_130;
  int local_12c;
  int *local_128;
  longlong *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 local_e7;
  undefined8 local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar12 = *(longlong **)(param_1 + 0x30);
    plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0x38) * 0xd;
    do {
      FUN_140868060(plVar12[2],(int)plVar12[3]);
      *(undefined4 *)(plVar12 + 3) = 0;
      if (*(int *)((longlong)plVar12 + 0x1c) != 0) {
        FUN_146a75486(plVar12 + 2);
      }
      FUN_140868060(plVar12[4],(int)plVar12[5]);
      *(undefined4 *)(plVar12 + 5) = 0;
      if (*(int *)((longlong)plVar12 + 0x2c) != 0) {
        FUN_146a75486(plVar12 + 4);
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      lVar11 = (longlong)*(int *)((longlong)plVar12 + 100) * 0x70;
      lVar9 = lVar4 + lVar11;
      local_e0 = *(undefined8 *)(lVar4 + 0x10 + lVar11);
      plVar5 = *(longlong **)(lVar4 + 0x18 + lVar11);
      if (plVar5 == (longlong *)0x0) {
        local_e7 = *(undefined1 *)(lVar9 + 0x20);
        local_e8 = *(undefined1 *)(param_1 + 0x91);
        local_d8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_e7 = *(undefined1 *)(lVar9 + 0x20);
        local_e8 = *(undefined1 *)(param_1 + 0x91);
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar7 = plVar5 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        local_d8 = plVar5;
        if ((int)*plVar7 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar14 = (int *)((longlong)plVar5 + 0xc);
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (*piVar14 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      if ((longlong)*(int *)(lVar9 + 0x60) != 0) {
        local_1a0 = *(int **)(lVar9 + 0x58);
        piVar14 = local_1a0 + (longlong)*(int *)(lVar9 + 0x60) * 8;
        do {
          if (*local_1a0 == *(int *)((longlong)plVar12 + 100)) {
            iVar3 = (int)plVar12[0xb];
            iVar2 = *(int *)((longlong)plVar12 + 0x5c);
            iVar6 = local_1a0[2];
            if (iVar2 < local_1a0[2]) {
              iVar6 = iVar2;
            }
            iVar10 = local_1a0[1];
            if (local_1a0[1] <= iVar3) {
              iVar10 = iVar3;
            }
            if (iVar10 < iVar6) {
              local_f0 = CONCAT44(iVar6,iVar10);
            }
            else {
              local_f0 = 0;
              if (iVar3 != 0 || iVar2 != 0) goto LAB_140de2feb;
            }
            local_108 = 0;
            local_f8 = (longlong *)0x0;
            uStack_100 = *(undefined8 *)(local_1a0 + 4);
            plVar5 = *(longlong **)(local_1a0 + 6);
            plVar7 = local_f8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              local_1c8 = 0;
              plVar7 = plVar5;
              if (plVar5 == (longlong *)0x0) {
                LOCK();
                _DAT_00000008 = _DAT_00000008 + -1;
                UNLOCK();
                plVar7 = local_f8;
                if (_DAT_00000008 == 0) {
                  (*(code *)*_DAT_00000000)(0);
                  LOCK();
                  _DAT_0000000c = _DAT_0000000c + -1;
                  UNLOCK();
                  plVar7 = local_f8;
                  if (_DAT_0000000c == 0) {
                    (*(code *)_DAT_00000000[2])(0);
                    plVar7 = local_f8;
                  }
                }
              }
            }
            local_f8 = plVar7;
            local_128 = local_1a0;
            local_118 = &local_108;
            local_110 = &local_f0;
            local_120 = plVar12;
            if (0 < (int)plVar12[1]) {
              local_1c8 = 0;
              local_190 = 0;
              local_1a8 = (longlong *)0x0;
              fVar16 = (float)local_108;
              do {
                lVar9 = *plVar12;
                (**(code **)(**(longlong **)(lVar9 + local_1c8) + 0x10))
                          (*(longlong **)(lVar9 + local_1c8),&local_130);
                (**(code **)(**(longlong **)(lVar9 + local_1c8) + 8))
                          (*(longlong **)(lVar9 + local_1c8),&local_140);
                local_1b0 = lVar9;
                (**(code **)(**(longlong **)(lVar9 + local_1c8) + 0x18))
                          (*(longlong **)(lVar9 + local_1c8),local_160);
                lVar9 = local_1b0;
                dVar15 = (double)fVar16 + local_160[0];
                local_1b8 = local_f0._4_4_;
                if (local_12c < local_f0._4_4_) {
                  local_1b8 = local_12c;
                }
                local_1bc = local_130;
                if (local_130 < (int)local_f0) {
                  local_1bc = (int)local_f0;
                }
                if (local_1b8 <= local_1bc) {
                  local_1bc = 0;
                  local_1b8 = 0;
                }
                if (local_1bc < local_1b8) {
                  uVar8 = (ulonglong)(local_12c == local_1b8 && local_130 == local_1bc);
                  if (((ulonglong)local_1a8 & 1) == 0) {
                    local_1d8 = *(undefined4 *)(param_1 + 0x94);
                    local_1d0 = &local_e8;
                    local_108._0_4_ = fVar16;
                    (**(code **)(*local_140 + 0x28))(local_140,local_160,local_1bc,local_1b8);
                    local_108 = CONCAT44((float)((double)local_108._4_4_ + local_160[0]),
                                         (float)local_108);
                    (**(code **)(**(longlong **)(local_1b0 + local_1c8) + 0x20))
                              (*(longlong **)(local_1b0 + local_1c8),local_160);
                    plVar5 = local_150;
                    local_1b0 = CONCAT71(local_1b0._1_7_,local_148);
                    if (local_150 != (longlong *)0x0) {
                      LOCK();
                      plVar7 = local_150 + 1;
                      *(int *)plVar7 = (int)*plVar7 + -1;
                      UNLOCK();
                      if ((int)*plVar7 == 0) {
                        local_1a8 = local_150;
                        (**(code **)*local_150)(local_150);
                        LOCK();
                        piVar1 = (int *)((longlong)local_1a8 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                        }
                      }
                    }
                    if ((char)local_1b0 == '\0') {
                      local_1d8 = *(undefined4 *)(param_1 + 0x94);
                      lVar9 = *local_140;
                      iVar3 = local_130;
                      iVar2 = local_1bc;
                    }
                    else {
                      local_1d8 = *(undefined4 *)(param_1 + 0x94);
                      lVar9 = *local_140;
                      iVar3 = local_1b8;
                      iVar2 = local_12c;
                    }
                    local_1d0 = &local_e8;
                    uVar8 = (**(code **)(lVar9 + 0x28))(local_140,local_160,iVar3,iVar2);
                    local_108 = CONCAT44(local_108._4_4_,
                                         (float)((double)(float)local_108 + local_160[0]));
LAB_140de2cbe:
                    local_1a8 = (longlong *)CONCAT71((int7)(uVar8 >> 8),1);
                  }
                  else {
LAB_140de2ae2:
                    fVar17 = (float)local_108 + local_108._4_4_;
                    if ((char)uVar8 == '\0') {
                      (**(code **)(**(longlong **)(local_1b0 + local_1c8) + 0x20))
                                (*(longlong **)(local_1b0 + local_1c8),local_160);
                      local_198 = (longlong *)CONCAT71(local_198._1_7_,local_148);
                      (**(code **)(**(longlong **)(lVar9 + local_1c8) + 0x20))
                                (*(longlong **)(lVar9 + local_1c8),&local_180);
                      plVar5 = local_170;
                      local_1b1 = local_17f;
                      if (local_170 != (longlong *)0x0) {
                        LOCK();
                        plVar7 = local_170 + 1;
                        *(int *)plVar7 = (int)*plVar7 + -1;
                        UNLOCK();
                        if ((int)*plVar7 == 0) {
                          local_188 = local_170;
                          (**(code **)*local_170)(local_170);
                          LOCK();
                          piVar1 = (int *)((longlong)local_188 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar5 + 0x10))(plVar5);
                          }
                        }
                      }
                      plVar5 = local_150;
                      if (local_150 != (longlong *)0x0) {
                        LOCK();
                        plVar7 = local_150 + 1;
                        *(int *)plVar7 = (int)*plVar7 + -1;
                        UNLOCK();
                        if ((int)*plVar7 == 0) {
                          (**(code **)*local_150)(local_150);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar5 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar5 + 0x10))(plVar5);
                          }
                        }
                      }
                      fVar18 = 0.0;
                      fVar19 = 0.0;
                      if ((char)local_198 != local_1b1) {
                        (**(code **)(**(longlong **)(local_1b0 + local_1c8) + 0x20))
                                  (*(longlong **)(local_1b0 + local_1c8),local_160);
                        plVar5 = local_150;
                        local_1b0 = CONCAT71(local_1b0._1_7_,local_148);
                        if (local_150 != (longlong *)0x0) {
                          LOCK();
                          plVar7 = local_150 + 1;
                          *(int *)plVar7 = (int)*plVar7 + -1;
                          UNLOCK();
                          if ((int)*plVar7 == 0) {
                            local_198 = local_150;
                            (**(code **)*local_150)(local_150);
                            LOCK();
                            piVar1 = (int *)((longlong)local_198 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar5 + 0x10))(plVar5);
                            }
                          }
                        }
                        if ((char)local_1b0 == '\0') {
                          local_1d8 = *(undefined4 *)(param_1 + 0x94);
                          lVar9 = *local_140;
                          iVar3 = local_130;
                          iVar2 = local_1bc;
                        }
                        else {
                          local_1d8 = *(undefined4 *)(param_1 + 0x94);
                          lVar9 = *local_140;
                          iVar3 = local_1b8;
                          iVar2 = local_12c;
                        }
                        local_1d0 = &local_e8;
                        (**(code **)(lVar9 + 0x28))(local_140,local_160,iVar3,iVar2);
                        fVar19 = (float)(local_160[0] + 0.0);
                      }
                      if (local_1bc < local_1b8) {
                        local_1d8 = *(undefined4 *)(param_1 + 0x94);
                        local_1d0 = &local_e8;
                        (**(code **)(*local_140 + 0x28))(local_140,local_160,local_1bc,local_1b8);
                        fVar18 = (float)(local_160[0] + 0.0);
                      }
                      if (((fVar16 <= fVar17) && (fVar19 == 0.0)) && (!NAN(fVar19))) {
                        local_108 = CONCAT44(fVar18 + local_108._4_4_,(float)local_108);
                        goto LAB_140de2ef2;
                      }
                      FUN_1428ff040(&local_128);
                      local_108 = CONCAT44(fVar18 + 0.0,fVar16 + fVar19);
                    }
                    else {
                      if (fVar17 < fVar16) {
                        FUN_1428ff040(&local_128);
                        local_108 = (ulonglong)(uint)fVar16;
                      }
                      (**(code **)(**(longlong **)(local_1b0 + local_1c8) + 0x18))
                                (*(longlong **)(local_1b0 + local_1c8),local_160);
                      local_108 = CONCAT44((float)((double)local_108._4_4_ + local_160[0]),
                                           (float)local_108);
                    }
                  }
                }
                else {
                  if (local_1b8 == local_f0._4_4_ && local_1bc == (int)local_f0) {
                    uVar8 = (ulonglong)
                            CONCAT31((int3)((uint)local_12c >> 8),
                                     local_f0._4_4_ == local_12c && (int)local_f0 == local_130);
                    if (((ulonglong)local_1a8 & 1) == 0) {
                      local_108 = CONCAT44(local_108._4_4_,fVar16);
                      goto LAB_140de2cbe;
                    }
                    goto LAB_140de2ae2;
                  }
LAB_140de2ef2:
                  FUN_1428ff040(&local_128);
                  local_108 = (ulonglong)(uint)(float)dVar15;
                }
                plVar5 = local_138;
                if (local_138 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = local_138 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*local_138)(local_138);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar5 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                }
                local_190 = local_190 + 1;
                local_1c8 = local_1c8 + 0x10;
                fVar16 = (float)dVar15;
              } while (local_190 < (int)plVar12[1]);
            }
            FUN_1428ff040(&local_128);
            plVar5 = local_f8;
            if (local_f8 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_f8 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*local_f8)(local_f8);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
LAB_140de2feb:
          local_1a0 = local_1a0 + 8;
        } while (local_1a0 != piVar14);
      }
      plVar5 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_d8 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_d8)(local_d8);
          LOCK();
          piVar14 = (int *)((longlong)plVar5 + 0xc);
          *piVar14 = *piVar14 + -1;
          UNLOCK();
          if (*piVar14 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar12 = plVar12 + 0xd;
    } while (plVar12 != plVar13);
  }
  if ((local_d0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140de30c6 FUN_140de30c6 body=786 status=ok
// SIG undefined FUN_140de30c6(void)

void FUN_140de30c6(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(longlong *)(param_1 + 0x170) != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar4 = FUN_14487fd02(param_1);
  if ((((iVar4 != 3) && ((*(byte *)(param_1 + 99) & 8) != 0)) &&
      ((*(uint *)(param_1 + 8) & 0x10) == 0)) &&
     ((lVar5 = *(longlong *)(param_1 + 0x20), lVar5 != 0 && (-1 < (short)*(undefined4 *)(lVar5 + 8))
      ))) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_50 = &local_30;
        local_30 = (code *)&LAB_14355090c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147b8e16d;
        local_60 = (code *)&LAB_140810a38;
        local_68 = L"Engine";
        local_70 = 0x800000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468c5283;
        local_60 = FUN_142809da0;
        local_68 = L"Engine";
        local_70 = 0x400000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar7 = *(longlong *)(param_1 + 0x20);
      if (lVar7 != 0) {
        iVar4 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar4) ||
             (lVar6 = lVar7,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar4 * 8)
             != lVar5 + 0x30)) {
            lVar6 = 0;
          }
        } while ((lVar6 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
        if ((lVar6 != 0) &&
           ((*(longlong *)(lVar6 + 0xc0) != 0 && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)))
           ) {
          lVar5 = 0;
          do {
            lVar7 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar5);
            if (*(longlong *)(lVar7 + 0x360) == *(longlong *)(lVar6 + 0xc0)) {
              if ((lVar7 != 0) && (iVar4 = *(int *)(lVar7 + 0x2b8), (longlong)iVar4 != 0)) {
                lVar5 = *(longlong *)(lVar7 + 0x2b0);
                lVar7 = 0;
                do {
                  plVar2 = *(longlong **)(lVar5 + lVar7);
                  if ((plVar2 != (longlong *)0x0) &&
                     (cVar3 = (**(code **)(*plVar2 + 0x440))(plVar2,param_1), cVar3 != '\0')) {
                    FUN_140de33da(*(undefined8 *)(lVar5 + lVar7),param_1);
                  }
                  lVar7 = lVar7 + 0x10;
                } while ((longlong)iVar4 * 0x10 != lVar7);
              }
              break;
            }
            lVar5 = lVar5 + 8;
          } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar5);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140de33da FUN_140de33da body=74 status=ok
// SIG undefined FUN_140de33da(void)

void FUN_140de33da(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x100);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf8) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_140de3424(lVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x100);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 140de3424 FUN_140de3424 body=296 status=ok
// SIG undefined FUN_140de3424(void)

void FUN_140de3424(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_2 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar3 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
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
  }
  if (*(int *)(param_1 + 0x1460) != *(int *)(param_1 + 0x148c)) {
    lVar7 = param_1 + 0x1490;
    if (*(longlong *)(param_1 + 0x1498) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1498);
    }
    iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x14a0) - 1U & (uVar3 ^ uVar5)) * 4);
    if (iVar4 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x1458) + (longlong)iVar4 * 0x18);
        if (*plVar2 == CONCAT44(uVar3,uVar5)) {
          if (plVar2 == (longlong *)0x0) {
            return;
          }
          if (plVar2[1] == 0) {
            return;
          }
          pbVar1 = (byte *)(plVar2[1] + 0x90);
          *pbVar1 = *pbVar1 | 2;
          return;
        }
        iVar4 = (int)plVar2[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 140de354c FUN_140de354c body=518 status=ok
// SIG undefined FUN_140de354c(void)

void FUN_140de354c(longlong param_1,void **param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  ushort uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  void *local_58;
  ulonglong uStack_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = *param_2;
  }
  FUN_140f36250(puVar7,0);
  iVar10 = *(int *)(param_1 + 0x308);
  if ((longlong)iVar10 == 0) {
LAB_140de3662:
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    if (&local_58 != param_2) {
      uVar4 = *(uint *)(param_2 + 1);
      pvVar5 = *param_2;
      uStack_50 = (ulonglong)uVar4;
      if ((longlong)(int)uVar4 != 0) {
        FUN_1446dd670(&local_58,uVar4,0);
        memcpy(local_58,pvVar5,(longlong)(int)uVar4 * 2);
        iVar10 = *(int *)(param_1 + 0x308);
      }
    }
    *(uint *)(param_1 + 0x308) = iVar10 + 1U;
    local_48 = param_3;
    if (*(uint *)(param_1 + 0x30c) < iVar10 + 1U) {
      FUN_1457b0f98((longlong *)(param_1 + 0x300),iVar10);
    }
    pvVar5 = local_58;
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x300) + (longlong)iVar10 * 0x18);
    *puVar2 = 0;
    lVar8 = (longlong)(int)uStack_50;
    *(int *)(puVar2 + 1) = (int)uStack_50;
    if (lVar8 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar2,uStack_50 & 0xffffffff,0);
      memcpy((void *)*puVar2,pvVar5,lVar8 * 2);
    }
    *(undefined1 *)(puVar2 + 2) = local_48;
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
LAB_140de3627:
    FUN_140de3754(param_1);
    if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
      FUN_14072bb4a(param_1);
    }
    if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  plVar6 = *(longlong **)(param_1 + 0x300);
  plVar1 = plVar6 + (longlong)iVar10 * 3;
  iVar3 = *(int *)(param_2 + 1);
LAB_140de35b5:
  if ((int)plVar6[1] == iVar3) {
    if (1 < iVar3) {
      lVar8 = 0;
      do {
        uVar11 = *(ushort *)(*plVar6 + lVar8);
        uVar12 = (ulonglong)uVar11;
        uVar9 = *(ushort *)((longlong)*param_2 + lVar8);
        if (uVar11 == uVar9) {
          if (uVar11 == 0) break;
        }
        else {
          if (0x7f < (uVar9 | uVar11)) goto LAB_140de361c;
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar13 = (ulonglong)uVar9;
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar12] != (&DAT_149e05da0)[uVar13]) goto LAB_140de361c;
        }
        lVar8 = lVar8 + 2;
      } while( true );
    }
    goto LAB_140de3624;
  }
  if ((int)plVar6[1] + iVar3 == 1) goto LAB_140de3624;
  goto LAB_140de35c7;
LAB_140de361c:
  if (uVar11 == uVar9) {
LAB_140de3624:
    *(undefined1 *)(plVar6 + 2) = param_3;
    goto LAB_140de3627;
  }
LAB_140de35c7:
  plVar6 = plVar6 + 3;
  if (plVar6 == plVar1) goto LAB_140de3662;
  goto LAB_140de35b5;
}



// FUNCTION 140de3754 FUN_140de3754 body=549 status=ok
// SIG undefined FUN_140de3754(void)

void FUN_140de3754(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  undefined2 *puVar14;
  void *pvVar15;
  longlong lVar16;
  void *_Dst;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar11 = FUN_144938c96();
  if (lVar11 != 0) {
    lVar12 = FUN_140de3fe6();
    if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8
         ) == lVar12 + 0x30)) {
      uVar2 = *(undefined4 *)(lVar11 + 0x318);
      uVar3 = *(undefined4 *)(lVar11 + 0x31c);
      uVar4 = *(undefined4 *)(lVar11 + 800);
      uVar5 = *(undefined4 *)(lVar11 + 0x324);
      uVar6 = *(undefined4 *)(lVar11 + 0x329);
      uVar7 = *(undefined4 *)(lVar11 + 0x32d);
      uVar8 = *(undefined4 *)(lVar11 + 0x331);
      *(undefined4 *)(param_1 + 0x325) = *(undefined4 *)(lVar11 + 0x325);
      *(undefined4 *)(param_1 + 0x329) = uVar6;
      *(undefined4 *)(param_1 + 0x32d) = uVar7;
      *(undefined4 *)(param_1 + 0x331) = uVar8;
      *(undefined4 *)(param_1 + 0x318) = uVar2;
      *(undefined4 *)(param_1 + 0x31c) = uVar3;
      *(undefined4 *)(param_1 + 800) = uVar4;
      *(undefined4 *)(param_1 + 0x324) = uVar5;
      if (lVar11 != param_1) {
        uVar9 = *(int *)(lVar11 + 0x350) + 0x1fU & 0xffffffe0;
        *(undefined4 *)(param_1 + 0x350) = 0;
        if ((*(int *)(param_1 + 0x354) < (int)uVar9) || (0x80 < *(int *)(param_1 + 0x354))) {
          uVar13 = 0x80;
          if (0x80 < (int)uVar9) {
            uVar13 = uVar9;
          }
          *(uint *)(param_1 + 0x354) = uVar13;
          FUN_1446efbd8((void *)(param_1 + 0x338),0);
        }
        iVar1 = *(int *)(lVar11 + 0x350);
        *(int *)(param_1 + 0x350) = iVar1;
        if (iVar1 != 0) {
          pvVar15 = (void *)(lVar11 + 0x338);
          if (*(void **)(lVar11 + 0x348) != (void *)0x0) {
            pvVar15 = *(void **)(lVar11 + 0x348);
          }
          _Dst = (void *)(param_1 + 0x338);
          if (*(void **)(param_1 + 0x348) != (void *)0x0) {
            _Dst = *(void **)(param_1 + 0x348);
          }
          memcpy(_Dst,pvVar15,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
        }
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x308);
  if ((longlong)iVar1 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x300);
    lVar12 = 0;
    do {
      local_58 = (undefined2 *)0x0;
      local_50 = *(int *)(lVar11 + 8 + lVar12);
      lVar16 = (longlong)local_50;
      pvVar15 = *(void **)(lVar11 + lVar12);
      if (lVar16 == 0) {
        local_4c = 0;
        local_48 = *(undefined1 *)(lVar11 + 0x10 + lVar12);
LAB_140de396e:
        puVar14 = &DAT_149dfb77a;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,pvVar15,lVar16 * 2);
        local_48 = *(undefined1 *)(lVar11 + 0x10 + lVar12);
        puVar14 = local_58;
        if (local_50 == 0) goto LAB_140de396e;
      }
      iVar10 = FUN_140f36250(puVar14,0);
      if (iVar10 != -1) {
        FUN_140de397a(param_1 + 0x318);
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar12);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de397a FUN_140de397a body=1643 status=ok
// SIG undefined FUN_140de397a(void)

void FUN_140de397a(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  
  switch(param_2) {
  case 0:
    param_3 = param_3 & 0xff;
    uVar4 = *param_1 & 0xfffffffe;
    goto LAB_140de3ddf;
  case 1:
    uVar4 = (*param_1 & 0xfffffffd) + (param_3 & 0xff) * 2;
    goto LAB_140de3ebf;
  case 2:
    uVar4 = (*param_1 & 0xfffffffb) + (param_3 & 0xff) * 4;
    goto LAB_140de3ebf;
  case 3:
  case 9:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x12:
  case 0x13:
  case 0x16:
  case 0x19:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x24:
  case 0x25:
  case 0x29:
  case 0x2a:
  case 0x2c:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x36:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x41:
  case 0x42:
  case 0x44:
  case 0x4a:
  case 0x4b:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x61:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
  case 0x80:
  case 0x81:
  case 0x82:
  case 0x83:
  case 0x86:
  case 0x88:
  case 0x8a:
  case 0x8c:
  case 0x8d:
  case 0x8e:
  case 0x90:
  case 0x93:
  case 0x94:
  case 0x97:
  case 0x9b:
  case 0x9c:
  case 0x9e:
  case 0x9f:
  case 0xa0:
  case 0xa1:
  case 0xa3:
  case 0xa4:
  case 0xa5:
  case 0xa6:
  case 0xa7:
  case 0xac:
  case 0xad:
  case 0xae:
  case 0xaf:
  case 0xb0:
  case 0xb1:
  case 0xb2:
  case 0xb3:
  case 0xb4:
  case 0xb5:
  case 0xb6:
  case 0xb7:
  case 0xb8:
  case 0xba:
  case 0xbb:
  case 0xbd:
  case 0xbe:
  case 0xbf:
  case 0xc0:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd8:
  case 0xd9:
  case 0xde:
  case 0xdf:
  case 0xe0:
    break;
  case 4:
    uVar1 = (param_3 & 0xff) << 4;
    uVar4 = *param_1 & 0xffffffef;
    goto LAB_140de3ebd;
  case 5:
    uVar1 = (param_3 & 0xff) << 5;
    uVar4 = *param_1 & 0xffffffdf;
    goto LAB_140de3ebd;
  case 6:
    uVar1 = (param_3 & 0xff) << 6;
    uVar4 = *param_1 & 0xffffffbf;
LAB_140de3ebd:
    uVar4 = uVar4 | uVar1;
LAB_140de3ebf:
    *param_1 = uVar4;
    break;
  case 7:
    param_3 = (param_3 & 0xff) << 7;
    uVar4 = 0xffffff7f;
    goto LAB_140de3ddd;
  case 8:
    param_3 = (param_3 & 0xff) << 8;
    uVar4 = 0xfffffeff;
    goto LAB_140de3ddd;
  case 10:
    param_3 = (param_3 & 0xff) << 10;
    uVar4 = 0xfffffbff;
    goto LAB_140de3ddd;
  case 0xb:
    param_3 = (param_3 & 0xff) << 0xb;
    uVar4 = 0xfffff7ff;
    goto LAB_140de3ddd;
  case 0xc:
    param_3 = (param_3 & 0xff) << 0xc;
    uVar4 = 0xffffefff;
    goto LAB_140de3ddd;
  case 0x11:
    param_3 = (param_3 & 0xff) << 0x11;
    uVar4 = 0xfffdffff;
    goto LAB_140de3ddd;
  case 0x14:
    param_3 = (param_3 & 0xff) << 0x14;
    uVar4 = 0xffefffff;
    goto LAB_140de3ddd;
  case 0x15:
    param_3 = (param_3 & 0xff) << 0x15;
    uVar4 = 0xffdfffff;
    goto LAB_140de3ddd;
  case 0x17:
    param_3 = (param_3 & 0xff) << 0x17;
    uVar4 = 0xff7fffff;
    goto LAB_140de3ddd;
  case 0x18:
    param_3 = param_3 << 0x18;
    uVar4 = 0xfeffffff;
    goto LAB_140de3ddd;
  case 0x1a:
    param_3 = param_3 << 0x1a;
    uVar4 = 0xfbffffff;
    goto LAB_140de3ddd;
  case 0x1f:
    param_3 = param_3 << 0x1f;
    uVar4 = 0x7fffffff;
LAB_140de3ddd:
    uVar4 = uVar4 & *param_1;
LAB_140de3ddf:
    *param_1 = uVar4 | param_3;
    break;
  case 0x20:
    param_3 = param_3 & 0xff;
    uVar4 = param_1[1] & 0xfffffffe;
    goto LAB_140de3f40;
  case 0x21:
    uVar4 = (param_1[1] & 0xfffffffd) + (param_3 & 0xff) * 2;
    goto LAB_140de3d99;
  case 0x22:
    uVar4 = (param_1[1] & 0xfffffffb) + (param_3 & 0xff) * 4;
    goto LAB_140de3d99;
  case 0x23:
    uVar4 = (param_1[1] & 0xfffffff7) + (param_3 & 0xff) * 8;
    goto LAB_140de3d99;
  case 0x26:
    uVar4 = param_1[1] & 0xffffffbf | (param_3 & 0xff) << 6;
LAB_140de3d99:
    param_1[1] = uVar4;
    break;
  case 0x27:
    param_3 = (param_3 & 0xff) << 7;
    uVar4 = 0xffffff7f;
    goto LAB_140de3f3d;
  case 0x28:
    param_3 = (param_3 & 0xff) << 8;
    uVar4 = 0xfffffeff;
    goto LAB_140de3f3d;
  case 0x2b:
    param_3 = (param_3 & 0xff) << 0xb;
    uVar4 = 0xfffff7ff;
    goto LAB_140de3f3d;
  case 0x2d:
    param_3 = (param_3 & 0xff) << 0xd;
    uVar4 = 0xffffdfff;
    goto LAB_140de3f3d;
  case 0x35:
    param_3 = (param_3 & 0xff) << 0x15;
    uVar4 = 0xffdfffff;
    goto LAB_140de3f3d;
  case 0x37:
    param_3 = (param_3 & 0xff) << 0x17;
    uVar4 = 0xff7fffff;
    goto LAB_140de3f3d;
  case 0x38:
    param_3 = param_3 << 0x18;
    uVar4 = 0xfeffffff;
    goto LAB_140de3f3d;
  case 0x39:
    param_3 = param_3 << 0x19;
    uVar4 = 0xfdffffff;
    goto LAB_140de3f3d;
  case 0x3f:
    param_3 = param_3 << 0x1f;
    uVar4 = 0x7fffffff;
LAB_140de3f3d:
    uVar4 = uVar4 & param_1[1];
LAB_140de3f40:
    param_1[1] = uVar4 | param_3;
    break;
  case 0x40:
    param_3 = param_3 & 0xff;
    uVar4 = param_1[2] & 0xfffffffe;
    goto LAB_140de3e67;
  case 0x43:
    uVar4 = (param_1[2] & 0xfffffff7) + (param_3 & 0xff) * 8;
    goto LAB_140de3c25;
  case 0x45:
    uVar1 = (param_3 & 0xff) << 5;
    uVar4 = param_1[2] & 0xffffffdf;
    goto LAB_140de3c23;
  case 0x46:
    uVar1 = (param_3 & 0xff) << 6;
    uVar4 = param_1[2] & 0xffffffbf;
LAB_140de3c23:
    uVar4 = uVar4 | uVar1;
LAB_140de3c25:
    param_1[2] = uVar4;
    break;
  case 0x47:
    param_3 = (param_3 & 0xff) << 7;
    uVar4 = 0xffffff7f;
    goto LAB_140de3e64;
  case 0x48:
    param_3 = (param_3 & 0xff) << 8;
    uVar4 = 0xfffffeff;
    goto LAB_140de3e64;
  case 0x49:
    param_3 = (param_3 & 0xff) << 9;
    uVar4 = 0xfffffdff;
    goto LAB_140de3e64;
  case 0x4c:
    param_3 = (param_3 & 0xff) << 0xc;
    uVar4 = 0xffffefff;
    goto LAB_140de3e64;
  case 0x4d:
    param_3 = (param_3 & 0xff) << 0xd;
    uVar4 = 0xffffdfff;
    goto LAB_140de3e64;
  case 0x52:
    param_3 = (param_3 & 0xff) << 0x12;
    uVar4 = 0xfffbffff;
    goto LAB_140de3e64;
  case 0x53:
    param_3 = (param_3 & 0xff) << 0x13;
    uVar4 = 0xfff7ffff;
    goto LAB_140de3e64;
  case 0x54:
    param_3 = (param_3 & 0xff) << 0x14;
    uVar4 = 0xffefffff;
    goto LAB_140de3e64;
  case 0x55:
    param_3 = (param_3 & 0xff) << 0x15;
    uVar4 = 0xffdfffff;
    goto LAB_140de3e64;
  case 0x59:
    param_3 = param_3 << 0x19;
    uVar4 = 0xfdffffff;
    goto LAB_140de3e64;
  case 0x5a:
    param_3 = param_3 << 0x1a;
    uVar4 = 0xfbffffff;
    goto LAB_140de3e64;
  case 0x5b:
    param_3 = param_3 << 0x1b;
    uVar4 = 0xf7ffffff;
    goto LAB_140de3e64;
  case 0x5e:
    param_3 = param_3 << 0x1e;
    uVar4 = 0xbfffffff;
LAB_140de3e64:
    uVar4 = uVar4 & param_1[2];
LAB_140de3e67:
    param_1[2] = uVar4 | param_3;
    break;
  case 0x60:
    param_3 = param_3 & 0xff;
    uVar4 = param_1[3] & 0xfffffffe;
    goto LAB_140de3ea8;
  case 0x62:
    param_1[3] = (param_1[3] & 0xfffffffb) + (param_3 & 0xff) * 4;
    break;
  case 0x6f:
    param_3 = (param_3 & 0xff) << 0xf;
    uVar4 = 0xffff7fff;
    goto LAB_140de3ea5;
  case 0x70:
    param_3 = (param_3 & 0xff) << 0x10;
    uVar4 = 0xfffeffff;
LAB_140de3ea5:
    uVar4 = uVar4 & param_1[3];
LAB_140de3ea8:
    param_1[3] = uVar4 | param_3;
    break;
  case 0x84:
    uVar1 = (param_3 & 0xff) << 4;
    uVar4 = param_1[4] & 0xffffffef;
    goto LAB_140de3f70;
  case 0x85:
    uVar1 = (param_3 & 0xff) << 5;
    uVar4 = param_1[4] & 0xffffffdf;
LAB_140de3f70:
    param_1[4] = uVar4 | uVar1;
    break;
  case 0x87:
    param_3 = (param_3 & 0xff) << 7;
    uVar4 = 0xffffff7f;
    goto LAB_140de3e8d;
  case 0x89:
    param_3 = (param_3 & 0xff) << 9;
    uVar4 = 0xfffffdff;
    goto LAB_140de3e8d;
  case 0x8b:
    param_3 = (param_3 & 0xff) << 0xb;
    uVar4 = 0xfffff7ff;
    goto LAB_140de3e8d;
  case 0x8f:
    param_3 = (param_3 & 0xff) << 0xf;
    uVar4 = 0xffff7fff;
    goto LAB_140de3e8d;
  case 0x91:
    param_3 = (param_3 & 0xff) << 0x11;
    uVar4 = 0xfffdffff;
    goto LAB_140de3e8d;
  case 0x92:
    param_3 = (param_3 & 0xff) << 0x12;
    uVar4 = 0xfffbffff;
    goto LAB_140de3e8d;
  case 0x95:
    param_3 = (param_3 & 0xff) << 0x15;
    uVar4 = 0xffdfffff;
    goto LAB_140de3e8d;
  case 0x96:
    param_3 = (param_3 & 0xff) << 0x16;
    uVar4 = 0xffbfffff;
    goto LAB_140de3e8d;
  case 0x98:
    param_3 = param_3 << 0x18;
    uVar4 = 0xfeffffff;
    goto LAB_140de3e8d;
  case 0x99:
    param_3 = param_3 << 0x19;
    uVar4 = 0xfdffffff;
    goto LAB_140de3e8d;
  case 0x9a:
    param_3 = param_3 << 0x1a;
    uVar4 = 0xfbffffff;
    goto LAB_140de3e8d;
  case 0x9d:
    param_3 = param_3 << 0x1d;
    uVar4 = 0xdfffffff;
LAB_140de3e8d:
    param_1[4] = uVar4 & param_1[4] | param_3;
    break;
  case 0xa2:
    param_1[5] = (param_1[5] & 0xfffffffb) + (param_3 & 0xff) * 4;
    break;
  case 0xa8:
    param_3 = (param_3 & 0xff) << 8;
    uVar4 = 0xfffffeff;
    goto LAB_140de3f18;
  case 0xa9:
    param_3 = (param_3 & 0xff) << 9;
    uVar4 = 0xfffffdff;
    goto LAB_140de3f18;
  case 0xaa:
    param_3 = (param_3 & 0xff) << 10;
    uVar4 = 0xfffffbff;
    goto LAB_140de3f18;
  case 0xab:
    param_3 = (param_3 & 0xff) << 0xb;
    uVar4 = 0xfffff7ff;
    goto LAB_140de3f18;
  case 0xb9:
    param_3 = param_3 << 0x19;
    uVar4 = 0xfdffffff;
    goto LAB_140de3f18;
  case 0xbc:
    param_3 = param_3 << 0x1c;
    uVar4 = 0xefffffff;
LAB_140de3f18:
    param_1[5] = uVar4 & param_1[5] | param_3;
    break;
  case 0xc1:
    uVar4 = (param_1[6] & 0xfffffffd) + (param_3 & 0xff) * 2;
    goto LAB_140de3b70;
  case 0xc5:
    uVar1 = (param_3 & 0xff) << 5;
    uVar4 = param_1[6] & 0xffffffdf;
    goto LAB_140de3b6e;
  case 0xc6:
    uVar1 = (param_3 & 0xff) << 6;
    uVar4 = param_1[6] & 0xffffffbf;
LAB_140de3b6e:
    uVar4 = uVar4 | uVar1;
LAB_140de3b70:
    param_1[6] = uVar4;
    break;
  case 199:
    param_3 = (param_3 & 0xff) << 7;
    uVar4 = 0xffffff7f;
    goto LAB_140de3f85;
  case 0xd0:
    param_3 = (param_3 & 0xff) << 0x10;
    uVar4 = 0xfffeffff;
    goto LAB_140de3f85;
  case 0xd1:
    param_3 = (param_3 & 0xff) << 0x11;
    uVar4 = 0xfffdffff;
    goto LAB_140de3f85;
  case 0xd2:
    param_3 = (param_3 & 0xff) << 0x12;
    uVar4 = 0xfffbffff;
    goto LAB_140de3f85;
  case 0xd3:
    param_3 = (param_3 & 0xff) << 0x13;
    uVar4 = 0xfff7ffff;
    goto LAB_140de3f85;
  case 0xd4:
    param_3 = (param_3 & 0xff) << 0x14;
    uVar4 = 0xffefffff;
    goto LAB_140de3f85;
  case 0xd5:
    param_3 = (param_3 & 0xff) << 0x15;
    uVar4 = 0xffdfffff;
    goto LAB_140de3f85;
  case 0xd6:
    param_3 = (param_3 & 0xff) << 0x16;
    uVar4 = 0xffbfffff;
    goto LAB_140de3f85;
  case 0xd7:
    param_3 = (param_3 & 0xff) << 0x17;
    uVar4 = 0xff7fffff;
    goto LAB_140de3f85;
  case 0xda:
    param_3 = param_3 << 0x1a;
    uVar4 = 0xfbffffff;
    goto LAB_140de3f85;
  case 0xdb:
    param_3 = param_3 << 0x1b;
    uVar4 = 0xf7ffffff;
    goto LAB_140de3f85;
  case 0xdc:
    param_3 = param_3 << 0x1c;
    uVar4 = 0xefffffff;
    goto LAB_140de3f85;
  case 0xdd:
    param_3 = param_3 << 0x1d;
    uVar4 = 0xdfffffff;
LAB_140de3f85:
    param_1[6] = uVar4 & param_1[6] | param_3;
    break;
  case 0xe1:
    param_1[7] = (param_1[7] & 0xfffffffd) + (param_3 & 0xff) * 2;
    break;
  default:
    FUN_147d1196a(param_1);
    uVar4 = param_2 - 0xe2;
    if (uVar4 < param_1[0xe]) {
      uVar1 = 1 << ((byte)uVar4 & 0x1f);
      puVar3 = param_1 + 8;
      if (*(uint **)(param_1 + 0xc) != (uint *)0x0) {
        puVar3 = *(uint **)(param_1 + 0xc);
      }
      uVar2 = param_2 - 0xc3;
      if (-1 < (int)uVar4) {
        uVar2 = uVar4;
      }
      if ((char)param_3 == '\0') {
        puVar3[(int)uVar2 >> 5] = puVar3[(int)uVar2 >> 5] & ~uVar1;
      }
      else {
        puVar3[(int)uVar2 >> 5] = puVar3[(int)uVar2 >> 5] | uVar1;
      }
    }
  }
  return;
}



// FUNCTION 140de3fe6 FUN_140de3fe6 body=228 status=ok
// SIG undefined FUN_140de3fe6(void)

longlong FUN_140de3fe6(void)

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
  if (DAT_14cad2260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14580e5da;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147a02735;
    local_40 = &LAB_1463bb2bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"SceneCaptureComponent",&DAT_14cad2260,FUN_1463bb29a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad2260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de40cc FUN_140de40cc body=407 status=ok
// SIG undefined FUN_140de40cc(void)

void FUN_140de40cc(longlong param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x80) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x4c);
    if ((((-1 < (longlong)iVar1) && (iVar1 < (int)(*(longlong **)(param_1 + 0x40))[1])) &&
        (lVar5 = (longlong)iVar1 * 0xb0 + **(longlong **)(param_1 + 0x40), lVar5 != 0)) &&
       ((*(byte *)(lVar5 + 0xa8) & 1) == 0)) goto LAB_140de40e1;
    lVar5 = param_1 + 0x68;
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
    }
    if ((longlong)*(int *)(param_1 + 0x78) != 0) {
      lVar7 = 0;
      do {
        iVar1 = *(int *)(lVar5 + lVar7);
        if (((-1 < (longlong)iVar1) && (iVar1 < (int)(*(longlong **)(param_1 + 0x40))[1])) &&
           ((lVar6 = (longlong)iVar1 * 0xb0 + **(longlong **)(param_1 + 0x40), lVar6 != 0 &&
            ((*(byte *)(lVar6 + 0xa8) & 1) != 0)))) goto LAB_140de40e1;
        lVar7 = lVar7 + 4;
      } while ((longlong)*(int *)(param_1 + 0x78) * 4 != lVar7);
    }
    bVar3 = *(byte *)(param_1 + 0xa8);
    if ((bVar3 & 1) != 0) goto LAB_140de40ef;
    bVar4 = 1;
  }
  else {
LAB_140de40e1:
    bVar3 = *(byte *)(param_1 + 0xa8);
    if ((bVar3 & 1) == 0) goto LAB_140de40ef;
    bVar4 = 0;
  }
  bVar4 = bVar3 & 0xfe | bVar4;
  *(byte *)(param_1 + 0xa8) = bVar4;
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 8) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 8) + lVar5) != 0)) {
        FUN_140898514(param_1 + 8);
        bVar4 = *(byte *)(param_1 + 0xa8);
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x10) * 0x10 != lVar5);
  }
  if ((bVar4 & 1) == 0) {
    lVar5 = 0x30;
    iVar1 = *(int *)(param_1 + 0x38);
  }
  else {
    lVar5 = 0x20;
    iVar1 = *(int *)(param_1 + 0x28);
  }
  if (0 < iVar1) {
    FUN_1447cd2ec(lVar5 + param_1,0);
  }
LAB_140de40ef:
  lVar5 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x58);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar7 = 0;
    do {
      iVar2 = *(int *)(lVar5 + lVar7);
      if (((-1 < (longlong)iVar2) && (iVar2 < (int)(*(longlong **)(param_1 + 0x40))[1])) &&
         ((longlong)iVar2 * 0xb0 + **(longlong **)(param_1 + 0x40) != 0)) {
        FUN_140de40cc();
      }
      lVar7 = lVar7 + 4;
    } while ((longlong)iVar1 * 4 != lVar7);
  }
  return;
}



// FUNCTION 140de426c FUN_140de426c body=120 status=ok
// SIG undefined FUN_140de426c(void)

undefined8 FUN_140de426c(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  lVar1 = DAT_14cb82110;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb82110 == 0) {
    uVar2 = 0;
  }
  else {
    local_48 = param_1;
    FUN_1446dcdd4(local_40);
    uVar2 = FUN_144837462(lVar1,local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de42e6 FUN_140de42e6 body=2168 status=ok
// SIG undefined FUN_140de42e6(void)

undefined8 FUN_140de42e6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
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
  byte bVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  
  if (param_4 != 0) {
    lVar21 = 0;
    bVar18 = DAT_14c950c29;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar21) = *(undefined2 *)(param_3 + 0x10 + lVar21);
      *(undefined8 *)(param_2 + 8 + lVar21) = *(undefined8 *)(param_3 + 8 + lVar21);
      puVar3 = (undefined4 *)(param_3 + 0x20 + lVar21);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x20 + lVar21);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      lVar19 = *(longlong *)(param_3 + 0x30 + lVar21);
      if ((bVar18 & 1) != 0) {
        if (lVar19 == 0) {
          lVar19 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar19 = *(longlong *)(param_3 + 0x30 + lVar21);
        }
      }
      lVar1 = param_3 + lVar21;
      lVar2 = param_2 + lVar21;
      *(longlong *)(param_2 + lVar21 + 0x30) = lVar19;
      FUN_1406fa324(param_2 + lVar21 + 0x38,param_3 + lVar21 + 0x38);
      FUN_140e00d48(param_2 + lVar21 + 0x48,param_3 + lVar21 + 0x48);
      *(undefined2 *)(param_2 + lVar21 + 0x58) = *(undefined2 *)(param_3 + lVar21 + 0x58);
      memcpy((void *)(param_2 + lVar21 + 0x60),(void *)(param_3 + lVar21 + 0x60),0xd0);
      FUN_14054c6c4(lVar2 + 0x130,lVar1 + 0x130);
      FUN_1405b70a4(lVar2 + 0x140,lVar1 + 0x140);
      FUN_140472d9a(lVar2 + 0x150,lVar1 + 0x150);
      FUN_1405b70a4(lVar2 + 0x160,lVar1 + 0x160);
      if (lVar2 != lVar1) {
        iVar5 = *(int *)(param_3 + 0x178 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x170 + lVar21);
        *(int *)(param_2 + 0x178 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x17c + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x17c + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x170);
          FUN_1447563a6(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 4);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x180 + lVar21) = *(undefined1 *)(param_3 + 0x180 + lVar21);
      *(undefined8 *)(param_2 + 0x1a0 + lVar21) = *(undefined8 *)(param_3 + 0x1a0 + lVar21);
      *(undefined4 *)(param_2 + 0x1a8 + lVar21) = *(undefined4 *)(param_3 + 0x1a8 + lVar21);
      memcpy((void *)(lVar2 + 0x1b0),(void *)(lVar1 + 0x1b0),0xd0);
      FUN_14054c6c4(lVar2 + 0x280,lVar1 + 0x280);
      FUN_1405b70a4(lVar2 + 0x290,lVar1 + 0x290);
      FUN_140472d9a(lVar2 + 0x2a0,lVar1 + 0x2a0);
      FUN_1405b70a4(lVar2 + 0x2b0,lVar1 + 0x2b0);
      if (lVar2 != lVar1) {
        iVar5 = *(int *)(param_3 + 0x2c8 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x2c0 + lVar21);
        *(int *)(param_2 + 0x2c8 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x2cc + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x2cc + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x2c0);
          FUN_1447563a6(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 4);
          }
        }
      }
      *(undefined1 *)(param_2 + 0x2d0 + lVar21) = *(undefined1 *)(param_3 + 0x2d0 + lVar21);
      *(undefined8 *)(param_2 + 0x2f0 + lVar21) = *(undefined8 *)(param_3 + 0x2f0 + lVar21);
      *(undefined4 *)(param_2 + 0x2f8 + lVar21) = *(undefined4 *)(param_3 + 0x2f8 + lVar21);
      *(undefined4 *)(param_2 + 0x300 + lVar21) = *(undefined4 *)(param_3 + 0x300 + lVar21);
      FUN_140de4c6c(lVar2 + 0x308,lVar1 + 0x308);
      puVar3 = (undefined4 *)(param_3 + 0x318 + lVar21);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x324 + lVar21);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x318 + lVar21);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar3 = (undefined4 *)(param_2 + 0x324 + lVar21);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      if (lVar2 != lVar1) {
        iVar5 = *(int *)(param_3 + 0x340 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x338 + lVar21);
        *(int *)(param_2 + 0x340 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x344 + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x344 + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x338);
          FUN_1447c510a(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 2);
          }
        }
      }
      *(undefined8 *)(param_2 + 0x348 + lVar21) = *(undefined8 *)(param_3 + 0x348 + lVar21);
      FUN_14054c6c4(lVar2 + 0x350,lVar1 + 0x350);
      FUN_140de4b5e(lVar2 + 0x360,lVar1 + 0x360);
      if (lVar2 == lVar1) {
        FUN_140de4b5e(lVar2 + 0x390,lVar1 + 0x390);
        FUN_140de4b5e(lVar2 + 0x3c0,lVar1 + 0x3c0);
      }
      else {
        iVar5 = *(int *)(param_3 + 0x378 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x370 + lVar21);
        *(int *)(param_2 + 0x378 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x37c + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x37c + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x370);
          FUN_1447c510a(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 2);
          }
        }
        iVar5 = *(int *)(param_3 + 0x388 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x380 + lVar21);
        *(int *)(param_2 + 0x388 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x38c + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x38c + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x380);
          FUN_1447c510a(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 2);
          }
        }
        FUN_140de4b5e(lVar2 + 0x390,lVar1 + 0x390);
        iVar5 = *(int *)(param_3 + 0x3a8 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x3a0 + lVar21);
        *(int *)(param_2 + 0x3a8 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x3ac + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x3ac + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x3a0);
          FUN_1447c510a(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 2);
          }
        }
        iVar5 = *(int *)(param_3 + 0x3b8 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x3b0 + lVar21);
        *(int *)(param_2 + 0x3b8 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x3bc + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x3bc + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x3b0);
          FUN_1447c510a(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 2);
          }
        }
        FUN_140de4b5e(lVar2 + 0x3c0,lVar1 + 0x3c0);
        iVar5 = *(int *)(param_3 + 0x3d8 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x3d0 + lVar21);
        *(int *)(param_2 + 0x3d8 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x3dc + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x3dc + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x3d0);
          FUN_1447c510a(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 2);
          }
        }
        iVar5 = *(int *)(param_3 + 1000 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x3e0 + lVar21);
        *(int *)(param_2 + 1000 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x3ec + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x3ec + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x3e0);
          FUN_1447c510a(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 << 2);
          }
        }
      }
      puVar3 = (undefined4 *)(param_3 + 0x3f0 + lVar21);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x400 + lVar21);
      uVar11 = *puVar3;
      uVar12 = puVar3[1];
      uVar13 = puVar3[2];
      uVar14 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x410 + lVar21);
      uVar15 = puVar3[1];
      uVar16 = puVar3[2];
      uVar17 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x410 + lVar21);
      *puVar4 = *puVar3;
      puVar4[1] = uVar15;
      puVar4[2] = uVar16;
      puVar4[3] = uVar17;
      puVar3 = (undefined4 *)(param_2 + 0x400 + lVar21);
      *puVar3 = uVar11;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      puVar3 = (undefined4 *)(param_2 + 0x3f0 + lVar21);
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      FUN_140de4bb8(lVar2 + 0x420,lVar1 + 0x420);
      *(undefined1 *)(param_2 + 0x430 + lVar21) = *(undefined1 *)(param_3 + 0x430 + lVar21);
      *(undefined8 *)(param_2 + 0x438 + lVar21) = *(undefined8 *)(param_3 + 0x438 + lVar21);
      FUN_140de4d94(lVar2 + 0x440,lVar1 + 0x440);
      *(undefined1 *)(param_2 + 0x4d0 + lVar21) = *(undefined1 *)(param_3 + 0x4d0 + lVar21);
      *(undefined8 *)(param_2 + 0x4d8 + lVar21) = *(undefined8 *)(param_3 + 0x4d8 + lVar21);
      FUN_140de4c12(lVar2 + 0x4e0,lVar1 + 0x4e0);
      *(undefined1 *)(param_2 + 0x4f0 + lVar21) = *(undefined1 *)(param_3 + 0x4f0 + lVar21);
      *(undefined1 *)(param_2 + 0x4f8 + lVar21) = *(undefined1 *)(param_3 + 0x4f8 + lVar21);
      FUN_140de4cca(lVar2 + 0x500,lVar1 + 0x500);
      if (lVar2 != lVar1) {
        iVar5 = *(int *)(param_3 + 0x538 + lVar21);
        pvVar6 = *(void **)(param_3 + 0x530 + lVar21);
        *(int *)(param_2 + 0x538 + lVar21) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x53c + lVar21) == 0) {
          *(undefined4 *)(param_2 + 0x53c + lVar21) = 0;
        }
        else {
          puVar20 = (undefined8 *)(param_2 + lVar21 + 0x530);
          FUN_1446dd670(puVar20,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar20,pvVar6,(longlong)iVar5 * 2);
          }
        }
      }
      *(undefined4 *)(param_2 + 0x540 + lVar21) = *(undefined4 *)(param_3 + 0x540 + lVar21);
      lVar19 = *(longlong *)(param_3 + 0x548 + lVar21);
      if (DAT_14c950c29 == 1) {
        if (lVar19 == 0) {
          lVar19 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar19 = *(longlong *)(param_3 + 0x548 + lVar21);
        }
      }
      bVar18 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x548 + lVar21) = lVar19;
      lVar21 = lVar21 + 0x550;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140de4b5e FUN_140de4b5e body=89 status=ok
// SIG undefined FUN_140de4b5e(void)

undefined8 * FUN_140de4b5e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140c0b9de(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 140de4bb8 FUN_140de4bb8 body=89 status=ok
// SIG undefined FUN_140de4bb8(void)

undefined8 * FUN_140de4bb8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147917b90(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 140de4c12 FUN_140de4c12 body=89 status=ok
// SIG undefined FUN_140de4c12(void)

undefined8 * FUN_140de4c12(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1470d3556(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 140de4c6c FUN_140de4c6c body=93 status=ok
// SIG undefined FUN_140de4c6c(void)

undefined8 * FUN_140de4c6c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14010165c(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147916fd8(param_1,iVar1);
      FUN_14791704b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140de4cca FUN_140de4cca body=106 status=ok
// SIG undefined FUN_140de4cca(void)

void * FUN_140de4cca(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
    }
    else {
      FUN_140de4d34(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 140de4d34 FUN_140de4d34 body=95 status=ok
// SIG undefined FUN_140de4d34(void)

void FUN_140de4d34(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 8, 8 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
    iVar1 = (int)(uVar2 >> 2);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_140900e70(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 140de4d94 FUN_140de4d94 body=124 status=ok
// SIG undefined FUN_140de4d94(void)

void * FUN_140de4d94(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x80);
    if (*(void **)((longlong)param_2 + 0x80) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x88);
    *(int *)((longlong)param_1 + 0x88) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x8c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x8c) = 8;
    }
    else {
      FUN_140101aba(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x80);
        if (*(void **)((longlong)param_1 + 0x80) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140de4e1c FUN_140de4e1c body=31 status=ok
// SIG undefined FUN_140de4e1c(void)

undefined8 FUN_140de4e1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140de4e44 FUN_140de4e44 body=328 status=ok
// SIG undefined FUN_140de4e44(void)

undefined8 * FUN_140de4e44(undefined8 *param_1)

{
  undefined1 uVar1;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14b0c9570;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x23) = 8;
  *(undefined1 *)(param_1 + 0x24) = 0x15;
  uVar1 = 0x15;
  if ((DAT_14c9a9cb4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x25) = uVar1;
  *(undefined1 *)(param_1 + 0x26) = 0;
  param_1[0x27] = 0;
  *(undefined2 *)(param_1 + 0x2b) = 4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 3;
  *(char *)(param_1 + 0x2d) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  return param_1;
}



// FUNCTION 140de4f8c FUN_140de4f8c body=233 status=ok
// SIG undefined FUN_140de4f8c(void)

longlong * FUN_140de4f8c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *_Dst;
  
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 4;
    uVar4 = 0;
  }
  else {
    FUN_140de5076(param_1 + 1,iVar1,0);
    plVar3 = (longlong *)param_1[3];
    if ((longlong *)param_1[3] == (longlong *)0x0) {
      plVar3 = param_1 + 1;
    }
    memcpy(plVar3,_Src,(longlong)iVar1 << 2);
    uVar4 = *(uint *)(param_1 + 4);
  }
  plVar3 = (longlong *)0x0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 4;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 1;
  *(uint *)(param_1 + 10) = uVar4;
  if (4 < uVar4) {
    FUN_140de50dc(param_1 + 5);
    plVar3 = (longlong *)param_1[9];
  }
  _Dst = param_1 + 5;
  if (plVar3 != (longlong *)0x0) {
    _Dst = plVar3;
  }
  memset(_Dst,0,(longlong)(int)uVar4 << 3);
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c75ec48 + 1;
  *param_1 = DAT_14c75ec48;
  DAT_14c75ec48 = lVar2;
  if (DAT_14c75ec48 == 0) {
    LOCK();
    DAT_14c75ec48 = 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 140de5076 FUN_140de5076 body=101 status=ok
// SIG undefined FUN_140de5076(void)

void FUN_140de5076(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 4;
    if (4 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1400c4e26(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 140de50dc FUN_140de50dc body=335 status=ok
// SIG undefined FUN_140de50dc(void)

void FUN_140de50dc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    iVar8 = 4;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (4 < *(uint *)(param_1 + 0x2c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140de5168;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_140de5168:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar8;
  FUN_140de522c(param_1,param_2);
  return;
}



// FUNCTION 140de522c FUN_140de522c body=131 status=ok
// SIG undefined FUN_140de522c(void)

void FUN_140de522c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 140de52b0 FUN_140de52b0 body=277 status=ok
// SIG undefined FUN_140de52b0(void)

undefined8 FUN_140de52b0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  
  plVar1 = (longlong *)FUN_14095be44(param_3);
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[0x163] == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = (longlong *)plVar1[0x164];
    }
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x7e0))(plVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_14058c734();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = FUN_14058c734();
        plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
        if (plVar2 == plVar4) {
          return 0;
        }
        if (plVar4 == (longlong *)0x0) {
          return 0;
        }
        lVar5 = (**(code **)(*plVar4 + 0x10))();
        if (plVar9 == (longlong *)0x0) {
          return 0;
        }
        if (lVar5 == 0) {
          return 0;
        }
        lVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
        uVar8 = 0x7fffffff;
        if (0 < (int)*(uint *)(lVar6 + 0xa8)) {
          puVar10 = (undefined8 *)(*(longlong *)(lVar6 + 0xa0) + 0x28);
          uVar7 = 0;
          do {
            if (((longlong *)puVar10[-1] == plVar1) || ((longlong *)*puVar10 == plVar1)) {
              uVar8 = uVar7 & 0xffffffff;
              break;
            }
            uVar7 = uVar7 + 1;
            puVar10 = puVar10 + 0x2e;
          } while (*(uint *)(lVar6 + 0xa8) != uVar7);
        }
        lVar5 = FUN_140de53c6(lVar5,uVar8);
        if (lVar5 != 0) {
          return CONCAT71((int7)((ulonglong)*(longlong *)(lVar5 + 0x34c) >> 8),
                          *(longlong *)(lVar5 + 0x34c) == *(longlong *)(param_1 + 0x10));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140de53c6 FUN_140de53c6 body=186 status=ok
// SIG undefined FUN_140de53c6(void)

undefined8 FUN_140de53c6(longlong param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x1a8) != *(int *)(param_1 + 0x1d4)) {
    lVar2 = param_1 + 0x1d8;
    if (*(longlong *)(param_1 + 0x1e0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1e0);
    }
    uVar4 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1e8) - 1U & param_2) * 4);
    if (uVar4 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0x1a0) + (longlong)(int)uVar4 * 0x14),
            *puVar1 != param_2) {
        uVar4 = puVar1[3];
        if (uVar4 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
      if (puVar1 + 1 == (uint *)0x0) {
        return 0;
      }
      if (puVar1[2] == 0) {
        return 0;
      }
      uVar4 = puVar1[1];
      if ((int)uVar4 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar4) {
        return 0;
      }
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if (puVar3 != (undefined8 *)0x0) {
        if (*(uint *)(puVar3 + 2) != puVar1[2]) {
          return 0;
        }
        if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
          return *puVar3;
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140de548e FUN_140de548e body=111 status=ok
// SIG undefined FUN_140de548e(void)

undefined8 * FUN_140de548e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ea4a0;
  if ((longlong *)param_1[0x17] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
  }
  if ((longlong *)param_1[0x11] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x11] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140de54fe FUN_140de54fe body=823 status=ok
// SIG undefined FUN_140de54fe(void)

void FUN_140de54fe(longlong *param_1)

{
  float fVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  float fVar20;
  
  if ((char)param_1[0x2a] == '\0') {
    uVar2 = *(ushort *)(param_1[3] + 0x1c);
    puVar12 = DAT_14ca96af8;
    if (DAT_14ca96af8 == (undefined4 *)0x0) {
      puVar12 = &DAT_14ca96aa8;
    }
    if (((uint)puVar12[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) == 0) {
      bVar15 = false;
    }
    else {
      bVar15 = 2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf];
    }
    if (0 < (int)param_1[1]) {
      lVar18 = 0;
      lVar14 = 0;
      lVar16 = 0;
      do {
        lVar6 = DAT_14c9b6c38;
        plVar19 = (longlong *)param_1[0x15];
        if ((longlong *)param_1[0x15] == (longlong *)0x0) {
          plVar19 = param_1 + 5;
        }
        if (*(char *)((longlong)plVar19 + lVar14 + 0xd) == '\x01') {
          lVar5 = *param_1;
          uVar3 = *(uint *)(DAT_14c9b6c80 + 4);
          iVar17 = *(int *)(lVar5 + 0x3090 + lVar18);
          if (iVar17 < 3) {
LAB_140de5660:
            uVar2 = *(ushort *)(&DAT_14ca85070 + (longlong)iVar17 * 2);
            puVar12 = DAT_14ca96af8;
            if (DAT_14ca96af8 == (undefined4 *)0x0) {
              puVar12 = &DAT_14ca96aa8;
            }
            if ((((uint)puVar12[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) != 0) &&
               (2 < (int)(&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf])) goto LAB_140de5784;
            fVar20 = *(float *)(DAT_14c9b6c50 + 4);
            if (fVar20 < 0.0) {
              fVar20 = -fVar20;
              if (100.0 <= fVar20) {
                fVar20 = 100.0;
              }
            }
            else {
              fVar1 = *(float *)(lVar5 + 0x2b14 + lVar18);
              if (fVar1 <= fVar20) {
                fVar20 = fVar1;
              }
            }
            uVar9 = (uint)(70.0 < fVar20) + (uint)(35.0 < fVar20) + 1;
            if (-1 < (int)uVar3) {
              uVar9 = uVar3;
            }
            if (2 < uVar9) {
              uVar9 = 3;
            }
          }
          else {
            iVar17 = *(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0xc60);
            if (((iVar17 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar17 == 2)) {
              uVar13 = 0;
            }
            else if (iVar17 == 1) {
              DVar10 = FUN_140ad26c0();
              DVar11 = GetCurrentThreadId();
              uVar13 = (ulonglong)(DVar10 != DVar11);
            }
            else {
              uVar13 = 1;
            }
            if (*(int *)(lVar6 + uVar13 * 4) < 1) {
              iVar17 = *(int *)(lVar5 + 0x3090 + lVar18);
              goto LAB_140de5660;
            }
LAB_140de5784:
            uVar9 = uVar3;
            if (0 < (int)uVar3) {
              uVar9 = 1;
            }
            if ((int)uVar3 < 0) {
              uVar9 = 1;
            }
          }
          *(uint *)((longlong)plVar19 + lVar14) = uVar9;
          if (bVar15 == false) {
            iVar17 = 0;
            if (*(int *)(DAT_14c9b6cc8 + 4) == 1) {
              iVar4 = *(int *)(DAT_14c9b6ce0 + 4);
              cVar8 = FUN_140de5836();
              iVar17 = 3;
              if (cVar8 != '\0') {
                iVar17 = 2 - (uint)(iVar4 == 0);
              }
            }
            *(int *)((longlong)plVar19 + lVar14 + 4) = iVar17;
          }
          else {
            iVar17 = *(int *)((longlong)plVar19 + lVar14 + 4);
          }
          if ((iVar17 == 0) && (*(int *)((longlong)plVar19 + lVar14) != 0)) {
            bVar7 = FUN_140de5836(lVar5 + lVar18);
            *(byte *)((longlong)plVar19 + lVar14 + 0xc) = bVar7;
            *(uint *)((longlong)plVar19 + lVar14 + 8) =
                 2 - (uint)((bVar7 | bVar15) & *(longlong *)(lVar5 + 0x136f0 + lVar18) != 0);
          }
        }
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 0x10;
        lVar18 = lVar18 + 0x13c10;
      } while (lVar16 < (int)param_1[1]);
    }
    *(undefined1 *)(param_1 + 0x2a) = 1;
  }
  return;
}



// FUNCTION 140de5836 FUN_140de5836 body=162 status=ok
// SIG undefined FUN_140de5836(void)

undefined1 FUN_140de5836(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14c9b6c38;
  if (2 < *(int *)(param_1 + 0x3090)) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar5 = 0;
    }
    else if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar5 = 1;
    }
    if (param_2 != 1) {
      return 0;
    }
    if (*(int *)(lVar2 + uVar5 * 4) < 1) {
      return 0;
    }
    if (1 < *(int *)(DAT_14c9b6c38 + 4)) {
      if (*(int *)(DAT_14c9b6c38 + 4) == 3) {
        return 1;
      }
      return DAT_14ca84e23;
    }
  }
  return 0;
}



// FUNCTION 140de59e4 FUN_140de59e4 body=1548 status=ok
// SIG undefined FUN_140de59e4(void)

void FUN_140de59e4(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 != DAT_14cb3aa68) {
    if (lVar1 == DAT_14cb3aa70) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbe6f0;
    }
    else if (lVar1 == DAT_14cb3aa78) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbe760;
    }
    else {
      if (lVar1 == DAT_14cb3aa80) {
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,2,0x10);
        *local_30 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_30[2] = lVar5;
        ppuVar4 = &PTR_FUN_14adbe7d0;
        goto LAB_140de5a9b;
      }
      if (lVar1 == DAT_14cb3aa88) {
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,2,0x10);
        *local_30 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_30[2] = lVar5;
        ppuVar4 = &PTR_FUN_14adbe840;
      }
      else if (lVar1 == DAT_14cb3aa90) {
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,2,0x10);
        *local_30 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_30[2] = lVar5;
        ppuVar4 = &PTR_FUN_14adbe8b0;
      }
      else if (lVar1 == DAT_14cb3aa98) {
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,2,0x10);
        *local_30 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_30[2] = lVar5;
        ppuVar4 = &PTR_FUN_14adbe920;
      }
      else if (lVar1 == DAT_14cb3aaa0) {
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,2,0x10);
        *local_30 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_30[2] = lVar5;
        ppuVar4 = &PTR_FUN_14adbe990;
      }
      else {
        if (lVar1 != DAT_14cb3aaa8) goto LAB_140de5aed;
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,2,0x10);
        *local_30 = &PTR_LAB_14ad81180;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar1 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar1 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar1;
        local_30[2] = lVar5;
        ppuVar4 = &PTR_FUN_14adbea00;
      }
    }
    local_28 = 2;
    *local_30 = ppuVar4;
    local_30[3] = param_1;
    FUN_144a450dc(param_4,&local_30);
    FUN_1449db362(&local_30);
    goto LAB_140de5aed;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar5;
  ppuVar4 = &PTR_FUN_14adbe680;
LAB_140de5a9b:
  puVar3 = local_30;
  *local_30 = ppuVar4;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_140de5ac6:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_140de5ac6;
    }
  }
  *param_4 = (longlong)puVar3;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140de5aed;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140de5aed:
  if (((int)param_4[1] != 0) && (*param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de600a FUN_140de600a body=1555 status=ok
// SIG undefined FUN_140de600a(void)

void FUN_140de600a(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3aa68) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14adbc5a0;
  }
  else if (lVar1 == DAT_14cb3aa70) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14adbc610;
  }
  else if (lVar1 == DAT_14cb3aa78) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14adbc680;
  }
  else {
    if (lVar1 == DAT_14cb3aa80) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      puVar3 = local_30;
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      *local_30 = &PTR_FUN_14adbc6f0;
      local_30[3] = param_1;
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      if ((int)param_4[1] == 0) {
LAB_140de60ec:
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar2 = (undefined8 *)*param_4;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          FUN_1446efa72(param_4,0,0,0x10);
          *(undefined4 *)(param_4 + 1) = 0;
          goto LAB_140de60ec;
        }
      }
      *param_4 = (longlong)puVar3;
      *(undefined4 *)(param_4 + 1) = 2;
      if (local_28 != 0) {
        if (local_30 == (undefined8 *)0x0) goto LAB_140de6113;
        (**(code **)*local_30)(local_30,0);
        FUN_1446efa72(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_30 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140de6113;
    }
    if (lVar1 == DAT_14cb3aa88) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbc760;
    }
    else if (lVar1 == DAT_14cb3aa90) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbc7d0;
    }
    else if (lVar1 == DAT_14cb3aa98) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbc840;
    }
    else if (lVar1 == DAT_14cb3aaa0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbc8b0;
    }
    else {
      if (lVar1 != DAT_14cb3aaa8) goto LAB_140de6113;
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbc920;
    }
  }
  local_28 = 2;
  *local_30 = ppuVar4;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_140de6113:
  if (((int)param_4[1] != 0) && (*param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de6634 FUN_140de6634 body=1555 status=ok
// SIG undefined FUN_140de6634(void)

void FUN_140de6634(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3aa68) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14adbd9a0;
  }
  else if (lVar1 == DAT_14cb3aa70) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14adbda10;
  }
  else if (lVar1 == DAT_14cb3aa78) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14adbda80;
  }
  else {
    if (lVar1 == DAT_14cb3aa80) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      puVar3 = local_30;
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      *local_30 = &PTR_FUN_14adbdaf0;
      local_30[3] = param_1;
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      if ((int)param_4[1] == 0) {
LAB_140de6716:
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar2 = (undefined8 *)*param_4;
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,0);
          FUN_1446efa72(param_4,0,0,0x10);
          *(undefined4 *)(param_4 + 1) = 0;
          goto LAB_140de6716;
        }
      }
      *param_4 = (longlong)puVar3;
      *(undefined4 *)(param_4 + 1) = 2;
      if (local_28 != 0) {
        if (local_30 == (undefined8 *)0x0) goto LAB_140de673d;
        (**(code **)*local_30)(local_30,0);
        FUN_1446efa72(&local_30,0,0,0x10);
        local_28 = 0;
      }
      if (local_30 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140de673d;
    }
    if (lVar1 == DAT_14cb3aa88) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbdb60;
    }
    else if (lVar1 == DAT_14cb3aa90) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbdbd0;
    }
    else if (lVar1 == DAT_14cb3aa98) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbdc40;
    }
    else if (lVar1 == DAT_14cb3aaa0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbdcb0;
    }
    else {
      if (lVar1 != DAT_14cb3aaa8) goto LAB_140de673d;
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14adbdd20;
    }
  }
  local_28 = 2;
  *local_30 = ppuVar4;
  local_30[3] = param_1;
  FUN_144a450dc(param_4,&local_30);
  FUN_1449db362(&local_30);
LAB_140de673d:
  if (((int)param_4[1] != 0) && (*param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de6c5e FUN_140de6c5e body=498 status=ok
// SIG undefined FUN_140de6c5e(void)

undefined8 FUN_140de6c5e(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = *(longlong **)(param_2 + 0x48);
  bVar9 = plVar2 == (longlong *)0x0 || *(byte *)((longlong)plVar2 + 0xc) < 2;
  lVar3 = *plVar2;
  lVar10 = (longlong)(int)plVar2[1];
  if (bVar9) {
    local_78 = 0.0;
    local_70 = 0.0;
    local_68 = 0.0;
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0x368);
    local_68 = (double)*(float *)(lVar4 + 8 + lVar10 * 0xc);
    local_70 = (double)*(float *)(lVar4 + 4 + lVar10 * 0xc);
    local_78 = (double)*(float *)(lVar4 + lVar10 * 0xc);
  }
  lVar4 = *(longlong *)(lVar3 + 0x48);
  lVar11 = lVar10 * 0x10;
  if (bVar9) {
    dVar14 = 0.0;
    dVar15 = 0.0;
    dVar12 = 0.0;
    dVar13 = 1.0;
  }
  else {
    pdVar1 = (double *)(*(longlong *)(lVar3 + 0x3f8) + lVar10 * 0x20);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    pdVar1 = (double *)(*(longlong *)(lVar3 + 0x3f8) + 0x10 + lVar10 * 0x20);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
  }
  dVar16 = (double)*(float *)(lVar4 + 8 + lVar11);
  dVar5 = (double)*(float *)(lVar4 + 0xc + lVar11);
  dVar17 = (double)*(float *)(lVar4 + lVar11);
  dVar8 = (double)*(float *)(lVar4 + 4 + lVar11);
  dVar6 = dVar14 * dVar16 * 1.0 + dVar13 * dVar8 + dVar17 * dVar12 * -1.0 + dVar5 * dVar15;
  dVar7 = dVar12 * dVar16 * -1.0 + ((dVar17 * dVar14 * -1.0 + dVar5 * dVar13) - dVar8 * dVar15);
  local_98._8_4_ = SUB84(dVar6,0);
  local_98._0_8_ = dVar15 * dVar16 * -1.0 + dVar12 * dVar8 + dVar17 * dVar13 * 1.0 + dVar5 * dVar14;
  local_98._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_88._8_4_ = SUB84(dVar7,0);
  local_88._0_8_ =
       dVar13 * dVar16 * 1.0 + ((dVar17 * dVar15 * 1.0 + dVar5 * dVar12) - dVar8 * dVar14);
  local_88._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  FUN_1409357f8(param_1,local_98,&local_78);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de6e52 FUN_140de6e52 body=614 status=ok
// SIG undefined FUN_140de6e52(void)

bool FUN_140de6e52(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined2 *local_98;
  int local_90;
  undefined4 uStack_8c;
  longlong local_80;
  undefined8 local_68;
  undefined8 *local_60;
  undefined2 **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = param_3;
  FUN_140056680(&local_98);
  uVar2 = FUN_140d68e64(param_1,&local_98);
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = 7;
  FUN_140de70ba(&local_98,uVar2,param_3,param_4);
  lVar3 = FUN_144a1cd4a(uVar2,param_3,&local_98);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_8c,local_90) != 0) {
    FUN_1400020a8();
  }
  if (lVar3 == 0) {
    local_a8 = 7;
    FUN_140de70ba(&local_98,uVar2,param_3,param_4);
    local_60 = &local_68;
    local_58 = &local_98;
    FUN_1406e1016(uVar2,local_4c);
    if (local_80 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_8c,local_90) != 0) {
      FUN_1400020a8();
    }
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 1;
    lVar1 = *(longlong *)(param_1 + 0xd0);
    if (lVar1 != 0) {
      FUN_140056680(&local_98);
      uVar6 = 0;
      iVar5 = local_90 + -1;
      if (local_90 == 0) {
        iVar5 = 0;
      }
      if (0 < iVar5) {
        puVar4 = local_98;
        if (local_90 == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        lVar8 = 0;
        uVar6 = 0;
        do {
          uVar7 = ((uint)(0x19 < (ushort)puVar4[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar4[lVar8])
                  - 0x20;
          uVar9 = (uint)(uVar6 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar6 ^ uVar7) & 0xff) * 4);
          uVar6 = (ulonglong)
                  (uVar9 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4));
          lVar8 = lVar8 + 1;
        } while (iVar5 != (int)lVar8);
      }
      uVar2 = FUN_140d68dce(lVar1,uVar6,&local_98);
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_a8 = 2;
      FUN_140de70ba(&local_98,0,0,param_4);
      local_60 = &local_68;
      local_58 = &local_98;
      FUN_1406e1016(uVar2,local_4c);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (CONCAT44(uStack_8c,local_90) != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 == 0;
}



// FUNCTION 140de70ba FUN_140de70ba body=133 status=ok
// SIG undefined FUN_140de70ba(void)

undefined1 *
FUN_140de70ba(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined1 param_5)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined2 *puVar3;
  
  *param_1 = param_5;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_4 + 1);
  _Src = (void *)*param_4;
  *(int *)(param_1 + 0x10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
    if (*(int *)(param_1 + 0x10) != 0) {
      puVar3 = *(undefined2 **)(param_1 + 8);
      goto LAB_140de711b;
    }
  }
  puVar3 = &DAT_149dfb77a;
LAB_140de711b:
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  uVar2 = FUN_144a1ccda(puVar3,0);
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  FUN_1406e0f98(param_1);
  return param_1;
}



// FUNCTION 140de7140 FUN_140de7140 body=252 status=ok
// SIG undefined FUN_140de7140(void)

void FUN_140de7140(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  uint local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_140de723e();
  local_2c = 0;
  if (lVar2 == 0) {
    local_30 = 0;
    iVar1 = 0;
  }
  else {
    local_30 = *(uint *)(lVar2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar2 + 0x10) = iVar3;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar3;
      }
    }
  }
  local_38 = 0;
  local_2c = iVar1;
  FUN_140de7278(param_2,&local_30,param_1 + 0x10,0);
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140de723e FUN_140de723e body=57 status=ok
// SIG undefined FUN_140de723e(void)

void FUN_140de723e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58bc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58bc0 = FUN_140002ddd(FUN_1418498f9,uVar1,L"GbxActorScriptOwnerState");
  }
  return;
}



// FUNCTION 140de7278 FUN_140de7278 body=160 status=ok
// SIG undefined FUN_140de7278(void)

void FUN_140de7278(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = FUN_1409ca440(param_2);
  local_48 = param_5;
  FUN_140497476(param_1,&local_40,param_3,param_4);
  if (local_40 == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(local_40 + 0xc);
    uVar1 = FUN_145782296(&DAT_14c9647b8);
  }
  param_2[1] = uVar1;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de731f FUN_140de731f body=138 status=ok
// SIG undefined FUN_140de731f(void)

void FUN_140de731f(undefined8 param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14069cc7b(&local_28,param_1);
  if (local_28 != 0) {
    FUN_140de73ba(local_28 + 0x470,param_1);
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de73ba FUN_140de73ba body=136 status=ok
// SIG undefined FUN_140de73ba(void)

void FUN_140de73ba(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = (longlong *)(param_1 + 0x98);
  FUN_140de74a0(plVar1,&local_24,param_2);
  if ((longlong)local_24 != -1) {
    puVar2 = *(undefined8 **)(*plVar1 + 8 + (longlong)local_24 * 0x18);
    FUN_140de7444(plVar1);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      bVar3 = FUN_140de75ae(puVar2);
      *(byte *)(param_1 + 0x120) = *(byte *)(param_1 + 0x120) | bVar3;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de7444 FUN_140de7444 body=91 status=ok
// SIG undefined FUN_140de7444(void)

void FUN_140de7444(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_140de7526(param_1,param_2,1);
  return;
}



// FUNCTION 140de74a0 FUN_140de74a0 body=134 status=ok
// SIG undefined FUN_140de74a0(void)

void FUN_140de74a0(longlong *param_1,int *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_3) goto LAB_140de7510;
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  iVar2 = -1;
LAB_140de7510:
  *param_2 = iVar2;
  return;
}



// FUNCTION 140de7526 FUN_140de7526 body=136 status=ok
// SIG undefined FUN_140de7526(void)

void FUN_140de7526(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140de75ae FUN_140de75ae body=182 status=ok
// SIG undefined FUN_140de75ae(void)

undefined8 FUN_140de75ae(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 < 0xb) {
    if ((0x602U >> (uVar2 & 0x1f) & 1) == 0) {
      if ((0x50U >> (uVar2 & 0x1f) & 1) == 0) goto LAB_140de75d6;
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar4 != 0) goto LAB_140de764a;
      *(undefined4 *)(param_1 + 8) = 1;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x28);
      if (iVar4 != 0) goto LAB_140de764a;
    }
LAB_140de7657:
    uVar3 = 0;
  }
  else {
LAB_140de75d6:
    iVar4 = *(int *)(param_1 + 0x28);
    if (iVar4 != 0) {
LAB_140de764a:
      if (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar4 + -1) * 4) == 3)
      goto LAB_140de7657;
    }
    plVar5 = (longlong *)(param_1 + 0x20);
    uVar2 = *(uint *)(param_1 + 0x2c);
    iVar4 = 0;
    if ((int)uVar2 < 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      FUN_147e674e0(plVar5);
      iVar4 = *(int *)(param_1 + 0x28);
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
    *(uint *)(param_1 + 0x28) = iVar4 + 1U;
    if (uVar2 < iVar4 + 1U) {
      FUN_140b39638(plVar5,iVar4);
    }
    lVar1 = *plVar5;
    *(undefined4 *)(lVar1 + (longlong)iVar4 * 4) = 3;
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar3;
}



// FUNCTION 140de7664 FUN_140de7664 body=649 status=ok
// SIG undefined FUN_140de7664(void)

void FUN_140de7664(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uStack_cc = *(undefined4 *)(param_1 + 0x160);
  local_c8 = *(undefined4 *)(param_1 + 0x164);
  local_c4 = *(undefined4 *)(param_1 + 0x168);
  local_d8 = CONCAT44(*(undefined4 *)(param_1 + 0x16c),*(undefined4 *)(param_1 + 0x170));
  local_d0 = *(undefined4 *)(param_1 + 0x174);
  local_c0 = &DAT_100000001;
  FUN_140de78ee(&local_e0);
  lVar4 = *(longlong *)(param_1 + 0x140);
  *(longlong *)(param_1 + 0x140) = local_e0;
  local_e0 = 0;
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar11 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar11 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
    if (local_e0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_e0 + 8);
      uVar11 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar11 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x130) + 0x18))(*(longlong **)(param_1 + 0x130),param_2);
  (**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))(*(longlong **)(param_1 + 0x138),param_2);
  uVar5 = *(undefined8 *)(param_1 + 0x130);
  lVar4 = param_1 + 0x10;
  iVar2 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar2 + 1U) {
    FUN_14472e0ae(lVar4,iVar2);
  }
  lVar12 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar12 = lVar4;
  }
  lVar9 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar12 + lVar9) = uVar5;
  *(undefined8 *)(lVar12 + 8 + lVar9) = 0x1000000000;
  local_50 = 0x1100000001;
  local_d8 = (longlong)iVar2 & 0xffU | 0x1000040000;
  uVar11 = 0;
  bVar7 = true;
  do {
    bVar10 = bVar7;
    uVar3 = *(uint *)(param_1 + 0x98);
    *(uint *)(param_1 + 0x98) = uVar3 + 1;
    if (*(uint *)(param_1 + 0x9c) < uVar3 + 1) {
      FUN_14472e0ae(lVar4,uVar3);
    }
    uVar6 = local_50;
    lVar12 = *(longlong *)(param_1 + 0x90);
    if (*(longlong *)(param_1 + 0x90) == 0) {
      lVar12 = lVar4;
    }
    *(undefined8 *)(lVar12 + (longlong)(int)uVar3 * 0x10) = 0;
    *(undefined8 *)(lVar12 + 8 + (longlong)(int)uVar3 * 0x10) = 0x1001000000000;
    lVar12 = (longlong)(int)local_50;
    uVar8 = (int)local_50 + 1;
    local_50 = CONCAT44(local_50._4_4_,uVar8);
    if (local_50._4_4_ < uVar8) {
      FUN_14738ac8a(&local_d8,uVar6 & 0xffffffff);
    }
    (&local_d8)[lVar12] = (ulonglong)(uVar3 & 0xff | uVar11) | 0x1001008040000;
    uVar11 = 0x1000000;
    bVar7 = false;
  } while (bVar10);
  FUN_1447f9616(param_1,&local_d8,0);
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de78ee FUN_140de78ee body=243 status=ok
// SIG undefined FUN_140de78ee(void)

longlong * FUN_140de78ee(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1415c0876();
  local_30 = 1;
  local_38 = 2;
  (**(code **)(*DAT_14ca83900 + 0x138))
            (DAT_14ca83900,&local_28,param_2,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_28;
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140de79e2 FUN_140de79e2 body=113 status=ok
// SIG undefined FUN_140de79e2(void)

void FUN_140de79e2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x288);
  if (puVar1 != param_2) {
    if (puVar1 == (undefined8 *)0x0) {
      if (param_2 != (undefined8 *)0x0) {
        *(undefined8 **)(param_1 + 0x288) = param_2;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x288) = 0;
      (**(code **)*puVar1)(puVar1,1);
      puVar1 = *(undefined8 **)(param_1 + 0x288);
      if ((puVar1 != param_2) &&
         (*(undefined8 **)(param_1 + 0x288) = param_2, puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140de7a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar1)(puVar1,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140de7a58 FUN_140de7a58 body=228 status=ok
// SIG undefined FUN_140de7a58(void)

longlong FUN_140de7a58(void)

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
  if (DAT_14cab8d88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d45ea;
    local_38 = &LAB_14775e221;
    local_40 = &LAB_146359b4e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x168;
    FUN_14081cfa3(L"/Script/UMG",L"Widget",&DAT_14cab8d88,FUN_146359b2c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab8d88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140de7b3e FUN_140de7b3e body=99 status=ok
// SIG undefined FUN_140de7b3e(void)

void FUN_140de7b3e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    lVar2 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140de7b8e;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
       ) {
      lVar2 = *plVar3;
      goto LAB_140de7b8e;
    }
  }
  lVar2 = 0;
LAB_140de7b8e:
                    /* WARNING: Could not recover jumptable at 0x000140de7b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  return;
}


