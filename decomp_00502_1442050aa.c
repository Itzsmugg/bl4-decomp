// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1442050aa FUN_1442050aa body=126 status=ok
// SIG undefined FUN_1442050aa(void)

void FUN_1442050aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9970e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144205119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14420514a FUN_14420514a body=295 status=ok
// SIG undefined FUN_14420514a(void)

undefined8 FUN_14420514a(longlong param_1,longlong param_2)

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
    if (iVar1 == 2) goto LAB_14420526b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14420526b;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14420526b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14420521e;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (param_2 != 0) {
        if ((*(longlong *)(param_2 + 0x50) == 0) ||
           (*(char *)(*(longlong *)(param_2 + 0x50) + 0x39) == '\0')) {
          FUN_140e2cd9a(*(undefined8 *)(param_1 + 0x20),param_2);
        }
      }
      goto LAB_14420521e;
    }
  }
  uVar6 = 0;
LAB_14420521e:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144205272 FUN_144205272 body=29 status=ok
// SIG undefined FUN_144205272(void)

undefined8 FUN_144205272(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14420540e FUN_14420540e body=93 status=ok
// SIG undefined FUN_14420540e(void)

void FUN_14420540e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b997150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14420546c FUN_14420546c body=93 status=ok
// SIG undefined FUN_14420546c(void)

void FUN_14420546c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b966850;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b997150;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1442054ca FUN_1442054ca body=126 status=ok
// SIG undefined FUN_1442054ca(void)

void FUN_1442054ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b966850;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b997150;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144205539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144205548 FUN_144205548 body=74 status=ok
// SIG undefined FUN_144205548(void)

void FUN_144205548(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_1405831b2();
  if (((*(longlong *)(lVar1 + 0x180) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x180) + 0xf40), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x73ec) == '\x02')) {
    *(bool *)(lVar1 + 0x2f2) = 0.0 < *(float *)(lVar1 + 0x2f8);
  }
  return;
}



// FUNCTION 144205592 FUN_144205592 body=320 status=ok
// SIG undefined FUN_144205592(void)

undefined8 FUN_144205592(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1442056cc;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1442056cc;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1442056cc:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14420563d;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      lVar6 = *(longlong *)(param_1 + 0x20);
      FUN_1405831b2();
      uVar7 = 1;
      if ((*(longlong *)(lVar6 + 0x180) != 0) &&
         ((lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x180) + 0xf40), lVar3 != 0 &&
          (*(char *)(lVar3 + 0x73ec) == '\x02')))) {
        *(bool *)(lVar6 + 0x2f2) = 0.0 < *(float *)(lVar6 + 0x2f8);
      }
      goto LAB_14420563d;
    }
  }
  uVar7 = 0;
LAB_14420563d:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442056db FUN_1442056db body=8312 status=ok
// SIG undefined FUN_1442056db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1442056db(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_ac;
  char *local_a8;
  int local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = "AssetRegistry";
  local_a0 = 0xd;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfbf0 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cbcfbf8);
  if (cVar2 == '\0') {
    _DAT_14cbcfbf8 = 0;
    uRam000000014cbcfc00 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbcfc08 = 0x47efffffe0000000;
  _DAT_14cbcfc10 = 0x47efffffe0000000;
  _DAT_14cbcfc18 = 0x47efffffe0000000;
  _DAT_14cbcfc20 = 0x47efffffe0000000;
  _DAT_14cbcfc28 = 0x47efffffe0000000;
  _DAT_14cbcfc30 = 0x47efffffe0000000;
  _DAT_14cbcfc38 = 0x47efffffe0000000;
  _DAT_14cbcfc40 = 0x47efffffe0000000;
  local_a8 = "Cash";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfc48 = (ulonglong)uVar3;
  FUN_1400b22c2(&DAT_14cbcfc50,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1441f8ce0);
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfc64 = 0;
  FUN_14052b5e0(&DAT_14cbcfc60,"PlayerAwareness",0);
  _DAT_14cbcfc70 = "PlayerAwareness";
  local_a8 = "basic";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfc78 = (ulonglong)uVar3;
  local_a8 = "challenge";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfc80 = (ulonglong)uVar3;
  local_a8 = "online";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfc88 = (ulonglong)uVar3;
  local_a8 = "social";
  local_a0 = 6;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfc90 = (ulonglong)uVar3;
  local_a8 = "alert";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfc98 = (ulonglong)uVar3;
  local_a8 = "photo_mode";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfca0 = (ulonglong)uVar3;
  local_a8 = "generic_task";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfca8 = (ulonglong)uVar3;
  local_a8 = "mission";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfcb0 = (ulonglong)uVar3;
  local_a8 = "mail";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfcb8 = (ulonglong)uVar3;
  local_a8 = "respawn";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfcc0 = (ulonglong)uVar3;
  local_a8 = "tutorial";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfcc8 = (ulonglong)uVar3;
  local_a8 = "special_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfcd0 = (ulonglong)uVar3;
  local_a8 = "generic_notification";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfcd8 = (ulonglong)uVar3;
  local_a8 = "vault_card";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfce0 = (ulonglong)uVar3;
  local_a8 = "ONLINE_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfce8 = (ulonglong)uVar3;
  local_a8 = "INGAME_MESSAGE";
  local_a0 = 0xe;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfcf0 = (ulonglong)uVar3;
  local_a8 = "NOTIFICATION_MESSAGE";
  local_a0 = 0x14;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfcf8 = (ulonglong)uVar3;
  local_a8 = "MENU_TUTORIAL_MESSAGE";
  local_a0 = 0x15;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfd00 = (ulonglong)uVar3;
  local_a8 = "collectible";
  local_a0 = 0xb;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfd08 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbcfd10,L"UNSET",1);
  local_a8 = "init";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "update";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "config_update";
  local_a0 = 0xd;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  local_a8 = "deinit";
  local_a0 = 6;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cbcfd18,L"Party",1);
  FUN_1446f470e(&DAT_14cbcfd20,&DAT_149e063b2,1);
  local_a8 = "Use";
  local_a0 = 3;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfd28 = (ulonglong)uVar3;
  local_a8 = "Sight";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfd30 = (ulonglong)uVar3;
  local_a8 = "TargetLock";
  local_a0 = 10;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbcfd38 = (ulonglong)uVar3;
  FUN_140056680(&DAT_14cbcfd40,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1441f8cf1);
  FUN_140056680(&DAT_14cbcfd50,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1441f8d02);
  FUN_140056680(&DAT_14cbcfd60,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1441f8d13);
  FUN_140056680(&DAT_14cbcfd70,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1441f8d24);
  FUN_1446f470e(&DAT_14cbcfd80,L"LIMB_GORED",1);
  _DAT_14cbcfd88 = 0x4072c00000000000;
  _DAT_14cbcfd90 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbcfd98,L"body",1);
  FUN_1446f470e(&DAT_14cbcfda0,L"title_card",1);
  local_b8 = 0;
  FUN_1415c789c(&DAT_14cbcfda8,L"oak.analytics.playerencounterexpiretime",&DAT_14c764080,
                L"The time(in seconds) the player encounter expires from lack of activity.");
  atexit(FUN_1441f8d35);
  FUN_146631c78();
  atexit((_func_5014 *)&LAB_1441f8d7a);
  local_a8 = "fact_address";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Encounter",1);
  _DAT_14cbcff78 = 0;
  local_a8 = "end_method";
  local_a0 = 10;
  local_9c = 0;
  _DAT_14cbcff70 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Encounter",1);
  _DAT_14cbcff88 = 0;
  local_a8 = "duration";
  local_a0 = 8;
  local_9c = 0;
  _DAT_14cbcff80 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Encounter",1);
  _DAT_14cbcff98 = 0;
  local_a8 = "enemy_level_avg";
  local_a0 = 0xf;
  local_9c = 0;
  _DAT_14cbcff90 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Encounter",1);
  _DAT_14cbcffa8 = 0;
  local_a8 = "enemy_level_min";
  local_a0 = 0xf;
  local_9c = 0;
  _DAT_14cbcffa0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Encounter",1);
  _DAT_14cbcffb8 = 0;
  local_a8 = "enemy_level_max";
  local_a0 = 0xf;
  local_9c = 0;
  _DAT_14cbcffb0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Encounter",1);
  _DAT_14cbcffc8 = 0;
  local_a8 = "enemy_count";
  local_a0 = 0xb;
  local_9c = 0;
  _DAT_14cbcffc0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Encounter",1);
  _DAT_14cbcffd8 = 0;
  local_a8 = "enemy_ranks";
  local_a0 = 0xb;
  local_9c = 0;
  _DAT_14cbcffd0 = (ulonglong)uVar3;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&local_a8,L"Encounter",1);
  _DAT_14cbcffe8 = 0;
  DAT_14cbcffe0 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbcffec,L"Puppet");
  DAT_14cbd0058 = 0;
  _DAT_14cbd0060 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_1442027be;
  local_a8 = &DAT_14011fc1e;
  FUN_14618c4b2(&local_a8);
  atexit((_func_5014 *)&LAB_1441f8dd6);
  _DAT_14cbd00f8 = &LAB_1441f8ddb;
  _DAT_14cbd0100 = 0x461ec000;
  DAT_14cbd0104 = 1;
  DAT_14cbd00f0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd00f0;
  atexit((_func_5014 *)&LAB_1441f8de0);
  local_a8 = "Standard";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd0110 = (ulonglong)uVar3;
  local_a8 = "PrologueSkip";
  local_a0 = 0xc;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd0118 = (ulonglong)uVar3;
  local_a8 = "UltimateVaultHunterSkip";
  local_a0 = 0x17;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0120 = (ulonglong)uVar3;
  local_a8 = "SkipToDLC_Cowbell";
  local_a0 = 0x11;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0128 = (ulonglong)uVar3;
  local_a8 = "SkipToDLC_Harmonica";
  local_a0 = 0x13;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0130 = (ulonglong)uVar3;
  _DAT_14cbd013c = 0;
  _DAT_14cbd0140 = 0;
  FUN_14052b5e0(&DAT_14cbd0138,"VendingMachineState",0);
  _DAT_14cbd0148 = "VendingMachineState";
  _DAT_14cbd0154 = 0;
  _DAT_14cbd0158 = 0;
  FUN_14052b5e0(&DAT_14cbd0150,"InUseState",0);
  _DAT_14cbd0160 = "InUseState";
  _DAT_14cbd016c = 0;
  _DAT_14cbd0170 = 0;
  FUN_14052b5e0(&DAT_14cbd0168,"state",0);
  _DAT_14cbd0178 = "state";
  _DAT_14cbd0184 = 0;
  _DAT_14cbd0188 = 0;
  FUN_14052b5e0(&DAT_14cbd0180,"shuffle_timestamp",0);
  _DAT_14cbd0190 = "shuffle_timestamp";
  _DAT_14cbd019c = 0;
  _DAT_14cbd01a0 = 0;
  FUN_14052b5e0(&DAT_14cbd0198,"iotd_timestamp",0);
  _DAT_14cbd01a8 = "iotd_timestamp";
  _DAT_14cbd01b4 = 0;
  _DAT_14cbd01b8 = 0;
  FUN_14052b5e0(&DAT_14cbd01b0,"items",0);
  _DAT_14cbd01c0 = "items";
  _DAT_14cbd01cc = 0;
  _DAT_14cbd01d0 = 0;
  FUN_14052b5e0(&DAT_14cbd01c8,&DAT_14b3fc248,0);
  _DAT_14cbd01d8 = &DAT_14b3fc248;
  local_a8 = "lostloot";
  local_a0 = 8;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd01e0 = 0;
  uRam000000014cbd01e8 = 0;
  _DAT_14cbd01f0 = 0;
  DAT_14cbd01f8 = 0;
  uRam000000014cbd0200 = 0;
  FUN_1446ddda2(&DAT_14cbd01e0,"lostloot");
  atexit((_func_5014 *)&LAB_1441f8e14);
  _DAT_14cbd0208 = 0;
  uRam000000014cbd0210 = 0;
  _DAT_14cbd0218 = 0;
  DAT_14cbd0220 = 0;
  uRam000000014cbd0228 = 0;
  FUN_1446ddda2(&DAT_14cbd0208,"oak.lostloot");
  atexit((_func_5014 *)&LAB_1441f8e25);
  local_a8 = "UpscalingMethod";
  local_a0 = 0xf;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0230 = (ulonglong)uVar3;
  local_a8 = "FrameGeneration";
  local_a0 = 0xf;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0238 = (ulonglong)uVar3;
  local_a8 = "Upscaling";
  local_a0 = 9;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0240 = (ulonglong)uVar3;
  local_a8 = "AntiAliasingMethod";
  local_a0 = 0x12;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0248 = (ulonglong)uVar3;
  local_a8 = "WindowsTextureLODGroups";
  local_a0 = 0x17;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0250 = (ulonglong)uVar3;
  local_a8 = "Textures";
  local_a0 = 8;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0258 = (ulonglong)uVar3;
  _DAT_14cbd0264 = 0;
  _DAT_14cbd0268 = 0;
  FUN_14052b5e0(&DAT_14cbd0260,"State",0);
  DAT_14cbd0270._4_4_ = 0;
  DAT_14cbd0278 = 0;
  FUN_14052b5e0(&DAT_14cbd0270,"char_name",0);
  _DAT_14cbd0280 = "char_name";
  DAT_14cbd0288._4_4_ = 0;
  DAT_14cbd0290 = 0;
  FUN_14052b5e0(&DAT_14cbd0288,"faction",0);
  _DAT_14cbd0298 = "faction";
  DAT_14cbd02a0._4_4_ = 0;
  DAT_14cbd02a8 = 0;
  FUN_14052b5e0(&DAT_14cbd02a0,"class",0);
  _DAT_14cbd02b0 = "class";
  DAT_14cbd0aa0._4_4_ = 0;
  DAT_14cbd0aa8 = 0;
  FUN_14052b5e0(&DAT_14cbd0aa0,"experience",0);
  _DAT_14cbd0ab0 = "experience";
  DAT_14cbd0ab8._4_4_ = 0;
  DAT_14cbd0ac0 = 0;
  FUN_14052b5e0(&DAT_14cbd0ab8,&DAT_149e377fe,0);
  _DAT_14cbd0ac8 = &DAT_149e377fe;
  DAT_14cbd0ad0._4_4_ = 0;
  DAT_14cbd0ad8 = 0;
  FUN_14052b5e0(&DAT_14cbd0ad0,"points",0);
  _DAT_14cbd0ae0 = "points";
  DAT_14cbd02b8._4_4_ = 0;
  DAT_14cbd02c0 = 0;
  FUN_14052b5e0(&DAT_14cbd02b8,"level",0);
  _DAT_14cbd02c8 = "level";
  DAT_14cbd02d0._4_4_ = 0;
  DAT_14cbd02d8 = 0;
  FUN_14052b5e0(&DAT_14cbd02d0,"unlocked",0);
  _DAT_14cbd02e0 = "unlocked";
  DAT_14cbd02e8._4_4_ = 0;
  DAT_14cbd02f0 = 0;
  FUN_14052b5e0(&DAT_14cbd02e8,"inventory",0);
  _DAT_14cbd02f8 = "inventory";
  DAT_14cbd0300._4_4_ = 0;
  DAT_14cbd0308 = 0;
  FUN_14052b5e0(&DAT_14cbd0300,"items",0);
  _DAT_14cbd0310 = "items";
  DAT_14cbd0318._4_4_ = 0;
  DAT_14cbd0320 = 0;
  FUN_14052b5e0(&DAT_14cbd0318,"serial",0);
  _DAT_14cbd0328 = "serial";
  DAT_14cbd0330._4_4_ = 0;
  DAT_14cbd0338 = 0;
  FUN_14052b5e0(&DAT_14cbd0330,"flags",0);
  _DAT_14cbd0340 = "flags";
  DAT_14cbd0348._4_4_ = 0;
  DAT_14cbd0350 = 0;
  FUN_14052b5e0(&DAT_14cbd0348,"state_flags",0);
  _DAT_14cbd0358 = "state_flags";
  DAT_14cbd0360._4_4_ = 0;
  DAT_14cbd0368 = 0;
  FUN_14052b5e0(&DAT_14cbd0360,"item_count",0);
  _DAT_14cbd0370 = "item_count";
  _DAT_14cbd037c = 0;
  _DAT_14cbd0380 = 0;
  FUN_14052b5e0(&DAT_14cbd0378,"equipped_slot",0);
  _DAT_14cbd0388 = "equipped_slot";
  DAT_14cbd0390._4_4_ = 0;
  DAT_14cbd0398 = 0;
  FUN_14052b5e0(&DAT_14cbd0390,"equip_slots_unlocked",0);
  _DAT_14cbd03a0 = "equip_slots_unlocked";
  DAT_14cbd03a8._4_4_ = 0;
  DAT_14cbd03b0 = 0;
  FUN_14052b5e0(&DAT_14cbd03a8,"equipped_inventory",0);
  _DAT_14cbd03b8 = "equipped_inventory";
  DAT_14cbd03c0._4_4_ = 0;
  DAT_14cbd03c8 = 0;
  FUN_14052b5e0(&DAT_14cbd03c0,"Equipped",0);
  _DAT_14cbd03d0 = "Equipped";
  DAT_14cbd03d8._4_4_ = 0;
  DAT_14cbd03e0 = 0;
  FUN_14052b5e0(&DAT_14cbd03d8,"active_slot",0);
  _DAT_14cbd03e8 = "active_slot";
  DAT_14cbd03f0._4_4_ = 0;
  DAT_14cbd03f8 = 0;
  FUN_14052b5e0(&DAT_14cbd03f0,"player_difficulty",0);
  _DAT_14cbd0400 = "player_difficulty";
  DAT_14cbd0408._4_4_ = 0;
  DAT_14cbd0410 = 0;
  FUN_14052b5e0(&DAT_14cbd0408,"true_mode",0);
  _DAT_14cbd0418 = "true_mode";
  _DAT_14cbd0424 = 0;
  _DAT_14cbd0428 = 0;
  FUN_14052b5e0(&DAT_14cbd0420,"vault_hunter",0);
  _DAT_14cbd0430 = "vault_hunter";
  DAT_14cbd0438._4_4_ = 0;
  DAT_14cbd0440 = 0;
  FUN_14052b5e0(&DAT_14cbd0438,"vault_hunter_level_backup",0);
  _DAT_14cbd0448 = "vault_hunter_level_backup";
  DAT_14cbd0450._4_4_ = 0;
  DAT_14cbd0458 = 0;
  FUN_14052b5e0(&DAT_14cbd0450,"highest_unlocked_vault_hunter_level_backup",0);
  _DAT_14cbd0460 = "highest_unlocked_vault_hunter_level_backup";
  DAT_14cbd0468._4_4_ = 0;
  DAT_14cbd0470 = 0;
  FUN_14052b5e0(&DAT_14cbd0468,"highest_unlocked_mayhem_level",0);
  _DAT_14cbd0478 = "highest_unlocked_mayhem_level";
  _DAT_14cbd0484 = 0;
  _DAT_14cbd0488 = 0;
  FUN_14052b5e0(&DAT_14cbd0480,"titlecard_serialnumber",0);
  _DAT_14cbd0490 = "titlecard_serialnumber";
  DAT_14cbd0498._4_4_ = 0;
  DAT_14cbd04a0 = 0;
  FUN_14052b5e0(&DAT_14cbd0498,"total_playtime",0);
  _DAT_14cbd04a8 = "total_playtime";
  DAT_14cbd04b0._4_4_ = 0;
  DAT_14cbd04b8 = 0;
  FUN_14052b5e0(&DAT_14cbd04b0,"last_played_timestamp",0);
  _DAT_14cbd04c0 = "last_played_timestamp";
  DAT_14cbd04c8._4_4_ = 0;
  DAT_14cbd04d0 = 0;
  FUN_14052b5e0(&DAT_14cbd04c8,"first_timestamp",0);
  _DAT_14cbd04d8 = "first_timestamp";
  DAT_14cbd04e0._4_4_ = 0;
  DAT_14cbd04e8 = 0;
  FUN_14052b5e0(&DAT_14cbd04e0,"blackmarket_cooldown",0);
  _DAT_14cbd04f0 = "blackmarket_cooldown";
  DAT_14cbd04f8._4_4_ = 0;
  DAT_14cbd0500 = 0;
  FUN_14052b5e0(&DAT_14cbd04f8,"blackmarket_items",0);
  _DAT_14cbd0508 = "blackmarket_items";
  DAT_14cbd0510._4_4_ = 0;
  DAT_14cbd0518 = 0;
  FUN_14052b5e0(&DAT_14cbd0510,"blackmarket_itemtype",0);
  _DAT_14cbd0520 = "blackmarket_itemtype";
  DAT_14cbd0528._4_4_ = 0;
  DAT_14cbd0530 = 0;
  FUN_14052b5e0(&DAT_14cbd0528,"blackmarket_itemcomp",0);
  _DAT_14cbd0538 = "blackmarket_itemcomp";
  DAT_14cbd0540._4_4_ = 0;
  DAT_14cbd0548 = 0;
  FUN_14052b5e0(&DAT_14cbd0540,"blackmarket_gamestage",0);
  _DAT_14cbd0550 = "blackmarket_gamestage";
  DAT_14cbd0558._4_4_ = 0;
  DAT_14cbd0560 = 0;
  FUN_14052b5e0(&DAT_14cbd0558,"blackmarket_trackerstate",0);
  _DAT_14cbd0568 = "blackmarket_trackerstate";
  DAT_14cbd0570._4_4_ = 0;
  DAT_14cbd0578 = 0;
  FUN_14052b5e0(&DAT_14cbd0570,"blackmarket_usedpools",0);
  _DAT_14cbd0580 = "blackmarket_usedpools";
  DAT_14cbd0588._4_4_ = 0;
  DAT_14cbd0590 = 0;
  FUN_14052b5e0(&DAT_14cbd0588,"demo_save",0);
  _DAT_14cbd0598 = "demo_save";
  DAT_14cbd05a0._4_4_ = 0;
  DAT_14cbd05a8 = 0;
  FUN_14052b5e0(&DAT_14cbd05a0,"demo_save_rerouted",0);
  _DAT_14cbd05b0 = "demo_save_rerouted";
  DAT_14cbd05b8._4_4_ = 0;
  DAT_14cbd05c0 = 0;
  FUN_14052b5e0(&DAT_14cbd05b8,"saves_prohibited",0);
  _DAT_14cbd05c8 = "saves_prohibited";
  DAT_14cbd05d0._4_4_ = 0;
  DAT_14cbd05d8 = 0;
  FUN_14052b5e0(&DAT_14cbd05d0,"last_weekly_reset",0);
  _DAT_14cbd05e0 = "last_weekly_reset";
  DAT_14cbd05e8._4_4_ = 0;
  DAT_14cbd05f0 = 0;
  FUN_14052b5e0(&DAT_14cbd05e8,"last_seen_bmvm_idx",0);
  _DAT_14cbd05f8 = "last_seen_bmvm_idx";
  _DAT_14cbd0604 = 0;
  _DAT_14cbd0608 = 0;
  FUN_14052b5e0(&DAT_14cbd0600,"seen_eridium_logs",0);
  _DAT_14cbd0610 = "seen_eridium_logs";
  DAT_14cbd0618._4_4_ = 0;
  DAT_14cbd0620 = 0;
  FUN_14052b5e0(&DAT_14cbd0618,"challenge_objectives",0);
  _DAT_14cbd0628 = "challenge_objectives";
  DAT_14cbd0630._4_4_ = 0;
  DAT_14cbd0638 = 0;
  FUN_14052b5e0(&DAT_14cbd0630,"challenge_ident",0);
  _DAT_14cbd0640 = "challenge_ident";
  DAT_14cbd0648._4_4_ = 0;
  DAT_14cbd0650 = 0;
  FUN_14052b5e0(&DAT_14cbd0648,"challenge_bitfield",0);
  _DAT_14cbd0658 = "challenge_bitfield";
  _DAT_14cbd0664 = 0;
  _DAT_14cbd0668 = 0;
  FUN_14052b5e0(&DAT_14cbd0660,"enabled_trackers",0);
  _DAT_14cbd0670 = "enabled_trackers";
  _DAT_14cbd067c = 0;
  _DAT_14cbd0680 = 0;
  FUN_14052b5e0(&DAT_14cbd0678,"discovered_trackers",0);
  _DAT_14cbd0688 = "discovered_trackers";
  FUN_1446f470e(&DAT_14cbd0690,L"OakPlayerState",1);
  FUN_1446f470e(&DAT_14cbd0698,L"Slot");
  DAT_14cbd06a0._4_4_ = 0;
  DAT_14cbd06a8 = 0;
  FUN_14052b5e0(&DAT_14cbd06a0,"unknown_items",0);
  _DAT_14cbd06b0 = "unknown_items";
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14acb7d20;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_14acb7cb0;
  *(code **)(local_a8 + 0x18) = FUN_1441f8e36;
  local_b8 = 1;
  FUN_141819a96(&DAT_14cbd06c0,L"oak.player.set_saves_prohibited",
                L"USE CAUTION - Permanently marks the currently loaded character to no longer allow saves. Meant for demo mode character preparation only."
                ,&local_a8);
  if (local_a0 == 0) {
LAB_144206eee:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_144206eee;
  }
  atexit(FUN_1441f8f9a);
  DAT_14cbd0b00 = 0;
  _DAT_14cbd0b08 = 0;
  _DAT_14cbd0b10 = 2;
  atexit(FUN_1441f8fdf);
  DAT_14cbd0a20 = 0;
  _DAT_14cbd0a28 = 0;
  _DAT_14cbd0a30 = 2;
  atexit(FUN_1441f9010);
  DAT_14cbd0a38 = 0;
  _DAT_14cbd0a40 = 0;
  _DAT_14cbd0a48 = 2;
  atexit(FUN_1441f9041);
  DAT_14cbd0b78 = 0;
  _DAT_14cbd0b80 = 0;
  _DAT_14cbd0b88 = 2;
  atexit(FUN_1441f9072);
  DAT_14cbd0a50 = 0;
  _DAT_14cbd0a58 = 0;
  _DAT_14cbd0a60 = 2;
  atexit(FUN_1441f90a3);
  DAT_14cbd0b90 = 0;
  _DAT_14cbd0b98 = 0;
  _DAT_14cbd0ba0 = 2;
  atexit(FUN_1441f90d4);
  DAT_14cbd06d0 = 0;
  _DAT_14cbd06d8 = 0;
  _DAT_14cbd06e0 = 2;
  atexit(FUN_1441f9105);
  DAT_14cbd0b48 = 0;
  _DAT_14cbd0b50 = 0;
  _DAT_14cbd0b58 = 2;
  atexit(FUN_1441f9136);
  DAT_14cbd0ae8 = 0;
  _DAT_14cbd0af0 = 0;
  _DAT_14cbd0af8 = 2;
  atexit(FUN_1441f9167);
  DAT_14cbd0b60 = 0;
  _DAT_14cbd0b68 = 0;
  _DAT_14cbd0b70 = 2;
  atexit(FUN_1441f9198);
  DAT_14cbd0a68 = 0;
  _DAT_14cbd0a70 = 0;
  _DAT_14cbd0a78 = 2;
  atexit(FUN_1441f91c9);
  DAT_14cbd0b30 = 0;
  _DAT_14cbd0b38 = 0;
  _DAT_14cbd0b40 = 2;
  atexit(FUN_1441f91fa);
  DAT_14cbd0a88 = 0;
  _DAT_14cbd0a90 = 0;
  _DAT_14cbd0a98 = 2;
  atexit(FUN_1441f922b);
  FUN_140056680(&DAT_14cbd07c8,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1441ff903);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_14b996d90;
  local_ac = 0;
  local_b8 = 0;
  FUN_14078dbce(&DAT_14cbd07d8,L"r.gbx.VolumetricCloudOffWhenAllowed",&local_ac,
                L"gbx:sxie - Disables VolumetricCloud in open world maps only (when enabled).");
  (**(code **)(*DAT_14cbd07e0 + 200))(DAT_14cbd07e0,&local_a8);
  if (local_a0 == 0) {
LAB_14420715d:
    if (local_a8 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_14420715d;
  }
  atexit(FUN_1441ff914);
  local_a8 = (char *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_14b996e20;
  local_ac = 0;
  local_b8 = 0;
  FUN_14078dbce(&DAT_14cbd07f0,L"r.gbx.VolumetricFogOffWhenAllowed",&local_ac,
                L"gbx:sxie - Disables VolumetricFog in open world maps only (when enabled).");
  (**(code **)(*DAT_14cbd07f8 + 200))(DAT_14cbd07f8,&local_a8);
  if (local_a0 != 0) {
    if (local_a8 == (char *)0x0) goto LAB_14420725a;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14420725a:
  atexit(FUN_1441ff959);
  ram0x00014cbd080c = 0;
  FUN_14052b5e0(&DAT_14cbd0808,"checkpoint_name",0);
  _DAT_14cbd0818 = "checkpoint_name";
  ram0x00014cbd0824 = 0;
  FUN_14052b5e0(&DAT_14cbd0820,"world_region_name",0);
  _DAT_14cbd0830 = "world_region_name";
  local_a8 = "TeleportStasis";
  local_a0 = 0xe;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd0a80 = (ulonglong)uVar3;
  local_a8 = "PostTeleportHidden";
  local_a0 = 0x12;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd0838 = (ulonglong)uVar3;
  local_a8 = "TeleportScreenEffectActive";
  local_a0 = 0x1a;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0840 = (ulonglong)uVar3;
  DAT_14cbd0b18 = 0;
  _DAT_14cbd0b20 = 0;
  _DAT_14cbd0b28 = 2;
  atexit(FUN_1441ff99e);
  local_a8._0_4_ = 0x40e00000;
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14cbd0848,L"oak.main_menu_background_camera_black_time",&local_a8,
                &DAT_149dfb77a);
  atexit(FUN_1441ffe17);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,0x3f733333);
  local_b8 = 0x20;
  FUN_140a6b41e(&DAT_14cbd0860,L"oak.main_menu_samemap_fade_duration",&local_a8,&DAT_149dfb77a);
  atexit(FUN_1441ffe5c);
  local_a8 = "nexus";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cbd0898 = (ulonglong)uVar3;
  FUN_1447a97f4(&DAT_14cbd08a0,&DAT_14c9485f0);
  atexit((_func_5014 *)&LAB_1442024ea);
  DAT_14cbd08c8 = 0;
  DAT_14cbd08e0 = 0;
  _DAT_14cbd08e8 = 0;
  _DAT_14cbd08f0 = 2;
  atexit(FUN_1442024fb);
  _DAT_14cbd08f8 = 0;
  DAT_14cbd0900 = 0;
  atexit(FUN_14420252c);
  _DAT_14cbd090c = 0;
  FUN_14052b5e0(&DAT_14cbd0908,"volume_overall",0);
  _DAT_14cbd0918 = 0;
  FUN_14052b5e0(&DAT_14cbd0914,"volume_music",0);
  _DAT_14cbd0924 = 0;
  FUN_14052b5e0(&DAT_14cbd0920,"volume_sfx",0);
  _DAT_14cbd0930 = 0;
  FUN_14052b5e0(&DAT_14cbd092c,"volume_dialog",0);
  _DAT_14cbd093c = 0;
  FUN_14052b5e0(&DAT_14cbd0938,"PlayInBackground",0);
  _DAT_14cbd0948 = 0;
  FUN_14052b5e0(&DAT_14cbd0944,"MuteHitNotifies",0);
  FUN_1446f470e(&DAT_14cbd0950,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cbd0958,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cbd0960,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cbd0968,L"TimeOfDayForecastEvents",1);
  _DAT_14cbd0970 = 0xbff0000000000000;
  _DAT_14cbd0978 = 0x3ff0000000000000;
  _DAT_14cbd0980 = 0;
  DAT_14cbd0988 = 0xbff0000000000000;
  DAT_14cbd0990 = 0xbff0000000000000;
  _DAT_14cbd0998 = 0;
  _DAT_14cbd09a0 = 0x3ff0000000000000;
  _DAT_14cbd09a8 = 0xbff0000000000000;
  _DAT_14cbd09b0 = 0;
  _DAT_14cbd09b8 = 0x3ff0000000000000;
  _DAT_14cbd09c0 = 0x3ff0000000000000;
  _DAT_14cbd09c8 = 0;
  local_a8 = "LowHealthEffect";
  local_a0 = 0xf;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd09d0 = (ulonglong)uVar3;
  local_a8 = "CreepingDeathEffect";
  local_a0 = 0x13;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cbd09d8 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cbd09e0,L"PlayerCamera",1);
  FUN_1446f470e(&DAT_14cbd09e8,L"DamageAmount",1);
  FUN_1446f470e(&DAT_14cbd09f0,L"NumberColor",1);
  FUN_1446f470e(&DAT_14cbd09f8,L"Text_Color",1);
  FUN_1446f470e(&DAT_14cbd0a00,L"IsUsingTexture?",1);
  FUN_1446f470e(&DAT_14cbd0a08,L"WhichTexture?",1);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442077b5 FUN_1442077b5 body=59 status=ok
// SIG undefined FUN_1442077b5(void)

void FUN_1442077b5(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbd0dc8;
  if (DAT_14cbd0dc8 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbd0dc8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001442077e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1442077f0 FUN_1442077f0 body=143 status=ok
// SIG undefined FUN_1442077f0(void)

void FUN_1442077f0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b997228);
  FUN_1402d084a(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_28 = 0x46bc0fd7;
    uStack_24 = 0xf2004439;
    uStack_20 = 0xb86afa7e;
    uStack_1c = 0x6b276337;
    iVar1 = FUN_1448a256a(param_1);
    if (iVar1 < 0) {
      FUN_148694eee(param_1 + 0xb50,param_1 + 0x758);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442078ec FUN_1442078ec body=73 status=ok
// SIG undefined FUN_1442078ec(void)

undefined8 FUN_1442078ec(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x180))(param_1 + -0x28);
  if (lVar1 != 0) {
    if (*(double *)(lVar1 + 0x6d0) < *(double *)(param_1 + 0x118)) {
      return 1;
    }
    if (0.25 < *(double *)(lVar1 + 0x6d0) - *(double *)(param_1 + 0x118)) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144207936 FUN_144207936 body=142 status=ok
// SIG undefined FUN_144207936(void)

undefined8 FUN_144207936(longlong param_1)

{
  uint uVar1;
  char cVar2;
  char extraout_AL;
  undefined8 *puVar3;
  undefined7 uVar4;
  undefined7 extraout_var;
  longlong *plVar5;
  
  if ((*(int *)(param_1 + 0x44) < *(int *)(param_1 + 0x18)) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar5 = (longlong *)*puVar3;
      }
      else {
        plVar5 = (longlong *)0x0;
      }
      if (*(code **)(*plVar5 + 0x498) == (code *)&LAB_14015c36e) {
        cVar2 = (char)plVar5[0x42];
        uVar4 = 0x14015c3;
      }
      else {
        (**(code **)(*plVar5 + 0x498))();
        cVar2 = extraout_AL;
        uVar4 = extraout_var;
      }
      return CONCAT71(uVar4,cVar2 == '\b');
    }
  }
  return 0;
}



// FUNCTION 1442079d6 FUN_1442079d6 body=1140 status=ok
// SIG undefined FUN_1442079d6(void)

longlong * FUN_1442079d6(longlong param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  code *local_70;
  longlong *local_68;
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar9 = *(longlong *)(param_1 + 0x28);
  if (lVar9 == 0) {
    uVar8 = FUN_140b1c3dc();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x28) = lVar9;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    if ((lVar9 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
LAB_144207a76:
      *param_2 = 0;
      param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_e8);
    }
    plVar4 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar4 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      goto LAB_144207a76;
    }
    uVar8 = (**(code **)(*plVar4 + 0x110))(plVar4);
    lVar9 = FUN_144aff482(uVar8,(longlong *)(param_1 + 0x20));
    *(longlong *)(param_1 + 0x30) = lVar9;
    if (lVar9 == 0) goto LAB_144207a76;
  }
  lVar9 = *(longlong *)(param_3 + 0xa8);
  if (lVar9 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_90 = &local_70;
      local_70 = FUN_141030f22;
      local_80 = FUN_14081d0ea;
      local_88 = FUN_142b4754c;
      local_98 = &LAB_147c45ce0;
      local_a0 = &LAB_1463f1ff4;
      local_a8 = L"Game";
      local_b0 = 0x4000000000;
      local_b8 = 0x10000004;
      local_c0 = 8;
      local_c8 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if (((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) &&
       (lVar10 = *(longlong *)(lVar9 + 0x3b0), lVar10 != 0)) {
      if (DAT_14cbae3d8 == 0) {
        local_90 = &local_70;
        local_70 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = (code *)&LAB_1464f5fc4;
        local_98 = &LAB_148c3dd26;
        local_a0 = &LAB_1459673ba;
        local_a8 = L"Engine";
        local_b0 = 0;
        local_b8 = 0x10000004;
        local_c0 = 0x10;
        local_c8 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar10 = *(longlong *)(lVar9 + 0x3b0);
        if (lVar10 == 0) goto LAB_144207ae8;
      }
      lVar9 = 0;
      if ((DAT_14cbae3d8 == 0) || (lVar5 = *(longlong *)(lVar10 + 0x10), lVar5 == 0))
      goto LAB_144207aeb;
      if (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar5 + 0x38)) {
        lVar9 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
            DAT_14cbae3d8 + 0x30) {
          lVar9 = lVar10;
        }
        goto LAB_144207aeb;
      }
    }
  }
LAB_144207ae8:
  lVar9 = 0;
LAB_144207aeb:
  local_70 = (code *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_48[0] = 0;
  FUN_1456bb102(&local_70,*(undefined8 *)(param_3 + 0xa8));
  iVar7 = FUN_145affae0(param_1,&local_70);
  FUN_1448173f8(local_48);
  if (((char)local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar3 = (int *)((longlong)local_60 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  local_70 = (code *)((ulonglong)local_70 & 0xffffffffffffff00);
  local_48[0] = 0;
  FUN_1456bb102(&local_70,*(undefined8 *)(param_3 + 0xa8));
  FUN_145affb7a(param_1,&local_70);
  FUN_1448173f8(local_48);
  if (((char)local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar3 = (int *)((longlong)local_60 + 0xc);
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if ((lVar9 == 0) || (iVar7 < 1)) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    local_68 = (longlong *)FUN_14001cc68(0x40,0x10);
    local_68[1] = (longlong)&DAT_100000001;
    *local_68 = (longlong)&PTR_FUN_14b9997a0;
    pcVar1 = (code *)(local_68 + 2);
    local_68[3] = 0;
    local_68[4] = 0;
    local_68[5] = 0;
    local_68[6] = 0;
    local_68[2] = (longlong)&PTR_FUN_14b9997b8;
    local_68[7] = 0;
    local_70 = pcVar1;
    FUN_148dd0a42(&local_70,pcVar1);
    FUN_145f8ef64(pcVar1,lVar9);
    plVar4 = local_68;
    *param_2 = (longlong)local_70;
    param_2[1] = (longlong)local_68;
    if (local_68 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_68 + 1) = (int)local_68[1] + 1;
      UNLOCK();
      if (local_68 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_68 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_68)(local_68);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144207e4c FUN_144207e4c body=2456 status=ok
// SIG undefined FUN_144207e4c(void)

void FUN_144207e4c(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  int local_c4;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 local_80;
  code *local_78 [2];
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (*(char *)(param_1 + 0x28) != '\0') goto LAB_144208528;
  *(undefined1 *)(param_1 + 0x28) = 1;
  local_98 = (longlong *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *local_98 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar13 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar13 == 0) {
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_98[2] = lVar13;
  *local_98 = (longlong)&PTR_FUN_14b999910;
  local_98[3] = param_1;
  lVar13 = FUN_1410a623c();
  lVar10 = *(longlong *)(lVar13 + 0x28);
  if (lVar10 == 0) {
    uVar8 = FUN_145764ed6();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(lVar13 + 0x28) = lVar10;
  }
  if (((*(longlong *)(lVar13 + 0x30) == 0) && (lVar10 != 0)) && (*(longlong *)(lVar13 + 0x20) != 0))
  {
    plVar11 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
      uVar8 = FUN_144aff482(uVar8,(longlong *)(lVar13 + 0x20));
    }
    *(undefined8 *)(lVar13 + 0x30) = uVar8;
  }
  FUN_1442087e6(param_2,param_3);
  lVar10 = *(longlong *)(lVar13 + 0x40);
  if (lVar10 == 0) {
    uVar8 = FUN_145764ed6();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(lVar13 + 0x40) = lVar10;
  }
  if (((*(longlong *)(lVar13 + 0x48) == 0) && (lVar10 != 0)) && (*(longlong *)(lVar13 + 0x38) != 0))
  {
    plVar11 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
      uVar8 = FUN_144aff482(uVar8,(longlong *)(lVar13 + 0x38));
    }
    *(undefined8 *)(lVar13 + 0x48) = uVar8;
  }
  FUN_1442087e6(param_2,param_3);
  lVar10 = *(longlong *)(lVar13 + 0x58);
  if (lVar10 == 0) {
    uVar8 = FUN_145764ed6();
    lVar10 = FUN_14477b664(uVar8);
    *(longlong *)(lVar13 + 0x58) = lVar10;
  }
  lVar9 = *(longlong *)(lVar13 + 0x60);
  if (((lVar9 == 0) && (lVar9 = 0, lVar10 != 0)) && (*(longlong *)(lVar13 + 0x50) != 0)) {
    plVar11 = *(longlong **)(lVar10 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
      lVar9 = 0;
    }
    else {
      uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar9 = FUN_144aff482(uVar8,(longlong *)(lVar13 + 0x50));
    }
    *(longlong *)(lVar13 + 0x60) = lVar9;
  }
  if (*(longlong *)(param_2 + 0xa8) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_1447210f0();
  }
  lVar13 = FUN_1406f612e(uVar8);
  lVar10 = *(longlong *)(param_2 + 0xa8);
  if (lVar10 != 0) {
    if (DAT_14caf64b8 == 0) {
      local_e0 = local_78;
      local_78[0] = FUN_141030f22;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_142b4754c;
      local_e8 = &LAB_147c45ce0;
      local_f0 = &LAB_1463f1ff4;
      local_f8 = L"Game";
      local_100 = 0x4000000000;
      local_108 = 0x10000004;
      local_110 = 8;
      local_118 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if (((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30)) &&
       (lVar14 = *(longlong *)(lVar10 + 0x3b0), lVar14 != 0)) {
      if (DAT_14cbae3d8 == 0) {
        local_e0 = local_78;
        local_78[0] = FUN_141030f22;
        local_d0 = FUN_14081d0ea;
        local_d8 = (code *)&LAB_1464f5fc4;
        local_e8 = &LAB_148c3dd26;
        local_f0 = &LAB_1459673ba;
        local_f8 = L"Engine";
        local_100 = 0;
        local_108 = 0x10000004;
        local_110 = 0x10;
        local_118 = 0x1360;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        lVar14 = *(longlong *)(lVar10 + 0x3b0);
        if (lVar14 == 0) goto LAB_1442084b5;
      }
      if ((((DAT_14cbae3d8 != 0) && (lVar10 = *(longlong *)(lVar14 + 0x10), lVar10 != 0)) &&
          (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
          == DAT_14cbae3d8 + 0x30)) {
        lVar10 = FUN_1401b2ade(lVar14);
        if (lVar10 == 0) {
LAB_144208145:
          lVar10 = 0;
        }
        else {
          if (DAT_14cb61cd0 == 0) {
            local_e0 = local_78;
            local_78[0] = FUN_141030f22;
            local_d0 = FUN_14081d0ea;
            local_d8 = (code *)&LAB_1463b31ae;
            local_e8 = &LAB_1486dca4f;
            local_f0 = &LAB_1464f50a6;
            local_f8 = L"Game";
            local_100 = 0;
            local_108 = 0x10000004;
            local_110 = 8;
            local_118 = 0xd70;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
          }
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
          goto LAB_144208145;
        }
        if (((lVar9 != 0) && (lVar13 != 0)) &&
           ((*(int *)(lVar9 + 0x34) == param_3 ||
            (((lVar10 != 0 && (*(char *)(lVar10 + 0xd68) != '\x01')) ||
             (cVar4 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar4 == '\0')))))) {
          local_c0 = lVar9;
          local_a0 = lVar14;
          plVar11 = (longlong *)FUN_1414c2158();
          lVar10 = plVar11[0x22];
          if (lVar10 == 0) {
            (**(code **)(*plVar11 + 1000))(plVar11);
            lVar10 = plVar11[0x22];
          }
          local_c4 = 0;
          if ((longlong)*(int *)(lVar10 + 0x30) != 0) {
            plVar17 = *(longlong **)(lVar10 + 0x28);
            plVar11 = plVar17 + (longlong)*(int *)(lVar10 + 0x30) * 3;
            local_c4 = 0;
            local_b8 = plVar11;
            local_b0 = lVar13;
            local_a8 = param_2;
            do {
              lVar10 = plVar17[1];
              if (lVar10 == 0) {
                uVar8 = FUN_141221512();
                lVar10 = FUN_14477b664(uVar8);
                plVar17[1] = lVar10;
              }
              lVar9 = plVar17[2];
              if (lVar9 == 0) {
                if ((lVar10 != 0) && (*plVar17 != 0)) {
                  plVar3 = *(longlong **)(lVar10 + 0xb8);
                  if ((plVar3 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                    plVar17[2] = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
                    lVar9 = FUN_144aff482(uVar8,plVar17);
                    plVar17[2] = lVar9;
                    if (lVar9 != 0) goto LAB_144208220;
                  }
                }
              }
              else {
LAB_144208220:
                if ((longlong)*(int *)(lVar9 + 0x38) != 0) {
                  lVar14 = *(longlong *)(lVar9 + 0x30);
                  lVar10 = lVar14 + (longlong)*(int *)(lVar9 + 0x38) * 0x18;
                  do {
                    lVar9 = FUN_1408d7900(lVar14);
                    if (lVar9 != 0) {
                      uVar2 = *(undefined4 *)(local_a0 + 0x394);
                      local_78[0] = (code *)((ulonglong)local_78[0] & 0xffffffffffffff00);
                      local_50[0] = 0;
                      FUN_1456bb102(local_78,*(undefined8 *)(param_2 + 0xa8));
                      puVar15 = *(undefined4 **)(lVar9 + 8);
                      if (puVar15 == (undefined4 *)0x0) {
                        puVar15 = &DAT_14c9485f0;
                      }
                      if (DAT_14c947fe0 == 0) {
                        lVar12 = FUN_14001cc68(0x140,0x10);
                        FUN_1456b2032(lVar12);
                        DAT_14c947fe0 = lVar12;
                      }
                      FUN_140045924(DAT_14c947fe0,&local_88,puVar15,1);
                      local_80 = local_88;
                      uVar8 = FUN_1403363fe(lVar13,&local_80);
                      lVar13 = FUN_1403362f0(lVar13,uVar2,uVar8);
                      if (lVar13 == 0) {
                        iVar5 = 0;
                      }
                      else {
                        if ((*(char *)(lVar13 + 0x11) == '\0') &&
                           (*(char *)(lVar13 + 0x12) != '\x01')) {
                          uVar7 = (uint)*(byte *)(lVar13 + 0x10);
                          iVar5 = 0;
                        }
                        else {
                          uVar7 = *(uint *)(lVar9 + 0x4a0);
                          iVar5 = FUN_144208baa(local_78,lVar9,local_c0);
                        }
                        if ((0 < *(int *)(lVar9 + 0x4a0)) && (0 < (int)uVar7)) {
                          lVar13 = 0x10;
                          uVar16 = 1;
                          do {
                            lVar12 = FUN_140c520a2(*(longlong *)(lVar9 + 0x498) + lVar13);
                            if (lVar12 == 0) {
                              iVar6 = 0;
                            }
                            else {
                              iVar6 = FUN_144208dd6(local_78,lVar12,local_c0);
                            }
                            iVar5 = iVar5 + iVar6;
                            if ((longlong)*(int *)(lVar9 + 0x4a0) <= (longlong)uVar16) break;
                            lVar13 = lVar13 + 0x50;
                            bVar18 = uVar16 < uVar7;
                            uVar16 = uVar16 + 1;
                          } while (bVar18);
                        }
                      }
                      FUN_1448173f8(local_50);
                      if (((char)local_78[0] == '\x03') && (local_68 != (longlong *)0x0)) {
                        LOCK();
                        piVar1 = (int *)((longlong)local_68 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*local_68 + 0x10))();
                        }
                      }
                      local_c4 = local_c4 + iVar5;
                      plVar11 = local_b8;
                      param_2 = local_a8;
                      lVar13 = local_b0;
                    }
                    lVar14 = lVar14 + 0x18;
                  } while (lVar14 != lVar10);
                }
              }
              plVar17 = plVar17 + 3;
            } while (plVar17 != plVar11);
          }
          lVar10 = local_c0;
          uVar7 = FUN_140fcdefe(param_2 + 0xf0,local_c0);
          if ((int)uVar7 < 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = 0;
            if ((int)uVar7 < *(int *)(param_2 + 0x120)) {
              iVar5 = *(int *)(*(longlong *)(param_2 + 0x118) + (ulonglong)uVar7 * 4);
            }
          }
          if (iVar5 < local_c4) {
            FUN_1489354ac(param_2,lVar10,local_c4,1);
          }
        }
      }
    }
  }
LAB_1442084b5:
  if (local_98 != (longlong *)0x0 && local_90 != 0) {
    (**(code **)(*local_98 + 0x60))();
  }
  if (local_90 != 0) {
    if (local_98 == (longlong *)0x0) goto LAB_144208528;
    (**(code **)*local_98)(local_98,0);
    FUN_1446efa72(&local_98,0,0,0x10);
    local_90 = 0;
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_144208528:
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442087e6 FUN_1442087e6 body=935 status=ok
// SIG undefined FUN_1442087e6(void)

void FUN_1442087e6(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if (lVar4 == 0) goto LAB_14420896b;
  if (DAT_14caf64b8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_142b4754c;
    local_58 = &LAB_147c45ce0;
    local_60 = &LAB_1463f1ff4;
    local_68 = L"Game";
    local_70 = 0x4000000000;
    local_78 = 0x10000004;
    local_80 = 8;
    local_88 = 0x428;
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) ||
     (lVar9 = *(longlong *)(lVar4 + 0x3b0), lVar9 == 0)) goto LAB_14420896b;
  if (DAT_14cbae3d8 == 0) {
    local_50 = &local_38;
    local_38 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = (code *)&LAB_1464f5fc4;
    local_58 = &LAB_148c3dd26;
    local_60 = &LAB_1459673ba;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x1360;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    lVar9 = *(longlong *)(lVar4 + 0x3b0);
    if (lVar9 == 0) goto LAB_14420896b;
  }
  if (((DAT_14cbae3d8 == 0) || (lVar4 = *(longlong *)(lVar9 + 0x10), lVar4 == 0)) ||
     ((*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) !=
       DAT_14cbae3d8 + 0x30)))) goto LAB_14420896b;
  lVar4 = FUN_1401b2ade(lVar9);
  if (lVar4 == 0) {
LAB_1442088de:
    lVar4 = 0;
  }
  else {
    if (DAT_14cb61cd0 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = (code *)&LAB_1463b31ae;
      local_58 = &LAB_1486dca4f;
      local_60 = &LAB_1464f50a6;
      local_68 = L"Game";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30)) goto LAB_1442088de;
  }
  if (((param_3 != 0) && (lVar5 = FUN_140fcc63a(param_3), lVar5 != 0)) &&
     ((*(int *)(param_3 + 0x34) == param_2 ||
      (((lVar4 != 0 && (*(char *)(lVar4 + 0xd68) != '\x01')) ||
       (cVar2 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar2 == '\0')))))) {
    uVar6 = FUN_140fcc63a(param_3);
    piVar7 = (int *)FUN_1409e484c(lVar9,uVar6);
    iVar1 = *piVar7;
    uVar3 = FUN_140fcdefe(param_1 + 0xf0,param_3);
    iVar8 = 0;
    if ((-1 < (int)uVar3) && (iVar8 = 0, (int)uVar3 < *(int *)(param_1 + 0x120))) {
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x118) + (ulonglong)uVar3 * 4);
    }
    if ((iVar8 != iVar1 + -1) && (iVar8 != iVar1)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_14420896b:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144208baa FUN_144208baa body=555 status=ok
// SIG undefined FUN_144208baa(void)

int FUN_144208baa(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  int local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar8 = 0;
  if ((*(char *)(param_2 + 0x160) == '\n') && (iVar8 = 0, (longlong)*(int *)(param_2 + 0x330) != 0))
  {
    plVar10 = *(longlong **)(param_2 + 0x328);
    plVar1 = plVar10 + (longlong)*(int *)(param_2 + 0x330) * 3;
    iVar8 = 0;
    do {
      lVar6 = plVar10[1];
      if (lVar6 == 0) {
        uVar5 = FUN_140fa5e64();
        lVar6 = FUN_14477b664(uVar5);
        plVar10[1] = lVar6;
      }
      lVar9 = plVar10[2];
      if (lVar9 == 0) {
        if ((lVar6 != 0) && (*plVar10 != 0)) {
          plVar2 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            plVar10[2] = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar9 = FUN_144aff482(uVar5,plVar10);
            plVar10[2] = lVar9;
            if (lVar9 != 0) goto LAB_144208c26;
          }
        }
LAB_144208d50:
        iVar11 = 0;
      }
      else {
LAB_144208c26:
        if (*(int *)(lVar9 + 0x78) == 0) goto LAB_144208d50;
        piVar7 = *(int **)(lVar9 + 8);
        if (piVar7 == (int *)0x0) {
          piVar7 = &DAT_14c9485f0;
        }
        if (((*piVar7 == 0) || (iVar11 = piVar7[1], iVar11 == 0)) || (*piVar7 == DAT_14c948000)) {
LAB_144208d83:
          local_60 = DAT_14c948620;
          local_68 = DAT_14c948618;
        }
        else {
          if ((iVar11 < 2) && (piVar7[9] < 1)) {
            piVar7 = piVar7 + 2;
          }
          else {
            piVar7 = *(int **)(piVar7 + 6);
          }
          if (iVar11 < 1) goto LAB_144208d83;
          local_60 = piVar7[2];
          local_68 = *(undefined8 *)piVar7;
        }
        uVar5 = FUN_14049cbd6(param_1);
        uVar5 = FUN_1406f625c(uVar5);
        local_78 = 1;
        FUN_140c51ed6(lVar9,&local_58,uVar5,&local_68);
        if ((longlong)local_50 == 0) {
          iVar11 = 0;
          iVar4 = 0;
        }
        else {
          lVar9 = (longlong)local_50 * 0x38;
          iVar11 = 0;
          lVar6 = local_58;
          do {
            iVar4 = FUN_144208dd6(param_1,lVar6,param_3);
            iVar11 = iVar11 + iVar4;
            lVar6 = lVar6 + 0x38;
            lVar9 = lVar9 + -0x38;
            iVar4 = local_50;
          } while (lVar9 != 0);
        }
        FUN_140c51e73(local_58,iVar4);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      iVar8 = iVar8 + iVar11;
      plVar10 = plVar10 + 3;
    } while (plVar10 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar8;
}



// FUNCTION 144208dd6 FUN_144208dd6 body=281 status=ok
// SIG undefined FUN_144208dd6(void)

int FUN_144208dd6(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  
  if ((longlong)(int)param_2[1] == 0) {
    iVar10 = 0;
  }
  else {
    plVar11 = (longlong *)*param_2;
    plVar3 = plVar11 + (longlong)(int)param_2[1] * 3;
    iVar10 = 0;
    do {
      lVar9 = *plVar11;
      plVar4 = (longlong *)plVar11[1];
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
      if (lVar9 != 0) {
        uVar7 = FUN_141856044();
        cVar5 = FUN_1448093f4(lVar9,uVar7);
        if (cVar5 == '\0') {
          uVar7 = FUN_14185600a();
          cVar5 = FUN_1448093f4(lVar9,uVar7);
          if ((cVar5 != '\0') && (lVar9 = FUN_144208ef0(lVar9), lVar9 != 0)) {
            iVar6 = FUN_144208dd6(param_1,lVar9 + 0x18,param_3);
            goto LAB_144208ea6;
          }
        }
        else {
          lVar8 = FUN_143e0a38c(lVar9 + 0x20);
          if (lVar8 == param_3) {
            iVar6 = FUN_1418a34c6(lVar9 + 0x20,param_1);
LAB_144208ea6:
            iVar10 = iVar10 + iVar6;
          }
        }
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
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      plVar11 = plVar11 + 3;
    } while (plVar11 != plVar3);
  }
  return iVar10;
}



// FUNCTION 144208ef0 FUN_144208ef0 body=272 status=ok
// SIG undefined FUN_144208ef0(void)

longlong FUN_144208ef0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    uVar4 = FUN_140c52150();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar4,plVar1);
      *(longlong *)(param_1 + 0x30) = lVar6;
      if (lVar6 == 0) {
        return 0;
      }
      lVar5 = *(longlong *)(param_1 + 0x28);
      goto LAB_144208f24;
    }
  }
  else {
LAB_144208f24:
    if (lVar5 != 0) {
      return lVar6;
    }
    uVar4 = FUN_140c52150();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar5;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      return *(longlong *)(param_1 + 0x30);
    }
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 != (longlong *)0x0) &&
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
      uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar5 = FUN_144aff482(uVar4,plVar1);
      goto LAB_144208f9a;
    }
  }
  lVar5 = 0;
LAB_144208f9a:
  *(longlong *)(param_1 + 0x30) = lVar5;
  return lVar5;
}



// FUNCTION 144209000 FUN_144209000 body=878 status=ok
// SIG undefined FUN_144209000(void)

longlong * FUN_144209000(longlong param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(param_1 + 0x10);
  if (lVar7 == 0) {
    uVar6 = FUN_14054e994();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x10) = lVar7;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar7 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
      plVar3 = *(longlong **)(lVar7 + 0xb8);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
        if (cVar4 != '\0') {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,(longlong *)(param_1 + 8));
          *(longlong *)(param_1 + 0x18) = lVar7;
          if (lVar7 != 0) goto LAB_14420904f;
          goto LAB_1442091dd;
        }
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  else {
LAB_14420904f:
    plVar3 = *(longlong **)(param_3 + 0xa8);
    if (plVar3 != (longlong *)0x0) {
      if (DAT_14caf64b8 == 0) {
        local_60 = &local_48;
        local_48 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_142b4754c;
        local_68 = &LAB_147c45ce0;
        local_70 = &LAB_1463f1ff4;
        local_78 = &DAT_149e063b2;
        local_80 = 0x4000000000;
        local_88 = 0x10000004;
        local_90 = 8;
        local_98 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      if ((*(int *)(DAT_14caf64b8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) ==
          DAT_14caf64b8 + 0x30)) {
        lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3);
        if (lVar7 != 0) {
          if (DAT_14cbadd90 == 0) {
            local_60 = &local_48;
            local_48 = FUN_141030f22;
            local_50 = FUN_14081d0ea;
            local_58 = (code *)&LAB_1459f2e4c;
            local_68 = &LAB_148c39de3;
            local_70 = &LAB_1457a9eb2;
            local_78 = &DAT_149e063b2;
            local_80 = 0;
            local_88 = 0x10000004;
            local_90 = 0x10;
            local_98 = 0x3de0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          }
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
            iVar5 = FUN_1408966e4(lVar7);
            if (iVar5 != -1) {
              uVar6 = FUN_1447210f0(lVar7);
              lVar7 = FUN_1406f612e(uVar6);
              if (lVar7 != 0) {
                plVar8 = (longlong *)FUN_148dd0d37();
                pcVar1 = (code *)(plVar8 + 2);
                local_48 = pcVar1;
                local_40 = plVar8;
                FUN_148dd0e42(&local_48,pcVar1);
                FUN_148dc6352(pcVar1,lVar7,iVar5,param_1);
                plVar3 = local_40;
                *param_2 = (longlong)pcVar1;
                param_2[1] = (longlong)plVar8;
                if (plVar8 == (longlong *)0x0) {
LAB_144209206:
                  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
                    FUN_144d8e3a0();
                  }
                  return param_2;
                }
                LOCK();
                *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
                UNLOCK();
                if (local_40 == (longlong *)0x0) goto LAB_144209206;
                LOCK();
                plVar8 = local_40 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 != 0) goto LAB_144209206;
                (**(code **)*local_40)(local_40);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 != 0) goto LAB_144209206;
                (**(code **)(*plVar3 + 0x10))(plVar3);
                goto LAB_1442091e3;
              }
            }
          }
        }
      }
    }
  }
LAB_1442091dd:
  *param_2 = 0;
  param_2[1] = 0;
LAB_1442091e3:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144209370 FUN_144209370 body=2145 status=ok
// SIG undefined FUN_144209370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144209370(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 == 0) {
    uVar3 = FUN_140b1c3dc();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x10) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar4 == 0) || (*(longlong *)(param_1 + 8) == 0)) goto LAB_14420974a;
    plVar5 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      goto LAB_14420974a;
    }
    uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 8));
    *(longlong *)(param_1 + 0x18) = lVar4;
    if (lVar4 == 0) goto LAB_14420974a;
  }
  lVar4 = *(longlong *)(param_3 + 0xa8);
  if (lVar4 == 0) {
LAB_14420974a:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_d8);
  }
  if (DAT_14caf64b8 == 0) {
    local_80 = &local_60;
    local_60 = FUN_141030f22;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_142b4754c;
    local_88 = &LAB_147c45ce0;
    local_90 = &LAB_1463f1ff4;
    local_98 = L"Game";
    local_a0 = 0x4000000000;
    local_a8 = 0x10000004;
    local_b0 = 8;
    local_b8 = CONCAT44(local_b8._4_4_,0x428);
    FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
  }
  if (((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) ||
     (lVar8 = *(longlong *)(lVar4 + 0x3b0), lVar8 == 0)) goto LAB_14420974a;
  if (DAT_14cbae3d8 == 0) {
    local_80 = &local_60;
    local_60 = FUN_141030f22;
    local_70 = FUN_14081d0ea;
    local_78 = (code *)&LAB_1464f5fc4;
    local_88 = &LAB_148c3dd26;
    local_90 = &LAB_1459673ba;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = CONCAT44(local_b8._4_4_,0x1360);
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    lVar8 = *(longlong *)(lVar4 + 0x3b0);
    if (lVar8 == 0) goto LAB_14420974a;
  }
  if (((DAT_14cbae3d8 == 0) || (lVar4 = *(longlong *)(lVar8 + 0x10), lVar4 == 0)) ||
     ((*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38) ||
      (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) !=
       DAT_14cbae3d8 + 0x30)))) goto LAB_14420974a;
  plVar5 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b999c10;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  plVar5[6] = 0;
  plVar5[7] = 0;
  plVar5[8] = 0;
  plVar9 = plVar5 + 2;
  *plVar9 = (longlong)&PTR_FUN_14b999c28;
  plVar5[9] = 0;
  if (plVar9 != (longlong *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar13 = (longlong *)&DAT_00000020;
      plVar7 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_144209a99:
        LOCK();
        piVar6 = (int *)((longlong)plVar7 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        *plVar13 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_1442094df;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar5[3] = (longlong)plVar9;
      if ((longlong *)plVar5[4] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar5[4] != (longlong *)0x0) {
          plVar13 = plVar5 + 4;
          plVar7 = (longlong *)plVar5[4];
          goto LAB_144209a99;
        }
        plVar5[4] = (longlong)plVar5;
      }
LAB_1442094df:
      LOCK();
      plVar13 = plVar5 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar6 = (int *)((longlong)plVar5 + 0xc);
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (*piVar6 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  uVar1 = *(uint *)(lVar8 + 0xc);
  *(uint *)(plVar5 + 9) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar10;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar11);
    }
    LOCK();
    iVar10 = *(int *)(lVar4 + 0x10);
    bVar14 = iVar10 == 0;
    if (bVar14) {
      *(int *)(lVar4 + 0x10) = iVar11;
      iVar10 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar10 = iVar11;
    }
  }
  *(int *)((longlong)plVar5 + 0x4c) = iVar10;
  lVar4 = FUN_1410d5fbe(param_1);
  if (lVar4 == 0) goto LAB_144209820;
  piVar6 = (int *)FUN_1409e484c(lVar8,lVar4);
  local_b8 = (longlong)*piVar6;
  FUN_1410d5ed8(plVar9,param_1,lVar8,lVar4);
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,4,0x10);
  local_58 = 4;
  plVar13 = (longlong *)plVar5[4];
  if (plVar13 == (longlong *)0x0) {
LAB_144209a27:
    *(undefined ***)local_60 = &PTR_LAB_14b961ce0;
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
    *(longlong *)(local_60 + 0x10) = lVar8;
    *(undefined ***)local_60 = &PTR_FUN_14b999c40;
    *(longlong *)(local_60 + 0x18) = 0;
    *(longlong *)(local_60 + 0x20) = 0;
    *(code **)(local_60 + 0x28) = FUN_1410d5dc4;
    *(undefined4 *)(local_60 + 0x30) = 0;
  }
  else {
    iVar10 = (int)plVar13[1];
    do {
      if (iVar10 == 0) goto LAB_144209a27;
      LOCK();
      iVar11 = (int)plVar13[1];
      bVar14 = iVar10 == iVar11;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar10 + 1;
        iVar11 = iVar10;
      }
      iVar10 = iVar11;
      UNLOCK();
    } while (!bVar14);
    lVar4 = plVar5[3];
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    *(undefined ***)local_60 = &PTR_LAB_14b961ce0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar8 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar8 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar8;
    *(longlong *)(local_60 + 0x10) = lVar12;
    *(undefined ***)local_60 = &PTR_FUN_14b999c40;
    *(longlong *)(local_60 + 0x18) = lVar4;
    *(longlong **)(local_60 + 0x20) = plVar13;
    LOCK();
    *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
    UNLOCK();
    *(code **)(local_60 + 0x28) = FUN_1410d5dc4;
    *(undefined4 *)(local_60 + 0x30) = 0;
    LOCK();
    plVar7 = plVar13 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar6 = (int *)((longlong)plVar13 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    LOCK();
    plVar7 = plVar13 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar6 = (int *)((longlong)plVar13 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    LOCK();
    plVar7 = plVar13 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar6 = (int *)((longlong)plVar13 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_60 + 0x30))(), uVar1 = DAT_14cbd0b80, cVar2 == '\0'))
  {
    if (local_58 != 0) {
      if (local_60 == (code *)0x0) goto LAB_144209820;
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_144209807;
    }
  }
  else {
    if ((DAT_14cbd0b8c < 1) &&
       (DAT_14cbd0b88 = DAT_14cbd0b88 + -1, DAT_14cbd0b88 <= (int)DAT_14cbd0b80)) {
      if (0 < (int)DAT_14cbd0b80) {
        iVar10 = 0;
        do {
          if (((*(int *)(DAT_14cbd0b78 + 8 + (longlong)iVar10 * 0x10) == 0) ||
              (plVar13 = *(longlong **)(DAT_14cbd0b78 + (longlong)iVar10 * 0x10),
              plVar13 == (longlong *)0x0)) ||
             (cVar2 = (**(code **)(*plVar13 + 0x28))(), cVar2 != '\0')) {
            FUN_14005b288(&DAT_14cbd0b78,iVar10);
            FUN_14005b248(&DAT_14cbd0b78);
          }
          else {
            iVar10 = iVar10 + 1;
          }
        } while (iVar10 < (int)DAT_14cbd0b80);
      }
      DAT_14cbd0b88 = 2;
      if (2 < (int)(DAT_14cbd0b80 * 2)) {
        DAT_14cbd0b88 = DAT_14cbd0b80 * 2;
      }
      if ((DAT_14cbd0b88 < (int)uVar1) && (DAT_14cbd0b84 != DAT_14cbd0b80)) {
        FUN_14045812c();
      }
    }
    if ((local_58 != 0) && (local_60 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_60 + 0x38))(local_60,local_50);
    }
    uVar1 = DAT_14cbd0b80;
    lVar4 = (longlong)(int)DAT_14cbd0b80;
    DAT_14cbd0b80 = DAT_14cbd0b80 + 1;
    if (DAT_14cbd0b84 < DAT_14cbd0b80) {
      FUN_1447a71f6(&DAT_14cbd0b78,uVar1);
    }
    lVar8 = DAT_14cbd0b78;
    lVar4 = lVar4 * 0x10;
    *(undefined8 *)(DAT_14cbd0b78 + lVar4) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar4) = 0;
    *(code **)(lVar8 + lVar4) = local_60;
    local_60 = (code *)0x0;
    *(int *)(lVar8 + 8 + lVar4) = local_58;
LAB_144209807:
    local_58 = 0;
  }
  if (local_60 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_144209820:
  *param_2 = plVar9;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144209bea FUN_144209bea body=93 status=ok
// SIG undefined FUN_144209bea(void)

undefined8 * FUN_144209bea(undefined8 *param_1)

{
  FUN_1458d0582();
  *param_1 = &PTR_FUN_14b7e2600;
  *(undefined4 *)(param_1 + 0x20) = 1;
  FUN_1447715ec(param_1 + 5,&DAT_14cb89d18);
  FUN_1447715ec(param_1 + 10,&DAT_14cb89a50);
  param_1[0x10] = DAT_14cb89a48;
  return param_1;
}



// FUNCTION 144209cd2 FUN_144209cd2 body=584 status=ok
// SIG undefined FUN_144209cd2(void)

undefined8 FUN_144209cd2(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
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
  lVar2 = *param_2;
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_50 = &local_38;
      local_38 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar7 = *(longlong *)(param_1 + 0x28);
      if (lVar7 == 0) {
        uVar6 = FUN_140b1c3dc();
        lVar7 = FUN_14477b664(uVar6);
        *(longlong *)(param_1 + 0x28) = lVar7;
      }
      plVar1 = (longlong *)(param_1 + 0x20);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        uVar6 = 0;
        if ((lVar7 == 0) || (*plVar1 == 0)) goto LAB_144209dab;
        plVar3 = *(longlong **)(lVar7 + 0xb8);
        if (plVar3 != (longlong *)0x0) {
          cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar4 != '\0') {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar7 = FUN_144aff482(uVar6,plVar1);
            *(longlong *)(param_1 + 0x30) = lVar7;
            if (lVar7 == 0) goto LAB_144209da9;
            goto LAB_144209dd1;
          }
        }
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      else {
LAB_144209dd1:
        iVar5 = FUN_1459657be(param_1,lVar2,param_2);
        if (0 < iVar5) {
          lVar7 = *(longlong *)(param_1 + 0x28);
          if (lVar7 == 0) {
            uVar6 = FUN_140b1c3dc();
            lVar7 = FUN_14477b664(uVar6);
            *(longlong *)(param_1 + 0x28) = lVar7;
          }
          lVar8 = *(longlong *)(param_1 + 0x30);
          if (((lVar8 == 0) && (lVar8 = 0, lVar7 != 0)) && (*plVar1 != 0)) {
            plVar3 = *(longlong **)(lVar7 + 0xb8);
            if (plVar3 == (longlong *)0x0) {
LAB_144209f14:
              lVar8 = 0;
            }
            else {
              cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
              if (cVar4 == '\0') goto LAB_144209f14;
              uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar8 = FUN_144aff482(uVar6,plVar1);
            }
            *(longlong *)(param_1 + 0x30) = lVar8;
          }
          FUN_1441f03d2(lVar2,lVar8,iVar5);
          uVar6 = 1;
          goto LAB_144209dab;
        }
      }
    }
  }
LAB_144209da9:
  uVar6 = 0;
LAB_144209dab:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144209f1b FUN_144209f1b body=69 status=ok
// SIG undefined FUN_144209f1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144209f1b(void)

{
  _DAT_14cbd1268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144209f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbd1270,1);
  return;
}



// FUNCTION 14420a0a6 FUN_14420a0a6 body=1292 status=ok
// SIG undefined FUN_14420a0a6(void)

void FUN_14420a0a6(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *_Dst;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    param_1[0x2d] = 0;
  }
  else {
    lVar4 = FUN_1403ca142();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30)) {
      param_1[0x2d] = 0;
      lVar4 = 0;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(param_2);
      }
      param_1[0x2d] = param_2;
      lVar4 = param_2;
    }
    pcVar7 = *(char **)(lVar4 + 0x30);
    if (pcVar7 == (char *)0x0) {
      cVar2 = '\0';
    }
    else {
      pcVar6 = (char *)(*(longlong *)(pcVar7 + 0x360) + 0x152);
      if (*(longlong *)(pcVar7 + 0x360) == 0) {
        pcVar6 = pcVar7;
      }
      cVar2 = *pcVar6;
    }
    if ((((*(int *)((longlong)param_1 + 0xd4) < 0) &&
         (lVar4 = (**(code **)(*param_1 + 0x2f0))(param_1), lVar4 == 0)) ||
        (lVar4 = (**(code **)(*param_1 + 0x2f0))(param_1), lVar4 != 0)) && (param_1[0x32] == 0)) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x98,0x10);
      puVar5[10] = 0;
      *(undefined4 *)(puVar5 + 0xb) = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x5c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)puVar5 + 100) = 0;
      puVar5[0xe] = 0;
      *(undefined4 *)(puVar5 + 0xf) = 0;
      *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
      puVar5[0x11] = 0;
      puVar5[0x12] = 0;
      param_1[0x32] = (longlong)puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        iVar3 = 0;
        if (param_1[0x2d] != 0) {
          uVar1 = *(uint *)(param_1[0x2d] + 0xc);
          *(uint *)(puVar5 + 2) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
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
        }
        *(int *)((longlong)puVar5 + 0x14) = iVar3;
        if (param_1 == (longlong *)0x0) {
          *(undefined4 *)(puVar5 + 3) = 0;
          iVar3 = 0;
        }
        else {
          uVar1 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(puVar5 + 3) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
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
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar8);
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
        }
        *(int *)((longlong)puVar5 + 0x1c) = iVar3;
      }
    }
    if (param_1[0x2f] == 0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x218,0x10);
      FUN_14610f490(puVar5);
      *puVar5 = &PTR_FUN_14b96b170;
      puVar5[0x42] = 0;
      param_1[0x2f] = (longlong)puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_146263e50(puVar5,param_1[0x2d],param_1,0);
      }
    }
    if ((cVar2 != '\x05') && (param_1[0x30] == 0)) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x1d0);
      memset(puVar5,0,0x1d0);
      FUN_14891ac4e(puVar5);
      *puVar5 = &PTR_FUN_14b999d10;
      puVar5[0x2d] = 0;
      *(undefined8 *)((longlong)puVar5 + 0x16d) = 0;
      puVar5[0x2f] = 0;
      puVar5[0x30] = 0;
      *(undefined4 *)(puVar5 + 0x31) = 2;
      *(undefined8 *)((longlong)puVar5 + 0x18c) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x194) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x19c) = 0x200000000;
      *(undefined8 *)((longlong)puVar5 + 0x1a4) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1aa) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1b4) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1bc) = 0;
      *(undefined8 *)((longlong)puVar5 + 0x1c4) = 0;
      param_1[0x30] = (longlong)puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_1457d4496(puVar5,param_1[0x2d],param_1);
      }
    }
    if (param_1[0x2f] != 0) {
      FUN_1414ef458();
    }
    if ((cVar2 != '\x05') && (cVar2 = FUN_145f83590(param_1,param_1 + 0x2e), cVar2 != '\0')) {
      FUN_1440e06d2(param_1[0x2e],param_1);
    }
    lVar4 = (**(code **)(*param_1 + 0x2f0))(param_1);
    if ((lVar4 == 0) && (*(int *)((longlong)param_1 + 0x4c) < 3)) {
      if (param_1[0x31] == 0) {
        _Dst = (void *)FUN_14001cc68(0x260);
        memset(_Dst,0,0x260);
        FUN_14663380e(_Dst);
        param_1[0x31] = (longlong)_Dst;
        if (_Dst != (void *)0x0) {
          FUN_143c9244e(_Dst,param_1);
        }
      }
    }
    else {
      local_48[0] = 0;
      local_48[1] = 0;
      lVar4 = (**(code **)(*param_1 + 0x2f0))(param_1);
      pcVar7 = "Can\'t create because it\'s a sub shard. ";
      if (lVar4 == 0) {
        pcVar7 = "";
      }
      uVar9 = 0x27;
      if (lVar4 == 0) {
        uVar9 = 0;
      }
      FUN_14047a987(local_48,pcVar7,uVar9);
      pcVar7 = "Can\'t create because I\'m a client. ";
      if (2 < *(int *)((longlong)param_1 + 0x4c)) {
        pcVar7 = "";
      }
      uVar9 = 0x23;
      if (2 < *(int *)((longlong)param_1 + 0x4c)) {
        uVar9 = 0;
      }
      FUN_14047a987(local_48,pcVar7,uVar9);
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
    FUN_145fe3360(param_1,param_2);
  }
  if ((local_48[2] ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14420a5de FUN_14420a5de body=286 status=ok
// SIG undefined FUN_14420a5de(void)

void FUN_14420a5de(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0x20) != 0)) {
    plVar9 = *(longlong **)(param_2 + 0x18);
    plVar3 = plVar9 + (longlong)*(int *)(param_2 + 0x20) * 3;
    do {
      lVar8 = *plVar9;
      plVar5 = (longlong *)plVar9[1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
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
      if (lVar8 != 0) {
        uVar7 = FUN_14185600a();
        cVar6 = FUN_1448093f4(lVar8,uVar7);
        if (cVar6 == '\0') {
          uVar7 = FUN_1409e3b02();
          cVar6 = FUN_1448093f4(lVar8,uVar7);
          if (cVar6 != '\0') {
            lVar8 = FUN_140aa5740(lVar8);
            if (lVar8 != 0) {
              iVar4 = *(int *)(param_1 + 0x10);
              *(uint *)(param_1 + 0x10) = iVar4 + 1U;
              if (*(uint *)(param_1 + 0x14) < iVar4 + 1U) {
                FUN_1415027c0((longlong *)(param_1 + 8),iVar4);
              }
              *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar4 * 8) = lVar8;
            }
          }
        }
        else {
          uVar7 = FUN_144208ef0(lVar8);
          FUN_14420a5de(param_1,uVar7);
        }
      }
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
      plVar9 = plVar9 + 3;
    } while (plVar9 != plVar3);
  }
  return;
}



// FUNCTION 14420a6fc FUN_14420a6fc body=50 status=ok
// SIG undefined FUN_14420a6fc(void)

void FUN_14420a6fc(void)

{
  longlong lVar1;
  
  lVar1 = 0x1180;
  do {
    if (*(longlong *)(&DAT_14cbd1410 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 14420a72e FUN_14420a72e body=530 status=ok
// SIG undefined FUN_14420a72e(void)

void FUN_14420a72e(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  
  pcVar5 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar5 != (code *)&LAB_1427dd5fe) {
    (*pcVar5)(*(longlong **)(param_1 + 0x10),param_1,1,0,0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951808) && (FUN_144b3d300(&DAT_14c951808), DAT_14c951808 == -1)) {
    FUN_145dfc00c(&DAT_14c951778);
    atexit((_func_5014 *)&LAB_142809c19);
    _Init_thread_footer(&DAT_14c951808);
  }
  lVar7 = param_1;
  if (*(int *)(param_1 + 0x2f0) == 0) {
    for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x20)) {
      if ((*(uint *)(lVar7 + 8) & 0x30) != 0) goto LAB_14420a816;
    }
    plVar1 = (longlong *)(param_1 + 0x2e8);
    if (*(int *)(param_1 + 0x2f4) < 6) {
      FUN_144219426(plVar1,6);
    }
    lVar7 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x2f0);
      *(uint *)(param_1 + 0x2f0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x2f4) < iVar4 + 1U) {
        FUN_144219574(plVar1,iVar4);
      }
      lVar6 = *plVar1;
      *(undefined8 *)(lVar6 + (longlong)iVar4 * 0x18) =
           *(undefined8 *)((longlong)&DAT_14cbd13f0 + lVar7);
      puVar3 = (undefined8 *)(lVar6 + 8 + (longlong)iVar4 * 0x18);
      *puVar3 = 0;
      puVar3[1] = 0;
      lVar7 = lVar7 + 8;
    } while (lVar7 != 0x30);
  }
LAB_14420a816:
  lVar7 = param_1;
  if (*(int *)(param_1 + 0x300) == 0) {
    for (; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x20)) {
      if ((*(uint *)(lVar7 + 8) & 0x30) != 0) {
        return;
      }
    }
    plVar1 = (longlong *)(param_1 + 0x2f8);
    if (*(int *)(param_1 + 0x304) < 0x70) {
      FUN_1442196e0(plVar1,0x70);
    }
    lVar7 = 0;
    do {
      if ((DAT_14cb8a358 != 0) &&
         (lVar6 = FUN_144837462(DAT_14cb8a358,&DAT_14cbd1420 + lVar7), lVar6 != 0)) {
        iVar4 = *(int *)(param_1 + 0x300);
        *(uint *)(param_1 + 0x300) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x304) < iVar4 + 1U) {
          FUN_14421982e(plVar1,iVar4);
        }
        plVar2 = (longlong *)(*plVar1 + (longlong)iVar4 * 0x18);
        *plVar2 = lVar6;
        plVar2[1] = 0;
        plVar2[2] = 0;
        FUN_14420a5de(plVar2,lVar6);
      }
      lVar7 = lVar7 + 0x28;
    } while (lVar7 != 0x1180);
  }
  return;
}



// FUNCTION 14420a940 FUN_14420a940 body=9073 status=ok
// SIG undefined FUN_14420a940(void)

void FUN_14420a940(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  void *_Dst;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  longlong *plVar19;
  longlong lVar20;
  uint *puVar21;
  undefined4 *puVar22;
  byte bVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  uint *puVar27;
  undefined1 *puVar28;
  longlong *plVar29;
  undefined4 uVar30;
  uint uVar31;
  longlong lVar32;
  longlong *plVar33;
  int iVar34;
  ulonglong uVar35;
  longlong *plVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  longlong *plVar40;
  uint uVar41;
  ulonglong uVar42;
  bool bVar43;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  uint *local_1e8;
  longlong *local_1e0;
  undefined4 *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_16c;
  longlong *local_168;
  int local_160;
  undefined4 local_154;
  ulonglong local_150;
  undefined4 local_148;
  uint local_140;
  int local_13c;
  undefined1 local_138 [16];
  undefined1 *local_128;
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  longlong local_100;
  undefined8 uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  longlong local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong auStack_90 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_b8 = 0;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  local_154 = param_3;
  FUN_14114e6dc(&local_b8,param_4);
  local_168 = (longlong *)0x0;
  local_160 = 0;
  FUN_1446efa72(&local_168,0,3,0x10);
  local_160 = 3;
  *local_168 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar32 = DAT_14c758608 + 1;
  lVar17 = DAT_14c758608 + 1;
  if (lVar32 == 0) {
    LOCK();
    UNLOCK();
    lVar32 = DAT_14c758608 + 2;
    lVar17 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar17;
  local_168[2] = lVar32;
  *local_168 = (longlong)&PTR_FUN_14b999dc0;
  local_168[3] = local_b8;
  local_b8 = 0;
  *(undefined4 *)(local_168 + 4) = (undefined4)uStack_b0;
  if (((param_2 != 0) && (lVar17 = *(longlong *)(param_2 + 0x1e0), lVar17 != 0)) &&
     (lVar32 = *(longlong *)(lVar17 + 0x30), lVar32 != 0)) {
    lVar17 = *(longlong *)(lVar17 + 0x68);
    lVar16 = FUN_14130c5c8();
    if (((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar32 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar32 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) &&
       (-1 < (short)param_3 && lVar17 != 0)) {
      local_16c = FUN_140b9fef0(lVar17,&local_154,0);
      lVar17 = FUN_140b9ffa8(lVar32);
      if (lVar17 != 0) {
        *(undefined4 *)(param_1 + 0x318) = local_154;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar32);
        }
        bVar23 = DAT_14c950c29;
        *(longlong *)(param_1 + 800) = lVar32;
        if ((bVar23 & 1) != 0) {
          FUN_1456cec3c(lVar17);
        }
        *(longlong *)(param_1 + 0x328) = lVar17;
        local_198 = lVar17;
        FUN_14114e6dc(param_1 + 0x338,param_4);
        if ((local_160 != 0) && (local_168 != (longlong *)0x0)) {
          (**(code **)*local_168)(local_168,0);
          FUN_1446efa72(&local_168,0,0,0x10);
          local_160 = 0;
        }
        *(undefined8 *)(param_1 + 0x2cc) = 0;
        lVar32 = FUN_1410a623c();
        lVar17 = *(longlong *)(lVar32 + 0x58);
        if (lVar17 == 0) {
          uVar18 = FUN_145764ed6();
          lVar17 = FUN_14477b664(uVar18);
          *(longlong *)(lVar32 + 0x58) = lVar17;
        }
        lVar16 = *(longlong *)(lVar32 + 0x60);
        if (((lVar16 == 0) && (lVar16 = 0, lVar17 != 0)) && (*(longlong *)(lVar32 + 0x50) != 0)) {
          plVar19 = *(longlong **)(lVar17 + 0xb8);
          if ((plVar19 == (longlong *)0x0) ||
             (cVar12 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar12 == '\0')) {
            lVar16 = 0;
          }
          else {
            uVar18 = (**(code **)(*plVar19 + 0x110))(plVar19);
            lVar16 = FUN_144aff482(uVar18,(longlong *)(lVar32 + 0x50));
          }
          *(longlong *)(lVar32 + 0x60) = lVar16;
        }
        *(longlong *)(param_1 + 0x2d8) = lVar16;
        local_1f0 = param_1;
        if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
          plVar19 = (longlong *)(param_1 + 0x38);
          FUN_14421a48e();
          iVar13 = *(int *)(param_1 + 0x60);
          if (iVar13 == 0) {
            uVar42 = 0;
            uVar37 = 1;
            iVar34 = 0;
            iVar24 = 0;
          }
          else {
            puVar21 = *(uint **)(param_1 + 0x58);
            if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
              puVar21 = (uint *)(param_1 + 0x48);
            }
            uVar41 = *puVar21;
            if (uVar41 == 0) {
              iVar24 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar24 = iVar13 + -1;
              }
              uVar42 = 0;
              uVar37 = (ulonglong)(uint)(iVar24 >> 5);
              if (iVar24 >> 5 < 1) {
                uVar37 = uVar42;
              }
              iVar34 = 0;
              do {
                if (uVar37 == uVar42) goto LAB_14420ad49;
                iVar34 = iVar34 + 0x20;
                uVar41 = puVar21[uVar42 + 1];
                uVar42 = uVar42 + 1;
              } while (uVar41 == 0);
            }
            else {
              uVar42 = 0;
              iVar34 = 0;
            }
            uVar37 = (ulonglong)(-uVar41 & uVar41);
            uVar35 = uVar37 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar24 = (iVar34 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar24) {
              iVar24 = iVar13;
            }
          }
          if (iVar24 < iVar13) {
            uVar41 = 0xffffffff;
            do {
              if (*(longlong *)(*plVar19 + 0x18 + (longlong)iVar24 * 0x38) != 0) {
                FUN_1400020a8();
                iVar13 = *(int *)(local_1f0 + 0x60);
              }
              uVar41 = uVar41 & ~(uint)uVar37;
              puVar21 = *(uint **)(local_1f0 + 0x58);
              if (*(uint **)(local_1f0 + 0x58) == (uint *)0x0) {
                puVar21 = (uint *)(param_1 + 0x48);
              }
              iVar24 = (int)uVar42;
              lVar17 = (longlong)iVar24;
              uVar25 = puVar21[lVar17] & uVar41;
              if (uVar25 == 0) {
                iVar26 = iVar13 + 0x1e;
                if (-1 < iVar13 + -1) {
                  iVar26 = iVar13 + -1;
                }
                iVar26 = iVar26 >> 5;
                iVar15 = iVar26;
                if (iVar26 < iVar24) {
                  iVar15 = iVar24;
                }
                if (iVar26 <= iVar24) break;
                lVar32 = 0;
                while( true ) {
                  iVar34 = iVar34 + 0x20;
                  uVar25 = puVar21[lVar32 + lVar17 + 1];
                  if (uVar25 != 0) break;
                  lVar32 = lVar32 + 1;
                  if (iVar15 - lVar17 == lVar32) goto LAB_14420ad49;
                }
                uVar42 = (ulonglong)(iVar24 + (int)lVar32 + 1);
                uVar41 = 0xffffffff;
              }
              uVar37 = (ulonglong)(-uVar25 & uVar25);
              uVar35 = uVar37 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar35 != 0) {
                for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar24 = (iVar34 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            } while (iVar24 < iVar13);
          }
LAB_14420ad49:
          param_1 = local_1f0;
          *(undefined4 *)(local_1f0 + 0x40) = 0;
          if (*(int *)(local_1f0 + 0x44) < 0) {
            FUN_144748838(plVar19,0);
          }
          *(undefined8 *)(param_1 + 0x68) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x60) = 0;
        }
        local_1a8 = param_4;
        plVar19 = (longlong *)FUN_1414c2158();
        lVar17 = plVar19[0x22];
        if (lVar17 == 0) {
          (**(code **)(*plVar19 + 1000))(plVar19);
          lVar17 = plVar19[0x22];
        }
        if ((longlong)*(int *)(lVar17 + 0x30) != 0) {
          plVar19 = *(longlong **)(lVar17 + 0x28);
          local_1a0 = plVar19 + (longlong)*(int *)(lVar17 + 0x30) * 3;
          local_1e0 = (longlong *)(param_1 + 0x38);
          local_1e8 = (uint *)(param_1 + 0x48);
          local_1d0 = (longlong *)(param_1 + 0x70);
          do {
            lVar17 = plVar19[1];
            if (lVar17 == 0) {
              uVar18 = FUN_141221512();
              lVar17 = FUN_14477b664(uVar18);
              plVar19[1] = lVar17;
            }
            lVar32 = plVar19[2];
            if (lVar32 == 0) {
              if ((lVar17 != 0) && (*plVar19 != 0)) {
                plVar40 = *(longlong **)(lVar17 + 0xb8);
                if ((plVar40 == (longlong *)0x0) ||
                   (cVar12 = (**(code **)(*plVar40 + 0x108))(plVar40), cVar12 == '\0')) {
                  plVar19[2] = 0;
                }
                else {
                  uVar18 = (**(code **)(*plVar40 + 0x110))(plVar40);
                  lVar32 = FUN_144aff482(uVar18,plVar19);
                  plVar19[2] = lVar32;
                  if (lVar32 != 0) goto LAB_14420ae01;
                }
              }
            }
            else {
LAB_14420ae01:
              if ((longlong)*(int *)(lVar32 + 0x38) != 0) {
                plVar40 = *(longlong **)(lVar32 + 0x30);
                local_1c8 = plVar40 + (longlong)*(int *)(lVar32 + 0x38) * 3;
LAB_14420ae1f:
                lVar17 = FUN_1408d7900(plVar40);
                if (((lVar17 != 0) && (*(longlong *)(param_1 + 0x2d8) != 0)) &&
                   ((longlong)*(int *)(lVar17 + 0x4a0) != 0)) {
                  lVar32 = (longlong)*(int *)(lVar17 + 0x4a0) * 0x50;
                  lVar16 = *(longlong *)(lVar17 + 0x498) + 0x10;
                  do {
                    uVar18 = *(undefined8 *)(param_1 + 0x2d8);
                    local_b8 = local_b8 & 0xffffffffffffff00;
                    auStack_90[0] = auStack_90[0] & 0xffffffff00000000;
                    FUN_1456bb102(&local_b8,param_1);
                    lVar20 = FUN_140c520a2(lVar16);
                    if (lVar20 == 0) {
                      iVar13 = 0;
                    }
                    else {
                      iVar13 = FUN_144208dd6(&local_b8,lVar20,uVar18);
                    }
                    FUN_1448173f8(auStack_90);
                    if (((char)local_b8 == '\x03') && (local_a8 != (longlong *)0x0)) {
                      LOCK();
                      piVar1 = (int *)((longlong)local_a8 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*local_a8 + 0x10))();
                      }
                    }
                    param_1 = local_1f0;
                    if (0 < iVar13) {
                      lVar32 = *(longlong *)(lVar17 + 0x128);
                      if (lVar32 == 0) {
                        uVar18 = FUN_1406ef318();
                        lVar32 = FUN_14477b664(uVar18);
                        *(longlong *)(lVar17 + 0x128) = lVar32;
                      }
                      if (*(longlong *)(lVar17 + 0x130) == 0) {
                        if ((lVar32 == 0) || (*(longlong *)(lVar17 + 0x120) == 0)) break;
                        plVar29 = *(longlong **)(lVar32 + 0xb8);
                        if ((plVar29 == (longlong *)0x0) ||
                           (cVar12 = (**(code **)(*plVar29 + 0x108))(plVar29), cVar12 == '\0')) {
                          *(undefined8 *)(lVar17 + 0x130) = 0;
                          param_1 = local_1f0;
                          break;
                        }
                        uVar18 = (**(code **)(*plVar29 + 0x110))(plVar29);
                        lVar32 = FUN_144aff482(uVar18,(longlong *)(lVar17 + 0x120));
                        *(longlong *)(lVar17 + 0x130) = lVar32;
                        param_1 = local_1f0;
                        if (lVar32 == 0) break;
                      }
                      FUN_14014e996(lVar17 + 0xe0,&local_b8,1,0);
                      if (*(int *)(param_1 + 0x6c) != 0) {
                        iVar24 = *(int *)(param_1 + 0x68);
                        lVar16 = (longlong)iVar24;
                        iVar13 = *(int *)(*(longlong *)(param_1 + 0x38) + 4 + lVar16 * 0x38);
                        *(int *)(param_1 + 0x68) = iVar13;
                        iVar34 = *(int *)(param_1 + 0x6c) + -1;
                        *(int *)(param_1 + 0x6c) = iVar34;
                        lVar32 = local_1f0;
                        puVar21 = local_1e8;
                        if (iVar34 != 0) {
                          *(undefined4 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar13 * 0x38) =
                               0xffffffff;
                        }
                        goto LAB_14420b07d;
                      }
                      iVar24 = *(int *)(param_1 + 0x40);
                      *(int *)(param_1 + 0x40) = iVar24 + 1;
                      if (*(int *)(param_1 + 0x44) == iVar24) {
                        FUN_1447030e2(local_1e0,iVar24);
                      }
                      uVar41 = *(uint *)(param_1 + 0x60);
                      uVar37 = (ulonglong)uVar41;
                      if (uVar41 == 0) {
                        iVar13 = -1;
                      }
                      else {
                        iVar13 = uVar41 + 0x1e;
                        if (-1 < (int)(uVar41 - 1)) {
                          iVar13 = uVar41 - 1;
                        }
                        iVar13 = iVar13 >> 5;
                      }
                      iVar34 = uVar41 + 1;
                      uVar25 = uVar41 + 0x1f;
                      if (-1 < (int)uVar41) {
                        uVar25 = uVar41;
                      }
                      lVar32 = local_1f0;
                      puVar21 = local_1e8;
                      local_1d8 = (undefined4 *)uVar37;
                      if ((int)uVar25 >> 5 == iVar13) {
                        *(int *)(local_1f0 + 0x60) = iVar34;
                        goto LAB_14420b05c;
                      }
                      if ((int)uVar41 < *(int *)(local_1f0 + 100)) goto LAB_14420b24e;
                      if (uVar41 + 0x20 < 0xa0) {
                        iVar13 = 0x80;
                        goto LAB_14420b3ae;
                      }
                      uVar41 = uVar41 + 0x20 >> 5;
                      if (*(int *)(local_1f0 + 100) + 0x1fU < 0xa0) {
                        uVar31 = 4;
                        if (4 < uVar41) {
                          uVar31 = uVar41;
                        }
                      }
                      else {
                        uVar31 = uVar41 + (uVar41 * 3 >> 3) + 0x10;
                      }
                      uVar42 = (ulonglong)(uVar31 * 4);
                      if (DAT_14c872d28 == (longlong *)0x0) goto LAB_14420b38c;
                      if (*(code **)(*DAT_14c872d28 + 0x60) != (code *)&LAB_14489e5c8) {
                        uVar42 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar42,0);
                        uVar37 = (ulonglong)*(uint *)(local_1f0 + 0x60);
                        goto LAB_14420b38c;
                      }
                      uVar14 = (uint)(uVar42 + 0xf);
                      if (uVar31 < 0x1ffd) {
                        uVar42 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar14 >> 4]];
                        goto LAB_14420b38c;
                      }
                      uVar35 = uVar42 + 0xf & 0xfffffffffffffff0;
                      if (0x7ff0 < uVar35) goto LAB_14420b3f9;
                      bVar23 = (&DAT_14c841e00)[uVar14 >> 4];
                      uVar39 = 0x32;
                      if (0x32 < bVar23) {
                        uVar39 = (ulonglong)bVar23;
                      }
                      uVar38 = 0x32 - (ulonglong)bVar23;
                      goto LAB_14420b454;
                    }
                    lVar16 = lVar16 + 0x50;
                    lVar32 = lVar32 + -0x50;
                  } while (lVar32 != 0);
                }
                goto LAB_14420b2d1;
              }
            }
LAB_14420b4e4:
            plVar19 = plVar19 + 3;
          } while (plVar19 != local_1a0);
        }
        if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
          local_1c8 = (longlong *)(param_1 + 0x128);
          FUN_14421a8c8();
          iVar13 = *(int *)(param_1 + 0x150);
          if (iVar13 == 0) {
            uVar42 = 0;
            uVar37 = 1;
            iVar34 = 0;
            iVar24 = 0;
          }
          else {
            puVar21 = *(uint **)(param_1 + 0x148);
            if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
              puVar21 = (uint *)(param_1 + 0x138);
            }
            uVar41 = *puVar21;
            if (uVar41 == 0) {
              iVar24 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar24 = iVar13 + -1;
              }
              uVar42 = 0;
              uVar37 = (ulonglong)(uint)(iVar24 >> 5);
              if (iVar24 >> 5 < 1) {
                uVar37 = uVar42;
              }
              iVar34 = 0;
              do {
                if (uVar37 == uVar42) goto LAB_14420b6b1;
                iVar34 = iVar34 + 0x20;
                uVar41 = puVar21[uVar42 + 1];
                uVar42 = uVar42 + 1;
              } while (uVar41 == 0);
            }
            else {
              uVar42 = 0;
              iVar34 = 0;
            }
            uVar37 = (ulonglong)(-uVar41 & uVar41);
            uVar35 = uVar37 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar24 = (iVar34 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar13 <= iVar24) {
              iVar24 = iVar13;
            }
          }
          if (iVar24 < iVar13) {
            uVar41 = 0xffffffff;
            do {
              lVar17 = *local_1c8;
              lVar32 = (longlong)iVar24 * 0x80;
              *(undefined4 *)(lVar17 + 0x70 + lVar32) = 0;
              if (*(longlong *)(lVar17 + 0x68 + lVar32) != 0) {
                FUN_1400020a8();
              }
              FUN_144099ebe(lVar17 + lVar32 + 0x28);
              if (*(longlong *)(lVar17 + lVar32 + 0x18) != 0) {
                FUN_1400020a8();
              }
              uVar41 = uVar41 & ~(uint)uVar37;
              puVar21 = *(uint **)(local_1f0 + 0x148);
              if (*(uint **)(local_1f0 + 0x148) == (uint *)0x0) {
                puVar21 = (uint *)(param_1 + 0x138);
              }
              iVar13 = *(int *)(local_1f0 + 0x150);
              iVar24 = (int)uVar42;
              lVar17 = (longlong)iVar24;
              uVar25 = puVar21[lVar17] & uVar41;
              if (uVar25 == 0) {
                iVar26 = iVar13 + 0x1e;
                if (-1 < iVar13 + -1) {
                  iVar26 = iVar13 + -1;
                }
                iVar26 = iVar26 >> 5;
                iVar15 = iVar26;
                if (iVar26 < iVar24) {
                  iVar15 = iVar24;
                }
                if (iVar26 <= iVar24) break;
                lVar32 = 0;
                while( true ) {
                  iVar34 = iVar34 + 0x20;
                  uVar25 = puVar21[lVar32 + lVar17 + 1];
                  if (uVar25 != 0) break;
                  lVar32 = lVar32 + 1;
                  if (iVar15 - lVar17 == lVar32) goto LAB_14420b6b1;
                }
                uVar42 = (ulonglong)(iVar24 + (int)lVar32 + 1);
                uVar41 = 0xffffffff;
              }
              uVar37 = (ulonglong)(-uVar25 & uVar25);
              uVar35 = uVar37 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar35 != 0) {
                for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar24 = (iVar34 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            } while (iVar24 < iVar13);
          }
LAB_14420b6b1:
          param_1 = local_1f0;
          *(undefined4 *)(local_1f0 + 0x130) = 0;
          if (*(int *)(local_1f0 + 0x134) < 0) {
            FUN_14095c99c(local_1c8,0);
          }
          *(undefined8 *)(param_1 + 0x158) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x150) = 0;
        }
        if ((longlong)*(int *)(param_1 + 0x2f0) != 0) {
          plVar40 = *(longlong **)(param_1 + 0x2e8);
          plVar19 = plVar40 + (longlong)*(int *)(param_1 + 0x2f0) * 3;
          local_1d0 = (longlong *)(param_1 + 0x128);
          local_1d8 = (undefined4 *)(param_1 + 0x160);
          local_1c0 = param_1 + 0x138;
          local_1a0 = plVar19;
          do {
            lVar17 = plVar40[1];
            if (lVar17 == 0) {
              uVar18 = FUN_141221512();
              lVar17 = FUN_14477b664(uVar18);
              plVar40[1] = lVar17;
            }
            lVar32 = plVar40[2];
            if (lVar32 == 0) {
              if ((lVar17 != 0) && (*plVar40 != 0)) {
                plVar29 = *(longlong **)(lVar17 + 0xb8);
                if ((plVar29 == (longlong *)0x0) ||
                   (cVar12 = (**(code **)(*plVar29 + 0x108))(plVar29), cVar12 == '\0')) {
                  plVar40[2] = 0;
                }
                else {
                  uVar18 = (**(code **)(*plVar29 + 0x110))(plVar29);
                  lVar32 = FUN_144aff482(uVar18,plVar40);
                  plVar40[2] = lVar32;
                  if (lVar32 != 0) goto LAB_14420b75d;
                }
              }
            }
            else {
LAB_14420b75d:
              if ((longlong)*(int *)(lVar32 + 0x38) != 0) {
                plVar33 = *(longlong **)(lVar32 + 0x30);
                plVar29 = plVar33 + (longlong)*(int *)(lVar32 + 0x38) * 3;
                do {
                  lVar17 = FUN_1408d7900();
                  if (lVar17 != 0) {
                    lVar32 = *(longlong *)(lVar17 + 0x128);
                    if (lVar32 == 0) {
                      FUN_1406ef318();
                      lVar32 = FUN_14477b664();
                      *(longlong *)(lVar17 + 0x128) = lVar32;
                    }
                    plVar36 = (longlong *)(lVar17 + 0x120);
                    if (*(longlong *)(lVar17 + 0x130) == 0) {
                      if ((lVar32 != 0) && (*plVar36 != 0)) {
                        plVar2 = *(longlong **)(lVar32 + 0xb8);
                        local_1c8 = plVar40;
                        if ((plVar2 == (longlong *)0x0) ||
                           (cVar12 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar12 == '\0')) {
                          *(undefined8 *)(lVar17 + 0x130) = 0;
                          plVar40 = local_1c8;
                        }
                        else {
                          uVar18 = (**(code **)(*plVar2 + 0x110))(plVar2);
                          lVar32 = FUN_144aff482(uVar18,plVar36);
                          *(longlong *)(lVar17 + 0x130) = lVar32;
                          plVar40 = local_1c8;
                          if (lVar32 != 0) goto LAB_14420b7c2;
                        }
                      }
                    }
                    else {
LAB_14420b7c2:
                      if (*(int *)(lVar17 + 0x4a0) != 0) {
                        local_d8 = 0;
                        local_e8 = 0;
                        uStack_e0 = 0;
                        local_d0 = 0;
                        uStack_c8 = 0;
                        local_108 = 0;
                        local_118 = 0;
                        uStack_110 = 0;
                        local_100 = 0;
                        uStack_f8 = 0;
                        local_1c8 = plVar29;
                        FUN_14014e996(lVar17 + 0xe0,&local_140,1,0);
                        uVar37 = (ulonglong)local_13c;
                        FUN_1447a993c(&local_e8,local_13c + -1);
                        if (0 < (longlong)uVar37) {
                          uVar42 = 0;
                          do {
                            if ((longlong)uVar42 < (longlong)local_e8._4_4_) {
                              local_b8 = DAT_14c948618;
                              uVar30 = DAT_14c948620;
                              if (((local_140 != 0) && ((longlong)local_13c != 0)) &&
                                 (local_140 != DAT_14c948000)) {
                                puVar28 = local_138;
                                if (0 < local_11c) {
                                  puVar28 = local_128;
                                }
                                if (1 < local_13c) {
                                  puVar28 = local_128;
                                }
                                if (((uVar42 == 0) || (local_13c != 1)) &&
                                   ((longlong)uVar42 < (longlong)local_13c)) {
                                  local_b8 = *(ulonglong *)(puVar28 + uVar42 * 0xc);
                                  uVar30 = *(undefined4 *)(puVar28 + uVar42 * 0xc + 8);
                                }
                              }
                              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar30);
                              FUN_144928d62(&local_e8,uVar42 & 0xffffffff,&local_b8);
                            }
                            else {
                              if (((local_140 == 0) || ((longlong)local_13c == 0)) ||
                                 (local_140 == DAT_14c948000)) {
LAB_14420b9dd:
                                local_148 = DAT_14c948620;
                                local_150 = DAT_14c948618;
                              }
                              else {
                                puVar28 = local_138;
                                if (0 < local_11c) {
                                  puVar28 = local_128;
                                }
                                if (1 < local_13c) {
                                  puVar28 = local_128;
                                }
                                if (((uVar42 != 0) && (local_13c == 1)) ||
                                   ((longlong)local_13c <= (longlong)uVar42)) goto LAB_14420b9dd;
                                local_148 = *(undefined4 *)(puVar28 + uVar42 * 0xc + 8);
                                local_150 = *(ulonglong *)(puVar28 + uVar42 * 0xc);
                              }
                              FUN_1448075d0(&local_b8,&local_150);
                              FUN_1404e49fa(&local_118,&local_b8);
                              if (uStack_a0 != 0) {
                                FUN_1400020a8();
                              }
                            }
                            uVar42 = uVar42 + 1;
                          } while (uVar42 != uVar37);
                        }
                        if (local_128 != (undefined1 *)0x0) {
                          FUN_1400020a8();
                        }
                        uVar41 = (uint)local_e8;
                        if ((uint)local_e8 != DAT_14c948000 &&
                            (local_e8._4_4_ != 0 && (uint)local_e8 != 0)) {
                          if ((uint)local_118 != DAT_14c948000 &&
                              (local_118._4_4_ != 0 && (uint)local_118 != 0)) {
                            uVar25 = *(uint *)(param_1 + 0x130);
                            puVar21 = (uint *)(ulonglong)uVar25;
                            uVar31 = *(uint *)(param_1 + 0x15c);
                            if (uVar25 != uVar31) {
                              puVar22 = *(undefined4 **)(param_1 + 0x168);
                              if (*(undefined4 **)(param_1 + 0x168) == (undefined4 *)0x0) {
                                puVar22 = local_1d8;
                              }
                              iVar13 = puVar22[*(int *)(param_1 + 0x170) - 1U & (uint)local_e8];
                              if (iVar13 != -1) {
                                do {
                                  lVar32 = *local_1d0 + (longlong)iVar13 * 0x80;
                                  if (*(uint *)(*local_1d0 + (longlong)iVar13 * 0x80) ==
                                      (uint)local_e8) {
                                    if (lVar32 != 0) goto LAB_14420bfae;
                                    break;
                                  }
                                  iVar13 = *(int *)(lVar32 + 0x78);
                                } while (iVar13 != -1);
                              }
                            }
                            local_1b0 = plVar36;
                            if (uVar31 == 0) {
                              *(uint *)(param_1 + 0x130) = uVar25 + 1;
                              if (*(uint *)(param_1 + 0x134) == uVar25) {
                                FUN_140eca382(local_1d0,puVar21);
                              }
                              iVar13 = *(int *)(param_1 + 0x150);
                              if (iVar13 == 0) {
                                iVar24 = -1;
                              }
                              else {
                                iVar24 = iVar13 + 0x1e;
                                if (-1 < iVar13 + -1) {
                                  iVar24 = iVar13 + -1;
                                }
                                iVar24 = iVar24 >> 5;
                              }
                              iVar34 = iVar13 + 1;
                              iVar26 = iVar13 + 0x1f;
                              if (-1 < iVar13) {
                                iVar26 = iVar13;
                              }
                              iVar26 = iVar26 >> 5;
                              local_1e8 = puVar21;
                              if (iVar26 == iVar24) {
                                *(int *)(param_1 + 0x150) = iVar34;
                              }
                              else {
                                if (*(int *)(param_1 + 0x154) <= iVar13) {
                                  local_1e0 = (longlong *)CONCAT44(local_1e0._4_4_,iVar26);
                                  iVar24 = iVar13;
                                  if (iVar13 + 0x20U < 0xa0) {
                                    iVar34 = 0x80;
                                  }
                                  else {
                                    uVar25 = iVar13 + 0x20U >> 5;
                                    if (*(int *)(param_1 + 0x154) + 0x1fU < 0xa0) {
                                      uVar31 = 4;
                                      if (4 < uVar25) {
                                        uVar31 = uVar25;
                                      }
                                    }
                                    else {
                                      uVar31 = uVar25 + (uVar25 * 3 >> 3) + 0x10;
                                    }
                                    uVar37 = (ulonglong)(uVar31 * 4);
                                    if (DAT_14c872d28 != (longlong *)0x0) {
                                      if (*(code **)(*DAT_14c872d28 + 0x60) ==
                                          (code *)&LAB_14489e5c8) {
                                        uVar14 = (uint)(uVar37 + 0xf);
                                        if (uVar31 < 0x1ffd) {
                                          uVar37 = (ulonglong)
                                                   (ushort)(&DAT_14c841d90)
                                                           [0x32 - (byte)(&DAT_14c841e00)
                                                                         [uVar14 >> 4]];
                                        }
                                        else {
                                          uVar42 = uVar37 + 0xf & 0xfffffffffffffff0;
                                          if (uVar42 < 0x7ff1) {
                                            bVar23 = (&DAT_14c841e00)[uVar14 >> 4];
                                            uVar35 = 0x32;
                                            if (0x32 < bVar23) {
                                              uVar35 = (ulonglong)bVar23;
                                            }
                                            uVar39 = 0x32 - (ulonglong)bVar23;
                                            do {
                                              uVar37 = (ulonglong)
                                                       (ushort)(&DAT_14c841d90)[uVar39 & 0xffffffff]
                                              ;
                                              if (((&DAT_14c841d90)[uVar39 & 0xffffffff] & 0xf) == 0
                                                 ) goto LAB_14420c74c;
                                              lVar32 = uVar35 + 1 + uVar39;
                                              uVar39 = uVar39 - 1;
                                            } while (lVar32 != 0x33);
                                          }
                                          uVar37 = (ulonglong)DAT_14c841df8;
                                          if (DAT_14c841df8 < 0x11) {
                                            uVar37 = 0x10;
                                          }
                                          uVar37 = -uVar37 & (uVar42 + uVar37) - 1;
                                        }
                                      }
                                      else {
                                        uVar37 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                           (DAT_14c872d28,uVar37,0);
                                        iVar24 = *(int *)(local_1f0 + 0x150);
                                      }
                                    }
LAB_14420c74c:
                                    iVar26 = (int)(uVar37 >> 2);
                                    iVar34 = iVar26 << 5;
                                    if (iVar26 < (int)uVar25) {
                                      iVar34 = -0x20;
                                    }
                                  }
                                  param_1 = local_1f0;
                                  *(int *)(local_1f0 + 0x154) = iVar34;
                                  FUN_1446efbd8(local_1c0,iVar24);
                                  iVar34 = *(int *)(param_1 + 0x150) + 1;
                                  iVar26 = (int)local_1e0;
                                }
                                iVar24 = iVar34 + 0x1f;
                                if (-1 < iVar34) {
                                  iVar24 = iVar34;
                                }
                                *(int *)(param_1 + 0x150) = iVar34;
                                if (iVar34 % 0x20 != 0) {
                                  lVar32 = *(longlong *)(param_1 + 0x148);
                                  if (*(longlong *)(param_1 + 0x148) == 0) {
                                    lVar32 = local_1c0;
                                  }
                                  bVar23 = -(char)(iVar34 % 0x20);
                                  *(uint *)(lVar32 + (longlong)(iVar24 >> 5) * 4) =
                                       (uint)(*(int *)(lVar32 + (longlong)(iVar24 >> 5) * 4) <<
                                             (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
                                }
                              }
                              lVar16 = (longlong)(int)local_1e8;
                              lVar32 = *(longlong *)(param_1 + 0x148);
                              if (*(longlong *)(param_1 + 0x148) == 0) {
                                lVar32 = local_1c0;
                              }
                              bVar23 = (byte)iVar13 & 0x1f;
                              puVar21 = (uint *)(lVar32 + (longlong)iVar26 * 4);
                              *puVar21 = *puVar21 & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
                            }
                            else {
                              local_1e8 = (uint *)(ulonglong)*(uint *)(param_1 + 0x158);
                              lVar16 = (longlong)(int)*(uint *)(param_1 + 0x158);
                              iVar13 = *(int *)(*(longlong *)(param_1 + 0x128) + 4 + lVar16 * 0x80);
                              *(int *)(param_1 + 0x158) = iVar13;
                              *(uint *)(param_1 + 0x15c) = uVar31 - 1;
                              if (uVar31 - 1 != 0) {
                                *(undefined4 *)
                                 (*(longlong *)(param_1 + 0x128) + (longlong)iVar13 * 0x80) =
                                     0xffffffff;
                              }
                            }
                            iVar13 = (int)local_1e8;
                            uVar25 = 1 << ((byte)local_1e8 & 0x1f);
                            lVar32 = *(longlong *)(param_1 + 0x148);
                            if (*(longlong *)(param_1 + 0x148) == 0) {
                              lVar32 = local_1c0;
                            }
                            iVar24 = iVar13 + 0x1f;
                            if (-1 < iVar13) {
                              iVar24 = iVar13;
                            }
                            local_188 = (longlong)(iVar24 >> 5);
                            local_1b8 = CONCAT44(local_1b8._4_4_,uVar25);
                            puVar21 = (uint *)(lVar32 + local_188 * 4);
                            *puVar21 = *puVar21 | uVar25;
                            lVar32 = *(longlong *)(param_1 + 0x128);
                            piVar1 = (int *)(lVar16 * 0x80 + lVar32);
                            local_98 = 0;
                            auStack_90[2] = 0;
                            auStack_90[3] = 0;
                            auStack_90[4] = 0;
                            local_a8 = (longlong *)0x0;
                            uStack_a0 = 0;
                            local_b8 = 0;
                            uStack_b0 = 0;
                            auStack_90[0] = 0x8000000000;
                            auStack_90[1] = 0xffffffff;
                            FUN_1447a97f4(piVar1,&local_e8);
                            lVar32 = lVar16 * 0x80 + lVar32;
                            *(undefined8 *)(lVar32 + 0x48) = 0;
                            *(undefined4 *)(lVar32 + 0x50) = 0;
                            *(undefined8 *)(lVar32 + 0x28) = 0;
                            *(undefined8 *)(lVar32 + 0x30) = 0;
                            *(undefined8 *)(lVar32 + 0x54) = 0xffffffff00000080;
                            *(undefined4 *)(lVar32 + 0x5c) = 0;
                            if ((undefined8 *)(lVar32 + 0x28) != &local_b8) {
                              local_b8 = 0;
                              uStack_b0 = 0;
                              piVar1[0xe] = (int)local_a8;
                              piVar1[0xf] = local_a8._4_4_;
                              piVar1[0x10] = (int)uStack_a0;
                              piVar1[0x11] = uStack_a0._4_4_;
                              local_98 = 0;
                              auStack_90[0] = 0;
                              auStack_90[1] = 0xffffffff;
                            }
                            piVar1[0x18] = 0;
                            piVar1[0x1a] = 0;
                            piVar1[0x1b] = 0;
                            auStack_90[3] = 0;
                            piVar1[0x1c] = 0;
                            auStack_90[4] = auStack_90[4] & 0xffffffff00000000;
                            FUN_144099ebe(&local_b8);
                            plVar36 = local_1b0;
                            plVar19 = local_1d0;
                            lVar32 = local_1f0;
                            piVar1[0x1e] = -1;
                            uVar25 = *(int *)(local_1f0 + 0x130) - *(int *)(local_1f0 + 0x15c);
                            lVar16 = (longlong)(int)local_1e8;
                            local_1e0 = (longlong *)piVar1;
                            if (1 < uVar25) {
                              puVar22 = *(undefined4 **)(local_1f0 + 0x168);
                              if (*(undefined4 **)(local_1f0 + 0x168) == (undefined4 *)0x0) {
                                puVar22 = local_1d8;
                              }
                              iVar13 = puVar22[*(int *)(local_1f0 + 0x170) - 1U & uVar41];
                              if (iVar13 != -1) {
                                do {
                                  _Dst = (void *)(*local_1d0 + (longlong)iVar13 * 0x80);
                                  if (*(int *)(*local_1d0 + (longlong)iVar13 * 0x80) == *piVar1) {
                                    *(undefined4 *)((longlong)_Dst + 0x70) = 0;
                                    local_190 = lVar16;
                                    if (*(longlong *)((longlong)_Dst + 0x68) != 0) {
                                      FUN_1400020a8();
                                    }
                                    FUN_144099ebe((longlong)_Dst + 0x28);
                                    plVar19 = local_1d0;
                                    if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
                                      FUN_1400020a8();
                                    }
                                    memmove(_Dst,local_1e0,0x78);
                                    lVar16 = *(longlong *)(lVar32 + 0x128);
                                    if (*(int *)(lVar32 + 0x15c) != 0) {
                                      *(int *)(lVar16 + (longlong)*(int *)(lVar32 + 0x158) * 0x80) =
                                           (int)local_1e8;
                                    }
                                    *(undefined4 *)(lVar16 + local_190 * 0x80) = 0xffffffff;
                                    if (*(int *)(lVar32 + 0x15c) < 1) {
                                      uVar30 = 0xffffffff;
                                    }
                                    else {
                                      uVar30 = *(undefined4 *)(lVar32 + 0x158);
                                    }
                                    *(undefined4 *)(lVar16 + local_190 * 0x80 + 4) = uVar30;
                                    *(int *)(lVar32 + 0x158) = (int)local_1e8;
                                    *(int *)(lVar32 + 0x15c) = *(int *)(lVar32 + 0x15c) + 1;
                                    lVar16 = *(longlong *)(lVar32 + 0x148);
                                    if (*(longlong *)(lVar32 + 0x148) == 0) {
                                      lVar16 = local_1c0;
                                    }
                                    puVar21 = (uint *)(lVar16 + local_188 * 4);
                                    *puVar21 = *puVar21 & ~(uint)local_1b8;
                                    lVar16 = local_190;
                                    goto LAB_14420bf9f;
                                  }
                                  iVar13 = *(int *)((longlong)_Dst + 0x78);
                                } while (iVar13 != -1);
                              }
                            }
                            iVar13 = 1;
                            if (3 < uVar25) {
                              uVar37 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
                              lVar32 = 0x3f;
                              if (uVar37 != 0) {
                                for (; uVar37 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                                }
                              }
                              iVar13 = 1 << ((byte)lVar32 & 0x1f);
                            }
                            if (((int)uVar25 < 1) || (iVar13 <= *(int *)(local_1f0 + 0x170))) {
                              uVar41 = *(int *)(local_1f0 + 0x170) - 1U & uVar41;
                              piVar1[0x1f] = uVar41;
                              puVar22 = *(undefined4 **)(local_1f0 + 0x168);
                              if (*(undefined4 **)(local_1f0 + 0x168) == (undefined4 *)0x0) {
                                puVar22 = local_1d8;
                              }
                              piVar1[0x1e] = puVar22[(longlong)*(int *)(local_1f0 + 0x170) - 1U &
                                                     (longlong)(int)uVar41];
                              puVar22 = *(undefined4 **)(local_1f0 + 0x168);
                              if (*(undefined4 **)(local_1f0 + 0x168) == (undefined4 *)0x0) {
                                puVar22 = local_1d8;
                              }
                              puVar22[(longlong)*(int *)(local_1f0 + 0x170) - 1U &
                                      (longlong)(int)uVar41] = (int)local_1e8;
                            }
                            else {
                              *(int *)(local_1f0 + 0x170) = iVar13;
                              FUN_14421aa9c(local_1d0);
                            }
LAB_14420bf9f:
                            lVar32 = *plVar19 + lVar16 * 0x80;
LAB_14420bfae:
                            plVar19 = (longlong *)(lVar32 + 0x28);
                            local_1e0 = *(longlong **)
                                         (*(longlong *)(lVar17 + 0x498) + -0x50 +
                                         (longlong)*(int *)(lVar17 + 0x4a0) * 0x50);
                            lVar16 = *(longlong *)(lVar17 + 0x128);
                            if (lVar16 == 0) {
                              uVar18 = FUN_1406ef318();
                              lVar16 = FUN_14477b664(uVar18);
                              *(longlong *)(lVar17 + 0x128) = lVar16;
                            }
                            plVar29 = *(longlong **)(lVar17 + 0x130);
                            if (plVar29 == (longlong *)0x0) {
                              if (lVar16 == 0) {
                                plVar29 = (longlong *)0x0;
                              }
                              else {
                                plVar29 = (longlong *)0x0;
                                if (*plVar36 != 0) {
                                  plVar29 = *(longlong **)(lVar16 + 0xb8);
                                  if ((plVar29 == (longlong *)0x0) ||
                                     (cVar12 = (**(code **)(*plVar29 + 0x108))(), cVar12 == '\0')) {
                                    plVar29 = (longlong *)0x0;
                                  }
                                  else {
                                    uVar18 = (**(code **)(*plVar29 + 0x110))(plVar29);
                                    plVar29 = (longlong *)FUN_144aff482(uVar18,plVar36);
                                  }
                                  *(longlong **)(lVar17 + 0x130) = plVar29;
                                }
                              }
                            }
                            local_1b0 = plVar29;
                            if (*(int *)(lVar32 + 0x5c) == 0) {
                              uVar41 = *(uint *)(lVar32 + 0x30);
                              uVar37 = (ulonglong)uVar41;
                              *(uint *)(lVar32 + 0x30) = uVar41 + 1;
                              if (*(uint *)(lVar32 + 0x34) == uVar41) {
                                FUN_14021b4e8(plVar19,uVar41);
                              }
                              iVar13 = *(int *)(lVar32 + 0x50);
                              if (iVar13 == 0) {
                                iVar24 = -1;
                              }
                              else {
                                iVar24 = iVar13 + 0x1e;
                                if (-1 < iVar13 + -1) {
                                  iVar24 = iVar13 + -1;
                                }
                                iVar24 = iVar24 >> 5;
                              }
                              lVar17 = lVar32 + 0x38;
                              iVar34 = iVar13 + 1;
                              iVar26 = iVar13 + 0x1f;
                              if (-1 < iVar13) {
                                iVar26 = iVar13;
                              }
                              local_1b8 = uVar37;
                              if (iVar26 >> 5 == iVar24) {
                                *(int *)(lVar32 + 0x50) = iVar34;
                              }
                              else {
                                if (*(int *)(lVar32 + 0x54) <= iVar13) {
                                  iVar24 = iVar13;
                                  if (iVar13 + 0x20U < 0xa0) {
                                    iVar34 = 0x80;
                                  }
                                  else {
                                    uVar41 = iVar13 + 0x20U >> 5;
                                    if (*(int *)(lVar32 + 0x54) + 0x1fU < 0xa0) {
                                      uVar25 = 4;
                                      if (4 < uVar41) {
                                        uVar25 = uVar41;
                                      }
                                    }
                                    else {
                                      uVar25 = uVar41 + (uVar41 * 3 >> 3) + 0x10;
                                    }
                                    uVar37 = (ulonglong)(uVar25 * 4);
                                    if (DAT_14c872d28 != (longlong *)0x0) {
                                      if (*(code **)(*DAT_14c872d28 + 0x60) ==
                                          (code *)&LAB_14489e5c8) {
                                        uVar31 = (uint)(uVar37 + 0xf);
                                        if (uVar25 < 0x1ffd) {
                                          uVar37 = (ulonglong)
                                                   (ushort)(&DAT_14c841d90)
                                                           [0x32 - (byte)(&DAT_14c841e00)
                                                                         [uVar31 >> 4]];
                                        }
                                        else {
                                          uVar42 = uVar37 + 0xf & 0xfffffffffffffff0;
                                          if (uVar42 < 0x7ff1) {
                                            bVar23 = (&DAT_14c841e00)[uVar31 >> 4];
                                            uVar35 = 0x32;
                                            if (0x32 < bVar23) {
                                              uVar35 = (ulonglong)bVar23;
                                            }
                                            uVar39 = 0x32 - (ulonglong)bVar23;
                                            do {
                                              uVar37 = (ulonglong)
                                                       (ushort)(&DAT_14c841d90)[uVar39 & 0xffffffff]
                                              ;
                                              if (((&DAT_14c841d90)[uVar39 & 0xffffffff] & 0xf) == 0
                                                 ) goto LAB_14420c69d;
                                              lVar16 = uVar35 + 1 + uVar39;
                                              uVar39 = uVar39 - 1;
                                            } while (lVar16 != 0x33);
                                          }
                                          uVar37 = (ulonglong)DAT_14c841df8;
                                          if (DAT_14c841df8 < 0x11) {
                                            uVar37 = 0x10;
                                          }
                                          uVar37 = -uVar37 & (uVar42 + uVar37) - 1;
                                        }
                                      }
                                      else {
                                        uVar37 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                           (DAT_14c872d28,uVar37,0);
                                        iVar24 = *(int *)(lVar32 + 0x50);
                                      }
                                    }
LAB_14420c69d:
                                    iVar15 = (int)(uVar37 >> 2);
                                    iVar34 = iVar15 << 5;
                                    if (iVar15 < (int)uVar41) {
                                      iVar34 = -0x20;
                                    }
                                  }
                                  *(int *)(lVar32 + 0x54) = iVar34;
                                  FUN_1446efbd8(lVar17,iVar24);
                                  iVar34 = *(int *)(lVar32 + 0x50) + 1;
                                }
                                iVar24 = iVar34 + 0x1f;
                                if (-1 < iVar34) {
                                  iVar24 = iVar34;
                                }
                                *(int *)(lVar32 + 0x50) = iVar34;
                                if (iVar34 % 0x20 != 0) {
                                  lVar16 = *(longlong *)(lVar32 + 0x48);
                                  if (*(longlong *)(lVar32 + 0x48) == 0) {
                                    lVar16 = lVar17;
                                  }
                                  bVar23 = -(char)(iVar34 % 0x20);
                                  *(uint *)(lVar16 + (longlong)(iVar24 >> 5) * 4) =
                                       (uint)(*(int *)(lVar16 + (longlong)(iVar24 >> 5) * 4) <<
                                             (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
                                }
                              }
                              lVar16 = (longlong)(int)local_1b8;
                              if (*(longlong *)(lVar32 + 0x48) != 0) {
                                lVar17 = *(longlong *)(lVar32 + 0x48);
                              }
                              bVar23 = (byte)iVar13 & 0x1f;
                              puVar21 = (uint *)(lVar17 + (longlong)(iVar26 >> 5) * 4);
                              *puVar21 = *puVar21 & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
                            }
                            else {
                              local_1b8 = (ulonglong)*(uint *)(lVar32 + 0x58);
                              lVar16 = (longlong)(int)*(uint *)(lVar32 + 0x58);
                              iVar13 = *(int *)(*plVar19 + 4 + lVar16 * 0x48);
                              *(int *)(lVar32 + 0x58) = iVar13;
                              iVar24 = *(int *)(lVar32 + 0x5c) + -1;
                              *(int *)(lVar32 + 0x5c) = iVar24;
                              if (iVar24 != 0) {
                                *(undefined4 *)(*plVar19 + (longlong)iVar13 * 0x48) = 0xffffffff;
                              }
                            }
                            local_1e8 = (uint *)(lVar32 + 0x38);
                            iVar13 = (int)local_1b8;
                            uVar41 = 1 << ((byte)local_1b8 & 0x1f);
                            puVar21 = *(uint **)(lVar32 + 0x48);
                            if (*(uint **)(lVar32 + 0x48) == (uint *)0x0) {
                              puVar21 = local_1e8;
                            }
                            iVar24 = iVar13 + 0x1f;
                            if (-1 < iVar13) {
                              iVar24 = iVar13;
                            }
                            puVar21[iVar24 >> 5] = puVar21[iVar24 >> 5] | uVar41;
                            puVar21 = (uint *)(*plVar19 + lVar16 * 0x48);
                            FUN_1447a97f4(puVar21,&local_118);
                            *(longlong **)(puVar21 + 10) = local_1e0;
                            *(longlong **)(puVar21 + 0xc) = local_1b0;
                            *(undefined1 *)(puVar21 + 0xe) = 0;
                            uVar30 = (undefined4)local_b8;
                            *(undefined4 *)((longlong)puVar21 + 0x39) = uVar30;
                            puVar21[0xf] = local_b8._3_4_;
                            puVar21[0x10] = 0xffffffff;
                            uVar25 = *puVar21;
                            uVar31 = *(int *)(lVar32 + 0x30) - *(int *)(lVar32 + 0x5c);
                            if (1 < uVar31) {
                              lVar17 = lVar32 + 0x60;
                              if (*(longlong *)(lVar32 + 0x68) != 0) {
                                lVar17 = *(longlong *)(lVar32 + 0x68);
                              }
                              uVar14 = *(uint *)(lVar17 + (ulonglong)
                                                          (*(int *)(lVar32 + 0x70) - 1U & uVar25) *
                                                          4);
                              if (uVar14 != 0xffffffff) {
                                do {
                                  puVar27 = (uint *)(*plVar19 + (longlong)(int)uVar14 * 0x48);
                                  if (*puVar27 == uVar25) {
                                    if (*(longlong *)(puVar27 + 6) != 0) {
                                      FUN_1400020a8();
                                    }
                                    uVar25 = *puVar21;
                                    uVar31 = puVar21[1];
                                    uVar14 = puVar21[2];
                                    uVar7 = puVar21[3];
                                    uVar18 = *(undefined8 *)(puVar21 + 4);
                                    uVar8 = *(undefined8 *)(puVar21 + 6);
                                    uVar9 = *(undefined8 *)(puVar21 + 8);
                                    uVar10 = *(undefined8 *)(puVar21 + 10);
                                    uVar11 = *(undefined8 *)(puVar21 + 0xe);
                                    *(undefined8 *)(puVar27 + 0xc) = *(undefined8 *)(puVar21 + 0xc);
                                    *(undefined8 *)(puVar27 + 0xe) = uVar11;
                                    *(undefined8 *)(puVar27 + 8) = uVar9;
                                    *(undefined8 *)(puVar27 + 10) = uVar10;
                                    *(undefined8 *)(puVar27 + 4) = uVar18;
                                    *(undefined8 *)(puVar27 + 6) = uVar8;
                                    *puVar27 = uVar25;
                                    puVar27[1] = uVar31;
                                    puVar27[2] = uVar14;
                                    puVar27[3] = uVar7;
                                    lVar17 = *plVar19;
                                    iVar13 = (int)local_1b8;
                                    if (*(int *)(lVar32 + 0x5c) != 0) {
                                      *(int *)(lVar17 + (longlong)*(int *)(lVar32 + 0x58) * 0x48) =
                                           iVar13;
                                    }
                                    *(undefined4 *)(lVar17 + (longlong)iVar13 * 0x48) = 0xffffffff;
                                    if (*(int *)(lVar32 + 0x5c) < 1) {
                                      uVar30 = 0xffffffff;
                                    }
                                    else {
                                      uVar30 = *(undefined4 *)(lVar32 + 0x58);
                                    }
                                    *(undefined4 *)(lVar17 + (longlong)iVar13 * 0x48 + 4) = uVar30;
                                    *(int *)(lVar32 + 0x58) = iVar13;
                                    *(int *)(lVar32 + 0x5c) = *(int *)(lVar32 + 0x5c) + 1;
                                    puVar21 = local_1e8;
                                    if (*(uint **)(lVar32 + 0x48) != (uint *)0x0) {
                                      puVar21 = *(uint **)(lVar32 + 0x48);
                                    }
                                    puVar21[iVar24 >> 5] = puVar21[iVar24 >> 5] & ~uVar41;
                                    param_1 = local_1f0;
                                    goto LAB_14420c585;
                                  }
                                  uVar14 = puVar27[0x10];
                                } while (uVar14 != 0xffffffff);
                              }
                            }
                            uVar41 = 1;
                            if (3 < uVar31) {
                              uVar37 = (ulonglong)(uVar31 & 0xfffffffe) + 0xf;
                              lVar17 = 0x3f;
                              if (uVar37 != 0) {
                                for (; uVar37 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                                }
                              }
                              uVar41 = 1 << ((byte)lVar17 & 0x1f);
                            }
                            if (((int)uVar31 < 1) || ((int)uVar41 <= *(int *)(lVar32 + 0x70))) {
                              uVar25 = *(int *)(lVar32 + 0x70) - 1U & uVar25;
                              puVar21[0x11] = uVar25;
                              lVar17 = *(longlong *)(lVar32 + 0x68);
                              if (*(longlong *)(lVar32 + 0x68) == 0) {
                                lVar17 = lVar32 + 0x60;
                              }
                              puVar21[0x10] =
                                   *(uint *)(lVar17 + ((longlong)*(int *)(lVar32 + 0x70) - 1U &
                                                      (longlong)(int)uVar25) * 4);
                              lVar17 = *(longlong *)(lVar32 + 0x68);
                              if (*(longlong *)(lVar32 + 0x68) == 0) {
                                lVar17 = lVar32 + 0x60;
                              }
                              *(int *)(lVar17 + ((longlong)*(int *)(lVar32 + 0x70) - 1U &
                                                (longlong)(int)uVar25) * 4) = (int)local_1b8;
                              param_1 = local_1f0;
                            }
                            else {
                              *(uint *)(lVar32 + 0x70) = uVar41;
                              plVar29 = (longlong *)(lVar32 + 0x68);
                              if (*(longlong *)(lVar32 + 0x68) != 0) {
                                FUN_1446efa72(plVar29,0,0);
                                uVar41 = *(uint *)(lVar32 + 0x70);
                              }
                              param_1 = local_1f0;
                              if (uVar41 != 0) {
                                local_1e0 = (longlong *)(lVar32 + 0x60);
                                if (uVar41 == 1) {
                                  if (*plVar29 != 0) {
                                    FUN_1446efa72(plVar29,0,0);
                                  }
LAB_14420c275:
                                  uVar25 = 0;
                                  do {
                                    plVar29 = *(longlong **)(lVar32 + 0x68);
                                    if (*(longlong **)(lVar32 + 0x68) == (longlong *)0x0) {
                                      plVar29 = local_1e0;
                                    }
                                    *(undefined4 *)
                                     ((longlong)plVar29 +
                                     (ulonglong)(*(int *)(lVar32 + 0x70) + 0x7fffffffU & uVar25) * 4
                                     ) = 0xffffffff;
                                    uVar25 = uVar25 + 1;
                                  } while (uVar41 != uVar25);
                                }
                                else {
                                  FUN_1446efa72(plVar29,0,uVar41);
                                  if (0 < (int)uVar41) goto LAB_14420c275;
                                }
                                iVar13 = *(int *)(lVar32 + 0x50);
                                param_1 = local_1f0;
                                if (iVar13 == 0) {
                                  uVar37 = 0;
                                  uVar42 = 1;
                                  iVar34 = 0;
                                  iVar24 = 0;
                                }
                                else {
                                  puVar21 = *(uint **)(lVar32 + 0x48);
                                  if (*(uint **)(lVar32 + 0x48) == (uint *)0x0) {
                                    puVar21 = local_1e8;
                                  }
                                  uVar41 = *puVar21;
                                  if (uVar41 == 0) {
                                    iVar24 = iVar13 + 0x1e;
                                    if (-1 < iVar13 + -1) {
                                      iVar24 = iVar13 + -1;
                                    }
                                    uVar37 = 0;
                                    uVar25 = iVar24 >> 5;
                                    if (iVar24 >> 5 < 1) {
                                      uVar25 = 0;
                                    }
                                    iVar34 = 0;
                                    do {
                                      if (uVar25 == uVar37) goto LAB_14420c585;
                                      iVar34 = iVar34 + 0x20;
                                      uVar41 = puVar21[uVar37 + 1];
                                      uVar37 = uVar37 + 1;
                                    } while (uVar41 == 0);
                                  }
                                  else {
                                    uVar37 = 0;
                                    iVar34 = 0;
                                  }
                                  uVar42 = (ulonglong)(-uVar41 & uVar41);
                                  uVar35 = uVar42 * 2 + 1;
                                  lVar17 = 0x3f;
                                  if (uVar35 != 0) {
                                    for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                                    }
                                  }
                                  iVar24 = (iVar34 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                                  if (iVar13 <= iVar24) {
                                    iVar24 = iVar13;
                                  }
                                }
                                if (iVar24 < iVar13) {
                                  uVar41 = 0xffffffff;
                                  do {
                                    lVar17 = *plVar19;
                                    lVar16 = (longlong)iVar24;
                                    uVar35 = (longlong)*(int *)(lVar32 + 0x70) - 1U &
                                             (longlong)*(int *)(lVar17 + lVar16 * 0x48);
                                    iVar13 = (int)uVar35;
                                    *(int *)(lVar17 + 0x44 + lVar16 * 0x48) = iVar13;
                                    plVar29 = *(longlong **)(lVar32 + 0x68);
                                    if (*(longlong **)(lVar32 + 0x68) == (longlong *)0x0) {
                                      plVar29 = local_1e0;
                                    }
                                    *(undefined4 *)(lVar17 + 0x40 + lVar16 * 0x48) =
                                         *(undefined4 *)
                                          ((longlong)plVar29 +
                                          ((longlong)*(int *)(lVar32 + 0x70) - 1U & uVar35) * 4);
                                    plVar29 = *(longlong **)(lVar32 + 0x68);
                                    if (*(longlong **)(lVar32 + 0x68) == (longlong *)0x0) {
                                      plVar29 = local_1e0;
                                    }
                                    *(int *)((longlong)plVar29 +
                                            ((longlong)iVar13 &
                                            (longlong)*(int *)(lVar32 + 0x70) - 1U) * 4) = iVar24;
                                    uVar41 = ~(uint)uVar42 & uVar41;
                                    puVar21 = *(uint **)(lVar32 + 0x48);
                                    if (*(uint **)(lVar32 + 0x48) == (uint *)0x0) {
                                      puVar21 = local_1e8;
                                    }
                                    iVar13 = *(int *)(lVar32 + 0x50);
                                    iVar24 = (int)uVar37;
                                    lVar17 = (longlong)iVar24;
                                    uVar25 = puVar21[lVar17] & uVar41;
                                    if (uVar25 == 0) {
                                      iVar26 = iVar13 + 0x1e;
                                      if (-1 < iVar13 + -1) {
                                        iVar26 = iVar13 + -1;
                                      }
                                      iVar26 = iVar26 >> 5;
                                      iVar15 = iVar26;
                                      if (iVar26 < iVar24) {
                                        iVar15 = iVar24;
                                      }
                                      if (iVar26 <= iVar24) break;
                                      lVar16 = 0;
                                      while( true ) {
                                        iVar34 = iVar34 + 0x20;
                                        uVar25 = puVar21[lVar17 + lVar16 + 1];
                                        if (uVar25 != 0) break;
                                        lVar16 = lVar16 + 1;
                                        if (iVar15 - lVar17 == lVar16) goto LAB_14420c585;
                                      }
                                      uVar37 = (ulonglong)(iVar24 + (int)lVar16 + 1);
                                      uVar41 = 0xffffffff;
                                    }
                                    uVar42 = (ulonglong)(-uVar25 & uVar25);
                                    uVar35 = uVar42 * 2 + 1;
                                    lVar17 = 0x3f;
                                    if (uVar35 != 0) {
                                      for (; uVar35 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                                      }
                                    }
                                    iVar24 = (iVar34 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                                  } while (iVar24 < iVar13);
                                }
                              }
                            }
                          }
                        }
LAB_14420c585:
                        plVar29 = local_1c8;
                        if (local_100 != 0) {
                          FUN_1400020a8();
                        }
                        plVar19 = local_1a0;
                        if (local_d0 != 0) {
                          FUN_1400020a8();
                        }
                      }
                    }
                  }
                  plVar33 = plVar33 + 3;
                } while (plVar33 != plVar29);
              }
            }
            plVar40 = plVar40 + 3;
          } while (plVar40 != plVar19);
        }
        if (*(int *)(local_198 + 0x178) == 0) {
          FUN_1458e19a0(local_198);
          local_180 = (undefined8 *)0x0;
          local_178 = 0;
          FUN_1446efa72(&local_180,0,3,0x10);
          puVar3 = local_180;
          local_178 = 3;
          *local_180 = &PTR_LAB_14b4e1be0;
          LOCK();
          UNLOCK();
          lVar32 = DAT_14c758608 + 1;
          lVar17 = DAT_14c758608 + 1;
          if (lVar32 == 0) {
            LOCK();
            UNLOCK();
            lVar32 = DAT_14c758608 + 2;
            lVar17 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar17;
          local_180[2] = lVar32;
          *local_180 = &PTR_FUN_14b999e30;
          local_180[3] = 0;
          iVar13 = 0;
          if (param_1 != 0) {
            uVar41 = *(uint *)(param_1 + 0xc);
            *(uint *)(local_180 + 3) = uVar41;
            if ((int)uVar41 < DAT_14c9647dc) {
              lVar17 = (ulonglong)((uVar41 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar41 >> 0x10) * 8);
            }
            else {
              lVar17 = 0;
            }
            iVar13 = *(int *)(lVar17 + 0x10);
            if (*(int *)(lVar17 + 0x10) == 0) {
              LOCK();
              iVar13 = DAT_14c964868 + 1;
              UNLOCK();
              iVar24 = DAT_14c964868 + 1;
              bVar43 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar13;
              if (bVar43) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar24);
              }
              LOCK();
              iVar13 = *(int *)(lVar17 + 0x10);
              bVar43 = iVar13 == 0;
              if (bVar43) {
                *(int *)(lVar17 + 0x10) = iVar24;
                iVar13 = 0;
              }
              UNLOCK();
              param_1 = local_1f0;
              if (bVar43) {
                iVar13 = iVar24;
              }
            }
          }
          param_4 = local_1a8;
          *(int *)((longlong)puVar3 + 0x1c) = iVar13;
          puVar3[4] = FUN_14420ccb2;
          FUN_1489af5c0(local_198,&local_b8,&local_180);
          *(ulonglong *)(param_1 + 0x330) = local_b8;
        }
        else {
          FUN_14420ccb2(param_1,local_198 + 0x170);
          param_4 = local_1a8;
        }
      }
    }
  }
  if (local_168 != (longlong *)0x0 && local_160 != 0) {
    (**(code **)(*local_168 + 0x60))();
  }
  if (local_160 == 0) {
LAB_14420ca55:
    if (local_168 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_168 != (longlong *)0x0) {
    (**(code **)*local_168)(local_168,0);
    FUN_1446efa72(&local_168,0,0,0x10);
    local_160 = 0;
    goto LAB_14420ca55;
  }
  if ((int)param_4[1] != 0) {
    puVar3 = (undefined8 *)*param_4;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14420ca99;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_14420ca99:
  if ((local_60 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (lVar32 = uVar39 + 1 + uVar38, uVar38 = uVar38 - 1, lVar32 != 0x33) {
LAB_14420b454:
    uVar42 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar38 & 0xffffffff];
    if (((&DAT_14c841d90)[uVar38 & 0xffffffff] & 0xf) == 0) goto LAB_14420b38c;
  }
LAB_14420b3f9:
  uVar42 = (ulonglong)DAT_14c841df8;
  if (DAT_14c841df8 < 0x11) {
    uVar42 = 0x10;
  }
  uVar42 = -uVar42 & (uVar35 + uVar42) - 1;
LAB_14420b38c:
  iVar34 = (int)(uVar42 >> 2);
  iVar13 = iVar34 << 5;
  if (iVar34 < (int)uVar41) {
    iVar13 = -0x20;
  }
LAB_14420b3ae:
  puVar21 = local_1e8;
  lVar32 = local_1f0;
  *(int *)(local_1f0 + 100) = iVar13;
  FUN_1446efbd8(local_1e8,uVar37);
  iVar34 = *(int *)(lVar32 + 0x60) + 1;
LAB_14420b24e:
  iVar13 = iVar34 + 0x1f;
  if (-1 < iVar34) {
    iVar13 = iVar34;
  }
  *(int *)(lVar32 + 0x60) = iVar34;
  if (iVar34 % 0x20 != 0) {
    puVar27 = *(uint **)(lVar32 + 0x58);
    if (*(uint **)(lVar32 + 0x58) == (uint *)0x0) {
      puVar27 = puVar21;
    }
    bVar23 = -(char)(iVar34 % 0x20);
    puVar27[iVar13 >> 5] = (puVar27[iVar13 >> 5] << (bVar23 & 0x1f)) >> (bVar23 & 0x1f);
    puVar21 = local_1e8;
  }
LAB_14420b05c:
  lVar16 = (longlong)iVar24;
  puVar27 = *(uint **)(lVar32 + 0x58);
  if (*(uint **)(lVar32 + 0x58) == (uint *)0x0) {
    puVar27 = puVar21;
  }
  bVar23 = (byte)local_1d8 & 0x1f;
  puVar27[(int)uVar25 >> 5] =
       puVar27[(int)uVar25 >> 5] & (-2 << bVar23 | 0xfffffffeU >> 0x20 - bVar23);
LAB_14420b07d:
  uVar41 = 1 << ((byte)iVar24 & 0x1f);
  puVar27 = *(uint **)(lVar32 + 0x58);
  if (*(uint **)(lVar32 + 0x58) == (uint *)0x0) {
    puVar27 = puVar21;
  }
  iVar13 = iVar24 + 0x1f;
  if (-1 < iVar24) {
    iVar13 = iVar24;
  }
  local_1b0 = (longlong *)(longlong)(iVar13 >> 5);
  local_1c0 = CONCAT44(local_1c0._4_4_,uVar41);
  puVar27[(longlong)local_1b0] = puVar27[(longlong)local_1b0] | uVar41;
  lVar20 = *(longlong *)(lVar32 + 0x38);
  lVar16 = lVar16 * 0x38;
  local_1d8 = (undefined4 *)(lVar20 + lVar16);
  FUN_1447a97f4(local_1d8,&local_b8);
  param_1 = local_1f0;
  *(longlong *)(lVar20 + 0x28 + lVar16) = lVar17;
  *(undefined4 *)(lVar20 + 0x30 + lVar16) = 0xffffffff;
  uVar41 = *(uint *)(lVar20 + lVar16);
  uVar25 = *(int *)(lVar32 + 0x40) - *(int *)(lVar32 + 0x6c);
  if (1 < uVar25) {
    plVar29 = *(longlong **)(local_1f0 + 0x78);
    if (*(longlong **)(local_1f0 + 0x78) == (longlong *)0x0) {
      plVar29 = local_1d0;
    }
    iVar13 = *(int *)((longlong)plVar29 + (ulonglong)(*(int *)(local_1f0 + 0x80) - 1U & uVar41) * 4)
    ;
    if (iVar13 != -1) {
      do {
        puVar22 = (undefined4 *)(*local_1e0 + (longlong)iVar13 * 0x38);
        if (*(uint *)(*local_1e0 + (longlong)iVar13 * 0x38) == uVar41) {
          if (*(longlong *)(puVar22 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar30 = *local_1d8;
          uVar4 = local_1d8[1];
          uVar5 = local_1d8[2];
          uVar6 = local_1d8[3];
          uVar18 = *(undefined8 *)(local_1d8 + 4);
          uVar8 = *(undefined8 *)(local_1d8 + 6);
          uVar9 = *(undefined8 *)(local_1d8 + 10);
          *(undefined8 *)(puVar22 + 8) = *(undefined8 *)(local_1d8 + 8);
          *(undefined8 *)(puVar22 + 10) = uVar9;
          *(undefined8 *)(puVar22 + 4) = uVar18;
          *(undefined8 *)(puVar22 + 6) = uVar8;
          *puVar22 = uVar30;
          puVar22[1] = uVar4;
          puVar22[2] = uVar5;
          puVar22[3] = uVar6;
          lVar17 = *(longlong *)(local_1f0 + 0x38);
          if (*(int *)(local_1f0 + 0x6c) != 0) {
            *(int *)(lVar17 + (longlong)*(int *)(local_1f0 + 0x68) * 0x38) = iVar24;
          }
          *(undefined4 *)(lVar17 + (longlong)iVar24 * 0x38) = 0xffffffff;
          if (*(int *)(local_1f0 + 0x6c) < 1) {
            uVar30 = 0xffffffff;
          }
          else {
            uVar30 = *(undefined4 *)(local_1f0 + 0x68);
          }
          *(undefined4 *)(lVar17 + (longlong)iVar24 * 0x38 + 4) = uVar30;
          *(int *)(local_1f0 + 0x68) = iVar24;
          *(int *)(local_1f0 + 0x6c) = *(int *)(local_1f0 + 0x6c) + 1;
          puVar21 = *(uint **)(local_1f0 + 0x58);
          if (*(uint **)(local_1f0 + 0x58) == (uint *)0x0) {
            puVar21 = local_1e8;
          }
          puVar21[(longlong)local_1b0] = puVar21[(longlong)local_1b0] & ~(uint)local_1c0;
          param_1 = local_1f0;
          goto LAB_14420b2c4;
        }
        iVar13 = puVar22[0xc];
      } while (iVar13 != -1);
    }
  }
  iVar13 = (int)&DAT_00000001;
  if (3 < uVar25) {
    uVar37 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
    lVar17 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar13 = 1 << ((byte)lVar17 & 0x1f);
  }
  if (((int)uVar25 < 1) || (iVar13 <= *(int *)(local_1f0 + 0x80))) {
    uVar41 = *(int *)(local_1f0 + 0x80) - 1U & uVar41;
    local_1d8[0xd] = uVar41;
    plVar29 = *(longlong **)(local_1f0 + 0x78);
    if (*(longlong **)(local_1f0 + 0x78) == (longlong *)0x0) {
      plVar29 = local_1d0;
    }
    local_1d8[0xc] =
         *(undefined4 *)
          ((longlong)plVar29 +
          ((longlong)*(int *)(local_1f0 + 0x80) - 1U & (longlong)(int)uVar41) * 4);
    plVar29 = *(longlong **)(local_1f0 + 0x78);
    if (*(longlong **)(local_1f0 + 0x78) == (longlong *)0x0) {
      plVar29 = local_1d0;
    }
    *(int *)((longlong)plVar29 +
            ((longlong)*(int *)(local_1f0 + 0x80) - 1U & (longlong)(int)uVar41) * 4) = iVar24;
  }
  else {
    *(int *)(local_1f0 + 0x80) = iVar13;
    FUN_14421a662(local_1e0);
  }
LAB_14420b2c4:
  if (uStack_a0 != 0) {
    FUN_1400020a8();
  }
LAB_14420b2d1:
  plVar40 = plVar40 + 3;
  if (plVar40 == local_1c8) goto LAB_14420b4e4;
  goto LAB_14420ae1f;
}



// FUNCTION 14420ccb2 FUN_14420ccb2 body=1086 status=ok
// SIG undefined FUN_14420ccb2(void)

void FUN_14420ccb2(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  byte *pbVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong local_80;
  undefined8 *local_78;
  int local_70;
  undefined4 uStack_6c;
  longlong local_68 [3];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(int *)(param_1 + 0x2c8) = (int)param_2[1];
  lVar7 = *(longlong *)(param_1 + 800);
  lVar3 = *(longlong *)(param_1 + 0x328);
  if (lVar7 == 0 || lVar3 == 0) {
    if ((*(int *)(param_1 + 0x340) == 0) ||
       (plVar10 = *(longlong **)(param_1 + 0x338), plVar10 == (longlong *)0x0)) goto LAB_14420cec4;
    lVar7 = *plVar10;
    uVar12 = 0;
  }
  else {
    if ((*(longlong *)(param_1 + 0x330) != 0) &&
       (cVar5 = FUN_14480f766(lVar3 + 0x180), cVar5 != '\0')) {
      *(undefined8 *)(param_1 + 0x330) = 0;
    }
    local_68[1] = 0;
    local_68[2] = 0;
    local_50 = 0xffff;
    local_68[0] = lVar7;
    FUN_1416b4a92(lVar3,&local_78,local_68,&DAT_14cbd1378);
    if ((undefined8 *)(param_1 + 0x28) != &DAT_14c9a1308) {
      lVar2 = CONCAT44(uStack_6c,local_70);
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      plVar10 = *(longlong **)(param_1 + 0x30);
      *(undefined8 **)(param_1 + 0x28) = local_78;
      *(longlong *)(param_1 + 0x30) = lVar2;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
    plVar10 = (longlong *)CONCAT44(uStack_6c,local_70);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar11 = plVar10 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    pbVar4 = *(byte **)(param_1 + 0x28);
    puVar9 = &DAT_14c9a1288;
    if ((pbVar4 != (byte *)0x0) && ((*pbVar4 & 2) != 0)) {
      puVar9 = (undefined8 *)(*(longlong *)(pbVar4 + 8) + 0x18);
    }
    puVar9 = (undefined8 *)FUN_140f903f2(puVar9,DAT_14cbd1380,&DAT_14cbd1380);
    pbVar4 = (byte *)*puVar9;
    if (pbVar4 != (byte *)0x0) {
      if ((*pbVar4 & 2) == 0) {
        plVar10 = &DAT_14c9a1288;
      }
      else {
        plVar10 = (longlong *)(*(longlong *)(pbVar4 + 8) + 0x18);
      }
      if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
        plVar11 = plVar10 + 8;
        if ((longlong *)plVar10[9] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar10[9];
        }
        iVar15 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar10[10] - 1U & DAT_14cbd2878) * 4
                         );
        if (iVar15 != -1) {
          do {
            lVar2 = *plVar10 + (longlong)iVar15 * 0x40;
            if (*(uint *)(*plVar10 + (longlong)iVar15 * 0x40) == DAT_14cbd2878) {
              if ((((lVar2 != 0) &&
                   (puVar9 = (undefined8 *)(lVar2 + 0x28), puVar9 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar9 != (byte *)0x0)) && ((*(byte *)*puVar9 & 0x40) == 0))
              goto LAB_14420ce8d;
              break;
            }
            iVar15 = *(int *)(lVar2 + 0x38);
          } while (iVar15 != -1);
        }
      }
    }
    puVar9 = &DAT_14c9a1308;
LAB_14420ce8d:
    uVar6 = FUN_140e1edd4(puVar9,0);
    uVar13 = 0;
    if (uVar6 < 10) {
      uVar13 = uVar6;
    }
    *(uint *)(param_1 + 0x2e0) = uVar13;
    if (uVar13 != 9) {
      lVar2 = param_2[1];
      if ((longlong)(int)lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
      }
      local_80 = *param_2;
      lVar17 = 0;
      do {
        local_78 = (undefined8 *)0x0;
        local_70 = 0;
        FUN_1446efa72(&local_78,0,3,0x10);
        puVar9 = local_78;
        local_70 = 3;
        *local_78 = &PTR_LAB_14b434d90;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        local_78[2] = lVar8;
        *local_78 = &PTR_FUN_14b999ea0;
        local_78[3] = 0;
        if (param_1 == 0) {
          iVar15 = 0;
        }
        else {
          uVar13 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_78 + 3) = uVar13;
          if ((int)uVar13 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar15 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar15 = DAT_14c964868 + 1;
            UNLOCK();
            iVar16 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar15;
            if (bVar18) {
              local_84 = iVar16;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar16);
              iVar16 = local_84;
            }
            LOCK();
            iVar15 = *(int *)(lVar14 + 0x10);
            bVar18 = iVar15 == 0;
            if (bVar18) {
              *(int *)(lVar14 + 0x10) = iVar16;
              iVar15 = 0;
            }
            UNLOCK();
            if (bVar18) {
              iVar15 = iVar16;
            }
          }
        }
        *(int *)((longlong)puVar9 + 0x1c) = iVar15;
        puVar9[4] = FUN_14420d98e;
        FUN_145840754(lVar7,lVar3,*(longlong *)(local_80 + lVar17) + 8,&local_78);
        if (local_70 == 0) {
LAB_14420d014:
          if (local_78 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_78 != (undefined8 *)0x0) {
          (**(code **)*local_78)();
          FUN_1446efa72(&local_78,0,0,0x10);
          local_70 = 0;
          goto LAB_14420d014;
        }
        lVar17 = lVar17 + 0x10;
        if ((longlong)(int)lVar2 * 0x10 == lVar17) {
          if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      } while( true );
    }
    if ((*(int *)(param_1 + 0x340) == 0) ||
       (plVar10 = *(longlong **)(param_1 + 0x338), plVar10 == (longlong *)0x0)) goto LAB_14420cec4;
    lVar7 = *plVar10;
    uVar12 = 1;
  }
  (**(code **)(lVar7 + 0x60))(plVar10,uVar12);
LAB_14420cec4:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
}



// FUNCTION 14420d122 FUN_14420d122 body=1084 status=ok
// SIG undefined FUN_14420d122(void)

void FUN_14420d122(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  
  if ((undefined8 *)(param_1 + 0x28) != &DAT_14c9a1308) {
    plVar6 = *(longlong **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
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
  }
  lVar2 = param_1 + 0x38;
  if (*(int *)(param_1 + 0x80) < 2) {
    FUN_14421a48e(lVar2);
    FUN_14409a350(lVar2,0);
  }
  else {
    FUN_14409a350(lVar2,0);
    *(undefined4 *)(param_1 + 0x80) = 1;
    FUN_14421a662(lVar2);
  }
  FUN_14421afc6(param_1 + 0x88);
  FUN_14421afc6(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (*(int *)(param_1 + 0x2f4) != 0) {
    FUN_144219426(param_1 + 0x2e8,0);
  }
  lVar2 = param_1 + 0x128;
  if (*(int *)(param_1 + 0x170) < 2) {
    FUN_14421a8c8(lVar2);
    FUN_144099c94(lVar2,0);
  }
  else {
    FUN_144099c94(lVar2,0);
    *(undefined4 *)(param_1 + 0x170) = 1;
    FUN_14421aa9c(lVar2);
  }
  FUN_14409a989(*(undefined8 *)(param_1 + 0x2f8),*(undefined4 *)(param_1 + 0x300));
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_1442196e0(param_1 + 0x2f8,0);
  }
  FUN_1456ebc94(param_1 + 0x178,0);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(int *)(param_1 + 0x1d4) != 0) {
    FUN_144893a1c(param_1 + 0x1c8,0);
  }
  lVar2 = param_1 + 0x1d8;
  iVar4 = *(int *)(param_1 + 0x220);
  if (iVar4 < 2) {
    lVar8 = param_1 + 0x210;
    if (*(longlong *)(param_1 + 0x218) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x218);
    }
    iVar14 = iVar4 + 3;
    if (-1 < iVar4) {
      iVar14 = iVar4;
    }
    if (*(int *)(param_1 + 0x1e0) - *(int *)(param_1 + 0x20c) < iVar14 >> 2) {
      iVar4 = *(int *)(param_1 + 0x200);
      if (iVar4 == 0) {
        uVar16 = 1;
        iVar14 = 0;
        uVar15 = 0;
        iVar13 = 0;
      }
      else {
        puVar17 = *(uint **)(param_1 + 0x1f8);
        if (*(uint **)(param_1 + 0x1f8) == (uint *)0x0) {
          puVar17 = (uint *)(param_1 + 0x1e8);
        }
        uVar9 = *puVar17;
        if (uVar9 == 0) {
          iVar14 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar14 = iVar4 + -1;
          }
          uVar15 = 0;
          uVar18 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar18 = uVar15;
          }
          iVar14 = 0;
          do {
            if (uVar18 == uVar15) goto LAB_14420d3a6;
            iVar14 = iVar14 + 0x20;
            uVar9 = puVar17[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar9 == 0);
        }
        else {
          iVar14 = 0;
          uVar15 = 0;
        }
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar18 = uVar16 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar13 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar13) {
          iVar13 = iVar4;
        }
      }
      if (iVar13 != iVar4) {
        uVar9 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar8 + (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x1d8) + 0x24 + (longlong)iVar13 * 0x28) * 4) =
               0xffffffff;
          uVar9 = ~(uint)uVar16 & uVar9;
          puVar17 = *(uint **)(param_1 + 0x1f8);
          if (*(uint **)(param_1 + 0x1f8) == (uint *)0x0) {
            puVar17 = (uint *)(param_1 + 0x1e8);
          }
          iVar5 = *(int *)(param_1 + 0x200);
          iVar13 = (int)uVar15;
          lVar19 = (longlong)iVar13;
          uVar10 = puVar17[lVar19] & uVar9;
          if (uVar10 == 0) {
            iVar11 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar11 = iVar5 + -1;
            }
            iVar11 = iVar11 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar13) {
              iVar12 = iVar13;
            }
            if (iVar13 < iVar11) {
              lVar20 = 0;
              do {
                uVar10 = puVar17[lVar19 + lVar20 + 1];
                if (uVar10 != 0) {
                  uVar15 = (ulonglong)(iVar13 + (int)lVar20 + 1);
                  uVar9 = 0xffffffff;
                  goto LAB_14420d4ea;
                }
                iVar14 = iVar14 + 0x20;
                lVar20 = lVar20 + 1;
              } while (iVar12 - lVar19 != lVar20);
              uVar9 = 0xffffffff;
              lVar19 = (longlong)iVar12;
            }
            uVar15 = lVar19 + 1U & 0xffffffff;
            iVar13 = iVar5;
          }
          else {
LAB_14420d4ea:
            uVar16 = (ulonglong)(-uVar10 & uVar10);
            uVar18 = uVar16 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar18 != 0) {
              for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar13 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (iVar5 <= iVar13) {
              iVar13 = iVar5;
            }
          }
        } while (iVar13 != iVar4);
      }
    }
    else if (iVar4 == 1) {
      lVar19 = 0;
      do {
        *(undefined4 *)(lVar8 + lVar19 * 4) = 0xffffffff;
        lVar19 = lVar19 + 1;
      } while (lVar19 < *(int *)(param_1 + 0x220));
    }
LAB_14420d3a6:
    FUN_144099aa4(lVar2,0);
  }
  else {
    FUN_144099aa4(lVar2,0);
    *(undefined4 *)(param_1 + 0x220) = 1;
    FUN_14421918a(lVar2);
  }
  FUN_1456ebc94(param_1 + 0x228,0);
  *(undefined4 *)(param_1 + 0x310) = 0;
  if (*(int *)(param_1 + 0x314) != 0) {
    FUN_1446dda88(param_1 + 0x308,0);
  }
  *(undefined4 *)(param_1 + 0x318) = 0xffff;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  *(undefined8 *)(param_1 + 0x330) = 0;
  if (*(int *)(param_1 + 0x340) != 0) {
    puVar7 = *(undefined8 **)(param_1 + 0x338);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,0);
      FUN_1446efa72((longlong *)(param_1 + 0x338),0,0,0x10);
      *(undefined4 *)(param_1 + 0x340) = 0;
    }
  }
  return;
}



// FUNCTION 14420d55e FUN_14420d55e body=178 status=ok
// SIG undefined FUN_14420d55e(void)

uint FUN_14420d55e(undefined8 *param_1)

{
  longlong lVar1;
  byte *pbVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & DAT_14cbd2878) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == DAT_14cbd2878) {
            if ((((lVar1 != 0) &&
                 (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
            goto LAB_14420d5ef;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_14420d5ef:
  uVar3 = FUN_140e1edd4(puVar5,0);
  if (9 < uVar3) {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 14420d98e FUN_14420d98e body=15458 status=ok
// SIG undefined FUN_14420d98e(void)

void FUN_14420d98e(longlong param_1,longlong param_2)

{
  longlong **pplVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  byte *pbVar13;
  ulonglong *puVar14;
  longlong **pplVar15;
  byte bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  void *_Dst;
  uint uVar22;
  int iVar23;
  longlong *plVar24;
  int *piVar25;
  undefined4 *puVar26;
  ulonglong uVar27;
  void *pvVar28;
  int *piVar29;
  byte bVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong *puVar33;
  longlong lVar34;
  uint uVar35;
  longlong lVar36;
  uint *puVar37;
  uint *puVar38;
  longlong lVar39;
  uint *puVar40;
  undefined8 *puVar41;
  longlong *plVar42;
  ulonglong uVar43;
  undefined8 *puVar44;
  ulonglong uVar45;
  undefined1 auStack_1d8 [32];
  undefined *local_1b8;
  longlong local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  int *local_198;
  undefined8 local_190;
  uint *local_188;
  longlong *local_180;
  undefined8 *local_178;
  longlong *local_170;
  ulonglong *local_168;
  ulonglong local_160;
  uint *local_158;
  int *local_150;
  uint local_144;
  uint *local_140;
  ulonglong local_138;
  undefined4 local_12c;
  undefined4 *local_128;
  undefined4 *local_120;
  undefined8 local_118;
  longlong *plStack_110;
  longlong local_108;
  longlong *plStack_100;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined4 *puStack_e0;
  longlong *plStack_d8;
  longlong local_d0;
  longlong **pplStack_c8;
  uint local_c0 [4];
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  byte *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  pbVar13 = *(byte **)(param_2 + 0x38);
  local_1b0 = param_1;
  if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 0x6b) == 3)) {
    lVar34 = *(longlong *)(pbVar13 + 8);
    uStack_80 = &plStack_90;
    local_98 = DAT_14cb895d0;
    local_e8 = (undefined4 *)0x0;
    puStack_e0 = (undefined4 *)0x0;
    plStack_d8 = (longlong *)((ulonglong)plStack_d8 & 0xffffffff00000000);
    local_d0 = 0;
    pplStack_c8 = (longlong **)0x0;
    local_88 = &local_98;
    FUN_14581cf4c(&local_e8,&local_88,0);
    if (*(int *)(lVar34 + 0x28) != *(int *)(lVar34 + 0x54)) {
      lVar11 = lVar34 + 0x58;
      if (*(longlong *)(lVar34 + 0x60) != 0) {
        lVar11 = *(longlong *)(lVar34 + 0x60);
      }
      iVar4 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar34 + 0x68) - 1U & (uint)local_e8) * 4);
      if (iVar4 != -1) {
        do {
          lVar11 = *(longlong *)(lVar34 + 0x18) + (longlong)iVar4 * 0x40;
          if (*(uint *)(*(longlong *)(lVar34 + 0x18) + (longlong)iVar4 * 0x40) == (uint)local_e8) {
            if (local_d0 != 0) {
              FUN_1400020a8();
            }
            if ((lVar11 == 0) || (cVar3 = FUN_143ca043c(), param_1 = local_1b0, cVar3 != '\0'))
            goto LAB_14420ee13;
            goto LAB_14420d9da;
          }
          iVar4 = *(int *)(lVar11 + 0x38);
        } while (iVar4 != -1);
      }
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
LAB_14420ee13:
    puVar41 = (undefined8 *)(param_2 + 0x38);
    uVar35 = *(uint *)(local_1b0 + 0x2e0);
    if ((int)uVar35 < 1) {
      pbVar13 = (byte *)*puVar41;
      plVar12 = &DAT_14c9a1288;
      if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
        plVar12 = (longlong *)(*(longlong *)(pbVar13 + 8) + 0x18);
      }
      if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
        plVar42 = plVar12 + 8;
        if ((longlong *)plVar12[9] != (longlong *)0x0) {
          plVar42 = (longlong *)plVar12[9];
        }
        iVar4 = *(int *)((longlong)plVar42 + (ulonglong)((int)plVar12[10] - 1U & DAT_14cb786b0) * 4)
        ;
        if (iVar4 != -1) {
          do {
            lVar34 = *plVar12 + (longlong)iVar4 * 0x40;
            if (*(uint *)(*plVar12 + (longlong)iVar4 * 0x40) == DAT_14cb786b0) {
              if (lVar34 != -0x28 && lVar34 != 0) {
                local_88 = (byte **)&DAT_14cb78920;
                uStack_80 = (longlong **)&DAT_14cb789c0;
                uVar43 = 0;
                pplStack_c8 = (longlong **)0x0;
                local_c0[0] = 0;
                local_e8 = (undefined4 *)0x0;
                puStack_e0 = (undefined4 *)0x0;
                local_c0[1] = 0x80;
                local_c0[2] = 0xffffffff;
                local_c0[3] = 0;
                local_a8 = (undefined1 *)0x0;
                local_a0 = 0;
                local_98 = (byte *)((ulonglong)local_98 & 0xffffffff00000000);
                local_178 = puVar41;
                FUN_143d1bb00();
                uVar35 = local_c0[0];
                uVar45 = 1;
                iVar4 = 0;
                uVar18 = 0;
                if (local_c0[0] == 0) goto LAB_14420f7e0;
                pplVar15 = pplStack_c8;
                if (pplStack_c8 == (longlong **)0x0) {
                  pplVar15 = &plStack_d8;
                }
                uVar18 = *(uint *)pplVar15;
                if (uVar18 != 0) {
                  uVar43 = 0;
                  goto LAB_14420f7bc;
                }
                iVar4 = local_c0[0] + 0x1e;
                if (-1 < (int)(local_c0[0] - 1)) {
                  iVar4 = local_c0[0] - 1;
                }
                uVar43 = 0;
                uVar45 = (ulonglong)(uint)(iVar4 >> 5);
                if (iVar4 >> 5 < 1) {
                  uVar45 = uVar43;
                }
                iVar4 = 0;
                goto LAB_14420f7a8;
              }
              break;
            }
            iVar4 = *(int *)(lVar34 + 0x38);
          } while (iVar4 != -1);
        }
      }
      goto LAB_14420effc;
    }
    param_1 = local_1b0;
    if (uVar35 < 6) goto LAB_14420f087;
    goto LAB_144210317;
  }
  goto LAB_14420d9da;
  while( true ) {
    iVar4 = iVar4 + 0x20;
    uVar18 = *(uint *)((longlong)pplVar15 + (uVar43 + 1) * 4);
    uVar43 = uVar43 + 1;
    if (uVar18 != 0) break;
LAB_14420f7a8:
    if (uVar45 == uVar43) goto LAB_14420f7e4;
  }
LAB_14420f7bc:
  uVar45 = (ulonglong)(-uVar18 & uVar18);
  uVar27 = uVar45 * 2 + 1;
  lVar34 = 0x3f;
  if (uVar27 != 0) {
    for (; uVar27 >> lVar34 == 0; lVar34 = lVar34 + -1) {
    }
  }
  uVar18 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
  if ((int)local_c0[0] <= (int)uVar18) {
    uVar18 = local_c0[0];
  }
LAB_14420f7e0:
  if (uVar18 != local_c0[0]) {
    lVar34 = local_1b0 + 0x178;
    uVar22 = 0xffffffff;
    do {
      puVar26 = local_e8 + (longlong)(int)uVar18 * 0x10;
      iVar5 = local_e8[(longlong)(int)uVar18 * 0x10 + 0xc];
      uVar7 = FUN_14027a0c2(puVar26);
      piVar29 = (int *)FUN_140ebd788(lVar34,uVar7,puVar26);
      iVar6 = *piVar29;
      if (*piVar29 < iVar5) {
        iVar6 = iVar5;
      }
      *piVar29 = iVar6;
      uVar22 = ~(uint)uVar45 & uVar22;
      pplVar15 = pplStack_c8;
      if (pplStack_c8 == (longlong **)0x0) {
        pplVar15 = &plStack_d8;
      }
      iVar5 = (int)uVar43;
      lVar11 = (longlong)iVar5;
      uVar18 = *(uint *)((longlong)pplVar15 + lVar11 * 4) & uVar22;
      if (uVar18 == 0) {
        iVar6 = local_c0[0] + 0x1e;
        if (-1 < (int)(local_c0[0] - 1)) {
          iVar6 = local_c0[0] - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar4 = iVar4 + 0x20;
        iVar23 = iVar6;
        if (iVar6 < iVar5) {
          iVar23 = iVar5;
        }
        if (iVar5 < iVar6) {
          lVar39 = 0;
          do {
            uVar18 = *(uint *)((longlong)pplVar15 + (lVar11 + lVar39 + 1) * 4);
            if (uVar18 != 0) {
              uVar43 = (ulonglong)(iVar5 + (int)lVar39 + 1);
              uVar22 = 0xffffffff;
              goto LAB_14420f8fe;
            }
            iVar4 = iVar4 + 0x20;
            lVar39 = lVar39 + 1;
          } while (iVar23 - lVar11 != lVar39);
          uVar22 = 0xffffffff;
          iVar5 = iVar23;
        }
        uVar43 = (ulonglong)(iVar5 + 1);
        uVar18 = local_c0[0];
      }
      else {
LAB_14420f8fe:
        uVar45 = (ulonglong)(-uVar18 & uVar18);
        uVar27 = uVar45 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar18 = (iVar4 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if ((int)local_c0[0] <= (int)uVar18) {
          uVar18 = local_c0[0];
        }
      }
    } while (uVar18 != uVar35);
  }
LAB_14420f7e4:
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_145c6ef66(&local_e8);
  pbVar13 = (byte *)*local_178;
  puVar41 = local_178;
LAB_14420effc:
  plVar12 = &DAT_14c9a1288;
  if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
    plVar12 = (longlong *)(*(longlong *)(pbVar13 + 8) + 0x18);
  }
  if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
    plVar42 = plVar12 + 8;
    if ((longlong *)plVar12[9] != (longlong *)0x0) {
      plVar42 = (longlong *)plVar12[9];
    }
    iVar4 = *(int *)((longlong)plVar42 + (ulonglong)((int)plVar12[10] - 1U & DAT_14cb786d8) * 4);
    if (iVar4 != -1) {
      do {
        lVar34 = *plVar12 + (longlong)iVar4 * 0x40;
        if (*(uint *)(*plVar12 + (longlong)iVar4 * 0x40) == DAT_14cb786d8) {
          puVar44 = (undefined8 *)(lVar34 + 0x28);
          if (((puVar44 != (undefined8 *)0x0 && lVar34 != 0) && ((byte *)*puVar44 != (byte *)0x0))
             && ((*(byte *)*puVar44 & 0x6b) == 3)) {
            pplStack_c8 = (longlong **)0x0;
            local_c0[0] = 0;
            local_e8 = (undefined4 *)0x0;
            puStack_e0 = (undefined4 *)0x0;
            local_c0[1] = 0x80;
            local_c0[2] = 0xffffffff;
            local_c0[3] = 0;
            local_a8 = (undefined1 *)0x0;
            local_a0 = 0;
            pbVar13 = (byte *)*puVar44;
            plVar12 = &DAT_14c9a1288;
            if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
              plVar12 = (longlong *)(*(longlong *)(pbVar13 + 8) + 0x18);
            }
            bVar2 = true;
            local_178 = puVar41;
            if ((int)plVar12[2] == *(int *)((longlong)plVar12 + 0x3c)) goto LAB_14420fe4d;
            plVar42 = plVar12 + 8;
            if ((longlong *)plVar12[9] != (longlong *)0x0) {
              plVar42 = (longlong *)plVar12[9];
            }
            iVar4 = *(int *)((longlong)plVar42 +
                            (ulonglong)((int)plVar12[10] - 1U & DAT_14cb7be60) * 4);
            if (iVar4 == -1) goto LAB_14420fe4d;
            goto LAB_14420f9ee;
          }
          break;
        }
        iVar4 = *(int *)(lVar34 + 0x38);
      } while (iVar4 != -1);
    }
  }
  goto LAB_14420f087;
code_r0x00014420feab:
  iVar4 = *(int *)(lVar34 + 0x38);
  if (iVar4 == -1) goto LAB_14420fed4;
  goto LAB_14420fe9a;
  while (iVar6 = *(int *)(lVar34 + 0x78), iVar6 != -1) {
LAB_14420f6b2:
    lVar34 = *plVar42 + (longlong)iVar6 * 0x80;
    if (*(uint *)(*plVar42 + (longlong)iVar6 * 0x80) == DAT_14cbd2850) {
      if (lVar34 != 0) goto LAB_1442101a4;
      break;
    }
  }
LAB_14420fa12:
  local_1a8 = plVar42;
  local_178 = puVar41;
  local_170 = plVar12;
  if (iVar5 == 0) {
    *(int *)(local_1b0 + 0x280) = iVar4 + 1;
    if (*(int *)(local_1b0 + 0x284) == iVar4) {
      FUN_140eca382(plVar42,iVar4);
    }
    iVar5 = *(int *)(local_1b0 + 0x2a0);
    if (iVar5 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    lVar11 = local_1b0 + 0x288;
    iVar23 = iVar5 + 1;
    iVar17 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar17 = iVar5;
    }
    if (iVar17 >> 5 == iVar6) {
      *(int *)(local_1b0 + 0x2a0) = iVar23;
    }
    else {
      if (*(int *)(local_1b0 + 0x2a4) <= iVar5) {
        iVar6 = iVar5;
        if (iVar5 + 0x20U < 0xa0) {
          iVar23 = 0x80;
        }
        else {
          uVar18 = iVar5 + 0x20U >> 5;
          if (*(int *)(local_1b0 + 0x2a4) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar18) {
              uVar22 = uVar18;
            }
          }
          else {
            uVar22 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar45 = (ulonglong)(uVar22 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar19 = (uint)(uVar45 + 0xf);
              if (uVar22 < 0x1ffd) {
                uVar45 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
              }
              else {
                uVar43 = uVar45 + 0xf & 0xfffffffffffffff0;
                if (uVar43 < 0x7ff1) {
                  bVar16 = (&DAT_14c841e00)[uVar19 >> 4];
                  uVar27 = 0x32;
                  if (0x32 < bVar16) {
                    uVar27 = (ulonglong)bVar16;
                  }
                  uVar32 = 0x32 - (ulonglong)bVar16;
                  do {
                    uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0) goto LAB_144211323;
                    lVar34 = uVar27 + 1 + uVar32;
                    uVar32 = uVar32 - 1;
                  } while (lVar34 != 0x33);
                }
                uVar45 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar45 = (ulonglong)DAT_14c841df8;
                }
                uVar45 = -uVar45 & (uVar43 + uVar45) - 1;
              }
            }
            else {
              uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
              iVar6 = *(int *)(local_1b0 + 0x2a0);
            }
          }
LAB_144211323:
          iVar8 = (int)(uVar45 >> 2);
          iVar23 = -0x20;
          if ((int)uVar18 <= iVar8) {
            iVar23 = iVar8 << 5;
          }
        }
        lVar34 = local_1b0;
        *(int *)(local_1b0 + 0x2a4) = iVar23;
        FUN_1446efbd8(lVar11,iVar6);
        iVar23 = *(int *)(lVar34 + 0x2a0) + 1;
      }
      iVar6 = iVar23 + 0x1f;
      if (-1 < iVar23) {
        iVar6 = iVar23;
      }
      *(int *)(local_1b0 + 0x2a0) = iVar23;
      if (iVar23 % 0x20 != 0) {
        lVar34 = *(longlong *)(local_1b0 + 0x298);
        if (*(longlong *)(local_1b0 + 0x298) == 0) {
          lVar34 = lVar11;
        }
        bVar16 = -(char)(iVar23 % 0x20);
        *(uint *)(lVar34 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)(lVar34 + (longlong)(iVar6 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar34 = (longlong)iVar4;
    if (*(longlong *)(local_1b0 + 0x298) != 0) {
      lVar11 = *(longlong *)(local_1b0 + 0x298);
    }
    bVar16 = (byte)iVar5 & 0x1f;
    puVar38 = (uint *)(lVar11 + (longlong)(iVar17 >> 5) * 4);
    *puVar38 = *puVar38 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar4 = *(int *)(local_1b0 + 0x2a8);
    lVar34 = (longlong)iVar4;
    iVar6 = *(int *)(*(longlong *)(local_1b0 + 0x278) + 4 + lVar34 * 0x80);
    *(int *)(local_1b0 + 0x2a8) = iVar6;
    *(int *)(local_1b0 + 0x2ac) = iVar5 + -1;
    if (iVar5 + -1 != 0) {
      *(undefined4 *)(*(longlong *)(local_1b0 + 0x278) + (longlong)iVar6 * 0x80) = 0xffffffff;
    }
  }
  local_188 = (uint *)(local_1b0 + 0x288);
  uVar18 = 1 << ((byte)iVar4 & 0x1f);
  puVar38 = *(uint **)(local_1b0 + 0x298);
  if (*(uint **)(local_1b0 + 0x298) == (uint *)0x0) {
    puVar38 = local_188;
  }
  iVar5 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  local_190 = (uint *)(longlong)(iVar5 >> 5);
  local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,uVar18);
  puVar38[(longlong)local_190] = puVar38[(longlong)local_190] | uVar18;
  lVar11 = *(longlong *)(local_1b0 + 0x278);
  piVar29 = (int *)(lVar11 + lVar34 * 0x80);
  pplStack_c8 = (longlong **)0x0;
  local_c0[0] = 0;
  local_e8 = (undefined4 *)0x0;
  puStack_e0 = (undefined4 *)0x0;
  local_c0[1] = 0x80;
  local_c0[2] = 0xffffffff;
  local_c0[3] = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  FUN_1447a97f4(piVar29,&DAT_14cbd2850);
  FUN_145a0d988(lVar11 + lVar34 * 0x80 + 0x28,&local_e8);
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1402d9776(&local_e8);
  piVar29[0x1e] = -1;
  uVar18 = *(int *)(local_1b0 + 0x280) - *(int *)(local_1b0 + 0x2ac);
  local_198 = (int *)(longlong)iVar4;
  if (1 < uVar18) {
    lVar34 = local_1b0 + 0x2b0;
    if (*(longlong *)(local_1b0 + 0x2b8) != 0) {
      lVar34 = *(longlong *)(local_1b0 + 0x2b8);
    }
    iVar5 = *(int *)(lVar34 + (ulonglong)(*(int *)(local_1b0 + 0x2c0) - 1U & uVar35) * 4);
    if (iVar5 != -1) {
      do {
        pvVar28 = (void *)(*local_1a8 + (longlong)iVar5 * 0x80);
        if (*(int *)(*local_1a8 + (longlong)iVar5 * 0x80) == *piVar29) {
          *(undefined4 *)((longlong)pvVar28 + 0x70) = 0;
          if (*(longlong *)((longlong)pvVar28 + 0x68) != 0) {
            FUN_1400020a8();
          }
          FUN_1402d9776((longlong)pvVar28 + 0x28);
          if (*(longlong *)((longlong)pvVar28 + 0x18) != 0) {
            FUN_1400020a8();
          }
          memmove(pvVar28,piVar29,0x78);
          lVar34 = *(longlong *)(local_1b0 + 0x278);
          if (*(int *)(local_1b0 + 0x2ac) != 0) {
            *(int *)(lVar34 + (longlong)*(int *)(local_1b0 + 0x2a8) * 0x80) = iVar4;
          }
          *(undefined4 *)(lVar34 + (longlong)local_198 * 0x80) = 0xffffffff;
          if (*(int *)(local_1b0 + 0x2ac) < 1) {
            uVar7 = 0xffffffff;
          }
          else {
            uVar7 = *(undefined4 *)(local_1b0 + 0x2a8);
          }
          *(undefined4 *)(lVar34 + (longlong)local_198 * 0x80 + 4) = uVar7;
          *(int *)(local_1b0 + 0x2a8) = iVar4;
          *(int *)(local_1b0 + 0x2ac) = *(int *)(local_1b0 + 0x2ac) + 1;
          puVar38 = local_188;
          if (*(uint **)(local_1b0 + 0x298) != (uint *)0x0) {
            puVar38 = *(uint **)(local_1b0 + 0x298);
          }
          puVar38[(longlong)local_190] = puVar38[(longlong)local_190] & ~(uint)local_1a0;
          goto LAB_144210181;
        }
        iVar5 = *(int *)((longlong)pvVar28 + 0x78);
      } while (iVar5 != -1);
    }
  }
  uVar22 = 1;
  if (3 < uVar18) {
    uVar45 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar34 = 0x3f;
    if (uVar45 != 0) {
      for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar22 = 1 << ((byte)lVar34 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar22 <= *(int *)(local_1b0 + 0x2c0))) {
    uVar35 = *(int *)(local_1b0 + 0x2c0) - 1U & uVar35;
    piVar29[0x1f] = uVar35;
    lVar34 = *(longlong *)(local_1b0 + 0x2b8);
    if (*(longlong *)(local_1b0 + 0x2b8) == 0) {
      lVar34 = local_1b0 + 0x2b0;
    }
    piVar29[0x1e] =
         *(int *)(lVar34 + ((longlong)*(int *)(local_1b0 + 0x2c0) - 1U & (longlong)(int)uVar35) * 4)
    ;
    lVar34 = *(longlong *)(local_1b0 + 0x2b8);
    if (*(longlong *)(local_1b0 + 0x2b8) == 0) {
      lVar34 = local_1b0 + 0x2b0;
    }
    *(int *)(lVar34 + ((longlong)*(int *)(local_1b0 + 0x2c0) - 1U & (longlong)(int)uVar35) * 4) =
         iVar4;
  }
  else {
    *(uint *)(local_1b0 + 0x2c0) = uVar22;
    plVar12 = (longlong *)(local_1b0 + 0x2b8);
    if (*(longlong *)(local_1b0 + 0x2b8) != 0) {
      FUN_1446efa72(plVar12,0,0,4);
      uVar22 = *(uint *)(local_1b0 + 0x2c0);
    }
    if (uVar22 != 0) {
      lVar34 = local_1b0 + 0x2b0;
      if (uVar22 == 1) {
        if (*plVar12 != 0) {
          FUN_1446efa72(plVar12,0,0,4);
        }
LAB_14420fcf8:
        uVar35 = 0;
        do {
          lVar11 = *(longlong *)(local_1b0 + 0x2b8);
          if (*(longlong *)(local_1b0 + 0x2b8) == 0) {
            lVar11 = lVar34;
          }
          *(undefined4 *)
           (lVar11 + (ulonglong)(*(int *)(local_1b0 + 0x2c0) + 0x7fffffffU & uVar35) * 4) =
               0xffffffff;
          uVar35 = uVar35 + 1;
        } while (uVar22 != uVar35);
      }
      else {
        FUN_1446efa72(plVar12,0,uVar22,4);
        if (0 < (int)uVar22) goto LAB_14420fcf8;
      }
      iVar4 = *(int *)(local_1b0 + 0x2a0);
      if (iVar4 == 0) {
        uVar45 = 0;
        uVar43 = 1;
        iVar6 = 0;
        iVar5 = 0;
      }
      else {
        puVar38 = *(uint **)(local_1b0 + 0x298);
        if (*(uint **)(local_1b0 + 0x298) == (uint *)0x0) {
          puVar38 = local_188;
        }
        uVar35 = *puVar38;
        if (uVar35 == 0) {
          iVar5 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar5 = iVar4 + -1;
          }
          uVar45 = 0;
          uVar18 = iVar5 >> 5;
          if (iVar5 >> 5 < 1) {
            uVar18 = 0;
          }
          iVar6 = 0;
          do {
            if (uVar18 == uVar45) goto LAB_144210181;
            iVar6 = iVar6 + 0x20;
            uVar35 = puVar38[uVar45 + 1];
            uVar45 = uVar45 + 1;
          } while (uVar35 == 0);
        }
        else {
          uVar45 = 0;
          iVar6 = 0;
        }
        uVar43 = (ulonglong)(-uVar35 & uVar35);
        uVar27 = uVar43 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar5) {
          iVar5 = iVar4;
        }
      }
      if (iVar5 < iVar4) {
        uVar35 = 0xffffffff;
        do {
          lVar11 = *(longlong *)(local_1b0 + 0x278);
          lVar36 = (longlong)iVar5 * 0x80;
          uVar27 = (longlong)*(int *)(local_1b0 + 0x2c0) - 1U & (longlong)*(int *)(lVar11 + lVar36);
          iVar4 = (int)uVar27;
          *(int *)(lVar11 + 0x7c + lVar36) = iVar4;
          lVar39 = *(longlong *)(local_1b0 + 0x2b8);
          if (*(longlong *)(local_1b0 + 0x2b8) == 0) {
            lVar39 = lVar34;
          }
          *(undefined4 *)(lVar11 + 0x78 + lVar36) =
               *(undefined4 *)(lVar39 + ((longlong)*(int *)(local_1b0 + 0x2c0) - 1U & uVar27) * 4);
          lVar11 = *(longlong *)(local_1b0 + 0x2b8);
          if (*(longlong *)(local_1b0 + 0x2b8) == 0) {
            lVar11 = lVar34;
          }
          *(int *)(lVar11 + ((longlong)iVar4 & (longlong)*(int *)(local_1b0 + 0x2c0) - 1U) * 4) =
               iVar5;
          uVar35 = ~(uint)uVar43 & uVar35;
          puVar38 = *(uint **)(local_1b0 + 0x298);
          if (*(uint **)(local_1b0 + 0x298) == (uint *)0x0) {
            puVar38 = local_188;
          }
          iVar4 = *(int *)(local_1b0 + 0x2a0);
          iVar5 = (int)uVar45;
          lVar11 = (longlong)iVar5;
          uVar18 = puVar38[lVar11] & uVar35;
          if (uVar18 == 0) {
            iVar23 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar23 = iVar4 + -1;
            }
            iVar23 = iVar23 >> 5;
            iVar17 = iVar23;
            if (iVar23 < iVar5) {
              iVar17 = iVar5;
            }
            if (iVar23 <= iVar5) break;
            lVar39 = 0;
            while( true ) {
              iVar6 = iVar6 + 0x20;
              uVar18 = puVar38[lVar11 + lVar39 + 1];
              if (uVar18 != 0) break;
              lVar39 = lVar39 + 1;
              if (iVar17 - lVar11 == lVar39) goto LAB_144210181;
            }
            uVar45 = (ulonglong)(iVar5 + (int)lVar39 + 1);
            uVar35 = 0xffffffff;
          }
          uVar43 = (ulonglong)(-uVar18 & uVar18);
          uVar27 = uVar43 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar5 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        } while (iVar5 < iVar4);
      }
    }
  }
LAB_144210181:
  lVar34 = *local_1a8 + (longlong)local_198 * 0x80;
  plVar12 = local_170;
LAB_1442101a4:
  puVar44 = (undefined8 *)FUN_144212672(puVar20);
  pbVar13 = (byte *)*plVar12;
  puVar41 = &DAT_14c9a1270;
  if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
    puVar41 = *(undefined8 **)(pbVar13 + 8);
  }
  param_1 = local_1b0;
  if ((longlong)*(int *)(puVar41 + 2) != 0) {
    plVar12 = (longlong *)*puVar41;
    plVar42 = plVar12 + (longlong)*(int *)(puVar41 + 2) * 2;
    local_1a8 = plVar42;
    do {
      puVar38 = &DAT_14c9a12e0;
      if (*plVar12 != 0) {
        puVar38 = (uint *)FUN_140625092(*plVar12,&DAT_14c9a12e0);
        param_1 = local_1b0;
      }
      if (*(int *)(lVar34 + 0x30) != *(int *)(lVar34 + 0x5c)) {
        lVar11 = *(longlong *)(lVar34 + 0x68);
        if (*(longlong *)(lVar34 + 0x68) == 0) {
          lVar11 = lVar34 + 0x60;
        }
        iVar4 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar34 + 0x70) - 1U & *puVar38) * 4);
        if (iVar4 != -1) {
          lVar11 = *(longlong *)(lVar34 + 0x28);
          do {
            if (*(uint *)(lVar11 + (longlong)iVar4 * 0x30) == *puVar38) goto LAB_144210303;
            iVar4 = *(int *)((longlong)iVar4 * 0x30 + lVar11 + 0x28);
          } while (iVar4 != -1);
        }
      }
      pbVar13 = (byte *)*puVar44;
      if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 3) == 2)) {
        plVar42 = *(longlong **)(pbVar13 + 8);
        iVar4 = (int)plVar42[2];
        *(uint *)(plVar42 + 2) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar42 + 0x14) < iVar4 + 1U) {
          FUN_14000961e(plVar42,iVar4);
        }
        lVar11 = *plVar42;
        lVar39 = (longlong)iVar4 * 0x10;
        *(undefined8 *)(lVar11 + lVar39) = 0;
        ((undefined8 *)(lVar11 + lVar39))[1] = 0;
        FUN_14009b010(lVar11 + lVar39,1,0);
        plVar42 = local_1a8;
        if (*(longlong *)(lVar11 + lVar39) != 0) {
          FUN_1402afb64(*(longlong *)(lVar11 + lVar39),puVar38);
        }
      }
      FUN_140128f82((longlong *)(lVar34 + 0x28),&local_e8,puVar38,0);
      param_1 = local_1b0;
LAB_144210303:
      plVar12 = plVar12 + 2;
    } while (plVar12 != plVar42);
  }
  goto LAB_144210310;
  while( true ) {
    local_190 = *(uint **)(local_1b0 + 0x2d8);
    local_e8 = (undefined4 *)((ulonglong)local_e8 & 0xffffffffffffff00);
    local_c0[0] = 0;
    FUN_1456bb102(&local_e8,local_1b0);
    lVar11 = FUN_140c520a2(puVar33 + 2);
    if (lVar11 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_144208dd6(&local_e8,lVar11,local_190);
    }
    *(int *)(local_1b0 + 0x2d0) = *(int *)(local_1b0 + 0x2d0) + iVar6;
    FUN_1448173f8(local_c0);
    if (((char)local_e8 == '\x03') && (plStack_d8 != (longlong *)0x0)) {
      LOCK();
      piVar29 = (int *)((longlong)plStack_d8 + 0xc);
      *piVar29 = *piVar29 + -1;
      UNLOCK();
      if (*piVar29 == 0) {
        (**(code **)(*plStack_d8 + 0x10))();
      }
    }
    puVar33 = puVar33 + 10;
    if (puVar33 == local_168) break;
LAB_14420dfee:
    if ((ulonglong)(longlong)iVar5 < *puVar33) goto LAB_14420e1c1;
  }
LAB_14420e0a9:
  plVar12 = local_180;
  lVar11 = local_1b0;
  local_190 = *(uint **)(local_1b0 + 0x2d8);
  local_e8 = (undefined4 *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_c0[0] = 0;
  FUN_1456bb102(&local_e8,local_1b0);
  iVar5 = FUN_144208baa(&local_e8,plVar12,local_190);
  *(int *)(lVar11 + 0x2d0) = *(int *)(lVar11 + 0x2d0) + iVar5;
  FUN_1448173f8(local_c0);
  if (((char)local_e8 == '\x03') && (plStack_d8 != (longlong *)0x0)) {
    LOCK();
    piVar29 = (int *)((longlong)plStack_d8 + 0xc);
    *piVar29 = *piVar29 + -1;
    UNLOCK();
    if (*piVar29 == 0) {
      (**(code **)(*plStack_d8 + 0x10))();
    }
  }
  lVar11 = plVar12[0x25];
  if (lVar11 == 0) {
    uVar10 = FUN_1406ef318();
    lVar11 = FUN_14477b664(uVar10);
    local_180[0x25] = lVar11;
    plVar12 = local_180;
  }
  lVar39 = plVar12[0x26];
  if (lVar39 == 0) {
    if (lVar11 == 0) {
      lVar39 = 0;
    }
    else {
      lVar39 = 0;
      if (plVar12[0x24] != 0) {
        plVar42 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar42 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar42 + 0x108))(plVar42), cVar3 == '\0')) {
          lVar39 = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar42 + 0x110))(plVar42);
          lVar39 = FUN_144aff482(uVar10,plVar12 + 0x24);
        }
        local_180[0x26] = lVar39;
      }
    }
  }
  FUN_144212782(local_1b0,lVar39);
LAB_14420e1c1:
  if (lStack_70 != 0) {
    FUN_1400020a8();
  }
  uVar18 = *(uint *)(lVar34 + 0x50);
  param_1 = local_1b0;
  plVar42 = local_1a8;
LAB_14420e1dc:
  uVar35 = uVar35 & ~(uint)uVar43;
  puVar38 = *(uint **)(lVar34 + 0x48);
  if (*(uint **)(lVar34 + 0x48) == (uint *)0x0) {
    puVar38 = puVar40;
  }
  iVar5 = (int)uVar45;
  lVar11 = (longlong)iVar5;
  uVar22 = puVar38[lVar11] & uVar35;
  if (uVar22 == 0) {
    iVar6 = uVar18 + 0x1e;
    if (-1 < (int)(uVar18 - 1)) {
      iVar6 = uVar18 - 1;
    }
    iVar6 = iVar6 >> 5;
    iVar4 = iVar4 + 0x20;
    iVar23 = iVar6;
    if (iVar6 < iVar5) {
      iVar23 = iVar5;
    }
    if (iVar5 < iVar6) {
      lVar39 = 0;
      do {
        uVar22 = puVar38[lVar11 + lVar39 + 1];
        if (uVar22 != 0) {
          uVar45 = (ulonglong)(iVar5 + (int)lVar39 + 1);
          uVar35 = 0xffffffff;
          goto LAB_14420e24f;
        }
        iVar4 = iVar4 + 0x20;
        lVar39 = lVar39 + 1;
      } while (iVar23 - lVar11 != lVar39);
      uVar35 = 0xffffffff;
      iVar5 = iVar23;
    }
    uVar45 = (ulonglong)(iVar5 + 1);
    param_1 = local_1b0;
    uVar22 = uVar18;
  }
  else {
LAB_14420e24f:
    uVar43 = (ulonglong)(-uVar22 & uVar22);
    uVar27 = uVar43 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar22 = (iVar4 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if ((int)uVar18 <= (int)uVar22) {
      uVar22 = uVar18;
    }
  }
  if (uVar22 == (uint)plVar42) goto LAB_14420e2cb;
  goto LAB_14420df0b;
LAB_14420e2cb:
  uVar35 = *(uint *)(param_1 + 0xb0);
  puVar38 = local_158;
LAB_14420e2da:
  uVar22 = (uint)local_1a0 & ~(uint)local_188;
  puVar37 = *(uint **)(param_1 + 0xa8);
  if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
    puVar37 = puVar38;
  }
  iVar5 = (int)local_170;
  lVar34 = (longlong)iVar5;
  uVar18 = puVar37[lVar34] & uVar22;
  plVar12 = local_170;
  iVar4 = (int)local_178;
  if (uVar18 == 0) {
    iVar6 = uVar35 + 0x1e;
    if (-1 < (int)(uVar35 - 1)) {
      iVar6 = uVar35 - 1;
    }
    iVar6 = iVar6 >> 5;
    iVar4 = (int)local_178 + 0x20;
    iVar23 = iVar6;
    if (iVar6 < iVar5) {
      iVar23 = iVar5;
    }
    if (iVar5 < iVar6) {
      lVar11 = 0;
      do {
        uVar18 = puVar37[lVar34 + lVar11 + 1];
        if (uVar18 != 0) {
          uVar22 = 0xffffffff;
          plVar12 = (longlong *)(ulonglong)(iVar5 + (int)lVar11 + 1);
          goto LAB_14420e367;
        }
        iVar4 = iVar4 + 0x20;
        lVar11 = lVar11 + 1;
      } while (iVar23 - lVar34 != lVar11);
      uVar22 = 0xffffffff;
      iVar5 = iVar23;
    }
    plVar12 = (longlong *)(ulonglong)(iVar5 + 1);
    puVar37 = local_188;
    param_1 = local_1b0;
    uVar18 = uVar35;
  }
  else {
LAB_14420e367:
    puVar37 = (uint *)(ulonglong)(-uVar18 & uVar18);
    uVar45 = (longlong)puVar37 * 2 + 1;
    lVar34 = 0x3f;
    if (uVar45 != 0) {
      for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar18 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    if ((int)uVar35 <= (int)uVar18) {
      uVar18 = uVar35;
    }
  }
  if (uVar18 == (uint)local_160) goto LAB_14420dd72;
  goto LAB_14420de3f;
  while (iVar4 = *(int *)(lVar34 + 0x38), iVar4 != -1) {
LAB_14420f9ee:
    lVar34 = *plVar12 + (longlong)iVar4 * 0x40;
    if (*(uint *)(*plVar12 + (longlong)iVar4 * 0x40) == DAT_14cb7be60) {
      if (lVar34 + 0x28 != 0 && lVar34 != 0) {
        iVar4 = FUN_140e1edd4(lVar34 + 0x28,0xffffffff);
        bVar2 = iVar4 < 2;
        pbVar13 = (byte *)*puVar44;
      }
      break;
    }
  }
LAB_14420fe4d:
  plVar12 = &DAT_14c9a1288;
  if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
    plVar12 = (longlong *)(*(longlong *)(pbVar13 + 8) + 0x18);
  }
  if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
    plVar42 = plVar12 + 8;
    if ((longlong *)plVar12[9] != (longlong *)0x0) {
      plVar42 = (longlong *)plVar12[9];
    }
    iVar4 = *(int *)((longlong)plVar42 + (ulonglong)((int)plVar12[10] - 1U & DAT_14cb7be88) * 4);
    if (iVar4 != -1) {
LAB_14420fe9a:
      lVar34 = *plVar12 + (longlong)iVar4 * 0x40;
      if (*(uint *)(*plVar12 + (longlong)iVar4 * 0x40) != DAT_14cb7be88) goto code_r0x00014420feab;
      if ((((undefined8 *)(lVar34 + 0x28) != (undefined8 *)0x0 && lVar34 != 0) &&
          (pbVar13 = *(byte **)(lVar34 + 0x28), pbVar13 != (byte *)0x0)) &&
         (!(bool)(bVar2 | (*pbVar13 & 0x6b) != 2))) {
        lVar34 = (longlong)*(int *)(*(undefined8 **)(pbVar13 + 8) + 2);
        if (lVar34 == 0) {
          local_1a0 = (longlong *)(local_1b0 + 0x1d8);
          local_150 = (int *)(local_1b0 + 0x1e0);
          local_198 = (int *)(local_1b0 + 0x20c);
        }
        else {
          puVar41 = (undefined8 *)**(undefined8 **)(pbVar13 + 8);
          puVar44 = puVar41 + lVar34 * 2;
          do {
            if (((byte *)*puVar41 != (byte *)0x0) && ((*(byte *)*puVar41 & 0x6b) == 3)) {
              local_78 = 0;
              lStack_70 = 0;
              local_88 = (byte **)0x0;
              uStack_80 = (longlong **)0x0;
              local_68 = 0;
              FUN_14654b646(&local_88,puVar41);
              if (local_88 != (byte **)0x0) {
                if ((int)puStack_e0 != local_c0[3]) {
                  uVar35 = (uint)((ulonglong)local_88 >> 0x10);
                  uVar18 = (uint)local_88 & 0xffff;
                  puVar21 = local_a8;
                  if (local_a8 == (undefined1 *)0x0) {
                    puVar21 = local_b0;
                  }
                  for (iVar4 = *(int *)(puVar21 +
                                       (ulonglong)
                                       (local_a0 - 1U &
                                       (int)((ulonglong)local_88 >> 0x20) +
                                       ((uint)local_88 << 0x10 | uVar18) +
                                       (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar18 >> 4)) * 4);
                      iVar4 != -1; iVar4 = local_e8[(longlong)iVar4 * 0xe + 0xc]) {
                    if (*(byte ***)(local_e8 + (longlong)iVar4 * 0xe) == local_88)
                    goto LAB_14421066f;
                  }
                }
                FUN_145804fc0(&local_e8,&local_98);
                plVar12 = plStack_90;
                *plStack_90 = (longlong)local_88;
                *(uint *)(plStack_90 + 1) = (uint)local_88;
                *(undefined4 *)((longlong)plStack_90 + 0xc) = local_88._4_4_;
                *(undefined4 *)(plStack_90 + 2) = (undefined4)uStack_80;
                *(undefined4 *)((longlong)plStack_90 + 0x14) = uStack_80._4_4_;
                plStack_90[3] = local_78;
                plStack_90[4] = lStack_70;
                lStack_70 = 0;
                *(undefined4 *)(plStack_90 + 5) = (undefined4)local_68;
                *(undefined4 *)((longlong)plStack_90 + 0x2c) = local_68._4_4_;
                local_68 = 0;
                *(undefined4 *)(plStack_90 + 6) = 0xffffffff;
                local_108 = CONCAT44(local_108._4_4_,local_98._0_4_);
                lVar34 = *plStack_90;
                uVar35 = (uint)((ulonglong)lVar34 >> 0x10);
                uVar18 = (uint)lVar34 & 0xffff;
                uVar35 = ((uint)lVar34 << 0x10 | uVar18) + (int)((ulonglong)lVar34 >> 0x20) +
                         (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar18 >> 4);
                local_1b8 = (undefined *)0x0;
                cVar3 = FUN_145804ef4(&local_e8,uVar35,plStack_90,&local_108);
                if (cVar3 == '\0') {
                  uVar18 = (int)puStack_e0 - local_c0[3];
                  iVar4 = 1;
                  if (3 < uVar18) {
                    uVar45 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
                    lVar34 = 0x3f;
                    if (uVar45 != 0) {
                      for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                      }
                    }
                    iVar4 = 1 << ((byte)lVar34 & 0x1f);
                  }
                  if (((int)uVar18 < 1) || (iVar4 <= local_a0)) {
                    uVar35 = local_a0 - 1U & uVar35;
                    *(uint *)((longlong)plVar12 + 0x34) = uVar35;
                    puVar21 = local_a8;
                    if (local_a8 == (undefined1 *)0x0) {
                      puVar21 = local_b0;
                    }
                    *(undefined4 *)(plVar12 + 6) =
                         *(undefined4 *)
                          (puVar21 + ((longlong)local_a0 - 1U & (longlong)(int)uVar35) * 4);
                    puVar21 = local_a8;
                    if (local_a8 == (undefined1 *)0x0) {
                      puVar21 = local_b0;
                    }
                    *(undefined4 *)(puVar21 + ((longlong)local_a0 - 1U & (longlong)(int)uVar35) * 4)
                         = (undefined4)local_108;
                  }
                  else {
                    local_a0 = iVar4;
                    FUN_1410feae0(&local_e8);
                  }
                }
              }
LAB_14421066f:
              if (lStack_70 != 0) {
                FUN_1400020a8();
              }
            }
            puVar41 = puVar41 + 2;
          } while (puVar41 != puVar44);
          uVar45 = (longlong)(int)puStack_e0 - (longlong)(int)local_c0[3];
          local_1a0 = (longlong *)(local_1b0 + 0x1d8);
          local_150 = (int *)(local_1b0 + 0x1e0);
          uVar35 = *(uint *)(local_1b0 + 0x1e0);
          local_198 = (int *)(local_1b0 + 0x20c);
          uVar18 = (uint)uVar45;
          if (uVar35 - *(int *)(local_1b0 + 0x20c) < uVar18) {
            if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456acd4b(uVar45);
            }
            uVar22 = uVar18 - uVar35;
            if (uVar22 != 0 && (int)uVar35 <= (int)uVar18) {
              iVar4 = *(int *)(local_1b0 + 0x1e4);
              uVar19 = uVar35;
              if (iVar4 < (int)uVar18) {
                FUN_140549ad6(local_1a0,uVar45 & 0xffffffff);
                uVar19 = *(uint *)(local_1b0 + 0x1e0);
                iVar4 = *(int *)(local_1b0 + 0x1e4);
              }
              *local_150 = uVar19 + uVar22;
              if (iVar4 - uVar19 < uVar22) {
                FUN_140549c28(local_1a0);
              }
              if ((int)uVar19 < (int)uVar18) {
                lVar34 = *local_1a0;
                uVar45 = uVar45 & 0xffffffff;
                iVar4 = *(int *)(local_1b0 + 0x20c);
                puVar26 = (undefined4 *)(lVar34 + uVar45 * 0x28 + -0x24);
                do {
                  iVar5 = (int)uVar45;
                  if (iVar4 != 0) {
                    *(int *)(lVar34 + (longlong)*(int *)(local_1b0 + 0x208) * 0x28) = iVar5 + -1;
                  }
                  puVar26[-1] = 0xffffffff;
                  if (*local_198 < 1) {
                    uVar7 = 0xffffffff;
                  }
                  else {
                    uVar7 = *(undefined4 *)(local_1b0 + 0x208);
                  }
                  uVar45 = uVar45 - 1;
                  *puVar26 = uVar7;
                  *(int *)(local_1b0 + 0x208) = iVar5 + -1;
                  iVar4 = *(int *)(local_1b0 + 0x20c) + 1;
                  *(int *)(local_1b0 + 0x20c) = iVar4;
                  puVar26 = puVar26 + -10;
                } while ((longlong)(int)uVar19 < (longlong)uVar45);
              }
              if (uVar35 == 0) {
                pvVar28 = (void *)(local_1b0 + 0x1e8);
                *(uint *)(local_1b0 + 0x200) = uVar22;
                uVar35 = uVar22 + 0x1f >> 5;
                if (*(int *)(local_1b0 + 0x204) + 0x1fU >> 5 < uVar35) {
                  if ((0x80 < uVar22) || (*(longlong *)(local_1b0 + 0x1f8) != 0)) {
                    uVar19 = 0;
                    if (0x80 < uVar22) {
                      uVar19 = uVar35;
                    }
                    FUN_1446efa72(local_1b0 + 0x1f8,0,uVar19,4);
                  }
                  *(uint *)(local_1b0 + 0x204) = uVar22 + 0x1f & 0xffffffe0;
                }
                _Dst = *(void **)(local_1b0 + 0x1f8);
                if (*(void **)(local_1b0 + 0x1f8) == (void *)0x0) {
                  _Dst = pvVar28;
                }
                if (uVar22 < 0x101) {
                  uVar35 = uVar35 + (uVar35 == 0);
                }
                memset(_Dst,0,(ulonglong)(uVar35 << 2));
                iVar4 = *(int *)(local_1b0 + 0x200);
                iVar5 = iVar4 + 0x1f;
                if (-1 < iVar4) {
                  iVar5 = iVar4;
                }
                if (iVar4 % 0x20 != 0) {
                  if (*(void **)(local_1b0 + 0x1f8) != (void *)0x0) {
                    pvVar28 = *(void **)(local_1b0 + 0x1f8);
                  }
                  bVar16 = -(char)(iVar4 % 0x20);
                  *(uint *)((longlong)pvVar28 + (longlong)(iVar5 >> 5) * 4) =
                       (uint)(*(int *)((longlong)pvVar28 + (longlong)(iVar5 >> 5) * 4) <<
                             (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
                }
              }
              else if (-1 < (int)uVar22) {
                lVar34 = local_1b0 + 0x1e8;
                iVar4 = *(int *)(local_1b0 + 0x200);
                if (uVar18 != uVar35) {
                  if (iVar4 == 0) {
                    iVar5 = -1;
                  }
                  else {
                    iVar5 = iVar4 + 0x1e;
                    if (-1 < iVar4 + -1) {
                      iVar5 = iVar4 + -1;
                    }
                    iVar5 = iVar5 >> 5;
                  }
                  iVar6 = uVar22 + iVar4;
                  iVar17 = uVar22 + iVar4 + -1;
                  iVar23 = uVar22 + iVar4 + 0x1e;
                  if (-1 < iVar17) {
                    iVar23 = iVar17;
                  }
                  if (iVar23 >> 5 == iVar5) {
                    *(int *)(local_1b0 + 0x200) = iVar6;
                  }
                  else {
                    if (*(int *)(local_1b0 + 0x204) < iVar6) {
                      iVar5 = iVar4;
                      if (iVar6 + 0x1fU < 0xa0) {
                        iVar6 = 0x80;
                      }
                      else {
                        uVar35 = iVar6 + 0x1fU >> 5;
                        if (*(int *)(local_1b0 + 0x204) + 0x1fU < 0xa0) {
                          uVar19 = 4;
                          if (4 < uVar35) {
                            uVar19 = uVar35;
                          }
                        }
                        else {
                          uVar19 = uVar35 + (uVar35 * 3 >> 3) + 0x10;
                        }
                        uVar45 = (ulonglong)(uVar19 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar9 = (uint)(uVar45 + 0xf);
                            if (uVar19 < 0x1ffd) {
                              uVar45 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
                            }
                            else {
                              uVar43 = uVar45 + 0xf & 0xfffffffffffffff0;
                              if (uVar43 < 0x7ff1) {
                                bVar16 = (&DAT_14c841e00)[uVar9 >> 4];
                                uVar27 = 0x32;
                                if (0x32 < bVar16) {
                                  uVar27 = (ulonglong)bVar16;
                                }
                                uVar32 = 0x32 - (ulonglong)bVar16;
                                do {
                                  uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar32 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar32 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_144211483;
                                  lVar11 = uVar27 + 1 + uVar32;
                                  uVar32 = uVar32 - 1;
                                } while (lVar11 != 0x33);
                              }
                              uVar45 = 0x10;
                              if (0x10 < DAT_14c841df8) {
                                uVar45 = (ulonglong)DAT_14c841df8;
                              }
                              uVar45 = -uVar45 & (uVar43 + uVar45) - 1;
                            }
                          }
                          else {
                            uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                            iVar5 = *(int *)(local_1b0 + 0x200);
                          }
                        }
LAB_144211483:
                        iVar23 = (int)(uVar45 >> 2);
                        iVar6 = -0x20;
                        if ((int)uVar35 <= iVar23) {
                          iVar6 = iVar23 << 5;
                        }
                      }
                      lVar11 = local_1b0;
                      *(int *)(local_1b0 + 0x204) = iVar6;
                      FUN_1446efbd8(lVar34,iVar5);
                      iVar6 = *(int *)(lVar11 + 0x200) + uVar22;
                    }
                    iVar5 = iVar6 + 0x1f;
                    if (-1 < iVar6) {
                      iVar5 = iVar6;
                    }
                    *(int *)(local_1b0 + 0x200) = iVar6;
                    if (iVar6 % 0x20 != 0) {
                      lVar11 = *(longlong *)(local_1b0 + 0x1f8);
                      if (*(longlong *)(local_1b0 + 0x1f8) == 0) {
                        lVar11 = lVar34;
                      }
                      bVar16 = -(char)(iVar6 % 0x20);
                      *(uint *)(lVar11 + (longlong)(iVar5 >> 5) * 4) =
                           (uint)(*(int *)(lVar11 + (longlong)(iVar5 >> 5) * 4) << (bVar16 & 0x1f))
                           >> (bVar16 & 0x1f);
                    }
                  }
                }
                FUN_1447c6044(lVar34,iVar4,uVar22,0);
              }
            }
            iVar4 = 1;
            if (3 < uVar18) {
              uVar35 = (uVar18 | 1) + 0xe;
              iVar4 = 0x1f;
              if (uVar35 != 0) {
                for (; uVar35 >> iVar4 == 0; iVar4 = iVar4 + -1) {
                }
              }
              iVar4 = 1 << ((byte)iVar4 & 0x1f);
            }
            if ((*(int *)(local_1b0 + 0x220) == 0) || (*(int *)(local_1b0 + 0x220) < iVar4)) {
              *(int *)(local_1b0 + 0x220) = iVar4;
              FUN_14421918a(local_1a0);
            }
          }
        }
        local_158 = (uint *)(ulonglong)local_c0[0];
        if (local_c0[0] == 0) {
          uVar43 = 1;
          local_1a8 = (longlong *)0x0;
          local_190 = (uint *)((ulonglong)local_190._4_4_ << 0x20);
          puVar38 = (uint *)0x0;
LAB_144210a7c:
          if ((uint)puVar38 != local_c0[0]) {
            local_180 = (longlong *)(local_1b0 + 0x1c8);
            local_160 = local_1b0 + 0x210;
            local_168 = (ulonglong *)(local_1b0 + 0x1e8);
            local_188 = (uint *)CONCAT44(local_188._4_4_,0xffffffff);
            do {
              local_170 = (longlong *)(local_e8 + (longlong)(int)puVar38 * 0xe + 2);
              lVar34 = *local_170;
              uVar35 = (uint)((ulonglong)lVar34 >> 0x10);
              uVar18 = (uint)lVar34 & 0xffff;
              uVar35 = ((uint)lVar34 << 0x10 | uVar18) + (int)((ulonglong)lVar34 >> 0x20) +
                       (uVar35 << 0x13 | uVar35 & 0xffff) + (uVar18 >> 4);
              iVar4 = *local_150;
              iVar5 = *local_198;
              if (iVar4 != iVar5) {
                uVar45 = *(ulonglong *)(local_1b0 + 0x218);
                if (*(ulonglong *)(local_1b0 + 0x218) == 0) {
                  uVar45 = local_160;
                }
                iVar6 = *(int *)(uVar45 + (ulonglong)(*(int *)(local_1b0 + 0x220) - 1U & uVar35) * 4
                                );
                if (iVar6 != -1) {
                  do {
                    plVar12 = (longlong *)(*local_1a0 + (longlong)iVar6 * 0x28);
                    if (*plVar12 == lVar34) {
                      if (plVar12 != (longlong *)0x0) goto LAB_144210e9c;
                      break;
                    }
                    iVar6 = (int)plVar12[4];
                  } while (iVar6 != -1);
                }
              }
              if (iVar5 == 0) {
                *(int *)(local_1b0 + 0x1e0) = iVar4 + 1;
                if (*(int *)(local_1b0 + 0x1e4) == iVar4) {
                  FUN_140549c28(local_1a0,iVar4);
                }
                iVar5 = *(int *)(local_1b0 + 0x200);
                if (iVar5 == 0) {
                  iVar6 = -1;
                }
                else {
                  iVar6 = iVar5 + 0x1e;
                  if (-1 < iVar5 + -1) {
                    iVar6 = iVar5 + -1;
                  }
                  iVar6 = iVar6 >> 5;
                }
                iVar23 = iVar5 + 1;
                iVar17 = iVar5 + 0x1f;
                if (-1 < iVar5) {
                  iVar17 = iVar5;
                }
                if (iVar17 >> 5 == iVar6) {
                  *(int *)(local_1b0 + 0x200) = iVar23;
                }
                else {
                  if (*(int *)(local_1b0 + 0x204) <= iVar5) {
                    iVar6 = iVar5;
                    if (iVar5 + 0x20U < 0xa0) {
                      iVar23 = 0x80;
                    }
                    else {
                      uVar18 = iVar5 + 0x20U >> 5;
                      if (*(int *)(local_1b0 + 0x204) + 0x1fU < 0xa0) {
                        uVar22 = 4;
                        if (4 < uVar18) {
                          uVar22 = uVar18;
                        }
                      }
                      else {
                        uVar22 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
                      }
                      uVar45 = (ulonglong)(uVar22 * 4);
                      if (DAT_14c872d28 != (longlong *)0x0) {
                        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                          uVar19 = (uint)(uVar45 + 0xf);
                          if (uVar22 < 0x1ffd) {
                            uVar45 = (ulonglong)
                                     (ushort)(&DAT_14c841d90)
                                             [0x32 - (byte)(&DAT_14c841e00)[uVar19 >> 4]];
                          }
                          else {
                            uVar27 = uVar45 + 0xf & 0xfffffffffffffff0;
                            if (uVar27 < 0x7ff1) {
                              bVar16 = (&DAT_14c841e00)[uVar19 >> 4];
                              uVar32 = 0x32;
                              if (0x32 < bVar16) {
                                uVar32 = (ulonglong)bVar16;
                              }
                              uVar31 = 0x32 - (ulonglong)bVar16;
                              do {
                                uVar45 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                                if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0)
                                goto LAB_144211180;
                                lVar34 = uVar32 + 1 + uVar31;
                                uVar31 = uVar31 - 1;
                              } while (lVar34 != 0x33);
                            }
                            uVar45 = (ulonglong)DAT_14c841df8;
                            if (DAT_14c841df8 < 0x11) {
                              uVar45 = 0x10;
                            }
                            uVar45 = -uVar45 & (uVar27 + uVar45) - 1;
                          }
                        }
                        else {
                          uVar45 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar45,0);
                          iVar6 = *(int *)(local_1b0 + 0x200);
                        }
                      }
LAB_144211180:
                      iVar8 = (int)(uVar45 >> 2);
                      iVar23 = iVar8 << 5;
                      if (iVar8 < (int)uVar18) {
                        iVar23 = -0x20;
                      }
                    }
                    lVar34 = local_1b0;
                    *(int *)(local_1b0 + 0x204) = iVar23;
                    FUN_1446efbd8(local_168,iVar6);
                    iVar23 = *(int *)(lVar34 + 0x200) + 1;
                  }
                  iVar6 = iVar23 + 0x1f;
                  if (-1 < iVar23) {
                    iVar6 = iVar23;
                  }
                  *(int *)(local_1b0 + 0x200) = iVar23;
                  if (iVar23 % 0x20 != 0) {
                    puVar33 = *(ulonglong **)(local_1b0 + 0x1f8);
                    if (*(ulonglong **)(local_1b0 + 0x1f8) == (ulonglong *)0x0) {
                      puVar33 = local_168;
                    }
                    bVar16 = -(char)(iVar23 % 0x20);
                    *(uint *)((longlong)puVar33 + (longlong)(iVar6 >> 5) * 4) =
                         (uint)(*(int *)((longlong)puVar33 + (longlong)(iVar6 >> 5) * 4) <<
                               (bVar16 & 0x1f)) >> (bVar16 & 0x1f);
                  }
                }
                lVar34 = (longlong)iVar4;
                puVar33 = *(ulonglong **)(local_1b0 + 0x1f8);
                if (*(ulonglong **)(local_1b0 + 0x1f8) == (ulonglong *)0x0) {
                  puVar33 = local_168;
                }
                bVar16 = (byte)iVar5 & 0x1f;
                puVar38 = (uint *)((longlong)puVar33 + (longlong)(iVar17 >> 5) * 4);
                *puVar38 = *puVar38 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
              }
              else {
                iVar4 = *(int *)(local_1b0 + 0x208);
                lVar34 = (longlong)iVar4;
                iVar6 = *(int *)(*(longlong *)(local_1b0 + 0x1d8) + 4 + lVar34 * 0x28);
                *(int *)(local_1b0 + 0x208) = iVar6;
                *(int *)(local_1b0 + 0x20c) = iVar5 + -1;
                if (iVar5 + -1 != 0) {
                  *(undefined4 *)(*(longlong *)(local_1b0 + 0x1d8) + (longlong)iVar6 * 0x28) =
                       0xffffffff;
                }
              }
              uVar18 = 1 << ((byte)iVar4 & 0x1f);
              puVar33 = *(ulonglong **)(local_1b0 + 0x1f8);
              if (*(ulonglong **)(local_1b0 + 0x1f8) == (ulonglong *)0x0) {
                puVar33 = local_168;
              }
              iVar5 = iVar4 + 0x1f;
              if (-1 < iVar4) {
                iVar5 = iVar4;
              }
              puVar38 = (uint *)((longlong)puVar33 + (longlong)(iVar5 >> 5) * 4);
              *puVar38 = *puVar38 | uVar18;
              plVar12 = (longlong *)(*(longlong *)(local_1b0 + 0x1d8) + lVar34 * 0x28);
              lVar34 = *local_170;
              *plVar12 = lVar34;
              plVar12[1] = 0;
              plVar12[2] = 0;
              plVar12[3] = 0;
              *(undefined4 *)(plVar12 + 4) = 0xffffffff;
              uVar22 = *(int *)(local_1b0 + 0x1e0) - *(int *)(local_1b0 + 0x20c);
              lVar11 = (longlong)iVar4;
              if (1 < uVar22) {
                uVar45 = *(ulonglong *)(local_1b0 + 0x218);
                if (*(ulonglong *)(local_1b0 + 0x218) == 0) {
                  uVar45 = local_160;
                }
                iVar6 = *(int *)(uVar45 + (ulonglong)(*(int *)(local_1b0 + 0x220) - 1U & uVar35) * 4
                                );
                if (iVar6 != -1) {
                  do {
                    plVar42 = (longlong *)(*local_1a0 + (longlong)iVar6 * 0x28);
                    if (*plVar42 == lVar34) {
                      if (plVar42[2] != 0) {
                        FUN_1400020a8();
                      }
                      lVar34 = *plVar12;
                      lVar39 = plVar12[1];
                      lVar36 = plVar12[3];
                      plVar42[2] = plVar12[2];
                      plVar42[3] = lVar36;
                      *plVar42 = lVar34;
                      plVar42[1] = lVar39;
                      lVar34 = *local_1a0;
                      if (*local_198 != 0) {
                        *(int *)(lVar34 + (longlong)*(int *)(local_1b0 + 0x208) * 0x28) = iVar4;
                      }
                      *(undefined4 *)(lVar34 + lVar11 * 0x28) = 0xffffffff;
                      uVar7 = 0xffffffff;
                      if (0 < *local_198) {
                        uVar7 = *(undefined4 *)(local_1b0 + 0x208);
                      }
                      *(undefined4 *)(lVar34 + lVar11 * 0x28 + 4) = uVar7;
                      *(int *)(local_1b0 + 0x208) = iVar4;
                      *(int *)(local_1b0 + 0x20c) = *(int *)(local_1b0 + 0x20c) + 1;
                      puVar33 = *(ulonglong **)(local_1b0 + 0x1f8);
                      if (*(ulonglong **)(local_1b0 + 0x1f8) == (ulonglong *)0x0) {
                        puVar33 = local_168;
                      }
                      puVar38 = (uint *)((longlong)puVar33 + (longlong)(iVar5 >> 5) * 4);
                      *puVar38 = *puVar38 & ~uVar18;
                      goto LAB_144210e88;
                    }
                    iVar6 = (int)plVar42[4];
                  } while (iVar6 != -1);
                }
              }
              iVar5 = 1;
              if (3 < uVar22) {
                uVar45 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
                lVar34 = 0x3f;
                if (uVar45 != 0) {
                  for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                iVar5 = 1 << ((byte)lVar34 & 0x1f);
              }
              if (((int)uVar22 < 1) || (iVar5 <= *(int *)(local_1b0 + 0x220))) {
                uVar35 = *(int *)(local_1b0 + 0x220) - 1U & uVar35;
                *(uint *)((longlong)plVar12 + 0x24) = uVar35;
                uVar45 = *(ulonglong *)(local_1b0 + 0x218);
                if (*(ulonglong *)(local_1b0 + 0x218) == 0) {
                  uVar45 = local_160;
                }
                *(undefined4 *)(plVar12 + 4) =
                     *(undefined4 *)
                      (uVar45 + ((longlong)*(int *)(local_1b0 + 0x220) - 1U & (longlong)(int)uVar35)
                                * 4);
                uVar45 = *(ulonglong *)(local_1b0 + 0x218);
                if (*(ulonglong *)(local_1b0 + 0x218) == 0) {
                  uVar45 = local_160;
                }
                *(int *)(uVar45 + ((longlong)*(int *)(local_1b0 + 0x220) - 1U &
                                  (longlong)(int)uVar35) * 4) = iVar4;
              }
              else {
                *(int *)(local_1b0 + 0x220) = iVar5;
                FUN_14421918a(local_1a0);
              }
LAB_144210e88:
              plVar12 = (longlong *)(*local_1a0 + lVar11 * 0x28);
LAB_144210e9c:
              *(undefined4 *)(local_1b0 + 0x1d0) = 0;
              if (*(int *)(local_1b0 + 0x1d4) < 0) {
                FUN_144893a1c(local_180,0);
              }
              cVar3 = FUN_145c71772(local_170,&local_88,local_180);
              if (cVar3 != '\0') {
                plVar12[1] = (longlong)local_88;
                plVar42 = plVar12 + 2;
                iVar4 = (int)plVar12[3];
                if (iVar4 == 0) {
                  if (plVar42 != local_180) {
                    iVar4 = *(int *)(local_1b0 + 0x1d0);
                    pvVar28 = *(void **)(local_1b0 + 0x1c8);
                    *(int *)(plVar12 + 3) = iVar4;
                    if (iVar4 == 0 && *(int *)((longlong)plVar12 + 0x1c) == 0) {
                      *(undefined4 *)((longlong)plVar12 + 0x1c) = 0;
                    }
                    else {
                      FUN_1447a127e(plVar42,iVar4);
                      if (iVar4 != 0) {
                        memcpy((void *)*plVar42,pvVar28,(longlong)iVar4);
                      }
                    }
                  }
                }
                else if ((0 < iVar4) && (iVar4 == *(int *)(local_1b0 + 0x1d0))) {
                  lVar34 = 0;
                  do {
                    bVar16 = *(byte *)(*(longlong *)(local_1b0 + 0x1c8) + lVar34);
                    bVar30 = *(byte *)(*plVar42 + lVar34);
                    if (bVar30 < bVar16) {
                      bVar30 = bVar16;
                    }
                    *(byte *)(*plVar42 + lVar34) = bVar30;
                    lVar34 = lVar34 + 1;
                  } while (lVar34 < *(int *)(local_1b0 + 0x1d0));
                }
              }
              uVar35 = (uint)local_188 & ~(uint)uVar43;
              pplVar15 = pplStack_c8;
              if (pplStack_c8 == (longlong **)0x0) {
                pplVar15 = &plStack_d8;
              }
              lVar34 = (longlong)(int)local_1a8;
              local_188 = (uint *)CONCAT44(local_188._4_4_,uVar35);
              uVar35 = *(uint *)((longlong)pplVar15 + lVar34 * 4) & uVar35;
              if (uVar35 == 0) {
                iVar4 = local_c0[0] + 0x1e;
                if (-1 < (int)(local_c0[0] - 1)) {
                  iVar4 = local_c0[0] - 1;
                }
                iVar4 = iVar4 >> 5;
                local_190 = (uint *)CONCAT44(local_190._4_4_,(int)local_190 + 0x20);
                iVar5 = iVar4;
                if (iVar4 < (int)local_1a8) {
                  iVar5 = (int)local_1a8;
                }
                if ((int)local_1a8 < iVar4) {
                  lVar11 = 0;
                  do {
                    uVar35 = *(uint *)((longlong)pplVar15 + (lVar34 + lVar11 + 1) * 4);
                    if (uVar35 != 0) {
                      local_1a8 = (longlong *)(ulonglong)((int)local_1a8 + (int)lVar11 + 1);
                      local_188 = (uint *)CONCAT44(local_188._4_4_,0xffffffff);
                      goto LAB_1442110b6;
                    }
                    local_190 = (uint *)CONCAT44(local_190._4_4_,(int)local_190 + 0x20);
                    lVar11 = lVar11 + 1;
                  } while (iVar5 - lVar34 != lVar11);
                  local_188 = (uint *)CONCAT44(local_188._4_4_,0xffffffff);
                  lVar34 = (longlong)iVar5;
                }
                local_1a8 = (longlong *)(lVar34 + 1);
                uVar35 = local_c0[0];
              }
              else {
LAB_1442110b6:
                uVar43 = (ulonglong)(-uVar35 & uVar35);
                uVar45 = uVar43 * 2 + 1;
                lVar34 = 0x3f;
                if (uVar45 != 0) {
                  for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                uVar35 = ((int)local_190 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
                if ((int)local_c0[0] <= (int)uVar35) {
                  uVar35 = local_c0[0];
                }
              }
              puVar38 = (uint *)(ulonglong)uVar35;
            } while (uVar35 != (uint)local_158);
          }
        }
        else {
          pplVar15 = pplStack_c8;
          if (pplStack_c8 == (longlong **)0x0) {
            pplVar15 = &plStack_d8;
          }
          uVar35 = *(uint *)pplVar15;
          if (uVar35 != 0) {
            local_1a8 = (longlong *)0x0;
            local_190 = (uint *)((ulonglong)local_190._4_4_ << 0x20);
LAB_144210a51:
            uVar43 = (ulonglong)(-uVar35 & uVar35);
            uVar45 = uVar43 * 2 + 1;
            lVar34 = 0x3f;
            if (uVar45 != 0) {
              for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
              }
            }
            uVar35 = ((int)local_190 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
            puVar38 = (uint *)(ulonglong)uVar35;
            if ((int)local_c0[0] <= (int)uVar35) {
              puVar38 = local_158;
            }
            goto LAB_144210a7c;
          }
          iVar4 = local_c0[0] + 0x1e;
          if (-1 < (int)(local_c0[0] - 1)) {
            iVar4 = local_c0[0] - 1;
          }
          local_1a8 = (longlong *)0x0;
          plVar12 = (longlong *)(ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            plVar12 = (longlong *)0x0;
          }
          local_190 = (uint *)((ulonglong)local_190._4_4_ << 0x20);
          while (plVar12 != local_1a8) {
            local_190 = (uint *)CONCAT44(local_190._4_4_,(int)local_190 + 0x20);
            uVar35 = *(uint *)((longlong)pplVar15 + ((longlong)local_1a8 + 1) * 4);
            local_1a8 = (longlong *)((longlong)local_1a8 + 1);
            if (uVar35 != 0) goto LAB_144210a51;
          }
        }
        local_a0 = 0;
        if (local_a8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14420fedf;
      }
    }
  }
LAB_14420fed4:
  local_a0 = 0;
LAB_14420fedf:
  FUN_145bceccc(&local_e8);
  puVar41 = local_178;
LAB_14420f087:
  lVar34 = local_1b0 + 0x88;
  lVar11 = 0;
  do {
    lVar39 = FUN_144211668(puVar41);
    if (lVar39 != 0) {
      local_1b8 = (undefined *)0x0;
      FUN_1442117be(local_1b0,lVar39,&DAT_14cbd25f0 + lVar11,lVar34);
    }
    lVar11 = lVar11 + 0x28;
  } while (lVar11 != 600);
  uVar35 = *(uint *)(local_1b0 + 0x2e0);
  param_1 = local_1b0;
  if ((int)uVar35 < 5) {
    uVar18 = *(uint *)(local_1b0 + 0x150);
    if (uVar18 == 0) {
      puVar38 = (uint *)&DAT_00000001;
      piVar29 = (int *)0x0;
      iVar4 = 0;
      uVar22 = 0;
    }
    else {
      puVar38 = *(uint **)(local_1b0 + 0x148);
      if (*(uint **)(local_1b0 + 0x148) == (uint *)0x0) {
        puVar38 = (uint *)(local_1b0 + 0x138);
      }
      uVar22 = *puVar38;
      if (uVar22 == 0) {
        iVar4 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar4 = uVar18 - 1;
        }
        piVar29 = (int *)0x0;
        piVar25 = (int *)(ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          piVar25 = piVar29;
        }
        iVar4 = 0;
        do {
          if (piVar25 == piVar29) goto LAB_14420f4fa;
          iVar4 = iVar4 + 0x20;
          uVar22 = puVar38[(longlong)piVar29 + 1];
          piVar29 = (int *)((longlong)piVar29 + 1);
        } while (uVar22 == 0);
      }
      else {
        piVar29 = (int *)0x0;
        iVar4 = 0;
      }
      puVar38 = (uint *)(ulonglong)(-uVar22 & uVar22);
      uVar45 = (longlong)puVar38 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar45 != 0) {
        for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      uVar22 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if ((int)uVar18 <= (int)uVar22) {
        uVar22 = uVar18;
      }
    }
    if (uVar22 != uVar18) {
      uVar35 = 0xffffffff;
      local_198 = piVar29;
      local_190 = (uint *)(local_1b0 + 0x138);
      local_180 = (longlong *)(ulonglong)uVar18;
      local_178 = puVar41;
      do {
        local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,uVar35);
        local_170 = (longlong *)CONCAT44(local_170._4_4_,iVar4);
        lVar34 = (longlong)(int)uVar22 * 0x80 + *(longlong *)(local_1b0 + 0x128);
        local_188 = puVar38;
        puVar41 = (undefined8 *)FUN_144211668(local_178,lVar34);
        if (puVar41 != (undefined8 *)0x0) {
          pbVar13 = (byte *)*puVar41;
          plVar12 = &DAT_14c9a1288;
          if ((pbVar13 != (byte *)0x0) && (plVar12 = &DAT_14c9a1288, (*pbVar13 & 2) != 0)) {
            plVar12 = (longlong *)(*(longlong *)(pbVar13 + 8) + 0x18);
          }
          puVar33 = (ulonglong *)(plVar12 + 3);
          iVar4 = (int)plVar12[6];
          if (iVar4 == 0) {
            uVar43 = 1;
            uVar45 = 0;
            iVar6 = 0;
            iVar5 = 0;
          }
          else {
            puVar14 = (ulonglong *)plVar12[5];
            if ((ulonglong *)plVar12[5] == (ulonglong *)0x0) {
              puVar14 = puVar33;
            }
            uVar35 = (uint)*puVar14;
            if (uVar35 == 0) {
              iVar5 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar5 = iVar4 + -1;
              }
              uVar45 = 0;
              uVar43 = (ulonglong)(uint)(iVar5 >> 5);
              if (iVar5 >> 5 < 1) {
                uVar43 = uVar45;
              }
              iVar6 = 0;
              do {
                if (uVar43 == uVar45) goto LAB_14420f277;
                iVar6 = iVar6 + 0x20;
                uVar35 = *(uint *)((longlong)puVar14 + uVar45 * 4 + 4);
                uVar45 = uVar45 + 1;
              } while (uVar35 == 0);
            }
            else {
              uVar45 = 0;
              iVar6 = 0;
            }
            uVar43 = (ulonglong)(-uVar35 & uVar35);
            uVar27 = uVar43 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar5 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar5) {
              iVar5 = iVar4;
            }
          }
          if (iVar5 != iVar4) {
            local_1a8 = (longlong *)(lVar34 + 0x60);
            uVar35 = 0xffffffff;
            iVar23 = iVar4;
            local_168 = puVar33;
            do {
              if (*(int *)(lVar34 + 0x30) != *(int *)(lVar34 + 0x5c)) {
                uVar18 = *(uint *)(*plVar12 + (longlong)iVar5 * 0x40);
                plVar42 = *(longlong **)(lVar34 + 0x68);
                if (*(longlong **)(lVar34 + 0x68) == (longlong *)0x0) {
                  plVar42 = local_1a8;
                }
                uVar22 = *(uint *)((longlong)plVar42 +
                                  (ulonglong)(*(int *)(lVar34 + 0x70) - 1U & uVar18) * 4);
                if (uVar22 != 0xffffffff) {
                  do {
                    puVar38 = (uint *)(*(longlong *)(lVar34 + 0x28) + (longlong)(int)uVar22 * 0x48);
                    if (*puVar38 == uVar18) {
                      if ((puVar38 != (uint *)&DAT_ffffffffffffffd8 && puVar38 != (uint *)0x0) &&
                         ((char)puVar38[0xe] == '\0')) {
                        iVar5 = FUN_140e1edd4((longlong)iVar5 * 0x40 + *plVar12 + 0x28,0);
                        *(bool *)(puVar38 + 0xe) =
                             *(ulonglong *)(puVar38 + 10) <= (ulonglong)(longlong)iVar5;
                        iVar23 = (int)plVar12[6];
                        puVar33 = local_168;
                      }
                      break;
                    }
                    uVar22 = puVar38[0x10];
                  } while (uVar22 != 0xffffffff);
                }
              }
              uVar35 = uVar35 & ~(uint)uVar43;
              puVar14 = (ulonglong *)plVar12[5];
              if ((ulonglong *)plVar12[5] == (ulonglong *)0x0) {
                puVar14 = puVar33;
              }
              iVar5 = (int)uVar45;
              lVar11 = (longlong)iVar5;
              uVar18 = *(uint *)((longlong)puVar14 + lVar11 * 4) & uVar35;
              if (uVar18 == 0) {
                iVar17 = iVar23 + 0x1e;
                if (-1 < iVar23 + -1) {
                  iVar17 = iVar23 + -1;
                }
                iVar17 = iVar17 >> 5;
                iVar6 = iVar6 + 0x20;
                iVar8 = iVar17;
                if (iVar17 < iVar5) {
                  iVar8 = iVar5;
                }
                if (iVar5 < iVar17) {
                  lVar39 = 0;
                  do {
                    uVar18 = *(uint *)((longlong)puVar14 + lVar39 * 4 + lVar11 * 4 + 4);
                    if (uVar18 != 0) {
                      uVar45 = (ulonglong)(iVar5 + (int)lVar39 + 1);
                      uVar35 = 0xffffffff;
                      goto LAB_14420f476;
                    }
                    iVar6 = iVar6 + 0x20;
                    lVar39 = lVar39 + 1;
                  } while (iVar8 - lVar11 != lVar39);
                  uVar35 = 0xffffffff;
                  iVar5 = iVar8;
                }
                uVar45 = (ulonglong)(iVar5 + 1);
                iVar5 = iVar23;
              }
              else {
LAB_14420f476:
                uVar43 = (ulonglong)(-uVar18 & uVar18);
                uVar27 = uVar43 * 2 + 1;
                lVar11 = 0x3f;
                if (uVar27 != 0) {
                  for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                  }
                }
                iVar5 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
                if (iVar23 <= iVar5) {
                  iVar5 = iVar23;
                }
              }
            } while (iVar5 != iVar4);
          }
        }
LAB_14420f277:
        uVar35 = (uint)local_1a0 & ~(uint)local_188;
        puVar38 = *(uint **)(local_1b0 + 0x148);
        if (*(uint **)(local_1b0 + 0x148) == (uint *)0x0) {
          puVar38 = local_190;
        }
        uVar18 = *(uint *)(local_1b0 + 0x150);
        iVar5 = (int)local_198;
        lVar34 = (longlong)iVar5;
        uVar22 = puVar38[lVar34] & uVar35;
        iVar4 = (uint)local_170;
        if (uVar22 == 0) {
          iVar6 = uVar18 + 0x1e;
          if (-1 < (int)(uVar18 - 1)) {
            iVar6 = uVar18 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar4 = (uint)local_170 + 0x20;
          iVar23 = iVar6;
          if (iVar6 < iVar5) {
            iVar23 = iVar5;
          }
          if (iVar5 < iVar6) {
            lVar11 = 0;
            do {
              uVar22 = puVar38[lVar34 + lVar11 + 1];
              if (uVar22 != 0) {
                local_198 = (int *)(ulonglong)(iVar5 + (int)lVar11 + 1);
                uVar35 = 0xffffffff;
                goto LAB_14420f31f;
              }
              iVar4 = iVar4 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar23 - lVar34 != lVar11);
            uVar35 = 0xffffffff;
            lVar34 = (longlong)iVar23;
          }
          local_198 = (int *)(lVar34 + 1);
          puVar38 = local_188;
          uVar22 = uVar18;
        }
        else {
LAB_14420f31f:
          puVar38 = (uint *)(ulonglong)(-uVar22 & uVar22);
          uVar45 = (longlong)puVar38 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar45 != 0) {
            for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          uVar22 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if ((int)uVar18 <= (int)uVar22) {
            uVar22 = uVar18;
          }
        }
      } while (uVar22 != (uint)local_180);
      uVar35 = *(uint *)(local_1b0 + 0x2e0);
      puVar41 = local_178;
    }
LAB_14420f4fa:
    param_1 = local_1b0;
    if ((int)uVar35 < 4) {
      pbVar13 = (byte *)*puVar41;
      plVar12 = &DAT_14c9a1288;
      if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
        plVar12 = (longlong *)(*(longlong *)(pbVar13 + 8) + 0x18);
      }
      if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
        plVar42 = plVar12 + 8;
        if ((longlong *)plVar12[9] != (longlong *)0x0) {
          plVar42 = (longlong *)plVar12[9];
        }
        iVar4 = *(int *)((longlong)plVar42 + (ulonglong)((int)plVar12[10] - 1U & DAT_14cbd13a8) * 4)
        ;
        if (iVar4 != -1) {
          do {
            lVar34 = *plVar12 + (longlong)iVar4 * 0x40;
            if (*(uint *)(*plVar12 + (longlong)iVar4 * 0x40) == DAT_14cbd13a8) {
              puVar44 = (undefined8 *)(lVar34 + 0x28);
              if (((puVar44 != (undefined8 *)0x0 && lVar34 != 0) &&
                  ((byte *)*puVar44 != (byte *)0x0)) && ((*(byte *)*puVar44 & 0x6b) == 3)) {
                pbVar13 = *(byte **)(local_1b0 + 0x28);
                puVar20 = &DAT_14c9a1288;
                if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
                  puVar20 = (undefined8 *)(*(longlong *)(pbVar13 + 8) + 0x18);
                }
                puVar20 = (undefined8 *)FUN_140f903f2(puVar20,DAT_14cbd13a8,&DAT_14cbd13a8);
                if (((byte *)*puVar20 == (byte *)0x0) || ((~*(byte *)*puVar20 & 3) != 0)) {
                  FUN_14009b010(puVar20,3,0);
                }
                plVar12 = (longlong *)FUN_1442124ee(puVar44);
                param_1 = local_1b0;
                if (plVar12 != (longlong *)0x0) {
                  pbVar13 = (byte *)*puVar20;
                  puVar44 = &DAT_14c9a1288;
                  if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
                    puVar44 = (undefined8 *)(*(longlong *)(pbVar13 + 8) + 0x18);
                  }
                  FUN_140f903f2(puVar44,DAT_14cbd2850,&DAT_14cbd2850);
                  uVar35 = DAT_14cbd2850;
                  plVar42 = (longlong *)(local_1b0 + 0x278);
                  iVar4 = *(int *)(local_1b0 + 0x280);
                  iVar5 = *(int *)(local_1b0 + 0x2ac);
                  if (iVar4 == iVar5) goto LAB_14420fa12;
                  lVar34 = local_1b0 + 0x2b0;
                  if (*(longlong *)(local_1b0 + 0x2b8) != 0) {
                    lVar34 = *(longlong *)(local_1b0 + 0x2b8);
                  }
                  iVar6 = *(int *)(lVar34 + (ulonglong)
                                            (*(int *)(local_1b0 + 0x2c0) - 1U & DAT_14cbd2850) * 4);
                  if (iVar6 == -1) goto LAB_14420fa12;
                  goto LAB_14420f6b2;
                }
              }
              break;
            }
            iVar4 = *(int *)(lVar34 + 0x38);
          } while (iVar4 != -1);
        }
      }
LAB_144210310:
      uVar35 = *(uint *)(param_1 + 0x2e0);
    }
  }
LAB_144210317:
  if (((int)uVar35 < 7) && (lVar34 = FUN_144211668(), param_1 = local_1b0, lVar34 != 0)) {
    local_1b8 = &DAT_14cbd25c8;
    FUN_1442117be(local_1b0,lVar34,&DAT_14cbd25a0,local_1b0 + 0xd8);
    param_1 = local_1b0;
  }
LAB_14420d9da:
  iVar4 = *(int *)(param_1 + 0x2cc) + 1;
  *(int *)(param_1 + 0x2cc) = iVar4;
  if (iVar4 < *(int *)(param_1 + 0x2c8)) {
    if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  uVar35 = *(uint *)(param_1 + 0x2e0);
  if ((int)uVar35 < 1) {
    local_118 = 0;
    plStack_110 = (longlong *)0x0;
    uVar45 = 0;
    FUN_14009b010(&local_118,3,0);
    local_128 = &DAT_14cb78920;
    local_120 = &DAT_14cb789c0;
    local_12c = 0;
    FUN_143d1b176(&local_128,&local_118,&local_12c,param_1 + 0x178);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      local_1b8 = (undefined *)((ulonglong)local_1b8 & 0xffffffffffffff00);
      FUN_14014191c(*(longlong *)(param_1 + 0x28),&DAT_14cb78700,&local_118,0);
    }
    local_98 = (byte *)0x0;
    plStack_90 = (longlong *)0x0;
    FUN_14009b010(&local_98,3,0);
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    FUN_14009b010(&local_108,2,0);
    puVar38 = (uint *)(local_1b0 + 0x1e8);
    iVar4 = *(int *)(local_1b0 + 0x200);
    if (iVar4 == 0) {
      uVar43 = 1;
      iVar6 = 0;
      iVar5 = 0;
    }
    else {
      puVar37 = *(uint **)(local_1b0 + 0x1f8);
      if (*(uint **)(local_1b0 + 0x1f8) == (uint *)0x0) {
        puVar37 = puVar38;
      }
      uVar35 = *puVar37;
      if (uVar35 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar45 = 0;
        uVar43 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar43 = uVar45;
        }
        iVar6 = 0;
        do {
          if (uVar43 == uVar45) goto LAB_14420db86;
          iVar6 = iVar6 + 0x20;
          uVar35 = puVar37[uVar45 + 1];
          uVar45 = uVar45 + 1;
        } while (uVar35 == 0);
      }
      else {
        uVar45 = 0;
        iVar6 = 0;
      }
      uVar43 = (ulonglong)(-uVar35 & uVar35);
      uVar27 = uVar43 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      iVar5 = (iVar6 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 != iVar4) {
      uVar35 = 0xffffffff;
      do {
        puVar41 = (undefined8 *)(*(longlong *)(local_1b0 + 0x1d8) + (longlong)iVar5 * 0x28);
        local_d0 = 0;
        pplStack_c8 = (longlong **)0x0;
        puStack_e0 = (undefined4 *)0x0;
        plStack_d8 = (longlong *)0x0;
        local_e8 = (undefined4 *)*puVar41;
        FUN_1410fe196(&local_e8,puVar41 + 1,
                      *(longlong *)(local_1b0 + 0x1d8) + (longlong)iVar5 * 0x28 + 0x10);
        local_88 = (byte **)0x0;
        uStack_80 = (longlong **)0x0;
        FUN_14009b010(&local_88,3,0);
        FUN_14187f36a(&local_e8,&local_88);
        if (local_108 != 0) {
          local_1b8 = (undefined *)((ulonglong)local_1b8 & 0xffffffffffffff00);
          FUN_140141db6(local_108,&local_88,0,0);
        }
        pplVar15 = uStack_80;
        if (uStack_80 != (longlong **)0x0) {
          LOCK();
          pplVar1 = uStack_80 + 1;
          *(int *)pplVar1 = *(int *)pplVar1 + -1;
          UNLOCK();
          if (*(int *)pplVar1 == 0) {
            (*(code *)**uStack_80)(uStack_80);
            LOCK();
            piVar29 = (int *)((longlong)pplVar15 + 0xc);
            *piVar29 = *piVar29 + -1;
            UNLOCK();
            if (*piVar29 == 0) {
              (*(code *)(*pplVar15)[2])(pplVar15);
            }
          }
        }
        if (local_d0 != 0) {
          FUN_1400020a8();
        }
        uVar35 = uVar35 & ~(uint)uVar43;
        puVar37 = *(uint **)(local_1b0 + 0x1f8);
        if (*(uint **)(local_1b0 + 0x1f8) == (uint *)0x0) {
          puVar37 = puVar38;
        }
        iVar23 = *(int *)(local_1b0 + 0x200);
        iVar5 = (int)uVar45;
        lVar34 = (longlong)iVar5;
        uVar18 = puVar37[lVar34] & uVar35;
        if (uVar18 == 0) {
          iVar17 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar17 = iVar23 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar6 = iVar6 + 0x20;
          iVar8 = iVar17;
          if (iVar17 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar5 < iVar17) {
            lVar11 = 0;
            do {
              uVar18 = puVar37[lVar34 + lVar11 + 1];
              if (uVar18 != 0) {
                uVar45 = (ulonglong)(iVar5 + (int)lVar11 + 1);
                uVar35 = 0xffffffff;
                goto LAB_14420e52a;
              }
              iVar6 = iVar6 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar8 - lVar34 != lVar11);
            uVar35 = 0xffffffff;
            iVar5 = iVar8;
          }
          uVar45 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar23;
        }
        else {
LAB_14420e52a:
          uVar43 = (ulonglong)(-uVar18 & uVar18);
          uVar27 = uVar43 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          iVar5 = (iVar6 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if (iVar23 <= iVar5) {
            iVar5 = iVar23;
          }
        }
      } while (iVar5 != iVar4);
    }
LAB_14420db86:
    if (local_98 != (byte *)0x0) {
      local_1b8 = (undefined *)((ulonglong)local_1b8 & 0xffffffffffffff00);
      FUN_14014191c(local_98,&DAT_14cb7be88,&local_108,0);
      if ((local_98 != (byte *)0x0) && ((~*local_98 & 3) == 0)) {
        lVar34 = *(longlong *)(local_98 + 8);
        puStack_e0 = &local_ec;
        local_ec = 1;
        local_e8 = &DAT_14cb7be60;
        FUN_14049fede(lVar34 + 0x18,&local_88,&local_e8,0);
        if (*(longlong *)
             (*(longlong *)(lVar34 + 0x18) + 0x28 + (longlong)(int)(uint)local_88 * 0x40) != 0) {
          FUN_1404a8912();
        }
      }
    }
    if (*(longlong *)(local_1b0 + 0x28) != 0) {
      local_1b8 = (undefined *)((ulonglong)local_1b8 & 0xffffffffffffff00);
      FUN_14014191c(*(longlong *)(local_1b0 + 0x28),&DAT_14cb78728,&local_98,0);
    }
    plVar12 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar42 = plStack_100 + 1;
      *(int *)plVar42 = (int)*plVar42 + -1;
      UNLOCK();
      if ((int)*plVar42 == 0) {
        (**(code **)*plStack_100)();
        LOCK();
        piVar29 = (int *)((longlong)plVar12 + 0xc);
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (*piVar29 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
      }
    }
    plVar12 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar42 = plStack_90 + 1;
      *(int *)plVar42 = (int)*plVar42 + -1;
      UNLOCK();
      if ((int)*plVar42 == 0) {
        (**(code **)*plStack_90)();
        LOCK();
        piVar29 = (int *)((longlong)plVar12 + 0xc);
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        if (*piVar29 == 0) {
          (**(code **)(*plVar12 + 0x10))();
        }
      }
    }
    plVar12 = plStack_110;
    param_1 = local_1b0;
    if (plStack_110 != (longlong *)0x0) {
      LOCK();
      plVar42 = plStack_110 + 1;
      *(int *)plVar42 = (int)*plVar42 + -1;
      UNLOCK();
      if ((int)*plVar42 == 0) {
        (**(code **)*plStack_110)();
        LOCK();
        piVar29 = (int *)((longlong)plVar12 + 0xc);
        *piVar29 = *piVar29 + -1;
        UNLOCK();
        param_1 = local_1b0;
        if (*piVar29 == 0) {
          (**(code **)(*plVar12 + 0x10))();
          param_1 = local_1b0;
        }
      }
    }
  }
  else if (5 < uVar35) goto LAB_14420e82e;
  puVar38 = (uint *)(param_1 + 0x98);
  uVar35 = *(uint *)(param_1 + 0xb0);
  if (uVar35 == 0) {
    puVar37 = (uint *)&DAT_00000001;
    plVar12 = (longlong *)0x0;
    iVar4 = 0;
    uVar18 = 0;
  }
  else {
    puVar37 = *(uint **)(param_1 + 0xa8);
    if (*(uint **)(param_1 + 0xa8) == (uint *)0x0) {
      puVar37 = puVar38;
    }
    uVar18 = *puVar37;
    if (uVar18 == 0) {
      iVar4 = uVar35 + 0x1e;
      if (-1 < (int)(uVar35 - 1)) {
        iVar4 = uVar35 - 1;
      }
      plVar12 = (longlong *)0x0;
      plVar42 = (longlong *)(ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        plVar42 = plVar12;
      }
      iVar4 = 0;
      do {
        if (plVar42 == plVar12) goto LAB_14420dd72;
        iVar4 = iVar4 + 0x20;
        uVar18 = puVar37[(longlong)plVar12 + 1];
        plVar12 = (longlong *)((longlong)plVar12 + 1);
      } while (uVar18 == 0);
    }
    else {
      plVar12 = (longlong *)0x0;
      iVar4 = 0;
    }
    puVar37 = (uint *)(ulonglong)(-uVar18 & uVar18);
    uVar45 = (longlong)puVar37 * 2 + 1;
    lVar34 = 0x3f;
    if (uVar45 != 0) {
      for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar18 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
    if ((int)uVar35 <= (int)uVar18) {
      uVar18 = uVar35;
    }
  }
  if (uVar18 != uVar35) {
    local_198 = (int *)(param_1 + 0x70);
    uVar22 = 0xffffffff;
    local_160 = (ulonglong)uVar35;
    local_158 = puVar38;
LAB_14420de3f:
    lVar34 = *(longlong *)(param_1 + 0x88) + (longlong)(int)uVar18 * 0x80;
    lVar11 = *(longlong *)(param_1 + 0x88) + (longlong)(int)uVar18 * 0x80;
    puVar40 = (uint *)(lVar11 + 0x38);
    uVar18 = *(uint *)(lVar11 + 0x50);
    plVar42 = (longlong *)(ulonglong)uVar18;
    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,iVar4);
    local_1a0 = (longlong *)CONCAT44(local_1a0._4_4_,uVar22);
    local_188 = puVar37;
    local_170 = plVar12;
    if (uVar18 == 0) {
      uVar43 = 1;
      uVar45 = 0;
      iVar4 = 0;
      uVar22 = 0;
    }
    else {
      puVar37 = *(uint **)(lVar34 + 0x48);
      if (*(uint **)(lVar34 + 0x48) == (uint *)0x0) {
        puVar37 = puVar40;
      }
      uVar22 = *puVar37;
      if (uVar22 == 0) {
        iVar4 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar4 = uVar18 - 1;
        }
        uVar45 = 0;
        uVar43 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar43 = uVar45;
        }
        iVar4 = 0;
        do {
          if (uVar43 == uVar45) goto LAB_14420e2da;
          iVar4 = iVar4 + 0x20;
          uVar22 = puVar37[uVar45 + 1];
          uVar45 = uVar45 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar45 = 0;
        iVar4 = 0;
      }
      uVar43 = (ulonglong)(-uVar22 & uVar22);
      uVar27 = uVar43 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar22 = (iVar4 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)uVar18 <= (int)uVar22) {
        uVar22 = uVar18;
      }
    }
    if (uVar22 != uVar18) {
      uVar35 = 0xffffffff;
      local_1a8 = plVar42;
LAB_14420df0b:
      if (*(longlong *)(param_1 + 0x2d8) != 0) {
        iVar5 = *(int *)(*(longlong *)(lVar34 + 0x28) + 0x28 + (longlong)(int)uVar22 * 0x38);
        FUN_1442121e0(param_1,&local_88,lVar34,
                      *(longlong *)(lVar34 + 0x28) + (longlong)(int)uVar22 * 0x38);
        if (*(int *)(local_1b0 + 0x40) != *(int *)(local_1b0 + 0x6c)) {
          piVar29 = *(int **)(local_1b0 + 0x78);
          if (*(int **)(local_1b0 + 0x78) == (int *)0x0) {
            piVar29 = local_198;
          }
          iVar6 = piVar29[*(int *)(local_1b0 + 0x80) - 1U & (uint)local_88];
          if (iVar6 != -1) {
            do {
              lVar11 = *(longlong *)(local_1b0 + 0x38) + (longlong)iVar6 * 0x38;
              if (*(uint *)(*(longlong *)(local_1b0 + 0x38) + (longlong)iVar6 * 0x38) ==
                  (uint)local_88) {
                if (((longlong *)(lVar11 + 0x28) != (longlong *)0x0 && lVar11 != 0) &&
                   (plVar12 = *(longlong **)(lVar11 + 0x28), plVar12 != (longlong *)0x0)) {
                  local_180 = plVar12;
                  if ((longlong)(int)plVar12[0x94] == 0) goto LAB_14420e0a9;
                  puVar33 = (ulonglong *)plVar12[0x93];
                  local_168 = puVar33 + (longlong)(int)plVar12[0x94] * 10;
                  goto LAB_14420dfee;
                }
                break;
              }
              iVar6 = *(int *)(lVar11 + 0x30);
            } while (iVar6 != -1);
          }
        }
        goto LAB_14420e1c1;
      }
      goto LAB_14420e1dc;
    }
    goto LAB_14420e2da;
  }
LAB_14420dd72:
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    pbVar13 = *(byte **)(param_1 + 0x28);
    puVar41 = &DAT_14c9a1288;
    if ((pbVar13 != (byte *)0x0) && ((*pbVar13 & 2) != 0)) {
      puVar41 = (undefined8 *)(*(longlong *)(pbVar13 + 8) + 0x18);
    }
    puVar41 = (undefined8 *)FUN_140f903f2(puVar41,DAT_14cb89d18,&DAT_14cb89d18);
    pbVar13 = (byte *)*puVar41;
    if ((pbVar13 == (byte *)0x0) || (bVar16 = *pbVar13, (~bVar16 & 3) != 0)) {
      FUN_14009b010(puVar41,3,0);
      pbVar13 = (byte *)*puVar41;
      if (pbVar13 != (byte *)0x0) {
        bVar16 = *pbVar13;
        goto LAB_14420eeaa;
      }
LAB_1442103e1:
      puVar41 = &DAT_14c9a1288;
    }
    else {
LAB_14420eeaa:
      if ((bVar16 & 2) == 0) goto LAB_1442103e1;
      puVar41 = (undefined8 *)(*(longlong *)(pbVar13 + 8) + 0x18);
    }
    puVar41 = (undefined8 *)FUN_140f903f2(puVar41,DAT_14cb89d40,&DAT_14cb89d40);
    if (((byte *)*puVar41 == (byte *)0x0) || ((~*(byte *)*puVar41 & 3) != 0)) {
      FUN_14009b010(puVar41,3,0);
    }
    param_1 = local_1b0;
    FUN_14884389e();
  }
  uVar35 = *(uint *)(param_1 + 0x2e0);
  if ((int)uVar35 < 5) {
    puVar38 = (uint *)(param_1 + 0x138);
    uVar18 = *(uint *)(param_1 + 0x150);
    plVar12 = (longlong *)(ulonglong)uVar18;
    if (uVar18 == 0) {
      uVar45 = 1;
      plVar42 = (longlong *)0x0;
      iVar4 = 0;
      uVar22 = 0;
    }
    else {
      puVar37 = *(uint **)(param_1 + 0x148);
      if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
        puVar37 = puVar38;
      }
      uVar22 = *puVar37;
      if (uVar22 == 0) {
        iVar4 = uVar18 + 0x1e;
        if (-1 < (int)(uVar18 - 1)) {
          iVar4 = uVar18 - 1;
        }
        plVar42 = (longlong *)0x0;
        plVar24 = (longlong *)(ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          plVar24 = plVar42;
        }
        iVar4 = 0;
        do {
          if (plVar24 == plVar42) goto LAB_14420e82e;
          iVar4 = iVar4 + 0x20;
          uVar22 = puVar37[(longlong)plVar42 + 1];
          plVar42 = (longlong *)((longlong)plVar42 + 1);
        } while (uVar22 == 0);
      }
      else {
        plVar42 = (longlong *)0x0;
        iVar4 = 0;
      }
      uVar45 = (ulonglong)(-uVar22 & uVar22);
      uVar43 = uVar45 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar43 != 0) {
        for (; uVar43 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      uVar22 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if ((int)uVar18 <= (int)uVar22) {
        uVar22 = uVar18;
      }
    }
    if (uVar22 != uVar18) {
      uVar35 = 0xffffffff;
      local_1a0 = plVar12;
      local_188 = puVar38;
      do {
        lVar34 = *(longlong *)(param_1 + 0x128);
        lVar11 = (longlong)(int)uVar22 * 0x80;
        puVar37 = (uint *)(lVar34 + lVar11 + 0x38);
        iVar5 = *(int *)(lVar34 + lVar11 + 0x50);
        local_170 = (longlong *)CONCAT44(local_170._4_4_,iVar4);
        local_198 = (int *)CONCAT44(local_198._4_4_,uVar35);
        local_1a8 = plVar42;
        if (iVar5 == 0) {
          uVar27 = 1;
          uVar43 = 0;
          iVar6 = 0;
          iVar4 = 0;
        }
        else {
          puVar40 = *(uint **)(lVar34 + 0x48 + lVar11);
          if (puVar40 == (uint *)0x0) {
            puVar40 = puVar37;
          }
          uVar35 = *puVar40;
          if (uVar35 == 0) {
            iVar4 = iVar5 + 0x1e;
            if (-1 < iVar5 + -1) {
              iVar4 = iVar5 + -1;
            }
            uVar43 = 0;
            uVar27 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar27 = uVar43;
            }
            iVar6 = 0;
            do {
              if (uVar27 == uVar43) goto LAB_14420e74c;
              iVar6 = iVar6 + 0x20;
              uVar35 = puVar40[uVar43 + 1];
              uVar43 = uVar43 + 1;
            } while (uVar35 == 0);
          }
          else {
            uVar43 = 0;
            iVar6 = 0;
          }
          uVar27 = (ulonglong)(-uVar35 & uVar35);
          uVar32 = uVar27 * 2 + 1;
          lVar39 = 0x3f;
          if (uVar32 != 0) {
            for (; uVar32 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          iVar4 = (iVar6 - ((uint)lVar39 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar4) {
            iVar4 = iVar5;
          }
        }
        if (iVar4 != iVar5) {
          lVar34 = lVar34 + lVar11;
          uVar35 = 0xffffffff;
          iVar23 = iVar5;
          do {
            if (*(char *)(*(longlong *)(lVar34 + 0x28) + 0x38 + (longlong)iVar4 * 0x48) == '\x01') {
              FUN_144212782(param_1,*(undefined8 *)
                                     (*(longlong *)(lVar34 + 0x28) + 0x30 + (longlong)iVar4 * 0x48))
              ;
              iVar23 = *(int *)(lVar34 + 0x50);
              param_1 = local_1b0;
            }
            uVar35 = uVar35 & ~(uint)uVar27;
            puVar38 = *(uint **)(lVar34 + 0x48);
            if (*(uint **)(lVar34 + 0x48) == (uint *)0x0) {
              puVar38 = puVar37;
            }
            iVar4 = (int)uVar43;
            lVar11 = (longlong)iVar4;
            uVar18 = puVar38[lVar11] & uVar35;
            if (uVar18 == 0) {
              iVar17 = iVar23 + 0x1e;
              if (-1 < iVar23 + -1) {
                iVar17 = iVar23 + -1;
              }
              iVar17 = iVar17 >> 5;
              iVar6 = iVar6 + 0x20;
              iVar8 = iVar17;
              if (iVar17 < iVar4) {
                iVar8 = iVar4;
              }
              if (iVar4 < iVar17) {
                lVar39 = 0;
                do {
                  uVar18 = puVar38[lVar11 + lVar39 + 1];
                  if (uVar18 != 0) {
                    uVar43 = (ulonglong)(iVar4 + (int)lVar39 + 1);
                    uVar35 = 0xffffffff;
                    goto LAB_14420e6f8;
                  }
                  iVar6 = iVar6 + 0x20;
                  lVar39 = lVar39 + 1;
                } while (iVar8 - lVar11 != lVar39);
                uVar35 = 0xffffffff;
                iVar4 = iVar8;
              }
              uVar43 = (ulonglong)(iVar4 + 1);
              param_1 = local_1b0;
              iVar4 = iVar23;
            }
            else {
LAB_14420e6f8:
              uVar27 = (ulonglong)(-uVar18 & uVar18);
              uVar32 = uVar27 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar32 != 0) {
                for (; uVar32 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar4 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
              if (iVar23 <= iVar4) {
                iVar4 = iVar23;
              }
            }
          } while (iVar4 != iVar5);
          uVar18 = *(uint *)(param_1 + 0x150);
          puVar38 = local_188;
          plVar12 = local_1a0;
        }
LAB_14420e74c:
        uVar35 = (uint)local_198 & ~(uint)uVar45;
        puVar37 = *(uint **)(param_1 + 0x148);
        if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
          puVar37 = puVar38;
        }
        iVar5 = (int)local_1a8;
        lVar34 = (longlong)iVar5;
        uVar22 = puVar37[lVar34] & uVar35;
        plVar42 = local_1a8;
        iVar4 = (uint)local_170;
        if (uVar22 == 0) {
          iVar6 = uVar18 + 0x1e;
          if (-1 < (int)(uVar18 - 1)) {
            iVar6 = uVar18 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar4 = (uint)local_170 + 0x20;
          iVar23 = iVar6;
          if (iVar6 < iVar5) {
            iVar23 = iVar5;
          }
          if (iVar5 < iVar6) {
            lVar11 = 0;
            do {
              uVar22 = puVar37[lVar34 + lVar11 + 1];
              if (uVar22 != 0) {
                uVar35 = 0xffffffff;
                plVar42 = (longlong *)(ulonglong)(iVar5 + (int)lVar11 + 1);
                goto LAB_14420e7d3;
              }
              iVar4 = iVar4 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar23 - lVar34 != lVar11);
            uVar35 = 0xffffffff;
            lVar34 = (longlong)iVar23;
          }
          plVar42 = (longlong *)(lVar34 + 1U & 0xffffffff);
          param_1 = local_1b0;
          plVar12 = local_1a0;
          uVar22 = uVar18;
        }
        else {
LAB_14420e7d3:
          uVar45 = (ulonglong)(-uVar22 & uVar22);
          uVar43 = uVar45 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar43 != 0) {
            for (; uVar43 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          uVar22 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if ((int)uVar18 <= (int)uVar22) {
            uVar22 = uVar18;
          }
        }
      } while (uVar22 != (uint)plVar12);
      uVar35 = *(uint *)(param_1 + 0x2e0);
    }
  }
LAB_14420e82e:
  if ((int)uVar35 < 7) {
    puVar38 = (uint *)(param_1 + 0xe8);
    uVar35 = *(uint *)(param_1 + 0x100);
    if (uVar35 == 0) {
      uVar45 = 1;
      puVar41 = (undefined8 *)0x0;
      iVar4 = 0;
      uVar18 = 0;
    }
    else {
      puVar37 = *(uint **)(param_1 + 0xf8);
      if (*(uint **)(param_1 + 0xf8) == (uint *)0x0) {
        puVar37 = puVar38;
      }
      uVar18 = *puVar37;
      if (uVar18 == 0) {
        iVar4 = uVar35 + 0x1e;
        if (-1 < (int)(uVar35 - 1)) {
          iVar4 = uVar35 - 1;
        }
        puVar41 = (undefined8 *)0x0;
        puVar44 = (undefined8 *)(ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          puVar44 = puVar41;
        }
        iVar4 = 0;
        do {
          if (puVar44 == puVar41) goto LAB_14420e8cb;
          iVar4 = iVar4 + 0x20;
          uVar18 = puVar37[(longlong)puVar41 + 1];
          puVar41 = (undefined8 *)((longlong)puVar41 + 1);
        } while (uVar18 == 0);
      }
      else {
        puVar41 = (undefined8 *)0x0;
        iVar4 = 0;
      }
      uVar45 = (ulonglong)(-uVar18 & uVar18);
      uVar43 = uVar45 * 2 + 1;
      lVar34 = 0x3f;
      if (uVar43 != 0) {
        for (; uVar43 >> lVar34 == 0; lVar34 = lVar34 + -1) {
        }
      }
      uVar18 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
      if ((int)uVar35 <= (int)uVar18) {
        uVar18 = uVar35;
      }
    }
    if (uVar18 != uVar35) {
      local_1a0 = (longlong *)(param_1 + 0x28);
      uVar22 = 0xffffffff;
      local_150 = (int *)(ulonglong)uVar35;
      local_140 = puVar38;
      do {
        plVar12 = (longlong *)(*(longlong *)(param_1 + 0xd8) + (longlong)(int)uVar18 * 0x80);
        lVar34 = *(longlong *)(param_1 + 0xd8) + (longlong)(int)uVar18 * 0x80;
        puVar33 = (ulonglong *)(lVar34 + 0x38);
        uVar18 = *(uint *)(lVar34 + 0x50);
        local_190 = (uint *)CONCAT44(local_190._4_4_,iVar4);
        local_178 = puVar41;
        if (uVar18 == 0) {
          uVar43 = 1;
          local_1a8 = (longlong *)0x0;
          iVar4 = 0;
          uVar19 = 0;
        }
        else {
          puVar14 = (ulonglong *)plVar12[9];
          if ((ulonglong *)plVar12[9] == (ulonglong *)0x0) {
            puVar14 = puVar33;
          }
          uVar19 = (uint)*puVar14;
          if (uVar19 == 0) {
            iVar4 = uVar18 + 0x1e;
            if (-1 < (int)(uVar18 - 1)) {
              iVar4 = uVar18 - 1;
            }
            plVar42 = (longlong *)0x0;
            plVar24 = (longlong *)(ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              plVar24 = plVar42;
            }
            iVar4 = 0;
            do {
              if (plVar24 == plVar42) goto LAB_14420ec74;
              iVar4 = iVar4 + 0x20;
              uVar19 = *(uint *)((longlong)puVar14 + (longlong)plVar42 * 4 + 4);
              plVar42 = (longlong *)((longlong)plVar42 + 1);
            } while (uVar19 == 0);
          }
          else {
            local_1a8 = (longlong *)0x0;
            iVar4 = 0;
            plVar42 = local_1a8;
          }
          local_1a8 = plVar42;
          uVar43 = (ulonglong)(-uVar19 & uVar19);
          uVar27 = uVar43 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          uVar19 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if ((int)uVar18 <= (int)uVar19) {
            uVar19 = uVar18;
          }
        }
        if (uVar19 != uVar18) {
          local_158 = (uint *)(plVar12 + 1);
          uVar35 = 0xffffffff;
          local_180 = plVar12;
          local_168 = puVar33;
          local_160 = (ulonglong)uVar18;
          local_144 = uVar22;
          local_138 = uVar45;
          do {
            local_170 = (longlong *)CONCAT44(local_170._4_4_,uVar35);
            local_198 = (int *)CONCAT44(local_198._4_4_,iVar4);
            lVar34 = local_180[5];
            local_188 = (uint *)((longlong)(int)uVar19 * 0x38);
            local_98 = (byte *)CONCAT44(local_98._4_4_,
                                        *(undefined4 *)(lVar34 + 0x28 + (longlong)local_188));
            lVar11 = (longlong)*(int *)((longlong)local_180 + 4);
            puVar38 = local_158;
            if (1 < lVar11) {
              puVar38 = (uint *)local_180[3];
            }
            if (0 < *(int *)((longlong)local_180 + 0x24)) {
              puVar38 = (uint *)local_180[3];
            }
            plVar12 = local_1a0;
            if (lVar11 != 0) {
              lVar39 = 0;
              do {
                pbVar13 = (byte *)*plVar12;
                puVar41 = &DAT_14c9a1288;
                if ((pbVar13 != (byte *)0x0) && (puVar41 = &DAT_14c9a1288, (*pbVar13 & 2) != 0)) {
                  puVar41 = (undefined8 *)(*(longlong *)(pbVar13 + 8) + 0x18);
                }
                local_88 = *(byte ***)((longlong)puVar38 + lVar39);
                uStack_80 = (longlong **)
                            CONCAT44(uStack_80._4_4_,
                                     *(undefined4 *)((undefined8 *)((longlong)puVar38 + lVar39) + 1)
                                    );
                FUN_1448075d0(&local_e8,&local_88);
                plVar12 = (longlong *)
                          FUN_14884daa6(puVar41,(ulonglong)local_e8 & 0xffffffff,&local_e8);
                if (local_d0 != 0) {
                  FUN_1400020a8();
                }
                if (((byte *)*plVar12 == (byte *)0x0) || ((~*(byte *)*plVar12 & 3) != 0)) {
                  FUN_14009b010(plVar12,3,0);
                }
                lVar39 = lVar39 + 0xc;
              } while (lVar11 * 0xc != lVar39);
            }
            FUN_14884389e(plVar12,(undefined1 *)(lVar34 + (longlong)local_188),&local_98);
            uVar35 = (uint)local_170 & ~(uint)uVar43;
            puVar33 = (ulonglong *)local_180[9];
            if ((ulonglong *)local_180[9] == (ulonglong *)0x0) {
              puVar33 = local_168;
            }
            uVar18 = *(uint *)(local_180 + 10);
            iVar5 = (int)local_1a8;
            lVar34 = (longlong)iVar5;
            uVar22 = *(uint *)((longlong)puVar33 + lVar34 * 4) & uVar35;
            iVar4 = (uint)local_198;
            if (uVar22 == 0) {
              iVar6 = uVar18 + 0x1e;
              if (-1 < (int)(uVar18 - 1)) {
                iVar6 = uVar18 - 1;
              }
              iVar6 = iVar6 >> 5;
              iVar4 = (uint)local_198 + 0x20;
              iVar23 = iVar6;
              if (iVar6 < iVar5) {
                iVar23 = iVar5;
              }
              if (iVar5 < iVar6) {
                lVar11 = 0;
                do {
                  uVar22 = *(uint *)((longlong)puVar33 + lVar11 * 4 + lVar34 * 4 + 4);
                  if (uVar22 != 0) {
                    local_1a8 = (longlong *)(ulonglong)(iVar5 + (int)lVar11 + 1);
                    uVar35 = 0xffffffff;
                    goto LAB_14420eb39;
                  }
                  iVar4 = iVar4 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar23 - lVar34 != lVar11);
                uVar35 = 0xffffffff;
                lVar34 = (longlong)iVar23;
              }
              local_1a8 = (longlong *)(lVar34 + 1);
              uVar19 = uVar18;
            }
            else {
LAB_14420eb39:
              uVar43 = (ulonglong)(-uVar22 & uVar22);
              uVar45 = uVar43 * 2 + 1;
              lVar34 = 0x3f;
              if (uVar45 != 0) {
                for (; uVar45 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                }
              }
              uVar19 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
              if ((int)uVar18 <= (int)uVar19) {
                uVar19 = uVar18;
              }
            }
          } while (uVar19 != (uint)local_160);
          uVar35 = *(uint *)(local_1b0 + 0x100);
          puVar38 = local_140;
          param_1 = local_1b0;
          uVar45 = local_138;
          uVar22 = local_144;
        }
LAB_14420ec74:
        uVar22 = uVar22 & ~(uint)uVar45;
        puVar37 = *(uint **)(param_1 + 0xf8);
        if (*(uint **)(param_1 + 0xf8) == (uint *)0x0) {
          puVar37 = puVar38;
        }
        iVar5 = (int)local_178;
        lVar34 = (longlong)iVar5;
        uVar18 = puVar37[lVar34] & uVar22;
        puVar41 = local_178;
        iVar4 = (int)local_190;
        if (uVar18 == 0) {
          iVar6 = uVar35 + 0x1e;
          if (-1 < (int)(uVar35 - 1)) {
            iVar6 = uVar35 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar4 = (int)local_190 + 0x20;
          iVar23 = iVar6;
          if (iVar6 < iVar5) {
            iVar23 = iVar5;
          }
          if (iVar5 < iVar6) {
            lVar11 = 0;
            do {
              uVar18 = puVar37[lVar34 + lVar11 + 1];
              if (uVar18 != 0) {
                uVar22 = 0xffffffff;
                puVar41 = (undefined8 *)(ulonglong)(iVar5 + (int)lVar11 + 1);
                goto LAB_14420ecfd;
              }
              iVar4 = iVar4 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar23 - lVar34 != lVar11);
            uVar22 = 0xffffffff;
            iVar5 = iVar23;
          }
          puVar41 = (undefined8 *)(ulonglong)(iVar5 + 1);
          param_1 = local_1b0;
          uVar18 = uVar35;
        }
        else {
LAB_14420ecfd:
          uVar45 = (ulonglong)(-uVar18 & uVar18);
          uVar43 = uVar45 * 2 + 1;
          lVar34 = 0x3f;
          if (uVar43 != 0) {
            for (; uVar43 >> lVar34 == 0; lVar34 = lVar34 + -1) {
            }
          }
          uVar18 = (iVar4 - ((uint)lVar34 ^ 0x3f)) + 0x3e;
          if ((int)uVar35 <= (int)uVar18) {
            uVar18 = uVar35;
          }
        }
      } while (uVar18 != (uint)local_150);
    }
  }
LAB_14420e8cb:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1d8);
}



// FUNCTION 144211636 FUN_144211636 body=50 status=ok
// SIG undefined FUN_144211636(void)

void FUN_144211636(void)

{
  longlong lVar1;
  
  lVar1 = 600;
  do {
    if (*(longlong *)((longlong)&DAT_14cbd25e0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x28;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 144211668 FUN_144211668 body=341 status=ok
// SIG undefined FUN_144211668(void)

undefined8 * FUN_144211668(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  uint local_60 [6];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = (longlong)*(int *)(param_2 + 4);
  puVar7 = (undefined8 *)(param_2 + 8);
  if (1 < lVar3) {
    puVar7 = *(undefined8 **)(param_2 + 0x18);
  }
  if (0 < *(int *)(param_2 + 0x24)) {
    puVar7 = *(undefined8 **)(param_2 + 0x18);
  }
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)((longlong)puVar7 + lVar3 * 0xc);
    puVar6 = (undefined8 *)0x0;
    do {
      if (((param_1 == (undefined8 *)0x0) || (pbVar2 = (byte *)*param_1, pbVar2 == (byte *)0x0)) ||
         ((*pbVar2 & 0x6b) != 3)) goto LAB_144211796;
      lVar3 = *(longlong *)(pbVar2 + 8);
      local_70 = *puVar7;
      local_68 = *(undefined4 *)(puVar7 + 1);
      FUN_1448075d0(local_60,&local_70);
      if (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54)) {
        lVar5 = lVar3 + 0x58;
        if (*(longlong *)(lVar3 + 0x60) != 0) {
          lVar5 = *(longlong *)(lVar3 + 0x60);
        }
        iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar3 + 0x68) - 1U & local_60[0]) * 4);
        if (iVar4 != -1) {
          do {
            lVar5 = *(longlong *)(lVar3 + 0x18) + (longlong)iVar4 * 0x40;
            if (*(uint *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar4 * 0x40) == local_60[0])
            goto LAB_14421174e;
            iVar4 = *(int *)(lVar5 + 0x38);
          } while (iVar4 != -1);
        }
      }
      lVar5 = 0;
LAB_14421174e:
      param_1 = (undefined8 *)(lVar5 + 0x28);
      if (lVar5 == 0) {
        param_1 = (undefined8 *)0x0;
      }
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
    } while (puVar7 != puVar1);
  }
  if ((param_1 == (undefined8 *)0x0) || ((byte *)*param_1 == (byte *)0x0)) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((*(byte *)*param_1 & 0x6b) == 3) {
      puVar6 = param_1;
    }
  }
LAB_144211796:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar6;
}



// FUNCTION 1442117be FUN_1442117be body=2592 status=ok
// SIG undefined FUN_1442117be(void)

void FUN_1442117be(undefined8 param_1,undefined8 *param_2,uint *param_3,longlong *param_4,
                  uint *param_5)

{
  int *_Src;
  void *_Dst;
  byte *pbVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong *plVar27;
  undefined1 auStack_148 [32];
  uint *local_128;
  ulonglong local_118;
  longlong *local_110;
  longlong *local_108;
  uint *local_100;
  uint *local_f8;
  ulonglong local_f0;
  uint *local_e8;
  uint local_dc;
  uint local_d8;
  int local_d4;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(byte *)*param_2 & 2) == 0) {
    plVar22 = &DAT_14c9a1288;
  }
  else {
    plVar22 = (longlong *)(*(longlong *)((byte *)*param_2 + 8) + 0x18);
  }
  puVar17 = (uint *)(plVar22 + 3);
  uVar15 = *(uint *)(plVar22 + 6);
  local_e8 = param_3;
  local_c0 = param_1;
  if (uVar15 == 0) {
    uVar24 = 1;
    uVar23 = 0;
    iVar14 = 0;
    uVar4 = 0;
  }
  else {
    puVar6 = (uint *)plVar22[5];
    if ((uint *)plVar22[5] == (uint *)0x0) {
      puVar6 = puVar17;
    }
    uVar4 = *puVar6;
    if (uVar4 == 0) {
      iVar14 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar14 = uVar15 - 1;
      }
      uVar23 = 0;
      uVar24 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar24 = uVar23;
      }
      iVar14 = 0;
      do {
        if (uVar24 == uVar23) goto LAB_14421189a;
        iVar14 = iVar14 + 0x20;
        uVar4 = puVar6[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar23 = 0;
      iVar14 = 0;
    }
    uVar24 = (ulonglong)(-uVar4 & uVar4);
    uVar25 = uVar24 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar4 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar4) {
      uVar4 = uVar15;
    }
  }
  if (uVar4 != uVar15) {
    local_108 = param_4 + 7;
    plVar27 = param_4 + 2;
    uVar16 = 0xffffffff;
    local_110 = plVar27;
    local_f8 = puVar17;
    local_d0 = plVar22;
    local_c8 = (ulonglong)uVar15;
    do {
      uVar2 = local_c0;
      lVar19 = *plVar22;
      lVar7 = (longlong)(int)uVar4 * 0x40;
      pbVar1 = *(byte **)(lVar19 + 0x28 + lVar7);
      if (pbVar1 != (byte *)0x0) {
        puVar6 = (uint *)(lVar19 + lVar7);
        uVar25 = lVar19 + lVar7 + 0x28;
        bVar8 = *pbVar1 & 0x6b;
        if (bVar8 == 1) {
          if ((param_5 == (uint *)0x0) || (*param_5 == *puVar6)) {
            uVar15 = *local_e8;
            uVar21 = *(uint *)(param_4 + 1);
            uVar10 = (ulonglong)uVar21;
            uVar4 = *(uint *)((longlong)param_4 + 0x34);
            local_f0 = uVar25;
            local_d8 = uVar16;
            local_d4 = iVar14;
            if (uVar21 != uVar4) {
              plVar22 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar22 = local_108;
              }
              iVar14 = *(int *)((longlong)plVar22 + (ulonglong)((int)param_4[9] - 1U & uVar15) * 4);
              if (iVar14 != -1) {
                do {
                  lVar19 = *param_4 + (longlong)iVar14 * 0x80;
                  if (*(uint *)(*param_4 + (longlong)iVar14 * 0x80) == uVar15) {
                    if (lVar19 != 0) goto LAB_144211d03;
                    break;
                  }
                  iVar14 = *(int *)(lVar19 + 0x78);
                } while (iVar14 != -1);
              }
            }
            local_100 = puVar6;
            local_dc = uVar15;
            if (uVar4 == 0) {
              *(uint *)(param_4 + 1) = uVar21 + 1;
              if (*(uint *)((longlong)param_4 + 0xc) == uVar21) {
                FUN_140eca382(param_4,uVar10);
              }
              iVar14 = (int)param_4[5];
              if (iVar14 == 0) {
                iVar11 = -1;
              }
              else {
                iVar11 = iVar14 + 0x1e;
                if (-1 < iVar14 + -1) {
                  iVar11 = iVar14 + -1;
                }
                iVar11 = iVar11 >> 5;
              }
              iVar9 = iVar14 + 1;
              iVar26 = iVar14 + 0x1f;
              if (-1 < iVar14) {
                iVar26 = iVar14;
              }
              if (iVar26 >> 5 == iVar11) {
                *(int *)(param_4 + 5) = iVar9;
              }
              else {
                local_118 = uVar10;
                if (*(int *)((longlong)param_4 + 0x2c) <= iVar14) {
                  iVar11 = iVar14;
                  if (iVar14 + 0x20U < 0xa0) {
                    iVar9 = 0x80;
                  }
                  else {
                    uVar15 = iVar14 + 0x20U >> 5;
                    if (*(int *)((longlong)param_4 + 0x2c) + 0x1fU < 0xa0) {
                      uVar4 = 4;
                      if (4 < uVar15) {
                        uVar4 = uVar15;
                      }
                    }
                    else {
                      uVar4 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
                    }
                    uVar25 = (ulonglong)(uVar4 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar16 = (uint)(uVar25 + 0xf);
                        if (uVar4 < 0x1ffd) {
                          uVar25 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar25 + 0xf >> 4]];
                        }
                        else {
                          uVar10 = (ulonglong)(uVar16 & 0xfffffff0);
                          if (uVar10 < 0x7ff1) {
                            bVar8 = (&DAT_14c841e00)[uVar16 >> 4];
                            uVar13 = 0x32;
                            if (0x32 < bVar8) {
                              uVar13 = (ulonglong)bVar8;
                            }
                            uVar20 = 0x32 - (ulonglong)bVar8;
                            do {
                              uVar25 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar20 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar20 & 0xffffffff] & 0xf) == 0)
                              goto LAB_1442120c5;
                              lVar19 = uVar13 + 1 + uVar20;
                              uVar20 = uVar20 - 1;
                            } while (lVar19 != 0x33);
                          }
                          uVar25 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar25 = 0x10;
                          }
                          uVar25 = -uVar25 & (uVar10 + uVar25) - 1;
                        }
                      }
                      else {
                        uVar25 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar25,0);
                        iVar11 = (int)param_4[5];
                      }
                    }
LAB_1442120c5:
                    iVar5 = (int)(uVar25 >> 2);
                    iVar9 = iVar5 << 5;
                    if (iVar5 < (int)uVar15) {
                      iVar9 = -0x20;
                    }
                  }
                  *(int *)((longlong)param_4 + 0x2c) = iVar9;
                  FUN_1446efbd8(plVar27,iVar11);
                  iVar9 = (int)param_4[5] + 1;
                }
                uVar21 = (uint)local_118;
                iVar11 = iVar9 + 0x1f;
                if (-1 < iVar9) {
                  iVar11 = iVar9;
                }
                *(int *)(param_4 + 5) = iVar9;
                if (iVar9 % 0x20 != 0) {
                  plVar22 = (longlong *)param_4[4];
                  if ((longlong *)param_4[4] == (longlong *)0x0) {
                    plVar22 = plVar27;
                  }
                  bVar8 = -(char)(iVar9 % 0x20);
                  *(uint *)((longlong)plVar22 + (longlong)(iVar11 >> 5) * 4) =
                       (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar11 >> 5) * 4) <<
                             (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
                }
              }
              lVar19 = (longlong)(int)uVar21;
              plVar22 = (longlong *)param_4[4];
              if ((longlong *)param_4[4] == (longlong *)0x0) {
                plVar22 = plVar27;
              }
              bVar8 = (byte)iVar14 & 0x1f;
              puVar17 = (uint *)((longlong)plVar22 + (longlong)(iVar26 >> 5) * 4);
              *puVar17 = *puVar17 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
            }
            else {
              uVar21 = *(uint *)(param_4 + 6);
              lVar19 = (longlong)(int)uVar21;
              iVar14 = *(int *)(*param_4 + 4 + lVar19 * 0x80);
              *(int *)(param_4 + 6) = iVar14;
              *(uint *)((longlong)param_4 + 0x34) = uVar4 - 1;
              if (uVar4 - 1 != 0) {
                *(undefined4 *)(*param_4 + (longlong)iVar14 * 0x80) = 0xffffffff;
              }
            }
            uVar15 = 1 << ((byte)uVar21 & 0x1f);
            plVar22 = (longlong *)param_4[4];
            if ((longlong *)param_4[4] == (longlong *)0x0) {
              plVar22 = plVar27;
            }
            uVar4 = uVar21 + 0x1f;
            if (-1 < (int)uVar21) {
              uVar4 = uVar21;
            }
            local_118 = (ulonglong)((int)uVar4 >> 5);
            puVar17 = (uint *)((longlong)plVar22 + local_118 * 4);
            *puVar17 = *puVar17 | uVar15;
            lVar7 = *param_4;
            _Src = (int *)(lVar7 + lVar19 * 0x80);
            local_98 = 0;
            uStack_80 = 0;
            local_78 = 0;
            uStack_70 = 0;
            local_a8 = 0;
            uStack_a0 = 0;
            local_b8 = 0;
            lStack_b0 = 0;
            uStack_90 = 0x8000000000;
            local_88 = 0xffffffff;
            FUN_1447a97f4(_Src,local_e8);
            lVar7 = lVar7 + lVar19 * 0x80;
            *(undefined8 *)(lVar7 + 0x48) = 0;
            *(undefined4 *)(lVar7 + 0x50) = 0;
            *(undefined8 *)(lVar7 + 0x28) = 0;
            *(undefined8 *)(lVar7 + 0x30) = 0;
            *(undefined8 *)(lVar7 + 0x54) = 0xffffffff00000080;
            *(undefined4 *)(lVar7 + 0x5c) = 0;
            if ((undefined8 *)(lVar7 + 0x28) != &local_b8) {
              local_b8 = 0;
              lStack_b0 = 0;
              _Src[0xe] = (int)local_a8;
              _Src[0xf] = local_a8._4_4_;
              _Src[0x10] = (int)uStack_a0;
              _Src[0x11] = uStack_a0._4_4_;
              local_98 = 0;
              uStack_90 = 0;
              local_88 = 0xffffffff;
            }
            _Src[0x18] = 0;
            _Src[0x1a] = 0;
            _Src[0x1b] = 0;
            local_78 = 0;
            _Src[0x1c] = 0;
            uStack_70 = uStack_70 & 0xffffffff00000000;
            FUN_140c64cae();
            plVar27 = local_110;
            _Src[0x1e] = -1;
            uVar4 = (int)param_4[1] - *(int *)((longlong)param_4 + 0x34);
            if (1 < uVar4) {
              plVar22 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar22 = local_108;
              }
              iVar14 = *(int *)((longlong)plVar22 + (ulonglong)((int)param_4[9] - 1U & local_dc) * 4
                               );
              if (iVar14 != -1) {
                do {
                  _Dst = (void *)(*param_4 + (longlong)iVar14 * 0x80);
                  if (*(int *)(*param_4 + (longlong)iVar14 * 0x80) == *_Src) {
                    *(undefined4 *)((longlong)_Dst + 0x70) = 0;
                    if (*(longlong *)((longlong)_Dst + 0x68) != 0) {
                      FUN_1400020a8();
                    }
                    FUN_140c64cae((longlong)_Dst + 0x28);
                    if (*(longlong *)((longlong)_Dst + 0x18) != 0) {
                      FUN_1400020a8();
                    }
                    memmove(_Dst,_Src,0x78);
                    lVar19 = *param_4;
                    if (*(int *)((longlong)param_4 + 0x34) != 0) {
                      *(uint *)(lVar19 + (longlong)(int)param_4[6] * 0x80) = uVar21;
                    }
                    lVar7 = (longlong)(int)uVar21 * 0x80;
                    *(undefined4 *)(lVar19 + lVar7) = 0xffffffff;
                    uVar18 = 0xffffffff;
                    if (0 < *(int *)((longlong)param_4 + 0x34)) {
                      uVar18 = (undefined4)param_4[6];
                    }
                    *(undefined4 *)(lVar19 + 4 + lVar7) = uVar18;
                    *(uint *)(param_4 + 6) = uVar21;
                    *(int *)((longlong)param_4 + 0x34) = *(int *)((longlong)param_4 + 0x34) + 1;
                    plVar22 = (longlong *)param_4[4];
                    if ((longlong *)param_4[4] == (longlong *)0x0) {
                      plVar22 = local_110;
                    }
                    puVar17 = (uint *)((longlong)plVar22 + local_118 * 4);
                    *puVar17 = *puVar17 & (uVar15 ^ 0xffffffff);
                    plVar27 = local_110;
                    goto LAB_144211cf4;
                  }
                  iVar14 = *(int *)((longlong)_Dst + 0x78);
                } while (iVar14 != -1);
              }
            }
            iVar14 = 1;
            if (3 < uVar4) {
              uVar25 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
              lVar19 = 0x3f;
              if (uVar25 != 0) {
                for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              iVar14 = 1 << ((byte)lVar19 & 0x1f);
            }
            if (((int)uVar4 < 1) || (iVar14 <= (int)param_4[9])) {
              uVar15 = (int)param_4[9] - 1U & local_dc;
              _Src[0x1f] = uVar15;
              plVar22 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar22 = local_108;
              }
              _Src[0x1e] = *(int *)((longlong)plVar22 +
                                   ((longlong)(int)param_4[9] - 1U & (longlong)(int)uVar15) * 4);
              plVar22 = (longlong *)param_4[8];
              if ((longlong *)param_4[8] == (longlong *)0x0) {
                plVar22 = local_108;
              }
              *(uint *)((longlong)plVar22 +
                       ((longlong)(int)param_4[9] - 1U & (longlong)(int)uVar15) * 4) = uVar21;
            }
            else {
              *(int *)(param_4 + 9) = iVar14;
              FUN_14421ad06(param_4);
            }
LAB_144211cf4:
            lVar19 = *param_4 + (longlong)(int)uVar21 * 0x80;
            puVar6 = local_100;
LAB_144211d03:
            plVar22 = (longlong *)(lVar19 + 0x28);
            uVar15 = *puVar6;
            if (*(int *)(lVar19 + 0x30) != *(int *)(lVar19 + 0x5c)) {
              lVar7 = lVar19 + 0x60;
              if (*(longlong *)(lVar19 + 0x68) != 0) {
                lVar7 = *(longlong *)(lVar19 + 0x68);
              }
              iVar14 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar19 + 0x70) - 1U & uVar15) * 4);
              if (iVar14 != -1) {
                do {
                  lVar7 = *plVar22 + (longlong)iVar14 * 0x38;
                  if (*(uint *)(*plVar22 + (longlong)iVar14 * 0x38) == uVar15) {
                    if (lVar7 != 0) goto LAB_144211e43;
                    break;
                  }
                  iVar14 = *(int *)(lVar7 + 0x30);
                } while (iVar14 != -1);
              }
            }
            FUN_14709825a(plVar22,&local_b8);
            lVar7 = lStack_b0;
            FUN_1447a97f4(lStack_b0,puVar6);
            *(undefined4 *)(lVar7 + 0x28) = 0;
            *(undefined4 *)(lVar7 + 0x30) = 0xffffffff;
            iVar14 = (int)local_b8;
            local_128 = (uint *)0x0;
            cVar3 = FUN_14709833c(plVar22,uVar15,lVar7,&local_b8);
            if (cVar3 == '\0') {
              uVar4 = *(int *)(lVar19 + 0x30) - *(int *)(lVar19 + 0x5c);
              iVar11 = 1;
              if (3 < uVar4) {
                uVar25 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
                lVar12 = 0x3f;
                if (uVar25 != 0) {
                  for (; uVar25 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                iVar11 = 1 << ((byte)lVar12 & 0x1f);
              }
              if (((int)uVar4 < 1) || (iVar11 <= *(int *)(lVar19 + 0x70))) {
                uVar15 = *(int *)(lVar19 + 0x70) - 1U & uVar15;
                *(uint *)(lVar7 + 0x34) = uVar15;
                lVar12 = *(longlong *)(lVar19 + 0x68);
                if (*(longlong *)(lVar19 + 0x68) == 0) {
                  lVar12 = lVar19 + 0x60;
                }
                *(undefined4 *)(lVar7 + 0x30) =
                     *(undefined4 *)
                      (lVar12 + ((longlong)*(int *)(lVar19 + 0x70) - 1U & (longlong)(int)uVar15) * 4
                      );
                lVar7 = *(longlong *)(lVar19 + 0x68);
                if (*(longlong *)(lVar19 + 0x68) == 0) {
                  lVar7 = lVar19 + 0x60;
                }
                *(int *)(lVar7 + ((longlong)*(int *)(lVar19 + 0x70) - 1U & (longlong)(int)uVar15) *
                                 4) = iVar14;
              }
              else {
                *(int *)(lVar19 + 0x70) = iVar11;
                FUN_14709848a(plVar22);
              }
            }
            lVar7 = *plVar22 + (longlong)iVar14 * 0x38;
            plVar27 = local_110;
LAB_144211e43:
            iVar11 = FUN_140e1edd4(local_f0,0);
            iVar14 = *(int *)(lVar7 + 0x28);
            if (iVar14 < iVar11) {
              iVar14 = iVar11;
            }
            *(int *)(lVar7 + 0x28) = iVar14;
            puVar17 = local_f8;
            plVar22 = local_d0;
            iVar14 = local_d4;
            uVar16 = local_d8;
          }
        }
        else if (bVar8 == 3) {
          local_f0 = uVar24;
          FUN_1442121e0(local_c0,&local_b8,local_e8);
          local_128 = param_5;
          FUN_1442117be(uVar2,uVar25,&local_b8,param_4);
          puVar17 = local_f8;
          plVar22 = local_d0;
          uVar24 = local_f0;
          if (uStack_a0 != 0) {
            FUN_1400020a8();
            puVar17 = local_f8;
            plVar22 = local_d0;
            uVar24 = local_f0;
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar24;
      puVar6 = (uint *)plVar22[5];
      if ((uint *)plVar22[5] == (uint *)0x0) {
        puVar6 = puVar17;
      }
      uVar15 = *(uint *)(plVar22 + 6);
      iVar11 = (int)uVar23;
      lVar19 = (longlong)iVar11;
      uVar4 = puVar6[lVar19] & uVar16;
      if (uVar4 == 0) {
        iVar9 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar9 = uVar15 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar26 = iVar9;
        if (iVar9 < iVar11) {
          iVar26 = iVar11;
        }
        if (iVar11 < iVar9) {
          lVar7 = 0;
          do {
            uVar4 = puVar6[lVar19 + lVar7 + 1];
            if (uVar4 != 0) {
              uVar23 = (ulonglong)(iVar11 + (int)lVar7 + 1);
              uVar16 = 0xffffffff;
              goto LAB_144211eec;
            }
            iVar14 = iVar14 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar26 - lVar19 != lVar7);
          uVar16 = 0xffffffff;
          iVar11 = iVar26;
        }
        uVar23 = (ulonglong)(iVar11 + 1);
        puVar17 = local_f8;
        uVar4 = uVar15;
      }
      else {
LAB_144211eec:
        uVar24 = (ulonglong)(-uVar4 & uVar4);
        uVar25 = uVar24 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar4 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar4) {
          uVar4 = uVar15;
        }
      }
    } while (uVar4 != (uint)local_c8);
  }
LAB_14421189a:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442121e0 FUN_1442121e0 body=763 status=ok
// SIG undefined FUN_1442121e0(void)

undefined8 * FUN_1442121e0(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_158 [40];
  longlong local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar2 = *(int *)(param_3 + 4);
  lVar8 = param_3 + 8;
  if (1 < (longlong)iVar2) {
    lVar8 = *(longlong *)(param_3 + 0x18);
  }
  if (0 < *(int *)(param_3 + 0x24)) {
    lVar8 = *(longlong *)(param_3 + 0x18);
  }
  local_130 = (longlong)*(int *)(param_4 + 4);
  lVar10 = param_4 + 8;
  if (1 < local_130) {
    lVar10 = *(longlong *)(param_4 + 0x18);
  }
  if (0 < *(int *)(param_4 + 0x24)) {
    lVar10 = *(longlong *)(param_4 + 0x18);
  }
  iVar7 = *(int *)(param_4 + 4) + iVar2;
  if (-1 < iVar7) {
    plVar1 = (longlong *)(param_1 + 0x308);
    *(undefined4 *)(param_1 + 0x310) = 0;
    if (*(int *)(param_1 + 0x314) < iVar7) {
      FUN_1446dda88(plVar1);
    }
    if (iVar2 != 0) {
      lVar11 = 0;
      do {
        iVar7 = *(int *)(param_1 + 0x310);
        *(uint *)(param_1 + 0x310) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x314) < iVar7 + 1U) {
          FUN_1446dd912(plVar1,iVar7);
        }
        lVar3 = *plVar1;
        *(undefined4 *)(lVar3 + 8 + (longlong)iVar7 * 0xc) =
             *(undefined4 *)((undefined8 *)(lVar8 + lVar11) + 1);
        *(undefined8 *)(lVar3 + (longlong)iVar7 * 0xc) = *(undefined8 *)(lVar8 + lVar11);
        lVar11 = lVar11 + 0xc;
      } while ((longlong)iVar2 * 0xc != lVar11);
    }
    if ((int)local_130 != 0) {
      lVar8 = local_130 * 0xc;
      lVar11 = 0;
      do {
        iVar2 = *(int *)(param_1 + 0x310);
        *(uint *)(param_1 + 0x310) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x314) < iVar2 + 1U) {
          FUN_1446dd912(plVar1,iVar2);
        }
        lVar3 = *plVar1;
        *(undefined4 *)(lVar3 + 8 + (longlong)iVar2 * 0xc) =
             *(undefined4 *)((undefined8 *)(lVar10 + lVar11) + 1);
        *(undefined8 *)(lVar3 + (longlong)iVar2 * 0xc) = *(undefined8 *)(lVar10 + lVar11);
        lVar11 = lVar11 + 0xc;
      } while (lVar8 != lVar11);
    }
    local_128 = (void *)0x0;
    local_120 = *(int *)(param_1 + 0x310);
    lVar8 = (longlong)local_120;
    pvVar4 = *(void **)(param_1 + 0x308);
    if (lVar8 == 0) {
      local_11c = 0;
    }
    else {
      FUN_1446dd7be(&local_128,local_120,0);
      memcpy(local_128,pvVar4,lVar8 * 0xc);
    }
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0x1000000000;
    FUN_140094010();
    pvVar4 = local_128;
    lVar8 = (longlong)local_120;
    if (lVar8 == 0) {
      uVar9 = 0;
    }
    else {
      lVar10 = 0;
      do {
        uVar9 = local_50;
        lVar11 = (longlong)(int)local_50;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          FUN_1456b1fa2(local_118,uVar9 & 0xffffffff);
        }
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_118;
        }
        *(undefined4 *)(puVar6 + lVar11 * 0xc + 8) =
             *(undefined4 *)((undefined8 *)((longlong)pvVar4 + lVar10) + 1);
        *(undefined8 *)(puVar6 + lVar11 * 0xc) = *(undefined8 *)((longlong)pvVar4 + lVar10);
        lVar10 = lVar10 + 0xc;
      } while (lVar8 * 0xc != lVar10);
      uVar9 = local_50 & 0xffffffff;
    }
    FUN_1447a993c(param_2,uVar9);
    if (0 < (int)local_50) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        puVar6 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar6 = local_118;
        }
        FUN_140093fc6(param_2,uVar9 & 0xffffffff,puVar6 + lVar8);
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xc;
      } while ((longlong)uVar9 < (longlong)(int)local_50);
    }
    FUN_14009404e(param_2);
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_128 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
      return param_2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar7);
}



// FUNCTION 1442124ee FUN_1442124ee body=387 status=ok
// SIG undefined FUN_1442124ee(void)

longlong FUN_1442124ee(undefined8 *param_1,uint *param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  uint local_38 [6];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  plVar2 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    plVar2 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  if ((int)plVar2[2] != *(int *)((longlong)plVar2 + 0x3c)) {
    plVar5 = plVar2 + 8;
    if ((longlong *)plVar2[9] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar2[9];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[10] - 1U & *param_2) * 4);
    if (iVar6 != -1) {
      lVar3 = 0;
      do {
        lVar4 = *plVar2 + (longlong)iVar6 * 0x40;
        if (*(uint *)(*plVar2 + (longlong)iVar6 * 0x40) == *param_2) {
          if ((((undefined8 *)(lVar4 + 0x28) == (undefined8 *)0x0 || lVar4 == 0) ||
              (pbVar1 = *(byte **)(lVar4 + 0x28), pbVar1 == (byte *)0x0)) || ((*pbVar1 & 0x6b) != 3)
             ) goto LAB_144212619;
          lVar3 = *(longlong *)(pbVar1 + 8);
          local_40 = DAT_14cbd13d8;
          local_48 = DAT_14cbd13d0;
          FUN_1448075d0(local_38);
          if (*(int *)(lVar3 + 0x28) == *(int *)(lVar3 + 0x54)) goto LAB_14421260f;
          lVar4 = lVar3 + 0x58;
          if (*(longlong *)(lVar3 + 0x60) != 0) {
            lVar4 = *(longlong *)(lVar3 + 0x60);
          }
          iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar3 + 0x68) - 1U & local_38[0]) * 4);
          if (iVar6 == -1) goto LAB_14421260f;
          goto LAB_1442125f7;
        }
        iVar6 = *(int *)(lVar4 + 0x38);
      } while (iVar6 != -1);
      goto LAB_14421261b;
    }
  }
  goto LAB_144212619;
  while (iVar6 = *(int *)(lVar4 + 0x38), iVar6 != -1) {
LAB_1442125f7:
    lVar4 = *(longlong *)(lVar3 + 0x18) + (longlong)iVar6 * 0x40;
    if (*(uint *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar6 * 0x40) == local_38[0]) {
      if (local_20 != 0) {
        FUN_1400020a8();
      }
      if ((lVar4 == 0) || (*(byte **)(lVar4 + 0x28) == (byte *)0x0)) goto LAB_144212619;
      lVar3 = 0;
      if ((**(byte **)(lVar4 + 0x28) & 0x6b) == 2) {
        lVar3 = lVar4 + 0x28;
      }
      goto LAB_14421261b;
    }
  }
LAB_14421260f:
  if (local_20 != 0) {
    FUN_1400020a8();
  }
LAB_144212619:
  lVar3 = 0;
LAB_14421261b:
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 144212672 FUN_144212672 body=270 status=ok
// SIG undefined FUN_144212672(void)

undefined8 * FUN_144212672(undefined8 *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pbVar1 = (byte *)*param_1;
  puVar2 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    puVar2 = (undefined8 *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  puVar2 = (undefined8 *)FUN_140f903f2(puVar2,*param_2);
  pbVar1 = (byte *)*puVar2;
  if ((pbVar1 == (byte *)0x0) || ((~*pbVar1 & 3) != 0)) {
    FUN_14009b010(puVar2,3,0);
    pbVar1 = (byte *)*puVar2;
    if (pbVar1 != (byte *)0x0) goto LAB_1442126de;
  }
  else {
LAB_1442126de:
    if ((*pbVar1 & 2) != 0) {
      puVar2 = (undefined8 *)(*(longlong *)(pbVar1 + 8) + 0x18);
      goto LAB_1442126ef;
    }
  }
  puVar2 = &DAT_14c9a1288;
LAB_1442126ef:
  local_48 = DAT_14cbd13d8;
  local_50 = DAT_14cbd13d0;
  FUN_1448075d0(local_40);
  puVar2 = (undefined8 *)FUN_14884daa6(puVar2,local_40[0],local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (((byte *)*puVar2 == (byte *)0x0) || ((*(byte *)*puVar2 & 3) != 2)) {
    FUN_14009b010(puVar2,2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144212782 FUN_144212782 body=285 status=ok
// SIG undefined FUN_144212782(void)

void FUN_144212782(longlong param_1,longlong param_2)

{
  int iVar1;
  byte *pbVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  if ((param_2 != 0) && (DAT_14cb8d3c0 != 0)) {
    lVar4 = FUN_1409503e6();
    if (lVar4 != 0) {
      pbVar2 = *(byte **)(param_1 + 0x28);
      puVar5 = &DAT_14c9a1288;
      if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
        puVar5 = (undefined8 *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      puVar5 = (undefined8 *)FUN_140f903f2(puVar5,DAT_14cbd13a8,&DAT_14cbd13a8);
      if (((byte *)*puVar5 == (byte *)0x0) || ((~*(byte *)*puVar5 & 3) != 0)) {
        FUN_14009b010(puVar5,3,0);
      }
      puVar6 = *(undefined4 **)(lVar4 + 8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9485f0;
      }
      puVar5 = (undefined8 *)FUN_144212672(puVar5,puVar6);
      puVar6 = *(undefined4 **)(param_2 + 8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9485f0;
      }
      pbVar2 = (byte *)*puVar5;
      if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 2)) {
        plVar3 = *(longlong **)(pbVar2 + 8);
        iVar1 = (int)plVar3[2];
        *(uint *)(plVar3 + 2) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar3 + 0x14) < iVar1 + 1U) {
          FUN_14000961e(plVar3,iVar1);
        }
        lVar4 = *plVar3;
        lVar7 = (longlong)iVar1 * 0x10;
        *(undefined8 *)(lVar4 + lVar7) = 0;
        ((undefined8 *)(lVar4 + lVar7))[1] = 0;
        FUN_14009b010(lVar4 + lVar7,1,0);
        if (*(longlong *)(lVar4 + lVar7) != 0) {
          FUN_1402afb64(*(longlong *)(lVar4 + lVar7),puVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14421289f FUN_14421289f body=189 status=ok
// SIG undefined FUN_14421289f(void)

void FUN_14421289f(undefined8 *param_1,undefined4 param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar2 = (byte *)*param_1;
  if ((pbVar2 == (byte *)0x0) || ((~*pbVar2 & 3) != 0)) {
    FUN_14009b010(param_1,3,0);
    pbVar2 = (byte *)*param_1;
    if (pbVar2 == (byte *)0x0) goto LAB_14421293e;
  }
  if ((~*pbVar2 & 3) == 0) {
    lVar1 = *(longlong *)(pbVar2 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = &DAT_14cbd2878;
    FUN_14049fede(lVar1 + 0x18,&local_24,&local_38,0);
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x28 + (longlong)local_24 * 0x40);
    if (lVar1 != 0) {
      FUN_1404a8912(lVar1,param_2);
    }
  }
LAB_14421293e:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421296e FUN_14421296e body=308 status=ok
// SIG undefined FUN_14421296e(void)

undefined1 *
FUN_14421296e(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar5 = FUN_1400e8a68(param_4);
  if (lVar5 == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    return param_2;
  }
  plVar7 = *(longlong **)(lVar5 + 0x6f10);
  if (plVar7 == (longlong *)0x0) {
LAB_144212a5e:
    plVar7 = (longlong *)0x0;
  }
  else {
    iVar4 = (int)plVar7[1];
    do {
      if (iVar4 == 0) goto LAB_144212a5e;
      LOCK();
      iVar3 = (int)plVar7[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    lVar5 = *(longlong *)(lVar5 + 0x6f08);
    if ((((lVar5 != 0) && (*(int *)(lVar5 + 0x84) != 0)) &&
        (uVar2 = *(uint *)(lVar5 + 0x80), -1 < (int)uVar2)) &&
       ((((int)uVar2 < DAT_14c9647dc &&
         (plVar6 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0)) &&
        (((int)plVar6[2] == *(int *)(lVar5 + 0x84) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))))
       )) {
      lVar5 = *plVar6;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
      if (lVar5 != 0) {
        *(undefined4 *)(param_2 + 0x38) = 1;
        *param_2 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        FUN_1456bb102(param_2);
      }
      goto LAB_144212a76;
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
LAB_144212a76:
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  return param_2;
}



// FUNCTION 144212aa2 FUN_144212aa2 body=696 status=ok
// SIG undefined FUN_144212aa2(void)

undefined1 *
FUN_144212aa2(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = FUN_1400e8a68(param_4);
  if ((lVar9 != 0) && (plVar5 = *(longlong **)(lVar9 + 0x6f10), plVar5 != (longlong *)0x0)) {
    iVar8 = (int)plVar5[1];
    do {
      if (iVar8 == 0) goto LAB_144212d17;
      LOCK();
      iVar6 = (int)plVar5[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar5 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    lVar12 = *(longlong *)(lVar9 + 0x6f08);
    if (lVar12 != 0) {
      if (*(char *)(param_1 + 8) == '\x01') {
        lVar11 = 0x138;
      }
      else {
        if (*(char *)(param_1 + 8) != '\x02') goto LAB_144212cfa;
        lVar11 = 0x118;
      }
      puVar3 = (uint *)(lVar12 + lVar11);
      local_48 = *puVar3;
      uStack_44 = puVar3[1];
      uStack_40 = puVar3[2];
      uStack_3c = puVar3[3];
      plVar10 = *(longlong **)(puVar3 + 2);
      puVar4 = (undefined4 *)(lVar12 + 0x10 + lVar11);
      local_38 = *puVar4;
      uStack_34 = puVar4[1];
      uStack_30 = puVar4[2];
      uStack_2c = puVar4[3];
      if ((((plVar10 != (longlong *)0x0) && (uStack_44 != 0)) && (-1 < (int)local_48)) &&
         ((((int)local_48 < DAT_14c9647dc &&
           (lVar12 = (ulonglong)((local_48 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8), lVar12 != 0))
          && ((*(uint *)(lVar12 + 0x10) == uStack_44 && ((*(uint *)(lVar12 + 8) & 0x10200000) == 0))
             )))) {
        if (*(code **)(*plVar10 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar10 = plVar10 + 0xd9;
        }
        else {
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x10))();
        }
        cVar7 = FUN_14486eb0e(plVar10,&local_48);
        if (cVar7 != '\0') {
          lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x3a20) + 0x10))(lVar9 + 0x3a20);
          plVar10 = *(longlong **)
                     (*(longlong *)(lVar9 + 0x18) + 8 + (ulonglong)(byte)uStack_2c * 0x10);
          if (plVar10 != (longlong *)0x0) {
            lVar9 = *(longlong *)(*(longlong *)(lVar9 + 0x18) + (ulonglong)(byte)uStack_2c * 0x10);
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            local_58 = 0;
            iVar8 = (int)plVar10[1];
            do {
              if (iVar8 == 0) {
                local_50 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar6 = (int)plVar10[1];
              bVar13 = iVar8 == iVar6;
              if (bVar13) {
                *(int *)(plVar10 + 1) = iVar8 + 1;
                iVar6 = iVar8;
              }
              iVar8 = iVar6;
              UNLOCK();
              local_50 = plVar10;
            } while (!bVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))();
            }
            plVar10 = local_50;
            if (local_50 == (longlong *)0x0) {
              if (local_58 != 0) goto LAB_144212c85;
            }
            else {
              local_58 = lVar9;
              if (lVar9 != 0) {
LAB_144212c85:
                *(undefined8 *)(param_2 + 0x30) = 0;
                *(undefined1 **)(param_2 + 0x38) = &DAT_100000001;
                *param_2 = 0;
                *(undefined4 *)(param_2 + 0x28) = 0;
                FUN_143d540b6(param_2,&local_58);
                plVar10 = local_50;
                if (local_50 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_50 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_50)(local_50);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar10 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar10 + 0x10))(plVar10);
                    }
                  }
                }
                LOCK();
                plVar10 = plVar5 + 1;
                *(int *)plVar10 = (int)*plVar10 + -1;
                UNLOCK();
                if ((int)*plVar10 == 0) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar5 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar5 + 0x10))(plVar5);
                  }
                }
                goto LAB_144212d2d;
              }
              LOCK();
              plVar2 = local_50 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_50)(local_50);
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
        }
      }
    }
LAB_144212cfa:
    LOCK();
    plVar10 = plVar5 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
LAB_144212d17:
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
LAB_144212d2d:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144212d5c FUN_144212d5c body=223 status=ok
// SIG undefined FUN_144212d5c(void)

undefined8 * FUN_144212d5c(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  GUID local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = &PTR_FUN_14b42ad00;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_48.Data1 = 0;
  local_48.Data2 = 0;
  local_48.Data3 = 0;
  local_48.Data4[0] = '\0';
  local_48.Data4[1] = '\0';
  local_48.Data4[2] = '\0';
  local_48.Data4[3] = '\0';
  local_48.Data4[4] = '\0';
  local_48.Data4[5] = '\0';
  local_48.Data4[6] = '\0';
  local_48.Data4[7] = '\0';
  CoCreateGuid(&local_48);
  param_1[4] = local_48._0_8_;
  *(uchar (*) [8])(param_1 + 5) = local_48.Data4;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 10;
  memset(param_1 + 0x12,0,0x100);
  *param_1 = &PTR_FUN_14b999390;
  lVar1 = FUN_14401b798();
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[10] = lVar1;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144212ebe FUN_144212ebe body=447 status=ok
// SIG undefined FUN_144212ebe(void)

undefined8 * FUN_144212ebe(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)FUN_14001cc68(400);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b99a080;
  plVar1 = plVar6 + 2;
  memset(plVar1,0,0x180);
  FUN_145c42fa8(plVar1);
  plVar6[0x2f] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b626f90;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  cVar5 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar5 == '\0') goto LAB_144213029;
  FUN_145c43050(param_1 + 400,&local_48,param_3);
  plVar2 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar6[0x30] = local_48;
    plVar7 = (longlong *)plVar6[0x31];
    if (plVar7 != (longlong *)0x0) {
      plVar6[0x31] = 0;
LAB_144212fc6:
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar3 = (int *)((longlong)plVar7 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
joined_r0x000144212ff5:
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar6[0x30] = local_48;
    plVar7 = (longlong *)plVar6[0x31];
    if (local_40 == plVar7) {
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3;
        UNLOCK();
        plVar7 = plVar2;
        goto joined_r0x000144212ff5;
      }
    }
    else {
      plVar6[0x31] = (longlong)local_40;
      if (plVar7 != (longlong *)0x0) goto LAB_144212fc6;
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
LAB_144213029:
  *param_2 = plVar1;
  param_2[1] = plVar6;
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
      piVar3 = (int *)((longlong)plVar6 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421308a FUN_14421308a body=216 status=ok
// SIG undefined FUN_14421308a(void)

void FUN_14421308a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412e4f8c(*(undefined8 *)(param_2 + 0x10),&local_28,&DAT_14cb8c368);
  plVar1 = local_20;
  if ((undefined8 *)(param_1 + 400) != &local_28) {
    *(undefined8 *)(param_1 + 400) = local_28;
    local_28 = 0;
    plVar3 = *(longlong **)(param_1 + 0x198);
    if (local_20 != plVar3) {
      local_20 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x198) = plVar1;
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
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144213164 FUN_144213164 body=626 status=ok
// SIG undefined FUN_144213164(void)

undefined8 FUN_144213164(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_2 + 0x20) == DAT_14cbd28c0) {
    plVar7 = (longlong *)(param_1 + 0x170);
    local_50 = *param_3;
    local_48 = param_3[1];
    FUN_1403350f6(plVar7);
    iVar4 = *(int *)(param_1 + 0x178);
    if (0 < iVar4) {
      lVar6 = 0;
      bVar8 = false;
      do {
        while( true ) {
          lVar3 = *plVar7;
          puVar1 = (uint *)(lVar3 + lVar6 * 0x10);
          if ((((*(longlong *)(lVar3 + 8 + lVar6 * 0x10) != 0) && (puVar1[1] != 0)) &&
              (uVar2 = *puVar1, -1 < (int)uVar2)) &&
             ((((int)uVar2 < DAT_14c9647dc &&
               (plVar10 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0)) &&
              ((*(uint *)(plVar10 + 2) == puVar1[1] &&
               (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))))) break;
          iVar9 = iVar4 + ~(uint)lVar6;
          if (iVar9 != 0) {
            if (0 < iVar9) {
              iVar9 = 1;
            }
            memmove(puVar1,(void *)(lVar3 + (longlong)(iVar4 - iVar9) * 0x10),(longlong)iVar9 << 4);
            iVar4 = *(int *)(param_1 + 0x178);
          }
          iVar4 = iVar4 + -1;
          *(int *)(param_1 + 0x178) = iVar4;
          bVar8 = true;
          if (iVar4 <= lVar6) goto LAB_1442133cd;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
LAB_14421339b:
      if (bVar8) {
LAB_1442133cd:
        FUN_1400bbcfc(plVar7);
      }
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x20) != DAT_14cbd28d0) {
      uVar5 = 0;
      goto LAB_1442133a7;
    }
    plVar7 = (longlong *)(param_1 + 0x180);
    local_50 = *param_3;
    local_48 = param_3[1];
    FUN_1403350f6(plVar7);
    iVar4 = *(int *)(param_1 + 0x188);
    if (0 < iVar4) {
      lVar6 = 0;
      bVar8 = false;
      do {
        while( true ) {
          lVar3 = *plVar7;
          puVar1 = (uint *)(lVar3 + lVar6 * 0x10);
          if (((((*(longlong *)(lVar3 + 8 + lVar6 * 0x10) != 0) && (puVar1[1] != 0)) &&
               (uVar2 = *puVar1, -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (plVar10 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0)))) &&
             ((*(uint *)(plVar10 + 2) == puVar1[1] &&
              (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))) break;
          iVar9 = iVar4 + ~(uint)lVar6;
          if (iVar9 != 0) {
            if (0 < iVar9) {
              iVar9 = 1;
            }
            memmove(puVar1,(void *)(lVar3 + (longlong)(iVar4 - iVar9) * 0x10),(longlong)iVar9 << 4);
            iVar4 = *(int *)(param_1 + 0x188);
          }
          iVar4 = iVar4 + -1;
          *(int *)(param_1 + 0x188) = iVar4;
          bVar8 = true;
          if (iVar4 <= lVar6) goto LAB_1442133cd;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
      goto LAB_14421339b;
    }
  }
  uVar5 = 1;
LAB_1442133a7:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1442133d8 FUN_1442133d8 body=644 status=ok
// SIG undefined FUN_1442133d8(void)

ulonglong FUN_1442133d8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 unaff_RSI;
  undefined7 uVar7;
  ulonglong uVar6;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(longlong *)(param_2 + 0x20) == DAT_14cbd28c0) {
    plVar5 = (longlong *)(param_1 + 0x170);
    local_58 = *param_3;
    local_50 = param_3[1];
    uVar6 = CONCAT71(uVar7,1);
    FUN_140805e68(plVar5);
    iVar4 = *(int *)(param_1 + 0x178);
    if (iVar4 < 1) goto LAB_144213633;
    lVar11 = 0;
    bVar8 = false;
    do {
      while( true ) {
        lVar3 = *plVar5;
        puVar1 = (uint *)(lVar3 + lVar11 * 0x10);
        if ((((*(longlong *)(lVar3 + 8 + lVar11 * 0x10) != 0) && (puVar1[1] != 0)) &&
            (uVar2 = *puVar1, -1 < (int)uVar2)) &&
           ((((int)uVar2 < DAT_14c9647dc &&
             (plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0)) &&
            ((*(uint *)(plVar10 + 2) == puVar1[1] &&
             (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))))) break;
        iVar9 = iVar4 + ~(uint)lVar11;
        if (iVar9 != 0) {
          if (0 < iVar9) {
            iVar9 = 1;
          }
          memmove(puVar1,(void *)(lVar3 + (longlong)(iVar4 - iVar9) * 0x10),(longlong)iVar9 << 4);
          iVar4 = *(int *)(param_1 + 0x178);
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 0x178) = iVar4;
        bVar8 = true;
        if (iVar4 <= lVar11) goto LAB_144213627;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar4);
  }
  else {
    if (*(longlong *)(param_2 + 0x20) != DAT_14cbd28d0) {
      uVar6 = 0;
      goto LAB_144213633;
    }
    plVar5 = (longlong *)(param_1 + 0x180);
    local_58 = *param_3;
    local_50 = param_3[1];
    uVar6 = CONCAT71(uVar7,1);
    FUN_140805e68(plVar5);
    iVar4 = *(int *)(param_1 + 0x188);
    if (iVar4 < 1) goto LAB_144213633;
    lVar11 = 0;
    bVar8 = false;
    do {
      while( true ) {
        lVar3 = *plVar5;
        puVar1 = (uint *)(lVar3 + lVar11 * 0x10);
        if (((((*(longlong *)(lVar3 + 8 + lVar11 * 0x10) != 0) && (puVar1[1] != 0)) &&
             (uVar2 = *puVar1, -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             (plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar10 + 2) == puVar1[1] &&
            (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))) break;
        iVar9 = iVar4 + ~(uint)lVar11;
        if (iVar9 != 0) {
          if (0 < iVar9) {
            iVar9 = 1;
          }
          memmove(puVar1,(void *)(lVar3 + (longlong)(iVar4 - iVar9) * 0x10),(longlong)iVar9 << 4);
          iVar4 = *(int *)(param_1 + 0x188);
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 0x188) = iVar4;
        bVar8 = true;
        if (iVar4 <= lVar11) goto LAB_144213627;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar4);
  }
  uVar6 = CONCAT71(uVar7,1);
  if (bVar8) {
LAB_144213627:
    uVar6 = CONCAT71(uVar7,1);
    FUN_1400bbcfc(plVar5);
  }
LAB_144213633:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 144213660 FUN_144213660 body=103 status=ok
// SIG undefined FUN_144213660(void)

void FUN_144213660(longlong param_1)

{
  if ((*(char *)(param_1 + 0x1a8) == '\x01') && (*(longlong *)(param_1 + 400) != 0)) {
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 400) + 0x28);
    }
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  if (*(int *)(param_1 + 0x1bc) != 0) {
    FUN_14421b24a(param_1 + 0x1b0);
    return;
  }
  return;
}



// FUNCTION 1442136c8 FUN_1442136c8 body=545 status=ok
// SIG undefined FUN_1442136c8(void)

void FUN_1442136c8(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = *(int *)(param_1 + 0x1b8);
  uVar11 = (ulonglong)iVar7;
  if (0 < (longlong)uVar11) {
    plVar1 = (longlong *)(param_1 + 0x1b0);
    iVar7 = -iVar7;
    lVar9 = uVar11 * 0xc;
    iVar10 = 0;
    do {
      if (*(int *)(param_1 + 0x1c0) < iVar10) goto LAB_1442138b8;
      lVar5 = *plVar1;
      iVar2 = *(int *)(lVar5 + -8 + lVar9);
      if (((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + -0xc + lVar9), (int)uVar4 < 0)) ||
         (DAT_14c9647dc <= (int)uVar4)) {
LAB_144213788:
        uVar4 = *(uint *)(param_1 + 0x1b8);
        if (uVar11 != uVar4) {
LAB_144213793:
          memmove((void *)(lVar5 + lVar9 + -0xc),(void *)(lVar5 + lVar9),
                  (longlong)(int)(uVar4 + iVar7) * 0xc);
          uVar4 = *(uint *)(param_1 + 0x1b8);
        }
LAB_1442137b5:
        *(uint *)(param_1 + 0x1b8) = uVar4 - 1;
        FUN_14421b27a(plVar1);
      }
      else {
        lVar8 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        if (((lVar8 == 0) || (*(int *)(lVar8 + 0x10) != iVar2)) ||
           ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)) goto LAB_144213788;
        *(float *)(lVar5 + -4 + lVar9) = *(float *)(lVar5 + -4 + lVar9) - param_2;
        lVar5 = *plVar1;
        if (*(float *)(lVar5 + -4 + lVar9) <= 0.0) {
          iVar2 = *(int *)(lVar5 + -8 + lVar9);
          if ((iVar2 == 0) || (uVar4 = *(uint *)(lVar5 + -0xc + lVar9), (int)uVar4 < 0)) {
LAB_144213877:
            local_78 = 0;
          }
          else {
            local_78 = 0;
            if ((int)uVar4 < DAT_14c9647dc) {
              puVar6 = (undefined8 *)
                       ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
              if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar2)) ||
                 ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_144213877;
              local_78 = *puVar6;
            }
          }
          iVar10 = iVar10 + 1;
          FUN_1447cd2ec(param_1 + 0x180,&local_78);
          uVar4 = *(uint *)(param_1 + 0x1b8);
          if (uVar11 != uVar4) {
            lVar5 = *plVar1;
            goto LAB_144213793;
          }
          goto LAB_1442137b5;
        }
      }
      iVar7 = iVar7 + 1;
      lVar9 = lVar9 + -0xc;
      bVar3 = 1 < uVar11;
      uVar11 = uVar11 - 1;
    } while (bVar3);
    iVar7 = *(int *)(param_1 + 0x1b8);
  }
  if (((iVar7 == 0) && (*(char *)(param_1 + 0x1a8) == '\x01')) &&
     (*(longlong *)(param_1 + 400) != 0)) {
    if (*(longlong *)(param_1 + 0x1a0) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 400) + 0x28);
    }
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
LAB_1442138b8:
  if ((local_70 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442138ea FUN_1442138ea body=224 status=ok
// SIG undefined FUN_1442138ea(void)

void FUN_1442138ea(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(char *)(param_1 + 0x1a8) != '\0') || ((*(byte *)(param_1 + 0x50) & 2) == 0)) ||
     (lVar1 = *(longlong *)(param_1 + 400), lVar1 == 0)) goto LAB_1442139a3;
  FUN_1442139cc(&local_40,param_1,FUN_1442136c8);
  FUN_140df5e42(lVar1,&local_30,&local_40);
  *(undefined8 *)(param_1 + 0x1a0) = local_30;
  if (local_38 == 0) {
LAB_144213992:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_144213992;
  }
  *(undefined1 *)(param_1 + 0x1a8) = 1;
LAB_1442139a3:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442139cc FUN_1442139cc body=443 status=ok
// SIG undefined FUN_1442139cc(void)

longlong * FUN_1442139cc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_40);
  plVar3 = local_38;
  if (local_38 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e01f80;
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
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b99a0a0;
    puVar4[3] = local_40;
    puVar4[4] = 0;
    puVar4[5] = param_3;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e01f80;
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
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b99a0a0;
    puVar4[3] = local_40;
    puVar4[4] = local_38;
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = param_3;
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144213b8a FUN_144213b8a body=280 status=ok
// SIG undefined FUN_144213b8a(void)

void FUN_144213b8a(longlong param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((param_2 != 0) && ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0)) {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar4 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar3;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar4 = iVar3;
      }
    }
    iVar3 = *(int *)(param_1 + 0x1b8);
    lVar5 = (longlong)iVar3;
    *(uint *)(param_1 + 0x1b8) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1bc) < iVar3 + 1U) {
      FUN_14421b75a(param_1 + 0x1b0,iVar3);
    }
    lVar2 = *(longlong *)(param_1 + 0x1b0);
    *(uint *)(lVar2 + lVar5 * 0xc) = uVar1;
    *(int *)(lVar2 + 4 + lVar5 * 0xc) = iVar4;
    *(undefined4 *)(lVar2 + 8 + lVar5 * 0xc) = param_3;
    FUN_1442138ea(param_1);
    return;
  }
  return;
}



// FUNCTION 144213ca2 FUN_144213ca2 body=215 status=ok
// SIG undefined FUN_144213ca2(void)

undefined8 * FUN_144213ca2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x1d8);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b99a110;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x1c8);
  FUN_145c42fa8(plVar1);
  plVar3[0x2f] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b627030;
  plVar3[0x30] = 0;
  plVar3[0x31] = 0;
  plVar3[0x32] = 0;
  plVar3[0x33] = 0;
  plVar3[0x34] = 0;
  plVar3[0x35] = 0;
  *(undefined8 *)((longlong)plVar3 + 0x1a9) = 0;
  *(undefined8 *)((longlong)plVar3 + 0x1b1) = 0;
  plVar3[0x38] = 0;
  plVar3[0x39] = 0;
  *(undefined4 *)(plVar3 + 0x3a) = *(undefined4 *)(param_1 + 400);
  *param_2 = plVar1;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 144213d7a FUN_144213d7a body=216 status=ok
// SIG undefined FUN_144213d7a(void)

void FUN_144213d7a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412e4f8c(*(undefined8 *)(param_2 + 0x10),&local_28,&DAT_14cb8c368);
  plVar1 = local_20;
  if ((undefined8 *)(param_1 + 0x200) != &local_28) {
    *(undefined8 *)(param_1 + 0x200) = local_28;
    local_28 = 0;
    plVar3 = *(longlong **)(param_1 + 0x208);
    if (local_20 != plVar3) {
      local_20 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x208) = plVar1;
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
  plVar1 = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_20 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144213e54 FUN_144213e54 body=626 status=ok
// SIG undefined FUN_144213e54(void)

undefined8 FUN_144213e54(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_2 + 0x20) == DAT_14cbd28e8) {
    plVar7 = (longlong *)(param_1 + 0x198);
    local_50 = *param_3;
    local_48 = param_3[1];
    FUN_1403350f6(plVar7);
    iVar4 = *(int *)(param_1 + 0x1a0);
    if (0 < iVar4) {
      lVar6 = 0;
      bVar8 = false;
      do {
        while( true ) {
          lVar3 = *plVar7;
          puVar1 = (uint *)(lVar3 + lVar6 * 0x10);
          if ((((*(longlong *)(lVar3 + 8 + lVar6 * 0x10) != 0) && (puVar1[1] != 0)) &&
              (uVar2 = *puVar1, -1 < (int)uVar2)) &&
             ((((int)uVar2 < DAT_14c9647dc &&
               (plVar10 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0)) &&
              ((*(uint *)(plVar10 + 2) == puVar1[1] &&
               (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))))) break;
          iVar9 = iVar4 + ~(uint)lVar6;
          if (iVar9 != 0) {
            if (0 < iVar9) {
              iVar9 = 1;
            }
            memmove(puVar1,(void *)(lVar3 + (longlong)(iVar4 - iVar9) * 0x10),(longlong)iVar9 << 4);
            iVar4 = *(int *)(param_1 + 0x1a0);
          }
          iVar4 = iVar4 + -1;
          *(int *)(param_1 + 0x1a0) = iVar4;
          bVar8 = true;
          if (iVar4 <= lVar6) goto LAB_1442140bd;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
LAB_14421408b:
      if (bVar8) {
LAB_1442140bd:
        FUN_1400bbcfc(plVar7);
      }
    }
  }
  else {
    if (*(longlong *)(param_2 + 0x20) != DAT_14cbd28f0) {
      uVar5 = 0;
      goto LAB_144214097;
    }
    plVar7 = (longlong *)(param_1 + 0x1a8);
    local_50 = *param_3;
    local_48 = param_3[1];
    FUN_1403350f6(plVar7);
    iVar4 = *(int *)(param_1 + 0x1b0);
    if (0 < iVar4) {
      lVar6 = 0;
      bVar8 = false;
      do {
        while( true ) {
          lVar3 = *plVar7;
          puVar1 = (uint *)(lVar3 + lVar6 * 0x10);
          if (((((*(longlong *)(lVar3 + 8 + lVar6 * 0x10) != 0) && (puVar1[1] != 0)) &&
               (uVar2 = *puVar1, -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (plVar10 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0)))) &&
             ((*(uint *)(plVar10 + 2) == puVar1[1] &&
              (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))) break;
          iVar9 = iVar4 + ~(uint)lVar6;
          if (iVar9 != 0) {
            if (0 < iVar9) {
              iVar9 = 1;
            }
            memmove(puVar1,(void *)(lVar3 + (longlong)(iVar4 - iVar9) * 0x10),(longlong)iVar9 << 4);
            iVar4 = *(int *)(param_1 + 0x1b0);
          }
          iVar4 = iVar4 + -1;
          *(int *)(param_1 + 0x1b0) = iVar4;
          bVar8 = true;
          if (iVar4 <= lVar6) goto LAB_1442140bd;
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < iVar4);
      goto LAB_14421408b;
    }
  }
  uVar5 = 1;
LAB_144214097:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1442140c8 FUN_1442140c8 body=644 status=ok
// SIG undefined FUN_1442140c8(void)

ulonglong FUN_1442140c8(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 unaff_RSI;
  undefined7 uVar7;
  ulonglong uVar6;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar7 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(longlong *)(param_2 + 0x20) == DAT_14cbd28e8) {
    plVar5 = (longlong *)(param_1 + 0x198);
    local_58 = *param_3;
    local_50 = param_3[1];
    uVar6 = CONCAT71(uVar7,1);
    FUN_140805e68(plVar5);
    iVar4 = *(int *)(param_1 + 0x1a0);
    if (iVar4 < 1) goto LAB_144214323;
    lVar11 = 0;
    bVar8 = false;
    do {
      while( true ) {
        lVar3 = *plVar5;
        puVar1 = (uint *)(lVar3 + lVar11 * 0x10);
        if ((((*(longlong *)(lVar3 + 8 + lVar11 * 0x10) != 0) && (puVar1[1] != 0)) &&
            (uVar2 = *puVar1, -1 < (int)uVar2)) &&
           ((((int)uVar2 < DAT_14c9647dc &&
             (plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0)) &&
            ((*(uint *)(plVar10 + 2) == puVar1[1] &&
             (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))))) break;
        iVar9 = iVar4 + ~(uint)lVar11;
        if (iVar9 != 0) {
          if (0 < iVar9) {
            iVar9 = 1;
          }
          memmove(puVar1,(void *)(lVar3 + (longlong)(iVar4 - iVar9) * 0x10),(longlong)iVar9 << 4);
          iVar4 = *(int *)(param_1 + 0x1a0);
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 0x1a0) = iVar4;
        bVar8 = true;
        if (iVar4 <= lVar11) goto LAB_144214317;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar4);
  }
  else {
    if (*(longlong *)(param_2 + 0x20) != DAT_14cbd28f0) {
      uVar6 = 0;
      goto LAB_144214323;
    }
    plVar5 = (longlong *)(param_1 + 0x1a8);
    local_58 = *param_3;
    local_50 = param_3[1];
    uVar6 = CONCAT71(uVar7,1);
    FUN_140805e68(plVar5);
    iVar4 = *(int *)(param_1 + 0x1b0);
    if (iVar4 < 1) goto LAB_144214323;
    lVar11 = 0;
    bVar8 = false;
    do {
      while( true ) {
        lVar3 = *plVar5;
        puVar1 = (uint *)(lVar3 + lVar11 * 0x10);
        if (((((*(longlong *)(lVar3 + 8 + lVar11 * 0x10) != 0) && (puVar1[1] != 0)) &&
             (uVar2 = *puVar1, -1 < (int)uVar2)) &&
            (((int)uVar2 < DAT_14c9647dc &&
             (plVar10 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0)))) &&
           ((*(uint *)(plVar10 + 2) == puVar1[1] &&
            (((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0 && (*plVar10 != 0)))))) break;
        iVar9 = iVar4 + ~(uint)lVar11;
        if (iVar9 != 0) {
          if (0 < iVar9) {
            iVar9 = 1;
          }
          memmove(puVar1,(void *)(lVar3 + (longlong)(iVar4 - iVar9) * 0x10),(longlong)iVar9 << 4);
          iVar4 = *(int *)(param_1 + 0x1b0);
        }
        iVar4 = iVar4 + -1;
        *(int *)(param_1 + 0x1b0) = iVar4;
        bVar8 = true;
        if (iVar4 <= lVar11) goto LAB_144214317;
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar4);
  }
  uVar6 = CONCAT71(uVar7,1);
  if (bVar8) {
LAB_144214317:
    uVar6 = CONCAT71(uVar7,1);
    FUN_1400bbcfc(plVar5);
  }
LAB_144214323:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 144214356 FUN_144214356 body=95 status=ok
// SIG undefined FUN_144214356(void)

void FUN_144214356(longlong param_1)

{
  uint uVar1;
  
  if (0 < *(int *)(param_1 + 0x178)) {
    uVar1 = *(int *)(param_1 + 0x178) + 1;
    do {
      FUN_144214fee(param_1,uVar1 - 2);
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  if ((*(char *)(param_1 + 0x218) == '\x01') && (*(longlong *)(param_1 + 0x200) != 0)) {
    if (*(longlong *)(param_1 + 0x210) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x200) + 0x28);
    }
    *(undefined1 *)(param_1 + 0x218) = 0;
  }
  return;
}



// FUNCTION 1442143b6 FUN_1442143b6 body=1561 status=ok
// SIG undefined FUN_1442143b6(void)

void FUN_1442143b6(longlong param_1,code *param_2,float param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  code *local_88;
  code *local_80;
  undefined8 *local_70;
  int local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_2 == (code *)0x0) || (param_3 <= 0.0)) || ((*(uint *)(param_2 + 8) & 0x40000000) != 0)
     ) goto LAB_144214862;
  if ((longlong)*(int *)(param_1 + 0x178) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x170);
    lVar10 = (longlong)*(int *)(param_1 + 0x178) << 5;
    do {
      cVar5 = FUN_14069eaf4(lVar8,param_2);
      if (cVar5 != '\0') {
        if (lVar8 != 0) {
          *(float *)(lVar8 + 0x1c) = param_3;
          goto LAB_144214862;
        }
        break;
      }
      lVar8 = lVar8 + 0x20;
      lVar10 = lVar10 + -0x20;
    } while (lVar10 != 0);
  }
  if (DAT_14cb56270 == 0) {
    local_90 = &local_60;
    local_60 = FUN_1449e2820;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_1427b09ee;
    local_98 = &LAB_148630fef;
    local_a0 = FUN_1464b6a91;
    local_a8 = L"Engine";
    local_b0 = 0;
    local_b8 = 0x10004001;
    local_c0 = 8;
    local_c8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar7 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
  if (((plVar7 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar7 + 0x40))(plVar7), cVar5 != '\0')
      ) || (lVar8 = (**(code **)(*plVar7 + 0x20))(plVar7), lVar8 == 0)) goto LAB_144214862;
  if (*(char *)(param_1 + 0x219) == '\x01') {
    local_60._0_5_ = CONCAT14(1,param_3);
    FUN_144214a9c(param_1,param_2,1);
    goto LAB_144214862;
  }
  iVar6 = *(int *)(param_1 + 0x178);
  *(uint *)(param_1 + 0x178) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0x17c) < iVar6 + 1U) {
    FUN_14421bb1c((longlong *)(param_1 + 0x170),iVar6);
  }
  lVar11 = *(longlong *)(param_1 + 0x170);
  lVar10 = lVar11 + (longlong)iVar6 * 0x20;
  FUN_14421bb11(lVar10);
  uVar3 = *(uint *)(param_2 + 0xc);
  *(uint *)(lVar11 + (longlong)iVar6 * 0x20) = uVar3;
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar11 = 0;
  }
  iVar6 = *(int *)(lVar11 + 0x10);
  if (*(int *)(lVar11 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar9 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar9);
    }
    LOCK();
    iVar6 = *(int *)(lVar11 + 0x10);
    bVar12 = iVar6 == 0;
    if (bVar12) {
      *(int *)(lVar11 + 0x10) = iVar9;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar6 = iVar9;
    }
  }
  *(int *)(lVar10 + 4) = iVar6;
  *(float *)(lVar10 + 0x1c) = param_3;
  FUN_14421bc14(&local_60,param_1,FUN_144214c38);
  FUN_1403524de(lVar8 + 400,&local_70,&local_60);
  if (local_58 == 0) {
LAB_1442145b4:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_1442145b4;
  }
  *(undefined8 **)(lVar10 + 8) = local_70;
  FUN_14421bc14(&local_60,param_1,FUN_144214c68);
  FUN_1403524de(lVar8 + 0xf8,&local_70,&local_60);
  if (local_58 == 0) {
LAB_14421463f:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
    goto LAB_14421463f;
  }
  *(undefined8 **)(lVar10 + 0x10) = local_70;
  local_60 = param_2;
  FUN_1447cd2ec(param_1 + 0x198);
  if (((*(char *)(param_1 + 0x218) != '\0') || ((*(byte *)(param_1 + 0x50) & 2) == 0)) ||
     (lVar8 = *(longlong *)(param_1 + 0x200), lVar8 == 0)) goto LAB_144214862;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  FUN_1446efa72(&local_70,0,3,0x10);
  puVar4 = local_70;
  local_68 = 3;
  FUN_141085fe4(param_1,&local_60);
  plVar7 = (longlong *)CONCAT44(uStack_54,local_58);
  if (plVar7 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e01f80;
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
    puVar4[2] = lVar11;
    *puVar4 = &PTR_FUN_14b99a1a0;
    puVar4[3] = local_60;
    puVar4[4] = 0;
    puVar4[5] = FUN_144215732;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e01f80;
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
    puVar4[2] = lVar11;
    *puVar4 = &PTR_FUN_14b99a1a0;
    puVar4[3] = local_60;
    puVar4[4] = plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = FUN_144215732;
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
  plVar7 = (longlong *)CONCAT44(uStack_54,local_58);
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
  FUN_140df5e42(lVar8,&local_60,&local_70);
  *(code **)(param_1 + 0x210) = local_60;
  if (local_68 == 0) {
LAB_14421484d:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_14421484d;
  }
  *(undefined1 *)(param_1 + 0x218) = 1;
LAB_144214862:
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442149d0 FUN_1442149d0 body=180 status=ok
// SIG undefined FUN_1442149d0(void)

void FUN_1442149d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if ((longlong)*(int *)(param_1 + 0x178) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x170);
      lVar3 = (longlong)*(int *)(param_1 + 0x178) << 5;
      do {
        cVar1 = FUN_14069eaf4(lVar2,param_2);
        if (cVar1 != '\0') break;
        lVar2 = lVar2 + 0x20;
        lVar3 = lVar3 + -0x20;
      } while (lVar3 != 0);
    }
    if (*(char *)(param_1 + 0x219) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
    }
    local_3c = 0;
    FUN_144214a9c(param_1,param_2,2);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144214a9c FUN_144214a9c body=411 status=ok
// SIG undefined FUN_144214a9c(void)

void FUN_144214a9c(longlong param_1,longlong param_2,undefined1 param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    puVar7 = (undefined4 *)(*(longlong *)(param_1 + 0x180) + 0xc);
    lVar6 = (longlong)*(int *)(param_1 + 0x188) * 0x14;
    do {
      cVar2 = FUN_14069eaf4(puVar7 + -2,param_2);
      if (cVar2 != '\0') {
        if (puVar7 != (undefined4 *)&DAT_0000000c) {
          *(undefined1 *)(puVar7 + -3) = param_3;
          if (puVar7 == param_4) {
            return;
          }
          if (*(char *)(param_4 + 1) == '\x01') {
            *puVar7 = *param_4;
            *(undefined1 *)(puVar7 + 1) = 1;
            return;
          }
          if (*(char *)(puVar7 + 1) != '\x01') {
            return;
          }
          *(undefined1 *)(puVar7 + 1) = 0;
          return;
        }
        break;
      }
      puVar7 = puVar7 + 5;
      lVar6 = lVar6 + -0x14;
    } while (lVar6 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x188);
  *(uint *)(param_1 + 0x188) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x18c) < iVar3 + 1U) {
    FUN_14421b9a6((longlong *)(param_1 + 0x180),iVar3);
  }
  puVar5 = (undefined1 *)((longlong)iVar3 * 0x14 + *(longlong *)(param_1 + 0x180));
  FUN_14421b996(puVar5);
  if (param_2 == 0) {
    *(undefined4 *)(puVar5 + 4) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar5 + 4) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar3 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(puVar5 + 8) = iVar3;
  *puVar5 = param_3;
  if ((undefined4 *)(puVar5 + 0xc) != param_4) {
    if (*(char *)(param_4 + 1) == '\x01') {
      *(undefined4 *)(puVar5 + 0xc) = *param_4;
      puVar5[0x10] = 1;
    }
    else if (puVar5[0x10] == '\x01') {
      puVar5[0x10] = 0;
    }
  }
  return;
}



// FUNCTION 144214c38 FUN_144214c38 body=48 status=ok
// SIG undefined FUN_144214c38(void)

void FUN_144214c38(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = (**(code **)(*param_2 + 0xf8))(param_2);
    FUN_1442149d0(param_1,uVar1);
    return;
  }
  return;
}



// FUNCTION 144214c68 FUN_144214c68 body=900 status=ok
// SIG undefined FUN_144214c68(void)

void FUN_144214c68(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  float fVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == (longlong *)0x0) goto LAB_144214edd;
  lVar3 = (**(code **)(*param_2 + 0xd8))(param_2);
  lVar5 = *(longlong *)(param_1 + 0x1d8);
  if (lVar5 == 0) {
    uVar4 = FUN_140b473a6();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x1d8) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x1e0);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x1d0) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x1e0) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar4);
        *(longlong *)(param_1 + 0x1e0) = lVar6;
        if (lVar6 != 0) goto LAB_144214d34;
      }
    }
    local_48 = 0;
  }
  else {
LAB_144214d34:
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar6 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_48,puVar7,1);
  }
  local_40 = 0x3003;
  local_38 = 0;
  if (*(byte *)(lVar3 + 0x38) != 0) {
    lVar5 = lVar3;
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x30);
    }
    lVar6 = 0;
    do {
      if ((*(longlong *)(lVar5 + lVar6) == local_48) && (*(int *)(lVar5 + 8 + lVar6) == 0x3003))
      goto LAB_144214edd;
      lVar6 = lVar6 + 0x18;
    } while ((ulonglong)*(byte *)(lVar3 + 0x38) * 0x18 != lVar6);
  }
  lVar3 = (**(code **)(*param_2 + 0xd8))(param_2);
  lVar5 = *(longlong *)(param_1 + 0x1c0);
  if (lVar5 == 0) {
    uVar4 = FUN_140b473a6();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x1c0) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x1c8);
  if (lVar6 == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x1c8) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar4);
        *(longlong *)(param_1 + 0x1c8) = lVar6;
        if (lVar6 != 0) goto LAB_144214e5c;
      }
    }
    local_48 = 0;
  }
  else {
LAB_144214e5c:
    puVar7 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
      puVar7 = *(undefined4 **)(lVar6 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_48,puVar7,1);
  }
  local_40 = 0x3003;
  local_38 = 0;
  if (*(byte *)(lVar3 + 0x38) != 0) {
    lVar5 = lVar3;
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x30);
    }
    lVar6 = 0;
    do {
      if ((*(longlong *)(lVar5 + lVar6) == local_48) && (*(int *)(lVar5 + 8 + lVar6) == 0x3003)) {
        if (0 < *(int *)(param_1 + 0x178)) {
          lVar5 = 0;
          lVar3 = 0;
          do {
            lVar6 = *(longlong *)(param_1 + 0x170);
            uVar4 = (**(code **)(*param_2 + 0xf8))(param_2);
            cVar2 = FUN_14069eaf4(lVar6 + lVar5,uVar4);
            if (cVar2 == '\0') {
              fVar8 = (float)(**(code **)(*param_2 + 0x140))(param_2,0);
              *(float *)(*(longlong *)(param_1 + 0x170) + 0x18 + lVar5) =
                   fVar8 + *(float *)(*(longlong *)(param_1 + 0x170) + 0x18 + lVar5);
            }
            lVar3 = lVar3 + 1;
            lVar5 = lVar5 + 0x20;
          } while (lVar3 < *(int *)(param_1 + 0x178));
        }
        break;
      }
      lVar6 = lVar6 + 0x18;
    } while ((ulonglong)*(byte *)(lVar3 + 0x38) * 0x18 != lVar6);
  }
LAB_144214edd:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144214fee FUN_144214fee body=599 status=ok
// SIG undefined FUN_144214fee(void)

void FUN_144214fee(longlong param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
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
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((int)param_2 < 0) || (iVar2 = *(int *)(param_1 + 0x178), iVar2 <= (int)param_2))
  goto LAB_14421517d;
  lVar3 = *(longlong *)(param_1 + 0x170);
  lVar6 = (ulonglong)param_2 * 0x20;
  puVar1 = (uint *)(lVar3 + lVar6);
  local_48 = *puVar1;
  uStack_44 = puVar1[1];
  uStack_40 = puVar1[2];
  uStack_3c = puVar1[3];
  puVar4 = (undefined8 *)(lVar3 + 0x10 + lVar6);
  local_38 = *puVar4;
  uStack_30 = puVar4[1];
  if (~param_2 + iVar2 != 0) {
    memmove((void *)(lVar3 + lVar6),(void *)(lVar3 + lVar6 + 0x20),
            (longlong)(int)(~param_2 + iVar2) << 5);
    iVar2 = *(int *)(param_1 + 0x178);
  }
  *(int *)(param_1 + 0x178) = iVar2 + -1;
  FUN_14421c12c((longlong *)(param_1 + 0x170));
  FUN_144215246(param_1,&local_48);
  if (uStack_44 == 0) {
LAB_1442151a1:
    local_20 = (code *)0x0;
  }
  else {
    if (((((-1 < (int)local_48) && ((int)local_48 < DAT_14c9647dc)) &&
         (plVar5 = (longlong *)
                   ((ulonglong)((local_48 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0)) &&
        ((*(uint *)(plVar5 + 2) == uStack_44 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) &&
       (lVar3 = *plVar5, lVar3 != 0)) {
      if (DAT_14cb56270 == 0) {
        local_60 = &local_20;
        local_20 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = FUN_1427b09ee;
        local_68 = &LAB_148630fef;
        local_70 = FUN_1464b6a91;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10004001;
        local_90 = 8;
        local_98 = 0x28;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar5 = (longlong *)FUN_144718840(lVar3,DAT_14cb56270);
      if (plVar5 != (longlong *)0x0) {
        lVar3 = (**(code **)(*plVar5 + 0x20))(plVar5);
        if ((lVar3 != 0) && (CONCAT44(uStack_3c,uStack_40) != 0)) {
          FUN_14480f766(lVar3 + 400);
        }
      }
    }
    if (uStack_44 == 0) goto LAB_1442151a1;
    local_20 = (code *)0x0;
    if ((-1 < (int)local_48) && ((int)local_48 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((local_48 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != uStack_44 || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_1442151a1;
      local_20 = (code *)*puVar4;
    }
  }
  FUN_1447cd2ec(param_1 + 0x1a8);
LAB_14421517d:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144215246 FUN_144215246 body=1258 status=ok
// SIG undefined FUN_144215246(void)

void FUN_144215246(longlong param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong ****pppplVar10;
  longlong *plVar11;
  undefined8 uVar12;
  undefined8 ****ppppuVar13;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  code *local_d8;
  longlong ***local_d0;
  char local_c8 [16];
  longlong *local_b8;
  undefined4 local_a0 [2];
  code *local_98;
  longlong ***local_90 [3];
  ushort local_78;
  byte local_70;
  undefined8 ***local_60 [3];
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((((float)param_2[6] <= 0.0) || (*(int *)(param_1 + 0x194) == 0)) ||
      (uVar2 = *(uint *)(param_1 + 400), (int)uVar2 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar2 ||
       (puVar5 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar5 == (undefined8 *)0x0)) ||
      ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x194) ||
       ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))))) goto LAB_1442152c9;
  if (((*(int *)(param_1 + 0x84) == 0) || (uVar2 = *(uint *)(param_1 + 0x80), (int)uVar2 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar2 ||
      ((((plVar11 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x84))) ||
        ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (*plVar11 == 0)))))) {
    local_48 = 0;
    local_40 = 0;
  }
  else {
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      uVar12 = *puVar5;
    }
    else {
      uVar12 = 0;
    }
    FUN_14108b31e(*plVar11,&local_98,uVar12);
    local_c8[0] = '\0';
    local_a0[0] = 0;
    FUN_14575a19a(local_c8,0);
    FUN_1447c3578(&local_98,local_60,local_c8);
    FUN_1448173f8(local_a0);
    if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
    if (pcVar3 != (code *)0x0) {
      pppplVar10 = (longlong ****)local_90[0];
      if (local_78 < 0x19) {
        pppplVar10 = local_90;
      }
      (*pcVar3)(pppplVar10);
    }
    if (0x18 < local_78) {
      FUN_1400020a8(local_90[0]);
    }
  }
  lVar6 = FUN_14030a32e(local_60);
  if (lVar6 == 0) {
LAB_144215398:
    lVar6 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_f0 = &local_98;
      local_98 = FUN_141864c34;
      local_e0 = FUN_14081d0ea;
      local_e8 = &LAB_1464cee30;
      local_f8 = &LAB_148bfac22;
      local_100 = &LAB_140f21842;
      local_108 = &DAT_149e063b2;
      local_110 = 0;
      local_118 = 0x10000004;
      local_120 = 0x10;
      local_128 = CONCAT44(local_128._4_4_,0x9cd0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_144215398;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_40 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar13 = local_60;
    if (0x18 < local_48) {
      ppppuVar13 = (undefined8 ****)local_60[0];
    }
    (*pcVar3)(ppppuVar13);
  }
  if (0x18 < local_48) {
    FUN_1400020a8(local_60[0]);
  }
  if (lVar6 == 0) goto LAB_1442152c9;
  pcVar3 = (code *)(param_2 + 6);
  FUN_1405fab15(&local_98);
  if (pcVar3 != local_98 + 8) {
    *(uint *)(local_98 + 8) = *(uint *)pcVar3;
    local_98[0xc] = (code)0x1;
  }
  local_98[0x278] = (code)((byte)local_98[0x278] | 8);
  local_d8 = local_98;
  local_d0 = local_90[0];
  if ((longlong ****)local_90[0] != (longlong ****)0x0) {
    LOCK();
    *(int *)(local_90[0] + 1) = *(int *)(local_90[0] + 1) + 1;
    UNLOCK();
  }
  if (param_2[1] == 0) {
LAB_144215629:
    uVar12 = 0;
  }
  else {
    uVar2 = *param_2;
    uVar12 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_2[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_144215629;
      uVar12 = *puVar5;
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x1f0);
  if (lVar9 == 0) {
    uVar7 = FUN_145c6ef2e();
    lVar9 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x1f0) = lVar9;
  }
  lVar8 = *(longlong *)(param_1 + 0x1f8);
  if (((lVar8 == 0) && (lVar8 = 0, lVar9 != 0)) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    plVar11 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar4 == '\0')) {
      lVar8 = 0;
    }
    else {
      uVar7 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar8 = FUN_144aff482(uVar7,(longlong *)(param_1 + 0x1e8));
    }
    *(longlong *)(param_1 + 0x1f8) = lVar8;
  }
  local_128 = 0;
  FUN_1405fd19a(lVar6,lVar8,uVar12,&local_d8);
  *(uint *)pcVar3 = 0;
  if ((longlong ****)local_90[0] != (longlong ****)0x0) {
    LOCK();
    pppplVar10 = (longlong ****)(local_90[0] + 1);
    *(int *)pppplVar10 = *(int *)pppplVar10 + -1;
    UNLOCK();
    if (*(int *)pppplVar10 == 0) {
      (*(code *)**local_90[0])(local_90[0]);
      LOCK();
      piVar1 = (int *)((longlong)local_90[0] + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (*(code *)(*local_90[0])[2])(local_90[0]);
      }
    }
  }
LAB_1442152c9:
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144215732 FUN_144215732 body=1070 status=ok
// SIG undefined FUN_144215732(void)

void FUN_144215732(longlong param_1,float param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint *puVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  
  fVar21 = *(float *)(param_1 + 0x21c) - param_2;
  *(float *)(param_1 + 0x21c) = fVar21;
  uVar1 = *(undefined1 *)(param_1 + 0x219);
  *(undefined1 *)(param_1 + 0x219) = 1;
  iVar2 = *(int *)(param_1 + 0x178);
  lVar15 = (longlong)iVar2;
  if (lVar15 == 0) goto LAB_1442159dc;
  puVar4 = *(uint **)(param_1 + 0x170);
  if (puVar4[1] == 0) {
LAB_1442157fb:
    bVar19 = false;
  }
  else {
    uVar3 = *puVar4;
    bVar19 = false;
    if ((int)uVar3 < 0) goto LAB_1442157fb;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x10) != puVar4[1])) {
        bVar19 = false;
      }
      else {
        bVar19 = (*(uint *)(lVar9 + 8) & 0x10200000) == 0;
      }
    }
  }
  iVar14 = 0;
  iVar6 = 0;
  do {
    lVar9 = (longlong)iVar6;
    iVar7 = iVar6 + 1;
    iVar5 = iVar7;
    if (iVar7 < iVar2) {
      iVar5 = iVar2;
    }
    if (lVar9 + 1 < lVar15) {
      puVar17 = puVar4 + lVar9 * 8 + 9;
      bVar18 = true;
      lVar16 = lVar9 + 2;
      do {
        iVar12 = iVar7;
        if ((((*puVar17 == 0) || (uVar3 = puVar17[-1], (int)uVar3 < 0)) ||
            (DAT_14c9647dc <= (int)uVar3)) ||
           ((lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar13 == 0 ||
            (*(uint *)(lVar13 + 0x10) != *puVar17)))) {
          if (bVar19) break;
        }
        else if ((bool)((*(uint *)(lVar13 + 8) & 0x10200000) == 0 ^ bVar19)) break;
        bVar18 = lVar16 < lVar15;
        iVar7 = iVar7 + 1;
        puVar17 = puVar17 + 8;
        bVar20 = lVar16 != lVar15;
        lVar16 = lVar16 + 1;
        iVar12 = iVar5;
      } while (bVar20);
    }
    else {
      bVar18 = false;
      iVar12 = iVar5;
    }
    if (bVar19) {
      if (iVar14 != iVar6) {
        memmove(puVar4 + (longlong)iVar14 * 8,puVar4 + lVar9 * 8,(longlong)(iVar12 - iVar6) << 5);
      }
      iVar14 = iVar14 + (iVar12 - iVar6);
    }
    bVar19 = (bool)(bVar19 ^ 1);
    iVar6 = iVar12;
  } while (bVar18);
  *(int *)(param_1 + 0x178) = iVar14;
  if (0 < iVar14) {
    lVar15 = 0;
    lVar9 = 0;
    do {
      lVar16 = *(longlong *)(param_1 + 0x170);
      fVar22 = *(float *)(lVar16 + 0x1c + lVar15) - param_2;
      *(float *)(lVar16 + 0x1c + lVar15) = fVar22;
      if ((fVar22 <= 0.0) || (fVar21 <= 0.0)) {
        FUN_144215246(param_1,(uint *)(lVar16 + lVar15));
      }
      if (fVar22 <= 0.0) {
        iVar2 = *(int *)(lVar16 + 4 + lVar15);
        if ((iVar2 == 0) || (uVar3 = *(uint *)(lVar16 + lVar15), (int)uVar3 < 0)) {
LAB_1442159d8:
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar11 = (undefined8 *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar11 == (undefined8 *)0x0) || (*(int *)(puVar11 + 2) != iVar2)) ||
               ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_1442159d8;
            uVar10 = *puVar11;
          }
        }
        FUN_1442149d0(param_1,uVar10);
      }
      lVar9 = lVar9 + 1;
      lVar15 = lVar15 + 0x20;
    } while (lVar9 < *(int *)(param_1 + 0x178));
  }
LAB_1442159dc:
  *(undefined1 *)(param_1 + 0x219) = uVar1;
  lVar15 = *(longlong *)(param_1 + 0x180);
  iVar2 = *(int *)(param_1 + 0x188);
  if ((longlong)iVar2 == 0) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    do {
      iVar6 = *(int *)(lVar15 + 8 + lVar9);
      if ((((iVar6 != 0) && (uVar3 = *(uint *)(lVar15 + 4 + lVar9), -1 < (int)uVar3)) &&
          (((int)uVar3 < DAT_14c9647dc &&
           ((puVar11 = (undefined8 *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
            puVar11 != (undefined8 *)0x0 && (*(int *)(puVar11 + 2) == iVar6)))))) &&
         ((*(uint *)(puVar11 + 1) & 0x10200000) == 0)) {
        if (*(char *)(lVar15 + lVar9) == '\x02') {
          if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
            uVar10 = *puVar11;
          }
          else {
            uVar10 = 0;
          }
          FUN_1442149d0(param_1,uVar10);
        }
        else if ((*(char *)(lVar15 + lVar9) == '\x01') &&
                (*(char *)(lVar15 + 0x10 + lVar9) == '\x01')) {
          if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
            uVar10 = *puVar11;
          }
          else {
            uVar10 = 0;
          }
          FUN_1442143b6(param_1,uVar10,*(undefined4 *)(lVar15 + 0xc + lVar9));
        }
      }
      lVar9 = lVar9 + 0x14;
    } while ((longlong)iVar2 * 0x14 != lVar9);
    uVar8 = *(undefined4 *)(param_1 + 0x188);
    lVar15 = *(longlong *)(param_1 + 0x180);
  }
  FUN_14401650a(lVar15,uVar8);
  *(undefined4 *)(param_1 + 0x188) = 0;
  if (*(int *)(param_1 + 0x18c) != 0) {
    FUN_14421b966(param_1 + 0x180);
  }
  if (fVar21 <= 0.0) {
    *(undefined4 *)(param_1 + 0x21c) = 0x3f000000;
  }
  if (((*(int *)(param_1 + 0x178) == 0) && (*(char *)(param_1 + 0x218) == '\x01')) &&
     (*(longlong *)(param_1 + 0x200) != 0)) {
    if (*(longlong *)(param_1 + 0x210) != 0) {
      FUN_14480f766(*(longlong *)(param_1 + 0x200) + 0x28);
    }
    *(undefined1 *)(param_1 + 0x218) = 0;
  }
  return;
}



// FUNCTION 144215b78 FUN_144215b78 body=530 status=ok
// SIG undefined FUN_144215b78(void)

undefined8 * FUN_144215b78(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  
  plVar5 = (longlong *)FUN_14001cc68(0x230);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b99a210;
  plVar1 = plVar5 + 2;
  memset(plVar1,0,0x220);
  FUN_145c42fa8(plVar1);
  plVar5[0x2f] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b6270d0;
  memset(plVar5 + 0x30,0,0xaa);
  *(undefined4 *)((longlong)plVar5 + 0x22c) = 0x3f000000;
  plVar5[0x39] = *(longlong *)(param_1 + 400);
  uVar6 = FUN_14477b664(*(undefined8 *)(param_1 + 0x198));
  lVar7 = FUN_14477b664(uVar6);
  plVar5[0x3a] = lVar7;
  plVar5[0x3b] = *(longlong *)(param_1 + 0x1a0);
  lVar7 = *(longlong *)(param_1 + 0x1a8);
  if (plVar5[0x3c] != lVar7) {
    plVar5[0x3e] = 0;
  }
  plVar5[0x3c] = lVar7;
  if (plVar5[0x3d] != *(longlong *)(param_1 + 0x1b0)) {
    plVar5[0x3e] = 0;
  }
  uVar6 = FUN_14477b664();
  lVar7 = FUN_14477b664(uVar6);
  plVar5[0x3d] = lVar7;
  plVar5[0x3e] = *(longlong *)(param_1 + 0x1b8);
  FUN_14872dd1e(plVar5 + 0x3f,param_1 + 0x1c0);
  lVar7 = FUN_14108b142(param_1 + 0x1d8);
  if (lVar7 == 0) {
    *(undefined4 *)(plVar5 + 0x34) = 0;
    iVar4 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar7 + 0xc);
    *(uint *)(plVar5 + 0x34) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar8;
      }
    }
  }
  *(int *)((longlong)plVar5 + 0x1a4) = iVar4;
  *param_2 = plVar1;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 144215d8a FUN_144215d8a body=131 status=ok
// SIG undefined FUN_144215d8a(void)

void FUN_144215d8a(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144215e0e(param_1,&local_40);
  FUN_144213b8a(local_40,param_2,param_3);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144215e0e FUN_144215e0e body=144 status=ok
// SIG undefined FUN_144215e0e(void)

undefined8 * FUN_144215e0e(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144215ea2 FUN_144215ea2 body=61 status=ok
// SIG undefined FUN_144215ea2(void)

void FUN_144215ea2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_14421c5ac();
    if (lVar1 != 0) {
      FUN_14421c614(lVar1 + 0x250,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 144215ee0 FUN_144215ee0 body=131 status=ok
// SIG undefined FUN_144215ee0(void)

void FUN_144215ee0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144215f64(param_1,&local_40);
  FUN_1442143b6(local_40,param_2,param_3);
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
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144215f64 FUN_144215f64 body=144 status=ok
// SIG undefined FUN_144215f64(void)

undefined8 * FUN_144215f64(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140df5234(param_1,&local_28);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144215ff8 FUN_144215ff8 body=107 status=ok
// SIG undefined FUN_144215ff8(void)

void FUN_144215ff8(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144215f64(param_1,&local_20);
  FUN_144214356(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144216064 FUN_144216064 body=52 status=ok
// SIG undefined FUN_144216064(void)

void FUN_144216064(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1a0);
  FUN_148dd92f4(param_1 + 0x1c0,param_2);
  return;
}



// FUNCTION 144216098 FUN_144216098 body=52 status=ok
// SIG undefined FUN_144216098(void)

void FUN_144216098(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x2b0);
  FUN_148dd92f4(param_1 + 400,param_2);
  return;
}



// FUNCTION 1442160ee FUN_1442160ee body=63 status=ok
// SIG undefined FUN_1442160ee(void)

bool FUN_1442160ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0x260) & 2) != 0) {
    return false;
  }
  if ((longlong)*(int *)(param_1 + 0x1e0) == 0) {
    return true;
  }
  lVar1 = *(longlong *)(param_1 + 0x1d8);
  lVar2 = (longlong)*(int *)(param_1 + 0x1e0) * 0x70;
  do {
    if (*(char *)(lVar1 + 8) != '\0') goto LAB_144216120;
    lVar1 = lVar1 + 0x70;
    lVar2 = lVar2 + -0x70;
  } while (lVar2 != 0);
  lVar1 = 0;
LAB_144216120:
  return lVar1 == 0;
}



// FUNCTION 14421612e FUN_14421612e body=598 status=ok
// SIG undefined FUN_14421612e(void)

ulonglong FUN_14421612e(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong *plVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x260) & 2) == 0) {
    if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1d8);
      lVar6 = (longlong)*(int *)(param_1 + 0x1e0) * 0x70;
      do {
        if (*(char *)(lVar3 + 8) != '\0') {
          if (lVar3 != 0) goto LAB_144216183;
          break;
        }
        lVar3 = lVar3 + 0x70;
        lVar6 = lVar6 + -0x70;
      } while (lVar6 != 0);
    }
    uVar9 = (undefined7)((ulonglong)param_1 >> 8);
    if ((*(longlong *)(param_1 + 0x208) != 0) && (*(int *)(param_1 + 0x204) != 0)) {
      uVar2 = *(uint *)(param_1 + 0x200);
      if (((-1 < (int)uVar2) &&
          ((((int)uVar2 < DAT_14c9647dc &&
            (plVar10 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar10 != (longlong *)0x0)) && ((int)plVar10[2] == *(int *)(param_1 + 0x204))))) &&
         (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))) {
        lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar10 + 0x10),*(longlong *)(param_1 + 0x208),1);
        if ((lVar3 != 0) && (cVar1 = FUN_148ba9e9e((uint *)(param_1 + 0x200)), cVar1 == '\0')) {
          if ((int)param_2[1] == 0) {
LAB_144216250:
            uVar8 = CONCAT71(uVar9,1);
          }
          else {
            plVar10 = (longlong *)*param_2;
            if (plVar10 == (longlong *)0x0) {
LAB_144216315:
              uVar8 = CONCAT71(uVar9,1);
              goto LAB_14421628e;
            }
            uVar8 = CONCAT71(uVar9,1);
            (**(code **)(*plVar10 + 0x60))(plVar10,1);
          }
          goto LAB_144216253;
        }
      }
    }
    if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
      pcVar4 = *(char **)(param_1 + 0x1f0);
      lVar3 = (longlong)*(int *)(param_1 + 0x1f8) * 0x38;
      do {
        if (*pcVar4 == '\x01') {
          if (pcVar4 != (char *)0x0) {
            if ((int)param_2[1] == 0) goto LAB_144216250;
            plVar10 = (longlong *)*param_2;
            if (plVar10 == (longlong *)0x0) goto LAB_144216315;
            (**(code **)(*plVar10 + 0x60))(plVar10,0);
            goto LAB_144216250;
          }
          break;
        }
        pcVar4 = pcVar4 + 0x38;
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
      puVar5 = (undefined1 *)(*(longlong *)(param_1 + 0x1d8) + 8);
      lVar3 = 0;
      do {
        if (puVar5[-8] == '\x01') {
          lVar3 = *(longlong *)(param_1 + 0x1d8) - lVar3;
          if (lVar3 != 0) {
            *puVar5 = 1;
            FUN_148bad246(lVar3 + 0x60,param_2);
            goto LAB_144216250;
          }
          break;
        }
        puVar5 = puVar5 + 0x70;
        lVar3 = lVar3 + -0x70;
      } while ((longlong)*(int *)(param_1 + 0x1e0) * -0x70 - lVar3 != 0);
    }
    local_58 = 0;
    local_50 = 0;
    FUN_148bad246(&local_58,param_2);
    local_30 = 0;
    local_68 = 0;
    local_60 = &local_58;
    uVar2 = FUN_148dcd06e(param_1,1,1);
    uVar8 = (ulonglong)uVar2;
  }
  else {
LAB_144216183:
    uVar8 = 0;
  }
LAB_144216253:
  puVar7 = (undefined8 *)*param_2;
  if ((int)param_2[1] != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_14421628e;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
    puVar7 = (undefined8 *)*param_2;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14421628e:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 144216386 FUN_144216386 body=485 status=ok
// SIG undefined FUN_144216386(void)

ulonglong FUN_144216386(longlong param_1,undefined2 *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar11;
  undefined7 uVar10;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar2 = *(uint *)(param_1 + 0x70);
    plVar9 = (longlong *)0x0;
    plVar8 = (longlong *)0x0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14421648b;
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) &&
        ((((int)plVar7[2] == *(int *)(param_1 + 0x74) && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)
          ) && (*plVar7 != 0)))) &&
       ((lVar5 = FUN_1447210f0(), lVar5 != 0 &&
        (lVar5 = FUN_1405e677a(DAT_14cb0d2b0,lVar5), *(char *)(lVar5 + 0x88) == '\0')))) {
      if ((*(int *)(param_1 + 0x74) != 0) &&
         (((uVar2 = *(uint *)(param_1 + 0x70), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)), plVar9 = plVar8
           , plVar7 != (longlong *)0x0 &&
           ((((int)plVar7[2] == *(int *)(param_1 + 0x74) &&
             ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))))))) {
        if (*(char *)(*plVar7 + 0x5d30) == '\x02') {
          *param_2 = 0x101;
          goto LAB_144216489;
        }
        lVar5 = FUN_140cf8aa6();
        if ((lVar5 != 0) && (plVar9 = *(longlong **)(lVar5 + 0xb10), plVar9 != (longlong *)0x0)) {
          lVar5 = (**(code **)(*plVar9 + 8))(plVar9);
          lVar6 = FUN_140a1ada8();
          if (((lVar6 != 0) &&
              ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30)))) && (*(char *)((longlong)plVar9 + 0x9f) == '\x01')) {
            *param_2 = 0x102;
            goto LAB_144216489;
          }
        }
      }
      plVar8 = *(longlong **)(param_1 + 0x248);
      uVar10 = (undefined7)((ulonglong)plVar9 >> 8);
      plVar9 = (longlong *)CONCAT71(uVar10,1);
      if (plVar8 != (longlong *)0x0) {
        iVar4 = (int)plVar8[1];
        do {
          if (iVar4 == 0) goto LAB_14421648b;
          LOCK();
          iVar3 = (int)plVar8[1];
          bVar11 = iVar4 == iVar3;
          if (bVar11) {
            *(int *)(plVar8 + 1) = iVar4 + 1;
            iVar3 = iVar4;
          }
          iVar4 = iVar3;
          UNLOCK();
        } while (!bVar11);
        lVar5 = *(longlong *)(param_1 + 0x240);
        plVar9 = (longlong *)CONCAT71(uVar10,1);
        if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0x80) != 0)) &&
            (*(longlong *)(lVar5 + 0x88) != 0)) && (0 < *(int *)(*(longlong *)(lVar5 + 0x88) + 8)))
        {
          *param_2 = 0x102;
          plVar9 = (longlong *)0x0;
        }
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
      goto LAB_14421648b;
    }
  }
LAB_144216489:
  plVar9 = (longlong *)0x0;
LAB_14421648b:
  return (ulonglong)plVar9 & 0xffffffff;
}



// FUNCTION 14421656c FUN_14421656c body=351 status=ok
// SIG undefined FUN_14421656c(void)

void FUN_14421656c(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    pcVar4 = *(char **)(param_1 + 0x1f0);
    lVar3 = (longlong)*(int *)(param_1 + 0x1f8) * 0x38;
    do {
      if (*pcVar4 == '\x01') {
        if ((((((pcVar4 != (char *)0x0) && (*(int *)(pcVar4 + 0xc) != 0)) &&
              (uVar1 = *(uint *)(pcVar4 + 8), -1 < (int)uVar1)) &&
             (((int)uVar1 < DAT_14c9647dc &&
              (plVar5 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
              plVar5 != (longlong *)0x0)))) &&
            (((int)plVar5[2] == *(int *)(pcVar4 + 0xc) &&
             (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) &&
           ((*(uint *)(*plVar5 + 8) >> 0x1e & 1) == 0)) goto LAB_14421667d;
        break;
      }
      pcVar4 = pcVar4 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
    pcVar4 = *(char **)(param_1 + 0x1d8);
    lVar3 = (longlong)*(int *)(param_1 + 0x1e0) * 0x70;
    do {
      if (*pcVar4 == '\x01') {
        if (pcVar4 != (char *)0x0) goto LAB_14421667d;
        break;
      }
      pcVar4 = pcVar4 + 0x70;
      lVar3 = lVar3 + -0x70;
    } while (lVar3 != 0);
  }
  if ((((*(int *)(param_1 + 0x7c) == 0) || (uVar1 = *(uint *)(param_1 + 0x78), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(param_1 + 0x7c))) ||
      (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 ||
       ((*plVar5 == 0 || (cVar2 = FUN_1403ca7ae(), cVar2 == '\0')))))))) {
    local_50 = &local_48;
    local_48 = 0;
    uStack_40 = 0;
    local_18 = 0;
    local_58 = 0;
    FUN_148dcd06e(param_1,1,0);
  }
LAB_14421667d:
  if ((local_10 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442166cc FUN_1442166cc body=199 status=ok
// SIG undefined FUN_1442166cc(void)

ulonglong FUN_1442166cc(longlong param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  
  uVar3 = 0;
  iVar1 = 0;
  if ((*(byte *)(param_1 + 0x260) & 1) != 0) {
    cVar5 = (char)param_2;
    if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
      lVar6 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + (uint)(*(char *)(*(longlong *)(param_1 + 0x1d8) + lVar6) == cVar5);
        lVar6 = lVar6 + 0x70;
      } while ((longlong)*(int *)(param_1 + 0x1e0) * 0x70 - lVar6 != 0);
    }
    iVar4 = 0;
    if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
      lVar6 = 0;
      iVar4 = 0;
      do {
        iVar4 = iVar4 + (uint)(*(char *)(*(longlong *)(param_1 + 0x1f0) + lVar6) == cVar5);
        lVar6 = lVar6 + 0x38;
      } while ((longlong)*(int *)(param_1 + 0x1f8) * 0x38 - lVar6 != 0);
    }
    iVar2 = FUN_148dcd7e8(*(undefined8 *)(param_1 + 0x170),param_2);
    if (iVar4 + iVar1 < iVar2) {
      uVar3 = 1;
      if (cVar5 == '\x01' && param_3 == '\0') {
        uVar3 = FUN_148dcd8de(param_1);
        uVar3 = uVar3 ^ 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 144216794 FUN_144216794 body=31 status=ok
// SIG undefined FUN_144216794(void)

byte FUN_144216794(undefined8 param_1,char param_2,char param_3)

{
  byte bVar1;
  
  bVar1 = 1;
  if (param_2 == '\x01' && param_3 == '\0') {
    bVar1 = FUN_148dcd8de();
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 1442167b4 FUN_1442167b4 body=1021 status=ok
// SIG undefined FUN_1442167b4(void)

bool FUN_1442167b4(longlong param_1,char *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  longlong *local_60;
  code *local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 == '\x01') {
    if (*(int *)(param_1 + 0x74) == 0) {
LAB_144216b5a:
      uVar13 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x70);
      uVar13 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar11 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar11 == (undefined8 *)0x0) ||
           ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x74) ||
            ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_144216b5a;
        uVar13 = *puVar11;
      }
    }
    if (param_2[8] == '\x01') {
      lVar14 = *(longlong *)(param_1 + 0x170) + 0x438;
    }
    else {
      lVar14 = *(longlong *)(param_1 + 0x170) + 0x1c0;
    }
LAB_1442168ba:
    if (lVar14 == 0) goto LAB_1442168c3;
    FUN_148dcda80(param_1,&local_68);
    local_78 = 0;
    FUN_140a41f04(local_68,&local_48,uVar13,lVar14);
    bVar8 = false;
  }
  else {
    if (*param_2 == '\x02') {
      if (*(int *)(param_2 + 0x10) == 0) {
LAB_144216b53:
        uVar13 = 0;
      }
      else {
        uVar2 = *(uint *)(param_2 + 0xc);
        uVar13 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar11 == (undefined8 *)0x0) ||
             ((*(int *)(puVar11 + 2) != *(int *)(param_2 + 0x10) ||
              ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_144216b53;
          uVar13 = *puVar11;
        }
      }
      lVar14 = *(longlong *)(param_1 + 0x170) + 0x6b0;
      goto LAB_1442168ba;
    }
LAB_1442168c3:
    local_48 = (longlong *)0x0;
    plStack_40 = (longlong *)0x0;
    bVar8 = true;
  }
  plVar5 = plStack_40;
  if ((longlong **)(param_2 + 0x38) != &local_48) {
    *(longlong **)(param_2 + 0x38) = local_48;
    local_48 = (longlong *)0x0;
    plVar4 = *(longlong **)(param_2 + 0x40);
    if (plStack_40 != plVar4) {
      plStack_40 = (longlong *)0x0;
      *(longlong **)(param_2 + 0x40) = plVar5;
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
    }
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_40 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((!bVar8) && (local_60 != (longlong *)0x0)) {
    LOCK();
    plVar5 = local_60 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar5 = *(longlong **)(param_2 + 0x38);
  if (plVar5 == (longlong *)0x0) goto LAB_144216986;
  local_58 = FUN_148dcdb4c;
  local_50 = 0;
  FUN_148dd3f84(&local_48,param_1);
  if (((int)plStack_40 == 0) || (local_48 == (longlong *)0x0)) {
LAB_144216b84:
    if ((int)plStack_40 == 0) goto LAB_144216b45;
    if (local_48 != (longlong *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_144216b38;
    }
  }
  else {
    cVar9 = (**(code **)(*local_48 + 0x30))();
    if (cVar9 == '\0') {
      goto LAB_144216b84;
    }
    plVar4 = plVar5 + 0x26;
    if (*(int *)((longlong)plVar5 + 0x144) < 1) {
      iVar3 = (int)plVar5[0x27];
      iVar10 = (int)plVar5[0x28] + -1;
      *(int *)(plVar5 + 0x28) = iVar10;
      if (iVar10 <= iVar3) {
        iVar10 = iVar3;
        if (0 < iVar3) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar4 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar6 = *(longlong **)(*plVar4 + (longlong)iVar12 * 0x10),
                plVar6 == (longlong *)0x0)) ||
               (cVar9 = (**(code **)(*plVar6 + 0x28))(), cVar9 != '\0')) {
              FUN_14005b288(plVar4,iVar12);
              FUN_14005b248(plVar4);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar10 = (int)plVar5[0x27];
          } while (iVar12 < iVar10);
        }
        iVar12 = 2;
        if (2 < iVar10 * 2) {
          iVar12 = iVar10 * 2;
        }
        *(int *)(plVar5 + 0x28) = iVar12;
        if ((iVar12 < iVar3) && (*(int *)((longlong)plVar5 + 0x13c) != iVar10)) {
          FUN_14045812c();
        }
      }
    }
    if (((int)plStack_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,&local_58);
    }
    iVar3 = (int)plVar5[0x27];
    lVar14 = (longlong)iVar3;
    *(uint *)(plVar5 + 0x27) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar5 + 0x13c) < iVar3 + 1U) {
      FUN_1447a71f6(plVar4,iVar3);
    }
    lVar7 = *plVar4;
    *(undefined8 *)(lVar7 + lVar14 * 0x10) = 0;
    *(undefined4 *)(lVar7 + (lVar14 * 2 + 1) * 8) = 0;
    *(longlong **)(lVar7 + lVar14 * 0x10) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar7 + (lVar14 * 2 + 1) * 8) = (int)plStack_40;
LAB_144216b38:
    plStack_40 = (longlong *)((ulonglong)plStack_40 & 0xffffffff00000000);
LAB_144216b45:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  param_2[1] = '\x01';
LAB_144216986:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5 != (longlong *)0x0;
}



// FUNCTION 144216bb2 FUN_144216bb2 body=806 status=ok
// SIG undefined FUN_144216bb2(void)

undefined8 FUN_144216bb2(longlong param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  int local_140;
  undefined8 local_138 [3];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [8];
  longlong local_b0;
  longlong *local_a8;
  undefined8 *local_70;
  int local_68;
  longlong local_60;
  undefined4 local_58;
  code *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_2[0x30] != '\x01') || (*(int *)(param_1 + 0x74) == 0)) {
LAB_144216c29:
    uVar7 = 0;
    goto LAB_144216c2b;
  }
  uVar4 = *(uint *)(param_1 + 0x70);
  uVar7 = 0;
  if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_144216c2b;
  plVar6 = (longlong *)
           ((ulonglong)((uVar4 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
  if ((((plVar6 == (longlong *)0x0) || ((int)plVar6[2] != *(int *)(param_1 + 0x74))) ||
      ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) || (lVar5 = *plVar6, lVar5 == 0))
  goto LAB_144216c29;
  cVar3 = *param_2;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = *(undefined4 *)(param_2 + 0x18);
  uStack_f4 = *(undefined4 *)(param_2 + 0x1c);
  uStack_f0 = (undefined4)*(undefined8 *)(param_2 + 0x20);
  uStack_ec = (undefined4)((ulonglong)*(undefined8 *)(param_2 + 0x20) >> 0x20);
  local_e8 = *(undefined8 *)(param_2 + 0x28);
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d4 = 0x3ff00000;
  uStack_d0 = 0;
  uStack_cc = 0x3ff00000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  FUN_148dcdc74(*(undefined8 *)(param_1 + 0x170),local_138,param_2);
  local_120 = local_138[0];
  FUN_1411374ca(local_b8,lVar5,&local_120,&local_118);
  FUN_140faf1c8(local_b8,lVar5);
  FUN_140faf27a(local_b8,*(undefined8 *)(lVar5 + 0x1b0));
  *(uint *)(local_b0 + 0x10) = (uint)CONCAT11(cVar3 == '\x01',cVar3 == '\x01');
  *(undefined4 *)(local_b0 + 0x14) = 0x44610000;
  *(undefined1 *)(local_b0 + 0x18) = 0;
  local_48 = FUN_144216eda;
  local_40 = (longlong *)((ulonglong)local_40._4_4_ << 0x20);
  FUN_148dcdcbe(&local_148,param_1,&local_48,param_2 + 4);
  FUN_140244c74(local_b0 + 0x120,&local_148);
  FUN_140faf12e(local_b8,&local_48);
  plVar1 = local_40;
  *(code **)(param_2 + 0x48) = local_48;
  local_48 = (code *)0x0;
  plVar6 = *(longlong **)(param_2 + 0x50);
  if (local_40 == plVar6) {
LAB_144216db8:
    plVar6 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  else {
    local_40 = (longlong *)0x0;
    *(longlong **)(param_2 + 0x50) = plVar1;
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
      goto LAB_144216db8;
    }
  }
  if (local_140 == 0) {
LAB_144216e11:
    if (local_148 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_148 != (undefined8 *)0x0) {
    (**(code **)*local_148)(local_148,0);
    FUN_1446efa72(&local_148,0,0,0x10);
    local_140 = 0;
    goto LAB_144216e11;
  }
  FUN_140861e20(local_60,local_58);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_68 == 0) {
LAB_144216e80:
    if (local_70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_70 != (undefined8 *)0x0) {
    (**(code **)*local_70)(local_70,0);
    FUN_1446efa72(&local_70,0,0,0x10);
    local_68 = 0;
    goto LAB_144216e80;
  }
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_a8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  uVar7 = 1;
LAB_144216c2b:
  if ((local_38 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 144216eda FUN_144216eda body=2724 status=ok
// SIG undefined FUN_144216eda(void)

void FUN_144216eda(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  undefined2 *puVar13;
  ulonglong uVar14;
  int iVar15;
  code ****ppppcVar16;
  undefined8 uVar17;
  longlong lVar18;
  char *pcVar19;
  undefined2 *puVar20;
  bool bVar21;
  undefined4 uVar22;
  undefined1 auStack_138 [32];
  undefined2 *local_118;
  char *local_108;
  undefined2 local_100;
  undefined2 uStack_fe;
  undefined4 uStack_fc;
  ushort local_e8;
  byte local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  undefined4 local_b0 [6];
  byte local_98;
  code ***local_88;
  int local_80;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (param_2 == 0) goto LAB_144216f0c;
  if ((longlong)*(int *)(param_1 + 0x1e0) != 0) {
    pcVar19 = *(char **)(param_1 + 0x1d8);
    lVar8 = (longlong)*(int *)(param_1 + 0x1e0) * 0x70;
    do {
      if (*(int *)(pcVar19 + 4) == param_3) goto LAB_144216f75;
      pcVar19 = pcVar19 + 0x70;
      lVar8 = lVar8 + -0x70;
    } while (lVar8 != 0);
  }
  pcVar19 = (char *)0x0;
LAB_144216f75:
  lVar8 = FUN_1458f2fc6();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
      != lVar8 + 0x30)) {
    param_2 = 0;
  }
  if (*(int *)(param_1 + 0x74) == 0) {
LAB_144216fe4:
    lVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x70);
    lVar8 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((plVar11 == (longlong *)0x0) ||
         ((((int)plVar11[2] != *(int *)(param_1 + 0x74) ||
           ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) || (*plVar11 == 0)))) goto LAB_144216fe4;
      lVar8 = FUN_1447210f0();
    }
  }
  lVar9 = FUN_148dcd55e(param_1);
  if ((((lVar8 == 0) || (pcVar19 == (char *)0x0)) || ((param_2 == 0 || (lVar9 == 0)))) ||
     (((*pcVar19 == '\x01' && (pcVar19[8] == '\0')) &&
      (cVar4 = FUN_148dcd8de(param_1), cVar4 != '\0')))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_138);
  }
  pcVar19[0x58] = '\0';
  pcVar19[0x59] = '\x01';
  pcVar10 = (char *)FUN_148dcdeb8(param_1 + 0x1f0);
  *pcVar10 = *pcVar19;
  local_108 = pcVar10 + 4;
  *(int *)(pcVar10 + 4) = param_3;
  *(float *)(pcVar10 + 0x10) = (float)*(double *)(lVar8 + 0x6d0);
  local_88 = (code ***)&DAT_148dcdef4;
  local_80 = 0;
  FUN_148dd48e6(&local_d8,param_1);
  if (((int)local_d0 == 0) || (local_d8 == (code *)0x0)) {
LAB_1442178ae:
    if ((int)local_d0 == 0) {
      ppppcVar16 = (code ****)0x0;
      goto LAB_144217214;
    }
    if (local_d8 != (code *)0x0) {
      ppppcVar16 = (code ****)0x0;
      (*(code *)**(undefined8 **)local_d8)(local_d8,0);
      FUN_1446efa72(&local_d8,0,0,0x10);
      goto LAB_144217207;
    }
    ppppcVar16 = (code ****)0x0;
  }
  else {
    cVar4 = (**(code **)(*(longlong *)local_d8 + 0x30))();
    if (cVar4 == '\0') {
      goto LAB_1442178ae;
    }
    plVar11 = (longlong *)(param_2 + 0x2d0);
    if (*(int *)(param_2 + 0x2e4) < 1) {
      iVar6 = *(int *)(param_2 + 0x2d8);
      iVar5 = *(int *)(param_2 + 0x2e0) + -1;
      *(int *)(param_2 + 0x2e0) = iVar5;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
        if (0 < iVar6) {
          iVar15 = 0;
          do {
            if (((*(int *)(*plVar11 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar11 + (longlong)iVar15 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar11,iVar15);
              FUN_14005b248(plVar11);
            }
            else {
              iVar15 = iVar15 + 1;
            }
            iVar5 = *(int *)(param_2 + 0x2d8);
          } while (iVar15 < iVar5);
        }
        iVar15 = 2;
        if (2 < iVar5 * 2) {
          iVar15 = iVar5 * 2;
        }
        *(int *)(param_2 + 0x2e0) = iVar15;
        if ((iVar15 < iVar6) && (*(int *)(param_2 + 0x2dc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    ppppcVar16 = (code ****)0x0;
    if (((int)local_d0 != 0) && (local_d8 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_d8 + 0x38))(local_d8,&local_88);
      ppppcVar16 = (code ****)local_88;
    }
    iVar6 = *(int *)(param_2 + 0x2d8);
    *(uint *)(param_2 + 0x2d8) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x2dc) < iVar6 + 1U) {
      FUN_1447a71f6(plVar11,iVar6);
    }
    lVar8 = *plVar11;
    lVar18 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar8 + lVar18) = 0;
    *(undefined4 *)(lVar8 + 8 + lVar18) = 0;
    *(code **)(lVar8 + lVar18) = local_d8;
    local_d8 = (code *)0x0;
    *(int *)(lVar8 + 8 + lVar18) = (int)local_d0;
LAB_144217207:
    local_d0 = local_d0 & 0xffffffff00000000;
LAB_144217214:
    if (local_d8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  *(code *****)(pcVar10 + 0x28) = ppppcVar16;
  uVar7 = *(uint *)(param_2 + 0xc);
  *(uint *)(pcVar10 + 8) = uVar7;
  if ((int)uVar7 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar6 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar5 = DAT_14c964868 + 1;
    bVar21 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar21) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar5);
    }
    LOCK();
    iVar6 = *(int *)(lVar8 + 0x10);
    bVar21 = iVar6 == 0;
    if (bVar21) {
      *(int *)(lVar8 + 0x10) = iVar5;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar21) {
      iVar6 = iVar5;
    }
  }
  *(int *)(pcVar10 + 0xc) = iVar6;
  uVar17 = 0;
  FUN_148dccc24(param_1,pcVar10,0);
  if (*(longlong *)(param_2 + 0x9cd8) != 0) {
    if (pcVar19[8] == '\0') {
      uVar14 = CONCAT71((int7)((ulonglong)uVar17 >> 8),*(undefined1 *)(param_1 + 0x260)) &
               0xffffffffffffff02;
      uVar17 = CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 >> 1);
    }
    else {
      uVar17 = 0;
    }
    FUN_148baa008(*(longlong *)(param_2 + 0x9cd8),*pcVar10,uVar17);
    uVar7 = FUN_145c20224(param_1);
    cVar4 = (char)uVar7;
    if (*(char *)(param_2 + 0x9ce0) != cVar4) {
      *(char *)(param_2 + 0x9ce0) = cVar4;
      if (*(char *)(param_2 + 0x9ce1) != cVar4) {
        if (*(longlong *)(param_2 + 0x9cd8) != 0) {
          FUN_148baa2a8(*(longlong *)(param_2 + 0x9cd8),*(char *)(param_2 + 0x9ce1),uVar7);
          uVar7 = (uint)*(byte *)(param_2 + 0x9ce0);
        }
        *(char *)(param_2 + 0x9ce1) = (char)uVar7;
      }
    }
  }
  local_d8._0_2_ = CONCAT11(*pcVar10,1);
  if (((((*(int *)(pcVar10 + 0xc) == 0) || (uVar7 = *(uint *)(pcVar10 + 8), (int)uVar7 < 0)) ||
       (DAT_14c9647dc <= (int)uVar7)) ||
      ((puVar12 = (ulonglong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       puVar12 == (ulonglong *)0x0 || ((int)puVar12[2] != *(int *)(pcVar10 + 0xc))))) ||
     ((puVar12[1] & 0x10200000) != 0)) {
    local_d0 = 0;
  }
  else {
    local_d0 = *puVar12;
    if ((local_d0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  if ((((*(int *)(pcVar19 + 0x10) == 0) || (uVar7 = *(uint *)(pcVar19 + 0xc), (int)uVar7 < 0)) ||
      (DAT_14c9647dc <= (int)uVar7)) ||
     (((local_c8 = (longlong *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       local_c8 == (longlong *)0x0 || ((int)local_c8[2] != *(int *)(pcVar19 + 0x10))) ||
      ((*(uint *)(local_c8 + 1) & 0x10200000) != 0)))) {
    local_c8 = (longlong *)0x0;
  }
  else {
    local_c8 = (longlong *)*local_c8;
    if ((local_c8 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  FUN_148ba9f07(param_1 + 0x250,&local_d8);
  if (*pcVar10 == '\x02') {
    lVar8 = *(longlong *)(param_1 + 0x170);
    local_d8 = (code *)((ulonglong)local_d8 & 0xffffffffffffff00);
    local_b0[0] = 0;
    FUN_14575a19a(&local_d8,0);
    puVar20 = &local_100;
    puVar13 = puVar20;
    FUN_1448729ea(lVar8 + 0x940,puVar20,&local_d8);
    if (local_e0 == 3) {
      uVar7 = 3;
      uVar22 = CONCAT22(uStack_fe,local_100);
    }
    else {
      puVar13 = &local_100;
      FUN_1400b56fe(&local_88,puVar13,3);
      if (local_68 == 0) {
        uVar22 = 0x40a00000;
      }
      else {
        uVar22 = local_88._0_4_;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar3 != (code *)0x0) {
        ppppcVar16 = &local_88;
        if (0x18 < local_70) {
          ppppcVar16 = (code ****)local_88;
        }
        (*pcVar3)(ppppcVar16);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(local_88);
      }
      uVar7 = (uint)local_e0;
    }
    *(undefined4 *)(pcVar10 + 0x14) = uVar22;
    pcVar10[0x18] = '\x01';
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_e8) {
        puVar20 = (undefined2 *)CONCAT44(uStack_fc,CONCAT22(uStack_fe,local_100));
      }
      (*pcVar3)(puVar20);
    }
    if (0x18 < local_e8) {
      FUN_1400020a8(CONCAT44(uStack_fc,CONCAT22(uStack_fe,local_100)));
    }
    FUN_1448173f8(local_b0);
    if (((char)local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
    if (*(longlong *)(param_2 + 0x9cd8) != 0) {
      uVar14 = CONCAT71((int7)((ulonglong)puVar13 >> 8),*(undefined1 *)(param_1 + 0x260)) &
               0xffffffffffffff02;
      FUN_148baa394(*(longlong *)(param_2 + 0x9cd8),CONCAT71((int7)(uVar14 >> 8),(byte)uVar14 >> 1))
      ;
    }
    uVar22 = *(undefined4 *)(pcVar10 + 0x14);
    local_d8 = FUN_148dce1ba;
    local_d0 = local_d0 & 0xffffffff00000000;
    FUN_148dce02a(&local_88,param_1,&local_d8,local_108);
    local_d8 = (code *)0x0;
    local_d0 = local_d0 & 0xffffffff00000000;
    FUN_14487d8d8(&local_d8,&local_88);
    local_98 = 1;
    local_118 = &local_100;
    local_100 = 0;
    uStack_fc = 0xbf800000;
    FUN_1406f4044(lVar9,pcVar10 + 0x20,&local_d8,uVar22);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_98])(&local_d8);
    if (local_80 != 0) {
      if ((code ****)local_88 == (code ****)0x0) goto LAB_14421774a;
      (***local_88)(local_88,0);
      FUN_1446efa72(&local_88,0,0,0x10);
      local_80 = 0;
    }
    if ((code ****)local_88 != (code ****)0x0) {
      FUN_1400020a8();
    }
  }
  else if (*pcVar10 == '\x01') {
    local_88 = (code ***)FUN_148dcdf38;
    local_80 = 0;
    FUN_148dd4df8(&local_d8,param_1,&local_88,local_108);
    if (((int)local_d0 == 0) || (local_d8 == (code *)0x0)) {
LAB_144217907:
      if ((int)local_d0 == 0) {
        ppppcVar16 = (code ****)0x0;
        goto LAB_14421773d;
      }
      if (local_d8 != (code *)0x0) {
        ppppcVar16 = (code ****)0x0;
        (*(code *)**(undefined8 **)local_d8)(local_d8,0);
        FUN_1446efa72(&local_d8,0,0,0x10);
        goto LAB_144217730;
      }
      ppppcVar16 = (code ****)0x0;
    }
    else {
      cVar4 = (**(code **)(*(longlong *)local_d8 + 0x30))();
      if (cVar4 == '\0') {
        goto LAB_144217907;
      }
      plVar11 = (longlong *)(param_2 + 0x4e80);
      if (*(int *)(param_2 + 0x4e94) < 1) {
        iVar6 = *(int *)(param_2 + 0x4e88);
        iVar5 = *(int *)(param_2 + 0x4e90) + -1;
        *(int *)(param_2 + 0x4e90) = iVar5;
        if (iVar5 <= iVar6) {
          iVar5 = iVar6;
          if (0 < iVar6) {
            iVar15 = 0;
            do {
              if (((*(int *)(*plVar11 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                  (plVar2 = *(longlong **)(*plVar11 + (longlong)iVar15 * 0x10),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar11,iVar15);
                FUN_14005b248(plVar11);
              }
              else {
                iVar15 = iVar15 + 1;
              }
              iVar5 = *(int *)(param_2 + 0x4e88);
            } while (iVar15 < iVar5);
          }
          iVar15 = 2;
          if (2 < iVar5 * 2) {
            iVar15 = iVar5 * 2;
          }
          *(int *)(param_2 + 0x4e90) = iVar15;
          if ((iVar15 < iVar6) && (*(int *)(param_2 + 0x4e8c) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      ppppcVar16 = (code ****)0x0;
      if (((int)local_d0 != 0) && (local_d8 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_d8 + 0x38))(local_d8,&local_88);
        ppppcVar16 = (code ****)local_88;
      }
      iVar6 = *(int *)(param_2 + 0x4e88);
      *(uint *)(param_2 + 0x4e88) = iVar6 + 1U;
      if (*(uint *)(param_2 + 0x4e8c) < iVar6 + 1U) {
        FUN_1447a71f6(plVar11,iVar6);
      }
      lVar8 = *plVar11;
      lVar9 = (longlong)iVar6 * 0x10;
      *(undefined8 *)(lVar8 + lVar9) = 0;
      *(undefined4 *)(lVar8 + 8 + lVar9) = 0;
      *(code **)(lVar8 + lVar9) = local_d8;
      local_d8 = (code *)0x0;
      *(int *)(lVar8 + 8 + lVar9) = (int)local_d0;
LAB_144217730:
      local_d0 = local_d0 & 0xffffffff00000000;
LAB_14421773d:
      if (local_d8 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(code *****)(pcVar10 + 0x30) = ppppcVar16;
  }
LAB_14421774a:
  cVar4 = pcVar19[8];
  FUN_148dce298(param_1,pcVar10);
  FUN_148dcd9d6(param_1,*(undefined4 *)(pcVar19 + 4));
  FUN_148dce340(param_1);
  if ((cVar4 == '\0') && (*(char *)(param_2 + 0x9cd0) == '\0')) {
    *(undefined1 *)(param_2 + 0x9cd0) = 1;
    *(byte *)(param_2 + 0x9cf8) = *(byte *)(param_2 + 0x60) >> 7;
  }
LAB_144216f0c:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442179c0 FUN_1442179c0 body=48 status=ok
// SIG undefined FUN_1442179c0(void)

longlong FUN_1442179c0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_1410bacb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1442179f8 FUN_1442179f8 body=48 status=ok
// SIG undefined FUN_1442179f8(void)

longlong FUN_1442179f8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x398;
  FUN_1410bacb4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144217a48 FUN_144217a48 body=38 status=ok
// SIG undefined FUN_144217a48(void)

undefined8 FUN_144217a48(undefined8 param_1,int param_2)

{
  FUN_1458888c8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144217a7a FUN_144217a7a body=91 status=ok
// SIG undefined FUN_144217a7a(void)

bool FUN_144217a7a(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144217aaa;
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
LAB_144217aaa:
  return lVar6 == param_2;
}



// FUNCTION 144217af2 FUN_144217af2 body=64 status=ok
// SIG undefined FUN_144217af2(void)

undefined8 * FUN_144217af2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b999830;
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



// FUNCTION 144217b36 FUN_144217b36 body=81 status=ok
// SIG undefined FUN_144217b36(void)

undefined8 FUN_144217b36(longlong param_1)

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



// FUNCTION 144217b8e FUN_144217b8e body=89 status=ok
// SIG undefined FUN_144217b8e(void)

bool FUN_144217b8e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_144217bd9;
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
LAB_144217bd9:
  return lVar6 == param_2;
}



// FUNCTION 144217c10 FUN_144217c10 body=118 status=ok
// SIG undefined FUN_144217c10(void)

void FUN_144217c10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9998a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999830;
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



// FUNCTION 144217c86 FUN_144217c86 body=118 status=ok
// SIG undefined FUN_144217c86(void)

void FUN_144217c86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9998a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999830;
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



// FUNCTION 144217cfc FUN_144217cfc body=156 status=ok
// SIG undefined FUN_144217cfc(void)

void FUN_144217cfc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9998a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b999830;
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
                    /* WARNING: Could not recover jumptable at 0x000144217d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144217d98 FUN_144217d98 body=104 status=ok
// SIG undefined FUN_144217d98(void)

void FUN_144217d98(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000144217de5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000144217df6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 144217e00 FUN_144217e00 body=101 status=ok
// SIG undefined FUN_144217e00(void)

ulonglong FUN_144217e00(longlong param_1)

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
LAB_144217e5a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_144217e5a;
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



// FUNCTION 144217e68 FUN_144217e68 body=29 status=ok
// SIG undefined FUN_144217e68(void)

undefined8 FUN_144217e68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144217e9a FUN_144217e9a body=93 status=ok
// SIG undefined FUN_144217e9a(void)

void FUN_144217e9a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144217ef8 FUN_144217ef8 body=93 status=ok
// SIG undefined FUN_144217ef8(void)

void FUN_144217ef8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144217f56 FUN_144217f56 body=126 status=ok
// SIG undefined FUN_144217f56(void)

void FUN_144217f56(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b999910;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144217fc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144217fea FUN_144217fea body=91 status=ok
// SIG undefined FUN_144217fea(void)

bool FUN_144217fea(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14421801a;
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
LAB_14421801a:
  return lVar6 == param_2;
}



// FUNCTION 144218062 FUN_144218062 body=117 status=ok
// SIG undefined FUN_144218062(void)

longlong FUN_144218062(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = FUN_14049cbd6();
  if (lVar2 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar2 + 0x178) != 0) {
    lVar3 = FUN_14030d660();
    lVar2 = *(longlong *)(lVar2 + 0x178);
    if (lVar2 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0)) goto LAB_1442180c3;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar2;
        }
        goto LAB_1442180c3;
      }
    }
  }
  lVar4 = 0;
LAB_1442180c3:
  lVar2 = lVar4 + 0x658;
  if (lVar4 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1442180d8 FUN_1442180d8 body=494 status=ok
// SIG undefined FUN_1442180d8(void)

undefined8 FUN_1442180d8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if ((*(longlong *)(lVar2 + 0x18) == 0) ||
     (lVar3 = *param_1, *(longlong *)(lVar3 + 8) != *(longlong *)(lVar2 + 0x18))) {
    uVar7 = 0;
    goto LAB_144218280;
  }
  lVar10 = *(longlong *)(lVar2 + 0x60);
  if (lVar10 == 0) {
    uVar7 = FUN_145c20674();
    lVar10 = FUN_14477b664(uVar7);
    *(longlong *)(lVar2 + 0x60) = lVar10;
  }
  lVar8 = *(longlong *)(lVar2 + 0x68);
  if (((lVar8 == 0) && (lVar8 = 0, lVar10 != 0)) && (*(longlong *)(lVar2 + 0x58) != 0)) {
    plVar4 = *(longlong **)(lVar10 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
LAB_1442182c0:
      lVar8 = 0;
    }
    else {
      cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar6 == '\0') goto LAB_1442182c0;
      uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
      lVar8 = FUN_144aff482(uVar7,(longlong *)(lVar2 + 0x58));
    }
    *(longlong *)(lVar2 + 0x68) = lVar8;
  }
  uVar7 = FUN_140c54336();
  cVar6 = FUN_1448093f4(lVar8,uVar7);
  lVar10 = 0;
  if (cVar6 != '\0') {
    lVar10 = lVar8;
  }
  if (*(longlong *)(lVar3 + 0x48) == 0) {
    uVar7 = FUN_140c54336();
    uVar7 = FUN_14477b664(uVar7);
    *(undefined8 *)(lVar3 + 0x48) = uVar7;
  }
  lVar8 = FUN_140c54336();
  uVar7 = FUN_140c54336();
  FUN_1402d1bfa(&local_38,uVar7,lVar10);
  if (*(longlong *)(lVar3 + 0x40) != local_38) {
    *(undefined8 *)(lVar3 + 0x50) = 0;
  }
  *(longlong *)(lVar3 + 0x40) = local_38;
  lVar9 = FUN_140c54336();
  if (lVar8 == 0) {
LAB_14421820a:
    lVar9 = lVar8;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_14421820a;
  if (*(longlong *)(lVar3 + 0x48) != lVar9) {
    *(undefined8 *)(lVar3 + 0x50) = 0;
  }
  uVar7 = FUN_14477b664(lVar9);
  lVar8 = FUN_14477b664(uVar7);
  *(longlong *)(lVar3 + 0x48) = lVar8;
  if ((lVar8 != 0) && (*(longlong *)(lVar3 + 0x40) != 0)) {
    *(longlong *)(lVar3 + 0x50) = lVar10;
  }
  plVar4 = *(longlong **)(lVar2 + 0x20);
  plVar5 = *(longlong **)(lVar3 + 0xb8);
  if (plVar5 != plVar4) {
    *(longlong **)(lVar3 + 0xb8) = plVar4;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 8))();
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  uVar1 = *(undefined4 *)(lVar2 + 0x28);
  *(undefined4 *)(lVar3 + 0xc0) = uVar1;
  uVar7 = CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
LAB_144218280:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442182c8 FUN_1442182c8 body=3777 status=ok
// SIG undefined FUN_1442182c8(void)

void FUN_1442182c8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  void *pvVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  byte bVar19;
  uint *puVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined2 *puVar30;
  ulonglong uVar31;
  uint uVar32;
  undefined8 *puVar33;
  uint uVar34;
  int iVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  int iVar39;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar21 = *param_2;
  if ((lVar21 == 0) || (lVar36 = *(longlong *)(lVar21 + 0x20), lVar36 == 0)) goto LAB_144218c33;
  lVar38 = *param_1;
  plVar27 = (longlong *)(lVar38 + 0x390);
  uVar4 = *(undefined8 *)(lVar21 + 0x28);
  uVar13 = (uint)((ulonglong)uVar4 >> 0x10);
  uVar34 = (uint)uVar4 & 0xffff;
  uVar23 = (uint)((ulonglong)lVar36 >> 0x10);
  uVar32 = (uint)lVar36 & 0xffff;
  uVar23 = ((uint)lVar36 << 0x10 | uVar32) + (int)((ulonglong)lVar36 >> 0x20) +
           (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar32 >> 4);
  uVar23 = (uint)uVar4 * 0x10000 + uVar34 + (int)((ulonglong)uVar4 >> 0x20) +
           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar34 >> 4) + -0x61c88647 +
           (uVar23 >> 2) + uVar23 * 0x40 ^ uVar23;
  uVar32 = uVar23 >> 0xd ^ -uVar23;
  uVar13 = uVar32 << 8 ^ (-0x61c88647 - uVar23) - uVar32;
  uVar23 = uVar13 >> 0xd ^ (uVar23 - uVar32) - uVar13;
  uVar32 = uVar23 >> 0xc ^ (uVar32 - uVar13) - uVar23;
  uVar13 = uVar32 << 0x10 ^ (uVar13 - uVar23) - uVar32;
  uVar23 = uVar13 >> 5 ^ (uVar23 - uVar32) - uVar13;
  uVar29 = uVar23 >> 3 ^ (uVar32 - uVar13) - uVar23;
  uVar32 = uVar29 << 10 ^ (uVar13 - uVar23) - uVar29;
  iVar15 = *(int *)(lVar21 + 0x38);
  uVar34 = 0;
  uVar13 = iVar15 - 1;
  if (iVar15 == 0) {
    uVar13 = uVar34;
  }
  if (0 < (int)uVar13) {
    if (iVar15 == 0) {
      puVar30 = &DAT_149dfb77a;
    }
    else {
      puVar30 = *(undefined2 **)(lVar21 + 0x30);
    }
    lVar36 = 0;
    uVar34 = 0;
    do {
      uVar14 = ((uint)(ushort)puVar30[lVar36] + (uint)(0x19 < (ushort)puVar30[lVar36] - 0x61) * 0x20
               ) - 0x20;
      uVar34 = uVar34 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar34 ^ uVar14) & 0xff) * 4);
      uVar34 = uVar34 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar14 >> 8 & 0xff) * 4);
      lVar36 = lVar36 + 1;
    } while (uVar13 != (uint)lVar36);
  }
  uVar13 = uVar34 >> 0xd ^ (uVar32 >> 0xf ^ uVar23 - (uVar29 + uVar32)) - uVar34;
  uVar23 = uVar13 << 8 ^ (-0x61c88647 - uVar34) - uVar13;
  uVar34 = uVar23 >> 0xd ^ (uVar34 - uVar13) - uVar23;
  uVar32 = uVar34 >> 0xc ^ (uVar13 - uVar23) - uVar34;
  uVar13 = uVar32 << 0x10 ^ (uVar23 - uVar34) - uVar32;
  uVar23 = uVar13 >> 5 ^ (uVar34 - uVar32) - uVar13;
  uVar32 = uVar23 >> 3 ^ (uVar32 - uVar13) - uVar23;
  uVar13 = uVar32 << 10 ^ (uVar13 - uVar23) - uVar32;
  uVar13 = uVar13 >> 0xf ^ uVar23 - (uVar32 + uVar13);
  iVar15 = FUN_1415c634e(plVar27,uVar13,(undefined4 *)(lVar21 + 0x20));
  if (iVar15 == -1) {
LAB_144218533:
    if (*(int *)(lVar38 + 0x3c4) == 0) {
      iVar15 = *(int *)(lVar38 + 0x398);
      *(int *)(lVar38 + 0x398) = iVar15 + 1;
      if (*(int *)(lVar38 + 0x39c) == iVar15) {
        FUN_1410fd1ac(plVar27,iVar15);
      }
      iVar35 = *(int *)(lVar38 + 0x3b8);
      if (iVar35 == 0) {
        iVar16 = -1;
      }
      else {
        iVar16 = iVar35 + 0x1e;
        if (-1 < iVar35 + -1) {
          iVar16 = iVar35 + -1;
        }
        iVar16 = iVar16 >> 5;
      }
      puVar33 = (undefined8 *)(lVar38 + 0x3a0);
      iVar24 = iVar35 + 1;
      iVar39 = iVar35 + 0x1f;
      if (-1 < iVar35) {
        iVar39 = iVar35;
      }
      if (iVar39 >> 5 == iVar16) {
        *(int *)(lVar38 + 0x3b8) = iVar24;
      }
      else {
        if (*(int *)(lVar38 + 0x3bc) <= iVar35) {
          iVar16 = iVar35;
          local_a8 = puVar33;
          if (iVar35 + 0x20U < 0xa0) {
            iVar24 = 0x80;
          }
          else {
            uVar23 = iVar35 + 0x20U >> 5;
            local_a0 = (ulonglong)uVar23;
            if (*(int *)(lVar38 + 0x3bc) + 0x1fU < 0xa0) {
              uVar32 = 4;
              if (4 < uVar23) {
                uVar32 = uVar23;
              }
            }
            else {
              uVar32 = uVar23 + (uVar23 * 3 >> 3) + 0x10;
            }
            uVar22 = (ulonglong)(uVar32 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar23 = (uint)(uVar22 + 0xf);
                if (uVar32 < 0x1ffd) {
                  uVar22 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar23 >> 4]];
                }
                else {
                  uVar26 = uVar22 + 0xf & 0xfffffffffffffff0;
                  if (uVar26 < 0x7ff1) {
                    bVar19 = (&DAT_14c841e00)[uVar23 >> 4];
                    uVar28 = 0x32;
                    if (0x32 < bVar19) {
                      uVar28 = (ulonglong)bVar19;
                    }
                    uVar31 = 0x32 - (ulonglong)bVar19;
                    do {
                      uVar22 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0) goto LAB_144218e45;
                      lVar36 = uVar28 + 1 + uVar31;
                      uVar31 = uVar31 - 1;
                    } while (lVar36 != 0x33);
                  }
                  uVar22 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar22 = (ulonglong)DAT_14c841df8;
                  }
                  uVar22 = -uVar22 & (uVar26 + uVar22) - 1;
                }
              }
              else {
                uVar22 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar22,0);
                iVar16 = *(int *)(lVar38 + 0x3b8);
              }
            }
LAB_144218e45:
            iVar17 = (int)(uVar22 >> 2);
            iVar24 = -0x20;
            if ((int)local_a0 <= iVar17) {
              iVar24 = iVar17 << 5;
            }
          }
          *(int *)(lVar38 + 0x3bc) = iVar24;
          FUN_1446efbd8(local_a8,iVar16);
          iVar24 = *(int *)(lVar38 + 0x3b8) + 1;
          puVar33 = local_a8;
        }
        iVar16 = iVar24 + 0x1f;
        if (-1 < iVar24) {
          iVar16 = iVar24;
        }
        *(int *)(lVar38 + 0x3b8) = iVar24;
        if (iVar24 % 0x20 != 0) {
          puVar25 = *(undefined8 **)(lVar38 + 0x3b0);
          if (*(undefined8 **)(lVar38 + 0x3b0) == (undefined8 *)0x0) {
            puVar25 = puVar33;
          }
          bVar19 = -(char)(iVar24 % 0x20);
          *(uint *)((longlong)puVar25 + (longlong)(iVar16 >> 5) * 4) =
               (uint)(*(int *)((longlong)puVar25 + (longlong)(iVar16 >> 5) * 4) << (bVar19 & 0x1f))
               >> (bVar19 & 0x1f);
        }
      }
      lVar36 = (longlong)iVar15;
      if (*(undefined8 **)(lVar38 + 0x3b0) != (undefined8 *)0x0) {
        puVar33 = *(undefined8 **)(lVar38 + 0x3b0);
      }
      bVar19 = (byte)iVar35 & 0x1f;
      puVar1 = (uint *)((longlong)puVar33 + (longlong)(iVar39 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
    }
    else {
      iVar15 = *(int *)(lVar38 + 0x3c0);
      lVar36 = (longlong)iVar15;
      iVar35 = *(int *)(*(longlong *)(lVar38 + 0x390) + 4 + lVar36 * 0x78);
      *(int *)(lVar38 + 0x3c0) = iVar35;
      iVar16 = *(int *)(lVar38 + 0x3c4) + -1;
      *(int *)(lVar38 + 0x3c4) = iVar16;
      if (iVar16 != 0) {
        *(undefined4 *)(*(longlong *)(lVar38 + 0x390) + (longlong)iVar35 * 0x78) = 0xffffffff;
      }
    }
    lVar18 = lVar38 + 0x3a0;
    if (*(longlong *)(lVar38 + 0x3b0) != 0) {
      lVar18 = *(longlong *)(lVar38 + 0x3b0);
    }
    iVar35 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar35 = iVar15;
    }
    puVar1 = (uint *)(lVar18 + (longlong)(iVar35 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
    lVar18 = *(longlong *)(lVar38 + 0x390);
    lVar36 = lVar36 * 0x78;
    pvVar6 = (void *)(lVar18 + lVar36);
    local_78 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_70 = 0x8000000000;
    local_68 = 0xffffffff;
    uVar7 = *(undefined4 *)(lVar21 + 0x24);
    uVar8 = *(undefined4 *)(lVar21 + 0x28);
    uVar9 = *(undefined4 *)(lVar21 + 0x2c);
    puVar3 = (undefined4 *)(lVar18 + lVar36);
    *puVar3 = *(undefined4 *)(lVar21 + 0x20);
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    *(undefined8 *)(lVar18 + 0x10 + lVar36) = 0;
    iVar35 = *(int *)(lVar21 + 0x38);
    pvVar5 = *(void **)(lVar21 + 0x30);
    *(int *)(lVar18 + 0x18 + lVar36) = iVar35;
    if ((longlong)iVar35 == 0) {
      *(undefined4 *)((longlong)pvVar6 + 0x1c) = 0;
    }
    else {
      local_a8 = (undefined8 *)(lVar18 + lVar36 + 0x10);
      FUN_1446dd670(local_a8,iVar35,0);
      memcpy((void *)*local_a8,pvVar5,(longlong)iVar35 * 2);
    }
    *(undefined8 *)((longlong)pvVar6 + 0x40) = 0;
    *(undefined4 *)((longlong)pvVar6 + 0x48) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x20) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x28) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x4c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)pvVar6 + 0x54) = 0;
    if ((undefined8 *)((longlong)pvVar6 + 0x20) != &local_98) {
      local_98 = 0;
      uStack_90 = 0;
      *(undefined8 *)((longlong)pvVar6 + 0x30) = local_88;
      *(undefined8 *)((longlong)pvVar6 + 0x38) = uStack_80;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0xffffffff;
    }
    *(undefined4 *)((longlong)pvVar6 + 0x58) = 0;
    *(undefined8 *)((longlong)pvVar6 + 0x60) = 0;
    local_58 = 0;
    *(undefined4 *)((longlong)pvVar6 + 0x68) = 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    FUN_1411b0b54();
    *(undefined4 *)((longlong)pvVar6 + 0x70) = 0xffffffff;
    uVar23 = *(int *)(lVar38 + 0x398) - *(int *)(lVar38 + 0x3c4);
    iVar35 = 1;
    if (uVar23 == 1) {
LAB_144218738:
      if (((int)uVar23 < 1) || (iVar35 <= *(int *)(lVar38 + 0x3d8))) {
        uVar13 = *(int *)(lVar38 + 0x3d8) - 1U & uVar13;
        *(uint *)((longlong)pvVar6 + 0x74) = uVar13;
        lVar36 = *(longlong *)(lVar38 + 0x3d0);
        if (*(longlong *)(lVar38 + 0x3d0) == 0) {
          lVar36 = lVar38 + 0x3c8;
        }
        *(undefined4 *)((longlong)pvVar6 + 0x70) =
             *(undefined4 *)
              (lVar36 + ((longlong)*(int *)(lVar38 + 0x3d8) - 1U & (longlong)(int)uVar13) * 4);
        lVar36 = *(longlong *)(lVar38 + 0x3d0);
        if (*(longlong *)(lVar38 + 0x3d0) == 0) {
          lVar36 = lVar38 + 0x3c8;
        }
        *(int *)(lVar36 + ((longlong)*(int *)(lVar38 + 0x3d8) - 1U & (longlong)(int)uVar13) * 4) =
             iVar15;
      }
      else {
        *(int *)(lVar38 + 0x3d8) = iVar35;
        FUN_1418f09c2(plVar27);
      }
    }
    else {
      iVar16 = FUN_1415c634e(plVar27,uVar13,pvVar6);
      if (iVar16 == -1) {
        if (3 < uVar23) {
          uVar22 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
          lVar36 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar36 == 0; lVar36 = lVar36 + -1) {
            }
          }
          iVar35 = 1 << ((byte)lVar36 & 0x1f);
        }
        goto LAB_144218738;
      }
      pvVar5 = (void *)(*plVar27 + (longlong)iVar16 * 0x78);
      lVar36 = *plVar27 + (longlong)iVar16 * 0x78;
      *(undefined4 *)(lVar36 + 0x68) = 0;
      if (*(longlong *)(lVar36 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_1411b0b54(lVar36 + 0x20);
      if (*(longlong *)((longlong)pvVar5 + 0x10) != 0) {
        FUN_1400020a8();
      }
      memmove(pvVar5,pvVar6,0x70);
      FUN_148dd2904(plVar27,iVar15);
    }
    lVar36 = *plVar27 + (longlong)iVar15 * 0x78;
  }
  else {
    if (*plVar27 + (longlong)iVar15 * 0x78 == 0) goto LAB_144218533;
    lVar36 = *plVar27 + (longlong)iVar15 * 0x78;
  }
  plVar27 = (longlong *)(lVar36 + 0x20);
  lVar38 = *(longlong *)(lVar21 + 0x40);
  if (*(int *)(lVar36 + 0x54) == 0) {
    iVar15 = *(int *)(lVar36 + 0x28);
    *(int *)(lVar36 + 0x28) = iVar15 + 1;
    if (*(int *)(lVar36 + 0x2c) == iVar15) {
      FUN_1447030e2(plVar27,iVar15);
    }
    iVar35 = *(int *)(lVar36 + 0x48);
    if (iVar35 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar35 + 0x1e;
      if (-1 < iVar35 + -1) {
        iVar16 = iVar35 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    lVar37 = lVar36 + 0x30;
    iVar24 = iVar35 + 1;
    iVar39 = iVar35 + 0x1f;
    if (-1 < iVar35) {
      iVar39 = iVar35;
    }
    if (iVar39 >> 5 == iVar16) {
      *(int *)(lVar36 + 0x48) = iVar24;
    }
    else {
      if (*(int *)(lVar36 + 0x4c) <= iVar35) {
        iVar16 = iVar35;
        if (iVar35 + 0x20U < 0xa0) {
          iVar24 = 0x80;
        }
        else {
          uVar13 = iVar35 + 0x20U >> 5;
          if (*(int *)(lVar36 + 0x4c) + 0x1fU < 0xa0) {
            uVar23 = 4;
            if (4 < uVar13) {
              uVar23 = uVar13;
            }
          }
          else {
            uVar23 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
          }
          uVar22 = (ulonglong)(uVar23 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar32 = (uint)(uVar22 + 0xf);
              if (uVar23 < 0x1ffd) {
                uVar22 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar32 >> 4]];
              }
              else {
                uVar26 = uVar22 + 0xf & 0xfffffffffffffff0;
                if (uVar26 < 0x7ff1) {
                  bVar19 = (&DAT_14c841e00)[uVar32 >> 4];
                  uVar28 = 0x32;
                  if (0x32 < bVar19) {
                    uVar28 = (ulonglong)bVar19;
                  }
                  uVar31 = 0x32 - (ulonglong)bVar19;
                  do {
                    uVar22 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar31 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar31 & 0xffffffff] & 0xf) == 0) goto LAB_144218d7b;
                    lVar18 = uVar28 + 1 + uVar31;
                    uVar31 = uVar31 - 1;
                  } while (lVar18 != 0x33);
                }
                uVar22 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar22 = (ulonglong)DAT_14c841df8;
                }
                uVar22 = -uVar22 & (uVar26 + uVar22) - 1;
              }
            }
            else {
              uVar22 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar22,0);
              iVar16 = *(int *)(lVar36 + 0x48);
            }
          }
LAB_144218d7b:
          iVar17 = (int)(uVar22 >> 2);
          iVar24 = -0x20;
          if ((int)uVar13 <= iVar17) {
            iVar24 = iVar17 << 5;
          }
        }
        *(int *)(lVar36 + 0x4c) = iVar24;
        FUN_1446efbd8(lVar37,iVar16);
        iVar24 = *(int *)(lVar36 + 0x48) + 1;
      }
      iVar16 = iVar24 + 0x1f;
      if (-1 < iVar24) {
        iVar16 = iVar24;
      }
      *(int *)(lVar36 + 0x48) = iVar24;
      if (iVar24 % 0x20 != 0) {
        lVar18 = *(longlong *)(lVar36 + 0x40);
        if (*(longlong *)(lVar36 + 0x40) == 0) {
          lVar18 = lVar37;
        }
        bVar19 = -(char)(iVar24 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar16 >> 5) * 4) << (bVar19 & 0x1f)) >>
             (bVar19 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar15;
    if (*(longlong *)(lVar36 + 0x40) != 0) {
      lVar37 = *(longlong *)(lVar36 + 0x40);
    }
    bVar19 = (byte)iVar35 & 0x1f;
    puVar1 = (uint *)(lVar37 + (longlong)(iVar39 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar19 | 0xfffffffeU >> 0x20 - bVar19);
  }
  else {
    iVar15 = *(int *)(lVar36 + 0x50);
    lVar18 = (longlong)iVar15;
    iVar35 = *(int *)(*plVar27 + 4 + lVar18 * 0x38);
    *(int *)(lVar36 + 0x50) = iVar35;
    iVar16 = *(int *)(lVar36 + 0x54) + -1;
    *(int *)(lVar36 + 0x54) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(*plVar27 + (longlong)iVar35 * 0x38) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(lVar36 + 0x30);
  puVar20 = *(uint **)(lVar36 + 0x40);
  if (*(uint **)(lVar36 + 0x40) == (uint *)0x0) {
    puVar20 = puVar1;
  }
  iVar35 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar35 = iVar15;
  }
  puVar20[iVar35 >> 5] = puVar20[iVar35 >> 5] | 1 << ((byte)iVar15 & 0x1f);
  lVar37 = *plVar27;
  lVar18 = lVar18 * 0x38;
  plVar2 = (longlong *)(lVar37 + lVar18);
  *(longlong *)(lVar37 + lVar18) = lVar38;
  *(undefined8 *)(lVar37 + 8 + lVar18) = *(undefined8 *)(lVar21 + 0x58);
  uVar7 = *(undefined4 *)(lVar21 + 100);
  uVar8 = *(undefined4 *)(lVar21 + 0x68);
  uVar9 = *(undefined4 *)(lVar21 + 0x6c);
  puVar3 = (undefined4 *)(lVar37 + 0x10 + lVar18);
  *puVar3 = *(undefined4 *)(lVar21 + 0x60);
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  *(undefined8 *)(lVar37 + 0x20 + lVar18) = 0;
  iVar35 = *(int *)(lVar21 + 0x78);
  pvVar6 = *(void **)(lVar21 + 0x70);
  *(int *)(lVar37 + 0x28 + lVar18) = iVar35;
  if ((longlong)iVar35 == 0) {
    *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(lVar37 + lVar18 + 0x20,iVar35,0);
    memcpy((void *)plVar2[4],pvVar6,(longlong)iVar35 * 2);
    lVar38 = *plVar2;
  }
  *(undefined4 *)(plVar2 + 6) = 0xffffffff;
  uVar13 = (uint)((ulonglong)lVar38 >> 0x10);
  uVar23 = (uint)lVar38 & 0xffff;
  uVar13 = ((uint)lVar38 << 0x10 | uVar23) + (int)((ulonglong)lVar38 >> 0x20) +
           (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar23 >> 4);
  uVar23 = *(int *)(lVar36 + 0x28) - *(int *)(lVar36 + 0x54);
  if (1 < uVar23) {
    lVar21 = lVar36 + 0x58;
    if (*(longlong *)(lVar36 + 0x60) != 0) {
      lVar21 = *(longlong *)(lVar36 + 0x60);
    }
    iVar35 = *(int *)(lVar21 + (ulonglong)(*(int *)(lVar36 + 0x68) - 1U & uVar13) * 4);
    if (iVar35 != -1) {
      do {
        puVar3 = (undefined4 *)(*plVar27 + (longlong)iVar35 * 0x38);
        if (*(longlong *)(*plVar27 + (longlong)iVar35 * 0x38) == lVar38) {
          if (*(longlong *)(puVar3 + 8) != 0) {
            FUN_1400020a8();
          }
          lVar21 = *plVar2;
          uVar7 = *(undefined4 *)((longlong)plVar2 + 4);
          lVar36 = plVar2[1];
          uVar8 = *(undefined4 *)((longlong)plVar2 + 0xc);
          lVar38 = plVar2[2];
          uVar9 = *(undefined4 *)((longlong)plVar2 + 0x14);
          lVar18 = plVar2[3];
          uVar10 = *(undefined4 *)((longlong)plVar2 + 0x1c);
          uVar11 = *(undefined4 *)((longlong)plVar2 + 0x24);
          lVar37 = plVar2[5];
          uVar12 = *(undefined4 *)((longlong)plVar2 + 0x2c);
          puVar3[8] = (int)plVar2[4];
          puVar3[9] = uVar11;
          puVar3[10] = (int)lVar37;
          puVar3[0xb] = uVar12;
          puVar3[4] = (int)lVar38;
          puVar3[5] = uVar9;
          puVar3[6] = (int)lVar18;
          puVar3[7] = uVar10;
          *puVar3 = (int)lVar21;
          puVar3[1] = uVar7;
          puVar3[2] = (int)lVar36;
          puVar3[3] = uVar8;
          FUN_148dd2978(plVar27,iVar15);
          goto LAB_144218c33;
        }
        iVar35 = puVar3[0xc];
      } while (iVar35 != -1);
    }
  }
  uVar32 = 1;
  if (3 < uVar23) {
    uVar22 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
    lVar21 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar32 = 1 << ((byte)lVar21 & 0x1f);
  }
  if (((int)uVar23 < 1) || ((int)uVar32 <= *(int *)(lVar36 + 0x68))) {
    uVar13 = *(int *)(lVar36 + 0x68) - 1U & uVar13;
    *(uint *)((longlong)plVar2 + 0x34) = uVar13;
    lVar21 = *(longlong *)(lVar36 + 0x60);
    if (*(longlong *)(lVar36 + 0x60) == 0) {
      lVar21 = lVar36 + 0x58;
    }
    *(undefined4 *)(plVar2 + 6) =
         *(undefined4 *)
          (lVar21 + ((longlong)*(int *)(lVar36 + 0x68) - 1U & (longlong)(int)uVar13) * 4);
    lVar21 = *(longlong *)(lVar36 + 0x60);
    if (*(longlong *)(lVar36 + 0x60) == 0) {
      lVar21 = lVar36 + 0x58;
    }
    *(int *)(lVar21 + ((longlong)*(int *)(lVar36 + 0x68) - 1U & (longlong)(int)uVar13) * 4) = iVar15
    ;
    goto LAB_144218c33;
  }
  *(uint *)(lVar36 + 0x68) = uVar32;
  plVar2 = (longlong *)(lVar36 + 0x60);
  if (*(longlong *)(lVar36 + 0x60) != 0) {
    FUN_1446efa72(plVar2,0,0,4);
    uVar32 = *(uint *)(lVar36 + 0x68);
  }
  lVar21 = lVar36 + 0x58;
  if (uVar32 == 1) {
    if (*plVar2 != 0) {
      FUN_1446efa72(plVar2,0,0,4);
    }
LAB_144218a52:
    uVar13 = 0;
    do {
      lVar38 = *(longlong *)(lVar36 + 0x60);
      if (*(longlong *)(lVar36 + 0x60) == 0) {
        lVar38 = lVar21;
      }
      *(undefined4 *)(lVar38 + (ulonglong)(*(int *)(lVar36 + 0x68) + 0x7fffffffU & uVar13) * 4) =
           0xffffffff;
      uVar13 = uVar13 + 1;
    } while (uVar32 != uVar13);
  }
  else {
    if (uVar32 == 0) goto LAB_144218c33;
    FUN_1446efa72(plVar2,0,uVar32,4);
    if (0 < (int)uVar32) goto LAB_144218a52;
  }
  iVar15 = *(int *)(lVar36 + 0x48);
  if (iVar15 == 0) {
    uVar22 = 0;
    uVar26 = 1;
    iVar35 = 0;
    iVar16 = 0;
  }
  else {
    puVar20 = *(uint **)(lVar36 + 0x40);
    if (*(uint **)(lVar36 + 0x40) == (uint *)0x0) {
      puVar20 = puVar1;
    }
    uVar13 = *puVar20;
    if (uVar13 == 0) {
      iVar35 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar35 = iVar15 + -1;
      }
      uVar22 = 0;
      uVar26 = (ulonglong)(uint)(iVar35 >> 5);
      if (iVar35 >> 5 < 1) {
        uVar26 = uVar22;
      }
      iVar16 = 0;
      do {
        if (uVar26 == uVar22) goto LAB_144218c33;
        iVar16 = iVar16 + 0x20;
        uVar13 = puVar20[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar22 = 0;
      iVar16 = 0;
    }
    uVar26 = (ulonglong)(-uVar13 & uVar13);
    uVar28 = uVar26 * 2 + 1;
    lVar38 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar38 == 0; lVar38 = lVar38 + -1) {
      }
    }
    iVar35 = (iVar16 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar35) {
      iVar35 = iVar15;
    }
  }
  if (iVar35 < iVar15) {
    uVar13 = 0xffffffff;
    do {
      lVar38 = *plVar27;
      lVar37 = (longlong)iVar35 * 0x38;
      uVar4 = *(undefined8 *)(lVar38 + lVar37);
      uVar23 = (uint)((ulonglong)uVar4 >> 0x10);
      uVar32 = (uint)uVar4 & 0xffff;
      uVar28 = (longlong)
               (int)(((uint)uVar4 << 0x10 | uVar32) + (int)((ulonglong)uVar4 >> 0x20) +
                     (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar32 >> 4)) &
               (longlong)*(int *)(lVar36 + 0x68) - 1U;
      iVar15 = (int)uVar28;
      *(int *)(lVar38 + 0x34 + lVar37) = iVar15;
      lVar18 = *(longlong *)(lVar36 + 0x60);
      if (*(longlong *)(lVar36 + 0x60) == 0) {
        lVar18 = lVar21;
      }
      *(undefined4 *)(lVar38 + 0x30 + lVar37) =
           *(undefined4 *)(lVar18 + ((longlong)*(int *)(lVar36 + 0x68) - 1U & uVar28) * 4);
      lVar38 = *(longlong *)(lVar36 + 0x60);
      if (*(longlong *)(lVar36 + 0x60) == 0) {
        lVar38 = lVar21;
      }
      *(int *)(lVar38 + ((longlong)iVar15 & (longlong)*(int *)(lVar36 + 0x68) - 1U) * 4) = iVar35;
      uVar13 = ~(uint)uVar26 & uVar13;
      puVar20 = *(uint **)(lVar36 + 0x40);
      if (*(uint **)(lVar36 + 0x40) == (uint *)0x0) {
        puVar20 = puVar1;
      }
      iVar15 = *(int *)(lVar36 + 0x48);
      iVar35 = (int)uVar22;
      lVar38 = (longlong)iVar35;
      uVar23 = puVar20[lVar38] & uVar13;
      if (uVar23 == 0) {
        iVar24 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar24 = iVar15 + -1;
        }
        iVar24 = iVar24 >> 5;
        iVar39 = iVar24;
        if (iVar24 < iVar35) {
          iVar39 = iVar35;
        }
        if (iVar24 <= iVar35) break;
        lVar18 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar23 = puVar20[lVar38 + lVar18 + 1];
          if (uVar23 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar39 - lVar38 == lVar18) goto LAB_144218c33;
        }
        uVar22 = (ulonglong)(iVar35 + (int)lVar18 + 1);
        uVar13 = 0xffffffff;
      }
      uVar26 = (ulonglong)(-uVar23 & uVar23);
      uVar28 = uVar26 * 2 + 1;
      lVar38 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar38 == 0; lVar38 = lVar38 + -1) {
        }
      }
      iVar35 = (iVar16 - ((uint)lVar38 ^ 0x3f)) + 0x3e;
    } while (iVar35 < iVar15);
  }
LAB_144218c33:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421918a FUN_14421918a body=668 status=ok
// SIG undefined FUN_14421918a(void)

void FUN_14421918a(longlong *param_1)

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
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_144219207;
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
LAB_144219207:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar5 = 0;
    iVar16 = 0;
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
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x28);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x24 + lVar15 * 0x28) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x20 + lVar15 * 0x28) =
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



// FUNCTION 144219426 FUN_144219426 body=333 status=ok
// SIG undefined FUN_144219426(void)

void FUN_144219426(longlong param_1,uint param_2)

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
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14421948f;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_14421948f:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
  }
  return;
}



// FUNCTION 144219574 FUN_144219574 body=363 status=ok
// SIG undefined FUN_144219574(void)

void FUN_144219574(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14421960a;
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
LAB_14421960a:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1442196e0 FUN_1442196e0 body=333 status=ok
// SIG undefined FUN_1442196e0(void)

void FUN_1442196e0(longlong param_1,uint param_2)

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
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_144219749;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_144219749:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
  }
  return;
}



// FUNCTION 14421982e FUN_14421982e body=363 status=ok
// SIG undefined FUN_14421982e(void)

void FUN_14421982e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1442198c4;
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
LAB_1442198c4:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14421999a FUN_14421999a body=111 status=ok
// SIG undefined FUN_14421999a(void)

undefined8 * FUN_14421999a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b999dc0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1442199eb;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1442199eb:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144219a1e FUN_144219a1e body=115 status=ok
// SIG undefined FUN_144219a1e(void)

void FUN_144219a1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999dc0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14114e6dc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 144219a92 FUN_144219a92 body=115 status=ok
// SIG undefined FUN_144219a92(void)

void FUN_144219a92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999dc0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14114e6dc(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 144219b06 FUN_144219b06 body=149 status=ok
// SIG undefined FUN_144219b06(void)

void FUN_144219b06(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b999dc0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_14114e6dc(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144219b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144219bbe FUN_144219bbe body=40 status=ok
// SIG undefined FUN_144219bbe(void)

undefined8 FUN_144219bbe(longlong param_1)

{
  longlong *plVar1;
  undefined8 in_RAX;
  undefined7 uVar2;
  undefined7 extraout_var;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0 && *(int *)(param_1 + 0x20) != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,0);
    uVar2 = extraout_var;
  }
  return CONCAT71(uVar2,1);
}



// FUNCTION 144219be6 FUN_144219be6 body=29 status=ok
// SIG undefined FUN_144219be6(void)

undefined8 FUN_144219be6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144219d8c FUN_144219d8c body=93 status=ok
// SIG undefined FUN_144219d8c(void)

void FUN_144219d8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e1be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144219dea FUN_144219dea body=93 status=ok
// SIG undefined FUN_144219dea(void)

void FUN_144219dea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e1be0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144219e48 FUN_144219e48 body=126 status=ok
// SIG undefined FUN_144219e48(void)

void FUN_144219e48(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e1be0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b999e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144219eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144219f24 FUN_144219f24 body=277 status=ok
// SIG undefined FUN_144219f24(void)

undefined8 FUN_144219f24(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14421a033;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14421a033;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14421a033:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144219fe6;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_144219fe6;
    }
  }
  uVar6 = 0;
LAB_144219fe6:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421a03a FUN_14421a03a body=29 status=ok
// SIG undefined FUN_14421a03a(void)

undefined8 FUN_14421a03a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14421a1e0 FUN_14421a1e0 body=93 status=ok
// SIG undefined FUN_14421a1e0(void)

void FUN_14421a1e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14421a23e FUN_14421a23e body=93 status=ok
// SIG undefined FUN_14421a23e(void)

void FUN_14421a23e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b434d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b999ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14421a29c FUN_14421a29c body=126 status=ok
// SIG undefined FUN_14421a29c(void)

void FUN_14421a29c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b434d90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b999ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014421a30b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14421a378 FUN_14421a378 body=277 status=ok
// SIG undefined FUN_14421a378(void)

undefined8 FUN_14421a378(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14421a487;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14421a487;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14421a487:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14421a43a;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_14421a43a;
    }
  }
  uVar6 = 0;
LAB_14421a43a:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421a48e FUN_14421a48e body=467 status=ok
// SIG undefined FUN_14421a48e(void)

void FUN_14421a48e(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar13 = 1;
      iVar10 = 0;
      uVar11 = 0;
      iVar8 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        iVar10 = 0;
        uVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x34 + (longlong)iVar8 * 0x38) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_14421a612;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_14421a612:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 14421a662 FUN_14421a662 body=614 status=ok
// SIG undefined FUN_14421a662(void)

void FUN_14421a662(longlong *param_1)

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
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14421a6dc;
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
LAB_14421a6dc:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
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
      lVar13 = (longlong)iVar12 * 0x38;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x34 + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x30 + lVar13) =
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



// FUNCTION 14421a8c8 FUN_14421a8c8 body=467 status=ok
// SIG undefined FUN_14421a8c8(void)

void FUN_14421a8c8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar2 = (int)param_1[9];
  iVar8 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar8 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar13 = 1;
      iVar10 = 0;
      uVar11 = 0;
      iVar8 = 0;
    }
    else {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar10 = 0;
        do {
          if (uVar13 == uVar11) {
            return;
          }
          iVar10 = iVar10 + 0x20;
          uVar9 = puVar12[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar9 == 0);
      }
      else {
        iVar10 = 0;
        uVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar8) {
        iVar8 = iVar2;
      }
    }
    if (iVar8 != iVar2) {
      uVar9 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x7c + (longlong)iVar8 * 0x80) * 4) =
             0xffffffff;
        uVar9 = ~(uint)uVar13 & uVar9;
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar8 = (int)uVar11;
        lVar14 = (longlong)iVar8;
        uVar7 = puVar12[lVar14] & uVar9;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar10 = iVar10 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar8 < iVar5) {
            lVar15 = 0;
            do {
              uVar7 = puVar12[lVar14 + lVar15 + 1];
              if (uVar7 != 0) {
                uVar11 = (ulonglong)(iVar8 + (int)lVar15 + 1);
                uVar9 = 0xffffffff;
                goto LAB_14421aa4c;
              }
              iVar10 = iVar10 + 0x20;
              lVar15 = lVar15 + 1;
            } while (iVar6 - lVar14 != lVar15);
            uVar9 = 0xffffffff;
            iVar8 = iVar6;
          }
          uVar11 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar3;
        }
        else {
LAB_14421aa4c:
          uVar13 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar13 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar8 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar8) {
            iVar8 = iVar3;
          }
        }
      } while (iVar8 != iVar2);
    }
  }
  else if (0 < iVar2) {
    lVar14 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar14 * 4) = 0xffffffff;
      lVar14 = lVar14 + 1;
    } while (lVar14 < (int)param_1[9]);
  }
  return;
}



// FUNCTION 14421aa9c FUN_14421aa9c body=617 status=ok
// SIG undefined FUN_14421aa9c(void)

void FUN_14421aa9c(longlong *param_1)

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
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14421ab16;
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
LAB_14421ab16:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
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
      lVar13 = (longlong)iVar12 * 0x80;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x7c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x78 + lVar13) =
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



// FUNCTION 14421ad06 FUN_14421ad06 body=617 status=ok
// SIG undefined FUN_14421ad06(void)

void FUN_14421ad06(longlong *param_1)

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
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14421ad80;
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
LAB_14421ad80:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
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
      lVar13 = (longlong)iVar12 * 0x80;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x7c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x78 + lVar13) =
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



// FUNCTION 14421af9c FUN_14421af9c body=12 status=ok
// SIG undefined FUN_14421af9c(void)

void FUN_14421af9c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014421afa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14421afa8 FUN_14421afa8 body=29 status=ok
// SIG undefined FUN_14421afa8(void)

undefined8 FUN_14421afa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14421afc6 FUN_14421afc6 body=538 status=ok
// SIG undefined FUN_14421afc6(void)

void FUN_14421afc6(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  iVar2 = (int)param_1[9];
  if (1 < iVar2) {
    FUN_14409a126(param_1,0);
    *(undefined4 *)(param_1 + 9) = 1;
    FUN_14421ad06(param_1);
    return;
  }
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar13 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar13 = iVar2;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar13 >> 2) {
    iVar2 = (int)param_1[5];
    if (iVar2 == 0) {
      uVar12 = 1;
      iVar9 = 0;
      uVar10 = 0;
      iVar13 = 0;
    }
    else {
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      uVar8 = *puVar11;
      if (uVar8 == 0) {
        iVar13 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar13 = iVar2 + -1;
        }
        uVar10 = 0;
        uVar12 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar12 = uVar10;
        }
        iVar9 = 0;
        do {
          if (uVar12 == uVar10) goto LAB_14421b0e3;
          iVar9 = iVar9 + 0x20;
          uVar8 = puVar11[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar8 == 0);
      }
      else {
        iVar9 = 0;
        uVar10 = 0;
      }
      uVar12 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar12 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar13) {
        iVar13 = iVar2;
      }
    }
    if (iVar13 != iVar2) {
      uVar8 = 0xffffffff;
      do {
        *(undefined4 *)
         ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x7c + (longlong)iVar13 * 0x80) * 4) =
             0xffffffff;
        uVar8 = ~(uint)uVar12 & uVar8;
        puVar11 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 2);
        }
        iVar3 = (int)param_1[5];
        iVar13 = (int)uVar10;
        lVar15 = (longlong)iVar13;
        uVar7 = puVar11[lVar15] & uVar8;
        if (uVar7 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar6 = iVar5;
          if (iVar5 < iVar13) {
            iVar6 = iVar13;
          }
          if (iVar13 < iVar5) {
            lVar14 = 0;
            do {
              uVar7 = puVar11[lVar15 + lVar14 + 1];
              if (uVar7 != 0) {
                uVar10 = (ulonglong)(iVar13 + (int)lVar14 + 1);
                uVar8 = 0xffffffff;
                goto LAB_14421b18e;
              }
              iVar9 = iVar9 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar6 - lVar15 != lVar14);
            uVar8 = 0xffffffff;
            iVar13 = iVar6;
          }
          uVar10 = (ulonglong)(iVar13 + 1);
          iVar13 = iVar3;
        }
        else {
LAB_14421b18e:
          uVar12 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar12 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar13) {
            iVar13 = iVar3;
          }
        }
      } while (iVar13 != iVar2);
    }
  }
  else if (iVar2 == 1) {
    lVar15 = 0;
    do {
      *(undefined4 *)((longlong)plVar4 + lVar15 * 4) = 0xffffffff;
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_1[9]);
  }
LAB_14421b0e3:
  FUN_14409a126(param_1,0);
  return;
}



// FUNCTION 14421b1e0 FUN_14421b1e0 body=76 status=ok
// SIG undefined FUN_14421b1e0(void)

void FUN_14421b1e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b626f90;
  plVar3 = *(longlong **)(param_1 + 0x188);
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
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 14421b22c FUN_14421b22c body=29 status=ok
// SIG undefined FUN_14421b22c(void)

undefined8 FUN_14421b22c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14421b24a FUN_14421b24a body=48 status=ok
// SIG undefined FUN_14421b24a(void)

void FUN_14421b24a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc,4);
  }
  return;
}



// FUNCTION 14421b27a FUN_14421b27a body=389 status=ok
// SIG undefined FUN_14421b27a(void)

ulonglong FUN_14421b27a(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0xc)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0xc;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0xaaa) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0xffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_14421b32a;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0xffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,4);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14421b32a:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar8 = uVar8 / 0xc;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0xc,4);
    }
  }
  return uVar6;
}



// FUNCTION 14421b400 FUN_14421b400 body=64 status=ok
// SIG undefined FUN_14421b400(void)

undefined8 * FUN_14421b400(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a0a0;
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



// FUNCTION 14421b444 FUN_14421b444 body=81 status=ok
// SIG undefined FUN_14421b444(void)

undefined8 FUN_14421b444(longlong param_1)

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



// FUNCTION 14421b49c FUN_14421b49c body=89 status=ok
// SIG undefined FUN_14421b49c(void)

bool FUN_14421b49c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14421b4e7;
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
LAB_14421b4e7:
  return lVar6 == param_2;
}



// FUNCTION 14421b512 FUN_14421b512 body=118 status=ok
// SIG undefined FUN_14421b512(void)

void FUN_14421b512(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a0a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14421b588 FUN_14421b588 body=118 status=ok
// SIG undefined FUN_14421b588(void)

void FUN_14421b588(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a0a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14421b5fe FUN_14421b5fe body=156 status=ok
// SIG undefined FUN_14421b5fe(void)

void FUN_14421b5fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a0a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014421b68a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14421b69a FUN_14421b69a body=97 status=ok
// SIG undefined FUN_14421b69a(void)

void FUN_14421b69a(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014421b6e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014421b6f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14421b6fc FUN_14421b6fc body=93 status=ok
// SIG undefined FUN_14421b6fc(void)

ulonglong FUN_14421b6fc(longlong param_1)

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
LAB_14421b74e:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14421b74e;
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



// FUNCTION 14421b75a FUN_14421b75a body=363 status=ok
// SIG undefined FUN_14421b75a(void)

void FUN_14421b75a(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14421b7f0;
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
LAB_14421b7f0:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14421b8c6 FUN_14421b8c6 body=130 status=ok
// SIG undefined FUN_14421b8c6(void)

void FUN_14421b8c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b627030;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x1a8);
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
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_1400020a8();
  }
  FUN_145a38fa8(param_1 + 0x10);
  return;
}



// FUNCTION 14421b948 FUN_14421b948 body=29 status=ok
// SIG undefined FUN_14421b948(void)

undefined8 FUN_14421b948(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14421b966 FUN_14421b966 body=48 status=ok
// SIG undefined FUN_14421b966(void)

void FUN_14421b966(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x14,4);
  }
  return;
}



// FUNCTION 14421b996 FUN_14421b996 body=16 status=ok
// SIG undefined FUN_14421b996(void)

void FUN_14421b996(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[0x10] = 0;
  return;
}



// FUNCTION 14421b9a6 FUN_14421b9a6 body=363 status=ok
// SIG undefined FUN_14421b9a6(void)

void FUN_14421b9a6(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14421ba3c;
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
LAB_14421ba3c:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 14421bb11 FUN_14421bb11 body=11 status=ok
// SIG undefined FUN_14421bb11(void)

void FUN_14421bb11(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14421bb1c FUN_14421bb1c body=248 status=ok
// SIG undefined FUN_14421bb1c(void)

void FUN_14421bb1c(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14421bc14 FUN_14421bc14 body=443 status=ok
// SIG undefined FUN_14421bc14(void)

longlong * FUN_14421bc14(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_40);
  plVar3 = local_38;
  if (local_38 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_14b3e9ef0;
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
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b99a130;
    puVar4[3] = local_40;
    puVar4[4] = 0;
    puVar4[5] = param_3;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_14b3e9ef0;
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
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b99a130;
    puVar4[3] = local_40;
    puVar4[4] = local_38;
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = param_3;
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
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
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421bdd2 FUN_14421bdd2 body=64 status=ok
// SIG undefined FUN_14421bdd2(void)

undefined8 * FUN_14421bdd2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a130;
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



// FUNCTION 14421be16 FUN_14421be16 body=81 status=ok
// SIG undefined FUN_14421be16(void)

undefined8 FUN_14421be16(longlong param_1)

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



// FUNCTION 14421be6e FUN_14421be6e body=89 status=ok
// SIG undefined FUN_14421be6e(void)

bool FUN_14421be6e(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14421beb9;
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
LAB_14421beb9:
  return lVar6 == param_2;
}



// FUNCTION 14421bee4 FUN_14421bee4 body=118 status=ok
// SIG undefined FUN_14421bee4(void)

void FUN_14421bee4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14421bf5a FUN_14421bf5a body=118 status=ok
// SIG undefined FUN_14421bf5a(void)

void FUN_14421bf5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ef0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14421bfd0 FUN_14421bfd0 body=156 status=ok
// SIG undefined FUN_14421bfd0(void)

void FUN_14421bfd0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ef0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014421c05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14421c06c FUN_14421c06c body=98 status=ok
// SIG undefined FUN_14421c06c(void)

void FUN_14421c06c(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014421c0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014421c0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14421c0ce FUN_14421c0ce body=94 status=ok
// SIG undefined FUN_14421c0ce(void)

ulonglong FUN_14421c0ce(longlong param_1)

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
LAB_14421c121:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14421c121;
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



// FUNCTION 14421c12c FUN_14421c12c body=254 status=ok
// SIG undefined FUN_14421c12c(void)

void FUN_14421c12c(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x20;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x400) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 * 2]];
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
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 5 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x20,8);
    }
  }
  return;
}



// FUNCTION 14421c22a FUN_14421c22a body=64 status=ok
// SIG undefined FUN_14421c22a(void)

undefined8 * FUN_14421c22a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a1a0;
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



// FUNCTION 14421c26e FUN_14421c26e body=81 status=ok
// SIG undefined FUN_14421c26e(void)

undefined8 FUN_14421c26e(longlong param_1)

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



// FUNCTION 14421c2c6 FUN_14421c2c6 body=89 status=ok
// SIG undefined FUN_14421c2c6(void)

bool FUN_14421c2c6(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_14421c311;
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
LAB_14421c311:
  return lVar6 == param_2;
}



// FUNCTION 14421c33c FUN_14421c33c body=118 status=ok
// SIG undefined FUN_14421c33c(void)

void FUN_14421c33c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a1a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14421c3b2 FUN_14421c3b2 body=118 status=ok
// SIG undefined FUN_14421c3b2(void)

void FUN_14421c3b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e01f80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a1a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14421c428 FUN_14421c428 body=156 status=ok
// SIG undefined FUN_14421c428(void)

void FUN_14421c428(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e01f80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a1a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014421c4b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14421c4c4 FUN_14421c4c4 body=97 status=ok
// SIG undefined FUN_14421c4c4(void)

void FUN_14421c4c4(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014421c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014421c51b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 14421c526 FUN_14421c526 body=93 status=ok
// SIG undefined FUN_14421c526(void)

ulonglong FUN_14421c526(longlong param_1)

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
LAB_14421c578:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14421c578;
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



// FUNCTION 14421c584 FUN_14421c584 body=9 status=ok
// SIG undefined FUN_14421c584(void)

void FUN_14421c584(longlong param_1)

{
  FUN_14401646a(param_1 + 0x10);
  return;
}



// FUNCTION 14421c58e FUN_14421c58e body=29 status=ok
// SIG undefined FUN_14421c58e(void)

undefined8 FUN_14421c58e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14421c5ac FUN_14421c5ac body=102 status=ok
// SIG undefined FUN_14421c5ac(void)

void FUN_14421c5ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14401b798();
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



// FUNCTION 14421c614 FUN_14421c614 body=275 status=ok
// SIG undefined FUN_14421c614(void)

void FUN_14421c614(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar7 = (longlong)(int)param_1[1];
  if (lVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar8 = lVar7 + 1;
    lVar7 = lVar7 * 0x10 + -8;
    bVar5 = 0;
    do {
      if (((*(int *)(*param_1 + lVar7) == 0) ||
          (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar3 == '\0')) {
        bVar5 = 1;
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x10;
    } while (1 < uVar8);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar5 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar6);
            FUN_14005b248(param_1);
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar6 < iVar4);
      }
      iVar6 = 2;
      if (2 < iVar4 * 2) {
        iVar6 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar6;
      if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14421c728 FUN_14421c728 body=64 status=ok
// SIG undefined FUN_14421c728(void)

undefined8 * FUN_14421c728(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99a230;
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



// FUNCTION 14421c77c FUN_14421c77c body=110 status=ok
// SIG undefined FUN_14421c77c(void)

void FUN_14421c77c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99ac60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14421c7ea FUN_14421c7ea body=110 status=ok
// SIG undefined FUN_14421c7ea(void)

void FUN_14421c7ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99ac60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99a230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14421c858 FUN_14421c858 body=148 status=ok
// SIG undefined FUN_14421c858(void)

void FUN_14421c858(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b99ac60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b99a230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014421c8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14421c8ec FUN_14421c8ec body=66 status=ok
// SIG undefined FUN_14421c8ec(void)

void FUN_14421c8ec(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14421c976(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421c930 FUN_14421c930 body=68 status=ok
// SIG undefined FUN_14421c930(void)

undefined8 FUN_14421c930(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14421c976(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421c976 FUN_14421c976 body=110 status=ok
// SIG undefined FUN_14421c976(void)

ulonglong FUN_14421c976(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RSI;
  ulonglong uVar7;
  bool bVar8;
  
  lVar3 = *param_2;
  if (((lVar3 == 0) || ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0)) ||
     (plVar4 = (longlong *)param_1[1], plVar4 == (longlong *)0x0)) {
LAB_14421c9b8:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_14421c9b8;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    if (*param_1 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),*(undefined1 *)(lVar3 + 0x8a08));
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
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 14421c9e4 FUN_14421c9e4 body=68 status=ok
// SIG undefined FUN_14421c9e4(void)

undefined8 * FUN_14421c9e4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99aa10;
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



// FUNCTION 14421ca28 FUN_14421ca28 body=12707 status=ok
// SIG undefined FUN_14421ca28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14421ca28(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  char ***local_88;
  undefined4 local_80 [2];
  char ***local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = (char ***)0x149fca2ba;
  uStack_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0ba8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b997200;
  uStack_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd0bb0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b99720d;
  uStack_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd0bb8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b99721b;
  uStack_70 = (undefined4 *)CONCAT35(uStack_70._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd0bc0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbd0bc8);
  if (cVar1 == '\0') {
    _DAT_14cbd0bc8 = 0;
    uRam000000014cbd0bd0 = 0;
  }
  if (local_78 != (char ***)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbd0bdc = 0;
  FUN_14052b5e0(&DAT_14cbd0bd8,"State",0);
  _DAT_14cbd0be8 = "State";
  _DAT_14cbd0bf0 = 0x47efffffe0000000;
  _DAT_14cbd0bf8 = 0x47efffffe0000000;
  _DAT_14cbd0c00 = 0x47efffffe0000000;
  _DAT_14cbd0c08 = 0x47efffffe0000000;
  _DAT_14cbd0c10 = 0x47efffffe0000000;
  _DAT_14cbd0c18 = 0x47efffffe0000000;
  _DAT_14cbd0c20 = 0x47efffffe0000000;
  _DAT_14cbd0c28 = 0x47efffffe0000000;
  local_78 = (char ***)&DAT_14a19662d;
  uStack_70._0_5_ = 4;
  FUN_14001a6c0(&local_78,1);
  local_78 = (char ***)&DAT_14b4871e8;
  uStack_70._0_5_ = 3;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c30 = (ulonglong)uVar2;
  local_78 = (char ***)0x14ac8da14;
  uStack_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c38 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b4871ec;
  uStack_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c40 = (ulonglong)uVar2;
  _DAT_14cbd0c4c = 0;
  FUN_14052b5e0(&DAT_14cbd0c48,"PlayerAwareness",0);
  _DAT_14cbd0c58 = "PlayerAwareness";
  local_78 = (char ***)0x14b604105;
  uStack_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c60 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b60410b;
  uStack_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c68 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b507318;
  uStack_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c70 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b604115;
  uStack_70._0_5_ = 6;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c78 = (ulonglong)uVar2;
  local_78 = (char ***)0x14a1774ea;
  uStack_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c80 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b60411c;
  uStack_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c88 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b604127;
  uStack_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c90 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b4102b8;
  uStack_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0c98 = (ulonglong)uVar2;
  local_78 = (char ***)&DAT_14b604134;
  uStack_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0ca0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b604139;
  uStack_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0ca8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b604141;
  uStack_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0cb0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b60414a;
  uStack_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0cb8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b60415f;
  uStack_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0cc0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b604174;
  uStack_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0cc8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b60417f;
  uStack_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0cd0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b60418e;
  uStack_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0cd8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b60419d;
  uStack_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0ce0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b6041b2;
  uStack_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0ce8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b6041c8;
  uStack_70._0_5_ = 0xb;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0cf0 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbd0cf8,L"GoreStump_");
  atexit((_func_5014 *)&LAB_144207754);
  FUN_140056680(&DAT_14cbd0d08,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_144207765);
  FUN_140056680(&DAT_14cbd0d18,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_144207776);
  FUN_140056680(&DAT_14cbd0d28,L"GoreFX_");
  atexit((_func_5014 *)&LAB_144207787);
  FUN_1446f470e(&DAT_14cbd0d38,L"LIMB_GORED",1);
  _DAT_14cbd0d40 = 0x4072c00000000000;
  _DAT_14cbd0d48 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbd0d50,L"body",1);
  FUN_1446f470e(&DAT_14cbd0d58,L"title_card",1);
  local_78 = (char ***)&DAT_14b6040ec;
  uStack_70._0_5_ = 4;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd0d60 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbd0d68,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_144207798);
  FUN_1446f470e(&DAT_14cbd0d78,L"UNSET",1);
  local_78 = (char ***)&DAT_14b3f27c8;
  uStack_70._0_5_ = 4;
  FUN_14001a6c0(&local_78,1);
  local_78 = (char ***)0x14b6041d4;
  uStack_70._0_5_ = 6;
  FUN_14001a6c0(&local_78,1);
  local_78 = (char ***)0x14b6041db;
  uStack_70._0_5_ = 0xd;
  FUN_14001a6c0(&local_78,1);
  local_78 = (char ***)0x14b6041e9;
  uStack_70 = (undefined4 *)CONCAT35(uStack_70._5_3_,6);
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cbd0d80,L"Party",1);
  FUN_1446f470e(&DAT_14cbd0d88,&DAT_149e063b2,1);
  local_78 = (char ***)0xf200443946bc0fd7;
  uStack_70._0_4_ = 0xb86afa7e;
  uStack_70._4_4_ = 0x6b276337;
  _DAT_14cbd0d90 = 0x46bc0fd7;
  uRam000000014cbd0d94 = 0xf2004439;
  uRam000000014cbd0d98 = 0xb86afa7e;
  uRam000000014cbd0d9c = 0x6b276337;
  FUN_141005458(&local_78,0,L"PoAActor",0);
  atexit((_func_5014 *)&LAB_1442077a9);
  FUN_1446f470e(&DAT_14cbd0da0,L"State",1);
  FUN_1446f470e(&DAT_14cbd0da8,L"ClaimSwitch");
  DAT_14cbd0dc0 = 0;
  DAT_14cbd0dc8 = 0;
  atexit(FUN_1442077b5);
  _DAT_14cbd0dd8 = &LAB_144207885;
  _DAT_14cbd0de0 = 0x447a0000;
  DAT_14cbd0de4 = 1;
  DAT_14cbd0dd0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd0dd0;
  atexit((_func_5014 *)&LAB_14420788a);
  FUN_1466329e8();
  atexit((_func_5014 *)&LAB_1442078be);
  _DAT_14cbd0fac = 0;
  FUN_14052b5e0(&DAT_14cbd0fa8,"State",0);
  _DAT_14cbd0fb8 = "State";
  _DAT_14cbd0fc4 = 0;
  FUN_14052b5e0(&DAT_14cbd0fc0,"phase",0);
  _DAT_14cbd0fd0 = "phase";
  _DAT_14cbd0fdc = 0;
  FUN_14052b5e0(&DAT_14cbd0fd8,"known",0);
  _DAT_14cbd0fe8 = "known";
  FUN_1400b22c2(&DAT_14cbd0ff0,"DiscoveryPhase");
  atexit((_func_5014 *)&LAB_1442078ca);
  FUN_1400b22c2(&DAT_14cbd1000,"ClaimPhase");
  atexit((_func_5014 *)&LAB_1442078db);
  local_78 = (char ***)0x14b997ae9;
  uStack_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"PoA_State",1);
  _DAT_14cbd1018 = 0;
  local_78 = (char ***)0x14b997b08;
  uStack_70._0_5_ = 8;
  DAT_14cbd1010 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"PoA_State",1);
  _DAT_14cbd1028 = 0;
  local_78 = (char ***)0x14b997b11;
  uStack_70._0_5_ = 10;
  DAT_14cbd1020 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"PoA_State",1);
  _DAT_14cbd1038 = 0;
  local_78 = (char ***)0x14b997b1c;
  uStack_70._0_5_ = 10;
  DAT_14cbd1030 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"PoA_State",1);
  _DAT_14cbd1048 = 0;
  local_78 = (char ***)0x14b997b27;
  uStack_70._0_5_ = 10;
  DAT_14cbd1040 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&local_78,L"PoA_State");
  _DAT_14cbd1058 = 0;
  DAT_14cbd1050 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbd1060,L"ControllerDisconnect");
  atexit((_func_5014 *)&LAB_1442079c4);
  DAT_14cbd1070 = 0;
  atexit((_func_5014 *)&LAB_144209bd2);
  DAT_14cbd10e0 = 0;
  atexit((_func_5014 *)&LAB_144209c47);
  FUN_1459551d0(&DAT_14cbd1120);
  atexit((_func_5014 *)&LAB_144209c5f);
  _DAT_14cbd1168 = 0;
  uRam000000014cbd1170 = 0;
  _DAT_14cbd1178 = 0;
  DAT_14cbd1180 = 0;
  uRam000000014cbd1188 = 0;
  FUN_1446ddda2(&DAT_14cbd1168,"common",0);
  atexit((_func_5014 *)&LAB_144209c6b);
  _DAT_14cbd1190 = 0;
  uRam000000014cbd1198 = 0;
  _DAT_14cbd11a0 = 0;
  DAT_14cbd11a8 = 0;
  uRam000000014cbd11b0 = 0;
  FUN_1446ddda2(&DAT_14cbd1190,"uncommon",0);
  atexit((_func_5014 *)&LAB_144209c7c);
  _DAT_14cbd11b8 = 0;
  uRam000000014cbd11c0 = 0;
  _DAT_14cbd11c8 = 0;
  DAT_14cbd11d0 = 0;
  uRam000000014cbd11d8 = 0;
  FUN_1446ddda2(&DAT_14cbd11b8,&DAT_14b997cd2,0);
  atexit((_func_5014 *)&LAB_144209c8d);
  _DAT_14cbd11e0 = 0;
  uRam000000014cbd11e8 = 0;
  _DAT_14cbd11f0 = 0;
  DAT_14cbd11f8 = 0;
  uRam000000014cbd1200 = 0;
  FUN_1446ddda2(&DAT_14cbd11e0,&DAT_14b501638,0);
  atexit((_func_5014 *)&LAB_144209c9e);
  _DAT_14cbd1208 = 0;
  uRam000000014cbd1210 = 0;
  _DAT_14cbd1218 = 0;
  DAT_14cbd1220 = 0;
  uRam000000014cbd1228 = 0;
  FUN_1446ddda2(&DAT_14cbd1208,"legendary",0);
  atexit((_func_5014 *)&LAB_144209caf);
  _DAT_14cbd1230 = 0;
  uRam000000014cbd1238 = 0;
  _DAT_14cbd1240 = 0;
  DAT_14cbd1248 = 0;
  uRam000000014cbd1250 = 0;
  FUN_1446ddda2(&DAT_14cbd1230,"pearl",0);
  atexit((_func_5014 *)&LAB_144209cc0);
  local_78 = (char ***)0x14b997d3a;
  uStack_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd1258 = (ulonglong)uVar2;
  _DAT_14cbd1260 = 0xffffffff;
  _DAT_14cbd1264 = 0;
  local_78 = (char ***)((ulonglong)local_78 & 0xffffffffffffff00);
  local_98 = 0;
  FUN_140bd5914(&DAT_14cbd1268,L"oak.Cinematics.EnableSubFrameEvaluation",&local_78,
                L"If set to 1 all OakCinematicLevelSequence MovieScenes will use EMovieSceneEvaluationType::WithSubFrames."
               );
  atexit(FUN_144209f1b);
  _DAT_14cbd1288 = &LAB_144209f60;
  _DAT_14cbd1290 = 0x45837800;
  DAT_14cbd1294 = 1;
  DAT_14cbd1280 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd1280;
  atexit((_func_5014 *)&LAB_144209f65);
  FUN_1446f470e(&DAT_14cbd12a0,L"OakLevelSequenceEcho4Spawner",1);
  FUN_1446f470e(&DAT_14cbd12a8,L"OakLevelSequencePlayerCharacterSpawner");
  _DAT_14cbd12b8 = &LAB_144209f99;
  _DAT_14cbd12c0 = 0x45837000;
  DAT_14cbd12c4 = 1;
  DAT_14cbd12b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbd12b0;
  atexit((_func_5014 *)&LAB_144209f9e);
  local_78 = (char ***)0x14b7bcce0;
  uStack_70._0_5_ = 8;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd12d0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b7bcce9;
  uStack_70._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd12d8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b7bccf6;
  uStack_70._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd12e0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b7bcd0e;
  uStack_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd12e8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b7bcd20;
  uStack_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd12f0 = (ulonglong)uVar2;
  _DAT_14cbd12f8 = 0;
  uRam000000014cbd1300 = 0;
  _DAT_14cbd1308 = 0;
  DAT_14cbd1310 = 0;
  uRam000000014cbd1318 = 0;
  FUN_1446ddda2(&DAT_14cbd12f8,"allactivities",0);
  atexit((_func_5014 *)&LAB_144209fd2);
  _DAT_14cbd1320 = 0;
  uRam000000014cbd1328 = 0;
  _DAT_14cbd1330 = 0;
  DAT_14cbd1338 = 0;
  uRam000000014cbd1340 = 0;
  FUN_1446ddda2(&DAT_14cbd1320,"serial",0);
  atexit((_func_5014 *)&LAB_144209fe3);
  _DAT_14cbd1348 = 0;
  uRam000000014cbd1350 = 0;
  _DAT_14cbd1358 = 0;
  DAT_14cbd1360 = 0;
  uRam000000014cbd1368 = 0;
  FUN_1446ddda2(&DAT_14cbd1348,"missionstate",0);
  atexit((_func_5014 *)&LAB_144209ff4);
  local_78 = (char ***)0x14a171d3e;
  uStack_70._0_5_ = 5;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd1370 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b434d75;
  uStack_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd1378 = (ulonglong)uVar2;
  _DAT_14cbd1380 = 0;
  uRam000000014cbd1388 = 0;
  _DAT_14cbd1390 = 0;
  DAT_14cbd1398 = 0;
  uRam000000014cbd13a0 = 0;
  FUN_1446ddda2(&DAT_14cbd1380,"shared",0);
  atexit((_func_5014 *)&LAB_14420a5bc);
  _DAT_14cbd13a8 = 0;
  uRam000000014cbd13b0 = 0;
  _DAT_14cbd13b8 = 0;
  DAT_14cbd13c0 = 0;
  uRam000000014cbd13c8 = 0;
  FUN_1446ddda2(&DAT_14cbd13a8,"unlockables",0);
  atexit((_func_5014 *)&LAB_14420a5cd);
  DAT_14cbd13d0._4_4_ = 0;
  DAT_14cbd13d8 = 0;
  FUN_14052b5e0(&DAT_14cbd13d0,"entries");
  _DAT_14cbd13e0 = "entries";
  local_78 = (char ***)0x14b998010;
  uStack_70._0_5_ = 0x1c;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd13f0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b99802d;
  uStack_70._0_5_ = 0x1e;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd13f8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b99804c;
  uStack_70._0_5_ = 0x1e;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd1400 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b99806b;
  uStack_70._0_5_ = 0x22;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd1408 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b99808e;
  uStack_70._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd1410 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b9980a9;
  uStack_70 = (undefined4 *)CONCAT35(uStack_70._5_3_,0x1c);
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd1418 = (ulonglong)uVar2;
  _DAT_14cbd1420 = 0;
  uRam000000014cbd1428 = 0;
  _DAT_14cbd1430 = 0;
  _DAT_14cbd1438 = 0;
  uRam000000014cbd1440 = 0;
  FUN_1446ddda2(&DAT_14cbd1420,"Reward_PrisonPrologue",0);
  _DAT_14cbd1458 = 0;
  _DAT_14cbd1448 = 0;
  uRam000000014cbd1450 = 0;
  _DAT_14cbd1460 = 0;
  uRam000000014cbd1468 = 0;
  FUN_1446ddda2(&DAT_14cbd1448,"Reward_ItemPool_Grasslands1",0);
  _DAT_14cbd1480 = 0;
  _DAT_14cbd1470 = 0;
  uRam000000014cbd1478 = 0;
  _DAT_14cbd1488 = 0;
  uRam000000014cbd1490 = 0;
  FUN_1446ddda2(&DAT_14cbd1470,"Reward_ItemPool_Grasslands2A",0);
  _DAT_14cbd14a8 = 0;
  _DAT_14cbd1498 = 0;
  uRam000000014cbd14a0 = 0;
  _DAT_14cbd14b0 = 0;
  uRam000000014cbd14b8 = 0;
  FUN_1446ddda2(&DAT_14cbd1498,"Reward_ItemPool_Grasslands3",0);
  _DAT_14cbd14d0 = 0;
  _DAT_14cbd14c0 = 0;
  uRam000000014cbd14c8 = 0;
  _DAT_14cbd14d8 = 0;
  uRam000000014cbd14e0 = 0;
  FUN_1446ddda2(&DAT_14cbd14c0,"Reward_ItemPool_Mountains2A",0);
  _DAT_14cbd14f8 = 0;
  _DAT_14cbd14e8 = 0;
  uRam000000014cbd14f0 = 0;
  _DAT_14cbd1500 = 0;
  uRam000000014cbd1508 = 0;
  FUN_1446ddda2(&DAT_14cbd14e8,"Reward_ItemPool_Mountains2B",0);
  _DAT_14cbd1520 = 0;
  _DAT_14cbd1510 = 0;
  uRam000000014cbd1518 = 0;
  _DAT_14cbd1528 = 0;
  uRam000000014cbd1530 = 0;
  FUN_1446ddda2(&DAT_14cbd1510,"Reward_ItemPool_Mountains3",0);
  _DAT_14cbd1548 = 0;
  _DAT_14cbd1538 = 0;
  uRam000000014cbd1540 = 0;
  _DAT_14cbd1550 = 0;
  uRam000000014cbd1558 = 0;
  FUN_1446ddda2(&DAT_14cbd1538,"Reward_ItemPool_Shatteredlands1",0);
  _DAT_14cbd1570 = 0;
  _DAT_14cbd1560 = 0;
  uRam000000014cbd1568 = 0;
  _DAT_14cbd1578 = 0;
  uRam000000014cbd1580 = 0;
  FUN_1446ddda2(&DAT_14cbd1560,"Reward_ItemPool_Shatteredlands3",0);
  _DAT_14cbd1598 = 0;
  _DAT_14cbd1588 = 0;
  uRam000000014cbd1590 = 0;
  _DAT_14cbd15a0 = 0;
  uRam000000014cbd15a8 = 0;
  FUN_1446ddda2(&DAT_14cbd1588,"Reward_ItemPool_City1",0);
  _DAT_14cbd15c0 = 0;
  _DAT_14cbd15b0 = 0;
  uRam000000014cbd15b8 = 0;
  _DAT_14cbd15c8 = 0;
  uRam000000014cbd15d0 = 0;
  FUN_1446ddda2(&DAT_14cbd15b0,"Reward_ItemPool_City3",0);
  _DAT_14cbd15e8 = 0;
  _DAT_14cbd15d8 = 0;
  uRam000000014cbd15e0 = 0;
  _DAT_14cbd15f0 = 0;
  uRam000000014cbd15f8 = 0;
  FUN_1446ddda2(&DAT_14cbd15d8,"Reward_ItemPool_GrasslandsFaction1",0);
  _DAT_14cbd1610 = 0;
  _DAT_14cbd1600 = 0;
  uRam000000014cbd1608 = 0;
  _DAT_14cbd1618 = 0;
  uRam000000014cbd1620 = 0;
  FUN_1446ddda2(&DAT_14cbd1600,"Reward_ItemPool_GrasslandsFaction3",0);
  _DAT_14cbd1638 = 0;
  _DAT_14cbd1628 = 0;
  uRam000000014cbd1630 = 0;
  _DAT_14cbd1640 = 0;
  uRam000000014cbd1648 = 0;
  FUN_1446ddda2(&DAT_14cbd1628,"Reward_ItemPool_MountainsFaction1",0);
  _DAT_14cbd1660 = 0;
  _DAT_14cbd1650 = 0;
  uRam000000014cbd1658 = 0;
  _DAT_14cbd1668 = 0;
  uRam000000014cbd1670 = 0;
  FUN_1446ddda2(&DAT_14cbd1650,"Reward_ItemPool_MountainsFaction3",0);
  _DAT_14cbd1688 = 0;
  _DAT_14cbd1678 = 0;
  uRam000000014cbd1680 = 0;
  _DAT_14cbd1690 = 0;
  uRam000000014cbd1698 = 0;
  FUN_1446ddda2(&DAT_14cbd1678,"Reward_ItemPool_MountainsFaction4",0);
  _DAT_14cbd16b0 = 0;
  _DAT_14cbd16a0 = 0;
  uRam000000014cbd16a8 = 0;
  _DAT_14cbd16b8 = 0;
  uRam000000014cbd16c0 = 0;
  FUN_1446ddda2(&DAT_14cbd16a0,"Reward_ItemPool_ShatteredlandsFaction1",0);
  _DAT_14cbd16d8 = 0;
  _DAT_14cbd16c8 = 0;
  uRam000000014cbd16d0 = 0;
  _DAT_14cbd16e0 = 0;
  uRam000000014cbd16e8 = 0;
  FUN_1446ddda2(&DAT_14cbd16c8,"Reward_ItemPool_ShatteredlandsFaction3",0);
  _DAT_14cbd1700 = 0;
  _DAT_14cbd16f0 = 0;
  uRam000000014cbd16f8 = 0;
  _DAT_14cbd1708 = 0;
  uRam000000014cbd1710 = 0;
  FUN_1446ddda2(&DAT_14cbd16f0,"Reward_ItemPool_CastingCall",0);
  _DAT_14cbd1728 = 0;
  _DAT_14cbd1718 = 0;
  uRam000000014cbd1720 = 0;
  _DAT_14cbd1730 = 0;
  uRam000000014cbd1738 = 0;
  FUN_1446ddda2(&DAT_14cbd1718,"Reward_ItemPool_ClaptrapOfPandora",0);
  _DAT_14cbd1750 = 0;
  _DAT_14cbd1740 = 0;
  uRam000000014cbd1748 = 0;
  _DAT_14cbd1758 = 0;
  uRam000000014cbd1760 = 0;
  FUN_1446ddda2(&DAT_14cbd1740,"Reward_ItemPool_FlatKairoser",0);
  _DAT_14cbd1778 = 0;
  _DAT_14cbd1768 = 0;
  uRam000000014cbd1770 = 0;
  _DAT_14cbd1780 = 0;
  uRam000000014cbd1788 = 0;
  FUN_1446ddda2(&DAT_14cbd1768,"Reward_ItemPool_LifesPurpose",0);
  _DAT_14cbd17a0 = 0;
  _DAT_14cbd1790 = 0;
  uRam000000014cbd1798 = 0;
  _DAT_14cbd17a8 = 0;
  uRam000000014cbd17b0 = 0;
  FUN_1446ddda2(&DAT_14cbd1790,"Reward_ItemPool_MurderMystery",0);
  _DAT_14cbd17c8 = 0;
  _DAT_14cbd17b8 = 0;
  uRam000000014cbd17c0 = 0;
  _DAT_14cbd17d0 = 0;
  uRam000000014cbd17d8 = 0;
  FUN_1446ddda2(&DAT_14cbd17b8,"Reward_ItemPool_MurderMystery_SecretEnding",0);
  _DAT_14cbd17f0 = 0;
  _DAT_14cbd17e0 = 0;
  uRam000000014cbd17e8 = 0;
  _DAT_14cbd17f8 = 0;
  uRam000000014cbd1800 = 0;
  FUN_1446ddda2(&DAT_14cbd17e0,"Reward_ItemPool_OldRaymond2",0);
  _DAT_14cbd1818 = 0;
  _DAT_14cbd1808 = 0;
  uRam000000014cbd1810 = 0;
  _DAT_14cbd1820 = 0;
  uRam000000014cbd1828 = 0;
  FUN_1446ddda2(&DAT_14cbd1808,"Reward_ItemPool_PlanetaryEscape",0);
  _DAT_14cbd1840 = 0;
  _DAT_14cbd1830 = 0;
  uRam000000014cbd1838 = 0;
  _DAT_14cbd1848 = 0;
  uRam000000014cbd1850 = 0;
  FUN_1446ddda2(&DAT_14cbd1830,"Reward_ItemPool_RocketMonsters",0);
  _DAT_14cbd1868 = 0;
  _DAT_14cbd1858 = 0;
  uRam000000014cbd1860 = 0;
  _DAT_14cbd1870 = 0;
  uRam000000014cbd1878 = 0;
  FUN_1446ddda2(&DAT_14cbd1858,"Reward_ItemPool_SearchForLilith",0);
  _DAT_14cbd1890 = 0;
  _DAT_14cbd1880 = 0;
  uRam000000014cbd1888 = 0;
  _DAT_14cbd1898 = 0;
  uRam000000014cbd18a0 = 0;
  FUN_1446ddda2(&DAT_14cbd1880,"Reward_ItemPool_ThresherRancher",0);
  _DAT_14cbd18b8 = 0;
  _DAT_14cbd18a8 = 0;
  uRam000000014cbd18b0 = 0;
  _DAT_14cbd18c0 = 0;
  uRam000000014cbd18c8 = 0;
  FUN_1446ddda2(&DAT_14cbd18a8,"Reward_ItemPool_WeirdWayHome",0);
  _DAT_14cbd18e0 = 0;
  _DAT_14cbd18d0 = 0;
  uRam000000014cbd18d8 = 0;
  _DAT_14cbd18e8 = 0;
  uRam000000014cbd18f0 = 0;
  FUN_1446ddda2(&DAT_14cbd18d0,"RewardPackage_CharacterHeads_06_UniqueE",0);
  _DAT_14cbd1908 = 0;
  _DAT_14cbd18f8 = 0;
  uRam000000014cbd1900 = 0;
  _DAT_14cbd1910 = 0;
  uRam000000014cbd1918 = 0;
  FUN_1446ddda2(&DAT_14cbd18f8,"RewardPackage_CharacterHeads_03_UniqueB",0);
  _DAT_14cbd1930 = 0;
  _DAT_14cbd1920 = 0;
  uRam000000014cbd1928 = 0;
  _DAT_14cbd1938 = 0;
  uRam000000014cbd1940 = 0;
  FUN_1446ddda2(&DAT_14cbd1920,"RewardPackage_CharacterHeads_07_UniqueF",0);
  _DAT_14cbd1958 = 0;
  _DAT_14cbd1948 = 0;
  uRam000000014cbd1950 = 0;
  _DAT_14cbd1960 = 0;
  uRam000000014cbd1968 = 0;
  FUN_1446ddda2(&DAT_14cbd1948,"RewardPackage_CharacterHeads_13_Robot",0);
  _DAT_14cbd1980 = 0;
  _DAT_14cbd1970 = 0;
  uRam000000014cbd1978 = 0;
  _DAT_14cbd1988 = 0;
  uRam000000014cbd1990 = 0;
  FUN_1446ddda2(&DAT_14cbd1970,"RewardPackage_CharacterSkin_03_Ghost",0);
  _DAT_14cbd19a8 = 0;
  _DAT_14cbd1998 = 0;
  uRam000000014cbd19a0 = 0;
  _DAT_14cbd19b0 = 0;
  uRam000000014cbd19b8 = 0;
  FUN_1446ddda2(&DAT_14cbd1998,"RewardPackage_CharacterSkin_19_Dirty",0);
  _DAT_14cbd19d0 = 0;
  _DAT_14cbd19c0 = 0;
  uRam000000014cbd19c8 = 0;
  _DAT_14cbd19d8 = 0;
  uRam000000014cbd19e0 = 0;
  FUN_1446ddda2(&DAT_14cbd19c0,"RewardPackage_CharacterSkin_20_HighRoller",0);
  _DAT_14cbd19f8 = 0;
  _DAT_14cbd19e8 = 0;
  uRam000000014cbd19f0 = 0;
  _DAT_14cbd1a00 = 0;
  uRam000000014cbd1a08 = 0;
  FUN_1446ddda2(&DAT_14cbd19e8,"RewardPackage_CharacterSkin_21_Graffiti",0);
  _DAT_14cbd1a20 = 0;
  _DAT_14cbd1a10 = 0;
  uRam000000014cbd1a18 = 0;
  _DAT_14cbd1a28 = 0;
  uRam000000014cbd1a30 = 0;
  FUN_1446ddda2(&DAT_14cbd1a10,"RewardPackage_CharacterSkin_22_Knitted",0);
  _DAT_14cbd1a48 = 0;
  _DAT_14cbd1a38 = 0;
  uRam000000014cbd1a40 = 0;
  _DAT_14cbd1a50 = 0;
  uRam000000014cbd1a58 = 0;
  FUN_1446ddda2(&DAT_14cbd1a38,"RewardPackage_CharacterSkin_25_Slimed",0);
  _DAT_14cbd1a70 = 0;
  _DAT_14cbd1a60 = 0;
  uRam000000014cbd1a68 = 0;
  _DAT_14cbd1a78 = 0;
  uRam000000014cbd1a80 = 0;
  FUN_1446ddda2(&DAT_14cbd1a60,"RewardPackage_CharacterSkin_26_MoneyCamo",0);
  _DAT_14cbd1a98 = 0;
  _DAT_14cbd1a88 = 0;
  uRam000000014cbd1a90 = 0;
  _DAT_14cbd1aa0 = 0;
  uRam000000014cbd1aa8 = 0;
  FUN_1446ddda2(&DAT_14cbd1a88,"RewardPackage_CharacterSkin_28_Ritual",0);
  _DAT_14cbd1ac0 = 0;
  _DAT_14cbd1ab0 = 0;
  uRam000000014cbd1ab8 = 0;
  _DAT_14cbd1ac8 = 0;
  uRam000000014cbd1ad0 = 0;
  FUN_1446ddda2(&DAT_14cbd1ab0,"RewardPackage_CharacterSkin_30_Cute",0);
  _DAT_14cbd1ae8 = 0;
  _DAT_14cbd1ad8 = 0;
  uRam000000014cbd1ae0 = 0;
  _DAT_14cbd1af0 = 0;
  uRam000000014cbd1af8 = 0;
  FUN_1446ddda2(&DAT_14cbd1ad8,"RewardPackage_CharacterSkin_32_DuctTaped",0);
  _DAT_14cbd1b10 = 0;
  _DAT_14cbd1b00 = 0;
  uRam000000014cbd1b08 = 0;
  _DAT_14cbd1b18 = 0;
  uRam000000014cbd1b20 = 0;
  FUN_1446ddda2(&DAT_14cbd1b00,"RewardPackage_CharacterSkin_33_Jakobs",0);
  _DAT_14cbd1b38 = 0;
  _DAT_14cbd1b28 = 0;
  uRam000000014cbd1b30 = 0;
  _DAT_14cbd1b40 = 0;
  uRam000000014cbd1b48 = 0;
  FUN_1446ddda2(&DAT_14cbd1b28,"RewardPackage_CharacterSkin_34_Daedalus",0);
  _DAT_14cbd1b60 = 0;
  _DAT_14cbd1b50 = 0;
  uRam000000014cbd1b58 = 0;
  _DAT_14cbd1b68 = 0;
  uRam000000014cbd1b70 = 0;
  FUN_1446ddda2(&DAT_14cbd1b50,"RewardPackage_CharacterSkin_35_Vladof",0);
  _DAT_14cbd1b88 = 0;
  _DAT_14cbd1b78 = 0;
  uRam000000014cbd1b80 = 0;
  _DAT_14cbd1b90 = 0;
  uRam000000014cbd1b98 = 0;
  FUN_1446ddda2(&DAT_14cbd1b78,"RewardPackage_CharacterSkin_36_Torgue",0);
  _DAT_14cbd1bb0 = 0;
  _DAT_14cbd1ba0 = 0;
  uRam000000014cbd1ba8 = 0;
  _DAT_14cbd1bb8 = 0;
  uRam000000014cbd1bc0 = 0;
  FUN_1446ddda2(&DAT_14cbd1ba0,"RewardPackage_CharacterSkin_37_Maliwan",0);
  _DAT_14cbd1bd8 = 0;
  _DAT_14cbd1bc8 = 0;
  uRam000000014cbd1bd0 = 0;
  _DAT_14cbd1be0 = 0;
  uRam000000014cbd1be8 = 0;
  FUN_1446ddda2(&DAT_14cbd1bc8,"RewardPackage_CharacterSkin_38_Cyberpop",0);
  _DAT_14cbd1c00 = 0;
  _DAT_14cbd1bf0 = 0;
  uRam000000014cbd1bf8 = 0;
  _DAT_14cbd1c08 = 0;
  uRam000000014cbd1c10 = 0;
  FUN_1446ddda2(&DAT_14cbd1bf0,"RewardPackage_CharacterSkin_39_Critters",0);
  _DAT_14cbd1c28 = 0;
  _DAT_14cbd1c18 = 0;
  uRam000000014cbd1c20 = 0;
  _DAT_14cbd1c30 = 0;
  uRam000000014cbd1c38 = 0;
  FUN_1446ddda2(&DAT_14cbd1c18,"RewardPackage_CharacterSkin_40_Veil",0);
  _DAT_14cbd1c50 = 0;
  _DAT_14cbd1c40 = 0;
  uRam000000014cbd1c48 = 0;
  _DAT_14cbd1c58 = 0;
  uRam000000014cbd1c60 = 0;
  FUN_1446ddda2(&DAT_14cbd1c40,"RewardPackage_Premium",0);
  _DAT_14cbd1c78 = 0;
  _DAT_14cbd1c68 = 0;
  uRam000000014cbd1c70 = 0;
  _DAT_14cbd1c80 = 0;
  uRam000000014cbd1c88 = 0;
  FUN_1446ddda2(&DAT_14cbd1c68,"RewardPackage_PreOrder",0);
  _DAT_14cbd1ca0 = 0;
  _DAT_14cbd1c90 = 0;
  uRam000000014cbd1c98 = 0;
  _DAT_14cbd1ca8 = 0;
  uRam000000014cbd1cb0 = 0;
  FUN_1446ddda2(&DAT_14cbd1c90,"RewardPackage_GearboxDev",0);
  _DAT_14cbd1cc8 = 0;
  _DAT_14cbd1cb8 = 0;
  uRam000000014cbd1cc0 = 0;
  _DAT_14cbd1cd0 = 0;
  uRam000000014cbd1cd8 = 0;
  FUN_1446ddda2(&DAT_14cbd1cb8,"RewardPackage_BreakFree",0);
  _DAT_14cbd1cf0 = 0;
  _DAT_14cbd1ce0 = 0;
  uRam000000014cbd1ce8 = 0;
  _DAT_14cbd1cf8 = 0;
  uRam000000014cbd1d00 = 0;
  FUN_1446ddda2(&DAT_14cbd1ce0,"RewardPackage_Halloween",0);
  _DAT_14cbd1d18 = 0;
  _DAT_14cbd1d08 = 0;
  uRam000000014cbd1d10 = 0;
  _DAT_14cbd1d20 = 0;
  uRam000000014cbd1d28 = 0;
  FUN_1446ddda2(&DAT_14cbd1d08,"RewardPackage_MercDay_Altas",0);
  _DAT_14cbd1d40 = 0;
  _DAT_14cbd1d30 = 0;
  uRam000000014cbd1d38 = 0;
  _DAT_14cbd1d48 = 0;
  uRam000000014cbd1d50 = 0;
  FUN_1446ddda2(&DAT_14cbd1d30,"RewardPackage_MercDay_Hyperion",0);
  _DAT_14cbd1d68 = 0;
  _DAT_14cbd1d58 = 0;
  uRam000000014cbd1d60 = 0;
  _DAT_14cbd1d70 = 0;
  uRam000000014cbd1d78 = 0;
  FUN_1446ddda2(&DAT_14cbd1d58,"RewardPackage_MercDay_Blizzard",0);
  _DAT_14cbd1d90 = 0;
  _DAT_14cbd1d80 = 0;
  uRam000000014cbd1d88 = 0;
  _DAT_14cbd1d98 = 0;
  uRam000000014cbd1da0 = 0;
  FUN_1446ddda2(&DAT_14cbd1d80,"RewardPackage_MercDay_COV",0);
  _DAT_14cbd1db8 = 0;
  _DAT_14cbd1da8 = 0;
  uRam000000014cbd1db0 = 0;
  _DAT_14cbd1dc0 = 0;
  uRam000000014cbd1dc8 = 0;
  FUN_1446ddda2(&DAT_14cbd1da8,"RewardPackage_BrokenHeartsDay",0);
  _DAT_14cbd1de0 = 0;
  _DAT_14cbd1dd0 = 0;
  uRam000000014cbd1dd8 = 0;
  _DAT_14cbd1de8 = 0;
  uRam000000014cbd1df0 = 0;
  FUN_1446ddda2(&DAT_14cbd1dd0,"RewardPackage_StPatrickDay",0);
  _DAT_14cbd1e08 = 0;
  _DAT_14cbd1df8 = 0;
  uRam000000014cbd1e00 = 0;
  _DAT_14cbd1e10 = 0;
  uRam000000014cbd1e18 = 0;
  FUN_1446ddda2(&DAT_14cbd1df8,"RewardPackage_BP1Mission",0);
  _DAT_14cbd1e30 = 0;
  _DAT_14cbd1e20 = 0;
  uRam000000014cbd1e28 = 0;
  _DAT_14cbd1e38 = 0;
  uRam000000014cbd1e40 = 0;
  FUN_1446ddda2(&DAT_14cbd1e20,"RewardData_VaultCard1_Head21",0);
  _DAT_14cbd1e58 = 0;
  _DAT_14cbd1e48 = 0;
  uRam000000014cbd1e50 = 0;
  _DAT_14cbd1e60 = 0;
  uRam000000014cbd1e68 = 0;
  FUN_1446ddda2(&DAT_14cbd1e48,"RewardData_VaultCard1_Head26",0);
  _DAT_14cbd1e80 = 0;
  _DAT_14cbd1e70 = 0;
  uRam000000014cbd1e78 = 0;
  _DAT_14cbd1e88 = 0;
  uRam000000014cbd1e90 = 0;
  FUN_1446ddda2(&DAT_14cbd1e70,"RewardData_VaultCard1_Head27",0);
  _DAT_14cbd1ea8 = 0;
  _DAT_14cbd1e98 = 0;
  uRam000000014cbd1ea0 = 0;
  _DAT_14cbd1eb0 = 0;
  uRam000000014cbd1eb8 = 0;
  FUN_1446ddda2(&DAT_14cbd1e98,"RewardData_VaultCard1_Head28",0);
  _DAT_14cbd1ed0 = 0;
  _DAT_14cbd1ec0 = 0;
  uRam000000014cbd1ec8 = 0;
  _DAT_14cbd1ed8 = 0;
  uRam000000014cbd1ee0 = 0;
  FUN_1446ddda2(&DAT_14cbd1ec0,"RewardData_VaultCard2_Head29",0);
  _DAT_14cbd1ef8 = 0;
  _DAT_14cbd1ee8 = 0;
  uRam000000014cbd1ef0 = 0;
  _DAT_14cbd1f00 = 0;
  uRam000000014cbd1f08 = 0;
  FUN_1446ddda2(&DAT_14cbd1ee8,"RewardData_VaultCard2_Head30",0);
  _DAT_14cbd1f20 = 0;
  _DAT_14cbd1f10 = 0;
  uRam000000014cbd1f18 = 0;
  _DAT_14cbd1f28 = 0;
  uRam000000014cbd1f30 = 0;
  FUN_1446ddda2(&DAT_14cbd1f10,"RewardData_VaultCard2_Head31",0);
  _DAT_14cbd1f48 = 0;
  _DAT_14cbd1f38 = 0;
  uRam000000014cbd1f40 = 0;
  _DAT_14cbd1f50 = 0;
  uRam000000014cbd1f58 = 0;
  FUN_1446ddda2(&DAT_14cbd1f38,"RewardData_VaultCard2_Head32",0);
  _DAT_14cbd1f70 = 0;
  _DAT_14cbd1f60 = 0;
  uRam000000014cbd1f68 = 0;
  _DAT_14cbd1f78 = 0;
  uRam000000014cbd1f80 = 0;
  FUN_1446ddda2(&DAT_14cbd1f60,"RewardData_VaultCard1_Skin46",0);
  _DAT_14cbd1f98 = 0;
  _DAT_14cbd1f88 = 0;
  uRam000000014cbd1f90 = 0;
  _DAT_14cbd1fa0 = 0;
  uRam000000014cbd1fa8 = 0;
  FUN_1446ddda2(&DAT_14cbd1f88,"RewardData_VaultCard1_Skin47",0);
  _DAT_14cbd1fc0 = 0;
  _DAT_14cbd1fb0 = 0;
  uRam000000014cbd1fb8 = 0;
  _DAT_14cbd1fc8 = 0;
  uRam000000014cbd1fd0 = 0;
  FUN_1446ddda2(&DAT_14cbd1fb0,"RewardData_VaultCard1_Skin48",0);
  _DAT_14cbd1fe8 = 0;
  _DAT_14cbd1fd8 = 0;
  uRam000000014cbd1fe0 = 0;
  _DAT_14cbd1ff0 = 0;
  uRam000000014cbd1ff8 = 0;
  FUN_1446ddda2(&DAT_14cbd1fd8,"RewardData_VaultCard1_Skin49",0);
  _DAT_14cbd2010 = 0;
  _DAT_14cbd2000 = 0;
  uRam000000014cbd2008 = 0;
  _DAT_14cbd2018 = 0;
  uRam000000014cbd2020 = 0;
  FUN_1446ddda2(&DAT_14cbd2000,"RewardPackage_MainMission_Cello",0);
  _DAT_14cbd2038 = 0;
  _DAT_14cbd2028 = 0;
  uRam000000014cbd2030 = 0;
  _DAT_14cbd2040 = 0;
  uRam000000014cbd2048 = 0;
  FUN_1446ddda2(&DAT_14cbd2028,"RewardData_VaultCard2_Skin57",0);
  _DAT_14cbd2060 = 0;
  _DAT_14cbd2050 = 0;
  uRam000000014cbd2058 = 0;
  _DAT_14cbd2068 = 0;
  uRam000000014cbd2070 = 0;
  FUN_1446ddda2(&DAT_14cbd2050,"RewardData_VaultCard2_Skin58",0);
  _DAT_14cbd2088 = 0;
  _DAT_14cbd2078 = 0;
  uRam000000014cbd2080 = 0;
  _DAT_14cbd2090 = 0;
  uRam000000014cbd2098 = 0;
  FUN_1446ddda2(&DAT_14cbd2078,"RewardData_VaultCard2_Skin59",0);
  _DAT_14cbd20b0 = 0;
  _DAT_14cbd20a0 = 0;
  uRam000000014cbd20a8 = 0;
  _DAT_14cbd20b8 = 0;
  uRam000000014cbd20c0 = 0;
  FUN_1446ddda2(&DAT_14cbd20a0,"RewardData_VaultCard2_Skin60",0);
  _DAT_14cbd20d8 = 0;
  _DAT_14cbd20c8 = 0;
  uRam000000014cbd20d0 = 0;
  _DAT_14cbd20e0 = 0;
  uRam000000014cbd20e8 = 0;
  FUN_1446ddda2(&DAT_14cbd20c8,"Reward_ItemPool_Cowbell_Mission5",0);
  _DAT_14cbd2100 = 0;
  _DAT_14cbd20f0 = 0;
  uRam000000014cbd20f8 = 0;
  _DAT_14cbd2108 = 0;
  uRam000000014cbd2110 = 0;
  FUN_1446ddda2(&DAT_14cbd20f0,"Reward_ItemPool_Cowbell_SafeHaven",0);
  _DAT_14cbd2128 = 0;
  _DAT_14cbd2118 = 0;
  uRam000000014cbd2120 = 0;
  _DAT_14cbd2130 = 0;
  uRam000000014cbd2138 = 0;
  FUN_1446ddda2(&DAT_14cbd2118,"Reward_ItemPool_Cowbell_SummoningCircle",0);
  _DAT_14cbd2150 = 0;
  _DAT_14cbd2140 = 0;
  uRam000000014cbd2148 = 0;
  _DAT_14cbd2158 = 0;
  uRam000000014cbd2160 = 0;
  FUN_1446ddda2(&DAT_14cbd2140,"RewardPackage_CharacterSkin_64_Nightmare",0);
  _DAT_14cbd2178 = 0;
  _DAT_14cbd2168 = 0;
  uRam000000014cbd2170 = 0;
  _DAT_14cbd2180 = 0;
  uRam000000014cbd2188 = 0;
  FUN_1446ddda2(&DAT_14cbd2168,"RewardPackage_CharacterSkin_65_Frozen",0);
  _DAT_14cbd21a0 = 0;
  _DAT_14cbd2190 = 0;
  uRam000000014cbd2198 = 0;
  _DAT_14cbd21a8 = 0;
  uRam000000014cbd21b0 = 0;
  FUN_1446ddda2(&DAT_14cbd2190,"RewardPackage_CharacterSkin_66_DahlWinter",0);
  _DAT_14cbd21c8 = 0;
  _DAT_14cbd21b8 = 0;
  uRam000000014cbd21c0 = 0;
  _DAT_14cbd21d0 = 0;
  uRam000000014cbd21d8 = 0;
  FUN_1446ddda2(&DAT_14cbd21b8,"RewardPackage_MainMission_Mandolin",0);
  _DAT_14cbd21f0 = 0;
  _DAT_14cbd21e0 = 0;
  uRam000000014cbd21e8 = 0;
  _DAT_14cbd21f8 = 0;
  uRam000000014cbd2200 = 0;
  FUN_1446ddda2(&DAT_14cbd21e0,"RewardData_VaultCard03_Head19",0);
  _DAT_14cbd2218 = 0;
  _DAT_14cbd2208 = 0;
  uRam000000014cbd2210 = 0;
  _DAT_14cbd2220 = 0;
  uRam000000014cbd2228 = 0;
  FUN_1446ddda2(&DAT_14cbd2208,"RewardData_VaultCard03_Head34",0);
  _DAT_14cbd2240 = 0;
  _DAT_14cbd2230 = 0;
  uRam000000014cbd2238 = 0;
  _DAT_14cbd2248 = 0;
  uRam000000014cbd2250 = 0;
  FUN_1446ddda2(&DAT_14cbd2230,"RewardData_VaultCard03_Head35",0);
  _DAT_14cbd2268 = 0;
  _DAT_14cbd2258 = 0;
  uRam000000014cbd2260 = 0;
  _DAT_14cbd2270 = 0;
  uRam000000014cbd2278 = 0;
  FUN_1446ddda2(&DAT_14cbd2258,"RewardData_VaultCard03_Head36",0);
  _DAT_14cbd2290 = 0;
  _DAT_14cbd2280 = 0;
  uRam000000014cbd2288 = 0;
  _DAT_14cbd2298 = 0;
  uRam000000014cbd22a0 = 0;
  FUN_1446ddda2(&DAT_14cbd2280,"RewardData_VaultCard03_Skin68",0);
  _DAT_14cbd22b8 = 0;
  _DAT_14cbd22a8 = 0;
  uRam000000014cbd22b0 = 0;
  _DAT_14cbd22c0 = 0;
  uRam000000014cbd22c8 = 0;
  FUN_1446ddda2(&DAT_14cbd22a8,"RewardData_VaultCard03_Skin69",0);
  _DAT_14cbd22e0 = 0;
  _DAT_14cbd22d0 = 0;
  uRam000000014cbd22d8 = 0;
  _DAT_14cbd22e8 = 0;
  uRam000000014cbd22f0 = 0;
  FUN_1446ddda2(&DAT_14cbd22d0,"RewardData_VaultCard03_Skin70",0);
  _DAT_14cbd2308 = 0;
  _DAT_14cbd22f8 = 0;
  uRam000000014cbd2300 = 0;
  _DAT_14cbd2310 = 0;
  uRam000000014cbd2318 = 0;
  FUN_1446ddda2(&DAT_14cbd22f8,"RewardData_VaultCard03_Skin71",0);
  _DAT_14cbd2330 = 0;
  _DAT_14cbd2320 = 0;
  uRam000000014cbd2328 = 0;
  _DAT_14cbd2338 = 0;
  uRam000000014cbd2340 = 0;
  FUN_1446ddda2(&DAT_14cbd2320,"RewardPackage_MainMission_Harp",0);
  _DAT_14cbd2358 = 0;
  _DAT_14cbd2348 = 0;
  uRam000000014cbd2350 = 0;
  _DAT_14cbd2360 = 0;
  uRam000000014cbd2368 = 0;
  FUN_1446ddda2(&DAT_14cbd2348,"RewardData_VaultCard04_Skin73",0);
  _DAT_14cbd2380 = 0;
  _DAT_14cbd2370 = 0;
  uRam000000014cbd2378 = 0;
  _DAT_14cbd2388 = 0;
  uRam000000014cbd2390 = 0;
  FUN_1446ddda2(&DAT_14cbd2370,"RewardData_VaultCard04_Skin74",0);
  _DAT_14cbd23a8 = 0;
  _DAT_14cbd2398 = 0;
  uRam000000014cbd23a0 = 0;
  _DAT_14cbd23b0 = 0;
  uRam000000014cbd23b8 = 0;
  FUN_1446ddda2(&DAT_14cbd2398,"RewardData_VaultCard04_Skin75",0);
  _DAT_14cbd23d0 = 0;
  _DAT_14cbd23c0 = 0;
  uRam000000014cbd23c8 = 0;
  _DAT_14cbd23d8 = 0;
  uRam000000014cbd23e0 = 0;
  FUN_1446ddda2(&DAT_14cbd23c0,"RewardData_VaultCard04_Skin76",0);
  _DAT_14cbd23f8 = 0;
  _DAT_14cbd23e8 = 0;
  uRam000000014cbd23f0 = 0;
  _DAT_14cbd2400 = 0;
  uRam000000014cbd2408 = 0;
  FUN_1446ddda2(&DAT_14cbd23e8,"Reward_ItemPool_Tuba_TimerBase",0);
  _DAT_14cbd2420 = 0;
  _DAT_14cbd2410 = 0;
  uRam000000014cbd2418 = 0;
  _DAT_14cbd2428 = 0;
  uRam000000014cbd2430 = 0;
  FUN_1446ddda2(&DAT_14cbd2410,"RewardPackage_MainMission_Viola",0);
  _DAT_14cbd2448 = 0;
  _DAT_14cbd2438 = 0;
  uRam000000014cbd2440 = 0;
  _DAT_14cbd2450 = 0;
  uRam000000014cbd2458 = 0;
  FUN_1446ddda2(&DAT_14cbd2438,"RewardData_VaultCard05_Head41",0);
  _DAT_14cbd2470 = 0;
  _DAT_14cbd2460 = 0;
  uRam000000014cbd2468 = 0;
  _DAT_14cbd2478 = 0;
  uRam000000014cbd2480 = 0;
  FUN_1446ddda2(&DAT_14cbd2460,"RewardData_VaultCard05_Head42",0);
  _DAT_14cbd2498 = 0;
  _DAT_14cbd2488 = 0;
  uRam000000014cbd2490 = 0;
  _DAT_14cbd24a0 = 0;
  uRam000000014cbd24a8 = 0;
  FUN_1446ddda2(&DAT_14cbd2488,"RewardData_VaultCard05_Head43",0);
  _DAT_14cbd24c0 = 0;
  _DAT_14cbd24b0 = 0;
  uRam000000014cbd24b8 = 0;
  _DAT_14cbd24c8 = 0;
  uRam000000014cbd24d0 = 0;
  FUN_1446ddda2(&DAT_14cbd24b0,"RewardData_VaultCard05_Head44",0);
  _DAT_14cbd24e8 = 0;
  _DAT_14cbd24d8 = 0;
  uRam000000014cbd24e0 = 0;
  _DAT_14cbd24f0 = 0;
  uRam000000014cbd24f8 = 0;
  FUN_1446ddda2(&DAT_14cbd24d8,"RewardData_VaultCard05_Skin78",0);
  _DAT_14cbd2510 = 0;
  _DAT_14cbd2500 = 0;
  uRam000000014cbd2508 = 0;
  _DAT_14cbd2518 = 0;
  uRam000000014cbd2520 = 0;
  FUN_1446ddda2(&DAT_14cbd2500,"RewardData_VaultCard05_Skin79",0);
  _DAT_14cbd2538 = 0;
  _DAT_14cbd2528 = 0;
  uRam000000014cbd2530 = 0;
  _DAT_14cbd2540 = 0;
  uRam000000014cbd2548 = 0;
  FUN_1446ddda2(&DAT_14cbd2528,"RewardData_VaultCard05_Skin80",0);
  _DAT_14cbd2560 = 0;
  _DAT_14cbd2550 = 0;
  uRam000000014cbd2558 = 0;
  DAT_14cbd2568 = 0;
  uRam000000014cbd2570 = 0;
  FUN_1446ddda2(&DAT_14cbd2550,"RewardData_VaultCard05_Skin81",0);
  _DAT_14cbd2588 = 0;
  _DAT_14cbd2578 = 0;
  uRam000000014cbd2580 = 0;
  DAT_14cbd2590 = 0;
  uRam000000014cbd2598 = 0;
  FUN_1446ddda2(&DAT_14cbd2578,"RewardPackage_TheHunt",0);
  atexit(FUN_14420a6fc);
  local_88 = (char ***)0x14b998eba;
  _DAT_14cbd25a0 = 0;
  uRam000000014cbd25a8 = 0;
  _DAT_14cbd25b0 = 0;
  DAT_14cbd25b8 = 0;
  uRam000000014cbd25c0 = 0;
  local_78 = (char ***)&local_88;
  uStack_70 = local_80;
  FUN_1487ca8ae(&DAT_14cbd25a0,&local_78);
  atexit((_func_5014 *)&LAB_144211614);
  local_88 = (char ***)0x14b998ec8;
  _DAT_14cbd25c8 = 0;
  uRam000000014cbd25d0 = 0;
  _DAT_14cbd25d8 = 0;
  DAT_14cbd25e0 = 0;
  uRam000000014cbd25e8 = 0;
  local_78 = (char ***)&local_88;
  uStack_70 = local_80;
  FUN_1487ca8ae(&DAT_14cbd25c8,&local_78);
  atexit((_func_5014 *)&LAB_144211625);
  _DAT_14cbd25f0 = 0;
  uRam000000014cbd25f8 = 0;
  _DAT_14cbd2600 = 0;
  _DAT_14cbd2608 = 0;
  uRam000000014cbd2610 = 0;
  FUN_1446ddda2(&DAT_14cbd25f0,"stats.openworld.activities.bounties_augur",0);
  _DAT_14cbd2628 = 0;
  _DAT_14cbd2618 = 0;
  uRam000000014cbd2620 = 0;
  _DAT_14cbd2630 = 0;
  uRam000000014cbd2638 = 0;
  FUN_1446ddda2(&DAT_14cbd2618,"stats.openworld.activities.bounties_vanguard",0);
  _DAT_14cbd2650 = 0;
  _DAT_14cbd2640 = 0;
  uRam000000014cbd2648 = 0;
  _DAT_14cbd2658 = 0;
  uRam000000014cbd2660 = 0;
  FUN_1446ddda2(&DAT_14cbd2640,"stats.openworld.activities.bounties_order",0);
  _DAT_14cbd2678 = 0;
  _DAT_14cbd2668 = 0;
  uRam000000014cbd2670 = 0;
  _DAT_14cbd2680 = 0;
  uRam000000014cbd2688 = 0;
  FUN_1446ddda2(&DAT_14cbd2668,"stats.openworld.activities.crawlers.crawlers_grasslands",0);
  _DAT_14cbd26a0 = 0;
  _DAT_14cbd2690 = 0;
  uRam000000014cbd2698 = 0;
  _DAT_14cbd26a8 = 0;
  uRam000000014cbd26b0 = 0;
  FUN_1446ddda2(&DAT_14cbd2690,"stats.openworld.activities.crawlers.crawlers_mountains",0);
  _DAT_14cbd26c8 = 0;
  _DAT_14cbd26b8 = 0;
  uRam000000014cbd26c0 = 0;
  _DAT_14cbd26d0 = 0;
  uRam000000014cbd26d8 = 0;
  FUN_1446ddda2(&DAT_14cbd26b8,"stats.openworld.activities.crawlers.crawlers_shatteredlands",0);
  _DAT_14cbd26f0 = 0;
  _DAT_14cbd26e0 = 0;
  uRam000000014cbd26e8 = 0;
  _DAT_14cbd26f8 = 0;
  uRam000000014cbd2700 = 0;
  FUN_1446ddda2(&DAT_14cbd26e0,"stats.openworld.activities.safehouses",0);
  _DAT_14cbd2718 = 0;
  _DAT_14cbd2708 = 0;
  uRam000000014cbd2710 = 0;
  _DAT_14cbd2720 = 0;
  uRam000000014cbd2728 = 0;
  FUN_1446ddda2(&DAT_14cbd2708,"stats.openworld.activities.silos",0);
  _DAT_14cbd2740 = 0;
  _DAT_14cbd2730 = 0;
  uRam000000014cbd2738 = 0;
  _DAT_14cbd2748 = 0;
  uRam000000014cbd2750 = 0;
  FUN_1446ddda2(&DAT_14cbd2730,"stats.openworld.collectibles.caches",0);
  _DAT_14cbd2768 = 0;
  _DAT_14cbd2758 = 0;
  uRam000000014cbd2760 = 0;
  _DAT_14cbd2770 = 0;
  uRam000000014cbd2778 = 0;
  FUN_1446ddda2(&DAT_14cbd2758,"stats.openworld.collectibles.evocariums",0);
  _DAT_14cbd2790 = 0;
  _DAT_14cbd2780 = 0;
  uRam000000014cbd2788 = 0;
  _DAT_14cbd2798 = 0;
  uRam000000014cbd27a0 = 0;
  FUN_1446ddda2(&DAT_14cbd2780,"stats.openworld.collectibles.capsules",0);
  _DAT_14cbd27b8 = 0;
  _DAT_14cbd27a8 = 0;
  uRam000000014cbd27b0 = 0;
  _DAT_14cbd27c0 = 0;
  uRam000000014cbd27c8 = 0;
  FUN_1446ddda2(&DAT_14cbd27a8,"stats.openworld.collectibles.propaspeakers",0);
  _DAT_14cbd27e0 = 0;
  _DAT_14cbd27d0 = 0;
  uRam000000014cbd27d8 = 0;
  _DAT_14cbd27e8 = 0;
  uRam000000014cbd27f0 = 0;
  FUN_1446ddda2(&DAT_14cbd27d0,"stats.openworld.collectibles.safes",0);
  _DAT_14cbd2808 = 0;
  _DAT_14cbd27f8 = 0;
  uRam000000014cbd2800 = 0;
  DAT_14cbd2810 = 0;
  uRam000000014cbd2818 = 0;
  FUN_1446ddda2(&DAT_14cbd27f8,"stats.openworld.collectibles.shrines",0);
  _DAT_14cbd2830 = 0;
  _DAT_14cbd2820 = 0;
  uRam000000014cbd2828 = 0;
  DAT_14cbd2838 = 0;
  uRam000000014cbd2840 = 0;
  FUN_1446ddda2(&DAT_14cbd2820,"stats.openworld.collectibles.vaultsymbols",0);
  atexit(FUN_144211636);
  _DAT_14cbd2850 = 0;
  uRam000000014cbd2858 = 0;
  _DAT_14cbd2860 = 0;
  DAT_14cbd2868 = 0;
  uRam000000014cbd2870 = 0;
  FUN_1446ddda2(&DAT_14cbd2850,"Unlockable_HoverDrives",0);
  atexit((_func_5014 *)&LAB_1442124dd);
  _DAT_14cbd2878 = 0;
  uRam000000014cbd2880 = 0;
  _DAT_14cbd2888 = 0;
  DAT_14cbd2890 = 0;
  uRam000000014cbd2898 = 0;
  FUN_1446ddda2(&DAT_14cbd2878,"merged_shared_data_version",0);
  atexit((_func_5014 *)&LAB_14421295d);
  FUN_1446f470e(&DAT_14cbd28a0,L"Transform",1);
  FUN_1446f470e(&DAT_14cbd28a8,L"Location.X",1);
  FUN_1446f470e(&DAT_14cbd28b0,L"Location.Y",1);
  FUN_1446f470e(&DAT_14cbd28b8,L"Location.Z");
  local_78 = (char ***)0x14b999330;
  uStack_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd28c0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626d88;
  uStack_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd28c8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b999346;
  uStack_70._0_5_ = 0x18;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd28d0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626d9d;
  uStack_70._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd28d8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626dae;
  uStack_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd28e0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b99935f;
  uStack_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd28e8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b999375;
  uStack_70._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd28f0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b9993c8;
  uStack_70._0_5_ = 0x11;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd28f8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626dc5;
  uStack_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2900 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b6272b0;
  uStack_70._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2908 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b627740;
  uStack_70._0_5_ = 0x1a;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2910 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b627650;
  uStack_70._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2918 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b627830;
  uStack_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2920 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62cc60;
  uStack_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2928 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b999478;
  uStack_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2930 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b999487;
  uStack_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2938 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b99949a;
  uStack_70._0_5_ = 10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbd2940 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62d008;
  uStack_70._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2948 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62ca60;
  uStack_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2950 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62c8d8;
  uStack_70._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2958 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b628bd0;
  uStack_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2960 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62cd88;
  uStack_70._0_5_ = 0x17;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2968 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62ceb8;
  uStack_70._0_5_ = 0x15;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2970 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62c9c0;
  uStack_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2978 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b42a7a8;
  uStack_70._0_5_ = 7;
  uVar2 = FUN_14001a6c0(&local_78,1);
  local_78 = (char ***)0x14b9994a5;
  uStack_70 = (undefined4 *)CONCAT35(uStack_70._5_3_,0xd);
  uVar3 = FUN_14001a6c0(&local_78,1);
  local_78 = (char ***)(ulonglong)uVar3;
  _DAT_14cbd2980 = 0;
  uRam000000014cbd2988 = 0;
  _DAT_14cbd2990 = 0;
  DAT_14cbd2998 = 0;
  uRam000000014cbd29a0 = 0;
  local_80[0] = 2;
  local_88 = (char ***)&local_78;
  uStack_70 = (undefined4 *)(ulonglong)uVar2;
  FUN_140ebdb32(&DAT_14cbd2980,&local_88,0);
  atexit((_func_5014 *)&LAB_1442160cc);
  local_78 = (char ***)0x14b9994b3;
  uStack_70._0_5_ = 9;
  uVar2 = FUN_14001a6c0(&local_78,1);
  local_78 = (char ***)0x14b9994a5;
  uStack_70 = (undefined4 *)CONCAT35(uStack_70._5_3_,0xd);
  uVar3 = FUN_14001a6c0(&local_78,1);
  local_78 = (char ***)(ulonglong)uVar3;
  _DAT_14cbd29a8 = 0;
  uRam000000014cbd29b0 = 0;
  _DAT_14cbd29b8 = 0;
  DAT_14cbd29c0 = 0;
  uRam000000014cbd29c8 = 0;
  local_80[0] = 2;
  local_88 = (char ***)&local_78;
  uStack_70 = (undefined4 *)(ulonglong)uVar2;
  FUN_140ebdb32(&DAT_14cbd29a8,&local_88,0);
  atexit((_func_5014 *)&LAB_1442160dd);
  local_78 = (char ***)0x14b62f220;
  uStack_70._0_5_ = 0xf;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd29d0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b999580;
  uStack_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd29d8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62f2b8;
  uStack_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd29e0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b999594;
  uStack_70._0_5_ = 0x10;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd29e8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b9995a5;
  uStack_70._0_5_ = 0xd;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd29f0 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b9995b3;
  uStack_70._0_5_ = 0xe;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd29f8 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62f3a0;
  uStack_70._0_5_ = 0x14;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a00 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b62f490;
  uStack_70._0_5_ = 0x12;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a08 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626dd4;
  uStack_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a10 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626deb;
  uStack_70._0_5_ = 0x1d;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a18 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626e09;
  uStack_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a20 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626e1d;
  uStack_70._0_5_ = 0x1c;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a28 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626e3a;
  uStack_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a30 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626e51;
  uStack_70._0_5_ = 0x16;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a38 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626e68;
  uStack_70._0_5_ = 0x13;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a40 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626e7c;
  uStack_70._0_5_ = 0x1c;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a48 = (ulonglong)uVar2;
  local_78 = (char ***)0x14b626e99;
  uStack_70 = (undefined4 *)CONCAT35(uStack_70._5_3_,0x13);
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbd2a50 = (ulonglong)uVar2;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14421fc20 FUN_14421fc20 body=650 status=ok
// SIG undefined FUN_14421fc20(void)

void FUN_14421fc20(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined1 *param_4)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 unaff_RBP;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  uint local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)(param_1 + 0xa8);
  if (lVar8 == 0) goto LAB_14421fc88;
  if (DAT_14cba8288 == 0) {
    local_70 = &local_50;
    local_50 = FUN_141864c34;
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
  if (((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
      (*(longlong *)
        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) ||
     (plVar10 = *(longlong **)(lVar8 + 0x6f10), plVar10 == (longlong *)0x0)) goto LAB_14421fc88;
  iVar6 = (int)plVar10[1];
  do {
    if (iVar6 == 0) goto LAB_14421fc88;
    LOCK();
    iVar5 = (int)plVar10[1];
    bVar12 = iVar6 == iVar5;
    if (bVar12) {
      *(int *)(plVar10 + 1) = iVar6 + 1;
      iVar5 = iVar6;
    }
    iVar6 = iVar5;
    UNLOCK();
  } while (!bVar12);
  plVar4 = *(longlong **)(lVar8 + 0x6f08);
  if (plVar4 == (longlong *)0x0) {
LAB_14421fced:
    plVar11 = (longlong *)0x0;
  }
  else {
    lVar8 = (**(code **)(*plVar4 + 8))(plVar4);
    lVar7 = FUN_1465b51b2();
    if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_14421fced;
    plVar11 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
        lVar7 + 0x30) {
      plVar11 = plVar4;
    }
  }
  LOCK();
  plVar4 = plVar10 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar10)(plVar10);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (plVar11 != (longlong *)0x0) {
    if (param_4[1] == '\x01') {
      uVar9 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),*param_4);
    }
    else {
      uVar9 = 0;
    }
    if ((plVar11[0x2f] != 0) && (*(int *)((longlong)plVar11 + 0x174) != 0)) {
      uVar3 = *(uint *)(plVar11 + 0x2e);
      if (((-1 < (int)uVar3) &&
          (((((int)uVar3 < DAT_14c9647dc &&
             (plVar10 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar10 != (longlong *)0x0)) &&
            ((int)plVar10[2] == *(int *)((longlong)plVar11 + 0x174))) &&
           ((uVar2 = *param_2, (*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (*plVar10 != 0)))))) &&
         (lVar8 = FUN_1400796d0(*(undefined8 *)(*plVar10 + 0x10),plVar11[0x2f],1), lVar8 != 0)) {
        local_a0 = 0;
        local_a8 = 0;
        local_98 = local_98 & 0xffffff00;
        FUN_148bb2264(plVar11 + 0x2e,param_3,
                      CONCAT71((int7)((ulonglong)param_2 >> 8),uVar2) & 0xffffffff,uVar9);
      }
    }
    FUN_148ddc3be(param_1);
  }
LAB_14421fc88:
  if (param_4[1] == '\x01') {
    param_4[1] = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14421ff00 FUN_14421ff00 body=74 status=ok
// SIG undefined FUN_14421ff00(void)

undefined8 * FUN_14421ff00(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  
  *param_2 = 0;
  lVar2 = *(longlong *)(param_1 + 0x2c8);
  param_2[1] = lVar2;
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + 8);
    do {
      if (iVar3 == 0) {
        param_2[1] = 0;
        return param_2;
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 8);
      bVar4 = iVar3 == iVar1;
      if (bVar4) {
        *(int *)(lVar2 + 8) = iVar3 + 1;
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      UNLOCK();
    } while (!bVar4);
    if (param_2[1] != 0) {
      *param_2 = *(undefined8 *)(param_1 + 0x2c0);
    }
  }
  return param_2;
}



// FUNCTION 14421ff4a FUN_14421ff4a body=319 status=ok
// SIG undefined FUN_14421ff4a(void)

longlong * FUN_14421ff4a(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141085fe4(param_1,&local_38);
  plVar4 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
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
        }
      }
    }
    LOCK();
    *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
    UNLOCK();
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,3,0x10);
  *(undefined4 *)(param_2 + 1) = 3;
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = &PTR_LAB_14b99ac60;
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
  puVar3[2] = lVar6;
  *puVar3 = &PTR_FUN_14b99c270;
  puVar3[3] = local_38;
  puVar3[4] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422008c FUN_14422008c body=158 status=ok
// SIG undefined FUN_14422008c(void)

undefined8 * FUN_14422008c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x180);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b99c2e0;
  plVar1 = plVar3 + 2;
  memset(plVar1,0,0x170);
  FUN_145c42fa8(plVar1);
  plVar3[0x2f] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b63f2a0;
  *param_2 = plVar1;
  param_2[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
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



// FUNCTION 14422012a FUN_14422012a body=60 status=ok
// SIG undefined FUN_14422012a(void)

void FUN_14422012a(longlong param_1)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0x30) & 2) != 0) && (*(longlong *)(param_1 + 0x170) != 0)) {
    lVar1 = FUN_1403ca30c(param_1);
    if (lVar1 != 0) {
      FUN_1458a0064(*(undefined8 *)(param_1 + 0x170));
      return;
    }
  }
  return;
}



// FUNCTION 14422017e FUN_14422017e body=102 status=ok
// SIG undefined FUN_14422017e(void)

void FUN_14422017e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1e8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x240);
  if ((longlong)*(int *)(param_1 + 0x210) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x210) << 6;
    lVar2 = *(longlong *)(param_1 + 0x208) + 0x20;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1442201e4 FUN_1442201e4 body=473 status=ok
// SIG undefined FUN_1442201e4(void)

undefined8 * FUN_1442201e4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)FUN_14001cc68(400);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b99c300;
  plVar1 = plVar6 + 2;
  memset(plVar1,0,0x180);
  FUN_145c42fa8(plVar1);
  plVar6[0x2f] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b63f340;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  cVar5 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar5 == '\0') goto LAB_14422027c;
  FUN_145c43050(param_1 + 400,&local_48,param_3);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar6[0x30] = local_48;
    plVar7 = (longlong *)plVar6[0x31];
    if (plVar7 != (longlong *)0x0) {
      plVar6[0x31] = 0;
LAB_14422034c:
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
joined_r0x00014422037b:
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar6[0x30] = local_48;
    plVar7 = (longlong *)plVar6[0x31];
    if (local_40 == plVar7) {
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
        plVar7 = plVar3;
        goto joined_r0x00014422037b;
      }
    }
    else {
      plVar6[0x31] = (longlong)local_40;
      if (plVar7 != (longlong *)0x0) goto LAB_14422034c;
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
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_14422027c:
  *param_2 = plVar1;
  param_2[1] = plVar6;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442203c0 FUN_1442203c0 body=60 status=ok
// SIG undefined FUN_1442203c0(void)

void FUN_1442203c0(longlong param_1)

{
  longlong lVar1;
  
  if (((*(byte *)(param_1 + 0x30) & 2) != 0) && (*(longlong *)(param_1 + 0x170) != 0)) {
    lVar1 = FUN_1403ca30c(param_1);
    if (lVar1 != 0) {
      FUN_1458a0064(*(undefined8 *)(param_1 + 0x170));
      return;
    }
  }
  return;
}



// FUNCTION 144220414 FUN_144220414 body=102 status=ok
// SIG undefined FUN_144220414(void)

void FUN_144220414(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1e8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x240);
  if ((longlong)*(int *)(param_1 + 0x210) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x210) << 6;
    lVar2 = *(longlong *)(param_1 + 0x208) + 0x20;
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar2);
      lVar2 = lVar2 + 0x40;
      lVar1 = lVar1 + -0x40;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14422047a FUN_14422047a body=473 status=ok
// SIG undefined FUN_14422047a(void)

undefined8 * FUN_14422047a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar6 = (longlong *)FUN_14001cc68(400);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b99c320;
  plVar1 = plVar6 + 2;
  memset(plVar1,0,0x180);
  FUN_145c42fa8(plVar1);
  plVar6[0x2f] = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b63f3e0;
  plVar6[0x30] = 0;
  plVar6[0x31] = 0;
  cVar5 = (**(code **)(*(longlong *)*param_3 + 0x50))();
  if (cVar5 == '\0') goto LAB_144220512;
  FUN_145c43050(param_1 + 400,&local_48,param_3);
  plVar3 = local_40;
  if (local_40 == (longlong *)0x0) {
    plVar6[0x30] = local_48;
    plVar7 = (longlong *)plVar6[0x31];
    if (plVar7 != (longlong *)0x0) {
      plVar6[0x31] = 0;
LAB_1442205e2:
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
joined_r0x000144220611:
        if (iVar4 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    plVar6[0x30] = local_48;
    plVar7 = (longlong *)plVar6[0x31];
    if (local_40 == plVar7) {
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2;
        UNLOCK();
        plVar7 = plVar3;
        goto joined_r0x000144220611;
      }
    }
    else {
      plVar6[0x31] = (longlong)local_40;
      if (plVar7 != (longlong *)0x0) goto LAB_1442205e2;
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
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
LAB_144220512:
  *param_2 = plVar1;
  param_2[1] = plVar6;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144220656 FUN_144220656 body=309 status=ok
// SIG undefined FUN_144220656(void)

undefined4 *
FUN_144220656(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  lVar1 = FUN_1447262c2(param_4);
  uVar2 = 0;
  uVar3 = 0;
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1478c0a72;
      local_50 = &LAB_1417b2375;
      local_58 = L"Engine";
      local_60 = 0x1000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    uVar3 = uVar2;
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      lVar1 = FUN_14422078c(lVar1);
      if (lVar1 != 0) {
        uVar3 = *(undefined4 *)(lVar1 + 0x368);
      }
    }
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = uVar3;
  *(undefined1 *)(param_2 + 8) = 2;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14422078c FUN_14422078c body=102 status=ok
// SIG undefined FUN_14422078c(void)

void FUN_14422078c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14401d8cc();
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



// FUNCTION 1442207f4 FUN_1442207f4 body=193 status=ok
// SIG undefined FUN_1442207f4(void)

void FUN_1442207f4(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if ((((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) &&
      (uVar1 = *param_2, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == param_2[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))) {
      lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_2 + 2),1);
      if ((lVar3 != 0) && (iVar2 = *(int *)(param_1 + 0x118), (longlong)iVar2 != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x110);
        lVar5 = 0;
        do {
          if (*(longlong *)(lVar3 + 0x10 + lVar5) != 0) {
            FUN_14401c36f(param_2);
          }
          lVar5 = lVar5 + 0x20;
        } while ((longlong)iVar2 * 0x20 != lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1442208b6 FUN_1442208b6 body=93 status=ok
// SIG undefined FUN_1442208b6(void)

undefined8 * FUN_1442208b6(undefined8 *param_1)

{
  FUN_145c26650();
  *param_1 = &PTR_FUN_14b6530c0;
  param_1[5] = &PTR_FUN_14b653560;
  param_1[6] = &PTR_LAB_14b6535a0;
  FUN_140f23ff6(param_1 + 0x4a);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  return param_1;
}



// FUNCTION 144220914 FUN_144220914 body=89 status=ok
// SIG undefined FUN_144220914(void)

void FUN_144220914(longlong param_1)

{
  byte bVar1;
  
  FUN_145c71034();
  if (param_1 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_1);
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x240) = param_1;
  if ((param_1 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(param_1);
  }
  *(longlong *)(param_1 + 0x370) = param_1;
  return;
}



// FUNCTION 14422096e FUN_14422096e body=145 status=ok
// SIG undefined FUN_14422096e(void)

void FUN_14422096e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145c0632a();
  FUN_1446f470e(&local_38,L"JinxTargetList",1);
  uVar1 = FUN_14401d8cc();
  FUN_14401d8cc();
  uVar1 = FUN_140f1fabf(uVar1,local_38);
  local_38 = 2;
  local_30 = 0;
  local_28 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144220a00 FUN_144220a00 body=782 status=ok
// SIG undefined FUN_144220a00(void)

void FUN_144220a00(longlong *param_1,float param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  undefined1 local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(char *)((longlong)param_1 + 0x9c) < '\0') &&
     ((param_1[0x15] == 0 || (*(char *)(param_1[0x15] + 0x178) != '\x03')))) goto LAB_144220c4e;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_88 = CONCAT44(local_88._4_4_,param_2);
    uVar3 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_88);
    if (DAT_14c761388 != 0) {
      lVar8 = param_1[0x16];
      if (lVar8 == 0) {
        lVar8 = FUN_1448abda6(param_1);
        if (lVar8 == 0) goto LAB_144220a70;
      }
      uVar3 = FUN_14119d0a4(lVar8);
      FUN_140e65914(uVar3,param_1,*(undefined4 *)(lVar8 + 0x6f4));
    }
  }
LAB_144220a70:
  lVar8 = (longlong)(int)param_1[0x6d];
  if (0 < lVar8) {
    plVar1 = param_1 + 0x6c;
    uVar10 = lVar8 + 1;
    lVar9 = lVar8 * 0x20 + -8;
    lVar8 = lVar8 << 0x20;
    iVar7 = -(int)param_1[0x6d];
    do {
      lVar8 = lVar8 + -0x100000000;
      lVar6 = *plVar1;
      lVar2 = *(longlong *)(lVar6 + -8 + lVar9);
      if (((lVar2 == 0) || ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0)) ||
         (*(char *)(lVar2 + 0x5d30) != '\0')) {
LAB_144220af7:
        lVar6 = *(longlong *)(lVar6 + 0x10 + (lVar8 >> 0x1b));
        if ((lVar6 != 0) && (param_1[0x6e] != 0)) {
          FUN_1457b808a(param_1[0x6e],1,lVar6);
          lVar2 = param_1[0x6e];
          if (lVar2 != 0) {
            local_80 = 1;
            lVar5 = *(longlong *)(lVar2 + 0xa8);
            if (lVar5 != 0 && DAT_14c950c29 == 1) {
              local_90 = lVar5;
              FUN_1456cec3c();
              lVar2 = param_1[0x6e];
              lVar5 = local_90;
            }
            lVar2 = *(longlong *)(lVar2 + 0x378);
            local_78 = lVar5;
            if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
              local_90 = lVar2;
              FUN_1456cec3c(lVar2);
              lVar2 = local_90;
            }
            local_88 = lVar2;
            FUN_14109058a(lVar6,&local_88);
          }
        }
        iVar4 = (int)param_1[0x6d];
        if (iVar7 + iVar4 != 0) {
          lVar6 = (lVar8 >> 0x20) * 0x20;
          memmove((void *)(param_1[0x6c] + lVar6),(void *)(lVar6 + param_1[0x6c] + 0x20),
                  (longlong)(iVar7 + iVar4) << 5);
          iVar4 = (int)param_1[0x6d];
        }
        *(int *)(param_1 + 0x6d) = iVar4 + -1;
        FUN_144225560(plVar1);
        FUN_1407058ce(param_1 + 0x4a);
        FUN_140705914(param_1 + 0x4a);
        *(undefined8 *)((longlong)param_1 + 0x354) = 0xffffffffffffffff;
      }
      else {
        *(float *)(lVar6 + lVar9) = *(float *)(lVar6 + lVar9) - param_2;
        lVar6 = *plVar1;
        if (*(float *)(lVar6 + lVar9) <= 0.0) goto LAB_144220af7;
      }
      uVar10 = uVar10 - 1;
      lVar9 = lVar9 + -0x20;
      iVar7 = iVar7 + 1;
    } while (1 < uVar10);
    if (0 < (int)param_1[0x6d]) {
LAB_144220c4e:
      if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144220d34 FUN_144220d34 body=65 status=ok
// SIG undefined FUN_144220d34(void)

void FUN_144220d34(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_14422078c();
    if (lVar1 != 0) {
      if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(param_2);
      }
      *(longlong *)(lVar1 + 0x378) = param_2;
    }
  }
  return;
}



// FUNCTION 144220d76 FUN_144220d76 body=856 status=ok
// SIG undefined FUN_144220d76(void)

void FUN_144220d76(longlong *param_1,longlong param_2,float param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  code *local_88;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((-1 < *(char *)((longlong)param_1 + 0x9c)) ||
     ((param_1[0x15] != 0 && (*(char *)(param_1[0x15] + 0x178) == '\x03')))) {
    if (param_2 != 0) {
      if (DAT_14cba8288 == 0) {
        local_a0 = &local_88;
        local_88 = FUN_141864c34;
        local_90 = FUN_14081d0ea;
        local_98 = &LAB_1464cee30;
        local_a8 = &LAB_148bfac22;
        local_b0 = &LAB_140f21842;
        local_b8 = &DAT_149e063b2;
        local_c0 = 0;
        local_c8 = 0x10000004;
        local_d0 = 0x10;
        local_d8 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
          (0.0 < param_3)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        lVar2 = param_1[0x6c];
        iVar1 = (int)param_1[0x6d];
        lVar6 = (longlong)iVar1;
        if (lVar6 != 0) {
          lVar5 = lVar6 << 5;
          lVar3 = lVar2;
          do {
            if (*(longlong *)(lVar3 + 0x10) == param_2) {
              if (lVar3 != 0) {
                *(float *)(lVar3 + 0x18) = param_3;
                goto LAB_144220eda;
              }
              break;
            }
            lVar3 = lVar3 + 0x20;
            lVar5 = lVar5 + -0x20;
          } while (lVar5 != 0);
        }
        *(uint *)(param_1 + 0x6d) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0x36c) < iVar1 + 1U) {
          FUN_144022c12(param_1 + 0x6c,iVar1);
          lVar2 = param_1[0x6c];
        }
        lVar6 = lVar6 * 0x20;
        *(undefined8 *)(lVar2 + lVar6) = 0xffffffffffffffff;
        *(undefined4 *)(lVar2 + 8 + lVar6) = 0xffffffff;
        *(longlong *)(lVar2 + 0x10 + lVar6) = param_2;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        *(float *)(lVar2 + lVar6 + 0x18) = param_3;
        FUN_1407058ce(param_1 + 0x4a);
        FUN_140705914(param_1 + 0x4a);
        *(undefined8 *)((longlong)param_1 + 0x354) = 0xffffffffffffffff;
        if (param_1[0x6e] != 0) {
          FUN_1457b808a(param_1[0x6e],0,param_2);
        }
      }
    }
LAB_144220eda:
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = 0;
    lVar2 = param_1[0x15];
    if (lVar2 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar2);
    }
    pcVar4 = (code *)param_1[0x6f];
    local_80 = lVar2;
    if ((DAT_14c950c29 & 1) != 0) {
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)0x0;
      }
      else {
        FUN_1456cec3c();
        pcVar4 = (code *)param_1[0x6f];
      }
    }
    local_88 = pcVar4;
    FUN_1418ae4b4(&local_58,0);
    FUN_1410b8ae0(param_2,&local_88);
    (**(code **)(*param_1 + 0x3b0))(param_1,1);
    FUN_1409ed859(local_58,uStack_50 & 0xffffffff);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442210d0 FUN_1442210d0 body=66 status=ok
// SIG undefined FUN_1442210d0(void)

void FUN_1442210d0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_14422078c();
    if (lVar1 != 0) {
      FUN_144220d76(lVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 144221112 FUN_144221112 body=91 status=ok
// SIG undefined FUN_144221112(void)

void FUN_144221112(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    lVar1 = FUN_14422078c();
    if (lVar1 != 0) {
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      uStack_14 = param_2[3];
      FUN_1442207f4(lVar1 + 0x250);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144221180 FUN_144221180 body=695 status=ok
// SIG undefined FUN_144221180(void)

void FUN_144221180(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_88 [32];
  undefined1 local_68 [8];
  longlong *local_60;
  ulonglong local_58;
  undefined1 local_50 [8];
  longlong *local_48;
  int local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1 + 0x30) & 2) == 0) goto LAB_1442211a1;
  iVar10 = *(int *)(param_1 + 0xe0);
  if (iVar10 == 0) {
    FUN_1402a453c((int *)(param_1 + 0xe0));
    iVar10 = *(int *)(param_1 + 0xe0);
  }
  lVar3 = DAT_14c9a3d60;
  local_48 = (longlong *)0x14b63ef15;
  local_40 = 10;
  local_3c = 0;
  uVar6 = FUN_14001a6c0(&local_48,1);
  local_58 = (ulonglong)uVar6;
  FUN_141085fe4(param_1,local_68);
  FUN_14663484a(&local_48,local_68,&local_58);
  if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_48 + 0x30))(), cVar4 == '\0')) {
    if (local_40 == 0) goto LAB_14422136b;
    if (local_48 != (longlong *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_14422135e;
    }
  }
  else {
    lVar9 = lVar3 + (longlong)iVar10 * 0x88;
    plVar11 = (longlong *)(lVar3 + (longlong)iVar10 * 0x88 + -0x18);
    if (*(int *)(lVar9 + -4) < 1) {
      iVar10 = *(int *)(lVar9 + -0x10);
      iVar7 = *(int *)(lVar9 + -8) + -1;
      *(int *)(lVar9 + -8) = iVar7;
      if (iVar7 <= iVar10) {
        iVar7 = iVar10;
        if (0 < iVar10) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar11 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar11 + (longlong)iVar8 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar11,iVar8);
              FUN_14005b248(plVar11);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar7 = *(int *)(lVar9 + -0x10);
          } while (iVar8 < iVar7);
        }
        iVar8 = 2;
        if (2 < iVar7 * 2) {
          iVar8 = iVar7 * 2;
        }
        *(int *)(lVar9 + -8) = iVar8;
        if ((iVar8 < iVar10) && (*(int *)(lVar9 + -0xc) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,local_50);
    }
    iVar10 = *(int *)(lVar9 + -0x10);
    *(uint *)(lVar9 + -0x10) = iVar10 + 1U;
    if (*(uint *)(lVar9 + -0xc) < iVar10 + 1U) {
      FUN_1447a71f6(plVar11,iVar10);
    }
    lVar3 = *plVar11;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar3 + lVar9) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar9) = 0;
    *(longlong **)(lVar3 + lVar9) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar9) = local_40;
LAB_14422135e:
    local_40 = 0;
LAB_14422136b:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_60 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    FUN_1458850a2(param_1);
    cVar4 = FUN_1403ae288(param_1 + 0xc0);
    if (cVar4 != '\0') {
      uVar5 = FUN_145a45562(param_1);
      *(undefined1 *)(param_1 + 0xf1) = uVar5;
      FUN_1410dcfae(param_1);
    }
  }
LAB_1442211a1:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144221438 FUN_144221438 body=77 status=ok
// SIG undefined FUN_144221438(void)

void FUN_144221438(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x30) & 2) != 0) {
    if ((*(char *)(param_1 + 0x68) == '\x01') && (*(longlong *)(param_1 + 0x50) != 0)) {
      FUN_1418ac434(*(longlong *)(param_1 + 0x50),param_1 + 0x60);
      *(undefined1 *)(param_1 + 0x68) = 0;
    }
    if (*(char *)(param_1 + 0xf0) == '\x01') {
      FUN_14654ed90(param_1 + 0xc0);
      return;
    }
  }
  return;
}



// FUNCTION 144221486 FUN_144221486 body=98 status=ok
// SIG undefined FUN_144221486(void)

void FUN_144221486(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_145a45562();
  if (*(int *)(param_1 + 0xec) < *(int *)(param_1 + 0xe4)) {
    if (cVar1 != '\0') {
      if ((*(char *)(param_1 + 0xf1) == '\0') && ((*(byte *)(param_1 + 0x30) & 2) != 0)) {
        FUN_145884ed6(param_1,*(int *)(param_1 + 0xec) + 1);
      }
      FUN_148ddd696(param_1);
    }
  }
  else if (cVar1 == '\0') {
    FUN_1466341b8(param_1);
  }
  uVar2 = FUN_145a45562(param_1);
  *(undefined1 *)(param_1 + 0xf1) = uVar2;
  return;
}



// FUNCTION 1442214e8 FUN_1442214e8 body=231 status=ok
// SIG undefined FUN_1442214e8(void)

void FUN_1442214e8(longlong param_1,float param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  uint *puVar4;
  longlong lVar5;
  
  if ((((*(byte *)(param_1 + 0x30) & 2) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 200), plVar3 != (longlong *)0x0)) &&
     (*(int *)(param_1 + 0xc4) != 0)) {
    puVar4 = (uint *)(param_1 + 0xc0);
    uVar1 = *puVar4;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar5 != 0) &&
         ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0xc4) &&
          ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
        if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar3 = plVar3 + 0xd9;
        }
        else {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
        }
        cVar2 = FUN_14486eb0e(plVar3,puVar4);
        if ((0.0 <= param_2) && (cVar2 != '\0')) {
          lVar5 = FUN_14008e0ae(puVar4);
          FUN_1409d461e(lVar5,*(float *)(lVar5 + 200) + *(float *)(lVar5 + 0x120) + param_2,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1442215d0 FUN_1442215d0 body=301 status=ok
// SIG undefined FUN_1442215d0(void)

void FUN_1442215d0(longlong param_1,float param_2,char param_3)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if ((((*(byte *)(param_1 + 0x30) & 2) != 0) &&
      (plVar3 = *(longlong **)(param_1 + 200), plVar3 != (longlong *)0x0)) &&
     (*(int *)(param_1 + 0xc4) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xc0);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 != 0) &&
         ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0xc4) &&
          ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
        if (*(code **)(*plVar3 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar3 = plVar3 + 0xd9;
        }
        else {
          plVar3 = (longlong *)(**(code **)(*plVar3 + 0x10))();
        }
        cVar2 = FUN_14486eb0e(plVar3,(uint *)(param_1 + 0xc0));
        if ((0.0 <= param_2) && (cVar2 != '\0')) {
          if (param_3 == '\x01') {
            fVar5 = (float)FUN_148ddd81c(param_1);
            fVar6 = 0.0;
            if (0.0 < fVar5) {
              fVar6 = (float)FUN_148ddd874(param_1);
              fVar6 = fVar6 / fVar5;
            }
            param_2 = param_2 * fVar6;
          }
          fVar5 = (float)FUN_148ddd81c(param_1);
          fVar6 = (float)FUN_148ddd874(param_1);
          FUN_148ddd718(param_1,fVar5 * param_2 + fVar6);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1442216fe FUN_1442216fe body=505 status=ok
// SIG undefined FUN_1442216fe(void)

void FUN_1442216fe(longlong param_1,float param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  
  if (((((*(byte *)(param_1 + 0x30) & 2) != 0) &&
       (*(int *)(param_1 + 0xec) < *(int *)(param_1 + 0xe4))) &&
      (plVar4 = *(longlong **)(param_1 + 200), plVar4 != (longlong *)0x0)) &&
     (*(int *)(param_1 + 0xc4) != 0)) {
    puVar1 = (uint *)(param_1 + 0xc0);
    uVar2 = *puVar1;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar7 != 0) &&
         ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0xc4) &&
          ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
        if (*(code **)(*plVar4 + 0x10) == (code *)&LAB_1447a1f2e) {
          plVar4 = plVar4 + 0xd9;
        }
        else {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x10))();
        }
        cVar3 = FUN_14486eb0e(plVar4,puVar1);
        if ((0.0 <= param_2) && (cVar3 != '\0')) {
          lVar7 = FUN_14008e0ae(puVar1);
          fVar8 = *(float *)(lVar7 + 0x30) - *(float *)(lVar7 + 0x24);
          fVar8 = 1.0 - ((float)(-(uint)(fVar8 != 0.0) &
                                (uint)((*(float *)(lVar7 + 200) - *(float *)(lVar7 + 0x24)) / fVar8)
                                ) + param_2);
          if (0.0 <= fVar8) {
            lVar7 = FUN_14008e0ae(puVar1);
          }
          else {
            iVar6 = *(int *)(param_1 + 0xe4);
            iVar5 = *(int *)(param_1 + 0xec);
            if (iVar5 < iVar6) {
              FUN_145884ed6(param_1,iVar5 + 1);
              iVar6 = *(int *)(param_1 + 0xe4);
              iVar5 = *(int *)(param_1 + 0xec);
            }
            lVar7 = FUN_14008e0ae(puVar1);
            if (iVar5 < iVar6) {
              fVar8 = ABS(fVar8);
              if (1.0 <= fVar8) {
                fVar8 = 1.0;
              }
              FUN_1409d461e(lVar7,(*(float *)(lVar7 + 0x30) - *(float *)(lVar7 + 0x24)) * fVar8,0);
              return;
            }
            param_2 = 1.0;
          }
          FUN_1414daa56(lVar7,param_2,0x3f800000);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1442218f8 FUN_1442218f8 body=1169 status=ok
// SIG undefined FUN_1442218f8(void)

undefined8 * FUN_1442218f8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  undefined8 ****ppppuVar18;
  bool bVar19;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_80 [4];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_2;
  if (((*(longlong *)(*(longlong *)(param_3 + 8) + 0x88) == 0) ||
      (plVar9 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x90), plVar9 == (longlong *)0x0)) ||
     (plVar9 = (longlong *)(**(code **)(*plVar9 + 8))(), plVar9 == (longlong *)0x0)) {
LAB_144221985:
    plVar11 = (longlong *)0x0;
  }
  else {
    uVar10 = FUN_1403c7982();
    plVar9 = (longlong *)(**(code **)(*plVar9 + 0x288))(plVar9,uVar10);
    if (plVar9 == (longlong *)0x0) goto LAB_144221985;
    uVar10 = FUN_1403c7982();
    plVar11 = (longlong *)FUN_144718840(plVar9,uVar10);
    if (plVar9 == plVar11) goto LAB_144221985;
  }
  plVar12 = (longlong *)FUN_14001cc68(0x108);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14b99c4a0;
  plVar9 = plVar12 + 2;
  memset(plVar9,0,0xf8);
  FUN_1465b683e(plVar9);
  uVar10 = (**(code **)(*plVar11 + 0x10))(plVar11);
  uVar13 = FUN_14011c2be(param_1 + 0x80);
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_8c = CONCAT31(uStack_8c._1_3_,0xff);
  uStack_90 = 0;
  local_98 = (longlong *)0x0;
  FUN_14493679e(uVar10,&local_a8,uVar13,0);
  puVar2 = (uint *)(plVar12 + 0x1a);
  *(undefined4 *)(plVar12 + 0x1c) = (undefined4)local_98;
  *(undefined4 *)((longlong)plVar12 + 0xe4) = local_98._4_4_;
  *(undefined4 *)(plVar12 + 0x1d) = uStack_90;
  *(undefined4 *)((longlong)plVar12 + 0xec) = uStack_8c;
  *(uint *)(plVar12 + 0x1a) = (uint)local_a8;
  *(undefined4 *)((longlong)plVar12 + 0xd4) = local_a8._4_4_;
  *(undefined4 *)(plVar12 + 0x1b) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)plVar12 + 0xdc) = uStack_a0._4_4_;
  plVar15 = (longlong *)plVar12[0x1b];
  if (((((plVar15 != (longlong *)0x0) && (*(int *)((longlong)plVar12 + 0xd4) != 0)) &&
       ((uVar3 = *puVar2, -1 < (int)uVar3 &&
        (((int)uVar3 < DAT_14c9647dc &&
         (lVar17 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar17 != 0))))))
      && (*(int *)(lVar17 + 0x10) == *(int *)((longlong)plVar12 + 0xd4))) &&
     ((*(uint *)(lVar17 + 8) & 0x10200000) == 0)) {
    if (*(code **)(*plVar15 + 0x10) == (code *)&LAB_1447a1f2e) {
      plVar15 = plVar15 + 0xd9;
    }
    else {
      plVar15 = (longlong *)(**(code **)(*plVar15 + 0x10))();
    }
    cVar6 = FUN_14486eb0e(plVar15,puVar2);
    if (cVar6 != '\0') goto LAB_144221af6;
  }
  uVar10 = (**(code **)(*plVar11 + 0x10))(plVar11);
  uVar13 = FUN_14011c2be(param_1 + 0x80);
  FUN_14036c7e6(uVar10,&local_a8,uVar13,0);
  plVar12[0x1c] = (longlong)local_98;
  plVar12[0x1d] = CONCAT44(uStack_8c,uStack_90);
  *puVar2 = (uint)local_a8;
  *(undefined4 *)((longlong)plVar12 + 0xd4) = local_a8._4_4_;
  *(undefined4 *)(plVar12 + 0x1b) = (undefined4)uStack_a0;
  *(undefined4 *)((longlong)plVar12 + 0xdc) = uStack_a0._4_4_;
  *(undefined1 *)(plVar12 + 0x20) = 1;
LAB_144221af6:
  local_a8 = local_a8 & 0xffffffffffffff00;
  local_80[0] = 0;
  FUN_1456bb102(&local_a8,*(undefined8 *)(param_3 + 8));
  FUN_1448729ea(param_1 + 0x30,local_70,&local_a8);
  uVar7 = FUN_1405d5f74(local_70);
  *(undefined4 *)(plVar12 + 0x1f) = uVar7;
  FUN_140841e14(plVar12 + 0x1e,1);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar18 = local_70;
    if (0x18 < local_58) {
      ppppuVar18 = (undefined8 ****)local_70[0];
    }
    (*pcVar4)(ppppuVar18);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_1448173f8(local_80);
  if (((char)local_a8 == '\x03') && (local_98 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_98 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  if (*(longlong *)(param_3 + 8) == 0) {
    *(undefined4 *)(plVar12 + 0x18) = 0;
    iVar8 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_3 + 8) + 0xc);
    *(uint *)(plVar12 + 0x18) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar8 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar8 = *(int *)(lVar17 + 0x10);
      bVar19 = iVar8 == 0;
      if (bVar19) {
        *(int *)(lVar17 + 0x10) = iVar16;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar8 = iVar16;
      }
    }
  }
  *(int *)((longlong)plVar12 + 0xc4) = iVar8;
  lVar17 = *(longlong *)(param_1 + 0xa8);
  if (lVar17 == 0) {
    uVar10 = FUN_14110242a();
    lVar17 = FUN_14477b664(uVar10);
    *(longlong *)(param_1 + 0xa8) = lVar17;
  }
  puVar5 = local_b0;
  lVar14 = *(longlong *)(param_1 + 0xb0);
  if (((lVar14 == 0) && (lVar14 = 0, lVar17 != 0)) && (*(longlong *)(param_1 + 0xa0) != 0)) {
    plVar11 = *(longlong **)(lVar17 + 0xb8);
    if ((plVar11 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar6 == '\0')) {
      lVar14 = 0;
    }
    else {
      uVar10 = (**(code **)(*plVar11 + 0x110))(plVar11);
      lVar14 = FUN_144aff482(uVar10,(longlong *)(param_1 + 0xa0));
    }
    *(longlong *)(param_1 + 0xb0) = lVar14;
  }
  plVar12[0x19] = lVar14;
  if (*(char *)(param_1 + 0x98) == '\x01') {
    *(undefined4 *)((longlong)plVar12 + 0xfc) = *(undefined4 *)((longlong)plVar12 + 0xf4);
  }
  *puVar5 = plVar9;
  puVar5[1] = plVar12;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar12 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 144221d8a FUN_144221d8a body=409 status=ok
// SIG undefined FUN_144221d8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_144221d8a(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)FUN_14001cc68(200,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b99cfb0;
  plVar1 = plVar5 + 2;
  FUN_1404e4778(plVar1,param_4);
  plVar5[0x15] = 0;
  plVar5[0x16] = 0;
  plVar5[2] = (longlong)&PTR_FUN_14b99cfd0;
  plVar5[6] = (longlong)&PTR_FUN_14b99d010;
  plVar5[0x17] = lVar3;
  plVar5[0x18] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar5[10] != 0 && (plVar5[0xb] != 0)) && (0 < *(int *)(plVar5[0xb] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_144221ef0;
  }
  else {
    if (plVar5 == (longlong *)0x0) {
      _DAT_00000050 = 0x10;
      plVar7 = (longlong *)&DAT_00000058;
      plVar6 = _DAT_00000058;
      if (_DAT_00000058 != (longlong *)0x0) {
LAB_144221e8a:
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *plVar7 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_144221eab;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar5;
      goto LAB_144221ef0;
    }
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    plVar5[10] = (longlong)plVar1;
    if ((longlong *)plVar5[0xb] != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar5[0xb] != (longlong *)0x0) {
        plVar7 = plVar5 + 0xb;
        plVar6 = (longlong *)plVar5[0xb];
        goto LAB_144221e8a;
      }
      plVar5[0xb] = (longlong)plVar5;
    }
LAB_144221eab:
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar5;
  }
  LOCK();
  *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
  UNLOCK();
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
LAB_144221ef0:
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
  return param_2;
}



// FUNCTION 144221f23 FUN_144221f23 body=49 status=ok
// SIG undefined FUN_144221f23(void)

void FUN_144221f23(void)

{
  FUN_140b47c46(DAT_14cbd2e50,DAT_14cbd2e58);
  if (DAT_14cbd2e50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144221f54 FUN_144221f54 body=467 status=ok
// SIG undefined FUN_144221f54(void)

ulonglong FUN_144221f54(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (DAT_14cba8288 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141864c34;
        local_20 = FUN_14081d0ea;
        local_28 = (code *)&LAB_1464cee30;
        local_38 = &LAB_148bfac22;
        local_40 = (code *)&LAB_140f21842;
        local_48 = L"Game";
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30))
      goto LAB_144221fca;
    }
    if (DAT_14cb56270 == 0) {
      local_30 = &local_18;
      local_18 = FUN_1449e2820;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_1427b09ee;
      local_38 = &LAB_148630fef;
      local_40 = FUN_1464b6a91;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10004001;
      local_60 = 8;
      local_68 = 0x28;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar1 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x40))(plVar1);
      uVar2 = uVar2 ^ 1;
      goto LAB_144221fcc;
    }
  }
LAB_144221fca:
  uVar2 = 0;
LAB_144221fcc:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144222128 FUN_144222128 body=350 status=ok
// SIG undefined FUN_144222128(void)

void FUN_144222128(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_58 [37];
  undefined2 local_33;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)(int)param_1[1] != 0) {
    lVar3 = *param_1;
    lVar6 = (longlong)(int)param_1[1] * 0xc;
    do {
      cVar1 = FUN_14069eaf4(lVar3,param_2);
      if (cVar1 != '\0') {
        if (lVar3 != 0) goto LAB_144222203;
        break;
      }
      lVar3 = lVar3 + 0xc;
      lVar6 = lVar6 + -0xc;
    } while (lVar6 != 0);
  }
  cVar1 = FUN_144221f54(param_1,param_2);
  if (cVar1 != '\0') {
    if (param_2 == 0) {
      uVar5 = 0;
      iVar4 = 0;
    }
    else {
      uVar5 = *(uint *)(param_2 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar4 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        iVar2 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar2);
        }
        LOCK();
        iVar4 = *(int *)(lVar3 + 0x10);
        bVar7 = iVar4 == 0;
        if (bVar7) {
          *(int *)(lVar3 + 0x10) = iVar2;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar4 = iVar2;
        }
      }
    }
    iVar2 = (int)param_1[1];
    lVar3 = (longlong)iVar2;
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_148df7402(param_1,iVar2);
    }
    lVar6 = *param_1;
    *(uint *)(lVar6 + lVar3 * 0xc) = uVar5;
    *(int *)(lVar6 + 4 + lVar3 * 0xc) = iVar4;
    *(undefined2 *)(lVar6 + 9 + lVar3 * 0xc) = local_33;
    *(undefined1 *)(lVar6 + 0xb + lVar3 * 0xc) = local_31;
    *(undefined1 *)(lVar6 + 8 + lVar3 * 0xc) = 1;
  }
LAB_144222203:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144222288 FUN_144222288 body=213 status=ok
// SIG undefined FUN_144222288(void)

void FUN_144222288(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x498) != 0) {
    FUN_148ddfe70(param_1,&local_28);
    if (local_28 != 0) {
      FUN_1409e0d9e(local_28,param_1 + 0x498);
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
    *(undefined8 *)(param_1 + 0x498) = 0;
    puVar3 = *(undefined8 **)(param_1 + 0x4a0);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x4a0) = 0;
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3);
        LOCK();
        piVar2 = (int *)((longlong)puVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
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



// FUNCTION 14422236e FUN_14422236e body=344 status=ok
// SIG undefined FUN_14422236e(void)

void FUN_14422236e(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    iVar1 = *(int *)(lVar3 + 0x4f0);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x880))) {
      lVar5 = lVar3 + 0x4f8;
      if (*(longlong *)(lVar3 + 0x878) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x878);
      }
      if ((longlong)iVar1 * 0x38 + lVar5 != 0) {
        lVar3 = FUN_14030a32e();
        cVar2 = FUN_144221f54(param_1 + 0xa8,lVar3);
        if (cVar2 != '\0') {
          if (*(longlong *)(param_1 + 0xc0) != lVar3) {
            if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar3);
            }
            *(longlong *)(param_1 + 0xc0) = lVar3;
            local_30 = lVar3;
            FUN_1447cd2ec(param_1 + 0x488);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
        }
      }
    }
  }
  else {
    lVar5 = lVar3 + 0x4f8;
    if (*(longlong *)(lVar3 + 0x878) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x878);
    }
    if ((longlong)*(int *)(lVar3 + 0x880) != 0) {
      lVar3 = (longlong)*(int *)(lVar3 + 0x880) * 0x38;
      do {
        if ((*(byte *)(lVar5 + 0x34) & 1) == 0) {
          uVar4 = FUN_14030a32e(lVar5);
          cVar2 = FUN_144221f54(param_1 + 0xa8,uVar4);
          if (cVar2 != '\0') {
            FUN_144222128(param_1 + 0xa8,uVar4);
          }
        }
        lVar5 = lVar5 + 0x38;
        lVar3 = lVar3 + -0x38;
      } while (lVar3 != 0);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442224dc FUN_1442224dc body=492 status=ok
// SIG undefined FUN_1442224dc(void)

void FUN_1442224dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = *param_2;
  iVar3 = *(int *)(lVar7 + 0x4f0);
  if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar7 + 0x880))) {
    lVar9 = lVar7 + 0x4f8;
    if (*(longlong *)(lVar7 + 0x878) != 0) {
      lVar9 = *(longlong *)(lVar7 + 0x878);
    }
    if ((longlong)iVar3 * 0x38 + lVar9 != 0) {
      lVar7 = FUN_14030a32e();
      puVar1 = (undefined8 *)(param_1 + 0xa8);
      cVar5 = FUN_144221f54(puVar1,lVar7);
      if ((lVar7 != 0) && (cVar5 != '\0')) {
        if (*(char *)(param_1 + 0x50c) == '\x01') {
          *(undefined1 *)(param_1 + 0x50c) = 0;
        }
        if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
          lVar9 = *(longlong *)(param_1 + 0xa8);
          lVar10 = (longlong)*(int *)(param_1 + 0xb0) * 0xc;
          do {
            cVar5 = FUN_14069eaf4(lVar9,lVar7);
            if (cVar5 != '\0') {
              if (lVar9 != 0) goto LAB_144222655;
              break;
            }
            lVar9 = lVar9 + 0xc;
            lVar10 = lVar10 + -0xc;
          } while (lVar10 != 0);
        }
        if (*(longlong *)(param_1 + 0xc0) != lVar7) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar7);
          }
          *(longlong *)(param_1 + 0xc0) = lVar7;
          local_38 = lVar7;
          FUN_1447cd2ec(param_1 + 0x488);
        }
        if ((0 < *(int *)(param_1 + 0xb0)) && (cVar5 = FUN_144221f54(puVar1,lVar7), cVar5 != '\0'))
        {
          puVar4 = (uint *)*puVar1;
          uVar6 = *(uint *)(lVar7 + 0xc);
          *puVar4 = uVar6;
          if ((int)uVar6 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          uVar6 = *(uint *)(lVar7 + 0x10);
          if (*(uint *)(lVar7 + 0x10) == 0) {
            LOCK();
            iVar3 = DAT_14c964868 + 1;
            UNLOCK();
            uVar8 = DAT_14c964868 + 1;
            bVar11 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar3;
            if (bVar11) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar8);
            }
            LOCK();
            uVar6 = *(uint *)(lVar7 + 0x10);
            bVar11 = uVar6 == 0;
            if (bVar11) {
              *(uint *)(lVar7 + 0x10) = uVar8;
              uVar6 = 0;
            }
            UNLOCK();
            if (bVar11) {
              uVar6 = uVar8;
            }
          }
          puVar4[1] = uVar6;
        }
        goto LAB_144222655;
      }
    }
  }
  fVar2 = *(float *)(param_1 + 0x41c);
  if (((fVar2 != 0.0) || (NAN(fVar2))) && (*(char *)(param_1 + 0x50c) == '\0')) {
    *(float *)(param_1 + 0x508) = fVar2;
    *(undefined1 *)(param_1 + 0x50c) = 1;
  }
LAB_144222655:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442226ca FUN_1442226ca body=901 status=ok
// SIG undefined FUN_1442226ca(void)

void FUN_1442226ca(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_3a8 [40];
  undefined8 local_380;
  undefined8 local_378;
  longlong local_100;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if ((*(byte *)(param_1 + 0x510) & 1) != 0) {
    if (param_2 == '\x03') {
      cVar7 = '\x01';
      if (*(char *)(param_1 + 0x418) == '\x01') goto LAB_144222717;
    }
    else if ((param_2 == '\x05') && (cVar7 = '\x01', *(char *)(param_1 + 0x418) == '\x02'))
    goto LAB_144222717;
  }
  cVar7 = param_2;
LAB_144222717:
  cVar3 = *(char *)(param_1 + 0x450);
  if (cVar3 != cVar7) {
    if (cVar3 == '\x05') {
      FUN_144222a50(param_1);
    }
    else if (cVar3 == '\x04') {
      FUN_148de0012(param_1);
      lVar8 = FUN_1408a35a2(param_1 + 0x4a8);
      if (lVar8 != 0) {
        FUN_140c82872(lVar8);
      }
    }
    uVar4 = *(undefined1 *)(param_1 + 0x450);
    *(char *)(param_1 + 0x450) = cVar7;
    switch(cVar7) {
    case '\0':
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
        local_380 = 0;
        FUN_1447cd2ec(param_1 + 0x488);
      }
      FUN_144222288(param_1);
      break;
    case '\x01':
      *(byte *)(param_1 + 0x510) = *(byte *)(param_1 + 0x510) & 0xfe;
      *(undefined8 *)(param_1 + 0x440) = 0;
      plVar6 = *(longlong **)(param_1 + 0x448);
      if (plVar6 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x448) = 0;
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
      memset(&local_380,0,0x348);
      FUN_145926a7c(&local_380);
      FUN_148de008c(param_1 + 0xe0);
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      local_378 = 0;
      FUN_14076ba36();
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
        local_380 = 0;
        FUN_1447cd2ec(param_1 + 0x488);
      }
      iVar5 = *(int *)(param_1 + 0xb0);
      if ((longlong)iVar5 != 0) {
        lVar8 = *(longlong *)(param_1 + 0xa8);
        lVar9 = 0;
        do {
          if (*(char *)(lVar8 + 8 + lVar9) == '\x01') {
            *(undefined1 *)(lVar8 + 8 + lVar9) = 1;
          }
          lVar9 = lVar9 + 0xc;
        } while ((longlong)iVar5 * 0xc != lVar9);
      }
      *(undefined4 *)(param_1 + 0xb0) = 0;
      if (*(int *)(param_1 + 0xb4) != 0) {
        FUN_148df73d2(param_1 + 0xa8);
      }
      break;
    case '\x03':
      if (*(longlong **)(param_1 + 0x440) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(param_1 + 0x440) + 8))();
      }
      iVar5 = *(int *)(param_1 + 0xb0);
      if ((longlong)iVar5 != 0) {
        lVar8 = *(longlong *)(param_1 + 0xa8);
        lVar9 = 0;
        do {
          if (*(char *)(lVar8 + 8 + lVar9) == '\x01') {
            *(undefined1 *)(lVar8 + 8 + lVar9) = 1;
          }
          lVar9 = lVar9 + 0xc;
        } while ((longlong)iVar5 * 0xc != lVar9);
      }
      lVar8 = param_1 + 0xa8;
      *(undefined4 *)(param_1 + 0xb0) = 0;
      if (*(int *)(param_1 + 0xb4) != 0) {
        FUN_148df73d2(lVar8);
      }
      if (*(longlong *)(param_1 + 0xc0) != 0) {
        *(undefined8 *)(param_1 + 0xc0) = 0;
        local_380 = 0;
        FUN_1447cd2ec(param_1 + 0x488);
      }
      if (*(char *)(param_1 + 0xe1) == '\x01') {
        iVar5 = *(int *)(param_1 + 0x368);
        if ((longlong)iVar5 != 0) {
          lVar9 = *(longlong *)(param_1 + 0x360);
          lVar10 = 0;
          do {
            cVar7 = FUN_144221f54(lVar8,*(undefined8 *)(lVar9 + lVar10));
            if (cVar7 != '\0') {
              FUN_144222128(lVar8,*(undefined8 *)(lVar9 + lVar10));
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)iVar5 * 8 != lVar10);
        }
        *(undefined4 *)(param_1 + 0x368) = 0;
        if (*(int *)(param_1 + 0x36c) != 0) {
          FUN_1409edbf4(param_1 + 0x360,0);
        }
      }
      break;
    case '\x04':
      *(byte *)(param_1 + 0x510) = *(byte *)(param_1 + 0x510) | 1;
      FUN_148de014a(param_1);
      break;
    case '\x05':
      FUN_144222a50(param_1,0);
    }
    local_380._0_2_ = CONCAT11(*(undefined1 *)(param_1 + 0x450),uVar4);
    FUN_1447cd2ec(param_1 + 0x468);
  }
  if ((local_38 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144222a50 FUN_144222a50 body=78 status=ok
// SIG undefined FUN_144222a50(void)

void FUN_144222a50(longlong param_1,uint param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1403ae288(param_1 + 0x4d0);
  if (cVar1 != '\0') {
    lVar2 = FUN_14008e0ae(param_1 + 0x4d0);
    *(uint *)(lVar2 + 0xb8) = param_2 & 0xff;
    FUN_140841e14(lVar2 + 0xb0,1);
    return;
  }
  return;
}



// FUNCTION 144222a9e FUN_144222a9e body=250 status=ok
// SIG undefined FUN_144222a9e(void)

void FUN_144222a9e(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 1;
    FUN_140834d9a(param_1 + 0x70);
  }
  if (((*(byte *)(param_1 + 0x30) & 2) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x428), plVar2 != (longlong *)0x0)) {
    uVar1 = FUN_1403c7982();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1403c7982();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar4 = FUN_14011c2be(*(longlong *)(param_1 + 0x430) + 0x40);
        FUN_14036c7e6(uVar1,&local_40,uVar4,0);
        *(undefined4 *)(param_1 + 0x4e0) = local_30;
        *(undefined4 *)(param_1 + 0x4e4) = uStack_2c;
        *(undefined4 *)(param_1 + 0x4e8) = uStack_28;
        *(undefined4 *)(param_1 + 0x4ec) = uStack_24;
        *(undefined4 *)(param_1 + 0x4d0) = local_40;
        *(undefined4 *)(param_1 + 0x4d4) = uStack_3c;
        *(undefined4 *)(param_1 + 0x4d8) = uStack_38;
        *(undefined4 *)(param_1 + 0x4dc) = uStack_34;
        FUN_144222a50(param_1,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144222b9a FUN_144222b9a body=106 status=ok
// SIG undefined FUN_144222b9a(void)

void FUN_144222b9a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  if ((*(byte *)(param_1 + -0x40) & 2) == 0) {
    return;
  }
  lVar1 = param_1 + -0x70;
  cVar3 = FUN_1403ae288(param_1 + 0x460);
  if (cVar3 != '\0') {
    uVar2 = FUN_14008e0ae(param_1 + 0x460);
    FUN_1414daa56(uVar2,0x3f800000,0x3f800000);
  }
  FUN_144222a50(lVar1,1);
  FUN_1442226ca(lVar1,1);
  FUN_1410dcfae(lVar1);
  return;
}



// FUNCTION 144222c04 FUN_144222c04 body=697 status=ok
// SIG undefined FUN_144222c04(void)

void FUN_144222c04(longlong param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  float fVar9;
  
  switch(*(undefined1 *)(param_1 + 0x450)) {
  case 1:
    if (*(longlong *)(param_1 + 0x440) == 0) {
      FUN_148de0284(param_1);
    }
    cVar5 = FUN_1403ae288(param_1 + 0x4d0);
    if (cVar5 == '\0') {
      return;
    }
    if (*(longlong *)(param_1 + 0x430) == 0) {
      return;
    }
    if (*(int *)(*(longlong *)(param_1 + 0x430) + 0x38) == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x440) == 0) {
      return;
    }
    uVar6 = 2;
    goto LAB_144222ea8;
  case 2:
    cVar5 = FUN_148de09aa(param_1);
    if (cVar5 == '\0') {
LAB_144222e2b:
      uVar6 = 5;
      goto LAB_144222ea8;
    }
    break;
  case 3:
    iVar1 = *(int *)(param_1 + 0xb0);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
      lVar8 = 0;
      do {
        iVar2 = *(int *)(lVar4 + 4 + lVar8);
        if ((iVar2 == 0) || (uVar3 = *(uint *)(lVar4 + lVar8), (int)uVar3 < 0)) {
LAB_144222d13:
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar2)) ||
               ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_144222d13;
            uVar6 = *puVar7;
          }
        }
        cVar5 = FUN_144221f54(param_1 + 0xa8,uVar6);
        if (cVar5 != '\0') {
          uVar6 = 4;
          goto LAB_144222ea8;
        }
        lVar8 = lVar8 + 0xc;
      } while ((longlong)iVar1 * 0xc != lVar8);
    }
    if (*(char *)(param_1 + 0xe1) != '\x01') {
      if (*(char *)(param_1 + 0xe1) != '\0') {
        return;
      }
      if (*(longlong *)(param_1 + 0x498) != 0) {
        return;
      }
      FUN_148ddfcea(param_1);
      return;
    }
    uVar6 = 1;
    goto LAB_144222ea8;
  case 4:
    cVar5 = FUN_148de0960(param_1);
    if (cVar5 == '\0') goto LAB_144222e2b;
    iVar1 = *(int *)(param_1 + 0xb0);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa8);
      lVar8 = 0;
      do {
        iVar2 = *(int *)(lVar4 + 4 + lVar8);
        if ((iVar2 == 0) || (uVar3 = *(uint *)(lVar4 + lVar8), (int)uVar3 < 0)) {
LAB_144222e27:
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar2)) ||
               ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_144222e27;
            uVar6 = *puVar7;
          }
        }
        cVar5 = FUN_144221f54(param_1 + 0xa8,uVar6);
        if (cVar5 != '\0') {
          if (*(char *)(param_1 + 0xe0) != '\x01') {
            return;
          }
          if (*(char *)(param_1 + 0x50c) != '\x01') {
            return;
          }
          param_2 = *(float *)(param_1 + 0x508) - param_2;
          fVar9 = param_2;
          if (param_2 <= 0.0) {
            fVar9 = 0.0;
          }
          *(float *)(param_1 + 0x508) = fVar9;
          *(undefined1 *)(param_1 + 0x50c) = 1;
          if (0.0 < param_2) {
            return;
          }
          *(undefined1 *)(param_1 + 0x50c) = 0;
          break;
        }
        lVar8 = lVar8 + 0xc;
      } while ((longlong)iVar1 * 0xc != lVar8);
    }
    break;
  case 5:
    cVar5 = FUN_148de09aa(param_1);
    if (cVar5 == '\0') {
      return;
    }
    FUN_144222a50(param_1,1);
    break;
  default:
    return;
  }
  uVar6 = 3;
LAB_144222ea8:
  FUN_1442226ca(param_1,uVar6);
  return;
}



// FUNCTION 144222ebe FUN_144222ebe body=737 status=ok
// SIG undefined FUN_144222ebe(void)

ulonglong FUN_144222ebe(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar1 = *(longlong **)(param_1 + 0xa0);
  if (plVar1 == (longlong *)0x0) {
LAB_14422314c:
    uVar5 = 0;
  }
  else {
    if ((*(float *)(param_1 + 0x420) != 0.0) || (NAN(*(float *)(param_1 + 0x420)))) {
      pdVar6 = (double *)(*(longlong *)(param_3 + 0x1c8) + 0x260);
      if (*(longlong *)(param_3 + 0x1c8) == 0) {
        pdVar6 = (double *)&DAT_14c8464e0;
      }
      pdVar4 = (double *)(plVar1[0x39] + 0x260);
      if (plVar1[0x39] == 0) {
        pdVar4 = (double *)&DAT_14c8464e0;
      }
      dVar3 = *pdVar6 - *pdVar4;
      dVar10 = pdVar6[1] - pdVar4[1];
      (**(code **)(*plVar1 + 0x710))(plVar1,local_a8);
      dVar9 = (double)FUN_144719204(local_a8[0],0x4076800000000000);
      dVar2 = (double)FUN_144719204(local_a0,0x4076800000000000);
      sin(dVar9 * 0.017453292519943295);
      dVar9 = cos(dVar9 * 0.017453292519943295);
      dVar11 = sin(dVar2 * 0.017453292519943295);
      dVar2 = cos(dVar2 * 0.017453292519943295);
      dVar11 = dVar11 * dVar9;
      dVar2 = dVar2 * dVar9;
      dVar7 = dVar3 * dVar3 + dVar10 * dVar10;
      dVar9 = 0.0;
      if (dVar7 <= 9.99999993922529e-09) {
        dVar7 = 0.0;
      }
      else {
        dVar7 = 1.0 / SQRT(dVar7);
        dVar3 = dVar3 * dVar7;
        dVar10 = dVar10 * dVar7;
        dVar7 = dVar7 * 0.0;
      }
      dVar8 = dVar2 * dVar2 + dVar11 * dVar11;
      if (9.99999993922529e-09 < dVar8) {
        dVar9 = 1.0 / SQRT(dVar8);
        dVar2 = dVar2 * dVar9;
        dVar11 = dVar11 * dVar9;
        dVar9 = dVar9 * 0.0;
      }
      dVar11 = dVar10 * dVar11 + dVar3 * dVar2 + dVar7 * dVar9;
      dVar9 = dVar11;
      if (1.0 <= dVar11) {
        dVar9 = 1.0;
      }
      dVar9 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                           ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar9));
      if ((double)*(float *)(param_1 + 0x420) <= dVar9 * 57.29577951308232) goto LAB_14422314c;
    }
    FUN_1489939d0(param_2 + 2,local_d0,*(undefined8 *)(param_1 + 0x428));
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),local_b0);
    if (local_b0 == '\x01') {
      local_90 = local_b8;
      local_a0 = local_c8;
      uStack_9c = uStack_c4;
      uStack_98 = uStack_c0;
      uStack_94 = uStack_bc;
      local_a8[0] = *param_2;
      local_88 = param_3;
      FUN_1447cd2ec(param_1 + 0x478);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442231a0 FUN_1442231a0 body=516 status=ok
// SIG undefined FUN_1442231a0(void)

void FUN_1442231a0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
LAB_1442231c0:
    lVar8 = 0;
  }
  else {
    bVar2 = *(byte *)(param_2 + 0xbd8);
    if (*(int *)(param_2 + 0xbf0) <= (int)(uint)bVar2) goto LAB_1442231c0;
    lVar8 = *(longlong *)
             (*(longlong *)(param_2 + 0xbe8) + 0x10 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8
             );
  }
  puVar1 = (uint *)(param_1 + 0x48);
  cVar4 = FUN_1458f7686(puVar1,lVar8);
  if (cVar4 != '\0') goto LAB_144223278;
  if ((((*(int *)(param_1 + 0x4c) != 0) && (uVar3 = *puVar1, -1 < (int)uVar3)) &&
      ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x4c))) &&
      ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar7;
    }
    else {
      lVar6 = 0;
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_14480f766(lVar6 + 0x40);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (lVar8 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
  }
  else {
    local_48 = FUN_140c71d5c;
    local_40 = 0;
    FUN_1458f7700(&local_38,param_1);
    FUN_1448b6402(lVar8 + 0x40,&local_48,&local_38);
    if (local_30 == 0) {
LAB_14422330b:
      if (local_38 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_38 != (undefined8 *)0x0) {
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      local_30 = 0;
      goto LAB_14422330b;
    }
    *(code **)(param_1 + 0x40) = local_48;
    uVar3 = *(uint *)(lVar8 + 0xc);
    *(uint *)(param_1 + 0x48) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar10 = iVar5 == 0;
      if (bVar10) {
        *(int *)(lVar8 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar5 = iVar9;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
  }
  FUN_140c71d5c(param_1);
LAB_144223278:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1442233a6 FUN_1442233a6 body=73 status=ok
// SIG undefined FUN_1442233a6(void)

undefined8 FUN_1442233a6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14108b142();
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
  }
  FUN_1461e86ae(param_1,uVar2);
  uVar2 = FUN_1442233f0(param_1,param_2,param_1 + 0x40);
  return uVar2;
}



// FUNCTION 1442233f0 FUN_1442233f0 body=193 status=ok
// SIG undefined FUN_1442233f0(void)

undefined8 FUN_1442233f0(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined7 uVar5;
  byte bVar6;
  longlong lVar7;
  
  lVar2 = FUN_14108b142();
  if (*(char *)(lVar2 + 0x68) == '\x01') {
    uVar3 = (**(code **)(*(longlong *)(param_2 + 0x1a8) + 0x30))(param_2 + 0x1a8,lVar2);
    uVar3 = FUN_14101bc7a(param_2 + 0x1a8,uVar3,param_3);
    return uVar3;
  }
  lVar4 = FUN_1461e8814(param_1);
  if (((*(byte *)(param_2 + 0x20c) & 1) == 0) && ((longlong)*(int *)(param_2 + 0x40) != 0)) {
    lVar7 = 0;
    do {
      param_1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + lVar7);
      if (((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
         (*(longlong *)(param_1 + 0xa8) == lVar4)) {
        if ((*(byte *)(param_1 + 0x248) & 2) != 0) {
          uVar3 = FUN_14101bbec(param_1,lVar2,param_3);
          bVar6 = (byte)uVar3;
          uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
          bVar1 = 1;
          goto LAB_1442234a5;
        }
        break;
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)*(int *)(param_2 + 0x40) * 8 != lVar7);
  }
  bVar6 = (byte)param_1;
  bVar1 = 0;
  uVar5 = 0;
LAB_1442234a5:
  return CONCAT71(uVar5,bVar1 & bVar6);
}



// FUNCTION 1442234c9 FUN_1442234c9 body=49 status=ok
// SIG undefined FUN_1442234c9(void)

void FUN_1442234c9(void)

{
  FUN_14602a519(DAT_14cbd3180,DAT_14cbd3188);
  if (DAT_14cbd3180 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1442234fa FUN_1442234fa body=1315 status=ok
// SIG undefined FUN_1442234fa(void)

undefined1 * FUN_1442234fa(longlong param_1,undefined1 *param_2)

{
  void **ppvVar1;
  uint uVar2;
  void *pvVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[8] = 0;
  param_2[0x10] = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (((((((*(int *)(param_1 + 0x34) == 0) || (uVar2 = *(uint *)(param_1 + 0x30), (int)uVar2 < 0))
         || (DAT_14c9647dc <= (int)uVar2)) ||
        ((puVar8 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         puVar8 == (undefined8 *)0x0 || (*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x34))))) ||
       (((*(uint *)(puVar8 + 1) & 0x10200000) != 0 ||
        ((*(int *)(param_1 + 0x2c) == 0 || (uVar2 = *(uint *)(param_1 + 0x28), (int)uVar2 < 0))))))
      || (DAT_14c9647dc <= (int)uVar2)) ||
     (((puVar11 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar11 == (undefined8 *)0x0 || (*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x2c))) ||
      ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_144223622;
  if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
    plVar10 = (longlong *)*puVar8;
  }
  else {
    plVar10 = (longlong *)0x0;
  }
  if ((*(uint *)(puVar11 + 1) & 0x10200000) == 0) {
    uVar12 = *puVar11;
  }
  else {
    uVar12 = 0;
  }
  if (*(char *)(param_1 + 0x80) == '\0') {
    cVar4 = (**(code **)(*plVar10 + 0x480))();
    if (cVar4 == '\0') {
      if (((*(int *)(param_1 + 0x78) == 0) || (*(longlong **)(param_1 + 0x70) == (longlong *)0x0))
         || (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(), cVar4 == '\0'))
      goto LAB_144223622;
      if (*(int *)(param_1 + 0x2c) == 0) {
LAB_144223a1a:
        uVar12 = 0;
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x28);
        uVar12 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar8 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if ((puVar8 == (undefined8 *)0x0) ||
             ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x2c) ||
              ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144223a1a;
          uVar12 = *puVar8;
        }
      }
      if (*(int *)(param_1 + 0x78) == 0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        plVar10 = *(longlong **)(param_1 + 0x70);
      }
      cVar4 = (**(code **)(*plVar10 + 0x58))(plVar10,uVar12);
      if (cVar4 == '\0') goto LAB_144223622;
    }
  }
  else {
    iVar6 = (**(code **)(*plVar10 + 0x478))(0,uVar12);
    if (iVar6 < 1) goto LAB_144223622;
  }
  *param_2 = 1;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_144223968:
      plVar10 = (longlong *)0x0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x30);
      plVar10 = (longlong *)0x0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144223968;
        plVar10 = (longlong *)*puVar8;
      }
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
LAB_14422396f:
      uVar12 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x28);
      uVar12 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x2c) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_14422396f;
        uVar12 = *puVar8;
      }
    }
    uVar7 = (**(code **)(*plVar10 + 0x478))(plVar10,uVar12);
    *(undefined4 *)(param_2 + 4) = uVar7;
    param_2[8] = 1;
  }
  if (*(char *)(param_1 + 0x81) == '\x01') {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_144223976:
      plVar10 = (longlong *)0x0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x30);
      plVar10 = (longlong *)0x0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144223976;
        plVar10 = (longlong *)*puVar8;
      }
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
LAB_14422397d:
      uVar12 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x28);
      uVar12 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x2c) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_14422397d;
        uVar12 = *puVar8;
      }
    }
    (**(code **)(*plVar10 + 0x490))(plVar10,&local_68,uVar12);
    if (&local_68 != (ulonglong *)(param_2 + 0xc)) {
      if ((local_68 & 0x100000000) == 0) {
        if (param_2[0x10] != '\x01') goto LAB_14422381b;
        uVar5 = 0;
      }
      else {
        *(undefined4 *)(param_2 + 0xc) = (undefined4)local_68;
        uVar5 = 1;
      }
      param_2[0x10] = uVar5;
    }
  }
LAB_14422381b:
  ppvVar1 = (void **)(param_2 + 0x30);
  lVar9 = FUN_14090ae24();
  if (lVar9 == 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
LAB_144223985:
      plVar10 = (longlong *)0x0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x30);
      plVar10 = (longlong *)0x0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(int *)(puVar8 + 2) != *(int *)(param_1 + 0x34) ||
            ((*(uint *)(puVar8 + 1) & 0x10200000) != 0)))) goto LAB_144223985;
        plVar10 = (longlong *)*puVar8;
      }
    }
    (**(code **)(*plVar10 + 0x488))(plVar10,&local_68);
  }
  else {
    local_68 = *(ulonglong *)(param_1 + 0x48);
    local_60 = *(undefined4 *)(param_1 + 0x50);
    uStack_5c = *(undefined4 *)(param_1 + 0x54);
    uStack_58 = *(undefined4 *)(param_1 + 0x58);
    uStack_54 = *(undefined4 *)(param_1 + 0x5c);
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_1 + 0x68);
    lVar9 = (longlong)local_48;
    pvVar3 = *(void **)(param_1 + 0x60);
    if (lVar9 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,pvVar3,lVar9 * 2);
    }
  }
  iVar6 = local_48;
  pvVar3 = local_50;
  *(ulonglong *)(param_2 + 0x18) = local_68;
  *(undefined4 *)(param_2 + 0x20) = local_60;
  *(undefined4 *)(param_2 + 0x24) = uStack_5c;
  *(undefined4 *)(param_2 + 0x28) = uStack_58;
  *(undefined4 *)(param_2 + 0x2c) = uStack_54;
  if (ppvVar1 != &local_50) {
    lVar9 = (longlong)local_48;
    *(int *)(param_2 + 0x38) = local_48;
    if (local_48 == 0 && *(int *)(param_2 + 0x3c) == 0) {
      *(undefined4 *)(param_2 + 0x3c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,local_48);
      if (iVar6 != 0) {
        memcpy(*ppvVar1,pvVar3,lVar9 * 2);
      }
    }
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_144223622:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144223a1e FUN_144223a1e body=116 status=ok
// SIG undefined FUN_144223a1e(void)

void FUN_144223a1e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    lVar1 = (longlong)*(int *)(param_1 + 0x118) << 5;
    do {
      if (*(longlong *)(lVar2 + 0x10) == param_2) {
        if (lVar2 == 0) {
          return;
        }
        if (*(int *)(lVar2 + 0x18) == param_3) {
          return;
        }
        *(int *)(lVar2 + 0x18) = param_3;
        FUN_140705884(param_1);
        if (*(longlong *)(param_1 + 0x120) == 0) {
          return;
        }
        FUN_1457b8026();
        return;
      }
      lVar2 = lVar2 + 0x20;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144223a92 FUN_144223a92 body=647 status=ok
// SIG undefined FUN_144223a92(void)

void FUN_144223a92(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  code *local_50 [3];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_1409d448e(param_2);
  local_58 = *param_3;
  FUN_1446dcdd4(local_50);
  if (DAT_14cb7d760 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_144837462(DAT_14cb7d760,local_50);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (((param_1 != (longlong *)0x0) && (lVar1 != 0)) && (lVar2 != 0)) {
    if (DAT_14cb56270 == 0) {
      local_50[0] = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_1427b09ee;
      local_78 = &LAB_148630fef;
      local_80 = FUN_1464b6a91;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10004001;
      local_a0 = 8;
      local_a8 = 0x28;
      local_70 = local_50;
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,DAT_14cb56270);
    if (plVar3 != (longlong *)0x0) {
      if (DAT_14cb56270 == 0) {
        local_50[0] = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_1427b09ee;
        local_78 = &LAB_148630fef;
        local_80 = FUN_1464b6a91;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10004001;
        local_a0 = 8;
        local_a8 = 0x28;
        local_70 = local_50;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar4 = (longlong *)FUN_144718840(plVar3,DAT_14cb56270);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (lVar5 != 0) {
          if (1 < *(int *)(lVar5 + 0x40)) {
            uVar6 = *(int *)(lVar5 + 0x40) + 1;
            do {
              FUN_14881de78(lVar5,uVar6 - 2);
              uVar6 = uVar6 - 1;
            } while (2 < uVar6);
          }
          local_a8 = CONCAT31(local_a8._1_3_,1);
          FUN_1461c10bc(lVar5,0,lVar1,lVar2);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144223d1a FUN_144223d1a body=637 status=ok
// SIG undefined FUN_144223d1a(void)

longlong * FUN_144223d1a(longlong param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
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
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 8) != 0) && (lVar9 = *(longlong *)(param_3 + 0x20), lVar9 != 0)) {
    if (DAT_14cba8288 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = &LAB_140f21842;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
       (lVar9 = *(longlong *)(&DAT_00006850 + lVar9), lVar9 != 0)) {
      uVar3 = *(undefined4 *)(param_1 + 8);
      plVar7 = (longlong *)FUN_14001cc68(0x48,0x10);
      plVar7[1] = (longlong)&DAT_100000001;
      *plVar7 = (longlong)&PTR_FUN_14b9a0390;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[2] = (longlong)&PTR_FUN_14b99b480;
      *(undefined4 *)((longlong)plVar7 + 0x3c) = 0;
      uVar4 = *(uint *)(lVar9 + 0xc);
      *(uint *)(plVar7 + 7) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      pcVar1 = (code *)(plVar7 + 2);
      iVar6 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar6 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar6 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar6 = iVar8;
        }
      }
      *(int *)((longlong)plVar7 + 0x3c) = iVar6;
      *(undefined4 *)(plVar7 + 8) = uVar3;
      local_48 = pcVar1;
      local_40 = plVar7;
      FUN_148dfdf3a(&local_48,pcVar1);
      plVar5 = local_40;
      *param_2 = (longlong)pcVar1;
      param_2[1] = (longlong)plVar7;
      if (plVar7 == (longlong *)0x0) {
LAB_144223e89:
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      if (local_40 == (longlong *)0x0) goto LAB_144223e89;
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 != 0) goto LAB_144223e89;
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 != 0) goto LAB_144223e89;
      (**(code **)(*plVar5 + 0x10))(plVar5);
      goto LAB_144223d8d;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_144223d8d:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
}



// FUNCTION 144223fcc FUN_144223fcc body=512 status=ok
// SIG undefined FUN_144223fcc(void)

void FUN_144223fcc(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 ***pppuVar7;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong *local_88;
  char local_80 [16];
  longlong *local_70;
  undefined4 local_58 [2];
  undefined8 **local_50 [3];
  ushort local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1442241cd(&local_90,param_3);
  if (local_90 == 0) goto LAB_144224019;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = FUN_1456c48de(*param_2);
    local_80[0] = '\0';
    local_58[0] = 0;
    FUN_1456bb102(local_80,uVar5);
    FUN_1448729ea(param_1 + 0x38,local_50,local_80);
    iVar4 = FUN_1405d5f74(local_50);
    if ((*(byte *)(local_90 + 0x30) & 2) != 0) {
      iVar4 = *(int *)(local_90 + 0xec) - iVar4;
      iVar6 = 0;
      if (0 < iVar4) {
        iVar6 = iVar4;
      }
      if (iVar6 != *(int *)(local_90 + 0xec)) {
LAB_1442241c0:
        FUN_145884ed6(local_90,iVar6);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x30) != '\0') goto LAB_144224019;
    uVar5 = FUN_1456c48de(*param_2);
    local_80[0] = '\0';
    local_58[0] = 0;
    FUN_1456bb102(local_80,uVar5);
    FUN_1448729ea(param_1 + 0x38,local_50,local_80);
    iVar4 = FUN_1405d5f74(local_50);
    if ((*(byte *)(local_90 + 0x30) & 2) != 0) {
      iVar6 = *(int *)(local_90 + 0xe4) - *(int *)(local_90 + 0xec);
      if (iVar4 <= iVar6) {
        iVar6 = iVar4;
      }
      if (0 < iVar6) {
        iVar6 = iVar6 + *(int *)(local_90 + 0xec);
        goto LAB_1442241c0;
      }
    }
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar7 = local_50;
    if (0x18 < local_38) {
      pppuVar7 = (undefined8 ***)local_50[0];
    }
    (*pcVar3)(pppuVar7);
  }
  if (0x18 < local_38) {
    FUN_1400020a8(local_50[0]);
  }
  FUN_1448173f8(local_58);
  if ((local_80[0] == '\x03') && (local_70 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_70 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
LAB_144224019:
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_88 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar2 = (int *)((longlong)local_88 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_88 + 0x10))(local_88);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1442241cd FUN_1442241cd body=124 status=ok
// SIG undefined FUN_1442241cd(void)

undefined8 * FUN_1442241cd(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_1458b433a();
  cVar4 = FUN_1448093f4(*param_2,uVar5);
  if (cVar4 == '\0') {
    FUN_1458b433a();
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    uVar5 = *param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      *param_1 = uVar5;
      param_1[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_1 = uVar5;
      param_1[1] = plVar3;
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
  }
  return param_1;
}



// FUNCTION 14422428d FUN_14422428d body=41 status=ok
// SIG undefined FUN_14422428d(void)

void FUN_14422428d(void)

{
  DAT_14cbd32b8 = 0;
  if (DAT_14cbd32b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6973c();
  return;
}



// FUNCTION 144224336 FUN_144224336 body=300 status=ok
// SIG undefined FUN_144224336(void)

void FUN_144224336(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1405b657a();
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x178) != '\x03')) goto LAB_144224438;
  lVar4 = param_2[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1406eea5e();
    lVar4 = FUN_14477b664(uVar5);
    param_2[1] = lVar4;
  }
  if (param_2[2] == 0) {
    if ((lVar4 == 0) || (*param_2 == 0)) goto LAB_144224438;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar5,param_2);
        param_2[2] = lVar4;
        if (lVar4 == 0) goto LAB_144224438;
        goto LAB_144224393;
      }
    }
    param_2[2] = 0;
  }
  else {
LAB_144224393:
    FUN_1406eed88(param_1,&local_38,param_2,0);
    if (local_38 != 0) {
      cVar3 = FUN_140d4ce5c(local_38,param_3);
      if (cVar3 != '\0') {
        FUN_140df6042(param_1);
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
LAB_144224438:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144224464 FUN_144224464 body=296 status=ok
// SIG undefined FUN_144224464(void)

longlong * FUN_144224464(longlong param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x28);
    lVar9 = (longlong)*(int *)(param_1 + 0x30) << 4;
    do {
      lVar2 = *(longlong *)(*plVar8 + 0x50);
      lVar5 = param_3[1];
      if (lVar5 == 0) {
        uVar6 = FUN_1406eea5e();
        lVar5 = FUN_14477b664(uVar6);
        param_3[1] = lVar5;
      }
      lVar7 = param_3[2];
      if (((lVar7 == 0) && (lVar7 = 0, lVar5 != 0)) && (*param_3 != 0)) {
        plVar3 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar3 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
          lVar7 = 0;
        }
        else {
          uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
          lVar7 = FUN_144aff482(uVar6,param_3);
        }
        param_3[2] = lVar7;
      }
      if (lVar2 == lVar7) {
        if (plVar8 != (longlong *)0x0) {
          lVar9 = *plVar8;
          plVar8 = (longlong *)plVar8[1];
          if (plVar8 == (longlong *)0x0) {
            *param_2 = lVar9;
            param_2[1] = 0;
            return param_2;
          }
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          *param_2 = lVar9;
          param_2[1] = (longlong)plVar8;
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          LOCK();
          plVar3 = plVar8 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 != 0) {
            return param_2;
          }
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 != 0) {
            return param_2;
          }
          (**(code **)(*plVar8 + 0x10))(plVar8);
          return param_2;
        }
        break;
      }
      plVar8 = plVar8 + 2;
      lVar9 = lVar9 + -0x10;
    } while (lVar9 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14422458c FUN_14422458c body=532 status=ok
// SIG undefined FUN_14422458c(void)

undefined4 FUN_14422458c(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412cbf9c(&local_50,param_1);
  if (local_50 == 0) {
    uVar10 = 0;
    goto LAB_14422474e;
  }
  lVar5 = FUN_1412cbf12(param_2);
  local_60 = 0;
  lStack_58 = 0;
  uVar6 = FUN_1406eea5e();
  lVar7 = FUN_14477b664(uVar6);
  lVar8 = FUN_1406eea5e();
  uVar6 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_40,uVar6,lVar5);
  lVar3 = local_40;
  if (local_40 != 0) {
    lStack_58 = 0;
  }
  local_68 = local_40;
  lVar9 = FUN_1406eea5e();
  if (lVar8 == 0) {
LAB_14422464c:
    lVar9 = lVar8;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_14422464c;
  if (lVar7 != lVar9) {
    lStack_58 = 0;
  }
  uVar6 = FUN_14477b664(lVar9);
  local_60 = FUN_14477b664(uVar6);
  if ((local_60 == 0 || lVar3 == 0) && (lVar5 = lStack_58, local_60 == 0)) {
    uVar6 = FUN_1406eea5e();
    local_60 = FUN_14477b664(uVar6);
    lVar5 = lStack_58;
  }
  lStack_58 = lVar5;
  if (lStack_58 == 0) {
    uVar10 = 0;
    if ((((local_60 == 0) || (local_68 == 0)) ||
        (plVar2 = *(longlong **)(local_60 + 0xb8), plVar2 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) goto LAB_14422474e;
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lStack_58 = FUN_144aff482(uVar6,&local_68);
    if (lStack_58 == 0) goto LAB_14422474e;
  }
  FUN_144224464(local_50,&local_40,&local_68);
  if (local_40 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(local_40 + 0x6c);
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
LAB_14422474e:
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1442247a2 FUN_1442247a2 body=548 status=ok
// SIG undefined FUN_1442247a2(void)

undefined4 FUN_1442247a2(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1412cbf9c(&local_60,param_1);
  if (local_60 == 0) {
    uVar10 = 0;
    goto LAB_14422496e;
  }
  lVar5 = FUN_1412cbf12(param_2);
  local_70 = 0;
  lStack_68 = 0;
  uVar6 = FUN_1406eea5e();
  lVar7 = FUN_14477b664(uVar6);
  lVar8 = FUN_1406eea5e();
  uVar6 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_50,uVar6,lVar5);
  lVar3 = local_50;
  if (local_50 != 0) {
    lStack_68 = 0;
  }
  local_78 = local_50;
  lVar9 = FUN_1406eea5e();
  if (lVar8 == 0) {
LAB_144224867:
    lVar9 = lVar8;
  }
  else if (lVar9 == 0) {
    lVar9 = 0;
  }
  else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) goto LAB_144224867;
  if (lVar7 != lVar9) {
    lStack_68 = 0;
  }
  uVar6 = FUN_14477b664(lVar9);
  local_70 = FUN_14477b664(uVar6);
  if ((local_70 == 0 || lVar3 == 0) && (lVar5 = lStack_68, local_70 == 0)) {
    uVar6 = FUN_1406eea5e();
    local_70 = FUN_14477b664(uVar6);
    lVar5 = lStack_68;
  }
  lStack_68 = lVar5;
  if (lStack_68 == 0) {
    uVar10 = 0;
    if ((((local_70 == 0) || (local_78 == 0)) ||
        (plVar2 = *(longlong **)(local_70 + 0xb8), plVar2 == (longlong *)0x0)) ||
       (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) goto LAB_14422496e;
    uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lStack_68 = FUN_144aff482(uVar6,&local_78);
    if (lStack_68 == 0) goto LAB_14422496e;
  }
  FUN_144224464(local_60,&local_50,&local_78);
  if (local_50 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined4 *)(local_50 + 0x78);
  }
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
LAB_14422496e:
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1442249c8 FUN_1442249c8 body=705 status=ok
// SIG undefined FUN_1442249c8(void)

void FUN_1442249c8(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1412cbf9c(&local_50,param_1);
  if (local_50 == 0) goto LAB_144224c32;
  lVar4 = FUN_1412cbf12(param_2);
  local_60 = 0;
  lStack_58 = 0;
  uVar5 = FUN_1406eea5e();
  lVar6 = FUN_14477b664(uVar5);
  lVar7 = FUN_1406eea5e();
  uVar5 = FUN_1406eea5e();
  FUN_1402d1bfa(&local_40,uVar5,lVar4);
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    lStack_58 = 0;
  }
  local_68 = local_40;
  lVar8 = FUN_1406eea5e();
  if (lVar7 == 0) {
LAB_144224a88:
    lVar8 = lVar7;
  }
  else if (lVar8 == 0) {
    lVar8 = 0;
  }
  else if ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
           lVar8 + 0x30)) goto LAB_144224a88;
  if (lVar6 != lVar8) {
    lStack_58 = 0;
  }
  uVar5 = FUN_14477b664(lVar8);
  lVar6 = FUN_14477b664(uVar5);
  if (lVar6 != 0 && plVar2 != (longlong *)0x0) {
    lStack_58 = lVar4;
  }
  local_60 = lVar6;
  lVar4 = FUN_1405b657a(local_50);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x178) != '\x03')) goto LAB_144224c32;
  if (lVar6 == 0) {
    uVar5 = FUN_1406eea5e();
    lVar6 = FUN_14477b664(uVar5);
    local_60 = lVar6;
  }
  if (lStack_58 == 0) {
    if ((((lVar6 == 0) || (local_68 == (longlong *)0x0)) ||
        (plVar2 = *(longlong **)(lVar6 + 0xb8), plVar2 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) goto LAB_144224c32;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lStack_58 = FUN_144aff482(uVar5,&local_68);
    lVar6 = local_60;
    if (lStack_58 == 0) goto LAB_144224c32;
  }
  lVar4 = lStack_58;
  if (lVar6 == 0) {
    uVar5 = FUN_1406eea5e();
    local_60 = FUN_14477b664(uVar5);
    lVar4 = lStack_58;
    if (((lStack_58 == 0) && (lVar4 = 0, local_60 != 0)) && (local_68 != (longlong *)0x0)) {
      plVar2 = *(longlong **)(local_60 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar4 = 0;
        lStack_58 = lVar4;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar4 = FUN_144aff482(uVar5,&local_68);
        lStack_58 = lVar4;
      }
    }
  }
  if (*(char *)(lVar4 + 0x68) != '\x03') {
    FUN_1406eed88(local_50,&local_40,&local_68,0);
    if (local_40 != (longlong *)0x0) {
      (**(code **)(*local_40 + 0x28))();
    }
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_38 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
LAB_144224c32:
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144224c8a FUN_144224c8a body=91 status=ok
// SIG undefined FUN_144224c8a(void)

void FUN_144224c8a(void)

{
  if (DAT_14cbd3368 != 0) {
    if (DAT_14cbd3360 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cbd3360)(DAT_14cbd3360,0);
    FUN_1446efa72(&DAT_14cbd3360,0,0,0x10);
    DAT_14cbd3368 = 0;
  }
  if (DAT_14cbd3360 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 144224ce6 FUN_144224ce6 body=99 status=ok
// SIG undefined FUN_144224ce6(void)

undefined8 * FUN_144224ce6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 == (longlong *)0x0) {
LAB_144224d28:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_144224d28;
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
    *param_2 = *(undefined8 *)(param_1 + 0x28);
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



// FUNCTION 144224d5a FUN_144224d5a body=134 status=ok
// SIG undefined FUN_144224d5a(void)

undefined8 * FUN_144224d5a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x50);
  if (plVar3 == (longlong *)0x0) {
LAB_144224da6:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_144224da6;
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
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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



// FUNCTION 144224de0 FUN_144224de0 body=68 status=ok
// SIG undefined FUN_144224de0(void)

undefined8 * FUN_144224de0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99be30;
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



// FUNCTION 144224e28 FUN_144224e28 body=83 status=ok
// SIG undefined FUN_144224e28(void)

undefined8 FUN_144224e28(longlong param_1)

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



// FUNCTION 144224e98 FUN_144224e98 body=68 status=ok
// SIG undefined FUN_144224e98(void)

undefined8 * FUN_144224e98(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99bea0;
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



// FUNCTION 144224ef8 FUN_144224ef8 body=68 status=ok
// SIG undefined FUN_144224ef8(void)

undefined8 * FUN_144224ef8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99bf10;
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



// FUNCTION 144224f3c FUN_144224f3c body=83 status=ok
// SIG undefined FUN_144224f3c(void)

undefined8 FUN_144224f3c(longlong param_1)

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



// FUNCTION 144224fac FUN_144224fac body=64 status=ok
// SIG undefined FUN_144224fac(void)

undefined8 * FUN_144224fac(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b99c270;
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



// FUNCTION 144225000 FUN_144225000 body=110 status=ok
// SIG undefined FUN_144225000(void)

void FUN_144225000(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b99ac60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b99c270;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}


