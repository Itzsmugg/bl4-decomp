// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14423d26a FUN_14423d26a body=93 status=ok
// SIG undefined FUN_14423d26a(void)

void FUN_14423d26a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a37f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14423d2c8 FUN_14423d2c8 body=126 status=ok
// SIG undefined FUN_14423d2c8(void)

void FUN_14423d2c8(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a37f0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014423d337. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14423d350 FUN_14423d350 body=266 status=ok
// SIG undefined FUN_14423d350(void)

undefined8 FUN_14423d350(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14423d454;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14423d454;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14423d454:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14423d3fb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148e0c0a0(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_14423d3fb;
    }
  }
  uVar6 = 0;
LAB_14423d3fb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423d45c FUN_14423d45c body=284 status=ok
// SIG undefined FUN_14423d45c(void)

void FUN_14423d45c(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((((((param_1[1] != 0) && (param_1[2] != 0)) &&
        (lVar2 = *param_1, 0 < *(int *)(param_1[2] + 8))) &&
       ((*(int *)((longlong)param_1 + 0x1c) != 0 &&
        (uVar1 = *(uint *)(param_1 + 3), -1 < (int)uVar1)))) &&
      ((((int)uVar1 < DAT_14c9647dc &&
        ((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x1c))))) &&
       ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) &&
     ((((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 = *plVar6, lVar3 != 0)) &&
      ((longlong)*(int *)(lVar2 + 0x238) != 0)))) {
    lVar7 = *(longlong *)(lVar2 + 0x230);
    lVar8 = (longlong)*(int *)(lVar2 + 0x238) * 0x98;
    do {
      if ((*(int *)(lVar7 + 0x14) == 0) || (uVar1 = *(uint *)(lVar7 + 0x10), (int)uVar1 < 0)) {
LAB_14423d550:
        lVar4 = 0;
      }
      else {
        lVar4 = 0;
        if ((int)uVar1 < DAT_14c9647dc) {
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != *(int *)(lVar7 + 0x14))) ||
             ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_14423d550;
          lVar4 = *plVar5;
        }
      }
      if (lVar4 == lVar3) {
        if (lVar7 == 0) {
          return;
        }
        if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
          lVar3 = 0;
        }
        FUN_144235a5e(lVar2,lVar3,0);
        return;
      }
      lVar7 = lVar7 + 0x98;
      lVar8 = lVar8 + -0x98;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 14423d578 FUN_14423d578 body=95 status=ok
// SIG undefined FUN_14423d578(void)

undefined8 * FUN_14423d578(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14b9a3860;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  lVar1 = *(longlong *)(param_1 + 0x18);
  puVar2[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 14423d5de FUN_14423d5de body=29 status=ok
// SIG undefined FUN_14423d5de(void)

void FUN_14423d5de(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14423d5fc FUN_14423d5fc body=64 status=ok
// SIG undefined FUN_14423d5fc(void)

undefined8 * FUN_14423d5fc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b9a3860;
  plVar2 = (longlong *)param_1[3];
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



// FUNCTION 14423d63c FUN_14423d63c body=5358 status=ok
// SIG undefined FUN_14423d63c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14423d63c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined4 uStack_70;
  uint uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = "AssetRegistry";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3390 = (ulonglong)uVar2;
  _DAT_14cbd33a0 = &LAB_144229220;
  _DAT_14cbd33a8 = 0x44343333;
  DAT_14cbd33ac = 1;
  DAT_14cbd3398 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd3398;
  atexit((_func_5014 *)&LAB_144229225);
  _DAT_14cbd33b8 = 0x47efffffe0000000;
  _DAT_14cbd33c0 = 0x47efffffe0000000;
  _DAT_14cbd33c8 = 0x47efffffe0000000;
  _DAT_14cbd33d0 = 0x47efffffe0000000;
  _DAT_14cbd33d8 = 0x47efffffe0000000;
  _DAT_14cbd33e0 = 0x47efffffe0000000;
  _DAT_14cbd33e8 = 0x47efffffe0000000;
  _DAT_14cbd33f0 = 0x47efffffe0000000;
  _DAT_14cbd33f8 = 0xffffffff;
  _DAT_14cbd33fc = 0;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbd3400);
  if (cVar1 == '\0') {
    _DAT_14cbd3400 = 0;
    uRam000000014cbd3408 = 0;
  }
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_78 = "bone";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "Use";
  uStack_70 = 3;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3410 = (ulonglong)uVar2;
  local_78 = "Sight";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3418 = (ulonglong)uVar2;
  local_78 = "TargetLock";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3420 = (ulonglong)uVar2;
  _DAT_14cbd342c = 0;
  FUN_14052b5e0(&DAT_14cbd3428,"PlayerAwareness",0);
  _DAT_14cbd3438 = "PlayerAwareness";
  local_78 = "basic";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3440 = (ulonglong)uVar2;
  local_78 = "challenge";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3448 = (ulonglong)uVar2;
  local_78 = "online";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3450 = (ulonglong)uVar2;
  local_78 = "social";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3458 = (ulonglong)uVar2;
  local_78 = "alert";
  uStack_70 = 5;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3460 = (ulonglong)uVar2;
  local_78 = "photo_mode";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3468 = (ulonglong)uVar2;
  local_78 = "generic_task";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3470 = (ulonglong)uVar2;
  local_78 = "mission";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3478 = (ulonglong)uVar2;
  local_78 = "mail";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3480 = (ulonglong)uVar2;
  local_78 = "respawn";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3488 = (ulonglong)uVar2;
  local_78 = "tutorial";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3490 = (ulonglong)uVar2;
  local_78 = "special_notification";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3498 = (ulonglong)uVar2;
  local_78 = "generic_notification";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd34a0 = (ulonglong)uVar2;
  local_78 = "vault_card";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd34a8 = (ulonglong)uVar2;
  local_78 = "ONLINE_MESSAGE";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd34b0 = (ulonglong)uVar2;
  local_78 = "INGAME_MESSAGE";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd34b8 = (ulonglong)uVar2;
  local_78 = "NOTIFICATION_MESSAGE";
  uStack_70 = 0x14;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd34c0 = (ulonglong)uVar2;
  local_78 = "MENU_TUTORIAL_MESSAGE";
  uStack_70 = 0x15;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd34c8 = (ulonglong)uVar2;
  local_78 = "collectible";
  uStack_70 = 0xb;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd34d0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbd34d8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144229259);
  FUN_140056680(&DAT_14cbd34e8,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14422926a);
  FUN_140056680(&DAT_14cbd34f8,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14422927b);
  FUN_140056680(&DAT_14cbd3508,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14422928c);
  FUN_1446f470e(&DAT_14cbd3518,L"LIMB_GORED",1);
  _DAT_14cbd3520 = 0x4072c00000000000;
  _DAT_14cbd3528 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd3530,L"body",1);
  FUN_1446f470e(&DAT_14cbd3538,L"title_card",1);
  DAT_14cbd3544 = 0;
  FUN_14052b5e0(&DAT_14cbd3540,"KillActorsNoLoot",0);
  _DAT_14cbd3550 = "KillActorsNoLoot";
  FUN_1446f470e(&DAT_14cbd3558,L"PointOfActivity",1);
  FUN_1446f470e(&DAT_14cbd3560,L"TrueMode");
  DAT_14cbd356c = 0;
  FUN_14052b5e0(&DAT_14cbd3568,"KillActorsNoLoot",0);
  _DAT_14cbd3578 = "KillActorsNoLoot";
  FUN_1446f470e(&DAT_14cbd3580,L"SpawnPointInUse",1);
  _DAT_14cbd3590 = &LAB_144229a81;
  _DAT_14cbd3598 = 0x45002000;
  DAT_14cbd359c = 1;
  DAT_14cbd3588 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd3588;
  atexit((_func_5014 *)&LAB_144229a86);
  local_78 = "Cash";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd35a8 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbd35b0,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144229aba);
  FUN_1446f470e(&DAT_14cbd35c0,L"UNSET",1);
  local_78 = "init";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "update";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "config_update";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  local_78 = "deinit";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cbd35c8,L"Party",1);
  FUN_1446f470e(&DAT_14cbd35d0,&DAT_149e063b2);
  _DAT_14cbd35dc = 0;
  FUN_14052b5e0(&DAT_14cbd35d8,"State",0);
  local_78 = (char *)0x900548c6e7c867c0;
  uStack_70 = 0x95dcad92;
  uStack_6c = 0xaab4eaf1;
  _DAT_14cbd35e4 = 0xe7c867c0;
  uRam000000014cbd35e8 = 0x900548c6;
  uRam000000014cbd35ec = 0x95dcad92;
  uRam000000014cbd35f0 = 0xaab4eaf1;
  FUN_141005458(&local_78,0,L"OakTrackableSpawner",0);
  atexit((_func_5014 *)&LAB_144229acb);
  ram0x00014cbd35fc = 0;
  FUN_14052b5e0(&DAT_14cbd35f8,"vault_tracker_group",0);
  _DAT_14cbd3608 = "vault_tracker_group";
  _DAT_14cbd3614 = 0;
  FUN_14052b5e0(&DAT_14cbd3610,"vault_tracker_enabled",0);
  _DAT_14cbd3620 = "vault_tracker_enabled";
  local_78 = "MaxSpawned";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd3628 = (ulonglong)uVar2;
  _DAT_14cbd3630 = 0;
  uRam000000014cbd3638 = 0;
  CoCreateGuid((GUID *)&DAT_14cbd3630);
  _DAT_14cbd3640 = 0;
  uRam000000014cbd3648 = 0;
  CoCreateGuid((GUID *)&DAT_14cbd3640);
  _DAT_14cbd3650 = 0;
  uRam000000014cbd3658 = 0;
  CoCreateGuid((GUID *)&DAT_14cbd3650);
  local_78 = "SEMovementAspect";
  uStack_70 = 0x10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3660 = (ulonglong)uVar2;
  _DAT_14cbd3668 = 0;
  uRam000000014cbd3670 = 0;
  CoCreateGuid((GUID *)&DAT_14cbd3668);
  FUN_1446f470e(&DAT_14cbd3678,&DAT_14b40c392,1);
  FUN_1446f470e(&DAT_14cbd3680,L"Spawning",1);
  FUN_1446f470e(&DAT_14cbd3688,L"IsSpawning",1);
  FUN_1446f470e(&DAT_14cbd4078,L"FrozenLock");
  DAT_14cbd36a0 = 0;
  atexit((_func_5014 *)&LAB_14422a8dc);
  local_78 = "Freeze_DOT";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd37a0 = (ulonglong)uVar2;
  local_78 = "Instigator_DOT";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd37a8 = (ulonglong)uVar2;
  local_78 = "Source_DOT";
  uStack_70 = 10;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd37b0 = (ulonglong)uVar2;
  local_78 = "concussed";
  uStack_70 = 9;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd37b8 = (ulonglong)uVar2;
  local_78 = "frozen";
  uStack_70 = 6;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd37c0 = (ulonglong)uVar2;
  local_78 = "stunned";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd37c8 = (ulonglong)uVar2;
  local_78 = "end";
  uStack_70 = 3;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd37d0 = (ulonglong)uVar2;
  local_78 = "elem_duration";
  uStack_70 = 0xd;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd37d8 = (ulonglong)uVar2;
  local_78 = "StructuredInteractable";
  uStack_70 = 0x16;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd37e0 = (ulonglong)uVar2;
  _DAT_14cbd37ec = 0;
  _DAT_14cbd37f0 = 0;
  FUN_14052b5e0(&DAT_14cbd37e8,"trait_mission",0);
  _DAT_14cbd37f8 = "trait_mission";
  _DAT_14cbd3804 = 0;
  _DAT_14cbd3808 = 0;
  FUN_14052b5e0(&DAT_14cbd3800,"weekly_trait_mission",0);
  _DAT_14cbd3810 = "weekly_trait_mission";
  _DAT_14cbd3838 = &LAB_14422df8d;
  _DAT_14cbd3840 = 0x443410a4;
  DAT_14cbd3844 = 1;
  DAT_14cbd3830 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd3830;
  atexit((_func_5014 *)&LAB_14422df92);
  _DAT_14cbd3858 = &LAB_14422e13d;
  _DAT_14cbd3860 = 0x44341148;
  DAT_14cbd3864 = 1;
  DAT_14cbd3850 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd3850;
  atexit((_func_5014 *)&LAB_14422e142);
  _DAT_14cbd3878 = &LAB_14422e176;
  _DAT_14cbd3880 = 0x443411ec;
  DAT_14cbd3884 = 1;
  DAT_14cbd3870 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd3870;
  atexit((_func_5014 *)&LAB_14422e17b);
  _DAT_14cbd3898 = &LAB_14422e1af;
  _DAT_14cbd38a0 = 0x44341000;
  DAT_14cbd38a4 = 1;
  DAT_14cbd3890 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd3890;
  atexit((_func_5014 *)&LAB_14422e1b4);
  _DAT_14cbd38b8 = &LAB_14422e269;
  _DAT_14cbd38c0 = 0x43c88000;
  DAT_14cbd38c4 = 1;
  DAT_14cbd38b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd38b0;
  atexit((_func_5014 *)&LAB_14422e26e);
  local_78 = "Standard";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd38d0 = (ulonglong)uVar2;
  local_78 = "PrologueSkip";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd38d8 = (ulonglong)uVar2;
  local_78 = "UltimateVaultHunterSkip";
  uStack_70 = 0x17;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd38e0 = (ulonglong)uVar2;
  local_78 = "SkipToDLC_Cowbell";
  uStack_70 = 0x11;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd38e8 = (ulonglong)uVar2;
  local_78 = "SkipToDLC_Harmonica";
  uStack_70 = 0x13;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd38f0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbd38f8,L"MENU_BIGMAP_FASTTRAVEL",1);
  FUN_1446f470e(&DAT_14cbd3900,L"StationLabelComponent",1);
  local_78 = "TrackerObjects";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd3908 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbd3910,L"LevelTravelPlane",1);
  FUN_1446f470e(&DAT_14cbd3918,L"StationLabelComponent");
  DAT_14cbd3920 = 0;
  atexit((_func_5014 *)&LAB_1442303b5);
  _DAT_14cbd3c24 = 0;
  _DAT_14cbd3c28 = 0;
  FUN_14052b5e0(&DAT_14cbd3c20,"virtual");
  _DAT_14cbd3c30 = "virtual";
  DAT_14cbd40a0._4_4_ = 0;
  DAT_14cbd40a8 = 0;
  FUN_14052b5e0(&DAT_14cbd40a0,"holding");
  _DAT_14cbd40b0 = "holding";
  DAT_14cbd3c38._4_4_ = 0;
  DAT_14cbd3c40 = 0;
  FUN_14052b5e0(&DAT_14cbd3c38,"mainmenu");
  _DAT_14cbd3c48 = "mainmenu";
  DAT_14cbd4080._4_4_ = 0;
  DAT_14cbd4088 = 0;
  FUN_14052b5e0(&DAT_14cbd4080,"characterselect");
  _DAT_14cbd4090 = "characterselect";
  DAT_14cbd3c50._4_4_ = 0;
  DAT_14cbd3c58 = 0;
  FUN_14052b5e0(&DAT_14cbd3c50,"level");
  _DAT_14cbd3c60 = "level";
  _DAT_14cbd3c6c = 0;
  _DAT_14cbd3c70 = 0;
  FUN_14052b5e0(&DAT_14cbd3c68,"respawn");
  _DAT_14cbd3c78 = "respawn";
  DAT_14cbd40b8._4_4_ = 0;
  DAT_14cbd40c0 = 0;
  FUN_14052b5e0(&DAT_14cbd40b8,"fast_travel");
  _DAT_14cbd40c8 = "fast_travel";
  _DAT_14cbd3c84 = 0;
  _DAT_14cbd3c88 = 0;
  FUN_14052b5e0(&DAT_14cbd3c80,&DAT_14b4152a8,0);
  _DAT_14cbd3c90 = &DAT_14b4152a8;
  _DAT_14cbd3c9c = 0;
  _DAT_14cbd3ca0 = 0;
  FUN_14052b5e0(&DAT_14cbd3c98,&DAT_14b9a1b0c);
  _DAT_14cbd3ca8 = &DAT_14b9a1b0c;
  local_78 = "Trigger";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd3cb0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbd3cb8,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1442308c7);
  _DAT_14cbd3cc8 = 0;
  uRam000000014cbd3cd0 = 0;
  _DAT_14cbd3cd8 = 0;
  DAT_14cbd3ce0 = 0;
  uRam000000014cbd3ce8 = 0;
  FUN_1446ddda2(&DAT_14cbd3cc8,"NotReady",0);
  atexit((_func_5014 *)&LAB_1442308d8);
  _DAT_14cbd3cf0 = 0;
  uRam000000014cbd3cf8 = 0;
  _DAT_14cbd3d00 = 0;
  DAT_14cbd3d08 = 0;
  uRam000000014cbd3d10 = 0;
  FUN_1446ddda2(&DAT_14cbd3cf0,"Injured",0);
  atexit((_func_5014 *)&LAB_1442308e9);
  _DAT_14cbd3d18 = 0;
  uRam000000014cbd3d20 = 0;
  _DAT_14cbd3d28 = 0;
  DAT_14cbd3d30 = 0;
  uRam000000014cbd3d38 = 0;
  FUN_1446ddda2(&DAT_14cbd3d18,"InMenu",0);
  atexit((_func_5014 *)&LAB_1442308fa);
  _DAT_14cbd3d40 = 0;
  uRam000000014cbd3d48 = 0;
  _DAT_14cbd3d50 = 0;
  DAT_14cbd3d58 = 0;
  uRam000000014cbd3d60 = 0;
  FUN_1446ddda2(&DAT_14cbd3d40,"RecentDamage",0);
  atexit((_func_5014 *)&LAB_14423090b);
  _DAT_14cbd3d68 = 0;
  uRam000000014cbd3d70 = 0;
  _DAT_14cbd3d78 = 0;
  DAT_14cbd3d80 = 0;
  uRam000000014cbd3d88 = 0;
  FUN_1446ddda2(&DAT_14cbd3d68,"DLCOwnership");
  atexit((_func_5014 *)&LAB_14423091c);
  _DAT_14cbd3d90 = 0;
  uRam000000014cbd3d98 = 0;
  _DAT_14cbd3da0 = 0;
  DAT_14cbd3da8 = 0;
  uRam000000014cbd3db0 = 0;
  FUN_1446ddda2(&DAT_14cbd3d90,"ManualRequest");
  atexit((_func_5014 *)&LAB_14423092d);
  DAT_14cbd3db8._4_4_ = 0;
  DAT_14cbd3dc0 = 0;
  FUN_14052b5e0(&DAT_14cbd3db8,"active_zone",0);
  _DAT_14cbd3dc8 = "active_zone";
  FUN_140056680(&DAT_14cbd3dd0,L"/Game/Maps/WorldLevels/");
  atexit((_func_5014 *)&LAB_14423093e);
  FUN_140056680(&DAT_14cbd3de0,L"OakTravelManager");
  atexit((_func_5014 *)&LAB_14423094f);
  FUN_1446f470e(&DAT_14cbd3df0,L"Immediate",1);
  FUN_1446f470e(&DAT_14cbd4098,L"Respawning",1);
  FUN_1446f470e(&DAT_14cbd3df8,L"ClientWaitingOnServer",1);
  FUN_1446f470e(&DAT_14cbd3e00,L"TravelManagerTeleport",1);
  FUN_146636042();
  atexit((_func_5014 *)&LAB_144230960);
  local_78 = "Station";
  uStack_70 = 7;
  uStack_6c = uStack_6c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"OakTravel",1);
  _DAT_14cbd3fc8 = 0;
  local_78 = "Zone";
  uStack_70 = 4;
  uStack_6c = uStack_6c & 0xffffff00;
  _DAT_14cbd3fc0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"OakTravel",1);
  _DAT_14cbd3fd8 = 0;
  local_78 = "current_region";
  uStack_70 = 0xe;
  uStack_6c = uStack_6c & 0xffffff00;
  _DAT_14cbd3fd0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"OakTravel",1);
  _DAT_14cbd3fe8 = 0;
  local_78 = "previous_map";
  uStack_70 = 0xc;
  uStack_6c = uStack_6c & 0xffffff00;
  _DAT_14cbd3fe0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"OakTravel",1);
  _DAT_14cbd3ff8 = 0;
  local_78 = "is_spawn";
  uStack_70 = 8;
  uStack_6c = uStack_6c & 0xffffff00;
  _DAT_14cbd3ff0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"OakTravel",1);
  _DAT_14cbd4000 = (ulonglong)uVar2;
  _DAT_14cbd4008 = 0;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423eb82 FUN_14423eb82 body=523 status=ok
// SIG undefined FUN_14423eb82(void)

void FUN_14423eb82(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_40;
  int local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar8 = FUN_148e154d6();
  if ((lVar8 != 0) && ((int)param_1[0x85] == 1)) {
    uVar9 = FUN_1447210f0(param_1);
    FUN_1410d53f0(&local_40,uVar9);
    plVar11 = (longlong *)CONCAT44(uStack_34,local_38);
    if (plVar11 != (longlong *)0x0) {
      iVar7 = (int)plVar11[1];
      do {
        if (iVar7 == 0) {
          plVar11 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar5 = (int)plVar11[1];
        bVar12 = iVar7 == iVar5;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar7 + 1;
          iVar5 = iVar7;
        }
        iVar7 = iVar5;
        UNLOCK();
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_34,local_38) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_34,local_38) + 0x10))();
      }
      lVar4 = local_40;
      if (plVar11 != (longlong *)0x0) {
        if (local_40 != 0) {
          if (((((*(int *)(local_40 + 0x294) == 0) ||
                (uVar2 = *(uint *)(local_40 + 0x290), (int)uVar2 < 0)) ||
               (DAT_14c9647dc <= (int)uVar2)) ||
              ((plVar10 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(local_40 + 0x294))))) ||
             (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (*plVar10 == 0)))) {
            FUN_14422fb34(local_40,param_1,lVar8);
          }
          else {
            cVar6 = (**(code **)(*param_1 + 0x680))(param_1,lVar8);
            if ((cVar6 != '\0') && (cVar6 = FUN_14603dd6a(lVar4,lVar8), cVar6 == '\0')) {
              local_40 = 0;
              local_38 = 0x6000;
              local_30 = 0;
              lVar3 = param_1[(ulonglong)*(byte *)(param_1 + 0x8c) + 0x7e];
              if (lVar3 != 0) {
                if (*(longlong *)(lVar3 + 0x2640) != 0 || *(int *)(lVar3 + 0x2648) != 0x6000) {
                  local_40 = *(longlong *)(lVar3 + 0x2640);
                  local_38 = *(int *)(lVar3 + 0x2648);
                }
              }
              local_48 = 0;
              local_50 = 0;
              local_58 = 0;
              local_60 = 0;
              local_68 = 1;
              cVar6 = FUN_1416a3978(lVar4,lVar8,&local_40,0);
              if (cVar6 != '\0') {
                (**(code **)(*param_1 + 0x688))(param_1,lVar8);
              }
            }
          }
        }
        LOCK();
        plVar10 = plVar11 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423eda6 FUN_14423eda6 body=899 status=ok
// SIG undefined FUN_14423eda6(void)

void FUN_14423eda6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  ushort uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98 [2];
  longlong local_88;
  int local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = FUN_1447210f0();
  if (lVar5 == 0) goto LAB_14423f079;
  FUN_1410d53f0(&local_60,lVar5);
  plVar10 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar10 == (longlong *)0x0) goto LAB_14423f079;
  iVar4 = (int)plVar10[1];
  do {
    if (iVar4 == 0) {
      plVar10 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar3 = (int)plVar10[1];
    bVar16 = iVar4 == iVar3;
    if (bVar16) {
      *(int *)(plVar10 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
  } while (!bVar16);
  LOCK();
  piVar1 = (int *)((longlong)CONCAT44(uStack_54,local_58) + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
  }
  lVar8 = local_60;
  if (plVar10 == (longlong *)0x0) goto LAB_14423f079;
  if (local_60 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x2650);
    if (lVar6 == 0) {
      local_60 = *(longlong *)(param_1 + 0x2640);
      lVar6 = FUN_14050aea0();
      *(longlong *)(param_1 + 0x2650) = lVar6;
      if (lVar6 == 0) goto LAB_14423f05c;
    }
    lVar7 = *(longlong *)(lVar6 + 0xb8);
    if (lVar7 == 0) {
      local_60 = *(longlong *)(lVar6 + 0xa8);
      lVar7 = FUN_14050aea0();
      *(longlong *)(lVar6 + 0xb8) = lVar7;
      if (lVar7 == 0) {
        if ((*(longlong *)(lVar6 + 0x118) != 0) && ((longlong)*(int *)(lVar6 + 0x128) != 0)) {
          lVar7 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar6 + 0x120) + lVar7) != 0) {
              lVar7 = FUN_148e091ca(lVar8,lVar6 + 0x110,*(undefined8 *)(lVar6 + 0x1b0));
              if (lVar7 != 0) goto LAB_14423eeb4;
              break;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(lVar6 + 0x128) * 8 != lVar7);
        }
        goto LAB_14423f05c;
      }
    }
LAB_14423eeb4:
    local_a8 = lVar8;
    puVar9 = *(undefined4 **)(lVar7 + 8);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = &DAT_14c9485f0;
    }
    local_a0 = param_2;
    if (DAT_14c947fe0 == 0) {
      lVar8 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar8);
      DAT_14c947fe0 = lVar8;
    }
    FUN_140045924(DAT_14c947fe0,&local_68,puVar9,1);
    local_60 = local_68;
    local_58 = 0x6000;
    local_50 = 0;
    puVar9 = *(undefined4 **)(*(longlong *)(lVar7 + 0x1b0) + 8);
    puVar15 = &DAT_14c9485f0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar15 = puVar9;
    }
    local_78 = 0;
    uStack_70 = 0;
    FUN_1400b2348(puVar15,&local_78,1);
    FUN_1410908dc(lVar5,local_98,0);
    FUN_14094a6a4(&local_88,local_98,0);
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
    if (local_80 == (int)uStack_70) {
      if (1 < local_80) {
        lVar5 = 0;
        while( true ) {
          uVar11 = *(ushort *)(local_88 + lVar5);
          uVar12 = (ulonglong)uVar11;
          uVar13 = *(ushort *)(local_78 + lVar5);
          if (uVar11 != uVar13) break;
          if (uVar11 == 0) goto LAB_14423effa;
LAB_14423efc3:
          lVar5 = lVar5 + 2;
        }
        if ((uVar13 | uVar11) < 0x80) {
          uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
          uVar14 = (ulonglong)uVar13;
          uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
          if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar14]) goto LAB_14423efc3;
        }
        if (uVar11 != uVar13) goto LAB_14423f03b;
      }
LAB_14423effa:
      if ((*(longlong *)(lVar7 + 0x50) == *(longlong *)(lVar6 + 0x50)) &&
         (*(int *)(lVar7 + 0x58) == *(int *)(lVar6 + 0x58))) {
        local_b8 = 0;
        local_c0 = 1;
        local_c8 = 0;
        local_d0 = 0;
        local_d8 = 1;
        FUN_1416a3978(local_a8,local_a0,&local_60,0);
      }
    }
    else if ((int)uStack_70 + local_80 == 1) goto LAB_14423effa;
LAB_14423f03b:
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14423f05c:
  LOCK();
  plVar2 = plVar10 + 1;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
LAB_14423f079:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423f1a8 FUN_14423f1a8 body=1381 status=ok
// SIG undefined FUN_14423f1a8(void)

void FUN_14423f1a8(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_2f8 [32];
  undefined1 local_2d8;
  undefined1 local_2d0 [8];
  code *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  int local_2b0;
  undefined4 uStack_2ac;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  FUN_1406c9b58();
  lVar9 = FUN_1447210f0(param_1);
  if ((lVar9 == 0) ||
     ((bVar2 = *(byte *)(lVar9 + 0x152), bVar2 != 1 &&
      ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))))) goto LAB_14423f5d4;
  (**(code **)(*param_1 + 0x688))(param_1);
  lVar9 = param_1[0x4ca];
  if (lVar9 == 0) {
    local_2b8 = (longlong *)param_1[0x4c8];
    lVar9 = FUN_14050aea0();
    param_1[0x4ca] = lVar9;
    if (lVar9 != 0) goto LAB_14423f233;
  }
  else {
LAB_14423f233:
    lVar9 = FUN_1407c8d60(lVar9);
    if (((lVar9 != 0) && (*(char *)(lVar9 + 0x32) == '\0')) && (lVar9 = param_1[0x4ce], lVar9 != 0))
    {
      local_2b8 = (longlong *)0x0;
      local_2b0 = 0;
      FUN_1446efa72(&local_2b8,0,3,0x10);
      plVar14 = local_2b8;
      local_2b0 = 3;
      *local_2b8 = (longlong)&PTR_LAB_14b412de0;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar15 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar15 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar15;
      local_2b8[2] = lVar11;
      *local_2b8 = (longlong)&PTR_FUN_14b9a57f0;
      local_2b8[3] = 0;
      iVar13 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar3 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_2b8 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar13 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar13 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar13;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar13 = *(int *)(lVar15 + 0x10);
          bVar16 = iVar13 == 0;
          if (bVar16) {
            *(int *)(lVar15 + 0x10) = iVar8;
            iVar13 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar13 = iVar8;
          }
        }
      }
      *(int *)((longlong)plVar14 + 0x1c) = iVar13;
      plVar14[4] = (longlong)&LAB_1411d2ee8;
      *(undefined4 *)(plVar14 + 5) = 0;
      if (((local_2b0 == 0) || (local_2b8 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*local_2b8 + 0x30))(), cVar7 == '\0')) {
        if (local_2b0 != 0) {
          if (local_2b8 == (longlong *)0x0) goto LAB_14423f468;
          (**(code **)*local_2b8)(local_2b8,0);
          FUN_1446efa72(&local_2b8,0,0,0x10);
          goto LAB_14423f452;
        }
      }
      else {
        plVar14 = (longlong *)(lVar9 + 0x620);
        if (*(int *)(lVar9 + 0x634) < 1) {
          iVar13 = *(int *)(lVar9 + 0x628);
          iVar8 = *(int *)(lVar9 + 0x630) + -1;
          *(int *)(lVar9 + 0x630) = iVar8;
          if (iVar8 <= iVar13) {
            iVar8 = iVar13;
            if (0 < iVar13) {
              iVar12 = 0;
              do {
                if (((*(int *)(*plVar14 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                    (plVar4 = *(longlong **)(*plVar14 + (longlong)iVar12 * 0x10),
                    plVar4 == (longlong *)0x0)) ||
                   (cVar7 = (**(code **)(*plVar4 + 0x28))(), cVar7 != '\0')) {
                  FUN_14005b288(plVar14,iVar12);
                  FUN_14005b248(plVar14);
                }
                else {
                  iVar12 = iVar12 + 1;
                }
                iVar8 = *(int *)(lVar9 + 0x628);
              } while (iVar12 < iVar8);
            }
            iVar12 = 2;
            if (2 < iVar8 * 2) {
              iVar12 = iVar8 * 2;
            }
            *(int *)(lVar9 + 0x630) = iVar12;
            if ((iVar12 < iVar13) && (*(int *)(lVar9 + 0x62c) != iVar8)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_2b0 != 0) && (local_2b8 != (longlong *)0x0)) {
          (**(code **)(*local_2b8 + 0x38))(local_2b8,&local_2c8);
        }
        iVar13 = *(int *)(lVar9 + 0x628);
        *(uint *)(lVar9 + 0x628) = iVar13 + 1U;
        if (*(uint *)(lVar9 + 0x62c) < iVar13 + 1U) {
          FUN_1447a71f6(plVar14,iVar13);
        }
        lVar9 = *plVar14;
        lVar15 = (longlong)iVar13 * 0x10;
        *(undefined8 *)(lVar9 + lVar15) = 0;
        *(undefined4 *)(lVar9 + 8 + lVar15) = 0;
        *(longlong **)(lVar9 + lVar15) = local_2b8;
        local_2b8 = (longlong *)0x0;
        *(int *)(lVar9 + 8 + lVar15) = local_2b0;
LAB_14423f452:
        local_2b0 = 0;
      }
      if (local_2b8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14423f468:
  lVar9 = FUN_140cb9f34();
  lVar9 = FUN_1407a0dc0(lVar9 + 0x2b0);
  if (lVar9 != 0) {
    uVar10 = FUN_1447210f0(param_1);
    FUN_1409e0c66(&local_2b8,uVar10);
    plVar14 = (longlong *)CONCAT44(uStack_2ac,local_2b0);
    if (plVar14 != (longlong *)0x0) {
      iVar13 = (int)plVar14[1];
      do {
        if (iVar13 == 0) {
          plVar14 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar8 = (int)plVar14[1];
        bVar16 = iVar13 == iVar8;
        if (bVar16) {
          *(int *)(plVar14 + 1) = iVar13 + 1;
          iVar8 = iVar13;
        }
        iVar13 = iVar8;
        UNLOCK();
      } while (!bVar16);
      LOCK();
      piVar1 = (int *)((longlong)CONCAT44(uStack_2ac,local_2b0) + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*(longlong *)CONCAT44(uStack_2ac,local_2b0) + 0x10))();
      }
      plVar4 = local_2b8;
      if (plVar14 != (longlong *)0x0) {
        if (local_2b8 != (longlong *)0x0) {
          FUN_140bc281a(&local_2b8,lVar9);
          local_2d8 = 0;
          FUN_140a41f04(plVar4,&local_2c8,param_1,&local_2b8);
          plVar4 = local_2c0;
          if ((code **)(param_1 + 0x4dd) != &local_2c8) {
            param_1[0x4dd] = (longlong)local_2c8;
            local_2c8 = (code *)0x0;
            plVar5 = (longlong *)param_1[0x4de];
            if (local_2c0 != plVar5) {
              local_2c0 = (longlong *)0x0;
              param_1[0x4de] = (longlong)plVar4;
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar5 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
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
            }
          }
          plVar4 = local_2c0;
          if (local_2c0 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_2c0 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)*local_2c0)(local_2c0);
              LOCK();
              piVar1 = (int *)((longlong)plVar4 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          pcVar6 = (code *)param_1[0x4dd];
          if (pcVar6 != (code *)0x0) {
            local_2c8 = FUN_148e1615c;
            local_2c0 = (longlong *)((ulonglong)local_2c0 & 0xffffffff00000000);
            FUN_148e1605c(pcVar6 + 0x130,local_2d0,param_1);
          }
          local_2b8 = (longlong *)0x0;
          FUN_14076ba36();
        }
        LOCK();
        plVar4 = plVar14 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
  }
LAB_14423f5d4:
  if ((local_40 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423f70e FUN_14423f70e body=634 status=ok
// SIG undefined FUN_14423f70e(void)

void FUN_14423f70e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  undefined2 *local_80;
  int local_78;
  undefined2 *local_70;
  int local_68;
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
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(longlong *)(param_1 + 0x2638) != 0) &&
      (lVar4 = FUN_1447210f0(), lVar1 = DAT_14cb84f20, lVar4 != 0)) && (DAT_14cb84f20 != 0)) {
    lVar4 = param_1;
LAB_14423f762:
    lVar5 = lVar4;
    lVar4 = lVar5;
    if (*(longlong *)(lVar5 + 0x20) != 0) goto code_r0x00014423f771;
    goto LAB_14423f786;
  }
LAB_14423f965:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014423f771:
  lVar4 = *(longlong *)(lVar5 + 0x20);
  if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) goto LAB_14423f762;
  lVar4 = FUN_142840154(lVar5);
LAB_14423f786:
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(lVar5 + 0x20);
    goto LAB_14423f762;
  }
  FUN_1427b95fe(lVar4 + 0x38,&local_48,0);
  cVar2 = FUN_144a38768(&local_48,L".umap",5,1);
  if (cVar2 != '\0') {
    iVar3 = iStack_40 + -1;
    if (iStack_40 == 0) {
      puVar6 = &DAT_149dfb77a;
      iVar3 = 0;
    }
    else {
      puVar6 = (undefined2 *)CONCAT44(uStack_44,local_48);
    }
    iVar8 = 5;
    if (5 < iVar3) {
      iVar8 = iVar3;
    }
    FUN_14006620a(&local_58,puVar6,iVar8 + -5);
    if (CONCAT44(uStack_44,local_48) != 0) {
      FUN_1400020a8();
    }
    local_48 = local_58;
    uStack_44 = uStack_54;
    iStack_40 = iStack_50;
    uStack_3c = uStack_4c;
  }
  FUN_1415024b8(&local_48);
  iVar3 = iStack_40 + -1;
  if (iStack_40 == 0) {
    iVar3 = 0;
  }
  FUN_1446f82e2(&local_58,iVar3,CONCAT44(uStack_44,local_48),1);
  lVar4 = CONCAT44(uStack_54,local_58);
  FUN_1405f0c40(lVar1,&local_60,lVar4);
  if ((local_60 != 0) || (lVar4 != 0)) {
    FUN_1400021e4((undefined8 *)(param_1 + 0x2638),&local_70);
    puVar6 = &DAT_149dfb77a;
    if (local_68 != 0) {
      puVar6 = local_70;
    }
    FUN_1400021e4(&local_60,&local_80);
    puVar7 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar7 = local_80;
    }
    FUN_140002266(&local_58,L"%ls.%ls",puVar7,puVar6);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    iVar3 = iStack_50 + -1;
    if (iStack_50 == 0) {
      iVar3 = 0;
    }
    FUN_1446f82e2(&local_70,iVar3,CONCAT44(uStack_54,local_58),1);
    if ((*(undefined2 **)(param_1 + 0x2640) != local_70) || (*(int *)(param_1 + 0x2648) != 0x6000))
    {
      *(undefined2 **)(param_1 + 0x2640) = local_70;
      *(undefined4 *)(param_1 + 0x2648) = 0x6000;
      *(undefined8 *)(param_1 + 0x2650) = 0;
    }
    *(undefined8 *)(param_1 + 0x2638) = 0;
    if (CONCAT44(uStack_54,local_58) != 0) {
      FUN_1400020a8();
    }
  }
  if (CONCAT44(uStack_44,local_48) != 0) {
    FUN_1400020a8();
  }
  goto LAB_14423f965;
}



// FUNCTION 14423f98a FUN_14423f98a body=545 status=ok
// SIG undefined FUN_14423f98a(void)

void FUN_14423f98a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined8 *local_48;
  ulonglong uStack_40;
  longlong local_30;
  ulonglong local_28;
  
  lVar1 = DAT_14cb84f20;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x2640) == 0) || (DAT_14cb84f20 == 0)) goto LAB_14423fb8b;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  local_30 = *(longlong *)(param_1 + 0x2640);
  FUN_1400021e4(&local_30,&local_58);
  FUN_1403de9f2(&local_58,&local_48,&DAT_149e0635c,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (1 < (int)uStack_40) {
    if (*(int *)(local_48 + 1) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*local_48;
    }
    FUN_1446f470e(&local_58,puVar4,1);
    lVar2 = FUN_1488def24(lVar1,&local_58);
    if (lVar2 == 0) {
      if (*(int *)(local_48 + 1) == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      else {
        puVar4 = (undefined2 *)*local_48;
      }
      FUN_1446f470e(&local_58,puVar4,1);
      lVar2 = FUN_14090279a(lVar1,&local_58);
      if (lVar2 == 0) goto LAB_14423fb6e;
    }
    lVar1 = *(longlong *)(lVar2 + 0x80);
    if (lVar1 != lVar2 && lVar1 != 0) {
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(local_48 + 3) != 0) {
        puVar4 = (undefined2 *)local_48[2];
      }
      puVar3 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar1 + 8) != (undefined4 *)0x0) {
        puVar3 = *(undefined4 **)(lVar1 + 8);
      }
      local_68 = (undefined2 *)0x0;
      uStack_60 = 0;
      FUN_1400b2348(puVar3,&local_68,1);
      puVar5 = &DAT_149dfb77a;
      if ((int)uStack_60 != 0) {
        puVar5 = local_68;
      }
      FUN_140002266(&local_58,L"%ls.%ls",puVar5,puVar4);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar4 = local_58;
      if (local_50 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_70,puVar4,1);
      if (*(longlong *)(param_1 + 0x2640) != local_70) {
        *(undefined8 *)(param_1 + 0x2650) = 0;
      }
      *(longlong *)(param_1 + 0x2640) = local_70;
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14423fb6e:
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14423fb8b:
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14423fbac FUN_14423fbac body=92 status=ok
// SIG undefined FUN_14423fbac(void)

void FUN_14423fbac(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0xbb0) == 0) {
    local_18 = *(undefined8 *)(param_1 + 0xba0);
    uVar1 = FUN_14050aea0();
    *(undefined8 *)(param_1 + 0xbb0) = uVar1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14423fc12 FUN_14423fc12 body=617 status=ok
// SIG undefined FUN_14423fc12(void)

undefined4 FUN_14423fc12(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_3e8 [32];
  undefined1 local_3c8 [112];
  longlong local_358;
  longlong local_308;
  char local_2f8;
  longlong *local_2b8;
  longlong *local_148;
  char local_118;
  char local_a8;
  char local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  uVar4 = FUN_14087fa96();
  if (*(char *)((longlong)param_1 + 300) == '\0') {
    lVar5 = FUN_1447210f0(param_1[7]);
    if (lVar5 == 0) {
      uVar8 = 0;
      uVar10 = 0;
    }
    else {
      uVar8 = (undefined4)*(undefined8 *)(lVar5 + 0x6d0);
      uVar10 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x6d0) >> 0x20);
    }
    dVar3 = (double)param_1[0x27];
    fVar7 = (float)(**(code **)(*param_1 + 0x28))(param_1);
    uVar4 = 0;
    if ((*(char *)((longlong)param_1 + 0x12d) == '\x01') &&
       (fVar9 = (float)((double)CONCAT44(uVar10,uVar8) - dVar3), fVar7 <= fVar9)) {
      lVar5 = param_1[7];
      if ((*(char *)(lVar5 + 0x178) == '\x03') &&
         (((*(char *)((longlong)param_1 + 0x131) == '\0' &&
           (*(undefined1 *)((longlong)param_1 + 0x131) = 1,
           *(char *)((longlong)param_1 + 0x12e) == '\0')) && (param_1[0x16] != 0)))) {
        FUN_1407ab98c(param_1[0x16],0,0);
        lVar5 = param_1[7];
      }
      lVar5 = FUN_140a40fb0(lVar5);
      uVar4 = 0;
      if (lVar5 == 0) {
        bVar6 = false;
      }
      else {
        FUN_144a238e8(local_3c8,lVar5 + 0x1730);
        bVar6 = local_358 != 0;
        if (local_70 == '\x01') {
          local_70 = '\0';
        }
        if (local_a8 == '\x01') {
          local_a8 = '\0';
        }
        if (local_118 == '\x01') {
          local_118 = '\0';
        }
        if (local_148 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_148 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_148)(local_148);
            LOCK();
            piVar2 = (int *)((longlong)local_148 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_148 + 0x10))(local_148);
            }
          }
        }
        if (local_2b8 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_2b8 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_2b8)(local_2b8);
            LOCK();
            piVar2 = (int *)((longlong)local_2b8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_2b8 + 0x10))(local_2b8);
            }
          }
        }
        if ((local_2f8 == '\x01') && (local_308 != 0)) {
          FUN_1400020a8();
        }
      }
      if ((bVar6) || (0.5 < fVar9 - fVar7)) {
        *(undefined1 *)((longlong)param_1 + 0x12d) = 0;
        FUN_14583aca6(param_1);
        if ((*(char *)((longlong)param_1 + 0x12e) == '\0') && (param_1[0x16] != 0)) {
          FUN_1407ab98c(param_1[0x16],0,0);
        }
        FUN_140671132(param_1);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14423fe7c FUN_14423fe7c body=310 status=ok
// SIG undefined FUN_14423fe7c(void)

void FUN_14423fe7c(undefined8 param_1,longlong param_2,char param_3)

{
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if (param_3 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144240138 FUN_144240138 body=307 status=ok
// SIG undefined FUN_144240138(void)

undefined8 * FUN_144240138(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_3 == 0) {
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
    plVar1 = DAT_14c844840;
    *param_2 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_2 + 1) = DAT_14c844848;
  }
  else {
    local_40 = &local_28;
    local_28 = 0;
    uStack_20 = 0;
    local_48 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    FUN_1467d09ac(param_2,param_3,1,2);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144240dc7 FUN_144240dc7 body=41 status=ok
// SIG undefined FUN_144240dc7(void)

void FUN_144240dc7(void)

{
  DAT_14cbd5670 = 0;
  if (DAT_14cbd5668 != 0) {
    FUN_1400020a8();
  }
  FUN_1462363e2();
  return;
}



// FUNCTION 144240dfe FUN_144240dfe body=6 status=ok
// SIG undefined FUN_144240dfe(void)

byte FUN_144240dfe(longlong param_1)

{
  return *(byte *)(param_1 + 0x10) & 1;
}



// FUNCTION 144240e04 FUN_144240e04 body=9 status=ok
// SIG undefined FUN_144240e04(void)

byte FUN_144240e04(longlong param_1)

{
  return (*(byte *)(param_1 + 0x18) & 4) >> 2;
}



// FUNCTION 144240e0e FUN_144240e0e body=9 status=ok
// SIG undefined FUN_144240e0e(void)

byte FUN_144240e0e(longlong param_1)

{
  return (*(byte *)(param_1 + 0x18) & 8) >> 3;
}



// FUNCTION 144240e18 FUN_144240e18 body=1440 status=ok
// SIG undefined FUN_144240e18(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144240e18(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  uint uVar14;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_7c [4];
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  int local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) != 0)) {
    if ((*pbVar1 & 2) == 0) {
      plVar10 = &DAT_14c9a1288;
    }
    else {
      plVar10 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    local_78 = 0;
    FUN_14052b5e0(local_7c,"sort_settings_list",0);
    FUN_1448075d0(&local_70,local_7c);
    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
      plVar6 = plVar10 + 8;
      if ((longlong *)plVar10[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar10[9];
      }
      iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar10[10] - 1U & local_70) * 4);
      if (iVar5 != -1) {
        do {
          lVar12 = *plVar10 + (longlong)iVar5 * 0x40;
          if (*(uint *)(*plVar10 + (longlong)iVar5 * 0x40) == local_70) {
            if (lVar12 != 0) {
              if (local_58 != 0) {
                FUN_1400020a8();
              }
              if ((undefined8 *)(lVar12 + 0x28) != (undefined8 *)0x0) {
                pbVar1 = *(byte **)(lVar12 + 0x28);
                puVar4 = &DAT_14c9a1270;
                if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
                  puVar4 = *(undefined8 **)(pbVar1 + 8);
                }
                if ((longlong)*(int *)(puVar4 + 2) != 0) {
                  puVar11 = (undefined8 *)*puVar4;
                  puVar4 = puVar11 + (longlong)*(int *)(puVar4 + 2) * 2;
                  do {
                    if (((byte *)*puVar11 != (byte *)0x0) && ((~*(byte *)*puVar11 & 3) == 0)) {
                      local_88 = DAT_14cbd56ac;
                      local_80 = DAT_14cbd56b4;
                      FUN_1448075d0(&local_70);
                      pbVar1 = (byte *)*puVar11;
                      if (pbVar1 != (byte *)0x0) {
                        plVar10 = &DAT_14c9a1288;
                        if ((*pbVar1 & 2) != 0) {
                          plVar10 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
                        }
                        if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
                          plVar6 = plVar10 + 8;
                          if ((longlong *)plVar10[9] != (longlong *)0x0) {
                            plVar6 = (longlong *)plVar10[9];
                          }
                          iVar5 = *(int *)((longlong)plVar6 +
                                          (ulonglong)((int)plVar10[10] - 1U & local_70) * 4);
                          if (iVar5 != -1) {
                            do {
                              if (*(uint *)(*plVar10 + (longlong)iVar5 * 0x40) == local_70) break;
                              iVar5 = *(int *)(*plVar10 + (longlong)iVar5 * 0x40 + 0x38);
                            } while (iVar5 != -1);
                          }
                        }
                      }
                      if (local_58 != 0) {
                        FUN_1400020a8();
                      }
                      FUN_1400b22c2(&local_70);
                      uVar7 = 0;
                      iVar5 = local_68 + -1;
                      if (local_68 == 0) {
                        iVar5 = 0;
                      }
                      if (0 < iVar5) {
                        puVar13 = &DAT_149dfb77a;
                        if (local_68 != 0) {
                          puVar13 = (undefined2 *)CONCAT44(uStack_6c,local_70);
                        }
                        lVar12 = 0;
                        uVar7 = 0;
                        do {
                          uVar3 = ((uint)(ushort)puVar13[lVar12] +
                                  (uint)(0x19 < (ushort)puVar13[lVar12] - 0x61) * 0x20) - 0x20;
                          uVar14 = (uint)(uVar7 >> 8) ^
                                   *(uint *)(&DAT_14c75d150 +
                                            (ulonglong)(((uint)uVar7 ^ uVar3) & 0xff) * 4);
                          uVar7 = (ulonglong)
                                  (uVar14 >> 8 ^
                                  *(uint *)(&DAT_14c75d150 +
                                           (ulonglong)(uVar14 & 0xff ^ uVar3 >> 8 & 0xff) * 4));
                          lVar12 = lVar12 + 1;
                        } while (iVar5 != (int)lVar12);
                      }
                      local_c0 = (longlong *)FUN_148e2243e(param_1,uVar7,&local_70);
                      if (CONCAT44(uStack_6c,local_70) != 0) {
                        FUN_1400020a8();
                      }
                      local_a8 = DAT_14cbd56b8;
                      local_a0 = DAT_14cbd56c0;
                      FUN_1448075d0(&local_70,&local_a8);
                      pbVar1 = (byte *)*puVar11;
                      plVar10 = &DAT_14c9a1308;
                      if (pbVar1 != (byte *)0x0) {
                        plVar6 = &DAT_14c9a1288;
                        if ((*pbVar1 & 2) != 0) {
                          plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
                        }
                        if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
                          plVar9 = plVar6 + 8;
                          if ((longlong *)plVar6[9] != (longlong *)0x0) {
                            plVar9 = (longlong *)plVar6[9];
                          }
                          iVar5 = *(int *)((longlong)plVar9 +
                                          (ulonglong)((int)plVar6[10] - 1U & local_70) * 4);
                          if (iVar5 != -1) {
                            do {
                              lVar12 = *plVar6 + (longlong)iVar5 * 0x40;
                              if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == local_70) {
                                plVar10 = &DAT_14c9a1308;
                                if (lVar12 == 0) goto LAB_1442411bc;
                                plVar6 = (longlong *)(lVar12 + 0x28);
                                plVar10 = &DAT_14c9a1308;
                                if ((plVar6 == (longlong *)0x0) ||
                                   (((byte *)*plVar6 != (byte *)0x0 &&
                                    (plVar10 = plVar6, (*(byte *)*plVar6 & 0x40) == 0))))
                                goto LAB_1442411bc;
                                break;
                              }
                              iVar5 = *(int *)(lVar12 + 0x38);
                            } while (iVar5 != -1);
                            plVar10 = &DAT_14c9a1308;
                          }
                        }
                      }
LAB_1442411bc:
                      pbVar1 = (byte *)*plVar10;
                      if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
                        uVar8 = 0;
                      }
                      else {
                        uVar8 = *(undefined8 *)(pbVar1 + 8);
                      }
                      FUN_1400b22c2(&local_98,uVar8);
                      if (local_c0 == &local_98) {
                        if (local_98 != 0) {
                          FUN_1400020a8();
                        }
                      }
                      else {
                        if (*local_c0 != 0) {
                          FUN_1400020a8();
                        }
                        *local_c0 = local_98;
                        local_98 = 0;
                        *(undefined4 *)(local_c0 + 1) = (undefined4)local_90;
                        *(undefined4 *)((longlong)local_c0 + 0xc) = local_90._4_4_;
                        local_90 = 0;
                      }
                      if (local_58 != 0) {
                        FUN_1400020a8();
                      }
                      local_b8 = DAT_14cbd56a0;
                      local_b0 = DAT_14cbd56a8;
                      FUN_1448075d0(&local_70,&local_b8);
                      pbVar1 = (byte *)*puVar11;
                      plVar10 = &DAT_14c9a1308;
                      if (pbVar1 != (byte *)0x0) {
                        plVar6 = &DAT_14c9a1288;
                        if ((*pbVar1 & 2) != 0) {
                          plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
                        }
                        if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
                          plVar9 = plVar6 + 8;
                          if ((longlong *)plVar6[9] != (longlong *)0x0) {
                            plVar9 = (longlong *)plVar6[9];
                          }
                          iVar5 = *(int *)((longlong)plVar9 +
                                          (ulonglong)((int)plVar6[10] - 1U & local_70) * 4);
                          if (iVar5 != -1) {
                            do {
                              lVar12 = *plVar6 + (longlong)iVar5 * 0x40;
                              if (*(uint *)(*plVar6 + (longlong)iVar5 * 0x40) == local_70) {
                                plVar10 = &DAT_14c9a1308;
                                if (lVar12 == 0) goto LAB_144241317;
                                plVar6 = (longlong *)(lVar12 + 0x28);
                                plVar10 = &DAT_14c9a1308;
                                if ((plVar6 == (longlong *)0x0) ||
                                   (((byte *)*plVar6 != (byte *)0x0 &&
                                    (plVar10 = plVar6, (*(byte *)*plVar6 & 0x40) == 0))))
                                goto LAB_144241317;
                                break;
                              }
                              iVar5 = *(int *)(lVar12 + 0x38);
                            } while (iVar5 != -1);
                            plVar10 = &DAT_14c9a1308;
                          }
                        }
                      }
LAB_144241317:
                      if (*plVar10 == 0) {
                        uVar2 = 0;
                      }
                      else {
                        uVar2 = FUN_14000584e(*plVar10,0);
                      }
                      *(undefined1 *)(local_c0 + 2) = uVar2;
                      if (local_58 != 0) {
                        FUN_1400020a8();
                      }
                    }
                    puVar11 = puVar11 + 2;
                  } while (puVar11 != puVar4);
                }
              }
              goto LAB_14424136e;
            }
            break;
          }
          iVar5 = *(int *)(lVar12 + 0x38);
        } while (iVar5 != -1);
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
LAB_14424136e:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442413ba FUN_1442413ba body=1865 status=ok
// SIG undefined FUN_1442413ba(void)

void FUN_1442413ba(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  wchar_t *pwVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  ulonglong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  uint *local_1b0;
  undefined1 local_1a4 [4];
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  byte *local_168;
  longlong *plStack_160;
  longlong local_158;
  longlong *plStack_150;
  undefined4 local_13c;
  longlong **local_138;
  undefined4 *local_130;
  int local_124;
  longlong *local_120;
  int *local_118;
  longlong local_108;
  longlong local_f8;
  longlong *plStack_f0;
  longlong local_e0;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_f8 = 0;
  plStack_f0 = (longlong *)0x0;
  FUN_14009b010(&local_f8,3,0);
  if (param_3 != &DAT_14c9a1308) {
    if (plStack_f0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_3[1];
    *param_3 = local_f8;
    param_3[1] = (longlong)plStack_f0;
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
  }
  plVar5 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  local_158 = 0;
  plStack_150 = (longlong *)0x0;
  uVar20 = 0;
  FUN_14009b010(&local_158,2,0);
  uVar4 = *(uint *)(param_1 + 5);
  local_1b8 = param_3;
  if (uVar4 == 0) {
    uVar13 = 1;
    iVar14 = 0;
    uVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar14 = uVar4 + 0x1e;
      if (-1 < (int)(uVar4 - 1)) {
        iVar14 = uVar4 - 1;
      }
      uVar20 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar20;
      }
      iVar14 = 0;
      do {
        if (uVar13 == uVar20) goto LAB_14424151f;
        iVar14 = iVar14 + 0x20;
        uVar7 = puVar8[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar20 = 0;
      iVar14 = 0;
    }
    uVar13 = (ulonglong)(-uVar7 & uVar7);
    uVar3 = uVar13 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar7 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if ((int)uVar4 <= (int)uVar7) {
      uVar7 = uVar4;
    }
  }
  if (uVar7 != uVar4) {
    uVar15 = 0xffffffff;
    local_1c8 = (ulonglong)uVar4;
    local_1c0 = param_1;
    local_1b0 = (uint *)(param_1 + 2);
    do {
      lVar16 = *param_1;
      plVar5 = (longlong *)((longlong)(int)uVar7 * 0x50 + lVar16);
      local_168 = (byte *)0x0;
      plStack_160 = (longlong *)0x0;
      FUN_14009b010(&local_168,3,0);
      if (*(int *)(lVar16 + 8 + (longlong)(int)uVar7 * 0x50) == 0) {
        pwVar18 = L"";
LAB_144241683:
        local_78 = 0;
        sVar9 = wcslen(pwVar18);
        FUN_1449b853c(&local_f8,pwVar18,sVar9 & 0xffffffff,1);
      }
      else {
        pwVar18 = (wchar_t *)*plVar5;
        local_78 = 0;
        if (pwVar18 != (wchar_t *)0x0) goto LAB_144241683;
        local_70 = 0;
        local_68 = 0;
      }
      uVar6 = local_70;
      local_178 = DAT_14cbd56ac;
      local_170 = DAT_14cbd56b4;
      FUN_1448075d0(&local_120,&local_178);
      if ((local_168 != (byte *)0x0) && ((~*local_168 & 3) == 0)) {
        lVar16 = *(longlong *)(local_168 + 8);
        local_13c = 1;
        local_130 = &local_13c;
        local_138 = &local_120;
        FUN_14049fede(lVar16 + 0x18,&local_124,&local_138,0);
        lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x28 + (longlong)local_124 * 0x40);
        if ((lVar16 != 0) && ((*(byte *)(lVar16 + 1) & 2) == 0)) {
          FUN_140126aca(lVar16,uVar6);
        }
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if ((int)plVar5[3] == 0) {
        pwVar18 = L"";
LAB_1442417ca:
        local_78 = 0;
        sVar9 = wcslen(pwVar18);
        FUN_1449b853c(&local_f8,pwVar18,sVar9 & 0xffffffff,1);
      }
      else {
        pwVar18 = (wchar_t *)plVar5[2];
        local_78 = 0;
        if (pwVar18 != (wchar_t *)0x0) goto LAB_1442417ca;
        local_70 = 0;
        local_68 = 0;
      }
      uVar6 = local_70;
      local_188 = DAT_14cbd56b8;
      local_180 = DAT_14cbd56c0;
      FUN_1448075d0(&local_120,&local_188);
      if ((local_168 != (byte *)0x0) && ((~*local_168 & 3) == 0)) {
        lVar16 = *(longlong *)(local_168 + 8);
        local_13c = 1;
        local_130 = &local_13c;
        local_138 = &local_120;
        FUN_14049fede(lVar16 + 0x18,&local_124,&local_138,0);
        lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x18) + 0x28 + (longlong)local_124 * 0x40);
        if ((lVar16 != 0) && ((*(byte *)(lVar16 + 1) & 2) == 0)) {
          FUN_140126aca(lVar16,uVar6);
        }
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      local_198 = DAT_14cbd56a0;
      local_190 = DAT_14cbd56a8;
      FUN_1448075d0(&local_f8,&local_198);
      if ((local_168 != (byte *)0x0) && ((~*local_168 & 3) == 0)) {
        lVar16 = *(longlong *)(local_168 + 8);
        local_124 = 1;
        local_120 = &local_f8;
        local_118 = &local_124;
        FUN_14049fede(lVar16 + 0x18,&local_138,&local_120,0);
        lVar16 = *(longlong *)
                  (*(longlong *)(lVar16 + 0x18) + 0x28 + (longlong)(int)local_138 * 0x40);
        if ((lVar16 != 0) && ((*(byte *)(lVar16 + 1) & 2) == 0)) {
          pcVar12 = "false";
          if ((char)plVar5[4] != '\0') {
            pcVar12 = "true";
          }
          FUN_140126aca(lVar16,pcVar12);
        }
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      param_1 = local_1c0;
      if (local_158 != 0) {
        local_1d8 = 0;
        FUN_140141db6(local_158,&local_168,0,0);
      }
      plVar5 = plStack_160;
      if (plStack_160 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_160 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_160)(plStack_160);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = local_1b0;
      }
      uVar4 = *(uint *)(param_1 + 5);
      iVar19 = (int)uVar20;
      lVar16 = (longlong)iVar19;
      uVar7 = puVar8[lVar16] & uVar15;
      if (uVar7 == 0) {
        iVar10 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar10 = uVar4 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar19) {
          iVar11 = iVar19;
        }
        if (iVar19 < iVar10) {
          lVar17 = 0;
          do {
            uVar7 = puVar8[lVar16 + lVar17 + 1];
            if (uVar7 != 0) {
              uVar20 = (ulonglong)(iVar19 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
              goto LAB_144241a6c;
            }
            iVar14 = iVar14 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar11 - lVar16 != lVar17);
          uVar15 = 0xffffffff;
          iVar19 = iVar11;
        }
        uVar20 = (ulonglong)(iVar19 + 1);
        param_1 = local_1c0;
        uVar7 = uVar4;
      }
      else {
LAB_144241a6c:
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar3 = uVar13 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        uVar7 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar7) {
          uVar7 = uVar4;
        }
      }
    } while (uVar7 != (uint)local_1c8);
  }
LAB_14424151f:
  local_1a0 = 0;
  FUN_14052b5e0(local_1a4,"sort_settings_list",0);
  FUN_1448075d0(&local_f8,local_1a4);
  if (*local_1b8 != 0) {
    local_1d8 = 0;
    FUN_14014191c(*local_1b8,&local_f8,&local_158,0);
  }
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  plVar5 = plStack_150;
  if (plStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_150)(plStack_150);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144241b04 FUN_144241b04 body=69 status=ok
// SIG undefined FUN_144241b04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144241b04(void)

{
  _DAT_14cbd56c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144241b46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd56d0,1);
  return;
}



// FUNCTION 144241b49 FUN_144241b49 body=69 status=ok
// SIG undefined FUN_144241b49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144241b49(void)

{
  _DAT_14cbd56e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144241b8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd56e8,1);
  return;
}



// FUNCTION 144241b8e FUN_144241b8e body=69 status=ok
// SIG undefined FUN_144241b8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144241b8e(void)

{
  _DAT_14cbd56f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144241bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd5700,1);
  return;
}



// FUNCTION 144241bd3 FUN_144241bd3 body=69 status=ok
// SIG undefined FUN_144241bd3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144241bd3(void)

{
  _DAT_14cbd5708 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144241c15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd5710,1);
  return;
}



// FUNCTION 144241cc2 FUN_144241cc2 body=49 status=ok
// SIG undefined FUN_144241cc2(void)

void FUN_144241cc2(void)

{
  FUN_1447a1747(DAT_14cbd57c8,DAT_14cbd57d0);
  if (DAT_14cbd57c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144241cf4 FUN_144241cf4 body=940 status=ok
// SIG undefined FUN_144241cf4(void)

void FUN_144241cf4(longlong param_1,ulonglong *param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  byte bVar6;
  longlong *plVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_148 [44];
  undefined4 local_11c;
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 *local_d8;
  ulonglong *local_d0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  undefined4 local_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_88;
  ulonglong local_80 [2];
  undefined4 local_70;
  undefined4 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(ulonglong *)(param_1 + 0x38) = *param_2;
  *(ulonglong *)(param_1 + 0x40) = param_2[1];
  cVar2 = *(char *)((longlong)param_2 + 0x11);
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfb | cVar2 * '\x04';
  if (cVar2 == '\0') {
    uVar5 = (undefined1)param_2[2];
  }
  else {
    uVar5 = *(undefined1 *)(param_1 + 0x58);
  }
  *(undefined1 *)(param_1 + 0x60) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (param_2[1] != 0) {
    *(float *)(param_1 + 0x48) = (float)*param_2 / (float)param_2[1];
  }
  if (*(int *)(param_1 + 0x58) == 0) {
    FUN_140056680(local_b8,L"DESIGNER FIXME - Challenges must have at least 1 tier");
    FUN_140233b1a(&local_88,local_b8);
    FUN_140008f88(param_1 + 0x28,&local_88);
    if ((longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88) != (longlong *)0x0) {
      (**(code **)(*(longlong *)CONCAT44(local_88._4_4_,(undefined4)local_88) + 0x10))();
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar3 = *param_2;
    uVar4 = param_2[1];
    if (uVar3 != 0 || uVar4 != 0) {
      local_a8 = 0;
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_11c = param_4;
      FUN_1446ddda2(local_b8,"ChallengesProgressTextFormat",0);
      FUN_1410d1eba(local_118,local_b8);
      FUN_14023409e(&local_108,local_118,1);
      local_d8 = &local_88;
      local_88._0_4_ = 1;
      local_80[1] = 0;
      local_70 = 0;
      local_68 = 1;
      local_58 = 0;
      local_50 = 0;
      local_d0 = &local_48;
      local_80[0] = uVar3;
      local_60 = uVar4;
      FUN_14010d304(&local_c8);
      local_e8 = local_108;
      local_e0 = local_100;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_100 + 1) = (int)local_100[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(local_f8,&local_e8,&local_c8);
      FUN_14007f2db(local_c8,local_c0);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      param_4 = local_11c;
      lVar9 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_88 + lVar9) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_88 + lVar9) + 0x10))();
          *(undefined8 *)((longlong)&local_88 + lVar9) = 0;
          *(undefined4 *)((longlong)local_80 + lVar9) = 0;
        }
        lVar9 = lVar9 + -0x20;
      } while (lVar9 != -0x10);
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_100 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_100 + 0x10))(local_100);
          }
        }
      }
      FUN_140008f88(param_1 + 0x28,local_f8);
      if (local_f8[0] != (longlong *)0x0) {
        (**(code **)(*local_f8[0] + 0x10))();
      }
      if (local_118[0] != (longlong *)0x0) {
        (**(code **)(*local_118[0] + 0x10))();
      }
      if (local_a0 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar9 = *(longlong *)(param_1 + 0x50);
    lVar10 = (longlong)*(int *)(param_1 + 0x58) * 0x88;
    do {
      FUN_148e1b660(lVar9,param_2);
      lVar9 = lVar9 + 0x88;
      lVar10 = lVar10 + -0x88;
    } while (lVar10 != 0);
  }
  if ((param_3 != 0) &&
     (plVar7 = (longlong *)FUN_1403363fe(param_3,param_1), plVar7 != (longlong *)0x0)) {
    lVar9 = FUN_140d18446(param_3,param_4,plVar7);
    if (lVar9 == 0) {
      if (*plVar7 == 0) goto LAB_144242066;
      pcVar8 = (char *)(*plVar7 + 200);
    }
    else {
      pcVar8 = (char *)(lVar9 + 0x28);
    }
    if (*pcVar8 == '\x01') {
      bVar6 = 2;
      if ((((DAT_14cbd56d8 == '\0') && (*param_2 == 0)) &&
          ((*(byte *)((longlong)param_2 + 0x12) & 1) == 0)) && (*plVar7 != 0)) {
        bVar6 = (*(byte *)(*plVar7 + 0xc9) ^ 1) * '\x02';
      }
      goto LAB_144242068;
    }
  }
LAB_144242066:
  bVar6 = 0;
LAB_144242068:
  *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) & 0xfd | bVar6;
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442420a2 FUN_1442420a2 body=715 status=ok
// SIG undefined FUN_1442420a2(void)

ulonglong FUN_1442420a2(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  undefined2 *_Src;
  void *_Src_00;
  undefined2 *puVar6;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  
  if ((longlong)DAT_14cbd57d0 != 0) {
    iVar5 = *(int *)(param_2 + 1);
    _Src_00 = (void *)*param_2;
    plVar8 = DAT_14cbd57c8;
LAB_1442421a9:
    if ((int)plVar8[1] == iVar5) {
      if (1 < iVar5) {
        lVar9 = 0;
        do {
          uVar3 = *(ushort *)(*plVar8 + lVar9);
          uVar11 = (uint)uVar3;
          uVar4 = *(ushort *)((longlong)_Src_00 + lVar9);
          unaff_RBP = (ulonglong)uVar4;
          if (uVar3 == uVar4) {
            if (uVar3 == 0) break;
          }
          else {
            if (0x7f < (uVar4 | uVar3)) goto LAB_14424220e;
            uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            unaff_RBP = (ulonglong)(byte)(&DAT_149e05da0)[uVar4];
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[uVar4]) goto LAB_14424220e;
          }
          lVar9 = lVar9 + 2;
        } while( true );
      }
      goto LAB_144242216;
    }
    if ((int)plVar8[1] + iVar5 == 1) goto LAB_144242216;
    goto LAB_1442421bb;
  }
LAB_1442420be:
  if (DAT_14c764084 == '\x01') {
    iVar5 = *(int *)(param_2 + 1);
    _Src = (undefined2 *)*param_2;
    puVar6 = &DAT_149dfb77a;
    if ((longlong)iVar5 != 0) {
      puVar6 = _Src;
    }
    lVar9 = 0;
    do {
      uVar3 = puVar6[lVar9];
      bVar2 = (&DAT_149e02088)[lVar9];
      iVar10 = (uint)uVar3 - (uint)bVar2;
      if (iVar10 == 0) {
        if (uVar3 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_144242132;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_14424212f;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
  goto LAB_14424235c;
LAB_14424220e:
  if (uVar11 == (uint)unaff_RBP) {
LAB_144242216:
    lVar9 = *(longlong *)(param_1 + 8);
    puVar1 = (undefined8 *)(lVar9 + 0x68);
    uVar7 = CONCAT71((int7)(unaff_RBP >> 8),1);
    if (puVar1 != param_2) {
      *(int *)(lVar9 + 0x70) = iVar5;
      if (*(int *)(lVar9 + 0x74) == 0 && iVar5 == 0) {
        *(undefined4 *)(lVar9 + 0x74) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar5);
        if (iVar5 != 0) {
          memcpy((void *)*puVar1,_Src_00,(longlong)iVar5 * 2);
        }
      }
    }
    goto LAB_14424235e;
  }
LAB_1442421bb:
  plVar8 = plVar8 + 2;
  if (plVar8 == DAT_14cbd57c8 + (longlong)DAT_14cbd57d0 * 2) goto LAB_1442420be;
  goto LAB_1442421a9;
LAB_14424212f:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144242132:
  if (iVar10 != 0) {
    lVar9 = 0;
    do {
      uVar3 = puVar6[lVar9];
      bVar2 = (&DAT_14b6bcef8)[lVar9];
      iVar10 = (uint)uVar3 - (uint)bVar2;
      if (iVar10 == 0) {
        if (uVar3 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_144242267;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_144242264;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
  goto LAB_14424235c;
LAB_144242264:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144242267:
  if (iVar10 != 0) {
    lVar9 = 0;
    do {
      uVar3 = puVar6[lVar9];
      bVar2 = "eridium"[lVar9];
      iVar10 = (uint)uVar3 - (uint)bVar2;
      if (iVar10 == 0) {
        if (uVar3 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_1442422bb;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_1442422b8;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
  goto LAB_14424235c;
LAB_144242308:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_14424230b:
  if (iVar10 != 0) {
    lVar9 = *(longlong *)(param_1 + 8);
    puVar1 = (undefined8 *)(lVar9 + 0x68);
    if (puVar1 != param_2) {
      *(int *)(lVar9 + 0x70) = iVar5;
      if (*(int *)(lVar9 + 0x74) == 0 && iVar5 == 0) {
        *(undefined4 *)(lVar9 + 0x74) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar5);
        if (iVar5 != 0) {
          memcpy((void *)*puVar1,_Src,(longlong)iVar5 * 2);
        }
      }
    }
  }
  goto LAB_14424235c;
LAB_1442422b8:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_1442422bb:
  if (iVar10 != 0) {
    lVar9 = 0;
    do {
      uVar3 = puVar6[lVar9];
      bVar2 = "experience"[lVar9];
      iVar10 = (uint)uVar3 - (uint)bVar2;
      if (iVar10 == 0) {
        if (uVar3 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_14424230b;
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto LAB_144242308;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
LAB_14424235c:
  uVar7 = 0;
LAB_14424235e:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14424236e FUN_14424236e body=327 status=ok
// SIG undefined FUN_14424236e(void)

undefined8 * FUN_14424236e(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = (longlong *)0x0;
  uStack_50 = 0;
  if (param_2 != 0) {
    lVar3 = FUN_1418a5c14(param_2);
    if ((lVar3 == 0) || (*(char *)(lVar3 + 0x50) != '\x01')) {
      plVar4 = (longlong *)FUN_140c520a2(param_2);
      if ((plVar4 != (longlong *)0x0) && ((longlong)(int)plVar4[1] != 0)) {
        lVar3 = *plVar4;
        lVar5 = (longlong)(int)plVar4[1] * 0x18;
        do {
          FUN_148e23bde(lVar3,&local_68);
          if (local_68 != 0) {
            local_70 = FUN_144208ef0();
            FUN_148e23c32(&local_58,&local_70);
          }
          plVar4 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          lVar3 = lVar3 + 0x18;
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
    }
    else {
      uStack_50 = CONCAT44(uStack_50._4_4_,1);
      FUN_148949e02(&local_58,0);
      *local_58 = lVar3;
    }
  }
  *param_1 = local_58;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_50._4_4_;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1442424b6 FUN_1442424b6 body=162 status=ok
// SIG undefined FUN_1442424b6(void)

bool FUN_1442424b6(longlong param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  bool bVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1f8) == 0) {
    bVar4 = false;
  }
  else {
    puVar1 = *(undefined4 **)(*(longlong *)(param_1 + 0x1f8) + 8);
    puVar3 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = puVar1;
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,&local_28,puVar3,1);
    bVar4 = local_28 != 0;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424255a FUN_14424255a body=121 status=ok
// SIG undefined FUN_14424255a(void)

undefined8 FUN_14424255a(longlong param_1,ulonglong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  
  uVar4 = *(uint *)(param_1 + 0x208);
  uVar3 = (ulonglong)uVar4;
  if ((int)uVar4 < 2) {
    return 0;
  }
  if (uVar4 == (uint)param_2[1]) {
    uVar3 = *param_2;
    lVar6 = 0;
    while( true ) {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x200) + lVar6);
      uVar4 = (uint)uVar1;
      uVar2 = *(ushort *)(uVar3 + lVar6);
      uVar7 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_144242599;
        }
        iVar5 = uVar4 - uVar7;
        goto LAB_1442425cd;
      }
      if (uVar1 == 0) break;
LAB_144242599:
      lVar6 = lVar6 + 2;
    }
    iVar5 = 0;
LAB_1442425cd:
    bVar8 = iVar5 == 0;
  }
  else {
    bVar8 = (uint)param_2[1] + uVar4 == 1;
  }
  return CONCAT71((int7)(uVar3 >> 8),bVar8);
}



// FUNCTION 1442425d4 FUN_1442425d4 body=4156 status=ok
// SIG undefined FUN_1442425d4(void)

void FUN_1442425d4(longlong param_1,undefined8 param_2,longlong **param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  void *_Src;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  undefined4 *puVar17;
  longlong lVar18;
  longlong **pplVar19;
  uint uVar20;
  ushort uVar21;
  uint uVar22;
  ulonglong uVar23;
  ushort uVar24;
  longlong *plVar25;
  longlong *plVar26;
  longlong **pplVar27;
  undefined8 *puVar28;
  bool bVar29;
  undefined1 auStack_278 [32];
  longlong *local_258;
  longlong *local_250;
  longlong *local_248;
  longlong **local_240;
  longlong **local_238;
  longlong local_230;
  longlong local_228;
  longlong *local_220;
  longlong *local_218;
  longlong *local_210;
  longlong local_208;
  longlong local_200;
  undefined8 local_1f8;
  ulonglong local_1f0;
  void *local_1e8;
  int local_1e0;
  undefined4 local_1dc;
  longlong *local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c4 [12];
  longlong *local_1b8 [2];
  undefined8 local_1a8;
  longlong *local_1a0;
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *local_180;
  undefined4 *local_178;
  ulonglong *local_170;
  undefined2 *local_168;
  int local_160;
  longlong *local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  longlong local_140;
  undefined8 uStack_138;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_278;
  FUN_1400b22c2(&local_158,&DAT_149e02088);
  pplVar27 = (longlong **)(param_1 + 0x200);
  if (pplVar27 == &local_158) {
    if (local_158 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x200) != 0) {
      FUN_1400020a8();
    }
    *(longlong **)(param_1 + 0x200) = local_158;
    local_158 = (longlong *)0x0;
    *(undefined4 *)(param_1 + 0x208) = (undefined4)uStack_150;
    *(undefined4 *)(param_1 + 0x20c) = uStack_150._4_4_;
  }
  FUN_1401533ba(local_1c4,param_2);
  FUN_1448075d0(&local_158,local_1c4);
  if (DAT_14cbe4798 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = FUN_144815d88(DAT_14cbe4798,&local_158);
  }
  *(longlong *)(param_1 + 0x1f8) = lVar7;
  if (local_140 != 0) {
    FUN_1400020a8();
    lVar7 = *(longlong *)(param_1 + 0x1f8);
  }
  if (lVar7 != 0) {
    local_1e8 = (void *)0x0;
    local_1e0 = *(int *)(param_3 + 1);
    lVar13 = (longlong)local_1e0;
    plVar25 = *param_3;
    local_240 = pplVar27;
    local_238 = param_3;
    if (lVar13 == 0) {
      local_1dc = 0;
    }
    else {
      FUN_1446dd670(&local_1e8,local_1e0,0);
      memcpy(local_1e8,plVar25,lVar13 * 2);
    }
    local_1d8 = (longlong *)0x0;
    uStack_1d0 = 0;
    if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
      lVar13 = *(longlong *)(lVar7 + 0x18);
      lVar7 = (longlong)*(int *)(lVar7 + 0x20) * 0x68 + lVar13;
      do {
        uVar15 = uStack_1d0;
        iVar16 = *(int *)(lVar13 + 0x38);
        if (iVar16 < 2) {
LAB_144243546:
          lVar8 = (longlong)(int)uStack_1d0;
          uVar6 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar6);
          if (uStack_1d0._4_4_ < uVar6) {
            FUN_1466381b2(&local_1d8,uVar15 & 0xffffffff);
          }
          FUN_141240d4a(local_1d8 + lVar8 * 0xd,lVar13);
        }
        else {
          if (local_1e0 == iVar16) {
            lVar8 = 0;
            while( true ) {
              uVar21 = *(ushort *)((longlong)local_1e8 + lVar8);
              uVar12 = (ulonglong)uVar21;
              uVar24 = *(ushort *)(*(longlong *)(lVar13 + 0x30) + lVar8);
              if (uVar21 != uVar24) break;
              if (uVar21 == 0) goto LAB_144243546;
LAB_1442435b6:
              lVar8 = lVar8 + 2;
            }
            if ((uVar24 | uVar21) < 0x80) {
              uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
              uVar23 = (ulonglong)uVar24;
              uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar23]) goto LAB_1442435b6;
            }
            if (uVar21 != uVar24) goto LAB_14424357a;
            goto LAB_144243546;
          }
          if (local_1e0 + iVar16 == 1) goto LAB_144243546;
        }
LAB_14424357a:
        lVar13 = lVar13 + 0x68;
      } while (lVar13 != lVar7);
    }
    if (local_1e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    iVar16 = 0;
    if ((longlong)(int)uStack_1d0 != 0) {
      lVar7 = 0;
      iVar16 = 0;
      do {
        iVar16 = iVar16 + *(int *)((longlong)local_1d8 + lVar7 + 0x48);
        lVar7 = lVar7 + 0x68;
      } while ((longlong)(int)uStack_1d0 * 0x68 - lVar7 != 0);
    }
    local_220 = (longlong *)(param_1 + 0xb8);
    FUN_145c5fbf2();
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
    local_218 = (longlong *)(param_1 + 0x1e8);
    FUN_145c8cc04(local_218,iVar16);
    if ((longlong)(int)uStack_1d0 != 0) {
      local_210 = local_1d8 + (longlong)(int)uStack_1d0 * 0xd;
      plVar25 = local_1d8;
      local_208 = param_1;
      local_1f8 = param_4;
      do {
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
        iVar16 = *(int *)(param_1 + 0xc0);
        *(uint *)(param_1 + 0xc0) = iVar16 + 1U;
        if (*(uint *)(param_1 + 0xc4) < iVar16 + 1U) {
          FUN_148e231c6(local_220,iVar16);
        }
        lVar7 = *local_220;
        lVar13 = (longlong)iVar16 * 0x70;
        plVar26 = (longlong *)(lVar7 + lVar13);
        FUN_14128f1f4(plVar26);
        FUN_148c4ecf0(lVar7 + lVar13 + 0x58,plVar25 + 10);
        puVar14 = (undefined8 *)(lVar13 + lVar7 + 0x10);
        if (plVar26 != plVar25) {
          iVar16 = (int)plVar25[3];
          _Src = (void *)plVar25[2];
          *(int *)(plVar26 + 3) = iVar16;
          if (iVar16 == 0 && *(int *)((longlong)plVar26 + 0x1c) == 0) {
            *(undefined4 *)((longlong)plVar26 + 0x1c) = 0;
          }
          else {
            FUN_1446dd670(puVar14,iVar16);
            if (iVar16 != 0) {
              memcpy((void *)*puVar14,_Src,(longlong)iVar16 * 2);
            }
          }
        }
        if ((int)plVar26[3] < 2) {
          FUN_14020fad6(puVar14,L"placeholder_icon");
        }
        plVar10 = (longlong *)*plVar25;
        plVar9 = (longlong *)*plVar26;
        if (plVar9 != plVar10) {
          *plVar26 = (longlong)plVar10;
          if (plVar10 != (longlong *)0x0) {
            (**(code **)(*plVar10 + 8))();
          }
          if (plVar9 != (longlong *)0x0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        *(int *)(plVar26 + 1) = (int)plVar25[1];
        puVar11 = &DAT_149dfb77a;
        if ((int)plVar25[5] != 0) {
          puVar11 = (undefined2 *)plVar25[4];
        }
        FUN_1446f470e(&local_158,puVar11,1);
        plVar26[4] = (longlong)local_158;
        local_248 = plVar25;
        if ((longlong)(int)plVar25[9] != 0) {
          puVar28 = (undefined8 *)plVar25[8];
          puVar14 = puVar28 + (longlong)(int)plVar25[9] * 3;
          do {
            iVar16 = (int)plVar26[10];
            lVar7 = (longlong)iVar16;
            *(uint *)(plVar26 + 10) = iVar16 + 1U;
            if (*(uint *)((longlong)plVar26 + 0x54) < iVar16 + 1U) {
              FUN_1418f469a(plVar26 + 9,iVar16);
            }
            lVar13 = plVar26[9];
            *(undefined8 *)(lVar13 + lVar7 * 0x18) = *puVar28;
            *(undefined4 *)(lVar13 + 8 + lVar7 * 0x18) = *(undefined4 *)(puVar28 + 1);
            *(undefined8 *)(lVar13 + 0x10 + lVar7 * 0x18) = 0;
            puVar28 = puVar28 + 3;
          } while (puVar28 != puVar14);
        }
        *(byte *)((longlong)plVar26 + 0x42) =
             *(byte *)((longlong)plVar26 + 0x42) & 0xbf | ((int)plVar26[10] == 0) << 6;
        pplVar19 = local_238;
        plVar25 = local_248;
        pplVar27 = local_240;
        if ((longlong)(int)local_248[9] != 0) {
          local_230 = local_248[8];
          local_200 = local_230 + (longlong)(int)local_248[9] * 0x18;
          do {
            iVar16 = *(int *)(param_1 + 0x1f0);
            uVar6 = iVar16 + 1;
            *(uint *)(param_1 + 0x1f0) = uVar6;
            if (*(uint *)(param_1 + 500) < uVar6) {
              FUN_148e23136(local_218);
            }
            plVar26 = (longlong *)((longlong)iVar16 * 0x70 + *local_218);
            thunk_FUN_140f0e60e(plVar26);
            lVar7 = FUN_1408d7900(local_230);
            if (lVar7 != 0) {
              puVar17 = *(undefined4 **)(lVar7 + 8);
              if (puVar17 == (undefined4 *)0x0) {
                puVar17 = &DAT_14c9485f0;
              }
              if (DAT_14c947fe0 == 0) {
                lVar13 = FUN_14001cc68(0x140,0x10);
                FUN_1456b2032(lVar13);
                DAT_14c947fe0 = lVar13;
              }
              FUN_140045924(DAT_14c947fe0,&local_158,puVar17,1);
              *plVar26 = (longlong)local_158;
              plVar25 = plVar26 + 1;
              plVar10 = *(longlong **)(lVar7 + 0x18);
              plVar9 = (longlong *)plVar26[1];
              if (plVar9 != plVar10) {
                *plVar25 = (longlong)plVar10;
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 8))();
                }
                if (plVar9 != (longlong *)0x0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
              *(undefined4 *)(plVar26 + 2) = *(undefined4 *)(lVar7 + 0x20);
              *(byte *)((longlong)plVar26 + 0x62) =
                   *(byte *)((longlong)plVar26 + 0x62) & 0xfe | *(byte *)(lVar7 + 0xc9);
              plVar10 = (longlong *)plVar26[1];
              if (*(code **)(*plVar10 + 0x50) != FUN_144828418) {
                plVar10 = (longlong *)(**(code **)(*plVar10 + 0x50))();
              }
              FUN_1447a1fc0(plVar10);
              plVar10 = (longlong *)*plVar25;
              pcVar4 = *(code **)(*plVar10 + 0x28);
              if (pcVar4 == FUN_14482841c) {
                plVar9 = plVar10 + 3;
                if (plVar10[5] != 0) {
                  plVar9 = (longlong *)(plVar10[5] + 8);
                }
              }
              else if (pcVar4 == (code *)&LAB_14010c34c) {
                plVar9 = plVar10 + 2;
              }
              else {
                plVar9 = (longlong *)(*pcVar4)(plVar10);
              }
              local_258 = plVar26;
              local_228 = lVar7;
              if ((int)plVar9[1] < 2) {
                FUN_1400021e4(plVar26,&local_168);
                puVar11 = &DAT_149dfb77a;
                if (local_160 != 0) {
                  puVar11 = local_168;
                }
                FUN_140002266(&local_80,L"DESIGNER FIXME - Missing Title - %s",puVar11);
                FUN_140233b1a(&local_158,&local_80);
                FUN_140008f88(plVar25,&local_158);
                if (local_158 != (longlong *)0x0) {
                  (**(code **)(*local_158 + 0x10))();
                }
                if (CONCAT44(uStack_7c,local_80) != 0) {
                  FUN_1400020a8();
                }
                if (local_168 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
              }
              lVar7 = local_228;
              plVar9 = local_258;
              plVar25 = local_258 + 3;
              plVar26 = *(longlong **)(local_228 + 0x28);
              plVar10 = (longlong *)local_258[3];
              if (plVar10 != plVar26) {
                *plVar25 = (longlong)plVar26;
                if (plVar26 != (longlong *)0x0) {
                  (**(code **)(*plVar26 + 8))();
                }
                if (plVar10 != (longlong *)0x0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
              *(undefined4 *)(plVar9 + 4) = *(undefined4 *)(lVar7 + 0x30);
              plVar26 = (longlong *)plVar9[3];
              if (*(code **)(*plVar26 + 0x50) != FUN_144828418) {
                plVar26 = (longlong *)(**(code **)(*plVar26 + 0x50))();
              }
              FUN_1447a1fc0(plVar26);
              plVar26 = (longlong *)*plVar25;
              pcVar4 = *(code **)(*plVar26 + 0x28);
              if (pcVar4 == FUN_14482841c) {
                plVar10 = plVar26 + 3;
                if (plVar26[5] != 0) {
                  plVar10 = (longlong *)(plVar26[5] + 8);
                }
              }
              else if (pcVar4 == (code *)&LAB_14010c34c) {
                plVar10 = plVar26 + 2;
              }
              else {
                plVar10 = (longlong *)(*pcVar4)(plVar26);
              }
              if ((int)plVar10[1] < 2) {
                FUN_1400021e4(plVar9,&local_168);
                puVar11 = &DAT_149dfb77a;
                if (local_160 != 0) {
                  puVar11 = local_168;
                }
                FUN_140002266(&local_80,L"DESIGNER FIXME - Missing Description - %s",puVar11);
                FUN_140233b1a(&local_158,&local_80);
                FUN_140008f88(plVar25,&local_158);
                if (local_158 != (longlong *)0x0) {
                  (**(code **)(*local_158 + 0x10))();
                }
                if (CONCAT44(uStack_7c,local_80) != 0) {
                  FUN_1400020a8();
                }
                plVar9 = local_258;
                lVar7 = local_228;
                if (local_168 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                  plVar9 = local_258;
                  lVar7 = local_228;
                }
              }
              plVar9[0xd] = lVar7;
              *(undefined1 *)((longlong)plVar9 + 0x61) = *(undefined1 *)(lVar7 + 0x4a0);
              iVar16 = *(int *)(lVar7 + 0x4a0);
              if (*(int *)(lVar7 + 0x4a0) <= (int)plVar9[0xb]) {
                iVar16 = (int)plVar9[0xb];
              }
              if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar16);
              }
              local_250 = plVar9 + 10;
              iVar3 = *(int *)((longlong)plVar9 + 0x5c);
              FUN_1407ddd8e(plVar9[10]);
              *(undefined4 *)(plVar9 + 0xb) = 0;
              if ((iVar3 < iVar16) && (*(int *)((longlong)plVar9 + 0x5c) != iVar16)) {
                FUN_1418f4546(local_250);
              }
              local_1f0 = (ulonglong)*(uint *)(lVar7 + 0x4a0);
              if (local_1f0 != 0) {
                uVar15 = 0;
LAB_144242c37:
                lVar13 = FUN_140b8683a(local_250);
                *(int *)(lVar13 + 0x84) = (int)uVar15;
                lVar8 = FUN_140c520a2(uVar15 * 0x50 + *(longlong *)(lVar7 + 0x498) + 0x10);
                if ((lVar8 != 0) && (*(int *)(lVar8 + 8) != 0)) {
                  FUN_140eeff10(&local_80,lVar8);
                  lVar8 = CONCAT44(uStack_7c,local_80);
                  if ((longlong)(int)local_78 != 0) {
                    lVar18 = (longlong)(int)local_78 * 0xe0;
                    lVar7 = lVar8;
                    do {
                      FUN_140c5254a(lVar7,&local_158);
                      FUN_140c71dec(lVar13 + 0x20,&local_158);
                      FUN_1407dde54(&local_158);
                      lVar7 = lVar7 + 0xe0;
                      lVar18 = lVar18 + -0xe0;
                    } while (lVar18 != 0);
                  }
                  plVar9 = local_258;
                  iVar16 = *(int *)(lVar13 + 0x18);
                  if (iVar16 == DAT_14cbd5048) {
                    bVar29 = true;
                    if (1 < iVar16) {
                      lVar7 = 0;
                      while( true ) {
                        uVar21 = *(ushort *)(*(longlong *)(lVar13 + 0x10) + lVar7);
                        uVar12 = (ulonglong)uVar21;
                        uVar24 = *(ushort *)(DAT_14cbd5040 + lVar7);
                        if (uVar21 != uVar24) break;
                        if (uVar21 == 0) goto LAB_144242d1e;
LAB_144242e5d:
                        lVar7 = lVar7 + 2;
                      }
                      if ((uVar24 | uVar21) < 0x80) {
                        uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                        uVar23 = (ulonglong)uVar24;
                        uVar24 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                        if ((&DAT_149e05da0)[uVar12] == (&DAT_149e05da0)[uVar23])
                        goto LAB_144242e5d;
                      }
                      if (uVar21 != uVar24) goto LAB_144242d08;
                    }
                  }
                  else if (DAT_14cbd5048 + iVar16 == 1) {
                    bVar29 = true;
                  }
                  else {
LAB_144242d08:
                    if (iVar16 == DAT_14cbd5058) {
                      bVar29 = true;
                      if (1 < iVar16) {
                        lVar7 = 0;
                        while( true ) {
                          uVar21 = *(ushort *)(*(longlong *)(lVar13 + 0x10) + lVar7);
                          uVar6 = (uint)uVar21;
                          uVar24 = *(ushort *)(DAT_14cbd5050 + lVar7);
                          uVar22 = (uint)uVar24;
                          if (uVar21 != uVar24) {
                            if ((uVar24 | uVar21) < 0x80) {
                              uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar21];
                              uVar22 = (uint)(byte)(&DAT_149e05da0)[uVar24];
                              if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[uVar24])
                              goto LAB_144242ed2;
                            }
                            iVar16 = uVar6 - uVar22;
                            goto LAB_144242f4b;
                          }
                          if (uVar21 == 0) break;
LAB_144242ed2:
                          lVar7 = lVar7 + 2;
                        }
                        iVar16 = 0;
LAB_144242f4b:
                        bVar29 = iVar16 == 0;
                      }
                    }
                    else {
                      bVar29 = DAT_14cbd5058 + iVar16 == 1;
                    }
                  }
LAB_144242d1e:
                  *(bool *)(lVar13 + 0x78) = bVar29;
                  local_158 = local_258;
                  uStack_150 = lVar13;
                  if ((longlong)*(int *)(lVar13 + 0x40) != 0) {
                    lVar7 = *(longlong *)(lVar13 + 0x38);
                    lVar18 = (longlong)*(int *)(lVar13 + 0x40) * 0xd8;
                    do {
                      lVar18 = lVar18 + -0xd8;
                      cVar5 = FUN_1442420a2(&local_158,lVar7);
                      if (cVar5 != '\0') break;
                      lVar7 = lVar7 + 0xd8;
                    } while (lVar18 != 0);
                  }
                  puVar11 = &DAT_149dfb77a;
                  if (*(int *)(lVar13 + 0x70) != 0) {
                    puVar11 = *(undefined2 **)(lVar13 + 0x68);
                  }
                  lVar7 = 0;
                  do {
                    uVar21 = puVar11[lVar7];
                    bVar2 = (&DAT_149e02088)[lVar7];
                    iVar16 = (uint)uVar21 - (uint)bVar2;
                    if (iVar16 == 0) {
                      if (uVar21 == 0) goto LAB_144242de1;
                    }
                    else {
                      if (0x7f < ((uint)bVar2 | (uint)uVar21)) goto LAB_144242ddd;
                      if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[bVar2]) goto LAB_144242dda;
                    }
                    lVar7 = lVar7 + 1;
                  } while( true );
                }
                goto LAB_144242e14;
              }
LAB_144242f5a:
              uVar6 = *(uint *)(plVar9 + 0xb);
              if ((ulonglong)uVar6 == 1) {
                *(byte *)(*local_250 + 0x80) = *(byte *)(*local_250 + 0x80) & 0xfe;
LAB_14424317a:
                pplVar19 = local_238;
                plVar25 = local_248;
                pplVar27 = local_240;
                if ((int)plVar9[0xb] != 0) goto LAB_144243190;
              }
              else if (uVar6 != 0) {
                lVar7 = 0;
                uVar15 = 1;
                do {
                  lVar13 = *local_250;
                  local_148 = 0;
                  local_158 = (longlong *)0x0;
                  uStack_150 = 0;
                  local_140 = 0;
                  uStack_138 = 0;
                  FUN_1446ddda2(&local_158,"ChallengesRankFormat",0);
                  FUN_1410d1eba(local_1b8,&local_158);
                  FUN_14023409e(&local_1a8,local_1b8,1);
                  local_80 = 0;
                  local_70 = (longlong *)0x0;
                  local_68 = 0;
                  local_178 = &local_80;
                  local_170 = local_60;
                  local_78 = uVar15;
                  FUN_14010d304(&local_168,&local_178);
                  local_188 = local_1a8;
                  local_180 = local_1a0;
                  if (local_1a0 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_1a0 + 1) = (int)local_1a0[1] + 1;
                    UNLOCK();
                  }
                  FUN_14010c016(local_198,&local_188);
                  FUN_14007f2db(local_168,local_160);
                  if (local_168 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  plVar9 = local_258;
                  if (local_70 != (longlong *)0x0) {
                    (**(code **)(*local_70 + 0x10))();
                  }
                  plVar25 = local_1a0;
                  if (local_1a0 != (longlong *)0x0) {
                    LOCK();
                    plVar26 = local_1a0 + 1;
                    *(int *)plVar26 = (int)*plVar26 + -1;
                    UNLOCK();
                    if ((int)*plVar26 == 0) {
                      (**(code **)*local_1a0)(local_1a0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar25 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar25 + 0x10))(plVar25);
                      }
                    }
                  }
                  FUN_140008f88(lVar13 + lVar7);
                  if (local_198[0] != (longlong *)0x0) {
                    (**(code **)(*local_198[0] + 0x10))();
                  }
                  if (local_1b8[0] != (longlong *)0x0) {
                    (**(code **)(*local_1b8[0] + 0x10))();
                  }
                  if (local_140 != 0) {
                    FUN_1400020a8();
                  }
                  lVar7 = lVar7 + 0x88;
                  bVar29 = uVar15 != uVar6;
                  uVar15 = uVar15 + 1;
                } while (bVar29);
                goto LAB_14424317a;
              }
              pplVar19 = local_238;
              pplVar27 = local_240;
              plVar25 = local_248;
              lVar7 = FUN_140b8683a(local_250);
              FUN_140056680(&local_80,L"DESIGNER FIXME - No Challenge Tiers");
              FUN_140233b1a(&local_158,&local_80);
              FUN_140008f88(lVar7);
              if (local_158 != (longlong *)0x0) {
                (**(code **)(*local_158 + 0x10))();
              }
              if (CONCAT44(uStack_7c,local_80) != 0) {
                FUN_1400020a8();
              }
              *(byte *)(lVar7 + 0x80) = *(byte *)(lVar7 + 0x80) | 1;
            }
LAB_144243190:
            local_230 = local_230 + 0x18;
            param_1 = local_208;
          } while (local_230 != local_200);
        }
        uVar6 = *(uint *)(pplVar19 + 1);
        if (1 < (int)uVar6) {
          if (*(uint *)(plVar25 + 7) == uVar6) {
            plVar26 = *pplVar19;
            lVar7 = 0;
            while( true ) {
              uVar21 = *(ushort *)(plVar25[6] + lVar7);
              uVar22 = (uint)uVar21;
              uVar24 = *(ushort *)((longlong)plVar26 + lVar7);
              uVar20 = (uint)uVar24;
              if (uVar21 != uVar24) {
                if ((uVar24 | uVar21) < 0x80) {
                  uVar22 = (uint)(byte)(&DAT_149e05da0)[uVar21];
                  uVar20 = (uint)(byte)(&DAT_149e05da0)[uVar24];
                  if ((&DAT_149e05da0)[uVar21] == (&DAT_149e05da0)[uVar24]) goto LAB_144243440;
                }
                iVar16 = uVar22 - uVar20;
                goto LAB_144243483;
              }
              if (uVar21 == 0) break;
LAB_144243440:
              lVar7 = lVar7 + 2;
            }
            iVar16 = 0;
LAB_144243483:
            if ((pplVar27 != pplVar19) && (iVar16 == 0)) {
LAB_14424348c:
              *(uint *)(param_1 + 0x208) = uVar6;
              FUN_1446dd670(pplVar27,uVar6,*(undefined4 *)(param_1 + 0x20c));
              memcpy(*(void **)(param_1 + 0x200),plVar26,(ulonglong)uVar6 * 2);
            }
          }
          else if ((pplVar27 != pplVar19) && (*(uint *)(plVar25 + 7) + uVar6 == 1)) {
            plVar26 = *pplVar19;
            goto LAB_14424348c;
          }
        }
        plVar25 = plVar25 + 0xd;
      } while (plVar25 != local_210);
    }
    FUN_140d078aa(param_1);
    FUN_141302908(local_1d8,uStack_1d0 & 0xffffffff);
    if (local_1d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60[0] ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144242dda:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar21] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_144242ddd:
  if (iVar16 == 0) {
LAB_144242de1:
    if ((longlong)*(int *)(lVar13 + 0x50) != 0) {
      lVar7 = *(longlong *)(lVar13 + 0x48);
      lVar13 = (longlong)*(int *)(lVar13 + 0x50) * 0xd8;
      do {
        lVar13 = lVar13 + -0xd8;
        cVar5 = FUN_1442420a2(&local_158,lVar7);
        if (cVar5 != '\0') break;
        lVar7 = lVar7 + 0xd8;
      } while (lVar13 != 0);
    }
  }
  FUN_14087acb9(lVar8);
  lVar7 = local_228;
  if (lVar8 != 0) {
    FUN_1400020a8(lVar8);
    lVar7 = local_228;
  }
LAB_144242e14:
  uVar15 = uVar15 + 1;
  if (uVar15 == local_1f0) goto LAB_144242f5a;
  goto LAB_144242c37;
}



// FUNCTION 144243612 FUN_144243612 body=266 status=ok
// SIG undefined FUN_144243612(void)

void FUN_144243612(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x32b8) == '\x01')) {
    lVar2 = *(longlong *)(param_1 + 0xb8);
    *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 2;
    iVar1 = *(int *)(param_1 + 0xc0);
    if ((longlong)iVar1 != 0) {
      lVar8 = 0;
      do {
        lVar6 = *(longlong *)(lVar2 + 0x60 + lVar8);
        if (lVar6 == 0) {
          uVar5 = FUN_14053b76c();
          lVar6 = FUN_14477b664(uVar5);
          *(longlong *)(lVar2 + 0x60 + lVar8) = lVar6;
        }
        lVar7 = *(longlong *)(lVar2 + 0x68 + lVar8);
        if (lVar7 == 0) {
          if ((lVar6 != 0) && (*(longlong *)(lVar2 + 0x58 + lVar8) != 0)) {
            plVar3 = *(longlong **)(lVar6 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
              *(undefined8 *)(lVar2 + 0x68 + lVar8) = 0;
            }
            else {
              uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar7 = FUN_144aff482(uVar5,lVar2 + 0x58 + lVar8);
              *(longlong *)(lVar2 + 0x68 + lVar8) = lVar7;
              if (lVar7 != 0) goto LAB_144243689;
            }
          }
        }
        else {
LAB_144243689:
          cVar4 = FUN_14125be1e(param_2,lVar7);
          *(byte *)(lVar2 + 0x42 + lVar8) = *(byte *)(lVar2 + 0x42 + lVar8) & 0x7f | cVar4 << 7;
        }
        lVar8 = lVar8 + 0x70;
      } while ((longlong)iVar1 * 0x70 - lVar8 != 0);
    }
  }
  return;
}



// FUNCTION 14424371c FUN_14424371c body=137 status=ok
// SIG undefined FUN_14424371c(void)

void FUN_14424371c(longlong param_1)

{
  int iVar1;
  
  FUN_148a01252();
  FUN_1459b304e(param_1);
  if (*(char *)(param_1 + 0x210) == '\x01') {
    if (*(int *)(param_1 + 0xd0) == -1) {
      if (*(int *)(param_1 + 0xd4) != 0) goto LAB_144243761;
      iVar1 = 1;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xd4) + 1;
    }
    *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
    *(int *)(param_1 + 0xd4) = iVar1;
  }
LAB_144243761:
  FUN_1442437a6(param_1);
  if (*(char *)(param_1 + 0x210) == '\x01') {
    FUN_148e1bef2(param_1,*(undefined4 *)(param_1 + 0xd0));
    *(undefined1 *)(param_1 + 0x210) = 0;
  }
  FUN_14424381e(param_1);
  FUN_1418f3dcc(param_1);
  return;
}



// FUNCTION 1442437a6 FUN_1442437a6 body=120 status=ok
// SIG undefined FUN_1442437a6(void)

undefined8 FUN_1442437a6(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xd0) == -1) {
    if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
      uVar2 = 0;
      do {
        if ((~*(byte *)(*(longlong *)(param_1 + 0xb8) + 0x42 + uVar2) & 0x82) == 0) {
          uVar1 = (int)(uVar2 >> 4) * -0x49249249;
          uVar2 = (ulonglong)uVar1;
          if (uVar1 != 0xffffffff) {
            iVar3 = *(int *)(param_1 + 0xd4) + 1;
            goto LAB_1442437f5;
          }
          break;
        }
        uVar2 = uVar2 + 0x70;
      } while ((longlong)*(int *)(param_1 + 0xc0) * 0x70 - uVar2 != 0);
    }
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar3 = 1;
      uVar2 = 0xffffffff;
LAB_1442437f5:
      *(int *)(param_1 + 0xd0) = (int)uVar2;
      *(int *)(param_1 + 0xd4) = iVar3;
      return CONCAT71((int7)(uVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14424381e FUN_14424381e body=620 status=ok
// SIG undefined FUN_14424381e(void)

void FUN_14424381e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined2 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  code *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = FUN_1459b3296();
  lVar3 = FUN_141427ed0(param_1);
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_80 = &local_68;
      local_68 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1459f2e4c;
      local_88 = &LAB_148c39de3;
      local_90 = &LAB_1457a9eb2;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (iVar1 = FUN_1408966e4(lVar3), iVar1 != -1 && lVar2 != 0)) {
      *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
      if ((longlong)*(int *)(param_1 + 0x1f0) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x1e8);
        plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x1f0) * 0xe;
        do {
          local_68 = (code *)0x0;
          uStack_60 = 0;
          uStack_5c = 0;
          uStack_58 = uStack_58 & 0xff000000;
          uStack_54 = 0xffffffff;
          plVar4 = (longlong *)FUN_1403363fe(lVar2,plVar8);
          if (plVar4 != (longlong *)0x0) {
            puVar5 = (undefined8 *)FUN_1403362f0(lVar2,iVar1,plVar4);
            if (puVar5 == (undefined8 *)0x0) {
              lVar3 = *plVar4;
              if ((lVar3 == 0) || (*(char *)(lVar3 + 0x4a0) == '\0')) {
                uVar6 = 0;
              }
              else {
                uVar6 = **(undefined8 **)(lVar3 + 0x498);
              }
              uStack_60 = (undefined4)uVar6;
              uStack_5c = (undefined4)((ulonglong)uVar6 >> 0x20);
            }
            else {
              uStack_58 = (uint)puVar5[2];
              uStack_54 = (undefined4)((ulonglong)puVar5[2] >> 0x20);
              local_68 = (code *)*puVar5;
              uStack_60 = *(undefined4 *)(puVar5 + 1);
              uStack_5c = *(undefined4 *)((longlong)puVar5 + 0xc);
            }
          }
          FUN_144241cf4(plVar8,&local_68,lVar2,iVar1);
          if ((longlong)*(int *)(param_1 + 0x110) != 0) {
            plVar4 = *(longlong **)(param_1 + 0x108);
            lVar3 = (longlong)*(int *)(param_1 + 0x110) * 0x70;
            do {
              if (*plVar4 == *plVar8) {
                if (plVar4 != (longlong *)0x0) {
                  FUN_148c4e7a2(plVar4,plVar8);
                }
                break;
              }
              plVar4 = plVar4 + 0xe;
              lVar3 = lVar3 + -0x70;
            } while (lVar3 != 0);
          }
          plVar8 = plVar8 + 0xe;
        } while (plVar8 != plVar7);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144243a8b FUN_144243a8b body=69 status=ok
// SIG undefined FUN_144243a8b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144243a8b(void)

{
  _DAT_14cbd57d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144243acd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd57e0,1);
  return;
}



// FUNCTION 144243ad0 FUN_144243ad0 body=2534 status=ok
// SIG undefined FUN_144243ad0(void)

void FUN_144243ad0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 == 0) goto LAB_144244358;
  if (param_1[0x1a] == 0) {
    uVar7 = FUN_140b7bb2c();
    lVar8 = FUN_14477b664(uVar7);
    param_1[0x1a] = lVar8;
  }
  lVar8 = FUN_140b7bb2c();
  uVar7 = FUN_140b7bb2c();
  FUN_1402d1bfa(&local_78,uVar7,param_2);
  if ((longlong *)param_1[0x19] != local_78) {
    param_1[0x1b] = 0;
  }
  param_1[0x19] = (longlong)local_78;
  lVar9 = FUN_140b7bb2c();
  if (lVar8 == 0) {
LAB_144243b8c:
    lVar9 = lVar8;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_144243b8c;
  if (param_1[0x1a] != lVar9) {
    param_1[0x1b] = 0;
  }
  uVar7 = FUN_14477b664(lVar9);
  lVar8 = FUN_14477b664(uVar7);
  param_1[0x1a] = lVar8;
  if ((lVar8 != 0) && (param_1[0x19] != 0)) {
    param_1[0x1b] = param_2;
  }
  puVar13 = *(undefined4 **)(param_2 + 8);
  if (puVar13 == (undefined4 *)0x0) {
    puVar13 = &DAT_14c9485f0;
  }
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  FUN_1400b2348(puVar13,&local_78,1);
  plVar1 = local_78;
  iVar4 = (int)uStack_70;
  uVar15 = (int)uStack_70 - 1;
  if ((int)uStack_70 == 0) {
    uVar15 = 0;
  }
  if (0 < (int)uVar15) {
    uVar14 = 0;
    do {
      uVar2 = *(ushort *)((longlong)local_78 + uVar14 * 2);
      *(ushort *)((longlong)local_78 + uVar14 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar14);
  }
  uVar5 = uStack_70._4_4_;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  if (*param_1 == 0) {
    *param_1 = (longlong)plVar1;
    *(int *)(param_1 + 1) = iVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  }
  else {
    FUN_1400020a8();
    *param_1 = (longlong)plVar1;
    *(int *)(param_1 + 1) = iVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar1 = param_1 + 2;
  if ((int)param_1[4] == 0) {
LAB_144243c9c:
    plVar11 = *(longlong **)(param_2 + 0x68);
    plVar12 = (longlong *)*plVar1;
    if (plVar12 != plVar11) {
      *plVar1 = (longlong)plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x70);
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  }
  else {
    cVar6 = FUN_144722c14(plVar1,(longlong *)(param_2 + 0x68),0);
    if (cVar6 == '\0') goto LAB_144243c9c;
  }
  plVar1 = param_1 + 5;
  if ((int)param_1[7] == 0) {
LAB_144243cec:
    plVar11 = *(longlong **)(param_2 + 0x78);
    plVar12 = (longlong *)*plVar1;
    if (plVar12 != plVar11) {
      *plVar1 = (longlong)plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))();
      }
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x80);
    *(int *)(param_1 + 7) = (int)param_1[7] + 1;
  }
  else {
    cVar6 = FUN_144722c14(plVar1,(longlong *)(param_2 + 0x78),0);
    if (cVar6 == '\0') goto LAB_144243cec;
  }
  plVar1 = param_1 + 0xe;
  plVar11 = (longlong *)param_1[0xe];
  if (*(code **)(*plVar11 + 0x50) != FUN_144828418) {
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))();
  }
  FUN_1447a1fc0(plVar11);
  plVar11 = (longlong *)*plVar1;
  pcVar3 = *(code **)(*plVar11 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar12 = plVar11 + 3;
    if (plVar11[5] != 0) {
      plVar12 = (longlong *)(plVar11[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar12 = plVar11 + 2;
  }
  else {
    plVar12 = (longlong *)(*pcVar3)(plVar11);
  }
  if ((int)plVar12[1] < 2) {
    lVar8 = *(longlong *)(param_2 + 0xa8);
    if (lVar8 == 0) {
      uVar7 = FUN_14086ad12();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_2 + 0xa8) = lVar8;
    }
    plVar11 = (longlong *)(param_2 + 0xa0);
    lVar9 = *(longlong *)(param_2 + 0xb0);
    if (lVar9 == 0) {
      if ((lVar8 != 0) && (*plVar11 != 0)) {
        plVar12 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar12 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
          *(undefined8 *)(param_2 + 0xb0) = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
          lVar9 = FUN_144aff482(uVar7,plVar11);
          *(longlong *)(param_2 + 0xb0) = lVar9;
          if (lVar9 != 0) {
            lVar8 = *(longlong *)(param_2 + 0xa8);
            goto LAB_144243db1;
          }
        }
      }
    }
    else {
LAB_144243db1:
      if (lVar8 == 0) {
        uVar7 = FUN_14086ad12();
        lVar8 = FUN_14477b664(uVar7);
        *(longlong *)(param_2 + 0xa8) = lVar8;
        lVar9 = *(longlong *)(param_2 + 0xb0);
        if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar11 != 0)) {
          plVar12 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
            lVar9 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar9 = FUN_144aff482(uVar7,plVar11);
          }
          *(longlong *)(param_2 + 0xb0) = lVar9;
        }
      }
      lVar8 = *(longlong *)(lVar9 + 0x178);
      if (lVar8 == 0) {
        uVar7 = FUN_1465d584e();
        lVar8 = FUN_14477b664(uVar7);
        *(longlong *)(lVar9 + 0x178) = lVar8;
      }
      if (*(longlong *)(lVar9 + 0x180) == 0) {
        if ((lVar8 != 0) && (*(longlong *)(lVar9 + 0x170) != 0)) {
          plVar12 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
            *(undefined8 *)(lVar9 + 0x180) = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar9 + 0x170));
            *(longlong *)(lVar9 + 0x180) = lVar8;
            if (lVar8 != 0) goto LAB_144243e4b;
          }
        }
      }
      else {
LAB_144243e4b:
        lVar8 = *(longlong *)(param_2 + 0xa8);
        if (lVar8 == 0) {
          uVar7 = FUN_14086ad12();
          lVar8 = FUN_14477b664(uVar7);
          *(longlong *)(param_2 + 0xa8) = lVar8;
        }
        lVar9 = *(longlong *)(param_2 + 0xb0);
        if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar11 != 0)) {
          plVar12 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
            lVar9 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar9 = FUN_144aff482(uVar7,plVar11);
          }
          *(longlong *)(param_2 + 0xb0) = lVar9;
        }
        puVar13 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
          puVar13 = *(undefined4 **)(lVar9 + 8);
        }
        local_88 = (longlong *)0x0;
        uStack_80 = 0;
        FUN_1400b2348(puVar13,&local_88,1);
        uStack_70 = uStack_80;
        uVar15 = (int)uStack_80 - 1;
        if ((int)uStack_80 == 0) {
          uVar15 = 0;
        }
        if (0 < (int)uVar15) {
          uVar14 = 0;
          do {
            uVar2 = *(ushort *)((longlong)local_88 + uVar14 * 2);
            *(ushort *)((longlong)local_88 + uVar14 * 2) =
                 (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
            uVar14 = uVar14 + 1;
          } while (uVar15 != uVar14);
        }
        local_78 = local_88;
        local_88 = (longlong *)0x0;
        uStack_80 = 0;
        FUN_140775538(param_1 + 0x14,&local_78);
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = *(longlong *)(param_2 + 0xa8);
        if (lVar8 == 0) {
          uVar7 = FUN_14086ad12();
          lVar8 = FUN_14477b664(uVar7);
          *(longlong *)(param_2 + 0xa8) = lVar8;
        }
        lVar9 = *(longlong *)(param_2 + 0xb0);
        if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*plVar11 != 0)) {
          plVar12 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar12 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar6 == '\0')) {
            lVar9 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar12 + 0x110))(plVar12);
            lVar9 = FUN_144aff482(uVar7,plVar11);
          }
          *(longlong *)(param_2 + 0xb0) = lVar9;
        }
        lVar8 = *(longlong *)(lVar9 + 0x178);
        if (lVar8 == 0) {
          uVar7 = FUN_1465d584e();
          lVar8 = FUN_14477b664(uVar7);
          *(longlong *)(lVar9 + 0x178) = lVar8;
        }
        lVar10 = *(longlong *)(lVar9 + 0x180);
        if (((lVar10 == 0) && (lVar10 = 0, lVar8 != 0)) && (*(longlong *)(lVar9 + 0x170) != 0)) {
          plVar11 = *(longlong **)(lVar8 + 0xb8);
          if ((plVar11 == (longlong *)0x0) ||
             (cVar6 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar6 == '\0')) {
            lVar10 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar11 + 0x110))(plVar11);
            lVar10 = FUN_144aff482(uVar7,(longlong *)(lVar9 + 0x170));
          }
          *(longlong *)(lVar9 + 0x180) = lVar10;
        }
        if (((int)param_1[0x10] == 0) ||
           (cVar6 = FUN_144722c14(plVar1,(longlong *)(lVar10 + 0x18),0), cVar6 == '\0')) {
          plVar11 = *(longlong **)(lVar10 + 0x18);
          plVar12 = (longlong *)*plVar1;
          if (plVar12 != plVar11) {
            *plVar1 = (longlong)plVar11;
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*plVar11 + 8))();
            }
            if (plVar12 != (longlong *)0x0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
          *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(lVar10 + 0x20);
          *(int *)(param_1 + 0x10) = (int)param_1[0x10] + 1;
        }
      }
    }
  }
  if ((int)param_1[0x12] < 2) {
    FUN_1442444b8(&local_78,param_2);
    FUN_140775538(param_1 + 0x11,&local_78);
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar1 = param_1 + 0xb;
  plVar11 = (longlong *)param_1[0xb];
  if (*(code **)(*plVar11 + 0x50) != FUN_144828418) {
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))();
  }
  FUN_1447a1fc0(plVar11);
  plVar11 = (longlong *)*plVar1;
  pcVar3 = *(code **)(*plVar11 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar12 = plVar11 + 3;
    if (plVar11[5] != 0) {
      plVar12 = (longlong *)(plVar11[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar12 = plVar11 + 2;
  }
  else {
    plVar12 = (longlong *)(*pcVar3)(plVar11);
  }
  if ((int)plVar12[1] < 2) {
    FUN_144244692(&local_78,param_2);
    if (((int)param_1[0xd] == 0) || (cVar6 = FUN_144722c14(plVar1,&local_78,0), cVar6 == '\0')) {
      FUN_140008f88(plVar1,&local_78);
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  plVar1 = (longlong *)(param_2 + 0xb8);
  plVar11 = *(longlong **)(param_2 + 0xb8);
  if (*(code **)(*plVar11 + 0x50) != FUN_144828418) {
    plVar11 = (longlong *)(**(code **)(*plVar11 + 0x50))();
  }
  FUN_1447a1fc0(plVar11);
  plVar11 = (longlong *)*plVar1;
  pcVar3 = *(code **)(*plVar11 + 0x28);
  if (pcVar3 == FUN_14482841c) {
    plVar12 = plVar11 + 3;
    if (plVar11[5] != 0) {
      plVar12 = (longlong *)(plVar11[5] + 8);
    }
  }
  else if (pcVar3 == (code *)&LAB_14010c34c) {
    plVar12 = plVar11 + 2;
  }
  else {
    plVar12 = (longlong *)(*pcVar3)(plVar11);
  }
  if ((int)plVar12[1] < 2) {
    FUN_140ede1da(param_2,&local_78);
    if (((int)param_1[10] == 0) || (cVar6 = FUN_144722c14(param_1 + 8,&local_78,0), cVar6 == '\0'))
    {
      FUN_140008f88(param_1 + 8,&local_78);
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
    }
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  else {
    plVar11 = param_1 + 8;
    if (((int)param_1[10] == 0) || (cVar6 = FUN_144722c14(plVar11,plVar1,0), cVar6 == '\0')) {
      plVar1 = (longlong *)*plVar1;
      plVar12 = (longlong *)*plVar11;
      if (plVar12 != plVar1) {
        *plVar11 = (longlong)plVar1;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (plVar12 != (longlong *)0x0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0xc0);
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
    }
    *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xbf;
  }
LAB_144244358:
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442444b8 FUN_1442444b8 body=473 status=ok
// SIG undefined FUN_1442444b8(void)

longlong * FUN_1442444b8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  ushort uVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = *(longlong *)(param_2 + 0x20);
  if (lVar7 == 0) {
    uVar6 = FUN_1418c9e66();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_2 + 0x20) = lVar7;
  }
  plVar1 = (longlong *)(param_2 + 0x18);
  lVar8 = *(longlong *)(param_2 + 0x28);
  if (lVar8 != 0) {
LAB_144244504:
    if (lVar7 == 0) {
      uVar6 = FUN_1418c9e66();
      lVar7 = FUN_14477b664(uVar6);
      *(longlong *)(param_2 + 0x20) = lVar7;
      lVar8 = *(longlong *)(param_2 + 0x28);
      if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
          lVar8 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar8 = FUN_144aff482(uVar6,plVar1);
        }
        *(longlong *)(param_2 + 0x28) = lVar8;
      }
    }
    puVar9 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar8 + 8) != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(lVar8 + 8);
    }
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400b2348(puVar9,&local_38,1);
    uVar4 = (int)uStack_30 - 1;
    if ((int)uStack_30 == 0) {
      uVar4 = 0;
    }
    if (0 < (int)uVar4) {
      uVar10 = 0;
      do {
        uVar2 = *(ushort *)(local_38 + uVar10 * 2);
        *(ushort *)(local_38 + uVar10 * 2) = (ushort)(uVar2 - 0x41 < 0x1a) * 0x20 + uVar2;
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    *param_1 = local_38;
    *(int *)(param_1 + 1) = (int)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
    if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if ((lVar7 != 0) && (*plVar1 != 0)) {
    plVar3 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      *(undefined8 *)(param_2 + 0x28) = 0;
    }
    else {
      uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
      lVar8 = FUN_144aff482(uVar6,plVar1);
      *(longlong *)(param_2 + 0x28) = lVar8;
      if (lVar8 != 0) {
        lVar7 = *(longlong *)(param_2 + 0x20);
        goto LAB_144244504;
      }
    }
  }
  FUN_144a2b0a4(param_2 + 0x88,param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 144244692 FUN_144244692 body=1419 status=ok
// SIG undefined FUN_144244692(void)

longlong * FUN_144244692(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  void *_Src;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_b8 [40];
  void *local_90;
  uint local_88;
  longlong *local_80 [2];
  void *local_70;
  uint local_68;
  undefined1 local_60 [24];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1442444b8(&local_70);
  _Src = local_70;
  if ((int)local_68 < 2) {
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
    plVar8 = DAT_14c844840;
    *param_1 = (longlong)DAT_14c844840;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
    goto LAB_144244a45;
  }
  local_90 = (void *)0x0;
  local_88 = local_68;
  FUN_1446dd670(&local_90,local_68 + 10,0);
  memcpy(local_90,_Src,(ulonglong)local_68 * 2);
  FUN_1400020e8(&local_90,L"_TypeTitle",10);
  FUN_14000bbd8(local_60,&local_90,0);
  FUN_1410d1eba(local_80,local_60);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar8 = local_80[0];
  plVar9 = local_80[0];
  if (*(code **)(*local_80[0] + 0x50) != FUN_144828418) {
    plVar9 = (longlong *)(**(code **)(*local_80[0] + 0x50))(local_80[0]);
  }
  FUN_1447a1fc0(plVar9);
  pcVar1 = *(code **)(*plVar8 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar9 = plVar8 + 3;
    if (plVar8[5] != 0) {
      plVar9 = (longlong *)(plVar8[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar9 = plVar8 + 2;
  }
  else {
    plVar9 = (longlong *)(*pcVar1)(plVar8);
  }
  if ((int)plVar9[1] < 2) {
    lVar5 = *(longlong *)(param_2 + 0x20);
    if (lVar5 == 0) {
      uVar4 = FUN_1418c9e66();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_2 + 0x20) = lVar5;
    }
    lVar6 = *(longlong *)(param_2 + 0x28);
    if (lVar6 == 0) {
      if ((lVar5 != 0) && (*(longlong *)(param_2 + 0x18) != 0)) {
        plVar8 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar8 == (longlong *)0x0) ||
           (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
          *(undefined8 *)(param_2 + 0x28) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
          lVar6 = FUN_144aff482(uVar4,(longlong *)(param_2 + 0x18));
          *(longlong *)(param_2 + 0x28) = lVar6;
          if (lVar6 != 0) goto LAB_14424481e;
        }
      }
LAB_1442449c2:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1))
      {
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
      plVar8 = DAT_14c844840;
      *param_1 = (longlong)DAT_14c844840;
      uVar3 = DAT_14c844848;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 8))();
        uVar3 = DAT_14c844848;
      }
    }
    else {
LAB_14424481e:
      lVar5 = *(longlong *)(lVar6 + 0x20);
      if (lVar5 == 0) {
        uVar4 = FUN_14036a63e();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar6 + 0x20) = lVar5;
      }
      lVar7 = *(longlong *)(lVar6 + 0x28);
      if (lVar7 == 0) {
        if ((lVar5 != 0) && (*(longlong *)(lVar6 + 0x18) != 0)) {
          plVar8 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar8 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar2 == '\0')) {
            *(undefined8 *)(lVar6 + 0x28) = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
            lVar7 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x18));
            *(longlong *)(lVar6 + 0x28) = lVar7;
            if (lVar7 != 0) goto LAB_144244845;
          }
        }
LAB_14424497c:
        plVar8 = *(longlong **)(lVar6 + 0x40);
        if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
        }
        FUN_1447a1fc0(plVar8);
        plVar8 = *(longlong **)(lVar6 + 0x40);
        pcVar1 = *(code **)(*plVar8 + 0x28);
        if (pcVar1 == FUN_14482841c) {
          plVar9 = plVar8 + 3;
          if (plVar8[5] != 0) {
            plVar9 = (longlong *)(plVar8[5] + 8);
          }
        }
        else if (pcVar1 == (code *)&LAB_14010c34c) {
          plVar9 = plVar8 + 2;
        }
        else {
          plVar9 = (longlong *)(*pcVar1)(plVar8);
        }
        if ((int)plVar9[1] < 2) goto LAB_1442449c2;
        plVar8 = *(longlong **)(lVar6 + 0x40);
        *param_1 = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        uVar3 = *(undefined4 *)(lVar6 + 0x48);
      }
      else {
LAB_144244845:
        plVar8 = *(longlong **)(lVar7 + 0x18);
        if (*(code **)(*plVar8 + 0x50) != FUN_144828418) {
          plVar8 = (longlong *)(**(code **)(*plVar8 + 0x50))();
        }
        FUN_1447a1fc0(plVar8);
        plVar8 = *(longlong **)(lVar7 + 0x18);
        pcVar1 = *(code **)(*plVar8 + 0x28);
        if (pcVar1 == FUN_14482841c) {
          plVar9 = plVar8 + 3;
          if (plVar8[5] != 0) {
            plVar9 = (longlong *)(plVar8[5] + 8);
          }
        }
        else if (pcVar1 == (code *)&LAB_14010c34c) {
          plVar9 = plVar8 + 2;
        }
        else {
          plVar9 = (longlong *)(*pcVar1)(plVar8);
        }
        if ((int)plVar9[1] < 2) goto LAB_14424497c;
        plVar8 = *(longlong **)(lVar7 + 0x18);
        *param_1 = (longlong)plVar8;
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 8))();
        }
        uVar3 = *(undefined4 *)(lVar7 + 0x20);
      }
    }
    *(undefined4 *)(param_1 + 1) = uVar3;
  }
  else {
    FUN_14023423e(param_1,local_80);
  }
  if (local_80[0] != (longlong *)0x0) {
    (**(code **)(*local_80[0] + 0x10))();
  }
LAB_144244a45:
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144244c1e FUN_144244c1e body=306 status=ok
// SIG undefined FUN_144244c1e(void)

void FUN_144244c1e(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0x7f;
  lVar6 = *(longlong *)(param_1 + 0xd0);
  if (lVar6 == 0) {
    uVar5 = FUN_140b7bb2c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0xd0) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0xd8);
  if (((lVar7 != 0) || (lVar7 = 0, lVar6 == 0)) || (*(longlong *)(param_1 + 200) == 0))
  goto LAB_144244cd1;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_144244d4a:
    lVar7 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))();
    if (cVar3 == '\0') goto LAB_144244d4a;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar5,(longlong *)(param_1 + 200));
  }
  *(longlong *)(param_1 + 0xd8) = lVar7;
LAB_144244cd1:
  cVar3 = FUN_14410b2c4(lVar7,&local_30);
  if ((cVar3 != '\0') || (DAT_14cbd57e8 == '\x01')) {
    cVar3 = FUN_14125be1e(param_2,local_30);
    bVar1 = *(byte *)(param_1 + 0xc0);
    bVar4 = 0x80;
    if (cVar3 != '\0') {
      bVar4 = DAT_14cbd57e8 << 7;
    }
    *(byte *)(param_1 + 0xc0) = bVar1 & 0x7f | bVar4;
    if (bVar4 != 0) {
      *(byte *)(param_1 + 0xc0) = bVar1 & 0x7e | bVar4;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144244d52 FUN_144244d52 body=201 status=ok
// SIG undefined FUN_144244d52(void)

longlong * FUN_144244d52(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_2 + 0x20);
  if (lVar5 == 0) {
    uVar4 = FUN_1418c9e66();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x20) = lVar5;
  }
  lVar6 = *(longlong *)(param_2 + 0x18);
  if (*(longlong *)(param_2 + 0x28) == 0) {
    if (lVar5 != 0 && lVar6 != 0) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        *(undefined8 *)(param_2 + 0x28) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(param_2 + 0x18));
        *(longlong *)(param_2 + 0x28) = lVar5;
        if (lVar5 != 0) {
          lVar6 = *(longlong *)(param_2 + 0x18);
          goto LAB_144244d86;
        }
      }
    }
    iVar2 = *(int *)(param_2 + 0x90) + -1;
    if (*(int *)(param_2 + 0x90) == 0) {
      iVar2 = 0;
    }
    FUN_1446f82e2(param_1,iVar2,*(undefined8 *)(param_2 + 0x88),1);
    return param_1;
  }
LAB_144244d86:
  *param_1 = lVar6;
  return param_1;
}



// FUNCTION 144244e1c FUN_144244e1c body=283 status=ok
// SIG undefined FUN_144244e1c(void)

undefined8 FUN_144244e1c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if ((*(char *)(param_1 + 0x18) != '\x01') || ((*(byte *)(param_2 + 0xc0) & 1) != 0)) {
    if ((*(int *)(param_1 + 0x28) < 1) ||
       (cVar1 = FUN_148e1c8a8(param_1 + 0x20,param_2 + 0xa0), cVar1 != '\0')) {
LAB_144244e45:
      if ((*(int *)(param_1 + 0x38) < 1) ||
         (cVar1 = FUN_148e1c8a8(param_1 + 0x30,param_2 + 0x88), cVar1 != '\0')) {
        return 1;
      }
    }
    else if ((*(int *)(param_2 + 0xa8) < 2) && ((longlong)*(int *)(param_1 + 0x28) != 0)) {
      plVar3 = *(longlong **)(param_1 + 0x20);
      plVar2 = plVar3 + (longlong)*(int *)(param_1 + 0x28) * 2;
LAB_144244ea2:
      if ((int)plVar3[1] == DAT_14cbd5128) {
        if (1 < DAT_14cbd5128) {
          lVar4 = 0;
          do {
            uVar6 = *(ushort *)(*plVar3 + lVar4);
            uVar7 = (ulonglong)uVar6;
            uVar5 = *(ushort *)(DAT_14cbd5120 + lVar4);
            if (uVar6 == uVar5) {
              if (uVar6 == 0) break;
            }
            else {
              if (0x7f < (uVar5 | uVar6)) goto LAB_144244f07;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
              uVar8 = (ulonglong)uVar5;
              uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              if ((&DAT_149e05da0)[uVar7] != (&DAT_149e05da0)[uVar8]) goto LAB_144244f07;
            }
            lVar4 = lVar4 + 2;
          } while( true );
        }
      }
      else if ((int)plVar3[1] + DAT_14cbd5128 != 1) goto LAB_144244eb2;
      goto LAB_144244e45;
    }
  }
  return 0;
LAB_144244f07:
  if (uVar6 == uVar5) goto LAB_144244e45;
LAB_144244eb2:
  plVar3 = plVar3 + 2;
  if (plVar3 == plVar2) {
    return 0;
  }
  goto LAB_144244ea2;
}



// FUNCTION 144244f38 FUN_144244f38 body=237 status=ok
// SIG undefined FUN_144244f38(void)

longlong FUN_144244f38(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  
  iVar2 = *(int *)(param_2 + 1);
  uVar5 = 0;
  iVar4 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar2 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    lVar7 = 0;
    uVar5 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar3[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar7]) -
              0x20;
      uVar8 = (uint)(uVar5 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar6) & 0xff) * 4);
      uVar5 = (ulonglong)
              (uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
      lVar7 = lVar7 + 1;
    } while (iVar4 != (int)lVar7);
  }
  iVar2 = FUN_148e23256(param_3,uVar5,param_2);
  lVar7 = (longlong)iVar2 * 0x20 + *param_3;
  if (lVar7 != 0 && iVar2 != -1) {
    cVar1 = *(char *)(lVar7 + 0x10);
    if (cVar1 == '\x0e') {
      *(undefined1 *)(param_1 + 0x18) = 1;
    }
    else {
      if (cVar1 == '\r') {
        lVar7 = param_1 + 0x20;
      }
      else {
        if (cVar1 != '\x02') {
          return param_1;
        }
        lVar7 = param_1 + 0x30;
      }
      FUN_1412fabe8(lVar7,param_2);
    }
  }
  return param_1;
}



// FUNCTION 144245026 FUN_144245026 body=154 status=ok
// SIG undefined FUN_144245026(void)

void FUN_144245026(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148e1b1d0(param_2,&local_38);
  if ((longlong)local_30 == 0) {
    local_30 = 0;
  }
  else {
    lVar2 = (longlong)local_30 << 4;
    lVar1 = local_38;
    do {
      FUN_144244f38(param_1,lVar1,param_3);
      lVar1 = lVar1 + 0x10;
      lVar2 = lVar2 + -0x10;
    } while (lVar2 != 0);
  }
  FUN_1447a1747(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442450c2 FUN_1442450c2 body=973 status=ok
// SIG undefined FUN_1442450c2(void)

undefined8 FUN_1442450c2(longlong param_1,longlong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbd46f0) {
    if (1 < iVar1) {
      lVar6 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*param_2 + lVar6);
        uVar2 = (ulonglong)uVar3;
        uVar4 = *(ushort *)(DAT_14cbd46e8 + lVar6);
        if (uVar3 != uVar4) break;
        if (uVar3 == 0) goto LAB_144245375;
LAB_14424510c:
        lVar6 = lVar6 + 2;
      }
      if ((uVar4 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
        uVar5 = (ulonglong)uVar4;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
        if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_14424510c;
      }
      if (uVar3 != uVar4) goto LAB_144245136;
    }
  }
  else if (DAT_14cbd46f0 + iVar1 != 1) {
LAB_144245136:
    if (iVar1 == DAT_14cbd4700) {
      if (1 < iVar1) {
        lVar6 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*param_2 + lVar6);
          uVar2 = (ulonglong)uVar3;
          uVar4 = *(ushort *)(DAT_14cbd46f8 + lVar6);
          if (uVar3 != uVar4) break;
          if (uVar3 == 0) goto LAB_1442453ad;
LAB_14424517a:
          lVar6 = lVar6 + 2;
        }
        if ((uVar4 | uVar3) < 0x80) {
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
          uVar5 = (ulonglong)uVar4;
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_14424517a;
        }
        if (uVar3 != uVar4) goto LAB_1442451a4;
      }
    }
    else if (DAT_14cbd4700 + iVar1 != 1) {
LAB_1442451a4:
      if (iVar1 == DAT_14cbd4710) {
        if (1 < iVar1) {
          lVar6 = 0;
          while( true ) {
            uVar3 = *(ushort *)(*param_2 + lVar6);
            uVar2 = (ulonglong)uVar3;
            uVar4 = *(ushort *)(DAT_14cbd4708 + lVar6);
            if (uVar3 != uVar4) break;
            if (uVar3 == 0) goto LAB_1442453dd;
LAB_1442451e8:
            lVar6 = lVar6 + 2;
          }
          if ((uVar4 | uVar3) < 0x80) {
            uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
            uVar5 = (ulonglong)uVar4;
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_1442451e8;
          }
          if (uVar3 != uVar4) goto LAB_144245212;
        }
      }
      else if (DAT_14cbd4710 + iVar1 != 1) {
LAB_144245212:
        if (iVar1 == DAT_14cbd4720) {
          if (1 < iVar1) {
            lVar6 = 0;
            while( true ) {
              uVar3 = *(ushort *)(*param_2 + lVar6);
              uVar2 = (ulonglong)uVar3;
              uVar4 = *(ushort *)(DAT_14cbd4718 + lVar6);
              if (uVar3 != uVar4) break;
              if (uVar3 == 0) goto LAB_14424540d;
LAB_144245256:
              lVar6 = lVar6 + 2;
            }
            if ((uVar4 | uVar3) < 0x80) {
              uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
              uVar5 = (ulonglong)uVar4;
              uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_144245256;
            }
            if (uVar3 != uVar4) goto LAB_144245280;
          }
        }
        else if (DAT_14cbd4720 + iVar1 != 1) {
LAB_144245280:
          if (iVar1 == DAT_14cbd4730) {
            if (1 < iVar1) {
              lVar6 = 0;
              while( true ) {
                uVar3 = *(ushort *)(*param_2 + lVar6);
                uVar2 = (ulonglong)uVar3;
                uVar4 = *(ushort *)(DAT_14cbd4728 + lVar6);
                if (uVar3 != uVar4) break;
                if (uVar3 == 0) goto LAB_14424543c;
LAB_1442452c4:
                lVar6 = lVar6 + 2;
              }
              if ((uVar4 | uVar3) < 0x80) {
                uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
                uVar5 = (ulonglong)uVar4;
                uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_1442452c4;
              }
              if (uVar3 != uVar4) goto LAB_1442452ee;
            }
          }
          else if (DAT_14cbd4730 + iVar1 != 1) {
LAB_1442452ee:
            if (iVar1 == DAT_14cbd4740) {
              if (1 < iVar1) {
                lVar6 = 0;
                while( true ) {
                  uVar3 = *(ushort *)(*param_2 + lVar6);
                  uVar2 = (ulonglong)uVar3;
                  uVar4 = *(ushort *)(DAT_14cbd4738 + lVar6);
                  if (uVar3 != uVar4) break;
                  if (uVar3 == 0) goto LAB_144245467;
LAB_144245334:
                  lVar6 = lVar6 + 2;
                }
                if ((uVar4 | uVar3) < 0x80) {
                  uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar2];
                  uVar5 = (ulonglong)uVar4;
                  uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                  if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar5]) goto LAB_144245334;
                }
                if (uVar3 != uVar4) {
                  return 0;
                }
              }
            }
            else if (DAT_14cbd4740 + iVar1 != 1) {
              return 0;
            }
LAB_144245467:
            if (*(int *)(param_1 + 8) == 5) {
              if (*(int *)(param_1 + 0xc) != 0) {
                return 0;
              }
              uVar2 = 1;
            }
            else {
              uVar2 = (ulonglong)(*(int *)(param_1 + 0xc) + 1);
            }
            *(undefined4 *)(param_1 + 8) = 5;
            goto LAB_144245387;
          }
LAB_14424543c:
          if (*(int *)(param_1 + 8) == 4) {
            if (*(int *)(param_1 + 0xc) != 0) {
              return 0;
            }
            uVar2 = 1;
          }
          else {
            uVar2 = (ulonglong)(*(int *)(param_1 + 0xc) + 1);
          }
          *(undefined4 *)(param_1 + 8) = 4;
          goto LAB_144245387;
        }
LAB_14424540d:
        if (*(int *)(param_1 + 8) == 3) {
          if (*(int *)(param_1 + 0xc) != 0) {
            return 0;
          }
          uVar2 = 1;
        }
        else {
          uVar2 = (ulonglong)(*(int *)(param_1 + 0xc) + 1);
        }
        *(undefined4 *)(param_1 + 8) = 3;
        goto LAB_144245387;
      }
LAB_1442453dd:
      if (*(int *)(param_1 + 8) == 2) {
        if (*(int *)(param_1 + 0xc) != 0) {
          return 0;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = (ulonglong)(*(int *)(param_1 + 0xc) + 1);
      }
      *(undefined4 *)(param_1 + 8) = 2;
      goto LAB_144245387;
    }
LAB_1442453ad:
    if (*(int *)(param_1 + 8) == 1) {
      if (*(int *)(param_1 + 0xc) != 0) {
        return 0;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = (ulonglong)(*(int *)(param_1 + 0xc) + 1);
    }
    *(undefined4 *)(param_1 + 8) = 1;
    goto LAB_144245387;
  }
LAB_144245375:
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      return 0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = (ulonglong)(*(int *)(param_1 + 0xc) + 1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
LAB_144245387:
  *(int *)(param_1 + 0xc) = (int)uVar2;
  return CONCAT71((int7)(uVar2 >> 8),1);
}



// FUNCTION 14424548f FUN_14424548f body=69 status=ok
// SIG undefined FUN_14424548f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14424548f(void)

{
  _DAT_14cbd57f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001442454d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd57f8,1);
  return;
}



// FUNCTION 1442454d4 FUN_1442454d4 body=955 status=ok
// SIG undefined FUN_1442454d4(void)

undefined8 * FUN_1442454d4(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined4 *puVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  size_t sVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  void **ppvVar13;
  wchar_t *_Str;
  int iVar14;
  undefined2 *puVar15;
  bool bVar16;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  int local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_4 != (longlong *)0x0) && (*param_4 != 0)) && (*(char *)(*param_4 + 0x18) == '\x06')) {
    if (*param_3 != 0) {
      puVar3 = *(undefined4 **)(*param_3 + 8);
      puVar9 = &DAT_14c9485f0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar9 = puVar3;
      }
      local_48[0] = 0;
      local_48[1] = 0;
      FUN_1400b2348(puVar9,local_48,1);
      FUN_1400b22c2(&local_58,"mode02");
      puVar15 = &DAT_149dfb77a;
      _Str = local_58;
      if (local_50 == 0) {
        _Str = L"";
      }
      if (_Str == (wchar_t *)0x0) {
        bVar16 = false;
      }
      else {
        sVar7 = wcslen(_Str);
        local_80 = 0xffffffff;
        local_88 = 0;
        iVar6 = FUN_1447ee042(local_48,_Str,sVar7 & 0xffffffff,1);
        bVar16 = iVar6 != -1;
      }
      if (local_58 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (bVar16) {
        iVar6 = *(int *)(param_1 + 0x1b0);
        if ((longlong)iVar6 != 0) {
          puVar15 = *(undefined2 **)(param_1 + 0x1a8);
        }
        lVar8 = 0;
        do {
          uVar2 = puVar15[lVar8];
          bVar1 = "impact"[lVar8];
          iVar14 = (uint)uVar2 - (uint)bVar1;
          if (iVar14 == 0) {
            if (uVar2 == 0) goto LAB_144245840;
          }
          else {
            if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_14424575c;
            if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_144245759;
          }
          lVar8 = lVar8 + 1;
        } while( true );
      }
    }
    iVar6 = *(int *)(param_1 + 0x198);
    if ((longlong)iVar6 == 0) {
      puVar15 = &DAT_149dfb77a;
    }
    else {
      puVar15 = *(undefined2 **)(param_1 + 400);
    }
    lVar8 = 0;
    do {
      uVar2 = puVar15[lVar8];
      bVar1 = "impact"[lVar8];
      iVar14 = (uint)uVar2 - (uint)bVar1;
      if (iVar14 == 0) {
        if (uVar2 == 0) goto LAB_144245840;
      }
      else {
        if (0x7f < ((uint)bVar1 | (uint)uVar2)) goto LAB_1442457fe;
        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[bVar1]) goto LAB_1442457fb;
      }
      lVar8 = lVar8 + 1;
    } while( true );
  }
  if ((int)param_3[2] != *(int *)((longlong)param_3 + 0x3c)) {
    uVar5 = (uint)((ulonglong)DAT_14cbd5970 >> 0x10);
    uVar11 = (uint)DAT_14cbd5970 & 0xffff;
    plVar10 = param_3 + 8;
    if ((longlong *)param_3[9] != (longlong *)0x0) {
      plVar10 = (longlong *)param_3[9];
    }
    iVar6 = *(int *)((longlong)plVar10 +
                    (ulonglong)
                    ((int)param_3[10] - 1U &
                    (int)((ulonglong)DAT_14cbd5970 >> 0x20) + ((uint)DAT_14cbd5970 << 0x10 | uVar11)
                    + (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar8 = param_3[1];
      iVar14 = iVar6;
      do {
        if (*(longlong *)(lVar8 + (longlong)iVar14 * 0x20) == DAT_14cbd5970) goto LAB_14424566a;
        iVar14 = *(int *)((longlong)iVar14 * 0x20 + lVar8 + 0x18);
      } while (iVar14 != -1);
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
LAB_144245644:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
LAB_144245759:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_14424575c:
  if (iVar14 == 0) goto LAB_144245840;
  local_68 = (void *)0x0;
  pvVar4 = *(void **)(param_1 + 0x1a8);
  local_60 = iVar6;
  if (iVar6 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,iVar6,0);
    memcpy(local_68,pvVar4,(longlong)iVar6 * 2);
  }
  ppvVar13 = &local_68;
  goto LAB_14424586d;
  while (iVar6 = *(int *)(lVar12 + 0x18), iVar6 != -1) {
LAB_14424566a:
    lVar12 = lVar8 + (longlong)iVar6 * 0x20;
    if (*(longlong *)(lVar8 + (longlong)iVar6 * 0x20) == DAT_14cbd5970) goto LAB_14424567f;
  }
  lVar12 = 0;
LAB_14424567f:
  *param_2 = 0;
  iVar6 = *(int *)(lVar12 + 0x10);
  pvVar4 = *(void **)(lVar12 + 8);
  *(int *)(param_2 + 1) = iVar6;
  if ((longlong)iVar6 != 0) {
    FUN_1446dd670(param_2,iVar6,0);
    memcpy((void *)*param_2,pvVar4,(longlong)iVar6 * 2);
    goto LAB_144245644;
  }
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  goto LAB_144245875;
LAB_1442457fb:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[bVar1];
LAB_1442457fe:
  if (iVar14 == 0) {
LAB_144245840:
    FUN_140056680(param_2,&DAT_149dfb77a);
    goto LAB_144245875;
  }
  local_78 = (void *)0x0;
  pvVar4 = *(void **)(param_1 + 400);
  local_70 = iVar6;
  if (iVar6 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,iVar6,0);
    memcpy(local_78,pvVar4,(longlong)iVar6 * 2);
  }
  ppvVar13 = &local_78;
LAB_14424586d:
  FUN_144245890(param_2,ppvVar13);
LAB_144245875:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144245890 FUN_144245890 body=448 status=ok
// SIG undefined FUN_144245890(void)

undefined8 * FUN_144245890(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  void *_Src;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  lVar3 = DAT_14cbe4f78;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbe4f78 != 0) {
    FUN_144a2b0a4(param_2,local_68);
    FUN_14000bbd8(local_58,local_68,0);
    lVar3 = FUN_144837462(lVar3,local_58);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (lVar3 != 0) {
      FUN_14000bbd8(local_58,lVar3 + 0x18,0);
      FUN_1410d1eba(local_68,local_58);
      plVar4 = local_68[0];
      if (*(code **)(*local_68[0] + 0x50) != FUN_144828418) {
        plVar4 = (longlong *)(**(code **)(*local_68[0] + 0x50))(local_68[0]);
      }
      FUN_1447a1fc0(plVar4);
      pcVar2 = *(code **)(*local_68[0] + 0x28);
      if (pcVar2 == FUN_14482841c) {
        plVar4 = (longlong *)(local_68[0][5] + 8);
        if (local_68[0][5] == 0) {
          plVar4 = local_68[0] + 3;
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        plVar4 = local_68[0] + 2;
      }
      else {
        plVar4 = (longlong *)(*pcVar2)(local_68[0]);
      }
      *param_1 = 0;
      iVar1 = (int)plVar4[1];
      _Src = (void *)*plVar4;
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      if (local_68[0] != (longlong *)0x0) {
        (**(code **)(*local_68[0] + 0x10))(local_68[0]);
      }
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1442459f6;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1442459f6:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144245a52 FUN_144245a52 body=255 status=ok
// SIG undefined FUN_144245a52(void)

undefined8 * FUN_144245a52(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  void *_Src;
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (*(int *)(param_3 + 0x10) != *(int *)(param_3 + 0x3c)) {
    uVar1 = (uint)((ulonglong)DAT_14cbd5978 >> 0x10);
    uVar3 = (uint)DAT_14cbd5978 & 0xffff;
    lVar2 = param_3 + 0x40;
    if (*(longlong *)(param_3 + 0x48) != 0) {
      lVar2 = *(longlong *)(param_3 + 0x48);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_3 + 0x50) - 1U &
                             (int)((ulonglong)DAT_14cbd5978 >> 0x20) +
                             ((uint)DAT_14cbd5978 << 0x10 | uVar3) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(param_3 + 8);
      iVar6 = iVar4;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x20) == DAT_14cbd5978) goto LAB_144245afc;
        iVar6 = *(int *)((longlong)iVar6 * 0x20 + lVar2 + 0x18);
      } while (iVar6 != -1);
    }
  }
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
  while (iVar4 = *(int *)(lVar5 + 0x18), iVar4 != -1) {
LAB_144245afc:
    lVar5 = lVar2 + (longlong)iVar4 * 0x20;
    if (*(longlong *)(lVar2 + (longlong)iVar4 * 0x20) == DAT_14cbd5978) goto LAB_144245b11;
  }
  lVar5 = 0;
LAB_144245b11:
  *param_2 = 0;
  iVar4 = *(int *)(lVar5 + 0x10);
  _Src = *(void **)(lVar5 + 8);
  *(int *)(param_2 + 1) = iVar4;
  if ((longlong)iVar4 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar4,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
  }
  return param_2;
}



// FUNCTION 144245b52 FUN_144245b52 body=1102 status=ok
// SIG undefined FUN_144245b52(void)

longlong * FUN_144245b52(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  int iVar9;
  wchar_t *_Str;
  longlong lVar10;
  void *pvVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  int local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((param_4 == (longlong *)0x0) || (*param_4 == 0)) || (*(char *)(*param_4 + 0x18) != '\x06')) {
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_144245cf3:
      FUN_140056680(param_2,&DAT_149dfb77a);
    }
    else {
      lVar5 = *(longlong *)(lVar10 + 0x78);
      if (lVar5 == 0) {
        local_68 = *(wchar_t **)(lVar10 + 0x68);
        FUN_1446dcdd4(&local_58);
        lVar5 = FUN_1448fdc6e(&local_58);
        if (local_40 != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar10 + 0x78) = lVar5;
        if (lVar5 == 0) goto LAB_144245cf3;
        lVar10 = *param_3;
        lVar5 = *(longlong *)(lVar10 + 0x78);
        if (lVar5 == 0) {
          local_68 = *(wchar_t **)(lVar10 + 0x68);
          FUN_1446dcdd4(&local_58);
          lVar5 = FUN_1448fdc6e(&local_58);
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar10 + 0x78) = lVar5;
        }
      }
      puVar7 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
        puVar7 = *(undefined4 **)(lVar5 + 8);
      }
      *param_2 = 0;
      param_2[1] = 0;
      FUN_1400b2348(puVar7,param_2,1);
    }
    goto LAB_144245ef9;
  }
  if (*param_3 == 0) {
LAB_144245d83:
    FUN_1400b22c2(&local_68,L"_Common");
    local_78 = (void *)0x0;
    local_70 = *(int *)(param_1 + 0xf8);
    lVar10 = (longlong)local_70;
    pvVar11 = *(void **)(param_1 + 0xf0);
    if (lVar10 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar11,lVar10 * 2);
    }
    FUN_1401c7f3e(&local_58,&local_78,&local_68);
    iVar3 = (int)uStack_50;
    if (1 < (int)uStack_50) {
      iVar9 = *(int *)(param_1 + 0x198) + -1;
      if (*(int *)(param_1 + 0x198) == 0) {
        iVar9 = 0;
      }
      *param_2 = local_58;
      local_58 = 0;
      *(int *)(param_2 + 1) = (int)uStack_50;
      iVar2 = uStack_50._4_4_;
      *(int *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
      uStack_50 = 0;
      iVar1 = iVar9 + iVar3;
      if (iVar1 < iVar3) {
LAB_144245f36:
        uStack_50 = 0;
        local_58 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar9);
      }
      if (iVar2 < iVar1) {
        FUN_1446f8c06(param_2);
      }
      uVar8 = *(undefined8 *)(param_1 + 400);
      goto LAB_144245ec1;
    }
    *param_2 = 0;
    iVar3 = *(int *)(param_1 + 0x198);
    pvVar11 = *(void **)(param_1 + 400);
LAB_144245f6a:
    *(int *)(param_2 + 1) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar3,0);
      memcpy((void *)*param_2,pvVar11,(longlong)iVar3 * 2);
    }
  }
  else {
    puVar7 = *(undefined4 **)(*param_3 + 8);
    puVar6 = &DAT_14c9485f0;
    if (puVar7 != (undefined4 *)0x0) {
      puVar6 = puVar7;
    }
    local_58 = 0;
    uStack_50 = 0;
    FUN_1400b2348(puVar6,&local_58,1);
    FUN_1400b22c2(&local_68,"mode02");
    _Str = L"";
    if (local_60 != 0) {
      _Str = local_68;
    }
    if (_Str == (wchar_t *)0x0) {
      bVar12 = false;
    }
    else {
      sVar4 = wcslen(_Str);
      local_80 = 0xffffffff;
      local_88 = 0;
      iVar3 = FUN_1447ee042(&local_58,_Str,sVar4 & 0xffffffff,1);
      bVar12 = iVar3 != -1;
    }
    if (local_68 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (!bVar12) goto LAB_144245d83;
    FUN_1400b22c2(&local_68,L"_Common");
    local_78 = (void *)0x0;
    local_70 = *(int *)(param_1 + 0xf8);
    lVar10 = (longlong)local_70;
    pvVar11 = *(void **)(param_1 + 0xf0);
    if (lVar10 == 0) {
      local_6c = 0;
    }
    else {
      FUN_1446dd670(&local_78,local_70,0);
      memcpy(local_78,pvVar11,lVar10 * 2);
    }
    FUN_1401c7f3e(&local_58,&local_78,&local_68);
    iVar3 = (int)uStack_50;
    if ((int)uStack_50 < 2) {
      *param_2 = 0;
      iVar3 = *(int *)(param_1 + 0x1b0);
      pvVar11 = *(void **)(param_1 + 0x1a8);
      goto LAB_144245f6a;
    }
    iVar9 = *(int *)(param_1 + 0x1b0) + -1;
    if (*(int *)(param_1 + 0x1b0) == 0) {
      iVar9 = 0;
    }
    *param_2 = local_58;
    local_58 = 0;
    *(int *)(param_2 + 1) = (int)uStack_50;
    iVar2 = uStack_50._4_4_;
    *(int *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
    uStack_50 = 0;
    iVar1 = iVar9 + iVar3;
    if (iVar1 < iVar3) goto LAB_144245f36;
    if (iVar2 < iVar1) {
      FUN_1446f8c06(param_2);
    }
    uVar8 = *(undefined8 *)(param_1 + 0x1a8);
LAB_144245ec1:
    FUN_1400020e8(param_2,uVar8,iVar9);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_144245ef9:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144245fa2 FUN_144245fa2 body=369 status=ok
// SIG undefined FUN_144245fa2(void)

undefined8 FUN_144245fa2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  size_t sVar3;
  undefined4 *puVar4;
  wchar_t *_Str;
  undefined8 *puVar5;
  void *_Src;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  int local_50;
  wchar_t *local_48;
  int local_40;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_3 != 0) {
    puVar1 = *(undefined4 **)(*param_3 + 8);
    puVar4 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar1;
    }
    local_38[0] = 0;
    local_38[1] = 0;
    FUN_1400b2348(puVar4,local_38,1);
    FUN_1400b22c2(&local_48,"mode02");
    _Str = L"";
    if (local_40 != 0) {
      _Str = local_48;
    }
    if (_Str == (wchar_t *)0x0) {
      bVar6 = false;
    }
    else {
      sVar3 = wcslen(_Str);
      local_70 = 0xffffffff;
      local_78 = 0;
      iVar2 = FUN_1447ee042(local_38,_Str,sVar3 & 0xffffffff,1);
      bVar6 = iVar2 != -1;
    }
    if (local_48 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_38[0] != 0) {
      FUN_1400020a8();
    }
    if (bVar6) {
      local_58 = 0;
      iVar2 = *(int *)(param_1 + 0x1b0);
      _Src = *(void **)(param_1 + 0x1a8);
      puVar5 = &local_58;
      local_50 = iVar2;
      goto LAB_1442460b9;
    }
  }
  local_68 = 0;
  iVar2 = *(int *)(param_1 + 0x198);
  _Src = *(void **)(param_1 + 400);
  puVar5 = &local_68;
  local_60 = iVar2;
LAB_1442460b9:
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar5,iVar2,0);
    memcpy((void *)*puVar5,_Src,(longlong)iVar2 * 2);
  }
  FUN_144246114(param_2,puVar5);
  if ((local_38[2] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144246114 FUN_144246114 body=262 status=ok
// SIG undefined FUN_144246114(void)

undefined8 * FUN_144246114(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  lVar2 = DAT_14cbe4f78;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbe4f78 != 0) {
    FUN_144a2b0a4(param_2,local_68);
    FUN_14000bbd8(local_58,local_68,0);
    lVar2 = FUN_144837462(lVar2,local_58);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (lVar2 != 0) {
      *param_1 = 0;
      iVar1 = *(int *)(lVar2 + 0x30);
      _Src = *(void **)(lVar2 + 0x28);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
      }
      goto LAB_1442461d5;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1442461d5:
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424621c FUN_14424621c body=78 status=ok
// SIG undefined FUN_14424621c(void)

void FUN_14424621c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  local_18 = param_3;
  FUN_140e73b08(param_1 + 8,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424626c FUN_14424626c body=215 status=ok
// SIG undefined FUN_14424626c(void)

void FUN_14424626c(longlong param_1,int *param_2,undefined8 param_3)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_48 [32];
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == (int)DAT_14cb889e0) && (param_2[2] == DAT_14cb889e8)) {
    FUN_1400021e4(param_3,&local_28);
    pwVar2 = local_28;
    if (local_20 == 0) {
      pwVar2 = L"";
    }
    iVar1 = _wtoi(pwVar2);
    *(int *)(param_1 + 0x98) = iVar1;
  }
  else {
    if ((*param_2 != (int)DAT_14cb889f8) || (param_2[2] != DAT_14cb88a00)) goto LAB_144246296;
    FUN_1400021e4(param_3,&local_28);
    pwVar2 = local_28;
    if (local_20 == 0) {
      pwVar2 = L"";
    }
    iVar1 = _wtoi(pwVar2);
    *(int *)(param_1 + 0x9c) = iVar1;
  }
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_144246296:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442463aa FUN_1442463aa body=212 status=ok
// SIG undefined FUN_1442463aa(void)

void FUN_1442463aa(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0x20);
  plVar1 = *(longlong **)(param_2 + 0x28);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != plVar1) {
    param_1[2] = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x30);
  lVar3 = FUN_1406f612e(param_4);
  if (lVar3 != 0) {
    lVar4 = FUN_14148eec0(lVar3,param_2);
    if (lVar4 != 0) {
      param_1[10] = lVar4;
      lVar3 = FUN_1403362f0(lVar3,param_3,lVar4);
      if (lVar3 != 0) {
        FUN_14424647e(param_1,lVar4,lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14424647e FUN_14424647e body=1293 status=ok
// SIG undefined FUN_14424647e(void)

void FUN_14424647e(longlong param_1,longlong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  code *pcVar5;
  ulonglong *puVar6;
  undefined4 uVar7;
  longlong *****ppppplVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_188 [32];
  longlong local_168 [2];
  longlong *local_158 [2];
  undefined8 local_148;
  longlong *local_140;
  undefined8 local_138;
  longlong *plStack_130;
  longlong *local_128 [2];
  undefined8 local_118;
  longlong *plStack_110;
  longlong *local_108 [2];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  uint *local_d8;
  ulonglong *local_d0;
  longlong ****local_c8;
  undefined4 local_c0;
  ushort local_b0;
  byte local_a8;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [2];
  longlong *local_90 [2];
  undefined4 local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  FUN_140e6da68(local_108,param_3[1],0);
  local_138 = 0;
  plStack_130 = (longlong *)0x0;
  FUN_140e6da68(local_128,*param_3,0);
  FUN_1400b22c2(local_168,"{0} / {1}");
  FUN_140233b1a(local_158,local_168);
  FUN_14023409e(&local_148,local_158,1);
  local_a0 = 4;
  FUN_14023423e(local_90,local_128);
  local_80 = 4;
  FUN_14023423e(local_70,local_108);
  local_d8 = &local_a0;
  local_d0 = local_60;
  FUN_14010d304(&local_c8);
  local_e8 = local_148;
  local_e0 = local_140;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_140 + 1) = (int)local_140[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_f8,&local_e8,&local_c8);
  FUN_14007f2db(local_c8,local_c0);
  if ((longlong *****)local_c8 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
  lVar11 = 0x30;
  do {
    if (*(longlong **)((longlong)&local_a0 + lVar11) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)&local_a0 + lVar11) + 0x10))();
      *(undefined8 *)((longlong)&local_a0 + lVar11) = 0;
      *(undefined4 *)((longlong)auStack_98 + lVar11) = 0;
    }
    lVar11 = lVar11 + -0x20;
  } while (lVar11 != -0x10);
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_108[0] != (longlong *)0x0) {
    (**(code **)(*local_108[0] + 0x10))();
  }
  FUN_140008f88(param_1 + 0x20,local_f8);
  if (local_f8[0] != (longlong *)0x0) {
    (**(code **)(*local_f8[0] + 0x10))();
  }
  if (local_158[0] != (longlong *)0x0) {
    (**(code **)(*local_158[0] + 0x10))();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  plVar1 = plStack_130;
  if (plStack_130 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_130 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_130)(plStack_130);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  plVar1 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_110 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  fVar12 = 0.0;
  if (param_3[1] != 0) {
    fVar12 = ((float)*param_3 / (float)param_3[1]) * 100.0;
  }
  if (100.0 <= fVar12) {
    fVar12 = 100.0;
  }
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 0x30) = fVar12;
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)((longlong)param_3 + 0x11);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)((longlong)param_3 + 0x12);
  lVar11 = *param_2;
  if ((((lVar11 != 0) && ((byte)param_3[2] < *(byte *)(lVar11 + 0x4a0))) &&
      ((ulonglong)((uint)(byte)param_3[2] * 0x50) + *(longlong *)(lVar11 + 0x498) != -0x10)) &&
     ((lVar11 = FUN_1418a5c14(), lVar11 != 0 && ((longlong)*(int *)(lVar11 + 0x20) != 0)))) {
    lVar9 = *(longlong *)(lVar11 + 0x18);
    lVar11 = (longlong)*(int *)(lVar11 + 0x20) * 0x18;
    do {
      FUN_145abbe7e(lVar9,&local_d8);
      if (local_d8 != (uint *)0x0) {
        puVar10 = local_d8 + 8;
        local_a0 = local_a0 & 0xffffff00;
        local_78[0] = 0;
        FUN_14575a19a(&local_a0,0);
        FUN_1448729ea(puVar10,&local_c8,&local_a0);
        uVar7 = FUN_14005fbd2(&local_c8,0);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
        if (pcVar5 != (code *)0x0) {
          ppppplVar8 = &local_c8;
          if (0x18 < local_b0) {
            ppppplVar8 = (longlong *****)local_c8;
          }
          (*pcVar5)(ppppplVar8);
        }
        if (0x18 < local_b0) {
          FUN_1400020a8(local_c8);
        }
        FUN_1448173f8(local_78);
        if (((char)local_a0 == '\x03') && (local_90[0] != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_90[0] + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_90[0] + 0x10))();
          }
        }
        FUN_140002266(&local_a0,&DAT_14b9a4ed6,uVar7);
        FUN_140009b9a(&local_c8,&local_a0);
        FUN_140008f88(param_1 + 0x38,&local_c8);
        if ((longlong *****)local_c8 != (longlong *****)0x0) {
          (*(code *)(*local_c8)[2])();
        }
        if (CONCAT44(uStack_9c,local_a0) != 0) {
          FUN_1400020a8();
        }
      }
      puVar6 = local_d0;
      if (local_d0 != (ulonglong *)0x0) {
        LOCK();
        puVar4 = local_d0 + 1;
        *(int *)puVar4 = (int)*puVar4 + -1;
        UNLOCK();
        if ((int)*puVar4 == 0) {
          (**(code **)*local_d0)(local_d0);
          LOCK();
          piVar2 = (int *)((longlong)puVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*puVar6 + 0x10))(puVar6);
          }
        }
      }
      lVar9 = lVar9 + 0x18;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != 0);
  }
  if ((local_60[0] ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424699e FUN_14424699e body=96 status=ok
// SIG undefined FUN_14424699e(void)

undefined8 FUN_14424699e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  *(int *)(param_1 + 2) = (int)param_1[2] + 2;
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = (longlong)(int)param_1[1] * 0x58;
    do {
      if (*(longlong *)(lVar1 + 0x50) == param_2) goto LAB_1442469f2;
      lVar1 = lVar1 + 0x58;
      lVar2 = lVar2 + -0x58;
    } while (lVar2 != 0);
  }
  lVar1 = param_1[3];
  *(int *)(param_1 + 5) = (int)param_1[5] + 2;
  if ((longlong)(int)param_1[4] != 0) {
    lVar2 = (longlong)(int)param_1[4] * 0x58;
    do {
      if (*(longlong *)(lVar1 + 0x50) == param_2) {
LAB_1442469f2:
        FUN_14424647e();
        return 1;
      }
      lVar1 = lVar1 + 0x58;
      lVar2 = lVar2 + -0x58;
    } while (lVar2 != 0);
  }
  return 0;
}



// FUNCTION 1442469fe FUN_1442469fe body=59 status=ok
// SIG undefined FUN_1442469fe(void)

void FUN_1442469fe(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbd58b8;
  if (DAT_14cbd58b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbd58b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144246a2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144246a3a FUN_144246a3a body=316 status=ok
// SIG undefined FUN_144246a3a(void)

undefined8 FUN_144246a3a(undefined8 param_1,longlong param_2)

{
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
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141864c34;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464cee30;
      local_48 = &LAB_148bfac22;
      local_50 = &LAB_140f21842;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (*(longlong *)(param_2 + 0x3f70) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144246bd2 FUN_144246bd2 body=1 status=ok
// SIG undefined FUN_144246bd2(void)

void FUN_144246bd2(void)

{
  return;
}



// FUNCTION 144246c66 FUN_144246c66 body=1 status=ok
// SIG undefined FUN_144246c66(void)

void FUN_144246c66(void)

{
  return;
}



// FUNCTION 144246c70 FUN_144246c70 body=69 status=ok
// SIG undefined FUN_144246c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144246c70(void)

{
  _DAT_14cbd58c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144246cb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd58d0,1);
  return;
}



// FUNCTION 144246cb5 FUN_144246cb5 body=69 status=ok
// SIG undefined FUN_144246cb5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144246cb5(void)

{
  _DAT_14cbd58d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144246cf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd58e0,1);
  return;
}



// FUNCTION 144246cfa FUN_144246cfa body=69 status=ok
// SIG undefined FUN_144246cfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144246cfa(void)

{
  _DAT_14cbd58f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144246d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd58f8,1);
  return;
}



// FUNCTION 144246d3f FUN_144246d3f body=69 status=ok
// SIG undefined FUN_144246d3f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144246d3f(void)

{
  _DAT_14cbd5908 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144246d81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd5910,1);
  return;
}



// FUNCTION 144246dde FUN_144246dde body=29 status=ok
// SIG undefined FUN_144246dde(void)

undefined8 FUN_144246dde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144246e26 FUN_144246e26 body=12 status=ok
// SIG undefined FUN_144246e26(void)

void FUN_144246e26(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144246e2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144246e32 FUN_144246e32 body=29 status=ok
// SIG undefined FUN_144246e32(void)

undefined8 FUN_144246e32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144246f00 FUN_144246f00 body=31 status=ok
// SIG undefined FUN_144246f00(void)

undefined8 FUN_144246f00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144246f20 FUN_144246f20 body=31 status=ok
// SIG undefined FUN_144246f20(void)

undefined8 FUN_144246f20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144246fda FUN_144246fda body=31 status=ok
// SIG undefined FUN_144246fda(void)

undefined8 FUN_144246fda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442470a2 FUN_1442470a2 body=29 status=ok
// SIG undefined FUN_1442470a2(void)

undefined8 FUN_1442470a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442470c0 FUN_1442470c0 body=83 status=ok
// SIG undefined FUN_1442470c0(void)

void FUN_1442470c0(longlong param_1)

{
  FUN_145a5bc9c(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xa0));
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144247114 FUN_144247114 body=60 status=ok
// SIG undefined FUN_144247114(void)

void FUN_144247114(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_145cc89b5(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144247150 FUN_144247150 body=64 status=ok
// SIG undefined FUN_144247150(void)

void FUN_144247150(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
  }
  FUN_141501d8f(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144247190 FUN_144247190 body=111 status=ok
// SIG undefined FUN_144247190(void)

void FUN_144247190(longlong param_1)

{
  FUN_1442471ff(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1459c441c(param_1 + 0x28);
  FUN_1418d3311(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1442471ff FUN_1442471ff body=95 status=ok
// SIG undefined FUN_1442471ff(void)

void FUN_1442471ff(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar1 + -1) = 0;
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      FUN_14424725e(plVar1 + -10);
      if ((longlong *)plVar1[-0xe] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-0xe] + 0x10))();
      }
      plVar1 = plVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14424725e FUN_14424725e body=54 status=ok
// SIG undefined FUN_14424725e(void)

void FUN_14424725e(longlong *param_1)

{
  FUN_144247294(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144247294 FUN_144247294 body=526 status=ok
// SIG undefined FUN_144247294(void)

void FUN_144247294(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar7 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_14424740c;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar11[lVar14] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar14 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar14 == lVar12) goto LAB_14424740c;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_14424740c:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar16 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar8 = 0x80;
    if (0x80 < (int)uVar16) {
      uVar8 = uVar16;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 1442474ca FUN_1442474ca body=12 status=ok
// SIG undefined FUN_1442474ca(void)

void FUN_1442474ca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001442474d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1442474d6 FUN_1442474d6 body=29 status=ok
// SIG undefined FUN_1442474d6(void)

undefined8 FUN_1442474d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442474f4 FUN_1442474f4 body=412 status=ok
// SIG undefined FUN_1442474f4(void)

undefined8 * FUN_1442474f4(undefined8 *param_1)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
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
  plVar1 = DAT_14c844840;
  param_1[0x1b] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144247692 FUN_144247692 body=29 status=ok
// SIG undefined FUN_144247692(void)

undefined8 FUN_144247692(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14424782e FUN_14424782e body=93 status=ok
// SIG undefined FUN_14424782e(void)

void FUN_14424782e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14424788c FUN_14424788c body=93 status=ok
// SIG undefined FUN_14424788c(void)

void FUN_14424788c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6820;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442478ea FUN_1442478ea body=126 status=ok
// SIG undefined FUN_1442478ea(void)

void FUN_1442478ea(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6820;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144247959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144247972 FUN_144247972 body=266 status=ok
// SIG undefined FUN_144247972(void)

undefined8 FUN_144247972(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144247a76;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144247a76;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144247a76:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144247a2a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140b9b50c(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144247a2a;
    }
  }
  uVar6 = 0;
LAB_144247a2a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144247a7e FUN_144247a7e body=29 status=ok
// SIG undefined FUN_144247a7e(void)

undefined8 FUN_144247a7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144247c1a FUN_144247c1a body=93 status=ok
// SIG undefined FUN_144247c1a(void)

void FUN_144247c1a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144247c78 FUN_144247c78 body=93 status=ok
// SIG undefined FUN_144247c78(void)

void FUN_144247c78(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6890;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144247cd6 FUN_144247cd6 body=126 status=ok
// SIG undefined FUN_144247cd6(void)

void FUN_144247cd6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6890;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144247d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144247d5e FUN_144247d5e body=266 status=ok
// SIG undefined FUN_144247d5e(void)

undefined8 FUN_144247d5e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144247e62;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144247e62;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144247e62:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144247e16;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140f45be4(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144247e16;
    }
  }
  uVar6 = 0;
LAB_144247e16:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144247e6a FUN_144247e6a body=29 status=ok
// SIG undefined FUN_144247e6a(void)

undefined8 FUN_144247e6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144248006 FUN_144248006 body=93 status=ok
// SIG undefined FUN_144248006(void)

void FUN_144248006(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144248064 FUN_144248064 body=93 status=ok
// SIG undefined FUN_144248064(void)

void FUN_144248064(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6900;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442480c2 FUN_1442480c2 body=126 status=ok
// SIG undefined FUN_1442480c2(void)

void FUN_1442480c2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6900;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144248131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14424814a FUN_14424814a body=266 status=ok
// SIG undefined FUN_14424814a(void)

undefined8 FUN_14424814a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14424824e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14424824e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14424824e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442481f5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_145bfb2be(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1442481f5;
    }
  }
  uVar6 = 0;
LAB_1442481f5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144248256 FUN_144248256 body=29 status=ok
// SIG undefined FUN_144248256(void)

undefined8 FUN_144248256(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442483f2 FUN_1442483f2 body=93 status=ok
// SIG undefined FUN_1442483f2(void)

void FUN_1442483f2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144248450 FUN_144248450 body=93 status=ok
// SIG undefined FUN_144248450(void)

void FUN_144248450(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6970;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442484ae FUN_1442484ae body=126 status=ok
// SIG undefined FUN_1442484ae(void)

void FUN_1442484ae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6970;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014424851d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144248536 FUN_144248536 body=266 status=ok
// SIG undefined FUN_144248536(void)

undefined8 FUN_144248536(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14424863a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14424863a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14424863a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442485ee;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_141237bb0(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1442485ee;
    }
  }
  uVar6 = 0;
LAB_1442485ee:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144248642 FUN_144248642 body=29 status=ok
// SIG undefined FUN_144248642(void)

undefined8 FUN_144248642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442487de FUN_1442487de body=93 status=ok
// SIG undefined FUN_1442487de(void)

void FUN_1442487de(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a69e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14424883c FUN_14424883c body=93 status=ok
// SIG undefined FUN_14424883c(void)

void FUN_14424883c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a69e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14424889a FUN_14424889a body=126 status=ok
// SIG undefined FUN_14424889a(void)

void FUN_14424889a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a69e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144248909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144248922 FUN_144248922 body=266 status=ok
// SIG undefined FUN_144248922(void)

undefined8 FUN_144248922(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144248a26;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144248a26;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144248a26:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442489da;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14016fae4(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1442489da;
    }
  }
  uVar6 = 0;
LAB_1442489da:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144248a2e FUN_144248a2e body=29 status=ok
// SIG undefined FUN_144248a2e(void)

undefined8 FUN_144248a2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144248bca FUN_144248bca body=93 status=ok
// SIG undefined FUN_144248bca(void)

void FUN_144248bca(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144248c28 FUN_144248c28 body=93 status=ok
// SIG undefined FUN_144248c28(void)

void FUN_144248c28(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6a50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144248c86 FUN_144248c86 body=126 status=ok
// SIG undefined FUN_144248c86(void)

void FUN_144248c86(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6a50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144248cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144248d0e FUN_144248d0e body=266 status=ok
// SIG undefined FUN_144248d0e(void)

undefined8 FUN_144248d0e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144248e12;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144248e12;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144248e12:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144248dc6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_140ebe1b0(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_144248dc6;
    }
  }
  uVar6 = 0;
LAB_144248dc6:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144248e1a FUN_144248e1a body=29 status=ok
// SIG undefined FUN_144248e1a(void)

undefined8 FUN_144248e1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144248fb6 FUN_144248fb6 body=93 status=ok
// SIG undefined FUN_144248fb6(void)

void FUN_144248fb6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144249014 FUN_144249014 body=93 status=ok
// SIG undefined FUN_144249014(void)

void FUN_144249014(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a6ac0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144249072 FUN_144249072 body=126 status=ok
// SIG undefined FUN_144249072(void)

void FUN_144249072(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6ac0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442490e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1442490fa FUN_1442490fa body=266 status=ok
// SIG undefined FUN_1442490fa(void)

undefined8 FUN_1442490fa(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442491fe;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1442491fe;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442491fe:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1442491a5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1457c6eee(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1442491a5;
    }
  }
  uVar6 = 0;
LAB_1442491a5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144249206 FUN_144249206 body=29 status=ok
// SIG undefined FUN_144249206(void)

undefined8 FUN_144249206(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144249238 FUN_144249238 body=93 status=ok
// SIG undefined FUN_144249238(void)

void FUN_144249238(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6b30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144249296 FUN_144249296 body=93 status=ok
// SIG undefined FUN_144249296(void)

void FUN_144249296(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6b30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442492f4 FUN_1442492f4 body=126 status=ok
// SIG undefined FUN_1442492f4(void)

void FUN_1442492f4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6b30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144249363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144249372 FUN_144249372 body=65 status=ok
// SIG undefined FUN_144249372(void)

void FUN_144249372(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1442493f8(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442493b4 FUN_1442493b4 body=67 status=ok
// SIG undefined FUN_1442493b4(void)

undefined8 FUN_1442493b4(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_1442493f8(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442493f8 FUN_1442493f8 body=412 status=ok
// SIG undefined FUN_1442493f8(void)

void FUN_1442493f8(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar10 = *param_2;
  FUN_1449027d0(*param_1,&local_40);
  plVar5 = *(longlong **)(local_40 + 0x290);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 7));
  *(int *)(plVar5 + 6) = (int)plVar5[6] + 1;
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
  bVar4 = *(byte *)(param_1 + 1);
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  lVar6 = *plVar5;
  uVar11 = (ulonglong)((uint)bVar4 * 0x50);
  lVar3 = lVar6 + uVar11;
  iVar8 = *(int *)(lVar6 + 0x24 + uVar11);
  if (*(int *)(lVar6 + 0x20 + uVar11) == iVar10) {
    if (iVar8 == 0) {
      iVar8 = 1;
      goto LAB_144249497;
    }
  }
  else {
    iVar8 = iVar8 + 1;
LAB_144249497:
    *(int *)(lVar3 + 0x20) = iVar10;
    *(int *)(lVar3 + 0x24) = iVar8;
  }
  iVar8 = *(int *)(lVar3 + 0x28);
  fVar13 = 0.0;
  if (iVar8 != 0) {
    fVar13 = (float)iVar10 / (float)iVar8;
  }
  fVar12 = *(float *)(lVar3 + 0x30);
  if ((fVar13 != fVar12) || (NAN(fVar13) || NAN(fVar12))) {
    iVar9 = *(int *)(lVar3 + 0x34) + 1;
LAB_1442494c7:
    *(float *)(lVar3 + 0x30) = fVar13;
    *(int *)(lVar3 + 0x34) = iVar9;
    fVar12 = fVar13;
  }
  else if (*(int *)(lVar3 + 0x34) == 0) {
    iVar9 = 1;
    goto LAB_1442494c7;
  }
  fVar13 = DAT_14c764088;
  if ((bool)*(char *)(lVar3 + 0x38) == fVar12 < DAT_14c764088) {
    if (*(int *)(lVar3 + 0x3c) == 0) {
      iVar9 = 1;
      goto LAB_144249503;
    }
  }
  else {
    iVar9 = *(int *)(lVar3 + 0x3c) + 1;
LAB_144249503:
    *(bool *)(lVar3 + 0x38) = fVar12 < DAT_14c764088;
    *(int *)(lVar3 + 0x3c) = iVar9;
  }
  if ((bool)*(char *)(lVar3 + 0x40) == (iVar10 == 0)) {
    if (*(int *)(lVar3 + 0x44) == 0) {
      iVar9 = 1;
      goto LAB_144249528;
    }
  }
  else {
    iVar9 = *(int *)(lVar3 + 0x44) + 1;
LAB_144249528:
    *(bool *)(lVar3 + 0x40) = iVar10 == 0;
    *(int *)(lVar3 + 0x44) = iVar9;
  }
  bVar7 = (iVar10 < iVar8 && iVar10 != 0) && fVar13 <= fVar12;
  if ((bool)*(char *)(lVar3 + 0x48) == bVar7) {
    if (*(int *)(lVar3 + 0x4c) != 0) goto LAB_144249560;
    iVar10 = 1;
  }
  else {
    iVar10 = *(int *)(lVar3 + 0x4c) + 1;
  }
  *(bool *)(lVar3 + 0x48) = bVar7;
  *(int *)(lVar3 + 0x4c) = iVar10;
LAB_144249560:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014424957e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 7));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144249596 FUN_144249596 body=29 status=ok
// SIG undefined FUN_144249596(void)

undefined8 FUN_144249596(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442495c8 FUN_1442495c8 body=93 status=ok
// SIG undefined FUN_1442495c8(void)

void FUN_1442495c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6ba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144249626 FUN_144249626 body=93 status=ok
// SIG undefined FUN_144249626(void)

void FUN_144249626(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e35290;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6ba0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144249684 FUN_144249684 body=126 status=ok
// SIG undefined FUN_144249684(void)

void FUN_144249684(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e35290;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6ba0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001442496f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144249702 FUN_144249702 body=65 status=ok
// SIG undefined FUN_144249702(void)

void FUN_144249702(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144249788(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144249744 FUN_144249744 body=67 status=ok
// SIG undefined FUN_144249744(void)

undefined8 FUN_144249744(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_144249788(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144249788 FUN_144249788 body=366 status=ok
// SIG undefined FUN_144249788(void)

void FUN_144249788(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar9 = *param_2;
  FUN_1449027d0(*param_1,&local_40);
  plVar5 = *(longlong **)(local_40 + 0x290);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 7));
  *(int *)(plVar5 + 6) = (int)plVar5[6] + 1;
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
  bVar4 = *(byte *)(param_1 + 1);
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  lVar6 = *plVar5;
  uVar10 = (ulonglong)((uint)bVar4 * 0x50);
  lVar3 = lVar6 + uVar10;
  iVar8 = *(int *)(lVar6 + 0x2c + uVar10);
  if (*(int *)(lVar6 + 0x28 + uVar10) == iVar9) {
    if (iVar8 == 0) {
      iVar8 = 1;
      goto LAB_144249827;
    }
  }
  else {
    iVar8 = iVar8 + 1;
LAB_144249827:
    *(int *)(lVar3 + 0x28) = iVar9;
    *(int *)(lVar3 + 0x2c) = iVar8;
  }
  if (iVar9 == 0) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = (float)*(int *)(lVar3 + 0x20) / (float)iVar9;
  }
  fVar11 = *(float *)(lVar3 + 0x30);
  if ((fVar12 != fVar11) || (NAN(fVar12) || NAN(fVar11))) {
    iVar8 = *(int *)(lVar3 + 0x34) + 1;
LAB_144249854:
    *(float *)(lVar3 + 0x30) = fVar12;
    *(int *)(lVar3 + 0x34) = iVar8;
    fVar11 = fVar12;
  }
  else if (*(int *)(lVar3 + 0x34) == 0) {
    iVar8 = 1;
    goto LAB_144249854;
  }
  fVar12 = DAT_14c764088;
  if ((bool)*(char *)(lVar3 + 0x38) == fVar11 < DAT_14c764088) {
    if (*(int *)(lVar3 + 0x3c) == 0) {
      iVar8 = 1;
      goto LAB_14424988c;
    }
  }
  else {
    iVar8 = *(int *)(lVar3 + 0x3c) + 1;
LAB_14424988c:
    *(bool *)(lVar3 + 0x38) = fVar11 < DAT_14c764088;
    *(int *)(lVar3 + 0x3c) = iVar8;
  }
  if ((fVar11 < fVar12) || (*(char *)(lVar3 + 0x40) != '\0')) {
    bVar7 = false;
  }
  else {
    bVar7 = *(int *)(lVar3 + 0x20) < iVar9;
  }
  if (bVar7 == (bool)*(char *)(lVar3 + 0x48)) {
    if (*(int *)(lVar3 + 0x4c) != 0) goto LAB_1442498c2;
    iVar9 = 1;
  }
  else {
    iVar9 = *(int *)(lVar3 + 0x4c) + 1;
  }
  *(bool *)(lVar3 + 0x48) = bVar7;
  *(int *)(lVar3 + 0x4c) = iVar9;
LAB_1442498c2:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001442498e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 7));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442498f8 FUN_1442498f8 body=397 status=ok
// SIG undefined FUN_1442498f8(void)

void FUN_1442498f8(undefined8 *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(int *)(param_2 + 0xf8) != -1) && (lVar3 = *(longlong *)(param_2 + 8), lVar3 != 0)) {
    if ((longlong)*(int *)(param_2 + 0x20) != 0) {
      lVar7 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar7) == 0) goto LAB_144249a5e;
        lVar7 = lVar7 + 8;
      } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar7);
    }
    local_40 = *(longlong *)(lVar3 + 0xa0);
    if ((local_40 == 0) && (local_40 = *(longlong *)(lVar3 + 0x98), local_40 == 0)) {
      local_40 = *(longlong *)(lVar3 + 0x3c);
    }
    FUN_1400021e4(&local_40,&local_38);
    lVar3 = local_38;
    iVar4 = (int)uStack_30;
    uVar5 = (int)uStack_30 - 1;
    if ((int)uStack_30 == 0) {
      uVar5 = 0;
    }
    if (0 < (int)uVar5) {
      uVar6 = 0;
      do {
        uVar1 = *(ushort *)(local_38 + uVar6 * 2);
        *(ushort *)(local_38 + uVar6 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        uVar6 = uVar6 + 1;
      } while (uVar5 != uVar6);
    }
    local_38 = 0;
    uStack_30 = 0;
    if (*(int *)(param_1 + 2) == iVar4) {
      bVar9 = true;
      if (1 < iVar4) {
        lVar7 = 0;
        while( true ) {
          uVar1 = *(ushort *)(param_1[1] + lVar7);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(lVar3 + lVar7);
          uVar8 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_144249a05;
            }
            iVar4 = uVar5 - uVar8;
            goto LAB_144249a37;
          }
          if (uVar1 == 0) break;
LAB_144249a05:
          lVar7 = lVar7 + 2;
        }
        iVar4 = 0;
LAB_144249a37:
        bVar9 = iVar4 == 0;
      }
    }
    else {
      bVar9 = *(int *)(param_1 + 2) + iVar4 == 1;
    }
    if ((lVar3 != 0) && (FUN_1400020a8(), local_38 != 0)) {
      FUN_1400020a8();
    }
    if (bVar9) {
      *(int *)*param_1 = *(int *)*param_1 + 1;
    }
  }
LAB_144249a5e:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144249a86 FUN_144249a86 body=115 status=ok
// SIG undefined FUN_144249a86(void)

longlong FUN_144249a86(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b9a6c10;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  return param_2 + 0x18;
}



// FUNCTION 144249b0c FUN_144249b0c body=57 status=ok
// SIG undefined FUN_144249b0c(void)

undefined8 * FUN_144249b0c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9a6c10;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144249be6 FUN_144249be6 body=29 status=ok
// SIG undefined FUN_144249be6(void)

undefined8 FUN_144249be6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144249d82 FUN_144249d82 body=93 status=ok
// SIG undefined FUN_144249d82(void)

void FUN_144249d82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a6df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144249de0 FUN_144249de0 body=93 status=ok
// SIG undefined FUN_144249de0(void)

void FUN_144249de0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a6df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6d80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144249e3e FUN_144249e3e body=126 status=ok
// SIG undefined FUN_144249e3e(void)

void FUN_144249e3e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a6df0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6d80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144249ead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144249ebc FUN_144249ebc body=85 status=ok
// SIG undefined FUN_144249ebc(void)

void FUN_144249ebc(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = FUN_14011c349();
  local_20 = *(undefined8 *)(lVar2 + 0x60);
  FUN_1414882a8(uVar1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144249f12 FUN_144249f12 body=295 status=ok
// SIG undefined FUN_144249f12(void)

undefined8 FUN_144249f12(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14424a033;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14424a033;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar7 = local_30;
  }
  else {
LAB_14424a033:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144249fe6;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      lVar5 = FUN_14011c349();
      local_30 = *(longlong *)(lVar5 + 0x60);
      FUN_1414882a8(uVar6,param_2);
      uVar6 = 1;
      goto LAB_144249fe6;
    }
  }
  uVar6 = 0;
LAB_144249fe6:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424a03a FUN_14424a03a body=29 status=ok
// SIG undefined FUN_14424a03a(void)

undefined8 FUN_14424a03a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14424a1d6 FUN_14424a1d6 body=93 status=ok
// SIG undefined FUN_14424a1d6(void)

void FUN_14424a1d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a6df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14424a234 FUN_14424a234 body=93 status=ok
// SIG undefined FUN_14424a234(void)

void FUN_14424a234(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9a6df0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a6e60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14424a292 FUN_14424a292 body=126 status=ok
// SIG undefined FUN_14424a292(void)

void FUN_14424a292(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9a6df0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a6e60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014424a301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14424a310 FUN_14424a310 body=66 status=ok
// SIG undefined FUN_14424a310(void)

void FUN_14424a310(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_3;
  FUN_14424a476(param_1 + 0x20,param_2,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424a354 FUN_14424a354 body=288 status=ok
// SIG undefined FUN_14424a354(void)

undefined8 FUN_14424a354(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_31 = param_3;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14424a46e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14424a46e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14424a46e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14424a421;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14424a476(param_1 + 0x20,param_2,&local_31);
      uVar6 = 1;
      goto LAB_14424a421;
    }
  }
  uVar6 = 0;
LAB_14424a421:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424a476 FUN_14424a476 body=108 status=ok
// SIG undefined FUN_14424a476(void)

void FUN_14424a476(undefined8 *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = *param_3;
  uVar2 = *param_1;
  lVar3 = FUN_14011c349();
  local_28 = *(undefined8 *)(lVar3 + 0x48);
  FUN_1414882a8(uVar2,param_2);
  if (cVar1 != -1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424a634 FUN_14424a634 body=203 status=ok
// SIG undefined FUN_14424a634(void)

void FUN_14424a634(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_8a8 [32];
  undefined1 local_888 [1072];
  undefined1 local_458 [1072];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_8a8;
  if ((*(int *)(param_2 + 0xf8) != -1) && (*(longlong *)(param_2 + 8) != 0)) {
    uVar1 = param_1[1];
    if ((longlong)*(int *)(param_2 + 0x20) != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_2 + 0x18) + lVar3) == 0) goto LAB_14424a6d9;
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(param_2 + 0x20) * 8 != lVar3);
    }
    uVar2 = *param_1;
    FUN_140d8e6ac(local_458);
    FUN_140d8ee42(uVar1,local_458,param_2);
    FUN_1413505e4(local_888,local_458);
    FUN_141286efe(local_458);
    FUN_1418f484e(uVar2,local_888);
    FUN_141286efe(local_888);
  }
LAB_14424a6d9:
  if ((local_28 ^ (ulonglong)auStack_8a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424a72a FUN_14424a72a body=29 status=ok
// SIG undefined FUN_14424a72a(void)

undefined8 FUN_14424a72a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14424a834 FUN_14424a834 body=29 status=ok
// SIG undefined FUN_14424a834(void)

undefined8 FUN_14424a834(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14424a851 FUN_14424a851 body=17785 status=ok
// SIG undefined FUN_14424a851(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14424a851(void)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  char **local_118 [2];
  char *local_108;
  int iStack_100;
  uint uStack_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 local_68 [8];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_108 = "AssetRegistry";
  iStack_100 = 0xd;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd40d0 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_108,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_108,&DAT_14cbd40d8);
  if (cVar2 == '\0') {
    _DAT_14cbd40d8 = 0;
    uRam000000014cbd40e0 = 0;
  }
  if (local_108 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbd40e8 = 0x47efffffe0000000;
  _DAT_14cbd40f0 = 0x47efffffe0000000;
  _DAT_14cbd40f8 = 0x47efffffe0000000;
  _DAT_14cbd4100 = 0x47efffffe0000000;
  _DAT_14cbd4108 = 0x47efffffe0000000;
  _DAT_14cbd4110 = 0x47efffffe0000000;
  _DAT_14cbd4118 = 0x47efffffe0000000;
  _DAT_14cbd4120 = 0x47efffffe0000000;
  local_108 = "Cash";
  iStack_100 = 4;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4128 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd4130,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_14423eb2c);
  local_108 = "bone";
  iStack_100 = 4;
  uStack_fc = uStack_fc & 0xffffff00;
  FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4144 = 0;
  FUN_14052b5e0(&DAT_14cbd4140,"PlayerAwareness",0);
  _DAT_14cbd4150 = "PlayerAwareness";
  local_108 = "basic";
  iStack_100 = 5;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4158 = (ulonglong)uVar3;
  local_108 = "challenge";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4160 = (ulonglong)uVar3;
  local_108 = "online";
  iStack_100 = 6;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4168 = (ulonglong)uVar3;
  local_108 = "social";
  iStack_100 = 6;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4170 = (ulonglong)uVar3;
  local_108 = "alert";
  iStack_100 = 5;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4178 = (ulonglong)uVar3;
  local_108 = "photo_mode";
  iStack_100 = 10;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4180 = (ulonglong)uVar3;
  local_108 = "generic_task";
  iStack_100 = 0xc;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4188 = (ulonglong)uVar3;
  local_108 = "mission";
  iStack_100 = 7;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4190 = (ulonglong)uVar3;
  local_108 = "mail";
  iStack_100 = 4;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4198 = (ulonglong)uVar3;
  local_108 = "respawn";
  iStack_100 = 7;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41a0 = (ulonglong)uVar3;
  local_108 = "tutorial";
  iStack_100 = 8;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41a8 = (ulonglong)uVar3;
  local_108 = "special_notification";
  iStack_100 = 0x14;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41b0 = (ulonglong)uVar3;
  local_108 = "generic_notification";
  iStack_100 = 0x14;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41b8 = (ulonglong)uVar3;
  local_108 = "vault_card";
  iStack_100 = 10;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41c0 = (ulonglong)uVar3;
  local_108 = "ONLINE_MESSAGE";
  iStack_100 = 0xe;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41c8 = (ulonglong)uVar3;
  local_108 = "INGAME_MESSAGE";
  iStack_100 = 0xe;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41d0 = (ulonglong)uVar3;
  local_108 = "NOTIFICATION_MESSAGE";
  iStack_100 = 0x14;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41d8 = (ulonglong)uVar3;
  local_108 = "MENU_TUTORIAL_MESSAGE";
  iStack_100 = 0x15;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41e0 = (ulonglong)uVar3;
  local_108 = "collectible";
  iStack_100 = 0xb;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd41e8 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbd41f0,L"UNSET",1);
  local_108 = "init";
  iStack_100 = 4;
  uStack_fc = uStack_fc & 0xffffff00;
  FUN_14001a6c0(&local_108,1);
  local_108 = "update";
  iStack_100 = 6;
  uStack_fc = uStack_fc & 0xffffff00;
  FUN_14001a6c0(&local_108,1);
  local_108 = "config_update";
  iStack_100 = 0xd;
  uStack_fc = uStack_fc & 0xffffff00;
  FUN_14001a6c0(&local_108,1);
  local_108 = "deinit";
  iStack_100 = 6;
  uStack_fc = uStack_fc & 0xffffff00;
  FUN_14001a6c0(&local_108,1);
  FUN_1446f470e(&DAT_14cbd41f8,L"Party",1);
  FUN_1446f470e(&DAT_14cbd4200,&DAT_149e063b2,1);
  local_108 = "Use";
  iStack_100 = 3;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4208 = (ulonglong)uVar3;
  local_108 = "Sight";
  iStack_100 = 5;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4210 = (ulonglong)uVar3;
  local_108 = "TargetLock";
  iStack_100 = 10;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4218 = (ulonglong)uVar3;
  FUN_140056680(&DAT_14cbd4220,L"GoreStump_");
  atexit((_func_5014 *)&LAB_14423eb3d);
  FUN_140056680(&DAT_14cbd4230,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_14423eb4e);
  FUN_140056680(&DAT_14cbd4240,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_14423eb5f);
  FUN_140056680(&DAT_14cbd4250,L"GoreFX_");
  atexit((_func_5014 *)&LAB_14423eb70);
  FUN_1446f470e(&DAT_14cbd4260,L"LIMB_GORED",1);
  _DAT_14cbd4268 = 0x4072c00000000000;
  _DAT_14cbd4270 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd4278,L"body",1);
  FUN_1446f470e(&DAT_14cbd4280,L"title_card",1);
  FUN_1446f470e(&DAT_14cbd4288,L"StreamableTravelStation",1);
  local_108 = (char *)0xad14c14ab114ffd;
  iStack_100 = 0x8bdeea31;
  uStack_fc = 0x9293fc15;
  _DAT_14cbd4290 = 0xab114ffd;
  uRam000000014cbd4294 = 0xad14c14;
  uRam000000014cbd4298 = 0x8bdeea31;
  uRam000000014cbd429c = 0x9293fc15;
  FUN_141005458(&local_108,3,L"TravelStationObject",0);
  atexit((_func_5014 *)&LAB_14423f19b);
  FUN_1446f470e(&DAT_14cbd42a0,L"AreaComponent",1);
  FUN_1446f470e(&DAT_14cbd42a8,L"StationState",1);
  FUN_1446f470e(&DAT_14cbd42c0,L"Locked",1);
  FUN_1446f470e(&DAT_14cbd42c8,L"Unlocked",1);
  FUN_1446f470e(&DAT_14cbd42b8,L"Active",1);
  FUN_1446f470e(&DAT_14cbd42b0,L"InUse",1);
  FUN_1446f470e(&DAT_14cbd42d0,L"MissionReplayTravelStation",1);
  FUN_1446f470e(&DAT_14cbd42d8,L"DestinationOnlyTravelStation",1);
  FUN_1446f470e(&DAT_14cbd42e0,L"SkipStartAnimation",1);
  FUN_1446f470e(&DAT_14cbd42e8,L"AnimValue",1);
  FUN_1446f470e(&DAT_14cbd42f0,L"AnimValue",1);
  FUN_1446f470e(&DAT_14cbd42f8,L"AllowMovementDuringStart",1);
  FUN_1446f470e(&DAT_14cbd4300,L"Force",1);
  FUN_1446f470e(&DAT_14cbd4318,L"Stasis",1);
  FUN_1446f470e(&DAT_14cbd4320,L"StasisEnd",1);
  FUN_1446f470e(&DAT_14cbd4328,L"Target Location",1);
  FUN_1446f470e(&DAT_14cbd4330,L"State",1);
  local_108 = "Use";
  iStack_100 = 3;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4338 = (ulonglong)uVar3;
  local_108 = "StopUse";
  iStack_100 = 7;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4340 = (ulonglong)uVar3;
  local_108 = "SecondaryUse";
  iStack_100 = 0xc;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4348 = (ulonglong)uVar3;
  local_108 = "StopSecondaryUse";
  iStack_100 = 0x10;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4350 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbd4358,L"Trigger",1);
  FUN_140056680(&DAT_14cbd4360,L"available");
  atexit((_func_5014 *)&LAB_14423ffdd);
  FUN_140056680(&DAT_14cbd4370,L"synced");
  atexit((_func_5014 *)&LAB_14423ffee);
  FUN_140056680(&DAT_14cbd4380,L"offline");
  atexit((_func_5014 *)&LAB_14423ffff);
  FUN_140056680(&DAT_14cbd4390,L"incompatible");
  atexit((_func_5014 *)&LAB_144240010);
  FUN_140056680(&DAT_14cbd43a0,L"conflict");
  atexit((_func_5014 *)&LAB_144240021);
  _DAT_14cbd43b0 = 0;
  uRam000000014cbd43b8 = 0;
  _DAT_14cbd43c0 = 0;
  DAT_14cbd43c8 = 0;
  uRam000000014cbd43d0 = 0;
  FUN_1446ddda2(&DAT_14cbd43b0,"Matchmaking_AutomaticRegionText",0);
  atexit((_func_5014 *)&LAB_144240032);
  _DAT_14cbd43d8 = 0;
  uRam000000014cbd43e0 = 0;
  _DAT_14cbd43e8 = 0;
  DAT_14cbd43f0 = 0;
  uRam000000014cbd43f8 = 0;
  FUN_1446ddda2(&DAT_14cbd43d8,"Matchmaking_ManualRegionText",0);
  atexit((_func_5014 *)&LAB_144240043);
  _DAT_14cbd4400 = 0;
  uRam000000014cbd4408 = 0;
  _DAT_14cbd4410 = 0;
  DAT_14cbd4418 = 0;
  uRam000000014cbd4420 = 0;
  FUN_1446ddda2(&DAT_14cbd4400,"PingDisplayText",0);
  atexit((_func_5014 *)&LAB_144240054);
  _DAT_14cbd4428 = 0;
  uRam000000014cbd4430 = 0;
  _DAT_14cbd4438 = 0;
  DAT_14cbd4440 = 0;
  uRam000000014cbd4448 = 0;
  FUN_1446ddda2(&DAT_14cbd4428,"GoodPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144240065);
  _DAT_14cbd4450 = 0;
  uRam000000014cbd4458 = 0;
  _DAT_14cbd4460 = 0;
  DAT_14cbd4468 = 0;
  uRam000000014cbd4470 = 0;
  FUN_1446ddda2(&DAT_14cbd4450,"OkPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144240076);
  _DAT_14cbd4478 = 0;
  uRam000000014cbd4480 = 0;
  _DAT_14cbd4488 = 0;
  DAT_14cbd4490 = 0;
  uRam000000014cbd4498 = 0;
  FUN_1446ddda2(&DAT_14cbd4478,"BadPingDisplayText",0);
  atexit((_func_5014 *)&LAB_144240087);
  DAT_14cbd5988 = 0;
  DAT_14cbd5989 = 1;
  _DAT_14cbd598c = 0;
  _DAT_14cbd5990 = 1;
  _DAT_14cbd5994 = 0x144;
  _DAT_14cbd5998 = 0;
  _DAT_14cbd599c = 0;
  DAT_14cbd44a0 = 0;
  DAT_14cbd44a1 = 1;
  _DAT_14cbd44a4 = 0;
  _DAT_14cbd44a8 = 2;
  _DAT_14cbd44ac = 0x144;
  _DAT_14cbd44b0 = 0;
  _DAT_14cbd44b4 = 0;
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
  DAT_14cbd44b8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  DAT_14cbd44c0 = DAT_14c844848;
  atexit((_func_5014 *)&LAB_144240098);
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
  DAT_14cbd44c8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  DAT_14cbd44d0 = DAT_14c844848;
  atexit((_func_5014 *)&LAB_1442400ac);
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
  DAT_14cbd44d8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  DAT_14cbd44e0 = DAT_14c844848;
  atexit((_func_5014 *)&LAB_1442400c0);
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
  DAT_14cbd44e8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  DAT_14cbd44f0 = DAT_14c844848;
  atexit((_func_5014 *)&LAB_1442400d4);
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
  DAT_14cbd44f8 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  DAT_14cbd4500 = DAT_14c844848;
  atexit((_func_5014 *)&LAB_1442400e8);
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
  DAT_14cbd4508 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  atexit((_func_5014 *)&LAB_1442400fc);
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
  DAT_14cbd4510 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  atexit((_func_5014 *)&LAB_144240110);
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
  DAT_14cbd4518 = DAT_14c844840;
  if (DAT_14c844840 != (longlong *)0x0) {
    (**(code **)(*DAT_14c844840 + 8))();
  }
  atexit((_func_5014 *)&LAB_144240124);
  _DAT_14cbd4524 = 0;
  FUN_14052b5e0(&DAT_14cbd4520,"character",0);
  _DAT_14cbd4530 = 0;
  FUN_14052b5e0(&DAT_14cbd452c,"profile",0);
  local_108 = "state_rem";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4538 = (ulonglong)uVar3;
  local_108 = "state_add";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4540 = (ulonglong)uVar3;
  local_108 = "state_remove_primary";
  iStack_100 = 0x14;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4548 = (ulonglong)uVar3;
  local_108 = "entry_sets";
  iStack_100 = 10;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4550 = (ulonglong)uVar3;
  local_108 = "entries";
  iStack_100 = 7;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4558 = (ulonglong)uVar3;
  local_108 = "menu_title";
  iStack_100 = 10;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4560 = (ulonglong)uVar3;
  local_108 = "actions";
  iStack_100 = 7;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4568 = (ulonglong)uVar3;
  local_108 = "loc_text";
  iStack_100 = 8;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4570 = (ulonglong)uVar3;
  local_108 = "desc_text";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4578 = (ulonglong)uVar3;
  local_108 = "style";
  iStack_100 = 5;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4580 = (ulonglong)uVar3;
  local_108 = "horizontal";
  iStack_100 = 10;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4588 = (ulonglong)uVar3;
  local_108 = "entry_set_default";
  iStack_100 = 0x11;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4590 = (ulonglong)uVar3;
  local_108 = "required_nexus_layer";
  iStack_100 = 0x14;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4598 = (ulonglong)uVar3;
  local_108 = "tooltip_key";
  iStack_100 = 0xb;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd45a0 = (ulonglong)uVar3;
  local_108 = "set_push";
  iStack_100 = 8;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd45a8 = (ulonglong)uVar3;
  local_108 = "exit_game";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd45b0 = (ulonglong)uVar3;
  local_108 = "back";
  iStack_100 = 4;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd45b8 = (ulonglong)uVar3;
  local_108 = "back_actions";
  iStack_100 = 0xc;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd45c0 = (ulonglong)uVar3;
  _DAT_14cbd45c8 = 0;
  uRam000000014cbd45d0 = 0;
  _DAT_14cbd45d8 = 0;
  DAT_14cbd45e0 = 0;
  uRam000000014cbd45e8 = 0;
  FUN_1446ddda2(&DAT_14cbd45c8,&DAT_14b81bd00,0);
  atexit((_func_5014 *)&LAB_14424026c);
  local_108 = "num_rows_override";
  iStack_100 = 0x11;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd45f0 = (ulonglong)uVar3;
  local_108 = "show_capacity_text";
  iStack_100 = 0x12;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd45f8 = (ulonglong)uVar3;
  local_108 = "num_columns_override";
  iStack_100 = 0x14;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4600 = (ulonglong)uVar3;
  local_108 = "sort_list_config";
  iStack_100 = 0x10;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4608 = (ulonglong)uVar3;
  local_108 = "filter_list_config";
  iStack_100 = 0x12;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4610 = (ulonglong)uVar3;
  local_108 = "default_sort_ident";
  iStack_100 = 0x12;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4618 = (ulonglong)uVar3;
  local_108 = "enable_filter";
  iStack_100 = 0xd;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4620 = (ulonglong)uVar3;
  local_108 = "enable_sort";
  iStack_100 = 0xb;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4628 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd4630,"backpack_item_grid");
  atexit((_func_5014 *)&LAB_14424027d);
  FUN_1400b22c2(&DAT_14cbd4640,"bpack_sort_asc_dsc");
  atexit((_func_5014 *)&LAB_14424028e);
  FUN_1400b22c2(&DAT_14cbd4650,"sort-dropdown");
  atexit((_func_5014 *)&LAB_14424029f);
  FUN_1400b22c2(&DAT_14cbd4660,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442402b0);
  local_108 = "ITEM_CARD";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4670 = (ulonglong)uVar3;
  local_108 = "ITEM_CARD_COMPARE";
  iStack_100 = 0x11;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4678 = (ulonglong)uVar3;
  local_108 = "MENU_FULL_BACKPACK";
  iStack_100 = 0x12;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4680 = (ulonglong)uVar3;
  local_108 = "MENU_POPUP_BACKPACK";
  iStack_100 = 0x13;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4688 = (ulonglong)uVar3;
  local_108 = "MENU_PLAYER_STATS";
  iStack_100 = 0x11;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4690 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd4698,"filter-dropdown");
  atexit((_func_5014 *)&LAB_1442402c1);
  FUN_1400b22c2(&DAT_14cbd46a8,"equip_slot_dropdown");
  atexit((_func_5014 *)&LAB_1442402d2);
  FUN_1400b22c2(&DAT_14cbd46b8,"mark-dropdown");
  atexit((_func_5014 *)&LAB_1442402e3);
  FUN_1400b22c2(&DAT_14cbd46c8,"item-dropdown");
  atexit((_func_5014 *)&LAB_1442402f4);
  FUN_1400b22c2(&DAT_14cbd46d8,"sort-dropdown");
  atexit((_func_5014 *)&LAB_144240305);
  FUN_1400b22c2(&DAT_14cbd46e8,&DAT_149e3cc88);
  atexit((_func_5014 *)&LAB_144240316);
  FUN_1400b22c2(&DAT_14cbd46f8,"Popup");
  atexit((_func_5014 *)&LAB_144240327);
  FUN_1400b22c2(&DAT_14cbd4708,"Fullsize");
  atexit((_func_5014 *)&LAB_144240338);
  FUN_1400b22c2(&DAT_14cbd4718,"EchoLogs");
  atexit((_func_5014 *)&LAB_144240349);
  FUN_1400b22c2(&DAT_14cbd4728,"PlayerStats");
  atexit((_func_5014 *)&LAB_14424035a);
  FUN_1400b22c2(&DAT_14cbd4738,"RewardCenter");
  atexit((_func_5014 *)&LAB_14424036b);
  FUN_140056680(&DAT_14cbd4748,L"reset");
  atexit((_func_5014 *)&LAB_14424037c);
  local_108 = "add_on_activate";
  iStack_100 = 0xf;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4758 = (ulonglong)uVar3;
  local_108 = "remove_on_deactivate";
  iStack_100 = 0x14;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4760 = (ulonglong)uVar3;
  local_108 = "filter_selected";
  iStack_100 = 0xf;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4768 = (ulonglong)uVar3;
  local_108 = "hide_messages_on_deactivate";
  iStack_100 = 0x1b;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4770 = (ulonglong)uVar3;
  local_108 = "drop_action_supported";
  iStack_100 = 0x15;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4778 = (ulonglong)uVar3;
  local_108 = "equip_action_supported";
  iStack_100 = 0x16;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4780 = (ulonglong)uVar3;
  local_108 = "unequip_action_supported";
  iStack_100 = 0x18;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4788 = (ulonglong)uVar3;
  local_108 = "compare_action_supported";
  iStack_100 = 0x18;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4790 = (ulonglong)uVar3;
  local_108 = "mark_item_action_supported";
  iStack_100 = 0x1a;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4798 = (ulonglong)uVar3;
  local_108 = "mark_multiple_items_supported";
  iStack_100 = 0x1d;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47a0 = (ulonglong)uVar3;
  local_108 = "remote_inventory_action_supported";
  iStack_100 = 0x21;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47a8 = (ulonglong)uVar3;
  local_108 = "unequip_message_ident";
  iStack_100 = 0x15;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47b0 = (ulonglong)uVar3;
  local_108 = "equip_message_ident";
  iStack_100 = 0x13;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47b8 = (ulonglong)uVar3;
  local_108 = "swap_message_ident";
  iStack_100 = 0x12;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47c0 = (ulonglong)uVar3;
  local_108 = "drop_message_ident";
  iStack_100 = 0x12;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47c8 = (ulonglong)uVar3;
  local_108 = "cant_equip_message_ident";
  iStack_100 = 0x18;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47d0 = (ulonglong)uVar3;
  local_108 = "insufficient_space_error_ident";
  iStack_100 = 0x1e;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47d8 = (ulonglong)uVar3;
  local_108 = "multiple_item_deposit_ident";
  iStack_100 = 0x1b;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47e0 = (ulonglong)uVar3;
  local_108 = "deposit_message_ident";
  iStack_100 = 0x15;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47e8 = (ulonglong)uVar3;
  local_108 = "incomplete_deposit_ident";
  iStack_100 = 0x18;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47f0 = (ulonglong)uVar3;
  local_108 = "backpack_class_html";
  iStack_100 = 0x13;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd47f8 = (ulonglong)uVar3;
  local_108 = "standin_config";
  iStack_100 = 0xe;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4800 = (ulonglong)uVar3;
  local_108 = "player_standin_tag";
  iStack_100 = 0x12;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4808 = (ulonglong)uVar3;
  local_108 = "echo_bot_standin_tag";
  iStack_100 = 0x14;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4810 = (ulonglong)uVar3;
  local_108 = "sortable_numeric_stats";
  iStack_100 = 0x16;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4818 = (ulonglong)uVar3;
  local_108 = "escape_hold_supported";
  iStack_100 = 0x15;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4820 = (ulonglong)uVar3;
  local_108 = "max_visible_items";
  iStack_100 = 0x11;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4828 = (ulonglong)uVar3;
  FUN_140056680(&DAT_14cbd4830,L"action_ui_drop_item");
  atexit((_func_5014 *)&LAB_14424038d);
  FUN_140056680(&DAT_14cbd4840,L"action_ui_equip_item");
  atexit((_func_5014 *)&LAB_14424039e);
  FUN_140056680(&DAT_14cbd4850,L"action_ui_unequip_item");
  atexit((_func_5014 *)&LAB_1442403af);
  FUN_140056680(&DAT_14cbd4860,L"action_ui_compare_item");
  atexit((_func_5014 *)&LAB_1442403c0);
  FUN_140056680(&DAT_14cbd4870,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_1442403d1);
  FUN_140056680(&DAT_14cbd4880,L"action_ui_set_item_flag");
  atexit((_func_5014 *)&LAB_1442403e2);
  FUN_140056680(&DAT_14cbd4890,L"action_ui_remote_bank_deposit");
  atexit((_func_5014 *)&LAB_1442403f3);
  FUN_140056680(&DAT_14cbd48a0,L"action_ui_mark_all_filtered");
  atexit((_func_5014 *)&LAB_144240404);
  FUN_140056680(&DAT_14cbd48b0,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_144240415);
  FUN_140056680(&DAT_14cbd48c0,L"action_ui_show_player_stats");
  atexit((_func_5014 *)&LAB_144240426);
  FUN_140056680(&DAT_14cbd48d0,L"action_ui_mark_hovered_as_junk");
  atexit((_func_5014 *)&LAB_144240437);
  FUN_140056680(&DAT_14cbd48e0,L"action_ui_open_reward_center");
  atexit((_func_5014 *)&LAB_144240448);
  FUN_140056680(&DAT_14cbd48f0,L"action_ui_select_slot_1");
  atexit((_func_5014 *)&LAB_144240459);
  FUN_140056680(&DAT_14cbd4900,L"action_ui_select_slot_2");
  atexit((_func_5014 *)&LAB_14424046a);
  FUN_140056680(&DAT_14cbd4910,L"action_ui_select_slot_3");
  atexit((_func_5014 *)&LAB_14424047b);
  FUN_140056680(&DAT_14cbd4920,L"action_ui_select_slot_4");
  atexit((_func_5014 *)&LAB_14424048c);
  FUN_140056680(&DAT_14cbd4930,L"action_ui_copy_focused_item_serial_number");
  atexit((_func_5014 *)&LAB_14424049d);
  FUN_140056680(&DAT_14cbd4940,L"action_ui_menu_escape_hold");
  atexit((_func_5014 *)&LAB_1442404ae);
  FUN_140056680(&DAT_14cbd4950,L"action_ui_inspect_item");
  atexit((_func_5014 *)&LAB_1442404bf);
  FUN_140056680(&DAT_14cbd4960,L"action_ui_flip_item_card");
  atexit((_func_5014 *)&LAB_1442404d0);
  FUN_140056680(&DAT_14cbd4970,L"action_ui_open_all_rewards");
  atexit((_func_5014 *)&LAB_1442404e1);
  FUN_140056680(&DAT_14cbd4980,L"SelectText");
  atexit((_func_5014 *)&LAB_1442404f2);
  FUN_140056680(&DAT_14cbd4990,L"CompareHint");
  atexit((_func_5014 *)&LAB_144240503);
  FUN_140056680(&DAT_14cbd49a0,L"EquipHint");
  atexit((_func_5014 *)&LAB_144240514);
  FUN_140056680(&DAT_14cbd49b0,L"UnequipHint");
  atexit((_func_5014 *)&LAB_144240525);
  FUN_140056680(&DAT_14cbd49c0,L"DropHint");
  atexit((_func_5014 *)&LAB_144240536);
  FUN_140056680(&DAT_14cbd49d0,L"SetItemFlagHint");
  atexit((_func_5014 *)&LAB_144240547);
  FUN_140056680(&DAT_14cbd49e0,L"ToggleJunkHint");
  atexit((_func_5014 *)&LAB_144240558);
  FUN_140056680(&DAT_14cbd49f0,L"MarkAllFilteredHint");
  atexit((_func_5014 *)&LAB_144240569);
  FUN_140056680(&DAT_14cbd4a00,L"PlayerStatsHint");
  atexit((_func_5014 *)&LAB_14424057a);
  FUN_140056680(&DAT_14cbd4a10,L"SwapWeaponsHint");
  atexit((_func_5014 *)&LAB_14424058b);
  FUN_140056680(&DAT_14cbd4a20,L"BackText");
  atexit((_func_5014 *)&LAB_14424059c);
  FUN_140056680(&DAT_14cbd4a30,L"SellHint");
  atexit((_func_5014 *)&LAB_1442405ad);
  FUN_140056680(&DAT_14cbd4a40,L"BuyHint");
  atexit((_func_5014 *)&LAB_1442405be);
  FUN_140056680(&DAT_14cbd4a50,L"ExitMenuHint");
  atexit((_func_5014 *)&LAB_1442405cf);
  FUN_140056680(&DAT_14cbd4a60,L"OpenAllRewardsHint");
  atexit((_func_5014 *)&LAB_1442405e0);
  FUN_1400b22c2(&DAT_14cbd4a70,"trash");
  atexit((_func_5014 *)&LAB_1442405f1);
  FUN_1400b22c2(&DAT_14cbd4a80,"favorite");
  atexit((_func_5014 *)&LAB_144240602);
  FUN_1400b22c2(&DAT_14cbd4a90,"bankdeposit");
  atexit((_func_5014 *)&LAB_144240613);
  FUN_1400b22c2(&DAT_14cbd4aa0,"taggroup1");
  atexit((_func_5014 *)&LAB_144240624);
  FUN_1400b22c2(&DAT_14cbd4ab0,"taggroup2");
  atexit((_func_5014 *)&LAB_144240635);
  FUN_1400b22c2(&DAT_14cbd4ac0,"taggroup3");
  atexit((_func_5014 *)&LAB_144240646);
  FUN_1400b22c2(&DAT_14cbd4ad0,"taggroup4");
  atexit((_func_5014 *)&LAB_144240657);
  local_108 = "trash";
  iStack_100 = 5;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4ae0 = (ulonglong)uVar3;
  local_108 = "favorite";
  iStack_100 = 8;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4ae8 = (ulonglong)uVar3;
  local_108 = "bankdeposit";
  iStack_100 = 0xb;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4af0 = (ulonglong)uVar3;
  local_108 = "taggroup1";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4af8 = (ulonglong)uVar3;
  local_108 = "taggroup2";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4b00 = (ulonglong)uVar3;
  local_108 = "taggroup3";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4b08 = (ulonglong)uVar3;
  local_108 = "taggroup4";
  iStack_100 = 9;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4b10 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd4b18,"OpenBackpack");
  atexit((_func_5014 *)&LAB_144240668);
  FUN_1400b22c2(&DAT_14cbd4b28,"CloseBackpack");
  atexit((_func_5014 *)&LAB_144240679);
  FUN_1400b22c2(&DAT_14cbd4b38,"OpenPlayerStats");
  atexit((_func_5014 *)&LAB_14424068a);
  FUN_1400b22c2(&DAT_14cbd4b48,"ClosePlayerStats");
  atexit((_func_5014 *)&LAB_14424069b);
  FUN_1400b22c2(&DAT_14cbd4b58,"OpenRewardCenter");
  atexit((_func_5014 *)&LAB_1442406ac);
  FUN_1400b22c2(&DAT_14cbd4b68,"CloseRewardCenter");
  atexit((_func_5014 *)&LAB_1442406bd);
  FUN_1400b22c2(&DAT_14cbd4b78,"CompareStart");
  atexit((_func_5014 *)&LAB_1442406ce);
  FUN_1400b22c2(&DAT_14cbd4b88,"CompareStop");
  atexit((_func_5014 *)&LAB_1442406df);
  FUN_1400b22c2(&DAT_14cbd4b98,"UnequipItem");
  atexit((_func_5014 *)&LAB_1442406f0);
  FUN_1400b22c2(&DAT_14cbd4ba8,"EquipItem");
  atexit((_func_5014 *)&LAB_144240701);
  FUN_1400b22c2(&DAT_14cbd4bb8,"DropItem");
  atexit((_func_5014 *)&LAB_144240712);
  FUN_1400b22c2(&DAT_14cbd4bc8,"MarkItem");
  atexit((_func_5014 *)&LAB_144240723);
  FUN_1400b22c2(&DAT_14cbd4bd8,"Error");
  atexit((_func_5014 *)&LAB_144240734);
  FUN_1400b22c2(&DAT_14cbd4be8,"ElementUnfocused");
  atexit((_func_5014 *)&LAB_144240745);
  FUN_1400b22c2(&DAT_14cbd4bf8,"ElementFocused");
  atexit((_func_5014 *)&LAB_144240756);
  FUN_1400b22c2(&DAT_14cbd4c08,"ElementClicked");
  atexit((_func_5014 *)&LAB_144240767);
  FUN_1400b22c2(&DAT_14cbd4c18,"EscapeInput");
  atexit((_func_5014 *)&LAB_144240778);
  FUN_1400b22c2(&DAT_14cbd4c28,"WeaponSlotFocused");
  atexit((_func_5014 *)&LAB_144240789);
  FUN_1400b22c2(&DAT_14cbd4c38,"WeaponSlotUnfocused");
  atexit((_func_5014 *)&LAB_14424079a);
  FUN_1400b22c2(&DAT_14cbd4c48,"GearSlotFocused");
  atexit((_func_5014 *)&LAB_1442407ab);
  FUN_1400b22c2(&DAT_14cbd4c58,"GearSlotUnfocused");
  atexit((_func_5014 *)&LAB_1442407bc);
  FUN_1400b22c2(&DAT_14cbd4c68,"BackpackSlotFocused");
  atexit((_func_5014 *)&LAB_1442407cd);
  FUN_1400b22c2(&DAT_14cbd4c78,"BackpackSlotUnfocused");
  atexit((_func_5014 *)&LAB_1442407de);
  FUN_1400b22c2(&DAT_14cbd4c88,"MarkItemBank");
  atexit((_func_5014 *)&LAB_1442407ef);
  FUN_1400b22c2(&DAT_14cbd4c98,"MarkItemTrash");
  atexit((_func_5014 *)&LAB_144240800);
  FUN_1400b22c2(&DAT_14cbd4ca8,"MarkItemFavorite");
  atexit((_func_5014 *)&LAB_144240811);
  FUN_1400b22c2(&DAT_14cbd4cb8,"ClickPistol");
  atexit((_func_5014 *)&LAB_144240822);
  FUN_1400b22c2(&DAT_14cbd4cc8,"ClickAssaultRifle");
  atexit((_func_5014 *)&LAB_144240833);
  FUN_1400b22c2(&DAT_14cbd4cd8,"ClickSMG");
  atexit((_func_5014 *)&LAB_144240844);
  FUN_1400b22c2(&DAT_14cbd4ce8,"ClickShotgun");
  atexit((_func_5014 *)&LAB_144240855);
  FUN_1400b22c2(&DAT_14cbd4cf8,"ClickSniper");
  atexit((_func_5014 *)&LAB_144240866);
  FUN_1400b22c2(&DAT_14cbd4d08,"ClickRepKit");
  atexit((_func_5014 *)&LAB_144240877);
  FUN_1400b22c2(&DAT_14cbd4d18,"ClickGrenade");
  atexit((_func_5014 *)&LAB_144240888);
  FUN_1400b22c2(&DAT_14cbd4d28,"ClickHeavyWeapon");
  atexit((_func_5014 *)&LAB_144240899);
  FUN_1400b22c2(&DAT_14cbd4d38,"ClickClassMod");
  atexit((_func_5014 *)&LAB_1442408aa);
  FUN_1400b22c2(&DAT_14cbd4d48,"ClickGadget");
  atexit((_func_5014 *)&LAB_1442408bb);
  FUN_1400b22c2(&DAT_14cbd4d58,"ClickEnhancement");
  atexit((_func_5014 *)&LAB_1442408cc);
  FUN_1400b22c2(&DAT_14cbd4d68,"ClickShield");
  atexit((_func_5014 *)&LAB_1442408dd);
  FUN_1400b22c2(&DAT_14cbd4d78,"EquipPistol");
  atexit((_func_5014 *)&LAB_1442408ee);
  FUN_1400b22c2(&DAT_14cbd4d88,"EquipAssaultRifle");
  atexit((_func_5014 *)&LAB_1442408ff);
  FUN_1400b22c2(&DAT_14cbd4d98,"EquipSMG");
  atexit((_func_5014 *)&LAB_144240910);
  FUN_1400b22c2(&DAT_14cbd4da8,"EquipShotgun");
  atexit((_func_5014 *)&LAB_144240921);
  FUN_1400b22c2(&DAT_14cbd4db8,"EquipSniper");
  atexit((_func_5014 *)&LAB_144240932);
  FUN_1400b22c2(&DAT_14cbd4dc8,"EquipRepKit");
  atexit((_func_5014 *)&LAB_144240943);
  FUN_1400b22c2(&DAT_14cbd4dd8,"EquipGrenade");
  atexit((_func_5014 *)&LAB_144240954);
  FUN_1400b22c2(&DAT_14cbd4de8,"EquipHeavyWeapon");
  atexit((_func_5014 *)&LAB_144240965);
  FUN_1400b22c2(&DAT_14cbd4df8,"EquipClassMod");
  atexit((_func_5014 *)&LAB_144240976);
  FUN_1400b22c2(&DAT_14cbd4e08,"EquipGadget");
  atexit((_func_5014 *)&LAB_144240987);
  FUN_1400b22c2(&DAT_14cbd4e18,"EquipEnhancement");
  atexit((_func_5014 *)&LAB_144240998);
  FUN_1400b22c2(&DAT_14cbd4e28,"EquipShield");
  atexit((_func_5014 *)&LAB_1442409a9);
  FUN_1400b22c2(&DAT_14cbd4e38,"weapon");
  atexit((_func_5014 *)&LAB_1442409ba);
  FUN_1400b22c2(&DAT_14cbd4e48,"weapon_ps");
  atexit((_func_5014 *)&LAB_1442409cb);
  FUN_1400b22c2(&DAT_14cbd4e58,"weapon_ar");
  atexit((_func_5014 *)&LAB_1442409dc);
  FUN_1400b22c2(&DAT_14cbd4e68,"weapon_sg");
  atexit((_func_5014 *)&LAB_1442409ed);
  FUN_1400b22c2(&DAT_14cbd4e78,"weapon_sr");
  atexit((_func_5014 *)&LAB_1442409fe);
  FUN_1400b22c2(&DAT_14cbd4e88,"weapon_sm");
  atexit((_func_5014 *)&LAB_144240a0f);
  FUN_1400b22c2(&DAT_14cbd4e98,"grenade_gadget");
  atexit((_func_5014 *)&LAB_144240a20);
  FUN_1400b22c2(&DAT_14cbd4ea8,"shield");
  atexit((_func_5014 *)&LAB_144240a31);
  FUN_1400b22c2(&DAT_14cbd4eb8,"heavy_weapon_gadget");
  atexit((_func_5014 *)&LAB_144240a42);
  FUN_1400b22c2(&DAT_14cbd4ec8,"repair_kit");
  atexit((_func_5014 *)&LAB_144240a53);
  FUN_1400b22c2(&DAT_14cbd4ed8,"classmod");
  atexit((_func_5014 *)&LAB_144240a64);
  FUN_1400b22c2(&DAT_14cbd4ee8,"classmod_dark_siren");
  atexit((_func_5014 *)&LAB_144240a75);
  FUN_1400b22c2(&DAT_14cbd4ef8,"classmod_exo_soldier");
  atexit((_func_5014 *)&LAB_144240a86);
  FUN_1400b22c2(&DAT_14cbd4f08,"classmod_gravitar");
  atexit((_func_5014 *)&LAB_144240a97);
  FUN_1400b22c2(&DAT_14cbd4f18,"classmod_paladin");
  atexit((_func_5014 *)&LAB_144240aa8);
  FUN_1400b22c2(&DAT_14cbd4f28,"gadget");
  atexit((_func_5014 *)&LAB_144240ab9);
  FUN_1400b22c2(&DAT_14cbd4f38,"enhancement");
  atexit((_func_5014 *)&LAB_144240aca);
  FUN_140056680(&DAT_14cbd4f48,L"recent");
  atexit((_func_5014 *)&LAB_144240adb);
  FUN_140056680(&DAT_14cbd4f58,L"type");
  atexit((_func_5014 *)&LAB_144240aec);
  FUN_140056680(&DAT_14cbd4f68,L"level");
  atexit((_func_5014 *)&LAB_144240afd);
  FUN_140056680(&DAT_14cbd4f78,L"base_name");
  atexit((_func_5014 *)&LAB_144240b0e);
  FUN_140056680(&DAT_14cbd4f88,L"first_letter");
  atexit((_func_5014 *)&LAB_144240b1f);
  FUN_140056680(&DAT_14cbd4f98,L"value");
  atexit((_func_5014 *)&LAB_144240b30);
  FUN_140056680(&DAT_14cbd4fa8,L"rarity");
  atexit((_func_5014 *)&LAB_144240b41);
  FUN_140056680(&DAT_14cbd4fb8,L"manufacturer");
  atexit((_func_5014 *)&LAB_144240b52);
  pvVar1 = DAT_14cbd4130;
  DAT_14cbd4fc8 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd4138;
  _DAT_14cbd4fd0 = DAT_14cbd4138;
  if (lVar5 == 0) {
    _DAT_14cbd4fd4 = 0;
  }
  else {
    FUN_1446dd670(&DAT_14cbd4fc8,DAT_14cbd4138,0);
    memcpy(DAT_14cbd4fc8,pvVar1,lVar5 * 2);
  }
  atexit((_func_5014 *)&LAB_144240b63);
  FUN_140056680(&DAT_14cbd4fd8,L"healing");
  atexit((_func_5014 *)&LAB_144240b74);
  local_108 = "cancel";
  iStack_100 = 6;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4fe8 = (ulonglong)uVar3;
  local_108 = "partial";
  iStack_100 = 7;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4ff0 = (ulonglong)uVar3;
  local_108 = "all";
  iStack_100 = 3;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd4ff8 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd5000,"tint_siren");
  atexit((_func_5014 *)&LAB_144240b85);
  FUN_1400b22c2(&DAT_14cbd5010,"tint_health");
  atexit((_func_5014 *)&LAB_144240b96);
  FUN_140056680(&DAT_14cbd5020,L"incomplete");
  atexit((_func_5014 *)&LAB_144240ba7);
  FUN_140056680(&DAT_14cbd5030,L"eridium_reward");
  atexit((_func_5014 *)&LAB_144240bb8);
  FUN_140056680(&DAT_14cbd5040,L"rank_complete");
  atexit((_func_5014 *)&LAB_144240bc9);
  FUN_140056680(&DAT_14cbd5050,L"challenge_complete");
  atexit((_func_5014 *)&LAB_144240bda);
  _DAT_14cbd5064 = 0;
  FUN_14052b5e0(&DAT_14cbd5060,"MENU_CUSTOMIZATION_CHARACTER",0);
  _DAT_14cbd5070 = "MENU_CUSTOMIZATION_CHARACTER";
  _DAT_14cbd507c = 0;
  FUN_14052b5e0(&DAT_14cbd5078,"MENU_CUSTOMIZATION_ECHO",0);
  _DAT_14cbd5088 = "MENU_CUSTOMIZATION_ECHO";
  _DAT_14cbd5094 = 0;
  FUN_14052b5e0(&DAT_14cbd5090,"MENU_CUSTOMIZATION_VEHICLE",0);
  _DAT_14cbd50a0 = "MENU_CUSTOMIZATION_VEHICLE";
  _DAT_14cbd50ac = 0;
  FUN_14052b5e0(&DAT_14cbd50a8,"MENU_CUSTOMIZATION_WEAPON",0);
  _DAT_14cbd50b8 = "MENU_CUSTOMIZATION_WEAPON";
  _DAT_14cbd50c4 = 0;
  FUN_14052b5e0(&DAT_14cbd50c0,&DAT_14b417908,0);
  _DAT_14cbd50d0 = &DAT_14b417908;
  _DAT_14cbd50dc = 0;
  FUN_14052b5e0(&DAT_14cbd50d8,"detailed_list",0);
  _DAT_14cbd50e8 = "detailed_list";
  _DAT_14cbd50f4 = 0;
  FUN_14052b5e0(&DAT_14cbd50f0,&DAT_14b81bdf4,0);
  _DAT_14cbd5100 = &DAT_14b81bdf4;
  _DAT_14cbd510c = 0;
  FUN_14052b5e0(&DAT_14cbd5108,"backpack",0);
  _DAT_14cbd5118 = "backpack";
  FUN_1400b22c2(&DAT_14cbd5120,"#echo_logs_region_unknown");
  atexit((_func_5014 *)&LAB_144240beb);
  iVar4 = DAT_14cbd5128 + -1;
  if (DAT_14cbd5128 == 0) {
    iVar4 = 0;
  }
  FUN_1446f82e2(&local_108,iVar4,DAT_14cbd5120,1);
  _DAT_14cbd5130 = local_108;
  _DAT_14cbd513c = 0;
  FUN_14052b5e0(&DAT_14cbd5138,"Missions",0);
  _DAT_14cbd5148 = 0;
  FUN_14052b5e0(&DAT_14cbd5144,"Timer",0);
  _DAT_14cbd5154 = 0;
  FUN_14052b5e0(&DAT_14cbd5150,"Percent",0);
  FUN_1446f470e(&DAT_14cbd515c,L"Join",1);
  FUN_1446f470e(&DAT_14cbd5164,L"Invite",1);
  FUN_1446f470e(&DAT_14cbd516c,L"ViewProfile",1);
  FUN_1446f470e(&DAT_14cbd5174,L"AddFriend",1);
  FUN_1446f470e(&DAT_14cbd517c,L"Mute",1);
  FUN_1446f470e(&DAT_14cbd5184,L"Unmute",1);
  FUN_1446f470e(&DAT_14cbd518c,L"Promote",1);
  FUN_1446f470e(&DAT_14cbd5194,L"Kick",1);
  FUN_1446f470e(&DAT_14cbd519c,L"AddShiftFriend",1);
  FUN_1446f470e(&DAT_14cbd51a4,L"RemoveShiftFriend",1);
  FUN_1446f470e(&DAT_14cbd51ac,L"AddFavorite",1);
  FUN_1446f470e(&DAT_14cbd51b4,L"RemoveFavorite",1);
  FUN_1446f470e(&DAT_14cbd51bc,L"BlockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbd51c4,L"UnblockShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbd51cc,L"ReportShiftPlayer",1);
  FUN_1446f470e(&DAT_14cbd51d4,L"InviteFriend",1);
  FUN_1446f470e(&DAT_14cbd51dc,L"InviteRecentFriends",1);
  FUN_1446f470e(&DAT_14cbd51e4,L"JoinRecentFriendsHost",1);
  FUN_1446f470e(&DAT_14cbd51ec,L"ViewProfiles",1);
  FUN_1446f470e(&DAT_14cbd51f4,L"TeleportToPlayer",1);
  FUN_1446f470e(&DAT_14cbd51fc,L"Cancel",1);
  _DAT_14cbd5208 = 0;
  uRam000000014cbd5210 = 0;
  _DAT_14cbd5218 = 0;
  DAT_14cbd5220 = 0;
  uRam000000014cbd5228 = 0;
  FUN_1446ddda2(&DAT_14cbd5208,"Dialog_Join",0);
  atexit((_func_5014 *)&LAB_144240bfc);
  _DAT_14cbd5230 = 0;
  uRam000000014cbd5238 = 0;
  _DAT_14cbd5240 = 0;
  DAT_14cbd5248 = 0;
  uRam000000014cbd5250 = 0;
  FUN_1446ddda2(&DAT_14cbd5230,"Dialog_Invite",0);
  atexit((_func_5014 *)&LAB_144240c0d);
  _DAT_14cbd5258 = 0;
  uRam000000014cbd5260 = 0;
  _DAT_14cbd5268 = 0;
  DAT_14cbd5270 = 0;
  uRam000000014cbd5278 = 0;
  FUN_1446ddda2(&DAT_14cbd5258,"Dialog_ViewProfile",0);
  atexit((_func_5014 *)&LAB_144240c1e);
  _DAT_14cbd5280 = 0;
  uRam000000014cbd5288 = 0;
  _DAT_14cbd5290 = 0;
  DAT_14cbd5298 = 0;
  uRam000000014cbd52a0 = 0;
  FUN_1446ddda2(&DAT_14cbd5280,"Dialog_AddFriend",0);
  atexit((_func_5014 *)&LAB_144240c2f);
  _DAT_14cbd52a8 = 0;
  uRam000000014cbd52b0 = 0;
  _DAT_14cbd52b8 = 0;
  DAT_14cbd52c0 = 0;
  uRam000000014cbd52c8 = 0;
  FUN_1446ddda2(&DAT_14cbd52a8,"Dialog_Mute",0);
  atexit((_func_5014 *)&LAB_144240c40);
  _DAT_14cbd52d0 = 0;
  uRam000000014cbd52d8 = 0;
  _DAT_14cbd52e0 = 0;
  DAT_14cbd52e8 = 0;
  uRam000000014cbd52f0 = 0;
  FUN_1446ddda2(&DAT_14cbd52d0,"Dialog_Unmute",0);
  atexit((_func_5014 *)&LAB_144240c51);
  _DAT_14cbd52f8 = 0;
  uRam000000014cbd5300 = 0;
  _DAT_14cbd5308 = 0;
  DAT_14cbd5310 = 0;
  uRam000000014cbd5318 = 0;
  FUN_1446ddda2(&DAT_14cbd52f8,"Dialog_Promote",0);
  atexit((_func_5014 *)&LAB_144240c62);
  _DAT_14cbd5320 = 0;
  uRam000000014cbd5328 = 0;
  _DAT_14cbd5330 = 0;
  DAT_14cbd5338 = 0;
  uRam000000014cbd5340 = 0;
  FUN_1446ddda2(&DAT_14cbd5320,"Dialog_Kick",0);
  atexit((_func_5014 *)&LAB_144240c73);
  _DAT_14cbd5348 = 0;
  uRam000000014cbd5350 = 0;
  _DAT_14cbd5358 = 0;
  DAT_14cbd5360 = 0;
  uRam000000014cbd5368 = 0;
  FUN_1446ddda2(&DAT_14cbd5348,"Dialog_AddShiftFriend",0);
  atexit((_func_5014 *)&LAB_144240c84);
  _DAT_14cbd5370 = 0;
  uRam000000014cbd5378 = 0;
  _DAT_14cbd5380 = 0;
  DAT_14cbd5388 = 0;
  uRam000000014cbd5390 = 0;
  FUN_1446ddda2(&DAT_14cbd5370,"Dialog_RemoveShiftFriend",0);
  atexit((_func_5014 *)&LAB_144240c95);
  _DAT_14cbd5398 = 0;
  uRam000000014cbd53a0 = 0;
  _DAT_14cbd53a8 = 0;
  DAT_14cbd53b0 = 0;
  uRam000000014cbd53b8 = 0;
  FUN_1446ddda2(&DAT_14cbd5398,"Dialog_AddFavorite",0);
  atexit((_func_5014 *)&LAB_144240ca6);
  _DAT_14cbd53c0 = 0;
  uRam000000014cbd53c8 = 0;
  _DAT_14cbd53d0 = 0;
  DAT_14cbd53d8 = 0;
  uRam000000014cbd53e0 = 0;
  FUN_1446ddda2(&DAT_14cbd53c0,"Dialog_RemoveFavorite",0);
  atexit((_func_5014 *)&LAB_144240cb7);
  _DAT_14cbd53e8 = 0;
  uRam000000014cbd53f0 = 0;
  _DAT_14cbd53f8 = 0;
  DAT_14cbd5400 = 0;
  uRam000000014cbd5408 = 0;
  FUN_1446ddda2(&DAT_14cbd53e8,"Dialog_BlockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144240cc8);
  _DAT_14cbd5410 = 0;
  uRam000000014cbd5418 = 0;
  _DAT_14cbd5420 = 0;
  DAT_14cbd5428 = 0;
  uRam000000014cbd5430 = 0;
  FUN_1446ddda2(&DAT_14cbd5410,"Dialog_UnblockShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144240cd9);
  _DAT_14cbd5438 = 0;
  uRam000000014cbd5440 = 0;
  _DAT_14cbd5448 = 0;
  DAT_14cbd5450 = 0;
  uRam000000014cbd5458 = 0;
  FUN_1446ddda2(&DAT_14cbd5438,"Dialog_ReportShiftPlayer",0);
  atexit((_func_5014 *)&LAB_144240cea);
  _DAT_14cbd5460 = 0;
  uRam000000014cbd5468 = 0;
  _DAT_14cbd5470 = 0;
  DAT_14cbd5478 = 0;
  uRam000000014cbd5480 = 0;
  FUN_1446ddda2(&DAT_14cbd5460,"Dialog_InviteFriend",0);
  atexit((_func_5014 *)&LAB_144240cfb);
  _DAT_14cbd5488 = 0;
  uRam000000014cbd5490 = 0;
  _DAT_14cbd5498 = 0;
  DAT_14cbd54a0 = 0;
  uRam000000014cbd54a8 = 0;
  FUN_1446ddda2(&DAT_14cbd5488,"Dialog_InviteRecentFriends",0);
  atexit((_func_5014 *)&LAB_144240d0c);
  _DAT_14cbd54b0 = 0;
  uRam000000014cbd54b8 = 0;
  _DAT_14cbd54c0 = 0;
  DAT_14cbd54c8 = 0;
  uRam000000014cbd54d0 = 0;
  FUN_1446ddda2(&DAT_14cbd54b0,"Dialog_JoinRecentFriendsHost",0);
  atexit((_func_5014 *)&LAB_144240d1d);
  _DAT_14cbd54d8 = 0;
  uRam000000014cbd54e0 = 0;
  _DAT_14cbd54e8 = 0;
  DAT_14cbd54f0 = 0;
  uRam000000014cbd54f8 = 0;
  FUN_1446ddda2(&DAT_14cbd54d8,"Dialog_ViewProfiles",0);
  atexit((_func_5014 *)&LAB_144240d2e);
  _DAT_14cbd5500 = 0;
  uRam000000014cbd5508 = 0;
  _DAT_14cbd5510 = 0;
  DAT_14cbd5518 = 0;
  uRam000000014cbd5520 = 0;
  FUN_1446ddda2(&DAT_14cbd5500,"Dialog_TeleportToPlayer",0);
  atexit((_func_5014 *)&LAB_144240d3f);
  _DAT_14cbd5528 = 0;
  uRam000000014cbd5530 = 0;
  _DAT_14cbd5538 = 0;
  DAT_14cbd5540 = 0;
  uRam000000014cbd5548 = 0;
  FUN_1446ddda2(&DAT_14cbd5528,"Dialog_Cancel",0);
  atexit((_func_5014 *)&LAB_144240d50);
  FUN_1400b22c2(&DAT_14cbd5550,"GoOnlineText");
  atexit((_func_5014 *)&LAB_144240d61);
  FUN_1400b22c2(&DAT_14cbd5560,"GoingOnlineTextOnePeriod");
  atexit((_func_5014 *)&LAB_144240d72);
  FUN_1400b22c2(&DAT_14cbd5570,"GoingOnlineTextTwoPeriods");
  atexit((_func_5014 *)&LAB_144240d83);
  FUN_1400b22c2(&DAT_14cbd5580,"GoingOnlineTextThreePeriods");
  atexit((_func_5014 *)&LAB_144240d94);
  local_108 = "audio_calibration";
  iStack_100 = 0x11;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd5590 = (ulonglong)uVar3;
  local_108 = "brightness_calibration";
  iStack_100 = 0x16;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd5598 = (ulonglong)uVar3;
  local_108 = "brightness_calibration_ftc";
  iStack_100 = 0x1a;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd55a0 = (ulonglong)uVar3;
  local_108 = "safe_area_calibration";
  iStack_100 = 0x15;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd55a8 = (ulonglong)uVar3;
  local_108 = "options_accessibility";
  iStack_100 = 0x15;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd55b0 = (ulonglong)uVar3;
  _DAT_14cbd55b8 = 0;
  uRam000000014cbd55c0 = 0;
  _DAT_14cbd55c8 = 0;
  DAT_14cbd55d0 = 0;
  uRam000000014cbd55d8 = 0;
  FUN_1446ddda2(&DAT_14cbd55b8,"MainMenuVersionText",0);
  atexit((_func_5014 *)&LAB_144240da5);
  _DAT_14cbd55e0 = 0;
  uRam000000014cbd55e8 = 0;
  _DAT_14cbd55f0 = 0;
  DAT_14cbd55f8 = 0;
  uRam000000014cbd5600 = 0;
  FUN_1446ddda2(&DAT_14cbd55e0,"MainMenuVersionUpdateReadyText",0);
  atexit((_func_5014 *)&LAB_144240db6);
  FUN_1446f470e(&DAT_14cbd5608,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cbd5610,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cbd5618,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cbd5620,L"TimeOfDayForecastEvents",1);
  DAT_14cbd5648 = 0;
  DAT_14cbd5650 = 0;
  DAT_14cbd5628 = 0;
  _DAT_14cbd5630 = 0;
  DAT_14cbd5654 = 0x80;
  DAT_14cbd5658 = 0xffffffff;
  DAT_14cbd565c = 0;
  DAT_14cbd5668 = 0;
  DAT_14cbd5670 = 0;
  atexit(FUN_144240dc7);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cbd5678);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cbd5678,4000);
  atexit((_func_5014 *)&LAB_144240df0);
  DAT_14cbd56a0._4_4_ = 0;
  DAT_14cbd56a8 = 0;
  FUN_14052b5e0(&DAT_14cbd56a0,"sort_ascending",0);
  DAT_14cbd56ac._4_4_ = 0;
  DAT_14cbd56b4 = 0;
  FUN_14052b5e0(&DAT_14cbd56ac,"widget_ident",0);
  DAT_14cbd56b8._4_4_ = 0;
  DAT_14cbd56c0 = 0;
  FUN_14052b5e0(&DAT_14cbd56b8,"sort_ident",0);
  local_128 = 1;
  FUN_14153156c(&DAT_14cbd56c8,L"OakUI.Challenges.ShowAllChallengesAsDiscovered",&DAT_14cbd56d8,
                L"Whether to show all challenges as discovered (can help debug undiscovered challenges that are otherwise unviewable)"
               );
  atexit(FUN_144241b04);
  local_128 = 1;
  FUN_14153156c(&DAT_14cbd56e0,L"OakUI.Challenges.AlwaysShowRewardPrompt",&DAT_14cbd56f0,
                L"Whether to always display the prompt to jump to the reward center of the inventory menu"
               );
  atexit(FUN_144241b49);
  local_128 = 1;
  FUN_14153156c(&DAT_14cbd56f8,L"OakUI.Challenges.ShowNonBonusRewards",&DAT_14c764084,
                L"Whether to show gear items in addition to cosmetics in challenge rewards");
  atexit(FUN_144241b8e);
  local_128 = 1;
  FUN_14153156c(&DAT_14cbd5708,L"OakUI.Challenges.ShowBonusOnGrid",&DAT_14c764085,
                L"Whether to show bonus items on the grid as well as the tooltip");
  atexit(FUN_144241bd3);
  local_108 = "show_bonus_on_grid";
  iStack_100 = 0x12;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd5718 = (ulonglong)uVar3;
  local_108 = "show_non_bonus_rewards";
  iStack_100 = 0x16;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  _DAT_14cbd5720 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbd5728,"playerhead");
  atexit((_func_5014 *)&LAB_144241c18);
  FUN_1400b22c2(&DAT_14cbd5738,"playerbody");
  atexit((_func_5014 *)&LAB_144241c29);
  FUN_1400b22c2(&DAT_14cbd5748,"playermaterial");
  atexit((_func_5014 *)&LAB_144241c3a);
  FUN_1400b22c2(&DAT_14cbd5758,"vehiclemesh");
  atexit((_func_5014 *)&LAB_144241c4b);
  FUN_1400b22c2(&DAT_14cbd5768,"vehiclematerial");
  atexit((_func_5014 *)&LAB_144241c5c);
  FUN_1400b22c2(&DAT_14cbd5778,"hoverdrive");
  atexit((_func_5014 *)&LAB_144241c6d);
  FUN_1400b22c2(&DAT_14cbd5788,"weaponmaterial");
  atexit((_func_5014 *)&LAB_144241c7e);
  FUN_1400b22c2(&DAT_14cbd5798,"echoornament");
  atexit((_func_5014 *)&LAB_144241c8f);
  FUN_1400b22c2(&DAT_14cbd57a8,"echomesh");
  atexit((_func_5014 *)&LAB_144241ca0);
  FUN_1400b22c2(&DAT_14cbd57b8,"echomaterial");
  atexit((_func_5014 *)&LAB_144241cb1);
  pvVar1 = DAT_14cbd5728;
  local_108 = (char *)0x0;
  lVar5 = (longlong)DAT_14cbd5730;
  iStack_100 = DAT_14cbd5730;
  if (lVar5 == 0) {
    uStack_fc = 0;
  }
  else {
    FUN_1446dd670(&local_108,DAT_14cbd5730,0);
    memcpy(local_108,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd5738;
  local_f8 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd5740;
  local_f0 = DAT_14cbd5740;
  if (lVar5 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1446dd670(&local_f8,DAT_14cbd5740,0);
    memcpy(local_f8,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd5748;
  local_e8 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd5750;
  local_e0 = DAT_14cbd5750;
  if (lVar5 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,DAT_14cbd5750,0);
    memcpy(local_e8,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd5758;
  local_d8 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd5760;
  local_d0 = DAT_14cbd5760;
  if (lVar5 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,DAT_14cbd5760,0);
    memcpy(local_d8,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd5768;
  local_c8 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd5770;
  local_c0 = DAT_14cbd5770;
  if (lVar5 == 0) {
    local_bc = 0;
  }
  else {
    FUN_1446dd670(&local_c8,DAT_14cbd5770,0);
    memcpy(local_c8,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd5778;
  local_b8 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd5780;
  local_b0 = DAT_14cbd5780;
  if (lVar5 == 0) {
    local_ac = 0;
  }
  else {
    FUN_1446dd670(&local_b8,DAT_14cbd5780,0);
    memcpy(local_b8,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd5788;
  local_a8 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd5790;
  local_a0 = DAT_14cbd5790;
  if (lVar5 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,DAT_14cbd5790,0);
    memcpy(local_a8,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd5798;
  local_98 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd57a0;
  local_90 = DAT_14cbd57a0;
  if (lVar5 == 0) {
    local_8c = 0;
  }
  else {
    FUN_1446dd670(&local_98,DAT_14cbd57a0,0);
    memcpy(local_98,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd57a8;
  local_88 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd57b0;
  local_80 = DAT_14cbd57b0;
  if (lVar5 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,DAT_14cbd57b0,0);
    memcpy(local_88,pvVar1,lVar5 * 2);
  }
  pvVar1 = DAT_14cbd57b8;
  local_78 = (void *)0x0;
  lVar5 = (longlong)DAT_14cbd57c0;
  local_70 = DAT_14cbd57c0;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,DAT_14cbd57c0,0);
    memcpy(local_78,pvVar1,lVar5 * 2);
  }
  local_118[1] = (char **)local_68;
  local_118[0] = &local_108;
  FUN_141469cae(&DAT_14cbd57c8);
  lVar5 = 0xa0;
  do {
    if (*(longlong *)((longlong)local_118 + lVar5) != 0) {
      FUN_1400020a8();
    }
    lVar5 = lVar5 + -0x10;
  } while (lVar5 != 0);
  atexit(FUN_144241cc2);
  local_128 = 1;
  FUN_14153156c(&DAT_14cbd57d8,L"OakUI.EchoLog.Debug.ForceMissingDLC",&DAT_14cbd57e8,
                L"If true, all echo logs will be treated as if missing their DLC entitlements.\n");
  atexit(FUN_144243a8b);
  local_108 = "label";
  iStack_100 = 5;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  DAT_14cbd5970 = (ulonglong)uVar3;
  local_108 = "description";
  iStack_100 = 0xb;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  DAT_14cbd5980 = (ulonglong)uVar3;
  local_108 = "value";
  iStack_100 = 5;
  uStack_fc = uStack_fc & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_108,1);
  DAT_14cbd5978 = (ulonglong)uVar3;
  local_128 = 1;
  FUN_14153156c(&DAT_14cbd57f0,L"OakUI.Inventory.Debug.ForceMissingDLC",&DAT_14cbd5800,
                L"If true, all Inventory items will be treated as if missing their DLC entitlements.\n"
               );
  atexit(FUN_14424548f);
  _DAT_14cbd580c = 0;
  FUN_14052b5e0(&DAT_14cbd5808,&DAT_14b3fc24c,0);
  _DAT_14cbd5818 = &DAT_14b3fc24c;
  _DAT_14cbd5824 = 0;
  FUN_14052b5e0(&DAT_14cbd5820,"state",0);
  _DAT_14cbd5830 = "state";
  FUN_140056680(&DAT_14cbd5838,L"action_ui_cursor_click");
  atexit((_func_5014 *)&LAB_144246344);
  FUN_140056680(&DAT_14cbd5848,L"action_ui_menu_escape");
  atexit((_func_5014 *)&LAB_144246355);
  FUN_140056680(&DAT_14cbd5858,L"action_ui_clear_item");
  atexit((_func_5014 *)&LAB_144246366);
  FUN_140056680(&DAT_14cbd5868,L"SelectText");
  atexit((_func_5014 *)&LAB_144246377);
  FUN_140056680(&DAT_14cbd5878,L"BackText");
  atexit((_func_5014 *)&LAB_144246388);
  FUN_140056680(&DAT_14cbd5888,L"FirmwareClearSlotHint");
  atexit((_func_5014 *)&LAB_144246399);
  local_128 = 0;
  FUN_1415c789c(&DAT_14cbd58c8,L"OakUI.Ammo.LowAmmoPercentThreshold",&DAT_14c764088,
                L"Ammo percent below this threshold are considered \'low ammo\'.");
  atexit(FUN_144246c70);
  local_128 = 0;
  FUN_141471170(&DAT_14cbd58d8,L"OakUI.Backpack.UpdateCollectorOnTick",&DAT_14cbd58e8,
                L"If 0, all updates are delegate driven. For all other values, updates every frame on tick.\n"
               );
  atexit(FUN_144246cb5);
  local_128 = 0;
  FUN_141471170(&DAT_14cbd58f0,L"OakUI.Backpack.FullUpdateOnChange",&DAT_14cbd5900,
                L"If 0, all updates are scoped to the change made (adds only add, removes only remove, etc..) For all other values, any change triggers a full update.\n"
               );
  atexit(FUN_144246cfa);
  local_128 = 0;
  FUN_141471170(&DAT_14cbd5908,L"OakUI.Backpack.RenderThumbnails",&DAT_14c76408c,
                L"If 0, item thumbnails will not be generated.\n");
  atexit(FUN_144246d3f);
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14424ef64 FUN_14424ef64 body=1438 status=ok
// SIG undefined FUN_14424ef64(void)

void FUN_14424ef64(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  code *pcVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  longlong *plVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  code *pcVar17;
  ulonglong uVar18;
  code *pcVar19;
  code **ppcVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_3f8 [40];
  longlong *local_3d0;
  code *local_3c8;
  code *local_3c0;
  undefined4 local_3b8 [190];
  longlong local_c0 [15];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  *(undefined1 *)(param_1 + 500) = 0;
  plVar9 = (longlong *)(param_1 + 0x210);
  FUN_1418d0b78(*(undefined8 *)(param_1 + 0x210));
  *(undefined4 *)(param_1 + 0x218) = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    FUN_14419cfa2(plVar9);
  }
  if (DAT_14cb8d378 != 0) {
    local_3c0 = (code *)local_c0;
    local_3c8 = FUN_14425bfb0;
    local_c0[0] = param_1;
    FUN_14418ee82(DAT_14cb8d378,&local_3c8,0);
  }
  iVar4 = *(int *)(param_1 + 0x218);
  if (1 < (longlong)iVar4) {
    pcVar3 = (code *)*plVar9;
    local_3d0 = plVar9;
    memset(local_3b8,0,0x2f0);
    local_3c0 = pcVar3 + (longlong)iVar4 * 0x78 + -0x78;
    local_3c8 = pcVar3;
    fVar23 = logf((float)iVar4);
    local_3b8[0] = (int)(longlong)(fVar23 + fVar23);
    ppcVar20 = &local_3c8;
    do {
      pcVar3 = *ppcVar20;
      pcVar8 = ppcVar20[1];
      iVar4 = *(int *)(ppcVar20 + 2);
      uVar15 = (int)((ulonglong)((longlong)pcVar8 - (longlong)pcVar3) >> 3) * -0x11111111 + 1;
      pcVar12 = pcVar8;
      pcVar10 = pcVar3;
      if (iVar4 != 0) {
LAB_14424f08b:
        if (8 < (int)uVar15) {
          pcVar5 = pcVar3 + (ulonglong)(uVar15 >> 1) * 0x78;
          plVar9 = local_c0;
          for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
            *plVar9 = *(longlong *)pcVar5;
            pcVar5 = pcVar5 + 8;
            plVar9 = plVar9 + 1;
          }
          pcVar5 = pcVar3;
          pcVar2 = pcVar3 + (ulonglong)(uVar15 >> 1) * 0x78;
          for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
            *(undefined8 *)pcVar2 = *(undefined8 *)pcVar5;
            pcVar5 = pcVar5 + 8;
            pcVar2 = pcVar2 + 8;
          }
          plVar9 = local_c0;
          pcVar5 = pcVar3;
          for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
            *(longlong *)pcVar5 = *plVar9;
            plVar9 = plVar9 + 1;
            pcVar5 = pcVar5 + 8;
          }
          pcVar5 = pcVar8 + 0x78;
          pcVar2 = pcVar3;
          do {
            pcVar7 = pcVar2 + 0x78;
            pcVar11 = pcVar2 + 0x78;
            do {
              pcVar2 = pcVar11;
              pcVar19 = pcVar7;
              if (pcVar8 < pcVar2) break;
              pcVar7 = pcVar19 + 0x78;
              pcVar11 = pcVar2 + 0x78;
            } while (*(int *)(pcVar2 + 8) <= *(int *)(pcVar3 + 8));
            pcVar7 = pcVar5 + -0xf0;
            do {
              pcVar11 = pcVar5;
              pcVar17 = pcVar7;
              pcVar5 = pcVar11 + -0x78;
              if (pcVar5 <= pcVar3) break;
              pcVar7 = pcVar17 + -0x78;
            } while (*(int *)(pcVar3 + 8) <= *(int *)(pcVar11 + -0x70));
            lVar1 = 0xf;
            pcVar7 = pcVar3;
            pcVar6 = pcVar2;
            plVar9 = local_c0;
            if (pcVar5 < pcVar2) goto code_r0x00014424f159;
            for (; lVar1 != 0; lVar1 = lVar1 + -1) {
              *plVar9 = *(longlong *)pcVar6;
              pcVar6 = pcVar6 + 8;
              plVar9 = plVar9 + 1;
            }
            pcVar7 = pcVar5;
            pcVar11 = pcVar2;
            for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
              *(undefined8 *)pcVar11 = *(undefined8 *)pcVar7;
              pcVar7 = pcVar7 + 8;
              pcVar11 = pcVar11 + 8;
            }
            plVar9 = local_c0;
            pcVar7 = pcVar5;
            for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
              *(longlong *)pcVar7 = *plVar9;
              plVar9 = plVar9 + 1;
              pcVar7 = pcVar7 + 8;
            }
          } while( true );
        }
        while (pcVar12 = pcVar3, pcVar10 = pcVar3, pcVar3 < pcVar8) {
          while (pcVar5 = pcVar12, pcVar12 = pcVar10 + 0x78, pcVar12 <= pcVar8) {
            pcVar2 = pcVar10 + 0x80;
            pcVar10 = pcVar12;
            if (*(int *)pcVar2 <= *(int *)(pcVar5 + 8)) {
              pcVar12 = pcVar5;
            }
          }
          pcVar12 = pcVar8 + -0x78;
          pcVar10 = pcVar5;
          plVar9 = local_c0;
          for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
            *plVar9 = *(longlong *)pcVar10;
            pcVar10 = pcVar10 + 8;
            plVar9 = plVar9 + 1;
          }
          pcVar10 = pcVar8;
          for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
            *(undefined8 *)pcVar5 = *(undefined8 *)pcVar10;
            pcVar10 = pcVar10 + 8;
            pcVar5 = pcVar5 + 8;
          }
          plVar9 = local_c0;
          pcVar10 = pcVar8;
          for (lVar1 = 0xf; pcVar8 = pcVar12, lVar1 != 0; lVar1 = lVar1 + -1) {
            *(longlong *)pcVar10 = *plVar9;
            plVar9 = plVar9 + 1;
            pcVar10 = pcVar10 + 8;
          }
        }
        goto LAB_14424f45c;
      }
LAB_14424f206:
      if (uVar15 != 0) {
        iVar16 = (int)((uVar15 - ((int)(uVar15 - 2) >> 0x1f)) + -2) >> 1;
        iVar4 = iVar16;
joined_r0x00014424f22c:
        do {
          iVar14 = iVar4 * 2 + 1;
          if (iVar14 < (int)uVar15) {
            iVar13 = iVar4 * 2 + 2;
            if ((iVar13 < (int)uVar15) &&
               (*(int *)(pcVar3 + ((longlong)iVar14 * 0xf + 1) * 8) <=
                *(int *)(pcVar3 + ((longlong)iVar13 * 0xf + 1) * 8))) {
              iVar14 = iVar13;
            }
            if (*(int *)(pcVar3 + ((longlong)iVar4 * 0xf + 1) * 8) <
                *(int *)(pcVar3 + ((longlong)iVar14 * 0xf + 1) * 8)) {
              pcVar8 = pcVar3 + (longlong)iVar4 * 0x78;
              plVar9 = local_c0;
              for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
                *plVar9 = *(longlong *)pcVar8;
                pcVar8 = pcVar8 + 8;
                plVar9 = plVar9 + 1;
              }
              pcVar8 = pcVar3 + (longlong)iVar14 * 0x78;
              pcVar12 = pcVar3 + (longlong)iVar4 * 0x78;
              for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
                *(undefined8 *)pcVar12 = *(undefined8 *)pcVar8;
                pcVar8 = pcVar8 + 8;
                pcVar12 = pcVar12 + 8;
              }
              plVar9 = local_c0;
              pcVar8 = pcVar3 + (longlong)iVar14 * 0x78;
              for (lVar1 = 0xf; iVar4 = iVar14, lVar1 != 0; lVar1 = lVar1 + -1) {
                *(longlong *)pcVar8 = *plVar9;
                plVar9 = plVar9 + 1;
                pcVar8 = pcVar8 + 8;
              }
              goto joined_r0x00014424f22c;
            }
          }
          bVar22 = iVar16 != 0;
          iVar16 = iVar16 + -1;
          iVar4 = iVar16;
        } while (bVar22);
        if (1 < (int)uVar15) {
          pcVar8 = pcVar3;
          plVar9 = local_c0;
          for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
            *plVar9 = *(longlong *)pcVar8;
            pcVar8 = pcVar8 + 8;
            plVar9 = plVar9 + 1;
          }
          pcVar8 = pcVar3 + ((ulonglong)uVar15 - 1) * 0x78;
          pcVar12 = pcVar3;
          for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
            *(undefined8 *)pcVar12 = *(undefined8 *)pcVar8;
            pcVar8 = pcVar8 + 8;
            pcVar12 = pcVar12 + 8;
          }
          plVar9 = local_c0;
          pcVar8 = pcVar3 + ((ulonglong)uVar15 - 1) * 0x78;
          for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
            *(longlong *)pcVar8 = *plVar9;
            plVar9 = plVar9 + 1;
            pcVar8 = pcVar8 + 8;
          }
          uVar18 = (ulonglong)uVar15 - 1;
          if (uVar15 != 2) {
            do {
              iVar4 = 0;
              iVar14 = 1;
              iVar16 = 0;
              do {
                iVar4 = iVar4 + 2;
                iVar13 = iVar14;
                if (((longlong)iVar4 < (longlong)uVar18) &&
                   (*(int *)(pcVar3 + ((longlong)iVar14 * 0xf + 1) * 8) <=
                    *(int *)(pcVar3 + ((longlong)iVar4 * 0xf + 1) * 8))) {
                  iVar13 = iVar4;
                }
                if (*(int *)(pcVar3 + ((longlong)iVar13 * 0xf + 1) * 8) <=
                    *(int *)(pcVar3 + ((longlong)iVar16 * 0xf + 1) * 8)) break;
                pcVar8 = pcVar3 + (longlong)iVar16 * 0x78;
                plVar9 = local_c0;
                for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *plVar9 = *(longlong *)pcVar8;
                  pcVar8 = pcVar8 + 8;
                  plVar9 = plVar9 + 1;
                }
                pcVar8 = pcVar3 + (longlong)iVar13 * 0x78;
                pcVar12 = pcVar3 + (longlong)iVar16 * 0x78;
                for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *(undefined8 *)pcVar12 = *(undefined8 *)pcVar8;
                  pcVar8 = pcVar8 + 8;
                  pcVar12 = pcVar12 + 8;
                }
                plVar9 = local_c0;
                pcVar8 = pcVar3 + (longlong)iVar13 * 0x78;
                for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
                  *(longlong *)pcVar8 = *plVar9;
                  plVar9 = plVar9 + 1;
                  pcVar8 = pcVar8 + 8;
                }
                iVar4 = iVar13 * 2;
                iVar14 = iVar13 * 2 + 1;
                iVar16 = iVar13;
              } while ((longlong)iVar14 < (longlong)uVar18);
              pcVar8 = pcVar3;
              plVar9 = local_c0;
              for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
                *plVar9 = *(longlong *)pcVar8;
                pcVar8 = pcVar8 + 8;
                plVar9 = plVar9 + 1;
              }
              pcVar8 = pcVar3 + (uVar18 - 1) * 0x78;
              pcVar12 = pcVar3;
              for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
                *(undefined8 *)pcVar12 = *(undefined8 *)pcVar8;
                pcVar8 = pcVar8 + 8;
                pcVar12 = pcVar12 + 8;
              }
              plVar9 = local_c0;
              pcVar8 = pcVar3 + (uVar18 - 1) * 0x78;
              for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
                *(longlong *)pcVar8 = *plVar9;
                plVar9 = plVar9 + 1;
                pcVar8 = pcVar8 + 8;
              }
              bVar22 = 2 < uVar18;
              uVar18 = uVar18 - 1;
            } while (bVar22);
          }
        }
      }
LAB_14424f45c:
      ppcVar20 = ppcVar20 + -3;
    } while (&local_3c8 <= ppcVar20);
    iVar4 = *(int *)(param_1 + 0x218);
    plVar9 = local_3d0;
  }
  if (iVar4 != 0) {
    lVar1 = *plVar9;
    lVar21 = (longlong)iVar4 * 0x78;
    do {
      iVar4 = *(int *)(param_1 + 0x1e0);
      *(uint *)(param_1 + 0x1e0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1e4) < iVar4 + 1U) {
        FUN_14663c736((longlong *)(param_1 + 0x1d8),iVar4);
      }
      *(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar4 * 8) = lVar1;
      lVar1 = lVar1 + 0x78;
      lVar21 = lVar21 + -0x78;
    } while (lVar21 != 0);
  }
  FUN_140fe844e(param_1);
  FUN_14016fae4(param_1);
  if ((local_48 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014424f159:
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *plVar9 = *(longlong *)pcVar7;
    pcVar7 = pcVar7 + 8;
    plVar9 = plVar9 + 1;
  }
  pcVar7 = pcVar5;
  pcVar6 = pcVar3;
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
    pcVar7 = pcVar7 + 8;
    pcVar6 = pcVar6 + 8;
  }
  plVar9 = local_c0;
  pcVar7 = pcVar5;
  for (lVar1 = 0xf; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(longlong *)pcVar7 = *plVar9;
    plVar9 = plVar9 + 1;
    pcVar7 = pcVar7 + 8;
  }
  iVar4 = iVar4 + -1;
  pcVar11 = pcVar11 + -0xf0;
  if ((longlong)pcVar17 - (longlong)pcVar10 < (longlong)pcVar12 - (longlong)pcVar19) {
    if (pcVar2 < pcVar8) {
      *ppcVar20 = pcVar2;
      ppcVar20[1] = pcVar8;
      *(int *)(ppcVar20 + 2) = iVar4;
      ppcVar20 = ppcVar20 + 3;
    }
    pcVar19 = pcVar3;
    if (pcVar5 <= pcVar3 + 0x78) goto LAB_14424f45c;
  }
  else {
    if (pcVar3 + 0x78 < pcVar5) {
      *ppcVar20 = pcVar3;
      ppcVar20[1] = pcVar11;
      *(int *)(ppcVar20 + 2) = iVar4;
      ppcVar20 = ppcVar20 + 3;
    }
    pcVar3 = pcVar2;
    pcVar11 = pcVar8;
    pcVar17 = pcVar8;
    if (pcVar8 <= pcVar2) goto LAB_14424f45c;
  }
  uVar15 = (int)((ulonglong)((longlong)pcVar17 - (longlong)pcVar19) >> 3) * -0x11111111 + 1;
  pcVar8 = pcVar11;
  pcVar12 = pcVar17;
  pcVar10 = pcVar19;
  if (iVar4 == 0) goto LAB_14424f206;
  goto LAB_14424f08b;
}



// FUNCTION 14424f504 FUN_14424f504 body=3451 status=ok
// SIG undefined FUN_14424f504(void)

void FUN_14424f504(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  void *_Src;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined2 *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  code **local_260;
  undefined1 *local_258;
  code *local_250;
  longlong *local_240;
  longlong *local_238;
  undefined4 local_230;
  undefined1 local_228 [16];
  code *local_218;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined4 local_1ec;
  undefined1 local_1e8;
  undefined8 local_1e4;
  undefined8 local_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  uint uStack_1c8;
  uint uStack_1c4;
  undefined1 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined7 uStack_1a0;
  undefined1 uStack_199;
  undefined4 uStack_198;
  undefined1 uStack_194;
  undefined1 uStack_193;
  undefined1 uStack_192;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  longlong *local_168;
  int local_160;
  longlong *local_15c;
  int local_154;
  longlong *local_150;
  undefined4 local_148;
  longlong *local_140;
  undefined4 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  int iStack_d8;
  int iStack_d4;
  undefined1 uStack_d0;
  undefined4 local_cc;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  int local_a0;
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  longlong *local_88;
  longlong lStack_80;
  ulonglong uStack_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  FUN_14580f9a5(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_148e2aba6(param_2,0);
  }
  lVar7 = FUN_1400d7050(param_1 + 0x30);
  if (lVar7 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_260 = &local_218;
      local_218 = FUN_141030f22;
      local_250 = FUN_14081d0ea;
      local_258 = &LAB_1459f2e4c;
      local_268 = &LAB_148c39de3;
      local_270 = &LAB_1457a9eb2;
      local_278 = &DAT_149e063b2;
      local_280 = 0;
      local_288 = 0x10000004;
      local_290 = 0x10;
      local_298 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar8 = FUN_140d1d7e4();
      puVar9 = (undefined8 *)FUN_140d19a6c(lVar8 + 0x90);
      local_a8 = (longlong *)0x0;
      iVar2 = *(int *)(puVar9 + 1);
      uVar10 = *puVar9;
      local_a0 = iVar2;
      if (iVar2 != 0) {
        FUN_148c13408(&local_a8,iVar2,0);
        FUN_148c1347b(local_a8,uVar10,iVar2);
        if ((longlong)local_a0 != 0) {
          plVar14 = local_a8 + (longlong)local_a0 * 3;
          plVar18 = local_a8;
          local_240 = plVar14;
          do {
            local_b8 = 0;
            local_c0 = *plVar18;
            local_b0 = 0;
            uVar10 = FUN_14477b664(plVar18[1]);
            local_b8 = FUN_14477b664(uVar10);
            local_b0 = plVar18[2];
            if (local_b8 == 0) {
              uVar10 = FUN_141417e7c();
              local_b8 = FUN_14477b664(uVar10);
            }
            if (local_b0 == 0) {
              local_b0 = 0;
              if ((((local_b8 != 0) && (local_c0 != 0)) &&
                  (plVar4 = *(longlong **)(local_b8 + 0xb8), plVar4 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 != '\0')) {
                uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
                local_b0 = FUN_144aff482(uVar10,&local_c0);
                if (local_b0 != 0) goto LAB_14424f72f;
              }
            }
            else {
LAB_14424f72f:
              lVar8 = local_b0;
              uStack_208 = 0;
              uStack_207 = 0;
              uStack_200 = 0;
              local_218 = (code *)0x0;
              uStack_210 = 0;
              uStack_20f = 0;
              local_1fc = 0;
              uStack_1f4 = 0;
              local_1ec = 0;
              local_1e8 = 1;
              local_1e4 = 0;
              uStack_1c8 = 0;
              uStack_1c4 = 0;
              uStack_1c0 = 0;
              local_1d8 = 0;
              uStack_1d0 = 0;
              uStack_1cf = 0;
              uStack_198 = 0;
              uStack_194 = 0;
              uStack_193 = 0;
              uStack_192 = 0;
              local_1a8 = 0;
              uStack_1a0 = 0;
              uStack_199 = 0;
              local_1b8 = 0;
              uStack_1b0 = 0;
              local_190 = 0;
              uStack_188 = 0;
              local_180 = 1;
              local_178 = 0;
              uStack_170 = 0;
              local_160 = DAT_14c948620;
              local_168 = DAT_14c948618;
              local_154 = DAT_14c948620;
              local_15c = DAT_14c948618;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
                 (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
              local_150 = DAT_14c844840;
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
              local_148 = 0;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
                 (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
              local_140 = DAT_14c844840;
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
              local_138 = 0;
              local_130 = 0;
              local_128 = 0;
              uStack_120 = 0;
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
                 (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
              local_118 = DAT_14c844840;
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
              local_110 = 0;
              local_cc = 0;
              iStack_d8 = 0;
              iStack_d4 = 0;
              uStack_d0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              uStack_df = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_98 = (longlong *)0x14b9a71dd;
              local_90 = 0x20;
              local_8c = 0;
              uVar6 = FUN_14001a6c0(&local_98,1);
              local_88 = (longlong *)(ulonglong)uVar6;
              lStack_80 = 0;
              uStack_78 = 0;
              uVar10 = FUN_1465d5758();
              lStack_80 = FUN_14477b664(uVar10);
              uVar11 = uStack_78;
              if (uStack_78 == 0) {
                if (lStack_80 == 0) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = 0;
                  if (local_88 != (longlong *)0x0) {
                    plVar14 = *(longlong **)(lStack_80 + 0xb8);
                    if ((plVar14 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar5 == '\0')) {
                      uVar11 = 0;
                    }
                    else {
                      uVar10 = (**(code **)(*plVar14 + 0x110))(plVar14);
                      uVar11 = FUN_144aff482(uVar10,&local_88);
                    }
                  }
                }
              }
              uStack_208 = (undefined1)uVar11;
              uStack_207 = (undefined7)(uVar11 >> 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c844850) &&
                 (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
              local_98 = DAT_14c844840;
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
              local_90 = 0;
              uStack_78 = uStack_78 & 0xffffffff00000000;
              local_88 = (longlong *)0x0;
              lStack_80 = 0;
              local_70 = 0;
              uStack_68 = 0;
              FUN_1446ddda2(&local_88,"BigMap_Action_BeginTraitMission",0);
              FUN_140ac6c96(&local_88,&local_98);
              if (local_70 != 0) {
                FUN_1400020a8();
              }
              lVar12 = FUN_14001cc68(0x38,0x10);
              piVar13 = *(int **)(lVar8 + 8);
              if (piVar13 == (int *)0x0) {
                piVar13 = &DAT_14c9485f0;
              }
              local_88 = DAT_14c948618;
              iVar2 = DAT_14c948620;
              if (((*piVar13 != 0) && (iVar3 = piVar13[1], iVar3 != 0)) &&
                 (*piVar13 != DAT_14c948000)) {
                if ((iVar3 < 2) && (piVar13[9] < 1)) {
                  piVar13 = piVar13 + 2;
                }
                else {
                  piVar13 = *(int **)(piVar13 + 6);
                }
                if (0 < iVar3) {
                  local_88 = *(longlong **)piVar13;
                  iVar2 = piVar13[2];
                }
              }
              lStack_80 = CONCAT44(lStack_80._4_4_,iVar2);
              FUN_1400b22c2(local_228,"action_ui_bigmap_tooltip_main_action");
              local_238 = local_98;
              if (local_98 != (longlong *)0x0) {
                (**(code **)(*local_98 + 8))();
              }
              local_230 = local_90;
              FUN_148e24f42(lVar12,&local_238,local_228,&local_88);
              plVar14 = (longlong *)FUN_14001cc68(0x18,0x10);
              uVar6 = uStack_1c8;
              plVar14[1] = (longlong)&DAT_100000001;
              *plVar14 = (longlong)&PTR_FUN_14b9a7e40;
              plVar14[2] = lVar12;
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
                UNLOCK();
              }
              lVar17 = (longlong)(int)uStack_1c8;
              uStack_1c8 = uStack_1c8 + 1;
              if (uStack_1c4 < uStack_1c8) {
                FUN_145976dba(&uStack_1d0,uVar6);
              }
              *(longlong *)(CONCAT71(uStack_1cf,uStack_1d0) + lVar17 * 0x10) = lVar12;
              *(longlong **)(CONCAT71(uStack_1cf,uStack_1d0) + 8 + lVar17 * 0x10) = plVar14;
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar14 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar13 = (int *)((longlong)plVar14 + 0xc);
                  *piVar13 = *piVar13 + -1;
                  UNLOCK();
                  if (*piVar13 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
              local_f8 = *(undefined8 *)(lVar8 + 0x80);
              uStack_f0 = *(undefined8 *)(lVar8 + 0x88);
              local_e8 = *(undefined8 *)(lVar8 + 0x90);
              if (&uStack_e0 != (undefined1 *)(lVar8 + 0x98)) {
                iVar2 = *(int *)(lVar8 + 0xa0);
                _Src = *(void **)(lVar8 + 0x98);
                iStack_d8 = iVar2;
                if (iVar2 == 0 && iStack_d4 == 0) {
                  iStack_d4 = 0;
                }
                else {
                  FUN_1446dd670(&uStack_e0,iVar2);
                  if (iVar2 != 0) {
                    memcpy((void *)CONCAT71(uStack_df,uStack_e0),_Src,(longlong)iVar2 * 2);
                  }
                }
              }
              uStack_194 = 1;
              uStack_192 = 1;
              lVar12 = *(longlong *)(lVar8 + 0x20);
              if (lVar12 == 0) {
                uVar10 = FUN_14060ed7a();
                lVar12 = FUN_14477b664(uVar10);
                *(longlong *)(lVar8 + 0x20) = lVar12;
              }
              plVar14 = *(longlong **)(lVar8 + 0x28);
              if (plVar14 == (longlong *)0x0) {
                if ((lVar12 != 0) && (*(longlong *)(lVar8 + 0x18) != 0)) {
                  plVar14 = *(longlong **)(lVar12 + 0xb8);
                  if ((plVar14 == (longlong *)0x0) ||
                     (cVar5 = (**(code **)(*plVar14 + 0x108))(plVar14), cVar5 == '\0')) {
                    *(undefined8 *)(lVar8 + 0x28) = 0;
                  }
                  else {
                    uVar10 = (**(code **)(*plVar14 + 0x110))(plVar14);
                    plVar14 = (longlong *)FUN_144aff482(uVar10,(longlong *)(lVar8 + 0x18));
                    *(longlong **)(lVar8 + 0x28) = plVar14;
                    if (plVar14 != (longlong *)0x0) goto LAB_14424fcbb;
                  }
                }
              }
              else {
LAB_14424fcbb:
                lVar12 = (**(code **)(*plVar14 + 8))(plVar14);
                lVar17 = FUN_140fa5e64();
                if (((lVar17 != 0) && (*(int *)(lVar17 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar17 + 0x38) * 8) ==
                    lVar17 + 0x30)) {
                  puVar15 = (undefined4 *)plVar14[1];
                  if (puVar15 == (undefined4 *)0x0) {
                    puVar15 = &DAT_14c9485f0;
                  }
                  if ((int)puVar15[1] < 2 && (int)puVar15[9] < 1) {
                    puVar16 = puVar15 + 2;
                  }
                  else {
                    puVar16 = *(undefined4 **)(puVar15 + 6);
                  }
                  lVar12 = (longlong)(puVar15[1] + -1);
                  local_160 = puVar16[lVar12 * 3 + 2];
                  local_168 = *(longlong **)(puVar16 + lVar12 * 3);
                  uVar1 = *(ushort *)((longlong)plVar14 + 0x53a);
                  lVar12 = *(longlong *)(DAT_14cb86da8 + 0x370);
                  uVar10 = FUN_1447210f0(lVar7);
                  FUN_143deff24((ulonglong)((uint)uVar1 * 0x18) + lVar12,&local_88,&local_168,uVar10
                               );
                  FUN_140008f88(&local_150,&local_88);
                  if (local_88 != (longlong *)0x0) {
                    (**(code **)(*local_88 + 0x10))();
                  }
                  if ((0 < (int)plVar14[0xd]) && (lVar12 = plVar14[0xc], lVar12 != 0)) {
                    uVar10 = FUN_1447210f0(lVar7);
                    FUN_143deff24(lVar12 + 0x10,&local_88,&local_168,uVar10);
                    FUN_140008f88(&local_140,&local_88);
                    if (local_88 != (longlong *)0x0) {
                      (**(code **)(*local_88 + 0x10))();
                    }
                  }
                  FUN_146638436(&local_218,plVar14);
                  FUN_144275590(plVar14,lVar7,&local_190);
                  FUN_144250280(param_1,&local_218);
                }
              }
              FUN_14425062e(&local_218,lVar8);
              iVar2 = (int)param_2[1];
              *(uint *)(param_2 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
                FUN_148e2ac4c(param_2,iVar2);
              }
              FUN_14106add8((longlong)iVar2 * 0x150 + *param_2,&local_218);
              if (local_98 != (longlong *)0x0) {
                (**(code **)(*local_98 + 0x10))();
              }
              FUN_14116e718(&local_218);
              plVar14 = local_240;
            }
            plVar18 = plVar18 + 3;
          } while (plVar18 != plVar14);
        }
        if (local_a8 != (longlong *)0x0) {
          FUN_1400020a8(local_a8);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144250280 FUN_144250280 body=941 status=ok
// SIG undefined FUN_144250280(void)

void FUN_144250280(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined2 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  code **local_180;
  undefined1 *local_178;
  code *local_170;
  undefined8 local_168;
  int local_160;
  undefined8 local_158;
  int local_150;
  undefined4 local_14c;
  longlong local_148;
  uint local_140;
  longlong local_138;
  ulonglong uStack_130;
  code *local_120 [7];
  byte local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_180 = local_120;
      local_120[0] = FUN_141030f22;
      local_170 = FUN_14081d0ea;
      local_178 = &LAB_1459f2e4c;
      local_188 = &LAB_148c39de3;
      local_190 = &LAB_1457a9eb2;
      local_198 = &DAT_149e063b2;
      local_1a0 = 0;
      local_1a8 = 0x10000004;
      local_1b0 = 0x10;
      local_1b8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_138 = 0;
      uStack_130 = 0;
      local_158 = 0;
      iVar1 = *(int *)(param_3 + 0x60);
      uVar4 = *(undefined8 *)(param_3 + 0x58);
      local_150 = iVar1;
      if (iVar1 == 0) {
        local_14c = 0;
      }
      else {
        FUN_1487816c8(&local_158,iVar1,0);
        FUN_148781737(local_158,uVar4,iVar1);
      }
      FUN_14435d498(&local_148,&local_158);
      uVar5 = (ulonglong)local_140;
      if (0 < (int)local_140) {
        lVar6 = 0;
        lVar7 = 0;
        do {
          piVar3 = *(int **)(param_3 + 8);
          if (piVar3 == (int *)0x0) {
            piVar3 = &DAT_14c9485f0;
          }
          if (((*piVar3 == 0) || (iVar1 = piVar3[1], iVar1 == 0)) || (*piVar3 == DAT_14c948000)) {
LAB_14425043d:
            local_160 = DAT_14c948620;
            local_168 = DAT_14c948618;
          }
          else {
            if ((iVar1 < 2) && (piVar3[9] < 1)) {
              piVar3 = piVar3 + 2;
            }
            else {
              piVar3 = *(int **)(piVar3 + 6);
            }
            if (iVar1 < 1) goto LAB_14425043d;
            local_160 = piVar3[2];
            local_168 = *(undefined8 *)piVar3;
          }
          lVar8 = local_148 + lVar6;
          uVar4 = FUN_1447210f0(lVar2);
          uVar4 = FUN_1406f625c(uVar4);
          FUN_140c5218a(lVar8,local_120,uVar4,&local_168);
          lVar8 = FUN_140c520a2(local_120);
          if (lVar8 != 0) {
            FUN_140eeff92(lVar8,&local_138,lVar2);
          }
          (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[local_e8])(local_120);
          lVar7 = lVar7 + 1;
          uVar5 = (ulonglong)(int)local_140;
          lVar6 = lVar6 + 0x58;
        } while (lVar7 < (longlong)uVar5);
        if ((longlong)(int)uStack_130 != 0) {
          lVar6 = (longlong)(int)uStack_130 * 0xe0;
          lVar2 = local_138;
          do {
            if (*(longlong *)(lVar2 + 8) != 0) {
              FUN_140c5254a(lVar2,local_120);
              iVar1 = *(int *)(param_2 + 0xa8);
              *(uint *)(param_2 + 0xa8) = iVar1 + 1U;
              if (*(uint *)(param_2 + 0xac) < iVar1 + 1U) {
                FUN_140c71e7a((longlong *)(param_2 + 0xa0),iVar1);
              }
              FUN_140c541bc((longlong)iVar1 * 0xd8 + *(longlong *)(param_2 + 0xa0),local_120);
              FUN_1407dde54(local_120);
            }
            lVar2 = lVar2 + 0xe0;
            lVar6 = lVar6 + -0xe0;
          } while (lVar6 != 0);
          uVar5 = (ulonglong)local_140;
        }
      }
      FUN_140741dda(local_148,uVar5);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      FUN_14087acb9(local_138,uStack_130 & 0xffffffff);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425062e FUN_14425062e body=833 status=ok
// SIG undefined FUN_14425062e(void)

void FUN_14425062e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar6 = (undefined8 *)FUN_14435d38a(param_2 + 0x48);
  local_58 = (longlong *)0x0;
  iVar2 = *(int *)(puVar6 + 1);
  uVar7 = *puVar6;
  local_50 = iVar2;
  if (iVar2 != 0) {
    FUN_148cbcd96(&local_58,iVar2,0);
    FUN_148cbce09(local_58,uVar7,iVar2);
    if ((longlong)local_50 != 0) {
      plVar1 = local_58 + (longlong)local_50 * 3;
      plVar8 = local_58;
      do {
        local_68 = 0;
        local_70 = *plVar8;
        local_60 = 0;
        uVar7 = FUN_14477b664(plVar8[1]);
        local_68 = FUN_14477b664(uVar7);
        local_60 = plVar8[2];
        if (local_68 == 0) {
          uVar7 = FUN_14117f018();
          local_68 = FUN_14477b664(uVar7);
        }
        if (local_60 == 0) {
          local_60 = 0;
          if ((((local_68 != 0) && (local_70 != 0)) &&
              (plVar4 = *(longlong **)(local_68 + 0xb8), plVar4 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 != '\0')) {
            uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
            local_60 = FUN_144aff482(uVar7,&local_70);
            if (local_60 != 0) goto LAB_144250730;
          }
        }
        else {
LAB_144250730:
          lVar9 = local_60;
          local_80 = 0;
          local_88 = *(longlong *)(local_60 + 0x50);
          local_78 = 0;
          uVar7 = FUN_14477b664(*(undefined8 *)(local_60 + 0x58));
          local_80 = FUN_14477b664(uVar7);
          local_78 = *(longlong *)(lVar9 + 0x60);
          if (local_80 == 0) {
            uVar7 = FUN_1465f8c9c();
            local_80 = FUN_14477b664(uVar7);
          }
          if (local_78 == 0) {
            local_78 = 0;
            if (((local_80 != 0) && (local_88 != 0)) &&
               ((plVar4 = *(longlong **)(local_80 + 0xb8), plVar4 != (longlong *)0x0 &&
                (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 != '\0')))) {
              uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
              local_78 = FUN_144aff482(uVar7,&local_88);
              if (local_78 != 0) goto LAB_144250777;
            }
          }
          else {
LAB_144250777:
            lVar9 = local_78;
            if (local_80 == 0) {
              uVar7 = FUN_1465f8c9c();
              local_80 = FUN_14477b664(uVar7);
              lVar9 = local_78;
              if (local_78 == 0) {
                if (local_80 == 0) {
                  lVar9 = 0;
                }
                else {
                  lVar9 = 0;
                  if (local_88 != 0) {
                    plVar4 = *(longlong **)(local_80 + 0xb8);
                    if ((plVar4 == (longlong *)0x0) ||
                       (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
                      lVar9 = 0;
                      local_78 = lVar9;
                    }
                    else {
                      uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
                      lVar9 = FUN_144aff482(uVar7,&local_88);
                      local_78 = lVar9;
                    }
                  }
                }
              }
            }
            iVar2 = *(int *)(param_1 + 0x118);
            *(uint *)(param_1 + 0x118) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x11c) < iVar2 + 1U) {
              FUN_14001d63e((longlong *)(param_1 + 0x110),iVar2);
            }
            lVar3 = *(longlong *)(param_1 + 0x110);
            plVar4 = *(longlong **)(lVar9 + 0x18);
            *(longlong **)(lVar3 + (longlong)iVar2 * 0x10) = plVar4;
            if (plVar4 != (longlong *)0x0) {
              (**(code **)(*plVar4 + 8))();
            }
            *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x10 + 8) = *(undefined4 *)(lVar9 + 0x20);
          }
        }
        plVar8 = plVar8 + 3;
      } while (plVar8 != plVar1);
    }
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144250970 FUN_144250970 body=1899 status=ok
// SIG undefined FUN_144250970(void)

void FUN_144250970(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  ulonglong local_1f0;
  undefined2 *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  code **local_1d0;
  undefined1 *local_1c8;
  code *local_1c0;
  longlong local_1b0;
  char *local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  code *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined1 local_160;
  undefined8 local_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined8 uStack_13f;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_14580f9a5(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_148e2aba6(param_2,0);
  }
  *(int *)(param_2 + 2) = *(int *)(param_2 + 2) + 1;
  lVar4 = FUN_1400d7050(param_1 + 0x30);
  if (lVar4 == 0) goto LAB_144250a07;
  if (DAT_14cbadd90 == 0) {
    local_1d0 = &local_190;
    local_190 = FUN_141030f22;
    local_1c0 = FUN_14081d0ea;
    local_1c8 = &LAB_1459f2e4c;
    local_1d8 = &LAB_148c39de3;
    local_1e0 = &LAB_1457a9eb2;
    local_1e8 = &DAT_149e063b2;
    local_1f0 = 0;
    local_1f8 = 0x10000004;
    local_200 = 0x10;
    local_208 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_144250a07;
  lVar4 = FUN_1402a1246(lVar4);
  if (lVar4 == 0) goto LAB_144250a07;
  memset(&local_190,0,0x150);
  local_160 = 1;
  local_150 = 0;
  uStack_148 = 0;
  uStack_147 = 0;
  uStack_140 = 0;
  uStack_13f = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  uStack_111 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 1;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = DAT_14c948618;
  local_d8 = DAT_14c948620;
  local_d4 = DAT_14c948618;
  local_cc = DAT_14c948620;
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
  local_c8 = DAT_14c844840;
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
  local_c0 = 0;
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
  local_b8 = DAT_14c844840;
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
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
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
  local_90 = DAT_14c844840;
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
  uVar7 = 0;
  local_88 = 0;
  local_44 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_57 = 0;
  uStack_50 = 0;
  uStack_4f = 0;
  local_1a8 = "UI_LocationTypeName_BlackMarketVendor";
  local_1a0 = CONCAT35(local_1a0._5_3_,0x25);
  uVar5 = FUN_14001a6c0(&local_1a8,1);
  local_1a8 = (char *)(uVar5 & 0xffffffff);
  bVar8 = local_1a8 != (char *)0x0;
  uVar6 = FUN_1465d5758();
  local_1a0 = FUN_14477b664(uVar6);
  local_198 = 0;
  if (local_1a0 != 0 && bVar8) {
    plVar2 = *(longlong **)(local_1a0 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar7 = FUN_144aff482(uVar6,&local_1a8);
        goto LAB_144250cb3;
      }
    }
    uVar7 = 0;
  }
LAB_144250cb3:
  local_1a8 = "UILocation_BlackMarketVendor";
  local_1a0 = CONCAT35(local_1a0._5_3_,0x1c);
  local_180 = uVar7;
  uVar5 = FUN_14001a6c0(&local_1a8,1);
  local_1a8 = (char *)(uVar5 & 0xffffffff);
  bVar8 = local_1a8 == (char *)0x0;
  uVar6 = FUN_14125b292();
  local_1a0 = FUN_14477b664(uVar6);
  local_198 = 0;
  if ((local_1a0 == 0 || bVar8) ||
     (plVar2 = *(longlong **)(local_1a0 + 0xb8), plVar2 == (longlong *)0x0)) {
LAB_144250d13:
    local_188 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_144250d13;
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    local_188 = FUN_144aff482(uVar6,&local_1a8);
  }
  local_1a8 = "DiscoveryPresentation_BlackMarketVendor";
  local_1a0 = CONCAT35(local_1a0._5_3_,0x27);
  uVar5 = FUN_14001a6c0(&local_1a8,1);
  local_1a8 = (char *)(uVar5 & 0xffffffff);
  bVar8 = local_1a8 == (char *)0x0;
  uVar6 = FUN_140bd9786();
  local_1a0 = FUN_14477b664(uVar6);
  local_198 = 0;
  if ((local_1a0 == 0 || bVar8) ||
     (plVar2 = *(longlong **)(local_1a0 + 0xb8), plVar2 == (longlong *)0x0)) {
LAB_144250db7:
    local_190 = (code *)0x0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_144250db7;
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    local_190 = (code *)FUN_144aff482(uVar6,&local_1a8);
  }
  FUN_140212f8e(&local_1b0);
  local_1f0 = local_1f0 & 0xffffffff00000000;
  local_1f8 = 0;
  local_200 = 0;
  local_208 = 0;
  FUN_14021300e(&local_1a8,0x7b2,1,1);
  local_1b0 = local_1b0 - (longlong)local_1a8;
  uVar5 = *(ulonglong *)(lVar4 + 0xf20);
  bVar8 = (uint)((int)(SUB168(SEXT816(local_1b0) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
                ((int)(local_1b0 / -0x6769800000000000) + (int)(local_1b0 >> 0x3f))) < uVar5;
  uStack_4f = CONCAT17(bVar8,(undefined7)uStack_4f);
  local_44 = (undefined4)uVar5;
  if (!bVar8) {
    local_44 = 0;
  }
  FUN_148e2503e(param_2,&local_190);
  FUN_14116e718(&local_190);
LAB_144250a07:
  if ((local_40 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442510dc FUN_1442510dc body=380 status=ok
// SIG undefined FUN_1442510dc(void)

void FUN_1442510dc(longlong param_1)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  code *local_98;
  longlong *local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong local_78;
  int local_70;
  longlong local_68;
  code **local_60;
  code *local_58;
  code ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = param_1;
  if (param_1 != 0) {
    lVar1 = FUN_140d1d7e4();
    local_88 = (void *)0x0;
    local_80 = *(int *)(lVar1 + 0xf8);
    lVar2 = (longlong)local_80;
    _Src = *(void **)(lVar1 + 0xf0);
    if (lVar2 == 0) {
      local_7c = 0;
    }
    else {
      FUN_148c134f8(&local_88,local_80,0);
      memcpy(local_88,_Src,lVar2 * 0x30);
    }
    FUN_14435d068(&local_78,&local_88);
    FUN_148e24f04(param_1,local_70);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    if ((longlong)local_70 != 0) {
      lVar1 = (longlong)local_70 * 0x30;
      lVar2 = DAT_14cb78540;
      lVar3 = local_78;
      do {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          local_a0 = &local_68;
          local_98 = FUN_14425c876;
          local_58 = FUN_148e2ace0;
          local_a8 = lVar3;
          local_90 = &local_a8;
          local_60 = &local_98;
          local_50 = &local_60;
          FUN_14187e804(lVar2,&local_58,0);
          lVar2 = DAT_14cb78540;
        }
        lVar3 = lVar3 + 0x30;
        lVar1 = lVar1 + -0x30;
      } while (lVar1 != 0);
    }
    if (local_78 != 0) {
      FUN_1400020a8(local_78);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425125a FUN_14425125a body=1998 status=ok
// SIG undefined FUN_14425125a(void)

void FUN_14425125a(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  bool bVar13;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined2 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  uint *local_130;
  undefined1 *local_128;
  code *local_120;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined2 local_47;
  undefined1 local_45;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = param_1 + -0x30;
  lVar4 = FUN_141169abc(lVar1);
  if (lVar4 != 0) {
    local_d8 = 0x4624ddfe;
    uStack_d4 = 1;
    local_d0 = 0;
    FUN_145c82d88(lVar4 + 0x480,&local_f8,lVar1,&local_d8);
    local_d8 = 0x4116e8bc;
    uStack_d4 = 1;
    local_d0 = 0;
    FUN_145984310(lVar4 + 0x438,&local_f8,lVar1,&local_d8);
    local_d8 = 0x4116df8a;
    uStack_d4 = 1;
    local_d0 = 0;
    FUN_145984310(lVar4 + 0x450,&local_f8,lVar1,&local_d8);
    local_d8 = 0x4116e8bc;
    uStack_d4 = 1;
    local_d0 = 0;
    FUN_145984310(lVar4 + 0x468,&local_f8,lVar1,&local_d8);
    local_d8 = 0x4580d2e8;
    uStack_d4 = 1;
    local_d0 = 0;
    FUN_146638780(lVar4 + 0x498,&local_f8,lVar1,&local_d8);
    local_d8 = 0x45843b46;
    uStack_d4 = 1;
    local_d0 = 0;
    FUN_145c82f86(lVar4 + 0x4b0,&local_f8,lVar1,&local_d8);
    local_d8 = 0x41125d64;
    uStack_d4 = 1;
    local_d0 = 0;
    FUN_146638780(lVar4 + 0x4c8,&local_f8,lVar1,&local_d8);
    local_d8 = 0x44251a2a;
    uStack_d4 = 1;
    local_d0 = 0;
    FUN_145c83184(lVar4 + 0xbe0,&local_f8,lVar1,&local_d8);
  }
  plVar7 = (longlong *)(param_1 + 0xe0);
  if (((*(int *)(param_1 + 0xe8) != 0) && ((longlong *)*plVar7 != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(*(longlong *)*plVar7 + 0x30))(), cVar3 != '\0')) goto LAB_144251596;
  local_d8 = 0;
  uStack_d4 = 0;
  local_d0 = 0;
  FUN_1446efa72(&local_d8,0,3,0x10);
  local_d0 = 3;
  puVar9 = (undefined8 *)CONCAT44(uStack_d4,local_d8);
  *puVar9 = &PTR_LAB_14b3e6310;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar9[2] = lVar8;
  *puVar9 = &PTR_FUN_14b9a81e0;
  puVar9[3] = 0;
  iVar10 = 0;
  if (lVar1 != 0) {
    uVar2 = *(uint *)(param_1 + -0x24);
    *(uint *)(puVar9 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar10 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar4 + 0x10);
      bVar13 = iVar10 == 0;
      if (bVar13) {
        *(int *)(lVar4 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar10 = iVar11;
      }
    }
  }
  iVar11 = local_d0;
  *(int *)((longlong)puVar9 + 0x1c) = iVar10;
  puVar9[4] = FUN_148e25088;
  *(undefined4 *)(puVar9 + 5) = 0;
  uVar5 = CONCAT44(uStack_d4,local_d8);
  local_d8 = 0;
  uStack_d4 = 0;
  local_d0 = 0;
  if (*(int *)(param_1 + 0xe8) == 0) {
LAB_144251530:
    if (*plVar7 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar9 = (undefined8 *)*plVar7;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,0);
      FUN_1446efa72(plVar7,0,0,0x10);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      goto LAB_144251530;
    }
  }
  *(undefined8 *)(param_1 + 0xe0) = uVar5;
  *(int *)(param_1 + 0xe8) = iVar11;
  puVar9 = (undefined8 *)CONCAT44(uStack_d4,local_d8);
  if (local_d0 != 0) {
    if (puVar9 == (undefined8 *)0x0) goto LAB_144251596;
    (**(code **)*puVar9)(puVar9,0);
    FUN_1446efa72(&local_d8,0,0,0x10);
    local_d0 = 0;
    puVar9 = (undefined8 *)CONCAT44(uStack_d4,local_d8);
  }
  if (puVar9 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144251596:
  lVar4 = FUN_1400d7050(param_1);
  if (lVar4 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_130 = &local_d8;
      local_d8 = 0x41030f22;
      uStack_d4 = 1;
      local_120 = FUN_14081d0ea;
      local_128 = &LAB_1459f2e4c;
      local_138 = &LAB_148c39de3;
      local_140 = &LAB_1457a9eb2;
      local_148 = &DAT_149e063b2;
      local_150 = 0;
      local_158 = 0x10000004;
      local_160 = 0x10;
      local_168 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      uVar5 = FUN_1447210f0(lVar4);
      lVar8 = FUN_140149a73(uVar5,0);
      if ((lVar8 != 0) && (plVar6 = (longlong *)FUN_1403a0144(lVar8), plVar6 != (longlong *)0x0)) {
        local_d8 = local_d8 & 0xffffff00;
        uStack_d4 = 0;
        local_d0 = 0;
        local_cc = 0;
        local_c8 = 0;
        local_c4 = 0;
        uStack_bc = 0;
        local_b4 = 0;
        local_a8 = 0xc69c4000;
        local_58 = 0;
        local_50 = 0;
        local_48 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        local_47 = 1;
        local_45 = 0;
        local_44 = 0;
        FUN_1401aa3da((longlong)&uStack_bc + 4,plVar7);
        lVar8 = FUN_140d1d7e4();
        if ((((*(int *)(lVar8 + 0x68) == 0) || (iVar10 = *(int *)(lVar8 + 0x6c), iVar10 == 0)) ||
            (*(int *)(lVar8 + 0x68) == DAT_14c948000)) || ((iVar10 == 1 || (iVar10 < 2)))) {
          local_e0 = DAT_14c948620;
          local_e8 = DAT_14c948618;
        }
        else {
          local_e0 = *(undefined4 *)(*(longlong *)(lVar8 + 0x80) + 0x14);
          local_e8 = *(undefined8 *)(*(longlong *)(lVar8 + 0x80) + 0xc);
        }
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_f8,&local_e8,&local_d8);
        lVar8 = FUN_140d1d7e4();
        if ((((*(int *)(lVar8 + 0x68) == 0) || (iVar10 = *(int *)(lVar8 + 0x6c), iVar10 == 0)) ||
            (*(int *)(lVar8 + 0x68) == DAT_14c948000)) || ((iVar10 == 1 || (iVar10 < 2)))) {
          local_108 = DAT_14c948620;
          local_110 = DAT_14c948618;
        }
        else {
          local_108 = *(undefined4 *)(*(longlong *)(lVar8 + 0x80) + 0x14);
          local_110 = *(undefined8 *)(*(longlong *)(lVar8 + 0x80) + 0xc);
        }
        (**(code **)(*plVar6 + 0x28))(plVar6,&local_100,&local_110);
        local_f8 = local_f8 & 0xffffff00;
        uStack_f4 = 0;
        uStack_f0 = 0;
        local_ec = 0;
        FUN_144976b9c(&local_f8,local_100);
        if ((char)local_f8 == '\x01') {
          uVar12 = local_ec != 0;
        }
        else {
          uVar12 = FUN_140321d1a(&local_f8);
        }
        *(undefined1 *)(param_1 + 0x1c4) = uVar12;
        FUN_1409838b8(&local_d8);
      }
      if (((*(longlong *)(param_1 + 0x130) == 0) &&
          (plVar7 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x958) + 0x10))(lVar4 + 0x958),
          plVar7 != (longlong *)0x0)) &&
         (lVar8 = (**(code **)(*plVar7 + 0x2b8))(plVar7), lVar8 != 0)) {
        local_d8 = 0x48e2517e;
        uStack_d4 = 1;
        local_d0 = 0;
        FUN_146638880(lVar8 + 8,&local_f8,lVar1);
        *(ulonglong *)(param_1 + 0x130) = CONCAT44(uStack_f4,local_f8);
      }
      local_d8 = 0x44251b88;
      uStack_d4 = 1;
      local_d0 = 0;
      FUN_146638780(lVar4 + 0x3c70,&local_f8,lVar1);
    }
  }
  local_d8 = 0x48e24c1c;
  uStack_d4 = 1;
  local_d0 = 0;
  FUN_146638780(&DAT_14cbd0b30,&local_f8,lVar1);
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144251a2a FUN_144251a2a body=348 status=ok
// SIG undefined FUN_144251a2a(void)

void FUN_144251a2a(longlong param_1,int *param_2)

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
  undefined1 local_24 [4];
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_1400d7050(param_1 + 0x30);
  if (lVar1 != 0) {
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
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) && (*param_2 == 1)
       ) {
      lVar1 = FUN_140e4494e(lVar1);
      if (lVar1 != 0) {
        FUN_1446f470e(&local_20,L"UIMessage_BigMap_NoPathFoundToast",1);
        FUN_148e38158(lVar1,local_24,&local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144251b88 FUN_144251b88 body=104 status=ok
// SIG undefined FUN_144251b88(void)

void FUN_144251b88(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14571695d();
  if ((*(char *)(lVar1 + 0xb5) == '\x01') &&
     (lVar1 = FUN_14571695d(), *(char *)(lVar1 + 0xb4) == '\x01')) {
    lVar1 = FUN_14571695d();
    if (*(float *)(lVar1 + 0xb8) <= 0.0) {
      return;
    }
    FUN_14425270e(param_1,1);
    return;
  }
  FUN_14425270e(param_1,0);
  if (*(char *)(param_1 + 0x290) == '\x01') {
    *(undefined1 *)(param_1 + 0x290) = 0;
  }
  return;
}



// FUNCTION 144251bf0 FUN_144251bf0 body=476 status=ok
// SIG undefined FUN_144251bf0(void)

void FUN_144251bf0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + -0x30;
  lVar2 = FUN_141169abc(lVar1);
  if (lVar2 != 0) {
    FUN_140457ffc(lVar2 + 0x480,lVar1);
    FUN_140457ffc(lVar2 + 0x438,lVar1);
    FUN_140457ffc(lVar2 + 0x450,lVar1);
    FUN_140457ffc(lVar2 + 0x468,lVar1);
    FUN_140457ffc(lVar2 + 0x498,lVar1);
    FUN_140457ffc(lVar2 + 0x4c8,lVar1);
  }
  lVar2 = FUN_1400d7050(param_1);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x958) + 0x10))(lVar2 + 0x958);
      if (plVar3 != (longlong *)0x0) {
        lVar2 = (**(code **)(*plVar3 + 0x2b8))(plVar3);
        if (lVar2 != 0) {
          FUN_140457ffc(lVar2 + 8,lVar1);
          *(undefined8 *)(param_1 + 0x130) = 0;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144251de2 FUN_144251de2 body=109 status=ok
// SIG undefined FUN_144251de2(void)

void FUN_144251de2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    lVar1 = FUN_141169abc();
    if (lVar1 != 0) {
      local_28 = *(undefined8 *)(param_2 + 0x10);
      local_20 = *(undefined4 *)(param_2 + 0x18);
      FUN_14418f28a(lVar1,*(undefined1 *)(param_2 + 8));
      FUN_1416afcd8(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144251e50 FUN_144251e50 body=282 status=ok
// SIG undefined FUN_144251e50(void)

void FUN_144251e50(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  short local_44 [2];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1449027d0(param_1,&local_40);
  lVar4 = *(longlong *)(local_40 + 0x410);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b0));
  *(int *)(lVar4 + 0x1a8) = *(int *)(lVar4 + 0x1a8) + 1;
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
  *(undefined1 *)(lVar4 + 0x15b) = *(undefined1 *)(param_2 + 8);
  lVar6 = FUN_140495e96(param_1 + 6);
  uVar3 = *(undefined4 *)(lVar6 + 0xe0);
  uVar7 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar6 = FUN_1400f6f32(uVar7);
  if (((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 0x30), lVar5 != 0)) &&
     (*(longlong *)(lVar6 + 0x68) != 0)) {
    FUN_140ceec26(*(longlong *)(lVar6 + 0x68),local_44,uVar3);
    if (-1 < local_44[0]) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_140ceec8e(lVar5,&local_40,local_44);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x1b0));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144251f6c FUN_144251f6c body=1267 status=ok
// SIG undefined FUN_144251f6c(void)

void FUN_144251f6c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = FUN_140495e96();
  lVar3 = FUN_1404960a8(uVar2);
  if (lVar3 != 0) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      local_30 = "FOakUIEvent_BigMap_SetMapViewMode";
      local_28 = 0x21;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x28) = 0;
    }
    if (*(longlong *)(param_1 + 0x38) != 0) {
      local_30 = "FOakUIEvent_BigMap_Rotate";
      local_28 = 0x19;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      local_30 = "FOakUIEvent_BigMap_Center";
      local_28 = 0x19;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x40));
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
    if (*(longlong *)(param_1 + 0x48) != 0) {
      local_30 = "FOakUIEvent_BigMap_SetMarker";
      local_28 = 0x1c;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (*(longlong *)(param_1 + 0x50) != 0) {
      local_30 = "FOakUIEvent_BigMap_RemoveMarker";
      local_28 = 0x1f;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x50));
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
    if (*(longlong *)(param_1 + 0x58) != 0) {
      local_30 = "FOakUIEvent_BigMap_SwitchRegion";
      local_28 = 0x1f;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x58));
      *(undefined8 *)(param_1 + 0x58) = 0;
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
      local_30 = "FOakUIEvent_BigMap_Drag_Ended";
      local_28 = 0x1d;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x68));
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    if (*(longlong *)(param_1 + 0x70) != 0) {
      local_30 = "FOakUIEvent_BigMap_Drag_Ended";
      local_28 = 0x1d;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x70));
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    if (*(longlong *)(param_1 + 0x138) != 0) {
      local_30 = "FOakUIEvent_ShowMissionOnMap";
      local_28 = 0x1c;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x138));
      *(undefined8 *)(param_1 + 0x138) = 0;
    }
    if (*(longlong *)(param_1 + 0x78) != 0) {
      local_30 = "FOakUIEvent_DiscoverLocationsUpdated";
      local_28 = 0x24;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x78));
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      local_30 = "FOakUIEvent_BigMap_LocateOnMap";
      local_28 = 0x1e;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x80));
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    if (*(longlong *)(param_1 + 0x88) != 0) {
      local_30 = "FOakUIEvent_BigMap_FastTravel";
      local_28 = 0x1d;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    if (*(longlong *)(param_1 + 0x90) != 0) {
      local_30 = "FOakUIEvent_BigMap_TrackMission";
      local_28 = 0x1f;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x90));
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    if (*(longlong *)(param_1 + 0x98) != 0) {
      local_30 = "FOakUIEvent_BigMap_ViewProfile";
      local_28 = 0x1e;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0x98));
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      local_30 = "FOakUIEvent_BigMap_SetFilterVisibility";
      local_28 = 0x26;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0xa8));
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      local_30 = "FOakUIEvent_BigMap_SetUseFixedFilters";
      local_28 = 0x25;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0xb0));
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      local_30 = "FOakUIEvent_BigMap_SwitchMaps";
      local_28 = 0x1d;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      FUN_1401cd85c(lVar3,uVar1,(undefined8 *)(param_1 + 0xb8));
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425246a FUN_14425246a body=35 status=ok
// SIG undefined FUN_14425246a(void)

void FUN_14425246a(void)

{
  longlong lVar1;
  
  lVar1 = FUN_141169abc();
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x808) == '\x01')) {
    *(undefined1 *)(lVar1 + 0x808) = 0;
  }
  return;
}



// FUNCTION 14425248e FUN_14425248e body=89 status=ok
// SIG undefined FUN_14425248e(void)

void FUN_14425248e(undefined8 param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_141169abc();
  if ((lVar1 != 0) &&
     (9.99999905104687e-09 <=
      param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1])) {
    FUN_148d6dc68(lVar1,0xbf800000);
    return;
  }
  return;
}



// FUNCTION 1442524e8 FUN_1442524e8 body=89 status=ok
// SIG undefined FUN_1442524e8(void)

void FUN_1442524e8(undefined8 param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_141169abc();
  if ((lVar1 != 0) &&
     (9.99999905104687e-09 <=
      param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1])) {
    FUN_148d6dc68(lVar1,0x3f800000);
    return;
  }
  return;
}



// FUNCTION 144252542 FUN_144252542 body=54 status=ok
// SIG undefined FUN_144252542(void)

void FUN_144252542(undefined8 param_1,double *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_141169abc();
  if (lVar1 != 0) {
    *(float *)(lVar1 + 0x71c) = (float)*param_2 * *(float *)(lVar1 + 0x930);
    *(undefined4 *)(lVar1 + 0x720) = 0;
  }
  return;
}



// FUNCTION 144252578 FUN_144252578 body=197 status=ok
// SIG undefined FUN_144252578(void)

void FUN_144252578(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK SRWLock;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar6 = *(longlong *)(local_40 + 0x410);
  SRWLock = (PSRWLOCK)(lVar6 + 0x1b0);
  AcquireSRWLockShared(SRWLock);
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
  if (*(char *)(lVar6 + 0x15a) == '\0') {
    lVar6 = FUN_141169abc(param_1);
    if (lVar6 != 0) {
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *(undefined4 *)(lVar6 + 0x6e0) = *param_2;
      *(undefined4 *)(lVar6 + 0x6e4) = uVar3;
      *(undefined4 *)(lVar6 + 0x6e8) = uVar4;
      *(undefined4 *)(lVar6 + 0x6ec) = uVar5;
      *(undefined4 *)(lVar6 + 0x710) = 0;
    }
  }
  ReleaseSRWLockShared(SRWLock);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425263e FUN_14425263e body=207 status=ok
// SIG undefined FUN_14425263e(void)

void FUN_14425263e(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1449027d0(param_1,&local_40);
  lVar3 = *(longlong *)(local_40 + 0x410);
  AcquireSRWLockShared((PSRWLOCK)(lVar3 + 0x1b0));
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
  if ((*(char *)(lVar3 + 0x15a) == '\0') && (*(char *)(lVar3 + 0x159) == '\0')) {
    lVar7 = FUN_141169abc(param_1);
    if (lVar7 != 0) {
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined4 *)(lVar7 + 0x6f0) = *param_2;
      *(undefined4 *)(lVar7 + 0x6f4) = uVar4;
      *(undefined4 *)(lVar7 + 0x6f8) = uVar5;
      *(undefined4 *)(lVar7 + 0x6fc) = uVar6;
      *(undefined4 *)(lVar7 + 0x714) = 0;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar3 + 0x1b0));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425270e FUN_14425270e body=771 status=ok
// SIG undefined FUN_14425270e(void)

void FUN_14425270e(longlong *param_1,char param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined2 local_b0 [2];
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      plVar5 = (longlong *)(lVar3 + 0x458);
    }
    else {
      plVar5 = (longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    lVar3 = *plVar5;
    lVar4 = param_1[0x54];
    if (lVar4 != 0) {
      uVar8 = (uint)lVar4;
      if ((int)(uVar8 & 0xffffff) < *(int *)(lVar3 + 0x10)) {
        lVar7 = lVar3 + 0x18;
        if (*(longlong *)(lVar3 + 0x28) != 0) {
          lVar7 = *(longlong *)(lVar3 + 0x28);
        }
        if ((*(uint *)(lVar7 + (ulonglong)((uVar8 & 0xffffff) >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0
           ) {
          lVar7 = *(longlong *)(lVar3 + 8);
          lVar6 = (ulonglong)(uVar8 & 0xffffff) * 0x70;
          if (((lVar7 + lVar6 != 0) && (*(longlong *)(lVar7 + 0x60 + lVar6) == lVar4)) &&
             (*(char *)(lVar7 + 1 + lVar6) != '\x04')) {
            FUN_1405a424c(lVar3);
          }
        }
      }
      param_1[0x54] = 0;
    }
    lVar4 = FUN_14571695d();
    if (param_2 == '\x01' && 0.0 < *(float *)(lVar4 + 0xb8)) {
      lVar4 = FUN_14571695d();
      uVar1 = *(undefined4 *)(lVar4 + 0xb8);
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      puVar2 = local_c0;
      local_b8 = 3;
      *local_c0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar7 == 0) {
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_c0[2] = lVar7;
      *local_c0 = &PTR_FUN_14b9a8480;
      local_c0[3] = 0;
      iVar10 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar8 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_c0 + 3) = uVar8;
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar10 = *(int *)(lVar4 + 0x10);
        if (*(int *)(lVar4 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar10 = *(int *)(lVar4 + 0x10);
          bVar11 = iVar10 == 0;
          if (bVar11) {
            *(int *)(lVar4 + 0x10) = iVar9;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar10 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar2 + 0x1c) = iVar10;
      puVar2[4] = &LAB_144252a12;
      *(undefined4 *)(puVar2 + 5) = 0;
      local_a8 = 0;
      local_a0 = 0;
      FUN_14487d8d8(&local_a8,&local_c0);
      local_68 = 1;
      local_c8 = local_b0;
      local_b0[0] = 0;
      local_ac = 0xbf800000;
      FUN_1406f4044(lVar3,param_1 + 0x54,&local_a8,uVar1);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
      if (local_b8 != 0) {
        if (local_c0 == (undefined8 *)0x0) goto LAB_14425274a;
        (**(code **)*local_c0)(local_c0,0);
        FUN_1446efa72(&local_c0,0,0,0x10);
        local_b8 = 0;
      }
      if (local_c0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14425274a:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144252e40 FUN_144252e40 body=359 status=ok
// SIG undefined FUN_144252e40(void)

undefined4 FUN_144252e40(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
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
  if (*(int *)(param_1 + 0x24) != 0) {
    lVar3 = FUN_1400f3ad8(param_1 + 0x14);
    if (lVar3 != 0) {
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
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (*(int *)(param_1 + 0x2c) != 0)) {
        uVar1 = *(uint *)(param_1 + 0x28);
        uVar2 = 0;
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144252ea2;
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x2c))) {
          uVar2 = CONCAT31((int3)(*(uint *)(lVar3 + 8) >> 8),
                           (*(uint *)(lVar3 + 8) & 0x10200000) == 0);
          goto LAB_144252ea2;
        }
      }
    }
  }
  uVar2 = 0;
LAB_144252ea2:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144252fa8 FUN_144252fa8 body=127 status=ok
// SIG undefined FUN_144252fa8(void)

void FUN_144252fa8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140059518(param_1 + 0x14);
  if (lVar1 != 0) {
    lVar1 = FUN_1403ca91c(lVar1);
    if (lVar1 != 0) {
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_14480f766(lVar1 + 0x30);
      }
      *(undefined8 *)(param_1 + 0x30) = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        FUN_14480f766(lVar1 + 0x48);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_14480f766(lVar1 + 0x78);
      }
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
  return;
}



// FUNCTION 144253028 FUN_144253028 body=1310 status=ok
// SIG undefined FUN_144253028(void)

void FUN_144253028(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  uint *puVar13;
  float fVar14;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  code *local_110;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong *local_d0;
  undefined1 local_c8 [24];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  float fStack_7c;
  char local_78;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((*(int *)(param_1 + 0x24) == 0) || (uVar4 = *(uint *)(param_1 + 0x20), (int)uVar4 < 0)) ||
      (DAT_14c9647dc <= (int)uVar4)) ||
     (((lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar10 == 0 ||
       (*(int *)(lVar10 + 0x10) != *(int *)(param_1 + 0x24))) ||
      (((*(uint *)(lVar10 + 8) & 0x10200000) != 0 ||
       (lVar10 = FUN_1400f3ad8(param_1 + 0xc), lVar10 == 0)))))) goto LAB_14425308f;
  if (DAT_14cbadd90 == 0) {
    local_120 = &local_88;
    local_88 = FUN_141030f22;
    local_110 = FUN_14081d0ea;
    local_118 = &LAB_1459f2e4c;
    local_128 = &LAB_148c39de3;
    local_130 = &LAB_1457a9eb2;
    local_138 = &DAT_149e063b2;
    local_140 = 0;
    local_148 = 0x10000004;
    local_150 = 0x10;
    local_158 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) ||
     (*(int *)(lVar10 + 0x3d28) == 0)) goto LAB_14425308f;
  if (*(int *)(param_1 + 0x24) == 0) {
LAB_14425349f:
    lVar8 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x20);
    lVar8 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)(param_1 + 0x24) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)
          ))) goto LAB_14425349f;
      lVar8 = *plVar9;
    }
  }
  FUN_14150ea58(lVar8 + 0x6c48,&local_d8);
  if (local_d8 != 0) {
    FUN_1402815f4(param_1 + -0x38,&local_88);
    lVar8 = *(longlong *)(local_88 + 0x1d0);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x38));
    plVar9 = (longlong *)CONCAT44(fStack_7c,local_80);
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
    if ((longlong)*(int *)(lVar10 + 0x3d28) != 0) {
      puVar13 = *(uint **)(lVar10 + 0x3d20);
      puVar3 = puVar13 + (longlong)*(int *)(lVar10 + 0x3d28) * 2;
      bVar12 = false;
      do {
        if ((((puVar13[1] != 0) && (uVar4 = *puVar13, -1 < (int)uVar4)) &&
            ((int)uVar4 < DAT_14c9647dc)) &&
           (((plVar9 = (longlong *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
             plVar9 != (longlong *)0x0 && (*(uint *)(plVar9 + 2) == puVar13[1])) &&
            (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (lVar10 = *plVar9, lVar10 != 0)))))) {
          if (DAT_14cba8288 == 0) {
            local_88 = FUN_141864c34;
            local_110 = FUN_14081d0ea;
            local_118 = &LAB_1464cee30;
            local_128 = &LAB_148bfac22;
            local_130 = &LAB_140f21842;
            local_138 = &DAT_149e063b2;
            local_140 = 0;
            local_148 = 0x10000004;
            local_150 = 0x10;
            local_158 = 0x9cd0;
            local_120 = &local_88;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
            *(int *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) + 2;
            if ((longlong)*(int *)(lVar8 + 0x18) != 0) {
              lVar11 = *(longlong *)(lVar8 + 0x10) + 0x38;
              lVar7 = (longlong)*(int *)(lVar8 + 0x18) << 7;
              do {
                if (*(ulonglong *)(lVar11 + -0x38) == (ulonglong)*(uint *)(lVar10 + 0xc)) {
                  FUN_140e8a3fc(local_d8,lVar10);
                  FUN_1442234fa(local_d8,&local_88);
                  iVar6 = 0;
                  if ((char)local_80 != '\0') {
                    iVar6 = local_88._4_4_;
                  }
                  fVar14 = fStack_7c;
                  if (local_78 == '\0') {
                    fVar14 = 0.0;
                  }
                  if ((((*(char *)(lVar11 + 0x18) != (char)local_88) ||
                       (*(int *)(lVar11 + 0x10) != iVar6)) || (*(float *)(lVar11 + 0x14) != fVar14))
                     || (NAN(*(float *)(lVar11 + 0x14)) || NAN(fVar14))) {
                    *(char *)(lVar11 + 0x18) = (char)local_88;
                    *(int *)(lVar11 + 0x10) = iVar6;
                    *(float *)(lVar11 + 0x14) = fVar14;
                    FUN_1442234fa(local_d8,local_c8);
                    local_100 = local_b0;
                    local_f8 = local_a8;
                    uStack_f0 = uStack_a0;
                    local_e8 = local_98;
                    uStack_e4 = uStack_94;
                    uStack_e0 = uStack_90;
                    uStack_dc = uStack_8c;
                    lVar10 = FUN_14090ae24(&local_100);
                    if (lVar10 != 0) {
                      FUN_140390f7a(&local_100,lVar11);
                    }
                    if (CONCAT44(uStack_e4,local_e8) != 0) {
                      FUN_1400020a8();
                    }
                    bVar5 = !bVar12;
                    bVar12 = true;
                    if (bVar5) {
                      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
                    }
                  }
                  if (local_58 != 0) {
                    FUN_1400020a8();
                  }
                  break;
                }
                lVar11 = lVar11 + 0x80;
                lVar7 = lVar7 + -0x80;
              } while (lVar7 != 0);
            }
          }
        }
        puVar13 = puVar13 + 2;
      } while (puVar13 != puVar3);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x38));
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_d0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
LAB_14425308f:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144253548 FUN_144253548 body=6019 status=ok
// SIG undefined FUN_144253548(void)

void FUN_144253548(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  code *pcVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  PSRWLOCK SRWLock;
  bool bVar24;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined2 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  undefined8 *local_220;
  undefined1 *local_218;
  code *local_210;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  ulonglong local_1e0;
  PSRWLOCK local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  ulonglong uStack_150;
  undefined8 local_140;
  longlong local_138;
  longlong *plStack_130;
  undefined8 local_128;
  longlong local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8 [3];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  char local_98;
  code *local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (0 < (int)param_2[1]) {
    lVar19 = 0;
    do {
      iVar6 = *(int *)(*param_2 + 4 + lVar19 * 8);
      if ((((((iVar6 != 0) && (uVar8 = *(uint *)(*param_2 + lVar19 * 8), -1 < (int)uVar8)) &&
            ((int)uVar8 < DAT_14c9647dc)) &&
           ((plVar18 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
            plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar6)))) &&
          ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) &&
         ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
          ((*(uint *)(plVar18 + 1) >> 0x1e & 1) == 0)))) {
        if (DAT_14cba8288 == 0) {
          local_a8 = FUN_141864c34;
          local_210 = FUN_14081d0ea;
          local_218 = &LAB_1464cee30;
          local_220 = &local_a8;
          local_228 = &LAB_148bfac22;
          local_230 = &LAB_140f21842;
          local_238 = &DAT_149e063b2;
          local_240 = 0;
          local_248 = 0x10000004;
          local_250 = 0x10;
          local_258 = 0x9cd0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
        }
        if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(plVar18[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
            DAT_14cba8288 + 0x30)) {
          uVar10 = FUN_140eaf18a();
          plVar11 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
          if (plVar11 != (longlong *)0x0) {
            uVar10 = FUN_140eaf18a();
            plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
            if ((plVar12 != (longlong *)0x0 && plVar11 != plVar12) &&
               (plVar11 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12),
               plVar11 != (longlong *)0x0)) {
              FUN_1402815f4(param_1,&local_a8);
              pcVar17 = local_a8;
              local_f8 = *(undefined8 *)(local_a8 + 0x580);
              local_f0 = *(longlong *)(local_a8 + 0x588);
              if (local_f0 != 0) {
                LOCK();
                *(int *)(local_f0 + 0xc) = *(int *)(local_f0 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,&local_f8);
              local_108 = *(undefined8 *)(pcVar17 + 0x590);
              local_100 = *(longlong *)(pcVar17 + 0x598);
              if (local_100 != 0) {
                LOCK();
                *(int *)(local_100 + 0xc) = *(int *)(local_100 + 0xc) + 1;
                UNLOCK();
                pcVar17 = local_a8;
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,&local_108);
              local_118 = *(undefined8 *)(pcVar17 + 0x5a0);
              local_110 = *(longlong *)(pcVar17 + 0x5a8);
              if (local_110 != 0) {
                LOCK();
                *(int *)(local_110 + 0xc) = *(int *)(local_110 + 0xc) + 1;
                UNLOCK();
                pcVar17 = local_a8;
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,&local_118);
              local_128 = *(undefined8 *)(pcVar17 + 0x5b0);
              local_120 = *(longlong *)(pcVar17 + 0x5b8);
              if (local_120 != 0) {
                LOCK();
                *(int *)(local_120 + 0xc) = *(int *)(local_120 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x18))(plVar11,&local_128);
              plVar11 = uStack_a0;
              if (uStack_a0 != (longlong *)0x0) {
                LOCK();
                plVar12 = uStack_a0 + 1;
                *(int *)plVar12 = (int)*plVar12 + -1;
                UNLOCK();
                if ((int)*plVar12 == 0) {
                  (**(code **)*uStack_a0)(uStack_a0);
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
          }
          lVar13 = (**(code **)(plVar18[0x764] + 0x30))(plVar18 + 0x764);
          if (lVar13 != 0) {
            FUN_1401073f6(lVar13,param_1);
          }
          lVar13 = (**(code **)(*plVar18 + 0xbc8))(plVar18);
          if (lVar13 != 0) {
            FUN_140457ffc(lVar13,param_1);
          }
          FUN_140457ffc(plVar18 + 0x7f0,param_1);
          uVar10 = (**(code **)(plVar18[0x783] + 0x10))(plVar18 + 0x783);
          FUN_140457ffc(uVar10,param_1);
        }
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < (int)param_2[1]);
  }
  lVar19 = (longlong)param_1 + 0x44;
  lVar13 = FUN_1400f3ad8(lVar19);
  if (lVar13 == 0) goto LAB_144253a09;
  if (DAT_14cbadd90 == 0) {
    local_220 = &local_a8;
    local_a8 = FUN_141030f22;
    local_210 = FUN_14081d0ea;
    local_218 = &LAB_1459f2e4c;
    local_228 = &LAB_148c39de3;
    local_230 = &LAB_1457a9eb2;
    local_238 = &DAT_149e063b2;
    local_240 = 0;
    local_248 = 0x10000004;
    local_250 = 0x10;
    local_258 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_144253a09;
  FUN_1402815f4(param_1,&local_a8);
  pcVar4 = *(char **)(local_a8 + 0x1d0);
  SRWLock = (PSRWLOCK)(pcVar4 + 0x38);
  AcquireSRWLockExclusive(SRWLock);
  plVar18 = uStack_a0;
  *(int *)(pcVar4 + 0x30) = *(int *)(pcVar4 + 0x30) + 1;
  if (uStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_a0 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*uStack_a0)(uStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  uVar8 = *(uint *)(lVar13 + 0x3d28);
  if (uVar8 == 0) {
    if (*pcVar4 == '\0') {
      if (*(int *)(pcVar4 + 4) == 0) {
        iVar6 = 1;
        goto LAB_1442539be;
      }
    }
    else {
      iVar6 = *(int *)(pcVar4 + 4) + 1;
LAB_1442539be:
      *pcVar4 = '\0';
      *(int *)(pcVar4 + 4) = iVar6;
    }
    iVar6 = *(int *)(pcVar4 + 0x1c);
    FUN_1412c5aa4(*(undefined8 *)(pcVar4 + 0x10),*(undefined4 *)(pcVar4 + 0x18));
    pcVar4[0x18] = '\0';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    if ((iVar6 < 0) && (*(int *)(pcVar4 + 0x1c) != 0)) {
      FUN_148e2ceec(pcVar4 + 0x10);
    }
    *(int *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + 1;
    FUN_1412c5c68(param_1);
  }
  else {
    local_1d8 = SRWLock;
    if ((((*(int *)((longlong)param_1 + 0x5c) == 0) ||
         (uVar3 = *(uint *)(param_1 + 0xb), (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3)) ||
       (((plVar18 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)((longlong)param_1 + 0x5c))) ||
        ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))) {
      local_138 = 0;
      plStack_130 = (longlong *)0x0;
    }
    else {
      if ((*(uint *)(plVar18 + 1) & 0x10200000) == 0) {
        lVar14 = *plVar18;
      }
      else {
        lVar14 = 0;
      }
      FUN_14150ea58(lVar14 + 0x6c48,&local_138);
      uVar8 = *(uint *)(lVar13 + 0x3d28);
    }
    uVar20 = 4;
    if ((int)uVar8 < 4) {
      uVar20 = (ulonglong)uVar8;
    }
    if ((bool)pcVar4[0x28] == 1 < (int)uVar8) {
      iVar6 = 1;
      if (*(int *)(pcVar4 + 0x2c) == 0) goto LAB_144253af3;
    }
    else {
      iVar6 = *(int *)(pcVar4 + 0x2c) + 1;
LAB_144253af3:
      pcVar4[0x28] = 1 < (int)uVar8;
      *(int *)(pcVar4 + 0x2c) = iVar6;
    }
    FUN_148e2cf1c(pcVar4 + 0x10,uVar20);
    *(int *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + 1;
    if (0 < (int)uVar8) {
      uVar21 = 0;
      local_1e0 = uVar20;
      do {
        iVar6 = *(int *)(*(longlong *)(lVar13 + 0x3d20) + 4 + uVar21 * 8);
        if ((((iVar6 != 0) &&
             (uVar8 = *(uint *)(*(longlong *)(lVar13 + 0x3d20) + uVar21 * 8), -1 < (int)uVar8)) &&
            (((int)uVar8 < DAT_14c9647dc &&
             (((plVar18 = (longlong *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar18 != (longlong *)0x0 && ((int)plVar18[2] == iVar6)) &&
              ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)))))) &&
           ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
            ((*(uint *)(plVar18 + 1) >> 0x1e & 1) == 0)))) {
          if (DAT_14cba8288 == 0) {
            local_a8 = FUN_141864c34;
            local_210 = FUN_14081d0ea;
            local_218 = &LAB_1464cee30;
            local_220 = &local_a8;
            local_228 = &LAB_148bfac22;
            local_230 = &LAB_140f21842;
            local_238 = &DAT_149e063b2;
            local_240 = 0;
            local_248 = 0x10000004;
            local_250 = 0x10;
            local_258 = 0x9cd0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
          }
          if ((*(int *)(plVar18[2] + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar18[2] + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
              DAT_14cba8288 + 0x30)) goto LAB_144254737;
          *(int *)(pcVar4 + 0x20) = *(int *)(pcVar4 + 0x20) + 1;
          local_200 = (longlong *)(*(longlong *)(pcVar4 + 0x10) + uVar21 * 0x80);
          puVar2 = (ulonglong *)(*(longlong *)(pcVar4 + 0x10) + uVar21 * 0x80);
          *puVar2 = (ulonglong)*(uint *)((longlong)plVar18 + 0xc);
          *(undefined1 *)(puVar2 + 1) = 1;
          plVar11 = plVar18 + 0x764;
          (**(code **)(plVar18[0x764] + 0x10))(plVar11);
          uVar10 = FUN_14018b740();
          lVar14 = (**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
          local_1f8 = plVar18;
          if (lVar14 != 0) {
            uVar10 = FUN_14018b740();
            lVar15 = FUN_144718840(lVar14,uVar10);
            if (lVar15 != 0 && lVar14 != lVar15) {
              uVar9 = FUN_148e25f06(param_1,lVar15);
              *(undefined4 *)(local_200 + 4) = uVar9;
              plVar18 = plVar18 + 0x7f0;
              FUN_140457ffc(plVar18,param_1);
              local_a8 = (code *)0x0;
              uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
              FUN_1446efa72(&local_a8,0,3,0x10);
              pcVar17 = local_a8;
              uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,3);
              *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
              LOCK();
              UNLOCK();
              lVar15 = DAT_14c758608 + 1;
              lVar14 = DAT_14c758608 + 1;
              if (lVar15 == 0) {
                LOCK();
                UNLOCK();
                lVar15 = DAT_14c758608 + 2;
                lVar14 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar14;
              *(longlong *)(local_a8 + 0x10) = lVar15;
              *(undefined ***)local_a8 = &PTR_FUN_14b9a8720;
              *(undefined8 *)(local_a8 + 0x18) = 0;
              local_1f0 = plVar18;
              if (param_1 == (longlong *)0x0) {
                iVar6 = 0;
              }
              else {
                uVar8 = *(uint *)((longlong)param_1 + 0xc);
                *(uint *)(local_a8 + 0x18) = uVar8;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar14 = 0;
                }
                iVar6 = *(int *)(lVar14 + 0x10);
                if (*(int *)(lVar14 + 0x10) == 0) {
                  LOCK();
                  iVar6 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar7 = DAT_14c964868 + 1;
                  bVar24 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar6;
                  local_1e8 = param_1;
                  if (bVar24) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar7);
                  }
                  LOCK();
                  iVar6 = *(int *)(lVar14 + 0x10);
                  bVar24 = iVar6 == 0;
                  if (bVar24) {
                    *(int *)(lVar14 + 0x10) = iVar7;
                    iVar6 = 0;
                  }
                  UNLOCK();
                  param_1 = local_1e8;
                  if (bVar24) {
                    iVar6 = iVar7;
                  }
                }
              }
              *(int *)(pcVar17 + 0x1c) = iVar6;
              *(code **)(pcVar17 + 0x20) = FUN_144254f10;
              *(undefined4 *)(pcVar17 + 0x28) = 0;
              FUN_1448b6402(local_1f0,local_e8,&local_a8);
              plVar18 = local_1f8;
              if ((int)uStack_a0 != 0) {
                if (local_a8 == (code *)0x0) goto LAB_144253c58;
                (*(code *)**(undefined8 **)local_a8)(local_a8,0);
                FUN_1446efa72(&local_a8,0,0,0x10);
                uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
              }
              if (local_a8 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
          }
LAB_144253c58:
          lVar14 = (**(code **)(*plVar11 + 0x30))(plVar11);
          if (lVar14 != 0) {
            FUN_1401073f6(lVar14,param_1);
            FUN_1418f49d6(&local_140);
            FUN_148e25fb2(lVar14,param_1,local_140);
          }
          *(undefined1 *)((longlong)local_200 + 0x6a) = *(undefined1 *)((longlong)plVar18 + 0x99c1);
          *(char *)((longlong)local_200 + 0x69) = (char)plVar18[0x1338];
          plVar11 = (longlong *)(**(code **)(plVar18[0x783] + 0x10))(plVar18 + 0x783);
          FUN_140457ffc(plVar11);
          local_a8 = (code *)0x0;
          uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
          FUN_1446efa72(&local_a8,0,3,0x10);
          plVar18 = (longlong *)local_a8;
          uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,3);
          *(undefined ***)local_a8 = &PTR_LAB_14b9abc10;
          LOCK();
          UNLOCK();
          lVar15 = DAT_14c758608 + 1;
          lVar14 = DAT_14c758608 + 1;
          if (lVar15 == 0) {
            LOCK();
            UNLOCK();
            lVar15 = DAT_14c758608 + 2;
            lVar14 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar14;
          *(longlong *)((longlong)local_a8 + 0x10) = lVar15;
          *(undefined ***)local_a8 = &PTR_FUN_14b9a87c0;
          *(longlong *)((longlong)local_a8 + 0x18) = 0;
          if (param_1 == (longlong *)0x0) {
            iVar6 = 0;
          }
          else {
            uVar8 = *(uint *)((longlong)param_1 + 0xc);
            *(uint *)((longlong)local_a8 + 0x18) = uVar8;
            if ((int)uVar8 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            iVar6 = *(int *)(lVar14 + 0x10);
            if (*(int *)(lVar14 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              iVar7 = DAT_14c964868 + 1;
              bVar24 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              local_1e8 = param_1;
              if (bVar24) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar7);
              }
              LOCK();
              iVar6 = *(int *)(lVar14 + 0x10);
              bVar24 = iVar6 == 0;
              if (bVar24) {
                *(int *)(lVar14 + 0x10) = iVar7;
                iVar6 = 0;
              }
              UNLOCK();
              param_1 = local_1e8;
              if (bVar24) {
                iVar6 = iVar7;
              }
            }
          }
          *(int *)((longlong)plVar18 + 0x1c) = iVar6;
          plVar18[4] = (longlong)FUN_144255502;
          *(undefined4 *)(plVar18 + 5) = 0;
          if (((int)uStack_a0 == 0) || (local_a8 == (code *)0x0)) {
LAB_144254b3a:
            if ((int)uStack_a0 == 0) goto LAB_144253ebd;
            if (local_a8 != (code *)0x0) {
              (*(code *)**(undefined8 **)local_a8)(local_a8,0);
              FUN_1446efa72(&local_a8,0,0,0x10);
              goto LAB_144253eaa;
            }
          }
          else {
            cVar5 = (**(code **)(*(longlong *)local_a8 + 0x30))();
            if (cVar5 == '\0') {
              goto LAB_144254b3a;
            }
            if (*(int *)((longlong)plVar11 + 0x14) < 1) {
              iVar6 = (int)plVar11[1];
              iVar7 = (int)plVar11[2] + -1;
              *(int *)(plVar11 + 2) = iVar7;
              if (iVar7 <= iVar6) {
                iVar7 = iVar6;
                if (0 < iVar6) {
                  iVar22 = 0;
                  do {
                    if (((*(int *)(*plVar11 + 8 + (longlong)iVar22 * 0x10) == 0) ||
                        (plVar18 = *(longlong **)(*plVar11 + (longlong)iVar22 * 0x10),
                        plVar18 == (longlong *)0x0)) ||
                       (cVar5 = (**(code **)(*plVar18 + 0x28))(), cVar5 != '\0')) {
                      FUN_14005b288(plVar11,iVar22);
                      FUN_14005b248(plVar11);
                    }
                    else {
                      iVar22 = iVar22 + 1;
                    }
                    iVar7 = (int)plVar11[1];
                  } while (iVar22 < iVar7);
                }
                iVar22 = iVar7 * 2;
                if (iVar22 < 3) {
                  iVar22 = 2;
                }
                *(int *)(plVar11 + 2) = iVar22;
                if ((iVar22 < iVar6) && (*(int *)((longlong)plVar11 + 0xc) != iVar7)) {
                  FUN_14045812c(plVar11);
                }
              }
            }
            if (((int)uStack_a0 != 0) && (local_a8 != (code *)0x0)) {
              (**(code **)(*(longlong *)local_a8 + 0x38))();
            }
            lVar14 = plVar11[1];
            uVar8 = (int)lVar14 + 1;
            *(uint *)(plVar11 + 1) = uVar8;
            if (*(uint *)((longlong)plVar11 + 0xc) < uVar8) {
              FUN_1447a71f6(plVar11);
            }
            lVar15 = *plVar11;
            lVar14 = (longlong)(int)lVar14 * 0x10;
            *(undefined8 *)(lVar15 + lVar14) = 0;
            *(undefined4 *)(lVar15 + 8 + lVar14) = 0;
            *(code **)(lVar15 + lVar14) = local_a8;
            local_a8 = (code *)0x0;
            *(int *)(lVar15 + 8 + lVar14) = (int)uStack_a0;
LAB_144253eaa:
            uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
LAB_144253ebd:
            if (local_a8 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          local_158 = (longlong *)0x0;
          uStack_150 = 0;
          FUN_1418f2110(plVar11,&local_158);
          plVar18 = local_200 + 5;
          *(undefined4 *)(local_200 + 6) = 0;
          if (*(int *)((longlong)local_200 + 0x34) < 0) {
            FUN_1446f8c06(plVar18,0);
          }
          if ((undefined2 *)*plVar18 != (undefined2 *)0x0) {
            *(undefined2 *)*plVar18 = 0;
          }
          local_a8 = (code *)0x0;
          uStack_a0 = (longlong *)0x0;
          lVar14 = (longlong)(int)uStack_150;
          local_1e8 = plVar18;
          if (lVar14 != 0) {
            local_1f0 = local_158;
            iVar6 = 1;
            lVar15 = 0;
            do {
              if ((char)iVar6 == '\0') {
                FUN_1400020e8(&local_a8,&DAT_149e19f34,2);
              }
              iVar7 = *(int *)((longlong)local_1f0 + lVar15 + 8);
              iVar6 = 0;
              iVar22 = iVar7 + -1;
              if (iVar7 == 0) {
                iVar22 = iVar6;
              }
              FUN_1400020e8(&local_a8,*(undefined8 *)((longlong)local_1f0 + lVar15),iVar22);
              lVar15 = lVar15 + 0x10;
            } while (lVar14 * 0x10 != lVar15);
          }
          plVar18 = local_1f8;
          if (local_1e8 != &local_a8) {
            if (*local_1e8 != 0) {
              FUN_1400020a8();
            }
            local_200[5] = (longlong)local_a8;
            local_a8 = (code *)0x0;
            *(int *)(local_200 + 6) = (int)uStack_a0;
            *(undefined4 *)((longlong)local_200 + 0x34) = uStack_a0._4_4_;
            uStack_a0 = (longlong *)0x0;
          }
          if (local_a8 != (code *)0x0) {
            FUN_1400020a8();
          }
          uVar10 = FUN_140eaf18a();
          plVar11 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
          if (plVar11 != (longlong *)0x0) {
            uVar10 = FUN_140eaf18a();
            plVar12 = (longlong *)FUN_144718840(plVar11,uVar10);
            if ((plVar12 == (longlong *)0x0 || plVar11 == plVar12) ||
               (plVar11 = (longlong *)(**(code **)(*plVar12 + 0x10))(plVar12),
               plVar11 == (longlong *)0x0)) goto LAB_1442542f6;
            local_168 = local_200[0xe];
            local_160 = local_200[0xf];
            if (local_160 != 0) {
              LOCK();
              *(int *)(local_160 + 0xc) = *(int *)(local_160 + 0xc) + 1;
              UNLOCK();
            }
            (**(code **)(*plVar11 + 0x18))(plVar11,&local_168);
            FUN_1402815f4(param_1,&local_a8);
            pcVar17 = local_a8;
            switch(uVar21 & 0xffffffff) {
            case 0:
              local_178 = *(undefined8 *)(local_a8 + 0x580);
              local_170 = *(longlong *)(local_a8 + 0x588);
              if (local_170 != 0) {
                LOCK();
                *(int *)(local_170 + 0xc) = *(int *)(local_170 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x10))(plVar11,&local_178);
              local_200[0xe] = *(longlong *)(pcVar17 + 0x580);
              plVar11 = *(longlong **)(pcVar17 + 0x588);
              break;
            case 1:
              local_188 = *(undefined8 *)(local_a8 + 0x590);
              local_180 = *(longlong *)(local_a8 + 0x598);
              if (local_180 != 0) {
                LOCK();
                *(int *)(local_180 + 0xc) = *(int *)(local_180 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x10))(plVar11,&local_188);
              local_200[0xe] = *(longlong *)(pcVar17 + 0x590);
              plVar11 = *(longlong **)(pcVar17 + 0x598);
              break;
            case 2:
              local_198 = *(undefined8 *)(local_a8 + 0x5a0);
              local_190 = *(longlong *)(local_a8 + 0x5a8);
              if (local_190 != 0) {
                LOCK();
                *(int *)(local_190 + 0xc) = *(int *)(local_190 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x10))(plVar11,&local_198);
              local_200[0xe] = *(longlong *)(pcVar17 + 0x5a0);
              plVar11 = *(longlong **)(pcVar17 + 0x5a8);
              break;
            case 3:
              local_1a8 = *(undefined8 *)(local_a8 + 0x5b0);
              local_1a0 = *(longlong *)(local_a8 + 0x5b8);
              if (local_1a0 != 0) {
                LOCK();
                *(int *)(local_1a0 + 0xc) = *(int *)(local_1a0 + 0xc) + 1;
                UNLOCK();
              }
              (**(code **)(*plVar11 + 0x10))(plVar11,&local_1a8);
              local_200[0xe] = *(longlong *)(pcVar17 + 0x5b0);
              plVar11 = *(longlong **)(pcVar17 + 0x5b8);
              break;
            default:
              plVar11 = (longlong *)local_200[0xf];
              local_200[0xe] = 0;
              local_200[0xf] = 0;
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar11 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar11 + 0x10))();
                }
              }
              goto LAB_1442542c6;
            }
            plVar18 = local_1f8;
            plVar12 = (longlong *)local_200[0xf];
            if (plVar12 != plVar11) {
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
                UNLOCK();
                plVar12 = (longlong *)local_200[0xf];
              }
              if (plVar12 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar12 + 0x10))();
                }
              }
              local_200[0xf] = (longlong)plVar11;
            }
LAB_1442542c6:
            plVar11 = uStack_a0;
            if (uStack_a0 != (longlong *)0x0) {
              LOCK();
              plVar12 = uStack_a0 + 1;
              *(int *)plVar12 = (int)*plVar12 + -1;
              UNLOCK();
              if ((int)*plVar12 == 0) {
                (**(code **)*uStack_a0)(uStack_a0);
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
LAB_1442542f6:
          plVar11 = local_200;
          if (local_138 == 0) {
            *(undefined1 *)(local_200 + 10) = 0;
            local_200[9] = 0;
            FUN_1400b22c2(&local_a8,&DAT_149e02088);
            pcVar17 = local_a8;
            if (plVar11 + 7 != &local_a8) {
              if (plVar11[7] != 0) {
                FUN_1400020a8();
              }
              plVar11[7] = (longlong)local_a8;
              local_a8 = (code *)0x0;
              *(int *)(plVar11 + 8) = (int)uStack_a0;
              *(undefined4 *)((longlong)plVar11 + 0x44) = uStack_a0._4_4_;
              uStack_a0 = (longlong *)0x0;
              pcVar17 = local_a8;
            }
          }
          else {
            FUN_140e8a3fc(local_138,plVar18);
            FUN_1442234fa(local_138,&local_a8);
            plVar11 = local_200;
            *(undefined1 *)(local_200 + 10) = (undefined1)local_a8;
            uVar9 = 0;
            if ((char)uStack_a0 != '\0') {
              uVar9 = local_a8._4_4_;
            }
            *(undefined4 *)(local_200 + 9) = uVar9;
            if (local_98 == '\0') {
              uVar9 = 0;
            }
            else {
              uVar9 = uStack_a0._4_4_;
            }
            *(undefined4 *)((longlong)local_200 + 0x4c) = uVar9;
            FUN_1442234fa(local_138,local_e8);
            local_1d0 = local_d0;
            local_1c8 = local_c8;
            uStack_1c0 = uStack_c0;
            local_1b8 = local_b8;
            uStack_1b4 = uStack_b4;
            uStack_1b0 = uStack_b0;
            uStack_1ac = uStack_ac;
            lVar14 = FUN_14090ae24(&local_1d0);
            if (lVar14 != 0) {
              FUN_140390f7a(&local_1d0,plVar11 + 7);
            }
            pcVar17 = local_78;
            if (CONCAT44(uStack_1b4,local_1b8) != 0) {
              FUN_1400020a8();
              pcVar17 = local_78;
            }
          }
          if (pcVar17 != (code *)0x0) {
            FUN_1400020a8();
          }
          uVar10 = FUN_140da3b08();
          plVar12 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
          if (plVar12 != (longlong *)0x0) {
            uVar10 = FUN_140da3b08();
            plVar16 = (longlong *)FUN_144718840(plVar12,uVar10);
            if (plVar16 != (longlong *)0x0 && plVar12 != plVar16) {
              lVar14 = (**(code **)(*plVar16 + 0x10))(plVar16);
              plVar12 = (longlong *)(ulonglong)*(byte *)(lVar14 + 0x57);
              local_1f0 = plVar12;
              if (plVar12 == (longlong *)&DAT_00000004) {
                FUN_1400b22c2(&local_a8,"electric");
                if (plVar11 + 0xb != &local_a8) {
                  if (plVar11[0xb] != 0) {
                    FUN_1400020a8();
                  }
                  plVar11[0xb] = (longlong)local_a8;
                  local_a8 = (code *)0x0;
                  *(int *)(plVar11 + 0xc) = (int)uStack_a0;
                  *(undefined4 *)((longlong)plVar11 + 100) = uStack_a0._4_4_;
                  uStack_a0 = (longlong *)0x0;
                }
                if (local_a8 != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
              else {
                FUN_140e96cb2();
                local_e8[0] = (&DAT_14cbc82a0)[(longlong)plVar12];
                FUN_1400021e4(local_e8,&local_a8);
                pcVar17 = local_a8;
                iVar6 = (int)uStack_a0;
                uVar8 = (int)uStack_a0 - 1;
                if ((int)uStack_a0 == 0) {
                  uVar8 = 0;
                }
                if (0 < (int)uVar8) {
                  uVar20 = 0;
                  do {
                    *(ushort *)(local_a8 + uVar20 * 2) =
                         (ushort)(*(ushort *)(local_a8 + uVar20 * 2) - 0x41 < 0x1a) * 0x20 +
                         *(ushort *)(local_a8 + uVar20 * 2);
                    uVar20 = uVar20 + 1;
                  } while (uVar8 != uVar20);
                }
                uVar9 = uStack_a0._4_4_;
                local_a8 = (code *)0x0;
                uStack_a0 = (longlong *)0x0;
                if (local_200[0xb] != 0) {
                  FUN_1400020a8();
                }
                plVar11 = local_200;
                local_200[0xb] = (longlong)pcVar17;
                *(int *)(local_200 + 0xc) = iVar6;
                *(undefined4 *)((longlong)local_200 + 100) = uVar9;
                plVar18 = local_1f8;
                if (local_a8 != (code *)0x0) {
                  FUN_1400020a8();
                  plVar18 = local_1f8;
                }
              }
              *(bool *)(plVar11 + 0xd) = local_1f0 != (longlong *)0x0;
              local_200 = (longlong *)(**(code **)(*plVar18 + 0xbc8))(plVar18);
              if (local_200 != (longlong *)0x0) {
                lVar14 = local_200[1];
                if ((longlong)(int)lVar14 != 0) {
                  lVar15 = *local_200;
                  lVar23 = 0;
                  do {
                    if (((*(int *)(lVar15 + 8 + lVar23) != 0) &&
                        (plVar18 = *(longlong **)(lVar15 + lVar23), plVar18 != (longlong *)0x0)) &&
                       (cVar5 = (**(code **)(*plVar18 + 0x20))(plVar18,param_1), cVar5 != '\0'))
                    goto LAB_1442546cd;
                    lVar23 = lVar23 + 0x10;
                  } while ((longlong)(int)lVar14 * 0x10 != lVar23);
                }
                local_a8 = FUN_1442559b6;
                uStack_a0 = (longlong *)((ulonglong)uStack_a0 & 0xffffffff00000000);
                FUN_148e26030(local_200,local_e8,param_1,&local_a8);
              }
            }
          }
LAB_1442546cd:
          lVar14 = FUN_1400f3ad8(lVar19);
          if (lVar14 != 0) {
            if (DAT_14cbadd90 == 0) {
              local_a8 = FUN_141030f22;
              local_210 = FUN_14081d0ea;
              local_218 = &LAB_1459f2e4c;
              local_220 = &local_a8;
              local_228 = &LAB_148c39de3;
              local_230 = &LAB_1457a9eb2;
              local_238 = &DAT_149e063b2;
              local_240 = 0;
              local_248 = 0x10000004;
              local_250 = 0x10;
              local_258 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38))
                && (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                     (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
               ((*(int *)(lVar14 + 0xd98) != 0 && (*(longlong *)(lVar14 + 0xda0) != 0)))) {
              *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
              FUN_1403ca8ec(lVar14 + 0xd98,&DAT_14cbd95b0);
            }
          }
          FUN_1447a1747(local_158,uStack_150 & 0xffffffff);
          uVar20 = local_1e0;
          if (local_158 != (longlong *)0x0) {
            FUN_1400020a8();
            uVar20 = local_1e0;
          }
        }
LAB_144254737:
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar20);
    }
    plVar18 = plStack_130;
    SRWLock = local_1d8;
    if (plStack_130 != (longlong *)0x0) {
      LOCK();
      plVar11 = plStack_130 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_130)(plStack_130);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        SRWLock = local_1d8;
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
          SRWLock = local_1d8;
        }
      }
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_144253a09:
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144254ccc FUN_144254ccc body=268 status=ok
// SIG undefined FUN_144254ccc(void)

void FUN_144254ccc(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar7 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
  if ((param_2 != 0) && (cVar7 != '\0')) {
    FUN_1402815f4(param_1);
    lVar4 = *(longlong *)(local_40 + 0x1d0);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x38));
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
    lVar5 = *(longlong *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 2;
    iVar3 = *(int *)(lVar4 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar8 = 0;
      bVar9 = false;
      do {
        if ((*(ulonglong *)(lVar5 + lVar8) == (ulonglong)*(uint *)(param_2 + 0xc)) &&
           (*(char *)(lVar5 + 0x6a + lVar8) != param_3)) {
          *(char *)(lVar5 + 0x6a + lVar8) = param_3;
          bVar6 = !bVar9;
          bVar9 = true;
          if (bVar6) {
            *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
          }
        }
        lVar8 = lVar8 + 0x80;
      } while ((longlong)iVar3 * 0x80 != lVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144254dee FUN_144254dee body=268 status=ok
// SIG undefined FUN_144254dee(void)

void FUN_144254dee(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar7 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x10))(param_1 + 0x30);
  if ((param_2 != 0) && (cVar7 != '\0')) {
    FUN_1402815f4(param_1);
    lVar4 = *(longlong *)(local_40 + 0x1d0);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x38));
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
    lVar5 = *(longlong *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 2;
    iVar3 = *(int *)(lVar4 + 0x18);
    if ((longlong)iVar3 != 0) {
      lVar8 = 0;
      bVar9 = false;
      do {
        if ((*(ulonglong *)(lVar5 + lVar8) == (ulonglong)*(uint *)(param_2 + 0xc)) &&
           (*(char *)(lVar5 + 0x69 + lVar8) != param_3)) {
          *(char *)(lVar5 + 0x69 + lVar8) = param_3;
          bVar6 = !bVar9;
          bVar9 = true;
          if (bVar6) {
            *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
          }
        }
        lVar8 = lVar8 + 0x80;
      } while ((longlong)iVar3 * 0x80 != lVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144254f10 FUN_144254f10 body=661 status=ok
// SIG undefined FUN_144254f10(void)

void FUN_144254f10(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
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
  lVar7 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar7 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1402815f4(param_1,&local_58);
      lVar4 = *(longlong *)(local_58 + 0x1d0);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x38));
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_50 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
      if (0 < *(int *)(lVar7 + 0x3d28)) {
        lVar13 = 4;
        lVar14 = 0;
        bVar12 = false;
        do {
          if (lVar14 < *(int *)(lVar4 + 0x18)) {
            iVar2 = *(int *)(*(longlong *)(lVar7 + 0x3d20) + 4 + lVar14 * 8);
            if (((((iVar2 != 0) &&
                  (uVar3 = *(uint *)(*(longlong *)(lVar7 + 0x3d20) + lVar14 * 8), -1 < (int)uVar3))
                 && ((int)uVar3 < DAT_14c9647dc)) &&
                ((plVar11 = (longlong *)
                            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                 plVar11 != (longlong *)0x0 && ((int)plVar11[2] == iVar2)))) &&
               (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
                ((plVar11 = (longlong *)*plVar11, plVar11 != (longlong *)0x0 &&
                 ((*(uint *)(plVar11 + 1) >> 0x1e & 1) == 0)))))) {
              uVar8 = FUN_14018b740();
              lVar9 = (**(code **)(*plVar11 + 0x288))(plVar11,uVar8);
              if (lVar9 != 0) {
                uVar8 = FUN_14018b740();
                lVar10 = FUN_144718840(lVar9,uVar8);
                if (lVar10 != 0 && lVar9 != lVar10) {
                  *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
                  lVar9 = *(longlong *)(lVar4 + 0x10);
                  uVar6 = FUN_148e25f06(param_1,lVar10);
                  *(undefined4 *)(lVar9 + lVar13 * 8) = uVar6;
                  bVar5 = !bVar12;
                  bVar12 = true;
                  if (bVar5) {
                    *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
                  }
                }
              }
            }
          }
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 0x10;
        } while (lVar14 < *(int *)(lVar7 + 0x3d28));
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



// FUNCTION 1442551c4 FUN_1442551c4 body=799 status=ok
// SIG undefined FUN_1442551c4(void)

void FUN_1442551c4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  longlong lVar11;
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
  lVar7 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar7 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_58;
      local_58 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1402815f4(param_1,&local_58);
      lVar4 = *(longlong *)(local_58 + 0x1d0);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x38));
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_50 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      if (0 < *(int *)(lVar7 + 0x3d28)) {
        lVar11 = 0x10;
        lVar9 = 0;
        bVar10 = false;
        do {
          if (lVar9 < *(int *)(lVar4 + 0x18)) {
            iVar2 = *(int *)(*(longlong *)(lVar7 + 0x3d20) + 4 + lVar9 * 8);
            if (((((iVar2 != 0) &&
                  (uVar3 = *(uint *)(*(longlong *)(lVar7 + 0x3d20) + lVar9 * 8), -1 < (int)uVar3))
                 && ((int)uVar3 < DAT_14c9647dc)) &&
                ((plVar8 = (longlong *)
                           ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                 plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar2)))) &&
               (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
                ((lVar5 = *plVar8, lVar5 != 0 && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)))))) {
              if (DAT_14cba8288 == 0) {
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
                local_70 = &local_58;
                FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
              }
              if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
                *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + 1;
                (**(code **)(*(longlong *)(lVar5 + 0x3b20) + 0x10))
                          (lVar5 + 0x3b20,*(longlong *)(lVar4 + 0x10) + lVar11);
                bVar6 = !bVar10;
                bVar10 = true;
                if (bVar6) {
                  *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + 1;
                }
              }
            }
          }
          lVar9 = lVar9 + 1;
          lVar11 = lVar11 + 0x80;
        } while (lVar9 < *(int *)(lVar7 + 0x3d28));
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



// FUNCTION 144255502 FUN_144255502 body=1203 status=ok
// SIG undefined FUN_144255502(void)

void FUN_144255502(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  PSRWLOCK SRWLock;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined2 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  ulonglong local_98;
  PSRWLOCK local_90;
  longlong local_88;
  undefined8 uStack_80;
  code *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar8 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar8 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_1459f2e4c;
      local_b8 = &LAB_148c39de3;
      local_c0 = &LAB_1457a9eb2;
      local_c8 = &DAT_149e063b2;
      local_d0 = 0;
      local_d8 = 0x10000004;
      local_e0 = 0x10;
      local_e8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1402815f4(param_1,&local_78);
      lVar5 = *(longlong *)(local_78 + 0x1d0);
      SRWLock = (PSRWLOCK)(lVar5 + 0x38);
      AcquireSRWLockExclusive(SRWLock);
      plVar10 = plStack_70;
      if (plStack_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_70)(plStack_70);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      if (0 < *(int *)(lVar8 + 0x3d28)) {
        lVar16 = 0;
        uVar12 = 0;
        do {
          if (lVar16 < *(int *)(lVar5 + 0x18)) {
            iVar11 = *(int *)(*(longlong *)(lVar8 + 0x3d20) + 4 + lVar16 * 8);
            if (((((iVar11 != 0) &&
                  (uVar3 = *(uint *)(*(longlong *)(lVar8 + 0x3d20) + lVar16 * 8), -1 < (int)uVar3))
                 && ((int)uVar3 < DAT_14c9647dc)) &&
                ((plVar10 = (longlong *)
                            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                 plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar11)))) &&
               (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
                ((lVar13 = *plVar10, lVar13 != 0 && ((*(uint *)(lVar13 + 8) >> 0x1e & 1) == 0))))))
            {
              if (DAT_14cba8288 == 0) {
                local_78 = FUN_141864c34;
                local_a0 = FUN_14081d0ea;
                local_a8 = &LAB_1464cee30;
                local_b8 = &LAB_148bfac22;
                local_c0 = &LAB_140f21842;
                local_c8 = &DAT_149e063b2;
                local_d0 = 0;
                local_d8 = 0x10000004;
                local_e0 = 0x10;
                local_e8 = 0x9cd0;
                local_b0 = &local_78;
                FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
              }
              if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
                *(int *)(lVar5 + 0x20) = *(int *)(lVar5 + 0x20) + 1;
                lVar6 = *(longlong *)(lVar5 + 0x10);
                local_78 = (code *)0x0;
                plStack_70 = (longlong *)0x0;
                local_90 = SRWLock;
                uVar9 = (**(code **)(*(longlong *)(lVar13 + 0x3c18) + 0x10))(lVar13 + 0x3c18);
                FUN_1418f2110(uVar9,&local_78);
                lVar6 = lVar6 + lVar16 * 0x80;
                plVar10 = (longlong *)(lVar6 + 0x28);
                *(undefined4 *)(lVar6 + 0x30) = 0;
                if (*(int *)(lVar6 + 0x34) < 0) {
                  FUN_1446f8c06(plVar10,0);
                }
                pcVar7 = local_78;
                if ((undefined2 *)*plVar10 != (undefined2 *)0x0) {
                  *(undefined2 *)*plVar10 = 0;
                }
                local_88 = 0;
                uStack_80 = 0;
                lVar13 = (longlong)(int)plStack_70;
                local_98 = uVar12;
                if (lVar13 != 0) {
                  iVar11 = 1;
                  lVar14 = 0;
                  do {
                    if ((char)iVar11 == '\0') {
                      FUN_1400020e8(&local_88,&DAT_149e19f34,2);
                    }
                    iVar4 = *(int *)(pcVar7 + lVar14 + 8);
                    iVar11 = 0;
                    iVar15 = iVar4 + -1;
                    if (iVar4 == 0) {
                      iVar15 = iVar11;
                    }
                    FUN_1400020e8(&local_88,*(undefined8 *)(pcVar7 + lVar14),iVar15);
                    lVar14 = lVar14 + 0x10;
                  } while (lVar13 * 0x10 != lVar14);
                }
                SRWLock = local_90;
                uVar12 = local_98;
                if (plVar10 != &local_88) {
                  if (*plVar10 != 0) {
                    FUN_1400020a8();
                  }
                  *plVar10 = local_88;
                  local_88 = 0;
                  *(undefined4 *)(lVar6 + 0x30) = (undefined4)uStack_80;
                  *(undefined4 *)(lVar6 + 0x34) = uStack_80._4_4_;
                  uStack_80 = 0;
                }
                if (local_88 != 0) {
                  FUN_1400020a8();
                }
                if ((uVar12 & 1) == 0) {
                  *(int *)(lVar5 + 0x30) = *(int *)(lVar5 + 0x30) + 1;
                }
                FUN_1447a1747(local_78,(ulonglong)plStack_70 & 0xffffffff);
                if (local_78 != (code *)0x0) {
                  FUN_1400020a8();
                }
                uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
              }
            }
          }
          lVar16 = lVar16 + 1;
        } while (lVar16 < *(int *)(lVar8 + 0x3d28));
      }
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442559b6 FUN_1442559b6 body=1407 status=ok
// SIG undefined FUN_1442559b6(void)

void FUN_1442559b6(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  bool bVar5;
  code *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined *puVar12;
  int iVar13;
  ulonglong uVar14;
  uint *puVar15;
  code **ppcVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  code *local_90;
  undefined8 uStack_88;
  longlong *local_80;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1402815f4(param_1,&local_90);
  lVar3 = *(longlong *)(local_90 + 0x1d0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x38));
  plVar18 = uStack_88;
  if (uStack_88 != (longlong *)0x0) {
    LOCK();
    plVar11 = uStack_88 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*uStack_88)(uStack_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  lVar9 = FUN_1400f3ad8(param_1 + 0x44);
  if (lVar9 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_90 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1459f2e4c;
      local_c8 = &LAB_148c39de3;
      local_d0 = &LAB_1457a9eb2;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x3de0;
      local_c0 = &local_90;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       ((longlong)*(int *)(lVar9 + 0x3d28) != 0)) {
      puVar15 = *(uint **)(lVar9 + 0x3d20);
      puVar2 = puVar15 + (longlong)*(int *)(lVar9 + 0x3d28) * 2;
      bVar20 = false;
      do {
        *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) + 2;
        if ((longlong)*(int *)(lVar3 + 0x18) != 0) {
          ppcVar16 = (code **)(*(longlong *)(lVar3 + 0x10) + 0x58);
          lVar9 = (longlong)*(int *)(lVar3 + 0x18) << 7;
          do {
            if ((puVar15[1] == 0) || (uVar8 = *puVar15, (int)uVar8 < 0)) {
LAB_144255b57:
              lVar17 = 0;
            }
            else {
              lVar17 = 0;
              if ((int)uVar8 < DAT_14c9647dc) {
                plVar18 = (longlong *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                if (((plVar18 == (longlong *)0x0) || (*(uint *)(plVar18 + 2) != puVar15[1])) ||
                   ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_144255b57;
                lVar17 = *plVar18;
              }
            }
            if (ppcVar16[-0xb] == (code *)(ulonglong)*(uint *)(lVar17 + 0xc)) {
              local_90 = (code *)((ulonglong)local_90 & 0xffffffffffffff00);
              local_68 = 0;
              FUN_1405833e0(&local_90,puVar15);
              plVar18 = (longlong *)FUN_1447262c2(&local_90);
              if (plVar18 == (longlong *)0x0) {
LAB_144255bd8:
                plVar11 = (longlong *)0x0;
              }
              else {
                uVar10 = FUN_140da3b08();
                plVar18 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar10);
                if (plVar18 == (longlong *)0x0) goto LAB_144255bd8;
                uVar10 = FUN_140da3b08();
                plVar11 = (longlong *)FUN_144718840(plVar18,uVar10);
                if (plVar18 == plVar11) goto LAB_144255bd8;
              }
              if ((longlong)local_68 != 0) {
                lVar9 = (longlong)local_68 + -1;
                local_a0 = DAT_14c9a3da0;
                local_a8 = lVar9 * 0x10;
                FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_a8),
                              *(undefined4 *)(DAT_14c9a3da0 + 8 + local_a8));
                if (*(longlong *)(local_a0 + local_a8) != 0) {
                  FUN_1400020a8();
                }
                lVar17 = DAT_14c9a3da0;
                iVar19 = (int)lVar9;
                if (DAT_14c9a3dd4 != 0) {
                  *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar19;
                }
                *(undefined4 *)(lVar17 + local_a8) = 0xffffffff;
                iVar13 = -1;
                if (0 < DAT_14c9a3dd4) {
                  iVar13 = DAT_14c9a3dd0;
                }
                *(int *)(lVar17 + 4 + local_a8) = iVar13;
                DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
                puVar12 = DAT_14c9a3dc0;
                if (DAT_14c9a3dc0 == (undefined *)0x0) {
                  puVar12 = &DAT_14c9a3db0;
                }
                iVar13 = iVar19 + 0x1f;
                if (-1 < iVar19) {
                  iVar13 = iVar19;
                }
                bVar4 = (byte)lVar9 & 0x1f;
                DAT_14c9a3dd0 = iVar19;
                *(uint *)(puVar12 + (longlong)(iVar13 >> 5) * 4) =
                     *(uint *)(puVar12 + (longlong)(iVar13 >> 5) * 4) &
                     (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
                local_68 = 0;
              }
              if (((char)local_90 == '\x03') && (local_80 != (longlong *)0x0)) {
                LOCK();
                piVar1 = (int *)((longlong)local_80 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_80 + 0x10))();
                }
              }
              if (plVar11 != (longlong *)0x0) {
                lVar9 = (**(code **)(*plVar11 + 0x10))(plVar11);
                uVar14 = (ulonglong)*(byte *)(lVar9 + 0x57);
                if (uVar14 == 4) {
                  FUN_1400b22c2(&local_90,"electric");
                  if (ppcVar16 == &local_90) {
                    if (local_90 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                  else {
                    if (*ppcVar16 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                    *ppcVar16 = local_90;
                    local_90 = (code *)0x0;
                    *(int *)(ppcVar16 + 1) = (int)uStack_88;
                    *(undefined4 *)((longlong)ppcVar16 + 0xc) = uStack_88._4_4_;
                  }
                }
                else {
                  FUN_140e96cb2();
                  local_98 = (&DAT_14cbc82a0)[uVar14];
                  local_a8 = uVar14;
                  FUN_1400021e4(&local_98,&local_90);
                  pcVar6 = local_90;
                  iVar19 = (int)uStack_88;
                  uVar8 = (int)uStack_88 - 1;
                  if ((int)uStack_88 == 0) {
                    uVar8 = 0;
                  }
                  if (0 < (int)uVar8) {
                    uVar14 = 0;
                    do {
                      *(ushort *)(local_90 + uVar14 * 2) =
                           (ushort)(*(ushort *)(local_90 + uVar14 * 2) - 0x41 < 0x1a) * 0x20 +
                           *(ushort *)(local_90 + uVar14 * 2);
                      uVar14 = uVar14 + 1;
                    } while (uVar8 != uVar14);
                  }
                  uVar7 = uStack_88._4_4_;
                  local_90 = (code *)0x0;
                  uStack_88 = (longlong *)0x0;
                  if (*ppcVar16 == (code *)0x0) {
                    *ppcVar16 = pcVar6;
                    *(int *)(ppcVar16 + 1) = iVar19;
                    *(undefined4 *)((longlong)ppcVar16 + 0xc) = uVar7;
                    uVar14 = local_a8;
                  }
                  else {
                    local_a0 = CONCAT44(local_a0._4_4_,uVar7);
                    FUN_1400020a8();
                    *ppcVar16 = pcVar6;
                    *(int *)(ppcVar16 + 1) = iVar19;
                    *(undefined4 *)((longlong)ppcVar16 + 0xc) = (undefined4)local_a0;
                    uVar14 = local_a8;
                    if (local_90 != (code *)0x0) {
                      FUN_1400020a8();
                      uVar14 = local_a8;
                    }
                  }
                }
                *(bool *)(ppcVar16 + 2) = uVar14 != 0;
                bVar5 = !bVar20;
                bVar20 = true;
                if (bVar5) {
                  *(int *)(lVar3 + 0x30) = *(int *)(lVar3 + 0x30) + 1;
                }
              }
              break;
            }
            ppcVar16 = ppcVar16 + 0x10;
            lVar9 = lVar9 + -0x80;
          } while (lVar9 != 0);
        }
        puVar15 = puVar15 + 2;
      } while (puVar15 != puVar2);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x38));
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144256036 FUN_144256036 body=774 status=ok
// SIG undefined FUN_144256036(void)

void FUN_144256036(longlong *param_1,longlong param_2,undefined1 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  int local_d0;
  undefined1 local_c8 [4];
  undefined8 local_c4;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  longlong *local_a8;
  int local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined2 local_37;
  undefined1 local_35;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0x31] != 0) {
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar9 = param_1[0x31];
    lVar7 = param_1[0x33];
    lVar5 = FUN_140149a73(uVar4,0);
    if (lVar5 != 0) {
      FUN_140825b72(lVar9 + 0x188,lVar7,lVar5,0);
    }
    param_1[0x33] = 0;
    param_1[0x31] = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  if ((param_2 != 0) && (cVar2 = FUN_140114204(param_2 + 0x188), cVar2 != '\0')) {
    param_1[0x31] = param_2;
    *(undefined1 *)(param_1 + 0x32) = param_3;
    local_c8[0] = 0;
    local_c4 = 0;
    local_bc = 0;
    local_b8 = 0;
    local_b4 = 0;
    local_ac = 0;
    local_98 = 0xc69c4000;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_37 = 1;
    local_35 = 0;
    local_34 = 0;
    local_d8 = (longlong *)0x0;
    local_d0 = 0;
    FUN_1446efa72(&local_d8,0,3,0x10);
    plVar6 = local_d8;
    local_d0 = 3;
    *local_d8 = (longlong)&PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_d8[2] = lVar7;
    *local_d8 = (longlong)&PTR_FUN_14b9a9570;
    local_d8[3] = 0;
    iVar3 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_d8 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar3 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar3 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar3 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar3 = iVar8;
        }
      }
    }
    *(int *)((longlong)plVar6 + 0x1c) = iVar3;
    plVar6[4] = (longlong)param_1;
    local_a8 = local_d8;
    local_a0 = local_d0;
    uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    lVar9 = param_1[0x31];
    lVar7 = FUN_140149a73(uVar4,0);
    if (lVar7 == 0) {
      local_34 = 2;
    }
    else {
      FUN_140983ba6(lVar9 + 0x188,lVar7,local_c8);
      if (local_34 == 1) {
        if (local_a8 == (longlong *)0x0 || local_a0 == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          (**(code **)(*local_a8 + 0x38))(local_a8,&local_d8);
          plVar6 = local_d8;
        }
        param_1[0x33] = (longlong)plVar6;
      }
    }
    FUN_1409838b8(local_c8);
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425633e FUN_14425633e body=761 status=ok
// SIG undefined FUN_14425633e(void)

undefined8 * FUN_14425633e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  int iVar4;
  code *pcVar5;
  void *_Src;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  longlong *local_78 [2];
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar7 = FUN_1400d7050(param_1 + 6);
  lVar8 = FUN_140e06fb1(uVar7);
  if (lVar8 != 0) {
    FUN_1405f62be(lVar8,&local_58);
    if (local_58 != (longlong *)0x0) {
      plVar9 = (longlong *)(**(code **)(*local_58 + 0xc0))();
      if ((longlong)(int)plVar9[1] != 0) {
        lVar12 = *plVar9;
        lVar8 = lVar12 + (longlong)(int)plVar9[1] * 0xc;
        do {
          (**(code **)(*local_58 + 0x78))(local_58,&local_68,lVar12);
          uVar13 = 0;
          if (local_68 != 0) {
            lVar10 = FUN_1405f6336();
            uVar13 = 0;
            if (lVar10 != 0) {
              if ((*(longlong *)(lVar10 + 0x4f0) == 0) || ((longlong)*(int *)(lVar10 + 0x4f8) == -1)
                 ) {
                lVar11 = 0;
              }
              else {
                lVar11 = **(longlong **)
                           (*(longlong *)(*(longlong *)(lVar10 + 0x4f0) + 0x50) +
                           (longlong)*(int *)(lVar10 + 0x4f8) * 8);
              }
              uVar13 = 3;
              if ((longlong)DAT_14cbd5f10 != 0) {
                lVar14 = 0;
                do {
                  if (*(longlong *)(DAT_14cbd5f08 + lVar14) == lVar11) {
                    uVar3 = *(ushort *)(lVar10 + 0x53a);
                    lVar10 = *(longlong *)(DAT_14cb86da8 + 0x370);
                    (**(code **)(*param_1 + 0x180))(param_1);
                    local_88 = *(undefined8 *)(*(longlong *)(local_68 + 8) + 0x10);
                    local_80 = *(undefined4 *)(*(longlong *)(local_68 + 8) + 0x18);
                    FUN_143deff24((ulonglong)((uint)uVar3 * 0x18) + lVar10,local_78,&local_88);
                    plVar9 = local_78[0];
                    if (*(code **)(*local_78[0] + 0x50) != FUN_144828418) {
                      plVar9 = (longlong *)(**(code **)(*local_78[0] + 0x50))();
                    }
                    FUN_1447a1fc0(plVar9);
                    pcVar5 = *(code **)(*local_78[0] + 0x28);
                    if (pcVar5 == FUN_14482841c) {
                      plVar9 = local_78[0] + 3;
                      if (local_78[0][5] != 0) {
                        plVar9 = (longlong *)(local_78[0][5] + 8);
                      }
                    }
                    else if (pcVar5 == (code *)&LAB_14010c34c) {
                      plVar9 = local_78[0] + 2;
                    }
                    else {
                      plVar9 = (longlong *)(*pcVar5)(local_78[0]);
                    }
                    *param_2 = 0;
                    iVar4 = (int)plVar9[1];
                    _Src = (void *)*plVar9;
                    *(int *)(param_2 + 1) = iVar4;
                    if ((longlong)iVar4 == 0) {
                      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
                    }
                    else {
                      FUN_1446dd670(param_2,iVar4,0);
                      memcpy((void *)*param_2,_Src,(longlong)iVar4 * 2);
                    }
                    if (local_78[0] != (longlong *)0x0) {
                      (**(code **)(*local_78[0] + 0x10))();
                    }
                    uVar13 = 1;
                    break;
                  }
                  lVar14 = lVar14 + 8;
                } while ((longlong)DAT_14cbd5f10 * 8 != lVar14);
              }
            }
          }
          plVar9 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          if ((uVar13 != 3) && (uVar13 != 0)) {
            if ((uVar13 & 1) != 0) {
              bVar6 = false;
              goto LAB_1442565cf;
            }
            break;
          }
          lVar12 = lVar12 + 0xc;
        } while (lVar12 != lVar8);
      }
    }
    bVar6 = true;
LAB_1442565cf:
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_50 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (!bVar6) goto LAB_144256609;
  }
  FUN_1400b22c2(param_2,&DAT_149e02088);
LAB_144256609:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144256638 FUN_144256638 body=364 status=ok
// SIG undefined FUN_144256638(void)

void FUN_144256638(longlong *param_1,char *param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_2 != '\x06') goto LAB_14425677d;
  cVar1 = *param_3;
  if (cVar1 == '\x03') {
    bVar6 = *(longlong *)(param_3 + 4) == 0;
LAB_144256682:
    uVar2 = (uint)!bVar6;
  }
  else if (cVar1 == '\x02') {
    uVar2 = *(uint *)(param_3 + 0xc);
  }
  else {
    if (cVar1 == '\x01') {
      bVar6 = *(int *)(param_3 + 0xc) == 0;
      goto LAB_144256682;
    }
    uVar2 = 0;
  }
  cVar1 = param_2[0x38];
  if (cVar1 == '\x03') {
    bVar6 = *(longlong *)(param_2 + 0x3c) == 0;
LAB_1442566b1:
    uVar4 = (uint)!bVar6;
  }
  else if (cVar1 == '\x02') {
    uVar4 = *(uint *)(param_2 + 0x44);
  }
  else {
    uVar4 = 0;
    if (cVar1 == '\x01') {
      bVar6 = *(int *)(param_2 + 0x44) == 0;
      goto LAB_1442566b1;
    }
  }
  if ((uVar2 != uVar4) && ((cVar1 != '\x02' || (*(int *)(param_2 + 0x44) < 2)))) {
    lVar3 = FUN_1402735c8();
    if ((longlong)*(int *)(lVar3 + 0x778) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x770);
      lVar3 = (longlong)*(int *)(lVar3 + 0x778) * 0x38;
      do {
        cVar1 = FUN_14493b798(lVar5,param_2);
        if (cVar1 != '\0') {
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
          FUN_1446ddda2(&local_58,"vault_power_notification",(int)param_1[0x12] + 1);
          lVar3 = FUN_1412095fe(&local_58);
          if (lVar3 != 0) {
            FUN_1412099d2(param_1,&DAT_14cbd5aa8);
            (**(code **)(*param_1 + 0x2d0))(param_1,local_5c,lVar3);
            *(int *)(param_1 + 0x12) = (int)param_1[0x12] + 1;
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar5 = lVar5 + 0x38;
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != 0);
    }
  }
LAB_14425677d:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442567a6 FUN_1442567a6 body=487 status=ok
// SIG undefined FUN_1442567a6(void)

void FUN_1442567a6(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = CONCAT31(local_40._1_3_,1);
  local_34 = 0;
  uStack_3c = (undefined4)DAT_14cb7c580;
  uStack_38 = (undefined4)((ulonglong)DAT_14cb7c580 >> 0x20);
  cVar1 = FUN_1403218c0(param_2 + 0x38);
  if (cVar1 != '\0') goto LAB_144256924;
  lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((lVar3 != 0) && (lVar3 = FUN_140149a73(lVar3,0), lVar3 != 0)) &&
     (plVar4 = (longlong *)FUN_1403a0144(lVar3), plVar4 != (longlong *)0x0)) {
    local_40 = 0x49dfbe73;
    uStack_3c = 1;
    uStack_38 = 5;
    local_34 = local_34 & 0xffffff00;
    uVar2 = FUN_14001a6c0(&local_40,1);
    local_48 = 0;
    puVar8 = DAT_14cbd5f18;
    if (DAT_14cbd5f20 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_1405f0d29(local_4c,puVar8,0);
    local_58 = 0;
    (**(code **)(*plVar4 + 0x38))(plVar4,local_4c,uVar2,0);
  }
  lVar5 = FUN_1402735c8();
  lVar3 = *(longlong *)(lVar5 + 0xbf0);
  if (lVar3 == 0) {
    uVar6 = FUN_141209660();
    lVar3 = FUN_14477b664(uVar6);
    *(longlong *)(lVar5 + 0xbf0) = lVar3;
  }
  lVar7 = *(longlong *)(lVar5 + 0xbf8);
  if (lVar7 == 0) {
    if ((lVar3 == 0) || (*(longlong *)(lVar5 + 0xbe8) == 0)) goto LAB_144256924;
    plVar4 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar1 == '\0')) {
      *(undefined8 *)(lVar5 + 0xbf8) = 0;
      goto LAB_144256924;
    }
    uVar6 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar7 = FUN_144aff482(uVar6,(longlong *)(lVar5 + 0xbe8));
    *(longlong *)(lVar5 + 0xbf8) = lVar7;
    if (lVar7 == 0) goto LAB_144256924;
  }
  FUN_14425633e(param_1,&local_40);
  local_58 = local_58 & 0xffffffffffffff00;
  FUN_14663989c(param_1,local_50,lVar7,&local_40);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    FUN_1400020a8();
  }
LAB_144256924:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425698e FUN_14425698e body=1656 status=ok
// SIG undefined FUN_14425698e(void)

void FUN_14425698e(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_118 [32];
  ulonglong local_f8;
  longlong *local_f0;
  char local_e4 [4];
  undefined8 local_e0;
  int local_d8;
  undefined1 local_d4 [4];
  undefined8 local_d0;
  longlong local_c8;
  int local_c0;
  undefined1 local_b4 [4];
  undefined8 local_b0;
  undefined8 local_a8;
  int iStack_a0;
  uint local_9c;
  undefined8 local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_a8._0_4_ = CONCAT31(local_a8._1_3_,1);
  local_9c = 0;
  local_a8._4_4_ = (undefined4)DAT_14cb7c580;
  iStack_a0 = (int)((ulonglong)DAT_14cb7c580 >> 0x20);
  cVar4 = FUN_1403218c0(param_2 + 0x38);
  if ((((cVar4 != '\0') || (lVar6 = (**(code **)(*param_1 + 0x180))(param_1), lVar6 == 0)) ||
      (lVar7 = FUN_140149a73(lVar6,0), lVar7 == 0)) ||
     (plVar8 = (longlong *)FUN_1403a0144(lVar7), plVar8 == (longlong *)0x0)) goto LAB_144256ed2;
  local_a8._0_4_ = 0x49dfbe73;
  local_a8._4_4_ = 1;
  iStack_a0 = 5;
  local_9c = local_9c & 0xffffff00;
  local_f0 = param_1;
  uVar5 = FUN_14001a6c0(&local_a8,1);
  local_b0 = 0;
  puVar14 = DAT_14cbd5f28;
  if (DAT_14cbd5f30 == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  FUN_1405f0d29(local_b4,puVar14,0);
  local_f8 = 0;
  (**(code **)(*plVar8 + 0x38))(plVar8,local_b4,uVar5,0);
  pvVar3 = DAT_14cbd5f38;
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 0;
  lVar7 = (longlong)DAT_14cbd5f40;
  iStack_a0 = DAT_14cbd5f40;
  if (lVar7 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1446dd670(&local_a8,DAT_14cbd5f40,0);
    memcpy((void *)CONCAT44(local_a8._4_4_,(undefined4)local_a8),pvVar3,lVar7 * 2);
  }
  pvVar3 = DAT_14cbd5f48;
  local_98 = DAT_14cbd5f78;
  local_90 = (void *)0x0;
  lVar7 = (longlong)DAT_14cbd5f50;
  local_88 = DAT_14cbd5f50;
  if (lVar7 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,DAT_14cbd5f50,0);
    memcpy(local_90,pvVar3,lVar7 * 2);
  }
  pvVar3 = DAT_14cbd5f58;
  local_80 = DAT_14cbd5f80;
  local_78 = (void *)0x0;
  lVar7 = (longlong)DAT_14cbd5f60;
  local_70 = DAT_14cbd5f60;
  if (lVar7 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,DAT_14cbd5f60,0);
    memcpy(local_78,pvVar3,lVar7 * 2);
  }
  pvVar3 = DAT_14cbd5f68;
  local_68 = DAT_14cbd5f88;
  local_60 = (void *)0x0;
  lVar7 = (longlong)DAT_14cbd5f70;
  local_58 = DAT_14cbd5f70;
  if (lVar7 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,DAT_14cbd5f70,0);
    memcpy(local_60,pvVar3,lVar7 * 2);
  }
  local_50 = DAT_14cbd5f90;
  local_c8 = 0;
  local_c0 = 4;
  FUN_144264826(&local_c8,4);
  FUN_144264962(local_c8,&local_a8,4);
  lVar7 = 0x48;
  do {
    if (*(longlong *)((longlong)&local_a8 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar11 = local_c8;
    lVar7 = lVar7 + -0x18;
  } while (lVar7 != -0x18);
  lVar7 = (longlong)local_c0;
  if (lVar7 == 0) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    lVar15 = 0;
    do {
      FUN_144928b90(&local_a8,3);
      local_d0 = 0;
      puVar14 = &DAT_149dfb77a;
      if (*(int *)(lVar11 + 8 + lVar15) != 0) {
        puVar14 = *(undefined2 **)(lVar11 + lVar15);
      }
      FUN_1405f0d29(local_d4,puVar14,0);
      FUN_144928d62(&local_98,1);
      local_e4[0] = '\0';
      local_e0 = 0;
      local_d8 = 0;
      lVar9 = FUN_140149a73(lVar6,0);
      if (lVar9 != 0) {
        FUN_14039fc7b(&local_a8,local_e4,lVar9,0);
      }
      if (local_e4[0] == '\x01') {
        if (local_d8 == 0) {
LAB_144256d5d:
          lVar17 = *(longlong *)(lVar11 + 0x10 + lVar15);
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          break;
        }
      }
      else {
        cVar4 = FUN_140321d1a(local_e4);
        if (cVar4 == '\0') goto LAB_144256d5d;
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      lVar15 = lVar15 + 0x18;
    } while (lVar7 * 0x18 != lVar15);
  }
  lVar6 = FUN_1402735c8();
  if (*(int *)(lVar6 + 0xc70) != *(int *)(lVar6 + 0xc9c)) {
    uVar2 = (uint)((ulonglong)lVar17 >> 0x10);
    uVar13 = (uint)lVar17 & 0xffff;
    lVar7 = lVar6 + 0xca0;
    if (*(longlong *)(lVar6 + 0xca8) != 0) {
      lVar7 = *(longlong *)(lVar6 + 0xca8);
    }
    iVar12 = *(int *)(lVar7 + (ulonglong)
                              (*(int *)(lVar6 + 0xcb0) - 1U &
                              (int)((ulonglong)lVar17 >> 0x20) + ((uint)lVar17 << 0x10 | uVar13) +
                              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar13 >> 4)) * 4);
    if (iVar12 != -1) {
      do {
        plVar8 = (longlong *)(*(longlong *)(lVar6 + 0xc68) + (longlong)iVar12 * 0x28);
        if (*plVar8 == lVar17) {
          plVar16 = plVar8 + 1;
          if (plVar16 != (longlong *)0x0 && plVar8 != (longlong *)0x0) {
            lVar6 = plVar8[2];
            if (lVar6 == 0) {
              uVar10 = FUN_141209660();
              lVar6 = FUN_14477b664(uVar10);
              plVar8[2] = lVar6;
            }
            lVar7 = plVar8[3];
            if (lVar7 == 0) {
              if ((lVar6 == 0) || (*plVar16 == 0)) goto LAB_144256eb5;
              plVar1 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar4 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar4 == '\0')) {
                plVar8[3] = 0;
                goto LAB_144256eb5;
              }
              uVar10 = (**(code **)(*plVar1 + 0x110))(plVar1);
              lVar7 = FUN_144aff482(uVar10,plVar16);
              plVar8[3] = lVar7;
              if (lVar7 == 0) goto LAB_144256eb5;
            }
            (**(code **)(*local_f0 + 0x2d0))(local_f0,&local_a8,lVar7);
            goto LAB_144256eb5;
          }
          break;
        }
        iVar12 = (int)plVar8[4];
      } while (iVar12 != -1);
    }
  }
  lVar7 = FUN_1402735c8();
  lVar6 = *(longlong *)(lVar7 + 0xc08);
  if (lVar6 == 0) {
    uVar10 = FUN_141209660();
    lVar6 = FUN_14477b664(uVar10);
    *(longlong *)(lVar7 + 0xc08) = lVar6;
  }
  lVar11 = *(longlong *)(lVar7 + 0xc10);
  if (lVar11 == 0) {
    if ((lVar6 != 0) && (*(longlong *)(lVar7 + 0xc00) != 0)) {
      plVar8 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar8 == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar4 == '\0')) {
        *(undefined8 *)(lVar7 + 0xc10) = 0;
      }
      else {
        uVar10 = (**(code **)(*plVar8 + 0x110))(plVar8);
        lVar11 = FUN_144aff482(uVar10,(longlong *)(lVar7 + 0xc00));
        *(longlong *)(lVar7 + 0xc10) = lVar11;
        if (lVar11 != 0) goto LAB_144256f9d;
      }
    }
  }
  else {
LAB_144256f9d:
    plVar8 = local_f0;
    FUN_14425633e(local_f0,&local_a8);
    local_f8 = local_f8 & 0xffffffffffffff00;
    FUN_14663989c(plVar8,local_e4,lVar11,&local_a8);
    if (CONCAT44(local_a8._4_4_,(undefined4)local_a8) != 0) {
      FUN_1400020a8();
    }
  }
LAB_144256eb5:
  FUN_1442649d9(local_c8,local_c0);
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
LAB_144256ed2:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144257008 FUN_144257008 body=849 status=ok
// SIG undefined FUN_144257008(void)

void FUN_144257008(longlong *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong *plVar8;
  int *piVar9;
  int *piVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  undefined1 auStack_98 [32];
  longlong *local_78;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2[0x38] == '\x01') {
    if (*(int *)(param_2 + 0x44) == 0) goto LAB_144257039;
  }
  else {
    cVar1 = FUN_140321d1a(param_2 + 0x38);
    if (cVar1 == '\0') goto LAB_144257039;
  }
  lVar3 = FUN_1402735c8();
  if (*param_2 == '\x01') {
    local_78 = (longlong *)(lVar3 + 0xcb8);
    FUN_1447a97f4(&local_70,param_2 + 0x10);
    if (0 < local_6c) {
      lVar3 = 0;
      uVar12 = 0;
      iVar2 = local_6c;
      iVar7 = DAT_14c948000;
      do {
        bVar13 = local_70 != 0;
        bVar14 = local_70 != iVar7;
        piVar9 = &DAT_14c948620;
        piVar10 = (int *)&DAT_14c948618;
        if (bVar14 && bVar13) {
          puVar11 = local_68;
          if (0 < local_4c) {
            puVar11 = local_58;
          }
          if (1 < iVar2) {
            puVar11 = local_58;
          }
          piVar9 = (int *)(puVar11 + lVar3 + 8);
          piVar10 = (int *)(puVar11 + lVar3);
        }
        if ((*piVar10 == DAT_14cb7beb0) && (*piVar9 == DAT_14cb7beb8)) {
LAB_14425723f:
          FUN_1402b5374(&local_70,uVar12 & 0xffffffff,0);
          iVar2 = local_6c;
          iVar7 = DAT_14c948000;
        }
        else {
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar14 && bVar13) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar2) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar3 + 8);
            piVar10 = (int *)(puVar11 + lVar3);
          }
          if ((*piVar10 == DAT_14cb7bec8) && (*piVar9 == DAT_14cb7bed0)) goto LAB_14425723f;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar14 && bVar13) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar2) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar3 + 8);
            piVar10 = (int *)(puVar11 + lVar3);
          }
          if ((*piVar10 == DAT_14cb7bee0) && (*piVar9 == DAT_14cb7bee8)) goto LAB_14425723f;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar14 && bVar13) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar2) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar3 + 8);
            piVar10 = (int *)(puVar11 + lVar3);
          }
          if ((*piVar10 == DAT_14cb7bef8) && (*piVar9 == DAT_14cb7bf00)) goto LAB_14425723f;
          piVar9 = &DAT_14c948620;
          piVar10 = (int *)&DAT_14c948618;
          if (bVar14 && bVar13) {
            puVar11 = local_68;
            if (0 < local_4c) {
              puVar11 = local_58;
            }
            if (1 < iVar2) {
              puVar11 = local_58;
            }
            piVar9 = (int *)(puVar11 + lVar3 + 8);
            piVar10 = (int *)(puVar11 + lVar3);
          }
          if ((*piVar10 == DAT_14cb7bf10) && (*piVar9 == DAT_14cb7bf18)) goto LAB_14425723f;
        }
        uVar12 = uVar12 + 1;
        lVar3 = lVar3 + 0xc;
      } while ((longlong)uVar12 < (longlong)iVar2);
    }
    plVar8 = local_78;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
      plVar8 = local_78;
    }
  }
  else {
    local_70 = *(int *)(param_2 + 0x10);
    plVar8 = (longlong *)(lVar3 + 0xcb8);
  }
  iVar2 = FUN_148e2da8a(plVar8,local_70,param_2);
  lVar3 = 0;
  if (iVar2 != -1) {
    lVar3 = (longlong)iVar2 * 0x58 + *plVar8;
  }
  if (lVar3 == 0) goto LAB_144257039;
  lVar5 = *(longlong *)(lVar3 + 0x40);
  if (lVar5 == 0) {
    uVar4 = FUN_141209660();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar3 + 0x40) = lVar5;
  }
  lVar6 = *(longlong *)(lVar3 + 0x48);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*(longlong *)(lVar3 + 0x38) == 0)) goto LAB_144257039;
    plVar8 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar8 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar8 + 0x108))(plVar8), cVar1 == '\0')) {
      *(undefined8 *)(lVar3 + 0x48) = 0;
      goto LAB_144257039;
    }
    uVar4 = (**(code **)(*plVar8 + 0x110))(plVar8);
    lVar6 = FUN_144aff482(uVar4,(longlong *)(lVar3 + 0x38));
    *(longlong *)(lVar3 + 0x48) = lVar6;
    if (lVar6 == 0) goto LAB_144257039;
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,&local_70,lVar6);
LAB_144257039:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425735a FUN_14425735a body=69 status=ok
// SIG undefined FUN_14425735a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14425735a(void)

{
  _DAT_14cbd5fa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014425739c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd5fa8,1);
  return;
}



// FUNCTION 1442573f4 FUN_1442573f4 body=359 status=ok
// SIG undefined FUN_1442573f4(void)

void FUN_1442573f4(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + -0x38;
  FUN_14425755c(lVar1,&local_40);
  if (local_40 == 0) goto LAB_144257512;
  local_48 = 0;
  plVar5 = (longlong *)FUN_1408d71e4(lVar1);
  lVar2 = *plVar5;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0x220));
  cVar4 = FUN_1442424b6(lVar2);
  if (cVar4 == '\0') {
LAB_144257499:
    if (*(longlong *)(lVar2 + 0x1f8) == 0) {
      local_58[0] = 0;
    }
    else {
      puVar3 = *(undefined4 **)(*(longlong *)(lVar2 + 0x1f8) + 8);
      puVar7 = &DAT_14c9485f0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar7 = puVar3;
      }
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      FUN_140045924(DAT_14c947fe0,local_58,puVar7,1);
    }
    bVar8 = local_58[0] == 0;
    local_48 = local_58[0];
  }
  else {
    FUN_1400021e4(&local_40,local_58);
    cVar4 = FUN_14424255a(lVar2,local_58);
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar4 == '\0') goto LAB_144257499;
    *(undefined1 *)(param_1 + 0x10) = 0;
    bVar8 = true;
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0x220));
  if ((!bVar8) && (local_40 != 0)) {
    FUN_1442576f6(lVar1,&local_48,&local_40);
  }
LAB_144257512:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425755c FUN_14425755c body=407 status=ok
// SIG undefined FUN_14425755c(void)

undefined8 * FUN_14425755c(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
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
    if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
        (*(longlong *)(lVar2 + 0xf48) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xf48) + 0x3f70), lVar2 != 0)) {
      puVar1 = *(undefined4 **)(lVar2 + 8);
      puVar3 = &DAT_14c9485f0;
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = puVar1;
      }
      if (DAT_14c947fe0 == 0) {
        lVar2 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar2);
        DAT_14c947fe0 = lVar2;
      }
      FUN_140045924(DAT_14c947fe0,param_2,puVar3,1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  *param_2 = 0;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442576f6 FUN_1442576f6 body=479 status=ok
// SIG undefined FUN_1442576f6(void)

void FUN_1442576f6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
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
  code *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_1400d7050(param_1 + 0x30);
  if (lVar3 == 0) goto LAB_1442577f9;
  if (DAT_14cbadd90 == 0) {
    local_70 = local_50;
    local_50[0] = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1459f2e4c;
    local_78 = &LAB_148c39de3;
    local_80 = &LAB_1457a9eb2;
    local_88 = &DAT_149e063b2;
    local_90 = 0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1442577f9;
  plVar4 = (longlong *)FUN_1408d71e4(param_1);
  lVar1 = *plVar4;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  *(int *)(lVar1 + 0x218) = *(int *)(lVar1 + 0x218) + 1;
  if (*(int *)(lVar1 + 0xd0) == -1) {
    if (*(int *)(lVar1 + 0xd4) == 0) {
      iVar2 = 1;
      goto LAB_1442577a7;
    }
  }
  else {
    iVar2 = *(int *)(lVar1 + 0xd4) + 1;
LAB_1442577a7:
    *(undefined4 *)(lVar1 + 0xd0) = 0xffffffff;
    *(int *)(lVar1 + 0xd4) = iVar2;
  }
  FUN_1400021e4(param_3,local_50);
  FUN_1442425d4(lVar1,param_2,local_50,lVar3);
  if (local_50[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
LAB_1442577f9:
  FUN_141435120(param_1 + 0x30);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442578d6 FUN_1442578d6 body=330 status=ok
// SIG undefined FUN_1442578d6(void)

void FUN_1442578d6(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_1408d71e4();
  lVar1 = *plVar2;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
  *(int *)(lVar1 + 0x218) = *(int *)(lVar1 + 0x218) + 1;
  lVar3 = FUN_1400d7050(param_1 + 0x30);
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_14425794d;
  }
  lVar3 = 0;
LAB_14425794d:
  FUN_144243612(lVar1,lVar3);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000144257976. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar1 + 0x220));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144257a22 FUN_144257a22 body=574 status=ok
// SIG undefined FUN_144257a22(void)

void FUN_144257a22(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
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
  undefined8 *local_38;
  undefined4 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    lVar3 = FUN_1400d7050(param_1 + 6);
    if (lVar3 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_50 = &local_28;
        local_28 = FUN_141030f22;
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
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        cVar1 = FUN_14425819c(param_1,*(undefined8 *)(param_2 + 8));
        if (cVar1 == '\0') {
          if (*(longlong *)(param_2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_a8);
          }
          *(undefined1 *)(lVar3 + 0xd68) = *(undefined1 *)(param_2 + 0x10);
          uVar4 = (**(code **)(*param_1 + 0x180))(param_1);
          lVar5 = FUN_1406f612e(uVar4);
          if (lVar5 != 0) {
            uVar2 = FUN_1408966e4(lVar3);
            FUN_145bf4c9e(lVar5,uVar2);
          }
          local_38 = (undefined8 *)0x0;
          local_30 = 0;
          FUN_1446efa72(&local_38,0,2,0x10);
          local_30 = 2;
          *local_38 = &PTR_LAB_149e06450;
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 1;
          lVar5 = DAT_14c758608 + 1;
          if (lVar6 == 0) {
            LOCK();
            UNLOCK();
            lVar6 = DAT_14c758608 + 2;
            lVar5 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar5;
          local_38[2] = lVar6;
          *local_38 = &PTR_FUN_14b9a9e80;
          FUN_1441f1e80(lVar3,*(undefined8 *)(param_2 + 8),0,&local_38);
          FUN_14116603a(lVar3);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144257c74 FUN_144257c74 body=1318 status=ok
// SIG undefined FUN_144257c74(void)

void FUN_144257c74(longlong param_1,longlong param_2)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  void *pvVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  undefined1 local_78;
  code *local_70;
  longlong *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 == 0) goto LAB_144257e20;
  FUN_1449027d0(param_1,&local_70);
  plVar5 = *(longlong **)(local_70 + 0x470);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 0x13));
  *(int *)(plVar5 + 0x12) = (int)plVar5[0x12] + 1;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_68 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  iVar13 = (int)plVar5[1];
  if (*(longlong *)(param_2 + 8) == *plVar5) {
    if (iVar13 == 0) {
      iVar13 = 0;
      goto LAB_144257d13;
    }
  }
  else {
LAB_144257d13:
    *plVar5 = *(longlong *)(param_2 + 8);
    *(int *)(plVar5 + 1) = iVar13 + 1;
  }
  dVar2 = *(double *)(param_2 + 0x10);
  dVar3 = *(double *)(param_2 + 0x18);
  dVar4 = *(double *)(param_2 + 0x20);
  if ((((dVar2 != (double)plVar5[2]) || (NAN(dVar2) || NAN((double)plVar5[2]))) ||
      (dVar3 != (double)plVar5[3])) || (NAN(dVar3) || NAN((double)plVar5[3]))) {
LAB_144257d4a:
    plVar5[2] = (longlong)dVar2;
    plVar5[3] = (longlong)dVar3;
    plVar5[4] = (longlong)dVar4;
    *(int *)(plVar5 + 5) = (int)plVar5[5] + 1;
  }
  else if (((dVar4 != (double)plVar5[4]) || (NAN(dVar4) || NAN((double)plVar5[4]))) ||
          ((int)plVar5[5] == 0)) goto LAB_144257d4a;
  iVar13 = *(int *)((longlong)plVar5 + 0x34);
  if ((char)plVar5[6] == '\0') {
LAB_144257d6b:
    *(undefined1 *)(plVar5 + 6) = 1;
    *(int *)((longlong)plVar5 + 0x34) = iVar13 + 1;
  }
  else if (iVar13 == 0) {
    iVar13 = 0;
    goto LAB_144257d6b;
  }
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
  plVar6 = DAT_14c844840;
  plVar12 = (longlong *)plVar5[0x10];
  if (plVar12 != DAT_14c844840) {
    plVar5[0x10] = (longlong)DAT_14c844840;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  *(undefined4 *)(plVar5 + 0x11) = DAT_14c844848;
  lVar10 = FUN_1400d7050(param_1 + 0x30);
  if (lVar10 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = FUN_141030f22;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1459f2e4c;
      local_c8 = &LAB_148c39de3;
      local_d0 = &LAB_1457a9eb2;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x3de0;
      local_c0 = &local_70;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar11 = FUN_140e16172(lVar10), pvVar8 = DAT_14cbd5bc0, lVar11 != 0)) {
      if (*(longlong *)(param_2 + 8) == 0) {
        FUN_140e1630e(lVar11);
      }
      else {
        local_88 = (void *)0x0;
        lVar14 = (longlong)DAT_14cbd5bc8;
        local_80 = DAT_14cbd5bc8;
        if (lVar14 == 0) {
          local_7c = 0;
          local_98 = 0;
LAB_144257f4d:
          local_78 = 1;
          local_a0 = (void *)0x0;
          local_94 = 0;
        }
        else {
          FUN_1446dd670(&local_88,DAT_14cbd5bc8,0);
          memcpy(local_88,pvVar8,lVar14 * 2);
          pvVar8 = local_88;
          lVar14 = (longlong)local_80;
          local_78 = 1;
          local_a0 = (void *)0x0;
          local_98 = local_80;
          if (lVar14 == 0) goto LAB_144257f4d;
          FUN_1446dd670(&local_a0,local_80,0);
          memcpy(local_a0,pvVar8,lVar14 * 2);
        }
        local_90 = local_78;
        FUN_1410df722(lVar11);
        lVar11 = DAT_14cb1aeb8;
        if (DAT_14cb1aeb8 != 0) {
          FUN_1446dcdd4(&local_70,(longlong *)(param_2 + 8));
          plVar12 = (longlong *)FUN_144837462(lVar11,&local_70);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (plVar12 != (longlong *)0x0) {
            lVar11 = (**(code **)(*plVar12 + 8))(plVar12);
            lVar14 = FUN_1401548e0();
            if (((lVar14 != 0) && (*(int *)(lVar14 + 0x38) <= *(int *)(lVar11 + 0x38))) &&
               ((*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
                 == lVar14 + 0x30 && (*(char *)((longlong)plVar12 + 0x10aa) == '\x01')))) {
              lVar11 = FUN_141563480(plVar12 + 0x216);
              plVar6 = *(longlong **)(lVar11 + 0x28);
              plVar7 = (longlong *)plVar5[0x10];
              if (plVar7 != plVar6) {
                plVar5[0x10] = (longlong)plVar6;
                if (plVar6 != (longlong *)0x0) {
                  (**(code **)(*plVar6 + 8))();
                }
                if (plVar7 != (longlong *)0x0) {
                  (**(code **)(*plVar7 + 0x10))(plVar7);
                }
              }
              *(undefined4 *)(plVar5 + 0x11) = *(undefined4 *)(lVar11 + 0x30);
              cVar9 = FUN_148cd0530(plVar12,lVar10);
              if ((char)plVar5[6] == cVar9) {
                if (*(int *)((longlong)plVar5 + 0x34) != 0) goto LAB_144257fdc;
                iVar13 = 1;
              }
              else {
                iVar13 = *(int *)((longlong)plVar5 + 0x34) + 1;
              }
              *(char *)(plVar5 + 6) = cVar9;
              *(int *)((longlong)plVar5 + 0x34) = iVar13;
            }
          }
        }
LAB_144257fdc:
        if (local_88 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 0x13));
LAB_144257e20:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425819c FUN_14425819c body=439 status=ok
// SIG undefined FUN_14425819c(void)

undefined8 FUN_14425819c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
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
  undefined8 local_58;
  code *local_50;
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = param_2;
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1459f2e4c;
      local_78 = &LAB_148c39de3;
      local_80 = &LAB_1457a9eb2;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      FUN_1446dcdd4(local_48,&local_58);
      plVar3 = (longlong *)FUN_1400d6974(local_48);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar5 = FUN_1401548e0();
        if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
             lVar5 + 0x30)) && (*(char *)((longlong)plVar3 + 0x10aa) == '\x01')) {
          uVar6 = FUN_141563480(plVar3 + 0x216);
          cVar1 = FUN_14125be1e(lVar2,uVar6);
          if (cVar1 == '\0') {
            FUN_14410af30(lVar2,uVar6);
            uVar6 = 1;
            goto LAB_1442581fb;
          }
        }
      }
    }
  }
  uVar6 = 0;
LAB_1442581fb:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144258354 FUN_144258354 body=2005 status=ok
// SIG undefined FUN_144258354(void)

void FUN_144258354(longlong param_1,code *param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  code *pcVar10;
  PSRWLOCK pRVar11;
  int iVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong *local_d0;
  PSRWLOCK local_c8;
  code *local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  code *local_98;
  ulonglong uStack_90;
  undefined8 local_80;
  code *local_78;
  longlong *plStack_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pRVar11 = (PSRWLOCK)(param_1 + 0x30);
  lVar4 = FUN_140495e96(pRVar11);
  if (lVar4 == 0) goto LAB_144258641;
  lVar4 = FUN_140ade8e4(lVar4);
  if (lVar4 != 0) {
    lVar5 = FUN_140ade7fe();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) {
      local_78 = (code *)0x0;
      plStack_70 = (longlong *)0x0;
      FUN_1405b0040(lVar4,&local_78);
      if ((longlong)(int)plStack_70 != 0) {
        pcVar10 = local_78 + (longlong)(int)plStack_70 * 8;
        pcVar13 = local_78;
        local_c8 = pRVar11;
        local_c0 = pcVar10;
        do {
          lVar4 = *(longlong *)pcVar13;
          if (*(longlong *)(lVar4 + 0x3a0) == DAT_14cbd60a8) {
            lVar5 = *(longlong *)(lVar4 + 0x40);
            plVar7 = *(longlong **)(lVar4 + 0x48);
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            if (param_2[0x20] == (code)0x1) {
              iVar12 = *(int *)(lVar5 + 0x2d8);
              if ((longlong)iVar12 != 0) {
                lVar4 = *(longlong *)(lVar5 + 0x2d0);
                lVar15 = 0;
                do {
                  if (((*(int *)(lVar4 + 8 + lVar15) != 0) &&
                      (plVar2 = *(longlong **)(lVar4 + lVar15), plVar2 != (longlong *)0x0)) &&
                     (cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1), cVar3 != '\0'))
                  goto LAB_1442584cd;
                  lVar15 = lVar15 + 0x10;
                } while ((longlong)iVar12 * 0x10 != lVar15);
              }
              local_98 = FUN_148e2762a;
              uStack_90 = uStack_90 & 0xffffffff00000000;
              FUN_148e2752a(lVar5 + 0x2d0,&local_80,param_1,&local_98);
              *(undefined8 *)(param_1 + 0xa8) = local_80;
LAB_1442584cd:
              iVar12 = *(int *)(lVar5 + 0x2f0);
              if ((longlong)iVar12 != 0) {
                lVar4 = *(longlong *)(lVar5 + 0x2e8);
                lVar15 = 0;
                do {
                  if (((*(int *)(lVar4 + 8 + lVar15) != 0) &&
                      (plVar2 = *(longlong **)(lVar4 + lVar15), plVar2 != (longlong *)0x0)) &&
                     (cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1), cVar3 != '\0'))
                  goto LAB_1442585ab;
                  lVar15 = lVar15 + 0x10;
                } while ((longlong)iVar12 * 0x10 != lVar15);
              }
              local_98 = FUN_148e27968;
              uStack_90 = uStack_90 & 0xffffffff00000000;
              FUN_148e27868(lVar5 + 0x2e8,&local_80,param_1,&local_98);
              *(undefined8 *)(param_1 + 0xb0) = local_80;
            }
            else {
              if (*(longlong *)(param_1 + 0xa8) != 0) {
                FUN_14480f766(lVar5 + 0x2d0);
                *(undefined8 *)(param_1 + 0xa8) = 0;
              }
              if (*(longlong *)(param_1 + 0xb0) != 0) {
                FUN_14480f766(lVar5 + 0x2e8);
                *(undefined8 *)(param_1 + 0xb0) = 0;
              }
            }
LAB_1442585ab:
            pcVar10 = local_c0;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar7 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
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
          }
          pcVar13 = pcVar13 + 8;
          pRVar11 = local_c8;
        } while (pcVar13 != pcVar10);
      }
      if (local_78 != (code *)0x0) {
        FUN_1400020a8(local_78);
      }
    }
  }
  lVar4 = FUN_1400d7050(pRVar11);
  if (lVar4 == 0) goto LAB_144258641;
  if (DAT_14cbadd90 == 0) {
    local_f0 = &local_78;
    local_78 = FUN_141030f22;
    local_e0 = FUN_14081d0ea;
    local_e8 = &LAB_1459f2e4c;
    local_f8 = &LAB_148c39de3;
    local_100 = &LAB_1457a9eb2;
    local_108 = &DAT_149e063b2;
    local_110 = 0;
    local_118 = 0x10000004;
    local_120 = 0x10;
    local_128 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_144258641;
  FUN_1449027d0(param_1,&local_78);
  lVar5 = *(longlong *)(local_78 + 0x470);
  local_c8 = (PSRWLOCK)(lVar5 + 0x98);
  AcquireSRWLockExclusive(local_c8);
  plVar7 = plStack_70;
  *(int *)(lVar5 + 0x90) = *(int *)(lVar5 + 0x90) + 1;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_70 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  local_b0 = lVar5 + 0x48;
  local_98 = (code *)0x0;
  uStack_90 = 0;
  iVar12 = *(int *)(lVar5 + 0x54);
  local_c0 = param_2;
  FUN_141501d8f(*(undefined8 *)(lVar5 + 0x48),*(undefined4 *)(lVar5 + 0x50));
  *(undefined4 *)(lVar5 + 0x50) = 0;
  if ((iVar12 < 0) && (*(int *)(lVar5 + 0x54) != 0)) {
    FUN_148e30e60(local_b0);
  }
  *(int *)(lVar5 + 0x58) = *(int *)(lVar5 + 0x58) + 1;
  local_a0 = FUN_140d27aa0(lVar4);
  FUN_148db7d0e(local_a0,&local_98);
  lVar15 = DAT_14cbe42e8;
  if (DAT_14cbe42e8 != 0) {
    if ((longlong)(int)uStack_90 != 0) {
      lVar14 = (longlong)(int)uStack_90 << 3;
      pcVar10 = local_98;
      do {
        FUN_1446dcdd4(&local_78,pcVar10);
        lVar6 = FUN_144837462(lVar15,&local_78);
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        if (lVar6 != 0) {
          *(int *)(lVar5 + 0x58) = *(int *)(lVar5 + 0x58) + 1;
          plVar7 = (longlong *)FUN_148e30e90(local_b0);
          if ((int)plVar7[1] == 0 || *(longlong *)pcVar10 != *plVar7) {
            *plVar7 = *(longlong *)pcVar10;
            *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          }
          cVar3 = *(char *)(lVar6 + 0xac);
          if ((int)plVar7[2] == 0 || cVar3 != *(char *)((longlong)plVar7 + 0xc)) {
            *(char *)((longlong)plVar7 + 0xc) = cVar3;
            *(int *)(plVar7 + 2) = (int)plVar7[2] + 1;
          }
          if ((cVar3 != '\0') &&
             (local_d0 = plVar7, lVar6 = FUN_141563480(lVar6 + 0xb0), lVar6 != 0)) {
            if ((*(longlong *)(lVar6 + 0x38) != *(longlong *)((longlong)local_d0 + 0x1c)) ||
               (*(int *)((longlong)local_d0 + 0x24) == 0)) {
              *(longlong *)((longlong)local_d0 + 0x1c) = *(longlong *)(lVar6 + 0x38);
              *(int *)((longlong)local_d0 + 0x24) = *(int *)((longlong)local_d0 + 0x24) + 1;
            }
            lVar6 = DAT_14cb1aeb8;
            if (DAT_14cb1aeb8 != 0) {
              FUN_1446dcdd4(&local_78,pcVar10);
              plVar7 = (longlong *)FUN_144837462(lVar6,&local_78);
              if (local_60 != 0) {
                FUN_1400020a8();
              }
              if (plVar7 != (longlong *)0x0) {
                local_b8 = plVar7;
                lVar6 = (**(code **)(*plVar7 + 8))(plVar7);
                lVar8 = FUN_1401548e0();
                if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                    lVar8 + 0x30)) {
                  if (*(char *)((longlong)local_b8 + 0x10aa) == '\x01') {
                    local_a8 = FUN_141563480(local_b8 + 0x216);
                    plVar7 = *(longlong **)(local_a8 + 0x18);
                    plVar2 = (longlong *)local_d0[5];
                    if (plVar2 != plVar7) {
                      local_d0[5] = (longlong)plVar7;
                      if (plVar7 != (longlong *)0x0) {
                        (**(code **)(*plVar7 + 8))();
                      }
                      if (plVar2 != (longlong *)0x0) {
                        (**(code **)(*plVar2 + 0x10))(plVar2);
                      }
                    }
                    *(undefined4 *)(local_d0 + 6) = *(undefined4 *)(local_a8 + 0x20);
                  }
                  cVar3 = FUN_148cd0530(local_b8,lVar4);
                  if ((int)local_d0[3] == 0 || *(char *)((longlong)local_d0 + 0x14) != cVar3) {
                    *(char *)((longlong)local_d0 + 0x14) = cVar3;
                    *(int *)(local_d0 + 3) = (int)local_d0[3] + 1;
                  }
                }
              }
            }
          }
        }
        pcVar10 = pcVar10 + 8;
        lVar14 = lVar14 + -8;
      } while (lVar14 != 0);
    }
  }
  pcVar10 = local_c0;
  if (*(char *)(local_a0 + 0xb4) == *(char *)(lVar5 + 0x78)) {
    if (*(int *)(lVar5 + 0x7c) == 0) {
      iVar12 = 1;
      goto LAB_1442589e5;
    }
  }
  else {
    iVar12 = *(int *)(lVar5 + 0x7c) + 1;
LAB_1442589e5:
    *(char *)(lVar5 + 0x78) = *(char *)(local_a0 + 0xb4);
    *(int *)(lVar5 + 0x7c) = iVar12;
  }
  if (local_c0[0x20] == (code)0x1) {
    local_78 = FUN_148e27cde;
    plStack_70 = (longlong *)((ulonglong)plStack_70 & 0xffffffff00000000);
    FUN_148e27bde(local_a0,&local_80,param_1);
    *(undefined8 *)(param_1 + 0xc0) = local_80;
  }
  else {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_14480f766();
    }
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  pRVar11 = local_c8;
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive(pRVar11);
  if (pcVar10[0x20] == (code)0x0) {
    uVar9 = FUN_140d27aa0(lVar4);
    FUN_148db7f48(uVar9);
  }
LAB_144258641:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144258b2d FUN_144258b2d body=69 status=ok
// SIG undefined FUN_144258b2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144258b2d(void)

{
  _DAT_14cbd60d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144258b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd60d8,1);
  return;
}



// FUNCTION 144258b72 FUN_144258b72 body=1550 status=ok
// SIG undefined FUN_144258b72(void)

void FUN_144258b72(longlong *param_1,longlong param_2)

{
  undefined8 ***pppuVar1;
  int *piVar2;
  uint uVar3;
  undefined8 ***pppuVar4;
  code *pcVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  longlong **local_90;
  longlong *local_88;
  longlong *local_80;
  undefined8 *local_78;
  longlong **local_70;
  longlong local_68;
  undefined8 **local_60;
  code *local_58;
  undefined8 ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if ((lVar7 != 0) && (plVar8 = (longlong *)FUN_1449baec6(lVar7), plVar8 != (longlong *)0x0)) {
    lVar7 = FUN_140d976a6();
    if ((*(int *)(lVar7 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30)) {
      *(undefined1 *)(plVar8 + 0x79) = 1;
      (**(code **)(*plVar8 + 0x350))(plVar8);
    }
  }
  if (param_2 == 0) {
    param_2 = DAT_14cbd9358;
  }
  param_1[0x14] = param_2;
  lVar7 = FUN_140495e96(param_1 + 6);
  if (lVar7 != 0) {
    lVar9 = FUN_14030d4a0();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) {
      FUN_1403ca8ec(lVar7 + 0x338,param_1 + 0x14);
    }
  }
  local_80 = &local_68;
  local_60 = &local_78;
  local_78 = (undefined8 *)&LAB_144326bb6;
  local_50 = &local_60;
  local_58 = FUN_144326b72;
  local_88 = param_1 + 0x14;
  local_70 = &local_88;
  FUN_14432674e(DAT_14cbe4090,&local_58,0);
  if ((local_68 != 0) && (*(longlong *)(local_68 + 0x28) != 0)) {
    lVar9 = FUN_14050fd64();
    local_78 = (undefined8 *)0x0;
    local_70 = (longlong **)((ulonglong)local_70 & 0xffffffff00000000);
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar6 = local_78;
    local_70 = (longlong **)CONCAT44(local_70._4_4_,3);
    *local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_78[2] = lVar10;
    *local_78 = &PTR_FUN_14b9aacf0;
    local_78[3] = 0;
    iVar12 = 0;
    if (param_1 != (longlong *)0x0) {
      uVar3 = *(uint *)((longlong)param_1 + 0xc);
      *(uint *)(local_78 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar12 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar12 = DAT_14c964868 + 1;
        UNLOCK();
        iVar13 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar12;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar12 = *(int *)(lVar7 + 0x10);
        bVar14 = iVar12 == 0;
        if (bVar14) {
          *(int *)(lVar7 + 0x10) = iVar13;
          iVar12 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar12 = iVar13;
        }
      }
    }
    *(int *)((longlong)puVar6 + 0x1c) = iVar12;
    puVar6[4] = FUN_14425920a;
    *(undefined4 *)(puVar6 + 5) = 0;
    local_98 = 0;
    local_a0 = 0;
    local_a8 = 0;
    local_90 = &local_88;
    FUN_140a1e0be(lVar9 + 0x1e8,&local_58,local_68 + 0x28,&local_78);
    pppuVar1 = local_50;
    if ((code **)(param_1 + 0x10) != &local_58) {
      param_1[0x10] = (longlong)local_58;
      local_58 = (code *)0x0;
      pppuVar4 = (undefined8 ***)param_1[0x11];
      if (local_50 != pppuVar4) {
        local_50 = (undefined8 ***)0x0;
        param_1[0x11] = (longlong)pppuVar1;
        if (pppuVar4 != (undefined8 ***)0x0) {
          LOCK();
          pppuVar1 = pppuVar4 + 1;
          *(int *)pppuVar1 = *(int *)pppuVar1 + -1;
          UNLOCK();
          if (*(int *)pppuVar1 == 0) {
            (*(code *)**pppuVar4)(pppuVar4);
            LOCK();
            piVar2 = (int *)((longlong)pppuVar4 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*pppuVar4)[2])(pppuVar4);
            }
          }
        }
      }
    }
    pppuVar1 = local_50;
    if (local_50 != (undefined8 ***)0x0) {
      LOCK();
      pppuVar4 = local_50 + 1;
      *(int *)pppuVar4 = *(int *)pppuVar4 + -1;
      UNLOCK();
      if (*(int *)pppuVar4 == 0) {
        (*(code *)**pppuVar1)(pppuVar1);
        LOCK();
        piVar2 = (int *)((longlong)pppuVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppuVar1)[2])(pppuVar1);
        }
      }
    }
    if ((int)local_70 != 0) {
      if (local_78 == (undefined8 *)0x0) goto LAB_144258e83;
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = (longlong **)((ulonglong)local_70 & 0xffffffff00000000);
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_144258e83:
  lVar9 = FUN_1402735c8();
  lVar10 = FUN_14050fd64();
  local_78 = (undefined8 *)0x0;
  local_70 = (longlong **)((ulonglong)local_70 & 0xffffffff00000000);
  FUN_1446efa72(&local_78,0,3,0x10);
  puVar6 = local_78;
  local_70 = (longlong **)CONCAT44(local_70._4_4_,3);
  *local_78 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  local_78[2] = lVar11;
  *local_78 = &PTR_FUN_14b9aacf0;
  local_78[3] = 0;
  iVar12 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_78 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar12 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar12 = *(int *)(lVar7 + 0x10);
      bVar14 = iVar12 == 0;
      if (bVar14) {
        *(int *)(lVar7 + 0x10) = iVar13;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar12 = iVar13;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x1c) = iVar12;
  puVar6[4] = FUN_148e28a9e;
  *(undefined4 *)(puVar6 + 5) = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_90 = &local_88;
  FUN_140a1e0be(lVar10 + 0x1e8,&local_58,lVar9 + 0x9c8,&local_78);
  pppuVar1 = local_50;
  if ((code **)(param_1 + 0xd) != &local_58) {
    param_1[0xd] = (longlong)local_58;
    local_58 = (code *)0x0;
    pppuVar4 = (undefined8 ***)param_1[0xe];
    if (local_50 != pppuVar4) {
      local_50 = (undefined8 ***)0x0;
      param_1[0xe] = (longlong)pppuVar1;
      if (pppuVar4 != (undefined8 ***)0x0) {
        LOCK();
        pppuVar1 = pppuVar4 + 1;
        *(int *)pppuVar1 = *(int *)pppuVar1 + -1;
        UNLOCK();
        if (*(int *)pppuVar1 == 0) {
          (*(code *)**pppuVar4)(pppuVar4);
          LOCK();
          piVar2 = (int *)((longlong)pppuVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pppuVar4)[2])(pppuVar4);
          }
        }
      }
    }
  }
  pppuVar1 = local_50;
  if (local_50 != (undefined8 ***)0x0) {
    LOCK();
    pppuVar4 = local_50 + 1;
    *(int *)pppuVar4 = *(int *)pppuVar4 + -1;
    UNLOCK();
    if (*(int *)pppuVar4 == 0) {
      (*(code *)**pppuVar1)(pppuVar1);
      LOCK();
      piVar2 = (int *)((longlong)pppuVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppuVar1)[2])(pppuVar1);
      }
    }
  }
  if ((int)local_70 != 0) {
    if (local_78 == (undefined8 *)0x0) goto LAB_144259050;
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = (longlong **)((ulonglong)local_70 & 0xffffffff00000000);
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144259050:
  pcVar5 = (code *)param_1[0xd];
  if (pcVar5 != (code *)0x0) {
    FUN_140bd4428(pcVar5,0,1);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425920a FUN_14425920a body=2051 status=ok
// SIG undefined FUN_14425920a(void)

void FUN_14425920a(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  wchar_t *local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  code *local_88;
  longlong *local_80;
  undefined1 *local_78;
  code **local_70;
  longlong local_68;
  undefined1 **local_60;
  code *local_58;
  undefined1 ***local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = (code *)(param_1 + 0xa0);
  local_80 = &local_68;
  local_60 = &local_78;
  local_78 = &LAB_144326bb6;
  local_50 = &local_60;
  local_58 = FUN_144326b72;
  local_70 = &local_88;
  FUN_14432674e(DAT_14cbe4090,&local_58,0);
  if (local_68 == 0) goto LAB_1442594bf;
  if ((((((*(int *)(local_68 + 0x24) == 0) || (uVar3 = *(uint *)(local_68 + 0x20), (int)uVar3 < 0))
        || (DAT_14c9647dc <= (int)uVar3)) ||
       ((plVar7 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(local_68 + 0x24))))) ||
      ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) || (lVar5 = *plVar7, lVar5 == 0)) {
    if (*(longlong *)(local_68 + 0x28) == 0) goto LAB_1442594bf;
    lVar5 = FUN_140007850();
    cVar1 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar1 == '\0')) {
      if (lVar5 == 0) {
        *(undefined8 *)(local_68 + 0x20) = 0;
        goto LAB_1442594bf;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
LAB_14425947d:
      *(uint *)(local_68 + 0x20) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar2 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar9 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar9);
        }
        LOCK();
        iVar2 = *(int *)(lVar4 + 0x10);
        bVar10 = iVar2 == 0;
        if (bVar10) {
          *(int *)(lVar4 + 0x10) = iVar9;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar2 = iVar9;
        }
      }
      *(int *)(local_68 + 0x24) = iVar2;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) goto LAB_14425947d;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) goto LAB_1442594bf;
  }
  if (DAT_14c949118 == 0) {
    local_88 = FUN_140631fbe;
    if (DAT_14c963f04 == '\0') {
      uVar6 = FUN_140011aa6();
      lVar4 = FUN_140011c0e(uVar6,0x250,8);
    }
    else {
      lVar4 = FUN_14001cc68(0x250,8);
    }
    DAT_14c949118 = lVar4;
    FUN_1446f470e(&local_78,L"Class",1);
    local_a8 = &LAB_146891e90;
    local_b0 = (code *)&LAB_146273097;
    local_c0 = L"Engine";
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
    local_c8 = 0x20;
    local_d0 = 0x10000000;
    local_d8._0_4_ = 8;
    local_a0 = &local_88;
    FUN_14574b4b2(lVar4);
    DAT_14c949118 = lVar4;
    if (DAT_14c951858 == 0) {
      local_58 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = (wchar_t *)0x400000000;
      local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
      local_d0 = 8;
      local_d8._0_4_ = 0x50;
      local_a0 = &local_58;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar8 = DAT_14c951858;
    lVar4 = DAT_14c949118;
    uVar6 = FUN_1449e2fb2();
    local_d8 = L"Class";
    FUN_14574b446(uVar6,lVar4,lVar8,L"/Script/CoreUObject");
  }
  if ((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
      (lVar4 = FUN_145a568e2(), lVar4 == 0)) ||
     ((*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
       lVar4 + 0x30)))) goto LAB_1442594bf;
  if ((((*(int *)(local_68 + 0x24) == 0) ||
       ((uVar3 = *(uint *)(local_68 + 0x20), (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)))) ||
      (plVar7 = (longlong *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
      plVar7 == (longlong *)0x0)) ||
     ((((int)plVar7[2] != *(int *)(local_68 + 0x24) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))
      || (lVar5 = *plVar7, lVar5 == 0)))) {
    if (*(longlong *)(local_68 + 0x28) != 0) {
      lVar5 = FUN_140007850();
      cVar1 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar1 == '\0')) {
        if (lVar5 != 0) {
          uVar3 = *(uint *)(lVar5 + 0xc);
          goto LAB_14425953a;
        }
        *(undefined8 *)(local_68 + 0x20) = 0;
      }
      else {
        uVar3 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
LAB_14425953a:
          *(uint *)(local_68 + 0x20) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          iVar2 = *(int *)(lVar4 + 0x10);
          if (*(int *)(lVar4 + 0x10) == 0) {
            LOCK();
            iVar2 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar10 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar2;
            if (bVar10) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar2 = *(int *)(lVar4 + 0x10);
            bVar10 = iVar2 == 0;
            if (bVar10) {
              *(int *)(lVar4 + 0x10) = iVar9;
              iVar2 = 0;
            }
            UNLOCK();
            if (bVar10) {
              iVar2 = iVar9;
            }
          }
          *(int *)(local_68 + 0x24) = iVar2;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_14425957c;
      }
    }
LAB_1442595d6:
    lVar8 = 0;
  }
  else {
LAB_14425957c:
    if (DAT_14c949118 == 0) {
      local_88 = FUN_140631fbe;
      if (DAT_14c963f04 == '\0') {
        uVar6 = FUN_140011aa6();
        lVar4 = FUN_140011c0e(uVar6,0x250,8);
      }
      else {
        lVar4 = FUN_14001cc68(0x250,8);
      }
      DAT_14c949118 = lVar4;
      FUN_1446f470e(&local_78,L"Class",1);
      local_a8 = &LAB_146891e90;
      local_b0 = (code *)&LAB_146273097;
      local_c0 = L"Engine";
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,199);
      local_c8 = 0x20;
      local_d0 = 0x10000000;
      local_d8._0_4_ = 8;
      local_a0 = &local_88;
      FUN_14574b4b2(lVar4);
      DAT_14c949118 = lVar4;
      if (DAT_14c951858 == 0) {
        local_58 = FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_1468c5283;
        local_b0 = FUN_142809da0;
        local_b8 = L"Engine";
        local_c0 = (wchar_t *)0x400000000;
        local_c8 = CONCAT44(local_c8._4_4_,0x10000000);
        local_d0 = 8;
        local_d8._0_4_ = 0x50;
        local_a0 = &local_58;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar8 = DAT_14c951858;
      lVar4 = DAT_14c949118;
      uVar6 = FUN_1449e2fb2();
      local_d8 = L"Class";
      FUN_14574b446(uVar6,lVar4,lVar8,L"/Script/CoreUObject");
    }
    if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14c949118 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) != DAT_14c949118 + 0x30)) ||
       ((lVar4 = FUN_145a568e2(), lVar4 == 0 || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38)))))
    goto LAB_1442595d6;
    lVar8 = 0;
    if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30) {
      lVar8 = lVar5;
    }
  }
  lVar4 = FUN_148e28c9c(param_1,lVar8);
  lVar5 = *(longlong *)(param_1 + 0x78);
  if (lVar4 != 0) {
    if (lVar5 != lVar4) {
      if ((lVar5 != 0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(lVar4);
      *(longlong *)(param_1 + 0x78) = lVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_f8);
  }
  if (lVar5 != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
LAB_1442594bf:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144259a3a FUN_144259a3a body=276 status=ok
// SIG undefined FUN_144259a3a(void)

void FUN_144259a3a(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)(param_1 + 0x125) = param_2;
  FUN_1449027d0(param_1,&local_38);
  lVar3 = local_38[0x50];
  AcquireSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
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
      }
    }
  }
  if (*(char *)(param_1 + 0x125) == '\x01') {
    iVar4 = FUN_1412fabe8(lVar3,&DAT_14cbd5ba0);
    if (iVar4 != -1) {
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    }
    if ((*(char *)(param_1 + 0x98) != '\x01') ||
       (iVar4 = FUN_1412fabe8(lVar3,&DAT_14cbd5bb0), iVar4 == -1)) goto LAB_144259b25;
  }
  else {
    local_38 = &DAT_14cbd5ba0;
    iVar4 = FUN_140c8411c(lVar3);
    if (0 < iVar4) {
      *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
    }
    local_38 = &DAT_14cbd5bb0;
    iVar4 = FUN_140c8411c(lVar3);
    if (iVar4 < 1) goto LAB_144259b25;
  }
  *(int *)(lVar3 + 0x10) = *(int *)(lVar3 + 0x10) + 1;
LAB_144259b25:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar3 + 0x20));
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144259b58 FUN_144259b58 body=676 status=ok
// SIG undefined FUN_144259b58(void)

void FUN_144259b58(longlong param_1,double *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(int *)(param_1 + 0xc4) == 0) || (uVar2 = *(uint *)(param_1 + 0xc0), (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0xc4))))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar6 = *plVar7, lVar6 == 0)))) {
    uVar5 = FUN_1400d7050(param_1 + 0x30);
    lVar6 = FUN_140ade8e4(uVar5);
    if (lVar6 == 0) goto LAB_144259d8b;
    lVar4 = FUN_140ade7fe();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        != lVar4 + 0x30)) goto LAB_144259d8b;
    uVar2 = *(uint *)(lVar6 + 0xc);
    *(uint *)(param_1 + 0xc0) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar3 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar3 = *(int *)(lVar4 + 0x10);
      bVar10 = iVar3 == 0;
      if (bVar10) {
        *(int *)(lVar4 + 0x10) = iVar8;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar3 = iVar8;
      }
    }
    *(int *)(param_1 + 0xc4) = iVar3;
  }
  if (*(char *)(param_1 + 300) == '\0') {
    FUN_1449027d0(param_1,&local_50);
    lVar4 = *(longlong *)(local_50 + 0x280);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
    *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_48 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    *(undefined1 *)(param_1 + 300) = 1;
    iVar3 = FUN_1412fabe8(lVar4,&DAT_14cbd5b80);
    if (iVar3 != -1) {
      *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
  }
  lVar4 = FUN_140495e96(param_1 + 0x30);
  if (lVar4 == 0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = *(undefined4 *)(lVar4 + 0x100);
  }
  dVar13 = ABS(*param_2);
  dVar11 = ABS(param_2[1]);
  dVar12 = *param_2;
  if (dVar13 <= dVar11) {
    dVar12 = param_2[1];
  }
  local_68 = *(undefined4 *)(param_1 + 0xe0);
  uStack_64 = *(undefined4 *)(param_1 + 0xe4);
  uStack_60 = *(undefined4 *)(param_1 + 0xe8);
  uStack_5c = *(undefined4 *)(param_1 + 0xec);
  local_78 = dVar11 < dVar13;
  FUN_148ef085e(lVar6,CONCAT44((int)((ulonglong)dVar12 >> 0x20),
                               -(float)dVar12 * *(float *)(param_1 + 0x80) *
                               *(float *)(param_1 + 0x114) * *(float *)(param_1 + 0x128)) ^
                      0x8000000000000000,&local_68,uVar9);
LAB_144259d8b:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144259dfd FUN_144259dfd body=48 status=ok
// SIG undefined FUN_144259dfd(void)

void FUN_144259dfd(void)

{
  if (DAT_14cbd6158 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbd6148 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144259e2d FUN_144259e2d body=48 status=ok
// SIG undefined FUN_144259e2d(void)

void FUN_144259e2d(void)

{
  if (DAT_14cbd6180 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cbd6170 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144259e6e FUN_144259e6e body=8356 status=ok
// SIG undefined FUN_144259e6e(void)

void FUN_144259e6e(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  void *pvVar3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  char cVar9;
  undefined1 uVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong *plVar23;
  char **ppcVar24;
  longlong lVar25;
  undefined4 *puVar26;
  longlong lVar27;
  int *piVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  longlong *plVar32;
  ulonglong uVar33;
  int *piVar34;
  uint uVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  float fVar39;
  undefined1 auStack_538 [32];
  undefined1 local_518;
  longlong *local_508;
  char **local_500;
  longlong *local_4f8;
  longlong local_4f0;
  undefined4 *local_4e8;
  undefined4 *local_4e0;
  longlong *local_4d8;
  longlong *local_4d0;
  longlong *local_4c8;
  PSRWLOCK local_4c0;
  longlong local_4b8 [2];
  longlong local_4a8;
  undefined8 uStack_4a0;
  undefined **local_498;
  undefined *local_490;
  longlong local_488;
  ulonglong uStack_480;
  longlong *local_478;
  int local_470;
  undefined4 local_46c;
  longlong *local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined8 *local_440;
  undefined8 uStack_438;
  undefined1 local_428 [72];
  longlong local_3e0;
  uint local_3d8;
  uint local_3d4;
  char *local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  void *pvStack_360;
  ulonglong uStack_358;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_538;
  FUN_1400b22c2(&local_378,&DAT_149e02088);
  if ((char **)(param_1 + 0x140) == &local_378) {
    if (local_378 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x140) != 0) {
      FUN_1400020a8();
    }
    *(char **)(param_1 + 0x140) = local_378;
    local_378 = (char *)0x0;
    *(int *)(param_1 + 0x148) = (int)uStack_370;
    *(undefined4 *)(param_1 + 0x14c) = uStack_370._4_4_;
  }
  FUN_1449027d0(param_1,&local_378);
  plVar15 = *(longlong **)(local_378 + 0x4d0);
  local_4c0 = (PSRWLOCK)(plVar15 + 0x2d);
  AcquireSRWLockExclusive(local_4c0);
  plVar17 = uStack_370;
  *(int *)(plVar15 + 0x2c) = (int)plVar15[0x2c] + 1;
  if (uStack_370 != (longlong *)0x0) {
    LOCK();
    plVar23 = uStack_370 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*uStack_370)(uStack_370);
      LOCK();
      piVar28 = (int *)((longlong)plVar17 + 0xc);
      *piVar28 = *piVar28 + -1;
      UNLOCK();
      if (*piVar28 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  iVar38 = *(int *)((longlong)plVar15 + 0xc);
  FUN_145da38cf(*plVar15);
  *(undefined4 *)(plVar15 + 1) = 0;
  if ((iVar38 < 0) && (*(int *)((longlong)plVar15 + 0xc) != 0)) {
    FUN_148e36114(plVar15);
  }
  lVar16 = DAT_14cb84940;
  if (plVar15[0x10] == 0) goto LAB_144259fe3;
  if ((longlong)(int)plVar15[0x13] != 0) {
    lVar27 = 0;
    do {
      if (*(longlong *)(plVar15[0x12] + lVar27) == 0) goto LAB_144259fe3;
      lVar27 = lVar27 + 8;
    } while ((longlong)(int)plVar15[0x13] * 8 != lVar27);
  }
  plVar17 = plVar15 + 0x10;
  if ((plVar17 == (longlong *)0x0) || (DAT_14cb84940 == 0)) goto LAB_144259fe3;
  local_468 = (longlong *)0x0;
  uStack_460 = 0;
  local_478 = (longlong *)0x0;
  local_470 = (int)plVar15[0x15];
  lVar27 = (longlong)local_470;
  pvVar3 = (void *)plVar15[0x14];
  local_4c8 = plVar15;
  if (lVar27 == 0) {
    local_46c = 0;
  }
  else {
    FUN_1487630d4(&local_478,local_470,0);
    memcpy(local_478,pvVar3,lVar27 << 3);
  }
  FUN_140265f12();
  local_490 = &DAT_14cb83310;
  local_488 = 0;
  uStack_480 = 0;
  local_498 = &PTR_FUN_14b1828b0;
  FUN_140f0c707(plVar17,&local_498);
  local_518 = 0;
  FUN_145903dca(lVar16,plVar17,&local_498,&local_468);
  local_500 = (char **)FUN_1400d7050((undefined4 *)(param_1 + 0x30));
  plVar15 = local_4c8;
  iVar38 = *(int *)((longlong)local_4c8 + 0xc);
  FUN_145da38cf(*local_4c8);
  *(undefined4 *)(plVar15 + 1) = 0;
  if ((iVar38 < 0) && (*(int *)((longlong)plVar15 + 0xc) != 0)) {
    FUN_148e36114(plVar15);
  }
  local_4e0 = (undefined4 *)(param_1 + 0x30);
  memset(local_428,0,0xb0);
  FUN_1465f2b94(local_428);
  local_378 = (char *)0x0;
  uStack_370 = (longlong *)0x0;
  local_368 = (ulonglong)local_368._4_4_ << 0x20;
  pvStack_360 = (void *)0x0;
  uStack_358 = 0;
  FUN_1446ddda2(&local_378,"UIDisplayData_WeaponSkin",0);
  FUN_140ac6a88(&local_378,local_428);
  if (pvStack_360 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  local_440 = (undefined8 *)0x0;
  uStack_438 = 0;
  local_378 = "weaponcustomization";
  uStack_370 = (longlong *)CONCAT35(uStack_370._5_3_,0x13);
  uVar12 = FUN_14001a6c0(&local_378,1);
  FUN_1402b5374(&local_458,0,uVar12);
  if ((int)uStack_460 != 0) {
    puVar14 = (undefined4 *)FUN_14001cc68(0x120,0x10);
    *puVar14 = 0x1000000;
    FUN_1400b22c2(puVar14 + 2,&DAT_149e02088);
    FUN_1400b22c2(puVar14 + 6,&DAT_149e02088);
    FUN_1400b22c2(puVar14 + 10,&DAT_149e02088);
    *(undefined1 *)(puVar14 + 0x12) = 0;
    FUN_1400b22c2(puVar14 + 0x14,&DAT_149e02088);
    puVar14[0x32] = 0;
    *(undefined8 *)(puVar14 + 0x24) = 0;
    *(undefined8 *)(puVar14 + 0x26) = 0;
    *(undefined8 *)(puVar14 + 0x2a) = 0;
    *(undefined8 *)(puVar14 + 0x2c) = 0;
    *(undefined8 *)(puVar14 + 0x2d) = 0;
    *(undefined8 *)(puVar14 + 0x2f) = 0;
    *(undefined8 *)(puVar14 + 0x34) = 0;
    *(undefined8 *)(puVar14 + 0x36) = 0;
    puVar14[0x38] = 0;
    *(undefined8 *)(puVar14 + 0x3a) = 0;
    *(undefined8 *)(puVar14 + 0x3c) = 0;
    *(undefined8 *)(puVar14 + 0x18) = 0;
    *(undefined8 *)(puVar14 + 0x1a) = 0;
    *(undefined8 *)(puVar14 + 0x1c) = 0;
    *(undefined8 *)(puVar14 + 0x1e) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x79) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x81) = 0;
    FUN_1400b22c2(puVar14 + 0x3e,&DAT_149e02088);
    *(undefined2 *)(puVar14 + 0x42) = 0;
    *(undefined8 *)(puVar14 + 0x44) = 0;
    *(undefined8 *)(puVar14 + 0x46) = 0;
    plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar15[1] = (longlong)&DAT_100000001;
    *plVar15 = (longlong)&PTR_FUN_14b9ab580;
    plVar15[2] = (longlong)puVar14;
    lVar16 = FUN_14001cc68(0x20,0x10);
    FUN_148e29a80(lVar16,0);
    plVar17 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar17[1] = (longlong)&DAT_100000001;
    *plVar17 = (longlong)&PTR_FUN_14b9ab600;
    plVar17[2] = lVar16;
    *(undefined1 *)(puVar14 + 0x42) = 4;
    *(bool *)puVar14 = local_470 == 0;
    local_368 = local_368 & 0xffffffff00000000;
    local_378 = (char *)0x0;
    uStack_370 = (longlong *)0x0;
    pvStack_360 = (void *)0x0;
    uStack_358 = 0;
    FUN_1446ddda2(&local_378,"StandInScene_Thumbnail_Player",0);
    if (DAT_14cb80e90 != 0) {
      FUN_144837462(DAT_14cb80e90,&local_378);
    }
    if (pvStack_360 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_378 = (char *)0x0;
    uStack_370 = (longlong *)0x0;
    local_368 = local_368 & 0xffffffff00000000;
    pvStack_360 = (void *)0x0;
    uStack_358 = 0;
    FUN_1446ddda2(&local_378,"UIDisplayData_DefaultWeapon",0);
    lVar27 = FUN_148e292e2(&local_378);
    if (pvStack_360 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (lVar27 == 0) {
      FUN_1400b22c2(&local_378,"Default Entry Not Found");
    }
    else {
      plVar23 = *(longlong **)(lVar27 + 0x18);
      if (*(code **)(*plVar23 + 0x50) != FUN_144828418) {
        plVar23 = (longlong *)(**(code **)(*plVar23 + 0x50))();
      }
      FUN_1447a1fc0(plVar23);
      plVar23 = *(longlong **)(lVar27 + 0x18);
      pcVar5 = *(code **)(*plVar23 + 0x28);
      if (pcVar5 == FUN_14482841c) {
        plVar22 = plVar23 + 3;
        if (plVar23[5] != 0) {
          plVar22 = (longlong *)(plVar23[5] + 8);
        }
      }
      else if (pcVar5 == (code *)&LAB_14010c34c) {
        plVar22 = plVar23 + 2;
      }
      else {
        plVar22 = (longlong *)(*pcVar5)(plVar23);
      }
      local_378 = (char *)0x0;
      uVar13 = *(uint *)(plVar22 + 1);
      pvVar3 = (void *)*plVar22;
      uStack_370 = (longlong *)CONCAT44(uStack_370._4_4_,uVar13);
      if ((longlong)(int)uVar13 == 0) {
        uStack_370 = (longlong *)(ulonglong)uVar13;
      }
      else {
        FUN_1446dd670(&local_378,uVar13,0);
        memcpy(local_378,pvVar3,(longlong)(int)uVar13 * 2);
      }
    }
    iVar38 = (int)uStack_370 + -1;
    if ((int)uStack_370 == 0) {
      iVar38 = 0;
    }
    FUN_1402980a2(puVar14 + 2,local_378,iVar38);
    if (local_378 != (char *)0x0) {
      FUN_1400020a8();
    }
    if (lVar27 == 0) {
      local_368 = 0;
      pvStack_360 = (void *)0x0;
      local_378 = (char *)0x0;
      uStack_370 = (longlong *)0x0;
      uStack_358 = 0;
      iVar38 = 0;
    }
    else {
      local_378 = *(char **)(lVar27 + 0x28);
      uStack_370 = *(longlong **)(lVar27 + 0x30);
      local_368 = *(ulonglong *)(lVar27 + 0x38);
      pvStack_360 = (void *)0x0;
      uVar13 = *(uint *)(lVar27 + 0x48);
      pvVar3 = *(void **)(lVar27 + 0x40);
      uStack_358 = CONCAT44(uStack_358._4_4_,uVar13);
      if ((longlong)(int)uVar13 == 0) {
        uStack_358 = (ulonglong)uVar13;
        iVar38 = 0;
      }
      else {
        FUN_1446dd670(&pvStack_360,uVar13,0);
        memcpy(pvStack_360,pvVar3,(longlong)(int)uVar13 * 2);
        iVar38 = (int)uStack_358;
      }
    }
    pvVar3 = pvStack_360;
    *(char **)(puVar14 + 0x18) = local_378;
    puVar14[0x1a] = (int)uStack_370;
    puVar14[0x1b] = uStack_370._4_4_;
    puVar14[0x1c] = (undefined4)local_368;
    puVar14[0x1d] = local_368._4_4_;
    puVar14[0x20] = iVar38;
    if (iVar38 == 0 && puVar14[0x21] == 0) {
      puVar14[0x21] = 0;
    }
    else {
      FUN_1446dd670(puVar14 + 0x1e,iVar38);
      if (iVar38 != 0) {
        memcpy(*(void **)(puVar14 + 0x1e),pvVar3,(longlong)iVar38 * 2);
      }
    }
    if (pvStack_360 != (void *)0x0) {
      FUN_1400020a8();
    }
    *(undefined2 *)((longlong)puVar14 + 2) = 0x101;
    if (plVar17 == (longlong *)0x0) {
      *(longlong *)(puVar14 + 0x44) = lVar16;
      plVar23 = *(longlong **)(puVar14 + 0x46);
      if (plVar23 != (longlong *)0x0) {
        *(undefined8 *)(puVar14 + 0x46) = 0;
LAB_14425a650:
        LOCK();
        plVar22 = plVar23 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar28 = (int *)((longlong)plVar23 + 0xc);
          *piVar28 = *piVar28 + -1;
          iVar38 = *piVar28;
          UNLOCK();
joined_r0x00014425a640:
          if (iVar38 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
      UNLOCK();
      *(longlong *)(puVar14 + 0x44) = lVar16;
      plVar23 = *(longlong **)(puVar14 + 0x46);
      if (plVar17 == plVar23) {
        LOCK();
        plVar23 = plVar17 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar28 = (int *)((longlong)plVar17 + 0xc);
          *piVar28 = *piVar28 + -1;
          iVar38 = *piVar28;
          UNLOCK();
          plVar23 = plVar17;
          goto joined_r0x00014425a640;
        }
      }
      else {
        *(longlong **)(puVar14 + 0x46) = plVar17;
        if (plVar23 != (longlong *)0x0) goto LAB_14425a650;
      }
    }
    uVar13 = local_3d8;
    lVar16 = (longlong)(int)local_3d8;
    local_3d8 = local_3d8 + 1;
    if (local_3d4 < local_3d8) {
      FUN_14663d3b6(&local_3e0,uVar13);
    }
    *(undefined4 **)(local_3e0 + lVar16 * 0x10) = puVar14;
    *(longlong **)(local_3e0 + 8 + lVar16 * 0x10) = plVar15;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
    }
    if (*(char *)((longlong)puVar14 + 2) == '\x01') {
      puVar14[0x32] = puVar14[0x32] + -1000;
    }
    if (plVar17 != (longlong *)0x0) {
      LOCK();
      plVar23 = plVar17 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar17)(plVar17);
        LOCK();
        piVar28 = (int *)((longlong)plVar17 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      plVar17 = plVar15 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar28 = (int *)((longlong)plVar15 + 0xc);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if (*piVar28 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    if ((longlong)(int)uStack_460 != 0) {
      plVar15 = local_468 + (int)uStack_460;
      plVar17 = local_468;
      local_4d8 = plVar15;
      do {
        lVar16 = *plVar17;
        if (lVar16 != 0) {
          puVar14 = (undefined4 *)FUN_14001cc68(0x120,0x10);
          *puVar14 = 0x1000000;
          FUN_1400b22c2(puVar14 + 2,&DAT_149e02088);
          local_4d0 = (longlong *)(puVar14 + 6);
          FUN_1400b22c2(local_4d0,&DAT_149e02088);
          FUN_1400b22c2(puVar14 + 10,&DAT_149e02088);
          *(undefined1 *)(puVar14 + 0x12) = 0;
          FUN_1400b22c2(puVar14 + 0x14,&DAT_149e02088);
          puVar14[0x32] = 0;
          *(undefined8 *)(puVar14 + 0x24) = 0;
          *(undefined8 *)(puVar14 + 0x26) = 0;
          *(undefined8 *)(puVar14 + 0x2a) = 0;
          *(undefined8 *)(puVar14 + 0x2c) = 0;
          *(undefined8 *)(puVar14 + 0x2d) = 0;
          *(undefined8 *)(puVar14 + 0x2f) = 0;
          *(undefined8 *)(puVar14 + 0x34) = 0;
          *(undefined8 *)(puVar14 + 0x36) = 0;
          puVar14[0x38] = 0;
          *(undefined8 *)(puVar14 + 0x3a) = 0;
          *(undefined8 *)(puVar14 + 0x3c) = 0;
          *(undefined8 *)(puVar14 + 0x18) = 0;
          *(undefined8 *)(puVar14 + 0x1a) = 0;
          *(undefined8 *)(puVar14 + 0x1c) = 0;
          *(undefined8 *)(puVar14 + 0x1e) = 0;
          *(undefined8 *)((longlong)puVar14 + 0x79) = 0;
          *(undefined8 *)((longlong)puVar14 + 0x81) = 0;
          FUN_1400b22c2(puVar14 + 0x3e,&DAT_149e02088);
          *(undefined2 *)(puVar14 + 0x42) = 0;
          *(undefined8 *)(puVar14 + 0x44) = 0;
          *(undefined8 *)(puVar14 + 0x46) = 0;
          plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
          plVar15[1] = (longlong)&DAT_100000001;
          *plVar15 = (longlong)&PTR_FUN_14b9ab580;
          plVar15[2] = (longlong)puVar14;
          lVar27 = FUN_14001cc68(0x20,0x10);
          FUN_148e29a80(lVar27,lVar16);
          local_508 = (longlong *)FUN_14001cc68(0x18,0x10);
          local_508[1] = (longlong)&DAT_100000001;
          *local_508 = (longlong)&PTR_FUN_14b9ab600;
          local_508[2] = lVar27;
          *(undefined1 *)(puVar14 + 0x42) = 4;
          if ((longlong)local_470 != 0) {
            piVar28 = *(int **)(lVar16 + 8);
            if (piVar28 == (int *)0x0) {
              piVar28 = &DAT_14c9485f0;
            }
            lVar25 = (longlong)local_470 << 3;
            plVar23 = local_478;
            do {
              piVar34 = *(int **)(*plVar23 + 8);
              if (piVar34 == (int *)0x0) {
                piVar34 = &DAT_14c9485f0;
              }
              if (*piVar34 == *piVar28) goto LAB_14425b221;
              plVar23 = plVar23 + 1;
              lVar25 = lVar25 + -8;
            } while (lVar25 != 0);
          }
          plVar23 = (longlong *)0x0;
LAB_14425b221:
          *(bool *)puVar14 = plVar23 != (longlong *)0x0;
          lVar25 = *(longlong *)(lVar16 + 0x40);
          local_4f0 = lVar27;
          if (lVar25 == 0) {
            uVar20 = FUN_1406ef318();
            lVar25 = FUN_14477b664(uVar20);
            *(longlong *)(lVar16 + 0x40) = lVar25;
          }
          plVar23 = (longlong *)(lVar16 + 0x38);
          lVar27 = *(longlong *)(lVar16 + 0x48);
          local_4f8 = plVar15;
          if (lVar27 == 0) {
            if ((lVar25 != 0) && (*plVar23 != 0)) {
              plVar15 = *(longlong **)(lVar25 + 0xb8);
              if ((plVar15 == (longlong *)0x0) ||
                 (cVar9 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar9 == '\0')) {
                *(undefined8 *)(lVar16 + 0x48) = 0;
              }
              else {
                uVar20 = (**(code **)(*plVar15 + 0x110))(plVar15);
                lVar27 = FUN_144aff482(uVar20,plVar23);
                *(longlong *)(lVar16 + 0x48) = lVar27;
                if (lVar27 != 0) {
                  lVar25 = *(longlong *)(lVar16 + 0x40);
                  goto LAB_14425b25e;
                }
              }
            }
          }
          else {
LAB_14425b25e:
            if (lVar25 == 0) {
              uVar20 = FUN_1406ef318();
              lVar25 = FUN_14477b664(uVar20);
              *(longlong *)(lVar16 + 0x40) = lVar25;
              lVar27 = *(longlong *)(lVar16 + 0x48);
              if (lVar27 == 0) {
                if (lVar25 == 0) {
                  lVar27 = 0;
                }
                else {
                  lVar27 = 0;
                  if (*plVar23 != 0) {
                    plVar15 = *(longlong **)(lVar25 + 0xb8);
                    if ((plVar15 == (longlong *)0x0) ||
                       (cVar9 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar9 == '\0')) {
                      lVar27 = 0;
                    }
                    else {
                      uVar20 = (**(code **)(*plVar15 + 0x110))(plVar15);
                      lVar27 = FUN_144aff482(uVar20,plVar23);
                    }
                    *(longlong *)(lVar16 + 0x48) = lVar27;
                  }
                }
              }
            }
            piVar28 = *(int **)(lVar27 + 8);
            if (piVar28 == (int *)0x0) {
              piVar28 = &DAT_14c9485f0;
            }
            if (((*piVar28 != 0) && (piVar28[1] != 0)) && (*piVar28 != DAT_14c948000)) {
              local_4e8 = puVar14 + 0x34;
              uVar33 = 1;
              lVar27 = 0;
              while( true ) {
                lVar25 = *(longlong *)(lVar16 + 0x40);
                if (lVar25 == 0) {
                  uVar20 = FUN_1406ef318();
                  lVar25 = FUN_14477b664(uVar20);
                  *(longlong *)(lVar16 + 0x40) = lVar25;
                }
                lVar21 = *(longlong *)(lVar16 + 0x48);
                if (lVar21 == 0) {
                  if (lVar25 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = 0;
                    if (*plVar23 != 0) {
                      plVar15 = *(longlong **)(lVar25 + 0xb8);
                      if ((plVar15 == (longlong *)0x0) ||
                         (cVar9 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar9 == '\0')) {
                        lVar21 = 0;
                      }
                      else {
                        uVar20 = (**(code **)(*plVar15 + 0x110))(plVar15);
                        lVar21 = FUN_144aff482(uVar20,plVar23);
                      }
                      *(longlong *)(lVar16 + 0x48) = lVar21;
                    }
                  }
                }
                puVar26 = &DAT_14c9485f0;
                if (*(undefined4 **)(lVar21 + 8) != (undefined4 *)0x0) {
                  puVar26 = *(undefined4 **)(lVar21 + 8);
                }
                if ((longlong)(int)puVar26[1] < (longlong)uVar33) break;
                lVar25 = *(longlong *)(lVar16 + 0x40);
                if (lVar25 == 0) {
                  uVar20 = FUN_1406ef318();
                  lVar25 = FUN_14477b664(uVar20);
                  *(longlong *)(lVar16 + 0x40) = lVar25;
                  lVar21 = *(longlong *)(lVar16 + 0x48);
                }
                if (lVar21 == 0) {
                  if (lVar25 == 0) {
                    lVar21 = 0;
                  }
                  else {
                    lVar21 = 0;
                    if (*plVar23 != 0) {
                      plVar15 = *(longlong **)(lVar25 + 0xb8);
                      if ((plVar15 == (longlong *)0x0) ||
                         (cVar9 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar9 == '\0')) {
                        lVar21 = 0;
                      }
                      else {
                        uVar20 = (**(code **)(*plVar15 + 0x110))(plVar15);
                        lVar21 = FUN_144aff482(uVar20,plVar23);
                      }
                      *(longlong *)(lVar16 + 0x48) = lVar21;
                    }
                  }
                }
                piVar28 = &DAT_14c9485f0;
                if (*(int **)(lVar21 + 8) != (int *)0x0) {
                  piVar28 = *(int **)(lVar21 + 8);
                }
                if (*piVar28 == 0) {
LAB_14425b527:
                  uStack_370 = (longlong *)CONCAT44(uStack_370._4_4_,DAT_14c948620);
                  local_378 = DAT_14c948618;
                }
                else {
                  iVar38 = piVar28[1];
                  if (((longlong)iVar38 == 0) || (*piVar28 == DAT_14c948000)) goto LAB_14425b527;
                  if ((iVar38 < 2) && (piVar28[9] < 1)) {
                    plVar15 = (longlong *)(piVar28 + 2);
                  }
                  else {
                    plVar15 = *(longlong **)(piVar28 + 6);
                  }
                  if ((uVar33 < 2) || (iVar38 != 1)) {
                    if ((longlong)iVar38 < (longlong)uVar33) goto LAB_14425b527;
                    uStack_370 = (longlong *)
                                 CONCAT44(uStack_370._4_4_,
                                          *(undefined4 *)((longlong)plVar15 + lVar27 + 8));
                    local_378 = *(char **)((longlong)plVar15 + lVar27);
                  }
                  else {
                    uStack_370 = (longlong *)CONCAT44(uStack_370._4_4_,(int)plVar15[1]);
                    local_378 = (char *)*plVar15;
                  }
                }
                FUN_144928d62(&local_458,uVar33 & 0xffffffff,&local_378);
                uVar33 = uVar33 + 1;
                lVar27 = lVar27 + 0xc;
              }
              FUN_1447715ec(local_4e8,&local_458);
              puVar29 = &uStack_450;
              if (1 < local_458._4_4_) {
                puVar29 = local_440;
              }
              if (0 < uStack_438._4_4_) {
                puVar29 = local_440;
              }
              FUN_1408226d0((longlong)puVar29 + (longlong)(local_458._4_4_ + -1) * 0xc,&local_378,1)
              ;
              pcVar4 = local_378;
              iVar38 = (int)uStack_370;
              uVar13 = (int)uStack_370 - 1;
              if ((int)uStack_370 == 0) {
                uVar13 = 0;
              }
              if (0 < (int)uVar13) {
                uVar33 = 0;
                do {
                  *(ushort *)(local_378 + uVar33 * 2) =
                       (ushort)(*(ushort *)(local_378 + uVar33 * 2) - 0x41 < 0x1a) * 0x20 +
                       *(ushort *)(local_378 + uVar33 * 2);
                  uVar33 = uVar33 + 1;
                } while (uVar13 != uVar33);
              }
              uVar12 = uStack_370._4_4_;
              local_378 = (char *)0x0;
              uStack_370 = (longlong *)0x0;
              if (*(longlong *)(puVar14 + 0x3e) == 0) {
                *(char **)(puVar14 + 0x3e) = pcVar4;
                puVar14[0x40] = iVar38;
                puVar14[0x41] = uVar12;
              }
              else {
                FUN_1400020a8();
                *(char **)(puVar14 + 0x3e) = pcVar4;
                puVar14[0x40] = iVar38;
                puVar14[0x41] = uVar12;
                if (local_378 != (char *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
          }
          plVar15 = *(longlong **)(lVar16 + 0xd0);
          if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
            plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
          }
          FUN_1447a1fc0(plVar15);
          plVar15 = *(longlong **)(lVar16 + 0xd0);
          pcVar5 = *(code **)(*plVar15 + 0x28);
          if (pcVar5 == FUN_14482841c) {
            plVar22 = plVar15 + 3;
            if (plVar15[5] != 0) {
              plVar22 = (longlong *)(plVar15[5] + 8);
            }
          }
          else if (pcVar5 == (code *)&LAB_14010c34c) {
            plVar22 = plVar15 + 2;
          }
          else {
            plVar22 = (longlong *)(*pcVar5)(plVar15);
          }
          local_78 = (void *)0x0;
          uVar13 = *(uint *)(plVar22 + 1);
          pvVar3 = (void *)*plVar22;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar13);
          if ((longlong)(int)uVar13 == 0) {
            uStack_70 = (ulonglong)uVar13;
LAB_14425b781:
            puVar26 = *(undefined4 **)(lVar16 + 8);
            if (puVar26 == (undefined4 *)0x0) {
              puVar26 = &DAT_14c9485f0;
            }
            local_4a8 = 0;
            uStack_4a0 = 0;
            bVar6 = true;
            FUN_1400b2348(puVar26,&local_4a8,1);
            FUN_1400b22c2(local_4b8,"DESIGNER: SET NAME OF: ");
            FUN_1401c7f3e(&local_378,local_4b8,&local_4a8);
          }
          else {
            FUN_1446dd670(&local_78,uVar13,0);
            memcpy(local_78,pvVar3,(longlong)(int)uVar13 * 2);
            pvVar3 = local_78;
            uVar33 = uStack_70 & 0xffffffff;
            if ((int)uStack_70 < 2) goto LAB_14425b781;
            local_378 = (char *)0x0;
            uStack_370 = (longlong *)CONCAT44(uStack_370._4_4_,(int)uStack_70);
            bVar6 = false;
            FUN_1446dd670(&local_378,uVar33,0);
            memcpy(local_378,pvVar3,uVar33 * 2);
          }
          if (*(longlong *)(puVar14 + 2) != 0) {
            FUN_1400020a8();
          }
          plVar22 = local_4f8;
          *(char **)(puVar14 + 2) = local_378;
          local_378 = (char *)0x0;
          puVar14[4] = (int)uStack_370;
          puVar14[5] = uStack_370._4_4_;
          uStack_370 = (longlong *)0x0;
          if (bVar6) {
            if (local_4b8[0] != 0) {
              FUN_1400020a8();
            }
            if (local_4a8 != 0) {
              FUN_1400020a8();
            }
          }
          lVar27 = *(longlong *)(lVar16 + 0x40);
          if (lVar27 == 0) {
            uVar20 = FUN_1406ef318();
            lVar27 = FUN_14477b664(uVar20);
            *(longlong *)(lVar16 + 0x40) = lVar27;
          }
          lVar25 = *(longlong *)(lVar16 + 0x48);
          if (lVar25 == 0) {
            if ((lVar27 != 0) && (*plVar23 != 0)) {
              plVar15 = *(longlong **)(lVar27 + 0xb8);
              if ((plVar15 == (longlong *)0x0) ||
                 (cVar9 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar9 == '\0')) {
                *(undefined8 *)(lVar16 + 0x48) = 0;
              }
              else {
                uVar20 = (**(code **)(*plVar15 + 0x110))(plVar15);
                lVar25 = FUN_144aff482(uVar20,plVar23);
                *(longlong *)(lVar16 + 0x48) = lVar25;
                if (lVar25 != 0) {
                  lVar27 = *(longlong *)(lVar16 + 0x40);
                  goto LAB_14425b86d;
                }
              }
            }
            *(undefined1 *)((longlong)puVar14 + 2) = 1;
            uVar10 = 1;
          }
          else {
LAB_14425b86d:
            if (lVar27 == 0) {
              uVar20 = FUN_1406ef318(lVar25);
              lVar27 = FUN_14477b664(uVar20);
              *(longlong *)(lVar16 + 0x40) = lVar27;
              lVar25 = *(longlong *)(lVar16 + 0x48);
              if (lVar25 == 0) {
                if (lVar27 == 0) {
                  lVar25 = 0;
                }
                else {
                  lVar25 = 0;
                  if (*plVar23 != 0) {
                    plVar15 = *(longlong **)(lVar27 + 0xb8);
                    if ((plVar15 == (longlong *)0x0) ||
                       (cVar9 = (**(code **)(*plVar15 + 0x108))(), cVar9 == '\0')) {
                      lVar25 = 0;
                    }
                    else {
                      uVar20 = (**(code **)(*plVar15 + 0x110))(plVar15);
                      lVar25 = FUN_144aff482(uVar20,plVar23);
                    }
                    *(longlong *)(lVar16 + 0x48) = lVar25;
                  }
                }
              }
            }
            cVar9 = FUN_1409500c0(lVar25,local_500);
            *(char *)((longlong)puVar14 + 2) = cVar9;
            uVar10 = 1;
            if (cVar9 == '\0') {
              uVar10 = FUN_1488cb54e(lVar16);
            }
          }
          *(undefined1 *)((longlong)puVar14 + 3) = uVar10;
          local_378 = *(char **)(lVar16 + 0xe0);
          uStack_370 = *(longlong **)(lVar16 + 0xe8);
          local_368 = *(ulonglong *)(lVar16 + 0xf0);
          pvStack_360 = (void *)0x0;
          uVar13 = *(uint *)(lVar16 + 0x100);
          pvVar3 = *(void **)(lVar16 + 0xf8);
          uStack_358 = CONCAT44(uStack_358._4_4_,uVar13);
          if ((longlong)(int)uVar13 == 0) {
            uStack_358 = (ulonglong)uVar13;
            iVar38 = 0;
          }
          else {
            FUN_1446dd670(&pvStack_360,uVar13,0);
            memcpy(pvStack_360,pvVar3,(longlong)(int)uVar13 * 2);
            iVar38 = (int)uStack_358;
          }
          pvVar3 = pvStack_360;
          *(char **)(puVar14 + 0x18) = local_378;
          puVar14[0x1a] = (int)uStack_370;
          puVar14[0x1b] = uStack_370._4_4_;
          puVar14[0x1c] = (undefined4)local_368;
          puVar14[0x1d] = local_368._4_4_;
          puVar14[0x20] = iVar38;
          if (puVar14[0x21] == 0 && iVar38 == 0) {
            puVar14[0x21] = 0;
          }
          else {
            FUN_1446dd670(puVar14 + 0x1e,iVar38);
            if (iVar38 != 0) {
              memcpy(*(void **)(puVar14 + 0x1e),pvVar3,(longlong)iVar38 * 2);
            }
          }
          if (pvStack_360 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_508 == (longlong *)0x0) {
            *(longlong *)(puVar14 + 0x44) = local_4f0;
            plVar15 = *(longlong **)(puVar14 + 0x46);
            if (plVar15 != (longlong *)0x0) {
              *(undefined8 *)(puVar14 + 0x46) = 0;
LAB_14425bb26:
              LOCK();
              plVar19 = plVar15 + 1;
              *(int *)plVar19 = (int)*plVar19 + -1;
              UNLOCK();
              if ((int)*plVar19 == 0) {
                (**(code **)*plVar15)(plVar15);
LAB_14425bb4d:
                LOCK();
                piVar28 = (int *)((longlong)plVar15 + 0xc);
                *piVar28 = *piVar28 + -1;
                UNLOCK();
                if (*piVar28 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(local_508 + 1) = (int)local_508[1] + 1;
            UNLOCK();
            *(longlong *)(puVar14 + 0x44) = local_4f0;
            plVar15 = *(longlong **)(puVar14 + 0x46);
            if (local_508 == plVar15) {
              LOCK();
              plVar15 = local_508 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_508)(local_508);
                plVar15 = local_508;
                goto LAB_14425bb4d;
              }
            }
            else {
              *(longlong **)(puVar14 + 0x46) = local_508;
              if (plVar15 != (longlong *)0x0) goto LAB_14425bb26;
            }
          }
          uVar13 = local_3d8;
          puVar14[0x32] = *(undefined4 *)(lVar16 + 0x108);
          lVar27 = (longlong)(int)local_3d8;
          local_3d8 = local_3d8 + 1;
          if (local_3d4 < local_3d8) {
            FUN_14663d3b6(&local_3e0,uVar13);
          }
          *(undefined4 **)(local_3e0 + lVar27 * 0x10) = puVar14;
          *(longlong **)(local_3e0 + 8 + lVar27 * 0x10) = plVar22;
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
            UNLOCK();
          }
          if (*(char *)((longlong)puVar14 + 2) == '\0') {
            lVar27 = *(longlong *)(lVar16 + 0x40);
            if (lVar27 == 0) {
              uVar20 = FUN_1406ef318();
              lVar27 = FUN_14477b664(uVar20);
              *(longlong *)(lVar16 + 0x40) = lVar27;
            }
            lVar25 = *(longlong *)(lVar16 + 0x48);
            if (lVar25 == 0) {
              if ((lVar27 != 0) && (*plVar23 != 0)) {
                plVar15 = *(longlong **)(lVar27 + 0xb8);
                if ((plVar15 == (longlong *)0x0) ||
                   (cVar9 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar9 == '\0')) {
                  *(undefined8 *)(lVar16 + 0x48) = 0;
                }
                else {
                  uVar20 = (**(code **)(*plVar15 + 0x110))(plVar15);
                  lVar25 = FUN_144aff482(uVar20,plVar23);
                  *(longlong *)(lVar16 + 0x48) = lVar25;
                  if (lVar25 != 0) {
                    lVar27 = *(longlong *)(lVar16 + 0x40);
                    goto LAB_14425bbe9;
                  }
                }
              }
              FUN_1400b22c2(&local_378,&DAT_149e02088);
            }
            else {
LAB_14425bbe9:
              if (lVar27 == 0) {
                uVar20 = FUN_1406ef318();
                lVar27 = FUN_14477b664(uVar20);
                *(longlong *)(lVar16 + 0x40) = lVar27;
                lVar25 = *(longlong *)(lVar16 + 0x48);
                if (lVar25 == 0) {
                  if (lVar27 == 0) {
                    lVar25 = 0;
                  }
                  else {
                    lVar25 = 0;
                    if (*plVar23 != 0) {
                      plVar15 = *(longlong **)(lVar27 + 0xb8);
                      if ((plVar15 == (longlong *)0x0) ||
                         (cVar9 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar9 == '\0')) {
                        lVar25 = 0;
                      }
                      else {
                        uVar20 = (**(code **)(*plVar15 + 0x110))(plVar15);
                        lVar25 = FUN_144aff482(uVar20,plVar23);
                      }
                      *(longlong *)(lVar16 + 0x48) = lVar25;
                    }
                  }
                }
              }
              plVar15 = *(longlong **)(lVar25 + 0x30);
              if (*(code **)(*plVar15 + 0x50) != FUN_144828418) {
                plVar15 = (longlong *)(**(code **)(*plVar15 + 0x50))();
              }
              FUN_1447a1fc0(plVar15);
              plVar15 = *(longlong **)(lVar25 + 0x30);
              pcVar5 = *(code **)(*plVar15 + 0x28);
              if (pcVar5 == FUN_14482841c) {
                plVar23 = plVar15 + 3;
                if (plVar15[5] != 0) {
                  plVar23 = (longlong *)(plVar15[5] + 8);
                }
              }
              else if (pcVar5 == (code *)&LAB_14010c34c) {
                plVar23 = plVar15 + 2;
              }
              else {
                plVar23 = (longlong *)(*pcVar5)(plVar15);
              }
              local_378 = (char *)0x0;
              uVar13 = *(uint *)(plVar23 + 1);
              pvVar3 = (void *)*plVar23;
              uStack_370 = (longlong *)CONCAT44(uStack_370._4_4_,uVar13);
              if ((longlong)(int)uVar13 == 0) {
                uStack_370 = (longlong *)(ulonglong)uVar13;
              }
              else {
                FUN_1446dd670(&local_378,uVar13,0);
                memcpy(local_378,pvVar3,(longlong)(int)uVar13 * 2);
              }
            }
            FUN_1402980a2(local_4d0,local_378);
            if (local_378 != (char *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            puVar14[0x32] = puVar14[0x32] + -1000;
          }
          local_378 = (char *)0x0;
          FUN_14410b2c4(lVar16,&local_378);
          pcVar4 = local_378;
          if (local_378 != (char *)0x0) {
            uVar20 = FUN_1400d7050(local_4e0);
            bVar11 = FUN_14125be1e(uVar20,pcVar4);
            *(byte *)((longlong)puVar14 + 0x109) = bVar11 ^ 1;
          }
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          plVar15 = local_4d8;
          if (local_508 != (longlong *)0x0) {
            LOCK();
            plVar23 = local_508 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*local_508)(local_508);
              LOCK();
              piVar28 = (int *)((longlong)local_508 + 0xc);
              *piVar28 = *piVar28 + -1;
              UNLOCK();
              if (*piVar28 == 0) {
                (**(code **)(*local_508 + 0x10))();
              }
            }
          }
          if (plVar22 != (longlong *)0x0) {
            LOCK();
            plVar23 = plVar22 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
              (**(code **)*plVar22)(plVar22);
              LOCK();
              piVar28 = (int *)((longlong)plVar22 + 0xc);
              *piVar28 = *piVar28 + -1;
              UNLOCK();
              if (*piVar28 == 0) {
                (**(code **)(*plVar22 + 0x10))(plVar22);
              }
            }
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar15);
    }
  }
  plVar15 = local_4c8;
  iVar38 = (int)local_4c8[1];
  *(uint *)(local_4c8 + 1) = iVar38 + 1U;
  if (*(uint *)((longlong)local_4c8 + 0xc) < iVar38 + 1U) {
    FUN_14663d4d0(local_4c8,iVar38);
  }
  FUN_145b2a7e4((longlong)iVar38 * 0xb0 + *plVar15);
  if ((longlong)(int)plVar15[1] != 0) {
    puVar14 = (undefined4 *)*plVar15;
    puVar26 = puVar14 + (longlong)(int)plVar15[1] * 0x2c;
    local_4e8 = puVar26;
    do {
      iVar38 = puVar14[0x14];
      if (1 < (longlong)iVar38) {
        pcVar4 = *(char **)(puVar14 + 0x12);
        local_4e0 = puVar14;
        memset(&local_368,0,0x2f0);
        uStack_370 = (longlong *)(pcVar4 + (longlong)iVar38 * 0x10 + -0x10);
        local_378 = pcVar4;
        fVar39 = logf((float)iVar38);
        local_368 = CONCAT44(local_368._4_4_,(int)(longlong)(fVar39 + fVar39));
        ppcVar24 = &local_378;
        do {
          plVar17 = (longlong *)*ppcVar24;
          plVar15 = (longlong *)ppcVar24[1];
          iVar38 = (int)((ulonglong)((longlong)plVar15 - (longlong)plVar17) >> 4);
          uVar33 = (ulonglong)(iVar38 + 1);
          local_4f0 = CONCAT44(local_4f0._4_4_,*(int *)(ppcVar24 + 2));
          plVar22 = plVar15;
          plVar23 = plVar17;
          local_500 = ppcVar24;
          if (*(int *)(ppcVar24 + 2) != 0) {
LAB_14425a80f:
            if (8 < (int)(uint)uVar33) {
              uVar33 = (ulonglong)((uint)uVar33 >> 1);
              lVar16 = plVar23[uVar33 * 2];
              lVar27 = (plVar23 + uVar33 * 2)[1];
              lVar25 = plVar23[1];
              plVar23[uVar33 * 2] = *plVar23;
              (plVar23 + uVar33 * 2)[1] = lVar25;
              local_78._0_4_ = (undefined4)lVar16;
              local_78._4_4_ = (undefined4)((ulonglong)lVar16 >> 0x20);
              uStack_70._0_4_ = (int)lVar27;
              uStack_70._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
              *(undefined4 *)plVar23 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar23 + 4) = local_78._4_4_;
              *(int *)(plVar23 + 1) = (int)uStack_70;
              *(undefined4 *)((longlong)plVar23 + 0xc) = uStack_70._4_4_;
              plVar19 = plVar15 + 2;
              plVar32 = plVar23;
              local_508 = plVar15;
              local_4d8 = plVar17;
              local_4d0 = plVar22;
              local_78 = (void *)lVar16;
              uStack_70 = lVar27;
              do {
                plVar15 = plVar32 + 2;
                plVar17 = plVar32 + 2;
                plVar22 = local_508;
                do {
                  plVar32 = plVar17;
                  plVar18 = plVar15;
                  if (plVar22 < plVar32) break;
                  lVar16 = *plVar32;
                  plVar15 = (longlong *)plVar32[1];
                  if (plVar15 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                    UNLOCK();
                  }
                  lVar27 = *plVar23;
                  plVar17 = (longlong *)plVar23[1];
                  if (plVar17 == (longlong *)0x0) {
                    iVar38 = *(int *)(lVar27 + 200);
                    iVar37 = *(int *)(lVar16 + 200);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                    UNLOCK();
                    iVar38 = *(int *)(lVar27 + 200);
                    iVar37 = *(int *)(lVar16 + 200);
                    LOCK();
                    plVar1 = plVar17 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar17)(plVar17);
                      LOCK();
                      piVar28 = (int *)((longlong)plVar17 + 0xc);
                      *piVar28 = *piVar28 + -1;
                      UNLOCK();
                      plVar22 = local_508;
                      if (*piVar28 == 0) {
                        (**(code **)(*plVar17 + 0x10))(plVar17);
                        plVar22 = local_508;
                      }
                    }
                  }
                  if (plVar15 != (longlong *)0x0) {
                    LOCK();
                    plVar17 = plVar15 + 1;
                    *(int *)plVar17 = (int)*plVar17 + -1;
                    UNLOCK();
                    if ((int)*plVar17 == 0) {
                      (**(code **)*plVar15)(plVar15);
                      LOCK();
                      piVar28 = (int *)((longlong)plVar15 + 0xc);
                      *piVar28 = *piVar28 + -1;
                      UNLOCK();
                      plVar22 = local_508;
                      if (*piVar28 == 0) {
                        (**(code **)(*plVar15 + 0x10))(plVar15);
                        plVar22 = local_508;
                      }
                    }
                  }
                  plVar15 = plVar18 + 2;
                  plVar17 = plVar32 + 2;
                } while (iVar37 <= iVar38);
                plVar17 = plVar19 + -4;
                local_4f8 = plVar18;
                do {
                  plVar15 = plVar19;
                  plVar22 = plVar17;
                  plVar19 = plVar15 + -2;
                  if (plVar19 <= plVar23) break;
                  lVar16 = *plVar23;
                  plVar17 = (longlong *)plVar23[1];
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                    UNLOCK();
                  }
                  lVar27 = *plVar19;
                  plVar18 = (longlong *)plVar15[-1];
                  if (plVar18 == (longlong *)0x0) {
                    iVar38 = *(int *)(lVar27 + 200);
                    iVar37 = *(int *)(lVar16 + 200);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
                    UNLOCK();
                    iVar38 = *(int *)(lVar27 + 200);
                    iVar37 = *(int *)(lVar16 + 200);
                    LOCK();
                    plVar1 = plVar18 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*plVar18)(plVar18);
                      LOCK();
                      piVar28 = (int *)((longlong)plVar18 + 0xc);
                      *piVar28 = *piVar28 + -1;
                      UNLOCK();
                      if (*piVar28 == 0) {
                        (**(code **)(*plVar18 + 0x10))(plVar18);
                      }
                    }
                  }
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    plVar18 = plVar17 + 1;
                    *(int *)plVar18 = (int)*plVar18 + -1;
                    UNLOCK();
                    if ((int)*plVar18 == 0) {
                      (**(code **)*plVar17)(plVar17);
                      LOCK();
                      piVar28 = (int *)((longlong)plVar17 + 0xc);
                      *piVar28 = *piVar28 + -1;
                      UNLOCK();
                      if (*piVar28 == 0) {
                        (**(code **)(*plVar17 + 0x10))(plVar17);
                      }
                    }
                  }
                  plVar17 = plVar22 + -2;
                } while (iVar37 <= iVar38);
                if (plVar19 < plVar32) goto LAB_14425a9fc;
                lVar16 = *plVar32;
                lVar27 = plVar32[1];
                lVar25 = plVar15[-1];
                *plVar32 = *plVar19;
                plVar32[1] = lVar25;
                local_78._0_4_ = (undefined4)lVar16;
                local_78._4_4_ = (undefined4)((ulonglong)lVar16 >> 0x20);
                uStack_70._0_4_ = (int)lVar27;
                uStack_70._4_4_ = (undefined4)((ulonglong)lVar27 >> 0x20);
                *(undefined4 *)plVar19 = (undefined4)local_78;
                *(undefined4 *)((longlong)plVar15 + -0xc) = local_78._4_4_;
                *(int *)(plVar15 + -1) = (int)uStack_70;
                *(undefined4 *)((longlong)plVar15 + -4) = uStack_70._4_4_;
                local_78 = (void *)lVar16;
                uStack_70 = lVar27;
              } while( true );
            }
            ppcVar24 = local_500;
            if (plVar23 < plVar15) {
              local_4f8 = plVar23 + 2;
              plVar17 = plVar23;
              plVar22 = local_4f8;
              do {
                for (; plVar22 <= plVar15; plVar22 = plVar22 + 2) {
                  lVar16 = *plVar22;
                  plVar19 = (longlong *)plVar22[1];
                  if (plVar19 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                    UNLOCK();
                  }
                  lVar27 = *plVar17;
                  plVar32 = (longlong *)plVar17[1];
                  if (plVar32 == (longlong *)0x0) {
                    iVar38 = *(int *)(lVar27 + 200);
                    iVar37 = *(int *)(lVar16 + 200);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar32 + 1) = (int)plVar32[1] + 1;
                    UNLOCK();
                    iVar38 = *(int *)(lVar27 + 200);
                    iVar37 = *(int *)(lVar16 + 200);
                    LOCK();
                    plVar18 = plVar32 + 1;
                    *(int *)plVar18 = (int)*plVar18 + -1;
                    UNLOCK();
                    if ((int)*plVar18 == 0) {
                      (**(code **)*plVar32)(plVar32);
                      LOCK();
                      piVar28 = (int *)((longlong)plVar32 + 0xc);
                      *piVar28 = *piVar28 + -1;
                      UNLOCK();
                      if (*piVar28 == 0) {
                        (**(code **)(*plVar32 + 0x10))(plVar32);
                      }
                    }
                  }
                  if (plVar19 != (longlong *)0x0) {
                    LOCK();
                    plVar32 = plVar19 + 1;
                    *(int *)plVar32 = (int)*plVar32 + -1;
                    UNLOCK();
                    if ((int)*plVar32 == 0) {
                      (**(code **)*plVar19)(plVar19);
                      LOCK();
                      piVar28 = (int *)((longlong)plVar19 + 0xc);
                      *piVar28 = *piVar28 + -1;
                      UNLOCK();
                      if (*piVar28 == 0) {
                        (**(code **)(*plVar19 + 0x10))(plVar19);
                      }
                    }
                  }
                  plVar19 = plVar22;
                  if (iVar37 <= iVar38) {
                    plVar19 = plVar17;
                  }
                  plVar17 = plVar19;
                }
                local_78 = (void *)*plVar17;
                uStack_70 = plVar17[1];
                pvVar3 = local_78;
                uVar33 = uStack_70;
                lVar16 = plVar15[1];
                *plVar17 = *plVar15;
                plVar17[1] = lVar16;
                local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
                *(undefined4 *)plVar15 = (undefined4)local_78;
                *(undefined4 *)((longlong)plVar15 + 4) = local_78._4_4_;
                *(int *)(plVar15 + 1) = (int)uStack_70;
                *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_70._4_4_;
                plVar15 = plVar15 + -2;
                ppcVar24 = local_500;
                local_78 = pvVar3;
                uStack_70 = uVar33;
                plVar17 = plVar23;
                plVar22 = local_4f8;
              } while (plVar23 < plVar15);
            }
            goto LAB_14425afab;
          }
LAB_14425aada:
          iVar37 = (int)uVar33;
          ppcVar24 = local_500;
          if (iVar37 != 0) {
            uVar13 = (iVar38 - (iVar38 + -1 >> 0x1f)) + -1 >> 1;
            local_508 = plVar23;
            do {
              local_4f8 = (longlong *)(ulonglong)uVar13;
              plVar15 = local_4f8;
              while (uVar7 = uVar13 * 2 + 1, (int)uVar7 < iVar37) {
                uVar35 = uVar13 * 2 + 2;
                uVar13 = uVar7;
                if ((int)uVar35 < iVar37) {
                  lVar16 = plVar23[(longlong)(int)uVar7 * 2];
                  plVar17 = (longlong *)plVar23[(longlong)(int)uVar7 * 2 + 1];
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                    UNLOCK();
                  }
                  lVar27 = plVar23[(longlong)(int)uVar35 * 2];
                  plVar23 = (longlong *)(plVar23 + (longlong)(int)uVar35 * 2)[1];
                  if (plVar23 == (longlong *)0x0) {
                    iVar38 = *(int *)(lVar27 + 200);
                    iVar30 = *(int *)(lVar16 + 200);
                  }
                  else {
                    LOCK();
                    *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
                    UNLOCK();
                    iVar38 = *(int *)(lVar27 + 200);
                    iVar30 = *(int *)(lVar16 + 200);
                    LOCK();
                    plVar22 = plVar23 + 1;
                    *(int *)plVar22 = (int)*plVar22 + -1;
                    UNLOCK();
                    if ((int)*plVar22 == 0) {
                      (**(code **)*plVar23)(plVar23);
                      LOCK();
                      piVar28 = (int *)((longlong)plVar23 + 0xc);
                      *piVar28 = *piVar28 + -1;
                      UNLOCK();
                      if (*piVar28 == 0) {
                        (**(code **)(*plVar23 + 0x10))(plVar23);
                      }
                    }
                  }
                  if (plVar17 != (longlong *)0x0) {
                    LOCK();
                    plVar23 = plVar17 + 1;
                    *(int *)plVar23 = (int)*plVar23 + -1;
                    UNLOCK();
                    if ((int)*plVar23 == 0) {
                      (**(code **)*plVar17)(plVar17);
                      LOCK();
                      piVar28 = (int *)((longlong)plVar17 + 0xc);
                      *piVar28 = *piVar28 + -1;
                      UNLOCK();
                      if (*piVar28 == 0) {
                        (**(code **)(*plVar17 + 0x10))(plVar17);
                      }
                    }
                  }
                  plVar23 = local_508;
                  if (iVar30 <= iVar38) {
                    uVar13 = uVar35;
                  }
                }
                lVar27 = (longlong)(int)uVar13;
                lVar16 = plVar23[lVar27 * 2];
                plVar17 = (longlong *)plVar23[lVar27 * 2 + 1];
                if (plVar17 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                }
                plVar22 = plVar23 + (longlong)(int)plVar15 * 2;
                lVar25 = *plVar22;
                plVar15 = (longlong *)plVar22[1];
                if (plVar15 == (longlong *)0x0) {
                  iVar38 = *(int *)(lVar25 + 200);
                  iVar30 = *(int *)(lVar16 + 200);
                }
                else {
                  LOCK();
                  *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                  UNLOCK();
                  iVar38 = *(int *)(lVar25 + 200);
                  iVar30 = *(int *)(lVar16 + 200);
                  LOCK();
                  plVar23 = plVar15 + 1;
                  *(int *)plVar23 = (int)*plVar23 + -1;
                  UNLOCK();
                  if ((int)*plVar23 == 0) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar28 = (int *)((longlong)plVar15 + 0xc);
                    *piVar28 = *piVar28 + -1;
                    UNLOCK();
                    if (*piVar28 == 0) {
                      (**(code **)(*plVar15 + 0x10))(plVar15);
                    }
                  }
                }
                if (plVar17 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = plVar17 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*plVar17)(plVar17);
                    LOCK();
                    piVar28 = (int *)((longlong)plVar17 + 0xc);
                    *piVar28 = *piVar28 + -1;
                    UNLOCK();
                    if (*piVar28 == 0) {
                      (**(code **)(*plVar17 + 0x10))(plVar17);
                    }
                  }
                }
                plVar23 = local_508;
                if (iVar30 <= iVar38) break;
                plVar15 = local_508 + lVar27 * 2;
                local_78 = (void *)*plVar22;
                uStack_70 = plVar22[1];
                pvVar3 = local_78;
                uVar2 = uStack_70;
                lVar16 = plVar15[1];
                *plVar22 = *plVar15;
                plVar22[1] = lVar16;
                local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
                *(undefined4 *)plVar15 = (undefined4)local_78;
                *(undefined4 *)((longlong)plVar15 + 4) = local_78._4_4_;
                *(int *)(plVar15 + 1) = (int)uStack_70;
                *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_70._4_4_;
                plVar15 = (longlong *)(ulonglong)uVar13;
                local_78 = pvVar3;
                uStack_70 = uVar2;
              }
              uVar13 = (int)local_4f8 - 1;
            } while ((int)local_4f8 != 0);
            ppcVar24 = local_500;
            if (1 < iVar37) {
              uVar33 = uVar33 - 1;
              local_78 = (void *)*plVar23;
              uStack_70 = plVar23[1];
              pvVar3 = local_78;
              uVar2 = uStack_70;
              lVar16 = (plVar23 + uVar33 * 2)[1];
              *plVar23 = plVar23[uVar33 * 2];
              plVar23[1] = lVar16;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
              plVar15 = plVar23 + uVar33 * 2;
              *(undefined4 *)plVar15 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar15 + 4) = local_78._4_4_;
              *(int *)(plVar15 + 1) = (int)uStack_70;
              *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_70._4_4_;
              local_78 = pvVar3;
              uStack_70 = uVar2;
              if (iVar37 != 2) {
                do {
                  iVar37 = 0;
                  iVar38 = 1;
                  iVar30 = 0;
                  do {
                    iVar37 = iVar37 + 2;
                    iVar36 = iVar38;
                    if ((longlong)iVar37 < (longlong)uVar33) {
                      lVar16 = plVar23[(longlong)iVar38 * 2];
                      plVar15 = (longlong *)plVar23[(longlong)iVar38 * 2 + 1];
                      if (plVar15 != (longlong *)0x0) {
                        LOCK();
                        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                        UNLOCK();
                      }
                      lVar27 = plVar23[(longlong)iVar37 * 2];
                      plVar17 = (longlong *)(plVar23 + (longlong)iVar37 * 2)[1];
                      if (plVar17 == (longlong *)0x0) {
                        iVar38 = *(int *)(lVar27 + 200);
                        iVar31 = *(int *)(lVar16 + 200);
                      }
                      else {
                        LOCK();
                        *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                        UNLOCK();
                        iVar38 = *(int *)(lVar27 + 200);
                        iVar31 = *(int *)(lVar16 + 200);
                        LOCK();
                        plVar23 = plVar17 + 1;
                        *(int *)plVar23 = (int)*plVar23 + -1;
                        UNLOCK();
                        if ((int)*plVar23 == 0) {
                          (**(code **)*plVar17)(plVar17);
                          LOCK();
                          piVar28 = (int *)((longlong)plVar17 + 0xc);
                          *piVar28 = *piVar28 + -1;
                          UNLOCK();
                          if (*piVar28 == 0) {
                            (**(code **)(*plVar17 + 0x10))(plVar17);
                          }
                        }
                      }
                      if (plVar15 != (longlong *)0x0) {
                        LOCK();
                        plVar17 = plVar15 + 1;
                        *(int *)plVar17 = (int)*plVar17 + -1;
                        UNLOCK();
                        if ((int)*plVar17 == 0) {
                          (**(code **)*plVar15)(plVar15);
                          LOCK();
                          piVar28 = (int *)((longlong)plVar15 + 0xc);
                          *piVar28 = *piVar28 + -1;
                          UNLOCK();
                          if (*piVar28 == 0) {
                            (**(code **)(*plVar15 + 0x10))(plVar15);
                          }
                        }
                      }
                      plVar23 = local_508;
                      if (iVar31 <= iVar38) {
                        iVar36 = iVar37;
                      }
                    }
                    lVar27 = (longlong)iVar36;
                    lVar16 = plVar23[lVar27 * 2];
                    plVar15 = (longlong *)plVar23[lVar27 * 2 + 1];
                    if (plVar15 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                      UNLOCK();
                    }
                    plVar22 = plVar23 + (longlong)iVar30 * 2;
                    lVar25 = *plVar22;
                    plVar17 = (longlong *)plVar22[1];
                    if (plVar17 == (longlong *)0x0) {
                      iVar38 = *(int *)(lVar25 + 200);
                      iVar37 = *(int *)(lVar16 + 200);
                    }
                    else {
                      LOCK();
                      *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                      UNLOCK();
                      iVar38 = *(int *)(lVar25 + 200);
                      iVar37 = *(int *)(lVar16 + 200);
                      LOCK();
                      plVar23 = plVar17 + 1;
                      *(int *)plVar23 = (int)*plVar23 + -1;
                      UNLOCK();
                      if ((int)*plVar23 == 0) {
                        (**(code **)*plVar17)(plVar17);
                        LOCK();
                        piVar28 = (int *)((longlong)plVar17 + 0xc);
                        *piVar28 = *piVar28 + -1;
                        UNLOCK();
                        if (*piVar28 == 0) {
                          (**(code **)(*plVar17 + 0x10))(plVar17);
                        }
                      }
                    }
                    if (plVar15 != (longlong *)0x0) {
                      LOCK();
                      plVar17 = plVar15 + 1;
                      *(int *)plVar17 = (int)*plVar17 + -1;
                      UNLOCK();
                      if ((int)*plVar17 == 0) {
                        (**(code **)*plVar15)(plVar15);
                        LOCK();
                        piVar28 = (int *)((longlong)plVar15 + 0xc);
                        *piVar28 = *piVar28 + -1;
                        UNLOCK();
                        if (*piVar28 == 0) {
                          (**(code **)(*plVar15 + 0x10))(plVar15);
                        }
                      }
                    }
                    plVar23 = local_508;
                    if (iVar37 <= iVar38) break;
                    plVar15 = local_508 + lVar27 * 2;
                    pvVar3 = (void *)*plVar22;
                    uVar2 = plVar22[1];
                    lVar16 = plVar15[1];
                    *plVar22 = *plVar15;
                    plVar22[1] = lVar16;
                    local_78._0_4_ = SUB84(pvVar3,0);
                    local_78._4_4_ = (undefined4)((ulonglong)pvVar3 >> 0x20);
                    uStack_70._0_4_ = (int)uVar2;
                    uStack_70._4_4_ = (undefined4)(uVar2 >> 0x20);
                    *(undefined4 *)plVar15 = (undefined4)local_78;
                    *(undefined4 *)((longlong)plVar15 + 4) = local_78._4_4_;
                    *(int *)(plVar15 + 1) = (int)uStack_70;
                    *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_70._4_4_;
                    iVar37 = iVar36 * 2;
                    iVar38 = iVar36 * 2 + 1;
                    local_78 = pvVar3;
                    uStack_70 = uVar2;
                    iVar30 = iVar36;
                  } while ((longlong)iVar38 < (longlong)uVar33);
                  uVar2 = uVar33 - 1;
                  local_78 = (void *)*local_508;
                  uStack_70 = local_508[1];
                  pvVar3 = local_78;
                  uVar8 = uStack_70;
                  lVar16 = (local_508 + uVar2 * 2)[1];
                  *local_508 = local_508[uVar2 * 2];
                  local_508[1] = lVar16;
                  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                  uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
                  plVar15 = local_508 + uVar2 * 2;
                  *(undefined4 *)plVar15 = (undefined4)local_78;
                  *(undefined4 *)((longlong)plVar15 + 4) = local_78._4_4_;
                  *(int *)(plVar15 + 1) = (int)uStack_70;
                  *(undefined4 *)((longlong)plVar15 + 0xc) = uStack_70._4_4_;
                  bVar6 = 2 < uVar33;
                  ppcVar24 = local_500;
                  uVar33 = uVar2;
                  local_78 = pvVar3;
                  uStack_70 = uVar8;
                } while (bVar6);
              }
            }
          }
LAB_14425afab:
          ppcVar24 = ppcVar24 + -3;
          puVar26 = local_4e8;
          puVar14 = local_4e0;
        } while (&local_378 <= ppcVar24);
      }
      puVar14 = puVar14 + 0x2c;
    } while (puVar14 != puVar26);
  }
  if (local_440 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145da38f8(local_428);
  local_498 = (undefined **)&DAT_14a171d50;
  uVar33 = uStack_480 >> 0x20;
  uStack_480 = uStack_480 & 0xffffffff00000000;
  if ((int)uVar33 != 0) {
    FUN_140115c12(&local_488,0);
  }
  local_490 = (undefined *)0x0;
  if (local_488 != 0) {
    FUN_1400020a8();
  }
  if (local_478 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_468 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_144259fe3:
  ReleaseSRWLockExclusive(local_4c0);
  if ((local_60 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14425a9fc:
  local_78 = (void *)*plVar23;
  uStack_70 = plVar23[1];
  pvVar3 = local_78;
  uVar33 = uStack_70;
  lVar16 = plVar15[-1];
  *plVar23 = *plVar19;
  plVar23[1] = lVar16;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)(uStack_70 >> 0x20);
  *(undefined4 *)plVar19 = (undefined4)local_78;
  *(undefined4 *)((longlong)plVar15 + -0xc) = local_78._4_4_;
  *(int *)(plVar15 + -1) = (int)uStack_70;
  *(undefined4 *)((longlong)plVar15 + -4) = uStack_70._4_4_;
  iVar37 = (int)local_4f0 + -1;
  local_4f0 = CONCAT44(local_4f0._4_4_,iVar37);
  plVar15 = plVar15 + -4;
  local_78 = pvVar3;
  uStack_70 = uVar33;
  if ((longlong)plVar22 - (longlong)local_4d8 < (longlong)local_4d0 - (longlong)local_4f8) {
    if (plVar32 < local_508) {
      *local_500 = (char *)plVar32;
      local_500[1] = (char *)local_508;
      *(int *)(local_500 + 2) = iVar37;
      local_500 = local_500 + 3;
    }
    ppcVar24 = local_500;
    plVar17 = plVar23;
    if (plVar19 <= plVar23 + 2) goto LAB_14425afab;
  }
  else {
    ppcVar24 = local_500;
    if (plVar23 + 2 < plVar19) {
      *local_500 = (char *)plVar23;
      local_500[1] = (char *)plVar15;
      *(int *)(local_500 + 2) = iVar37;
      ppcVar24 = local_500 + 3;
    }
    plVar15 = local_508;
    plVar22 = local_508;
    plVar17 = local_4f8;
    plVar23 = plVar32;
    if (local_508 <= plVar32) goto LAB_14425afab;
  }
  local_500 = ppcVar24;
  iVar38 = (int)((ulonglong)((longlong)plVar22 - (longlong)plVar17) >> 4);
  uVar33 = (ulonglong)(iVar38 + 1);
  if (iVar37 == 0) goto LAB_14425aada;
  goto LAB_14425a80f;
}



// FUNCTION 14425bf14 FUN_14425bf14 body=154 status=ok
// SIG undefined FUN_14425bf14(void)

undefined4
FUN_14425bf14(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  local_48 = *param_2;
  lVar4 = FUN_14063edce(&DAT_14cb91658,&local_48);
  uVar3 = 0;
  if (lVar4 != 0) {
    local_58 = &local_48;
    local_48 = uVar2;
    local_40 = uVar1;
    lVar4 = FUN_14616541a(param_1,lVar4,param_3,param_4);
    uVar3 = *(undefined4 *)(lVar4 + 8);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425bfb0 FUN_14425bfb0 body=549 status=ok
// SIG undefined FUN_14425bfb0(void)

/* WARNING: Removing unreachable block (ram,0x00014425c17c) */
/* WARNING: Removing unreachable block (ram,0x00014425c1c8) */
/* WARNING: Removing unreachable block (ram,0x00014425c1cf) */

void FUN_14425bfb0(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_158 [32];
  undefined1 local_138 [144];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar3 = *param_1;
  FUN_14419d30a(local_138);
  FUN_14419d4a8(&local_a8,local_138);
  iVar2 = *(int *)(lVar3 + 0x218);
  *(uint *)(lVar3 + 0x218) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x21c) < iVar2 + 1U) {
    FUN_14419d69c((longlong *)(lVar3 + 0x210),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x210);
  lVar5 = (longlong)iVar2 * 0x78;
  *(undefined4 *)(lVar3 + 8 + lVar5) = local_a0;
  *(undefined8 *)(lVar3 + lVar5) = local_a8;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar5) = local_98;
  uVar4 = FUN_14477b664(local_90);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(lVar3 + 0x18 + lVar5) = uVar4;
  *(undefined8 *)(lVar3 + 0x20 + lVar5) = local_88;
  *(undefined8 *)(lVar3 + 0x38 + lVar5) = 0;
  puVar1 = (undefined8 *)(lVar3 + 0x28 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x28 + lVar5) = local_80;
  uVar4 = FUN_14477b664(local_78);
  uVar4 = FUN_14477b664(uVar4);
  *(undefined8 *)(lVar3 + 0x30 + lVar5) = uVar4;
  *(undefined8 *)(lVar3 + 0x38 + lVar5) = local_70;
  *(undefined8 *)(lVar3 + 0x40 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x40 + lVar5) = local_68;
  *(undefined4 *)(lVar3 + 0x48 + lVar5) = (undefined4)local_60;
  *(undefined4 *)(lVar3 + 0x4c + lVar5) = local_60._4_4_;
  *(undefined8 *)(lVar3 + 0x50 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x50 + lVar5) = local_58;
  *(undefined4 *)(lVar3 + 0x58 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar3 + 0x5c + lVar5) = local_50._4_4_;
  *(undefined8 *)(lVar3 + 0x60 + lVar5) = 0;
  *(undefined8 *)(lVar3 + 0x60 + lVar5) = local_48;
  *(undefined4 *)(lVar3 + 0x68 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(lVar3 + 0x6c + lVar5) = local_40._4_4_;
  *(undefined1 *)(lVar3 + 0x70 + lVar5) = local_38;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  if ((local_30 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425c1d6 FUN_14425c1d6 body=1584 status=ok
// SIG undefined FUN_14425c1d6(void)

void FUN_14425c1d6(longlong param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  void *pvVar7;
  void *pvVar8;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  void *_Src;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  int iVar18;
  void *pvVar19;
  uint uVar20;
  float fVar21;
  undefined1 auStack_418 [32];
  longlong *local_3f8;
  ulonglong local_3f0;
  void *local_3e8;
  void *local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  undefined4 local_3c8 [190];
  undefined1 local_d0 [136];
  ulonglong local_48;
  ulonglong uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  if (1 < (int)param_2) {
    memset(local_3c8,0,0x2f0);
    local_3d0 = (ulonglong)param_2 * 0x88 + param_1 + -0x88;
    local_3d8 = param_1;
    fVar21 = logf((float)(int)param_2);
    local_3c8[0] = (int)(longlong)(fVar21 + fVar21);
    plVar14 = &local_3d8;
    do {
      pvVar8 = (void *)*plVar14;
      pvVar15 = (void *)plVar14[1];
      iVar18 = (int)plVar14[2];
      uVar20 = (int)((ulonglong)((longlong)pvVar15 - (longlong)pvVar8) >> 3) * -0xf0f0f0f + 1;
      pvVar17 = pvVar8;
      _Src = pvVar8;
      pvVar19 = pvVar15;
      local_3f8 = plVar14;
      if (iVar18 != 0) {
LAB_14425c296:
        if (8 < (int)uVar20) {
          local_3f0 = CONCAT44(local_3f0._4_4_,iVar18);
          pvVar17 = (void *)((ulonglong)(uVar20 >> 1) * 0x88 + (longlong)_Src);
          local_3e8 = pvVar8;
          local_3e0 = pvVar19;
          memcpy(local_d0,pvVar17,0x88);
          memcpy(pvVar17,_Src,0x88);
          memcpy(_Src,local_d0,0x88);
          pvVar8 = (void *)((longlong)pvVar15 + 0x88);
          pvVar17 = _Src;
          do {
            pvVar19 = (void *)((longlong)pvVar17 + 0x88);
            pvVar5 = (void *)((longlong)pvVar17 + 0x88);
            do {
              pvVar17 = pvVar5;
              pvVar7 = pvVar19;
              if (pvVar15 < pvVar17) break;
              pvVar19 = (void *)((longlong)pvVar7 + 0x88);
              pvVar5 = (void *)((longlong)pvVar17 + 0x88);
            } while (*(int *)((longlong)pvVar17 + 0x84) <= *(int *)((longlong)_Src + 0x84));
            pvVar5 = (void *)((longlong)pvVar8 + -0x110);
            do {
              pvVar16 = pvVar8;
              pvVar19 = pvVar5;
              pvVar8 = (void *)((longlong)pvVar16 + -0x88);
              if (pvVar8 <= _Src) break;
              pvVar5 = (void *)((longlong)pvVar19 + -0x88);
            } while (*(int *)((longlong)_Src + 0x84) <= *(int *)((longlong)pvVar16 + -4));
            if (pvVar8 < pvVar17) goto LAB_14425c3af;
            memcpy(local_d0,pvVar17,0x88);
            memcpy(pvVar17,pvVar8,0x88);
            memcpy(pvVar8,local_d0,0x88);
          } while( true );
        }
        for (; plVar14 = local_3f8, pvVar8 = _Src, pvVar17 = _Src, _Src < pvVar15;
            pvVar15 = (void *)((longlong)pvVar15 + -0x88)) {
          while (pvVar19 = pvVar8, pvVar8 = (void *)((longlong)pvVar17 + 0x88), pvVar8 <= pvVar15) {
            piVar1 = (int *)((longlong)pvVar17 + 0x10c);
            pvVar17 = pvVar8;
            if (*piVar1 <= *(int *)((longlong)pvVar19 + 0x84)) {
              pvVar8 = pvVar19;
            }
          }
          memcpy(local_d0,pvVar19,0x88);
          memcpy(pvVar19,pvVar15,0x88);
          memcpy(pvVar15,local_d0,0x88);
        }
        goto LAB_14425c7c7;
      }
LAB_14425c4a2:
      plVar14 = local_3f8;
      if (uVar20 != 0) {
        uVar6 = (int)((uVar20 - ((int)(uVar20 - 2) >> 0x1f)) + -2) >> 1;
        do {
          uVar9 = (ulonglong)uVar6;
          local_3f0 = uVar9;
          while (uVar4 = uVar6 * 2 + 1, (int)uVar4 < (int)uVar20) {
            uVar10 = uVar6 * 2 + 2;
            uVar6 = uVar4;
            if (((int)uVar10 < (int)uVar20) &&
               (*(int *)((longlong)pvVar17 + (longlong)(int)uVar4 * 0x88 + 0x84) <=
                *(int *)((longlong)pvVar17 + (longlong)(int)uVar10 * 0x88 + 0x84))) {
              uVar6 = uVar10;
            }
            lVar3 = (longlong)(int)uVar9 * 0x88;
            if (*(int *)((longlong)pvVar17 + (longlong)(int)uVar6 * 0x88 + 0x84) <=
                *(int *)((longlong)pvVar17 + lVar3 + 0x84)) break;
            pvVar8 = (void *)(lVar3 + (longlong)pvVar17);
            pvVar15 = (void *)((longlong)(int)uVar6 * 0x88 + (longlong)pvVar17);
            memcpy(local_d0,pvVar8,0x88);
            memcpy(pvVar8,pvVar15,0x88);
            memcpy(pvVar15,local_d0,0x88);
            uVar9 = (ulonglong)uVar6;
          }
          uVar6 = (int)local_3f0 - 1;
        } while ((int)local_3f0 != 0);
        plVar14 = local_3f8;
        if (1 < (int)uVar20) {
          uVar9 = (ulonglong)uVar20 - 1;
          pvVar15 = (void *)(uVar9 * 0x80 + (ulonglong)uVar20 * 8 + -8 + (longlong)pvVar17);
          memcpy(local_d0,pvVar17,0x88);
          memcpy(pvVar17,pvVar15,0x88);
          memcpy(pvVar15,local_d0,0x88);
          plVar14 = local_3f8;
          if (uVar20 != 2) {
            do {
              iVar18 = 0;
              iVar12 = 1;
              iVar13 = 0;
              do {
                iVar18 = iVar18 + 2;
                iVar11 = iVar12;
                if (((longlong)iVar18 < (longlong)uVar9) &&
                   (*(int *)((longlong)pvVar17 + (longlong)iVar12 * 0x88 + 0x84) <=
                    *(int *)((longlong)pvVar17 + (longlong)iVar18 * 0x88 + 0x84))) {
                  iVar11 = iVar18;
                }
                if (*(int *)((longlong)pvVar17 + (longlong)iVar11 * 0x88 + 0x84) <=
                    *(int *)((longlong)pvVar17 + (longlong)iVar13 * 0x88 + 0x84)) break;
                pvVar8 = (void *)((longlong)iVar13 * 0x88 + (longlong)pvVar17);
                pvVar15 = (void *)((longlong)iVar11 * 0x88 + (longlong)pvVar17);
                memcpy(local_d0,pvVar8,0x88);
                memcpy(pvVar8,pvVar15,0x88);
                memcpy(pvVar15,local_d0,0x88);
                iVar18 = iVar11 * 2;
                iVar12 = iVar11 * 2 + 1;
                iVar13 = iVar11;
              } while ((longlong)iVar12 < (longlong)uVar9);
              pvVar15 = (void *)((uVar9 - 1) * 0x80 + uVar9 * 8 + -8 + (longlong)pvVar17);
              memcpy(local_d0,pvVar17,0x88);
              memcpy(pvVar17,pvVar15,0x88);
              memcpy(pvVar15,local_d0,0x88);
              bVar2 = 2 < uVar9;
              plVar14 = local_3f8;
              uVar9 = uVar9 - 1;
            } while (bVar2);
          }
        }
      }
LAB_14425c7c7:
      plVar14 = plVar14 + -3;
    } while (&local_3d8 <= plVar14);
  }
  if ((local_48 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14425c3af:
  memcpy(local_d0,_Src,0x88);
  memcpy(_Src,pvVar8,0x88);
  memcpy(pvVar8,local_d0,0x88);
  iVar18 = (int)local_3f0 + -1;
  pvVar16 = (void *)((longlong)pvVar16 + -0x110);
  if ((longlong)pvVar19 - (longlong)local_3e8 < (longlong)local_3e0 - (longlong)pvVar7) {
    plVar14 = local_3f8;
    if (pvVar17 < pvVar15) {
      *local_3f8 = (longlong)pvVar17;
      local_3f8[1] = (longlong)pvVar15;
      *(int *)(local_3f8 + 2) = iVar18;
      plVar14 = local_3f8 + 3;
    }
    pvVar17 = _Src;
    if (pvVar8 <= (void *)((longlong)_Src + 0x88U)) goto LAB_14425c7c7;
  }
  else {
    if ((void *)((longlong)_Src + 0x88U) < pvVar8) {
      *local_3f8 = (longlong)_Src;
      local_3f8[1] = (longlong)pvVar16;
      *(int *)(local_3f8 + 2) = iVar18;
      local_3f8 = local_3f8 + 3;
    }
    plVar14 = local_3f8;
    _Src = pvVar7;
    pvVar16 = pvVar15;
    pvVar19 = pvVar15;
    if (pvVar15 <= pvVar17) goto LAB_14425c7c7;
  }
  local_3f8 = plVar14;
  uVar20 = (int)((ulonglong)((longlong)pvVar19 - (longlong)_Src) >> 3) * -0xf0f0f0f + 1;
  pvVar8 = _Src;
  pvVar15 = pvVar16;
  _Src = pvVar17;
  if (iVar18 == 0) goto LAB_14425c4a2;
  goto LAB_14425c296;
}



// FUNCTION 14425c808 FUN_14425c808 body=31 status=ok
// SIG undefined FUN_14425c808(void)

undefined8 FUN_14425c808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14425c876 FUN_14425c876 body=1705 status=ok
// SIG undefined FUN_14425c876(void)

undefined8 FUN_14425c876(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined4 local_164;
  undefined1 local_150;
  undefined8 local_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined7 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar7 = *param_2;
  if ((lVar7 == 0) || (cVar3 = FUN_143d15720(lVar7 + 0x80,*param_1), cVar3 == '\0')) {
    uVar4 = 0;
    goto LAB_14425cc8c;
  }
  lVar5 = *(longlong *)(lVar7 + 0x38);
  if (lVar5 == 0) {
    uVar4 = FUN_14050c9fe();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar7 + 0x38) = lVar5;
  }
  lVar6 = *(longlong *)(lVar7 + 0x40);
  if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*(longlong *)(lVar7 + 0x30) != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar6 = FUN_144aff482(uVar4,(longlong *)(lVar7 + 0x30));
    }
    *(longlong *)(lVar7 + 0x40) = lVar6;
  }
  FUN_1406d3bdc();
  cVar3 = FUN_1448093f4(lVar6);
  uVar4 = 0;
  if ((lVar6 == 0) || (cVar3 == '\0')) goto LAB_14425cc8c;
  memset(&local_180,0,0x150);
  local_150 = 1;
  local_140 = 0;
  uStack_138 = 0;
  uStack_137 = 0;
  uStack_130 = 0;
  uStack_12f = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  uStack_101 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 1;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = DAT_14c948618;
  local_c8 = DAT_14c948620;
  local_c4 = DAT_14c948618;
  local_bc = DAT_14c948620;
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
  local_b8 = DAT_14c844840;
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
  local_b0 = 0;
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
  local_a8 = DAT_14c844840;
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
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
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
  local_80 = DAT_14c844840;
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
  local_78 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  lVar5 = *(longlong *)(lVar6 + 0x1d0);
  local_38 = 0;
  local_34 = 0;
  if (lVar5 == 0) {
    uVar4 = FUN_1465d5758();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar6 + 0x1d0) = lVar5;
  }
  local_170 = *(longlong *)(lVar6 + 0x1d8);
  if (((local_170 == 0) && (local_170 = 0, lVar5 != 0)) && (*(longlong *)(lVar6 + 0x1c8) != 0)) {
    plVar1 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
      local_170 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      local_170 = FUN_144aff482(uVar4,(longlong *)(lVar6 + 0x1c8));
    }
    *(longlong *)(lVar6 + 0x1d8) = local_170;
  }
  lVar7 = FUN_140f5ab1e(lVar7);
  if (lVar7 != 0) {
    uVar4 = FUN_14125b292();
    cVar3 = FUN_1448093f4(lVar7,uVar4);
    local_178 = 0;
    if (cVar3 != '\0') {
      local_178 = lVar7;
    }
  }
  lVar7 = *(longlong *)(lVar6 + 0x238);
  if (lVar7 == 0) {
    uVar4 = FUN_140bd9786();
    lVar7 = FUN_14477b664(uVar4);
    *(longlong *)(lVar6 + 0x238) = lVar7;
  }
  plVar1 = (longlong *)(lVar6 + 0x230);
  local_180 = *(longlong *)(lVar6 + 0x240);
  if (local_180 == 0) {
    if ((lVar7 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(lVar6 + 0x240) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        local_180 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(lVar6 + 0x240) = local_180;
        if (local_180 != 0) {
          lVar7 = *(longlong *)(lVar6 + 0x238);
          goto LAB_14425ccbc;
        }
      }
    }
    local_180 = FUN_140bd958e(lVar6,2);
  }
  else {
LAB_14425ccbc:
    if (lVar7 == 0) {
      uVar4 = FUN_140bd9786();
      lVar7 = FUN_14477b664(uVar4);
      *(longlong *)(lVar6 + 0x238) = lVar7;
      local_180 = *(longlong *)(lVar6 + 0x240);
      if (((local_180 == 0) && (local_180 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          local_180 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          local_180 = FUN_144aff482(uVar4,plVar1);
        }
        *(longlong *)(lVar6 + 0x240) = local_180;
      }
    }
  }
  local_164 = 6;
  FUN_148e2503e(*(undefined8 *)param_1[1],&local_180);
  FUN_14116e718(&local_180);
  uVar4 = 1;
LAB_14425cc8c:
  if ((local_30 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14425cf20 FUN_14425cf20 body=75 status=ok
// SIG undefined FUN_14425cf20(void)

void FUN_14425cf20(longlong param_1,int param_2)

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



// FUNCTION 14425cf6c FUN_14425cf6c body=29 status=ok
// SIG undefined FUN_14425cf6c(void)

undefined8 FUN_14425cf6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14425cf9e FUN_14425cf9e body=93 status=ok
// SIG undefined FUN_14425cf9e(void)

void FUN_14425cf9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8410;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14425cffc FUN_14425cffc body=93 status=ok
// SIG undefined FUN_14425cffc(void)

void FUN_14425cffc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8410;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14425d05a FUN_14425d05a body=126 status=ok
// SIG undefined FUN_14425d05a(void)

void FUN_14425d05a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8410;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014425d0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14425d0e2 FUN_14425d0e2 body=20 status=ok
// SIG undefined FUN_14425d0e2(void)

undefined1 FUN_14425d0e2(longlong param_1)

{
  FUN_14425d0f6(param_1 + 0x18);
  return 1;
}



// FUNCTION 14425d0f6 FUN_14425d0f6 body=470 status=ok
// SIG undefined FUN_14425d0f6(void)

void FUN_14425d0f6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  undefined4 local_44;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x1e8) != 0) {
    lVar3 = FUN_1400d7050(lVar1 + 0x30);
    if (lVar3 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_60 = &local_40;
        local_40 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1459f2e4c;
        local_68 = &LAB_148c39de3;
        local_70 = &LAB_1457a9eb2;
        local_78 = &DAT_149e063b2;
        local_80 = 0;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x3de0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        cVar2 = FUN_14002b5e0(*param_2,&DAT_14b9abbf8,4);
        if (cVar2 != '\0') {
          FUN_1410ef0a8(lVar3);
          uVar4 = FUN_14001cc68(0x28,0x10);
          local_40 = (code *)((ulonglong)local_40 & 0xffffffff00000000);
          local_38 = 0;
          local_44 = 0;
          local_98 = CONCAT31(local_98._1_3_,1);
          FUN_146173fb4(uVar4,&local_44,0,&local_40);
          FUN_1416d83b0(lVar1,uVar4);
          local_40 = *(code **)(lVar1 + 0x1e8);
          local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(lVar1 + 0x1f0));
          FUN_148c392c0(lVar3,&local_40);
        }
        *(undefined4 *)(lVar1 + 0x1f0) = DAT_14c948620;
        *(ulonglong *)(lVar1 + 0x1e8) = DAT_14c948618;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425d2ce FUN_14425d2ce body=29 status=ok
// SIG undefined FUN_14425d2ce(void)

undefined8 FUN_14425d2ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14425d474 FUN_14425d474 body=101 status=ok
// SIG undefined FUN_14425d474(void)

void FUN_14425d474(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14425d4da FUN_14425d4da body=101 status=ok
// SIG undefined FUN_14425d4da(void)

void FUN_14425d4da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8480;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14425d540 FUN_14425d540 body=134 status=ok
// SIG undefined FUN_14425d540(void)

void FUN_14425d540(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8480;
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
                    /* WARNING: Could not recover jumptable at 0x00014425d5b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14425d622 FUN_14425d622 body=275 status=ok
// SIG undefined FUN_14425d622(void)

undefined8 FUN_14425d622(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14425d72f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14425d72f;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14425d72f:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14425d6e3;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14425d6e3;
    }
  }
  uVar6 = 0;
LAB_14425d6e3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425d736 FUN_14425d736 body=6468 status=ok
// SIG undefined FUN_14425d736(void)

void FUN_14425d736(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  void *pvVar3;
  void *_Dst;
  undefined4 **ppuVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined8 uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 *puVar24;
  longlong lVar25;
  byte bVar26;
  uint uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong *plVar31;
  ulonglong uVar32;
  int iVar33;
  int iVar34;
  ulonglong uVar35;
  PSRWLOCK SRWLock;
  bool bVar36;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  code *local_160;
  undefined4 *local_158;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  int local_12c;
  longlong *local_128;
  uint local_11c;
  longlong *local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  PSRWLOCK local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  int local_d8;
  undefined4 uStack_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 *puStack_90;
  ulonglong uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar7 = *param_2;
  if (lVar7 != 0) {
    lVar22 = *param_1;
    lVar14 = FUN_1400d7050(lVar22 + 0x30);
    if (lVar14 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_170 = &local_a8;
        local_a8 = FUN_141030f22;
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
      if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
            (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
         (lVar15 = FUN_141169abc(lVar22), lVar15 != 0)) {
        local_a8 = (code *)0x0;
        uStack_a0 = (longlong *)0x0;
        local_98 = local_98 & 0xffffffff00000000;
        puStack_90 = (undefined4 *)0x0;
        uStack_88 = 0;
        plVar16 = (longlong *)0x0;
        FUN_1446ddda2(&local_a8,"DiscoveryCategory_Collectible",0);
        if (DAT_14cb77ec0 != 0) {
          plVar16 = (longlong *)FUN_144837462(DAT_14cb77ec0,&local_a8);
        }
        if (puStack_90 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        local_a8 = (code *)0x0;
        uStack_a0 = (longlong *)0x0;
        local_98 = local_98 & 0xffffffff00000000;
        puStack_90 = (undefined4 *)0x0;
        uStack_88 = 0;
        plVar17 = (longlong *)0x0;
        FUN_1446ddda2(&local_a8,"DiscoveryCategory_Activity",0);
        if (DAT_14cb77ec0 != 0) {
          plVar17 = (longlong *)FUN_144837462(DAT_14cb77ec0,&local_a8);
        }
        if (puStack_90 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        local_a8 = (code *)0x0;
        uStack_a0 = (longlong *)0x0;
        local_98 = local_98 & 0xffffffff00000000;
        puStack_90 = (undefined4 *)0x0;
        uStack_88 = 0;
        plVar18 = (longlong *)0x0;
        FUN_1446ddda2(&local_a8,"DiscoveryCategory_PoA",0);
        if (DAT_14cb77ec0 != 0) {
          plVar18 = (longlong *)FUN_144837462(DAT_14cb77ec0,&local_a8);
        }
        if (puStack_90 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        lVar20 = *(longlong *)(lVar7 + 0x38);
        local_150 = plVar16;
        if (lVar20 == 0) {
          uVar19 = FUN_14050c9fe();
          lVar20 = FUN_14477b664(uVar19);
          *(longlong *)(lVar7 + 0x38) = lVar20;
        }
        lVar25 = *(longlong *)(lVar7 + 0x40);
        if (lVar25 == 0) {
          if ((lVar20 == 0) || (*(longlong *)(lVar7 + 0x30) == 0)) goto LAB_14425d7aa;
          plVar16 = *(longlong **)(lVar20 + 0xb8);
          if ((plVar16 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar10 == '\0')) {
            *(undefined8 *)(lVar7 + 0x40) = 0;
            goto LAB_14425d7aa;
          }
          uVar19 = (**(code **)(*plVar16 + 0x110))(plVar16);
          lVar25 = FUN_144aff482(uVar19,(longlong *)(lVar7 + 0x30));
          *(longlong *)(lVar7 + 0x40) = lVar25;
          if (lVar25 == 0) goto LAB_14425d7aa;
        }
        lVar20 = *(longlong *)(lVar25 + 0x20);
        if (lVar20 == 0) {
          uVar19 = FUN_145d88524();
          lVar20 = FUN_14477b664(uVar19);
          *(longlong *)(lVar25 + 0x20) = lVar20;
        }
        plVar16 = *(longlong **)(lVar25 + 0x28);
        local_140 = lVar25;
        if (plVar16 == (longlong *)0x0) {
          if ((lVar20 == 0) || (*(longlong *)(lVar25 + 0x18) == 0)) goto LAB_14425d7aa;
          plVar16 = *(longlong **)(lVar20 + 0xb8);
          if ((plVar16 == (longlong *)0x0) ||
             (cVar10 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar10 == '\0')) {
            *(undefined8 *)(local_140 + 0x28) = 0;
            goto LAB_14425d7aa;
          }
          uVar19 = (**(code **)(*plVar16 + 0x110))(plVar16);
          plVar16 = (longlong *)FUN_144aff482(uVar19,(longlong *)(lVar25 + 0x18));
          *(longlong **)(local_140 + 0x28) = plVar16;
          if (plVar16 == (longlong *)0x0) goto LAB_14425d7aa;
        }
        if (((plVar16 == plVar18) || (plVar16 == local_150)) || (plVar16 == plVar17)) {
          FUN_1449027d0(lVar22,&local_a8);
          plVar17 = *(longlong **)((longlong)local_a8 + 0x410);
          SRWLock = (PSRWLOCK)(plVar17 + 0x36);
          AcquireSRWLockExclusive(SRWLock);
          plVar18 = uStack_a0;
          *(int *)(plVar17 + 0x35) = (int)plVar17[0x35] + 1;
          local_138 = plVar17;
          if (uStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar17 = uStack_a0 + 1;
            *(int *)plVar17 = (int)*plVar17 + -1;
            UNLOCK();
            if ((int)*plVar17 == 0) {
              (**(code **)*uStack_a0)(uStack_a0);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar18 + 0x10))(plVar18);
              }
            }
          }
          local_b8 = (longlong *)0x0;
          uStack_b0 = 0;
          FUN_14103b374(lVar15,&local_b8);
          if ((longlong)(int)uStack_b0 == 0) {
            uVar21 = 0;
          }
          else {
            plVar17 = local_b8 + (longlong)(int)uStack_b0 * 2;
            local_110 = (longlong *)(local_140 + 0x1c8);
            local_e8 = lVar7 + 0xb8;
            local_108 = local_138 + 0x18;
            local_118 = local_138 + 0x16;
            local_128 = (longlong *)(lVar22 + 0x1f8);
            local_f0 = local_138 + 0x1f;
            plVar18 = local_b8;
            lVar15 = local_140;
            local_150 = plVar17;
            local_148 = lVar22;
            local_f8 = SRWLock;
            local_e0 = plVar16;
            do {
              lVar22 = *plVar18;
              plVar16 = (longlong *)plVar18[1];
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
                UNLOCK();
              }
              iVar13 = 3;
              lVar20 = lVar15;
              if (((lVar22 != 0) && (*(longlong *)(lVar22 + 0x18) != 0)) &&
                 (*(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x18) == *(longlong *)(lVar7 + 0x130)
                 )) {
                uVar19 = FUN_1418c9d14();
                plVar31 = local_e0;
                cVar10 = FUN_1448093f4(local_e0,uVar19);
                local_c0 = (longlong *)0x0;
                iVar13 = 3;
                plVar17 = local_150;
                lVar20 = local_140;
                if (cVar10 != '\0') {
                  local_c0 = plVar31;
                  uVar19 = FUN_1406d3bdc();
                  cVar10 = FUN_1448093f4(lVar15,uVar19);
                  lVar25 = local_148;
                  plVar17 = local_150;
                  lVar20 = local_140;
                  if (cVar10 != '\0') {
                    lVar23 = *(longlong *)(lVar15 + 0x1d0);
                    if (lVar23 == 0) {
                      uVar19 = FUN_1465d5758();
                      lVar23 = FUN_14477b664(uVar19);
                      *(longlong *)(lVar15 + 0x1d0) = lVar23;
                    }
                    uVar21 = *(ulonglong *)(lVar15 + 0x1d8);
                    if (uVar21 == 0) {
                      plVar17 = local_150;
                      lVar20 = local_140;
                      if ((lVar23 != 0) && (*local_110 != 0)) {
                        plVar17 = *(longlong **)(lVar23 + 0xb8);
                        if ((plVar17 == (longlong *)0x0) ||
                           (cVar10 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar10 == '\0')) {
                          *(undefined8 *)(local_140 + 0x1d8) = 0;
                          plVar17 = local_150;
                          lVar20 = local_140;
                        }
                        else {
                          uVar19 = (**(code **)(*plVar17 + 0x110))(plVar17);
                          uVar21 = FUN_144aff482(uVar19,local_110);
                          *(ulonglong *)(local_140 + 0x1d8) = uVar21;
                          plVar17 = local_150;
                          lVar20 = local_140;
                          if (uVar21 != 0) goto LAB_14425db30;
                        }
                      }
                    }
                    else {
LAB_14425db30:
                      puStack_90 = (undefined4 *)((ulonglong)puStack_90 & 0xffffffffffffff00);
                      local_c8 = (longlong *)FUN_144194d16(lVar22,local_e8,&local_a8);
                      plVar17 = local_108;
                      uVar27 = ((uint)((ulonglong)local_c8 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)local_c8 >> 4)) * -0x7a143595;
                      uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                      uVar27 = uVar27 >> 0x10 ^ uVar27;
                      if ((int)local_138[0x19] != *(int *)((longlong)local_138 + 0xf4)) {
                        plVar31 = (longlong *)local_138[0x20];
                        if ((longlong *)local_138[0x20] == (longlong *)0x0) {
                          plVar31 = local_f0;
                        }
                        iVar13 = *(int *)((longlong)plVar31 +
                                         (ulonglong)((int)local_138[0x21] - 1U & uVar27) * 4);
                        if (iVar13 != -1) {
                          do {
                            lVar22 = *local_108 + (longlong)iVar13 * 0x60;
                            if (*(longlong **)(*local_108 + (longlong)iVar13 * 0x60) == local_c8) {
                              if (lVar22 != 0) goto LAB_14425dc47;
                              break;
                            }
                            iVar13 = *(int *)(lVar22 + 0x58);
                          } while (iVar13 != -1);
                        }
                      }
                      local_a8 = (code *)&local_c8;
                      FUN_145bf2cc6(local_108,&local_d8,uVar27,&local_a8);
                      lVar22 = *plVar17 + (longlong)local_d8 * 0x60;
LAB_14425dc47:
                      plVar17 = (longlong *)(lVar22 + 8);
                      uVar27 = ((uint)((ulonglong)local_c0 >> 0x14) & 0xffff ^
                               (uint)((ulonglong)local_c0 >> 4)) * -0x7a143595;
                      uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                      uVar27 = uVar27 >> 0x10 ^ uVar27;
                      if (*(int *)(lVar22 + 0x10) != *(int *)(lVar22 + 0x3c)) {
                        lVar15 = lVar22 + 0x40;
                        if (*(longlong *)(lVar22 + 0x48) != 0) {
                          lVar15 = *(longlong *)(lVar22 + 0x48);
                        }
                        iVar13 = *(int *)(lVar15 + (ulonglong)
                                                   (*(int *)(lVar22 + 0x50) - 1U & uVar27) * 4);
                        if (iVar13 != -1) {
                          do {
                            lVar22 = *plVar17 + (longlong)iVar13 * 0x60;
                            if (*(longlong **)(*plVar17 + (longlong)iVar13 * 0x60) == local_c0) {
                              if (lVar22 != 0) goto LAB_14425dd1a;
                              break;
                            }
                            iVar13 = *(int *)(lVar22 + 0x58);
                          } while (iVar13 != -1);
                        }
                      }
                      local_a8 = (code *)&local_c0;
                      FUN_1459a7574(plVar17,&local_d8,uVar27,&local_a8);
                      lVar22 = *plVar17 + (longlong)local_d8 * 0x60;
LAB_14425dd1a:
                      plVar17 = (longlong *)(lVar22 + 8);
                      uVar27 = ((uint)(uVar21 >> 0x14) & 0xffff ^ (uint)(uVar21 >> 4)) * -0x7a143595
                      ;
                      uVar11 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                      uVar11 = uVar11 >> 0x10 ^ uVar11;
                      uVar27 = *(uint *)(lVar22 + 0x10);
                      puVar24 = (undefined4 *)(ulonglong)uVar27;
                      uVar30 = *(uint *)(lVar22 + 0x3c);
                      if (uVar27 != uVar30) {
                        lVar15 = lVar22 + 0x40;
                        if (*(longlong *)(lVar22 + 0x48) != 0) {
                          lVar15 = *(longlong *)(lVar22 + 0x48);
                        }
                        iVar13 = *(int *)(lVar15 + (ulonglong)
                                                   (*(int *)(lVar22 + 0x50) - 1U & uVar11) * 4);
                        if (iVar13 != -1) {
                          do {
                            lVar15 = *plVar17 + (longlong)iVar13 * 0x50;
                            if (*(ulonglong *)(*plVar17 + (longlong)iVar13 * 0x50) == uVar21) {
                              if (lVar15 != 0) goto LAB_14425e050;
                              break;
                            }
                            iVar13 = *(int *)(lVar15 + 0x48);
                          } while (iVar13 != -1);
                        }
                      }
                      if (uVar30 == 0) {
                        *(uint *)(lVar22 + 0x10) = uVar27 + 1;
                        if (*(uint *)(lVar22 + 0x14) == uVar27) {
                          local_158 = puVar24;
                          FUN_1406fba42(plVar17,puVar24);
                          puVar24 = local_158;
                        }
                        iVar13 = *(int *)(lVar22 + 0x30);
                        if (iVar13 == 0) {
                          iVar12 = -1;
                        }
                        else {
                          iVar12 = iVar13 + 0x1e;
                          if (-1 < iVar13 + -1) {
                            iVar12 = iVar13 + -1;
                          }
                          iVar12 = iVar12 >> 5;
                        }
                        lVar20 = lVar22 + 0x18;
                        iVar33 = iVar13 + 1;
                        iVar34 = iVar13 + 0x1f;
                        if (-1 < iVar13) {
                          iVar34 = iVar13;
                        }
                        iVar34 = iVar34 >> 5;
                        if (iVar34 == iVar12) {
                          *(int *)(lVar22 + 0x30) = iVar33;
                        }
                        else {
                          local_12c = iVar34;
                          if (*(int *)(lVar22 + 0x34) <= iVar13) {
                            iVar12 = iVar13;
                            local_158 = puVar24;
                            local_11c = uVar11;
                            local_100 = lVar20;
                            if (iVar13 + 0x20U < 0xa0) {
                              iVar33 = 0x80;
                            }
                            else {
                              uVar27 = iVar13 + 0x20U >> 5;
                              if (*(int *)(lVar22 + 0x34) + 0x1fU < 0xa0) {
                                uVar30 = 4;
                                if (4 < uVar27) {
                                  uVar30 = uVar27;
                                }
                              }
                              else {
                                uVar30 = uVar27 + (uVar27 * 3 >> 3) + 0x10;
                              }
                              uVar28 = (ulonglong)(uVar30 * 4);
                              if (DAT_14c872d28 != (longlong *)0x0) {
                                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                  uVar11 = (uint)(uVar28 + 0xf);
                                  if (uVar30 < 0x1ffd) {
                                    uVar28 = (ulonglong)
                                             (ushort)(&DAT_14c841d90)
                                                     [0x32 - (byte)(&DAT_14c841e00)
                                                                   [uVar28 + 0xf >> 4]];
                                  }
                                  else {
                                    uVar29 = (ulonglong)(uVar11 & 0xfffffff0);
                                    if (uVar29 < 0x7ff1) {
                                      bVar26 = (&DAT_14c841e00)[uVar11 >> 4];
                                      uVar32 = 0x32;
                                      if (0x32 < bVar26) {
                                        uVar32 = (ulonglong)bVar26;
                                      }
                                      uVar35 = 0x32 - (ulonglong)bVar26;
                                      do {
                                        uVar28 = (ulonglong)
                                                 (ushort)(&DAT_14c841d90)[uVar35 & 0xffffffff];
                                        if (((&DAT_14c841d90)[uVar35 & 0xffffffff] & 0xf) == 0)
                                        goto LAB_14425ea66;
                                        lVar15 = uVar32 + 1 + uVar35;
                                        uVar35 = uVar35 - 1;
                                      } while (lVar15 != 0x33);
                                    }
                                    uVar28 = (ulonglong)DAT_14c841df8;
                                    if (DAT_14c841df8 < 0x11) {
                                      uVar28 = 0x10;
                                    }
                                    uVar28 = -uVar28 & (uVar29 + uVar28) - 1;
                                  }
                                }
                                else {
                                  uVar28 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                     (DAT_14c872d28,uVar28,0);
                                  iVar12 = *(int *)(lVar22 + 0x30);
                                }
                              }
LAB_14425ea66:
                              iVar34 = (int)(uVar28 >> 2);
                              iVar33 = iVar34 << 5;
                              if (iVar34 < (int)uVar27) {
                                iVar33 = -0x20;
                              }
                            }
                            lVar20 = local_100;
                            *(int *)(lVar22 + 0x34) = iVar33;
                            FUN_1446efbd8(local_100,iVar12);
                            iVar33 = *(int *)(lVar22 + 0x30) + 1;
                            lVar25 = local_148;
                            puVar24 = local_158;
                            uVar11 = local_11c;
                          }
                          iVar12 = iVar33 + 0x1f;
                          if (-1 < iVar33) {
                            iVar12 = iVar33;
                          }
                          *(int *)(lVar22 + 0x30) = iVar33;
                          iVar34 = local_12c;
                          if (iVar33 % 0x20 != 0) {
                            lVar15 = *(longlong *)(lVar22 + 0x28);
                            if (*(longlong *)(lVar22 + 0x28) == 0) {
                              lVar15 = lVar20;
                            }
                            bVar26 = -(char)(iVar33 % 0x20);
                            *(uint *)(lVar15 + (longlong)(iVar12 >> 5) * 4) =
                                 (uint)(*(int *)(lVar15 + (longlong)(iVar12 >> 5) * 4) <<
                                       (bVar26 & 0x1f)) >> (bVar26 & 0x1f);
                          }
                        }
                        lVar15 = (longlong)(int)puVar24;
                        if (*(longlong *)(lVar22 + 0x28) != 0) {
                          lVar20 = *(longlong *)(lVar22 + 0x28);
                        }
                        bVar26 = (byte)iVar13 & 0x1f;
                        puVar2 = (uint *)(lVar20 + (longlong)iVar34 * 4);
                        *puVar2 = *puVar2 & (-2 << bVar26 | 0xfffffffeU >> 0x20 - bVar26);
                      }
                      else {
                        puVar24 = (undefined4 *)(ulonglong)*(uint *)(lVar22 + 0x38);
                        lVar15 = (longlong)(int)*(uint *)(lVar22 + 0x38);
                        iVar13 = *(int *)(*plVar17 + 4 + lVar15 * 0x50);
                        *(int *)(lVar22 + 0x38) = iVar13;
                        *(uint *)(lVar22 + 0x3c) = uVar30 - 1;
                        lVar25 = local_148;
                        if (uVar30 - 1 != 0) {
                          *(undefined4 *)(*plVar17 + (longlong)iVar13 * 0x50) = 0xffffffff;
                        }
                      }
                      iVar13 = (int)puVar24;
                      lVar20 = lVar22 + 0x18;
                      if (*(longlong *)(lVar22 + 0x28) != 0) {
                        lVar20 = *(longlong *)(lVar22 + 0x28);
                      }
                      iVar12 = iVar13 + 0x1f;
                      if (-1 < iVar13) {
                        iVar12 = iVar13;
                      }
                      puVar2 = (uint *)(lVar20 + (longlong)(iVar12 >> 5) * 4);
                      *puVar2 = *puVar2 | 1 << ((byte)puVar24 & 0x1f);
                      lVar20 = *plVar17;
                      lVar15 = lVar15 * 0x50;
                      pvVar3 = (void *)(lVar20 + lVar15);
                      local_78 = 0;
                      uStack_70 = 0;
                      uStack_88 = 0;
                      uStack_80 = 0;
                      local_98 = 0;
                      puStack_90 = (undefined4 *)0x0;
                      local_a8 = (code *)0x0;
                      uStack_a0 = (longlong *)0x0;
                      *(ulonglong *)(lVar20 + lVar15) = uVar21;
                      puVar5 = (undefined8 *)(lVar20 + 8 + lVar15);
                      *puVar5 = 0;
                      puVar5[1] = 0;
                      *(undefined4 *)(lVar20 + 0x18 + lVar15) = 0;
                      *(undefined1 *)(lVar20 + 0x1c + lVar15) = 0;
                      *(undefined8 *)(lVar20 + 0x20 + lVar15) = 0;
                      puVar6 = (undefined4 *)(lVar20 + 0x28 + lVar15);
                      *puVar6 = 0;
                      puVar6[1] = 0;
                      puVar6[2] = 0;
                      puVar6[3] = 0;
                      puVar5 = (undefined8 *)(lVar20 + 0x38 + lVar15);
                      *puVar5 = 0;
                      puVar5[1] = 0;
                      *(undefined4 *)(lVar20 + 0x48 + lVar15) = 0xffffffff;
                      uVar27 = *(int *)(lVar22 + 0x10) - *(int *)(lVar22 + 0x3c);
                      if ((uVar27 != 0) && (uVar27 != 1)) {
                        lVar15 = lVar22 + 0x40;
                        if (*(longlong *)(lVar22 + 0x48) != 0) {
                          lVar15 = *(longlong *)(lVar22 + 0x48);
                        }
                        iVar12 = *(int *)(lVar15 + (ulonglong)
                                                   (*(int *)(lVar22 + 0x50) - 1U & uVar11) * 4);
                        if (iVar12 != -1) {
                          do {
                            _Dst = (void *)(*plVar17 + (longlong)iVar12 * 0x50);
                            if (*(ulonglong *)(*plVar17 + (longlong)iVar12 * 0x50) == uVar21) {
                              local_158 = puVar24;
                              if (*(longlong *)((longlong)_Dst + 0x38) != 0) {
                                FUN_1400020a8();
                              }
                              if (*(longlong *)((longlong)_Dst + 8) != 0) {
                                FUN_1400020a8();
                              }
                              memmove(_Dst,pvVar3,0x48);
                              puVar24 = local_158;
                              FUN_148e2c438(plVar17);
                              lVar25 = local_148;
                              goto LAB_14425e03a;
                            }
                            iVar12 = *(int *)((longlong)_Dst + 0x48);
                          } while (iVar12 != -1);
                        }
                      }
                      iVar12 = 1;
                      if (3 < uVar27) {
                        uVar28 = (ulonglong)(uVar27 & 0xfffffffe) + 0xf;
                        lVar15 = 0x3f;
                        if (uVar28 != 0) {
                          for (; uVar28 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                          }
                        }
                        iVar12 = 1 << ((byte)lVar15 & 0x1f);
                      }
                      if (((int)uVar27 < 1) || (iVar12 <= *(int *)(lVar22 + 0x50))) {
                        uVar11 = *(int *)(lVar22 + 0x50) - 1U & uVar11;
                        *(uint *)((longlong)pvVar3 + 0x4c) = uVar11;
                        lVar15 = *(longlong *)(lVar22 + 0x48);
                        if (*(longlong *)(lVar22 + 0x48) == 0) {
                          lVar15 = lVar22 + 0x40;
                        }
                        *(undefined4 *)((longlong)pvVar3 + 0x48) =
                             *(undefined4 *)
                              (lVar15 + ((longlong)*(int *)(lVar22 + 0x50) - 1U &
                                        (longlong)(int)uVar11) * 4);
                        lVar15 = *(longlong *)(lVar22 + 0x48);
                        if (*(longlong *)(lVar22 + 0x48) == 0) {
                          lVar15 = lVar22 + 0x40;
                        }
                        *(int *)(lVar15 + ((longlong)*(int *)(lVar22 + 0x50) - 1U &
                                          (longlong)(int)uVar11) * 4) = iVar13;
                      }
                      else {
                        *(int *)(lVar22 + 0x50) = iVar12;
                        FUN_1418f534a(plVar17);
                      }
LAB_14425e03a:
                      lVar15 = *plVar17 + (longlong)(int)puVar24 * 0x50;
LAB_14425e050:
                      plVar17 = (longlong *)(lVar15 + 8);
                      iVar13 = *(int *)(lVar15 + 0x10);
                      uVar27 = iVar13 + 1;
                      *(uint *)(lVar15 + 0x10) = uVar27;
                      if (*(uint *)(lVar15 + 0x14) < uVar27) {
                        FUN_14050b866(plVar17);
                      }
                      *(longlong *)(*plVar17 + (longlong)iVar13 * 8) = lVar7;
                      if (*(char *)(lVar15 + 0x1c) == '\0') {
                        if ((longlong)(int)local_138[0x17] != 0) {
                          lVar22 = 0;
                          do {
                            if (*(ulonglong *)(local_138[0x16] + lVar22) == uVar21)
                            goto LAB_14425e084;
                            lVar22 = lVar22 + 8;
                          } while ((longlong)(int)local_138[0x17] * 8 != lVar22);
                        }
                        FUN_1407934de(&local_d8,lVar14);
                        lVar22 = CONCAT44(uStack_d4,local_d8);
                        if (lVar22 == 0) {
LAB_14425e2ca:
                          if ((((((*(int *)(lVar15 + 0x24) == 0) ||
                                 (uVar27 = *(uint *)(lVar15 + 0x20), (int)uVar27 < 0)) ||
                                (DAT_14c9647dc <= (int)uVar27)) ||
                               ((plVar31 = (longlong *)
                                           ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
                                plVar31 == (longlong *)0x0 ||
                                ((int)plVar31[2] != *(int *)(lVar15 + 0x24))))) ||
                              ((*(uint *)(plVar31 + 1) & 0x10200000) != 0)) || (*plVar31 == 0)) {
                            puVar24 = (undefined4 *)(lVar15 + 0x28);
                            if (*(longlong *)(lVar15 + 0x28) != 0) {
                              lVar22 = FUN_140007850();
                              cVar10 = (*(code *)PTR_FUN_14c758760)();
                              if ((lVar22 == 0) || (cVar10 == '\0')) {
                                if (lVar22 != 0) {
                                  uVar27 = *(uint *)(lVar22 + 0xc);
                                  *(uint *)(lVar15 + 0x20) = uVar27;
                                  if ((int)uVar27 < DAT_14c9647dc) {
                                    lVar20 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                                  }
                                  else {
                                    lVar20 = 0;
                                  }
                                  iVar13 = *(int *)(lVar20 + 0x10);
                                  iVar12 = DAT_14c964868;
                                  goto joined_r0x00014425e6c4;
                                }
                                *(undefined8 *)(lVar15 + 0x20) = 0;
                              }
                              else {
                                uVar27 = *(uint *)(lVar22 + 0xc);
                                if ((int)uVar27 < DAT_14c9647dc) {
                                  lVar20 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                                }
                                else {
                                  lVar20 = 0;
                                }
                                if ((*(uint *)(lVar20 + 8) & 0x8400000) == 0) {
                                  *(uint *)(lVar15 + 0x20) = uVar27;
                                  if ((int)uVar27 < DAT_14c9647dc) {
                                    lVar20 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                                  }
                                  else {
                                    lVar20 = 0;
                                  }
                                  iVar13 = *(int *)(lVar20 + 0x10);
                                  lVar25 = local_148;
                                  iVar12 = DAT_14c964868;
joined_r0x00014425e6c4:
                                  DAT_14c964868 = iVar12;
                                  local_158 = puVar24;
                                  if (iVar13 == 0) {
                                    LOCK();
                                    DAT_14c964868 = iVar12 + 1;
                                    UNLOCK();
                                    iVar33 = iVar12 + 1;
                                    if (iVar12 < 1000) {
                                      FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar33);
                                    }
                                    LOCK();
                                    iVar13 = *(int *)(lVar20 + 0x10);
                                    bVar36 = iVar13 == 0;
                                    if (bVar36) {
                                      *(int *)(lVar20 + 0x10) = iVar33;
                                      iVar13 = 0;
                                    }
                                    UNLOCK();
                                    lVar25 = local_148;
                                    if (bVar36) {
                                      iVar13 = iVar33;
                                    }
                                  }
                                  *(int *)(lVar15 + 0x24) = iVar13;
                                  puVar24 = local_158;
                                }
                                if ((*(uint *)(lVar22 + 8) >> 0x1e & 1) == 0) goto LAB_14425e32f;
                              }
                            }
                            plVar31 = (longlong *)FUN_140bd958e(local_140,1);
                            if (plVar31 != (longlong *)0x0) {
                              *(longlong *)(lVar15 + 0x20) = plVar31[3];
                              uVar8 = *(undefined4 *)((longlong)plVar31 + 0x24);
                              lVar22 = plVar31[5];
                              uVar9 = *(undefined4 *)((longlong)plVar31 + 0x2c);
                              *puVar24 = (int)plVar31[4];
                              puVar24[1] = uVar8;
                              puVar24[2] = (int)lVar22;
                              puVar24[3] = uVar9;
                              if (plVar17 != plVar31) {
                                iVar13 = (int)plVar31[7];
                                puVar24 = (undefined4 *)plVar31[6];
                                *(int *)(lVar15 + 0x40) = iVar13;
                                if (iVar13 == 0 && *(int *)(lVar15 + 0x44) == 0) {
                                  *(undefined4 *)(lVar15 + 0x44) = 0;
                                }
                                else {
                                  local_158 = puVar24;
                                  FUN_1446dd670((undefined8 *)(lVar15 + 0x38),iVar13);
                                  if (iVar13 != 0) {
                                    memcpy(*(void **)(lVar15 + 0x38),local_158,(longlong)iVar13 * 2)
                                    ;
                                  }
                                }
                              }
                            }
                          }
LAB_14425e32f:
                          if (*(longlong *)(lVar15 + 0x28) == 0) {
                            lVar22 = *(longlong *)(lVar25 + 0x200);
                            if (lVar22 == 0) {
                              uVar19 = FUN_140bd9786();
                              lVar22 = FUN_14477b664(uVar19);
                              *(longlong *)(lVar25 + 0x200) = lVar22;
                            }
                            lVar20 = *(longlong *)(lVar25 + 0x208);
                            if (lVar20 == 0) {
                              if ((lVar22 != 0) && (*local_128 != 0)) {
                                plVar17 = *(longlong **)(lVar22 + 0xb8);
                                if ((plVar17 == (longlong *)0x0) ||
                                   (cVar10 = (**(code **)(*plVar17 + 0x108))(), cVar10 == '\0')) {
                                  *(undefined8 *)(lVar25 + 0x208) = 0;
                                }
                                else {
                                  uVar19 = (**(code **)(*plVar17 + 0x110))(plVar17);
                                  lVar20 = FUN_144aff482(uVar19,local_128);
                                  *(longlong *)(lVar25 + 0x208) = lVar20;
                                  if (lVar20 != 0) {
                                    lVar22 = *(longlong *)(lVar25 + 0x200);
                                    goto LAB_14425e376;
                                  }
                                }
                              }
                              local_98 = 0;
                              puStack_90 = (undefined4 *)0x0;
                              local_a8 = (code *)0x0;
                              uStack_a0 = (longlong *)0x0;
                              uStack_88 = 0;
                            }
                            else {
LAB_14425e376:
                              if (lVar22 == 0) {
                                uVar19 = FUN_140bd9786();
                                lVar22 = FUN_14477b664(uVar19);
                                *(longlong *)(lVar25 + 0x200) = lVar22;
                                lVar20 = *(longlong *)(lVar25 + 0x208);
                                if (lVar20 == 0) {
                                  if (lVar22 == 0) {
                                    lVar20 = 0;
                                  }
                                  else {
                                    lVar20 = 0;
                                    if (*local_128 != 0) {
                                      plVar17 = *(longlong **)(lVar22 + 0xb8);
                                      if ((plVar17 == (longlong *)0x0) ||
                                         (cVar10 = (**(code **)(*plVar17 + 0x108))(plVar17),
                                         cVar10 == '\0')) {
                                        lVar20 = 0;
                                      }
                                      else {
                                        uVar19 = (**(code **)(*plVar17 + 0x110))(plVar17);
                                        lVar20 = FUN_144aff482(uVar19,local_128);
                                      }
                                      *(longlong *)(local_148 + 0x208) = lVar20;
                                    }
                                  }
                                }
                              }
                              local_a8 = *(code **)(lVar20 + 0x18);
                              uStack_a0 = *(longlong **)(lVar20 + 0x20);
                              local_98 = *(ulonglong *)(lVar20 + 0x28);
                              puStack_90 = (undefined4 *)0x0;
                              uVar27 = *(uint *)(lVar20 + 0x38);
                              pvVar3 = *(void **)(lVar20 + 0x30);
                              uStack_88 = CONCAT44(uStack_88._4_4_,uVar27);
                              if ((longlong)(int)uVar27 == 0) {
                                uStack_88 = (ulonglong)uVar27;
                              }
                              else {
                                FUN_1446dd670(&puStack_90,uVar27,0);
                                memcpy(puStack_90,pvVar3,(longlong)(int)uVar27 * 2);
                              }
                            }
                            *(code **)(lVar15 + 0x20) = local_a8;
                            *(undefined4 *)(lVar15 + 0x28) = (undefined4)uStack_a0;
                            *(undefined4 *)(lVar15 + 0x2c) = uStack_a0._4_4_;
                            *(undefined4 *)(lVar15 + 0x30) = (undefined4)local_98;
                            *(undefined4 *)(lVar15 + 0x34) = local_98._4_4_;
                            ppuVar4 = (undefined4 **)(lVar15 + 0x38);
                            if (ppuVar4 != &puStack_90) {
                              iVar13 = (int)uStack_88;
                              lVar22 = (longlong)(int)uStack_88;
                              *(int *)(lVar15 + 0x40) = (int)uStack_88;
                              if ((int)uStack_88 == 0 && *(int *)(lVar15 + 0x44) == 0) {
                                *(undefined4 *)(lVar15 + 0x44) = 0;
                              }
                              else {
                                local_158 = puStack_90;
                                FUN_1446dd670(ppuVar4,uStack_88 & 0xffffffff);
                                if (iVar13 != 0) {
                                  memcpy(*ppuVar4,local_158,lVar22 * 2);
                                }
                              }
                            }
                            if (puStack_90 != (undefined4 *)0x0) {
                              FUN_1400020a8();
                            }
                          }
                        }
                        else {
                          FUN_14073f620(&local_a8,lVar7);
                          iVar13 = FUN_1406ba864(lVar22,&local_a8,0);
                          if (puStack_90 != (undefined4 *)0x0) {
                            FUN_1400020a8();
                          }
                          if (iVar13 != 2) goto LAB_14425e2ca;
                          *(undefined1 *)(lVar15 + 0x1c) = 1;
                          iVar13 = (int)local_138[0x17];
                          *(uint *)(local_138 + 0x17) = iVar13 + 1U;
                          if (*(uint *)((longlong)local_138 + 0xbc) < iVar13 + 1U) {
                            FUN_14663c97e(local_118,iVar13);
                          }
                          *(ulonglong *)(*local_118 + (longlong)iVar13 * 8) = uVar21;
                          if ((((*(int *)(lVar15 + 0x24) == 0) ||
                               (uVar27 = *(uint *)(lVar15 + 0x20), (int)uVar27 < 0)) ||
                              (DAT_14c9647dc <= (int)uVar27)) ||
                             (((plVar31 = (longlong *)
                                          ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                                          *(longlong *)
                                           (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
                               plVar31 == (longlong *)0x0 ||
                               ((int)plVar31[2] != *(int *)(lVar15 + 0x24))) ||
                              (((*(uint *)(plVar31 + 1) & 0x10200000) != 0 || (*plVar31 == 0)))))) {
                            puVar24 = (undefined4 *)(lVar15 + 0x28);
                            if (*(longlong *)(lVar15 + 0x28) != 0) {
                              lVar22 = FUN_140007850();
                              cVar10 = (*(code *)PTR_FUN_14c758760)();
                              local_158 = puVar24;
                              if ((lVar22 == 0) || (cVar10 == '\0')) {
                                if (lVar22 != 0) {
                                  uVar27 = *(uint *)(lVar22 + 0xc);
                                  goto LAB_14425e7f0;
                                }
                                *(undefined8 *)(lVar15 + 0x20) = 0;
                              }
                              else {
                                uVar27 = *(uint *)(lVar22 + 0xc);
                                if ((int)uVar27 < DAT_14c9647dc) {
                                  lVar20 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                                }
                                else {
                                  lVar20 = 0;
                                }
                                if ((*(uint *)(lVar20 + 8) & 0x8400000) == 0) {
LAB_14425e7f0:
                                  *(uint *)(lVar15 + 0x20) = uVar27;
                                  if ((int)uVar27 < DAT_14c9647dc) {
                                    lVar20 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                                             *(longlong *)
                                              (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                                  }
                                  else {
                                    lVar20 = 0;
                                  }
                                  iVar13 = *(int *)(lVar20 + 0x10);
                                  if (*(int *)(lVar20 + 0x10) == 0) {
                                    LOCK();
                                    iVar13 = DAT_14c964868 + 1;
                                    UNLOCK();
                                    iVar12 = DAT_14c964868 + 1;
                                    bVar36 = DAT_14c964868 < 1000;
                                    DAT_14c964868 = iVar13;
                                    if (bVar36) {
                                      FUN_140033559(
                                                  ".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar12);
                                    }
                                    LOCK();
                                    iVar13 = *(int *)(lVar20 + 0x10);
                                    bVar36 = iVar13 == 0;
                                    if (bVar36) {
                                      *(int *)(lVar20 + 0x10) = iVar12;
                                      iVar13 = 0;
                                    }
                                    UNLOCK();
                                    if (bVar36) {
                                      iVar13 = iVar12;
                                    }
                                  }
                                  *(int *)(lVar15 + 0x24) = iVar13;
                                }
                                puVar24 = local_158;
                                if ((*(uint *)(lVar22 + 8) >> 0x1e & 1) == 0) goto LAB_14425ecd5;
                              }
                            }
                            plVar31 = (longlong *)FUN_140bd958e(local_140,2);
                            if (plVar31 != (longlong *)0x0) {
                              *(longlong *)(lVar15 + 0x20) = plVar31[3];
                              uVar8 = *(undefined4 *)((longlong)plVar31 + 0x24);
                              lVar22 = plVar31[5];
                              uVar9 = *(undefined4 *)((longlong)plVar31 + 0x2c);
                              *puVar24 = (int)plVar31[4];
                              puVar24[1] = uVar8;
                              puVar24[2] = (int)lVar22;
                              puVar24[3] = uVar9;
                              if (plVar17 != plVar31) {
                                iVar13 = (int)plVar31[7];
                                local_158 = (undefined4 *)plVar31[6];
                                *(int *)(lVar15 + 0x40) = iVar13;
                                if (iVar13 == 0 && *(int *)(lVar15 + 0x44) == 0) {
                                  *(undefined4 *)(lVar15 + 0x44) = 0;
                                }
                                else {
                                  FUN_1446dd670((undefined8 *)(lVar15 + 0x38),iVar13);
                                  if (iVar13 != 0) {
                                    memcpy(*(void **)(lVar15 + 0x38),local_158,(longlong)iVar13 * 2)
                                    ;
                                  }
                                }
                              }
                            }
                          }
                        }
LAB_14425ecd5:
                        plVar17 = local_d0;
                        if (local_d0 != (longlong *)0x0) {
                          LOCK();
                          plVar31 = local_d0 + 1;
                          *(int *)plVar31 = (int)*plVar31 + -1;
                          UNLOCK();
                          if ((int)*plVar31 == 0) {
                            (**(code **)*local_d0)(local_d0);
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
LAB_14425e084:
                        *(undefined1 *)(lVar15 + 0x1c) = 1;
                        if ((((*(int *)(lVar15 + 0x24) == 0) ||
                             (uVar27 = *(uint *)(lVar15 + 0x20), (int)uVar27 < 0)) ||
                            (DAT_14c9647dc <= (int)uVar27)) ||
                           (((plVar31 = (longlong *)
                                        ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                                        *(longlong *)
                                         (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
                             plVar31 == (longlong *)0x0 ||
                             ((int)plVar31[2] != *(int *)(lVar15 + 0x24))) ||
                            (((*(uint *)(plVar31 + 1) & 0x10200000) != 0 || (*plVar31 == 0)))))) {
                          puVar24 = (undefined4 *)(lVar15 + 0x28);
                          if (*(longlong *)(lVar15 + 0x28) != 0) {
                            lVar22 = FUN_140007850();
                            cVar10 = (*(code *)PTR_FUN_14c758760)();
                            if ((lVar22 == 0) || (cVar10 == '\0')) {
                              if (lVar22 != 0) {
                                uVar27 = *(uint *)(lVar22 + 0xc);
                                goto LAB_14425e52a;
                              }
                              *(undefined8 *)(lVar15 + 0x20) = 0;
                            }
                            else {
                              uVar27 = *(uint *)(lVar22 + 0xc);
                              if ((int)uVar27 < DAT_14c9647dc) {
                                lVar20 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                              }
                              else {
                                lVar20 = 0;
                              }
                              if ((*(uint *)(lVar20 + 8) & 0x8400000) == 0) {
LAB_14425e52a:
                                *(uint *)(lVar15 + 0x20) = uVar27;
                                if ((int)uVar27 < DAT_14c9647dc) {
                                  lVar20 = (ulonglong)((uVar27 & 0xffff) * 0x18) +
                                           *(longlong *)
                                            (DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8);
                                }
                                else {
                                  lVar20 = 0;
                                }
                                iVar13 = *(int *)(lVar20 + 0x10);
                                local_158 = puVar24;
                                if (*(int *)(lVar20 + 0x10) == 0) {
                                  LOCK();
                                  iVar13 = DAT_14c964868 + 1;
                                  UNLOCK();
                                  iVar12 = DAT_14c964868 + 1;
                                  bVar36 = DAT_14c964868 < 1000;
                                  DAT_14c964868 = iVar13;
                                  if (bVar36) {
                                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                                  ,0x23d,
                                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                                  ,iVar12);
                                  }
                                  LOCK();
                                  iVar13 = *(int *)(lVar20 + 0x10);
                                  bVar36 = iVar13 == 0;
                                  if (bVar36) {
                                    *(int *)(lVar20 + 0x10) = iVar12;
                                    iVar13 = 0;
                                  }
                                  UNLOCK();
                                  if (bVar36) {
                                    iVar13 = iVar12;
                                  }
                                }
                                *(int *)(lVar15 + 0x24) = iVar13;
                                puVar24 = local_158;
                              }
                              if ((*(uint *)(lVar22 + 8) >> 0x1e & 1) == 0) goto LAB_14425ed01;
                            }
                          }
                          plVar31 = (longlong *)FUN_140bd958e(local_140,2);
                          if (plVar31 != (longlong *)0x0) {
                            *(longlong *)(lVar15 + 0x20) = plVar31[3];
                            uVar8 = *(undefined4 *)((longlong)plVar31 + 0x24);
                            lVar22 = plVar31[5];
                            uVar9 = *(undefined4 *)((longlong)plVar31 + 0x2c);
                            *puVar24 = (int)plVar31[4];
                            puVar24[1] = uVar8;
                            puVar24[2] = (int)lVar22;
                            puVar24[3] = uVar9;
                            if (plVar17 != plVar31) {
                              iVar13 = (int)plVar31[7];
                              puVar24 = (undefined4 *)plVar31[6];
                              *(int *)(lVar15 + 0x40) = iVar13;
                              if (iVar13 == 0 && *(int *)(lVar15 + 0x44) == 0) {
                                *(undefined4 *)(lVar15 + 0x44) = 0;
                              }
                              else {
                                local_158 = puVar24;
                                FUN_1446dd670((undefined8 *)(lVar15 + 0x38),iVar13);
                                if (iVar13 != 0) {
                                  memcpy(*(void **)(lVar15 + 0x38),local_158,(longlong)iVar13 * 2);
                                }
                              }
                            }
                          }
                        }
                      }
LAB_14425ed01:
                      FUN_144102d76(&local_a8,lVar7,lVar14);
                      if (local_a8._1_1_ == '\x01') {
                        *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + (uint)(byte)local_a8;
                      }
                      iVar13 = 2;
                      plVar17 = local_150;
                      lVar20 = local_140;
                    }
                  }
                }
              }
              if (plVar16 != (longlong *)0x0) {
                LOCK();
                plVar31 = plVar16 + 1;
                *(int *)plVar31 = (int)*plVar31 + -1;
                UNLOCK();
                if ((int)*plVar31 == 0) {
                  (**(code **)*plVar16)(plVar16);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar16 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  plVar17 = local_150;
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar16 + 0x10))(plVar16);
                    plVar17 = local_150;
                  }
                }
              }
            } while ((iVar13 == 3) && (plVar18 = plVar18 + 2, lVar15 = lVar20, plVar18 != plVar17));
            uVar21 = uStack_b0 & 0xffffffff;
            SRWLock = local_f8;
          }
          FUN_14425cf20(local_b8,uVar21);
          if (local_b8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
          ReleaseSRWLockExclusive(SRWLock);
        }
      }
    }
  }
LAB_14425d7aa:
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425f07b FUN_14425f07b body=116 status=ok
// SIG undefined FUN_14425f07b(void)

longlong FUN_14425f07b(longlong param_1,undefined8 *param_2)

{
  char *_Str;
  longlong lVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  _Str = (char *)*param_2;
  if (_Str == (char *)0x0) {
    iVar5 = 0;
  }
  else {
    sVar2 = strlen(_Str);
    iVar5 = (int)sVar2;
  }
  lVar4 = (longlong)iVar5;
  if (*(ulonglong *)(param_1 + 0x10) <= (ulonglong)(lVar4 * 2 + *(longlong *)(param_1 + 8))) {
    FUN_140213274(param_1,lVar4);
  }
  if (iVar5 != 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (0 < iVar5) {
      lVar3 = 0;
      do {
        *(short *)(lVar1 + lVar3 * 2) = (short)_Str[lVar3];
        lVar3 = lVar3 + 1;
      } while (lVar4 != lVar3);
    }
    *(longlong *)(param_1 + 8) = lVar1 + lVar4 * 2;
  }
  return param_1;
}



// FUNCTION 14425f190 FUN_14425f190 body=29 status=ok
// SIG undefined FUN_14425f190(void)

undefined8 FUN_14425f190(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14425f336 FUN_14425f336 body=101 status=ok
// SIG undefined FUN_14425f336(void)

void FUN_14425f336(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14425f39c FUN_14425f39c body=101 status=ok
// SIG undefined FUN_14425f39c(void)

void FUN_14425f39c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9a8720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14425f402 FUN_14425f402 body=134 status=ok
// SIG undefined FUN_14425f402(void)

void FUN_14425f402(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8720;
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
                    /* WARNING: Could not recover jumptable at 0x00014425f479. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14425f4e4 FUN_14425f4e4 body=275 status=ok
// SIG undefined FUN_14425f4e4(void)

undefined8 FUN_14425f4e4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14425f5f1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14425f5f1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14425f5f1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14425f5a5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14425f5a5;
    }
  }
  uVar6 = 0;
LAB_14425f5a5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425f5f8 FUN_14425f5f8 body=29 status=ok
// SIG undefined FUN_14425f5f8(void)

undefined8 FUN_14425f5f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14425f7aa FUN_14425f7aa body=101 status=ok
// SIG undefined FUN_14425f7aa(void)

void FUN_14425f7aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9abc10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a87c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14425f810 FUN_14425f810 body=101 status=ok
// SIG undefined FUN_14425f810(void)

void FUN_14425f810(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9abc10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a87c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14425f876 FUN_14425f876 body=134 status=ok
// SIG undefined FUN_14425f876(void)

void FUN_14425f876(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9abc10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a87c0;
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
                    /* WARNING: Could not recover jumptable at 0x00014425f8ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14425f95e FUN_14425f95e body=284 status=ok
// SIG undefined FUN_14425f95e(void)

undefined8 FUN_14425f95e(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14425fa74;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14425fa74;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14425fa74:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14425fa27;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14425fa27;
    }
  }
  uVar6 = 0;
LAB_14425fa27:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425fa7c FUN_14425fa7c body=29 status=ok
// SIG undefined FUN_14425fa7c(void)

undefined8 FUN_14425fa7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14425fc18 FUN_14425fc18 body=93 status=ok
// SIG undefined FUN_14425fc18(void)

void FUN_14425fc18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14425fc76 FUN_14425fc76 body=93 status=ok
// SIG undefined FUN_14425fc76(void)

void FUN_14425fc76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4f5500;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8980;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14425fcd4 FUN_14425fcd4 body=126 status=ok
// SIG undefined FUN_14425fcd4(void)

void FUN_14425fcd4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4f5500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8980;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014425fd43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14425fd5c FUN_14425fd5c body=269 status=ok
// SIG undefined FUN_14425fd5c(void)

undefined8 FUN_14425fd5c(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14425fe63;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14425fe63;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14425fe63:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14425fe17;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14425fe6a(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14425fe17;
    }
  }
  uVar6 = 0;
LAB_14425fe17:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14425fe6a FUN_14425fe6a body=281 status=ok
// SIG undefined FUN_14425fe6a(void)

void FUN_14425fe6a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_1;
  if ((longlong)*(int *)(lVar3 + 0x60) != 0) {
    lVar8 = *(longlong *)(lVar3 + 0x58);
    lVar9 = (longlong)*(int *)(lVar3 + 0x60) * 0x88 + lVar8;
    do {
      FUN_1402815f4(lVar3,&local_58);
      puVar4 = *(undefined8 **)(local_58 + 0x1e0);
      AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 6));
      plVar5 = local_50;
      *(int *)(puVar4 + 5) = *(int *)(puVar4 + 5) + 1;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar7 = (int *)((longlong)plVar5 + 0xc);
          *piVar7 = *piVar7 + -1;
          UNLOCK();
          if (*piVar7 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      iVar2 = *(int *)(lVar8 + 0x10);
      piVar7 = (int *)*puVar4;
      *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 2;
      if ((longlong)*(int *)(puVar4 + 1) != 0) {
        lVar6 = (longlong)*(int *)(puVar4 + 1) * 0xd8;
        do {
          if (*piVar7 == iVar2) {
            if (piVar7 != (int *)0x0) {
              FUN_141178e82(lVar8);
            }
            break;
          }
          piVar7 = piVar7 + 0x36;
          lVar6 = lVar6 + -0xd8;
        } while (lVar6 != 0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 6));
      lVar8 = lVar8 + 0x88;
    } while (lVar8 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14425ff84 FUN_14425ff84 body=29 status=ok
// SIG undefined FUN_14425ff84(void)

undefined8 FUN_14425ff84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144260120 FUN_144260120 body=93 status=ok
// SIG undefined FUN_144260120(void)

void FUN_144260120(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14426017e FUN_14426017e body=93 status=ok
// SIG undefined FUN_14426017e(void)

void FUN_14426017e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8a60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442601dc FUN_1442601dc body=126 status=ok
// SIG undefined FUN_1442601dc(void)

void FUN_1442601dc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b982300;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9a8a60;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014426024b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144260264 FUN_144260264 body=278 status=ok
// SIG undefined FUN_144260264(void)

undefined8 FUN_144260264(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144260374;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144260374;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144260374:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144260327;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14426037c(param_1 + 0x20,param_2);
      uVar6 = 1;
      goto LAB_144260327;
    }
  }
  uVar6 = 0;
LAB_144260327:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14426037c FUN_14426037c body=277 status=ok
// SIG undefined FUN_14426037c(void)

void FUN_14426037c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *param_1;
  if ((longlong)*(int *)(lVar5 + 0x60) != 0) {
    lVar7 = *(longlong *)(lVar5 + 0x58);
    lVar8 = (longlong)*(int *)(lVar5 + 0x60) * 0x88;
    do {
      cVar4 = FUN_14663cafe(lVar7,param_2);
      if (cVar4 != '\0') {
        FUN_1402815f4(lVar5,&local_40);
        puVar3 = *(undefined8 **)(local_40 + 0x1e0);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 6));
        *(int *)(puVar3 + 5) = *(int *)(puVar3 + 5) + 1;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar6 = (int *)((longlong)local_38 + 0xc);
            *piVar6 = *piVar6 + -1;
            UNLOCK();
            if (*piVar6 == 0) {
              (**(code **)(*local_38 + 0x10))(local_38);
            }
          }
        }
        iVar2 = *(int *)(lVar7 + 0x10);
        piVar6 = (int *)*puVar3;
        *(int *)(puVar3 + 2) = *(int *)(puVar3 + 2) + 2;
        if ((longlong)*(int *)(puVar3 + 1) == 0) goto LAB_144260485;
        lVar5 = (longlong)*(int *)(puVar3 + 1) * 0xd8;
        goto LAB_144260462;
      }
      lVar7 = lVar7 + 0x88;
      lVar8 = lVar8 + -0x88;
    } while (lVar8 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    piVar6 = piVar6 + 0x36;
    lVar5 = lVar5 + -0xd8;
    if (lVar5 == 0) break;
LAB_144260462:
    if (*piVar6 == iVar2) {
      if (piVar6 != (int *)0x0) {
        FUN_141178e82(lVar7);
      }
      break;
    }
  }
LAB_144260485:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
}



// FUNCTION 1442604a8 FUN_1442604a8 body=29 status=ok
// SIG undefined FUN_1442604a8(void)

undefined8 FUN_1442604a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144260644 FUN_144260644 body=93 status=ok
// SIG undefined FUN_144260644(void)

void FUN_144260644(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982300;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9a8ad0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}


