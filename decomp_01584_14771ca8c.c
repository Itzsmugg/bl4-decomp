// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14771ca8c FUN_14771ca8c body=124 status=ok
// SIG undefined FUN_14771ca8c(void)

undefined4 FUN_14771ca8c(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14771cac5;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14771cac5:
  uVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return uVar5;
}



// FUNCTION 14771cb08 FUN_14771cb08 body=124 status=ok
// SIG undefined FUN_14771cb08(void)

undefined1 FUN_14771cb08(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14771cb42;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14771cb42:
  uVar4 = (**(code **)(*plVar7 + 0x68))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return uVar4;
}



// FUNCTION 14771cb84 FUN_14771cb84 body=144 status=ok
// SIG undefined FUN_14771cb84(void)

longlong FUN_14771cb84(longlong param_1,longlong param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14771cbc0;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14771cbc0:
  uVar5 = (**(code **)(*plVar7 + 0x90))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  FUN_144a69486(param_2,uVar5);
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return param_2;
}



// FUNCTION 14771cc14 FUN_14771cc14 body=126 status=ok
// SIG undefined FUN_14771cc14(void)

undefined4 FUN_14771cc14(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar6[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        goto LAB_14771cc4e;
      }
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14771cc4e:
  uVar5 = (**(code **)(*plVar7 + 0x98))(plVar7,*(undefined4 *)(param_1 + 0x2b8));
  if (!bVar2) {
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  return uVar5;
}



// FUNCTION 14771cc92 FUN_14771cc92 body=154 status=ok
// SIG undefined FUN_14771cc92(void)

longlong * FUN_14771cc92(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_14771cd1b:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14771cd1b;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x10) + -8;
    if (*(longlong *)(param_1 + 0x10) == 0) {
      lVar7 = 0;
    }
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
    lVar6 = lVar7 + 8;
    if (lVar7 == 0) {
      lVar6 = 0;
    }
    *param_2 = lVar6;
    param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 14771cd90 FUN_14771cd90 body=190 status=ok
// SIG undefined FUN_14771cd90(void)

void FUN_14771cd90(longlong param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  plVar8 = *(longlong **)(param_1 + 0x2b0);
  bVar2 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14771cdd0;
      }
      LOCK();
      iVar3 = (int)plVar8[1];
      bVar10 = iVar5 == iVar3;
      if (bVar10) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar10);
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = false;
  }
LAB_14771cdd0:
  cVar4 = (**(code **)(*plVar9 + 0x68))(plVar9,*(undefined4 *)(param_1 + 0x2b8));
  if ((cVar4 != '\0') &&
     (puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,param_1),
     puVar7 != (undefined8 *)0x0)) {
    uVar6 = (**(code **)(*plVar9 + 0x60))(plVar9,puVar7);
    (**(code **)(*plVar9 + 0x58))(plVar9,*puVar7,uVar6 ^ 1);
  }
  if (!bVar2) {
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
                    /* WARNING: Could not recover jumptable at 0x00014771ce3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar8 + 0x10))(plVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14771ce5c FUN_14771ce5c body=114 status=ok
// SIG undefined FUN_14771ce5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14771ce5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb8))();
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
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014771cec7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(_DAT_00000000 + 0xb8))(0);
  return uVar7;
}



// FUNCTION 14771cece FUN_14771cece body=1464 status=ok
// SIG undefined FUN_14771cece(void)

void FUN_14771cece(longlong param_1,uint param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_6d8 [32];
  undefined1 *local_6b8;
  longlong local_6b0;
  undefined1 local_6a1;
  undefined1 local_6a0 [8];
  longlong *local_698;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined4 uStack_680;
  undefined4 uStack_67c;
  undefined1 local_678;
  undefined8 local_670;
  undefined4 local_668;
  undefined4 local_660;
  undefined1 local_65c;
  undefined8 local_658;
  undefined8 uStack_650;
  longlong local_648;
  longlong *plStack_640;
  longlong *local_630;
  undefined8 local_628;
  longlong *local_620;
  undefined2 local_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong *local_5f0;
  undefined8 local_5e8;
  longlong *local_5e0;
  undefined8 local_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  longlong *local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined1 local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined1 local_590 [192];
  undefined1 local_4d0 [424];
  undefined8 local_328;
  undefined1 local_318 [24];
  undefined1 local_300 [16];
  undefined2 local_2f0;
  undefined1 auStack_2e8 [16];
  undefined1 local_2d8 [192];
  undefined1 local_218 [440];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  *(undefined8 *)(param_1 + 0x368) = *param_4;
  plVar6 = (longlong *)param_4[1];
  plVar8 = *(longlong **)(param_1 + 0x370);
  if (plVar8 != plVar6) {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar6;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  if (param_2 < 2) {
    local_5a8 = *(undefined1 *)(param_3 + 4);
    local_5b8 = *param_3;
    uStack_5b4 = param_3[1];
    uStack_5b0 = param_3[2];
    uStack_5ac = param_3[3];
    local_5a0 = 0;
    local_598 = 0;
    FUN_140a58be0(&local_5a0,param_3 + 6);
    uVar4 = FUN_140a58d14(param_1 + 0x220,&local_5b8);
    FUN_140a58896(uVar4,param_4);
    lVar5 = param_1 + 0x200;
  }
  else {
    FUN_140a5296a(local_218);
    FUN_140a50426(local_2d8);
    lVar5 = FUN_140a52578(local_2d8);
    *(undefined4 *)(lVar5 + 0x40) = 3;
    *(undefined1 *)(lVar5 + 0x44) = 1;
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *(undefined1 *)(lVar5 + 0x4c) = 1;
    FUN_146a2b81a(local_4d0);
    local_328 = *(undefined8 *)(param_1 + 0x2d0);
    local_610 = CONCAT11(1,*(undefined1 *)(param_1 + 0x37c));
    local_608 = 0;
    uStack_600 = 0;
    local_2f0 = local_610;
    FUN_144a450dc(auStack_2e8,&local_608);
    FUN_1449db362(&local_608);
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) {
LAB_14771d0a6:
      local_648 = 0;
      plStack_640 = (longlong *)0x0;
    }
    else {
      iVar3 = (int)plVar6[1];
      do {
        if (iVar3 == 0) goto LAB_14771d0a6;
        LOCK();
        iVar2 = (int)plVar6[1];
        bVar9 = iVar3 == iVar2;
        if (bVar9) {
          *(int *)(plVar6 + 1) = iVar3 + 1;
          iVar2 = iVar3;
        }
        iVar3 = iVar2;
        UNLOCK();
      } while (!bVar9);
      local_648 = *(longlong *)(param_1 + 0x10) + -8;
      if (*(longlong *)(param_1 + 0x10) == 0) {
        local_648 = 0;
      }
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      plStack_640 = plVar6;
      if ((int)*plVar8 == 0) {
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
    local_630 = &local_648;
    FUN_14771fbc6(&local_628);
    if (local_620 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_620 + 1) = (int)local_620[1] + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(param_1 + 0x2e0);
    *(undefined8 *)(param_1 + 0x2d8) = local_628;
    *(longlong **)(param_1 + 0x2e0) = local_620;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar6 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    FUN_14771fb4e(&local_628,&local_5f8,local_4d0);
    local_5e8 = local_5f8;
    local_5e0 = local_5f0;
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5f0 + 1) = (int)local_5f0[1] + 1;
      UNLOCK();
    }
    local_6b0 = param_1 + 0x1e8;
    uVar4 = FUN_140a4fe8e(lVar5,&local_5e8);
    uVar4 = FUN_140a52392(local_218,uVar4);
    FUN_140a50426(local_590);
    local_660 = 0x3f800000;
    local_65c = 1;
    local_658 = 0;
    uStack_650 = 0;
    plVar6 = (longlong *)FUN_140a5475a(local_590);
    lVar5 = *plVar6;
    local_688 = *param_3;
    uStack_684 = param_3[1];
    uStack_680 = param_3[2];
    uStack_67c = param_3[3];
    local_678 = *(undefined1 *)(param_3 + 4);
    local_670 = 0;
    local_668 = 0;
    FUN_140a58be0(&local_670,param_3 + 6);
    *(undefined1 *)(plVar6 + 5) = local_678;
    *(undefined4 *)(plVar6 + 3) = local_688;
    *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_684;
    *(undefined4 *)(plVar6 + 4) = uStack_680;
    *(undefined4 *)((longlong)plVar6 + 0x24) = uStack_67c;
    FUN_144a450dc(plVar6 + 6,&local_670);
    FUN_1449db362(&local_670);
    uVar7 = FUN_146a07044(plVar6,param_4);
    uVar4 = FUN_140a52392(uVar4,uVar7);
    local_6b8 = &local_6a1;
    FUN_140a541dc(local_6a0,"SHorizontalBox","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",
                  0xc3);
    FUN_140a50ec6(local_6a0,&local_5d8,uVar4);
    local_5c8 = local_5d8;
    local_5c0 = local_5d0;
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_5d0 + 1) = (int)local_5d0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(local_6b0,&local_5c8);
    plVar6 = local_5c0;
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5c0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5d0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5d0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5d0)(local_5d0);
        LOCK();
        piVar1 = (int *)((longlong)local_5d0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5d0 + 0x10))(local_5d0);
        }
      }
    }
    if (local_698 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_698 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_698)(local_698);
        LOCK();
        piVar1 = (int *)((longlong)local_698 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_698 + 0x10))(local_698);
        }
      }
    }
    FUN_140a509a6(local_590);
    plVar6 = local_5e0;
    if (local_5e0 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_5e0 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_5e0)(local_5e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_5f0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_5f0 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_5f0)(local_5f0);
        LOCK();
        piVar1 = (int *)((longlong)local_5f0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_5f0 + 0x10))(local_5f0);
        }
      }
    }
    if (local_620 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_620 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_620)(local_620);
        LOCK();
        piVar1 = (int *)((longlong)local_620 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_620 + 0x10))(local_620);
        }
      }
    }
    plVar6 = plStack_640;
    if (plStack_640 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_640 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plStack_640)(plStack_640);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    FUN_1449db362(auStack_2e8);
    FUN_1449db362(local_300);
    FUN_1449db362(local_318);
    FUN_140a4ff8c(local_4d0);
    FUN_140a509a6(local_2d8);
    FUN_145ab33da(local_218);
  }
  *(longlong *)(param_1 + 0x360) = lVar5;
  if ((local_60 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14771d488 FUN_14771d488 body=1060 status=ok
// SIG undefined FUN_14771d488(void)

int FUN_14771d488(longlong param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,float *param_8)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  ulonglong uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  float *local_110;
  float *local_108;
  undefined4 local_100;
  float *local_f8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined1 local_cc;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_bc;
  ulonglong local_b4;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_9c;
  byte local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar13 = *(longlong **)(param_1 + 0x2b0);
  bVar8 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14771d50b;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar16 = iVar10 == iVar9;
      if (bVar16) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar16);
    plVar14 = *(longlong **)(param_1 + 0x2a8);
    bVar8 = false;
  }
LAB_14771d50b:
  lVar15 = 0x890;
  if (param_2 == 2) {
    lVar15 = 0x940;
  }
  lVar12 = 0x7e0;
  if (param_2 != 0) {
    lVar12 = lVar15;
  }
  lVar12 = lVar12 + *(longlong *)(param_1 + 0x2c8);
  iVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
  if (iVar10 == 1) {
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_110 = &local_e4;
    local_b4 = *param_4;
    local_c8 = *(undefined8 *)((longlong)param_4 + 0xc);
    local_c0 = *(float *)(param_4 + 1);
    local_bc = 0;
    local_ac = *(float *)((longlong)param_4 + 0x1c);
    fStack_a8 = *(float *)(param_4 + 4);
    fStack_a4 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = *(float *)(param_4 + 5);
    local_9c = *(undefined8 *)((longlong)param_4 + 0x2c);
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_118 = 0;
    FUN_140239bd2(param_6,param_7,&local_c8,lVar12);
  }
  else {
    uVar7 = *param_4;
    fVar20 = (float)(uVar7 >> 0x20) * 0.5;
    fVar19 = (float)uVar7 * 0.5;
    fVar18 = fVar20 - fVar19;
    fVar17 = fVar19 - fVar20;
    pfVar11 = (float *)(lVar12 + 8);
    cVar6 = *(char *)(lVar12 + 0x18);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar11 = (float *)FUN_1400c06fe(pfVar11);
      }
      else if (cVar6 == '\x03') {
        pfVar11 = param_8 + 8;
      }
      else {
        pfVar11 = param_8 + 4;
      }
    }
    local_d8 = pfVar11[3] * param_8[3];
    local_dc = pfVar11[2] * param_8[2];
    local_e0 = pfVar11[1] * param_8[1];
    local_e4 = *pfVar11 * *param_8;
    local_f8 = &local_e4;
    local_108 = &local_d4;
    local_cc = 1;
    local_c0 = *(float *)(param_4 + 1);
    fVar2 = *(float *)((longlong)param_4 + 0x1c);
    local_c8 = CONCAT44(fVar18 * local_c0 + *(float *)(param_4 + 2),
                        fVar17 * local_c0 + *(float *)((longlong)param_4 + 0xc));
    local_b4 = uVar7 << 0x20 | uVar7 >> 0x20;
    fVar3 = *(float *)(param_4 + 4);
    fVar4 = *(float *)(param_4 + 5);
    fVar5 = *(float *)((longlong)param_4 + 0x24);
    fStack_a0 = fVar3 * 0.0 + fVar4;
    fStack_a4 = fVar2 * 0.0 + fVar5;
    fStack_a8 = fVar4 * 0.0 + fVar3;
    local_ac = fVar5 * 0.0 + fVar2;
    local_bc = 0;
    local_9c = CONCAT44(fVar17 * fVar3 + fVar18 * fVar4 + *(float *)(param_4 + 6),
                        fVar17 * fVar2 + fVar18 * fVar5 + *(float *)((longlong)param_4 + 0x2c));
    local_94 = local_94 & 0xfc | *(char *)((longlong)param_4 + 0x34) * '\x02' & 2U;
    local_100 = 0;
    local_110 = (float *)CONCAT44(local_110._4_4_,0xbfc90fdb);
    local_118 = 0;
    local_d4 = fVar20;
    local_d0 = fVar19;
    FUN_14695471e(param_6,param_7,&local_c8,lVar12);
  }
  if (!bVar8) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_7 + 1;
}



// FUNCTION 14771d8ae FUN_14771d8ae body=216 status=ok
// SIG undefined FUN_14771d8ae(void)

void FUN_14771d8ae(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x368) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar3 = *(longlong **)(param_1 + 0x370);
  if (plVar3 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x370);
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x370) = plVar2;
  }
  *(undefined8 *)(param_1 + 0x360) = 0;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1456f28da(param_1 + 8,&local_30);
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771d988 FUN_14771d988 body=802 status=ok
// SIG undefined FUN_14771d988(void)

longlong FUN_14771d988(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_88 [47];
  char local_59;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar13 = (longlong *)param_1[0x56];
  bVar3 = true;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar8 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14771d9e2;
      }
      LOCK();
      iVar9 = (int)plVar13[1];
      bVar15 = iVar8 == iVar9;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
      UNLOCK();
    } while (!bVar15);
    plVar14 = (longlong *)param_1[0x55];
    bVar3 = false;
  }
LAB_14771d9e2:
  (**(code **)(*plVar14 + 0xe8))(plVar14,&local_58);
  cVar4 = (**(code **)(*local_58 + 0x198))();
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_50 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))(local_50);
      }
    }
  }
  cVar5 = (**(code **)(*plVar14 + 0x68))(plVar14,(int)param_1[0x57]);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab76a8) && (FUN_144b3d300(&DAT_14cab76a8), DAT_14cab76a8 == -1)) {
    FUN_1446ddc76(&DAT_14cab76a0,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_14cab76a8);
  }
  plVar10 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = DAT_14c96b350;
  }
  lVar12 = 0;
  (**(code **)(*plVar10 + 0x50))(plVar10,DAT_14cab76a0,0,0);
  lVar11 = (**(code **)(*plVar14 + 0x48))(plVar14,param_1);
  if (lVar11 == 0) goto LAB_14771dba7;
  local_59 = cVar4;
  cVar4 = (**(code **)(*plVar14 + 0x10))(plVar14,lVar11);
  cVar6 = (**(code **)(*plVar14 + 0x20))(plVar14,lVar11);
  iVar8 = (**(code **)(*param_1 + 0x78))(param_1);
  uVar2 = *(uint *)(param_1 + 0x57);
  if (cVar4 == '\0') {
    if (cVar6 == '\0') goto LAB_14771db51;
    lVar12 = param_1[0x59];
    if (local_59 == '\0') {
      if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0xaa0;
        goto LAB_14771dba7;
      }
    }
    else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
      lVar12 = lVar12 + 0x9f0;
      goto LAB_14771dba7;
    }
    if ((uVar2 & 1) != 0) goto LAB_14771dba0;
  }
  else {
    if (*(char *)((longlong)param_1 + 700) == '\x01') {
      lVar12 = param_1[0x59];
      if (local_59 == '\0') {
        if (*(char *)((longlong)param_1 + 0x43) == '\0') {
          lVar12 = lVar12 + 0x2d0;
        }
        else {
          lVar12 = lVar12 + 0x220;
        }
      }
      else if (*(char *)((longlong)param_1 + 0x43) == '\0') {
        lVar12 = lVar12 + 0x170;
      }
      else {
        lVar12 = lVar12 + 0xc0;
      }
      goto LAB_14771dba7;
    }
LAB_14771db51:
    if (((cVar5 != '\0') && (*(char *)(param_1[0x59] + 0x380) == '\x01')) &&
       (iVar9 = (**(code **)(*param_1 + 0x38))(param_1), iVar9 == 0)) {
      if (*(char *)((longlong)param_1 + 0x43) == '\x01') {
        lVar12 = param_1[0x59] + 0x440;
      }
      else {
        lVar12 = param_1[0x59] + 0x390;
      }
      goto LAB_14771dba7;
    }
    bVar7 = iVar8 != 0 & *(byte *)((longlong)param_1 + 0x43);
    lVar12 = param_1[0x59];
    if ((uVar2 & 1) != 0) {
      if (bVar7 == 0) {
        lVar12 = lVar12 + 0x700;
        goto LAB_14771dba7;
      }
LAB_14771dba0:
      lVar12 = lVar12 + 0x650;
      goto LAB_14771dba7;
    }
    if (bVar7 == 0) {
      lVar12 = lVar12 + 0x5a0;
      goto LAB_14771dba7;
    }
  }
  lVar12 = lVar12 + 0x4f0;
LAB_14771dba7:
  if (!bVar3) {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar12;
}



// FUNCTION 14771dcac FUN_14771dcac body=45 status=ok
// SIG undefined FUN_14771dcac(void)

longlong FUN_14771dcac(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14771fda2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14771dcda FUN_14771dcda body=341 status=ok
// SIG undefined FUN_14771dcda(void)

undefined1 * FUN_14771dcda(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  lVar2 = *(longlong *)(param_4 + 0x40);
  plVar9 = *(longlong **)(param_4 + 0x50);
  lVar4 = DAT_14c966e98;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    lVar4 = DAT_14c966e98;
    UNLOCK();
    LOCK();
    plVar10 = plVar9 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (lVar2 == lVar4) {
    plVar9 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = true;
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
      plVar10 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      plVar10 = (longlong *)0x0;
      do {
        if (iVar7 == 0) {
          plVar9 = (longlong *)0x0;
          goto LAB_14771dd7f;
        }
        LOCK();
        iVar5 = (int)plVar9[1];
        bVar11 = iVar7 == iVar5;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar11);
      plVar10 = *(longlong **)(param_1 + 0x2a0);
      bVar3 = false;
    }
LAB_14771dd7f:
    uVar8 = (**(code **)(*plVar10 + 0x48))(plVar10,param_1 + -8);
    cVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar8);
    if (cVar6 != '\0') {
      (**(code **)(*plVar10 + 0x40))(plVar10);
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar3) {
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    if (cVar6 != '\0') {
      return param_2;
    }
  }
  FUN_14771f6b8(param_1,param_2);
  return param_2;
}



// FUNCTION 14771de30 FUN_14771de30 body=1827 status=ok
// SIG undefined FUN_14771de30(void)

undefined1 * FUN_14771de30(longlong param_1,undefined1 *param_2,float *param_3,longlong param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_178 [36];
  undefined4 local_154;
  undefined1 *local_150;
  longlong *local_148;
  float *local_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_118;
  undefined1 local_110 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_88;
  undefined1 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar16 = *(longlong **)(param_1 + 0x2a8);
  local_150 = param_2;
  local_140 = param_3;
  if (plVar16 == (longlong *)0x0) {
    local_154 = (undefined4)CONCAT71((int7)(local_80 >> 8),1);
LAB_14771def7:
    plVar13 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    plVar16 = (longlong *)0x0;
  }
  else {
    uVar10 = (ulonglong)*(uint *)(plVar16 + 1);
    do {
      uVar8 = (uint)uVar10;
      if (uVar8 == 0) {
        local_154 = (undefined4)CONCAT71((int7)(uVar10 >> 8),1);
        goto LAB_14771def7;
      }
      LOCK();
      uVar3 = *(uint *)(plVar16 + 1);
      if (uVar8 == uVar3) {
        *(uint *)(plVar16 + 1) = uVar8 + 1;
      }
      else {
        uVar10 = (ulonglong)uVar3;
      }
      UNLOCK();
    } while (uVar8 != uVar3);
    plVar15 = *(longlong **)(param_1 + 0x2a0);
    plVar13 = plVar15 + -0x9b;
    if (plVar15 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar16 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      local_154 = 0;
    }
    else {
      local_154 = 0;
    }
  }
  local_148 = (longlong *)(param_1 + -8);
  lVar11 = *(longlong *)(param_4 + 0x40);
  plVar4 = *(longlong **)(param_4 + 0x50);
  if (plVar4 == (longlong *)0x0) {
    if (lVar11 == DAT_14c966e98) goto LAB_14771df69;
LAB_14771e1e2:
    puVar14 = local_150;
    if ((lVar11 != DAT_14c966fa0) || (cVar6 = FUN_146af41be(plVar13), cVar6 != '\0'))
    goto LAB_14771e2e8;
LAB_14771e266:
    iVar9 = (**(code **)(*local_148 + 0x78))();
    if ((2 < iVar9 - 1U) ||
       (puVar12 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15),
       puVar12 == (undefined8 *)0x0)) goto LAB_14771e2e8;
    cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar12);
    if (cVar6 == '\0') {
      (**(code **)(*plVar15 + 0x30))(plVar15);
      (**(code **)(*plVar15 + 0x28))(plVar15,*puVar12,1,1);
      (**(code **)(*plVar15 + 0x40))(plVar15,2);
    }
    (**(code **)(*plVar15 + 0xa0))(plVar15,*puVar12,param_4);
    *puVar14 = 1;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    lVar5 = DAT_14c966e98;
    UNLOCK();
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
    puVar14 = local_150;
    if (lVar11 != lVar5) {
      lVar11 = *(longlong *)(param_4 + 0x40);
      plVar4 = *(longlong **)(param_4 + 0x50);
      if (plVar4 == (longlong *)0x0) goto LAB_14771e1e2;
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar11 == DAT_14c966fa0) {
        cVar6 = FUN_146af41be(plVar13);
        puVar14 = local_150;
        LOCK();
        plVar13 = plVar4 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
        if (cVar6 == '\0') goto LAB_14771e266;
      }
      else {
        LOCK();
        plVar13 = plVar4 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      goto LAB_14771e2e8;
    }
LAB_14771df69:
    local_138 = local_138 & 0xffffffffffffff00;
    local_118 = 0;
    local_130 = 0;
    uStack_128 = 0;
    memset(local_110,0,0x88);
    puVar14 = local_150;
    local_88 = 0x20702;
    local_100 = 0;
    uStack_f8 = 0;
    local_84 = 1;
    FUN_1403d4c6e(local_150);
    FUN_14493db24(&local_138);
    if (*(char *)(param_1 + 0x370) == '\x01') {
      local_138 = CONCAT71(local_138._1_7_,1);
      local_118 = 0;
      local_130 = 0;
      uStack_128 = 0;
      memset(local_110,0,0x88);
      puVar14 = local_150;
      local_88 = 0x20702;
      local_100 = 0;
      uStack_f8 = 0;
      local_84 = 1;
      FUN_1402c17c2(local_150,&local_138);
      FUN_14493db24(&local_138);
    }
    fVar18 = local_140[8] * 0.0;
    fVar19 = local_140[7] * 0.0;
    fVar17 = local_140[10] * 0.0;
    fVar20 = local_140[9] * 0.0;
    local_138 = CONCAT44(fVar17 + fVar18 + local_140[0xc],fVar20 + fVar19 + local_140[0xb]);
    local_130 = CONCAT44(*local_140 * local_140[8] + fVar17,*local_140 * local_140[7] + fVar20);
    uStack_128 = CONCAT44(local_140[10] * local_140[1] + fVar18,local_140[1] * local_140[9] + fVar19
                         );
    cVar6 = FUN_1402b2a42();
    cVar7 = FUN_140591fd6(param_1);
    if (cVar7 != '\0') {
      if ((cVar6 != '\0') && (*(char *)(param_1 + 0x371) == '\0')) {
        iVar9 = (**(code **)(*local_148 + 0x78))();
        if (iVar9 == 3) {
          if ((((*(char *)(param_1 + 0x370) == '\0') && ((*(byte *)(param_4 + 8) & 0xf) == 0)) &&
              (puVar12 = (undefined8 *)(**(code **)(*plVar15 + 0x48))(plVar15,local_148),
              puVar12 != (undefined8 *)0x0)) &&
             ((cVar6 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar12), cVar6 != '\0' &&
              (iVar9 = (**(code **)(*plVar15 + 0x70))(plVar15), 1 < iVar9)))) {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            (**(code **)(*plVar15 + 0x28))(plVar15,*puVar12,1,1);
            (**(code **)(*plVar15 + 0x40))(plVar15);
            local_138 = CONCAT71(local_138._1_7_,1);
            local_118 = 0;
            local_130 = 0;
            uStack_128 = 0;
            memset(local_110,0,0x88);
            goto LAB_14771e46c;
          }
        }
        else if (iVar9 == 2) {
          if (*(char *)(param_1 + 0x370) == '\0') {
            (**(code **)(*plVar15 + 0x30))(plVar15);
            (**(code **)(*plVar15 + 0x40))(plVar15);
          }
          local_138 = CONCAT71(local_138._1_7_,1);
          local_118 = 0;
          local_130 = 0;
          uStack_128 = 0;
          memset(local_110,0,0x88);
LAB_14771e46c:
          puVar14 = local_150;
          local_84 = 1;
          local_88 = 0x20702;
          uStack_f8 = 0;
          local_100 = 0;
          FUN_1402c17c2(local_150,&local_138);
          FUN_14493db24(&local_138);
        }
      }
      lVar11 = (**(code **)(*plVar15 + 0x48))(plVar15,local_148);
      if ((lVar11 != 0) && (cVar6 = (**(code **)(*plVar15 + 0xa8))(plVar15), cVar6 != '\0')) {
        local_138 = CONCAT71(local_138._1_7_,1);
        local_118 = 0;
        local_130 = 0;
        uStack_128 = 0;
        memset(local_110,0,0x88);
        puVar14 = local_150;
        local_88 = 0x20702;
        local_100 = 0;
        uStack_f8 = 0;
        local_84 = 1;
        FUN_1402c17c2(local_150,&local_138);
        FUN_14493db24(&local_138);
      }
      if (((*(char *)(param_1 + 0x370) == '\x01') && (*(char *)(param_1 + 0x371) == '\0')) &&
         (*(int *)(param_1 + 0x2b8) == 0)) {
        (**(code **)(*plVar15 + 0x40))(plVar15,2);
      }
      goto LAB_14771e31a;
    }
    FUN_14493db24(puVar14);
LAB_14771e2e8:
    *puVar14 = 0;
  }
  puVar14[0x20] = 0;
  *(undefined8 *)(puVar14 + 8) = 0;
  *(undefined8 *)(puVar14 + 0x10) = 0;
  memset(puVar14 + 0x28,0,0x88);
  *(undefined4 *)(puVar14 + 0xb0) = 0x20702;
  puVar14[0xb4] = 0;
LAB_14771e31a:
  if ((char)local_154 == '\0') {
    LOCK();
    plVar13 = plVar16 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    plVar13 = plVar16 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar14;
}



// FUNCTION 14771e554 FUN_14771e554 body=361 status=ok
// SIG undefined FUN_14771e554(void)

undefined1 * FUN_14771e554(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar7 = *(longlong *)(param_4 + 0x40);
  plVar8 = *(longlong **)(param_4 + 0x50);
  lVar3 = DAT_14c966e98;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    lVar3 = DAT_14c966e98;
    UNLOCK();
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
  if (lVar7 == lVar3) {
    plVar8 = *(longlong **)(param_1 + 0x2a8);
    bVar2 = true;
    if (plVar8 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar8[1];
      plVar9 = (longlong *)0x0;
      do {
        if (iVar6 == 0) {
          plVar8 = (longlong *)0x0;
          goto LAB_14771e5ed;
        }
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      plVar9 = *(longlong **)(param_1 + 0x2a0);
      bVar2 = false;
    }
LAB_14771e5ed:
    lVar7 = (**(code **)(*plVar9 + 0x48))(plVar9);
    if (lVar7 != 0) {
      cVar5 = (**(code **)(*plVar9 + 0xb0))(plVar9);
      if (cVar5 == '\0') {
        (**(code **)(*(longlong *)(param_1 + -8) + 0x28))((longlong *)(param_1 + -8));
      }
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
    }
    if (!bVar2) {
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
    if (lVar7 != 0) {
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  return param_2;
}



// FUNCTION 14771e6be FUN_14771e6be body=637 status=ok
// SIG undefined FUN_14771e6be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_14771e6be(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x372) == '\x01') {
    *(undefined1 *)(param_1 + 0x372) = 0;
    local_e8[0] = 1;
    local_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    memset(local_c0,0,0x88);
    local_38 = 0x20702;
    plVar7 = *(longlong **)(param_1 + 0x2a8);
    if (plVar7 == (longlong *)0x0) {
LAB_14771e860:
      (**(code **)(_DAT_00000000 + 0xe8))(0,local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
    }
    else {
      iVar5 = (int)plVar7[1];
      do {
        if (iVar5 == 0) goto LAB_14771e860;
        LOCK();
        iVar3 = (int)plVar7[1];
        bVar8 = iVar5 == iVar3;
        if (bVar8) {
          *(int *)(plVar7 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar8);
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0xe8))
                (*(longlong **)(param_1 + 0x2a0),local_f8);
      uVar6 = FUN_140592a6e(local_e8,local_f8);
      FUN_1403d4c6e(param_2,uVar6);
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
    FUN_14493db24(local_e8);
  }
  else {
    cVar4 = FUN_140591fd6(param_1);
    if (((cVar4 != '\0') &&
        (*(undefined1 *)(param_1 + 0x371) = 1, *(char *)(param_1 + 0x370) == '\x01')) &&
       (*(int *)(param_1 + 0x2b8) == 0)) {
      plVar7 = *(longlong **)(param_1 + 0x2a8);
      if (plVar7 == (longlong *)0x0) {
LAB_14771e92a:
        (**(code **)(_DAT_00000000 + 0x40))(0);
      }
      else {
        iVar5 = (int)plVar7[1];
        do {
          if (iVar5 == 0) goto LAB_14771e92a;
          LOCK();
          iVar3 = (int)plVar7[1];
          bVar8 = iVar5 == iVar3;
          if (bVar8) {
            *(int *)(plVar7 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
        } while (!bVar8);
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x40))();
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
    }
    if (((*(int *)(param_1 + 800) != 0) && (*(longlong **)(param_1 + 0x318) != (longlong *)0x0)) &&
       (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x318) + 0x30))(), cVar4 != '\0')) {
      if (*(int *)(param_1 + 800) == 0) {
        plVar7 = (longlong *)0x0;
      }
      else {
        plVar7 = *(longlong **)(param_1 + 0x318);
      }
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
    }
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14771e942 FUN_14771e942 body=90 status=ok
// SIG undefined FUN_14771e942(void)

void FUN_14771e942(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  
  if ((*(int *)(param_1 + 0x330) != 0) && (*(longlong **)(param_1 + 0x328) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x328) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x330) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x328);
      }
                    /* WARNING: Could not recover jumptable at 0x00014771e98d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14771e99c FUN_14771e99c body=106 status=ok
// SIG undefined FUN_14771e99c(void)

void FUN_14771e99c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x314) == '\x01') {
    *(undefined1 *)(param_1 + 0x314) = 0;
  }
  if ((*(int *)(param_1 + 0x340) != 0) && (*(longlong **)(param_1 + 0x338) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x338) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x340) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x338);
      }
                    /* WARNING: Could not recover jumptable at 0x00014771e9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 14771ea06 FUN_14771ea06 body=1078 status=ok
// SIG undefined FUN_14771ea06(void)

undefined1 *
FUN_14771ea06(longlong param_1,undefined1 *param_2,undefined8 *param_3,longlong param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined8 uVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  byte *pbVar11;
  longlong *plVar12;
  byte *pbVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_1a8 [40];
  int local_180 [2];
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined3 uStack_118;
  undefined4 local_115;
  undefined1 uStack_111;
  undefined3 uStack_110;
  undefined4 uStack_10d;
  undefined4 uStack_109;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  byte local_e4 [4];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((*(int *)(param_1 + 0x2e8) == 0) || (*(longlong **)(param_1 + 0x2e0) == (longlong *)0x0)) ||
     (cVar9 = (**(code **)(**(longlong **)(param_1 + 0x2e0) + 0x30))(), cVar9 == '\0')) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_14771eae2;
  }
  plVar14 = *(longlong **)(param_1 + 0x2a8);
  bVar6 = true;
  if (plVar14 == (longlong *)0x0) {
    plVar14 = (longlong *)0x0;
    plVar12 = (longlong *)0x0;
  }
  else {
    iVar10 = (int)plVar14[1];
    plVar12 = (longlong *)0x0;
    do {
      if (iVar10 == 0) {
        plVar14 = (longlong *)0x0;
        goto LAB_14771eb80;
      }
      LOCK();
      iVar8 = (int)plVar14[1];
      bVar15 = iVar10 == iVar8;
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar15);
    plVar12 = *(longlong **)(param_1 + 0x2a0);
    bVar6 = false;
  }
LAB_14771eb80:
  fVar16 = *(float *)(param_4 + 0x20);
  fVar2 = *(float *)(param_4 + 0x24);
  fVar18 = *(float *)((longlong)param_3 + 0x1c);
  fVar17 = *(float *)(param_3 + 4);
  fVar3 = *(float *)((longlong)param_3 + 0x24);
  fVar19 = *(float *)(param_3 + 5);
  fVar20 = 1.0 / (fVar18 * fVar19 - fVar3 * fVar17);
  fVar4 = *(float *)(param_3 + 6);
  fVar5 = *(float *)((longlong)param_3 + 0x2c);
  iVar10 = (**(code **)(*plVar12 + 0xc0))();
  if (iVar10 == 0) {
    fVar18 = -fVar3 * fVar20;
    fVar19 = fVar19 * fVar20;
    fVar17 = -fVar5 * fVar19 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar19 + fVar18 * fVar2;
  }
  else {
    fVar18 = fVar18 * fVar20;
    fVar20 = -fVar17 * fVar20;
    fVar17 = -fVar5 * fVar20 - fVar4 * fVar18;
    fVar16 = fVar16 * fVar20 + fVar18 * fVar2;
  }
  fVar2 = (float)((ulonglong)*param_3 >> 0x20);
  if (iVar10 == 0) {
    fVar2 = (float)*param_3;
  }
  fVar18 = fVar2 * 0.25;
  if (10.0 <= fVar18) {
    fVar18 = 10.0;
  }
  if (fVar18 <= 3.0) {
    fVar18 = 3.0;
  }
  local_180[0] = 0;
  if (fVar18 <= fVar16 + fVar17) {
    local_180[0] = (fVar2 - fVar18 < fVar16 + fVar17) + 1;
  }
  local_170 = *(undefined8 *)(param_4 + 8);
  uStack_168 = *(undefined8 *)(param_4 + 0x10);
  local_160 = *(undefined8 *)(param_4 + 0x18);
  local_158 = *(undefined8 *)(param_4 + 0x20);
  uStack_150 = *(undefined8 *)(param_4 + 0x28);
  local_148 = *(undefined8 *)(param_4 + 0x30);
  uStack_140 = *(undefined8 *)(param_4 + 0x38);
  local_138 = *(undefined8 *)(param_4 + 0x40);
  local_130 = *(undefined8 *)(param_4 + 0x48);
  local_128 = *(longlong *)(param_4 + 0x50);
  if (local_128 != 0) {
    LOCK();
    *(int *)(local_128 + 8) = *(int *)(local_128 + 8) + 1;
    UNLOCK();
  }
  uStack_120 = *(undefined8 *)(param_4 + 0x58);
  uVar7 = *(undefined8 *)(param_4 + 0x60);
  uStack_10d = *(undefined4 *)(param_4 + 0x6b);
  uStack_109 = *(undefined4 *)(param_4 + 0x6f);
  uStack_118 = (undefined3)uVar7;
  local_115 = (undefined4)((ulonglong)uVar7 >> 0x18);
  uStack_110 = (undefined3)((uint)*(undefined4 *)(param_4 + 0x67) >> 8);
  uStack_111 = (undefined1)((ulonglong)uVar7 >> 0x38);
  local_178 = &PTR_FUN_149efe1e0;
  local_100 = *(undefined8 *)(param_4 + 0x78);
  local_f8 = *(longlong *)(param_4 + 0x80);
  if (local_f8 != 0) {
    LOCK();
    *(int *)(local_f8 + 8) = *(int *)(local_f8 + 8) + 1;
    UNLOCK();
  }
  local_f0 = param_1 + -8;
  FUN_14771feaa(local_180,&local_e8);
  pbVar11 = local_e4;
  if (&local_e8 == (undefined4 *)(param_1 + 0x310)) {
    if ((local_e4[0] & 1) != 0) goto LAB_14771edb7;
  }
  else {
    pbVar13 = (byte *)(param_1 + 0x314);
    if ((local_e4[0] & 1) == 0) {
      pbVar11 = pbVar13;
      if (*pbVar13 != 1) goto LAB_14771edba;
    }
    else {
      *(undefined4 *)(param_1 + 0x310) = local_e8;
      *pbVar13 = 1;
    }
LAB_14771edb7:
    *pbVar11 = 0;
  }
LAB_14771edba:
  FUN_1469ac82c(&local_178);
  *param_2 = 1;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (!bVar6) {
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
LAB_14771eae2:
  if ((local_e0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14771ee3e FUN_14771ee3e body=207 status=ok
// SIG undefined FUN_14771ee3e(void)

undefined8 FUN_14771ee3e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char local_e0 [184];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_1 + -8;
  local_f0 = param_3;
  local_e8 = param_4;
  FUN_14771ff70(&local_f8,local_e0);
  if (((local_e0[0] == '\0') && (*(int *)(param_1 + 0x350) != 0)) &&
     (*(longlong **)(param_1 + 0x348) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x348) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x350) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)(param_1 + 0x348);
      }
      (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_4);
      goto LAB_14771ee99;
    }
  }
  FUN_1403d4c6e(param_2,local_e0);
LAB_14771ee99:
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771ef0e FUN_14771ef0e body=394 status=ok
// SIG undefined FUN_14771ef0e(void)

undefined8 FUN_14771ef0e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *plStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined1 local_e0 [8];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0;
  undefined1 local_b8 [136];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)(param_1 + 0x372) = 1;
  local_e0[0] = 1;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  memset(local_b8,0,0x88);
  local_30 = 0x20702;
  local_f8 = (undefined4)DAT_14c966e98;
  uStack_f4 = DAT_14c966e98._4_4_;
  uStack_f0 = (undefined4)DAT_14c966ea0;
  uStack_ec = DAT_14c966ea0._4_4_;
  local_e8 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_14771efef:
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_14771efef;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
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
    local_108 = lVar8 + 8;
    if (lVar8 == 0) {
      local_108 = 0;
    }
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    bVar9 = false;
    plStack_100 = plVar4;
  }
  plVar4 = plStack_100;
  uVar7 = FUN_1407c9a0c(local_e0,&local_108,&local_f8);
  FUN_1403d4c6e(param_2,uVar7);
  plVar1 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_100 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if (!bVar9) {
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
  FUN_14493db24(local_e0);
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14771f09a FUN_14771f09a body=549 status=ok
// SIG undefined FUN_14771f09a(void)

undefined1 * FUN_14771f09a(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  if (*(char *)(param_1 + 0x372) != '\x01') goto LAB_14771f291;
  plVar1 = (longlong *)(param_1 + -8);
  *(undefined1 *)(param_1 + 0x372) = 0;
  plVar10 = *(longlong **)(param_1 + 0x2a8);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar10[1];
    plVar9 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_14771f141;
      }
      LOCK();
      iVar4 = (int)plVar10[1];
      bVar11 = iVar6 == iVar4;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar11);
    plVar9 = *(longlong **)(param_1 + 0x2a0);
    bVar3 = false;
  }
LAB_14771f141:
  puVar8 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,plVar1);
  if (puVar8 != (undefined8 *)0x0) {
    uVar7 = (**(code **)(*plVar1 + 0x78))(plVar1);
    if (uVar7 != 0) {
      cVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,puVar8);
      if (cVar5 == '\0') {
        if (uVar7 != 3) {
          (**(code **)(*plVar9 + 0x30))(plVar9);
        }
      }
      else if ((uVar7 & 0xfffffffe) != 2) goto LAB_14771f20d;
      (**(code **)(*plVar9 + 0x28))(plVar9,*puVar8,1,1);
      (**(code **)(*plVar9 + 0x40))(plVar9);
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
LAB_14771f20d:
    cVar5 = (**(code **)(*plVar9 + 0xa8))(plVar9);
    if (cVar5 != '\0') {
      local_f8[0] = 1;
      local_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      memset(local_d0,0,0x88);
      local_48 = 0x20702;
      local_44 = 0;
      FUN_1403d4924(param_2,local_f8);
      FUN_14493db24(local_f8);
    }
  }
  if (!bVar3) {
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
LAB_14771f291:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14771f2c0 FUN_14771f2c0 body=494 status=ok
// SIG undefined FUN_14771f2c0(void)

longlong * FUN_14771f2c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_14771f2fe:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar4 = (int)plVar2[1];
    do {
      if (iVar4 == 0) goto LAB_14771f2fe;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    local_48 = lVar8 + 8;
    if (lVar8 == 0) {
      local_48 = 0;
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_147720390(lVar5,&local_48);
  *param_2 = lVar5;
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ef0b50;
  plVar6[2] = lVar5;
  param_2[1] = (longlong)plVar6;
  if ((lVar5 == 0) ||
     (((*(longlong *)(lVar5 + 8) != 0 && (*(longlong *)(lVar5 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar5 + 0x10) + 8))))) goto LAB_14771f45b;
  if (plVar6 == (longlong *)0x0) {
    *(longlong *)(lVar5 + 8) = lVar5;
    plVar7 = *(longlong **)(lVar5 + 0x10);
    if (plVar7 == (longlong *)0x0) goto LAB_14771f45b;
LAB_14771f3a1:
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
    *(longlong **)(lVar5 + 0x10) = plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_14771f45b;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *(longlong *)(lVar5 + 8) = lVar5;
    if (*(longlong **)(lVar5 + 0x10) != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      plVar7 = *(longlong **)(lVar5 + 0x10);
      if (plVar7 != (longlong *)0x0) goto LAB_14771f3a1;
      *(longlong **)(lVar5 + 0x10) = plVar6;
    }
  }
  LOCK();
  plVar7 = plVar6 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_14771f45b:
  if (!bVar9) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14771f4b2 FUN_14771f4b2 body=173 status=ok
// SIG undefined FUN_14771f4b2(void)

void FUN_14771f4b2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  
  uVar1 = FUN_147720908(param_1 + -8,param_3,param_5,param_6,param_7);
  uVar1 = FUN_14023976a(param_1,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  FUN_147720b58(param_1 + -8,param_2,param_3,param_4,param_5,uVar1,param_7,param_8);
  return;
}



// FUNCTION 14771f560 FUN_14771f560 body=297 status=ok
// SIG undefined FUN_14771f560(void)

void FUN_14771f560(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x360) = *param_2;
  plVar2 = (longlong *)param_2[1];
  plVar6 = *(longlong **)(param_1 + 0x368);
  if (plVar6 != plVar2) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x368);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x368) = plVar2;
  }
  lVar3 = *(longlong *)(param_1 + 0x358);
  if (lVar3 == 0) {
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1456f28da(param_1,&local_30);
  }
  else {
    FUN_14149270a(lVar3);
    uVar4 = *param_2;
    lVar5 = param_2[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar2 = *(longlong **)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x10) = uVar4;
    *(longlong *)(lVar3 + 0x18) = lVar5;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    FUN_140a5503c(lVar3);
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771f68a FUN_14771f68a body=45 status=ok
// SIG undefined FUN_14771f68a(void)

longlong FUN_14771f68a(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14771fda2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14771f6b8 FUN_14771f6b8 body=1173 status=ok
// SIG undefined FUN_14771f6b8(void)

undefined1 * FUN_14771f6b8(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 unaff_RBP;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_178 [36];
  undefined4 local_154;
  longlong local_150;
  longlong local_148;
  longlong *plStack_140;
  undefined1 local_138 [16];
  longlong local_128;
  longlong *plStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined1 local_100 [8];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e0;
  undefined1 local_d8 [136];
  undefined4 local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar13 = *(longlong **)(param_1 + 0x2a8);
  uVar12 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar13[1];
    plVar14 = (longlong *)0x0;
    do {
      if (iVar6 == 0) {
        plVar13 = (longlong *)0x0;
        goto LAB_14771f71a;
      }
      LOCK();
      iVar5 = (int)plVar13[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar13 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    plVar14 = *(longlong **)(param_1 + 0x2a0);
    uVar12 = 0;
  }
LAB_14771f71a:
  *(undefined2 *)(param_1 + 0x370) = 0;
  lVar10 = *(longlong *)(param_4 + 0x40);
  plVar3 = *(longlong **)(param_4 + 0x50);
  local_150 = param_4;
  if (plVar3 == (longlong *)0x0) {
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar4 = CONCAT44(DAT_14c966e98._4_4_,(undefined4)DAT_14c966e98);
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
  if (((lVar10 != lVar4) ||
      (iVar6 = (**(code **)(*(longlong *)(param_1 + -8) + 0x78))((longlong *)(param_1 + -8)),
      iVar6 == 0)) ||
     (puVar8 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14), puVar8 == (undefined8 *)0x0))
  {
    cVar11 = (char)uVar12;
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
    goto LAB_14771f970;
  }
  local_154 = uVar12;
  uVar7 = (**(code **)(*plVar14 + 0x10))(plVar14);
  if (iVar6 == 3) {
    if ((*(ushort *)(local_150 + 8) & 3) == 0) {
      if ((*(ushort *)(local_150 + 8) & 0xc) == 0) goto LAB_14771f819;
      (**(code **)(*plVar14 + 0x28))(plVar14,*puVar8,uVar7 ^ 1,1);
    }
    else {
      (**(code **)(*plVar14 + 0x38))(plVar14);
    }
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
LAB_14771f819:
  if ((((char)uVar7 == '\0') || (*(char *)(param_1 + 0x373) != '\0')) &&
     (*(char *)(param_1 + 0x370) == '\0')) {
    (**(code **)(*plVar14 + 0x30))(plVar14);
    (**(code **)(*plVar14 + 0x28))(plVar14,*puVar8,1,1);
    *(undefined1 *)(param_1 + 0x370) = 1;
    if (*(int *)(param_1 + 0x2b8) == 1) {
      (**(code **)(*plVar14 + 0x40))(plVar14);
    }
  }
  local_100[0] = 1;
  local_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  memset(local_d8,0,0x88);
  local_50 = 0x20702;
  local_4c = 0;
  local_118 = (undefined4)DAT_14c966e98;
  uStack_114 = DAT_14c966e98._4_4_;
  uStack_110 = (undefined4)DAT_14c966ea0;
  uStack_10c = DAT_14c966ea0._4_4_;
  local_108 = DAT_14c966ea8;
  if (DAT_14c966ea8 != 0) {
    LOCK();
    *(int *)(DAT_14c966ea8 + 8) = *(int *)(DAT_14c966ea8 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_14771f9ca:
    local_128 = 0;
    plStack_120 = (longlong *)0x0;
    bVar15 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14771f9ca;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
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
    local_128 = lVar10 + 8;
    if (lVar10 == 0) {
      local_128 = 0;
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar15 = false;
    plStack_120 = plVar3;
  }
  plVar3 = plStack_120;
  uVar9 = FUN_1407c9a0c(local_100,&local_128,&local_118);
  (**(code **)(*plVar14 + 0xe8))(plVar14,local_138);
  uVar9 = FUN_140592b68(uVar9,local_138,0,0);
  plVar14 = *(longlong **)(param_1 + 0x10);
  if (plVar14 == (longlong *)0x0) {
LAB_14771fa84:
    local_148 = 0;
    plStack_140 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_14771fa84;
      LOCK();
      iVar5 = (int)plVar14[1];
      bVar16 = iVar6 == iVar5;
      if (bVar16) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar16);
    lVar10 = *(longlong *)(param_1 + 8) + -8;
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar10 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    local_148 = lVar10 + 8;
    if (lVar10 == 0) {
      local_148 = 0;
    }
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    bVar16 = false;
    plStack_140 = plVar14;
  }
  plVar14 = plStack_140;
  uVar9 = FUN_140592a6e(uVar9,&local_148);
  FUN_1403d4c6e(param_2,uVar9);
  if (!bVar16) {
    LOCK();
    plVar1 = plVar14 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  plVar14 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_120 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if (!bVar15) {
    LOCK();
    plVar14 = plVar3 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  FUN_14493db24(local_100);
  cVar11 = (char)local_154;
LAB_14771f970:
  if (cVar11 == '\0') {
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14771fb4e FUN_14771fb4e body=119 status=ok
// SIG undefined FUN_14771fb4e(void)

longlong * FUN_14771fb4e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1,param_3);
  FUN_14771fd1a(param_1[2],*param_1,param_3);
  plVar1 = (longlong *)*param_1;
  bVar4 = *(byte *)(plVar1 + 6);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*plVar1 + 0x220))(plVar1);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(plVar1 + 6);
  }
  *(byte *)(plVar1 + 6) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x31) = *(byte *)(*param_1 + 0x31) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 14771fbc6 FUN_14771fbc6 body=338 status=ok
// SIG undefined FUN_14771fbc6(void)

longlong * FUN_14771fbc6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar4 = (longlong *)FUN_14001cc68(0x2d8,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149f0e410;
  plVar1 = plVar4 + 2;
  FUN_146aec4be(plVar1);
  local_38 = plVar1;
  local_30 = plVar4;
  FUN_146a2ba86(&local_38,plVar1);
  plVar1 = local_30;
  if (local_30 == (longlong *)0x0) {
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_14771fca9;
    param_1[1] = 0;
LAB_14771fc73:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_14771fca9;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    *param_1 = (longlong)local_38;
    plVar4 = (longlong *)param_1[1];
    if (local_30 != plVar4) {
      param_1[1] = (longlong)local_30;
      if (plVar4 == (longlong *)0x0) goto LAB_14771fca9;
      goto LAB_14771fc73;
    }
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_14771fca9;
    (**(code **)*local_30)(local_30);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_14771fca9:
  plVar1 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_30 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_48 = 0x2c8;
  FUN_140a52e78(*param_1,"SExpanderArrow","Runtime\\Slate\\Public\\Widgets/Views/STableRow.h",0xca);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771fd1a FUN_14771fd1a body=134 status=ok
// SIG undefined FUN_14771fd1a(void)

void FUN_14771fd1a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)*param_1;
  local_18 = (longlong *)((undefined8 *)*param_1)[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_146aec5c0(param_2,param_3,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14771fda2 FUN_14771fda2 body=263 status=ok
// SIG undefined FUN_14771fda2(void)

void FUN_14771fda2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a50a810;
  param_1[1] = &PTR_FUN_14a50a8b0;
  plVar3 = (longlong *)param_1[0x6e];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1449db362(param_1 + 0x6a);
  FUN_1449db362(param_1 + 0x68);
  FUN_1449db362(param_1 + 0x66);
  FUN_1449db362(param_1 + 100);
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x31c) = 0;
  }
  FUN_1449db362(param_1 + 0x61);
  FUN_1449db362(param_1 + 0x5f);
  FUN_1449db362(param_1 + 0x5d);
  plVar3 = (longlong *)param_1[0x5c];
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
  plVar3 = (longlong *)param_1[0x56];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  param_1[1] = &PTR_FUN_149eeeb00;
  FUN_140cc7538(param_1 + 0x40);
  FUN_140c057ec(param_1 + 1);
  return;
}



// FUNCTION 14771feaa FUN_14771feaa body=197 status=ok
// SIG undefined FUN_14771feaa(void)

longlong FUN_14771feaa(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x24);
  plVar8 = *(longlong **)(lVar2 + 0x2b0);
  bVar3 = true;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    plVar7 = (longlong *)0x0;
    do {
      if (iVar5 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_14771fef6;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar7 = *(longlong **)(lVar2 + 0x2a8);
    bVar3 = false;
  }
LAB_14771fef6:
  puVar6 = (undefined8 *)(**(code **)(*plVar7 + 0x48))(plVar7,lVar2);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined1 *)(param_2 + 4) = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x2f0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(lVar2 + 0x2e8);
    }
    (**(code **)(*plVar7 + 0x58))(plVar7,param_2,param_1 + 2,*param_1,*puVar6);
  }
  if (!bVar3) {
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
  }
  return param_2;
}



// FUNCTION 14771ff70 FUN_14771ff70 body=1055 status=ok
// SIG undefined FUN_14771ff70(void)

undefined1 * FUN_14771ff70(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  longlong *plVar13;
  longlong *plVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  uint local_1b4;
  int local_1b0;
  byte local_1ac;
  char local_1a8 [184];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar5 = *param_1;
  if (((*(int *)(lVar5 + 0x300) != 0) && (*(longlong **)(lVar5 + 0x2f8) != (longlong *)0x0)) &&
     (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2f8) + 0x30))(), cVar8 != '\0')) {
    plVar13 = *(longlong **)(lVar5 + 0x2b0);
    uVar12 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (plVar13 == (longlong *)0x0) {
      plVar13 = (longlong *)0x0;
      plVar14 = (longlong *)0x0;
    }
    else {
      iVar9 = (int)plVar13[1];
      plVar14 = (longlong *)0x0;
      do {
        if (iVar9 == 0) {
          plVar13 = (longlong *)0x0;
          goto LAB_147720059;
        }
        LOCK();
        iVar7 = (int)plVar13[1];
        bVar15 = iVar9 == iVar7;
        if (bVar15) {
          *(int *)(plVar13 + 1) = iVar9 + 1;
          iVar7 = iVar9;
        }
        iVar9 = iVar7;
        UNLOCK();
      } while (!bVar15);
      plVar14 = *(longlong **)(lVar5 + 0x2a8);
      uVar12 = 0;
    }
LAB_147720059:
    if (*(char *)(lVar5 + 0x31c) == '\x01') {
      *(undefined1 *)(lVar5 + 0x31c) = 0;
    }
    puVar10 = (undefined8 *)(**(code **)(*plVar14 + 0x48))(plVar14);
    bVar15 = true;
    if (puVar10 != (undefined8 *)0x0) {
      lVar6 = param_1[1];
      fVar17 = *(float *)(param_1[2] + 0x20);
      fVar16 = *(float *)(param_1[2] + 0x24);
      fVar19 = *(float *)(lVar6 + 0x1c);
      fVar18 = *(float *)(lVar6 + 0x20);
      fVar2 = *(float *)(lVar6 + 0x24);
      fVar20 = *(float *)(lVar6 + 0x28);
      fVar21 = 1.0 / (fVar19 * fVar20 - fVar2 * fVar18);
      fVar3 = *(float *)(lVar6 + 0x30);
      fVar4 = *(float *)(lVar6 + 0x2c);
      iVar9 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      local_1b4 = (uint)uVar12;
      if (iVar9 == 0) {
        fVar19 = -fVar2 * fVar21;
        fVar20 = fVar20 * fVar21;
        fVar18 = -fVar4 * fVar20 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar20 + fVar19 * fVar16;
      }
      else {
        fVar19 = fVar19 * fVar21;
        fVar21 = -fVar18 * fVar21;
        fVar18 = -fVar4 * fVar21 - fVar3 * fVar19;
        fVar17 = fVar17 * fVar21 + fVar19 * fVar16;
      }
      uVar12 = *(ulonglong *)param_1[1] >> 0x20;
      if (iVar9 == 0) {
        uVar12 = *(ulonglong *)param_1[1];
      }
      fVar16 = (float)uVar12 * 0.25;
      if (10.0 <= fVar16) {
        fVar16 = 10.0;
      }
      if (fVar16 <= 3.0) {
        fVar16 = 3.0;
      }
      iVar9 = 0;
      if (fVar16 <= fVar17 + fVar18) {
        iVar9 = ((float)uVar12 - fVar16 < fVar17 + fVar18) + 1;
      }
      if (((*(int *)(lVar5 + 0x2f0) == 0) || (*(longlong **)(lVar5 + 0x2e8) == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(**(longlong **)(lVar5 + 0x2e8) + 0x30))(), cVar8 == '\0')) {
        local_1ac = 1;
        local_1b0 = iVar9;
      }
      else {
        local_1c8 = *puVar10;
        if (*(int *)(lVar5 + 0x2f0) == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = *(longlong **)(lVar5 + 0x2e8);
        }
        (**(code **)(*plVar11 + 0x58))(plVar11,&local_1b0,param_1[2],iVar9);
        if ((local_1ac & 1) == 0) {
          uVar12 = (ulonglong)local_1b4;
          goto LAB_147720297;
        }
      }
      local_1c8 = *puVar10;
      if (*(int *)(lVar5 + 0x300) == 0) {
        plVar11 = (longlong *)0x0;
      }
      else {
        plVar11 = *(longlong **)(lVar5 + 0x2f8);
      }
      (**(code **)(*plVar11 + 0x58))(plVar11,local_1a8,param_1[2],local_1b0);
      if ((local_1a8[0] == '\x01') && (local_1b0 == 1)) {
        (**(code **)(*plVar14 + 0x50))(plVar14,*puVar10,1);
      }
      FUN_1428fd920(param_2);
      FUN_14493db24(local_1a8);
      uVar12 = (ulonglong)local_1b4;
      if (local_1ac == 1) {
        local_1ac = 0;
      }
      bVar15 = false;
    }
LAB_147720297:
    if ((char)uVar12 == '\0') {
      LOCK();
      plVar14 = plVar13 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    if (!bVar15) goto LAB_1477202f0;
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1477202f0:
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147720390 FUN_147720390 body=143 status=ok
// SIG undefined FUN_147720390(void)

undefined8 * FUN_147720390(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,0xd);
  *param_1 = &PTR_FUN_14a50ab00;
  param_1[0xd] = &PTR_FUN_14a50abf0;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147720420 FUN_147720420 body=38 status=ok
// SIG undefined FUN_147720420(void)

undefined8 FUN_147720420(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772044c FUN_14772044c body=482 status=ok
// SIG undefined FUN_14772044c(void)

void FUN_14772044c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar8 = *(longlong **)(param_1 + -0x48), plVar8 != (longlong *)0x0)) && (0 < (int)plVar8[1])
     ) {
    lVar7 = 0;
    iVar4 = (int)plVar8[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar8 = (longlong *)0x0;
        goto LAB_1477204d7;
      }
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar3 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar11);
    lVar7 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar7 = 0;
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
LAB_1477204d7:
    if (((*(longlong *)(lVar7 + 0x2a8) != 0) &&
        (plVar10 = *(longlong **)(lVar7 + 0x2b0), plVar10 != (longlong *)0x0)) &&
       (0 < (int)plVar10[1])) {
      plVar9 = (longlong *)0x0;
      iVar4 = (int)plVar10[1];
      do {
        iVar5 = iVar4;
        if (iVar5 == 0) {
          plVar10 = (longlong *)0x0;
          goto LAB_147720529;
        }
        LOCK();
        iVar4 = (int)plVar10[1];
        bVar11 = iVar5 == iVar4;
        if (bVar11) {
          *(int *)(plVar10 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        UNLOCK();
      } while (!bVar11);
      plVar9 = *(longlong **)(lVar7 + 0x2a8);
LAB_147720529:
      (**(code **)(*plVar9 + 0xe8))(plVar9,&local_50);
      (**(code **)(*local_50 + 0x198))();
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_48 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar9 + 0x48))(plVar9,lVar7);
      if (puVar6 != (undefined8 *)0x0) {
        (**(code **)(*plVar9 + 0x10))(plVar9,puVar6);
        (**(code **)(*plVar9 + 0x30))(plVar9);
        (**(code **)(*plVar9 + 0x28))(plVar9,*puVar6,1,1);
        (**(code **)(*plVar9 + 0x40))(plVar9,3);
      }
      if (iVar5 != 0) {
        LOCK();
        plVar9 = plVar10 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    }
    if (iVar3 != 0) {
      LOCK();
      plVar10 = plVar8 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147720634 FUN_147720634 body=166 status=ok
// SIG undefined FUN_147720634(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_147720634(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar3 = *(longlong **)(param_1 + -0x48), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
     ) {
    uVar7 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001477206d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (**(code **)(_DAT_00000000 + 0x30))(0);
        return uVar7;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    plVar8 = (longlong *)(*(longlong *)(param_1 + -0x50) + -8);
    if (*(longlong *)(param_1 + -0x50) == 0) {
      plVar8 = (longlong *)0x0;
    }
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
    uVar6 = (**(code **)(*plVar8 + 0x30))(plVar8);
    uVar7 = (ulonglong)uVar6;
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  return uVar7;
}



// FUNCTION 1477206da FUN_1477206da body=556 status=ok
// SIG undefined FUN_1477206da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1477206da(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar7 = *(longlong **)(param_1 + -0x48), plVar7 != (longlong *)0x0)) && (0 < (int)plVar7[1])
     ) {
    lVar8 = 0;
    iVar6 = (int)plVar7[1];
    do {
      iVar5 = iVar6;
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        goto LAB_147720766;
      }
      LOCK();
      iVar6 = (int)plVar7[1];
      bVar9 = iVar5 == iVar6;
      if (bVar9) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar6 = iVar5;
      }
      UNLOCK();
    } while (!bVar9);
    lVar8 = *(longlong *)(param_1 + -0x50) + -8;
    if (*(longlong *)(param_1 + -0x50) == 0) {
      lVar8 = 0;
    }
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
LAB_147720766:
    if (((*(longlong *)(lVar8 + 0x2a8) == 0) ||
        (plVar3 = *(longlong **)(lVar8 + 0x2b0), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1)
       ) {
      bVar9 = false;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          (**(code **)(_DAT_00000000 + 0xe8))(0,&local_48);
          goto LAB_14772083e;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar9 = iVar6 == iVar4;
        if (bVar9) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar9);
      (**(code **)(**(longlong **)(lVar8 + 0x2a8) + 0xe8))(*(longlong **)(lVar8 + 0x2a8),&local_48);
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
LAB_14772083e:
      local_68 = local_48;
      local_60 = local_40;
      if (local_40 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_40 + 1) = (int)local_40[1] + 1;
        UNLOCK();
      }
      FUN_146974758(&local_58,&local_68);
      *param_2 = local_58;
      param_2[1] = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar1 = (int *)((longlong)local_50 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
            }
          }
        }
      }
      plVar3 = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_60 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_40 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_40)(local_40);
          LOCK();
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      bVar9 = true;
    }
    if (iVar5 != 0) {
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
    if (bVar9) goto LAB_147720802;
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_147720802:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147720908 FUN_147720908 body=590 status=ok
// SIG undefined FUN_147720908(void)

int FUN_147720908(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4,float *param_5
                 )

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  float *local_a0;
  undefined8 local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_54;
  byte local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar10 = *(longlong **)(param_1 + 0x2b0);
  bVar3 = true;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar9 = (int)plVar10[1];
    plVar11 = (longlong *)0x0;
    do {
      if (iVar9 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_147720971;
      }
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar9 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar9 + 1;
        iVar5 = iVar9;
      }
      iVar9 = iVar5;
      UNLOCK();
    } while (!bVar12);
    plVar11 = *(longlong **)(param_1 + 0x2a8);
    bVar3 = false;
  }
LAB_147720971:
  local_98 = param_3;
  (**(code **)(*plVar11 + 0xe8))(plVar11,&local_80);
  cVar6 = (**(code **)(*local_80 + 0x198))();
  plVar4 = (longlong *)CONCAT44(uStack_74,local_78);
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
  lVar7 = (**(code **)(*plVar11 + 0x48))(plVar11,param_1);
  iVar9 = param_4;
  if (((cVar6 == '\x01' && lVar7 != 0) && (cVar6 = (**(code **)*plVar11)(plVar11), cVar6 != '\0'))
     && (cVar6 = (**(code **)(*plVar11 + 8))(plVar11,lVar7), cVar6 != '\0')) {
    lVar7 = *(longlong *)(param_1 + 0x2c8);
    pfVar8 = (float *)(lVar7 + 0x18);
    cVar6 = *(char *)(lVar7 + 0x28);
    if (cVar6 != '\0') {
      if (cVar6 == '\x01') {
        pfVar8 = (float *)FUN_1400c06fe(pfVar8);
        lVar7 = *(longlong *)(param_1 + 0x2c8);
      }
      else if (cVar6 == '\x03') {
        pfVar8 = param_5 + 8;
      }
      else {
        pfVar8 = param_5 + 4;
      }
    }
    local_84 = pfVar8[3] * param_5[3];
    local_88 = pfVar8[2] * param_5[2];
    local_8c = pfVar8[1] * param_5[1];
    local_90 = *pfVar8 * *param_5;
    local_a0 = &local_90;
    local_6c = *param_2;
    local_80 = *(longlong **)((longlong)param_2 + 0xc);
    local_78 = *(undefined4 *)(param_2 + 1);
    uStack_74 = 0;
    uStack_70 = 0;
    local_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uStack_60 = *(undefined4 *)(param_2 + 4);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_58 = *(undefined4 *)(param_2 + 5);
    local_54 = *(undefined8 *)((longlong)param_2 + 0x2c);
    local_4c = local_4c & 0xfc | *(char *)((longlong)param_2 + 0x34) * '\x02' & 2U;
    iVar9 = param_4 + 1;
    local_a8 = 0;
    FUN_140239bd2(local_98,param_4,&local_80,lVar7 + 0x10);
  }
  if (!bVar3) {
    LOCK();
    plVar11 = plVar10 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar9;
}



// FUNCTION 147720b58 FUN_147720b58 body=239 status=ok
// SIG undefined FUN_147720b58(void)

ulonglong FUN_147720b58(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,undefined8 param_7,undefined1 param_8)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x31c) == '\x01') {
    if ((((int)param_1[0x62] != 0) && ((longlong *)param_1[0x61] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)param_1[0x61] + 0x30))(), cVar1 != '\0')) {
      if ((int)param_1[0x62] == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)param_1[0x61];
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))
                        (plVar3,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
      return uVar2;
    }
    uVar2 = (**(code **)(*param_1 + 0x88))
                      (param_1,(int)param_1[99],param_2,param_3,param_4,param_5,param_6,param_7,
                       param_8);
  }
  else {
    uVar2 = (ulonglong)param_6;
  }
  return uVar2;
}



// FUNCTION 147720c48 FUN_147720c48 body=171 status=ok
// SIG undefined FUN_147720c48(void)

void FUN_147720c48(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_147720cc7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_147720cc7;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147720cc7:
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
                    /* WARNING: Could not recover jumptable at 0x000147720ce7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147720cf4 FUN_147720cf4 body=312 status=ok
// SIG undefined FUN_147720cf4(void)

void FUN_147720cf4(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined1 *local_2a8;
  undefined1 *local_2a0;
  undefined1 local_298 [424];
  undefined8 local_f0;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined1 local_58 [24];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_147720e2e(local_298);
  local_f0 = *(undefined8 *)(param_2 + 0x1a8);
  local_2c8 = *(undefined1 *)(param_2 + 0x1d0);
  local_2d8 = *(undefined4 *)(param_2 + 0x1c0);
  uStack_2d4 = *(undefined4 *)(param_2 + 0x1c4);
  uStack_2d0 = *(undefined4 *)(param_2 + 0x1c8);
  uStack_2cc = *(undefined4 *)(param_2 + 0x1cc);
  local_2c0 = 0;
  local_2b8 = 0;
  FUN_140a58be0(&local_2c0,param_2 + 0x1d8);
  local_60 = local_2c8;
  local_70 = local_2d8;
  uStack_6c = uStack_2d4;
  uStack_68 = uStack_2d0;
  uStack_64 = uStack_2cc;
  FUN_144a450dc(local_58,&local_2c0);
  FUN_1449db362(&local_2c0);
  local_2a0 = local_40;
  local_2a8 = local_298;
  lVar1 = FUN_147720f96(&local_2a8,param_2 + 0x1b0);
  FUN_14772108a(param_1,lVar1,param_3);
  (**(code **)(*param_1 + 0x80))
            (param_1,*(undefined4 *)(*param_3 + 0x270),lVar1 + 0x228,lVar1 + 600);
  FUN_147720fea(local_298);
  if ((local_30 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147720e2e FUN_147720e2e body=359 status=ok
// SIG undefined FUN_147720e2e(void)

longlong FUN_147720e2e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a5071c();
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  FUN_1446ddc76(&local_30,"TableView.Row",1);
  uVar3 = FUN_145817f3a(lVar2,local_30,0,0);
  *(undefined8 *)(param_1 + 0x1a8) = uVar3;
  lVar2 = FUN_140a2b044(&DAT_14c96b348);
  if (lVar2 == 0) {
    lVar2 = DAT_14c96b350;
  }
  *(longlong *)(param_1 + 0x1b0) = lVar2;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x238) = 1;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined2 *)(param_1 + 0x250) = 1;
  *(undefined1 *)(param_1 + 0x252) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = DAT_14c98dec8;
  lVar2 = DAT_14c98ded0;
  *(longlong *)(param_1 + 0x260) = DAT_14c98ded0;
  if (lVar2 != 0) {
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147720f96 FUN_147720f96 body=84 status=ok
// SIG undefined FUN_147720f96(void)

undefined8 FUN_147720f96(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)puVar3[1];
  *puVar3 = uVar4;
  puVar3[1] = lVar5;
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
  return *param_1;
}



// FUNCTION 147720fea FUN_147720fea body=160 status=ok
// SIG undefined FUN_147720fea(void)

void FUN_147720fea(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x260);
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
  FUN_1449db362(param_1 + 0x240);
  FUN_1449db362(param_1 + 0x218);
  FUN_1449db362(param_1 + 0x208);
  FUN_1449db362(param_1 + 0x1f8);
  FUN_1449db362(param_1 + 0x1e8);
  FUN_1449db362(param_1 + 0x1d8);
  FUN_1449db362(param_1 + 0x1c8);
  FUN_1449db362(param_1 + 0x1b8);
  FUN_140a4ff8c(param_1);
  return;
}



// FUNCTION 14772108a FUN_14772108a body=507 status=ok
// SIG undefined FUN_14772108a(void)

void FUN_14772108a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 local_90;
  undefined1 local_8c;
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  code *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x37a) = 0;
  *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x1a8);
  *(undefined8 *)(param_1 + 0x2d0) = *(undefined8 *)(param_2 + 0x1b0);
  local_78 = 0;
  local_70 = 1;
  local_58 = (code *)&LAB_147721286;
  local_50 = 0;
  FUN_14772147c(local_68,param_1,&local_58);
  FUN_140a5acbc(param_1 + 0x270,param_1 + 8,&local_78);
  FUN_1449db362(local_68);
  local_a0 = 0x3f800000;
  uStack_9c = 0;
  uStack_98 = 0x3f800000;
  uStack_94 = 0x3f800000;
  local_90 = 0;
  local_8c = 1;
  local_58 = FUN_147721294;
  local_50 = 0;
  FUN_14772196e(local_88,param_1,&local_58);
  FUN_140a5c8a2(param_1 + 600,param_1 + 8,&local_a0);
  FUN_1449db362(local_88);
  FUN_147721e90(param_1 + 0x2e8,param_2 + 0x1b8);
  FUN_147721f14(param_1 + 0x2f8,param_2 + 0x1c8);
  FUN_145767132(param_1 + 800,param_2 + 0x1e8);
  FUN_14697937e(param_1 + 0x330,param_2 + 0x1f8);
  FUN_14697937e(param_1 + 0x340,param_2 + 0x208);
  FUN_146979402(param_1 + 0x350,param_2 + 0x218);
  local_b0 = *param_3;
  local_a8 = param_3[1];
  if (local_a8 != 0) {
    LOCK();
    *(int *)(local_a8 + 8) = *(int *)(local_a8 + 8) + 1;
    UNLOCK();
  }
  FUN_147721396(param_1,&local_b0);
  *(undefined1 *)(param_1 + 700) = *(undefined1 *)(param_2 + 0x250);
  *(undefined4 *)(param_1 + 0x2c0) = *(undefined4 *)(param_2 + 0x254);
  *(undefined1 *)(param_1 + 0x37c) = *(undefined1 *)(param_2 + 0x251);
  *(undefined1 *)(param_1 + 0x37b) = *(undefined1 *)(param_2 + 0x252);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147721294 FUN_147721294 body=257 status=ok
// SIG undefined FUN_147721294(void)

undefined8 * FUN_147721294(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  bool bVar15;
  
  plVar3 = *(longlong **)(param_1 + 0x2b0);
  if (plVar3 == (longlong *)0x0) {
LAB_14772136a:
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(lVar5 + 0x7c0);
    uVar9 = *(undefined8 *)(lVar5 + 0x7b8);
    *param_2 = *(undefined8 *)(lVar5 + 0x7b0);
    param_2[1] = uVar9;
  }
  else {
    iVar12 = (int)plVar3[1];
    do {
      if (iVar12 == 0) goto LAB_14772136a;
      LOCK();
      iVar10 = (int)plVar3[1];
      bVar15 = iVar12 == iVar10;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar12 + 1;
        iVar10 = iVar12;
      }
      iVar12 = iVar10;
      UNLOCK();
    } while (!bVar15);
    plVar4 = *(longlong **)(param_1 + 0x2a8);
    lVar5 = *(longlong *)(param_1 + 0x2c8);
    puVar14 = (undefined4 *)(lVar5 + 0x7b0);
    if ((plVar4 != (longlong *)0x0 & *(byte *)(param_1 + 700)) == 1) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar13 = (**(code **)(*plVar4 + 0x48))(plVar4);
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
      if (lVar13 != 0) {
        cVar11 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar13);
        if (cVar11 != '\0') {
          puVar14 = (undefined4 *)(lVar5 + 0x7c4);
        }
      }
    }
    *(undefined4 *)(param_2 + 2) = puVar14[4];
    uVar6 = puVar14[1];
    uVar7 = puVar14[2];
    uVar8 = puVar14[3];
    *(undefined4 *)param_2 = *puVar14;
    *(undefined4 *)((longlong)param_2 + 4) = uVar6;
    *(undefined4 *)(param_2 + 1) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar8;
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
  return param_2;
}



// FUNCTION 147721396 FUN_147721396 body=229 status=ok
// SIG undefined FUN_147721396(void)

void FUN_147721396(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 == (longlong *)0x0) {
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    plVar4 = *(longlong **)(param_1 + 0x2b0);
    if (plVar4 == (longlong *)0x0) goto LAB_147721444;
LAB_1477213e4:
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    *(longlong **)(param_1 + 0x2b0) = plVar3;
    if (plVar3 == (longlong *)0x0) goto LAB_147721444;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    lVar5 = lVar2 + 0x4d8;
    if (lVar2 == 0) {
      lVar5 = 0;
    }
    *(longlong *)(param_1 + 0x2a8) = lVar5;
    if (*(longlong **)(param_1 + 0x2b0) != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar4 = *(longlong **)(param_1 + 0x2b0);
      if (plVar4 != (longlong *)0x0) goto LAB_1477213e4;
      *(longlong **)(param_1 + 0x2b0) = plVar3;
    }
  }
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
LAB_147721444:
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014772146e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14772147c FUN_14772147c body=397 status=ok
// SIG undefined FUN_14772147c(void)

longlong * FUN_14772147c(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_147721598:
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14a50ac20;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_147721598;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f056a0;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14a50ac20;
    puVar5[3] = lVar9;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14772160a FUN_14772160a body=64 status=ok
// SIG undefined FUN_14772160a(void)

undefined8 * FUN_14772160a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50ac20;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772164e FUN_14772164e body=81 status=ok
// SIG undefined FUN_14772164e(void)

undefined8 FUN_14772164e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1477216a6 FUN_1477216a6 body=89 status=ok
// SIG undefined FUN_1477216a6(void)

bool FUN_1477216a6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1477216f1;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1477216f1:
  return lVar6 == param_2;
}



// FUNCTION 14772171c FUN_14772171c body=118 status=ok
// SIG undefined FUN_14772171c(void)

void FUN_14772171c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ac20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147721792 FUN_147721792 body=118 status=ok
// SIG undefined FUN_147721792(void)

void FUN_147721792(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f056a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ac20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147721808 FUN_147721808 body=156 status=ok
// SIG undefined FUN_147721808(void)

void FUN_147721808(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f056a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50ac20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147721894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477218a4 FUN_1477218a4 body=102 status=ok
// SIG undefined FUN_1477218a4(void)

undefined8 FUN_1477218a4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar7) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147721906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar6 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar6;
}



// FUNCTION 14772190a FUN_14772190a body=100 status=ok
// SIG undefined FUN_14772190a(void)

ulonglong FUN_14772190a(longlong param_1)

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
LAB_147721963:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147721963;
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



// FUNCTION 14772196e FUN_14772196e body=397 status=ok
// SIG undefined FUN_14772196e(void)

longlong * FUN_14772196e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x18);
  if (plVar6 == (longlong *)0x0) {
LAB_147721a8a:
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar10;
    *puVar5 = &PTR_FUN_14a50ac90;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar8 = (int)plVar6[1];
    do {
      if (iVar8 == 0) goto LAB_147721a8a;
      LOCK();
      iVar7 = (int)plVar6[1];
      bVar12 = iVar8 == iVar7;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar9 = *(longlong *)(param_2 + 0x10) + -8;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      lVar9 = 0;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149f05990;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14a50ac90;
    puVar5[3] = lVar9;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 147721afc FUN_147721afc body=64 status=ok
// SIG undefined FUN_147721afc(void)

undefined8 * FUN_147721afc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50ac90;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147721b40 FUN_147721b40 body=81 status=ok
// SIG undefined FUN_147721b40(void)

undefined8 FUN_147721b40(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 147721b98 FUN_147721b98 body=89 status=ok
// SIG undefined FUN_147721b98(void)

bool FUN_147721b98(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147721be3;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147721be3:
  return lVar6 == param_2;
}



// FUNCTION 147721c0e FUN_147721c0e body=118 status=ok
// SIG undefined FUN_147721c0e(void)

void FUN_147721c0e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ac90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147721c84 FUN_147721c84 body=118 status=ok
// SIG undefined FUN_147721c84(void)

void FUN_147721c84(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f05990;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ac90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147721cfa FUN_147721cfa body=156 status=ok
// SIG undefined FUN_147721cfa(void)

void FUN_147721cfa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f05990;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50ac90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147721d86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147721d96 FUN_147721d96 body=105 status=ok
// SIG undefined FUN_147721d96(void)

undefined8 FUN_147721d96(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147721dea:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_147721dea;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 147721e00 FUN_147721e00 body=143 status=ok
// SIG undefined FUN_147721e00(void)

ulonglong FUN_147721e00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [44];
  undefined1 local_2c [20];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_147721e6e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147721e6e;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_2c);
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
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 147721e90 FUN_147721e90 body=130 status=ok
// SIG undefined FUN_147721e90(void)

void FUN_147721e90(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147721f14 FUN_147721f14 body=130 status=ok
// SIG undefined FUN_147721f14(void)

void FUN_147721f14(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147721f98 FUN_147721f98 body=386 status=ok
// SIG undefined FUN_147721f98(void)

longlong * FUN_147721f98(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1477220a9:
    *puVar5 = &PTR_LAB_14a50a340;
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
    *puVar5 = &PTR_FUN_14a50ad00;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1477220a9;
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
    *puVar5 = &PTR_LAB_14a50a340;
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
    *puVar5 = &PTR_FUN_14a50ad00;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14772211a FUN_14772211a body=64 status=ok
// SIG undefined FUN_14772211a(void)

undefined8 * FUN_14772211a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50ad00;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772215e FUN_14772215e body=81 status=ok
// SIG undefined FUN_14772215e(void)

undefined8 FUN_14772215e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1477221b6 FUN_1477221b6 body=89 status=ok
// SIG undefined FUN_1477221b6(void)

bool FUN_1477221b6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_147722201;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_147722201:
  return lVar6 == param_2;
}



// FUNCTION 14772222c FUN_14772222c body=118 status=ok
// SIG undefined FUN_14772222c(void)

void FUN_14772222c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50a340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ad00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 1477222a2 FUN_1477222a2 body=118 status=ok
// SIG undefined FUN_1477222a2(void)

void FUN_1477222a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50a340;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ad00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147722318 FUN_147722318 body=156 status=ok
// SIG undefined FUN_147722318(void)

void FUN_147722318(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a50a340;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50ad00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001477223a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1477223b4 FUN_1477223b4 body=104 status=ok
// SIG undefined FUN_1477223b4(void)

void FUN_1477223b4(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000147722401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000147722412. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14772241c FUN_14772241c body=101 status=ok
// SIG undefined FUN_14772241c(void)

ulonglong FUN_14772241c(longlong param_1)

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
LAB_147722476:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_147722476;
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



// FUNCTION 147722482 FUN_147722482 body=386 status=ok
// SIG undefined FUN_147722482(void)

longlong * FUN_147722482(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_147722593:
    *puVar5 = &PTR_LAB_149f1b5c0;
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
    *puVar5 = &PTR_FUN_14a50ad70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_147722593;
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
    *puVar5 = &PTR_LAB_149f1b5c0;
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
    *puVar5 = &PTR_FUN_14a50ad70;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 147722604 FUN_147722604 body=64 status=ok
// SIG undefined FUN_147722604(void)

undefined8 * FUN_147722604(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50ad70;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147722648 FUN_147722648 body=81 status=ok
// SIG undefined FUN_147722648(void)

undefined8 FUN_147722648(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1477226a0 FUN_1477226a0 body=89 status=ok
// SIG undefined FUN_1477226a0(void)

bool FUN_1477226a0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1477226eb;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1477226eb:
  return lVar6 == param_2;
}



// FUNCTION 147722716 FUN_147722716 body=118 status=ok
// SIG undefined FUN_147722716(void)

void FUN_147722716(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1b5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ad70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14772278c FUN_14772278c body=118 status=ok
// SIG undefined FUN_14772278c(void)

void FUN_14772278c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f1b5c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50ad70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 147722802 FUN_147722802 body=156 status=ok
// SIG undefined FUN_147722802(void)

void FUN_147722802(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f1b5c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50ad70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014772288e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14772289e FUN_14772289e body=105 status=ok
// SIG undefined FUN_14772289e(void)

undefined8 FUN_14772289e(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1477228f2:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1477228f2;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 147722908 FUN_147722908 body=174 status=ok
// SIG undefined FUN_147722908(void)

ulonglong FUN_147722908(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [184];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14772298e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14772298e;
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
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),local_d8,param_2,param_3);
      FUN_14493db24(local_d8);
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
  if ((local_20 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1477229b8 FUN_1477229b8 body=324 status=ok
// SIG undefined FUN_1477229b8(void)

longlong * FUN_1477229b8(longlong *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  plVar3 = (longlong *)FUN_14001cc68(0x8a0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a50ade0;
  plVar4 = plVar3 + 2;
  FUN_147722afe(plVar4);
  local_30 = plVar4;
  local_28 = plVar3;
  FUN_14772907c(&local_30,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147722a8f;
    param_1[1] = 0;
LAB_147722a59:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147722a8f;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_147722a8f;
      goto LAB_147722a59;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147722a8f;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147722a8f:
  plVar4 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_38 = 0x890;
  FUN_140a52e78(*param_1,"SComboListType","Runtime\\Slate\\Public\\Widgets/Input/SComboBox.h",0xda);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147722afe FUN_147722afe body=684 status=ok
// SIG undefined FUN_147722afe(void)

undefined8 * FUN_147722afe(undefined8 *param_1)

{
  FUN_146af608e(param_1,0);
  *param_1 = &PTR_FUN_14a50ae00;
  param_1[0x4d] = &PTR_FUN_14a50b0e0;
  param_1[0x9b] = &PTR_LAB_14a50b100;
  param_1[0x9c] = param_1;
  param_1[0xa1] = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x51c) = 0;
  param_1[0xa5] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  param_1[0xab] = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x56c) = 0;
  param_1[0xaf] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = param_1;
  param_1[0xbb] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5ec) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xc5] = 0;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xd2] = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  *(undefined4 *)(param_1 + 0xdd) = 0;
  param_1[0xde] = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x67c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x684) = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x78c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0;
  param_1[0xf4] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c4) = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  *(undefined1 *)((longlong)param_1 + 0x7cc) = 2;
  param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0xfb) = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x100] = 0;
  *(undefined4 *)(param_1 + 0x101) = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0;
  *(undefined2 *)(param_1 + 0x104) = 0x101;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x107) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x83f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x841) = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x854) = 0;
  param_1[0x111] = 0;
  *(undefined8 *)((longlong)param_1 + 0x865) = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  *(undefined1 *)((longlong)param_1 + 0x33) = 1;
  *(byte *)((longlong)param_1 + 0x32) = *(byte *)((longlong)param_1 + 0x32) | 4;
  return param_1;
}



// FUNCTION 147722daa FUN_147722daa body=9 status=ok
// SIG undefined FUN_147722daa(void)

void FUN_147722daa(longlong param_1)

{
  FUN_1477264f4(param_1 + 0x10);
  return;
}



// FUNCTION 147722db4 FUN_147722db4 body=29 status=ok
// SIG undefined FUN_147722db4(void)

undefined8 FUN_147722db4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147722dd2 FUN_147722dd2 body=38 status=ok
// SIG undefined FUN_147722dd2(void)

undefined8 FUN_147722dd2(undefined8 param_1,int param_2)

{
  FUN_1477264f4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147722df8 FUN_147722df8 body=133 status=ok
// SIG undefined FUN_147722df8(void)

char * FUN_147722df8(longlong param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (((*(int *)(param_1 + 0x818) != 0) && (*(longlong **)(param_1 + 0x810) != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x810) + 0x30))(), cVar1 != '\0')) {
    if (*(int *)(param_1 + 0x818) == 0) {
      plVar2 = (longlong *)0x0;
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x810);
    }
    (**(code **)(*plVar2 + 0x58))(plVar2,param_2,param_3,param_4);
    if (*param_2 != '\0') {
      return param_2;
    }
    FUN_14493db24(param_2);
  }
  FUN_147726904(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 147722e7e FUN_147722e7e body=348 status=ok
// SIG undefined FUN_147722e7e(void)

undefined1 * FUN_147722e7e(longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x83c) == '\x01') {
    if (((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0))
       || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))(), cVar4 == '\0')) {
      iVar5 = *(int *)(param_1 + 0x390);
    }
    else {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(param_1 + 0x398);
      }
      iVar5 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar5;
    }
    if (iVar5 != 0) {
      lVar3 = *(longlong *)(param_4 + 0x40);
      plVar6 = *(longlong **)(param_4 + 0x50);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if ((lVar3 == DAT_14c966e98) && ((*(ushort *)(param_4 + 8) & 0xc) == 0)) {
        bVar7 = (*(ushort *)(param_4 + 8) & 3) == 0;
      }
      else {
        bVar7 = false;
      }
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
      if (bVar7) {
        plVar6 = (longlong *)(param_1 + 0x4d8);
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar6);
        if (0 < iVar5) {
          (**(code **)(*plVar6 + 0x30))(plVar6);
          (**(code **)(*plVar6 + 0x40))(plVar6);
        }
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = 0x20702;
        param_2[0xb4] = 0;
        return param_2;
      }
    }
  }
  FUN_146af49bc(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 147722fda FUN_147722fda body=298 status=ok
// SIG undefined FUN_147722fda(void)

undefined8 FUN_147722fda(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  
  if (*(char *)(param_1 + 0x83c) != '\x01') goto LAB_1477230c9;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_147723043:
    iVar6 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar4 == '\0') goto LAB_147723043;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar7 = (longlong *)0x0;
    }
    else {
      plVar7 = *(longlong **)(param_1 + 0x398);
    }
    iVar6 = (**(code **)(*plVar7 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar6;
  }
  if (iVar6 != 0) {
    lVar3 = *(longlong *)(param_4 + 0x40);
    plVar7 = *(longlong **)(param_4 + 0x50);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if ((lVar3 == DAT_14c966fa0) && ((*(byte *)(param_4 + 8) & 0xf) == 0)) {
      bVar5 = FUN_146af41be(param_1);
      bVar5 = bVar5 ^ 1;
    }
    else {
      bVar5 = 0;
    }
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
    if (bVar5 != 0) {
      plVar7 = (longlong *)(param_1 + 0x4d8);
      iVar6 = (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x70))(plVar7);
      if (0 < iVar6) {
        (**(code **)(*plVar7 + 0x30))(plVar7);
        (**(code **)(*plVar7 + 0x40))(plVar7,2);
      }
    }
  }
LAB_1477230c9:
  FUN_146af4b8a(param_1,param_2,param_3,param_4);
  return param_2;
}



// FUNCTION 147723104 FUN_147723104 body=565 status=ok
// SIG undefined FUN_147723104(void)

undefined8 FUN_147723104(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  int local_40;
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar3 = (longlong *)param_1[0x111];
  if (((plVar3 != (longlong *)0x0) && (*(char *)((longlong)param_1 + 0x83e) == '\x01')) &&
     ((*(char *)((longlong)param_1 + 0x83d) != '\0' || (*(char *)(param_4 + 0x21) != '\x01')))) {
    (**(code **)(*plVar3 + 8))(plVar3,&local_48);
    iVar4 = (**(code **)(*param_1 + 0x268))(param_1);
    iVar5 = -1;
    if ((param_1[0xea] != 0) && ((longlong)local_40 != 0)) {
      lVar6 = (longlong)local_40 << 3;
      lVar9 = 0;
      do {
        if (*(longlong *)(local_48 + lVar9 * 8) == param_1[0xea]) {
          iVar5 = (int)lVar9;
          break;
        }
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    cVar1 = *(char *)(param_4 + 0x20);
    iVar2 = *(int *)((longlong)param_1 + 0x3ec);
    if ((cVar1 == '\x02' && iVar2 == 1) || (cVar1 == '\0' && iVar2 == 0)) {
      uVar8 = (ulonglong)(uint)(iVar5 - iVar4);
    }
    else {
      if ((cVar1 != '\x03' || iVar2 != 1) && (cVar1 != '\x01' || iVar2 != 0)) goto LAB_14772314e;
      uVar7 = iVar5 + iVar4;
      uVar8 = (ulonglong)uVar7;
      if (0 < local_40 && (local_40 <= (int)uVar7 || (int)uVar7 < 0)) {
        fVar10 = (float)local_40 / (float)iVar4;
        fVar11 = (float)(iVar5 + 1) / (float)iVar4;
        if ((int)ROUND(-0.5 - (fVar10 + fVar10)) >> 1 < (int)ROUND(-0.5 - (fVar11 + fVar11)) >> 1) {
          uVar7 = local_40 - 1;
        }
        uVar8 = (ulonglong)uVar7;
      }
    }
    iVar4 = (int)uVar8;
    if (((-1 < iVar4) && (iVar4 < local_40)) && (*(char *)((longlong)param_1 + 0x3e9) == '\x01')) {
      local_68 = iVar5 <= iVar4;
      FUN_14772704e(param_1,local_38,uVar8 * 8 + local_48);
      if (local_38[0] != -1) {
        (**(code **)(*param_1 + 0x2d8))(param_1,local_38,param_4);
        local_58 = 0;
        uStack_50 = 0;
        FUN_146a35cca(param_2);
        goto LAB_14772315f;
      }
    }
  }
LAB_14772314e:
  FUN_145bff8f6(param_1,param_2,param_3,param_4);
LAB_14772315f:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14772333a FUN_14772333a body=461 status=ok
// SIG undefined FUN_14772333a(void)

longlong * FUN_14772333a(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = FUN_14001cc68(0x70,0x10);
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_147723378:
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_147723378;
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar9 = iVar5 == iVar4;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar9);
    uVar3 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    bVar9 = false;
    local_48 = uVar3;
    plStack_40 = plVar2;
  }
  plVar2 = plStack_40;
  FUN_147727144(lVar6,&local_48);
  *param_2 = lVar6;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149ef0b50;
  plVar7[2] = lVar6;
  param_2[1] = (longlong)plVar7;
  if ((lVar6 == 0) ||
     (((*(longlong *)(lVar6 + 8) != 0 && (*(longlong *)(lVar6 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar6 + 0x10) + 8))))) goto LAB_1477234b4;
  if (plVar7 == (longlong *)0x0) {
    *(longlong *)(lVar6 + 8) = lVar6;
    plVar8 = *(longlong **)(lVar6 + 0x10);
    if (plVar8 == (longlong *)0x0) goto LAB_1477234b4;
LAB_147723417:
    LOCK();
    piVar1 = (int *)((longlong)plVar8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    *(longlong **)(lVar6 + 0x10) = plVar7;
    if (plVar7 == (longlong *)0x0) goto LAB_1477234b4;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong *)(lVar6 + 8) = lVar6;
    if (*(longlong **)(lVar6 + 0x10) != plVar7) {
      LOCK();
      *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar6 + 0x10);
      if (plVar8 != (longlong *)0x0) goto LAB_147723417;
      *(longlong **)(lVar6 + 0x10) = plVar7;
    }
  }
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_1477234b4:
  if (!bVar9) {
    LOCK();
    plVar7 = plVar2 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14772350a FUN_14772350a body=83 status=ok
// SIG undefined FUN_14772350a(void)

undefined1 FUN_14772350a(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x830) != 0) && (*(longlong **)(param_1 + 0x828) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x828) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x830) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x828);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined1 *)(param_1 + 0x820) = uVar2;
    }
  }
  return *(undefined1 *)(param_1 + 0x820);
}



// FUNCTION 14772355e FUN_14772355e body=203 status=ok
// SIG undefined FUN_14772355e(void)

undefined8 FUN_14772355e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab76c0) {
    FUN_144b3d300(&DAT_14cab76c0);
    if (DAT_14cab76c0 == -1) {
      FUN_140056680(&DAT_14cab76b0,L"List");
      atexit((_func_5014 *)&LAB_1433327cc);
      _Init_thread_footer(&DAT_14cab76c0);
    }
  }
  FUN_140009b9a(local_28,&DAT_14cab76b0);
  FUN_14023423e(param_2,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772362a FUN_14772362a body=50 status=ok
// SIG undefined FUN_14772362a(void)

void FUN_14772362a(longlong *param_1)

{
  FUN_147727646(param_1 + 0x9c);
  FUN_147727646(param_1 + 0xb6);
                    /* WARNING: Could not recover jumptable at 0x000147723655. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x240))(param_1);
  return;
}



// FUNCTION 14772365c FUN_14772365c body=1761 status=ok
// SIG undefined FUN_14772365c(void)

void FUN_14772365c(longlong *param_1,undefined8 param_2,float param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auStack_178 [40];
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_13c [4];
  float local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  uint local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  dVar13 = (double)param_1[0x5e];
  if ((param_4 != '\x01') ||
     (((0.0 <= param_3 || (9.999999747378752e-05 <= dVar13)) &&
      ((param_3 <= 0.0 || ((char)param_1[0x66] == '\0')))))) {
    fVar18 = ABS(param_3);
    if ((dVar13 != 0.0) || (NAN(dVar13))) {
      cVar6 = '\0';
    }
    else {
      cVar6 = (char)param_1[0x66];
    }
    uVar8 = (uint)(double)param_1[0x5d];
    if (param_4 == '\0') {
      cVar5 = FUN_1469ffeec((longlong)param_1 + 0x4c4,-(dVar13 == 0.0) & 1,(char)param_1[0x66]);
      if (cVar5 != '\0') {
        fVar18 = (float)FUN_1469ffd82((longlong)param_1 + 0x4c4,param_2);
        if ((fVar18 != 0.0) || (NAN(fVar18))) {
          FUN_146af42a2(param_1);
        }
        goto LAB_147723a1e;
      }
    }
    if (cVar6 == '\0') {
      plVar9 = (longlong *)param_1[0x111];
      if (plVar9 == (longlong *)0x0) {
        local_100 = 0;
        local_f8 = 0;
      }
      else {
        (**(code **)(*plVar9 + 8))(plVar9,&local_100);
        if (0 < (int)local_f8) {
          do {
            if ((((fVar18 == 0.0) && (!NAN(fVar18))) || ((int)uVar8 < 0)) ||
               ((int)local_f8 <= (int)uVar8)) break;
            if (*(longlong *)(local_100 + (ulonglong)uVar8 * 8) == 0) {
              uVar8 = uVar8 + 1;
              iVar7 = 2;
            }
            else {
              puVar3 = (undefined8 *)(local_100 + (ulonglong)uVar8 * 8);
              FUN_147726f90(param_1 + 0x9c,&local_110,puVar3);
              if (local_110 == (longlong *)0x0) {
                (**(code **)(*param_1 + 0x2c0))(param_1,&local_120,*puVar3);
                plVar9 = local_108;
                plVar1 = local_118;
                local_110 = local_120;
                if (local_118 == (longlong *)0x0) {
                  if (local_108 != (longlong *)0x0) {
                    local_108 = (longlong *)0x0;
LAB_147723d02:
                    local_110 = local_120;
                    LOCK();
                    plVar1 = plVar9 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar9)(plVar9);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar9 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar7 = *piVar2;
                      UNLOCK();
joined_r0x000147723cf1:
                      if (iVar7 == 0) {
                        (**(code **)(*plVar9 + 0x10))(plVar9);
                      }
                    }
                  }
                }
                else {
                  LOCK();
                  *(int *)(local_118 + 1) = (int)local_118[1] + 1;
                  UNLOCK();
                  if (local_118 == local_108) {
                    LOCK();
                    plVar9 = local_118 + 1;
                    *(int *)plVar9 = (int)*plVar9 + -1;
                    UNLOCK();
                    if ((int)*plVar9 == 0) {
                      (**(code **)*local_118)(local_118);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar1 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      iVar7 = *piVar2;
                      UNLOCK();
                      plVar9 = plVar1;
                      goto joined_r0x000147723cf1;
                    }
                  }
                  else {
                    bVar10 = local_108 != (longlong *)0x0;
                    local_108 = local_118;
                    if (bVar10) goto LAB_147723d02;
                  }
                }
                plVar9 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                }
                plVar9 = local_110;
                (**(code **)(*local_110 + 0x10))(local_110,uVar8);
                local_130 = plVar9;
                local_128 = local_108;
                if (local_108 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_108 + 1) = (int)local_108[1] + 1;
                  UNLOCK();
                  plVar9 = local_110;
                }
                FUN_147728012(param_1 + 0x9c,*puVar3,&local_130);
                (**(code **)(*plVar9 + 0x58))(plVar9,&local_120);
                FUN_1405d299c(local_120);
                plVar9 = local_118;
                if (local_118 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_118 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_118)(local_118);
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
              (**(code **)(*local_110 + 0x58))(local_110,&local_120);
              FUN_144b013c4(local_120,&local_150);
              local_148 = local_150;
              FUN_146af3580(local_13c,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_148);
              plVar9 = local_118;
              if (local_118 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_118 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_118)(local_118);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar9 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar9 + 0x10))(plVar9);
                  }
                }
              }
              plVar9 = local_108;
              if (param_3 <= 0.0) {
                auVar15 = roundss(ZEXT816(0),ZEXT416((uint)(float)dVar13),0xb);
                fVar17 = (float)dVar13 - auVar15._0_4_;
                fVar12 = ABS(fVar17);
                dVar4 = dVar13 + -1.0;
                if (1e-08 < fVar12) {
                  dVar4 = dVar13;
                }
                uVar11 = -(uint)(fVar12 <= 1e-08);
                fVar12 = (float)(uVar11 & 0x3f800000 | ~uVar11 & (uint)fVar17) * local_138;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)((fVar12 - fVar18) / local_138 + (float)(int)dVar4);
                    goto LAB_147723927;
                  }
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = dVar4;
                  auVar15 = roundpd(auVar15,auVar15,3);
                  dVar13 = auVar15._0_8_;
                  iVar7 = 3;
                }
                else {
                  if (uVar8 == 0) {
                    iVar7 = 3;
                    dVar13 = 0.0;
                    uVar8 = 0;
                    goto LAB_14772392c;
                  }
                  fVar18 = fVar18 - fVar12;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = dVar4;
                  auVar15 = roundpd(auVar16,auVar16,3);
                  dVar13 = auVar15._0_8_;
                  uVar8 = uVar8 - 1;
                  iVar7 = 0;
                }
                dVar13 = dVar4 - (dVar4 - dVar13);
              }
              else {
                auVar14._8_8_ = 0;
                auVar14._0_8_ = dVar13;
                auVar15 = roundpd(auVar14,auVar14,3);
                fVar12 = (float)((auVar15._0_8_ - dVar13) + 1.0) * local_138;
                if (fVar18 <= fVar12) {
                  if ((fVar18 != fVar12) || (NAN(fVar18) || NAN(fVar12))) {
                    dVar13 = (double)(int)dVar13 + (1.0 - (double)((fVar12 - fVar18) / local_138));
                  }
                  else {
                    dVar13 = (double)(int)dVar13 + 1.0;
                  }
                }
                else {
                  if (uVar8 != local_f8) {
                    fVar18 = fVar18 - fVar12;
                    dVar13 = (double)(int)dVar13 + 1.0;
                    uVar8 = uVar8 + 1;
                    iVar7 = 0;
                    goto LAB_14772392c;
                  }
                  dVar13 = (double)(int)uVar8;
                }
LAB_147723927:
                iVar7 = 3;
              }
LAB_14772392c:
              if (local_108 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_108 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_108)(local_108);
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
          } while (iVar7 != 3);
        }
      }
      (**(code **)(*param_1 + 600))(param_1,(float)dVar13);
    }
  }
LAB_147723a1e:
  if ((local_f0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147723d3e FUN_147723d3e body=616 status=ok
// SIG undefined FUN_147723d3e(void)

void FUN_147723d3e(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_128 [44];
  undefined1 local_fc [4];
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  int local_e0;
  int local_b4;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_1 + 0x270) != 2) {
    plVar1 = *(longlong **)(param_1 + 0x888);
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
    }
    else {
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      (**(code **)(*plVar1 + 8))(plVar1,&local_f8);
      if (0 < local_f0) {
        lVar7 = 0;
        iVar3 = local_f0;
        do {
          local_e8 = *(longlong *)(local_f8 + lVar7 * 8);
          if (*(int *)(param_1 + 0x708) != *(int *)(param_1 + 0x734)) {
            uVar2 = (uint)((ulonglong)local_e8 >> 0x10);
            uVar5 = (uint)local_e8 & 0xffff;
            lVar4 = *(longlong *)(param_1 + 0x740);
            if (*(longlong *)(param_1 + 0x740) == 0) {
              lVar4 = param_1 + 0x738;
            }
            iVar6 = *(int *)(lVar4 + (ulonglong)
                                     (*(int *)(param_1 + 0x748) - 1U &
                                     (int)((ulonglong)local_e8 >> 0x20) +
                                     ((uint)local_e8 << 0x10 | uVar5) +
                                     (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
            if (iVar6 != -1) {
              do {
                lVar4 = *(longlong *)(param_1 + 0x700) + (longlong)iVar6 * 0x10;
                if (*(longlong *)(*(longlong *)(param_1 + 0x700) + (longlong)iVar6 * 0x10) ==
                    local_e8) {
                  if (lVar4 != 0) {
                    FUN_144a13f80(&local_98,local_fc,&local_e8,0);
                    iVar3 = local_f0;
                  }
                  break;
                }
                iVar6 = *(int *)(lVar4 + 8);
              } while (iVar6 != -1);
            }
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar3);
      }
      FUN_1408d9f48(param_1 + 0x700,&local_e8,&local_98);
      FUN_144881636(param_1 + 0x700,&local_98);
      local_a0 = 0;
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(&local_e8);
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_14472eaf0(&local_98);
      if (local_e0 <= local_b4) goto LAB_147723d6a;
    }
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,3);
  }
LAB_147723d6a:
  if ((local_40 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147723fa8 FUN_147723fa8 body=1024 status=ok
// SIG undefined FUN_147723fa8(void)

double * FUN_147723fa8(longlong param_1,double *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  double dVar3;
  longlong *plVar4;
  uint uVar5;
  undefined1 uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined8 extraout_XMM0_Qb;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  double *local_100;
  undefined8 local_f8;
  undefined1 local_ec [4];
  float local_e8;
  longlong local_e0;
  uint local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_146af6b36();
  lVar1 = param_1 + 0x4e0;
  FUN_147728c6a(lVar1);
  plVar4 = *(longlong **)(param_1 + 0x888);
  if ((plVar4 == (longlong *)0x0) ||
     ((**(code **)(*plVar4 + 8))(plVar4,&local_e0), (int)local_d8 < 1)) {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    goto LAB_14772420b;
  }
  auVar19._8_8_ = 0;
  auVar19._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
  auVar19 = roundpd(auVar19,auVar19,1);
  uVar5 = local_d8 - 1;
  if ((int)auVar19._0_8_ < (int)(local_d8 - 1)) {
    uVar5 = (int)auVar19._0_8_;
  }
  uVar11 = 0;
  if (0 < (int)uVar5) {
    uVar11 = uVar5;
  }
  uVar2 = *(undefined4 *)(param_3 + 1);
  local_f8 = *param_3;
  FUN_146af3580(local_ec,*(undefined4 *)(param_1 + 0x3ec));
  uVar8 = (ulonglong)local_d8;
  if ((int)uVar11 < (int)local_d8) {
    uVar15 = (ulonglong)uVar11;
    lVar13 = uVar15 * 8;
    fVar25 = 0.0;
    lVar12 = 0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    bVar9 = false;
    uVar14 = uVar15;
    local_100 = param_2;
    do {
      if (*(longlong *)(local_e0 + lVar13) == 0) {
        bVar10 = false;
      }
      else {
        local_108 = uVar2;
        uVar17 = FUN_14772895c(param_1,local_e0 + lVar13,uVar14 & 0xffffffff,uVar11);
        fVar16 = (float)uVar17;
        if (lVar12 == 0) {
          auVar21._8_8_ = 0;
          auVar21._0_8_ = *(ulonglong *)(param_1 + 0x2e8);
          auVar19 = roundpd(auVar21,auVar21,3);
          dVar18 = *(double *)(param_1 + 0x2e8) - auVar19._0_8_;
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          fVar23 = 1.0 - (float)dVar18;
          fVar20 = local_e8 / (fVar16 * fVar23);
          fVar27 = fVar16;
          if (fVar23 <= fVar20) {
            fVar20 = fVar23;
          }
        }
        else if (fVar26 + fVar16 <= local_e8) {
          fVar20 = 1.0;
        }
        else {
          fVar20 = (local_e8 - fVar26) / fVar16;
        }
        fVar25 = fVar25 + fVar20;
        auVar22._8_4_ = (int)extraout_XMM0_Qb;
        auVar22._0_8_ = uVar17;
        auVar22._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
        if (lVar12 == 0) {
          auVar22._0_4_ = fVar16 * fVar25;
        }
        fVar26 = fVar26 + auVar22._0_4_;
        uVar8 = (ulonglong)(int)local_d8;
        bVar9 = (longlong)(uVar8 - 1) <= (longlong)uVar14;
        fVar24 = fVar24 + fVar16;
        bVar10 = local_e8 + 0.001 <= fVar26 || lVar12 == 0 && local_e8 <= fVar26;
      }
      param_2 = local_100;
      uVar7 = (uint)uVar8;
      if (bVar10) break;
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + -1;
      lVar13 = lVar13 + 8;
    } while ((int)uVar14 < (int)uVar7);
    if (bVar10 || bVar9 != true) {
      dVar18 = (double)fVar25;
      goto LAB_147724290;
    }
    dVar3 = (double)((fVar24 - local_e8) / fVar27) + (double)(int)uVar11;
    if ((0 < (int)uVar5) && (fVar24 < local_e8)) {
      lVar13 = uVar15 * 8;
      fVar27 = local_e8;
      do {
        lVar13 = lVar13 + -8;
        if (*(longlong *)(local_e0 + lVar13) != 0) {
          local_108 = uVar2;
          fVar25 = (float)FUN_14772895c(param_1,local_e0 + lVar13,uVar15 - 1 & 0xffffffff,uVar11);
          fVar24 = fVar24 + fVar25;
          fVar27 = local_e8;
          if ((0.0 < fVar25) && (local_e8 < fVar24)) {
            dVar3 = (double)((fVar24 - local_e8) / fVar25) + (double)(int)(uVar15 - 1);
          }
        }
        uVar7 = local_d8;
      } while ((1 < uVar15) && (uVar15 = uVar15 - 1, fVar24 < fVar27));
    }
    dVar18 = (double)(int)uVar7 - dVar3;
    uVar6 = 1;
  }
  else {
    fVar24 = 0.0;
    dVar18 = 0.0;
LAB_147724290:
    dVar3 = *(double *)(param_1 + 0x2e8);
    uVar6 = 0;
  }
  *param_2 = dVar3;
  param_2[1] = (double)fVar24;
  param_2[2] = dVar18;
  *(undefined1 *)(param_2 + 3) = uVar6;
LAB_14772420b:
  FUN_1477276da(lVar1);
  FUN_1433327de(lVar1);
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477243aa FUN_1477243aa body=81 status=ok
// SIG undefined FUN_1477243aa(void)

undefined4 FUN_1477243aa(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0x888);
  if (plVar1 == (longlong *)0x0) {
    local_18 = 0;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1,local_20);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477243fc FUN_1477243fc body=1823 status=ok
// SIG undefined FUN_1477243fc(void)

undefined1 FUN_1477243fc(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 uVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auStack_138 [32];
  longlong *local_118;
  longlong *local_110;
  float local_104;
  float local_100;
  undefined1 local_fc [4];
  float local_f8;
  undefined1 local_f0 [4];
  float local_ec;
  undefined1 local_e4 [4];
  float local_e0;
  undefined1 local_d8 [4];
  float local_d4;
  undefined1 local_cc [4];
  float local_c8;
  float local_c0;
  float fStack_bc;
  longlong *local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  int local_98;
  undefined4 uStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar3 = (longlong *)param_1[0x111];
  if ((plVar3 == (longlong *)0x0) || (param_1[0xf7] == 0)) goto LAB_1477244bd;
  (**(code **)(*plVar3 + 8))(plVar3,&local_a0);
  if ((longlong)local_98 != 0) {
    lVar7 = (longlong)local_98 << 3;
    lVar10 = 0;
    lVar9 = 0;
    do {
      if (*(longlong *)(local_a0 + lVar10 * 8) == param_1[0xf7]) {
        if ((int)lVar10 != -1) {
          fVar12 = (float)(**(code **)(*param_1 + 0x260))(param_1);
          dVar5 = (double)fVar12;
          if (((fVar12 == 0.0) && (!NAN(fVar12))) && (cVar6 = FUN_146af5c6c(param_1), cVar6 != '\0')
             ) {
            dVar5 = (double)param_1[100];
            if ((dVar5 == 0.0) && (!NAN(dVar5))) {
              uVar11 = 1;
              goto LAB_147724539;
            }
          }
          FUN_146af65f2(param_1);
          dVar18 = (double)param_1[0x5d];
          auVar14._0_8_ = dVar5 + dVar18;
          auVar14._8_8_ = 0;
          auVar19 = roundpd(in_XMM2,auVar14,1);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = param_1[0x5d];
          auVar15 = roundpd(auVar14,auVar15,2);
          dVar13 = auVar15._0_8_;
          dVar17 = (double)(int)(auVar19._0_8_ - dVar13);
          if (*(char *)((longlong)param_1 + 0x841) == '\x01') {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = param_1[0x5d];
            auVar15 = roundpd(auVar15,auVar4,1);
            dVar13 = auVar15._0_8_;
            auVar16._0_8_ = dVar18 + dVar17;
            auVar16._8_8_ = 0;
            auVar15 = roundpd(auVar16,auVar16,2);
            dVar18 = auVar15._0_8_;
          }
          else {
            auVar19._0_8_ = dVar18 + dVar17;
            auVar19._8_8_ = 0;
            auVar15 = roundpd(auVar19,auVar19,1);
            dVar18 = auVar15._0_8_;
          }
          dVar17 = (double)(int)lVar10;
          cVar6 = *(char *)((longlong)param_1 + 0x7cc);
          if ((dVar17 < dVar13) || (dVar18 < dVar17)) {
            if (cVar6 == '\0') {
              if (dVar18 < dVar17) goto LAB_14772466b;
            }
            else if (cVar6 == '\x03') {
LAB_14772466b:
              dVar17 = dVar17 - (dVar5 + -1.0);
            }
            else if (cVar6 == '\x02') {
              dVar17 = dVar17 + dVar5 * -0.5;
            }
          }
          else if (cVar6 != '\x01') {
            if (cVar6 == '\x03') goto LAB_14772466b;
            if (*(char *)((longlong)param_1 + 0x841) == '\0') goto LAB_1477246ae;
            (**(code **)(param_1[0x9b] + 0xd8))
                      (param_1 + 0x9b,&local_b0,(lVar9 >> 0x20) * 8 + local_a0);
            if (local_b0 == (longlong *)0x0) goto LAB_14772487e;
            (**(code **)(*local_b0 + 0x58))(local_b0,&local_c0);
            pfVar8 = (float *)FUN_144b013e4(CONCAT44(fStack_bc,local_c0));
            plVar3 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_b8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar3 + 0x10))(plVar3);
                }
              }
            }
            fStack_bc = pfVar8[8] * (float)DAT_14c8463f0 * *pfVar8 +
                        pfVar8[10] * (float)DAT_14c8463f8 * pfVar8[1] + pfVar8[0xc];
            local_c0 = (float)DAT_14c8463f0 * *pfVar8 * pfVar8[7] +
                       (float)DAT_14c8463f8 * pfVar8[1] * pfVar8[9] + pfVar8[0xb];
            FUN_146af3580(local_cc,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_c0);
            fStack_bc = param_2[8] * (float)DAT_14c8463f0 * *param_2 +
                        param_2[10] * (float)DAT_14c8463f8 * param_2[1] + param_2[0xc];
            local_c0 = (float)DAT_14c8463f0 * *param_2 * param_2[7] +
                       (float)DAT_14c8463f8 * param_2[1] * param_2[9] + param_2[0xb];
            FUN_146af3580(local_d8,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_c0);
            if (local_c8 < local_d4) {
              dVar17 = dVar17 - (double)*(float *)(param_1 + 0x107);
              goto LAB_14772486f;
            }
            dVar17 = (double)param_1[0x5e];
            fStack_bc = pfVar8[8] * *pfVar8 + pfVar8[10] * pfVar8[1] + pfVar8[0xc];
            local_c0 = *pfVar8 * pfVar8[7] + pfVar8[1] * pfVar8[9] + pfVar8[0xb];
            FUN_146af3580(local_e4,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_c0);
            fStack_bc = param_2[8] * *param_2 + param_2[10] * param_2[1] + param_2[0xc];
            local_c0 = *param_2 * param_2[7] + param_2[1] * param_2[9] + param_2[0xb];
            FUN_146af3580(local_f0,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_c0);
            if (local_e0 <= local_ec) goto LAB_14772486f;
            dVar17 = 0.0;
            dVar5 = 0.0;
            if ((longlong)(int)param_1[0xb2] == 0) goto LAB_147724af7;
            lVar9 = param_1[0xb1];
            fVar20 = local_e0 - local_ec;
            lVar7 = (longlong)(int)param_1[0xb2] * 8;
            fVar12 = 0.0;
            goto LAB_1477249e8;
          }
          dVar18 = 0.0;
          if (0.0 <= (double)local_98 - dVar5) {
            dVar18 = (double)local_98 - dVar5;
          }
          if (dVar18 <= dVar17) {
            dVar17 = dVar18;
          }
          if (dVar17 <= 0.0) {
            dVar17 = 0.0;
          }
          FUN_146af48d8(param_1,(float)dVar17);
          goto LAB_1477246ae;
        }
        break;
      }
      lVar9 = lVar9 + 0x100000000;
      lVar10 = lVar10 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  goto LAB_1477244b2;
  while( true ) {
    lVar9 = lVar9 + 8;
    fVar20 = fVar20 - local_f8;
    if (lVar7 == 0) break;
LAB_1477249e8:
    lVar7 = lVar7 + -8;
    FUN_147726f90(param_1 + 0x9c,&local_118,lVar9);
    (**(code **)(*local_118 + 0x58))(local_118,&local_c0);
    pfVar8 = (float *)FUN_144b013e4(CONCAT44(fStack_bc,local_c0));
    local_100 = pfVar8[8] * *pfVar8 + pfVar8[10] * pfVar8[1];
    local_104 = *pfVar8 * pfVar8[7] + pfVar8[1] * pfVar8[9];
    FUN_146af3580(local_fc,*(undefined4 *)((longlong)param_1 + 0x3ec),&local_104);
    plVar3 = local_b8;
    if (local_b8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b8)(local_b8);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    plVar3 = local_110;
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_110 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    fVar12 = fVar12 + (float)(~-(uint)(fVar20 <= local_f8) & 0x3f800000 |
                             (uint)(fVar20 / local_f8) & -(uint)(fVar20 <= local_f8));
    if (fVar20 <= local_f8) break;
  }
  dVar5 = (double)fVar12;
LAB_147724af7:
  if ((char)param_1[0x5a] == '\0') {
    dVar17 = (double)*(float *)(param_1 + 0x107);
  }
  dVar17 = dVar5 + (double)param_1[0x5e] + dVar17;
LAB_14772486f:
  FUN_146af48d8(param_1,(float)dVar17);
LAB_14772487e:
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
      }
    }
  }
LAB_1477246ae:
  FUN_146af42a2(param_1);
  *(longlong *)((longlong)param_1 + 0x7c4) = param_1[0xf7];
LAB_1477244b2:
  param_1[0xf7] = 0;
LAB_1477244bd:
  if (*(longlong **)((longlong)param_1 + 0x7c4) == (longlong *)0x0) {
    uVar11 = 2;
  }
  else {
    uVar11 = 0;
    if ((char)param_1[0x5b] == '\x01') {
      local_b0 = *(longlong **)((longlong)param_1 + 0x7c4);
      (**(code **)(param_1[0x9b] + 0xd8))(param_1 + 0x9b,&local_a0);
      plVar3 = (longlong *)CONCAT44(uStack_94,local_98);
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
      uVar11 = local_a0 == 0;
    }
  }
LAB_147724539:
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 147724b1c FUN_147724b1c body=383 status=ok
// SIG undefined FUN_147724b1c(void)

void FUN_147724b1c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(param_1 + 0x7c4);
  if (lVar4 != 0) {
    local_28 = lVar4;
    FUN_147726f90(param_1 + 0x4e0,&local_38);
    if (local_38 != (longlong *)0x0) {
      if (*(char *)(param_1 + 0x841) == '\x01') {
        *(longlong *)(param_1 + 0x750) = lVar4;
        (**(code **)(*local_38 + 0x58))(local_38,&local_58);
        local_48 = local_58;
        local_40 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
          UNLOCK();
        }
        FUN_146af6ffc(param_1,*(undefined4 *)(param_1 + 0x7c0),&local_48,0);
        plVar3 = local_40;
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_40 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar4 = local_28;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)local_50 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            lVar4 = local_28;
            if (*piVar2 == 0) {
              (**(code **)(*local_50 + 0x10))(local_50);
              lVar4 = local_28;
            }
          }
        }
      }
      if ((*(int *)(param_1 + 0x6e8) != 0) &&
         (plVar3 = *(longlong **)(param_1 + 0x6e0), plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,lVar4,&local_38);
      }
    }
    *(undefined1 *)(param_1 + 0x841) = 0;
    *(undefined8 *)(param_1 + 0x7c4) = 0;
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
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147724cba FUN_147724cba body=1179 status=ok
// SIG undefined FUN_147724cba(void)

undefined8 * FUN_147724cba(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_7f8 [32];
  undefined1 *local_7d8;
  undefined8 local_7c8;
  longlong *plStack_7c0;
  undefined8 *local_7b8;
  undefined1 local_7b0 [8];
  longlong *local_7a8;
  undefined1 local_791;
  wchar_t *local_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined1 local_778 [4];
  undefined1 local_774 [4];
  longlong *local_770 [2];
  undefined1 local_760 [16];
  undefined1 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong *local_720;
  undefined8 local_718;
  longlong *plStack_710;
  undefined1 local_2a8 [600];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  if (((*(int *)(param_1 + 0x6a8) == 0) || (*(longlong **)(param_1 + 0x6a0) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x6a0) + 0x30))(), cVar5 == '\0')) {
    FUN_147720e2e(local_2a8);
    FUN_140a570d8(&local_718);
    local_790 = L"OnGeneratePinnedRowNotAssignedMessage";
    local_788 = 0x25;
    FUN_1446e940c(local_774,&local_790);
    local_790 = L"SListView";
    local_788 = 9;
    FUN_1446e940c(local_778,&local_790);
    FUN_140208bae(local_770,local_778,local_774,L"OnGeneratePinnedRow() not assigned.");
    FUN_14023423e(local_760,local_770);
    local_750 = 1;
    local_748 = 0;
    uStack_740 = 0;
    uVar8 = FUN_140a54906(&local_718,local_760);
    local_7d8 = &local_791;
    FUN_140a54526(&local_790,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x666)
    ;
    FUN_140a52852(&local_790,&local_738,uVar8);
    plVar9 = local_48;
    plVar3 = local_730;
    if (local_730 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
    }
    local_50 = local_738;
    local_48 = local_730;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_147724f78:
      local_7c8 = 0;
      plStack_7c0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_147724f78;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7c8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7c0 = plVar9;
      if ((int)*plVar2 == 0) {
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
    local_7b8 = &local_7c8;
    FUN_147728d80(local_7b0,0x663);
    FUN_147728d02(local_7b0,&local_728,local_2a8);
    if (local_7a8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7a8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7a8)(local_7a8);
        LOCK();
        piVar1 = (int *)((longlong)local_7a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7a8 + 0x10))(local_7a8);
        }
      }
    }
    plVar9 = plStack_7c0;
    if (plStack_7c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7c0)(plStack_7c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_730 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_730 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_730)(local_730);
        LOCK();
        piVar1 = (int *)((longlong)local_730 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_730 + 0x10))(local_730);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_784,local_788);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_770[0] != (longlong *)0x0) {
      (**(code **)(*local_770[0] + 0x10))();
    }
    FUN_140a59ae6(&local_718);
    FUN_147720fea(local_2a8);
    *param_2 = local_728;
    param_2[1] = local_720;
    if (local_720 == (longlong *)0x0) goto LAB_147724deb;
    LOCK();
    *(int *)(local_720 + 1) = (int)local_720[1] + 1;
    UNLOCK();
    if (local_720 == (longlong *)0x0) goto LAB_147724deb;
    LOCK();
    plVar3 = local_720 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147724deb;
    (**(code **)*local_720)(local_720);
    LOCK();
    piVar1 = (int *)((longlong)local_720 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_147724deb;
    lVar7 = *local_720;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_147724d68:
      local_718 = 0;
      plStack_710 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_147724d68;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_718 = uVar8;
      plStack_710 = plVar3;
    }
    plVar3 = plStack_710;
    if (*(int *)(param_1 + 0x6a8) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x6a0);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,param_3,&local_718);
    plVar9 = plStack_710;
    if (plStack_710 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_710 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_710)(plStack_710);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_147724deb;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147724deb;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_147724deb;
    lVar7 = *plVar3;
    local_720 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_720);
LAB_147724deb:
  if ((local_40 ^ (ulonglong)auStack_7f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147725156 FUN_147725156 body=1179 status=ok
// SIG undefined FUN_147725156(void)

undefined8 * FUN_147725156(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_7f8 [32];
  undefined1 *local_7d8;
  undefined8 local_7c8;
  longlong *plStack_7c0;
  undefined8 *local_7b8;
  undefined1 local_7b0 [8];
  longlong *local_7a8;
  undefined1 local_791;
  wchar_t *local_790;
  undefined4 local_788;
  undefined4 uStack_784;
  undefined1 local_778 [4];
  undefined1 local_774 [4];
  longlong *local_770 [2];
  undefined1 local_760 [16];
  undefined1 local_750;
  undefined8 local_748;
  undefined8 uStack_740;
  undefined8 local_738;
  longlong *local_730;
  undefined8 local_728;
  longlong *local_720;
  undefined8 local_718;
  longlong *plStack_710;
  undefined1 local_2a8 [600];
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_7f8;
  if (((*(int *)(param_1 + 0x698) == 0) || (*(longlong **)(param_1 + 0x690) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x690) + 0x30))(), cVar5 == '\0')) {
    FUN_147720e2e(local_2a8);
    FUN_140a570d8(&local_718);
    local_790 = L"OnGenerateWidgetNotAssignedMessage";
    local_788 = 0x22;
    FUN_1446e940c(local_774,&local_790);
    local_790 = L"SListView";
    local_788 = 9;
    FUN_1446e940c(local_778,&local_790);
    FUN_140208bae(local_770,local_778,local_774,L"OnGenerateWidget() not assigned.");
    FUN_14023423e(local_760,local_770);
    local_750 = 1;
    local_748 = 0;
    uStack_740 = 0;
    uVar8 = FUN_140a54906(&local_718,local_760);
    local_7d8 = &local_791;
    FUN_140a54526(&local_790,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x682)
    ;
    FUN_140a52852(&local_790,&local_738,uVar8);
    plVar9 = local_48;
    plVar3 = local_730;
    if (local_730 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(local_730 + 1) = (int)local_730[1] + 1;
      UNLOCK();
    }
    local_50 = local_738;
    local_48 = local_730;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_147725414:
      local_7c8 = 0;
      plStack_7c0 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar9[1];
      do {
        if (iVar6 == 0) goto LAB_147725414;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar9 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      local_7c8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      plStack_7c0 = plVar9;
      if ((int)*plVar2 == 0) {
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
    local_7b8 = &local_7c8;
    FUN_147728d80(local_7b0,0x67f);
    FUN_147728d02(local_7b0,&local_728,local_2a8);
    if (local_7a8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_7a8 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_7a8)(local_7a8);
        LOCK();
        piVar1 = (int *)((longlong)local_7a8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_7a8 + 0x10))(local_7a8);
        }
      }
    }
    plVar9 = plStack_7c0;
    if (plStack_7c0 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_7c0 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_7c0)(plStack_7c0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_730 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_730 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_730)(local_730);
        LOCK();
        piVar1 = (int *)((longlong)local_730 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_730 + 0x10))(local_730);
        }
      }
    }
    plVar3 = (longlong *)CONCAT44(uStack_784,local_788);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (local_770[0] != (longlong *)0x0) {
      (**(code **)(*local_770[0] + 0x10))();
    }
    FUN_140a59ae6(&local_718);
    FUN_147720fea(local_2a8);
    *param_2 = local_728;
    param_2[1] = local_720;
    if (local_720 == (longlong *)0x0) goto LAB_147725287;
    LOCK();
    *(int *)(local_720 + 1) = (int)local_720[1] + 1;
    UNLOCK();
    if (local_720 == (longlong *)0x0) goto LAB_147725287;
    LOCK();
    plVar3 = local_720 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147725287;
    (**(code **)*local_720)(local_720);
    LOCK();
    piVar1 = (int *)((longlong)local_720 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_147725287;
    lVar7 = *local_720;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 == (longlong *)0x0) {
LAB_147725204:
      local_718 = 0;
      plStack_710 = (longlong *)0x0;
      bVar10 = true;
    }
    else {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_147725204;
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar10);
      uVar8 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar9 = plVar3 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar3)();
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      bVar10 = false;
      local_718 = uVar8;
      plStack_710 = plVar3;
    }
    plVar3 = plStack_710;
    if (*(int *)(param_1 + 0x698) == 0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x690);
    }
    (**(code **)(*plVar9 + 0x58))(plVar9,param_2,param_3,&local_718);
    plVar9 = plStack_710;
    if (plStack_710 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_710 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_710)(plStack_710);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (bVar10) goto LAB_147725287;
    LOCK();
    plVar9 = plVar3 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 != 0) goto LAB_147725287;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 != 0) goto LAB_147725287;
    lVar7 = *plVar3;
    local_720 = plVar3;
  }
  (**(code **)(lVar7 + 0x10))(local_720);
LAB_147725287:
  if ((local_40 ^ (ulonglong)auStack_7f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1477255f4 FUN_1477255f4 body=32 status=ok
// SIG undefined FUN_1477255f4(void)

undefined8 FUN_1477255f4(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"SListView");
  return param_2;
}



// FUNCTION 147725614 FUN_147725614 body=380 status=ok
// SIG undefined FUN_147725614(void)

void FUN_147725614(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  int local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14771957a(param_1,&local_30,param_2);
  if (local_30 == -1) goto LAB_147725787;
  if ((*(int *)(param_1 + 0x3a0) == 0) || (*(longlong **)(param_1 + 0x398) == (longlong *)0x0)) {
LAB_14772568d:
    iVar5 = *(int *)(param_1 + 0x390);
  }
  else {
    cVar4 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar4 == '\0') goto LAB_14772568d;
    if (*(int *)(param_1 + 0x3a0) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x398);
    }
    iVar5 = (**(code **)(*plVar6 + 0x58))();
    *(int *)(param_1 + 0x390) = iVar5;
  }
  if (iVar5 != 0) {
    uVar3 = CONCAT44(uStack_2c,local_30);
    *(undefined8 *)(param_1 + 0x750) = uVar3;
    uVar2 = *(undefined4 *)(param_3 + 0xc);
    *(undefined1 *)(param_1 + 0x841) = 1;
    *(undefined8 *)(param_1 + 0x7b8) = uVar3;
    *(undefined4 *)(param_1 + 0x7c0) = uVar2;
    FUN_146af42a2(param_1);
    if ((iVar5 == 3) && (uVar1 = *(ushort *)(param_3 + 8), (uVar1 & 0xf) != 0)) {
      if ((uVar1 & 3) == 0) {
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x28))(param_1 + 0x4d8,uVar3,1,1);
      }
      else {
        if ((uVar1 & 0xc) == 0) {
          (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
        }
        (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x38))(param_1 + 0x4d8,uVar3);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
    FUN_1408d9e0e(param_1 + 0x700,0);
    FUN_147719776(param_1,local_38,1);
  }
LAB_147725787:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147725858 FUN_147725858 body=91 status=ok
// SIG undefined FUN_147725858(void)

undefined8 FUN_147725858(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x310) != 0) && (*(longlong **)(param_1 + 0x308) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x310) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x308);
      }
                    /* WARNING: Could not recover jumptable at 0x0001477258a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,*param_2);
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 147725952 FUN_147725952 body=759 status=ok
// SIG undefined FUN_147725952(void)

void FUN_147725952(longlong *param_1,longlong param_2,char param_3,char param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_d0 [24];
  undefined1 local_b8 [24];
  undefined1 local_a0 [80];
  undefined8 local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_30 = param_2;
  if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar4 == '\0')) {
    iVar5 = (int)param_1[-0x29];
  }
  else {
    if ((int)param_1[-0x27] == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = (longlong *)param_1[-0x28];
    }
    iVar5 = (**(code **)(*plVar6 + 0x58))();
    *(int *)(param_1 + -0x29) = iVar5;
  }
  if (iVar5 == 0) goto LAB_147725b77;
  if (param_3 == '\0') {
    FUN_144a8b5fe(param_1 + 0x45,param_2);
  }
  else {
    FUN_144a13f80(param_1 + 0x45,local_a0,&local_30,0);
  }
  if (param_4 == '\0') {
    if ((((int)param_1[-0x27] == 0) || ((longlong *)param_1[-0x28] == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))(), cVar4 == '\0')) {
      iVar5 = (int)param_1[-0x29];
    }
    else {
      if ((int)param_1[-0x27] == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)param_1[-0x28];
      }
      iVar5 = (**(code **)(*plVar6 + 0x58))();
      *(int *)(param_1 + -0x29) = iVar5;
    }
    if (iVar5 == 1) goto LAB_147725a06;
    if (((int)param_1[-0x27] != 0) && ((longlong *)param_1[-0x28] != (longlong *)0x0)) {
      cVar4 = (**(code **)(*(longlong *)param_1[-0x28] + 0x30))();
      if (cVar4 == '\0') {
        iVar5 = (int)param_1[-0x29];
      }
      else {
        if ((int)param_1[-0x27] == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = (longlong *)param_1[-0x28];
        }
        iVar5 = (**(code **)(*plVar6 + 0x58))();
        *(int *)(param_1 + -0x29) = iVar5;
      }
    }
    if (iVar5 == 2) goto LAB_147725a06;
  }
  else {
LAB_147725a06:
    param_1[0x4f] = local_30;
    param_1[0x50] = local_30;
  }
  FUN_1469ffd58(param_1 + -0x24,0);
  if (param_3 != '\0') {
    (**(code **)(*param_1 + 0xd8))(param_1,&local_40,&local_30);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x58))(local_40,&local_50);
      uVar3 = *(undefined8 *)(DAT_14c968098 + 200);
      plVar6 = *(longlong **)(DAT_14c968098 + 0xd0);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      FUN_14171d2aa(local_b8,1);
      FUN_14171d2aa(local_d0,0);
      local_e0 = local_50;
      local_d8 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_48 + 1) = (int)local_48[1] + 1;
        UNLOCK();
      }
      local_f0 = 0;
      local_f8 = local_b8;
      FUN_14171f2ba(local_a0,&local_e0,0,local_d0);
      FUN_1428785ec(uVar3,local_a0);
      FUN_1417211dc(local_a0);
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
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_48 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_38 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  }
LAB_147725b77:
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147725c4a FUN_147725c4a body=44 status=ok
// SIG undefined FUN_147725c4a(void)

void FUN_147725c4a(longlong param_1)

{
  FUN_1408d9e0e(param_1 + 0x228,0);
  FUN_1469ffd58(param_1 + -0x120,0);
  return;
}



// FUNCTION 147725c76 FUN_147725c76 body=462 status=ok
// SIG undefined FUN_147725c76(void)

void FUN_147725c76(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((*(int *)(param_1 + -0x138) == 0) || (*(longlong **)(param_1 + -0x140) == (longlong *)0x0))
     || (cVar1 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))(), cVar1 == '\0')) {
    iVar2 = *(int *)(param_1 + -0x148);
  }
  else {
    if (*(int *)(param_1 + -0x138) == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + -0x140);
    }
    iVar2 = (**(code **)(*plVar5 + 0x58))();
    *(int *)(param_1 + -0x148) = iVar2;
  }
  if (iVar2 != 0) {
    if (*(longlong **)(param_1 + 0x3b0) == (longlong *)0x0) {
      local_58 = 0;
      local_50 = 0;
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x3b0) + 8))();
      lVar4 = (longlong)local_50;
      if (lVar4 != 0) {
        if (*(longlong *)(param_1 + 0x280) == 0) {
          lVar7 = 0;
        }
        else {
          lVar9 = lVar4 * 8;
          lVar7 = 0;
          do {
            if (*(longlong *)(local_58 + lVar7 * 8) == *(longlong *)(param_1 + 0x280))
            goto LAB_147725d5a;
            lVar7 = lVar7 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
          lVar7 = 0xffffffff;
        }
LAB_147725d5a:
        lVar4 = lVar4 * 8;
        lVar9 = 0;
        do {
          if (*(longlong *)(local_58 + lVar9 * 8) == param_2) goto LAB_147725d7a;
          lVar9 = lVar9 + 1;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
        lVar9 = 0xffffffff;
LAB_147725d7a:
        uVar3 = local_50 - 1;
        uVar6 = (uint)lVar7;
        if ((int)uVar3 <= (int)(uint)lVar7) {
          uVar6 = uVar3;
        }
        uVar8 = 0;
        if ((int)uVar6 < 1) {
          uVar6 = 0;
        }
        if ((int)(uint)lVar9 < (int)uVar3) {
          uVar3 = (uint)lVar9;
        }
        if (0 < (int)uVar3) {
          uVar8 = (ulonglong)uVar3;
        }
        iVar2 = uVar6 - (int)uVar8;
        if (iVar2 == 0) {
          uVar8 = (ulonglong)uVar6;
        }
        else {
          uVar3 = (uint)((int)uVar6 < (int)uVar3) * 2;
          lVar4 = (ulonglong)uVar6 << 3;
          do {
            FUN_144a13f80(param_1 + 0x228,local_5c,local_58 + lVar4,0);
            lVar4 = lVar4 + (ulonglong)uVar3 * 8 + -8;
            iVar2 = iVar2 + (uVar3 - 1);
          } while (iVar2 != 0);
        }
        FUN_144a13f80(param_1 + 0x228,local_5c,local_58 + uVar8 * 8,0);
      }
    }
    FUN_1469ffd58(param_1 + -0x120,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147725e46 FUN_147725e46 body=324 status=ok
// SIG undefined FUN_147725e46(void)

void FUN_147725e46(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_1 + -0x138) != 0) && (*(longlong **)(param_1 + -0x140) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x138) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + -0x140);
      }
      iVar2 = (**(code **)(*plVar4 + 0x58))();
      *(int *)(param_1 + -0x148) = iVar2;
      goto LAB_147725ea8;
    }
  }
  iVar2 = *(int *)(param_1 + -0x148);
LAB_147725ea8:
  if (((iVar2 != 0) && (*(int *)(param_1 + 0x300) != 0)) &&
     (*(longlong **)(param_1 + 0x2f8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x2f8) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x25c) < *(int *)(param_1 + 0x230)) {
        local_38 = param_1 + 0x238;
        local_40 = 0x100000000;
        local_30 = 0xffffffff;
        local_28 = 0;
        if (*(int *)(param_1 + 0x250) == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1449c0562(&local_40);
          lVar3 = (longlong)local_30._4_4_;
        }
        uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x228) + lVar3 * 0x10);
      }
      else {
        uVar5 = 0;
      }
      if ((*(int *)(param_1 + 0x300) != 0) &&
         (plVar4 = *(longlong **)(param_1 + 0x2f8), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,uVar5,param_2);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477260ee FUN_1477260ee body=101 status=ok
// SIG undefined FUN_1477260ee(void)

void FUN_1477260ee(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (param_3 != '\0') {
    FUN_144a13f80(param_1 + 0x288,local_14,&local_10,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_144a8b5fe(param_1 + 0x288);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_38);
}



// FUNCTION 147726192 FUN_147726192 body=46 status=ok
// SIG undefined FUN_147726192(void)

undefined8 FUN_147726192(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 800) == 0) ||
     (plVar1 = (longlong *)(param_1 + 0x318), param_1 = 0, (longlong *)*plVar1 == (longlong *)0x0))
  {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)*plVar1 + 0x60))();
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1477261c0 FUN_1477261c0 body=46 status=ok
// SIG undefined FUN_1477261c0(void)

undefined8 FUN_1477261c0(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  if ((*(int *)(param_1 + 0x330) == 0) ||
     (plVar1 = (longlong *)(param_1 + 0x328), param_1 = 0, (longlong *)*plVar1 == (longlong *)0x0))
  {
    bVar5 = (byte)param_1;
    bVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar3 = (**(code **)(*(longlong *)*plVar1 + 0x60))();
    bVar5 = (byte)uVar3;
    uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
    bVar2 = 1;
  }
  return CONCAT71(uVar4,bVar2 & bVar5);
}



// FUNCTION 1477261ee FUN_1477261ee body=83 status=ok
// SIG undefined FUN_1477261ee(void)

undefined4 FUN_1477261ee(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + -0x138) != 0) && (*(longlong **)(param_1 + -0x140) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + -0x140) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + -0x138) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + -0x140);
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))();
      *(undefined4 *)(param_1 + -0x148) = uVar2;
    }
  }
  return *(undefined4 *)(param_1 + -0x148);
}



// FUNCTION 147726256 FUN_147726256 body=329 status=ok
// SIG undefined FUN_147726256(void)

longlong * FUN_147726256(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
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
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = *(int *)(param_1 + 0x230) - *(int *)(param_1 + 0x25c);
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  if (iVar2 != 0) {
    FUN_1402191ca(param_2);
  }
  local_40 = param_1 + 0x238;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x250) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_68 = local_48;
  local_60 = local_40;
  local_70 = (longlong *)(param_1 + 0x228);
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    do {
      lVar3 = (longlong)iStack_54;
      lVar1 = *local_70;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 * 0x10 + lVar1);
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < *(int *)(local_60 + 0x18));
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477263a2 FUN_1477263a2 body=189 status=ok
// SIG undefined FUN_1477263a2(void)

longlong * FUN_1477263a2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147726f90(param_1 + 8,&local_38);
  if (local_38 == 0) {
    FUN_147726f90(param_1 + 0xd8,param_2,param_3);
  }
  else {
    *param_2 = local_38;
    param_2[1] = (longlong)local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
  }
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772646a FUN_14772646a body=138 status=ok
// SIG undefined FUN_14772646a(void)

undefined8 * FUN_14772646a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + -0x4c8);
  if (plVar3 == (longlong *)0x0) {
LAB_1477264e3:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1477264e3;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + -0x4d0);
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
    *param_2 = uVar4;
    param_2[1] = plVar3;
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
  return param_2;
}



// FUNCTION 1477264f4 FUN_1477264f4 body=380 status=ok
// SIG undefined FUN_1477264f4(void)

void FUN_1477264f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a50ae00;
  param_1[0x4d] = &PTR_FUN_14a50b0e0;
  param_1[0x9b] = &PTR_LAB_14a50b100;
  puVar1 = (undefined8 *)param_1[0x111];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_1449db362(param_1 + 0x10e);
  FUN_1449db362(param_1 + 0x10b);
  FUN_1449db362(param_1 + 0x105);
  FUN_1449db362(param_1 + 0x102);
  FUN_1449db362(param_1 + 0x100);
  FUN_1449db362(param_1 + 0xfe);
  FUN_1449db362(param_1 + 0xfc);
  FUN_1449db362(param_1 + 0xfa);
  *(undefined4 *)(param_1 + 0xf5) = 0;
  if (param_1[0xf4] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xec);
  *(undefined4 *)(param_1 + 0xe9) = 0;
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(param_1 + 0xe0);
  FUN_1449db362(param_1 + 0xde);
  FUN_1449db362(param_1 + 0xdc);
  FUN_1449db362(param_1 + 0xda);
  FUN_1449db362(param_1 + 0xd8);
  FUN_1449db362(param_1 + 0xd6);
  FUN_1449db362(param_1 + 0xd4);
  FUN_1449db362(param_1 + 0xd2);
  FUN_1449db362(param_1 + 0xd0);
  FUN_147726670(param_1 + 0xb6);
  FUN_147726670(param_1 + 0x9c);
  FUN_146af62c8(param_1);
  return;
}



// FUNCTION 147726670 FUN_147726670 body=121 status=ok
// SIG undefined FUN_147726670(void)

void FUN_147726670(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_1477266ea(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_147726778(param_1 + 8);
  return;
}



// FUNCTION 1477266ea FUN_1477266ea body=52 status=ok
// SIG undefined FUN_1477266ea(void)

void FUN_1477266ea(longlong *param_1)

{
  FUN_14772671e();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14772671e FUN_14772671e body=89 status=ok
// SIG undefined FUN_14772671e(void)

void FUN_14772671e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147726778 FUN_147726778 body=52 status=ok
// SIG undefined FUN_147726778(void)

void FUN_147726778(longlong *param_1)

{
  FUN_1477267ac();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1477267ac FUN_1477267ac body=343 status=ok
// SIG undefined FUN_1477267ac(void)

void FUN_1477267ac(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
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
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
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
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147726904 FUN_147726904 body=1674 status=ok
// SIG undefined FUN_147726904(void)

/* WARNING: Type propagation algorithm not settling */

undefined1 *
FUN_147726904(longlong *param_1,undefined1 *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  ulonglong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong *)param_1[0x111] == (longlong *)0x0) {
    local_58 = (ulonglong *)0x0;
    local_50 = 0;
  }
  else {
    (**(code **)(*(longlong *)param_1[0x111] + 8))();
    if ((0 < local_50) && ((*(byte *)(param_4 + 8) & 0x30) == 0)) {
      lVar13 = *(longlong *)(param_4 + 0x20);
      plVar11 = *(longlong **)(param_4 + 0x30);
      if (plVar11 == (longlong *)0x0) {
        puVar8 = local_58;
        if (lVar13 != DAT_14c964e48) {
LAB_147726a74:
          if (lVar13 != DAT_14c964e30) goto LAB_147726bb8;
LAB_147726a81:
          lVar13 = (longlong)(local_50 + -1);
LAB_147726a89:
          puVar8 = local_58 + lVar13;
        }
LAB_1477269ac:
        uVar9 = *puVar8;
        uVar10 = uVar9 & 0xffffffff00000000;
        bVar2 = true;
      }
      else {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        lVar14 = DAT_14c964e48;
        UNLOCK();
        LOCK();
        plVar12 = plVar11 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar11)();
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
        puVar8 = local_58;
        if (lVar13 == lVar14) goto LAB_1477269ac;
        lVar13 = *(longlong *)(param_4 + 0x20);
        plVar11 = *(longlong **)(param_4 + 0x30);
        if (plVar11 == (longlong *)0x0) goto LAB_147726a74;
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        lVar14 = DAT_14c964e30;
        UNLOCK();
        LOCK();
        plVar12 = plVar11 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar11)();
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
        if (lVar13 == lVar14) goto LAB_147726a81;
LAB_147726bb8:
        lVar13 = *(longlong *)(param_4 + 0x20);
        plVar11 = *(longlong **)(param_4 + 0x30);
        if (plVar11 == (longlong *)0x0) {
          if (lVar13 == DAT_14c964e00) goto LAB_147726bfd;
LAB_147726c57:
          if (lVar13 == DAT_14c964e18) {
LAB_147726c64:
            if (param_1[0xea] == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = -1;
              if ((longlong)local_50 != 0) {
                lVar13 = (longlong)local_50 << 3;
                lVar14 = 0;
                do {
                  if (local_58[lVar14] == param_1[0xea]) {
                    iVar7 = (int)lVar14;
                    break;
                  }
                  lVar14 = lVar14 + 1;
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
            }
            fVar17 = (float)(**(code **)(*param_1 + 0x260))(param_1);
            iVar5 = (**(code **)(*param_1 + 0x268))(param_1);
            iVar15 = (int)fVar17 - (int)fVar17 % iVar5;
            iVar5 = iVar15 + iVar7;
            if (local_50 - iVar15 <= iVar7) {
              iVar5 = local_50 + -1;
            }
            lVar13 = (longlong)iVar5;
            goto LAB_147726a89;
          }
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          lVar14 = DAT_14c964e00;
          UNLOCK();
          LOCK();
          plVar12 = plVar11 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar11)();
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
          if (lVar13 == lVar14) {
LAB_147726bfd:
            iVar7 = 0;
            if (param_1[0xea] != 0) {
              iVar7 = -1;
              if ((longlong)local_50 != 0) {
                lVar13 = (longlong)local_50 << 3;
                lVar14 = 0;
                do {
                  if (local_58[lVar14] == param_1[0xea]) {
                    iVar7 = (int)lVar14;
                    break;
                  }
                  lVar14 = lVar14 + 1;
                  lVar13 = lVar13 + -8;
                } while (lVar13 != 0);
              }
            }
            fVar17 = (float)(**(code **)(*param_1 + 0x260))(param_1);
            iVar5 = (**(code **)(*param_1 + 0x268))(param_1);
            iVar5 = (int)fVar17 - (int)fVar17 % iVar5;
            iVar15 = iVar7 - iVar5;
            if (iVar7 < iVar5) {
              iVar15 = 0;
            }
            lVar13 = (longlong)iVar15;
            goto LAB_147726a89;
          }
          lVar13 = *(longlong *)(param_4 + 0x20);
          plVar11 = *(longlong **)(param_4 + 0x30);
          if (plVar11 == (longlong *)0x0) goto LAB_147726c57;
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          lVar14 = DAT_14c964e18;
          UNLOCK();
          LOCK();
          plVar12 = plVar11 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar11)();
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))();
            }
          }
          if (lVar13 == lVar14) goto LAB_147726c64;
        }
        uVar9 = 0;
        uVar10 = 0;
        bVar2 = false;
      }
      uVar10 = uVar9 & 0xffffffff | uVar10;
      if (uVar10 == 0) {
        if ((*(char *)((longlong)param_1 + 0x83f) == '\x01') && (param_1[0xea] != 0)) {
          lVar13 = *(longlong *)(param_4 + 0x20);
          plVar11 = *(longlong **)(param_4 + 0x30);
          lVar14 = DAT_14c964de8;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            lVar14 = DAT_14c964de8;
            UNLOCK();
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
          }
          if (lVar13 == lVar14) {
            local_60 = param_1[0xea];
            if ((*(byte *)(param_4 + 8) & 0xc) == 0) {
              if ((((int)param_1[0x74] == 0) || ((longlong *)param_1[0x73] == (longlong *)0x0)) ||
                 (cVar3 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar3 == '\0')) {
                iVar7 = (int)param_1[0x72];
              }
              else {
                if ((int)param_1[0x74] == 0) {
                  plVar11 = (longlong *)0x0;
                }
                else {
                  plVar11 = (longlong *)param_1[0x73];
                }
                iVar7 = (**(code **)(*plVar11 + 0x58))();
                *(int *)(param_1 + 0x72) = iVar7;
              }
              if (iVar7 == 2) goto LAB_147726e75;
              plVar11 = param_1 + 0x9b;
              cVar3 = (**(code **)(param_1[0x9b] + 0x10))(plVar11,&local_60);
              if (cVar3 == '\0') {
                (**(code **)(*plVar11 + 0x28))(plVar11,local_60,1,1);
                goto LAB_147726eab;
              }
              bVar2 = false;
            }
            else {
LAB_147726e75:
              uVar6 = (**(code **)(param_1[0x9b] + 0x10))(param_1 + 0x9b,&local_60);
              (**(code **)(param_1[0x9b] + 0x28))(param_1 + 0x9b,local_60,uVar6 ^ 1,1);
LAB_147726eab:
              (**(code **)(param_1[0x9b] + 0x40))(param_1 + 0x9b,0);
              bVar2 = true;
            }
            param_1[0xeb] = param_1[0xea];
            FUN_147726f90(param_1 + 0x9c,&local_70,&local_60);
            if (local_70 == 0) {
              uVar4 = *(undefined4 *)(param_4 + 0xc);
              param_1[0xf7] = local_60;
              *(undefined4 *)(param_1 + 0xf8) = uVar4;
              FUN_146af42a2(param_1);
            }
            if (local_68 != (longlong *)0x0) {
              LOCK();
              plVar11 = local_68 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*local_68)(local_68);
                LOCK();
                piVar1 = (int *)((longlong)local_68 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_68 + 0x10))(local_68);
                }
              }
            }
            goto joined_r0x0001477269e4;
          }
        }
        if ((*(ushort *)(param_4 + 8) & 0xc) == 0 || (*(ushort *)(param_4 + 8) & 0x33) != 0)
        goto joined_r0x0001477269e4;
        lVar13 = *(longlong *)(param_4 + 0x20);
        plVar11 = *(longlong **)(param_4 + 0x30);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        if (lVar13 == DAT_14c966f88) {
          if ((((int)param_1[0x74] != 0) && ((longlong *)param_1[0x73] != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*(longlong *)param_1[0x73] + 0x30))(), cVar3 != '\0')) {
            if ((int)param_1[0x74] == 0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              plVar12 = (longlong *)param_1[0x73];
            }
            uVar4 = (**(code **)(*plVar12 + 0x58))();
            *(undefined4 *)(param_1 + 0x72) = uVar4;
          }
          bVar16 = (int)param_1[0x72] == 3;
        }
        else {
          bVar16 = false;
        }
        if (plVar11 != (longlong *)0x0) {
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
        }
        if (!bVar16) goto joined_r0x0001477269e4;
        plVar11 = param_1 + 0x9b;
        (**(code **)(param_1[0x9b] + 0x30))(plVar11);
        if (0 < local_50) {
          lVar13 = 0;
          do {
            (**(code **)(*plVar11 + 0x28))(plVar11,local_58[lVar13],1,0);
            lVar13 = lVar13 + 1;
          } while (lVar13 < local_50);
        }
        (**(code **)(*plVar11 + 0x40))(plVar11);
      }
      else {
        local_70 = uVar10;
        (**(code **)(*param_1 + 0x2d8))(param_1,&local_70,param_4);
joined_r0x0001477269e4:
        if (!bVar2) goto LAB_147726a2b;
      }
      *param_2 = 1;
      param_2[0x20] = 0;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      memset(param_2 + 0x28,0,0x88);
      *(undefined4 *)(param_2 + 0xb0) = 0x20702;
      param_2[0xb4] = 0;
      goto LAB_147726a3c;
    }
  }
LAB_147726a2b:
  FUN_146af5694(param_1,param_2,param_3,param_4);
LAB_147726a3c:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147726f90 FUN_147726f90 body=189 status=ok
// SIG undefined FUN_147726f90(void)

void FUN_147726f90(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x48);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar3 * 0x20) == lVar1) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(undefined8 *)(lVar4 + 8);
            lVar1 = *(longlong *)(lVar4 + 0x10);
            param_2[1] = lVar1;
            if (lVar1 == 0) {
              return;
            }
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
            return;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 14772704e FUN_14772704e body=245 status=ok
// SIG undefined FUN_14772704e(void)

undefined8 *
FUN_14772704e(longlong param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,byte param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  if ((*(int *)(param_1 + 0x7e8) != 0) && (*(longlong **)(param_1 + 0x7e0) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7e0) + 0x30))();
    if (cVar1 != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x888);
      if (plVar2 == (longlong *)0x0) {
        local_40 = 0;
        local_38 = 0;
      }
      else {
        (**(code **)(*plVar2 + 8))(plVar2,&local_40);
      }
      while( true ) {
        param_4 = param_4 + (param_5 - 1 | 1);
        if (*(int *)(param_1 + 0x7e8) == 0) {
          plVar2 = (longlong *)0x0;
        }
        else {
          plVar2 = *(longlong **)(param_1 + 0x7e0);
        }
        cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,uVar3);
        if (cVar1 != '\0') goto LAB_1477270fc;
        if (((int)param_4 < 0) || (local_38 <= (int)param_4)) break;
        uVar3 = *(undefined8 *)(local_40 + (ulonglong)param_4 * 8);
      }
      *param_2 = 0xffffffff;
      goto LAB_1477270ff;
    }
  }
LAB_1477270fc:
  *param_2 = uVar3;
LAB_1477270ff:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147727144 FUN_147727144 body=143 status=ok
// SIG undefined FUN_147727144(void)

undefined8 * FUN_147727144(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
    UNLOCK();
  }
  FUN_14697595a(param_1,&local_28,0xc);
  *param_1 = &PTR_FUN_14a50b1f0;
  param_1[0xd] = &PTR_FUN_14a50b2e0;
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477271d4 FUN_1477271d4 body=38 status=ok
// SIG undefined FUN_1477271d4(void)

undefined8 FUN_1477271d4(undefined8 param_1,int param_2)

{
  FUN_14697900e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147727200 FUN_147727200 body=874 status=ok
// SIG undefined FUN_147727200(void)

longlong * FUN_147727200(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 0;
  param_2[1] = 0;
  if (((*(longlong *)(param_1 + -0x50) != 0) &&
      (plVar10 = *(longlong **)(param_1 + -0x48), plVar10 != (longlong *)0x0)) &&
     (0 < (int)plVar10[1])) {
    lVar9 = 0;
    iVar8 = (int)plVar10[1];
    do {
      iVar7 = iVar8;
      if (iVar7 == 0) {
        plVar10 = (longlong *)0x0;
        goto LAB_1477272b8;
      }
      LOCK();
      iVar8 = (int)plVar10[1];
      bVar11 = iVar7 == iVar8;
      if (bVar11) {
        *(int *)(plVar10 + 1) = iVar7 + 1;
        iVar8 = iVar7;
      }
      UNLOCK();
    } while (!bVar11);
    lVar9 = *(longlong *)(param_1 + -0x50);
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
LAB_1477272b8:
    FUN_146a38fda(param_2,*(int *)(lVar9 + 0x708) - *(int *)(lVar9 + 0x734));
    local_60 = (longlong *)(lVar9 + 0x710);
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(lVar9 + 0x728) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_78 = local_58;
    uVar6 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = (longlong *)(lVar9 + 0x700);
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar6;
      do {
        FUN_147726f90(lVar9 + 0x4e0,&local_68,(longlong)iVar8 * 0x10 + *local_90);
        if (local_68 != (longlong *)0x0) {
          (**(code **)(*local_68 + 0x58))(local_68,&local_b0);
          plVar1 = local_a8;
          local_a0 = local_b0;
          local_98 = local_a8;
          if (local_a8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a8)(local_a8);
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
          FUN_146974758(&local_b0,&local_a0);
          plVar1 = local_a8;
          lVar5 = local_b0;
          if (local_a8 == (longlong *)0x0) {
            if (local_b0 != 0) goto LAB_147727449;
          }
          else {
            LOCK();
            *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
            UNLOCK();
            if (local_a8 != (longlong *)0x0) {
              LOCK();
              plVar3 = local_a8 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*local_a8)(local_a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
            if (lVar5 != 0) {
LAB_147727449:
              iVar8 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
                FUN_14697b806(param_2,iVar8);
              }
              lVar4 = *param_2;
              *(longlong *)(lVar4 + (longlong)iVar8 * 0x10) = lVar5;
              *(longlong **)(lVar4 + 8 + (longlong)iVar8 * 0x10) = plVar1;
              if (plVar1 == (longlong *)0x0) goto LAB_147727495;
              LOCK();
              *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
              UNLOCK();
            }
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
LAB_147727495:
          plVar1 = local_98;
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_98 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_98)(local_98);
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
        plVar1 = local_60;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_60 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
    local_78 = uVar6;
    if (iVar7 != 0) {
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
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14772756c FUN_14772756c body=213 status=ok
// SIG undefined FUN_14772756c(void)

ulonglong FUN_14772756c(longlong param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  bool bVar10;
  
  if (((*(longlong *)(param_1 + -0x50) == 0) ||
      (plVar9 = *(longlong **)(param_1 + -0x48), plVar9 == (longlong *)0x0)) || ((int)plVar9[1] < 1)
     ) {
    uVar8 = 0;
  }
  else {
    lVar7 = 0;
    iVar4 = (int)plVar9[1];
    do {
      iVar3 = iVar4;
      if (iVar3 == 0) {
        plVar9 = (longlong *)0x0;
        goto LAB_1477275d5;
      }
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar10 = iVar3 == iVar4;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
    } while (!bVar10);
    lVar7 = *(longlong *)(param_1 + -0x50);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
LAB_1477275d5:
    if (((*(int *)(lVar7 + 0x3a0) != 0) && (*(longlong **)(lVar7 + 0x398) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(lVar7 + 0x398) + 0x30))(), cVar2 != '\0')) {
      if (*(int *)(lVar7 + 0x3a0) == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = *(longlong **)(lVar7 + 0x398);
      }
      uVar5 = (**(code **)(*plVar6 + 0x58))();
      *(undefined4 *)(lVar7 + 0x390) = uVar5;
    }
    uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),*(int *)(lVar7 + 0x390) == 3);
    if (iVar3 != 0) {
      LOCK();
      plVar6 = plVar9 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  return uVar8 & 0xffffffff;
}



// FUNCTION 147727646 FUN_147727646 body=147 status=ok
// SIG undefined FUN_147727646(void)

void FUN_147727646(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0xcc) == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_1401b309e((undefined8 *)(param_1 + 0xc0),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0xc0),_Src,(longlong)iVar1 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1402191ca(param_1 + 0xa8,0);
  }
  FUN_1477276da(param_1);
  return;
}



// FUNCTION 1477276da FUN_1477276da body=813 status=ok
// SIG undefined FUN_1477276da(void)

void FUN_1477276da(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0 < (int)param_1[0x19]) {
    plVar1 = param_1 + 1;
    plVar2 = param_1 + 0xb;
    lVar13 = 0;
    do {
      lVar6 = *(longlong *)(param_1[0x18] + lVar13 * 8);
      if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
        uVar8 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar11 = (uint)lVar6 & 0xffff;
        plVar10 = (longlong *)param_1[9];
        if ((longlong *)param_1[9] == (longlong *)0x0) {
          plVar10 = param_1 + 8;
        }
        iVar12 = *(int *)((longlong)plVar10 +
                         (ulonglong)
                         ((int)param_1[10] - 1U &
                         (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar11) +
                         (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar12 != -1) {
          do {
            lVar5 = *plVar1 + (longlong)iVar12 * 0x20;
            if (*(longlong *)(*plVar1 + (longlong)iVar12 * 0x20) == lVar6) {
              if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
                local_a8 = *(longlong **)(lVar5 + 8);
                local_a0 = *(longlong **)(lVar5 + 0x10);
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
                  UNLOCK();
                }
                FUN_147727b04(plVar1);
                FUN_147727ca2(plVar2,local_a8);
                if (*param_1 != 0) {
                  (**(code **)(*local_a8 + 8))();
                  if ((*(int *)(*param_1 + 0x6d8) != 0) &&
                     (plVar10 = *(longlong **)(*param_1 + 0x6d0), plVar10 != (longlong *)0x0)) {
                    (**(code **)(*plVar10 + 0x60))(plVar10,&local_a8);
                  }
                }
                plVar10 = local_a0;
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = local_a0 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar10 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                    }
                  }
                }
                goto LAB_147727743;
              }
              break;
            }
            iVar12 = *(int *)(lVar5 + 0x18);
          } while (iVar12 != -1);
        }
      }
      if ((lVar6 == 0) && (plVar10 = (longlong *)FUN_147727a08(plVar2), plVar10 != (longlong *)0x0))
      {
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = param_1 + 3;
        if ((int)param_1[6] != 0) {
          FUN_1449c0562(&local_68);
        }
        local_a0 = local_68;
        local_98 = local_60;
        local_90 = local_58;
        uVar9 = local_90;
        local_88 = local_50;
        local_84 = local_4c;
        local_70 = 0;
        local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        bVar7 = local_90._4_4_ < (int)local_60[3];
        iVar12 = local_90._4_4_;
        local_a8 = plVar1;
        local_90 = uVar9;
        local_80 = plVar1;
        local_78 = plVar1;
        if (bVar7) {
          do {
            if (*(longlong *)(*local_a8 + 8 + (longlong)iVar12 * 0x20) == *plVar10) {
              FUN_147727b88(local_80);
              local_70 = CONCAT11(local_70._1_1_,1);
              goto LAB_1477279db;
            }
            local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
            FUN_1449c0562(&local_a0);
            iVar12 = local_90._4_4_;
          } while (local_90._4_4_ < (int)local_98[3]);
          if ((local_70 & 1) != 0) {
LAB_1477279db:
            if (local_70._1_1_ == '\x01') {
              FUN_147727df0(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
            }
          }
        }
        FUN_147727ca2(plVar2,*plVar10);
      }
LAB_147727743:
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)param_1[0x19]);
  }
  *(undefined4 *)(param_1 + 0x19) = 0;
  if (*(int *)((longlong)param_1 + 0xcc) < 0) {
    FUN_1402191ca(param_1 + 0x18,0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147727a08 FUN_147727a08 body=250 status=ok
// SIG undefined FUN_147727a08(void)

longlong FUN_147727a08(longlong *param_1)

{
  longlong lVar1;
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
    lVar1 = 0;
    do {
      if (*(longlong *)(*local_60 + 8 + (longlong)iStack_44 * 0x18) == 0) {
        lVar1 = *local_60 + (longlong)iStack_44 * 0x18;
        break;
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  else {
    lVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147727b04 FUN_147727b04 body=132 status=ok
// SIG undefined FUN_147727b04(void)

void FUN_147727b04(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x20) == param_2) {
          FUN_147727b88(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + *param_1 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147727b88 FUN_147727b88 body=90 status=ok
// SIG undefined FUN_147727b88(void)

void FUN_147727b88(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_147727be2();
  return;
}



// FUNCTION 147727be2 FUN_147727be2 body=78 status=ok
// SIG undefined FUN_147727be2(void)

void FUN_147727be2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x20);
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
  FUN_147727c30(param_1,param_2);
  return;
}



// FUNCTION 147727c30 FUN_147727c30 body=114 status=ok
// SIG undefined FUN_147727c30(void)

void FUN_147727c30(longlong *param_1,int param_2)

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



// FUNCTION 147727ca2 FUN_147727ca2 body=132 status=ok
// SIG undefined FUN_147727ca2(void)

void FUN_147727ca2(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x18) == param_2) {
          FUN_147727d26(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147727d26 FUN_147727d26 body=87 status=ok
// SIG undefined FUN_147727d26(void)

void FUN_147727d26(longlong *param_1,int param_2)

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
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_147727d7e();
  return;
}



// FUNCTION 147727d7e FUN_147727d7e body=114 status=ok
// SIG undefined FUN_147727d7e(void)

void FUN_147727d7e(longlong *param_1,int param_2)

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



// FUNCTION 147727df0 FUN_147727df0 body=68 status=ok
// SIG undefined FUN_147727df0(void)

void FUN_147727df0(longlong param_1,uint param_2)

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
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_147727e34(param_1);
  return;
}



// FUNCTION 147727e34 FUN_147727e34 body=476 status=ok
// SIG undefined FUN_147727e34(void)

void FUN_147727e34(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 147728012 FUN_147728012 body=435 status=ok
// SIG undefined FUN_147728012(void)

void FUN_147728012(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  if ((int)param_1[2] != *(int *)((longlong)param_1 + 0x3c)) {
    uVar5 = (uint)((ulonglong)param_2 >> 0x10);
    uVar7 = (uint)param_2 & 0xffff;
    plVar6 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[9];
    }
    iVar8 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)param_1[10] - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar7) +
                    (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      lVar4 = param_1[1];
      do {
        lVar3 = lVar4 + (longlong)iVar8 * 0x20;
        if (*(longlong *)(lVar4 + (longlong)iVar8 * 0x20) == param_2) {
          if ((lVar3 != 0) && (lVar3 != -8)) goto LAB_14772812f;
          break;
        }
        iVar8 = *(int *)(lVar3 + 0x18);
      } while (iVar8 != -1);
    }
  }
  local_48 = &local_50;
  local_40 = param_3;
  FUN_1477281c6(param_1 + 1,&local_58,&local_48);
  local_58 = *param_3;
  local_48 = &local_58;
  local_40 = &local_50;
  FUN_1477284d2(param_1 + 0xb,local_34,&local_48);
  (*(code *)**(undefined8 **)*param_3)();
  if ((*(int *)(*param_1 + 0x688) != 0) &&
     (plVar6 = *(longlong **)(*param_1 + 0x680), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x60))(plVar6,local_50,param_3);
  }
LAB_14772812f:
  local_48 = &local_50;
  FUN_1408ff3be(param_1 + 0x18);
  iVar8 = (int)param_1[0x16];
  *(uint *)(param_1 + 0x16) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0xb4) < iVar8 + 1U) {
    FUN_1446f84a2(param_1 + 0x15,iVar8);
  }
  *(longlong *)(param_1[0x15] + (longlong)iVar8 * 8) = local_50;
  plVar6 = (longlong *)param_3[1];
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
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1477281c6 FUN_1477281c6 body=356 status=ok
// SIG undefined FUN_1477281c6(void)

undefined4 * FUN_1477281c6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14772832c(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar9 = *(undefined8 *)*param_3;
  *local_40 = uVar9;
  local_40[1] = *puVar1;
  lVar7 = puVar1[1];
  local_40[2] = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar9 = *local_40;
  }
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar9 >> 0x10);
  uVar4 = (uint)uVar9 & 0xffff;
  uVar8 = ((uint)uVar9 << 0x10 | uVar4) + (int)((ulonglong)uVar9 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147728412(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x1c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
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
      FUN_147727e34(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772832c FUN_14772832c body=229 status=ok
// SIG undefined FUN_14772832c(void)

int * FUN_14772832c(longlong *param_1,int *param_2)

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



// FUNCTION 147728412 FUN_147728412 body=191 status=ok
// SIG undefined FUN_147728412(void)

undefined8 FUN_147728412(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
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
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar9 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar9 * 0x20) == *param_3) {
          plVar8 = *(longlong **)(puVar3 + 4);
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
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_147727c30(param_1,*param_4);
          *param_4 = iVar9;
          return 1;
        }
        iVar9 = puVar3[6];
      } while (iVar9 != -1);
    }
  }
  return 0;
}



// FUNCTION 1477284d2 FUN_1477284d2 body=326 status=ok
// SIG undefined FUN_1477284d2(void)

undefined4 * FUN_1477284d2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14772861a(param_1,local_48);
  puVar1 = (ulonglong *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147728700(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x14) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_147728780(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772861a FUN_14772861a body=230 status=ok
// SIG undefined FUN_14772861a(void)

int * FUN_14772861a(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 147728700 FUN_147728700 body=128 status=ok
// SIG undefined FUN_147728700(void)

undefined8 FUN_147728700(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
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
          FUN_147727d7e((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 147728780 FUN_147728780 body=474 status=ok
// SIG undefined FUN_147728780(void)

void FUN_147728780(longlong *param_1)

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
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
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



// FUNCTION 14772895c FUN_14772895c body=781 status=ok
// SIG undefined FUN_14772895c(void)

undefined4
FUN_14772895c(longlong *param_1,undefined8 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined1 auStack_c8 [40];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_147726f90(param_1 + 0x9c,&local_60,param_2);
  if (local_60 != (longlong *)0x0) goto LAB_147728a22;
  (**(code **)(*param_1 + 0x2c0))(param_1,&local_70,*param_2);
  plVar1 = local_58;
  plVar2 = local_68;
  local_60 = local_70;
  if (local_68 == (longlong *)0x0) {
    if (local_58 != (longlong *)0x0) {
      local_58 = (longlong *)0x0;
LAB_147728c2a:
      local_60 = local_70;
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000147728c19:
        if (iVar4 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    if (local_68 == local_58) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar1 = plVar2;
        goto joined_r0x000147728c19;
      }
    }
    else {
      bVar6 = local_58 != (longlong *)0x0;
      local_58 = local_68;
      if (bVar6) goto LAB_147728c2a;
    }
  }
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
LAB_147728a22:
  plVar1 = local_60;
  (**(code **)(*local_60 + 0x10))(local_60,param_3);
  local_80 = plVar1;
  local_78 = local_58;
  local_90 = plVar1;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
    local_90 = local_60;
  }
  FUN_147728012(param_1 + 0x9c,*param_2,&local_80);
  (**(code **)(*local_90 + 0x58))(local_90,&local_70);
  *(byte *)(local_70 + 6) = *(byte *)(local_70 + 6) | 0x80;
  FUN_1405d299c(local_70,param_5);
  if (param_3 < param_4) {
    local_88 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af67c8(param_1,&local_90);
  }
  else {
    local_88 = local_58;
    if (local_58 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
      UNLOCK();
    }
    FUN_146af6a2a(param_1,&local_90);
  }
  plVar1 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_88 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((*(byte *)((longlong)local_70 + 0x39) & 0x19) == 0) {
    local_9c = (float)DAT_14c8463f8;
    local_a0 = (float)DAT_14c8463f0;
  }
  else {
    FUN_144b013c4(local_70,&local_a0);
  }
  local_98 = local_a0;
  local_94 = local_9c;
  FUN_146af3580(&local_90,*(undefined4 *)((longlong)param_1 + 0x3ec));
  uVar5 = local_90._4_4_;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar3 = (int *)((longlong)local_68 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147728c6a FUN_147728c6a body=152 status=ok
// SIG undefined FUN_147728c6a(void)

void FUN_147728c6a(longlong param_1)

{
  int iVar1;
  void *_Src;
  
  iVar1 = *(int *)(param_1 + 0xb0);
  _Src = *(void **)(param_1 + 0xa8);
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0xcc) == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_1401b309e((undefined8 *)(param_1 + 0xc0),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0xc0),_Src,(longlong)iVar1 << 3);
    }
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (*(int *)(param_1 + 0xb4) != 0) {
    FUN_1402191ca(param_1 + 0xa8,0);
    return;
  }
  return;
}



// FUNCTION 147728d02 FUN_147728d02 body=125 status=ok
// SIG undefined FUN_147728d02(void)

longlong * FUN_147728d02(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  
  FUN_140a515e6(*param_1 + 8,param_3);
  FUN_147728fa2(param_1[2],*param_1,param_3);
  lVar1 = *param_1;
  bVar4 = *(byte *)(lVar1 + 0x38);
  bVar3 = 0x20;
  if ((bVar4 & 0x10) == 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 8) + 0x220))(lVar1 + 8);
    bVar3 = cVar2 << 5;
    bVar4 = *(byte *)(lVar1 + 0x38);
  }
  *(byte *)(lVar1 + 0x38) = bVar4 & 0xdf | bVar3;
  *(byte *)(*param_1 + 0x39) = *(byte *)(*param_1 + 0x39) | 4;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  return param_2;
}



// FUNCTION 147728d80 FUN_147728d80 body=333 status=ok
// SIG undefined FUN_147728d80(void)

longlong * FUN_147728d80(longlong *param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_3;
  plVar3 = (longlong *)FUN_14001cc68(0x390,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a50b300;
  plVar4 = plVar3 + 2;
  FUN_14771c7c4(plVar4);
  local_38 = plVar4;
  local_30 = plVar3;
  FUN_147728ef6(&local_38,plVar4);
  if (plVar3 == (longlong *)0x0) {
    *param_1 = 0x10;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_147728e5d;
    param_1[1] = 0;
LAB_147728e25:
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_147728e5d;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar4;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *param_1 = (longlong)plVar4;
    plVar4 = (longlong *)param_1[1];
    if (plVar3 != plVar4) {
      param_1[1] = (longlong)plVar3;
      if (plVar4 == (longlong *)0x0) goto LAB_147728e5d;
      goto LAB_147728e25;
    }
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_147728e5d;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_147728e5d:
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_48 = 0x380;
  FUN_140a52e78(*param_1 + 8,"STableRow<ItemType>",
                "Runtime\\Slate\\Public\\Widgets/Views/SListView.h",param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147728ece FUN_147728ece body=9 status=ok
// SIG undefined FUN_147728ece(void)

void FUN_147728ece(longlong param_1)

{
  FUN_14771fda2(param_1 + 0x10);
  return;
}



// FUNCTION 147728ed8 FUN_147728ed8 body=29 status=ok
// SIG undefined FUN_147728ed8(void)

undefined8 FUN_147728ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147728ef6 FUN_147728ef6 body=171 status=ok
// SIG undefined FUN_147728ef6(void)

void FUN_147728ef6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2 + 8;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_147728f75;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_147728f75;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_147728f75:
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
                    /* WARNING: Could not recover jumptable at 0x000147728f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147728fa2 FUN_147728fa2 body=198 status=ok
// SIG undefined FUN_147728fa2(void)

void FUN_147728fa2(longlong *param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)*param_1;
  local_30 = (undefined8 *)((longlong *)*param_1)[1];
  if (local_30 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_30 + 1) = *(int *)(local_30 + 1) + 1;
    UNLOCK();
    puVar3 = local_30;
  }
  local_38 = lVar2;
  FUN_14772108a(param_2,param_3,&local_38);
  (**(code **)(*param_2 + 0x80))
            (param_2,*(undefined4 *)(lVar2 + 0x270),param_3 + 0x228,param_3 + 600);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772907c FUN_14772907c body=167 status=ok
// SIG undefined FUN_14772907c(void)

void FUN_14772907c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1477290f7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1477290f7;
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
LAB_1477290f7:
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
                    /* WARNING: Could not recover jumptable at 0x000147729117. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 147729124 FUN_147729124 body=2293 status=ok
// SIG undefined FUN_147729124(void)

void FUN_147729124(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_5c8 [32];
  undefined1 *local_5a8;
  longlong local_5a0;
  undefined4 local_598;
  longlong local_590;
  undefined8 local_588;
  undefined1 local_580;
  undefined2 local_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_558;
  longlong *local_550;
  undefined8 uStack_548;
  undefined1 local_539;
  undefined8 local_538;
  longlong *plStack_530;
  undefined8 uStack_528;
  longlong *local_520 [2];
  undefined1 local_510 [16];
  undefined1 local_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  longlong *local_4e0;
  longlong local_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  longlong *plStack_4c0;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  longlong *local_4a0;
  undefined8 uStack_498;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_5c8;
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0xa2);
  FUN_147729da8((longlong *)(param_1 + 0x690),param_2 + 0x1b0);
  FUN_147729da8(param_1 + 0x6a0,param_2 + 0x1c0);
  FUN_147729e2c(param_1 + 0x680,param_2 + 0x1d0);
  FUN_146a3ba92(param_1 + 0x6d0,param_2 + 0x1e0);
  FUN_147729eb0(param_1 + 0x6e0,param_2 + 0x200);
  FUN_14009d848(param_1 + 0x6f0,param_2 + 0x210);
  plVar9 = *(longlong **)(param_1 + 0x10);
  if (plVar9 == (longlong *)0x0) {
LAB_1477291d6:
    local_4c8 = 0;
    plStack_4c0 = (longlong *)0x0;
    bVar11 = true;
  }
  else {
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_1477291d6;
      LOCK();
      iVar4 = (int)plVar9[1];
      bVar11 = iVar7 == iVar4;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar4 = iVar7;
      }
      iVar7 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
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
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    bVar11 = false;
    local_4c8 = uVar8;
    plStack_4c0 = plVar9;
  }
  plVar9 = plStack_4c0;
  FUN_147729af2(param_2,local_4b0,&local_4c8);
  FUN_147729a1a(param_1,local_4b0);
  if (!bVar11) {
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
  FUN_146a3c65e(param_1 + 0x370,param_2 + 0x270);
  FUN_14009d848(param_1 + 0x380,param_2 + 0x280);
  FUN_14772a9f8(param_1 + 0x7f0,param_2 + 0x290);
  FUN_14772a9f8(param_1 + 0x800,param_2 + 0x2a0);
  FUN_14771be34(param_1 + 2000,param_2 + 0x2b0);
  FUN_145d7bdb2(param_1 + 0x7e0,param_2 + 0x2c0);
  *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_2 + 0x2d4);
  *(undefined4 *)(param_1 + 0x390) = *(undefined4 *)(param_2 + 0x2d0);
  FUN_146a3c86e(param_1 + 0x398,param_2 + 0x2d8);
  *(undefined1 *)(param_1 + 0x83c) = *(undefined1 *)(param_2 + 0x2f8);
  *(undefined1 *)(param_1 + 0x4c8) = *(undefined1 *)(param_2 + 0x341);
  *(undefined1 *)(param_1 + 0x4c9) = *(undefined1 *)(param_2 + 0x351);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_2 + 0x354);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_2 + 0x358);
  *(undefined1 *)(param_1 + 0x83d) = *(undefined1 *)(param_2 + 0x36c);
  *(undefined1 *)(param_1 + 0x83e) = *(undefined1 *)(param_2 + 0x36d);
  *(undefined1 *)(param_1 + 0x83f) = *(undefined1 *)(param_2 + 0x36e);
  *(undefined2 *)(param_1 + 0x820) = *(undefined2 *)(param_2 + 0x370);
  FUN_14096c7c0(param_1 + 0x828,param_2 + 0x378);
  *(undefined1 *)(param_1 + 0x840) = *(undefined1 *)(param_2 + 0x388);
  *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(param_2 + 0x315);
  if ((undefined8 *)(param_2 + 0x318) != (undefined8 *)(param_1 + 0x2c8)) {
    if (*(char *)(param_2 + 800) == '\x01') {
      *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x318);
      uVar6 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x2d0) != '\x01') goto LAB_147729386;
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x2d0) = uVar6;
  }
LAB_147729386:
  *(undefined1 *)(param_1 + 0x7cc) = *(undefined1 *)(param_2 + 0x314);
  if (*(longlong **)(param_2 + 0x390) != (longlong *)0x0 && *(int *)(param_2 + 0x398) != 0) {
    cVar5 = (**(code **)(**(longlong **)(param_2 + 0x390) + 0x30))();
    if (cVar5 != '\0') {
      local_4a8 = (longlong *)0x0;
      local_4a0 = (longlong *)((ulonglong)local_4a0 & 0xffffffff00000000);
      FUN_14772aa7c(&local_4a8,param_2 + 0x390);
      goto LAB_147729452;
    }
  }
  local_4a8 = (longlong *)0x0;
  local_4a0._0_4_ = 0;
  FUN_1446efa72(&local_4a8,0,2,0x10);
  local_4a0 = (longlong *)CONCAT44(local_4a0._4_4_,2);
  *local_4a8 = (longlong)&PTR_LAB_14a50b540;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_4a8[2] = lVar10;
  *local_4a8 = (longlong)&PTR_FUN_14a50b4d0;
  local_4a8[3] = (longlong)FUN_14772ab00;
LAB_147729452:
  FUN_14772aa7c(param_1 + 0x6b0,&local_4a8);
  FUN_1449db362(&local_4a8);
  FUN_14009d848(param_1 + 0x6c0,param_2 + 0x3a0);
  FUN_14603678a(param_1 + 0x810,param_2 + 0x3b0);
  FUN_147729cb2(param_1,*(undefined8 *)(param_2 + 0x1a8));
  *(undefined1 *)(param_1 + 0x854) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x850) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x858,param_2 + 0x260);
  *(undefined1 *)(param_1 + 0x86c) = *(undefined1 *)(param_2 + 0x25c);
  *(undefined4 *)(param_1 + 0x868) = *(undefined4 *)(param_2 + 600);
  FUN_146a24854(param_1 + 0x870,param_2 + 0x260);
  uVar8 = *(undefined8 *)(param_2 + 0x364);
  *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_2 + 0x35c);
  *(undefined8 *)(param_1 + 0x2b0) = uVar8;
  local_4d8 = 0;
  uStack_4d0 = 0;
  if (((*(int *)(param_1 + 0x698) == 0) ||
      (plVar9 = *(longlong **)(param_1 + 0x690), plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*plVar9 + 0x30))(), cVar5 == '\0')) {
    FUN_1400020e8(&local_4d8,L"Please specify an OnGenerateRow. \n",0x22);
  }
  if (*(longlong *)(param_1 + 0x888) == 0) {
    FUN_1400020e8(&local_4d8,L"Please specify a ListItemsSource. \n",0x23);
  }
  if ((int)uStack_4d0 - 2U < 0x7fffffff) {
    *(undefined1 **)(param_1 + 0x228) = &DAT_200000002;
    FUN_140a570d8(&local_4a8);
    FUN_140009b9a(local_520,&local_4d8);
    FUN_14023423e(local_510,local_520);
    local_500 = 1;
    local_4f8 = 0;
    uStack_4f0 = 0;
    uVar8 = FUN_140a54906(&local_4a8,local_510);
    local_5a8 = &local_539;
    FUN_140a54526(&local_538,"STextBlock","Runtime\\Slate\\Public\\Widgets/Views/SListView.h",0x122)
    ;
    FUN_140a52852(&local_538,&local_4e8,uVar8);
    local_558 = local_4e8;
    local_550 = local_4e0;
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
      UNLOCK();
    }
    FUN_140a58896(param_1 + 0x1e0,&local_558);
    plVar9 = local_550;
    if (local_550 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_550 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_550)(local_550);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_4e0 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_4e0 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_4e0)(local_4e0);
        LOCK();
        piVar2 = (int *)((longlong)local_4e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_4e0 + 0x10))(local_4e0);
        }
      }
    }
    plVar9 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_530)(plStack_530);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (local_520[0] != (longlong *)0x0) {
      (**(code **)(*local_520[0] + 0x10))();
    }
    FUN_140a59ae6(&local_4a8);
  }
  else {
    local_580 = *(undefined1 *)(param_2 + 0x350);
    local_588 = *(undefined8 *)(param_2 + 0x348);
    local_590 = param_2 + 0x1f0;
    local_598 = *(undefined4 *)(param_2 + 0x310);
    local_5a0 = param_2 + 0x300;
    local_5a8 = (undefined1 *)(param_2 + 0x2e8);
    local_4a8 = (longlong *)CONCAT62(local_4a8._2_6_,0x103);
    local_4a0 = (longlong *)0x0;
    uStack_498 = 0;
    local_538 = CONCAT35((int3)((ulonglong)local_538 >> 0x28),0x100000000);
    plStack_530 = (longlong *)0x0;
    uStack_528 = 0;
    local_558 = CONCAT35(local_558._5_3_,0x100000000);
    local_550 = (longlong *)0x0;
    uStack_548 = 0;
    FUN_1429092be(param_1,&local_558,&local_538,&local_4a8);
    FUN_1449db362(&local_550);
    FUN_1449db362(&plStack_530);
    FUN_1449db362(&local_4a0);
    if (*(longlong *)(param_1 + 0x298) != 0) {
      FUN_146a92d5a(*(longlong *)(param_1 + 0x298),*(undefined1 *)(param_2 + 0x340));
      lVar3 = *(longlong *)(param_1 + 0x298);
      local_570 = *(undefined2 *)(param_2 + 0x328);
      local_568 = 0;
      local_560 = 0;
      FUN_140fe25fc(&local_568,param_2 + 0x330);
      *(undefined1 *)(lVar3 + 0x2a0) = (undefined1)local_570;
      *(undefined1 *)(lVar3 + 0x2a1) = local_570._1_1_;
      FUN_140fe25fc(lVar3 + 0x2a8,&local_568);
      FUN_1449db362(&local_568);
    }
    plVar9 = *(longlong **)(param_1 + 0x10);
    if (plVar9 == (longlong *)0x0) {
LAB_14772990a:
      local_538 = 0;
      plStack_530 = (longlong *)0x0;
    }
    else {
      iVar7 = (int)plVar9[1];
      do {
        if (iVar7 == 0) goto LAB_14772990a;
        LOCK();
        iVar4 = (int)plVar9[1];
        bVar11 = iVar7 == iVar4;
        if (bVar11) {
          *(int *)(plVar9 + 1) = iVar7 + 1;
          iVar4 = iVar7;
        }
        iVar7 = iVar4;
        UNLOCK();
      } while (!bVar11);
      local_538 = *(undefined8 *)(param_1 + 8);
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar9 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_530 = plVar9;
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
    plVar9 = (longlong *)FUN_14001cc68(0x28,0x10);
    FUN_14772ad30(plVar9,&local_538);
    local_4a8 = plVar9 + 2;
    local_4a0 = plVar9;
    FUN_147729d2a(param_1);
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
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar9 = plStack_530;
    if (plStack_530 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_530 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_530)(plStack_530);
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
  if (local_4d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_5c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147729a1a FUN_147729a1a body=215 status=ok
// SIG undefined FUN_147729a1a(void)

void FUN_147729a1a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)((longlong)param_1 + 0x31) & 4) == 0) {
    param_1 = param_1 + 0x111;
    if (param_1 != param_2) {
      puVar2 = (undefined8 *)*param_1;
      *param_1 = *param_2;
      *param_2 = 0;
      if (puVar2 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else {
    (**(code **)(param_1[0x9b] + 0x30))(param_1 + 0x9b);
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined1 *)((longlong)param_1 + 0x841) = 0;
    param_1[0xf7] = 0;
    FUN_146af6b36(param_1);
    plVar1 = param_1 + 0x111;
    if (plVar1 != param_2) {
      puVar2 = (undefined8 *)*plVar1;
      *plVar1 = *param_2;
      *param_2 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    (**(code **)(*param_1 + 0x248))(param_1);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000147729ae6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar2)(puVar2,1);
  return;
}



// FUNCTION 147729af2 FUN_147729af2 body=445 status=ok
// SIG undefined FUN_147729af2(void)

undefined8 * FUN_147729af2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x220);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x228);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x230);
      if (lVar3 == 0) {
        *param_2 = 0;
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x238);
        if (plVar4 == (longlong *)0x0) {
          uVar6 = FUN_14001cc68(0x30,0x10);
          local_38 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          uVar6 = FUN_14001cc68(0x30,0x10);
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          local_38 = plVar4;
        }
        local_50 = *param_3;
        local_48 = param_3[1];
        if (local_48 != 0) {
          LOCK();
          *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
          UNLOCK();
        }
        local_40 = lVar3;
        FUN_14772a4fc(uVar6,&local_50,&local_40);
        *param_2 = uVar6;
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
      }
    }
    else {
      uVar6 = FUN_14001cc68(0x28,0x10);
      local_40 = *param_3;
      local_38 = (longlong *)param_3[1];
      if (local_38 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_38 + 1) = (int)local_38[1] + 1;
        UNLOCK();
      }
      FUN_147729f6e(uVar6,&local_40,lVar3);
      *param_2 = uVar6;
    }
  }
  else {
    puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar5 = &PTR_FUN_14a50b320;
    puVar5[1] = lVar3;
    *param_2 = puVar5;
  }
  plVar4 = (longlong *)param_3[1];
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147729cb2 FUN_147729cb2 body=119 status=ok
// SIG undefined FUN_147729cb2(void)

void FUN_147729cb2(longlong param_1,longlong param_2)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(longlong *)(param_1 + 0x848) = param_2;
  if (param_2 == 0) {
    local_38 = FUN_141319416();
  }
  else {
    local_38 = param_2 + 0x10;
  }
  local_30 = 1;
  local_28 = 0;
  uStack_20 = 0;
  FUN_146af67b6(param_1,&local_38);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147729d2a FUN_147729d2a body=125 status=ok
// SIG undefined FUN_147729d2a(void)

void FUN_147729d2a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = (longlong *)param_2[1];
  if (local_18 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_18 + 1) = (int)local_18[1] + 1;
    UNLOCK();
  }
  FUN_14287bbd4(param_1,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147729da8 FUN_147729da8 body=130 status=ok
// SIG undefined FUN_147729da8(void)

void FUN_147729da8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147729e2c FUN_147729e2c body=130 status=ok
// SIG undefined FUN_147729e2c(void)

void FUN_147729e2c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147729eb0 FUN_147729eb0 body=130 status=ok
// SIG undefined FUN_147729eb0(void)

void FUN_147729eb0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147729f34 FUN_147729f34 body=29 status=ok
// SIG undefined FUN_147729f34(void)

undefined8 FUN_147729f34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147729f6e FUN_147729f6e body=175 status=ok
// SIG undefined FUN_147729f6e(void)

undefined8 * FUN_147729f6e(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14a50b340;
  param_1[1] = param_3;
  param_1[2] = *param_2;
  lVar3 = param_2[1];
  param_1[3] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[4] = 0;
  FUN_14772a01e(param_3 + 0x10,&local_28,param_1);
  param_1[4] = local_28;
  plVar4 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a01e FUN_14772a01e body=228 status=ok
// SIG undefined FUN_14772a01e(void)

undefined8 FUN_14772a01e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14a50b3d0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a50b360;
  local_38[3] = param_3;
  local_38[4] = FUN_14772a104;
  FUN_14772a1a6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a104 FUN_14772a104 body=91 status=ok
// SIG undefined FUN_14772a104(void)

void FUN_14772a104(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x240))();
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
                    /* WARNING: Could not recover jumptable at 0x00014772a154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14772a160 FUN_14772a160 body=38 status=ok
// SIG undefined FUN_14772a160(void)

undefined8 FUN_14772a160(undefined8 param_1,int param_2)

{
  FUN_14772a4b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772a1a6 FUN_14772a1a6 body=230 status=ok
// SIG undefined FUN_14772a1a6(void)

undefined8 * FUN_14772a1a6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined7 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if ((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,CONCAT71(uVar5,1));
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
        local_30 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
      }
      *param_2 = local_30;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a28e FUN_14772a28e body=29 status=ok
// SIG undefined FUN_14772a28e(void)

undefined8 FUN_14772a28e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772a2d4 FUN_14772a2d4 body=93 status=ok
// SIG undefined FUN_14772a2d4(void)

void FUN_14772a2d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50b3d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14772a332 FUN_14772a332 body=93 status=ok
// SIG undefined FUN_14772a332(void)

void FUN_14772a332(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50b3d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14772a390 FUN_14772a390 body=126 status=ok
// SIG undefined FUN_14772a390(void)

void FUN_14772a390(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50b3d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50b360;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014772a3ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14772a40e FUN_14772a40e body=79 status=ok
// SIG undefined FUN_14772a40e(void)

void FUN_14772a40e(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a45e FUN_14772a45e body=81 status=ok
// SIG undefined FUN_14772a45e(void)

undefined8 FUN_14772a45e(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a4b2 FUN_14772a4b2 body=74 status=ok
// SIG undefined FUN_14772a4b2(void)

void FUN_14772a4b2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50b340;
  if (param_1[4] != 0) {
    FUN_14480f766(param_1[1] + 0x10);
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014772a4f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14772a4fc FUN_14772a4fc body=240 status=ok
// SIG undefined FUN_14772a4fc(void)

undefined8 * FUN_14772a4fc(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a50b440;
  param_1[1] = *param_3;
  lVar3 = param_3[1];
  param_1[2] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_2;
  lVar3 = param_2[1];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  FUN_14772a5ee(*param_3 + 0x10,&local_30,param_1);
  param_1[5] = local_30;
  plVar4 = (longlong *)param_2[1];
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
  plVar4 = (longlong *)param_3[1];
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
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a5ee FUN_14772a5ee body=228 status=ok
// SIG undefined FUN_14772a5ee(void)

undefined8 FUN_14772a5ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_14a50b3d0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a50b460;
  local_38[3] = param_3;
  local_38[4] = FUN_14772a6d4;
  FUN_14772a1a6(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a6d4 FUN_14772a6d4 body=91 status=ok
// SIG undefined FUN_14772a6d4(void)

void FUN_14772a6d4(longlong param_1)

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
    do {
      if (iVar5 == 0) {
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x18) + 0x240))();
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
                    /* WARNING: Could not recover jumptable at 0x00014772a724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14772a730 FUN_14772a730 body=38 status=ok
// SIG undefined FUN_14772a730(void)

undefined8 FUN_14772a730(undefined8 param_1,int param_2)

{
  FUN_14772a988();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772a772 FUN_14772a772 body=29 status=ok
// SIG undefined FUN_14772a772(void)

undefined8 FUN_14772a772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772a7ac FUN_14772a7ac body=93 status=ok
// SIG undefined FUN_14772a7ac(void)

void FUN_14772a7ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50b3d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14772a80a FUN_14772a80a body=93 status=ok
// SIG undefined FUN_14772a80a(void)

void FUN_14772a80a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50b3d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b460;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14772a868 FUN_14772a868 body=126 status=ok
// SIG undefined FUN_14772a868(void)

void FUN_14772a868(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a50b3d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50b460;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014772a8d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14772a8e6 FUN_14772a8e6 body=79 status=ok
// SIG undefined FUN_14772a8e6(void)

void FUN_14772a8e6(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a936 FUN_14772a936 body=81 status=ok
// SIG undefined FUN_14772a936(void)

undefined8 FUN_14772a936(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_18 = param_2[4];
  uStack_14 = param_2[5];
  uStack_10 = param_2[6];
  uStack_c = param_2[7];
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772a988 FUN_14772a988 body=112 status=ok
// SIG undefined FUN_14772a988(void)

void FUN_14772a988(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a50b440;
  if (param_1[5] != 0) {
    FUN_14480f766(param_1[1] + 0x10);
  }
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x00014772a9ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14772a9f8 FUN_14772a9f8 body=130 status=ok
// SIG undefined FUN_14772a9f8(void)

void FUN_14772a9f8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772aa7c FUN_14772aa7c body=130 status=ok
// SIG undefined FUN_14772aa7c(void)

void FUN_14772aa7c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ab00 FUN_14772ab00 body=70 status=ok
// SIG undefined FUN_14772ab00(void)

undefined8 FUN_14772ab00(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  FUN_1400021e4(&local_18,param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ab48 FUN_14772ab48 body=29 status=ok
// SIG undefined FUN_14772ab48(void)

undefined8 FUN_14772ab48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772ab88 FUN_14772ab88 body=93 status=ok
// SIG undefined FUN_14772ab88(void)

void FUN_14772ab88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50b540;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b4d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14772abe6 FUN_14772abe6 body=93 status=ok
// SIG undefined FUN_14772abe6(void)

void FUN_14772abe6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a50b540;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b4d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14772ac44 FUN_14772ac44 body=126 status=ok
// SIG undefined FUN_14772ac44(void)

void FUN_14772ac44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a50b540;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50b4d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014772acb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14772acc2 FUN_14772acc2 body=29 status=ok
// SIG undefined FUN_14772acc2(void)

undefined8 FUN_14772acc2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return param_2;
}



// FUNCTION 14772ace0 FUN_14772ace0 body=77 status=ok
// SIG undefined FUN_14772ace0(void)

undefined8 FUN_14772ace0(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(param_1 + 0x18))(local_20);
  if (local_20[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772ad30 FUN_14772ad30 body=150 status=ok
// SIG undefined FUN_14772ad30(void)

undefined8 * FUN_14772ad30(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14a50b5b0;
  plVar3 = (longlong *)param_2[1];
  lVar4 = *param_2 + 0x4d8;
  if (*param_2 == 0) {
    lVar4 = 0;
  }
  if (plVar3 == (longlong *)0x0) {
    param_1[2] = &PTR_FUN_14a50b5d0;
    param_1[3] = lVar4;
    param_1[4] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[2] = &PTR_FUN_14a50b5d0;
    param_1[3] = lVar4;
    param_1[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
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



// FUNCTION 14772ade8 FUN_14772ade8 body=29 status=ok
// SIG undefined FUN_14772ade8(void)

undefined8 FUN_14772ade8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772ae06 FUN_14772ae06 body=64 status=ok
// SIG undefined FUN_14772ae06(void)

undefined8 * FUN_14772ae06(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50b5d0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772ae46 FUN_14772ae46 body=49 status=ok
// SIG undefined FUN_14772ae46(void)

bool FUN_14772ae46(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  
  FUN_14772afee();
  bVar2 = true;
  if (DAT_14cab76c8 != *param_2) {
    plVar1 = (longlong *)FUN_146a3cf3e();
    bVar2 = *plVar1 == *param_2;
  }
  return bVar2;
}



// FUNCTION 14772ae78 FUN_14772ae78 body=373 status=ok
// SIG undefined FUN_14772ae78(void)

longlong * FUN_14772ae78(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_14772afc4;
      LOCK();
      iVar7 = (int)plVar3[1];
      bVar11 = iVar8 == iVar7;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar11);
    plVar4 = *(longlong **)(param_1 + 8);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0xd0))(plVar4,&local_50);
      if ((longlong)local_48 != 0) {
        lVar9 = (longlong)local_48 << 3;
        lVar10 = local_50;
        do {
          (**(code **)(*plVar4 + 0xd8))(plVar4,&local_60,lVar10);
          if (local_60 != 0) {
            iVar8 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar8 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
              FUN_146a3d014(param_2,iVar8);
            }
            lVar5 = *param_2;
            *(longlong *)(lVar5 + (longlong)iVar8 * 0x10) = local_60;
            *(longlong **)(lVar5 + 8 + (longlong)iVar8 * 0x10) = local_58;
            if (local_58 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_58 + 1) = (int)local_58[1] + 1;
              UNLOCK();
            }
          }
          plVar6 = local_58;
          if (local_58 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_58 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_58)(local_58);
              LOCK();
              piVar2 = (int *)((longlong)plVar6 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
          }
          lVar10 = lVar10 + 8;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (local_50 != 0) {
        FUN_1400020a8(local_50);
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
  }
LAB_14772afc4:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14772afee FUN_14772afee body=104 status=ok
// SIG undefined FUN_14772afee(void)

void FUN_14772afee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab76d0) {
    FUN_144b3d300(&DAT_14cab76d0);
    if (DAT_14cab76d0 == -1) {
      FUN_1446f470e(&DAT_14cab76c8,L"TTableViewMetadata",1);
      _Init_thread_footer(&DAT_14cab76d0);
      return;
    }
  }
  return;
}



// FUNCTION 14772b056 FUN_14772b056 body=386 status=ok
// SIG undefined FUN_14772b056(void)

longlong * FUN_14772b056(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_14772b167:
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14a50b5f0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14772b167;
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
    *puVar5 = &PTR_LAB_149e06450;
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
    *puVar5 = &PTR_FUN_14a50b5f0;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14772b1d8 FUN_14772b1d8 body=64 status=ok
// SIG undefined FUN_14772b1d8(void)

undefined8 * FUN_14772b1d8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a50b5f0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772b21c FUN_14772b21c body=81 status=ok
// SIG undefined FUN_14772b21c(void)

undefined8 FUN_14772b21c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 14772b274 FUN_14772b274 body=89 status=ok
// SIG undefined FUN_14772b274(void)

bool FUN_14772b274(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_14772b2bf;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_14772b2bf:
  return lVar6 == param_2;
}



// FUNCTION 14772b2ea FUN_14772b2ea body=118 status=ok
// SIG undefined FUN_14772b2ea(void)

void FUN_14772b2ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b5f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14772b360 FUN_14772b360 body=118 status=ok
// SIG undefined FUN_14772b360(void)

void FUN_14772b360(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b5f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 14772b3d6 FUN_14772b3d6 body=156 status=ok
// SIG undefined FUN_14772b3d6(void)

void FUN_14772b3d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50b5f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x2c);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  p_Var1->Flags = *(DWORD *)(param_1 + 0x28);
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar3;
  p_Var1->SpareWORD = (short)((uint)uVar3 >> 0x10);
  p_Var1[1].Type = (short)uVar4;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar4 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar5;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014772b462. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14772b472 FUN_14772b472 body=104 status=ok
// SIG undefined FUN_14772b472(void)

void FUN_14772b472(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014772b4bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014772b4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14772b4da FUN_14772b4da body=101 status=ok
// SIG undefined FUN_14772b4da(void)

ulonglong FUN_14772b4da(longlong param_1)

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
LAB_14772b534:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14772b534;
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



// FUNCTION 14772b540 FUN_14772b540 body=153 status=ok
// SIG undefined FUN_14772b540(void)

void FUN_14772b540(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((*(int *)(param_1 + 0x3a0) != 0) && (*(longlong **)(param_1 + 0x398) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x398) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x3a0) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x398);
      }
      iVar2 = (**(code **)(*plVar3 + 0x58))();
      *(int *)(param_1 + 0x390) = iVar2;
      goto LAB_14772b58c;
    }
  }
  iVar2 = *(int *)(param_1 + 0x390);
LAB_14772b58c:
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x708) != *(int *)(param_1 + 0x734))) {
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x30))(param_1 + 0x4d8);
                    /* WARNING: Could not recover jumptable at 0x00014772b5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x4d8) + 0x40))(param_1 + 0x4d8,3);
    return;
  }
  return;
}



// FUNCTION 14772b5da FUN_14772b5da body=73 status=ok
// SIG undefined FUN_14772b5da(void)

undefined8 * FUN_14772b5da(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 9) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1);
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772b624 FUN_14772b624 body=32 status=ok
// SIG undefined FUN_14772b624(void)

undefined8 FUN_14772b624(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FObjectFinder");
  return param_2;
}



// FUNCTION 14772b644 FUN_14772b644 body=29 status=ok
// SIG undefined FUN_14772b644(void)

undefined8 FUN_14772b644(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772b67c FUN_14772b67c body=29 status=ok
// SIG undefined FUN_14772b67c(void)

bool FUN_14772b67c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14772b69a FUN_14772b69a body=26 status=ok
// SIG undefined FUN_14772b69a(void)

bool FUN_14772b69a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14772b6b4 FUN_14772b6b4 body=24 status=ok
// SIG undefined FUN_14772b6b4(void)

bool FUN_14772b6b4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14772b6cc FUN_14772b6cc body=101 status=ok
// SIG undefined FUN_14772b6cc(void)

void FUN_14772b6cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f18800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14772b732 FUN_14772b732 body=101 status=ok
// SIG undefined FUN_14772b732(void)

void FUN_14772b732(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f18800;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b660;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14772b798 FUN_14772b798 body=134 status=ok
// SIG undefined FUN_14772b798(void)

void FUN_14772b798(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f18800;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50b660;
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
                    /* WARNING: Could not recover jumptable at 0x00014772b80f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14772b81e FUN_14772b81e body=153 status=ok
// SIG undefined FUN_14772b81e(void)

undefined8 FUN_14772b81e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  local_30 = *param_3;
  local_28 = param_3[1];
  *param_3 = 0;
  param_3[1] = 0;
  (*pcVar4)(iVar3 + lVar6,param_2);
  plVar5 = (longlong *)param_3[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772b8b8 FUN_14772b8b8 body=267 status=ok
// SIG undefined FUN_14772b8b8(void)

bool FUN_14772b8b8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar8 = local_38;
  }
  else {
    lVar8 = 0;
  }
  lVar7 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar7 != 0) {
    pcVar4 = *(code **)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x28);
    local_38 = *param_2;
    local_30 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar4)(iVar3 + lVar7,local_48);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_40 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
  }
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar7 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772b9c4 FUN_14772b9c4 body=29 status=ok
// SIG undefined FUN_14772b9c4(void)

undefined8 FUN_14772b9c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772b9fc FUN_14772b9fc body=29 status=ok
// SIG undefined FUN_14772b9fc(void)

bool FUN_14772b9fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14772ba1a FUN_14772ba1a body=26 status=ok
// SIG undefined FUN_14772ba1a(void)

bool FUN_14772ba1a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14772ba34 FUN_14772ba34 body=24 status=ok
// SIG undefined FUN_14772ba34(void)

bool FUN_14772ba34(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14772ba4c FUN_14772ba4c body=101 status=ok
// SIG undefined FUN_14772ba4c(void)

void FUN_14772ba4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f18090;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14772bab2 FUN_14772bab2 body=101 status=ok
// SIG undefined FUN_14772bab2(void)

void FUN_14772bab2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f18090;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a50b6d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14772bb18 FUN_14772bb18 body=134 status=ok
// SIG undefined FUN_14772bb18(void)

void FUN_14772bb18(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149f18090;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a50b6d0;
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
                    /* WARNING: Could not recover jumptable at 0x00014772bb8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14772bb9e FUN_14772bb9e body=150 status=ok
// SIG undefined FUN_14772bb9e(void)

void FUN_14772bb9e(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = FUN_14479d2ce(param_1 + 0x18);
  pcVar4 = *(code **)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x28);
  local_30 = *param_2;
  local_28 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  (*pcVar4)(iVar3 + lVar6,&local_30,param_3);
  plVar5 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772bc36 FUN_14772bc36 body=230 status=ok
// SIG undefined FUN_14772bc36(void)

bool FUN_14772bc36(longlong param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar6 = FUN_144a61b4f();
  if (cVar6 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar8 = local_40;
  }
  else {
    lVar8 = 0;
  }
  lVar7 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar7 != 0) {
    pcVar4 = *(code **)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x28);
    local_40 = *param_2;
    local_38 = param_2[1];
    *param_2 = 0;
    param_2[1] = 0;
    (*pcVar4)(iVar3 + lVar7,&local_40,param_3);
  }
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  plVar5 = (longlong *)param_2[1];
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar7 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772bd1e FUN_14772bd1e body=29 status=ok
// SIG undefined FUN_14772bd1e(void)

undefined8 FUN_14772bd1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14772bd56 FUN_14772bd56 body=29 status=ok
// SIG undefined FUN_14772bd56(void)

bool FUN_14772bd56(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14772bd74 FUN_14772bd74 body=26 status=ok
// SIG undefined FUN_14772bd74(void)

bool FUN_14772bd74(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14772bd8e FUN_14772bd8e body=24 status=ok
// SIG undefined FUN_14772bd8e(void)

bool FUN_14772bd8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14772bda6 FUN_14772bda6 body=101 status=ok
// SIG undefined FUN_14772bda6(void)

void FUN_14772bda6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a50b740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14772be0c FUN_14772be0c body=101 status=ok
// SIG undefined FUN_14772be0c(void)

void FUN_14772be0c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14a50b740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14772be72 FUN_14772be72 body=134 status=ok
// SIG undefined FUN_14772be72(void)

void FUN_14772be72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14a50b740;
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
                    /* WARNING: Could not recover jumptable at 0x00014772bee9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14772bef8 FUN_14772bef8 body=39 status=ok
// SIG undefined FUN_14772bef8(void)

void FUN_14772bef8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014772bf1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 14772bf20 FUN_14772bf20 body=146 status=ok
// SIG undefined FUN_14772bf20(void)

bool FUN_14772bf20(longlong param_1)

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
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14772bfb4 FUN_14772bfb4 body=118 status=ok
// SIG undefined FUN_14772bfb4(void)

void FUN_14772bfb4(longlong *param_1,uint param_2)

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


