// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1456c171c FUN_1456c171c body=338 status=ok
// SIG undefined FUN_1456c171c(void)

void FUN_1456c171c(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1410c2540();
  FUN_1446ddc76(local_38,"StandIn.Echo4",1);
  FUN_1447683ea(&local_30,local_38,1);
  *(undefined8 *)(param_1 + 0x338) = local_30;
  FUN_1446ddc76(local_38,"StandIn.PlayerCharacter",1);
  FUN_1447683ea(&local_30,local_38,1);
  *(undefined8 *)(param_1 + 0x340) = local_30;
  FUN_1446ddc76(local_38,"StandIn.Vehicle",1);
  FUN_1447683ea(&local_30,local_38,1);
  *(undefined8 *)(param_1 + 0x348) = local_30;
  FUN_1446ddc76(local_38,"StandIn.Item",1);
  FUN_1447683ea(&local_30,local_38,1);
  *(undefined8 *)(param_1 + 0x350) = local_30;
  FUN_1446ddc76(local_38,"StandIn.Echo4",1);
  FUN_1447683ea(&local_30,local_38,1);
  *(undefined8 *)(param_1 + 0x358) = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c1870 FUN_1456c1870 body=426 status=ok
// SIG undefined FUN_1456c1870(void)

void FUN_1456c1870(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1456c1b72();
  if (*(longlong *)(param_1 + 0x150) != 0) goto LAB_1456c1904;
  local_28 = (longlong *)FUN_1456c1abe();
  local_30 = local_28 + 2;
  FUN_1456c1a1c(&local_30);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x150) = local_30;
    plVar6 = *(longlong **)(param_1 + 0x158);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x158) = 0;
LAB_1456c19b0:
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x0001456c19e7:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x150) = local_30;
    plVar6 = *(longlong **)(param_1 + 0x158);
    if (local_28 == plVar6) {
      LOCK();
      plVar6 = local_28 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar6 = plVar1;
        goto joined_r0x0001456c19e7;
      }
    }
    else {
      *(longlong **)(param_1 + 0x158) = local_28;
      if (plVar6 != (longlong *)0x0) goto LAB_1456c19b0;
    }
  }
  plVar1 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_28 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
LAB_1456c1904:
  lVar4 = DAT_14cb259f8;
  if (DAT_14cb259f8 != 0) {
    FUN_1400b22c2(&local_30,"StandInViewerOwner");
    uVar5 = FUN_1458c8dfc(param_1);
    local_40 = *(undefined8 *)(param_1 + 0x150);
    local_38 = *(longlong *)(param_1 + 0x158);
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1456c1c2a(lVar4,&local_40,uVar5,&local_30);
    if (local_30 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c1a1c FUN_1456c1a1c body=162 status=ok
// SIG undefined FUN_1456c1a1c(void)

void FUN_1456c1a1c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_1456c1a5b;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_1456c1a5b;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1456c1a5b:
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
                    /* WARNING: Could not recover jumptable at 0x0001456c1aba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1456c1abe FUN_1456c1abe body=179 status=ok
// SIG undefined FUN_1456c1abe(void)

void FUN_1456c1abe(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x110,0x10);
  puVar1[1] = &DAT_100000001;
  *puVar1 = &PTR_FUN_14acb7c90;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[2] = 0xffffffffffffffff;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3ff00000;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0x3ff0000000000000;
  puVar1[0x11] = 0x3ff0000000000000;
  puVar1[0x12] = 0x3ff0000000000000;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xb4) = 0;
  *(undefined4 *)(puVar1 + 0x17) = 0;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0x3ff00000;
  puVar1[0x18] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0x3ff0000000000000;
  puVar1[0x1d] = 0x3ff0000000000000;
  puVar1[0x1e] = 0x3ff0000000000000;
  puVar1[0x1f] = 0;
  return;
}



// FUNCTION 1456c1b72 FUN_1456c1b72 body=182 status=ok
// SIG undefined FUN_1456c1b72(void)

void FUN_1456c1b72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  lVar4 = DAT_14cb259f8;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = *(longlong **)(param_1 + 0x150);
  if (plVar3 != (longlong *)0x0) {
    if ((*plVar3 != -1) && (DAT_14cb259f8 != 0)) {
      local_20 = *(longlong *)(param_1 + 0x158);
      if (local_20 != 0) {
        LOCK();
        *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
        UNLOCK();
      }
      local_28 = plVar3;
      FUN_145a1fe88(lVar4,&local_28);
    }
    *(undefined8 *)(param_1 + 0x150) = 0;
    plVar3 = *(longlong **)(param_1 + 0x158);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x158) = 0;
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c1c2a FUN_1456c1c2a body=291 status=ok
// SIG undefined FUN_1456c1c2a(void)

ulonglong FUN_1456c1c2a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  void *_Src;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_4 + 1);
    lVar8 = (longlong)local_48;
    _Src = (void *)*param_4;
    if (lVar8 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar8 * 2);
      lVar6 = *param_2;
    }
    local_58 = param_2[1];
    if (local_58 != 0) {
      LOCK();
      *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
      UNLOCK();
    }
    local_60 = lVar6;
    cVar5 = FUN_140072114(uVar3,&local_60,param_3,&local_50);
    if (cVar5 != '\0') {
      FUN_140072006(*(undefined8 *)(param_1 + 0x40));
      FUN_1456c1d4e(*(undefined8 *)(param_1 + 0x70));
      uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_1456c1cec;
    }
  }
  uVar7 = 0;
LAB_1456c1cec:
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
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c1d4e FUN_1456c1d4e body=366 status=ok
// SIG undefined FUN_1456c1d4e(void)

void FUN_1456c1d4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb25ab0 != '\x01') goto LAB_1456c1e29;
  lVar6 = FUN_144a7ae82();
  if (lVar6 == 0) {
LAB_1456c1dc1:
    FUN_1400722b8(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  lVar3 = *(longlong *)(lVar6 + 0x128);
  plVar4 = *(longlong **)(lVar6 + 0x130);
  if (plVar4 == (longlong *)0x0) {
    local_40 = lVar3;
    if (lVar3 == *(longlong *)(param_1 + 0x20)) goto LAB_1456c1dc1;
LAB_1456c1ea2:
    local_38 = (longlong *)0x0;
  }
  else {
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
    lVar5 = *(longlong *)(param_1 + 0x20);
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
    if (lVar3 == lVar5) goto LAB_1456c1dc1;
    local_40 = *(longlong *)(lVar6 + 0x128);
    plVar4 = *(longlong **)(lVar6 + 0x130);
    if (plVar4 == (longlong *)0x0) goto LAB_1456c1ea2;
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
    local_38 = plVar4;
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
  FUN_1456c1ed0(param_1,&local_40);
LAB_1456c1e29:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456c1ed0 FUN_1456c1ed0 body=162 status=ok
// SIG undefined FUN_1456c1ed0(void)

void FUN_1456c1ed0(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)*param_2;
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  *(longlong **)(param_1 + 0x20) = plVar4;
  *(longlong *)(param_1 + 0x28) = lVar2;
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))();
  }
  FUN_1400722b8(param_1);
  FUN_1400725c0(param_1);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456c1f6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456c1f72 FUN_1456c1f72 body=40 status=ok
// SIG undefined FUN_1456c1f72(void)

undefined1 *
FUN_1456c1f72(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = 0;
  FUN_14052bb08(DAT_14c872ce0,param_2,param_3,param_1,param_4);
  return param_1;
}



// FUNCTION 1456c1f9a FUN_1456c1f9a body=205 status=ok
// SIG undefined FUN_1456c1f9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c1f9a(void)

{
  if ((DAT_14c9afa2f & 2) == 0) {
    DAT_14c9afa2f = DAT_14c9afa2f | 2;
    _DAT_14c9af9d0 = L"TBasePassPSFNoLightMapPolicy";
    _DAT_14c9af9e8 = FUN_146826540;
    _DAT_14c9af9f0 = FUN_146825d77;
    _DAT_14c9af9f8 = FUN_146825fd6;
    _DAT_14c9afa00 = FUN_1407e02ea;
    _DAT_14c9afa08 = FUN_146826273;
    _DAT_14c9af9e0 = FUN_14712cd56;
    _DAT_14c9afa20 = 0xffffffff00000110;
    _DAT_14c9afa28 = 8;
    DAT_14c9afa2c = 0;
    _DAT_14c9afa10 = &LAB_14712cd8c;
    FUN_1456c2068();
    FUN_1407e00cc(&DAT_14c9af9c8);
    return;
  }
  return;
}



// FUNCTION 1456c2068 FUN_1456c2068 body=133 status=ok
// SIG undefined FUN_1456c2068(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2068(void)

{
  _DAT_14c9bb4f0 = L"BASE";
  DAT_14c9bb51a = 4;
  FUN_1456c2396();
  _DAT_14c9bb500 = DAT_14c9af9d8;
  _DAT_14c9bb4f8 = &DAT_14c9bb340;
  _DAT_14c9bb508 = &LAB_14682652b;
  DAT_14c9af9d8 = &DAT_14c9bb4f0;
  DAT_14c9afa2d = DAT_14c9afa2d + '\x01';
  _DAT_14c9bb510 = 0x100000000;
  if (DAT_14c9bb3a4 != '\0') {
    DAT_14c9afa2e = DAT_14c9afa2e + '\x01';
  }
  return;
}



// FUNCTION 1456c20ee FUN_1456c20ee body=205 status=ok
// SIG undefined FUN_1456c20ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c20ee(void)

{
  if ((DAT_14c9af7df & 2) == 0) {
    DAT_14c9af7df = DAT_14c9af7df | 2;
    _DAT_14c9af780 = L"TBasePassVSFNoLightMapPolicy";
    _DAT_14c9af798 = FUN_146826540;
    _DAT_14c9af7a0 = FUN_146825d77;
    _DAT_14c9af7a8 = FUN_146825fd6;
    _DAT_14c9af7b0 = FUN_1407e02ea;
    _DAT_14c9af7b8 = FUN_146826273;
    _DAT_14c9af790 = FUN_14712c9c2;
    _DAT_14c9af7d0 = 0xffffffff00000110;
    _DAT_14c9af7d8 = 8;
    DAT_14c9af7dc = 0;
    _DAT_14c9af7c0 = &LAB_14712c9f8;
    FUN_1456c21bc();
    FUN_1407e00cc(&DAT_14c9af778);
    return;
  }
  return;
}



// FUNCTION 1456c21bc FUN_1456c21bc body=133 status=ok
// SIG undefined FUN_1456c21bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c21bc(void)

{
  _DAT_14c9bb140 = L"BASE";
  DAT_14c9bb16a = 4;
  FUN_1456c278c();
  _DAT_14c9bb150 = DAT_14c9af788;
  _DAT_14c9bb148 = &DAT_14c9bb170;
  _DAT_14c9bb158 = &LAB_14682652b;
  DAT_14c9af788 = &DAT_14c9bb140;
  DAT_14c9af7dd = DAT_14c9af7dd + '\x01';
  _DAT_14c9bb160 = 0x100000000;
  if (DAT_14c9bb1d4 != '\0') {
    DAT_14c9af7de = DAT_14c9af7de + '\x01';
  }
  return;
}



// FUNCTION 1456c2242 FUN_1456c2242 body=205 status=ok
// SIG undefined FUN_1456c2242(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2242(void)

{
  if ((DAT_14c9af907 & 2) == 0) {
    DAT_14c9af907 = DAT_14c9af907 | 2;
    _DAT_14c9af8a8 = L"TBasePassPSFNoLightMapPolicySkylight";
    _DAT_14c9af8c0 = FUN_146826540;
    _DAT_14c9af8c8 = FUN_146825d77;
    _DAT_14c9af8d0 = FUN_146825fd6;
    _DAT_14c9af8d8 = FUN_1407e02ea;
    _DAT_14c9af8e0 = FUN_146826273;
    _DAT_14c9af8b8 = FUN_14712cb8c;
    _DAT_14c9af8f8 = 0xffffffff00000110;
    _DAT_14c9af900 = 8;
    DAT_14c9af904 = 0;
    _DAT_14c9af8e8 = &LAB_14712cbc2;
    FUN_1456c2310();
    FUN_1407e00cc(&DAT_14c9af8a0);
    return;
  }
  return;
}



// FUNCTION 1456c2310 FUN_1456c2310 body=133 status=ok
// SIG undefined FUN_1456c2310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2310(void)

{
  _DAT_14c9bb310 = L"BASE";
  DAT_14c9bb33a = 4;
  FUN_1456c2396();
  _DAT_14c9bb320 = DAT_14c9af8b0;
  _DAT_14c9bb318 = &DAT_14c9bb340;
  _DAT_14c9bb328 = &LAB_14682652b;
  DAT_14c9af8b0 = &DAT_14c9bb310;
  DAT_14c9af905 = DAT_14c9af905 + '\x01';
  _DAT_14c9bb330 = 0x100000000;
  if (DAT_14c9bb3a4 != '\0') {
    DAT_14c9af906 = DAT_14c9af906 + '\x01';
  }
  return;
}



// FUNCTION 1456c2396 FUN_1456c2396 body=200 status=ok
// SIG undefined FUN_1456c2396(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2396(void)

{
  if ((DAT_14c9bb3a7 & 2) != 0) {
    return;
  }
  DAT_14c9bb3a7 = DAT_14c9bb3a7 | 2;
  _DAT_14c9bb348 = L"TBasePassPixelShaderBaseType";
  _DAT_14c9bb360 = FUN_146826540;
  _DAT_14c9bb368 = FUN_146825d77;
  _DAT_14c9bb370 = FUN_146825fd6;
  _DAT_14c9bb378 = FUN_1407e02ea;
  _DAT_14c9bb380 = FUN_146826273;
  _DAT_14c9bb358 = FUN_14713cc62;
  _DAT_14c9bb398 = 0xffffffff00000110;
  _DAT_14c9bb3a0 = 8;
  DAT_14c9bb3a4 = 0;
  _DAT_14c9bb388 = &LAB_14713cc98;
  FUN_1456c245e();
  FUN_1407e00cc(&DAT_14c9bb340);
  return;
}



// FUNCTION 1456c245e FUN_1456c245e body=133 status=ok
// SIG undefined FUN_1456c245e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c245e(void)

{
  _DAT_14c9bb3a8 = L"BASE";
  DAT_14c9bb3d2 = 4;
  FUN_1456c2afc();
  _DAT_14c9bb3b8 = DAT_14c9bb350;
  _DAT_14c9bb3b0 = &DAT_14c9bb3d8;
  _DAT_14c9bb3c0 = &LAB_14682652b;
  DAT_14c9bb350 = &DAT_14c9bb3a8;
  DAT_14c9bb3a5 = DAT_14c9bb3a5 + '\x01';
  _DAT_14c9bb3c8 = 0x100000000;
  if (DAT_14c9bb43c != '\0') {
    DAT_14c9bb3a6 = DAT_14c9bb3a6 + '\x01';
  }
  return;
}



// FUNCTION 1456c24e4 FUN_1456c24e4 body=205 status=ok
// SIG undefined FUN_1456c24e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c24e4(void)

{
  if ((DAT_14c9afda7 & 2) == 0) {
    DAT_14c9afda7 = DAT_14c9afda7 | 2;
    _DAT_14c9afd48 = L"TBasePassPSFNoLightMapPolicySkylightGbxDigi";
    _DAT_14c9afd60 = FUN_146826540;
    _DAT_14c9afd68 = FUN_146825d77;
    _DAT_14c9afd70 = FUN_146825fd6;
    _DAT_14c9afd78 = FUN_1407e02ea;
    _DAT_14c9afd80 = FUN_146826273;
    _DAT_14c9afd58 = FUN_14712d07c;
    _DAT_14c9afd98 = 0xffffffff00000110;
    _DAT_14c9afda0 = 8;
    DAT_14c9afda4 = 0;
    _DAT_14c9afd88 = &LAB_14712d0b2;
    FUN_1456c25b2();
    FUN_1407e00cc(&DAT_14c9afd40);
    return;
  }
  return;
}



// FUNCTION 1456c25b2 FUN_1456c25b2 body=133 status=ok
// SIG undefined FUN_1456c25b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c25b2(void)

{
  _DAT_14c9bb5e0 = L"BASE";
  DAT_14c9bb60a = 4;
  FUN_1456c2396();
  _DAT_14c9bb5f0 = DAT_14c9afd50;
  _DAT_14c9bb5e8 = &DAT_14c9bb340;
  _DAT_14c9bb5f8 = &LAB_14682652b;
  DAT_14c9afd50 = &DAT_14c9bb5e0;
  DAT_14c9afda5 = DAT_14c9afda5 + '\x01';
  _DAT_14c9bb600 = 0x100000000;
  if (DAT_14c9bb3a4 != '\0') {
    DAT_14c9afda6 = DAT_14c9afda6 + '\x01';
  }
  return;
}



// FUNCTION 1456c2638 FUN_1456c2638 body=205 status=ok
// SIG undefined FUN_1456c2638(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2638(void)

{
  if ((DAT_14c9afecf & 2) == 0) {
    DAT_14c9afecf = DAT_14c9afecf | 2;
    _DAT_14c9afe70 = L"TBasePassPSFNoLightMapPolicyGbxDigi";
    _DAT_14c9afe88 = FUN_146826540;
    _DAT_14c9afe90 = FUN_146825d77;
    _DAT_14c9afe98 = FUN_146825fd6;
    _DAT_14c9afea0 = FUN_1407e02ea;
    _DAT_14c9afea8 = FUN_146826273;
    _DAT_14c9afe80 = FUN_14712d12a;
    _DAT_14c9afec0 = 0xffffffff00000110;
    _DAT_14c9afec8 = 8;
    DAT_14c9afecc = 0;
    _DAT_14c9afeb0 = &LAB_14712d160;
    FUN_1456c2706();
    FUN_1407e00cc(&DAT_14c9afe68);
    return;
  }
  return;
}



// FUNCTION 1456c2706 FUN_1456c2706 body=133 status=ok
// SIG undefined FUN_1456c2706(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2706(void)

{
  _DAT_14c9bb630 = L"BASE";
  DAT_14c9bb65a = 4;
  FUN_1456c2396();
  _DAT_14c9bb640 = DAT_14c9afe78;
  _DAT_14c9bb638 = &DAT_14c9bb340;
  _DAT_14c9bb648 = &LAB_14682652b;
  DAT_14c9afe78 = &DAT_14c9bb630;
  DAT_14c9afecd = DAT_14c9afecd + '\x01';
  _DAT_14c9bb650 = 0x100000000;
  if (DAT_14c9bb3a4 != '\0') {
    DAT_14c9afece = DAT_14c9afece + '\x01';
  }
  return;
}



// FUNCTION 1456c278c FUN_1456c278c body=205 status=ok
// SIG undefined FUN_1456c278c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c278c(void)

{
  if ((DAT_14c9bb1d7 & 2) == 0) {
    DAT_14c9bb1d7 = DAT_14c9bb1d7 | 2;
    _DAT_14c9bb178 = L"TBasePassVertexShaderBaseType";
    _DAT_14c9bb190 = FUN_146826540;
    _DAT_14c9bb198 = FUN_146825d77;
    _DAT_14c9bb1a0 = FUN_146825fd6;
    _DAT_14c9bb1a8 = FUN_1407e02ea;
    _DAT_14c9bb1b0 = FUN_146826273;
    _DAT_14c9bb188 = FUN_14713cb48;
    _DAT_14c9bb1c8 = 0xffffffff00000110;
    _DAT_14c9bb1d0 = 8;
    DAT_14c9bb1d4 = 0;
    _DAT_14c9bb1b8 = &LAB_14713cb7e;
    FUN_1456c285a();
    FUN_1407e00cc(&DAT_14c9bb170);
    return;
  }
  return;
}



// FUNCTION 1456c285a FUN_1456c285a body=133 status=ok
// SIG undefined FUN_1456c285a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c285a(void)

{
  _DAT_14c9bb1d8 = L"BASE";
  DAT_14c9bb202 = 4;
  FUN_1456c28e0();
  _DAT_14c9bb1e8 = DAT_14c9bb180;
  _DAT_14c9bb1e0 = &DAT_14c9bb208;
  _DAT_14c9bb1f0 = &LAB_14682652b;
  DAT_14c9bb180 = &DAT_14c9bb1d8;
  DAT_14c9bb1d5 = DAT_14c9bb1d5 + '\x01';
  _DAT_14c9bb1f8 = 0x100000000;
  if (DAT_14c9bb26c != '\0') {
    DAT_14c9bb1d6 = DAT_14c9bb1d6 + '\x01';
  }
  return;
}



// FUNCTION 1456c28e0 FUN_1456c28e0 body=313 status=ok
// SIG undefined FUN_1456c28e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c28e0(void)

{
  if ((DAT_14c9bb26f & 2) == 0) {
    DAT_14c9bb26f = DAT_14c9bb26f | 2;
    _DAT_14c9bb210 = L"TBasePassVertexShaderPolicyParamType";
    _DAT_14c9bb228 = FUN_146826540;
    _DAT_14c9bb230 = FUN_146825d77;
    _DAT_14c9bb238 = FUN_146825fd6;
    _DAT_14c9bb240 = FUN_1407e02ea;
    _DAT_14c9bb248 = FUN_146826273;
    _DAT_14c9bb220 = FUN_14713cb82;
    _DAT_14c9bb260 = 0xffffffff00000110;
    _DAT_14c9bb268 = 8;
    DAT_14c9bb26c = 0;
    _DAT_14c9bb250 = &LAB_14713cbb8;
    _DAT_14c9bb270 = L"ReflectionCaptureBuffer";
    DAT_14c9bb29a = FUN_140850cc5();
    _DAT_14c9bb278 = FUN_14106a12a();
    _DAT_14c9bb288 = &LAB_14682652b;
    _DAT_14c9bb290 = 0x10000010e;
    _DAT_14c9bb298 = 0;
    _DAT_14c9bb280 = DAT_14c9bb218;
    DAT_14c9bb218 = &DAT_14c9bb270;
    FUN_1456c2a1a();
    FUN_1407e00cc(&DAT_14c9bb208);
    return;
  }
  return;
}



// FUNCTION 1456c2a1a FUN_1456c2a1a body=225 status=ok
// SIG undefined FUN_1456c2a1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2a1a(void)

{
  _DAT_14c9bb2a0 = L"BASE";
  DAT_14c9bb2ca = 4;
  _DAT_14c9bb2a8 = FUN_1411cad6c();
  _DAT_14c9bb2b0 = DAT_14c9bb218;
  _DAT_14c9bb2b8 = &LAB_14682652b;
  DAT_14c9bb218 = &DAT_14c9bb2a0;
  DAT_14c9bb26d = DAT_14c9bb26d + '\x01';
  _DAT_14c9bb2c0 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bb2a8 + 100) != '\0') {
    DAT_14c9bb26e = DAT_14c9bb26e + '\x01';
  }
  _DAT_14c9bb2d0 = L"BASE";
  DAT_14c9bb2fa = 4;
  _DAT_14c9bb2d8 = FUN_141092e92();
  _DAT_14c9bb2e0 = DAT_14c9bb218;
  _DAT_14c9bb2e8 = &LAB_14682652b;
  DAT_14c9bb218 = &DAT_14c9bb2d0;
  DAT_14c9bb26d = DAT_14c9bb26d + '\x01';
  _DAT_14c9bb2f0 = 0x100000000;
  if (*(char *)(_DAT_14c9bb2d8 + 100) != '\0') {
    DAT_14c9bb26e = DAT_14c9bb26e + '\x01';
  }
  return;
}



// FUNCTION 1456c2afc FUN_1456c2afc body=313 status=ok
// SIG undefined FUN_1456c2afc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2afc(void)

{
  if ((DAT_14c9bb43f & 2) == 0) {
    DAT_14c9bb43f = DAT_14c9bb43f | 2;
    _DAT_14c9bb3e0 = L"TBasePassPixelShaderPolicyParamType";
    _DAT_14c9bb3f8 = FUN_146826540;
    _DAT_14c9bb400 = FUN_146825d77;
    _DAT_14c9bb408 = FUN_146825fd6;
    _DAT_14c9bb410 = FUN_1407e02ea;
    _DAT_14c9bb418 = FUN_146826273;
    _DAT_14c9bb3f0 = FUN_14713cc9c;
    _DAT_14c9bb430 = 0xffffffff00000110;
    _DAT_14c9bb438 = 8;
    DAT_14c9bb43c = 0;
    _DAT_14c9bb420 = &LAB_14713ccd2;
    _DAT_14c9bb440 = L"ReflectionCaptureBuffer";
    DAT_14c9bb46a = FUN_140850cc5();
    _DAT_14c9bb448 = FUN_14106a12a();
    _DAT_14c9bb458 = &LAB_14682652b;
    _DAT_14c9bb460 = 0x10000010e;
    _DAT_14c9bb468 = 0;
    _DAT_14c9bb450 = DAT_14c9bb3e8;
    DAT_14c9bb3e8 = &DAT_14c9bb440;
    FUN_1456c2c36();
    FUN_1407e00cc(&DAT_14c9bb3d8);
    return;
  }
  return;
}



// FUNCTION 1456c2c36 FUN_1456c2c36 body=225 status=ok
// SIG undefined FUN_1456c2c36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456c2c36(void)

{
  _DAT_14c9bb470 = L"BASE";
  DAT_14c9bb49a = 4;
  _DAT_14c9bb478 = FUN_1411cad6c();
  _DAT_14c9bb480 = DAT_14c9bb3e8;
  _DAT_14c9bb488 = &LAB_14682652b;
  DAT_14c9bb3e8 = &DAT_14c9bb470;
  DAT_14c9bb43d = DAT_14c9bb43d + '\x01';
  _DAT_14c9bb490 = &DAT_100000108;
  if (*(char *)(_DAT_14c9bb478 + 100) != '\0') {
    DAT_14c9bb43e = DAT_14c9bb43e + '\x01';
  }
  _DAT_14c9bb4a0 = L"BASE";
  DAT_14c9bb4ca = 4;
  _DAT_14c9bb4a8 = FUN_141092e92();
  _DAT_14c9bb4b0 = DAT_14c9bb3e8;
  _DAT_14c9bb4b8 = &LAB_14682652b;
  DAT_14c9bb3e8 = &DAT_14c9bb4a0;
  DAT_14c9bb43d = DAT_14c9bb43d + '\x01';
  _DAT_14c9bb4c0 = 0x100000000;
  if (*(char *)(_DAT_14c9bb4a8 + 100) != '\0') {
    DAT_14c9bb43e = DAT_14c9bb43e + '\x01';
  }
  return;
}



// FUNCTION 1456c2d18 FUN_1456c2d18 body=153 status=ok
// SIG undefined FUN_1456c2d18(void)

void FUN_1456c2d18(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_14010edaa();
  FUN_140078ea0(param_1 + 0x82);
  param_1[0xde] = 0;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x128) == '\x03')) {
      (**(code **)(*plVar1 + 0x338))(plVar1,0x14);
      lVar2 = FUN_1479df2e4(plVar1);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      param_1[0xde] = lVar2;
    }
  }
  return;
}



// FUNCTION 1456c2db2 FUN_1456c2db2 body=300 status=ok
// SIG undefined FUN_1456c2db2(void)

longlong FUN_1456c2db2(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  
  if (1 < (longlong)*(int *)(param_1 + 0x18)) {
    iVar7 = -1;
    uVar9 = (longlong)*(int *)(param_1 + 0x18);
    lVar6 = 0;
    do {
      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + -8 + uVar9 * 8);
      uVar2 = FUN_1446f8646();
      lVar3 = FUN_1407cc3a2(uVar2,lVar6,uVar1,0,0,0);
      if ((param_2 != 0) && (uVar9 == *(uint *)(param_1 + 0x18))) {
        lVar4 = FUN_144a79778(param_2);
        lVar5 = lVar4;
        if (lVar4 == lVar3) {
          lVar5 = lVar3;
        }
        if (param_3 != 1) {
          lVar5 = lVar3;
        }
        if (lVar3 != 0) {
          lVar4 = lVar5;
        }
        lVar3 = lVar4;
        if (param_3 != 0) {
          lVar3 = lVar5;
        }
      }
      if (lVar3 == 0) {
        iVar8 = iVar7;
        if (lVar6 == 0) {
          return 0;
        }
        break;
      }
      iVar7 = (int)uVar9 + -1;
      bVar10 = 2 < uVar9;
      lVar6 = lVar3;
      uVar9 = uVar9 - 1;
      iVar8 = 1;
    } while (bVar10);
    lVar3 = FUN_1449e2fb2();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_14485c47a(param_1 + 8,lVar6);
      if (*(int *)(param_1 + 0x18) != iVar8) {
        *(int *)(param_1 + 0x18) = iVar8;
        FUN_1406ce816((longlong *)(param_1 + 0x10));
        return lVar6;
      }
      return lVar6;
    }
  }
  return 0;
}



// FUNCTION 1456c2ede FUN_1456c2ede body=120 status=ok
// SIG undefined FUN_1456c2ede(void)

void FUN_1456c2ede(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 5) {
      uVar4 = 4;
    }
    else {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 3,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 3)) {
        uVar4 = uVar2 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar4;
    FUN_1456c2f56(param_1,param_2,uVar4,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456c2f56 FUN_1456c2f56 body=133 status=ok
// SIG undefined FUN_1456c2f56(void)

void FUN_1456c2f56(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

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
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 1456c2fea FUN_1456c2fea body=40 status=ok
// SIG undefined FUN_1456c2fea(void)

undefined8 FUN_1456c2fea(undefined8 param_1,int param_2)

{
  FUN_1456c3012();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456c3012 FUN_1456c3012 body=62 status=ok
// SIG undefined FUN_1456c3012(void)

void FUN_1456c3012(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b157af0;
  if (param_1[0x1cf] != 0) {
    FUN_1400020a8();
  }
  FUN_1456c30b6(param_1 + 0x22);
  FUN_1456c3050(param_1);
  return;
}



// FUNCTION 1456c3050 FUN_1456c3050 body=101 status=ok
// SIG undefined FUN_1456c3050(void)

void FUN_1456c3050(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ac5c450;
  FUN_144a2da94(param_1 + 0x1b);
  FUN_144a2da94(param_1 + 0x14);
  FUN_144a2da94(param_1 + 9);
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 1456c30b6 FUN_1456c30b6 body=418 status=ok
// SIG undefined FUN_1456c30b6(void)

void FUN_1456c30b6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1 + 0xcb0;
  lVar1 = -0x5f0;
  do {
    FUN_144a2da94(lVar2 + 0x38);
    FUN_144a2da94(lVar2);
    lVar2 = lVar2 + -0x130;
    lVar1 = lVar1 + 0x130;
  } while (lVar1 != 0);
  *(undefined ***)(param_1 + 0x5d0) = &PTR_FUN_14b023b20;
  FUN_1447805d2(param_1 + 0x5e8);
  *(undefined ***)(param_1 + 0x5d0) = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 0x5d8);
  FUN_144a2da94(param_1 + 0x578);
  FUN_144a2da94(param_1 + 0x540);
  FUN_144a2da94(param_1 + 0x508);
  FUN_144a2da94(param_1 + 0x4d0);
  FUN_144a2da94(param_1 + 0x498);
  FUN_144a2da94(param_1 + 0x460);
  FUN_144a2da94(param_1 + 0x428);
  FUN_144a2da94(param_1 + 0x3f0);
  FUN_144a2da94(param_1 + 0x3b8);
  FUN_144a2da94(param_1 + 0x380);
  FUN_144a2da94(param_1 + 0x348);
  FUN_144a2da94(param_1 + 0x310);
  FUN_144a2da94(param_1 + 0x2d8);
  FUN_144a2da94(param_1 + 0x2a0);
  FUN_144a2da94(param_1 + 0x268);
  FUN_144a2da94(param_1 + 0x230);
  FUN_144a2da94(param_1 + 0x1f8);
  FUN_144a2da94(param_1 + 0x1c0);
  FUN_144a2da94(param_1 + 0x188);
  FUN_144a2da94(param_1 + 0x150);
  FUN_144a2da94(param_1 + 0x118);
  FUN_144a2da94(param_1 + 0xe0);
  FUN_144a2da94(param_1 + 0xa8);
  FUN_144a2da94(param_1 + 0x70);
  FUN_144a2da94(param_1 + 0x38);
  FUN_144a2da94(param_1);
  return;
}



// FUNCTION 1456c3258 FUN_1456c3258 body=323 status=ok
// SIG undefined FUN_1456c3258(void)

void FUN_1456c3258(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_98 = 0x400000000;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0xffffffff;
  local_4c = 0xff;
  local_4a = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_144a7dcb2(&DAT_14ca6a8a8,param_1,&local_108);
  FUN_144a7dcdc(&DAT_14ca6a820,param_1,&local_108);
  FUN_14472d638(&DAT_14ca6a820,param_1,&local_108,0xffffffff);
  FUN_140042a1e(&DAT_14ca6a820,param_1,&local_108,0);
  FUN_14007f3da(param_1,&local_108,1);
  FUN_1447807a6(param_1 + 0x130,&local_108);
  *(undefined4 *)(param_1 + 0x1f0) = (undefined4)local_48;
  *(undefined4 *)(param_1 + 500) = local_48._4_4_;
  *(undefined4 *)(param_1 + 0x1f8) = (undefined4)uStack_40;
  *(undefined4 *)(param_1 + 0x1fc) = uStack_40._4_4_;
  *(undefined8 *)(param_1 + 0x200) = local_38;
  FUN_14007f434(param_1,param_2);
  if ((local_28 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c339c FUN_1456c339c body=63 status=ok
// SIG undefined FUN_1456c339c(void)

void FUN_1456c339c(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_1449ed11e(param_1);
    FUN_140923322(param_1);
    return;
  }
  FUN_140923322(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1401065b8(param_1);
  return;
}



// FUNCTION 1456c33dc FUN_1456c33dc body=109 status=ok
// SIG undefined FUN_1456c33dc(void)

void FUN_1456c33dc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456c36c2(param_1,iVar1);
    }
    FUN_14008029e((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147cd4a8c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1456c344a FUN_1456c344a body=110 status=ok
// SIG undefined FUN_1456c344a(void)

void FUN_1456c344a(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456c38e2(param_1,iVar1);
    }
    FUN_1400802bd((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147cd4c9c(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1456c34ba FUN_1456c34ba body=63 status=ok
// SIG undefined FUN_1456c34ba(void)

void FUN_1456c34ba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1456c34fa(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 1456c34fa FUN_1456c34fa body=91 status=ok
// SIG undefined FUN_1456c34fa(void)

ulonglong FUN_1456c34fa(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if ((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) == 0) &&
     ((int)(param_2 * 2) <= (int)(param_1 * 3))) {
    return uVar1;
  }
  if (param_1 == 0 || 0x40 < (int)(param_2 - param_1)) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1456c3556 FUN_1456c3556 body=116 status=ok
// SIG undefined FUN_1456c3556(void)

void FUN_1456c3556(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456c3746(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147cd4d7a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1456c35cc FUN_1456c35cc body=121 status=ok
// SIG undefined FUN_1456c35cc(void)

void FUN_1456c35cc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456c37ca(param_1,iVar1);
    }
    FUN_1400804c6((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147cd4e16(param_1,param_2,iVar1 - param_2);
    FUN_147cd4e70(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1456c3646 FUN_1456c3646 body=122 status=ok
// SIG undefined FUN_1456c3646(void)

void FUN_1456c3646(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456c384e(param_1,iVar1);
    }
    FUN_140080530((longlong)iVar1 * 0x50 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_147cd4b58(param_1,param_2,iVar1 - param_2);
    FUN_147cd4bbe(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1456c36c2 FUN_1456c36c2 body=132 status=ok
// SIG undefined FUN_1456c36c2(void)

void FUN_1456c36c2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456c3746 FUN_1456c3746 body=132 status=ok
// SIG undefined FUN_1456c3746(void)

void FUN_1456c3746(longlong param_1,int param_2)

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



// FUNCTION 1456c37ca FUN_1456c37ca body=132 status=ok
// SIG undefined FUN_1456c37ca(void)

void FUN_1456c37ca(longlong param_1,int param_2)

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



// FUNCTION 1456c384e FUN_1456c384e body=147 status=ok
// SIG undefined FUN_1456c384e(void)

void FUN_1456c384e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456c38e2 FUN_1456c38e2 body=147 status=ok
// SIG undefined FUN_1456c38e2(void)

void FUN_1456c38e2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456c3976 FUN_1456c3976 body=48 status=ok
// SIG undefined FUN_1456c3976(void)

void FUN_1456c3976(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1456c39a6 FUN_1456c39a6 body=119 status=ok
// SIG undefined FUN_1456c39a6(void)

undefined8 * FUN_1456c39a6(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = *(char *)(param_1 + 3) == '\0';
  if (bVar2) {
    *(char *)(param_1 + 3) = '\x01';
  }
  UNLOCK();
  if (!bVar2) {
    FUN_1447d2058();
  }
  lVar1 = param_1[1];
  if (lVar1 == 0) {
    *param_2 = *param_1;
  }
  param_2[1] = lVar1;
  param_1[1] = 0;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)((longlong)param_1 + 0x14);
  param_1[2] = 0x100000000;
  LOCK();
  bVar2 = *(char *)(param_1 + 3) == '\x01';
  if (bVar2) {
    *(char *)(param_1 + 3) = '\0';
  }
  UNLOCK();
  if (!bVar2) {
    FUN_14008cdb0(param_1 + 3);
  }
  return param_2;
}



// FUNCTION 1456c3a1e FUN_1456c3a1e body=40 status=ok
// SIG undefined FUN_1456c3a1e(void)

undefined8 FUN_1456c3a1e(undefined8 param_1,int param_2)

{
  FUN_1456c3a46();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456c3a46 FUN_1456c3a46 body=641 status=ok
// SIG undefined FUN_1456c3a46(void)

void FUN_1456c3a46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aeff2c0;
  param_1[6] = &PTR_FUN_14aeff5d0;
  param_1[7] = &PTR_FUN_14aeff5f0;
  FUN_14008cd94(param_1 + 0x142);
  FUN_14008cd94(param_1 + 0x11e);
  FUN_14008cd94(param_1 + 0xfa);
  *(undefined4 *)(param_1 + 0xeb) = 0;
  if (param_1[0xea] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xe2);
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  FUN_1456c3d4c(param_1 + 0xcf);
  FUN_1456c3cc8(param_1 + 0xb0);
  FUN_1456c3cc8(param_1 + 0x92);
  plVar3 = (longlong *)param_1[0x91];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x40))(plVar3,1);
  }
  FUN_1456c3cc8(param_1 + 0x72);
  FUN_1456c3cc8(param_1 + 0x54);
  if (param_1[0x4c] != 0) {
    plVar3 = param_1 + 0x50;
    if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x4e];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x38] != 0) {
    plVar3 = param_1 + 0x3c;
    if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x3a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x30] != 0) {
    plVar3 = param_1 + 0x34;
    if ((longlong *)param_1[0x32] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x32];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x28] != 0) {
    plVar3 = param_1 + 0x2c;
    if ((longlong *)param_1[0x2a] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2a];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x20] != 0) {
    plVar3 = param_1 + 0x24;
    if ((longlong *)param_1[0x22] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x22];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0x14] != 0) {
    plVar3 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = (longlong *)param_1[0x11];
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
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  thunk_FUN_144760e82(param_1);
  return;
}



// FUNCTION 1456c3cc8 FUN_1456c3cc8 body=131 status=ok
// SIG undefined FUN_1456c3cc8(void)

void FUN_1456c3cc8(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a082e(param_1);
  return;
}



// FUNCTION 1456c3d4c FUN_1456c3d4c body=55 status=ok
// SIG undefined FUN_1456c3d4c(void)

void FUN_1456c3d4c(longlong *param_1)

{
  FUN_1456c3d84(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456c3d84 FUN_1456c3d84 body=121 status=ok
// SIG undefined FUN_1456c3d84(void)

void FUN_1456c3d84(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 1456c3dfe FUN_1456c3dfe body=558 status=ok
// SIG undefined FUN_1456c3dfe(void)

void FUN_1456c3dfe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140958b58();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14bb76ef4);
  iVar1 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if (iVar1 < 3) goto LAB_1456c3fbd;
  LOCK();
  UNLOCK();
  iVar1 = DAT_14cc06c88 + 1;
  local_38 = (undefined2 *)param_1[3];
  DAT_14cc06c88 = DAT_14cc06c88 + 1;
  FUN_1400021e4(&local_38,&local_48);
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,L"%s_VM_%u",puVar4,iVar1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  puVar4 = local_38;
  if (local_30 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_50,puVar4,1);
  local_60 = 0;
  local_68 = 0;
  plVar2 = (longlong *)FUN_14591ec7d(DAT_14c951640,local_50,0,0);
  lVar5 = param_1[0x22];
  if (lVar5 == 0) {
    (**(code **)(*param_1 + 1000))(param_1);
    lVar5 = param_1[0x22];
    if (lVar5 != 0) goto LAB_1456c3f09;
  }
  else {
LAB_1456c3f09:
    lVar3 = FUN_1401242c6();
    if ((((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) && ((*(byte *)(param_2 + 5) & 4) != 0)) &&
       (*(longlong *)(lVar5 + 0x58) != 0)) {
      FUN_1456c402e(plVar2);
    }
  }
  (**(code **)(*plVar2 + 0xd8))(plVar2,param_2);
  lVar5 = param_1[0x22];
  if (lVar5 != 0) {
    lVar3 = FUN_1401242c6();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) &&
       (((*(byte *)(param_2 + 5) & 1) != 0 && (*(longlong *)(lVar5 + 0x58) != 0)))) {
      FUN_1456c402e(*(longlong *)(lVar5 + 0x58),plVar2);
    }
  }
  iVar1 = FUN_1448332aa(param_2,&DAT_14bb76ef4);
  if ((0x17 < iVar1) &&
     (FUN_1456c45fc(param_2,param_1 + 0x77), (*(byte *)((longlong)param_2 + 0x2b) & 2) != 0)) {
    FUN_1456c45fc(param_2,param_1 + 0x79);
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1456c3fbd:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456c402e FUN_1456c402e body=168 status=ok
// SIG undefined FUN_1456c402e(void)

void FUN_1456c402e(longlong param_1,longlong param_2)

{
  FUN_1458b7ad0();
  *(undefined4 *)(param_1 + 0x338) = *(undefined4 *)(param_2 + 0x338);
  FUN_1401fa034(param_1 + 0x118,param_2 + 0x118);
  FUN_1406fa324(param_1 + 0x208,param_2 + 0x208);
  FUN_1456c4134(param_1 + 0x138,param_2 + 0x138);
  FUN_1456c40d6(param_1 + 0x250,param_2 + 0x250);
  FUN_1456c4326(param_1 + 0x2e8,param_2 + 0x2e8);
  FUN_145a593dc(param_1 + 0x28,param_2 + 0x28);
  FUN_145a593dc(param_1 + 0x78,param_2 + 0x78);
  FUN_145a593dc(param_1 + 200,param_2 + 200);
  return;
}



// FUNCTION 1456c40d6 FUN_1456c40d6 body=93 status=ok
// SIG undefined FUN_1456c40d6(void)

undefined8 * FUN_1456c40d6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1412daae5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1490eeebc(param_1,iVar1);
      FUN_1490eef2f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1456c4134 FUN_1456c4134 body=112 status=ok
// SIG undefined FUN_1456c4134(void)

longlong FUN_1456c4134(longlong param_1,longlong param_2)

{
  FUN_1447a122a();
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  FUN_1456c41a4(param_1 + 0x18,param_2 + 0x18);
  FUN_1456c41fe(param_1 + 0x28,param_2 + 0x28);
  FUN_1456c4258(param_1 + 0x38,param_2 + 0x38);
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_1456c43a0(param_1 + 0x58,param_2 + 0x58);
  *(undefined2 *)(param_1 + 0xa8) = *(undefined2 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 1456c41a4 FUN_1456c41a4 body=89 status=ok
// SIG undefined FUN_1456c41a4(void)

undefined8 * FUN_1456c41a4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1456c42b2(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 1456c41fe FUN_1456c41fe body=89 status=ok
// SIG undefined FUN_1456c41fe(void)

undefined8 * FUN_1456c41fe(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490e88a6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1456c4258 FUN_1456c4258 body=89 status=ok
// SIG undefined FUN_1456c4258(void)

undefined8 * FUN_1456c4258(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1490e34e8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1456c42b2 FUN_1456c42b2 body=115 status=ok
// SIG undefined FUN_1456c42b2(void)

void FUN_1456c42b2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    iVar2 = (int)(uVar1 / 0xc);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1456c4326 FUN_1456c4326 body=122 status=ok
// SIG undefined FUN_1456c4326(void)

longlong FUN_1456c4326(longlong param_1,longlong param_2)

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
    FUN_1456c4492(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1456c43a0 FUN_1456c43a0 body=122 status=ok
// SIG undefined FUN_1456c43a0(void)

longlong FUN_1456c43a0(longlong param_1,longlong param_2)

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
    FUN_1456c441a(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1456c441a FUN_1456c441a body=119 status=ok
// SIG undefined FUN_1456c441a(void)

undefined8 * FUN_1456c441a(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1458b78d2(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 << 5);
    }
  }
  return param_1;
}



// FUNCTION 1456c4492 FUN_1456c4492 body=362 status=ok
// SIG undefined FUN_1456c4492(void)

longlong * FUN_1456c4492(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1458b794e(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_1447711aa(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar8 = 0;
      uVar7 = 0;
      do {
        plVar5 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar5 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar5 + (uVar7 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar7 & 0x1f) & 1)
            == 0) {
          *(undefined4 *)(lVar4 + lVar8) = *(undefined4 *)(lVar3 + lVar8);
          *(undefined4 *)(lVar4 + 4 + lVar8) = *(undefined4 *)(lVar3 + 4 + lVar8);
        }
        else {
          lVar6 = lVar4 + 0x18 + lVar8;
          *(undefined2 *)(lVar6 + -0x14) = *(undefined2 *)((undefined4 *)(lVar3 + lVar8) + 1);
          *(undefined4 *)(lVar6 + -0x18) = *(undefined4 *)(lVar3 + lVar8);
          *(undefined8 *)(lVar6 + -0x10) = 0;
          iVar2 = *(int *)(lVar3 + 0x10 + lVar8);
          _Src = *(void **)(lVar3 + 8 + lVar8);
          *(int *)(lVar6 + -8) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)(lVar4 + 0x14 + lVar8) = 0;
          }
          else {
            FUN_1490e39e4(lVar4 + 8 + lVar8,iVar2,0);
            memcpy(*(void **)(lVar4 + 8 + lVar8),_Src,(longlong)iVar2 * 6);
          }
          *(undefined8 *)(lVar4 + 0x18 + lVar8) = *(undefined8 *)(lVar3 + 0x18 + lVar8);
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar1 != uVar7);
    }
  }
  return param_1;
}



// FUNCTION 1456c45fc FUN_1456c45fc body=381 status=ok
// SIG undefined FUN_1456c45fc(void)

longlong * FUN_1456c45fc(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x440,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x440);
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_145868945(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_1490e4d94(param_2,0);
      }
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x3c3c < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1490e4cff(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x440;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    FUN_1490e4cba(param_2);
    if (0 < (int)local_2c) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1490e4d50(param_2);
        FUN_1490e4cff(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1456c477a FUN_1456c477a body=355 status=ok
// SIG undefined FUN_1456c477a(void)

void FUN_1456c477a(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)FUN_1456c48de(*param_2);
  if (plVar2 == (longlong *)0x0) goto switchD_1456c4845_default;
  uVar3 = FUN_1403c7982();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
  if (plVar2 == (longlong *)0x0) goto switchD_1456c4845_default;
  uVar3 = FUN_1403c7982();
  plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
  if (((plVar2 == plVar4) || (plVar4 == (longlong *)0x0)) ||
     (lVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_2), lVar5 == 0))
  goto switchD_1456c4845_default;
  uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_1403c7952(uVar3,local_48,lVar5,0);
  cVar1 = FUN_14486ea84(local_48);
  if (cVar1 == '\0') goto switchD_1456c4845_default;
  switch((char)param_1[1]) {
  case '\0':
    uVar3 = thunk_FUN_14008e0ae(local_48);
    uVar3 = FUN_14008e0a4(uVar3);
    uVar6 = 0;
    break;
  case '\x01':
    uVar3 = thunk_FUN_14008e0ae(local_48);
    uVar3 = FUN_14008e0a4(uVar3);
    uVar6 = 0x3f800000;
    break;
  case '\x02':
    uVar3 = thunk_FUN_14008e0ae(local_48);
    uVar3 = FUN_14008e0a4(uVar3);
    uVar6 = *(undefined4 *)((longlong)param_1 + 0xc);
    break;
  case '\x03':
    uVar3 = thunk_FUN_14008e0ae(local_48);
    uVar3 = FUN_14008e0a4(uVar3);
    FUN_1409d461e(uVar3,*(undefined4 *)((longlong)param_1 + 0xc),1);
  default:
    goto switchD_1456c4845_default;
  }
  FUN_14008e202(uVar3,uVar6);
switchD_1456c4845_default:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456c48de FUN_1456c48de body=56 status=ok
// SIG undefined FUN_1456c48de(void)

undefined8 FUN_1456c48de(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x138);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x138);
    uVar2 = FUN_14008e228(uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1456c4916 FUN_1456c4916 body=348 status=ok
// SIG undefined FUN_1456c4916(void)

undefined8 FUN_1456c4916(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (lVar5 == 0) {
    uVar4 = FUN_1411ef8e8();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x18) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  lVar6 = *(longlong *)(param_1 + 0x20);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x20) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x20) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x18);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_1411ef8e8();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x18) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x20) = lVar6;
    }
  }
  uVar4 = FUN_14479d2ce(*param_2 + 0x138);
  uVar4 = FUN_1456c4a72(lVar6,uVar4);
  return uVar4;
}



// FUNCTION 1456c4a72 FUN_1456c4a72 body=82 status=ok
// SIG undefined FUN_1456c4a72(void)

longlong * FUN_1456c4a72(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_1489835c2();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14154aa0a();
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



// FUNCTION 1456c4ac4 FUN_1456c4ac4 body=133 status=ok
// SIG undefined FUN_1456c4ac4(void)

void FUN_1456c4ac4(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0xb8))(param_1,&local_28);
  if (param_1 + 2 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    param_1[2] = local_28;
    *(undefined4 *)(param_1 + 3) = local_20;
    *(undefined4 *)((longlong)param_1 + 0x1c) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c4b4a FUN_1456c4b4a body=41 status=ok
// SIG undefined FUN_1456c4b4a(void)

undefined8 FUN_1456c4b4a(longlong param_1,undefined8 param_2)

{
  FUN_14010c19c(param_2,param_1 + 0x20,param_1 + 0x30,1,0);
  return param_2;
}



// FUNCTION 1456c4b74 FUN_1456c4b74 body=41 status=ok
// SIG undefined FUN_1456c4b74(void)

undefined8 FUN_1456c4b74(longlong param_1,undefined8 param_2)

{
  FUN_140234686(param_2,param_1 + 0x20,param_1 + 0x30,1,0);
  return param_2;
}



// FUNCTION 1456c4b9d FUN_1456c4b9d body=654 status=ok
// SIG undefined FUN_1456c4b9d(void)

void FUN_1456c4b9d(undefined8 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar14 = (int)param_2;
  if (iVar14 != 0) {
    iVar14 = (iVar14 - (iVar14 + -2 >> 0x1f)) + -2 >> 1;
    local_70 = param_2;
    do {
      iVar12 = iVar14 * 2 + 1;
      iVar10 = iVar14;
      if (iVar12 < (int)param_2) {
        do {
          iVar11 = iVar10 * 2 + 2;
          iVar9 = iVar12;
          if (iVar11 < (int)param_2) {
            uVar7 = FUN_14008ea61(param_1 + (longlong)iVar11 * 3);
            uVar8 = FUN_14008ea61(param_1 + (longlong)iVar12 * 3);
            if (uVar8 <= uVar7) {
              iVar9 = iVar11;
            }
          }
          puVar2 = param_1 + (longlong)iVar10 * 3;
          puVar3 = param_1 + (longlong)iVar9 * 3;
          uVar7 = FUN_14008ea61(puVar2);
          uVar8 = FUN_14008ea61(puVar3);
          param_2 = local_70;
          if (uVar8 <= uVar7) break;
          local_58 = puVar2[2];
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          puVar2[2] = puVar3[2];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          puVar3[2] = local_58;
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
          iVar12 = iVar9 * 2 + 1;
          local_68 = uVar4;
          uStack_60 = uVar5;
          iVar10 = iVar9;
        } while (iVar12 < (int)local_70);
      }
      bVar15 = iVar14 != 0;
      iVar14 = iVar14 + -1;
    } while (bVar15);
    if (1 < (int)param_2) {
      uVar13 = (param_2 & 0xffffffff) - 1;
      local_58 = param_1[2];
      uVar4 = *param_1;
      uVar5 = param_1[1];
      param_1[2] = param_1[uVar13 * 3 + 2];
      uVar6 = (param_1 + uVar13 * 3)[1];
      *param_1 = param_1[uVar13 * 3];
      param_1[1] = uVar6;
      param_1[uVar13 * 3 + 2] = local_58;
      local_68._0_4_ = (undefined4)uVar4;
      local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_60._0_4_ = (undefined4)uVar5;
      uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar13 * 3;
      *(undefined4 *)puVar2 = (undefined4)local_68;
      *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
      local_68 = uVar4;
      uStack_60 = uVar5;
      if ((int)param_2 != 2) {
        do {
          iVar14 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            iVar14 = iVar14 + 2;
            iVar9 = iVar10;
            if ((longlong)iVar14 < (longlong)uVar13) {
              uVar7 = FUN_14008ea61(param_1 + (longlong)iVar14 * 3);
              uVar8 = FUN_14008ea61(param_1 + (longlong)iVar10 * 3);
              if (uVar8 <= uVar7) {
                iVar9 = iVar14;
              }
            }
            puVar2 = param_1 + (longlong)iVar12 * 3;
            puVar3 = param_1 + (longlong)iVar9 * 3;
            uVar7 = FUN_14008ea61(puVar2);
            uVar8 = FUN_14008ea61(puVar3);
            if (uVar8 <= uVar7) break;
            local_58 = puVar2[2];
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            puVar2[2] = puVar3[2];
            uVar6 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar6;
            puVar3[2] = local_58;
            local_68._0_4_ = (undefined4)uVar4;
            local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_60._0_4_ = (undefined4)uVar5;
            uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            *(undefined4 *)puVar3 = (undefined4)local_68;
            *(undefined4 *)((longlong)puVar3 + 4) = local_68._4_4_;
            *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_60._4_4_;
            iVar14 = iVar9 * 2;
            iVar10 = iVar9 * 2 + 1;
            local_68 = uVar4;
            uStack_60 = uVar5;
            iVar12 = iVar9;
          } while ((longlong)iVar10 < (longlong)uVar13);
          uVar1 = uVar13 - 1;
          local_58 = param_1[2];
          uVar4 = *param_1;
          uVar5 = param_1[1];
          param_1[2] = param_1[uVar1 * 3 + 2];
          uVar6 = (param_1 + uVar1 * 3)[1];
          *param_1 = param_1[uVar1 * 3];
          param_1[1] = uVar6;
          param_1[uVar1 * 3 + 2] = local_58;
          local_68._0_4_ = (undefined4)uVar4;
          local_68._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_60._0_4_ = (undefined4)uVar5;
          uStack_60._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 3;
          *(undefined4 *)puVar2 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar2 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_60._4_4_;
          bVar15 = 2 < uVar13;
          uVar13 = uVar1;
          local_68 = uVar4;
          uStack_60 = uVar5;
        } while (bVar15);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456c4e2c FUN_1456c4e2c body=169 status=ok
// SIG undefined FUN_1456c4e2c(void)

undefined8 * FUN_1456c4e2c(undefined8 *param_1,longlong param_2,ushort *param_3)

{
  longlong *plVar1;
  
  switch((char)param_3[1]) {
  case '\x05':
    plVar1 = *(longlong **)(param_2 + (ulonglong)*param_3);
    break;
  case '\x06':
  case '\a':
  case '\x18':
    plVar1 = *(longlong **)(param_2 + (ulonglong)*param_3);
    goto LAB_1456c4e62;
  case '\b':
    plVar1 = *(longlong **)(param_2 + (ulonglong)*param_3);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
      return param_1;
    }
    goto switchD_1456c4e4f_caseD_a;
  case '\t':
    if (*(longlong *)(param_2 + (ulonglong)*param_3) == 0) goto switchD_1456c4e4f_caseD_a;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + (ulonglong)*param_3) + 0x10);
    break;
  default:
    goto switchD_1456c4e4f_caseD_a;
  case '\f':
  case '\r':
  case '\x0e':
  case '\x11':
  case '\x12':
    if (*(longlong *)(param_2 + (ulonglong)*param_3) == 0) goto switchD_1456c4e4f_caseD_a;
    plVar1 = *(longlong **)(*(longlong *)(param_2 + (ulonglong)*param_3) + 0x10);
LAB_1456c4e62:
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1,param_1);
      return param_1;
    }
    goto switchD_1456c4e4f_caseD_a;
  }
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    return param_1;
  }
switchD_1456c4e4f_caseD_a:
  *param_1 = 0xffffffffff;
  return param_1;
}



// FUNCTION 1456c4ed6 FUN_1456c4ed6 body=208 status=ok
// SIG undefined FUN_1456c4ed6(void)

int FUN_1456c4ed6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 1456c4fa6 FUN_1456c4fa6 body=83 status=ok
// SIG undefined FUN_1456c4fa6(void)

void FUN_1456c4fa6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x1a0);
  if (plVar1 != param_2) {
    puVar2 = (undefined8 *)*plVar1;
    *plVar1 = *param_2;
    *param_2 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_1456c4ffa(param_1 + 0x640,*(undefined4 *)(*(longlong *)(param_1 + 0x1a0) + 0x40));
  return;
}



// FUNCTION 1456c4ffa FUN_1456c4ffa body=110 status=ok
// SIG undefined FUN_1456c4ffa(void)

void FUN_1456c4ffa(longlong param_1,undefined4 param_2)

{
  FUN_1447a8a24(param_1,&DAT_14c8464e0,param_2);
  FUN_1447a8a24(param_1 + 0x10,&DAT_14c8464e0,param_2);
  FUN_1447a8a24(param_1 + 0x20,&DAT_14c8464e0,param_2);
  FUN_1447a8a24(param_1 + 0x30,&DAT_14c8464e0,param_2);
  FUN_1456c5068(param_1 + 0x40,param_2);
  FUN_14009114a(param_1 + 0x50,param_2,1);
  return;
}



// FUNCTION 1456c5068 FUN_1456c5068 body=71 status=ok
// SIG undefined FUN_1456c5068(void)

void FUN_1456c5068(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1456c50b0();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_148ade2ce();
      return;
    }
  }
  return;
}



// FUNCTION 1456c50b0 FUN_1456c50b0 body=147 status=ok
// SIG undefined FUN_1456c50b0(void)

void FUN_1456c50b0(longlong param_1,int param_2)

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



// FUNCTION 1456c5144 FUN_1456c5144 body=119 status=ok
// SIG undefined FUN_1456c5144(void)

void FUN_1456c5144(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_147d63bfe(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456c51bc FUN_1456c51bc body=48 status=ok
// SIG undefined FUN_1456c51bc(void)

void FUN_1456c51bc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1456c51ec FUN_1456c51ec body=132 status=ok
// SIG undefined FUN_1456c51ec(void)

void FUN_1456c51ec(longlong param_1,int param_2)

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



// FUNCTION 1456c5272 FUN_1456c5272 body=303 status=ok
// SIG undefined FUN_1456c5272(void)

undefined8 * FUN_1456c5272(char param_1,undefined8 param_2,ulonglong param_3,undefined4 param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a13c8) {
    FUN_144b3d300(&DAT_14c9a13c8);
    if (DAT_14c9a13c8 == -1) {
      DAT_14c9a13b8 = (undefined8 *)0x0;
      DAT_14c9a13c0 = 0;
      atexit(FUN_142b20b2f);
      _Init_thread_footer(&DAT_14c9a13c8);
    }
  }
  puVar2 = DAT_14c9a13b8;
  if (((DAT_14c9a13c0 & 1) == 0) || (param_1 == '\0')) {
    puVar2 = (undefined8 *)FUN_14001fdce(param_2,param_3,param_4);
    return puVar2;
  }
  if (param_3 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(DAT_14c9a13b8 + 4));
    *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + -1;
    if ((LPCRITICAL_SECTION)(puVar2 + 4) != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(puVar2 + 4));
    }
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14c9a13b8 + 4);
    EnterCriticalSection(lpCriticalSection);
    while( true ) {
      puVar4 = (undefined8 *)*puVar2;
      puVar3 = puVar4;
      iVar1 = (((uint)param_3 >> 3) + 1) - (uint)((param_3 & 7) == 0);
      while (puVar3 != (undefined8 *)0x0) {
        puVar3 = (undefined8 *)*puVar3;
        *puVar2 = puVar3;
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) goto LAB_1456c52f8;
      }
      if (iVar1 == 0) break;
      FUN_144aa7bc4(puVar2);
    }
LAB_1456c52f8:
    *(int *)((longlong)puVar2 + 0xc) = *(int *)((longlong)puVar2 + 0xc) + 1;
    LeaveCriticalSection(lpCriticalSection);
  }
  return puVar4;
}



// FUNCTION 1456c53a2 FUN_1456c53a2 body=69 status=ok
// SIG undefined FUN_1456c53a2(void)

void FUN_1456c53a2(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x4c)) {
    lVar1 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar1 = param_1;
    }
    FUN_14009d440(lVar1,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    return;
  }
  FUN_14754fcac(param_1);
  return;
}



// FUNCTION 1456c53e8 FUN_1456c53e8 body=110 status=ok
// SIG undefined FUN_1456c53e8(void)

void FUN_1456c53e8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(uint *)(param_2 + 0x48);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar2 + uVar1;
  if ((uint)(*(int *)(param_1 + 0x4c) - iVar2) < uVar1) {
    FUN_1475646ac(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x40) == 0) {
    lVar4 = param_2;
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = param_1;
  }
  FUN_1475653e1((longlong)iVar2 * 0x10 + lVar3,lVar4,uVar1);
  return;
}



// FUNCTION 1456c5456 FUN_1456c5456 body=143 status=ok
// SIG undefined FUN_1456c5456(void)

void FUN_1456c5456(longlong param_1,ulonglong param_2,uint param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (((param_3 & 6) != 0) && (*(char *)(param_1 + 0x8a) != '\0')) {
    lVar2 = FUN_14479d2ce(param_1 + 0x10);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x548) + 8);
    lVar3 = (param_2 & 0xffff) * 0x128;
    if ((*(byte *)(lVar2 + 0x126 + lVar3) & 2) == 0) {
      FUN_14009ff54(lVar2 + lVar3);
    }
  }
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_14009d478((longlong *)(param_1 + 0x28),iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) =
       param_2 & 0xffffffff | (ulonglong)param_3 << 0x20;
  return;
}



// FUNCTION 1456c54e6 FUN_1456c54e6 body=132 status=ok
// SIG undefined FUN_1456c54e6(void)

void FUN_1456c54e6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456c556a FUN_1456c556a body=95 status=ok
// SIG undefined FUN_1456c556a(void)

void FUN_1456c556a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_14009e708(param_1,iVar2);
  }
  FUN_1475503ab((longlong)iVar2 * 0xa0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1456c55ca FUN_1456c55ca body=48 status=ok
// SIG undefined FUN_1456c55ca(void)

void FUN_1456c55ca(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,4);
  }
  return;
}



// FUNCTION 1456c55fa FUN_1456c55fa body=129 status=ok
// SIG undefined FUN_1456c55fa(void)

longlong * FUN_1456c55fa(longlong *param_1,longlong *param_2)

{
  if (param_1 == param_2) {
    *(char *)(param_1 + 2) = (char)param_2[2];
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    *(char *)(param_1 + 2) = (char)param_2[2];
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    param_1[3] = param_2[3];
    param_2[3] = 0;
    *(int *)(param_1 + 4) = (int)param_2[4];
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    param_2[4] = 0;
  }
  return param_1;
}



// FUNCTION 1456c567c FUN_1456c567c body=195 status=ok
// SIG undefined FUN_1456c567c(void)

void FUN_1456c567c(longlong param_1,longlong param_2,char *param_3)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = *(int *)(param_1 + 0x24);
  if (SBORROW4(0,local_24)) {
    piVar2 = (int *)(param_1 + 4);
    if (*(int *)(param_1 + 0x20) == 0) {
      piVar2 = (int *)(param_1 + 0x10);
    }
    local_24 = *piVar2;
  }
  cVar1 = FUN_1400a246c(param_2);
  if ((cVar1 == '\0') || (*(char *)(param_2 + 8) == '\x02')) {
    cVar1 = FUN_1400a246c(param_3,&local_24);
    if ((cVar1 == '\0') || (*param_3 == '\x02')) {
      *(byte *)(param_1 + 0x7c) = *(byte *)(param_1 + 0x7c) & 0xcf;
      *(undefined4 *)(param_1 + 0x74) = 0x80000000;
      goto LAB_1456c56e5;
    }
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_3 + 4);
    bVar3 = *(int *)(param_1 + 0x20) == 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0xc);
    bVar3 = *(int *)(param_1 + 0x20) == 0;
  }
  *(byte *)(param_1 + 0x7c) = !bVar3 << 5 | *(byte *)(param_1 + 0x7c) & 0xcf | bVar3 << 4;
LAB_1456c56e5:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c5740 FUN_1456c5740 body=98 status=ok
// SIG undefined FUN_1456c5740(void)

void FUN_1456c5740(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1456c57a2 FUN_1456c57a2 body=708 status=ok
// SIG undefined FUN_1456c57a2(void)

char * FUN_1456c57a2(undefined8 *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [40];
  char *local_80;
  undefined8 local_78;
  undefined1 local_70 [8];
  char *local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined7 uStack_57;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x20) = param_1[4];
  uVar4 = *param_1;
  uVar6 = param_1[1];
  uVar7 = param_1[3];
  *(undefined8 *)(param_2 + 0x10) = param_1[2];
  *(undefined8 *)(param_2 + 0x18) = uVar7;
  *(undefined8 *)param_2 = uVar4;
  *(undefined8 *)(param_2 + 8) = uVar6;
  *(undefined8 *)(param_2 + 0x28) = param_1[5];
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 6);
  pcVar1 = param_2 + 0x38;
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  iVar8 = *(int *)(param_1 + 8);
  uVar4 = param_1[7];
  *(int *)(param_2 + 0x40) = iVar8;
  local_78 = param_4;
  if (iVar8 == 0) {
    param_2[0x44] = '\0';
    param_2[0x45] = '\0';
    param_2[0x46] = '\0';
    param_2[0x47] = '\0';
  }
  else {
    FUN_14753cf4a(pcVar1,iVar8,0);
    FUN_14753cfbd(*(undefined8 *)pcVar1,uVar4,iVar8);
  }
  pcVar2 = param_2 + 0x48;
  param_2[0x48] = '\0';
  param_2[0x49] = '\0';
  param_2[0x4a] = '\0';
  param_2[0x4b] = '\0';
  param_2[0x4c] = '\0';
  param_2[0x4d] = '\0';
  param_2[0x4e] = '\0';
  param_2[0x4f] = '\0';
  iVar8 = *(int *)(param_1 + 10);
  pvVar5 = (void *)param_1[9];
  *(int *)(param_2 + 0x50) = iVar8;
  if ((longlong)iVar8 == 0) {
    param_2[0x54] = '\0';
    param_2[0x55] = '\0';
    param_2[0x56] = '\0';
    param_2[0x57] = '\0';
  }
  else {
    FUN_1456c5740(pcVar2,iVar8,0);
    memcpy(*(void **)pcVar2,pvVar5,(longlong)iVar8 << 3);
  }
  param_2[0x58] = *(char *)(param_1 + 0xb);
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  iVar8 = *(int *)(param_1 + 0xd);
  pvVar5 = (void *)param_1[0xc];
  *(int *)(param_2 + 0x68) = iVar8;
  if ((longlong)iVar8 == 0) {
    param_2[0x6c] = '\0';
    param_2[0x6d] = '\0';
    param_2[0x6e] = '\0';
    param_2[0x6f] = '\0';
  }
  else {
    local_80 = param_2 + 0x60;
    FUN_1447bda9e(local_80,iVar8,0);
    memcpy(*(void **)local_80,pvVar5,(longlong)iVar8 << 2);
  }
  uVar4 = param_1[0xe];
  *(undefined8 *)(param_2 + 0x75) = *(undefined8 *)((longlong)param_1 + 0x75);
  *(undefined8 *)(param_2 + 0x70) = uVar4;
  FUN_1475571e0(param_2 + 0x28,&local_68,param_3);
  *(undefined4 *)(param_2 + 0x30) = (undefined4)uStack_60;
  *(char **)(param_2 + 0x28) = local_68;
  FUN_1400a241c(pcVar1,&local_58);
  FUN_1447bda9c(CONCAT71(uStack_57,local_58),local_50);
  if (CONCAT71(uStack_57,local_58) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_2 + 0x18) = local_78;
  FUN_1456c5fde(param_3,&local_68,param_1);
  *(ulonglong *)(param_2 + 0x10) = CONCAT71(uStack_57,local_58);
  *(char **)param_2 = local_68;
  *(undefined8 *)(param_2 + 8) = uStack_60;
  if ((*param_2 != '\x02') && (param_2[0xc] != '\x02')) {
    iVar8 = (int)*(undefined8 *)(param_2 + 4);
    iVar10 = (int)*(undefined8 *)(param_2 + 0x10);
    if ((iVar10 < iVar8) ||
       ((iVar8 == iVar10 &&
        ((float)((ulonglong)*(undefined8 *)(param_2 + 0x10) >> 0x20) <
         (float)((ulonglong)*(undefined8 *)(param_2 + 4) >> 0x20))))) {
      uVar3 = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined8 *)param_2;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0x14);
      *(undefined8 *)param_2 = *(undefined8 *)(param_2 + 0xc);
      *(undefined4 *)(param_2 + 0x14) = uVar3;
      *(undefined8 *)(param_2 + 0xc) = uVar4;
      param_2[0x20] = '\x01';
      param_2[0x21] = '\0';
      param_2[0x22] = '\0';
      param_2[0x23] = '\0';
    }
  }
  local_58 = 0;
  uStack_60 = 0;
  uVar9 = *(uint *)((longlong)param_1 + 0x24);
  if (SBORROW4(0,uVar9)) {
    puVar11 = (uint *)((longlong)param_1 + 4);
    if (*(int *)(param_1 + 4) == 0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar11;
    uVar12 = (ulonglong)puVar11[1] << 0x20;
  }
  else {
    uVar12 = 0;
  }
  local_68 = pcVar2;
  FUN_147552a96(param_3,local_70,uVar9 | uVar12,&local_68);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c5a68 FUN_1456c5a68 body=1318 status=ok
// SIG undefined FUN_1456c5a68(void)

void FUN_1456c5a68(longlong param_1,undefined8 param_2,undefined4 *param_3,longlong param_4,
                  longlong param_5)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  int *piVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined4 *local_e8;
  longlong local_e0;
  undefined4 *local_d8;
  longlong local_d0;
  undefined4 *local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  char local_80 [4];
  int iStack_7c;
  longlong local_78;
  longlong lStack_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_64 = param_3[9];
  if (SBORROW4(0,local_64)) {
    piVar13 = param_3 + 1;
    if (param_3[8] == 0) {
      piVar13 = param_3 + 4;
    }
    local_64 = *piVar13;
  }
  local_108 = param_1;
  local_100 = param_4;
  local_90 = param_2;
  uVar14 = FUN_14479d2ce(param_1 + 0x14);
  plVar15 = (longlong *)FUN_1456c5f90(uVar14);
  if ((longlong)(int)plVar15[1] != 0) {
    plVar23 = (longlong *)*plVar15;
    plVar15 = plVar23 + (longlong)(int)plVar15[1] * 4;
    local_98 = (undefined8 *)(local_100 + 0x24);
    local_a0 = (undefined8 *)(param_5 + 0x124);
    local_a8 = (undefined4 *)(param_5 + 0x138);
    local_b0 = (undefined8 *)(param_5 + 0x160);
    local_b8 = (undefined8 *)(param_3 + 10);
    local_c0 = param_5 + 0x170;
    local_c8 = param_3 + 0xe;
    local_d0 = param_5 + 0x180;
    local_d8 = param_3 + 0x12;
    local_e0 = param_5 + 0x198;
    local_e8 = param_3 + 0x18;
    local_f0 = (undefined8 *)(param_5 + 0x1a8);
    local_f8 = (undefined8 *)(param_3 + 0x1c);
    do {
      local_110 = plVar23 + 1;
      cVar11 = FUN_1400a246c(local_110,&local_64);
      if ((cVar11 != '\0') && (*(char *)((longlong)plVar23 + 0x1c) == '\0')) {
        lVar2 = *plVar23;
        if ((DAT_14c950c29 == 1) && (lVar2 != 0)) {
          FUN_1456cec3c(lVar2);
        }
        if (((DAT_14c950c29 & 1) != 0) && (lVar2 != 0)) {
          FUN_1456cec3c(lVar2);
        }
        iVar20 = *(int *)(local_108 + 0x28);
        if ((longlong)iVar20 != 0) {
          lVar3 = *(longlong *)(local_108 + 0x20);
          lVar21 = 0;
          do {
            bVar1 = *(byte *)(lVar3 + 0x80 + lVar21);
            if ((bVar1 & 1) != 0) {
              puVar17 = (undefined8 *)(lVar3 + lVar21);
              if ((bVar1 & 2) == 0) {
                puVar17 = (undefined8 *)*puVar17;
              }
              lVar16 = FUN_14479d2ce((longlong)puVar17 + 0x14);
              if (lVar2 == lVar16) {
                iVar20 = (int)(lVar21 >> 3) * -0xf0f0f0f;
                if (iVar20 != -1) {
                  plVar22 = (longlong *)(*(longlong *)(local_108 + 0x20) + (longlong)iVar20 * 0x88);
                  if ((*(byte *)(*(longlong *)(local_108 + 0x20) + 0x80 + (longlong)iVar20 * 0x88) &
                      2) == 0) {
                    plVar22 = (longlong *)*plVar22;
                  }
                  if ((*(byte *)((longlong)plVar23 + 0x1c) & 8) == 0) {
                    if ((*(byte *)((longlong)plVar23 + 0x1c) & 4) == 0) {
                      uVar12 = (undefined1)plVar22[2];
                    }
                    else {
                      uVar12 = 0;
                    }
                  }
                  else {
                    uVar12 = 1;
                  }
                  *(undefined8 *)(local_100 + 0x24) = *(undefined8 *)(local_100 + 0x18);
                  *(int *)(local_100 + 0x2c) = iVar20;
                  uVar14 = *local_98;
                  *(undefined4 *)(local_a0 + 1) = *(undefined4 *)(local_98 + 1);
                  *local_a0 = uVar14;
                  *(undefined1 *)(param_5 + 0x130) = uVar12;
                  *(undefined8 *)(local_a8 + 8) = *(undefined8 *)(param_3 + 8);
                  uVar4 = *param_3;
                  uVar5 = param_3[1];
                  uVar6 = param_3[2];
                  uVar7 = param_3[3];
                  uVar8 = param_3[5];
                  uVar9 = param_3[6];
                  uVar10 = param_3[7];
                  local_a8[4] = param_3[4];
                  local_a8[5] = uVar8;
                  local_a8[6] = uVar9;
                  local_a8[7] = uVar10;
                  *local_a8 = uVar4;
                  local_a8[1] = uVar5;
                  local_a8[2] = uVar6;
                  local_a8[3] = uVar7;
                  *(undefined4 *)(local_b0 + 1) = *(undefined4 *)(local_b8 + 1);
                  *local_b0 = *local_b8;
                  FUN_1447bdcfc(local_c0,local_c8);
                  FUN_1447bdca4(local_d0,local_d8);
                  *(undefined1 *)(param_5 + 400) = *(undefined1 *)(param_3 + 0x16);
                  FUN_1447bdc4c(local_e0,local_e8);
                  uVar14 = *(undefined8 *)((longlong)local_f8 + 5);
                  *local_f0 = *local_f8;
                  *(undefined8 *)((longlong)local_f0 + 5) = uVar14;
                  FUN_14055a9ea(&local_88,param_3);
                  cVar11 = (char)*local_110;
                  if (((cVar11 == '\x02') || ((char)plVar23[2] == '\x02')) ||
                     ((*(int *)((longlong)plVar23 + 0xc) <= *(int *)((longlong)plVar23 + 0x14) &&
                      ((*(int *)((longlong)plVar23 + 0xc) != *(int *)((longlong)plVar23 + 0x14) ||
                       (cVar11 != '\0' && (char)plVar23[2] != '\0')))))) {
                    if ((((char)local_88 == '\x02') || (local_80[0] == '\x02')) ||
                       ((local_88._4_4_ <= iStack_7c &&
                        ((local_88._4_4_ != iStack_7c ||
                         ((char)local_88 != '\0' && local_80[0] != '\0')))))) {
                      plVar19 = (longlong *)local_80;
                      if (((char)plVar23[2] != '\x02') &&
                         ((((plVar18 = plVar23 + 2, plVar19 = plVar18, local_80[0] != '\x02' &&
                            (iStack_7c <= *(int *)((longlong)plVar23 + 0x14))) &&
                           (plVar19 = (longlong *)local_80,
                           *(int *)((longlong)plVar23 + 0x14) <= iStack_7c)) &&
                          (plVar19 = plVar18, (char)plVar23[2] != '\0')))) {
                        plVar19 = (longlong *)local_80;
                      }
                      plVar18 = local_110;
                      if (cVar11 == '\x02') {
                        plVar18 = &local_88;
                      }
                      if (((cVar11 != '\x02' && (char)local_88 != '\x02') &&
                          (plVar18 = local_110, *(int *)((longlong)plVar23 + 0xc) <= local_88._4_4_)
                          ) && ((plVar18 = &local_88,
                                local_88._4_4_ <= *(int *)((longlong)plVar23 + 0xc) &&
                                (cVar11 == '\0')))) {
                        plVar18 = local_110;
                      }
                      local_78 = *plVar18;
                      lStack_70 = *plVar19;
                    }
                    else {
                      local_78 = 0;
                      lStack_70 = 0;
                    }
                  }
                  else {
                    local_78 = 0;
                    lStack_70 = 0;
                  }
                  local_120 = param_5;
                  local_128 = local_100;
                  (**(code **)(*plVar22 + 0x38))(plVar22,local_90,param_3,&local_78);
                }
                break;
              }
            }
            lVar21 = lVar21 + 0x88;
          } while ((longlong)iVar20 * 0x88 != lVar21);
        }
      }
      plVar23 = plVar23 + 4;
    } while (plVar23 != plVar15);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456c5f90 FUN_1456c5f90 body=78 status=ok
// SIG undefined FUN_1456c5f90(void)

longlong FUN_1456c5f90(longlong param_1)

{
  if ((((*(int *)(param_1 + 0x84) != *(int *)(param_1 + 0x2c)) ||
       (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0x30))) ||
      (*(int *)(param_1 + 0x8c) != *(int *)(param_1 + 0x34))) ||
     (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0x38))) {
    FUN_1475847ee(param_1);
  }
  return param_1 + 0x98;
}



// FUNCTION 1456c5fde FUN_1456c5fde body=232 status=ok
// SIG undefined FUN_1456c5fde(void)

char * FUN_1456c5fde(longlong param_1,char *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1475590a9(param_2,param_3,param_1);
  if ((param_2[0xc] != '\x02') && (*param_2 != '\x02')) {
    uVar1 = *(undefined8 *)(param_2 + 4);
    uVar2 = *(undefined8 *)(param_2 + 0x10);
    if (((int)uVar2 < (int)uVar1) ||
       (((int)uVar1 == (int)uVar2 &&
        ((float)((ulonglong)uVar2 >> 0x20) < (float)((ulonglong)uVar1 >> 0x20))))) {
      *(undefined8 *)(param_2 + 4) = uVar2;
      *(undefined8 *)(param_2 + 0x10) = uVar1;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x10);
    lVar5 = (longlong)*(int *)(param_1 + 0x18) * 0x18;
    do {
      lVar5 = lVar5 + -0x18;
      FUN_147558c62(lVar4,&local_40,param_2);
      *(undefined8 *)(param_2 + 0x10) = local_30;
      *(undefined8 *)param_2 = local_40;
      *(undefined8 *)(param_2 + 8) = uStack_38;
      cVar3 = FUN_140388ee0(param_2);
      if (cVar3 != '\0') break;
      lVar4 = lVar4 + 0x18;
    } while (lVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1456c60c8 FUN_1456c60c8 body=121 status=ok
// SIG undefined FUN_1456c60c8(void)

void FUN_1456c60c8(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  iVar5 = 8;
  if (8 < uVar1) {
    lVar4 = (longlong)(int)uVar1;
    if (8 < *(uint *)(param_1 + 0x10c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,0);
    iVar2 = (int)(uVar3 >> 5);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
  }
  *(int *)(param_1 + 0x10c) = iVar5;
  FUN_1456c6142(param_1,param_2);
  return;
}



// FUNCTION 1456c6142 FUN_1456c6142 body=140 status=ok
// SIG undefined FUN_1456c6142(void)

void FUN_1456c6142(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 5);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,0x20);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 5);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,0x20);
  return;
}



// FUNCTION 1456c61ce FUN_1456c61ce body=123 status=ok
// SIG undefined FUN_1456c61ce(void)

void FUN_1456c61ce(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    if (uVar1 < 0x21) {
      iVar5 = 0x20;
    }
    else {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 2,0);
      iVar2 = (int)(uVar3 >> 2);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_1456c624a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456c624a FUN_1456c624a body=141 status=ok
// SIG undefined FUN_1456c624a(void)

void FUN_1456c624a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,4);
  return;
}



// FUNCTION 1456c62d8 FUN_1456c62d8 body=583 status=ok
// SIG undefined FUN_1456c62d8(void)

void FUN_1456c62d8(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined4 *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,&local_58);
  }
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,&local_58);
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,&local_58);
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,&local_58);
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2,&local_58);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x38)) {
    plVar3 = (longlong *)(param_1 + 0x30);
    uVar11 = (longlong)*(int *)(param_1 + 0x38);
    do {
      uVar12 = uVar11 - 1;
      lVar4 = *plVar3;
      plVar13 = *(longlong **)(lVar4 + 8 + uVar12 * 0x10);
      bVar6 = true;
      if (plVar13 == (longlong *)0x0) {
LAB_1456c6517:
        plVar13 = (longlong *)0x0;
LAB_1456c64fe:
        FUN_14756bec6(plVar3,uVar12 & 0xffffffff);
        FUN_14756bf38(plVar3);
        if (!bVar6) goto LAB_1456c64cf;
      }
      else {
        iVar8 = (int)plVar13[1];
        do {
          if (iVar8 == 0) goto LAB_1456c6517;
          LOCK();
          iVar7 = (int)plVar13[1];
          bVar14 = iVar8 == iVar7;
          if (bVar14) {
            *(int *)(plVar13 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
        } while (!bVar14);
        plVar5 = *(longlong **)(lVar4 + uVar12 * 0x10);
        if (plVar5 == (longlong *)0x0) {
          bVar6 = false;
          goto LAB_1456c64fe;
        }
        (**(code **)(*plVar5 + 0x18))(plVar5,param_2,&local_58);
LAB_1456c64cf:
        LOCK();
        plVar5 = plVar13 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      bVar6 = 1 < (longlong)uVar11;
      uVar11 = uVar12;
    } while (bVar6);
  }
  local_78 = *param_2;
  uStack_74 = param_2[1];
  uStack_70 = param_2[2];
  uStack_6c = param_2[3];
  local_60 = &local_78;
  local_68 = FUN_1432dcd76;
  local_88 = local_58;
  local_80 = (undefined4)uStack_50;
  FUN_14087537a(param_1,param_2);
  if (*(short *)(param_2 + 2) != -1) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x108) + 0x548);
    uVar2 = param_2[2];
    uVar9 = uVar2 & 0xffff;
    if ((int)uVar9 < *(int *)(lVar4 + 0x30)) {
      lVar10 = lVar4 + 0x18;
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        lVar10 = *(longlong *)(lVar4 + 0x28);
      }
      if ((*(uint *)(lVar10 + (ulonglong)(uVar9 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0) {
        lVar10 = (ulonglong)uVar9 * 0x128;
        if (uVar2 >> 0x10 == (uint)*(ushort *)(*(longlong *)(lVar4 + 8) + 0x11c + lVar10)) {
          FUN_140a462a4(*(longlong *)(lVar4 + 8) + lVar10,CONCAT71((int7)((ulonglong)lVar10 >> 8),1)
                       );
        }
      }
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456c6520 FUN_1456c6520 body=244 status=ok
// SIG undefined FUN_1456c6520(void)

void FUN_1456c6520(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_14479d2ce(*param_2 + 0x20);
  plVar5 = param_1 + 3;
  if ((longlong *)param_1[0x1b] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[0x1b];
  }
  lVar3 = param_1[0x1c];
  if ((longlong)(int)lVar3 != 0) {
    lVar4 = *(longlong *)(lVar4 + 0x548);
    lVar6 = 0;
    do {
      FUN_14009ff54((ulonglong)*(ushort *)((longlong)plVar5 + lVar6 + 0x14) * 0x128 +
                    *(longlong *)(lVar4 + 8));
      lVar6 = lVar6 + 0x18;
    } while ((longlong)(int)lVar3 * 0x18 != lVar6);
  }
  local_48 = *param_2;
  local_40 = param_2[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  (**(code **)(*param_1 + 0x38))(param_1,&local_48,1);
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
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c6616 FUN_1456c6616 body=356 status=ok
// SIG undefined FUN_1456c6616(void)

void FUN_1456c6616(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (*(char *)(param_1 + 0xf1) == '\x01') {
    *(undefined1 *)(param_1 + 0xf1) = 0;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    FUN_1459528ea(param_1 + 0xf8);
    FUN_1459527a6(param_1 + 0xf8);
  }
  FUN_140a46e26(param_1 + 0x148);
  lVar6 = FUN_14479d2ce(*param_2 + 0x20);
  lVar8 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xd8);
  }
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar6 = *(longlong *)(lVar6 + 0x548);
    lVar9 = (longlong)*(int *)(param_1 + 0xe0) * 0x18;
    do {
      uVar3 = *(ushort *)(lVar8 + 0x14);
      lVar4 = *(longlong *)(lVar6 + 8);
      if (param_3 == '\x01') {
LAB_1456c66c5:
        *(undefined1 *)(lVar4 + 0x60 + (ulonglong)uVar3 * 0x128) = 1;
      }
      else if (param_3 == '\0') {
        lVar7 = FUN_1400d1226(*param_2,lVar8);
        if (lVar7 == 0) {
          uVar10 = 0;
          uVar11 = 0;
          uVar12 = 0;
          uVar13 = 0;
        }
        else {
          if ((((*(int *)(lVar8 + 4) == *(int *)(lVar7 + 0x2c)) &&
               (*(int *)(lVar8 + 8) == *(int *)(lVar7 + 0x30))) &&
              (*(int *)(lVar8 + 0xc) == *(int *)(lVar7 + 0x34))) &&
             (*(int *)(lVar8 + 0x10) == *(int *)(lVar7 + 0x38))) goto LAB_1456c66d2;
          uVar10 = *(undefined4 *)(lVar7 + 0x2c);
          uVar11 = *(undefined4 *)(lVar7 + 0x30);
          uVar12 = *(undefined4 *)(lVar7 + 0x34);
          uVar13 = *(undefined4 *)(lVar7 + 0x38);
        }
        *(undefined4 *)(lVar8 + 4) = uVar10;
        *(undefined4 *)(lVar8 + 8) = uVar11;
        *(undefined4 *)(lVar8 + 0xc) = uVar12;
        *(undefined4 *)(lVar8 + 0x10) = uVar13;
        goto LAB_1456c66c5;
      }
LAB_1456c66d2:
      lVar8 = lVar8 + 0x18;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
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
                    /* WARNING: Could not recover jumptable at 0x0001456c6766. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456c677a FUN_1456c677a body=8938 status=ok
// SIG undefined FUN_1456c677a(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1456c677a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_128 [38];
  undefined2 local_102;
  undefined8 *local_100;
  undefined8 *local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b0 [32];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  param_1[8] = 0x10000000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  memset(param_1 + 9,(int)CONCAT71((int7)((ulonglong)param_2 >> 8),0xff),0xfa);
  *(undefined8 *)((longlong)param_1 + 0x164) = 0x10000000000;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400aeef2(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 9) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400ad6ce(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x52) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400af048(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x4e) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400af19e(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 10) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400adab2(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x54) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Eval Seconds",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x56) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400af2f4(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0xb) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400ae5e2(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x4c) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_1400ae248(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x4a) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 4;
  FUN_1400ae72c(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x62) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad0e0(&DAT_14cab29b8,&local_88,L"Generic Object Binding ID",&local_e0);
  *(undefined2 *)((longlong)param_1 + 100) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ae356(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x66) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad0e0(&DAT_14cab29b8,&local_88,L"[DEPRECATED] USceneComponent Binding ID",&local_e0);
  *(undefined2 *)(param_1 + 0xd) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad0e0(&DAT_14cab29b8,&local_88,L"Spawnable Binding",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x6a) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad818(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xfa) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400af44a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x7c) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400af5a0(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0xe) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400af6f6(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x76) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x7e) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0x10) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x82) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x84) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x86) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0x11) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x8a) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x8c) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x8e) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 0",&local_e0);
  *(undefined2 *)(param_1 + 0x12) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 1",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x92) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 2",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x94) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 3",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x96) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 4",&local_e0);
  *(undefined2 *)(param_1 + 0x13) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 5",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x9a) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 6",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x9c) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 7",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x9e) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac8c6(&DAT_14cab29b8,&local_88,L"Double Channel 8",&local_e0);
  *(undefined2 *)(param_1 + 0x14) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acd0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xb6) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400af84c(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xa2) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400af9a2(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xba) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [0]",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xa4) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [1]",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xa6) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [2]",&local_e0);
  *(undefined2 *)(param_1 + 0x15) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [3]",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xaa) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [4]",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xac) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [5]",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xae) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [6]",&local_e0);
  *(undefined2 *)(param_1 + 0x16) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [7]",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xb2) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Interpolation [8]",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xb4) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acbba(&DAT_14cab29b8,&local_88,L"Cached Weight Channel Interpolation",&local_e0);
  *(undefined2 *)(param_1 + 0x17) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ae876(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xec) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Easing Result",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xe6) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad588(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xee) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400aed9e(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xf2) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad6ce(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0x1e) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 2;
  FUN_1400afaf8(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xf6) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ace60(&DAT_14cab29b8,&local_88,L"Blending Order",&local_e0);
  *(undefined2 *)(param_1 + 0x1f) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400adc08(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x5a) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ae49c(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x5e) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400adc08(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x5c) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400afc4e(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0xc) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400afda4(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x104) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad588(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x106) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400afefa(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0x21) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad448(&DAT_14cab29b8,&local_88,L"Bool Result",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x6e) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acfa0(&DAT_14cab29b8,&local_88,L"Byte Result",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x72) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ace60(&DAT_14cab29b8,&local_88,L"Integer Result",&local_e0);
  *(undefined2 *)(param_1 + 0xf) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 0",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xbc) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 1",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xbe) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 2",&local_e0);
  *(undefined2 *)(param_1 + 0x18) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 3",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xc2) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 4",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xc4) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 5",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xc6) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 6",&local_e0);
  *(undefined2 *)(param_1 + 0x19) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 7",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xca) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Double Result 8",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xcc) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad962(&DAT_14cab29b8,&local_88,L"String Result",&local_e0);
  *(undefined2 *)(param_1 + 0x1d) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_14154734c(&DAT_14cab29b8,&local_88,L"Object Result",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xea) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400acfa0(&DAT_14cab29b8,&local_88,L"Base Byte",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x74) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ace60(&DAT_14cab29b8,&local_88,L"Base Integer",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x7a) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 0",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xce) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 1",&local_e0);
  *(undefined2 *)(param_1 + 0x1a) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 2",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xd2) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 3",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xd4) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 4",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xd6) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 5",&local_e0);
  *(undefined2 *)(param_1 + 0x1b) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 6",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xda) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 7",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xdc) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Double 8",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xde) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400adab2(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0x1c) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Base Value Eval Seconds",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xe2) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Weight Result",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xe4) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ac57c(&DAT_14cab29b8,&local_88,L"Weight/Easing Result",&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xf4) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ad818(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xfa) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400ae9c0(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xfc) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400aeb0a(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0xfe) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 1;
  FUN_1400b0050(&local_88,&local_e0);
  *(undefined2 *)(param_1 + 0x20) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400aec54(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x102) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400add5e(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x13a) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400b01a6(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x13c) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8._0_1_ = 0;
  FUN_1400add5e(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x13e) = (undefined2)local_88;
  local_e0 = (undefined8 *)0x0;
  local_d8 = (undefined2 *)((ulonglong)local_d8._1_7_ << 8);
  FUN_1400b02fc(&local_88,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x6c) = (undefined2)local_88;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x10a) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x10c) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x10e) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)(param_1 + 0x22) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x112) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x114) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x116) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)(param_1 + 0x23) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x11a) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x11c) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x11e) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)(param_1 + 0x24) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x126) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x124) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x122) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x12e) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)(param_1 + 0x26) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x134) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)(param_1 + 0x25) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 300) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x12a) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)((longlong)param_1 + 0x132) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)(param_1 + 0x27) = (undefined2)local_e0;
  FUN_1400abbfa(&DAT_14cab29b8,&local_e0);
  *(undefined2 *)(param_1 + 0x28) = (undefined2)local_e0;
  local_e0._0_4_ =
       CONCAT22(*(undefined2 *)((longlong)param_1 + 0x12e),
                *(undefined2 *)((longlong)param_1 + 0x11c));
  local_f0 = (longlong)&local_e0 + 4;
  local_f8 = &local_e0;
  FUN_1447c44f6((longlong)param_1 + 0x144);
  local_88 = (undefined8 *)FUN_14001cc68(8,0x10);
  *local_88 = &PTR_FUN_14a475668;
  local_80 = (undefined8 *)CONCAT71(local_80._1_7_,1);
  local_e8._0_2_ = *(undefined2 *)((longlong)param_1 + 0x4c);
  local_d8 = (undefined2 *)((longlong)&local_e8 + 2);
  local_e0 = &local_e8;
  FUN_1400aba36(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0x4a),&local_e0,&local_88);
  if (local_88 != (undefined8 *)0x0) {
    (**(code **)*local_88)(local_88,1);
  }
  lVar6 = (longlong)param_1 + 0xbc;
  local_100 = param_1 + 0x2e;
  local_88._0_2_ = 0xffff;
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 0x11a);
  FUN_1456c9408(&local_88,&local_e0);
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 0x10a);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 0x10c);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 0x10e);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)(param_1 + 0x22);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 0x112);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 0x114);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)(param_1 + 0x23);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 0x116);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)(param_1 + 0x25);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 300);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_e0._0_2_ = *(undefined2 *)((longlong)param_1 + 0x12a);
  local_88._0_2_ = (undefined2)local_e0;
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x132);
  local_e0 = (undefined8 *)CONCAT62(local_e0._2_6_,(undefined2)local_88);
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 300);
  local_d8 = (undefined2 *)((longlong)&local_88 + 2);
  local_e0 = &local_88;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0x12a),&local_e0);
  FUN_1456c92e0(*(undefined2 *)((longlong)param_1 + 0x54));
  FUN_1456c8af2(&DAT_14cab29b8,*(undefined2 *)((longlong)param_1 + 0x56));
  FUN_1456c92e0(*(undefined2 *)(param_1 + 0x1c));
  FUN_1456c8af2(&DAT_14cab29b8,*(undefined2 *)((longlong)param_1 + 0xe2));
  FUN_1456c94f2(*(undefined2 *)((longlong)param_1 + 0x52));
  FUN_1456c9586(*(undefined2 *)((longlong)param_1 + 0x4e));
  FUN_1456c961a(*(undefined2 *)(param_1 + 10));
  FUN_1456c96ae(*(undefined2 *)((longlong)param_1 + 0x62));
  FUN_1456c9742(*(undefined2 *)((longlong)param_1 + 0x5e));
  FUN_1456c9374(*(undefined2 *)(param_1 + 0x1f));
  FUN_1456c97d6(*(undefined2 *)((longlong)param_1 + 0x6c));
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x6c);
  lVar7 = (longlong)&local_88 + 2;
  local_90 = 0x10000000000;
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar7;
  FUN_1447c44f6(local_b0,&local_e0);
  FUN_1456c9ec6(*(undefined2 *)((longlong)param_1 + 100),local_b0);
  local_88._0_2_ = *(undefined2 *)(param_1 + 9);
  local_e0 = (undefined8 *)CONCAT62(local_e0._2_6_,0xffff);
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  FUN_1456c986a(*(undefined2 *)((longlong)param_1 + 0x7c));
  FUN_1456c98fe(*(undefined2 *)((longlong)param_1 + 0x6e));
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x6e);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar7;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0x7c),&local_e0);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x54);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar7;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0x6e),&local_e0);
  FUN_1456c9992(*(undefined2 *)(param_1 + 0xe));
  FUN_1456c9a26(*(undefined2 *)((longlong)param_1 + 0x72));
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x72);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar7;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)(param_1 + 0xe),&local_e0);
  local_88 = (undefined8 *)CONCAT62(local_88._2_6_,*(undefined2 *)((longlong)param_1 + 0x54));
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar7;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)(param_1 + 0xe),&local_e0);
  local_102 = *(undefined2 *)((longlong)param_1 + 0x74);
  local_e8._0_2_ = *(undefined2 *)((longlong)param_1 + 0x72);
  local_e8._2_2_ = *(undefined2 *)(param_1 + 0x1c);
  local_e8._4_2_ = *(undefined2 *)((longlong)param_1 + 0x116);
  local_68 = 0x10000000000;
  local_e0 = &local_e8;
  local_d8 = (undefined2 *)((longlong)&local_e8 + 6U);
  FUN_1447c44f6(&local_88,&local_e0);
  local_c0 = 0;
  FUN_1400abb7c(&local_e0,&local_88);
  local_b8 = 0;
  local_88 = (undefined8 *)((longlong)&local_e8 + 6);
  local_e8._6_2_ = local_102;
  local_80 = &local_e0;
  FUN_1456c8b7e(&DAT_14cab2a18,&local_e0,&local_88);
  FUN_1456c9aba(*(undefined2 *)((longlong)param_1 + 0x76));
  FUN_1456c9374(*(undefined2 *)(param_1 + 0xf));
  local_d8 = (undefined2 *)((longlong)&local_88 + 2);
  local_e0 = &local_88;
  local_88._0_2_ = *(undefined2 *)(param_1 + 0xf);
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0x76),&local_e0);
  local_88 = (undefined8 *)CONCAT62(local_88._2_6_,*(undefined2 *)((longlong)param_1 + 0x54));
  local_d8 = (undefined2 *)((longlong)&local_88 + 2);
  local_e0 = &local_88;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0x76),&local_e0);
  local_102 = *(undefined2 *)((longlong)param_1 + 0x7a);
  local_e8._0_2_ = *(undefined2 *)(param_1 + 0xf);
  local_e8._2_2_ = *(undefined2 *)(param_1 + 0x1c);
  local_e8._4_2_ = *(undefined2 *)((longlong)param_1 + 0x116);
  local_68 = 0x10000000000;
  local_e0 = &local_e8;
  local_d8 = (undefined2 *)((longlong)&local_e8 + 6U);
  FUN_1447c44f6(&local_88,&local_e0);
  local_c0 = 0;
  FUN_1400abb7c(&local_e0,&local_88);
  local_b8 = 0;
  local_80 = &local_e0;
  local_e8._6_2_ = local_102;
  local_88 = (undefined8 *)((longlong)&local_e8 + 6);
  FUN_1456c8b7e(&DAT_14cab2a18,&local_e0,&local_88);
  lVar7 = 0x3f;
  do {
    FUN_1456c8c06(*(undefined2 *)((longlong)param_1 + lVar7 * 2));
    puVar2 = (undefined2 *)((longlong)&local_88 + 2);
    local_e0 = &local_88;
    local_d8 = puVar2;
    local_88._0_2_ = *(undefined2 *)((longlong)param_1 + lVar7 * 2 + 0x3e);
    FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + lVar7 * 2),&local_e0);
    local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x54);
    local_e0 = &local_88;
    local_d8 = puVar2;
    FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + lVar7 * 2),&local_e0);
    local_88 = (undefined8 *)
               CONCAT62(local_88._2_6_,*(undefined2 *)((longlong)param_1 + lVar7 * 2 + 0x26));
    local_e0 = &local_88;
    local_d8 = puVar2;
    FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + lVar7 * 2),&local_e0);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x48);
  lVar7 = 0x48;
  do {
    FUN_1456c8a66(&DAT_14cab29b8,*(undefined2 *)((longlong)param_1 + lVar7 * 2));
    FUN_1456c8af2(&DAT_14cab29b8,*(undefined2 *)((longlong)param_1 + lVar7 * 2 + 0x2c));
    puVar2 = (undefined2 *)((longlong)&local_88 + 2);
    local_e0 = &local_88;
    local_d8 = puVar2;
    local_88._0_2_ = *(undefined2 *)((longlong)param_1 + lVar7 * 2 + 0x2c);
    FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + lVar7 * 2),&local_e0);
    local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x54);
    local_e0 = &local_88;
    local_d8 = puVar2;
    FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + lVar7 * 2),&local_e0);
    local_88 = (undefined8 *)
               CONCAT62(local_88._2_6_,*(undefined2 *)((longlong)param_1 + lVar7 * 2 + 0x14));
    local_e0 = &local_88;
    local_d8 = puVar2;
    FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + lVar7 * 2),&local_e0);
    puVar1 = local_100;
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x51);
  lVar7 = 9;
  do {
    local_d8 = (undefined2 *)(lVar6 + 0x12);
    local_e0 = (undefined8 *)lVar6;
    FUN_1456c9144(puVar1,&local_88,&local_e0);
    lVar6 = lVar6 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  lVar6 = 0x5e;
  do {
    uVar3 = *(undefined2 *)((longlong)param_1 + lVar6 * 2 + 0x12);
    local_e8._0_2_ = *(undefined2 *)((longlong)param_1 + lVar6 * 2);
    local_e8._2_2_ = *(undefined2 *)(param_1 + 0x1c);
    local_e8._4_2_ = *(undefined2 *)((longlong)param_1 + 0x116);
    local_68 = 0x10000000000;
    local_e0 = &local_e8;
    local_d8 = (undefined2 *)((longlong)&local_e8 + 6);
    FUN_1447c44f6(&local_88,&local_e0);
    local_c0 = 0;
    FUN_1400abb7c(&local_e0,&local_88);
    local_b8 = 0;
    local_88 = (undefined8 *)((longlong)&local_e8 + 6);
    local_80 = &local_e0;
    local_e8._6_2_ = uVar3;
    FUN_1456c8b7e(&DAT_14cab2a18,&local_e0,&local_88);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x67);
  uVar3 = *(undefined2 *)((longlong)param_1 + 0xe2);
  local_e8._0_2_ = *(undefined2 *)((longlong)param_1 + 0x56);
  local_d8 = (undefined2 *)((longlong)&local_e8 + 4);
  local_e8._2_2_ = *(undefined2 *)(param_1 + 0x1c);
  local_68 = 0x10000000000;
  local_e0 = &local_e8;
  FUN_1447c44f6(&local_88,&local_e0);
  local_c0 = 0;
  FUN_1400abb7c(&local_e0,&local_88);
  local_b8 = 0;
  local_88 = (undefined8 *)((longlong)&local_e8 + 6);
  local_80 = &local_e0;
  local_e8._6_2_ = uVar3;
  FUN_1456c8b7e(&DAT_14cab2a18,&local_e0,&local_88);
  FUN_1456c9b4e(*(undefined2 *)((longlong)param_1 + 0xec));
  FUN_1456c9be2(*(undefined2 *)((longlong)param_1 + 0xee));
  lVar6 = (longlong)&local_88 + 2;
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x54);
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xec),&local_e0);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0xe6);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xec),&local_e0);
  FUN_1456c8c06(*(undefined2 *)((longlong)param_1 + 0xb6));
  FUN_1456c8af2(&DAT_14cab29b8,*(undefined2 *)((longlong)param_1 + 0xe4));
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x54);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xb6),&local_e0);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0xe4);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xb6),&local_e0);
  local_88._0_2_ = *(undefined2 *)(param_1 + 0x17);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xb6),&local_e0);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0xf4);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xee),&local_e0);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0xf4);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xe6),&local_e0);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0xf4);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xe4),&local_e0);
  FUN_1456c9c76(*(undefined2 *)((longlong)param_1 + 0xa2));
  FUN_1456c9d0a(*(undefined2 *)(param_1 + 0x1d));
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x54);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xa2),&local_e0);
  local_88._0_2_ = *(undefined2 *)(param_1 + 0x1d);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xa2),&local_e0);
  FUN_1456c9d9e(*(undefined2 *)((longlong)param_1 + 0xba));
  FUN_1456c9e32(*(undefined2 *)((longlong)param_1 + 0xea));
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x54);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xba),&local_e0);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0xea);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)lVar6;
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xba),&local_e0);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xfa);
  local_e0 = (undefined8 *)CONCAT62(local_e0._2_6_,*(undefined2 *)((longlong)param_1 + 0xfa));
  local_88 = (undefined8 *)CONCAT62(local_88._2_6_,*(undefined2 *)((longlong)param_1 + 0xfc));
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  iVar5 = DAT_14cab29c0;
  lVar6 = (longlong)(int)DAT_14cab29c0;
  DAT_14cab29c0 = DAT_14cab29c0 + 1;
  if (DAT_14cab29c4 < DAT_14cab29c0) {
    FUN_1456c90b0(&DAT_14cab29b8,iVar5);
  }
  puVar1 = (undefined8 *)(DAT_14cab29b8 + lVar6 * 0x48);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) & 0xfc | 2;
  FUN_140fa5276(puVar1);
  *(byte *)(puVar1 + 8) = *(byte *)(puVar1 + 8) | 3;
  *puVar1 = &PTR_FUN_14a4756a0;
  *(undefined4 *)(puVar1 + 1) = uVar4;
  puVar1[2] = &local_e0;
  local_e0 = (undefined8 *)CONCAT62(local_e0._2_6_,*(undefined2 *)((longlong)param_1 + 0xfe));
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0xfe);
  FUN_1400abd44(&DAT_14cab29c8,&local_e0,&local_88);
  local_88._0_2_ = *(undefined2 *)((longlong)param_1 + 0x54);
  local_e0 = &local_88;
  local_d8 = (undefined2 *)((longlong)&local_88 + 2);
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xfe),&local_e0);
  local_88 = (undefined8 *)CONCAT62(local_88._2_6_,*(undefined2 *)(param_1 + 0x20));
  local_e0 = &local_88;
  local_d8 = (undefined2 *)((longlong)&local_88 + 2);
  FUN_1400ab9ae(&DAT_14cab2a18,*(undefined2 *)((longlong)param_1 + 0xfe),&local_e0);
  FUN_140dba9e6(param_1 + 4,*(undefined2 *)((longlong)param_1 + 0x11a));
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c8a66 FUN_1456c8a66 body=139 status=ok
// SIG undefined FUN_1456c8a66(void)

void FUN_1456c8a66(undefined8 param_1,undefined2 param_2)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_2,param_2);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a475b00;
  FUN_1400abcac(param_1,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c8af2 FUN_1456c8af2 body=139 status=ok
// SIG undefined FUN_1456c8af2(void)

void FUN_1456c8af2(undefined8 param_1,undefined2 param_2)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_2,param_2);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a4759b0;
  FUN_1400abcac(param_1,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c8b7e FUN_1456c8b7e body=114 status=ok
// SIG undefined FUN_1456c8b7e(void)

void FUN_1456c8b7e(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_20 = 2;
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  FUN_1400aca16();
  if (local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c8c06 FUN_1456c8c06 body=146 status=ok
// SIG undefined FUN_1456c8c06(void)

void FUN_1456c8c06(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474d30;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c8c9a FUN_1456c8c9a body=147 status=ok
// SIG undefined FUN_1456c8c9a(void)

longlong FUN_1456c8c9a(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1400acb12();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x88;
    if (lVar3 + lVar2 != 0) goto LAB_1456c8cee;
  }
  local_30 = param_3;
  FUN_1456c8d2e(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x88;
LAB_1456c8cee:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2 + lVar3 + 0x30;
}



// FUNCTION 1456c8d2e FUN_1456c8d2e body=283 status=ok
// SIG undefined FUN_1456c8d2e(void)

undefined4 * FUN_1456c8d2e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1456c8fac(param_1,local_48);
  FUN_1456c8ed8(param_4,local_40);
  *(undefined4 *)(local_40 + 0x80) = 0xffffffff;
  cVar1 = FUN_1456c8e4a(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x84) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x80) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1400ae058(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c8e4a FUN_1456c8e4a body=141 status=ok
// SIG undefined FUN_1456c8e4a(void)

undefined8 FUN_1456c8e4a(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar3 = FUN_1400acb12(), iVar3 != -1)) {
    lVar1 = *param_1;
    lVar2 = (longlong)iVar3 * 0x88;
    FUN_140fa52b4(lVar2 + lVar1 + 0x58);
    FUN_140fa52b4(lVar1 + lVar2 + 0x30);
    memmove((void *)(lVar1 + lVar2),param_3,0x80);
    FUN_14758094c(param_1,*param_4);
    *param_4 = iVar3;
    return 1;
  }
  return 0;
}



// FUNCTION 1456c8ed8 FUN_1456c8ed8 body=211 status=ok
// SIG undefined FUN_1456c8ed8(void)

longlong FUN_1456c8ed8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  lVar1 = *param_1;
  *(undefined8 *)(param_2 + 0x20) = 0;
  FUN_1400abb7c(param_2,lVar1);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
  *(undefined2 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0x100000000;
  local_68 = 0x100000000;
  *(undefined8 *)(param_2 + 0x48) = 0;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  local_58 = 0;
  *(undefined2 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x60) = 0;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x68) = 0x100000000;
  local_40 = 0x100000000;
  *(undefined8 *)(param_2 + 0x70) = 0;
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  local_30 = 0;
  FUN_140fa52b4(&uStack_50);
  FUN_140fa52b4(&local_78);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c8fac FUN_1456c8fac body=260 status=ok
// SIG undefined FUN_1456c8fac(void)

int * FUN_1456c8fac(longlong *param_1,int *param_2)

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
      FUN_1401600aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x88);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x88) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x88 + *param_1;
  return param_2;
}



// FUNCTION 1456c90b0 FUN_1456c90b0 body=147 status=ok
// SIG undefined FUN_1456c90b0(void)

void FUN_1456c90b0(longlong param_1,int param_2)

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



// FUNCTION 1456c9144 FUN_1456c9144 body=287 status=ok
// SIG undefined FUN_1456c9144(void)

undefined4 * FUN_1456c9144(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 uVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ushort *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400abfc8(param_1,local_48);
  puVar2 = (ushort *)param_3[1];
  uVar1 = *(ushort *)*param_3;
  *local_40 = uVar1;
  local_40[1] = *puVar2;
  local_40[2] = 0xffff;
  local_40[3] = 0xffff;
  local_4c = local_48[0];
  cVar4 = FUN_1456c9264(param_1,uVar1,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar8 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar1;
      *(uint *)(local_40 + 4) = uVar6;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & uVar6) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1400adeb4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9264 FUN_1456c9264 body=124 status=ok
// SIG undefined FUN_1456c9264(void)

undefined8 FUN_1456c9264(longlong *param_1,uint param_2,short *param_3,int *param_4)

{
  short *psVar1;
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
        psVar1 = (short *)(*param_1 + (longlong)iVar3 * 0xc);
        if (*psVar1 == *param_3) {
          *(undefined4 *)psVar1 = *(undefined4 *)param_3;
          FUN_14754e9ba(param_1,*param_4);
          *param_4 = iVar3;
          return 1;
        }
        iVar3 = *(int *)(psVar1 + 2);
      } while (iVar3 != -1);
    }
  }
  return 0;
}



// FUNCTION 1456c92e0 FUN_1456c92e0 body=146 status=ok
// SIG undefined FUN_1456c92e0(void)

void FUN_1456c92e0(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474840;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9374 FUN_1456c9374 body=146 status=ok
// SIG undefined FUN_1456c9374(void)

void FUN_1456c9374(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a475a00;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9408 FUN_1456c9408 body=101 status=ok
// SIG undefined FUN_1456c9408(void)

void FUN_1456c9408(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1400abdbe(&DAT_14cab29c8,param_1,param_2);
  if (lVar1 == 0) {
    local_30 = param_1;
    local_28 = param_2;
    FUN_1456c9fca(local_1c);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c946e FUN_1456c946e body=132 status=ok
// SIG undefined FUN_1456c946e(void)

void FUN_1456c946e(longlong param_1,int param_2)

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



// FUNCTION 1456c94f2 FUN_1456c94f2 body=146 status=ok
// SIG undefined FUN_1456c94f2(void)

void FUN_1456c94f2(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a4746c0;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9586 FUN_1456c9586 body=146 status=ok
// SIG undefined FUN_1456c9586(void)

void FUN_1456c9586(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474740;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c961a FUN_1456c961a body=146 status=ok
// SIG undefined FUN_1456c961a(void)

void FUN_1456c961a(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a4747c0;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c96ae FUN_1456c96ae body=146 status=ok
// SIG undefined FUN_1456c96ae(void)

void FUN_1456c96ae(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a4749e0;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9742 FUN_1456c9742 body=146 status=ok
// SIG undefined FUN_1456c9742(void)

void FUN_1456c9742(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a475150;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c97d6 FUN_1456c97d6 body=146 status=ok
// SIG undefined FUN_1456c97d6(void)

void FUN_1456c97d6(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a475650;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c986a FUN_1456c986a body=146 status=ok
// SIG undefined FUN_1456c986a(void)

void FUN_1456c986a(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474bb0;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c98fe FUN_1456c98fe body=146 status=ok
// SIG undefined FUN_1456c98fe(void)

void FUN_1456c98fe(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a475910;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9992 FUN_1456c9992 body=146 status=ok
// SIG undefined FUN_1456c9992(void)

void FUN_1456c9992(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474c30;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9a26 FUN_1456c9a26 body=146 status=ok
// SIG undefined FUN_1456c9a26(void)

void FUN_1456c9a26(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a475960;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9aba FUN_1456c9aba body=146 status=ok
// SIG undefined FUN_1456c9aba(void)

void FUN_1456c9aba(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474cb0;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9b4e FUN_1456c9b4e body=146 status=ok
// SIG undefined FUN_1456c9b4e(void)

void FUN_1456c9b4e(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474f30;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9be2 FUN_1456c9be2 body=146 status=ok
// SIG undefined FUN_1456c9be2(void)

void FUN_1456c9be2(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474f80;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9c76 FUN_1456c9c76 body=146 status=ok
// SIG undefined FUN_1456c9c76(void)

void FUN_1456c9c76(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474db0;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9d0a FUN_1456c9d0a body=146 status=ok
// SIG undefined FUN_1456c9d0a(void)

void FUN_1456c9d0a(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a475a80;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9d9e FUN_1456c9d9e body=146 status=ok
// SIG undefined FUN_1456c9d9e(void)

void FUN_1456c9d9e(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a474e30;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9e32 FUN_1456c9e32 body=146 status=ok
// SIG undefined FUN_1456c9e32(void)

void FUN_1456c9e32(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_78 [32];
  undefined ***local_58;
  undefined4 local_50;
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = CONCAT22(param_1,param_1);
  local_18 = 0xff;
  local_58 = (undefined ***)&PTR_FUN_14a475b80;
  FUN_1400abcac(&DAT_14cab29b8,&local_58);
  if ((local_18 & 1) != 0) {
    ppppuVar1 = &local_58;
    if ((local_18 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_58;
    }
    local_18 = local_18 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_18 & 2) == 0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9ec6 FUN_1456c9ec6 body=259 status=ok
// SIG undefined FUN_1456c9ec6(void)

void FUN_1456c9ec6(undefined2 param_1)

{
  undefined ****ppppuVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [32];
  undefined8 local_b8;
  undefined **local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined ***local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = 0;
  FUN_1400abb7c(local_d8);
  local_a8 = CONCAT22(param_1,param_1);
  local_b0 = &PTR_FUN_14a475680;
  local_80 = 0;
  FUN_1400abb7c(&local_a0,local_d8);
  local_38 = 0xff;
  local_70 = local_a8;
  local_78 = (undefined ***)&PTR_FUN_14a475680;
  local_68 = local_a0;
  uStack_60 = uStack_98;
  local_58 = local_90;
  uStack_54 = uStack_8c;
  uStack_50 = uStack_88;
  uStack_4c = uStack_84;
  local_48 = local_80;
  local_80 = 0;
  FUN_1400abcac(&DAT_14cab29b8,&local_78);
  if ((local_38 & 1) != 0) {
    ppppuVar1 = &local_78;
    if ((local_38 & 2) == 0) {
      ppppuVar1 = (undefined ****)local_78;
    }
    local_38 = local_38 & 0xfe;
    (*(code *)**ppppuVar1)(ppppuVar1,0);
    if ((local_38 & 2) == 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456c9fca FUN_1456c9fca body=287 status=ok
// SIG undefined FUN_1456c9fca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1456c9fca(undefined4 *param_1,undefined8 *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_58 [40];
  undefined4 local_30 [2];
  ushort *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400abfc8(&DAT_14cab29c8,local_30);
  puVar2 = (ushort *)param_2[1];
  uVar1 = *(ushort *)*param_2;
  *local_28 = uVar1;
  local_28[1] = *puVar2;
  local_28[2] = 0xffff;
  local_28[3] = 0xffff;
  uVar6 = DAT_14cab29d0 - _DAT_14cab29fc;
  iVar7 = 1;
  if (3 < uVar6) {
    uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar6 < 1) || (iVar7 <= DAT_14cab2a10)) {
    uVar6 = DAT_14cab2a10 - 1U & (uint)uVar1;
    *(uint *)(local_28 + 4) = uVar6;
    puVar5 = DAT_14cab2a08;
    if (DAT_14cab2a08 == (undefined *)0x0) {
      puVar5 = &DAT_14cab2a00;
    }
    *(undefined4 *)(local_28 + 2) =
         *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cab2a10 - 1U & uVar6) * 4);
    puVar5 = DAT_14cab2a08;
    if (DAT_14cab2a08 == (undefined *)0x0) {
      puVar5 = &DAT_14cab2a00;
    }
    *(undefined4 *)(puVar5 + (ulonglong)(DAT_14cab2a10 - 1U & uVar6) * 4) = local_30[0];
  }
  else {
    DAT_14cab2a10 = iVar7;
    FUN_1400ad230(&DAT_14cab29c8);
  }
  *param_1 = local_30[0];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ca0ea FUN_1456ca0ea body=52 status=ok
// SIG undefined FUN_1456ca0ea(void)

void FUN_1456ca0ea(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1447be3d0(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x35f0) = uVar1;
  FUN_1447be468(*(undefined4 *)(param_1 + 8),param_1 + 0x35e8,param_1 + 0x35ec);
  return;
}



// FUNCTION 1456ca11e FUN_1456ca11e body=184 status=ok
// SIG undefined FUN_1456ca11e(void)

void FUN_1456ca11e(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x528);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x520);
    lVar7 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar7) + 0x48))();
      (**(code **)(**(longlong **)(lVar3 + lVar7) + 0x40))();
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  puVar2 = *(undefined8 **)(param_1 + 0x7c8);
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (DAT_14c760da4 != 0) {
    uVar5 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar6 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    do {
      FUN_1400b4cce(*(undefined8 *)(param_1 + 2000 + (ulonglong)uVar6 * 8));
      bVar4 = (byte)uVar6 & 0x1f;
      uVar5 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar5;
      if (uVar5 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar6 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
      }
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 1456ca1d6 FUN_1456ca1d6 body=88 status=ok
// SIG undefined FUN_1456ca1d6(void)

void FUN_1456ca1d6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x14e8);
  if (lVar1 != 0) {
    FUN_1456ca22e(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 0x14e8) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x14f8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  *(undefined8 *)(param_1 + 0x14f8) = 0;
  return;
}



// FUNCTION 1456ca22e FUN_1456ca22e body=100 status=ok
// SIG undefined FUN_1456ca22e(void)

void FUN_1456ca22e(longlong param_1)

{
  FUN_1456ca39a();
  if (*(longlong **)(param_1 + 0x110) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1456ca292(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x0001456ca284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  return;
}



// FUNCTION 1456ca292 FUN_1456ca292 body=53 status=ok
// SIG undefined FUN_1456ca292(void)

void FUN_1456ca292(longlong *param_1)

{
  FUN_1456ca2c8();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456ca2c8 FUN_1456ca2c8 body=90 status=ok
// SIG undefined FUN_1456ca2c8(void)

void FUN_1456ca2c8(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
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



// FUNCTION 1456ca322 FUN_1456ca322 body=120 status=ok
// SIG undefined FUN_1456ca322(void)

void FUN_1456ca322(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_14315afcc(lVar2);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  if ((lVar2 != 0) && (puVar3 = *(undefined8 **)(lVar2 + 8), puVar3 != (undefined8 *)0x0)) {
    *(undefined8 *)(lVar2 + 8) = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001456ca397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 1456ca39a FUN_1456ca39a body=326 status=ok
// SIG undefined FUN_1456ca39a(void)

void FUN_1456ca39a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  plVar1 = (longlong *)(param_1 + 0x30);
  lVar2 = param_1 + 0x40;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar4 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x58) != 0) {
    FUN_1449c0562(&local_58);
    iVar4 = *(int *)(param_1 + 0x58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar4) || (local_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_80 + 0x20 + (longlong)iStack_64 * 0x30);
      if (lVar3 != 0) {
        FUN_147375f08(lVar3);
        FUN_1400020a8(lVar3);
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar4) || (local_70 != lVar2)) || (local_80 != plVar1));
  }
  FUN_1456ca4e2(plVar1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456ca4e2 FUN_1456ca4e2 body=68 status=ok
// SIG undefined FUN_1456ca4e2(void)

void FUN_1456ca4e2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147375f76();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14494313c(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1456ca526 FUN_1456ca526 body=145 status=ok
// SIG undefined FUN_1456ca526(void)

undefined8 * FUN_1456ca526(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 2);
  uVar1 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar1;
  param_2[7] = 0x10000000000;
  param_2[0xc] = 0x10000000000;
  param_2[0x13] = 0x10000000000;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0x18] = 0x10000000000;
  FUN_1456ca5b8(param_2,param_2 + 3);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1447c44f6(param_2 + 8);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ca5b8 FUN_1456ca5b8 body=166 status=ok
// SIG undefined FUN_1456ca5b8(void)

void FUN_1456ca5b8(undefined2 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *param_1;
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[1];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = param_1[2];
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ca660 FUN_1456ca660 body=211 status=ok
// SIG undefined FUN_1456ca660(void)

ulonglong FUN_1456ca660(uint *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  cVar1 = (char)param_1[0x10];
  if (cVar1 != -1) {
    if (cVar1 == '\x04') {
      if (param_1[1] != 0) {
        uVar2 = *param_1;
        if ((int)uVar2 < 0) {
          return 0;
        }
        if (DAT_14c9647dc <= (int)uVar2) {
          return 0;
        }
        plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_1[1])) &&
           ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
          return CONCAT71((int7)((ulonglong)plVar4 >> 8),*plVar4 != 0);
        }
      }
    }
    else {
      if ((cVar1 != '\x02') && (cVar1 != '\x05')) {
        return 1;
      }
      if (param_1[1] != 0) {
        uVar2 = *param_1;
        if ((int)uVar2 < 0) {
          return 0;
        }
        if (DAT_14c9647dc <= (int)uVar2) {
          return 0;
        }
        lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        if ((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) {
          return (ulonglong)
                 CONCAT31((int3)(*(uint *)(lVar3 + 8) >> 8),(*(uint *)(lVar3 + 8) & 0x10200000) == 0
                         );
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1456ca734 FUN_1456ca734 body=784 status=ok
// SIG undefined FUN_1456ca734(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1456ca734(undefined1 (*param_1) [16],undefined4 *param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double _X;
  double dVar7;
  double _X_00;
  double dVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined1 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  switch(param_1[4][0]) {
  case 0:
    local_b8 = *(undefined8 *)param_1[1];
    local_c8 = *(undefined4 *)*param_1;
    uStack_c4 = *(undefined4 *)(*param_1 + 4);
    uStack_c0 = *(undefined4 *)(*param_1 + 8);
    uStack_bc = *(undefined4 *)(*param_1 + 0xc);
    local_98 = 0;
    FUN_1447c9d7a(param_2,param_3,&local_c8);
    goto LAB_1456ca9fc;
  case 1:
    auVar1 = *param_1;
    auVar11 = divpd(auVar1,_DAT_1499387d0);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(double *)param_1[1];
    auVar12 = divpd(auVar12,_DAT_1499387d0);
    auVar11 = roundpd(auVar11,auVar11,3);
    auVar12 = roundpd(auVar12,auVar12,3);
    dVar5 = (auVar1._0_8_ - auVar11._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar6 = (auVar1._8_8_ - auVar11._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar7 = (*(double *)param_1[1] - auVar12._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar8 = (0.0 - auVar12._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar2 = sin(dVar5);
    dVar3 = sin(dVar6);
    dVar4 = sin(dVar7);
    sin(dVar8);
    dVar5 = cos(dVar5);
    dVar6 = cos(dVar6);
    dVar7 = cos(dVar7);
    cos(dVar8);
    dVar8 = -(dVar6 * dVar2 * dVar4) + dVar3 * dVar5 * dVar7;
    _X = dVar3 * dVar2 * dVar4 + dVar6 * dVar5 * dVar7;
    _X_00 = dVar2 * dVar3 * dVar7 - dVar5 * dVar6 * dVar4;
    dVar2 = -(dVar2 * dVar6 * dVar7) - dVar5 * dVar3 * dVar4;
    *param_2 = 0x3f800000;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 0xc) = 0;
    uVar9 = DAT_14c8464e8;
    *(undefined8 *)(param_2 + 0xe) = DAT_14c8464e0;
    *(undefined8 *)(param_2 + 0x10) = uVar9;
    *(undefined8 *)(param_2 + 0x12) = DAT_14c8464f0;
    auVar11._8_4_ = SUB84(dVar2,0);
    auVar11._0_8_ = _X_00;
    auVar11._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x14) = auVar11;
    auVar1._8_4_ = SUB84(_X,0);
    auVar1._0_8_ = dVar8;
    auVar1._12_4_ = (int)((ulonglong)_X >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x18) = auVar1;
    *(undefined1 *)(param_2 + 0x1c) = 1;
    iVar10 = _finite(_X_00);
    if (((iVar10 != 0) && (iVar10 = _finite(dVar2), iVar10 != 0)) &&
       (iVar10 = _finite(dVar8), iVar10 != 0)) {
      _finite(_X);
      break;
    }
    goto LAB_1456ca9fc;
  case 2:
    FUN_1400b81ce(param_1,param_2);
    break;
  case 3:
    FUN_1400b8e6c(param_1,param_2);
    break;
  case 4:
    FUN_1447c943a(param_1,param_2);
    break;
  case 5:
    FUN_1400b981e(param_1,param_2);
    break;
  default:
    *param_2 = 0x3f800000;
    *(undefined1 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 4) = 0;
    *(undefined1 *)(param_2 + 0xc) = 0;
    uVar9 = DAT_14c8464e8;
    *(undefined8 *)(param_2 + 0xe) = DAT_14c8464e0;
    *(undefined8 *)(param_2 + 0x10) = uVar9;
    *(undefined8 *)(param_2 + 0x12) = DAT_14c8464f0;
    *(undefined1 *)(param_2 + 0x1c) = 0;
LAB_1456ca9fc:
    if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1456caa46 FUN_1456caa46 body=226 status=ok
// SIG undefined FUN_1456caa46(void)

longlong * FUN_1456caa46(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e2386;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cab2e FUN_1456cab2e body=140 status=ok
// SIG undefined FUN_1456cab2e(void)

undefined1 * FUN_1456cab2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456cabba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenDirectLightingNonRayTracedShadowsParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fdde8;
  return &LAB_1456cab2a;
}



// FUNCTION 1456cabba FUN_1456cabba body=261 status=ok
// SIG undefined FUN_1456cabba(void)

void FUN_1456cabba(void)

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
              0x110) < DAT_14c9fde68) {
    FUN_144b3d300(&DAT_14c9fde68);
    if (DAT_14c9fde68 == -1) {
      FUN_1400bb106(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FLumenDirectLightingNonRayTracedShadowsParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x2ba;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fdde8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d99323);
      _Init_thread_footer(&DAT_14c9fde68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cacc0 FUN_1456cacc0 body=138 status=ok
// SIG undefined FUN_1456cacc0(void)

code * FUN_1456cacc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ViewIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb4000002c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720af9c;
}



// FUNCTION 1456cad4a FUN_1456cad4a body=142 status=ok
// SIG undefined FUN_1456cad4a(void)

code * FUN_1456cad4a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145c17e4e();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LightCloudTransmittanceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLightCloudTransmittanceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd0000002c9;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462e249c;
}



// FUNCTION 1456cadd8 FUN_1456cadd8 body=146 status=ok
// SIG undefined FUN_1456cadd8(void)

code * FUN_1456cadd8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1456cae6a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FPerLightParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000002c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fdef8;
  return FUN_1462e25b4;
}



// FUNCTION 1456cae6a FUN_1456cae6a body=261 status=ok
// SIG undefined FUN_1456cae6a(void)

void FUN_1456cae6a(void)

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
              0x110) < DAT_14c9fdf78) {
    FUN_144b3d300(&DAT_14c9fdf78);
    if (DAT_14c9fdf78 == -1) {
      FUN_1456caf70(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FPerLightParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x2b3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fdef8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9933b);
      _Init_thread_footer(&DAT_14c9fdf78);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456caf70 FUN_1456caf70 body=226 status=ok
// SIG undefined FUN_1456caf70(void)

longlong * FUN_1456caf70(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e2646;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cb058 FUN_1456cb058 body=132 status=ok
// SIG undefined FUN_1456cb058(void)

undefined1 * FUN_1456cb058(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2b4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1456cb054;
}



// FUNCTION 1456cb0dc FUN_1456cb0dc body=138 status=ok
// SIG undefined FUN_1456cb0dc(void)

code * FUN_1456cb0dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightPersistentId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000002b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1456cb058;
}



// FUNCTION 1456cb166 FUN_1456cb166 body=181 status=ok
// SIG undefined FUN_1456cb166(void)

undefined1 * FUN_1456cb166(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
     (*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  param_1[0x20] = param_2[0x20];
  FUN_140f85fd4(param_1 + 0x28,param_2 + 0x28);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
    *(undefined8 *)(param_2 + 0x80) = 0;
  }
  FUN_1408228f2(param_1 + 0x88,param_2 + 0x88);
  param_1[0x98] = param_2[0x98];
  return param_1;
}



// FUNCTION 1456cb21c FUN_1456cb21c body=40 status=ok
// SIG undefined FUN_1456cb21c(void)

undefined8 FUN_1456cb21c(undefined8 param_1,int param_2)

{
  FUN_1456cb244();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456cb244 FUN_1456cb244 body=90 status=ok
// SIG undefined FUN_1456cb244(void)

void FUN_1456cb244(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab37550;
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1400bc83e(param_1 + 0x2b);
  FUN_140d7ac14(param_1 + 6);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1456cb29e FUN_1456cb29e body=21 status=ok
// SIG undefined FUN_1456cb29e(void)

undefined8 FUN_1456cb29e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1456cb2b4 FUN_1456cb2b4 body=97 status=ok
// SIG undefined FUN_1456cb2b4(void)

void FUN_1456cb2b4(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_38 [40];
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x38);
  local_10 = param_2;
  if ((iVar1 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
      *(longlong *)(param_1 + 0x40) + 0x30)) {
    FUN_1447d0588(param_1 + 0x30,&local_10);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cb316 FUN_1456cb316 body=194 status=ok
// SIG undefined FUN_1456cb316(void)

void FUN_1456cb316(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  lVar6 = *(longlong *)(&DAT_00001100 + param_1);
  if (*(longlong *)(&DAT_00001100 + param_1) == 0) {
    lVar6 = param_1;
  }
  if (param_3 != 0) {
    puVar7 = (undefined4 *)(lVar6 + (longlong)param_2 * 0x88 + 4);
    do {
      if (*(int *)(param_1 + 0x112c) != 0) {
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0x1128) * 0x88) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)(param_1 + 0x112c) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x1128);
      }
      *puVar7 = uVar3;
      *(int *)(param_1 + 0x1128) = param_2;
      *(int *)(param_1 + 0x112c) = *(int *)(param_1 + 0x112c) + 1;
      lVar4 = *(longlong *)(param_1 + 0x1118);
      if (*(longlong *)(param_1 + 0x1118) == 0) {
        lVar4 = param_1 + 0x1110;
      }
      iVar5 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar5 = param_2;
      }
      bVar2 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x22;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1456cb3d8 FUN_1456cb3d8 body=48 status=ok
// SIG undefined FUN_1456cb3d8(void)

void FUN_1456cb3d8(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    param_2 = 0;
  }
  else {
    FUN_1456cb466(param_1,0,param_2,8);
  }
  *(int *)(param_1 + 0xc) = param_2;
  return;
}



// FUNCTION 1456cb408 FUN_1456cb408 body=93 status=ok
// SIG undefined FUN_1456cb408(void)

void FUN_1456cb408(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_1456cb466();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456cb466 FUN_1456cb466 body=79 status=ok
// SIG undefined FUN_1456cb466(void)

void FUN_1456cb466(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  void *pvVar1;
  
  if (param_3 != 0) {
    if ((-1 < (int)param_3) && (0xffffffff80000000 < param_4 - 0x80000000U)) {
      pvVar1 = realloc((void *)*param_1,(ulonglong)param_3 * param_4);
      goto LAB_1456cb494;
    }
    FUN_1467bc7e1(param_3,param_4);
  }
  free((void *)*param_1);
  pvVar1 = (void *)0x0;
LAB_1456cb494:
  *param_1 = pvVar1;
  return;
}



// FUNCTION 1456cb4b6 FUN_1456cb4b6 body=42 status=ok
// SIG undefined FUN_1456cb4b6(void)

void FUN_1456cb4b6(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < param_2) {
    FUN_1456cb4e0();
    return;
  }
  return;
}



// FUNCTION 1456cb4e0 FUN_1456cb4e0 body=26 status=ok
// SIG undefined FUN_1456cb4e0(void)

void FUN_1456cb4e0(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1456cb466(param_1,*(undefined4 *)(param_1 + 8),param_2,8);
    return;
  }
  return;
}



// FUNCTION 1456cb4fa FUN_1456cb4fa body=283 status=ok
// SIG undefined FUN_1456cb4fa(void)

void FUN_1456cb4fa(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    iVar3 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar8 = iVar3;
joined_r0x0001456cb51b:
    do {
      iVar6 = iVar3 * 2 + 1;
      if (iVar6 < (int)param_2) {
        iVar7 = iVar3 * 2 + 2;
        if ((iVar7 < (int)param_2) && ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar7])) {
          iVar6 = iVar7;
        }
        uVar4 = param_1[iVar3];
        if (uVar4 < (ulonglong)param_1[iVar6]) {
          param_1[iVar3] = param_1[iVar6];
          param_1[iVar6] = uVar4;
          iVar3 = iVar6;
          goto joined_r0x0001456cb51b;
        }
      }
      bVar9 = iVar8 != 0;
      iVar3 = iVar8 + -1;
      iVar8 = iVar3;
    } while (bVar9);
    if (1 < (int)param_2) {
      uVar4 = (ulonglong)param_2;
      uVar1 = *param_1;
      *param_1 = param_1[uVar4 - 1];
      param_1[uVar4 - 1] = uVar1;
      if (param_2 != 2) {
        do {
          uVar5 = uVar4 - 1;
          iVar3 = 0;
          iVar6 = 1;
          iVar8 = 0;
          do {
            iVar3 = iVar3 + 2;
            iVar7 = iVar6;
            if (((longlong)iVar3 < (longlong)uVar5) &&
               ((ulonglong)param_1[iVar6] <= (ulonglong)param_1[iVar3])) {
              iVar7 = iVar3;
            }
            uVar2 = param_1[iVar8];
            if ((ulonglong)param_1[iVar7] <= uVar2) break;
            param_1[iVar8] = param_1[iVar7];
            param_1[iVar7] = uVar2;
            iVar3 = iVar7 * 2;
            iVar6 = iVar7 * 2 + 1;
            iVar8 = iVar7;
          } while ((longlong)iVar6 < (longlong)uVar5);
          uVar1 = *param_1;
          *param_1 = param_1[uVar4 - 2];
          param_1[uVar4 - 2] = uVar1;
          uVar4 = uVar5;
        } while (2 < uVar5);
      }
    }
  }
  return;
}



// FUNCTION 1456cb616 FUN_1456cb616 body=98 status=ok
// SIG undefined FUN_1456cb616(void)

undefined8 * FUN_1456cb616(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = DAT_14c98e618;
  uVar2 = FUN_1400c16ce(DAT_14c98e618,*(undefined4 *)(param_1 + 0xe0));
  if (((int)uVar2 < 0) || (*(int *)(lVar1 + 0x318) <= (int)uVar2)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x310);
    *param_2 = *(undefined8 *)(lVar1 + (ulonglong)uVar2 * 0x10);
    lVar1 = *(longlong *)(lVar1 + 8 + (ulonglong)uVar2 * 0x10);
    param_2[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  return param_2;
}



// FUNCTION 1456cb678 FUN_1456cb678 body=53 status=ok
// SIG undefined FUN_1456cb678(void)

void FUN_1456cb678(longlong *param_1)

{
  FUN_1456cb6ae();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456cb6ae FUN_1456cb6ae body=316 status=ok
// SIG undefined FUN_1456cb6ae(void)

void FUN_1456cb6ae(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      FUN_1400cab68(*local_68 + (longlong)iStack_4c * 0x30 + 8);
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cb7ec FUN_1456cb7ec body=337 status=ok
// SIG undefined FUN_1456cb7ec(void)

ulonglong FUN_1456cb7ec(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  undefined7 uVar3;
  
  if ((*(longlong *)(param_1 + 0x668) != 0) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x668) + 0xf2) & 1) != 0)) {
    cVar1 = FUN_147c00e22();
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x690) & 0x10) == 0)) {
      *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) | 0x20;
      FUN_145a44f49(*(undefined8 *)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x788));
      *(undefined4 *)(param_1 + 0x788) = 0;
      if (*(int *)(param_1 + 0x78c) != 0) {
        FUN_147c0d124(param_1 + 0x780,0);
      }
      FUN_145a44f18(*(undefined8 *)(param_1 + 0x790),*(undefined4 *)(param_1 + 0x798));
      *(undefined4 *)(param_1 + 0x798) = 0;
      if (*(int *)(param_1 + 0x79c) != 0) {
        FUN_147c0d196(param_1 + 0x790,0);
      }
      FUN_145a44f7a(*(undefined8 *)(param_1 + 0x7a0),*(undefined4 *)(param_1 + 0x7a8));
      *(undefined4 *)(param_1 + 0x7a8) = 0;
      if (*(int *)(param_1 + 0x7ac) != 0) {
        FUN_147c0d204(param_1 + 0x7a0,0);
      }
      FUN_145a44eb6(*(undefined8 *)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0x7c8));
      *(undefined4 *)(param_1 + 0x7c8) = 0;
      if (*(int *)(param_1 + 0x7cc) != 0) {
        FUN_147c0d276(param_1 + 0x7c0,0);
      }
      uVar3 = (undefined7)((ulonglong)unaff_RDI >> 8);
      uVar2 = CONCAT71(uVar3,1);
      if ((*(char *)(param_1 + 0x691) < '\0') &&
         (*(byte *)(*(longlong *)(param_1 + 0x668) + 0x170) < *(byte *)(param_1 + 0x69e))) {
        uVar2 = CONCAT71(uVar3,1);
        FUN_1435bf26c(param_1,0,1,0);
      }
      goto LAB_1456cb809;
    }
  }
  uVar2 = 0;
LAB_1456cb809:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1456cb93e FUN_1456cb93e body=150 status=ok
// SIG undefined FUN_1456cb93e(void)

void FUN_1456cb93e(longlong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  puVar4 = (uint *)(*(longlong *)(*param_1 + 0x38) + (longlong)param_2 * 0x10 + 8);
  iVar2 = (int)param_1[2];
  iVar3 = ~*puVar4 + iVar2;
  if (iVar3 != 0) {
    iVar5 = 1;
    if (iVar3 < 1) {
      iVar5 = iVar3;
    }
    memmove((void *)(param_1[1] + (longlong)(int)*puVar4 * 4),
            (void *)(param_1[1] + (longlong)(iVar2 - iVar5) * 4),(longlong)iVar5 << 2);
    iVar2 = (int)param_1[2];
  }
  *(int *)(param_1 + 2) = iVar2 + -1;
  uVar1 = *puVar4;
  if ((int)uVar1 < iVar2 + -1 && -1 < (int)uVar1) {
    *(uint *)(*(longlong *)(*param_1 + 0x38) + 8 +
             (longlong)*(int *)(param_1[1] + (ulonglong)uVar1 * 4) * 0x10) = uVar1;
  }
  *puVar4 = 0xffffffff;
  return;
}



// FUNCTION 1456cb9d4 FUN_1456cb9d4 body=48 status=ok
// SIG undefined FUN_1456cb9d4(void)

void FUN_1456cb9d4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1456cba04 FUN_1456cba04 body=114 status=ok
// SIG undefined FUN_1456cba04(void)

undefined8 * FUN_1456cba04(undefined8 *param_1,undefined8 param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 *_Dst;
  
  *param_1 = param_2;
  param_1[5] = 0;
  iVar1 = *(int *)((longlong)param_3 + 0x28);
  pvVar2 = *(void **)((longlong)param_3 + 0x20);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  }
  else {
    if (pvVar2 != (void *)0x0) {
      param_3 = pvVar2;
    }
    FUN_146ec8ea8(param_1 + 1,iVar1,0);
    _Dst = (undefined8 *)param_1[5];
    if ((undefined8 *)param_1[5] == (undefined8 *)0x0) {
      _Dst = param_1 + 1;
    }
    memcpy(_Dst,param_3,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 1456cba76 FUN_1456cba76 body=125 status=ok
// SIG undefined FUN_1456cba76(void)

void FUN_1456cba76(longlong param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x20;
    if (0x20 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar2 = FUN_144a3809e(lVar3 << 2,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar2 >> 2)) {
        uVar4 = uVar2 >> 2 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x8c) = (int)uVar4;
    FUN_1400cc6c4(param_1,param_2,uVar4,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1456cbaf4 FUN_1456cbaf4 body=101 status=ok
// SIG undefined FUN_1456cbaf4(void)

void FUN_1456cbaf4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x2c)) {
    *(int *)(param_1 + 0x2c) = (int)uVar2;
    FUN_1400cc4ea(param_1,*(undefined4 *)(param_1 + 0x28),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 1456cbb5a FUN_1456cbb5a body=42 status=ok
// SIG undefined FUN_1456cbb5a(void)

ulonglong FUN_1456cbb5a(longlong param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  
  if ((param_3 == '\x02') && (*(char *)(*(longlong *)(param_1 + 0x48) + 0x182) != '\x01')) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1456cbb84(param_1,param_2,0);
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}



// FUNCTION 1456cbb84 FUN_1456cbb84 body=303 status=ok
// SIG undefined FUN_1456cbb84(void)

undefined8 FUN_1456cbb84(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_79;
  undefined1 local_78 [40];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x100) == '\x01') {
    local_79 = 2;
    local_88 = FUN_144a7be76(param_1);
    FUN_144a7bec8(param_1,local_98);
    local_78[0] = 0;
    local_50 = 0;
    FUN_144a7bf34(local_78,local_98,&local_88,&local_79);
    if (local_90 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    cVar3 = FUN_140343ed8(lVar2 + 0x80,local_78);
    FUN_144a5ac3a(local_78);
    if (cVar3 == '\0') goto LAB_1456cbbba;
  }
  else {
LAB_1456cbbba:
    if ((((*(char *)(lVar2 + 0x140) != '\x01') || (param_3 != '\0')) ||
        (*(int *)(param_1 + 0xdc) <= *(int *)(param_1 + 0xd8))) &&
       ((*(char *)(lVar2 + 0x180) != '\x01' ||
        (*(float *)(param_1 + 0xe0) < *(float *)(param_2 + 8) ||
         *(float *)(param_1 + 0xe0) == *(float *)(param_2 + 8))))) {
      uVar4 = 1;
      goto LAB_1456cbbd8;
    }
  }
  uVar4 = 0;
LAB_1456cbbd8:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1456cbcb4 FUN_1456cbcb4 body=206 status=ok
// SIG undefined FUN_1456cbcb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1456cbcb4(void)

{
  if ((DAT_14c9c47ff & 2) == 0) {
    DAT_14c9c47ff = DAT_14c9c47ff | 2;
    _DAT_14c9c47a0 = L"TDepthOnlyVS<true>";
    _DAT_14c9c47b8 = FUN_146826540;
    _DAT_14c9c47c0 = FUN_146825d77;
    _DAT_14c9c47c8 = FUN_146825fd6;
    _DAT_14c9c47d0 = FUN_1407e02ea;
    _DAT_14c9c47d8 = FUN_146826273;
    _DAT_14c9c47b0 = FUN_14714d5da;
    _DAT_14c9c47f0 = 0xffffffff00000108;
    _DAT_14c9c47f8 = 8;
    DAT_14c9c47fc = 0;
    _DAT_14c9c47e0 = &LAB_14714d610;
    FUN_1456cbd82();
    FUN_1407e00cc(&DAT_14c9c4798);
  }
  return &DAT_14c9c4798;
}



// FUNCTION 1456cbd82 FUN_1456cbd82 body=123 status=ok
// SIG undefined FUN_1456cbd82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456cbd82(void)

{
  _DAT_14c9c9188 = L"BASE";
  DAT_14c9c91b2 = 4;
  _DAT_14c9c9190 = FUN_141092e92();
  _DAT_14c9c9198 = DAT_14c9c47a8;
  _DAT_14c9c91a0 = &LAB_14682652b;
  DAT_14c9c47a8 = &DAT_14c9c9188;
  DAT_14c9c47fd = DAT_14c9c47fd + '\x01';
  _DAT_14c9c91a8 = 0x100000000;
  if (*(char *)(_DAT_14c9c9190 + 100) != '\0') {
    DAT_14c9c47fe = DAT_14c9c47fe + '\x01';
  }
  return;
}



// FUNCTION 1456cbdfe FUN_1456cbdfe body=206 status=ok
// SIG undefined FUN_1456cbdfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1456cbdfe(void)

{
  if ((DAT_14c9c4927 & 2) == 0) {
    DAT_14c9c4927 = DAT_14c9c4927 | 2;
    _DAT_14c9c48c8 = L"TDepthOnlyVS<false>";
    _DAT_14c9c48e0 = FUN_146826540;
    _DAT_14c9c48e8 = FUN_146825d77;
    _DAT_14c9c48f0 = FUN_146825fd6;
    _DAT_14c9c48f8 = FUN_1407e02ea;
    _DAT_14c9c4900 = FUN_146826273;
    _DAT_14c9c48d8 = FUN_14714d67c;
    _DAT_14c9c4918 = 0xffffffff00000108;
    _DAT_14c9c4920 = 8;
    DAT_14c9c4924 = 0;
    _DAT_14c9c4908 = &LAB_14714d6b2;
    FUN_1456cbecc();
    FUN_1407e00cc(&DAT_14c9c48c0);
  }
  return &DAT_14c9c48c0;
}



// FUNCTION 1456cbecc FUN_1456cbecc body=123 status=ok
// SIG undefined FUN_1456cbecc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456cbecc(void)

{
  _DAT_14c9c91b8 = L"BASE";
  DAT_14c9c91e2 = 4;
  _DAT_14c9c91c0 = FUN_141092e92();
  _DAT_14c9c91c8 = DAT_14c9c48d0;
  _DAT_14c9c91d0 = &LAB_14682652b;
  DAT_14c9c48d0 = &DAT_14c9c91b8;
  DAT_14c9c4925 = DAT_14c9c4925 + '\x01';
  _DAT_14c9c91d8 = 0x100000000;
  if (*(char *)(_DAT_14c9c91c0 + 100) != '\0') {
    DAT_14c9c4926 = DAT_14c9c4926 + '\x01';
  }
  return;
}



// FUNCTION 1456cbf48 FUN_1456cbf48 body=206 status=ok
// SIG undefined FUN_1456cbf48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1456cbf48(void)

{
  if ((DAT_14c9c4b77 & 2) == 0) {
    DAT_14c9c4b77 = DAT_14c9c4b77 | 2;
    _DAT_14c9c4b18 = L"TDepthOnlyPS<false>";
    _DAT_14c9c4b30 = FUN_146826540;
    _DAT_14c9c4b38 = FUN_146825d77;
    _DAT_14c9c4b40 = FUN_146825fd6;
    _DAT_14c9c4b48 = FUN_1407e02ea;
    _DAT_14c9c4b50 = FUN_146826273;
    _DAT_14c9c4b28 = FUN_14714d8dc;
    _DAT_14c9c4b68 = 0xffffffff00000108;
    _DAT_14c9c4b70 = 8;
    DAT_14c9c4b74 = 0;
    _DAT_14c9c4b58 = &LAB_14714d912;
    FUN_1456cc016();
    FUN_1407e00cc(&DAT_14c9c4b10);
  }
  return &DAT_14c9c4b10;
}



// FUNCTION 1456cc016 FUN_1456cc016 body=123 status=ok
// SIG undefined FUN_1456cc016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456cc016(void)

{
  _DAT_14c9c9218 = L"BASE";
  DAT_14c9c9242 = 4;
  _DAT_14c9c9220 = FUN_141092e92();
  _DAT_14c9c9228 = DAT_14c9c4b20;
  _DAT_14c9c9230 = &LAB_14682652b;
  DAT_14c9c4b20 = &DAT_14c9c9218;
  DAT_14c9c4b75 = DAT_14c9c4b75 + '\x01';
  _DAT_14c9c9238 = 0x100000000;
  if (*(char *)(_DAT_14c9c9220 + 100) != '\0') {
    DAT_14c9c4b76 = DAT_14c9c4b76 + '\x01';
  }
  return;
}



// FUNCTION 1456cc092 FUN_1456cc092 body=138 status=ok
// SIG undefined FUN_1456cc092(void)

code * FUN_1456cc092(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterIndirection";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x189000000508;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf69ac;
}



// FUNCTION 1456cc11c FUN_1456cc11c body=138 status=ok
// SIG undefined FUN_1456cc11c(void)

code * FUN_1456cc11c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RectLightAtlasMaxMipLevel";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18c00000050d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf680e;
}



// FUNCTION 1456cc1a6 FUN_1456cc1a6 body=138 status=ok
// SIG undefined FUN_1456cc1a6(void)

code * FUN_1456cc1a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LandscapeWeightmapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x190000000515;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147cf655c;
}



// FUNCTION 1456cc230 FUN_1456cc230 body=132 status=ok
// SIG undefined FUN_1456cc230(void)

void FUN_1456cc230(longlong param_1,longlong *param_2,char param_3)

{
  uint *puVar1;
  char cVar2;
  
  if ((param_2 != (longlong *)0x0) && (1 < *(byte *)((longlong)param_2 + 0xc))) {
    cVar2 = FUN_1400ca342(param_1 + 0x1e8,param_2);
    if (cVar2 == '\0') {
      cVar2 = FUN_1400ca342(param_1 + 0x2b8,param_2);
      if (cVar2 == '\0') {
        puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
        *puVar1 = *puVar1 | *(uint *)(param_1 + 0x2b0);
        FUN_144aa4382(param_1 + 0x250,param_2);
        if (param_3 != '\0') {
          FUN_1447dd35a(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1456cc2b4 FUN_1456cc2b4 body=468 status=ok
// SIG undefined FUN_1456cc2b4(void)

void FUN_1456cc2b4(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  lVar4 = (longlong)(int)param_2[1] * 0x10;
  if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + lVar4) == '\x01') {
    FUN_144b0231c(param_2,*(undefined8 *)(param_1 + 0x30));
    plVar5 = (longlong *)0x0;
    if (1 < *(byte *)((longlong)param_2 + 0xc)) {
      plVar5 = param_2;
    }
    FUN_1400c9f82(param_1,plVar5,0);
    if (DAT_14c75f3b3 == '\x01') {
      puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
      *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x318);
      FUN_1447dd1e0(param_1 + 0x2b8,param_2);
    }
    goto LAB_1456cc419;
  }
  cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + lVar4);
  plVar5 = (longlong *)0x0;
  if (1 < *(byte *)((longlong)param_2 + 0xc)) {
    plVar5 = param_2;
  }
  if (cVar2 == '\x04') {
    FUN_140aa6718();
  }
  else {
    FUN_1400c9f82(param_1,plVar5,1);
  }
  if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10) != '\x02')
  {
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x318);
    FUN_1447dd1e0(param_1 + 0x2b8,param_2);
  }
  if (*(char *)((longlong)param_2 + 0xc) == '\x06') {
    uVar6 = *(undefined8 *)(param_1 + 0x40);
LAB_1456cc3b8:
    FUN_144b0231c(param_2,uVar6);
    if (*(char *)(param_1 + 0x488) != '\x01') goto LAB_1456cc419;
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x450);
    FUN_1447dd1e0(param_1 + 0x3f0,param_2);
    lVar4 = param_1 + 0x388;
    uVar3 = *(uint *)(param_1 + 1000);
  }
  else {
    if (*(char *)((longlong)param_2 + 0xc) == '\x03') {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      goto LAB_1456cc3b8;
    }
    if ((cVar2 == '\x04') || (cVar2 != '\x02')) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      goto LAB_1456cc3b8;
    }
    FUN_144b0231c(param_2,*(undefined8 *)(param_1 + 0x28));
    if (*(char *)(param_1 + 0x488) != '\x01') goto LAB_1456cc419;
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 & ~*(uint *)(param_1 + 1000);
    FUN_1447dd1e0(param_1 + 0x388,param_2);
    lVar4 = param_1 + 0x3f0;
    uVar3 = *(uint *)(param_1 + 0x450);
  }
  puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
  *puVar1 = *puVar1 | uVar3;
  FUN_144aa4382(lVar4,param_2);
LAB_1456cc419:
  FUN_1447dd35a(param_1);
  return;
}



// FUNCTION 1456cc488 FUN_1456cc488 body=221 status=ok
// SIG undefined FUN_1456cc488(void)

void FUN_1456cc488(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10) != '\x02')
  {
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x318);
    FUN_1447dd1e0(param_1 + 0x2b8,param_2);
  }
  if ((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 6)) {
    FUN_1400ca6de(param_1,param_2);
    FUN_14043c188(param_1,param_2);
    lVar2 = (longlong)(int)param_2[1] * 0x10;
    if ((*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + lVar2) == '\x04') &&
       (*(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xd + lVar2) != '\x01')) {
      plVar3 = (longlong *)0x0;
      if (1 < *(byte *)((longlong)param_2 + 0xc)) {
        plVar3 = param_2;
      }
      FUN_140aa6718(param_1,plVar3);
    }
    else {
      plVar3 = (longlong *)0x0;
      if (1 < *(byte *)((longlong)param_2 + 0xc)) {
        plVar3 = param_2;
      }
      FUN_1400c9f82(param_1,plVar3,1);
    }
  }
  else {
    FUN_1400c9b9a(param_1,param_2);
    FUN_1403f3cf4(param_1,param_2);
  }
  FUN_1447dd35a(param_1);
  return;
}



// FUNCTION 1456cc566 FUN_1456cc566 body=67 status=ok
// SIG undefined FUN_1456cc566(void)

void FUN_1456cc566(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0xd0000);
    FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001456cc5a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 1456cc5aa FUN_1456cc5aa body=151 status=ok
// SIG undefined FUN_1456cc5aa(void)

void FUN_1456cc5aa(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x520) == '\0') {
    *(ulonglong *)(param_2 + 0x130) = param_3;
  }
  else {
    local_28 = (param_3 & 0xffffffffffff) << 8 | 3;
    local_20 = param_2;
    FUN_1447f2d4a(param_1 + 0x4a8);
  }
  lVar1 = *(longlong *)(param_2 + 0x88);
  if (param_3 == 0xffffffffffffffff) {
    param_3 = (ulonglong)(uint)(*(int *)(lVar1 + 0x14) * *(int *)(lVar1 + 0x10));
  }
  *(ulonglong *)(lVar1 + 0x90) = param_3;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cc642 FUN_1456cc642 body=1591 status=ok
// SIG undefined FUN_1456cc642(void)

void FUN_1456cc642(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar1 = *(longlong *)(param_1 + 0x10);
  FUN_1456ccc7a();
  iVar8 = (uint)*(byte *)(param_1 + 0x2c) << 0xb;
  if (DAT_14c760da4 < 2) {
    plVar2 = *(longlong **)(param_1 + 0x30);
    if (plVar2 != (longlong *)0x0) {
      iVar6 = *(int *)((longlong)&DAT_14c873434 +
                      (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x30));
      if (iVar6 < 0x49) {
        if (iVar6 == 0x1b) {
          iVar6 = 0x1c;
        }
        else if (iVar6 == 0x35) {
          iVar6 = 0x38;
        }
        else if (iVar6 == 0x46) {
          iVar6 = 0x47;
        }
      }
      else if (iVar6 == 0x49) {
        iVar6 = 0x4a;
      }
      else if (iVar6 == 0x4c) {
        iVar6 = 0x4d;
      }
      else if (iVar6 == 0x5a) {
        iVar6 = 0x57;
      }
      local_b0 = (undefined8 *)(CONCAT44(local_b0._4_4_,iVar8) | 2);
      local_b8 = CONCAT44(local_b8._4_4_,iVar6);
      iVar6 = (**(code **)(*plVar2 + 0x68))
                        (plVar2,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x24));
      if (iVar6 < 0) {
        iVar15 = *(int *)((longlong)&DAT_14c873434 +
                         (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x30));
        if (iVar15 < 0x49) {
          if (iVar15 == 0x1b) {
            iVar13 = 0x1c;
          }
          else if (iVar15 == 0x35) {
            iVar13 = 0x38;
          }
          else if (iVar15 == 0x46) {
            iVar13 = 0x47;
          }
          else {
LAB_1456ccb50:
            iVar13 = iVar15;
          }
        }
        else if (iVar15 == 0x49) {
          iVar13 = 0x4a;
        }
        else if (iVar15 == 0x4c) {
          iVar13 = 0x4d;
        }
        else {
          iVar13 = 0x57;
          if (iVar15 != 0x5a) goto LAB_1456ccb50;
        }
        local_a0 = CONCAT44(local_a0._4_4_,iVar8) | 2;
        local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,iVar13);
        local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,(uint)*(byte *)(param_1 + 0x28));
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1 + 0x24));
        FUN_140002266(local_90,L"Num=%d, Size=(%d,%d), PF=%d, DXGIFormat=0x%x, Flags=0x%x",
                      *(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x20));
        local_b8 = *(undefined8 *)(lVar1 + 8);
        local_b0 = local_90;
        FUN_145763094(iVar6,
                      "SwapChain1->ResizeBuffers(NumBackBuffers, SizeX, SizeY, UE::DXGIUtilities::GetSwapChainFormat(PixelFormat), SwapChainFlags)"
                      ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport.cpp",0x15d);
      }
    }
    if (*(int *)(param_1 + 0x54) != 0) {
      uVar3 = *(undefined8 *)(lVar1 + 2000);
      uVar14 = 0;
      do {
        local_98 = 0;
        local_b8 = *(undefined8 *)(param_1 + 0x30);
        local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,uVar14);
        local_a8 = &local_98;
        lVar9 = FUN_1456ccf55(uVar3,*(undefined1 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20),
                              *(undefined4 *)(param_1 + 0x24));
        lVar10 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar10 = param_1 + 0x58;
        }
        lVar16 = *(longlong *)(lVar10 + (longlong)(int)uVar14 * 0x10);
        if (lVar16 != lVar9) {
          *(longlong *)(lVar10 + (longlong)(int)uVar14 * 0x10) = lVar9;
          if (lVar9 != 0) {
            (**(code **)(*(longlong *)(lVar9 + 0x60) + 8))(lVar9 + 0x60);
          }
          if (lVar16 != 0) {
            (**(code **)(*(longlong *)(lVar16 + 0x60) + 0x10))(lVar16 + 0x60);
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x54));
    }
    goto LAB_1456cc79b;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_1456cc862:
    uVar7 = 0;
  }
  else {
    uVar12 = 0;
    do {
      iVar6 = *(int *)(param_1 + 0xd8);
      if (iVar6 == -1) {
        iVar6 = (int)(uVar12 % (ulonglong)DAT_14c760da4);
      }
      lVar10 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar10 = param_1 + 0x58;
      }
      *(int *)(lVar10 + 8 + (longlong)(int)uVar12 * 0x10) = iVar6;
      uVar14 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar14;
    } while (uVar14 < *(uint *)(param_1 + 0x54));
    if (*(uint *)(param_1 + 0x54) == 0) goto LAB_1456cc862;
    uVar14 = 0;
    do {
      uVar12 = uStack_50;
      lVar10 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar10 = param_1 + 0x58;
      }
      puVar4 = *(undefined4 **)
                (lVar1 + 2000 + (ulonglong)*(uint *)(lVar10 + 8 + (longlong)(int)uVar14 * 0x10) * 8)
      ;
      puVar11 = puVar4 + 0x2c0;
      if (*(undefined4 **)(puVar4 + 0x4a0) != (undefined4 *)0x0) {
        puVar11 = *(undefined4 **)(puVar4 + 0x4a0);
      }
      uVar3 = *(undefined8 *)(puVar11 + 4);
      lVar10 = (longlong)(int)uStack_50;
      uVar7 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
      if (uStack_50._4_4_ < uVar7) {
        FUN_14738cfce(&local_58,uVar12 & 0xffffffff);
      }
      uVar12 = uStack_60;
      *(undefined8 *)(local_58 + lVar10 * 8) = uVar3;
      uVar17 = 1;
      if (DAT_14ca81480 == 0) {
        uVar17 = *puVar4;
      }
      lVar10 = (longlong)(int)uStack_60;
      uVar7 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar7);
      if (uStack_60._4_4_ < uVar7) {
        FUN_1447808da(&local_68,uVar12 & 0xffffffff);
      }
      *(undefined4 *)((longlong)local_68 + lVar10 * 4) = uVar17;
      uVar14 = uVar14 + 1;
      uVar7 = *(uint *)(param_1 + 0x54);
    } while (uVar14 < uVar7);
  }
  plVar2 = *(longlong **)(param_1 + 0x40);
  if (plVar2 != (longlong *)0x0) {
    iVar6 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x30))
    ;
    if (iVar6 < 0x49) {
      if (iVar6 == 0x1b) {
        iVar15 = 0x1c;
      }
      else if (iVar6 == 0x35) {
        iVar15 = 0x38;
      }
      else if (iVar6 == 0x46) {
        iVar15 = 0x47;
      }
      else {
LAB_1456ccb78:
        iVar15 = iVar6;
      }
    }
    else if (iVar6 == 0x49) {
      iVar15 = 0x4a;
    }
    else if (iVar6 == 0x4c) {
      iVar15 = 0x4d;
    }
    else {
      iVar15 = 0x57;
      if (iVar6 != 0x5a) goto LAB_1456ccb78;
    }
    local_a0 = local_58;
    local_a8 = local_68;
    local_b0 = (undefined8 *)(CONCAT44(local_b0._4_4_,iVar8) | 2);
    local_b8 = CONCAT44(local_b8._4_4_,iVar15);
    iVar8 = (**(code **)(*plVar2 + 0x138))
                      (plVar2,uVar7,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24))
    ;
    if (iVar8 < 0) {
      local_b0 = &local_78;
      local_78 = 0;
      uStack_70 = 0;
      local_b8 = *(undefined8 *)(lVar1 + 8);
      FUN_145763094(iVar8,
                    "SwapChain3->ResizeBuffers1(NumBackBuffers, SizeX, SizeY, UE::DXGIUtilities::GetSwapChainFormat(PixelFormat), SwapChainFlags, NodeMasks.GetData(), (IUnknown**)CommandQueues.GetData())"
                    ,".\\Runtime/D3D12RHI/Private/Windows/WindowsD3D12Viewport.cpp",0x148);
    }
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar14 = 0;
    do {
      lVar10 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar10 = param_1 + 0x58;
      }
      lVar16 = (longlong)(int)uVar14 * 0x10;
      local_80 = 0;
      local_b8 = *(undefined8 *)(param_1 + 0x30);
      local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,uVar14);
      local_a8 = &local_80;
      lVar9 = FUN_1456ccf55(*(undefined8 *)
                             (lVar1 + 2000 + (ulonglong)*(uint *)(lVar10 + 8 + lVar16) * 8),
                            *(undefined1 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20),
                            *(undefined4 *)(param_1 + 0x24));
      lVar10 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar10 = param_1 + 0x58;
      }
      lVar5 = *(longlong *)(lVar10 + lVar16);
      if (lVar5 != lVar9) {
        *(longlong *)(lVar10 + lVar16) = lVar9;
        if (lVar9 != 0) {
          (**(code **)(*(longlong *)(lVar9 + 0x60) + 8))(lVar9 + 0x60);
        }
        if (lVar5 != 0) {
          (**(code **)(*(longlong *)(lVar5 + 0x60) + 0x10))(lVar5 + 0x60);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_1 + 0x54));
  }
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1456cc79b:
  *(undefined4 *)(param_1 + 0xb0) = 0;
  lVar10 = param_1 + 0x58;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x88);
  }
  *(longlong *)(param_1 + 0xa0) = lVar10;
  local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_1 + 0x24));
  lVar10 = FUN_1456ccd56(param_1,lVar1,*(undefined1 *)(param_1 + 0x28),
                         *(undefined4 *)(param_1 + 0x20));
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 != lVar10) {
    *(longlong *)(param_1 + 0x98) = lVar10;
    if (lVar10 != 0) {
      (**(code **)(*(longlong *)(lVar10 + 0x60) + 8))(lVar10 + 0x60);
    }
    if (lVar1 != 0) {
      (**(code **)(*(longlong *)(lVar1 + 0x60) + 0x10))(lVar1 + 0x60);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456ccc7a FUN_1456ccc7a body=220 status=ok
// SIG undefined FUN_1456ccc7a(void)

void FUN_1456ccc7a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (1 < DAT_14c760da4) {
    piVar1 = (int *)(param_1 + 0xd8);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar3 = FUN_141369f9a(&DAT_14c846b20,L"PresentGPU=",piVar1);
    if (cVar3 != '\0') {
      iVar4 = DAT_14c760da4 - 1;
      if (*piVar1 < (int)(DAT_14c760da4 - 1)) {
        iVar4 = *piVar1;
      }
      iVar5 = -1;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      *piVar1 = iVar5;
    }
  }
  plVar7 = (longlong *)(param_1 + 0x58);
  if (*(longlong **)(param_1 + 0x88) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_1 + 0x88);
  }
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x90) * 2;
    do {
      lVar2 = *plVar7;
      *plVar7 = 0;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x60) + 0x10))(lVar2 + 0x60);
      }
      *(undefined4 *)(plVar7 + 1) = 0;
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar6);
  }
  return;
}



// FUNCTION 1456ccd56 FUN_1456ccd56 body=510 status=ok
// SIG undefined FUN_1456ccd56(void)

undefined8 *
FUN_1456ccd56(undefined8 param_1,longlong param_2,undefined1 param_3,ulonglong param_4,uint param_5)

{
  undefined8 uVar1;
  uint uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 local_88;
  ulonglong local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_84 = param_4 & 0xffffffff | (ulonglong)param_5 << 0x20;
  local_76 = 0;
  local_a8 = 0x40003;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_78 = 0x101;
  local_a0 = 1;
  local_88 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_70 = 2;
  local_68 = L"BackBufferReference";
  if (uVar9 == 0) {
    uVar8 = 0x20;
  }
  else {
    uVar8 = 0;
    if (uVar9 != 0) {
      for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
      }
    }
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b0 = param_1;
  local_8c = uVar9;
  local_75 = param_3;
  if (DAT_14c760da4 != 0) {
    uVar6 = (ulonglong)uVar8;
    puVar10 = (undefined8 *)0x0;
    uVar11 = uVar9;
    do {
      uVar1 = *(undefined8 *)(param_2 + 2000 + uVar6 * 8);
      puVar4 = (undefined8 *)FUN_14001cc68(0x248,0x10);
      FUN_1400f7b22(puVar4,&local_a8,uVar1);
      *puVar4 = &PTR_FUN_14a3555f0;
      puVar4[0xc] = &PTR_FUN_14a355630;
      puVar4[0x48] = local_b0;
      puVar5 = puVar4;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
        puVar5 = puVar10;
      }
      puVar5[uVar6 + 0x25] = puVar4;
      uVar11 = uVar11 & ~(1 << ((uint)uVar6 & 0x1f));
      if (uVar11 == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar2 = 0;
        if (uVar11 != 0) {
          for (; (uVar11 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        uVar6 = (ulonglong)uVar2;
      }
      puVar10 = puVar5;
    } while (uVar11 != 0);
    if (puVar5 != (undefined8 *)0x0) {
      *(uint *)(puVar5 + 0x24) = uVar9;
      bVar3 = (byte)uVar8 & 0x1f;
      uVar9 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar9;
      if (uVar9 != 0) {
        uVar8 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
          }
        }
        do {
          puVar10 = puVar5 + 0x24;
          puVar4 = (undefined8 *)(puVar5[(ulonglong)uVar8 + 0x25] + 0x120);
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar4 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar3 = (byte)uVar8 & 0x1f;
          uVar9 = (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3) & uVar9;
          if (uVar9 == 0) {
            uVar8 = 0x20;
          }
          else {
            uVar8 = 0;
            if (uVar9 != 0) {
              for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
              }
            }
          }
        } while (uVar9 != 0);
      }
      goto LAB_1456cceb5;
    }
  }
  puVar5 = (undefined8 *)0x0;
LAB_1456cceb5:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1456ccf55 FUN_1456ccf55 body=1952 status=ok
// SIG undefined FUN_1456ccf55(void)

longlong FUN_1456ccf55(undefined4 *param_1,byte param_2,undefined4 param_3,undefined4 param_4,
                      longlong *param_5,undefined4 param_6,longlong *param_7)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_1e8 [32];
  ulonglong local_1c8;
  undefined8 *local_1c0;
  undefined *local_1b8;
  longlong **local_1b0;
  undefined4 local_1a8;
  wchar_t *local_1a0;
  byte local_189;
  undefined4 *local_188;
  longlong local_180;
  uint local_174;
  longlong *local_170;
  undefined2 *local_168;
  int local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint local_a4;
  int local_a0;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined2 local_8c;
  undefined4 local_88;
  undefined2 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_180 = *(longlong *)(param_1 + 4);
  local_108 = (longlong *)0x0;
  if (param_5 != (longlong *)0x0) {
    iVar3 = (**(code **)(*param_5 + 0x48))(param_5,param_6,&DAT_14a350238,&local_108);
    if (iVar3 < 0) {
      local_1c0 = &local_118;
      local_118 = 0;
      uStack_110 = 0;
      local_1c8 = *(ulonglong *)(*(longlong *)(param_1 + 4) + 8);
      FUN_145763094(iVar3,
                    "SwapChain->GetBuffer(BackBufferIndex, IID_PPV_ARGS(BackBufferResource.GetInitReference()))"
                    ,".\\Runtime/D3D12RHI/Private/D3D12Viewport.cpp",0x40);
    }
    goto LAB_1456ccfdb;
  }
  plVar1 = (longlong *)*param_7;
  if (plVar1 != (longlong *)0x0) {
    local_108 = plVar1;
    (**(code **)(*plVar1 + 8))();
    goto LAB_1456ccfdb;
  }
  local_148 = 1;
  if (DAT_14ca81480 == 0) {
    local_148 = *param_1;
  }
  local_14c = param_1[2];
  local_158 = 1;
  local_150 = 0;
  local_c0 = CONCAT44(local_c0._4_4_,3);
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_ac = 0;
  local_a4 = 0x10001;
  iVar3 = *(int *)((longlong)&DAT_14c873434 + (ulonglong)((uint)param_2 * 0x30));
  if (iVar3 < 0x49) {
    if (iVar3 == 0x1b) {
      local_a0 = 0x1c;
    }
    else if (iVar3 == 0x35) {
      local_a0 = 0x38;
    }
    else if (iVar3 == 0x46) {
      local_a0 = 0x47;
    }
    else {
LAB_1456cd674:
      local_a0 = iVar3;
    }
  }
  else if (iVar3 == 0x49) {
    local_a0 = 0x4a;
  }
  else if (iVar3 == 0x4c) {
    local_a0 = 0x4d;
  }
  else {
    local_a0 = 0x57;
    if (iVar3 != 0x5a) goto LAB_1456cd674;
  }
  local_9c = 1;
  uStack_94 = 0;
  uStack_90 = 1;
  local_1b0 = &local_108;
  local_1b8 = &DAT_14a350238;
  local_1c0 = (undefined8 *)0x0;
  local_1c8 = local_1c8 & 0xffffffff00000000;
  uStack_b0 = param_3;
  uStack_a8 = param_4;
  (**(code **)(**(longlong **)(local_180 + 8) + 0xd8))(*(longlong **)(local_180 + 8),&local_158,0);
LAB_1456ccfdb:
  (**(code **)(*local_108 + 0x50))(local_108,&local_158);
  local_120 = 0x40000;
  FUN_140002266(&local_168,L"BackBuffer%d",param_6);
  local_80 = local_168;
  if (local_160 == 0) {
    local_80 = &DAT_149dfb77a;
  }
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  local_a4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_b8 = 1;
  local_a0 = 0;
  *(undefined4 *)((longlong)&local_9c + (ulonglong)(DAT_14ca7768c ^ 1) * 4) = 1;
  uStack_94 = 0x10001;
  local_8c = 0xff00;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_9c = CONCAT44(local_140,local_148);
  uStack_90 = CONCAT13(param_2,CONCAT12(DAT_14ca7768c,0x101));
  local_c0 = 1;
  local_88 = 2;
  if (DAT_14ca7768c == 1) {
    uStack_94 = 0x20001;
  }
  uVar13 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  if (uVar13 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar4 = 0;
    if (uVar13 != 0) {
      for (; (uVar13 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  if (DAT_14c760da4 == 0) {
    lVar10 = 0;
  }
  else {
    local_170 = DAT_14ca77418;
    lVar10 = 0;
    uVar9 = uVar13;
    local_189 = param_2;
    local_188 = param_1;
    local_174 = uVar4;
    do {
      lVar7 = *(longlong *)(local_180 + 2000 + (ulonglong)uVar4 * 8);
      lVar5 = (**(code **)(*local_170 + 0x638))(local_170,&local_c0,lVar7);
      if (*(int *)(lVar7 + 8) == param_1[2]) {
        lVar6 = FUN_14001cc68(0xe8,0x10);
        local_1b8 = (undefined *)0x0;
        local_1c0 = &local_158;
        local_1b0 = (longlong **)CONCAT44(local_1b0._4_4_,1);
        local_1c8 = local_1c8 & 0xffffffff00000000;
        FUN_1456cd6f6(lVar6,lVar7,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),local_108);
        LOCK();
        *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
        UNLOCK();
        local_1c8 = 0;
        FUN_1400daf10(lVar5 + 0xa8,lVar6,0,0);
      }
      else {
        local_1c0 = (undefined8 *)(lVar5 + 0x60);
        if (lVar5 == 0) {
          local_1c0 = (undefined8 *)0x0;
        }
        local_1c8 = lVar5 + 0xa8;
        local_1a0 = L"SwapChainSurface";
        local_1b8 = (undefined *)CONCAT71(local_1b8._1_7_,local_189);
        local_1a8 = 0;
        local_1b0 = (longlong **)&DAT_00000009;
        FUN_14038721c(lVar7,local_180,&local_158,0);
      }
      bVar14 = DAT_14ca7768c == 1;
      if (bVar14) {
        uStack_f0 = 1;
        uStack_fc = 5;
        local_100 = local_138;
        uStack_f8 = 0;
        uStack_f4 = 0;
        puVar8 = &local_d8;
        local_c8 = 1;
        local_d4 = 5;
        local_d8 = local_138;
        local_d0 = 0x100000000;
        FUN_1400db170(lVar5 + 0x180,2,1);
        FUN_1400db3a0(lVar5,&local_100,0,lVar10);
      }
      else {
        uStack_f8 = 0;
        uStack_f4 = 0;
        uStack_f0 = 0;
        local_100 = local_138;
        uStack_fc = 4;
        FUN_1400db170(lVar5 + 0x180,1,1);
        puVar8 = &local_100;
      }
      FUN_1400db3a0(lVar5,puVar8,bVar14);
      param_1 = local_188;
      local_e8 = 0;
      uStack_e0 = 0;
      uStack_f4 = 0;
      local_100 = local_138;
      uStack_fc = 4;
      uStack_f8 = 0x1688;
      uStack_f0 = 0x100000000;
      FUN_1400db716(lVar5,&local_100,lVar10);
      lVar7 = lVar5;
      if (lVar10 != 0) {
        (**(code **)(*(longlong *)(lVar5 + 0x60) + 8))(lVar5 + 0x60);
        lVar7 = lVar10;
      }
      lVar10 = lVar7;
      *(longlong *)(lVar10 + 0x128 + (ulonglong)uVar4 * 8) = lVar5;
      uVar9 = uVar9 & ~(1 << (uVar4 & 0x1f));
      if (uVar9 == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar4 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
      }
    } while (uVar9 != 0);
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      *(uint *)(lVar10 + 0x120) = uVar13;
      bVar2 = (byte)local_174 & 0x1f;
      uVar13 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar13;
      if (uVar13 != 0) {
        uVar4 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        do {
          puVar11 = (undefined8 *)(lVar10 + 0x120);
          puVar12 = (undefined8 *)(*(longlong *)(lVar10 + 0x128 + (ulonglong)uVar4 * 8) + 0x120);
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          bVar2 = (byte)uVar4 & 0x1f;
          uVar13 = (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2) & uVar13;
          if (uVar13 == 0) {
            uVar4 = 0x20;
          }
          else {
            uVar4 = 0;
            if (uVar13 != 0) {
              for (; (uVar13 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
              }
            }
          }
          param_1 = local_188;
        } while (uVar13 != 0);
      }
    }
  }
  local_1c8 = *(longlong *)(lVar10 + 0xb8) + 0x58;
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 4) + 8) + 200))
            (*(longlong **)(*(longlong *)(param_1 + 4) + 8),&local_100,0,1);
  *(ulonglong *)(lVar10 + 0x110) = CONCAT44(uStack_fc,local_100);
  FUN_1400db0ea(lVar10);
  if (local_168 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if ((longlong *)*param_7 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_7 + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar10;
}



// FUNCTION 1456cd6f6 FUN_1456cd6f6 body=76 status=ok
// SIG undefined FUN_1456cd6f6(void)

undefined8 FUN_1456cd6f6(undefined8 param_1)

{
  FUN_1447f3b12(param_1);
  return param_1;
}



// FUNCTION 1456cd742 FUN_1456cd742 body=126 status=ok
// SIG undefined FUN_1456cd742(void)

undefined8 * FUN_1456cd742(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  param_1[1] = param_2;
  *param_1 = &PTR__purecall_14a3516b0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  lVar1 = param_2 + 0x6d8;
  if (*(longlong *)(param_2 + 0x898) != 0) {
    lVar1 = *(longlong *)(param_2 + 0x898);
  }
  FUN_144a30b90(lVar1 + 0xe0,param_1 + 7);
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0xff;
  *(bool *)(param_1 + 10) = param_3 == 0;
  *(undefined1 *)((longlong)param_1 + 0x51) = 2;
  *param_1 = &PTR_FUN_14a3516d0;
  return param_1;
}



// FUNCTION 1456cd7c0 FUN_1456cd7c0 body=139 status=ok
// SIG undefined FUN_1456cd7c0(void)

undefined8 FUN_1456cd7c0(longlong *param_1)

{
  undefined *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(code **)(*param_1 + 0x4c0) == (code *)&LAB_14473a694) {
    plVar3 = (longlong *)param_1[9];
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
      goto LAB_1456cd834;
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x4c0))(param_1);
LAB_1456cd834:
    if (plVar3 == (longlong *)0x0) {
      puVar1 = &DAT_14caea5a0;
      goto LAB_1456cd809;
    }
  }
  local_18 = 0;
  uStack_10 = 0;
  puVar1 = (undefined *)(**(code **)(*plVar3 + 0x2d0))();
LAB_1456cd809:
  uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),puVar1[0x460]) & 0xffffffffffffff40;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cd84c FUN_1456cd84c body=485 status=ok
// SIG undefined FUN_1456cd84c(void)

int * FUN_1456cd84c(longlong *param_1,int *param_2)

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



// FUNCTION 1456cda32 FUN_1456cda32 body=1818 status=ok
// SIG undefined FUN_1456cda32(void)

char * FUN_1456cda32(longlong param_1,char *param_2,undefined1 *param_3,undefined ***param_4,
                    longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  int *piVar5;
  undefined4 uVar6;
  char cVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  undefined1 *puVar16;
  longlong lVar17;
  undefined1 *puVar18;
  undefined1 auStack_598 [32];
  undefined ***local_578;
  undefined4 local_570;
  undefined **local_568;
  undefined **local_560;
  undefined **local_558;
  longlong local_550;
  undefined1 *local_548;
  undefined1 *local_540;
  undefined **local_538;
  undefined **ppuStack_530;
  undefined **local_528;
  undefined **ppuStack_520;
  undefined8 local_510;
  longlong *local_508;
  undefined **local_500;
  undefined8 local_4f8;
  undefined **ppuStack_4f0;
  undefined1 *local_4e8;
  undefined **local_4e0;
  undefined **ppuStack_4d8;
  undefined **local_4d0;
  undefined **ppuStack_4c8;
  undefined **local_4c0;
  undefined **local_4b8;
  undefined **local_4b0;
  undefined **ppuStack_4a8;
  undefined3 uStack_4a0;
  undefined5 local_49d;
  undefined3 uStack_498;
  undefined8 uStack_495;
  undefined **ppuStack_488;
  undefined3 uStack_480;
  undefined5 local_47d;
  undefined3 uStack_478;
  undefined8 uStack_475;
  undefined **local_468;
  undefined **ppuStack_460;
  undefined **local_458;
  undefined **ppuStack_450;
  undefined1 local_2f0 [296];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  byte local_190 [8];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_170;
  undefined1 local_168 [136];
  undefined4 local_e0;
  undefined1 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *local_a0;
  longlong *local_98;
  undefined **local_90;
  undefined **ppuStack_88;
  char local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_598;
  *(int *)(param_1 + 0x638) = *(int *)(param_1 + 0x638) + 1;
  local_2f0[0] = DAT_14c96b238;
  local_1c8 = 0;
  local_1c0 = 0x400000000;
  local_1b8 = 0;
  local_1b0 = 0;
  uStack_1a8 = 0;
  local_1a0 = 0;
  uStack_198 = 0;
  local_550 = param_1;
  FUN_1400e2090(0,&local_510,*(undefined4 *)((longlong)param_4 + 0xc));
  uVar6 = *(undefined4 *)(param_4 + 0xb);
  cVar7 = FUN_1408025c4(local_510);
  if (cVar7 == '\0') {
    uVar11 = 0;
  }
  else {
    local_578 = param_4;
    FUN_1403d06e2(local_510,&local_458,uVar6,1);
    FUN_1400e213c(local_2f0);
    FUN_1447fa21a(&local_458);
    uVar11 = (uint)local_1c0;
  }
  puVar18 = param_3;
  if (0 < (int)uVar11) {
    puVar18 = local_2f0;
  }
  local_468 = param_4[1];
  ppuStack_460 = param_4[2];
  local_538 = param_4[4];
  ppuStack_530 = param_4[5];
  local_528 = param_4[6];
  ppuStack_520 = param_4[7];
  local_558 = param_4[8];
  local_560 = param_4[9];
  local_568 = param_4[10];
  uVar12 = uVar11;
  if (local_568 != (undefined **)0x0) {
    LOCK();
    *(int *)(local_568 + 1) = *(int *)(local_568 + 1) + 1;
    UNLOCK();
    uVar12 = (uint)local_1c0;
  }
  ppuStack_488 = param_4[0xb];
  uStack_475 = *(undefined8 *)((longlong)param_4 + 0x6b);
  uStack_478 = (undefined3)((ulonglong)*(undefined8 *)((longlong)param_4 + 99) >> 0x28);
  uStack_480 = SUB83(param_4[0xc],0);
  local_47d = (undefined5)((ulonglong)param_4[0xc] >> 0x18);
  if ((int)uVar11 < 1) {
    uVar12 = *(uint *)(param_3 + 0x130);
  }
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
  if (0 < (int)uVar12) {
    puVar10 = param_3;
    if (0 < (int)uVar11) {
      puVar10 = local_2f0;
    }
    local_548 = puVar10 + 8;
    uVar13 = (ulonglong)uVar12;
    lVar14 = uVar13 * 0x48 + -8;
    lVar17 = uVar13 * 0x14 + -4;
    local_540 = param_3;
    do {
      local_80 = *(char *)(*(longlong *)(puVar10 + 0x150) + lVar17);
      if (local_80 == '\x01') {
        lVar9 = *(longlong *)(puVar10 + 0x150) + lVar17;
        local_458 = *(undefined ***)(lVar9 + -0x10);
        ppuStack_450 = *(undefined ***)(lVar9 + -8);
      }
      puVar16 = local_540;
      if (0 < (int)uVar11) {
        puVar16 = local_2f0;
      }
      puVar8 = *(undefined1 **)(puVar16 + 0x128);
      if (*(undefined1 **)(puVar16 + 0x128) == (undefined1 *)0x0) {
        puVar8 = local_548;
      }
      local_d8 = *(undefined8 *)(puVar8 + lVar14 + -0x40);
      uStack_d0 = *(undefined8 *)((longlong)(puVar8 + lVar14 + -0x40) + 8);
      local_c8 = *(undefined8 *)(puVar8 + lVar14 + -0x30);
      uStack_c0 = *(undefined8 *)((longlong)(puVar8 + lVar14 + -0x30) + 8);
      local_b8 = *(undefined8 *)(puVar8 + lVar14 + -0x20);
      uStack_b0 = *(undefined8 *)((longlong)(puVar8 + lVar14 + -0x20) + 8);
      local_a8 = *(undefined8 *)(puVar8 + lVar14 + -0x10);
      local_a0 = *(longlong **)(puVar8 + lVar14 + -8);
      local_98 = *(longlong **)(puVar8 + lVar14);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      if (local_80 == '\0') {
        local_4e0 = local_538;
        ppuStack_4d8 = ppuStack_530;
        if (local_568 != (undefined **)0x0) {
          LOCK();
          *(int *)(local_568 + 1) = *(int *)(local_568 + 1) + 1;
          UNLOCK();
        }
      }
      else {
        local_90 = local_458;
        ppuStack_88 = ppuStack_450;
        local_4e0 = local_458;
        ppuStack_4d8 = ppuStack_450;
        if (local_568 != (undefined **)0x0) {
          LOCK();
          *(int *)(local_568 + 1) = *(int *)(local_568 + 1) + 1;
          UNLOCK();
        }
      }
      uStack_495 = uStack_475;
      uStack_498 = uStack_478;
      local_49d = local_47d;
      uStack_4a0 = uStack_480;
      ppuStack_4a8 = ppuStack_488;
      local_4b0 = local_568;
      local_4b8 = local_560;
      local_4c0 = local_558;
      ppuStack_4c8 = ppuStack_520;
      local_4d0 = local_528;
      ppuStack_4f0 = ppuStack_460;
      local_4f8 = local_468;
      local_500 = &PTR_FUN_149eda650;
      local_190[0] = 0;
      local_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_4e8 = puVar18;
      memset(local_168,0,0x88);
      local_e0 = 0x20702;
      local_dc = 0;
      bVar15 = 0;
      if (param_5 != 0) {
        (**(code **)(*local_a0 + 0xe0))(local_a0,&local_458,&local_d8,param_5);
        FUN_1403d4924(local_190,&local_458);
        FUN_14493db24(&local_458);
        bVar15 = local_190[0];
      }
      if ((bVar15 & 1) == 0) {
        if ((uStack_495._1_4_ != 0.0) || (NAN(uStack_495._1_4_))) {
          (**(code **)(*local_a0 + 0x88))(local_a0,&local_458,&local_d8,&local_500);
          FUN_1403d4924(local_190,&local_458);
          FUN_14493db24(&local_458);
        }
      }
      FUN_1402c173a(local_190,&local_a0);
      FUN_1402c17c2(param_2,local_190);
      FUN_14493db24(local_190);
      local_570 = local_4f8._4_4_;
      local_578 = &local_500;
      FUN_1402c1d72(local_550,puVar18,param_2,puVar18);
      ppuVar4 = local_4b0;
      local_500 = &PTR_FUN_149eda650;
      if (local_4b0 != (undefined **)0x0) {
        LOCK();
        ppuVar3 = local_4b0 + 1;
        *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
        UNLOCK();
        if (*(int *)ppuVar3 == 0) {
          (**(code **)*local_4b0)(local_4b0);
          LOCK();
          piVar5 = (int *)((longlong)ppuVar4 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            (**(code **)(*ppuVar4 + 0x10))(ppuVar4);
          }
        }
      }
      plVar2 = local_98;
      if (local_80 == '\x01') {
        local_80 = '\0';
      }
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar5 = (int *)((longlong)plVar2 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      if (uVar13 < 2) break;
      lVar14 = lVar14 + -0x48;
      lVar17 = lVar17 + -0x14;
      uVar13 = uVar13 - 1;
    } while (*param_2 == '\0');
  }
  if (local_568 != (undefined **)0x0) {
    LOCK();
    ppuVar4 = local_568 + 1;
    *(int *)ppuVar4 = *(int *)ppuVar4 + -1;
    UNLOCK();
    if (*(int *)ppuVar4 == 0) {
      (**(code **)*local_568)(local_568);
      LOCK();
      piVar5 = (int *)((longlong)local_568 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*local_568 + 0x10))();
      }
    }
  }
  if (local_508 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_508 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_508)(local_508);
      LOCK();
      piVar5 = (int *)((longlong)local_508 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*local_508 + 0x10))(local_508);
      }
    }
  }
  FUN_1447fa21a(local_2f0);
  *(int *)(local_550 + 0x638) = *(int *)(local_550 + 0x638) + -1;
  if ((local_70 ^ (ulonglong)auStack_598) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1456ce14e FUN_1456ce14e body=67 status=ok
// SIG undefined FUN_1456ce14e(void)

void FUN_1456ce14e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_148849994(param_1 + 0x130);
  }
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_1 + 0x120);
  return;
}



// FUNCTION 1456ce192 FUN_1456ce192 body=132 status=ok
// SIG undefined FUN_1456ce192(void)

void FUN_1456ce192(longlong param_1,int param_2)

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



// FUNCTION 1456ce218 FUN_1456ce218 body=198 status=ok
// SIG undefined FUN_1456ce218(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1456ce218(void)

{
  _DAT_14cae9a20 = &PTR_FUN_14a9c3c70;
  DAT_14cae9a48 = 0;
  _DAT_14cae9a50 = 0;
  DAT_14cae9a28 = 0;
  _DAT_14cae9a30 = 0;
  _DAT_14cae9a54 = 0xffffffff00000080;
  DAT_14cae9a5c = 0;
  DAT_14cae9a68 = 0;
  DAT_14cae9a70 = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9a78);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cae9a78,4000);
  DAT_14cae9aa0 = 0;
  _DAT_14cae9aa8 = DAT_14c8464e0;
  _DAT_14cae9ab0 = DAT_14c8464e8;
  DAT_14cae9ab8 = DAT_14c8464f0;
  DAT_14cae9ac0 = 0x42b40000;
  _DAT_14cae9ac8 = DAT_14c8464f8;
  _DAT_14cae9ad0 = DAT_14c846500;
  _DAT_14cae9ad8 = DAT_14c846508;
  DAT_14cae9ae0 = 0;
  return;
}



// FUNCTION 1456ce2de FUN_1456ce2de body=88 status=ok
// SIG undefined FUN_1456ce2de(void)

void FUN_1456ce2de(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_145a1ee98();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_145a1ef92(param_1,iVar3);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + (longlong)iVar3 * 0x10) = *param_2;
    lVar2 = param_2[1];
    *(longlong *)(lVar1 + 8 + (longlong)iVar3 * 0x10) = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1456ce336 FUN_1456ce336 body=48 status=ok
// SIG undefined FUN_1456ce336(void)

void FUN_1456ce336(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1456ce366 FUN_1456ce366 body=62 status=ok
// SIG undefined FUN_1456ce366(void)

void FUN_1456ce366(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    FUN_144a76fd2(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  FUN_1400ea21c(param_1);
  return;
}



// FUNCTION 1456ce3a4 FUN_1456ce3a4 body=57 status=ok
// SIG undefined FUN_1456ce3a4(void)

undefined8 * FUN_1456ce3a4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e002e8;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1456ce3de FUN_1456ce3de body=469 status=ok
// SIG undefined FUN_1456ce3de(void)

void FUN_1456ce3de(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  int local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  undefined8 local_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  undefined1 local_60 [4];
  undefined1 local_5c;
  longlong local_58;
  int local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1456ce5b4();
  if ((*(longlong *)(param_1 + 0xbe8) == 0) && (*(longlong *)(param_1 + 0xbf0) == 0)) {
    local_90 = 0;
    local_88 = 0;
    local_80 = 0;
    local_5c = 0;
    lVar6 = *(longlong *)(param_1 + 0x3f0);
    FUN_14480757c(&local_58,&DAT_14cbcb998);
    uVar4 = FUN_144a06846(lVar6 + 0xa8,&local_58);
    FUN_140008118(&local_78,uVar4,local_60,&local_90);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0xbf8) != 0) {
      local_90 = 0;
      lVar6 = 0;
      bVar2 = true;
      do {
        bVar5 = bVar2;
        lVar6 = *(longlong *)(param_1 + 0xc08 + lVar6 * 0x10);
        if ((lVar6 != 0) && (lVar1 = *(longlong *)(lVar6 + 0x58), lVar1 != 0)) break;
        lVar6 = 1;
        bVar2 = false;
        lVar1 = local_90;
      } while (bVar5);
      local_90 = lVar1;
      FUN_1400ecfc6(*(longlong *)(param_1 + 0xbf8),&local_58,&local_90);
      if (((local_58 != 0) && (local_50 - 1U < 0xfffffffe)) &&
         ((local_78 != local_58 || (local_70 != local_50)))) {
        local_78 = local_58;
        local_70 = local_50;
        local_68 = 0;
      }
    }
    local_a8 = local_78;
    local_a0 = local_70;
    local_98 = 0;
    FUN_1456ce66e(param_1);
  }
  if (*(longlong *)(param_1 + 0xbf8) == 0) {
    bVar3 = 4;
  }
  else {
    bVar3 = ~*(byte *)(*(longlong *)(param_1 + 0xbf8) + 0xd8) * '\x02' & 4;
  }
  *(byte *)(param_1 + 0xa34) = *(byte *)(param_1 + 0xa34) & 0xfb | bVar3;
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1456ce5b4 FUN_1456ce5b4 body=184 status=ok
// SIG undefined FUN_1456ce5b4(void)

void FUN_1456ce5b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1400ecd66();
  uVar3 = FUN_140231a4a(*(undefined8 *)(param_1 + 0x3f0));
  FUN_140baf30e(uVar3,&local_28);
  uVar3 = DAT_14cbcbb80;
  if (local_28 == 0) {
    *(undefined8 *)(param_1 + 0x928) = DAT_14cbcbb80;
  }
  else {
    *(undefined8 *)(param_1 + 0x920) = *(undefined8 *)(local_28 + 8);
    *(undefined8 *)(param_1 + 0x928) = *(undefined8 *)(local_28 + 0x10);
    uVar3 = *(undefined8 *)(local_28 + 0x10);
  }
  *(undefined8 *)(param_1 + 0x9a8) = uVar3;
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ce66e FUN_1456ce66e body=199 status=ok
// SIG undefined FUN_1456ce66e(void)

void FUN_1456ce66e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_1 + 0xbe8) = 0;
  *(undefined8 *)(param_1 + 0xbf0) = 0;
  if (*(int *)(param_2 + 1) == 0x4000) {
    local_48 = *param_2;
    FUN_1446dcdd4(local_40);
    uVar1 = FUN_140a4bd48(local_40);
    *(undefined8 *)(param_1 + 0xbe8) = uVar1;
  }
  else {
    if (*(int *)(param_2 + 1) != 0x34001) goto LAB_1456ce6cd;
    local_48 = *param_2;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb853e8 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_144837462(DAT_14cb853e8,local_40);
    }
    *(undefined8 *)(param_1 + 0xbf0) = uVar1;
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
LAB_1456ce6cd:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456ce736 FUN_1456ce736 body=132 status=ok
// SIG undefined FUN_1456ce736(void)

void FUN_1456ce736(longlong param_1,int param_2)

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



// FUNCTION 1456ce7bc FUN_1456ce7bc body=132 status=ok
// SIG undefined FUN_1456ce7bc(void)

void FUN_1456ce7bc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456ce842 FUN_1456ce842 body=186 status=ok
// SIG undefined FUN_1456ce842(void)

ulonglong FUN_1456ce842(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar6 = 0x136a0;
  if ((char)param_2[7] != '\0') {
    lVar6 = 0x136c8;
  }
  uVar5 = FUN_14480cb48(lVar6 + *(longlong *)(*param_1 + 8),param_2 + 1,param_2 + 4,param_1[2]);
  lVar6 = *(longlong *)(*param_1 + 0x10);
  lVar8 = lVar6 + 0x21a8;
  if (*(longlong *)(lVar6 + 0x21c8) != 0) {
    lVar8 = *(longlong *)(lVar6 + 0x21c8);
  }
  *(undefined8 *)
   (lVar8 + (longlong)(*(int *)(lVar6 + 0x4c8) % *(int *)(*(longlong *)(*param_1 + 0x48) + 4)) * 8)
       = uVar5;
  piVar1 = (int *)(*(longlong *)(*param_1 + 0x10) + 0x21d8);
  *piVar1 = *piVar1 + 1;
  lVar6 = *param_2;
  lVar8 = *(longlong *)(*param_1 + 0x48);
  uVar2 = *(undefined1 *)(lVar8 + 0xe);
  lVar4 = param_2[7];
  iVar3 = *(int *)(*(longlong *)(*param_1 + 0x10) + 0x4c8);
  lVar8 = (longlong)*(int *)(lVar8 + 4);
  uVar7 = (longlong)iVar3 % lVar8 & 0xffffffff;
  *(undefined8 *)(lVar6 + 8 + uVar7 * 8) = uVar5;
  *(int *)(lVar6 + 0x28 + uVar7 * 4) = iVar3;
  *(char *)(lVar6 + 0x55 + uVar7) = (char)lVar4;
  *(undefined1 *)(lVar6 + 0x59) = uVar2;
  return (longlong)iVar3 / lVar8 & 0xffffffff;
}



// FUNCTION 1456ce8fc FUN_1456ce8fc body=35 status=ok
// SIG undefined FUN_1456ce8fc(void)

void FUN_1456ce8fc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2b8))(param_1,1,1);
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 1456ce920 FUN_1456ce920 body=150 status=ok
// SIG undefined FUN_1456ce920(void)

void FUN_1456ce920(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1456ce9b6();
  if ((param_3 != '\0') && (*(longlong **)(param_1 + 0x110) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x110) + 0x2a0))();
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_144a7757c();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_14010045e(lVar1,*(undefined8 *)(param_1 + 400));
    }
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_14480f766(&DAT_14caf6fc8);
    return;
  }
  return;
}



// FUNCTION 1456ce9b6 FUN_1456ce9b6 body=22 status=ok
// SIG undefined FUN_1456ce9b6(void)

void FUN_1456ce9b6(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) == 0) {
    return;
  }
  FUN_14480f766(&DAT_14cadbe60);
  return;
}



// FUNCTION 1456ce9cc FUN_1456ce9cc body=169 status=ok
// SIG undefined FUN_1456ce9cc(void)

bool FUN_1456ce9cc(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cea76 FUN_1456cea76 body=95 status=ok
// SIG undefined FUN_1456cea76(void)

ulonglong FUN_1456cea76(longlong param_1)

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
LAB_1456ceab8:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1456ceab8;
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



// FUNCTION 1456cead6 FUN_1456cead6 body=248 status=ok
// SIG undefined FUN_1456cead6(void)

void FUN_1456cead6(void)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  int local_40;
  void *local_38;
  int local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1456cebd0();
  _Src = local_38;
  local_50 = (void *)0x0;
  lVar2 = (longlong)local_30;
  local_48 = local_30;
  if (lVar2 == 0) {
    local_44 = 0;
    iVar1 = 0;
    local_40 = local_28;
  }
  else {
    FUN_14010590e(&local_50,local_30,0);
    memcpy(local_50,_Src,lVar2 << 3);
    local_40 = local_28;
    iVar1 = local_30;
  }
  do {
    if (local_40 == iVar1) {
      if (local_50 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_38 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1448215fa(*(undefined8 *)((longlong)local_50 + (longlong)local_40 * 8));
    lVar2 = (longlong)local_40;
    do {
      lVar2 = lVar2 + 1;
      local_40 = (int)lVar2;
      if (local_48 <= lVar2) break;
    } while (*(longlong *)((longlong)local_50 + lVar2 * 8) == 0);
  } while( true );
}



// FUNCTION 1456cebd0 FUN_1456cebd0 body=107 status=ok
// SIG undefined FUN_1456cebd0(void)

longlong * FUN_1456cebd0(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1411bca8c();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 1456cec3c FUN_1456cec3c body=205 status=ok
// SIG undefined FUN_1456cec3c(void)

void FUN_1456cec3c(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar1 = DAT_14c75ec9c;
  uVar4 = *(uint *)(param_1 + 0xc);
  if ((int)uVar4 < DAT_14c9647dc) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
  }
  else {
    puVar3 = (undefined8 *)0x0;
  }
  if ((DAT_14c75ec9c & *(uint *)(puVar3 + 1)) == 0) {
    uVar4 = *(uint *)((longlong)puVar3 + 0xc);
    if ((int)uVar4 < 1) {
      return;
    }
    if ((int)uVar4 < DAT_14c9647dc) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    }
    else {
      puVar3 = (undefined8 *)0x0;
    }
    if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) == 0) {
      return;
    }
    if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) == 0) {
      return;
    }
    uVar5 = ~DAT_14c75ec9c;
    uVar4 = *(uint *)(puVar3 + 1);
    do {
      LOCK();
      uVar2 = *(uint *)(puVar3 + 1);
      bVar6 = uVar4 == uVar2;
      if (bVar6) {
        *(uint *)(puVar3 + 1) = uVar4 & uVar5;
        uVar2 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar2;
    } while (!bVar6);
  }
  else {
    if ((*(uint *)(puVar3 + 1) & DAT_14c75ec9c) == 0) {
      return;
    }
    uVar4 = ~DAT_14c75ec9c;
    uVar2 = *(uint *)(puVar3 + 1);
    do {
      LOCK();
      uVar5 = *(uint *)(puVar3 + 1);
      bVar6 = uVar2 == uVar5;
      if (bVar6) {
        *(uint *)(puVar3 + 1) = uVar2 & uVar4;
        uVar5 = uVar2;
      }
      uVar2 = uVar5;
      UNLOCK();
    } while (!bVar6);
  }
  LOCK();
  *(uint *)(puVar3 + 1) = *(uint *)(puVar3 + 1) | DAT_14c75ec98;
  UNLOCK();
  if ((uVar2 & uVar1) == 0) {
    return;
  }
  if (-1 < *(int *)((longlong)puVar3 + 0xc)) {
    FUN_1468b43fc(*puVar3);
    return;
  }
  FUN_1468b44f6();
  return;
}



// FUNCTION 1456ced0a FUN_1456ced0a body=324 status=ok
// SIG undefined FUN_1456ced0a(void)

undefined4 * FUN_1456ced0a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
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
  FUN_147d6b664(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_147d6b74a(param_1,uVar4,local_40,&local_4c);
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
      FUN_147d6b83c(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cee50 FUN_1456cee50 body=325 status=ok
// SIG undefined FUN_1456cee50(void)

void FUN_1456cee50(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1456cee8f;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1456cee8f:
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar6 = *(longlong **)(lVar3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar6 + 0x1e) == *(short *)(param_1 + 0xc)) goto LAB_1456ceed2;
      plVar6 = plVar6 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar6 = (longlong *)0x0;
LAB_1456ceed2:
  lVar5 = *plVar8;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
  }
  LOCK();
  *(int *)(plVar6 + 3) = (int)plVar6[3] + 1;
  UNLOCK();
  if (0 < *(int *)((longlong)param_2 + 0xc)) {
    lVar3 = *plVar6;
    lVar7 = (longlong)(int)param_2[1];
    do {
      puVar9 = (undefined8 *)(lVar7 * 8 + lVar3);
      cVar4 = FUN_140108b92(*(undefined8 *)(lVar5 + lVar7 * 8),0,puVar9);
      if (cVar4 == '\0') {
        *puVar9 = 0x10000000000000;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < (longlong)*(int *)((longlong)param_2 + 0xc) + (longlong)(int)param_2[1]);
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 3) = (int)plVar6[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar6 + 1));
    }
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001456cef6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar8 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1456cef96 FUN_1456cef96 body=62 status=ok
// SIG undefined FUN_1456cef96(void)

void FUN_1456cef96(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1472dc5b2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1456cefd4 FUN_1456cefd4 body=132 status=ok
// SIG undefined FUN_1456cefd4(void)

void FUN_1456cefd4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1456cf064 FUN_1456cf064 body=72 status=ok
// SIG undefined FUN_1456cf064(void)

void FUN_1456cf064(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e90fd0;
  FUN_1456cf0e4();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1456cf0ac(param_1 + 1);
  return;
}



// FUNCTION 1456cf0ac FUN_1456cf0ac body=55 status=ok
// SIG undefined FUN_1456cf0ac(void)

void FUN_1456cf0ac(longlong *param_1)

{
  FUN_1456cf1b8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1456cf0e4 FUN_1456cf0e4 body=104 status=ok
// SIG undefined FUN_1456cf0e4(void)

void FUN_1456cf0e4(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_1456cf14c(param_1 + 8,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 1456cf14c FUN_1456cf14c body=107 status=ok
// SIG undefined FUN_1456cf14c(void)

void FUN_1456cf14c(longlong param_1,uint param_2)

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
LAB_1456cf19b:
      FUN_1456cf1b8(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_145d256ae(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1456cf19b;
  FUN_1456cf234(param_1);
  FUN_1456cf1b8(param_1,param_2);
  return;
}



// FUNCTION 1456cf1b8 FUN_1456cf1b8 body=123 status=ok
// SIG undefined FUN_1456cf1b8(void)

void FUN_1456cf1b8(longlong param_1,int param_2)

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



// FUNCTION 1456cf234 FUN_1456cf234 body=335 status=ok
// SIG undefined FUN_1456cf234(void)

void FUN_1456cf234(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1456cf384 FUN_1456cf384 body=94 status=ok
// SIG undefined FUN_1456cf384(void)

void FUN_1456cf384(longlong param_1,int param_2)

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



// FUNCTION 1456cf3e2 FUN_1456cf3e2 body=96 status=ok
// SIG undefined FUN_1456cf3e2(void)

void FUN_1456cf3e2(longlong param_1,int param_2)

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



// FUNCTION 1456cf442 FUN_1456cf442 body=55 status=ok
// SIG undefined FUN_1456cf442(void)

void FUN_1456cf442(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x0001456cf475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1456cf47a FUN_1456cf47a body=237 status=ok
// SIG undefined FUN_1456cf47a(void)

undefined8 FUN_1456cf47a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  cVar2 = FUN_1401154ee(param_1,param_3,&local_28,0);
  if (cVar2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x1f0))(*(longlong **)(param_1 + 8),param_2,param_3)
    ;
  }
  else {
    FUN_1470859dc(&local_38,param_3,local_28);
    puVar3 = &DAT_149dfb77a;
    puVar4 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar4 = local_38;
    }
    if (*(int *)(local_28 + 4) != 0) {
      puVar3 = (undefined2 *)local_28[3];
    }
    FUN_140002266(param_2,L"Pak: %s/%s",puVar3,puVar4);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1456cf568 FUN_1456cf568 body=198 status=ok
// SIG undefined FUN_1456cf568(void)

int FUN_1456cf568(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  ushort uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1456cf5b1:
      lVar11 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar11 * 0x18);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar8 = 0;
        do {
          uVar9 = *(ushort *)(*(longlong *)(lVar4 + lVar11 * 0x18) + lVar8);
          uVar10 = (ulonglong)uVar9;
          uVar6 = *(ushort *)(*param_3 + lVar8);
          if (uVar9 == uVar6) {
            if (uVar9 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar9)) goto LAB_1456cf623;
            uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            uVar7 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar10] != (&DAT_149e05da0)[uVar7]) goto LAB_1456cf623;
          }
          lVar8 = lVar8 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1456cf614;
    }
  }
  return -1;
LAB_1456cf623:
  if (uVar9 == uVar6) {
    return iVar1;
  }
LAB_1456cf614:
  iVar1 = *(int *)(lVar4 + 0x10 + lVar11 * 0x18);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1456cf5b1;
}



// FUNCTION 1456cf62e FUN_1456cf62e body=478 status=ok
// SIG undefined FUN_1456cf62e(void)

void FUN_1456cf62e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x5e8);
  lVar5 = *(longlong *)(lVar1 + 0x260);
  if (lVar5 == 0) {
    uVar4 = FUN_145c5eda6();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x260) = lVar5;
  }
  lVar6 = *(longlong *)(lVar1 + 0x268);
  if (lVar6 == 0) {
    if ((*(longlong *)(lVar1 + 600) == 0) || (lVar5 == 0)) {
      lVar6 = 0;
    }
    else {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if (plVar2 == (longlong *)0x0) {
LAB_1456cf804:
        lVar6 = 0;
      }
      else {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 == '\0') goto LAB_1456cf804;
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 600));
      }
      *(longlong *)(lVar1 + 0x268) = lVar6;
    }
  }
  FUN_140115d46(param_1,lVar6);
  lVar1 = *(longlong *)(param_1 + 0x5e8);
  lVar5 = *(longlong *)(lVar1 + 0x2a0);
  if (lVar5 == 0) {
    uVar4 = FUN_145c67cd8();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0x2a0) = lVar5;
  }
  lVar6 = *(longlong *)(lVar1 + 0x2a8);
  if (lVar6 != 0) goto LAB_1456cf6d1;
  if ((*(longlong *)(lVar1 + 0x298) == 0) || (lVar5 == 0)) {
    lVar6 = 0;
    goto LAB_1456cf6d1;
  }
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_1456cf808:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_1456cf808;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x298));
  }
  *(longlong *)(lVar1 + 0x2a8) = lVar6;
LAB_1456cf6d1:
  *(longlong *)(param_1 + 0x4d0) = lVar6;
  FUN_1401f3db8(param_1 + 0x558,*(longlong *)(param_1 + 0x5e8) + 0x2b0);
  FUN_140115bdc(param_1 + 0x4d8,*(longlong *)(param_1 + 0x5e8) + 0x2d0);
  FUN_140115bdc(param_1 + 0x4f8,*(longlong *)(param_1 + 0x5e8) + 0x3a0);
  *(bool *)(param_1 + 0x57c) = 0 < *(int *)(*(longlong *)(param_1 + 0x5e8) + 0x404);
  if (*(longlong *)(param_1 + 1000) != 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 1000) + 0x390) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x5e8) + 0x280);
    *(undefined4 *)(*(longlong *)(param_1 + 1000) + 0x394) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x5e8) + 0x408);
  }
  return;
}



// FUNCTION 1456cf80c FUN_1456cf80c body=93 status=ok
// SIG undefined FUN_1456cf80c(void)

void FUN_1456cf80c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_140116b62(param_1,iVar2);
  }
  memcpy((void *)((longlong)iVar2 * 0x68 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x68);
  return;
}


