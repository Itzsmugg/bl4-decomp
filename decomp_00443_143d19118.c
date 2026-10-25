// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d19118 FUN_143d19118 body=64 status=ok
// SIG undefined FUN_143d19118(void)

undefined8 * FUN_143d19118(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3f8cf0;
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



// FUNCTION 143d1915c FUN_143d1915c body=81 status=ok
// SIG undefined FUN_143d1915c(void)

undefined8 FUN_143d1915c(longlong param_1)

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



// FUNCTION 143d191b2 FUN_143d191b2 body=89 status=ok
// SIG undefined FUN_143d191b2(void)

bool FUN_143d191b2(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d191fd;
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
LAB_143d191fd:
  return lVar6 == param_2;
}



// FUNCTION 143d19228 FUN_143d19228 body=118 status=ok
// SIG undefined FUN_143d19228(void)

void FUN_143d19228(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8cf0;
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



// FUNCTION 143d1929e FUN_143d1929e body=118 status=ok
// SIG undefined FUN_143d1929e(void)

void FUN_143d1929e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f8cf0;
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



// FUNCTION 143d19314 FUN_143d19314 body=156 status=ok
// SIG undefined FUN_143d19314(void)

void FUN_143d19314(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3f8cf0;
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
                    /* WARNING: Could not recover jumptable at 0x000143d193a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d193ba FUN_143d193ba body=46 status=ok
// SIG undefined FUN_143d193ba(void)

undefined8 FUN_143d193ba(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) || (*(longlong *)(param_1 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x20) + 8) < 1)) {
    uVar1 = 0;
  }
  else {
    FUN_145bd9236(*(undefined8 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143d193e8 FUN_143d193e8 body=3636 status=ok
// SIG undefined FUN_143d193e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d193e8(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb77ce8 = (ulonglong)uVar2;
  _DAT_14cb77cf8 = &LAB_143d0e324;
  _DAT_14cb77d00 = 0x44250ccd;
  DAT_14cb77d04 = 1;
  DAT_14cb77cf0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb77cf0;
  atexit((_func_5014 *)&LAB_143d0e329);
  _DAT_14cb77d10 = L"GbxGame.EDamageModifierFlag";
  _DAT_14cb77d18 = &DAT_14c872af8;
  _DAT_14cb77d20 = L"DamageModifierFlag";
  _DAT_14cb77d28 = 0;
  uRam000000014cb77d30 = 0;
  _DAT_14cb77d38 = 0;
  uRam000000014cb77d40 = 0;
  _DAT_14cb77d41 = 0;
  uRam000000014cb77d48 = 0;
  uRam000000014cb77d49 = 0;
  atexit((_func_5014 *)&LAB_143d0e35d);
  DAT_14cb77d58 = 0;
  _DAT_14cb77d60 = 0;
  atexit(FUN_143d0e369);
  _DAT_14cb77d70 = &LAB_143d0e760;
  _DAT_14cb77d78 = 0x44251333;
  DAT_14cb77d7c = 1;
  DAT_14cb77d68 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb77d68;
  atexit((_func_5014 *)&LAB_143d0e765);
  _DAT_14cb77d90 = &LAB_143d0e799;
  _DAT_14cb77d98 = 0x44250000;
  DAT_14cb77d9c = 1;
  DAT_14cb77d88 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb77d88;
  atexit((_func_5014 *)&LAB_143d0e79e);
  _DAT_14cb77db0 = &LAB_143d0e7d2;
  _DAT_14cb77db8 = 0x44250666;
  DAT_14cb77dbc = 1;
  DAT_14cb77da8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb77da8;
  atexit((_func_5014 *)&LAB_143d0e7d7);
  _DAT_14cb77dd0 = &LAB_143d0e80b;
  _DAT_14cb77dd8 = 0x4425199a;
  DAT_14cb77ddc = 1;
  DAT_14cb77dc8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb77dc8;
  atexit((_func_5014 *)&LAB_143d0e810);
  _DAT_14cb77df0 = &LAB_143d0e844;
  _DAT_14cb77df8 = 0x44252666;
  DAT_14cb77dfc = 1;
  DAT_14cb77de8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb77de8;
  atexit((_func_5014 *)&LAB_143d0e849);
  _DAT_14cb77e10 = &LAB_143d0e88e;
  _DAT_14cb77e18 = 0x44252000;
  DAT_14cb77e1c = 1;
  DAT_14cb77e08 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb77e08;
  atexit((_func_5014 *)&LAB_143d0e893);
  _DAT_14cb77e50 = 0;
  LOCK();
  DAT_14cb77e48 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143d0fa48);
  _DAT_14cb77e58 = 0x47efffffe0000000;
  _DAT_14cb77e60 = 0x47efffffe0000000;
  _DAT_14cb77e68 = 0x47efffffe0000000;
  _DAT_14cb77e70 = 0x47efffffe0000000;
  _DAT_14cb77e78 = 0x47efffffe0000000;
  _DAT_14cb77e80 = 0x47efffffe0000000;
  _DAT_14cb77e88 = 0x47efffffe0000000;
  _DAT_14cb77e90 = 0x47efffffe0000000;
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cb77e98);
  if (cVar1 == '\0') {
    _DAT_14cb77e98 = 0;
    uRam000000014cb77ea0 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb77eb0 = &LAB_143d13e7f;
  _DAT_14cb77eb8 = 0x4625a000;
  DAT_14cb77ebc = 1;
  DAT_14cb77ea8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb77ea8;
  atexit((_func_5014 *)&LAB_143d13e84);
  local_68 = 0;
  FUN_14153156c(&DAT_14cb77ec8,L"gbx.Discovery.EnableLocalDiscoveries",&DAT_14c7638d8,
                L"When set local discoveries are always made and brought to the game when the player hosts."
               );
  atexit(FUN_143d13eb8);
  FUN_14654aff4();
  atexit((_func_5014 *)&LAB_143d15267);
  local_60 = "transition_type";
  local_58 = 0xf;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb78098 = 0;
  local_60 = "prev_map";
  local_58 = 8;
  local_54 = 0;
  DAT_14cb78090 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb780a8 = 0;
  local_60 = "prev_biome";
  local_58 = 10;
  local_54 = 0;
  DAT_14cb780a0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb780b8 = 0;
  local_60 = "prev_region";
  local_58 = 0xb;
  local_54 = 0;
  DAT_14cb780b0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb780c8 = 0;
  local_60 = "current_map";
  local_58 = 0xb;
  local_54 = 0;
  DAT_14cb780c0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb780d8 = 0;
  local_60 = "current_biome";
  local_58 = 0xd;
  local_54 = 0;
  DAT_14cb780d0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb780e8 = 0;
  local_60 = "current_region";
  local_58 = 0xe;
  local_54 = 0;
  DAT_14cb780e0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb780f8 = 0;
  local_60 = "is_discovery";
  local_58 = 0xc;
  local_54 = 0;
  DAT_14cb780f0 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb78108 = 0;
  local_60 = "time_since_prev_transition";
  local_58 = 0x1a;
  local_54 = 0;
  DAT_14cb78100 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb78118 = 0;
  local_60 = "distance_traveled_on_foot";
  local_58 = 0x19;
  local_54 = 0;
  DAT_14cb78110 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb78128 = 0;
  local_60 = "distance_traveled_in_vehicle";
  local_58 = 0x1c;
  local_54 = 0;
  DAT_14cb78120 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb78138 = 0;
  local_60 = "active_tracked_mission";
  local_58 = 0x16;
  local_54 = 0;
  DAT_14cb78130 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb78148 = 0;
  local_60 = "gameplay_time_in_save";
  local_58 = 0x15;
  local_54 = 0;
  _DAT_14cb78140 = (ulonglong)uVar2;
  uVar2 = FUN_14001a6c0(&local_60,1);
  FUN_1446f470e(&local_60,L"GbxDiscovery",1);
  _DAT_14cb78158 = 0;
  _DAT_14cb78160 = 0;
  uRam000000014cb78168 = 0;
  _DAT_14cb78170 = 0;
  DAT_14cb78178 = 0;
  uRam000000014cb78180 = 0;
  _DAT_14cb78150 = (ulonglong)uVar2;
  FUN_1446ddda2(&DAT_14cb78160,"Metrics",0);
  atexit((_func_5014 *)&LAB_143d152da);
  _DAT_14cb78188 = 0;
  uRam000000014cb78190 = 0;
  _DAT_14cb78198 = 0;
  DAT_14cb781a0 = 0;
  uRam000000014cb781a8 = 0;
  FUN_1446ddda2(&DAT_14cb78188,"LastWorld",0);
  atexit((_func_5014 *)&LAB_143d152eb);
  _DAT_14cb781b0 = 0;
  uRam000000014cb781b8 = 0;
  _DAT_14cb781c0 = 0;
  DAT_14cb781c8 = 0;
  uRam000000014cb781d0 = 0;
  FUN_1446ddda2(&DAT_14cb781b0,"LastRegion",0);
  atexit((_func_5014 *)&LAB_143d152fc);
  _DAT_14cb781d8 = 0;
  uRam000000014cb781e0 = 0;
  _DAT_14cb781e8 = 0;
  DAT_14cb781f0 = 0;
  uRam000000014cb781f8 = 0;
  FUN_1446ddda2(&DAT_14cb781d8,"HasSeenWorldList",0);
  atexit((_func_5014 *)&LAB_143d1530d);
  _DAT_14cb78200 = 0;
  uRam000000014cb78208 = 0;
  _DAT_14cb78210 = 0;
  DAT_14cb78218 = 0;
  uRam000000014cb78220 = 0;
  FUN_1446ddda2(&DAT_14cb78200,"HasSeenRegionList",0);
  atexit((_func_5014 *)&LAB_143d1531e);
  _DAT_14cb78230 = &LAB_143d1532f;
  _DAT_14cb78238 = 0x4625a000;
  DAT_14cb7823c = 1;
  DAT_14cb78228 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78228;
  atexit((_func_5014 *)&LAB_143d15334);
  local_60._0_4_ = 0x9c4;
  local_68 = 0;
  FUN_14078dbce(&DAT_14cb78248,L"gbx.player.CustomWaypointZ.MaxSearchDistRoad",&local_60,
                L"The max distance in X Y to search for a road. Default : 2500");
  atexit(FUN_143d15644);
  local_60 = (char *)CONCAT44(local_60._4_4_,6000);
  local_68 = 0;
  FUN_14078dbce(&DAT_14cb78260,L"gbx.player.CustomWaypointZ.MaxSearchDistBreadcrumb",&local_60,
                L"The max distance in X Y to search for a breadcrumb. Default : 6000");
  atexit(FUN_143d15689);
  _DAT_14cb78280 = &LAB_143d156ce;
  _DAT_14cb78288 = 0x4625a000;
  DAT_14cb7828c = 1;
  DAT_14cb78278 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78278;
  atexit((_func_5014 *)&LAB_143d156d3);
  DAT_14cb78298 = 0;
  atexit((_func_5014 *)&LAB_143d15707);
  _DAT_14cb784d8 = &LAB_143d15764;
  _DAT_14cb784e0 = 0x4625a000;
  DAT_14cb784e4 = 1;
  DAT_14cb784d0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb784d0;
  atexit((_func_5014 *)&LAB_143d15769);
  FUN_1446f470e(&DAT_14cb784f0,L"InWorldIndicatorLifetime");
  _DAT_14cb78510 = &LAB_143d162e5;
  _DAT_14cb78518 = 0x4625a000;
  DAT_14cb7851c = 1;
  DAT_14cb78508 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78508;
  atexit((_func_5014 *)&LAB_143d162ea);
  _DAT_14cb78530 = &LAB_143d1631e;
  _DAT_14cb78538 = 0x453b8000;
  DAT_14cb7853c = 1;
  DAT_14cb78528 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78528;
  atexit((_func_5014 *)&LAB_143d16323);
  _DAT_14cb78550 = &LAB_143d164e0;
  _DAT_14cb78558 = 0x4625a000;
  DAT_14cb7855c = 1;
  DAT_14cb78548 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78548;
  atexit((_func_5014 *)&LAB_143d164e5);
  _DAT_14cb78580 = &LAB_143d16c0b;
  _DAT_14cb78588 = 0x4625a000;
  DAT_14cb7858c = 1;
  DAT_14cb78578 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78578;
  atexit((_func_5014 *)&LAB_143d16c10);
  local_60 = "gbx_discovery_pc";
  local_58 = 0x10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb78598 = (ulonglong)uVar2;
  _DAT_14cb786d8 = 0;
  uRam000000014cb786e0 = 0;
  _DAT_14cb786e8 = 0;
  DAT_14cb786f0 = 0;
  uRam000000014cb786f8 = 0;
  FUN_1446ddda2(&DAT_14cb786d8,"gbx_discovery_pc",0);
  atexit((_func_5014 *)&LAB_143d16c44);
  _DAT_14cb785a0 = 0;
  uRam000000014cb785a8 = 0;
  _DAT_14cb785b0 = 0;
  DAT_14cb785b8 = 0;
  uRam000000014cb785c0 = 0;
  FUN_1446ddda2(&DAT_14cb785a0,"gbx.gbx_discovery_pc",0);
  atexit((_func_5014 *)&LAB_143d16c55);
  local_60 = "gbx_discovery_pg";
  local_58 = 0x10;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb785c8 = (ulonglong)uVar2;
  _DAT_14cb786b0 = 0;
  uRam000000014cb786b8 = 0;
  _DAT_14cb786c0 = 0;
  DAT_14cb786c8 = 0;
  uRam000000014cb786d0 = 0;
  FUN_1446ddda2(&DAT_14cb786b0,"gbx_discovery_pg",0);
  atexit((_func_5014 *)&LAB_143d16c66);
  _DAT_14cb785d0 = 0;
  uRam000000014cb785d8 = 0;
  _DAT_14cb785e0 = 0;
  DAT_14cb785e8 = 0;
  uRam000000014cb785f0 = 0;
  FUN_1446ddda2(&DAT_14cb785d0,"gbx.gbx_discovery_pg",0);
  atexit((_func_5014 *)&LAB_143d16c77);
  local_60 = "gbx_discovery_pc_shared";
  local_58 = 0x17;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb785f8 = (ulonglong)uVar2;
  _DAT_14cb78728 = 0;
  uRam000000014cb78730 = 0;
  _DAT_14cb78738 = 0;
  DAT_14cb78740 = 0;
  uRam000000014cb78748 = 0;
  FUN_1446ddda2(&DAT_14cb78728,"gbx_discovery_pc_shared",0);
  atexit((_func_5014 *)&LAB_143d16c88);
  _DAT_14cb78600 = 0;
  uRam000000014cb78608 = 0;
  _DAT_14cb78610 = 0;
  DAT_14cb78618 = 0;
  uRam000000014cb78620 = 0;
  FUN_1446ddda2(&DAT_14cb78600,"gbx.gbx_discovery_pc_shared",0);
  atexit((_func_5014 *)&LAB_143d16c99);
  local_60 = "gbx_discovery_pg_shared";
  local_58 = 0x17;
  local_54 = 0;
  uVar2 = FUN_14001a6c0(&local_60,1);
  DAT_14cb78628 = (ulonglong)uVar2;
  _DAT_14cb78700 = 0;
  uRam000000014cb78708 = 0;
  _DAT_14cb78710 = 0;
  DAT_14cb78718 = 0;
  uRam000000014cb78720 = 0;
  FUN_1446ddda2(&DAT_14cb78700,"gbx_discovery_pg_shared",0);
  atexit((_func_5014 *)&LAB_143d16caa);
  _DAT_14cb78630 = 0;
  uRam000000014cb78638 = 0;
  _DAT_14cb78640 = 0;
  DAT_14cb78648 = 0;
  uRam000000014cb78650 = 0;
  FUN_1446ddda2(&DAT_14cb78630,"gbx.gbx_discovery_pg_shared",0);
  atexit((_func_5014 *)&LAB_143d16cbb);
  _DAT_14cb78660 = &LAB_143d172cc;
  _DAT_14cb78668 = 0x4625a000;
  DAT_14cb7866c = 1;
  DAT_14cb78658 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78658;
  atexit((_func_5014 *)&LAB_143d172d1);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d1a2fe FUN_143d1a2fe body=26 status=ok
// SIG undefined FUN_143d1a2fe(void)

void FUN_143d1a2fe(undefined8 param_1)

{
  switchD_143c3d4dc::caseD_1d();
  FUN_143d1a318(param_1);
  return;
}



// FUNCTION 143d1a318 FUN_143d1a318 body=134 status=ok
// SIG undefined FUN_143d1a318(void)

ulonglong FUN_143d1a318(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    bVar4 = *(int *)(lVar1 + 0x10) != 0;
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),bVar4);
    if ((!bVar4) && (*(longlong *)(lVar1 + 0x20) != 0)) {
      (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))(*(longlong **)(lVar1 + 0x18),0xffffffff,0)
      ;
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    FUN_140187fa0(*(undefined8 *)(param_1 + 0xd0),1,0);
    plVar2 = *(longlong **)(param_1 + 0xd0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2,1);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 143d1a39e FUN_143d1a39e body=1288 status=ok
// SIG undefined FUN_143d1a39e(void)

undefined8 FUN_143d1a39e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  byte *pbVar7;
  longlong *plVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  ulonglong local_b8;
  longlong local_b0;
  LPCRITICAL_SECTION local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong *plStack_90;
  longlong local_88;
  longlong *plStack_80;
  undefined4 *local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pbVar7 = (byte *)*param_3;
  if ((pbVar7 == (byte *)0x0) || ((~*pbVar7 & 3) != 0)) {
    uVar11 = 0;
  }
  else {
    lVar19 = *(longlong *)(pbVar7 + 8);
    local_98 = CONCAT44(local_98._4_4_,1);
    local_78 = &DAT_14cb78830;
    plStack_70 = &local_98;
    FUN_14049fede(lVar19 + 0x18,&local_88,&local_78,0);
    lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x28 + (longlong)(int)local_88 * 0x40);
    if (lVar19 != 0) {
      FUN_1404a8912(lVar19,*(undefined4 *)(param_1 + 0x40));
    }
    local_a8 = (LPCRITICAL_SECTION)(param_1 + 0x98);
    EnterCriticalSection(local_a8);
    pbVar7 = (byte *)*param_3;
    if ((pbVar7 != (byte *)0x0) && ((~*pbVar7 & 3) == 0)) {
      lVar19 = *(longlong *)(pbVar7 + 8);
      local_98 = CONCAT44(local_98._4_4_,1);
      local_78 = &DAT_14cb7be60;
      plStack_70 = &local_98;
      FUN_14049fede(lVar19 + 0x18,&local_88,&local_78,0);
      lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x18) + 0x28 + (longlong)(int)local_88 * 0x40);
      if (lVar19 != 0) {
        FUN_1404a8912(lVar19,2);
      }
    }
    local_78 = (undefined4 *)0x0;
    plStack_70 = (longlong *)0x0;
    uVar16 = 0;
    FUN_14009b010(&local_78,2,0);
    puVar1 = (uint *)(param_1 + 0x58);
    uVar6 = *(uint *)(param_1 + 0x70);
    local_a0 = param_3;
    if (uVar6 == 0) {
      uVar17 = 1;
      iVar14 = 0;
      uVar9 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar10 = puVar1;
      }
      uVar9 = *puVar10;
      if (uVar9 == 0) {
        iVar14 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar14 = uVar6 - 1;
        }
        uVar16 = 0;
        uVar17 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar17 = uVar16;
        }
        iVar14 = 0;
        do {
          if (uVar17 == uVar16) goto LAB_143d1a55e;
          iVar14 = iVar14 + 0x20;
          uVar9 = puVar10[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar16 = 0;
        iVar14 = 0;
      }
      uVar17 = (ulonglong)(-uVar9 & uVar9);
      uVar5 = uVar17 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar9 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar6 <= (int)uVar9) {
        uVar9 = uVar6;
      }
    }
    if (uVar9 != uVar6) {
      uVar20 = 0xffffffff;
      local_b8 = (ulonglong)uVar6;
      local_b0 = param_1;
      do {
        lVar19 = *(longlong *)(local_b0 + 0x48);
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        FUN_14009b010(&local_88,3,0);
        FUN_14187f36a(lVar19 + (longlong)(int)uVar9 * 0x38 + 8,&local_88);
        if (local_78 != (undefined4 *)0x0) {
          local_c8 = 0;
          FUN_140141db6(local_78,&local_88,0,0);
        }
        plVar8 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar4 = plStack_80 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        uVar20 = uVar20 & ~(uint)uVar17;
        puVar10 = *(uint **)(local_b0 + 0x68);
        if (*(uint **)(local_b0 + 0x68) == (uint *)0x0) {
          puVar10 = puVar1;
        }
        uVar6 = *(uint *)(local_b0 + 0x70);
        iVar15 = (int)uVar16;
        lVar19 = (longlong)iVar15;
        uVar9 = puVar10[lVar19] & uVar20;
        if (uVar9 == 0) {
          iVar12 = uVar6 + 0x1e;
          if (-1 < (int)(uVar6 - 1)) {
            iVar12 = uVar6 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar15) {
            iVar13 = iVar15;
          }
          if (iVar15 < iVar12) {
            lVar18 = 0;
            do {
              uVar9 = puVar10[lVar19 + lVar18 + 1];
              if (uVar9 != 0) {
                uVar16 = (ulonglong)(iVar15 + (int)lVar18 + 1);
                uVar20 = 0xffffffff;
                goto LAB_143d1a851;
              }
              iVar14 = iVar14 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar13 - lVar19 != lVar18);
            uVar20 = 0xffffffff;
            iVar15 = iVar13;
          }
          uVar16 = (ulonglong)(iVar15 + 1);
          uVar9 = uVar6;
        }
        else {
LAB_143d1a851:
          uVar17 = (ulonglong)(-uVar9 & uVar9);
          uVar5 = uVar17 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar9 = (iVar14 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)uVar6 <= (int)uVar9) {
            uVar9 = uVar6;
          }
        }
        param_1 = local_b0;
      } while (uVar9 != (uint)local_b8);
    }
LAB_143d1a55e:
    plVar8 = local_a0;
    local_c8 = 0;
    FUN_14014191c(*local_a0,&DAT_14cb7be88,&local_78,0);
    plVar4 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    LeaveCriticalSection(local_a8);
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    FUN_14009b010(&local_98,3,0);
    local_78 = (undefined4 *)0x0;
    plStack_70 = (longlong *)0x0;
    FUN_14009b010(&local_78,2,0);
    if ((longlong)*(int *)(param_1 + 200) != 0) {
      lVar19 = *(longlong *)(param_1 + 0xc0);
      lVar18 = (longlong)*(int *)(param_1 + 200) << 3;
      do {
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        FUN_14009b010(&local_88,1,0);
        if (local_88 != 0) {
          FUN_1401269d0(local_88,lVar19);
        }
        if (local_78 != (undefined4 *)0x0) {
          local_c8 = 0;
          FUN_140141db6(local_78,&local_88,0,0);
        }
        plVar4 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_80 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_80)(plStack_80);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        lVar19 = lVar19 + 8;
        lVar18 = lVar18 + -8;
      } while (lVar18 != 0);
    }
    if (local_98 != 0) {
      local_c8 = 0;
      FUN_14014191c(local_98,&DAT_14cb78808,&local_78,0);
    }
    plVar4 = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_70 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_70)(plStack_70);
        LOCK();
        piVar3 = (int *)((longlong)plVar4 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    if (*plVar8 != 0) {
      local_c8 = 0;
      FUN_14014191c(*plVar8,&DAT_14cb78768,&local_98,0);
    }
    plVar8 = plStack_90;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = plStack_90 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar3 = (int *)((longlong)plVar8 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    uVar11 = 1;
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 143d1a8a8 FUN_143d1a8a8 body=1921 status=ok
// SIG undefined FUN_143d1a8a8(void)

void FUN_143d1a8a8(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  size_t sVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte *pbVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  char *pcVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_78 [32];
  char *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_143d1a318();
  lVar24 = param_1 + 0x48;
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    FUN_1488352cc(lVar24);
    FUN_14654c4b2(lVar24);
  }
  pbVar12 = (byte *)*param_2;
  if ((pbVar12 != (byte *)0x0) && ((~*pbVar12 & 3) == 0)) {
    lVar20 = *(longlong *)(pbVar12 + 8);
    puVar10 = &DAT_14c9a1308;
    if (*(int *)(lVar20 + 0x28) != *(int *)(lVar20 + 0x54)) {
      lVar19 = lVar20 + 0x58;
      if (*(longlong *)(lVar20 + 0x60) != 0) {
        lVar19 = *(longlong *)(lVar20 + 0x60);
      }
      iVar4 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar20 + 0x68) - 1U & DAT_14cb78830) * 4);
      puVar10 = &DAT_14c9a1308;
      if (iVar4 != -1) {
        do {
          lVar19 = *(longlong *)(lVar20 + 0x18) + (longlong)iVar4 * 0x40;
          if (*(uint *)(*(longlong *)(lVar20 + 0x18) + (longlong)iVar4 * 0x40) == DAT_14cb78830) {
            puVar10 = &DAT_14c9a1308;
            if (lVar19 == 0) goto LAB_143d1a982;
            puVar14 = (undefined8 *)(lVar19 + 0x28);
            puVar10 = &DAT_14c9a1308;
            if ((puVar14 == (undefined8 *)0x0) ||
               (((byte *)*puVar14 != (byte *)0x0 &&
                (puVar10 = puVar14, (*(byte *)*puVar14 & 0x40) == 0)))) goto LAB_143d1a982;
            break;
          }
          iVar4 = *(int *)(lVar19 + 0x38);
        } while (iVar4 != -1);
        puVar10 = &DAT_14c9a1308;
      }
    }
LAB_143d1a982:
    uVar3 = FUN_140e1edd4(puVar10,0);
    *(undefined4 *)(param_1 + 0x40) = uVar3;
    pbVar12 = (byte *)*param_2;
    if (pbVar12 != (byte *)0x0) {
      if ((*pbVar12 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar12 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar13 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar9[9];
        }
        iVar4 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar9[10] - 1U & DAT_14cb7be60) * 4);
        if (iVar4 != -1) {
          do {
            lVar20 = *plVar9 + (longlong)iVar4 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar4 * 0x40) == DAT_14cb7be60) {
              if ((((lVar20 != 0) &&
                   (puVar10 = (undefined8 *)(lVar20 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_143d1aa11;
              break;
            }
            iVar4 = *(int *)(lVar20 + 0x38);
          } while (iVar4 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_143d1aa11:
    iVar4 = FUN_140e1edd4(puVar10,0);
    pbVar12 = (byte *)*param_2;
    if (1 < iVar4) {
      if (pbVar12 != (byte *)0x0) {
        if ((*pbVar12 & 2) == 0) {
          plVar9 = &DAT_14c9a1288;
        }
        else {
          plVar9 = (longlong *)(*(longlong *)(pbVar12 + 8) + 0x18);
        }
        if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
          plVar13 = plVar9 + 8;
          if ((longlong *)plVar9[9] != (longlong *)0x0) {
            plVar13 = (longlong *)plVar9[9];
          }
          iVar4 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar9[10] - 1U & DAT_14cb7be88) * 4
                          );
          if (iVar4 != -1) {
            do {
              lVar20 = *plVar9 + (longlong)iVar4 * 0x40;
              if (*(uint *)(*plVar9 + (longlong)iVar4 * 0x40) == DAT_14cb7be88) {
                if (((lVar20 != 0) &&
                    (puVar10 = (undefined8 *)(lVar20 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
                goto LAB_143d1aab1;
                break;
              }
              iVar4 = *(int *)(lVar20 + 0x38);
            } while (iVar4 != -1);
          }
        }
      }
      puVar10 = &DAT_14c9a1308;
LAB_143d1aab1:
      pbVar1 = (byte *)*puVar10;
      if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 2)) {
        lVar20 = (longlong)*(int *)(*(undefined8 **)(pbVar1 + 8) + 2);
        if (lVar20 != 0) {
          puVar10 = (undefined8 *)**(undefined8 **)(pbVar1 + 8);
          puVar14 = puVar10 + lVar20 * 2;
          do {
            pbVar12 = (byte *)*puVar10;
            if ((pbVar12 != (byte *)0x0) && ((~*pbVar12 & 3) == 0)) {
              lVar20 = *(longlong *)(pbVar12 + 8);
              puVar15 = &DAT_14c9a1308;
              if (*(int *)(lVar20 + 0x28) != *(int *)(lVar20 + 0x54)) {
                lVar19 = lVar20 + 0x58;
                if (*(longlong *)(lVar20 + 0x60) != 0) {
                  lVar19 = *(longlong *)(lVar20 + 0x60);
                }
                iVar4 = *(int *)(lVar19 + (ulonglong)(*(int *)(lVar20 + 0x68) - 1U & DAT_14cb78858)
                                          * 4);
                puVar15 = &DAT_14c9a1308;
                if (iVar4 != -1) {
                  do {
                    lVar19 = *(longlong *)(lVar20 + 0x18) + (longlong)iVar4 * 0x40;
                    if (*(uint *)(*(longlong *)(lVar20 + 0x18) + (longlong)iVar4 * 0x40) ==
                        DAT_14cb78858) {
                      puVar15 = &DAT_14c9a1308;
                      if (lVar19 == 0) goto LAB_143d1ab86;
                      puVar11 = (undefined8 *)(lVar19 + 0x28);
                      puVar15 = &DAT_14c9a1308;
                      if ((puVar11 == (undefined8 *)0x0) ||
                         (((byte *)*puVar11 != (byte *)0x0 &&
                          (puVar15 = puVar11, (*(byte *)*puVar11 & 0x40) == 0))))
                      goto LAB_143d1ab86;
                      break;
                    }
                    iVar4 = *(int *)(lVar19 + 0x38);
                  } while (iVar4 != -1);
                  puVar15 = &DAT_14c9a1308;
                }
              }
LAB_143d1ab86:
              pbVar12 = (byte *)*puVar15;
              if (((pbVar12 == (byte *)0x0) || ((*pbVar12 & 3) != 1)) ||
                 (pcVar2 = *(char **)(pbVar12 + 8), pcVar2 == (char *)0x0)) {
LAB_143d1ab8e:
                uVar16 = 0;
                uVar21 = 0;
              }
              else {
                sVar6 = strlen(pcVar2);
                iVar4 = (int)sVar6;
                if (iVar4 == 0) goto LAB_143d1ab8e;
                lVar20 = (longlong)iVar4;
                pcVar18 = pcVar2 + lVar20 + -1;
                if (pcVar18 < pcVar2) {
                  lVar19 = 0;
                }
                else {
                  uVar8 = 0;
                  do {
                    if (9 < (byte)(*pcVar18 - 0x30U)) break;
                    uVar8 = uVar8 + 1;
                    pcVar18 = pcVar18 + -1;
                  } while (pcVar2 <= pcVar18);
                  if ((((uVar8 == 0) || (iVar4 <= (int)uVar8)) ||
                      ((10 < uVar8 ||
                       (lVar22 = -(ulonglong)uVar8, pcVar2[lVar22 + lVar20 + -1] != '_')))) ||
                     ((uVar8 != 1 && (pcVar2[lVar22 + lVar20] == '0')))) {
LAB_143d1abf2:
                    lVar19 = 0;
                  }
                  else {
                    lVar23 = 0;
                    do {
                      lVar19 = (longlong)pcVar2[lVar22 + lVar20] + lVar23 * 10;
                      lVar23 = lVar19 + -0x30;
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != 0);
                    if (0x7ffffffe < lVar23) goto LAB_143d1abf2;
                    iVar4 = ~uVar8 + iVar4;
                    lVar19 = lVar19 + -0x2f;
                  }
                  if (iVar4 == 0) goto LAB_143d1ab8e;
                }
                local_4c = 0;
                local_58 = pcVar2;
                local_50 = iVar4;
                uVar8 = FUN_14001a6c0(&local_58,1);
                uVar21 = lVar19 << 0x20;
                uVar16 = (ulonglong)uVar8;
              }
              local_58 = (char *)(uVar21 | uVar16);
              if (local_58 != (char *)0x0) {
                uVar8 = (uint)(uVar16 >> 0x10);
                uVar7 = (uint)uVar16 & 0xffff;
                uVar5 = FUN_145804d1a(lVar24,((uint)uVar16 << 0x10 | uVar7) + (uVar7 >> 4) +
                                             (uVar8 << 0x13 | uVar8) + (int)(uVar21 >> 0x20),
                                      &local_58);
                FUN_14654b646(uVar5,puVar10);
              }
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 != puVar14);
          pbVar12 = (byte *)*param_2;
        }
      }
    }
    if (pbVar12 != (byte *)0x0) {
      if ((*pbVar12 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar12 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar13 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar13 = (longlong *)plVar9[9];
        }
        iVar4 = *(int *)((longlong)plVar13 + (ulonglong)((int)plVar9[10] - 1U & DAT_14cb78768) * 4);
        if (iVar4 != -1) {
          do {
            lVar24 = *plVar9 + (longlong)iVar4 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar4 * 0x40) == DAT_14cb78768) {
              if ((((lVar24 != 0) &&
                   (puVar10 = (undefined8 *)(lVar24 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_143d1ad6e;
              break;
            }
            iVar4 = *(int *)(lVar24 + 0x38);
          } while (iVar4 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_143d1ad6e:
    if (((byte *)*puVar10 != (byte *)0x0) && ((~*(byte *)*puVar10 & 3) == 0)) {
      plVar9 = (longlong *)(param_1 + 0xc0);
      *(undefined4 *)(param_1 + 200) = 0;
      if (*(int *)(param_1 + 0xcc) < 0) {
        FUN_1402191ca(plVar9,0);
      }
      pbVar12 = (byte *)*puVar10;
      if (pbVar12 != (byte *)0x0) {
        if ((*pbVar12 & 2) == 0) {
          plVar13 = &DAT_14c9a1288;
        }
        else {
          plVar13 = (longlong *)(*(longlong *)(pbVar12 + 8) + 0x18);
        }
        if ((int)plVar13[2] != *(int *)((longlong)plVar13 + 0x3c)) {
          plVar17 = plVar13 + 8;
          if ((longlong *)plVar13[9] != (longlong *)0x0) {
            plVar17 = (longlong *)plVar13[9];
          }
          iVar4 = *(int *)((longlong)plVar17 +
                          (ulonglong)((int)plVar13[10] - 1U & DAT_14cb78808) * 4);
          if (iVar4 != -1) {
            do {
              lVar24 = *plVar13 + (longlong)iVar4 * 0x40;
              if (*(uint *)(*plVar13 + (longlong)iVar4 * 0x40) == DAT_14cb78808) {
                if (((lVar24 != 0) &&
                    (puVar10 = (undefined8 *)(lVar24 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                   (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
                goto LAB_143d1ae36;
                break;
              }
              iVar4 = *(int *)(lVar24 + 0x38);
            } while (iVar4 != -1);
          }
        }
      }
      puVar10 = &DAT_14c9a1308;
LAB_143d1ae36:
      pbVar12 = (byte *)*puVar10;
      if ((pbVar12 != (byte *)0x0) && ((*pbVar12 & 3) == 2)) {
        lVar24 = (longlong)*(int *)(*(undefined8 **)(pbVar12 + 8) + 2);
        if (lVar24 != 0) {
          puVar10 = (undefined8 *)**(undefined8 **)(pbVar12 + 8);
          puVar14 = puVar10 + lVar24 * 2;
          do {
            pbVar12 = (byte *)*puVar10;
            if ((pbVar12 != (byte *)0x0) && ((*pbVar12 & 3) == 1)) {
              pcVar2 = *(char **)(pbVar12 + 8);
              if (pcVar2 == (char *)0x0) {
LAB_143d1af44:
                uVar16 = 0;
                uVar21 = 0;
              }
              else {
                sVar6 = strlen(pcVar2);
                iVar4 = (int)sVar6;
                if (iVar4 == 0) goto LAB_143d1af44;
                lVar24 = (longlong)iVar4;
                pcVar18 = pcVar2 + lVar24 + -1;
                if (pcVar18 < pcVar2) {
                  lVar20 = 0;
                }
                else {
                  uVar8 = 0;
                  do {
                    if (9 < (byte)(*pcVar18 - 0x30U)) break;
                    uVar8 = uVar8 + 1;
                    pcVar18 = pcVar18 + -1;
                  } while (pcVar2 <= pcVar18);
                  if ((((uVar8 == 0) || (iVar4 <= (int)uVar8)) || (10 < uVar8)) ||
                     ((lVar19 = -(ulonglong)uVar8, pcVar2[lVar19 + lVar24 + -1] != '_' ||
                      ((uVar8 != 1 && (pcVar2[lVar19 + lVar24] == '0')))))) {
LAB_143d1aedf:
                    lVar20 = 0;
                  }
                  else {
                    lVar22 = 0;
                    do {
                      lVar20 = (longlong)pcVar2[lVar19 + lVar24] + lVar22 * 10;
                      lVar22 = lVar20 + -0x30;
                      lVar19 = lVar19 + 1;
                    } while (lVar19 != 0);
                    if (0x7ffffffe < lVar22) goto LAB_143d1aedf;
                    iVar4 = ~uVar8 + iVar4;
                    lVar20 = lVar20 + -0x2f;
                  }
                  if (iVar4 == 0) goto LAB_143d1af44;
                }
                local_4c = 0;
                local_58 = pcVar2;
                local_50 = iVar4;
                uVar8 = FUN_14001a6c0(&local_58,1);
                uVar21 = lVar20 << 0x20;
                uVar16 = (ulonglong)uVar8;
              }
              iVar4 = *(int *)(param_1 + 200);
              *(uint *)(param_1 + 200) = iVar4 + 1U;
              if (*(uint *)(param_1 + 0xcc) < iVar4 + 1U) {
                FUN_1446f84a2(plVar9,iVar4);
              }
              *(ulonglong *)(*plVar9 + (longlong)iVar4 * 8) = uVar21 | uVar16;
            }
            puVar10 = puVar10 + 2;
          } while (puVar10 != puVar14);
        }
      }
    }
    FUN_1447f69b6(param_1 + 0x28);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d1b02a FUN_143d1b02a body=92 status=ok
// SIG undefined FUN_143d1b02a(void)

void FUN_143d1b02a(longlong param_1)

{
  FUN_143d1a318();
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    FUN_1488352cc(param_1 + 0x48);
    FUN_14654c4b2(param_1 + 0x48);
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  FUN_1447f69b6(param_1 + 0x28);
  return;
}



// FUNCTION 143d1b0ec FUN_143d1b0ec body=69 status=ok
// SIG undefined FUN_143d1b0ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1b0ec(void)

{
  _DAT_14cb78a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1b12e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78a18,1);
  return;
}



// FUNCTION 143d1b131 FUN_143d1b131 body=69 status=ok
// SIG undefined FUN_143d1b131(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1b131(void)

{
  _DAT_14cb78a20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1b173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78a28,1);
  return;
}



// FUNCTION 143d1b176 FUN_143d1b176 body=2440 status=ok
// SIG undefined FUN_143d1b176(void)

void FUN_143d1b176(undefined8 *param_1,longlong *param_2,int *param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  ushort uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined1 uVar24;
  ushort uVar25;
  uint *puVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 *local_e0;
  longlong *local_d8;
  int local_cc;
  ulonglong local_c8;
  uint *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  int *local_a8;
  int local_a0 [2];
  byte *local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  int local_78;
  int local_74;
  undefined4 *local_70;
  int *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = param_4;
  local_b8 = param_2;
  local_b0 = param_1;
  if (DAT_14c7638dc == '\x01') {
    local_88 = 0;
    uStack_80 = (longlong *)0x0;
    if (*param_3 < 1) {
      dVar27 = (double)(((int)param_4[1] - *(int *)((longlong)param_4 + 0x34)) * DAT_14c7638e0);
    }
    else {
      auVar28._0_8_ = (double)*param_3 * 1.1;
      auVar28._8_8_ = 0;
      auVar28 = roundpd(auVar28,auVar28,1);
      dVar27 = auVar28._0_8_;
    }
    iVar16 = (int)dVar27;
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar16);
    }
    if (iVar16 != 0) {
      FUN_141701710(&local_88);
    }
    puVar26 = (uint *)(param_4 + 2);
    uVar10 = *(uint *)(param_4 + 5);
    uVar21 = (ulonglong)uVar10;
    local_a8 = param_3;
    if (uVar10 == 0) {
      uVar23 = 1;
      uVar18 = 0;
      iVar16 = 0;
      uVar9 = 0;
    }
    else {
      puVar12 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar12 = puVar26;
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar16 = uVar10 + 0x1e;
        if (-1 < (int)(uVar10 - 1)) {
          iVar16 = uVar10 - 1;
        }
        local_e0 = (undefined4 *)0x0;
        uVar23 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar23 = 0;
        }
        uVar18 = 0;
        iVar16 = 0;
        do {
          if (uVar23 == uVar18) goto LAB_143d1b6e1;
          iVar16 = iVar16 + 0x20;
          uVar9 = puVar12[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar18 = 0;
        iVar16 = 0;
      }
      uVar23 = (ulonglong)(-uVar9 & uVar9);
      uVar3 = uVar23 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar9 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar10 <= (int)uVar9) {
        uVar9 = uVar10;
      }
    }
    if (uVar9 == uVar10) {
      local_e0 = (undefined4 *)0x0;
    }
    else {
      uVar10 = 0xffffffff;
      local_e0 = (undefined4 *)0x0;
      local_c8 = uVar21;
      local_c0 = puVar26;
      do {
        lVar22 = (longlong)(int)uVar9 * 0x40 + *param_4;
        lVar19 = FUN_140279ac4(lVar22);
        if (((lVar19 != 0) && (*(int *)(lVar22 + 0x30) != 0)) &&
           (lVar19 = FUN_140279ac4(lVar22), *(longlong *)(lVar19 + 0x228) == 0)) {
          local_cc = iVar16;
          lVar19 = FUN_140279ac4(lVar22);
          puVar20 = *(undefined4 **)(lVar19 + 8);
          if (puVar20 == (undefined4 *)0x0) {
            puVar20 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar19 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar19);
            DAT_14c947fe0 = lVar19;
          }
          FUN_140045924(DAT_14c947fe0,&local_98,puVar20,1);
          FUN_1400021e4(&local_98,&local_70);
          if (local_e0 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          uVar9 = (int)local_68 - 1;
          if ((int)local_68 == 0) {
            uVar9 = 0;
          }
          local_e0 = local_70;
          if (0 < (int)uVar9) {
            uVar21 = 0;
            puVar20 = local_70;
            do {
              uVar3 = (ulonglong)uStack_80;
              uVar5 = *(ushort *)((longlong)puVar20 + uVar21 * 2);
              uVar25 = 0x20;
              if (uVar5 != 0x3a) {
                uVar25 = uVar5;
              }
              uVar24 = (char)uVar25;
              if (0x7f < uVar5) {
                uVar24 = 0x20;
              }
              lVar19 = (longlong)(int)(uint)uStack_80;
              uVar11 = (uint)uStack_80 + 1;
              uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar11);
              if (uStack_80._4_4_ < uVar11) {
                FUN_144761492(&local_88,uVar3 & 0xffffffff);
                puVar20 = local_e0;
              }
              *(undefined1 *)(local_88 + lVar19) = uVar24;
              uVar21 = uVar21 + 1;
            } while (uVar9 != uVar21);
          }
          lVar19 = (longlong)(int)(uint)uStack_80;
          uVar9 = (uint)uStack_80 + 1;
          if (uStack_80._4_4_ < uVar9) {
            uVar21 = (ulonglong)uStack_80 & 0xffffffff;
            uStack_80._0_4_ = uVar9;
            FUN_144761492(&local_88,uVar21);
            uVar9 = (uint)uStack_80;
          }
          uStack_80._0_4_ = uVar9;
          uVar9 = (uint)uStack_80;
          puVar26 = local_c0;
          uVar21 = local_c8;
          *(undefined1 *)(local_88 + lVar19) = 0x3a;
          cVar4 = *(char *)(lVar22 + 0x30);
          lVar19 = (longlong)(int)(uint)uStack_80;
          uStack_80._0_4_ = (uint)uStack_80 + 1;
          if (uStack_80._4_4_ < (uint)uStack_80) {
            FUN_144761492(&local_88,uVar9);
          }
          uVar9 = (uint)uStack_80;
          *(char *)(local_88 + lVar19) = cVar4 + '0';
          lVar19 = (longlong)(int)(uint)uStack_80;
          uStack_80._0_4_ = (uint)uStack_80 + 1;
          if (uStack_80._4_4_ < (uint)uStack_80) {
            FUN_144761492(&local_88,uVar9);
          }
          *(undefined1 *)(local_88 + lVar19) = 0x3a;
          param_4 = local_d8;
          iVar16 = local_cc;
        }
        uVar10 = uVar10 & ~(uint)uVar23;
        puVar12 = (uint *)param_4[4];
        if ((uint *)param_4[4] == (uint *)0x0) {
          puVar12 = puVar26;
        }
        uVar11 = *(uint *)(param_4 + 5);
        iVar17 = (int)uVar18;
        lVar19 = (longlong)iVar17;
        uVar9 = puVar12[lVar19] & uVar10;
        if (uVar9 == 0) {
          iVar15 = uVar11 + 0x1e;
          if (-1 < (int)(uVar11 - 1)) {
            iVar15 = uVar11 - 1;
          }
          iVar15 = iVar15 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar15;
          if (iVar15 < iVar17) {
            iVar14 = iVar17;
          }
          if (iVar17 < iVar15) {
            lVar22 = 0;
            do {
              uVar9 = (puVar12 + lVar19 + 1)[lVar22];
              if (uVar9 != 0) {
                uVar18 = (ulonglong)(iVar17 + (int)lVar22 + 1);
                uVar10 = 0xffffffff;
                goto LAB_143d1ba6c;
              }
              iVar16 = iVar16 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar14 - lVar19 != lVar22);
            uVar10 = 0xffffffff;
            iVar17 = iVar14;
          }
          uVar18 = (ulonglong)(iVar17 + 1);
          param_4 = local_d8;
          uVar21 = local_c8;
          puVar26 = local_c0;
          uVar9 = uVar11;
        }
        else {
LAB_143d1ba6c:
          uVar23 = (ulonglong)(-uVar9 & uVar9);
          uVar3 = uVar23 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar9 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)uVar11 <= (int)uVar9) {
            uVar9 = uVar11;
          }
        }
      } while (uVar9 != (uint)uVar21);
    }
LAB_143d1b6e1:
    uVar21 = (ulonglong)uStack_80;
    lVar19 = (longlong)(int)(uint)uStack_80;
    uVar10 = (uint)uStack_80 + 1;
    uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,uVar10);
    if (uStack_80._4_4_ < uVar10) {
      FUN_144761492(&local_88,uVar21 & 0xffffffff);
    }
    plVar8 = local_b8;
    *(undefined1 *)(local_88 + lVar19) = 0;
    *local_a8 = (uint)uStack_80;
    if (local_e0 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    lVar19 = local_88;
    pbVar7 = (byte *)*plVar8;
    if ((pbVar7 != (byte *)0x0) && ((~*pbVar7 & 3) == 0)) {
      local_70 = (undefined4 *)local_b0[1];
      lVar22 = *(longlong *)(pbVar7 + 8);
      local_68 = local_a0;
      local_a0[0] = 1;
      FUN_14049fede(lVar22 + 0x18,&local_98,&local_70,0);
      lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
      if ((lVar22 != 0) && ((*(byte *)(lVar22 + 1) & 2) == 0)) {
        FUN_140126aca(lVar22,lVar19);
      }
    }
    if (local_88 != 0) {
      FUN_1400020a8(local_88);
    }
  }
  else {
    local_88 = 0;
    uStack_80 = (longlong *)0x0;
    uVar21 = 0;
    FUN_14009b010(&local_88,2,0);
    puVar26 = (uint *)(param_4 + 2);
    uVar10 = *(uint *)(param_4 + 5);
    puVar20 = (undefined4 *)(ulonglong)uVar10;
    local_e0 = puVar20;
    if (uVar10 == 0) {
      uVar18 = 1;
      iVar16 = 0;
      puVar13 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar12 = puVar26;
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar16 = uVar10 + 0x1e;
        if (-1 < (int)(uVar10 - 1)) {
          iVar16 = uVar10 - 1;
        }
        uVar21 = 0;
        uVar18 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar18 = uVar21;
        }
        iVar16 = 0;
        do {
          if (uVar18 == uVar21) goto LAB_143d1b37f;
          iVar16 = iVar16 + 0x20;
          uVar9 = puVar12[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar21 = 0;
        iVar16 = 0;
      }
      uVar18 = (ulonglong)(-uVar9 & uVar9);
      uVar23 = uVar18 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar9 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      puVar13 = (undefined4 *)(ulonglong)uVar9;
      if ((int)uVar10 <= (int)uVar9) {
        puVar13 = puVar20;
      }
    }
    if ((uint)puVar13 != uVar10) {
      uVar10 = 0xffffffff;
      do {
        lVar22 = (longlong)(int)puVar13 * 0x40 + *param_4;
        lVar19 = FUN_140279ac4(lVar22);
        if (((lVar19 != 0) && (*(int *)(lVar22 + 0x30) != 0)) &&
           (lVar19 = FUN_140279ac4(lVar22), *(longlong *)(lVar19 + 0x228) == 0)) {
          local_98 = (byte *)0x0;
          plStack_90 = (longlong *)0x0;
          FUN_14009b010(&local_98,3,0);
          lVar19 = FUN_140279ac4(lVar22);
          puVar20 = *(undefined4 **)(lVar19 + 8);
          if (puVar20 == (undefined4 *)0x0) {
            puVar20 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar19 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar19);
            DAT_14c947fe0 = lVar19;
          }
          FUN_140045924(DAT_14c947fe0,local_a0,puVar20,1);
          param_4 = local_d8;
          if (local_98 != (byte *)0x0) {
            if ((~*local_98 & 3) == 0) {
              lVar19 = *(longlong *)(local_98 + 8);
              local_78 = 1;
              local_70 = &DAT_14cb78970;
              local_68 = &local_78;
              FUN_14049fede(lVar19 + 0x18,&local_74,&local_70,0);
              lVar19 = *(longlong *)
                        (*(longlong *)(lVar19 + 0x18) + 0x28 + (longlong)local_74 * 0x40);
              if (lVar19 != 0) {
                FUN_1401269d0(lVar19,local_a0);
              }
              if (local_98 == (byte *)0x0) goto LAB_143d1b589;
            }
            if ((~*local_98 & 3) == 0) {
              uVar6 = *(undefined4 *)(lVar22 + 0x30);
              lVar19 = *(longlong *)(local_98 + 8);
              local_74 = 1;
              local_70 = &DAT_14cb78998;
              local_68 = &local_74;
              FUN_14049fede(lVar19 + 0x18,local_a0,&local_70,0);
              lVar19 = *(longlong *)
                        (*(longlong *)(lVar19 + 0x18) + 0x28 + (longlong)local_a0[0] * 0x40);
              param_4 = local_d8;
              if (lVar19 != 0) {
                FUN_1404a8912(lVar19,uVar6);
                param_4 = local_d8;
              }
            }
          }
LAB_143d1b589:
          if (local_88 != 0) {
            local_e8 = 0;
            FUN_140141db6(local_88,&local_98,0,0);
          }
          plVar8 = plStack_90;
          puVar20 = local_e0;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_90 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_90)(plStack_90);
              LOCK();
              piVar2 = (int *)((longlong)plVar8 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              puVar20 = local_e0;
              if (*piVar2 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
                puVar20 = local_e0;
              }
            }
          }
        }
        uVar10 = uVar10 & ~(uint)uVar18;
        puVar12 = (uint *)param_4[4];
        if ((uint *)param_4[4] == (uint *)0x0) {
          puVar12 = puVar26;
        }
        uVar9 = *(uint *)(param_4 + 5);
        iVar17 = (int)uVar21;
        lVar19 = (longlong)iVar17;
        uVar11 = puVar12[lVar19] & uVar10;
        if (uVar11 == 0) {
          iVar15 = uVar9 + 0x1e;
          if (-1 < (int)(uVar9 - 1)) {
            iVar15 = uVar9 - 1;
          }
          iVar15 = iVar15 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar14 = iVar15;
          if (iVar15 < iVar17) {
            iVar14 = iVar17;
          }
          if (iVar17 < iVar15) {
            lVar22 = 0;
            do {
              uVar11 = (puVar12 + lVar19 + 1)[lVar22];
              if (uVar11 != 0) {
                uVar21 = (ulonglong)(iVar17 + (int)lVar22 + 1);
                uVar10 = 0xffffffff;
                goto LAB_143d1b654;
              }
              iVar16 = iVar16 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar14 - lVar19 != lVar22);
            uVar10 = 0xffffffff;
            iVar17 = iVar14;
          }
          uVar21 = (ulonglong)(iVar17 + 1);
          puVar20 = local_e0;
          param_4 = local_d8;
          uVar11 = uVar9;
        }
        else {
LAB_143d1b654:
          uVar18 = (ulonglong)(-uVar11 & uVar11);
          uVar23 = uVar18 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          uVar11 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if ((int)uVar9 <= (int)uVar11) {
            uVar11 = uVar9;
          }
        }
        puVar13 = (undefined4 *)(ulonglong)uVar11;
      } while (uVar11 != (uint)puVar20);
    }
LAB_143d1b37f:
    if (*local_b8 != 0) {
      local_e8 = 0;
      FUN_14014191c(*local_b8,*local_b0,&local_88,0);
    }
    plVar8 = uStack_80;
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
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d1bb00 FUN_143d1bb00 body=2464 status=ok
// SIG undefined FUN_143d1bb00(void)

void FUN_143d1bb00(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,longlong param_4)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  size_t sVar8;
  uint *puVar9;
  undefined8 uVar10;
  int *piVar11;
  int iVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  char *pcVar22;
  longlong lVar23;
  char *pcVar24;
  bool bVar25;
  undefined1 auStack_e8 [32];
  char *local_c8;
  int local_c0;
  undefined1 local_bc;
  longlong local_b0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  longlong lStack_80;
  undefined2 *local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_4 + 8) != *(int *)(param_4 + 0x34)) {
    FUN_143d18ca6(param_4);
    FUN_14187f1c8(param_4);
  }
  pbVar1 = (byte *)*param_2;
  if (pbVar1 == (byte *)0x0) {
    puVar7 = &DAT_14c9a1308;
    puVar13 = &DAT_14c9a1308;
  }
  else {
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar14 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar6[9];
      }
      iVar12 = *(int *)((longlong)plVar14 +
                       (ulonglong)((int)plVar6[10] - 1U & *(uint *)*param_1) * 4);
      if (iVar12 != -1) {
        do {
          lVar18 = *plVar6 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar12 * 0x40) == *(uint *)*param_1) {
            if ((((lVar18 != 0) &&
                 (puVar7 = (undefined8 *)(lVar18 + 0x28), puVar7 != (undefined8 *)0x0)) &&
                ((byte *)*puVar7 != (byte *)0x0)) && ((*(byte *)*puVar7 & 0x40) == 0))
            goto LAB_143d1bbe8;
            break;
          }
          iVar12 = *(int *)(lVar18 + 0x38);
        } while (iVar12 != -1);
      }
    }
    puVar7 = &DAT_14c9a1308;
LAB_143d1bbe8:
    if ((*pbVar1 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    puVar13 = &DAT_14c9a1308;
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar14 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar14 = (longlong *)plVar6[9];
      }
      iVar12 = *(int *)((longlong)plVar14 +
                       (ulonglong)((int)plVar6[10] - 1U & *(uint *)param_1[1]) * 4);
      if (iVar12 != -1) {
        do {
          lVar18 = *plVar6 + (longlong)iVar12 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar12 * 0x40) == *(uint *)param_1[1]) {
            if (((lVar18 != 0) &&
                (puVar21 = (undefined8 *)(lVar18 + 0x28), puVar21 != (undefined8 *)0x0)) &&
               (((byte *)*puVar21 != (byte *)0x0 && ((*(byte *)*puVar21 & 0x40) == 0)))) {
              puVar13 = puVar21;
            }
            break;
          }
          iVar12 = *(int *)(lVar18 + 0x38);
        } while (iVar12 != -1);
      }
    }
  }
  pbVar1 = (byte *)*puVar13;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) || (*(longlong *)(pbVar1 + 8) == 0)) {
    pbVar1 = (byte *)*puVar7;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 2)) {
      lVar18 = (longlong)*(int *)(*(undefined8 **)(pbVar1 + 8) + 2);
      if (lVar18 != 0) {
        puVar13 = (undefined8 *)**(undefined8 **)(pbVar1 + 8);
        puVar7 = puVar13 + lVar18 * 2;
        do {
          pbVar1 = (byte *)*puVar13;
          puVar21 = &DAT_14c9a1308;
          if (pbVar1 != (byte *)0x0) {
            plVar6 = &DAT_14c9a1288;
            if ((*pbVar1 & 2) != 0) {
              plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
            }
            puVar21 = &DAT_14c9a1308;
            if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
              plVar14 = plVar6 + 8;
              if ((longlong *)plVar6[9] != (longlong *)0x0) {
                plVar14 = (longlong *)plVar6[9];
              }
              iVar12 = *(int *)((longlong)plVar14 +
                               (ulonglong)((int)plVar6[10] - 1U & DAT_14cb78970) * 4);
              puVar21 = &DAT_14c9a1308;
              if (iVar12 != -1) {
                do {
                  lVar18 = *plVar6 + (longlong)iVar12 * 0x40;
                  if (*(uint *)(*plVar6 + (longlong)iVar12 * 0x40) == DAT_14cb78970) {
                    puVar21 = &DAT_14c9a1308;
                    if (lVar18 == 0) goto LAB_143d1bd8c;
                    puVar15 = (undefined8 *)(lVar18 + 0x28);
                    puVar21 = &DAT_14c9a1308;
                    if ((puVar15 == (undefined8 *)0x0) ||
                       (((byte *)*puVar15 != (byte *)0x0 &&
                        (puVar21 = puVar15, (*(byte *)*puVar15 & 0x40) == 0)))) goto LAB_143d1bd8c;
                    break;
                  }
                  iVar12 = *(int *)(lVar18 + 0x38);
                } while (iVar12 != -1);
                puVar21 = &DAT_14c9a1308;
              }
            }
          }
LAB_143d1bd8c:
          pbVar1 = (byte *)*puVar21;
          if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
             (pcVar24 = *(char **)(pbVar1 + 8), pcVar24 == (char *)0x0)) {
LAB_143d1bd94:
            local_90 = 0;
            uVar19 = 0;
          }
          else {
            sVar8 = strlen(pcVar24);
            iVar12 = (int)sVar8;
            if (iVar12 == 0) goto LAB_143d1bd94;
            lVar18 = (longlong)iVar12;
            pcVar22 = pcVar24 + lVar18 + -1;
            if (pcVar22 < pcVar24) {
              lVar17 = 0;
            }
            else {
              uVar4 = 0;
              do {
                if (9 < (byte)(*pcVar22 - 0x30U)) break;
                uVar4 = uVar4 + 1;
                pcVar22 = pcVar22 + -1;
              } while (pcVar24 <= pcVar22);
              if ((((uVar4 == 0) || (iVar12 <= (int)uVar4)) ||
                  ((10 < uVar4 || (lVar23 = -(ulonglong)uVar4, pcVar24[lVar23 + lVar18 + -1] != '_')
                   ))) || ((uVar4 != 1 && (pcVar24[lVar23 + lVar18] == '0')))) {
LAB_143d1bdf7:
                lVar17 = 0;
              }
              else {
                lVar20 = 0;
                do {
                  lVar17 = (longlong)pcVar24[lVar23 + lVar18] + lVar20 * 10;
                  lVar20 = lVar17 + -0x30;
                  lVar23 = lVar23 + 1;
                } while (lVar23 != 0);
                if (0x7ffffffe < lVar20) goto LAB_143d1bdf7;
                iVar12 = ~uVar4 + iVar12;
                lVar17 = lVar17 + -0x2f;
              }
              if (iVar12 == 0) goto LAB_143d1bd94;
            }
            local_bc = 0;
            local_c8 = pcVar24;
            local_c0 = iVar12;
            uVar4 = FUN_14001a6c0(&local_c8,1);
            uVar19 = lVar17 << 0x20;
            local_90 = (ulonglong)uVar4;
          }
          local_90 = local_90 | uVar19;
          local_88 = 0;
          lStack_80 = 0;
          pbVar1 = (byte *)*puVar13;
          puVar21 = &DAT_14c9a1308;
          if (pbVar1 != (byte *)0x0) {
            plVar6 = &DAT_14c9a1288;
            if ((*pbVar1 & 2) != 0) {
              plVar6 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
            }
            puVar21 = &DAT_14c9a1308;
            if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
              plVar14 = plVar6 + 8;
              if ((longlong *)plVar6[9] != (longlong *)0x0) {
                plVar14 = (longlong *)plVar6[9];
              }
              iVar12 = *(int *)((longlong)plVar14 +
                               (ulonglong)((int)plVar6[10] - 1U & DAT_14cb78998) * 4);
              puVar21 = &DAT_14c9a1308;
              if (iVar12 != -1) {
                do {
                  lVar18 = *plVar6 + (longlong)iVar12 * 0x40;
                  if (*(uint *)(*plVar6 + (longlong)iVar12 * 0x40) == DAT_14cb78998) {
                    puVar21 = &DAT_14c9a1308;
                    if (lVar18 == 0) goto LAB_143d1bec9;
                    puVar15 = (undefined8 *)(lVar18 + 0x28);
                    puVar21 = &DAT_14c9a1308;
                    if ((puVar15 == (undefined8 *)0x0) ||
                       (((byte *)*puVar15 != (byte *)0x0 &&
                        (puVar21 = puVar15, (*(byte *)*puVar15 & 0x40) == 0)))) goto LAB_143d1bec9;
                    break;
                  }
                  iVar12 = *(int *)(lVar18 + 0x38);
                } while (iVar12 != -1);
                puVar21 = &DAT_14c9a1308;
              }
            }
          }
LAB_143d1bec9:
          uVar4 = FUN_140e1edd4(puVar21,0);
          if (local_88 == 0) {
            uVar10 = FUN_14073f72a();
            local_88 = FUN_14477b664(uVar10);
          }
          if (lStack_80 == 0) {
            if ((((local_88 != 0) && (local_90 != 0)) &&
                (plVar6 = *(longlong **)(local_88 + 0xb8), plVar6 != (longlong *)0x0)) &&
               (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 != '\0')) {
              uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
              lStack_80 = FUN_144aff482(uVar10,&local_90);
              if (lStack_80 != 0) goto LAB_143d1befc;
            }
          }
          else {
LAB_143d1befc:
            lVar18 = lStack_80;
            if (local_88 == 0) {
              uVar10 = FUN_14073f72a();
              local_88 = FUN_14477b664(uVar10);
              lVar18 = lStack_80;
              if (lStack_80 == 0) {
                if (local_88 == 0) {
                  lVar18 = 0;
                }
                else {
                  lVar18 = 0;
                  if (local_90 != 0) {
                    plVar6 = *(longlong **)(local_88 + 0xb8);
                    if ((plVar6 == (longlong *)0x0) ||
                       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
                      lVar18 = 0;
                      lStack_80 = lVar18;
                    }
                    else {
                      uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
                      lVar18 = FUN_144aff482(uVar10,&local_90);
                      lStack_80 = lVar18;
                    }
                  }
                }
              }
            }
            if ((uVar4 < 3) && (*(longlong *)(lVar18 + 0x228) == 0)) {
              if (local_88 == 0) {
                uVar10 = FUN_14073f72a();
                local_88 = FUN_14477b664(uVar10);
                lVar18 = lStack_80;
              }
              if (lVar18 == 0) {
                lStack_80 = 0;
                if (local_88 == 0) {
                  lVar18 = 0;
                }
                else {
                  lVar18 = 0;
                  if (local_90 != 0) {
                    plVar6 = *(longlong **)(local_88 + 0xb8);
                    if ((plVar6 == (longlong *)0x0) ||
                       (cVar2 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar2 == '\0')) {
                      lVar18 = 0;
                      lStack_80 = lVar18;
                    }
                    else {
                      uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
                      lVar18 = FUN_144aff482(uVar10,&local_90);
                      lStack_80 = lVar18;
                    }
                  }
                }
              }
              FUN_14073f620(&local_c8,lVar18);
              uVar5 = FUN_14027a0c2(&local_c8);
              puVar9 = (uint *)FUN_140ddeccc(param_4,uVar5,&local_c8);
              *puVar9 = uVar4;
              if (local_b0 != 0) {
                FUN_1400020a8();
              }
            }
          }
          puVar13 = puVar13 + 2;
        } while (puVar13 != puVar7);
      }
    }
  }
  else {
    local_78 = (undefined2 *)0x0;
    uStack_70 = 0;
    pbVar1 = (byte *)*puVar13;
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
      pcVar24 = (char *)0x0;
    }
    else {
      pcVar24 = *(char **)(pbVar1 + 8);
    }
    cVar2 = *pcVar24;
    if (cVar2 != '\0') {
      bVar25 = false;
      lVar18 = 1;
      do {
        if (bVar25) {
          if (cVar2 == ':') {
            bVar25 = (longlong)uStack_70 < 0;
            uStack_70 = uStack_70 & 0xffffffff00000000;
            if (bVar25) {
              FUN_1446f8c06(&local_78,0);
            }
            bVar25 = false;
            if (local_78 != (undefined2 *)0x0) {
              *local_78 = 0;
            }
          }
          else {
            puVar16 = &DAT_149dfb77a;
            if ((int)uStack_70 != 0) {
              puVar16 = local_78;
            }
            FUN_1446f470e(&local_98,puVar16,1);
            local_90 = local_98;
            local_88 = 0;
            lStack_80 = 0;
            uVar10 = FUN_14073f72a();
            local_88 = FUN_14477b664(uVar10);
            if (lStack_80 == 0) {
              if ((((local_88 != 0) && (local_90 != 0)) &&
                  (plVar6 = *(longlong **)(local_88 + 0xb8), plVar6 != (longlong *)0x0)) &&
                 (cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar3 != '\0')) {
                uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
                lStack_80 = FUN_144aff482(uVar10,&local_90);
                if (lStack_80 != 0) goto LAB_143d1c21a;
              }
            }
            else {
LAB_143d1c21a:
              lVar17 = lStack_80;
              if (local_88 == 0) {
                uVar10 = FUN_14073f72a();
                local_88 = FUN_14477b664(uVar10);
                lVar17 = lStack_80;
                if (lStack_80 == 0) {
                  if (local_88 == 0) {
                    lVar17 = 0;
                  }
                  else {
                    lVar17 = 0;
                    if (local_90 != 0) {
                      plVar6 = *(longlong **)(local_88 + 0xb8);
                      if ((plVar6 == (longlong *)0x0) ||
                         (cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar3 == '\0')) {
                        lVar17 = 0;
                        lStack_80 = lVar17;
                      }
                      else {
                        uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
                        lVar17 = FUN_144aff482(uVar10,&local_90);
                        lStack_80 = lVar17;
                      }
                    }
                  }
                }
              }
              if ((0xfc < (byte)(cVar2 - 0x33U)) && (*(longlong *)(lVar17 + 0x228) == 0)) {
                if (local_88 == 0) {
                  uVar10 = FUN_14073f72a();
                  local_88 = FUN_14477b664(uVar10);
                  lVar17 = lStack_80;
                }
                if (lVar17 == 0) {
                  lStack_80 = 0;
                  if (local_88 == 0) {
                    lVar17 = 0;
                  }
                  else {
                    lVar17 = 0;
                    if (local_90 != 0) {
                      plVar6 = *(longlong **)(local_88 + 0xb8);
                      if ((plVar6 == (longlong *)0x0) ||
                         (cVar3 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar3 == '\0')) {
                        lVar17 = 0;
                        lStack_80 = lVar17;
                      }
                      else {
                        uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
                        lVar17 = FUN_144aff482(uVar10,&local_90);
                        lStack_80 = lVar17;
                      }
                    }
                  }
                }
                FUN_14073f620(&local_c8,lVar17);
                uVar5 = FUN_14027a0c2(&local_c8);
                piVar11 = (int *)FUN_140ddeccc(param_4,uVar5,&local_c8);
                *piVar11 = cVar2 + -0x30;
                if (local_b0 != 0) {
                  FUN_1400020a8();
                }
              }
            }
            bVar25 = true;
          }
        }
        else {
          bVar25 = true;
          if (cVar2 != ':') {
            FUN_140002184(&local_78,(int)cVar2);
            bVar25 = false;
          }
        }
        *param_3 = (int)lVar18;
        cVar2 = pcVar24[lVar18];
        lVar18 = lVar18 + 1;
      } while (cVar2 != '\0');
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d1c4a2 FUN_143d1c4a2 body=950 status=ok
// SIG undefined FUN_143d1c4a2(void)

int FUN_143d1c4a2(undefined8 *param_1)

{
  char *pcVar1;
  ulonglong uVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint *puVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_c8 [40];
  undefined4 *local_a0;
  undefined4 *local_98;
  undefined1 local_8c [4];
  longlong local_88 [2];
  uint local_78 [4];
  uint *local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pbVar3 = (byte *)*param_1;
  iVar10 = 0;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 3)) {
    lVar17 = *(longlong *)(pbVar3 + 8);
    if (*(int *)(lVar17 + 0x28) != *(int *)(lVar17 + 0x54)) {
      lVar18 = lVar17 + 0x58;
      if (*(longlong *)(lVar17 + 0x60) != 0) {
        lVar18 = *(longlong *)(lVar17 + 0x60);
      }
      iVar8 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar17 + 0x68) - 1U & DAT_14cb789c0) * 4);
      if (iVar8 != -1) {
        do {
          lVar18 = *(longlong *)(lVar17 + 0x18) + (longlong)iVar8 * 0x40;
          if (*(uint *)(*(longlong *)(lVar17 + 0x18) + (longlong)iVar8 * 0x40) == DAT_14cb789c0) {
            if ((((lVar18 != 0) &&
                 (puVar12 = (undefined8 *)(lVar18 + 0x28), puVar12 != (undefined8 *)0x0)) &&
                ((byte *)*puVar12 != (byte *)0x0)) && ((*(byte *)*puVar12 & 0x40) == 0))
            goto LAB_143d1c55e;
            break;
          }
          iVar8 = *(int *)(lVar18 + 0x38);
        } while (iVar8 != -1);
      }
    }
    puVar12 = &DAT_14c9a1308;
LAB_143d1c55e:
    pbVar4 = (byte *)*puVar12;
    if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 3) == 1)) &&
       (pcVar6 = *(char **)(pbVar4 + 8), pcVar6 != (char *)0x0)) {
      iVar10 = 0;
      do {
        if (*pcVar6 == ':') {
          if (pcVar6[1] == '2') {
            pcVar1 = pcVar6 + 2;
            if (*pcVar1 == ':') {
              pcVar6 = pcVar6 + 2;
            }
            iVar10 = iVar10 + (uint)(*pcVar1 == ':');
          }
        }
        else if (*pcVar6 == '\0') goto LAB_143d1c639;
        pcVar6 = pcVar6 + 1;
      } while( true );
    }
    lVar17 = *(longlong *)(pbVar3 + 8);
    if (*(int *)(lVar17 + 0x28) != *(int *)(lVar17 + 0x54)) {
      lVar18 = lVar17 + 0x58;
      if (*(longlong *)(lVar17 + 0x60) != 0) {
        lVar18 = *(longlong *)(lVar17 + 0x60);
      }
      iVar8 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar17 + 0x68) - 1U & DAT_14cb78920) * 4);
      if (iVar8 != -1) {
        do {
          lVar18 = *(longlong *)(lVar17 + 0x18) + (longlong)iVar8 * 0x40;
          if (*(uint *)(*(longlong *)(lVar17 + 0x18) + (longlong)iVar8 * 0x40) == DAT_14cb78920) {
            if (((lVar18 != 0) &&
                (puVar12 = (undefined8 *)(lVar18 + 0x28), puVar12 != (undefined8 *)0x0)) &&
               (((byte *)*puVar12 != (byte *)0x0 && ((*(byte *)*puVar12 & 0x40) == 0))))
            goto LAB_143d1c629;
            break;
          }
          iVar8 = *(int *)(lVar18 + 0x38);
        } while (iVar8 != -1);
      }
    }
    puVar12 = &DAT_14c9a1308;
LAB_143d1c629:
    if (((byte *)*puVar12 != (byte *)0x0) && (iVar10 = 0, (*(byte *)*puVar12 & 3) == 2)) {
      iVar10 = 0;
      local_68 = (uint *)0x0;
      local_60 = 0;
      local_88[0] = 0;
      local_88[1] = 0;
      local_5c = 0xffffffff00000080;
      local_54 = 0;
      local_48 = 0;
      local_40 = 0;
      local_a0 = &DAT_14cb78920;
      local_98 = &DAT_14cb789c0;
      FUN_143d1bb00(&local_a0,param_1,local_8c);
      uVar15 = 1;
      uVar7 = 0;
      iVar11 = 0;
      iVar8 = 0;
      if (local_60 != 0) {
        puVar5 = local_68;
        if (local_68 == (uint *)0x0) {
          puVar5 = local_78;
        }
        uVar13 = *puVar5;
        if (uVar13 == 0) {
          iVar8 = local_60 + 0x1e;
          if (-1 < local_60 + -1) {
            iVar8 = local_60 + -1;
          }
          uVar7 = 0;
          uVar15 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar15 = uVar7;
          }
          iVar11 = 0;
          do {
            if (uVar15 == uVar7) {
              iVar10 = 0;
              goto LAB_143d1c81f;
            }
            iVar11 = iVar11 + 0x20;
            uVar13 = puVar5[uVar7 + 1];
            uVar7 = uVar7 + 1;
          } while (uVar13 == 0);
        }
        else {
          uVar7 = 0;
          iVar11 = 0;
        }
        uVar15 = (ulonglong)(-uVar13 & uVar13);
        uVar2 = uVar15 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar8 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (local_60 <= iVar8) {
          iVar8 = local_60;
        }
      }
      if (iVar8 < local_60) {
        puVar5 = local_78;
        if (local_68 != (uint *)0x0) {
          puVar5 = local_68;
        }
        iVar16 = local_60 + 0x1e;
        if (-1 < local_60 + -1) {
          iVar16 = local_60 + -1;
        }
        iVar16 = iVar16 >> 5;
        uVar13 = 0xffffffff;
        iVar10 = 0;
        do {
          iVar10 = (uint)(*(int *)(local_88[0] + 0x30 + (longlong)iVar8 * 0x40) == 2) + iVar10;
          uVar13 = ~(uint)uVar15 & uVar13;
          iVar8 = (int)uVar7;
          lVar17 = (longlong)iVar8;
          uVar9 = puVar5[lVar17] & uVar13;
          if (uVar9 == 0) {
            iVar14 = iVar16;
            if (iVar16 < iVar8) {
              iVar14 = iVar8;
            }
            if (iVar16 <= iVar8) break;
            lVar18 = 0;
            while( true ) {
              iVar11 = iVar11 + 0x20;
              uVar9 = puVar5[lVar17 + lVar18 + 1];
              if (uVar9 != 0) break;
              lVar18 = lVar18 + 1;
              if (iVar14 - lVar17 == lVar18) goto LAB_143d1c81f;
            }
            uVar7 = (ulonglong)(iVar8 + (int)lVar18 + 1);
            uVar13 = 0xffffffff;
          }
          uVar15 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar15 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar8 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        } while (iVar8 < local_60);
      }
LAB_143d1c81f:
      local_40 = 0;
      if (local_48 != 0) {
        FUN_1400020a8();
      }
      FUN_145c6ef66(local_88);
    }
  }
LAB_143d1c639:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return iVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d1c859 FUN_143d1c859 body=69 status=ok
// SIG undefined FUN_143d1c859(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1c859(void)

{
  _DAT_14cb78a70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1c89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78a78,1);
  return;
}



// FUNCTION 143d1c89e FUN_143d1c89e body=74 status=ok
// SIG undefined FUN_143d1c89e(void)

void FUN_143d1c89e(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d1c95a FUN_143d1c95a body=434 status=ok
// SIG undefined FUN_143d1c95a(void)

undefined1 FUN_143d1c95a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_2 != 0) {
    if ((*(char *)(param_1 + 0x268) == '\x01') && ((longlong)*(int *)(param_1 + 0x278) != 0)) {
      plVar6 = *(longlong **)(param_1 + 0x270);
      lVar7 = (longlong)*(int *)(param_1 + 0x278) * 0x18;
      do {
        lVar4 = plVar6[1];
        if (lVar4 == 0) {
          uVar3 = FUN_141030812();
          lVar4 = FUN_14477b664(uVar3);
          plVar6[1] = lVar4;
        }
        lVar5 = plVar6[2];
        if (lVar5 == 0) {
          if (lVar4 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if (*plVar6 != 0) {
              plVar1 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
                lVar5 = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar5 = FUN_144aff482(uVar3,plVar6);
              }
              plVar6[2] = lVar5;
            }
          }
        }
        if (lVar5 == param_2) {
          return 0;
        }
        plVar6 = plVar6 + 3;
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != 0);
    }
    if (*(char *)(param_1 + 0x250) != '\x01') {
      return 1;
    }
    if ((longlong)*(int *)(param_1 + 0x260) != 0) {
      plVar6 = *(longlong **)(param_1 + 600);
      lVar7 = (longlong)*(int *)(param_1 + 0x260) * 0x18;
      while( true ) {
        lVar7 = lVar7 + -0x18;
        lVar4 = plVar6[1];
        if (lVar4 == 0) {
          uVar3 = FUN_141030812();
          lVar4 = FUN_14477b664(uVar3);
          plVar6[1] = lVar4;
        }
        lVar5 = plVar6[2];
        if (lVar5 == 0) {
          if (lVar4 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if (*plVar6 != 0) {
              plVar1 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(), cVar2 == '\0')) {
                lVar5 = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar5 = FUN_144aff482(uVar3,plVar6);
              }
              plVar6[2] = lVar5;
            }
          }
        }
        if (lVar5 == param_2) break;
        plVar6 = plVar6 + 3;
        if (lVar7 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d1cb45 FUN_143d1cb45 body=49 status=ok
// SIG undefined FUN_143d1cb45(void)

void FUN_143d1cb45(void)

{
  FUN_144760e21(DAT_14cb7bd50,DAT_14cb7bd58);
  if (DAT_14cb7bd50 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d1cb76 FUN_143d1cb76 body=461 status=ok
// SIG undefined FUN_143d1cb76(void)

void FUN_143d1cb76(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  char cVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  undefined1 uVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined7 uVar20;
  
  if (param_2[1] == 0) {
    return;
  }
  uVar13 = *param_2;
  if ((int)uVar13 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar13) {
    return;
  }
  plVar14 = (longlong *)
            ((ulonglong)((uVar13 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
  if (plVar14 == (longlong *)0x0) {
    return;
  }
  if (*(uint *)(plVar14 + 2) != param_2[1]) {
    return;
  }
  if ((*(uint *)(plVar14 + 1) & 0x10200000) != 0) {
    return;
  }
  if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
    lVar17 = *plVar14;
  }
  else {
    lVar17 = 0;
  }
  if (*(char *)(lVar17 + 0x178) != '\x03') {
    return;
  }
  uVar20 = (undefined7)((ulonglong)DAT_14c9647c8 >> 8);
  if ((char)param_2[2] == '\0') {
    return;
  }
  if ((*(uint *)(plVar14 + 1) & 0x10200000) == 0) {
    lVar17 = *plVar14;
  }
  else {
    lVar17 = 0;
  }
  cVar12 = FUN_14882cc18(param_1,lVar17);
  if (cVar12 == '\0') {
    return;
  }
  if (param_2[1] == 0) {
LAB_143d1ccbb:
    uVar18 = 0;
  }
  else {
    uVar13 = *param_2;
    uVar18 = 0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      puVar19 = (undefined8 *)
                ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((puVar19 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar19 + 2) != param_2[1] || ((*(uint *)(puVar19 + 1) & 0x10200000) != 0))))
      goto LAB_143d1ccbb;
      uVar18 = *puVar19;
    }
  }
  uVar13 = FUN_14882cfb4(param_1,uVar18,CONCAT71(uVar20,(char)param_2[2]));
  if (uVar13 == 0xffffffff) {
    return;
  }
  puVar15 = (uint *)FUN_14882d0b6();
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  uVar8 = param_2[8];
  uVar9 = param_2[9];
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  *puVar15 = *param_2;
  puVar15[1] = uVar1;
  puVar15[2] = uVar2;
  puVar15[3] = uVar3;
  puVar15[4] = uVar4;
  puVar15[5] = uVar5;
  puVar15[6] = uVar6;
  puVar15[7] = uVar7;
  puVar15[8] = uVar8;
  puVar15[9] = uVar9;
  puVar15[10] = uVar10;
  puVar15[0xb] = uVar11;
  if (puVar15 != param_2) {
    if ((char)param_2[0x18] == '\x01') {
      uVar1 = param_2[0xc];
      uVar2 = param_2[0xd];
      uVar3 = param_2[0xe];
      uVar4 = param_2[0xf];
      uVar5 = param_2[0x10];
      uVar6 = param_2[0x11];
      uVar7 = param_2[0x12];
      uVar8 = param_2[0x13];
      uVar9 = param_2[0x15];
      uVar10 = param_2[0x16];
      uVar11 = param_2[0x17];
      puVar15[0x14] = param_2[0x14];
      puVar15[0x15] = uVar9;
      puVar15[0x16] = uVar10;
      puVar15[0x17] = uVar11;
      puVar15[0x10] = uVar5;
      puVar15[0x11] = uVar6;
      puVar15[0x12] = uVar7;
      puVar15[0x13] = uVar8;
      puVar15[0xc] = uVar1;
      puVar15[0xd] = uVar2;
      puVar15[0xe] = uVar3;
      puVar15[0xf] = uVar4;
      uVar16 = 1;
    }
    else {
      if ((char)puVar15[0x18] != '\x01') goto LAB_143d1ccca;
      uVar16 = 0;
    }
    *(undefined1 *)(puVar15 + 0x18) = uVar16;
  }
LAB_143d1ccca:
  *(char *)(puVar15 + 0x1c) = (char)param_2[0x1c];
  *(undefined8 *)(puVar15 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  puVar15[3] = uVar13;
  if (param_2[1] != 0) {
    uVar13 = *param_2;
    uVar18 = 0;
    if (((int)uVar13 < 0) || (DAT_14c9647dc <= (int)uVar13)) goto LAB_143d1cd1e;
    puVar19 = (undefined8 *)
              ((ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
    if ((puVar19 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar19 + 2) == param_2[1] && ((*(uint *)(puVar19 + 1) & 0x10200000) == 0)))) {
      uVar18 = *puVar19;
      goto LAB_143d1cd1e;
    }
  }
  uVar18 = 0;
LAB_143d1cd1e:
  *(undefined1 *)(param_1 + 0x20) = 0;
  FUN_148835588(&DAT_14cb7bd50,uVar18,param_1);
  return;
}



// FUNCTION 143d1cd44 FUN_143d1cd44 body=168 status=ok
// SIG undefined FUN_143d1cd44(void)

void FUN_143d1cd44(longlong *param_1,longlong param_2,char param_3,int param_4)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (((param_2 != 0) && (*(char *)(param_2 + 0x178) == '\x03')) && (0 < (int)param_1[1])) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      lVar1 = *param_1;
      cVar2 = FUN_14882d14a(lVar1 + lVar4,param_2);
      if (((cVar2 != '\0') && (*(char *)(lVar1 + 8 + lVar4) == param_3)) &&
         (*(int *)(lVar1 + 0xc + lVar4) == param_4)) {
        if ((int)param_1[1] <= (int)uVar3) {
          return;
        }
        FUN_14882d0f6(param_1,uVar3 & 0xffffffff);
        *(undefined1 *)(param_1 + 4) = 0;
        FUN_148835588(&DAT_14cb7bd50,param_2,param_1);
        return;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x78;
    } while ((longlong)uVar3 < (longlong)(int)param_1[1]);
  }
  return;
}



// FUNCTION 143d1ce00 FUN_143d1ce00 body=522 status=ok
// SIG undefined FUN_143d1ce00(void)

void FUN_143d1ce00(longlong param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  char local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x178) == '\x03')) {
    FUN_1415806cc(param_1,param_2);
    local_c0 = DAT_14cb78af0;
    local_c8 = DAT_14cb78ae8;
    FUN_1448075d0(&local_b8);
    pbVar1 = (byte *)*param_3;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 2) == 0) {
        plVar2 = &DAT_14c9a1288;
      }
      else {
        plVar2 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
      }
      if ((int)plVar2[2] != *(int *)((longlong)plVar2 + 0x3c)) {
        plVar5 = plVar2 + 8;
        if ((longlong *)plVar2[9] != (longlong *)0x0) {
          plVar5 = (longlong *)plVar2[9];
        }
        iVar4 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar2[10] - 1U & (uint)local_b8) * 4);
        if (iVar4 != -1) {
          do {
            lVar6 = *plVar2 + (longlong)iVar4 * 0x40;
            if (*(uint *)(*plVar2 + (longlong)iVar4 * 0x40) == (uint)local_b8) {
              if ((((lVar6 != 0) &&
                   (puVar3 = (undefined8 *)(lVar6 + 0x28), puVar3 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar3 != (byte *)0x0)) && ((*(byte *)*puVar3 & 0x40) == 0))
              goto LAB_143d1cef7;
              break;
            }
            iVar4 = *(int *)(lVar6 + 0x38);
          } while (iVar4 != -1);
        }
      }
    }
    puVar3 = &DAT_14c9a1308;
LAB_143d1cef7:
    if (CONCAT44(uStack_9c,local_a0) != 0) {
      FUN_1400020a8();
    }
    pbVar1 = (byte *)*puVar3;
    if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 3) == 2)) {
      lVar6 = (longlong)*(int *)(*(undefined8 **)(pbVar1 + 8) + 2);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)**(undefined8 **)(pbVar1 + 8);
        lVar6 = lVar6 << 4;
        do {
          if (((byte *)*puVar3 != (byte *)0x0) && ((~*(byte *)*puVar3 & 3) == 0)) {
            local_ac = 0;
            local_a4 = 0;
            local_b8 = 0;
            local_b0 = '\0';
            local_90 = DAT_14c8464f0;
            local_a0 = (undefined4)DAT_14c8464e0;
            uStack_9c = DAT_14c8464e0._4_4_;
            uStack_98 = (undefined4)DAT_14c8464e8;
            uStack_94 = DAT_14c8464e8._4_4_;
            local_58 = 0;
            local_48 = 0;
            local_50 = 0;
            FUN_14882d7b2(&local_b8,param_2,puVar3);
            if (local_b0 != '\0') {
              FUN_143d1cb76(param_1,&local_b8);
            }
          }
          puVar3 = puVar3 + 2;
          lVar6 = lVar6 + -0x10;
        } while (lVar6 != 0);
      }
      *(undefined1 *)(param_1 + 0x20) = 0;
      FUN_148835588(&DAT_14cb7bd50,param_2,param_1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d1d00c FUN_143d1d00c body=471 status=ok
// SIG undefined FUN_143d1d00c(void)

undefined8 * FUN_143d1d00c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if ((((((longlong *)param_1[0x1b] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0xd4) != 0)
        ) && (uVar1 = *(uint *)(param_1 + 0x1a), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar12 != 0)))) &&
     ((*(int *)(lVar12 + 0x10) == *(int *)((longlong)param_1 + 0xd4) &&
      (((*(uint *)(lVar12 + 8) & 0x10200000) == 0 &&
       (cVar8 = (**(code **)(*(longlong *)param_1[0x1b] + 0x10))(), cVar8 != '\0')))))) {
    uVar9 = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))();
    cVar8 = FUN_143d163b2(uVar9);
    if (cVar8 != '\0') {
      uVar9 = (**(code **)(*(longlong *)param_1[0x1b] + 0x20))();
      FUN_1406115f6(uVar9,param_2);
      return param_2;
    }
  }
  lVar12 = param_1[0x19];
  if (lVar12 == 0) {
    if (((((longlong *)param_1[0x1b] == (longlong *)0x0) ||
         (*(int *)((longlong)param_1 + 0xd4) == 0)) ||
        (uVar1 = *(uint *)(param_1 + 0x1a), (int)uVar1 < 0)) ||
       (((DAT_14c9647dc <= (int)uVar1 ||
         (lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar12 == 0)) ||
        ((*(int *)(lVar12 + 0x10) != *(int *)((longlong)param_1 + 0xd4) ||
         (((*(uint *)(lVar12 + 8) & 0x10200000) != 0 ||
          (lVar12 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))(), lVar12 == 0)))))))) {
      puVar10 = &DAT_14c846480;
      puVar11 = param_2;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
      return param_2;
    }
    lVar12 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))();
    puVar10 = &DAT_14c846480;
    if (*(longlong *)(lVar12 + 0x1c8) != 0) {
      puVar10 = (undefined8 *)(*(longlong *)(lVar12 + 0x1c8) + 0x240);
    }
    uVar9 = puVar10[1];
    uVar2 = puVar10[2];
    uVar3 = puVar10[3];
    uVar4 = puVar10[4];
    uVar5 = puVar10[5];
    uVar6 = puVar10[6];
    uVar7 = puVar10[7];
    *param_2 = *puVar10;
    param_2[1] = uVar9;
    param_2[2] = uVar2;
    param_2[3] = uVar3;
    param_2[4] = uVar4;
    param_2[5] = uVar5;
    param_2[6] = uVar6;
    param_2[7] = uVar7;
    uVar17 = (undefined4)DAT_14c846520;
    uVar18 = (undefined4)((ulonglong)DAT_14c846520 >> 0x20);
    uVar13 = (undefined4)DAT_14c846510;
    uVar14 = DAT_14c846510._4_4_;
    uVar15 = (undefined4)DAT_14c846518;
    uVar16 = DAT_14c846518._4_4_;
  }
  else {
    (**(code **)(*param_1 + 0x180))(param_1);
    uVar2 = *(undefined8 *)(lVar12 + 0x200);
    uVar3 = *(undefined8 *)(lVar12 + 0x208);
    uVar9 = *(undefined8 *)(lVar12 + 0x210);
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0;
    *(undefined4 *)(param_2 + 3) = 0;
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
    uVar17 = 0;
    uVar18 = 0x3ff00000;
    param_2[4] = uVar2;
    param_2[5] = uVar3;
    param_2[6] = uVar9;
    param_2[7] = 0;
    uVar13 = 0;
    uVar14 = 0x3ff00000;
    uVar15 = 0;
    uVar16 = 0x3ff00000;
  }
  *(undefined4 *)(param_2 + 8) = uVar13;
  *(undefined4 *)((longlong)param_2 + 0x44) = uVar14;
  *(undefined4 *)(param_2 + 9) = uVar15;
  *(undefined4 *)((longlong)param_2 + 0x4c) = uVar16;
  param_2[10] = CONCAT44(uVar18,uVar17);
  param_2[0xb] = 0;
  return param_2;
}



// FUNCTION 143d1d234 FUN_143d1d234 body=260 status=ok
// SIG undefined FUN_143d1d234(void)

longlong * FUN_143d1d234(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c75f6d8 + 1;
  lVar8 = DAT_14c75f6d8 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c75f6d8 + 2;
    lVar8 = DAT_14c75f6d8 + 2;
  }
  DAT_14c75f6d8 = lVar8;
  cVar6 = FUN_14882efa4(param_3);
  if (cVar6 == '\0') {
    lVar9 = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x118) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x110);
      lVar7 = (longlong)*(int *)(param_1 + 0x118) * 0x38;
      do {
        if ((*(longlong *)(lVar8 + 0x10) == 0) && (*(char *)(lVar8 + 0x18) == '\0')) {
          *(longlong *)(lVar8 + 0x10) = lVar9;
          *(char *)(lVar8 + 0x18) = cVar6;
          uVar2 = *param_4;
          uVar3 = param_4[1];
          uVar4 = param_4[2];
          uVar5 = param_4[3];
          *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(param_4 + 4);
          *(undefined4 *)(lVar8 + 0x20) = uVar2;
          *(undefined4 *)(lVar8 + 0x24) = uVar3;
          *(undefined4 *)(lVar8 + 0x28) = uVar4;
          *(undefined4 *)(lVar8 + 0x2c) = uVar5;
          FUN_140705884(param_1);
          goto LAB_143d1d313;
        }
        lVar8 = lVar8 + 0x38;
        lVar7 = lVar7 + -0x38;
      } while (lVar7 != 0);
    }
    lVar8 = FUN_14882f092(param_1 + 0x110);
    *(longlong *)(lVar8 + 0x10) = lVar9;
    *(char *)(lVar8 + 0x18) = cVar6;
    uVar1 = *(undefined8 *)(param_4 + 4);
    uVar2 = param_4[1];
    uVar3 = param_4[2];
    uVar4 = param_4[3];
    *(undefined4 *)(lVar8 + 0x20) = *param_4;
    *(undefined4 *)(lVar8 + 0x24) = uVar2;
    *(undefined4 *)(lVar8 + 0x28) = uVar3;
    *(undefined4 *)(lVar8 + 0x2c) = uVar4;
    *(undefined8 *)(lVar8 + 0x30) = uVar1;
    FUN_140705884(param_1,lVar8);
    FUN_1407058ce(param_1);
    FUN_140705914(param_1);
    *(undefined8 *)(param_1 + 0x104) = 0xffffffffffffffff;
  }
LAB_143d1d313:
  *param_2 = lVar9;
  return param_2;
}



// FUNCTION 143d1d338 FUN_143d1d338 body=49 status=ok
// SIG undefined FUN_143d1d338(void)

void FUN_143d1d338(void)

{
  FUN_144760e21(DAT_14cb7bac0,DAT_14cb7bac8);
  if (DAT_14cb7bac0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d1d369 FUN_143d1d369 body=49 status=ok
// SIG undefined FUN_143d1d369(void)

void FUN_143d1d369(void)

{
  FUN_144760e21(DAT_14cb7bad8,DAT_14cb7bae0);
  if (DAT_14cb7bad8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d1d39a FUN_143d1d39a body=244 status=ok
// SIG undefined FUN_143d1d39a(void)

void FUN_143d1d39a(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar4 = *(uint *)(param_1 + 0x18), -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) {
    lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))();
      if (cVar1 != '\0') {
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
        if ((longlong)*(int *)(param_1 + 0x30) != 0) {
          lVar6 = (longlong)*(int *)(param_1 + 0x30) << 3;
          iVar3 = -1;
          lVar5 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar5 * 4) == param_2) {
              uVar4 = -(uint)(iVar3 == 0) | (uint)lVar5;
              iVar3 = (uint)lVar5 + 1;
              goto LAB_143d1d466;
            }
            lVar5 = lVar5 + 2;
            iVar3 = iVar3 + -1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
        iVar3 = -1;
        uVar4 = 0xffffffff;
LAB_143d1d466:
        FUN_140045b56(uVar2,uVar4,0 < param_3);
        FUN_140045b56(uVar2,iVar3,1 < param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d1d48e FUN_143d1d48e body=307 status=ok
// SIG undefined FUN_143d1d48e(void)

undefined1 FUN_143d1d48e(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 uVar7;
  
  uVar7 = 0;
  uVar1 = 0;
  if ((((*(longlong **)(param_1 + 0x20) != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar3 = *(uint *)(param_1 + 0x18), -1 < (int)uVar3)) &&
     (((uVar7 = uVar1, (int)uVar3 < DAT_14c9647dc &&
       (lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 != 0)) &&
      ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))))) {
    uVar3 = 0xfffffffe;
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar6 = (longlong)*(int *)(param_1 + 0x30) << 3;
      iVar5 = -1;
      uVar4 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + uVar4 * 4) == param_2) {
          if (iVar5 != 0) {
            uVar3 = (uint)uVar4;
            goto LAB_143d1d547;
          }
          break;
        }
        uVar4 = uVar4 + 2;
        iVar5 = iVar5 + -1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    uVar4 = 0xffffffff;
LAB_143d1d547:
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
    uVar7 = false;
    if (((uint)uVar4 != 0xffffffff) &&
       (uVar2 = uVar4 >> 5 & 0x7ffffff, (int)uVar2 < *(int *)(lVar6 + 0x118))) {
      uVar7 = (*(uint *)(*(longlong *)(lVar6 + 0x110) + 0xc + uVar2 * 0x14) >> ((uint)uVar4 & 0x1f)
              & 1) != 0;
    }
    if (((uVar3 != 0xfffffffe) && ((int)(uVar3 >> 5) < *(int *)(lVar6 + 0x118))) &&
       ((*(uint *)(*(longlong *)(lVar6 + 0x110) + 0xc + (ulonglong)(uVar3 >> 5) * 0x14) >>
         ((byte)uVar3 & 0x1e) & 2) != 0)) {
      uVar7 = 2;
    }
  }
  return uVar7;
}



// FUNCTION 143d1d5c2 FUN_143d1d5c2 body=467 status=ok
// SIG undefined FUN_143d1d5c2(void)

void FUN_143d1d5c2(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (((((param_4 != 0 && param_2 != 0) && (*(longlong **)(param_1 + 0x20) != (longlong *)0x0)) &&
       (*(int *)(param_1 + 0x1c) != 0)) &&
      (((uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
       ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0 &&
        ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
         ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))))) &&
     (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(), cVar4 != '\0')) {
    FUN_14619d558(param_1);
    if ((longlong)*(int *)(param_1 + 0x290) != 0) {
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x288) + lVar5);
        if (lVar3 != 0) {
          if ((*(int *)(lVar3 + 0x34) == 0) || (uVar1 = *(uint *)(lVar3 + 0x30), (int)uVar1 < 0)) {
LAB_143d1d6ee:
            lVar6 = 0;
          }
          else {
            lVar6 = 0;
            if ((int)uVar1 < DAT_14c9647dc) {
              plVar7 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(lVar3 + 0x34))) ||
                 ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_143d1d6ee;
              lVar6 = *plVar7;
            }
          }
          if (lVar6 == param_2) {
            return;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(param_1 + 0x290) * 8 != lVar5);
    }
    lVar5 = FUN_14882f1f5(DAT_14c951640);
    if (lVar5 != 0) {
      FUN_1401924dc(lVar5);
      iVar2 = *(int *)(param_1 + 0x290);
      *(uint *)(param_1 + 0x290) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x294) < iVar2 + 1U) {
        FUN_148836cda(param_1 + 0x288,iVar2);
      }
      lVar3 = *(longlong *)(param_1 + 0x288);
      *(undefined8 *)(lVar3 + (longlong)iVar2 * 8) = 0;
      FUN_1401924dc(lVar5);
      *(longlong *)(lVar3 + (longlong)iVar2 * 8) = lVar5;
      FUN_14882f2a6(lVar5,param_2,param_3,param_4,param_1);
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48(lVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d1d796 FUN_143d1d796 body=275 status=ok
// SIG undefined FUN_143d1d796(void)

void FUN_143d1d796(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if ((((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0)) ||
     (((DAT_14c9647dc <= (int)uVar1 ||
       (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0)) ||
      ((*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x1c) ||
       (((*(uint *)(lVar7 + 8) & 0x10200000) != 0 ||
        (cVar6 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x20))(), iVar5 = DAT_14c9647dc,
        lVar7 = DAT_14c9647c8, cVar6 == '\0')))))))) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x290);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x288);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if (lVar4 != 0) {
        if ((*(int *)(lVar4 + 0x34) == 0) || (uVar1 = *(uint *)(lVar4 + 0x30), (int)uVar1 < 0)) {
LAB_143d1d8a4:
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          if ((int)uVar1 < iVar5) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(lVar7 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != *(int *)(lVar4 + 0x34))) ||
               ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_143d1d8a4;
            lVar9 = *plVar10;
          }
        }
        if (lVar9 == param_2) {
          *(undefined1 *)(lVar4 + 0x58) = 1;
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  FUN_14619d558(param_1);
  return;
}



// FUNCTION 143d1d8ae FUN_143d1d8ae body=1252 status=ok
// SIG undefined FUN_143d1d8ae(void)

undefined8 FUN_143d1d8ae(longlong param_1,longlong param_2,longlong *param_3,float param_4)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined2 local_d0 [2];
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_b7;
  undefined4 uStack_b3;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*param_3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar16 = param_3[1];
  if ((lVar16 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar16);
  }
  uStack_c8 = (undefined4)param_3[2];
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_c0 = (undefined4)param_3[3];
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0x1c);
  uStack_b7 = *(undefined4 *)((longlong)param_3 + 0x21);
  uStack_b3 = *(undefined4 *)((longlong)param_3 + 0x25);
  uStack_b8 = (undefined1)((uint)*(undefined4 *)((longlong)param_3 + 0x1d) >> 0x18);
  if ((*(longlong *)(param_1 + 0x30) != 0) && (lVar8 = FUN_1447210f0(), lVar8 != 0)) {
    if (DAT_14c950c29 == 1) {
      if (*(longlong *)(param_2 + 0x38) == 0) goto LAB_143d1dc85;
      FUN_1456cec3c();
    }
    lVar12 = *(longlong *)(param_2 + 0x38);
    if (lVar12 != 0) {
      lVar9 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x50))();
      if ((longlong)*(int *)(lVar9 + 0x48) != 0) {
        lVar13 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(lVar9 + 0x40) + lVar13);
          if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x30) == lVar12)) goto LAB_143d1dc85;
          lVar13 = lVar13 + 0x10;
        } while ((longlong)*(int *)(lVar9 + 0x48) * 0x10 != lVar13);
      }
      if (*(char *)(param_2 + 0x110) == '\x01') {
        param_2 = param_2 + 0x58;
LAB_143d1d9dd:
        if (param_2 != 0) {
          FUN_140a702f6(&local_a8,lVar8);
          plVar15 = (longlong *)CONCAT44(uStack_9c,local_a0);
          if (plVar15 != (longlong *)0x0) {
            iVar7 = (int)plVar15[1];
            do {
              if (iVar7 == 0) {
                plVar15 = (longlong *)0x0;
                break;
              }
              LOCK();
              iVar14 = (int)plVar15[1];
              bVar17 = iVar7 == iVar14;
              if (bVar17) {
                *(int *)(plVar15 + 1) = iVar7 + 1;
                iVar14 = iVar7;
              }
              iVar7 = iVar14;
              UNLOCK();
            } while (!bVar17);
            LOCK();
            piVar1 = (int *)((longlong)CONCAT44(uStack_9c,local_a0) + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_9c,local_a0) + 0x10))();
            }
            if (plVar15 != (longlong *)0x0) {
              if (local_a8 != 0) {
                cVar6 = FUN_14105eeda(local_a8,param_2,*(undefined8 *)(param_1 + 0x30),0);
                if (cVar6 == '\0') {
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
                  goto LAB_143d1dc85;
                }
                if (param_2 != param_1 + 0x850) {
                  FUN_145cc3246(param_1 + 0x850,param_2);
                }
              }
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
        }
      }
      else {
        param_2 = *(longlong *)(param_1 + 0xc0);
        if ((param_2 != 0) && (*(char *)(param_2 + 0x6e0) == '\x01')) {
          param_2 = param_2 + 0x628;
          goto LAB_143d1d9dd;
        }
      }
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(lVar12);
      }
      bVar5 = DAT_14c950c29;
      *(longlong *)(param_1 + 0x778) = lVar12;
      if ((bVar5 & 1) != 0) {
        if (lVar16 == 0) {
          lVar16 = 0;
        }
        else {
          FUN_1456cec3c(lVar16);
        }
      }
      *(longlong *)(param_1 + 0x780) = lVar16;
      *(ulonglong *)(param_1 + 0x788) = CONCAT44(uStack_c4,uStack_c8);
      *(ulonglong *)(param_1 + 0x790) = CONCAT44(uStack_bc,uStack_c0);
      *(ulonglong *)(param_1 + 0x791) = CONCAT17(uStack_b8,CONCAT43(uStack_bc,uStack_c0._1_3_));
      *(ulonglong *)(param_1 + 0x799) = CONCAT44(uStack_b3,uStack_b7);
      if ((param_4 != 0.0) || (NAN(param_4))) {
        if (*(longlong *)(lVar8 + 0x1f0) == 0) {
          puVar10 = (undefined8 *)(lVar8 + 0x458);
        }
        else {
          puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0x1f0) + 0xf0);
        }
        uVar11 = *puVar10;
        lVar16 = *(longlong *)(param_1 + 0x30);
        local_e0 = (undefined8 *)0x0;
        local_d8 = 0;
        FUN_1446efa72(&local_e0,0,3,0x10);
        puVar10 = local_e0;
        local_d8 = 3;
        *local_e0 = &PTR_LAB_14a1c8830;
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
        local_e0[2] = lVar12;
        *local_e0 = &PTR_FUN_14b3fb470;
        local_e0[3] = 0;
        iVar7 = 0;
        if (lVar16 != 0) {
          uVar3 = *(uint *)(lVar16 + 0xc);
          *(uint *)(local_e0 + 3) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar16 = 0;
          }
          iVar7 = *(int *)(lVar16 + 0x10);
          if (*(int *)(lVar16 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar14 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar14);
            }
            LOCK();
            iVar7 = *(int *)(lVar16 + 0x10);
            bVar17 = iVar7 == 0;
            if (bVar17) {
              *(int *)(lVar16 + 0x10) = iVar14;
              iVar7 = 0;
            }
            UNLOCK();
            if (bVar17) {
              iVar7 = iVar14;
            }
          }
        }
        *(int *)((longlong)puVar10 + 0x1c) = iVar7;
        puVar10[4] = param_1;
        local_a8 = 0;
        local_a0 = 0;
        FUN_14487d8d8(&local_a8,&local_e0);
        local_68 = 1;
        local_e8 = local_d0;
        local_d0[0] = 0;
        local_cc = 0xbf800000;
        FUN_1406f4044(uVar11,param_1 + 0x7e0,&local_a8,param_4);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_68])(&local_a8);
        if (local_d8 != 0) {
          if (local_e0 == (undefined8 *)0x0) goto LAB_143d1dc5e;
          (**(code **)*local_e0)(local_e0,0);
          FUN_1446efa72(&local_e0,0,0,0x10);
          local_d8 = 0;
        }
        if (local_e0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        FUN_14149acb6(param_1,0);
      }
LAB_143d1dc5e:
      uVar11 = 1;
      goto LAB_143d1dc87;
    }
  }
LAB_143d1dc85:
  uVar11 = 0;
LAB_143d1dc87:
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 143d1dd94 FUN_143d1dd94 body=1155 status=ok
// SIG undefined FUN_143d1dd94(void)

ulonglong FUN_143d1dd94(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_118 [40];
  char local_f0 [16];
  longlong *local_e0;
  int local_c8 [2];
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
  cVar5 = FUN_14149b3c0();
  if (cVar5 != '\0') {
    if (*(longlong *)(param_1 + 0x778) == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*(char *)(param_1 + 0x7a0) != '\0');
    }
    if (param_3 != '\0' || (char)uVar10 != '\0') {
      uVar10 = uVar10 ^ 1;
      goto LAB_143d1dfcb;
    }
    local_f0[0] = '\0';
    local_c8[0] = 0;
    FUN_1456bb102(local_f0,*(undefined8 *)(param_1 + 0x30));
    pfVar12 = &local_c0;
    FUN_1447c3578(param_1 + 0x6f8,pfVar12,local_f0);
    if (local_a0 == 3) {
      uVar6 = 3;
      fVar16 = local_c0;
    }
    else {
      pfVar15 = &local_98;
      FUN_1400b56fe(pfVar15,&local_c0,3);
      fVar16 = 0.0;
      if (local_78 != 0) {
        fVar16 = local_98;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_80) {
          pfVar15 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar2)(pfVar15);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
      }
      uVar6 = (uint)local_a0;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_a8) {
        pfVar12 = (float *)CONCAT44(uStack_bc,local_c0);
      }
      (*pcVar2)(pfVar12);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
    }
    lVar13 = DAT_14c9a3da0;
    lVar11 = (longlong)local_c8[0];
    if (lVar11 != 0) {
      lVar11 = lVar11 + -1;
      lVar14 = lVar11 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
      if (*(longlong *)(lVar13 + lVar14) != 0) {
        FUN_1400020a8();
      }
      lVar13 = DAT_14c9a3da0;
      iVar9 = (int)lVar11;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
      }
      *(undefined4 *)(lVar13 + lVar14) = 0xffffffff;
      iVar7 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar7 = DAT_14c9a3dd0;
      }
      *(int *)(lVar13 + 4 + lVar14) = iVar7;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar8 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar8 = DAT_14c9a3dc0;
      }
      iVar7 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar7 = iVar9;
      }
      bVar4 = (byte)lVar11 & 0x1f;
      DAT_14c9a3dd0 = iVar9;
      *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
           *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_c8[0] = 0;
    }
    if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    if ((fVar16 == 0.0) && (!NAN(fVar16))) {
LAB_143d1df61:
      fVar16 = *(float *)(param_1 + 0x7d8);
      if (0.0 < fVar16) {
        fVar17 = 0.0;
        if (*(longlong *)(param_1 + 0x30) != 0) {
          lVar13 = FUN_1447210f0();
          if (lVar13 != 0) {
            fVar17 = *(float *)(lVar13 + 0x930);
          }
        }
        if (fVar17 < fVar16) goto LAB_143d1dfc9;
      }
      fVar16 = *(float *)(param_2 + 0x114);
      fVar17 = 0.0;
      if (0.0 < fVar16) {
        if (*(longlong *)(param_1 + 0x30) != 0) {
          lVar13 = FUN_1447210f0();
          if (lVar13 != 0) {
            fVar17 = *(float *)(lVar13 + 0x930);
          }
        }
        if (fVar17 < fVar16) goto LAB_143d1dfc9;
      }
      plVar3 = *(longlong **)(param_2 + 0x40);
      uVar10 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
      if (plVar3 != (longlong *)0x0) {
        local_f0[0] = '\0';
        local_c8[0] = 0;
        FUN_1456bb102(local_f0,*(undefined8 *)(param_1 + 0x30));
        uVar6 = (**(code **)(*plVar3 + 0x90))(plVar3,0,local_f0);
        uVar10 = (ulonglong)uVar6;
        FUN_1448173f8(local_c8);
        if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_e0 + 0x10))();
          }
        }
      }
      goto LAB_143d1dfcb;
    }
    if ((*(longlong **)(param_1 + 0x840) != (longlong *)0x0) && (*(int *)(param_1 + 0x83c) != 0)) {
      uVar6 = *(uint *)(param_1 + 0x838);
      uVar10 = 0;
      if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_143d1dfcb;
      lVar13 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      if ((lVar13 != 0) &&
         ((*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0x83c) &&
          ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)))) {
        lVar11 = (**(code **)(**(longlong **)(param_1 + 0x840) + 0x30))();
        cVar5 = FUN_140b038fa(lVar11);
        if (cVar5 != '\0') {
          fVar17 = 0.0;
          if (*(longlong *)(param_1 + 0x30) != 0) {
            lVar13 = FUN_1447210f0();
            if (lVar13 != 0) {
              fVar17 = *(float *)(lVar13 + 0x930);
            }
          }
          if (fVar16 + *(float *)(lVar11 + 0xb8) < fVar17) goto LAB_143d1df61;
        }
      }
    }
  }
LAB_143d1dfc9:
  uVar10 = 0;
LAB_143d1dfcb:
  if ((local_70 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d1e218 FUN_143d1e218 body=310 status=ok
// SIG undefined FUN_143d1e218(void)

void FUN_143d1e218(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_20 = 3;
  if (DAT_14c950c29 == '\x01') {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1456cec3c();
      goto LAB_143d1e255;
    }
LAB_143d1e27f:
    puVar3 = &DAT_14c8464e0;
    local_28 = DAT_14c8464f0;
  }
  else {
LAB_143d1e255:
    local_40 = *(longlong *)(param_1 + 0x30);
    if ((local_40 == 0) || (lVar4 = *(longlong *)(local_40 + 0x1c8), lVar4 == 0))
    goto LAB_143d1e27f;
    puVar3 = (undefined8 *)(lVar4 + 0x260);
    local_28 = *(undefined8 *)(lVar4 + 0x270);
  }
  local_38 = *(undefined4 *)puVar3;
  uStack_34 = *(undefined4 *)((longlong)puVar3 + 4);
  uStack_30 = *(undefined4 *)(puVar3 + 1);
  uStack_2c = *(undefined4 *)((longlong)puVar3 + 0xc);
  local_48 = 0;
  if ((((*(longlong *)(param_1 + 0x7f8) != 0) && (*(int *)(param_1 + 0x7f4) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x7f0), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)) &&
      ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x7f4) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))))) {
    cVar2 = FUN_143d1dd94(param_1,param_1 + 0x408,0);
    if (cVar2 != '\0') {
      cVar2 = FUN_143d1d8ae(param_1,param_1 + 0x408,&local_48,0);
      if (cVar2 != '\0') goto LAB_143d1e2f4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
LAB_143d1e2f4:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d1ef6a FUN_143d1ef6a body=69 status=ok
// SIG undefined FUN_143d1ef6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1ef6a(void)

{
  _DAT_14cb78bf8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1efac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78c00,1);
  return;
}



// FUNCTION 143d1efaf FUN_143d1efaf body=69 status=ok
// SIG undefined FUN_143d1efaf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1efaf(void)

{
  _DAT_14cb78c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1eff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78c10,1);
  return;
}



// FUNCTION 143d1eff4 FUN_143d1eff4 body=69 status=ok
// SIG undefined FUN_143d1eff4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1eff4(void)

{
  _DAT_14cb78c18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78c20,1);
  return;
}



// FUNCTION 143d1f039 FUN_143d1f039 body=69 status=ok
// SIG undefined FUN_143d1f039(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f039(void)

{
  _DAT_14cb78c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f07b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78c38,1);
  return;
}



// FUNCTION 143d1f07e FUN_143d1f07e body=69 status=ok
// SIG undefined FUN_143d1f07e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f07e(void)

{
  _DAT_14cb78c40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78c48,1);
  return;
}



// FUNCTION 143d1f0c3 FUN_143d1f0c3 body=69 status=ok
// SIG undefined FUN_143d1f0c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f0c3(void)

{
  _DAT_14cb78c58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f105. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78c60,1);
  return;
}



// FUNCTION 143d1f11a FUN_143d1f11a body=166 status=ok
// SIG undefined FUN_143d1f11a(void)

undefined8 FUN_143d1f11a(longlong *param_1,longlong *param_2,double *param_3,longlong param_4)

{
  float fVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [24];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2[0x7a] == param_4) {
    uVar2 = CONCAT71((int7)(local_20 >> 8),1);
  }
  else {
    (**(code **)(*param_2 + 0x588))(param_2,&local_38,local_50);
    fVar1 = *(float *)(*param_1 + 0x1c);
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 >> 8),
                     (float)((local_28 - param_3[2]) * (local_28 - param_3[2]) +
                            (local_38 - *param_3) * (local_38 - *param_3) +
                            (local_30 - param_3[1]) * (local_30 - param_3[1])) <= fVar1 * fVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d1f1c2 FUN_143d1f1c2 body=417 status=ok
// SIG undefined FUN_143d1f1c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f1c2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  uint local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar2 = FUN_14654bd54(DAT_14c951640);
    *(longlong *)(param_1 + 0x48) = lVar2;
    *(longlong *)(lVar2 + 0x28) = param_1;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x48) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    FUN_1447f71cc(lVar2,0x40000000);
    LOCK();
    _DAT_14cb78cc0 = _DAT_14cb78cc0 + 1;
    UNLOCK();
    puVar3 = (undefined8 *)FUN_148837fd6(DAT_14cb78cb8);
    LOCK();
    _DAT_14cb78cc0 = _DAT_14cb78cc0 + 1;
    UNLOCK();
    if (puVar3 != (undefined8 *)0x0) {
      do {
        local_50 = puVar3[2];
        FUN_1412e98ba(param_1 + 0xe0,&local_34,&local_50);
        *(undefined1 *)(*(longlong *)(param_1 + 0xe0) + 0x29 + (longlong)local_34 * 0x38) = 1;
        FUN_1412e97a0(param_1);
        puVar3 = (undefined8 *)FUN_148837fd6(*puVar3);
      } while (puVar3 != (undefined8 *)0x0);
    }
    LOCK();
    UNLOCK();
    LOCK();
    _DAT_14cb78cc0 = _DAT_14cb78cc0 + -2;
    UNLOCK();
    if (*(char *)(param_1 + 0xd8) == '\0') {
      FUN_148831ae0(&local_50);
      uVar4 = (ulonglong)local_40;
      if ((-1 < (int)local_40) && ((int)local_40 < local_48)) {
        do {
          FUN_148832372(param_1,*(undefined8 *)(local_50 + (uVar4 & 0xffffffff) * 8));
          uVar4 = (longlong)(int)local_40;
          do {
            uVar5 = uVar4;
            uVar4 = uVar5 + 1;
            local_40 = (uint)uVar4;
            if ((longlong)local_48 <= (longlong)uVar4) break;
          } while (*(longlong *)(local_50 + uVar4 * 8) == 0);
        } while ((-2 < (longlong)uVar5) && ((int)local_40 < local_48));
      }
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d1f364 FUN_143d1f364 body=335 status=ok
// SIG undefined FUN_143d1f364(void)

void FUN_143d1f364(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x38);
  if (0 < (longlong)uVar5) {
    iVar6 = -*(int *)(param_1 + 0x38);
    lVar7 = uVar5 * 8;
    do {
      lVar7 = lVar7 + -8;
      lVar1 = *(longlong *)(param_1 + 0x30);
      (**(code **)(*param_2 + 0x88))(param_2,lVar1 + lVar7,0,0);
      if (*(longlong *)(lVar1 + -8 + uVar5 * 8) == 0) {
        uVar4 = *(uint *)(param_1 + 0x38);
        if (uVar5 != uVar4) {
          iVar3 = iVar6 + uVar4;
          if (0 < (int)(iVar6 + uVar4)) {
            iVar3 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x30) + uVar5 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0x30) + (longlong)(int)(uVar4 - iVar3) * 8),
                  (longlong)iVar3 << 3);
          uVar4 = *(uint *)(param_1 + 0x38);
        }
        *(uint *)(param_1 + 0x38) = uVar4 - 1;
      }
      iVar6 = iVar6 + 1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  uVar5 = (ulonglong)*(int *)(param_1 + 0x48);
  if (0 < (longlong)uVar5) {
    iVar6 = -*(int *)(param_1 + 0x48);
    lVar7 = uVar5 * 8;
    do {
      lVar7 = lVar7 + -8;
      lVar1 = *(longlong *)(param_1 + 0x40);
      (**(code **)(*param_2 + 0x88))(param_2,lVar1 + lVar7,0,0);
      if (*(longlong *)(lVar1 + -8 + uVar5 * 8) == 0) {
        uVar4 = *(uint *)(param_1 + 0x48);
        if (uVar5 != uVar4) {
          iVar3 = iVar6 + uVar4;
          if (0 < (int)(iVar6 + uVar4)) {
            iVar3 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x40) + uVar5 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0x40) + (longlong)(int)(uVar4 - iVar3) * 8),
                  (longlong)iVar3 << 3);
          uVar4 = *(uint *)(param_1 + 0x48);
        }
        *(uint *)(param_1 + 0x48) = uVar4 - 1;
      }
      iVar6 = iVar6 + 1;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 143d1f50e FUN_143d1f50e body=8 status=ok
// SIG undefined FUN_143d1f50e(void)

longlong FUN_143d1f50e(longlong param_1)

{
  return param_1 + 0x1c8;
}



// FUNCTION 143d1f516 FUN_143d1f516 body=69 status=ok
// SIG undefined FUN_143d1f516(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f516(void)

{
  _DAT_14cb78d28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78d30,1);
  return;
}



// FUNCTION 143d1f55b FUN_143d1f55b body=69 status=ok
// SIG undefined FUN_143d1f55b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f55b(void)

{
  _DAT_14cb78d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f59d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78d40,1);
  return;
}



// FUNCTION 143d1f5a0 FUN_143d1f5a0 body=69 status=ok
// SIG undefined FUN_143d1f5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f5a0(void)

{
  _DAT_14cb78d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f5e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78d50,1);
  return;
}



// FUNCTION 143d1f5e5 FUN_143d1f5e5 body=69 status=ok
// SIG undefined FUN_143d1f5e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f5e5(void)

{
  _DAT_14cb78d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78d60,1);
  return;
}



// FUNCTION 143d1f62a FUN_143d1f62a body=69 status=ok
// SIG undefined FUN_143d1f62a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f62a(void)

{
  _DAT_14cb78d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78d70,1);
  return;
}



// FUNCTION 143d1f66f FUN_143d1f66f body=69 status=ok
// SIG undefined FUN_143d1f66f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f66f(void)

{
  _DAT_14cb78d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78d80,1);
  return;
}



// FUNCTION 143d1f6b4 FUN_143d1f6b4 body=69 status=ok
// SIG undefined FUN_143d1f6b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f6b4(void)

{
  _DAT_14cb78d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f6f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78d90,1);
  return;
}



// FUNCTION 143d1f6f9 FUN_143d1f6f9 body=69 status=ok
// SIG undefined FUN_143d1f6f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f6f9(void)

{
  _DAT_14cb78d98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f73b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78da0,1);
  return;
}



// FUNCTION 143d1f73e FUN_143d1f73e body=69 status=ok
// SIG undefined FUN_143d1f73e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d1f73e(void)

{
  _DAT_14cb78da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d1f780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb78db0,1);
  return;
}



// FUNCTION 143d1f788 FUN_143d1f788 body=164 status=ok
// SIG undefined FUN_143d1f788(void)

void FUN_143d1f788(void)

{
  longlong *plVar1;
  
  if (DAT_14cb7bcd0 != 0) {
    plVar1 = &DAT_14cb7bcf0;
    if (DAT_14cb7bce0 != (longlong *)0x0) {
      plVar1 = DAT_14cb7bce0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7bc90 != 0) {
    plVar1 = &DAT_14cb7bcb0;
    if (DAT_14cb7bca0 != (longlong *)0x0) {
      plVar1 = DAT_14cb7bca0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (DAT_14cb7bc70 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7bc60 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7bc50 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb7bc40 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d1f82c FUN_143d1f82c body=41 status=ok
// SIG undefined FUN_143d1f82c(void)

void FUN_143d1f82c(void)

{
  DAT_14cb78e30 = 0;
  if (DAT_14cb78e28 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65a9e();
  return;
}



// FUNCTION 143d1f93e FUN_143d1f93e body=748 status=ok
// SIG undefined FUN_143d1f93e(void)

void FUN_143d1f93e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_2a8 [40];
  longlong local_280;
  undefined8 local_278;
  ulonglong local_270;
  undefined8 local_268;
  undefined8 local_260;
  longlong local_258;
  ulonglong uStack_250;
  undefined4 *local_248;
  char **local_240;
  int local_234;
  char *local_230;
  undefined4 local_228;
  undefined1 local_224;
  longlong local_b8 [4];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  FUN_141601260();
  local_258 = 0;
  uStack_250 = 0;
  local_280 = param_1;
  FUN_14053b7a6(param_1,&local_258);
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  uVar5 = (uint)uStack_250;
  if ((longlong)(int)(uint)uStack_250 != 0) {
    if ((int)(uint)uStack_250 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)(uint)uStack_250);
    }
    FUN_1417388ac(local_b8,uStack_250 & 0xffffffff);
    iVar3 = 1;
    if (3 < uVar5) {
      uVar5 = (uVar5 | 1) + 0xe;
      iVar3 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
        }
      }
      iVar3 = 1 << ((byte)iVar3 & 0x1f);
    }
    if ((local_70 == 0) || (local_70 < iVar3)) {
      local_70 = iVar3;
      FUN_1415ddb34();
    }
  }
  lVar2 = local_258;
  LOCK();
  *(undefined1 *)(local_280 + 0x391) = 1;
  UNLOCK();
  lVar9 = (longlong)(int)(uint)uStack_250;
  if (lVar9 != 0) {
    lVar8 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar8);
      puVar6 = *(undefined4 **)(lVar1 + 8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = &DAT_14c9485f0;
      }
      if (DAT_14c947fe0 == 0) {
        lVar4 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar4);
        DAT_14c947fe0 = lVar4;
      }
      FUN_140045924(DAT_14c947fe0,&local_278,puVar6,1);
      local_230 = "PreAccum";
      local_228 = 8;
      local_224 = 0;
      uVar5 = FUN_14001a6c0(&local_230,1);
      local_270 = (ulonglong)uVar5;
      local_268 = local_278;
      local_260 = 0;
      FUN_14050fa82(&local_230,&local_270,0);
      local_248 = *(undefined4 **)(lVar1 + 8);
      if (local_248 == (undefined4 *)0x0) {
        local_248 = &DAT_14c9485f0;
      }
      local_240 = &local_230;
      FUN_1401b2bf4(local_b8,&local_234,&local_248,0);
      lVar7 = (longlong)local_234 * 0x1a8 + local_b8[0];
      FUN_1401a53d4(&local_230);
      lVar4 = local_280;
      lVar7 = lVar7 + 0x28;
      if (lVar7 != 0) {
        FUN_14050f264(lVar7,*(undefined8 *)(local_280 + 0x148));
        FUN_140bf525c(lVar4,lVar7,lVar1,1);
        FUN_1403af10e(lVar7);
      }
      lVar8 = lVar8 + 8;
    } while (lVar9 * 8 != lVar8);
  }
  lVar2 = local_280;
  FUN_140394772(local_b8,local_280 + 0x398,local_280 + 0x3a8);
  LOCK();
  *(undefined1 *)(lVar2 + 0x391) = 0;
  UNLOCK();
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1401a5186(local_b8);
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d1fc2c FUN_143d1fc2c body=19 status=ok
// SIG undefined FUN_143d1fc2c(void)

void FUN_143d1fc2c(void)

{
  FUN_148838e0a();
  FUN_14654c870();
  return;
}



// FUNCTION 143d1fc4c FUN_143d1fc4c body=1392 status=ok
// SIG undefined FUN_143d1fc4c(void)

void FUN_143d1fc4c(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  longlong **local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined1 local_80 [8];
  undefined8 *local_78;
  int local_70;
  undefined1 local_64 [4];
  longlong *local_60;
  int local_58;
  longlong *local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_4 + 0x28) == 0) goto LAB_143d2006d;
  lVar6 = FUN_1447210f0(param_2);
  if ((lVar6 == 0) || (lVar6 = FUN_1400f6f32(lVar6), lVar6 == 0)) {
    FUN_140d27df6(0,local_64,param_2);
LAB_143d1fd25:
    if (param_2[0x141] == 0) {
LAB_143d1fe7b:
      local_60 = (longlong *)0x0;
      local_58 = 0;
      FUN_1446efa72(&local_60,0,3,0x10);
      plVar7 = local_60;
      local_58 = 3;
      *local_60 = (longlong)&PTR_LAB_14b3fc260;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_60[2] = lVar11;
      *local_60 = (longlong)&PTR_FUN_14b3fbaf0;
      local_60[3] = 0;
      iVar5 = 0;
      if (param_2 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_2 + 0xc);
        *(uint *)(local_60 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar5 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar5 = *(int *)(lVar6 + 0x10);
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(lVar6 + 0x10) = iVar10;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar5 = iVar10;
          }
        }
      }
      *(int *)((longlong)plVar7 + 0x1c) = iVar5;
      if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
        local_48 = local_60;
        if (local_58 == 0) goto LAB_143d20063;
        if (local_60 == (longlong *)0x0) goto LAB_143d2006d;
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
      }
      else {
        plVar7 = param_2 + 0x138;
        if (*(int *)((longlong)param_2 + 0x9d4) < 1) {
          iVar5 = (int)param_2[0x139];
          iVar10 = (int)param_2[0x13a] + -1;
          *(int *)(param_2 + 0x13a) = iVar10;
          if (iVar10 <= iVar5) {
            iVar10 = iVar5;
            if (0 < iVar5) {
              iVar9 = 0;
              do {
                if (((*(int *)(*plVar7 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                    (plVar2 = *(longlong **)(*plVar7 + (longlong)iVar9 * 0x10),
                    plVar2 == (longlong *)0x0)) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                  FUN_14005b288(plVar7,iVar9);
                  FUN_14005b248(plVar7);
                }
                else {
                  iVar9 = iVar9 + 1;
                }
                iVar10 = (int)param_2[0x139];
              } while (iVar9 < iVar10);
            }
            iVar9 = 2;
            if (2 < iVar10 * 2) {
              iVar9 = iVar10 * 2;
            }
            *(int *)(param_2 + 0x13a) = iVar9;
            if ((iVar9 < iVar5) && (*(int *)((longlong)param_2 + 0x9cc) != iVar10)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
          (**(code **)(*local_60 + 0x38))(local_60,&local_78);
        }
        iVar5 = (int)param_2[0x139];
        *(uint *)(param_2 + 0x139) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0x9cc) < iVar5 + 1U) {
          FUN_1447a71f6(plVar7,iVar5);
        }
        lVar6 = *plVar7;
        lVar11 = (longlong)iVar5 * 0x10;
        *(undefined8 *)(lVar6 + lVar11) = 0;
        *(undefined4 *)(lVar6 + 8 + lVar11) = 0;
        *(longlong **)(lVar6 + lVar11) = local_60;
        local_60 = (longlong *)0x0;
        *(int *)(lVar6 + 8 + lVar11) = local_58;
      }
      local_58 = 0;
      local_48 = local_60;
    }
    else {
      lVar6 = 0;
LAB_143d1fd35:
      FUN_140056680(&local_60,L"GbxEntitlementStrategy_Reward");
      local_78 = (undefined8 *)0x0;
      local_70 = 0;
      FUN_1446efa72(&local_78,0,3,0x10);
      puVar3 = local_78;
      local_70 = 3;
      *local_78 = &PTR_LAB_14b3e9ca0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_78[2] = lVar8;
      *local_78 = &PTR_FUN_14b3fbb60;
      local_78[3] = 0;
      iVar5 = 0;
      if (param_2 != (longlong *)0x0) {
        uVar1 = *(uint *)((longlong)param_2 + 0xc);
        *(uint *)(local_78 + 3) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar5 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar5 = *(int *)(lVar11 + 0x10);
          bVar12 = iVar5 == 0;
          if (bVar12) {
            *(int *)(lVar11 + 0x10) = iVar10;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar5 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar5;
      local_88 = 1;
      local_90 = 0xffffffff;
      local_98 = &local_60;
      FUN_1413d987a(lVar6,local_80,local_64,&local_78);
      if (local_70 != 0) {
        local_48 = local_60;
        if (local_78 == (undefined8 *)0x0) goto LAB_143d20063;
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        local_70 = 0;
      }
      local_48 = local_60;
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
        local_48 = local_60;
      }
    }
  }
  else {
    lVar6 = *(longlong *)(lVar6 + 0x68);
    FUN_140d27df6(lVar6,local_64,param_2);
    if (lVar6 == 0) goto LAB_143d1fd25;
    if (param_2[0x141] == 0) goto LAB_143d1fe7b;
    iVar5 = FUN_1402d8968(lVar6,local_64);
    if (iVar5 != 0xb) goto LAB_143d1fd35;
    plVar7 = (longlong *)(**(code **)(*param_2 + 0x1058))(param_2);
    FUN_14000bbd8(&local_60,param_4 + 8,0);
    (**(code **)(*plVar7 + 0x10))(plVar7,&local_60,1);
  }
LAB_143d20063:
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143d2006d:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d20218 FUN_143d20218 body=8 status=ok
// SIG undefined FUN_143d20218(void)

undefined4 * FUN_143d20218(void)

{
  return &DAT_14cb790f8;
}



// FUNCTION 143d20220 FUN_143d20220 body=41 status=ok
// SIG undefined FUN_143d20220(void)

void FUN_143d20220(void)

{
  DAT_14cb79180 = 0;
  if (DAT_14cb79178 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65b3c();
  return;
}



// FUNCTION 143d2024e FUN_143d2024e body=41 status=ok
// SIG undefined FUN_143d2024e(void)

void FUN_143d2024e(void)

{
  DAT_14cb79270 = 0;
  if (DAT_14cb79268 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65bda();
  return;
}



// FUNCTION 143d202b5 FUN_143d202b5 body=41 status=ok
// SIG undefined FUN_143d202b5(void)

void FUN_143d202b5(void)

{
  DAT_14cb79378 = 0;
  if (DAT_14cb79370 != 0) {
    FUN_1400020a8();
  }
  FUN_145d71a10();
  return;
}



// FUNCTION 143d202e2 FUN_143d202e2 body=337 status=ok
// SIG undefined FUN_143d202e2(void)

void FUN_143d202e2(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4,
                  undefined1 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0xc) = iVar2;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x10) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)(param_1 + 0x14) = iVar2;
  *(undefined4 *)(param_1 + 0x18) = *param_4;
  *(undefined1 *)(param_1 + 0x1c) = param_5;
  return;
}



// FUNCTION 143d20434 FUN_143d20434 body=166 status=ok
// SIG undefined FUN_143d20434(void)

void FUN_143d20434(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  *(undefined1 *)(param_1 + 0x1d) = 1;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143d2049e;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(param_1 + 0xc) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))))
    {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar4;
      }
      else {
        lVar2 = 0;
      }
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x30) + 0x360);
        goto LAB_143d2049e;
      }
    }
  }
  uVar3 = 0;
LAB_143d2049e:
  lVar2 = FUN_140149a73(uVar3,0);
  if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0x160) != (longlong *)0x0)) {
    lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x160) + 0x88))();
    if (lVar2 != 0) {
      FUN_141467c9c(lVar2);
      return;
    }
  }
  return;
}



// FUNCTION 143d204ee FUN_143d204ee body=436 status=ok
// SIG undefined FUN_143d204ee(void)

char FUN_143d204ee(int *param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_1;
  if ((iVar1 != DAT_14cb7bb50) || (cVar2 = '\x01', param_1[2] != DAT_14cb7bb54._4_4_)) {
    if ((iVar1 == DAT_14cb7bb20) && (param_1[2] == DAT_14cb7bb24._4_4_)) {
      cVar2 = '\x02';
    }
    else if ((iVar1 == DAT_14cb7bb38) && (param_1[2] == DAT_14cb7bb3c._4_4_)) {
      cVar2 = '\x03';
    }
    else if ((iVar1 == DAT_14cb79478) && (param_1[2] == DAT_14cb79480)) {
      cVar2 = '\x04';
    }
    else if ((iVar1 == DAT_14cb79490) && (param_1[2] == DAT_14cb79498)) {
      cVar2 = '\x05';
    }
    else if ((iVar1 != DAT_14cb7bb68) || (cVar2 = '\x06', param_1[2] != DAT_14cb7bb6c._4_4_)) {
      if ((iVar1 == DAT_14cb794a8) && (param_1[2] == DAT_14cb794b0)) {
        cVar2 = '\a';
      }
      else if ((iVar1 == DAT_14cb794c0) && (param_1[2] == DAT_14cb794c8)) {
        cVar2 = '\b';
      }
      else if ((iVar1 == DAT_14cb794d8) && (param_1[2] == DAT_14cb794e0)) {
        cVar2 = '\t';
      }
      else if ((iVar1 != DAT_14cb7bb80) || (cVar2 = '\n', param_1[2] != DAT_14cb7bb84._4_4_)) {
        if ((iVar1 == DAT_14cb794f0) && (param_1[2] == DAT_14cb794f8)) {
          cVar2 = '\f';
        }
        else if ((iVar1 == DAT_14cb7be10) && (param_1[2] == DAT_14cb7be18)) {
          cVar2 = '\r';
        }
        else {
          cVar2 = '\v';
          if (iVar1 == DAT_14cb7baf0) {
            cVar2 = (param_1[2] == DAT_14cb7baf8) * '\x03' + '\v';
          }
        }
      }
    }
  }
  return cVar2;
}



// FUNCTION 143d206a2 FUN_143d206a2 body=4 status=ok
// SIG undefined FUN_143d206a2(void)

undefined1 FUN_143d206a2(longlong param_1)

{
  return *(undefined1 *)(param_1 + 1);
}



// FUNCTION 143d206b2 FUN_143d206b2 body=123 status=ok
// SIG undefined FUN_143d206b2(void)

int FUN_143d206b2(uint param_1,longlong *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14cb7a548 != DAT_14cb7a574) {
    puVar2 = &DAT_14cb7a578;
    if (DAT_14cb7a678 != (undefined *)0x0) {
      puVar2 = DAT_14cb7a678;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7a680 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      puVar2 = &DAT_14cb79540;
      if (DAT_14cb7a540 != (undefined *)0x0) {
        puVar2 = DAT_14cb7a540;
      }
      do {
        lVar3 = (longlong)iVar1 * 0x20;
        if ((*(longlong *)(puVar2 + lVar3) == *param_2) &&
           (*(longlong *)(puVar2 + lVar3 + 8) == param_2[1])) {
          return iVar1;
        }
        iVar1 = *(int *)(puVar2 + lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 143d207dc FUN_143d207dc body=114 status=ok
// SIG undefined FUN_143d207dc(void)

undefined8 * FUN_143d207dc(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14014e996(param_2,local_40,1,0);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_1400b2348(local_40,param_1,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2088e FUN_143d2088e body=58 status=ok
// SIG undefined FUN_143d2088e(void)

void FUN_143d2088e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14188192c(param_1,iVar1);
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 143d208c8 FUN_143d208c8 body=60 status=ok
// SIG undefined FUN_143d208c8(void)

void FUN_143d208c8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    param_1 = (longlong *)*param_1;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_14654c5d2(param_1,iVar1);
    }
    *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  }
  return;
}



// FUNCTION 143d20904 FUN_143d20904 body=31 status=ok
// SIG undefined FUN_143d20904(void)

undefined8 FUN_143d20904(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d20924 FUN_143d20924 body=31 status=ok
// SIG undefined FUN_143d20924(void)

undefined8 FUN_143d20924(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d209de FUN_143d209de body=108 status=ok
// SIG undefined FUN_143d209de(void)

void FUN_143d209de(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar3 = *param_2;
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x130) == *(longlong *)(*param_1 + 0x28))) &&
     ((*(int *)param_1[1] != 3 || (*(longlong *)(lVar3 + 0x228) == 0)))) {
    plVar4 = (longlong *)param_1[2];
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_14654c74e(plVar4,iVar2);
    }
    lVar5 = *plVar4;
    *(longlong *)(lVar5 + (longlong)iVar2 * 0x18) = lVar3;
    puVar1 = (undefined8 *)(lVar5 + 8 + (longlong)iVar2 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



// FUNCTION 143d20a9c FUN_143d20a9c body=12 status=ok
// SIG undefined FUN_143d20a9c(void)

void FUN_143d20a9c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d20aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d20aa8 FUN_143d20aa8 body=29 status=ok
// SIG undefined FUN_143d20aa8(void)

undefined8 FUN_143d20aa8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d20ac6 FUN_143d20ac6 body=18 status=ok
// SIG undefined FUN_143d20ac6(void)

void FUN_143d20ac6(undefined8 param_1,longlong *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143d20ad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x380))(param_2,0);
  return;
}



// FUNCTION 143d20af0 FUN_143d20af0 body=5 status=ok
// SIG undefined FUN_143d20af0(void)

longlong FUN_143d20af0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143d20b02 FUN_143d20b02 body=29 status=ok
// SIG undefined FUN_143d20b02(void)

undefined8 FUN_143d20b02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d20b36 FUN_143d20b36 body=12 status=ok
// SIG undefined FUN_143d20b36(void)

void FUN_143d20b36(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000143d20b3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(param_2,param_3);
  return;
}



// FUNCTION 143d20b42 FUN_143d20b42 body=5 status=ok
// SIG undefined FUN_143d20b42(void)

longlong FUN_143d20b42(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143d20c3c FUN_143d20c3c body=12 status=ok
// SIG undefined FUN_143d20c3c(void)

void FUN_143d20c3c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d20c45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d20c48 FUN_143d20c48 body=29 status=ok
// SIG undefined FUN_143d20c48(void)

undefined8 FUN_143d20c48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d20cc6 FUN_143d20cc6 body=12 status=ok
// SIG undefined FUN_143d20cc6(void)

void FUN_143d20cc6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d20ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d20cd2 FUN_143d20cd2 body=29 status=ok
// SIG undefined FUN_143d20cd2(void)

undefined8 FUN_143d20cd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d20d1a FUN_143d20d1a body=12 status=ok
// SIG undefined FUN_143d20d1a(void)

void FUN_143d20d1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d20d23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d20d26 FUN_143d20d26 body=29 status=ok
// SIG undefined FUN_143d20d26(void)

undefined8 FUN_143d20d26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d214de FUN_143d214de body=225 status=ok
// SIG undefined FUN_143d214de(void)

void FUN_143d214de(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [44];
  int local_4c;
  longlong local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((char)(*(longlong **)(param_1 + 0x18))[9] != '\0') || (**(longlong **)(param_1 + 0x18) == 0)
      ) && (lVar1 = *(longlong *)(param_1 + 0x10),
           *(int *)(lVar1 + 8) - *(int *)(lVar1 + 0x34) != *(int *)(*(longlong *)(param_1 + 8) + 8))
     ) {
    FUN_14010afec(lVar1,0);
    local_4c = 0;
    plVar2 = *(longlong **)(param_1 + 8);
    if (0 < (int)plVar2[1]) {
      do {
        if ((*(int *)(*plVar2 + (longlong)local_4c * 0x38) != -1) ||
           (**(longlong **)(param_1 + 0x18) != 0)) {
          local_48 = *plVar2 + (longlong)local_4c * 0x38;
          local_40 = &local_4c;
          FUN_140263e2a(*(undefined8 *)(param_1 + 0x10),local_34,&local_48,0);
          plVar2 = *(longlong **)(param_1 + 8);
        }
        local_4c = local_4c + 1;
      } while (local_4c < (int)plVar2[1]);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d215c0 FUN_143d215c0 body=745 status=ok
// SIG undefined FUN_143d215c0(void)

bool FUN_143d215c0(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  iVar3 = *(int *)(lVar11 + 0x54);
  if (iVar3 != param_2) goto LAB_143d21895;
  iVar10 = *(int *)(lVar11 + 0x104);
  iVar9 = *(int *)(*(longlong *)(param_1 + 8) + 8);
  if ((iVar10 != iVar9 || iVar10 == -1) || (iVar9 = iVar10, *(int *)(lVar11 + 0x108) == -1)) {
    *(int *)(lVar11 + 0x104) = iVar9;
    lVar11 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar11 == 0) {
      iVar10 = 0;
    }
    else {
      lVar12 = 0;
      iVar10 = 0;
      do {
        iVar10 = iVar10 + (uint)(byte)(*(int *)(**(longlong **)(param_1 + 8) + lVar12) != -1 |
                                      *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
        lVar12 = lVar12 + 0x38;
      } while (lVar11 * 0x38 - lVar12 != 0);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x108) = iVar10;
  }
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar12 = *(longlong *)(lVar11 + 0x18);
  if (lVar12 != 0) {
    plVar7 = *(longlong **)(lVar12 + 0x10);
    bVar5 = true;
    if (plVar7 == (longlong *)0x0) {
LAB_143d217af:
      uVar8 = 0;
      plVar7 = (longlong *)0x0;
    }
    else {
      iVar10 = (int)plVar7[1];
      do {
        if (iVar10 == 0) goto LAB_143d217af;
        LOCK();
        iVar9 = (int)plVar7[1];
        bVar14 = iVar10 == iVar9;
        if (bVar14) {
          *(int *)(plVar7 + 1) = iVar10 + 1;
          iVar9 = iVar10;
        }
        iVar10 = iVar9;
        UNLOCK();
      } while (!bVar14);
      uVar8 = *(undefined8 *)(lVar12 + 8);
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      bVar5 = false;
    }
    puVar4 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x10);
    *puVar4 = uVar8;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000143d217fe;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
joined_r0x000143d217fe:
          if (iVar10 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
      }
    }
    if (!bVar5) {
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
    goto LAB_143d21895;
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14ab190a0;
  puVar6[8] = 0;
  *(undefined4 *)(puVar6 + 9) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined8 *)((longlong)puVar6 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar6 + 0x54) = 0;
  puVar6[0xc] = 0;
  *(undefined4 *)(puVar6 + 0xd) = 0;
  *(undefined4 *)(puVar6 + 0xe) = 0xffffffff;
  puVar4 = *(undefined8 **)(lVar11 + 0x10);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ab190c0;
  plVar7[2] = (longlong)puVar6;
  if (puVar6 == (undefined8 *)0x0) {
LAB_143d21788:
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar7 == plVar13) {
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar7 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar10 = *piVar2;
          UNLOCK();
          plVar13 = plVar7;
          goto joined_r0x000143d2184d;
        }
      }
    }
    else {
      puVar4[1] = plVar7;
      if (plVar13 != (longlong *)0x0) goto LAB_143d2186c;
    }
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      puVar6[1] = puVar6;
      if ((longlong *)puVar6[2] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar13 = (longlong *)puVar6[2];
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)plVar13 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar13 + 0x10))();
          }
        }
        puVar6[2] = plVar7;
      }
      LOCK();
      plVar13 = plVar7 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_143d21788;
    }
    puVar6[1] = puVar6;
    *puVar4 = puVar6;
    plVar13 = (longlong *)puVar4[1];
    if (plVar13 != (longlong *)0x0) {
      puVar4[1] = 0;
LAB_143d2186c:
      LOCK();
      plVar7 = plVar13 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar10 = *piVar2;
        UNLOCK();
joined_r0x000143d2184d:
        if (iVar10 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  *(undefined4 *)(puVar6 + 0xe) = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x54);
LAB_143d21895:
  return iVar3 != param_2;
}



// FUNCTION 143d218aa FUN_143d218aa body=231 status=ok
// SIG undefined FUN_143d218aa(void)

void FUN_143d218aa(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar4 = *(longlong **)(param_1 + 8);
  if (0 < (int)plVar4[1]) {
    lVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = *plVar4;
      if (*(int *)(lVar3 + lVar6) != -1) {
        local_58 = (uint *)(lVar3 + lVar6) + 1;
        local_60 = lVar3 + lVar6;
        FUN_140263e2a(param_2,local_4c,&local_60,0);
        uVar1 = *(uint *)(lVar3 + lVar6);
        iVar2 = *(int *)(param_3 + 0x48);
        *(uint *)(param_3 + 0x48) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0x4c) < iVar2 + 1U) {
          FUN_14593fc44(param_3,iVar2);
        }
        lVar3 = *(longlong *)(param_3 + 0x40);
        if (*(longlong *)(param_3 + 0x40) == 0) {
          lVar3 = param_3;
        }
        *(ulonglong *)(lVar3 + (longlong)iVar2 * 8) = ((ulonglong)uVar1 << 0x20) + lVar5;
        plVar4 = *(longlong **)(param_1 + 8);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x38;
    } while (lVar5 < (int)plVar4[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d21992 FUN_143d21992 body=1060 status=ok
// SIG undefined FUN_143d21992(void)

void FUN_143d21992(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 8);
  iVar3 = (int)plVar2[1];
  iVar11 = 0;
  iVar9 = 0;
  if ((longlong)iVar3 != 0) {
    lVar13 = 0;
    iVar9 = 0;
    do {
      iVar9 = iVar9 + (uint)(byte)(*(int *)(*plVar2 + lVar13) != -1 |
                                  *(byte *)(*(longlong *)(param_1 + 0x18) + 0x4d) ^ 1);
      lVar13 = lVar13 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar13 != 0);
  }
  if (param_3 != (longlong *)0x0) {
    iVar11 = (int)param_3[1] - *(int *)((longlong)param_3 + 0x34);
  }
  iVar11 = iVar11 - iVar9;
  local_80 = param_2;
  if (0 < iVar3) {
    local_78 = param_3 + 7;
    lVar13 = 0;
    do {
      iVar3 = *(int *)(*plVar2 + lVar13 * 0x38);
      if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x4d) != '\x01') || (iVar3 != -1)) {
        puVar15 = (uint *)(*plVar2 + lVar13 * 0x38);
        if (iVar3 == -1) {
          FUN_140705884(*(undefined8 *)(param_1 + 0x10),puVar15);
        }
        local_60 = puVar15;
        local_58 = puVar15 + 1;
        FUN_140263e2a(local_80,local_4c,&local_60,0);
        uVar12 = *puVar15;
        if ((param_3 != (longlong *)0x0) && ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)))
        {
          plVar2 = (longlong *)param_3[8];
          if ((longlong *)param_3[8] == (longlong *)0x0) {
            plVar2 = local_78;
          }
          iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_3[9] - 1U & uVar12) * 4);
          if (iVar3 != -1) {
            do {
              lVar10 = *param_3 + (longlong)iVar3 * 0x10;
              if (*(uint *)(*param_3 + (longlong)iVar3 * 0x10) == uVar12) {
                if ((uint *)(lVar10 + 4) != (uint *)0x0 && lVar10 != 0) {
                  if (*(uint *)(lVar10 + 4) != puVar15[1]) {
                    iVar3 = *(int *)(param_4 + 0x48);
                    *(uint *)(param_4 + 0x48) = iVar3 + 1U;
                    if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
                      FUN_14593fc44(param_4,iVar3);
                    }
                    lVar10 = *(longlong *)(param_4 + 0x40);
                    if (*(longlong *)(param_4 + 0x40) == 0) {
                      lVar10 = param_4;
                    }
                    *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) =
                         ((ulonglong)uVar12 << 0x20) + lVar13;
                  }
                  goto LAB_143d21b02;
                }
                break;
              }
              iVar3 = *(int *)(lVar10 + 8);
            } while (iVar3 != -1);
          }
        }
        iVar3 = *(int *)(param_4 + 0x48);
        *(uint *)(param_4 + 0x48) = iVar3 + 1U;
        if (*(uint *)(param_4 + 0x4c) < iVar3 + 1U) {
          FUN_14593fc44(param_4,iVar3);
        }
        lVar10 = *(longlong *)(param_4 + 0x40);
        if (*(longlong *)(param_4 + 0x40) == 0) {
          lVar10 = param_4;
        }
        *(ulonglong *)(lVar10 + (longlong)iVar3 * 8) = ((ulonglong)uVar12 << 0x20) + lVar13;
        iVar11 = iVar11 + 1;
      }
LAB_143d21b02:
      lVar13 = lVar13 + 1;
      plVar2 = *(longlong **)(param_1 + 8);
    } while (lVar13 < (int)plVar2[1]);
  }
  if ((param_3 != (longlong *)0x0) && (0 < iVar11)) {
    puVar15 = (uint *)(param_3 + 2);
    iVar3 = (int)param_3[5];
    if (iVar3 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar9 = 0;
      iVar4 = 0;
    }
    else {
      puVar8 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar8 = puVar15;
      }
      uVar12 = *puVar8;
      if (uVar12 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar9 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_143d21d85;
          iVar9 = iVar9 + 0x20;
          uVar12 = puVar8[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar14 = 0;
        iVar9 = 0;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar4) {
        iVar4 = iVar3;
      }
    }
    if (iVar4 < iVar3) {
      local_68 = local_80 + 7;
      uVar12 = 0xffffffff;
      local_70 = param_3;
      do {
        lVar13 = *param_3;
        if ((int)local_80[1] != *(int *)((longlong)local_80 + 0x34)) {
          uVar5 = *(uint *)(lVar13 + (longlong)iVar4 * 0x10);
          plVar2 = (longlong *)local_80[8];
          if ((longlong *)local_80[8] == (longlong *)0x0) {
            plVar2 = local_68;
          }
          iVar6 = *(int *)((longlong)plVar2 + (ulonglong)((int)local_80[9] - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            do {
              if (*(uint *)(*local_80 + (longlong)iVar6 * 0x10) == uVar5) goto LAB_143d21cf0;
              iVar6 = *(int *)((longlong)iVar6 * 0x10 + *local_80 + 8);
            } while (iVar6 != -1);
          }
        }
        iVar3 = *(int *)(param_5 + 0x28);
        *(uint *)(param_5 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_5 + 0x2c) < iVar3 + 1U) {
          local_78 = (longlong *)CONCAT44(local_78._4_4_,iVar9);
          FUN_1400cc390(param_5,iVar3);
          param_3 = local_70;
          iVar9 = (int)local_78;
        }
        lVar10 = *(longlong *)(param_5 + 0x20);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          lVar10 = param_5;
        }
        *(undefined4 *)(lVar10 + (longlong)iVar3 * 4) =
             *(undefined4 *)(lVar13 + (longlong)iVar4 * 0x10);
        if (iVar11 < 2) break;
        iVar11 = iVar11 + -1;
        iVar3 = (int)param_3[5];
LAB_143d21cf0:
        uVar12 = uVar12 & ~(uint)uVar16;
        puVar8 = (uint *)param_3[4];
        if ((uint *)param_3[4] == (uint *)0x0) {
          puVar8 = puVar15;
        }
        iVar4 = (int)uVar14;
        lVar13 = (longlong)iVar4;
        uVar5 = puVar8[lVar13] & uVar12;
        if (uVar5 == 0) {
          iVar6 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar6 = iVar3 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar4) {
            iVar7 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar5 = puVar8[lVar13 + lVar10 + 1];
            if (uVar5 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar13 == lVar10) goto LAB_143d21d85;
          }
          uVar14 = (ulonglong)(iVar4 + (int)lVar10 + 1);
          uVar12 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar3);
    }
  }
LAB_143d21d85:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d21db8 FUN_143d21db8 body=496 status=ok
// SIG undefined FUN_143d21db8(void)

void FUN_143d21db8(longlong param_1,undefined4 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)**(longlong **)(param_1 + 0x18);
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,4);
    }
    else {
      FUN_14572512c(plVar1,param_2);
    }
  }
  else {
    *param_2 = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[1] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  local_34 = param_2[0xe];
  puVar2 = (ulonglong *)plVar1[1];
  puVar3 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar3) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_34,4);
    }
    else {
      FUN_14572512c(plVar1,&local_34);
    }
  }
  else {
    local_34 = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar3;
  }
  puVar3 = *(undefined4 **)plVar1[1];
  if ((undefined4 *)((undefined8 *)plVar1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(plVar1);
    }
  }
  else {
    param_2[2] = *puVar3;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 4;
  }
  if (0 < (int)param_2[0xe]) {
    lVar4 = 0;
    do {
      puVar3 = *(undefined4 **)(param_2 + 0xc);
      if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
        puVar3 = param_2 + 4;
      }
      local_38 = puVar3[lVar4];
      puVar2 = (ulonglong *)plVar1[1];
      if (puVar2[1] < *puVar2 + 4) {
        if ((*(byte *)((longlong)plVar1 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_38,4);
        }
        else {
          FUN_14572512c(plVar1,&local_38);
        }
      }
      else {
        *puVar2 = *puVar2 + 4;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < (int)param_2[0xe]);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d21faa FUN_143d21faa body=723 status=ok
// SIG undefined FUN_143d21faa(void)

undefined8 FUN_143d21faa(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  int *piVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2,4);
    }
    else {
      FUN_14572512c(plVar5,param_2);
    }
  }
  else {
    *param_2 = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  puVar10 = *(undefined4 **)plVar5[1];
  if ((undefined4 *)((undefined8 *)plVar5[1])[1] < puVar10 + 1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,param_2 + 1,4);
    }
    else {
      FUN_14572512c(plVar5);
    }
  }
  else {
    param_2[1] = *puVar10;
    *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
  }
  local_4c = 0;
  puVar6 = (ulonglong *)plVar5[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar5 + 0x170))(plVar5,&local_4c,4);
    }
    else {
      FUN_14572512c(plVar5,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c <= DAT_14c75f430) {
    piVar1 = param_2 + 2;
    piVar7 = *(int **)plVar5[1];
    if ((int *)((undefined8 *)plVar5[1])[1] < piVar7 + 1) {
      if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,piVar1,4);
      }
      else {
        FUN_14572512c(plVar5,piVar1);
      }
    }
    else {
      *piVar1 = *piVar7;
      *(longlong *)plVar5[1] = *(longlong *)plVar5[1] + 4;
    }
    if (*piVar1 <= DAT_14c75f42c) {
      uVar9 = CONCAT71((uint7)(uint3)((uint)*piVar1 >> 8),1);
      if (0 < local_4c) {
        iVar13 = 0;
        do {
          local_50 = 0;
          puVar6 = (ulonglong *)plVar5[1];
          puVar2 = (uint *)*puVar6 + 1;
          if ((uint *)puVar6[1] < puVar2) {
            if ((*(byte *)((longlong)plVar5 + 0x2a) & 2) == 0) {
              (**(code **)(*plVar5 + 0x170))(plVar5,&local_50,4);
            }
            else {
              FUN_14572512c(plVar5,&local_50);
            }
          }
          else {
            local_50 = *(uint *)*puVar6;
            *puVar6 = (ulonglong)puVar2;
          }
          plVar8 = *(longlong **)(param_1 + 0x10);
          puVar10 = (undefined4 *)(ulonglong)*(uint *)(plVar8 + 1);
          if (*(uint *)(plVar8 + 1) != *(uint *)((longlong)plVar8 + 0x34)) {
            puVar10 = (undefined4 *)(ulonglong)local_50;
            plVar12 = plVar8 + 7;
            if ((longlong *)plVar8[8] != (longlong *)0x0) {
              plVar12 = (longlong *)plVar8[8];
            }
            iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & local_50) * 4);
            if (iVar11 != -1) {
              do {
                lVar3 = *plVar8 + (longlong)iVar11 * 0x10;
                if (*(uint *)(*plVar8 + (longlong)iVar11 * 0x10) == local_50) {
                  puVar10 = (undefined4 *)(ulonglong)CONCAT31((int3)(local_50 >> 8),lVar3 == 0);
                  if ((undefined4 *)(lVar3 + 4) != (undefined4 *)0x0 && lVar3 != 0) {
                    uVar4 = *(undefined4 *)(lVar3 + 4);
                    iVar11 = param_2[0xe];
                    param_2[0xe] = iVar11 + 1U;
                    if ((uint)param_2[0xf] < iVar11 + 1U) {
                      FUN_1400cc390(param_2 + 4,iVar11);
                    }
                    puVar10 = *(undefined4 **)(param_2 + 0xc);
                    if (*(undefined4 **)(param_2 + 0xc) == (undefined4 *)0x0) {
                      puVar10 = param_2 + 4;
                    }
                    puVar10[iVar11] = uVar4;
                  }
                  break;
                }
                iVar11 = *(int *)(lVar3 + 8);
              } while (iVar11 != -1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar13 < local_4c);
        uVar9 = CONCAT71((int7)((ulonglong)puVar10 >> 8),1);
      }
      goto LAB_143d2220b;
    }
  }
  FUN_14572541c(plVar5);
  uVar9 = 0;
LAB_143d2220b:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 143d2227e FUN_143d2227e body=95 status=ok
// SIG undefined FUN_143d2227e(void)

void FUN_143d2227e(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  uVar4 = *param_2 / 2;
  if (*param_2 == -1) {
    uVar4 = 0xffffffff;
  }
  if ((-1 < (int)uVar4) && (lVar2 = *param_1, (int)uVar4 < *(int *)(lVar2 + 0x30))) {
    lVar3 = *(longlong *)(lVar2 + 0x28);
    iVar1 = *(int *)(lVar2 + 0x40);
    *(uint *)(lVar2 + 0x40) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0x44) < iVar1 + 1U) {
      FUN_14050b866((longlong *)(lVar2 + 0x38),iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + (longlong)iVar1 * 8) =
         *(undefined8 *)(lVar3 + (ulonglong)uVar4 * 8);
  }
  return;
}



// FUNCTION 143d22308 FUN_143d22308 body=29 status=ok
// SIG undefined FUN_143d22308(void)

undefined8 FUN_143d22308(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d22326 FUN_143d22326 body=31 status=ok
// SIG undefined FUN_143d22326(void)

undefined8 FUN_143d22326(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d2234a FUN_143d2234a body=29 status=ok
// SIG undefined FUN_143d2234a(void)

undefined8 FUN_143d2234a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d224e6 FUN_143d224e6 body=93 status=ok
// SIG undefined FUN_143d224e6(void)

void FUN_143d224e6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d22544 FUN_143d22544 body=93 status=ok
// SIG undefined FUN_143d22544(void)

void FUN_143d22544(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb470;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d225a2 FUN_143d225a2 body=126 status=ok
// SIG undefined FUN_143d225a2(void)

void FUN_143d225a2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb470;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d22611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d22634 FUN_143d22634 body=279 status=ok
// SIG undefined FUN_143d22634(void)

undefined8 FUN_143d22634(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d22745;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d22745;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d22745:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d226df;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = 1;
        FUN_14149acb6(*(longlong *)(param_1 + 0x20),CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
      }
      goto LAB_143d226df;
    }
  }
  uVar6 = 0;
LAB_143d226df:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2274c FUN_143d2274c body=29 status=ok
// SIG undefined FUN_143d2274c(void)

undefined8 FUN_143d2274c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d228e8 FUN_143d228e8 body=93 status=ok
// SIG undefined FUN_143d228e8(void)

void FUN_143d228e8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d22946 FUN_143d22946 body=93 status=ok
// SIG undefined FUN_143d22946(void)

void FUN_143d22946(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b3fb4e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d229a4 FUN_143d229a4 body=126 status=ok
// SIG undefined FUN_143d229a4(void)

void FUN_143d229a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb4e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d22a13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d22a32 FUN_143d22a32 body=273 status=ok
// SIG undefined FUN_143d22a32(void)

undefined8 FUN_143d22a32(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d22b3d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d22b3d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d22b3d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d22add;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x30) != 0) {
        FUN_143d1e218();
      }
      goto LAB_143d22add;
    }
  }
  uVar6 = 0;
LAB_143d22add:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d22b44 FUN_143d22b44 body=31 status=ok
// SIG undefined FUN_143d22b44(void)

undefined8 FUN_143d22b44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d22b70 FUN_143d22b70 body=29 status=ok
// SIG undefined FUN_143d22b70(void)

undefined8 FUN_143d22b70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d22ba2 FUN_143d22ba2 body=93 status=ok
// SIG undefined FUN_143d22ba2(void)

void FUN_143d22ba2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d22c00 FUN_143d22c00 body=93 status=ok
// SIG undefined FUN_143d22c00(void)

void FUN_143d22c00(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb5c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d22c5e FUN_143d22c5e body=126 status=ok
// SIG undefined FUN_143d22c5e(void)

void FUN_143d22c5e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb5c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d22ccd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d22cdc FUN_143d22cdc body=20 status=ok
// SIG undefined FUN_143d22cdc(void)

undefined1 FUN_143d22cdc(longlong param_1)

{
  FUN_148830290(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143d22cf0 FUN_143d22cf0 body=20 status=ok
// SIG undefined FUN_143d22cf0(void)

undefined1 FUN_143d22cf0(longlong param_1)

{
  FUN_148830290(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143d22d22 FUN_143d22d22 body=83 status=ok
// SIG undefined FUN_143d22d22(void)

undefined8 * FUN_143d22d22(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b3fb710;
  plVar3 = (longlong *)param_1[2];
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



// FUNCTION 143d22d76 FUN_143d22d76 body=335 status=ok
// SIG undefined FUN_143d22d76(void)

undefined8 * FUN_143d22d76(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fb960;
  plVar2 = param_1 + 0x32;
  if (*(int *)(param_1 + 0x33) != 0) {
    puVar1 = (undefined8 *)*plVar2;
    if (puVar1 == (undefined8 *)0x0) goto LAB_143d22dd4;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(plVar2,0,0,0x10);
    *(undefined4 *)(param_1 + 0x33) = 0;
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
LAB_143d22dd4:
  param_1[6] = &PTR_FUN_14b3fa890;
  if (param_1[0x1c] != 0) {
    plVar2 = param_1 + 0x20;
    if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x1e];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0x14] != 0) {
    plVar2 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (*(char *)((longlong)param_1 + 0x39) == '\x01')) {
    FUN_14019e20a(DAT_14c948580,param_1 + 6);
    *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d22eda FUN_143d22eda body=289 status=ok
// SIG undefined FUN_143d22eda(void)

void FUN_143d22eda(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
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
  
  if ((int)param_2[1] != 0x1b) {
    FUN_1446efa72(param_2,0,0x1b,0x10);
    *(undefined4 *)(param_2 + 1) = 0x1b;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb960;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_1 + 0x28);
  puVar1[6] = &PTR_LAB_149e668b0;
  *(undefined2 *)(puVar1 + 7) = 0;
  FUN_1405bceb4(puVar1 + 6);
  puVar1[6] = &PTR_FUN_14b3fa890;
  lVar2 = *(longlong *)(param_1 + 0x40);
  puVar1[8] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1405bd0f8(puVar1 + 10,param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x164);
  uVar4 = *(undefined4 *)(param_1 + 0x168);
  uVar5 = *(undefined4 *)(param_1 + 0x16c);
  uVar6 = *(undefined4 *)(param_1 + 0x170);
  uVar7 = *(undefined4 *)(param_1 + 0x174);
  uVar8 = *(undefined4 *)(param_1 + 0x178);
  uVar9 = *(undefined4 *)(param_1 + 0x17c);
  uVar10 = *(undefined4 *)(param_1 + 0x180);
  uVar11 = *(undefined4 *)(param_1 + 0x184);
  uVar12 = *(undefined4 *)(param_1 + 0x188);
  uVar13 = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((longlong)puVar1 + 0x164) = uVar3;
  *(undefined4 *)(puVar1 + 0x2d) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x16c) = uVar5;
  *(undefined4 *)(puVar1 + 0x2e) = uVar6;
  *(undefined4 *)((longlong)puVar1 + 0x174) = uVar7;
  *(undefined4 *)(puVar1 + 0x2f) = uVar8;
  *(undefined4 *)((longlong)puVar1 + 0x17c) = uVar9;
  *(undefined4 *)(puVar1 + 0x30) = uVar10;
  *(undefined4 *)((longlong)puVar1 + 0x184) = uVar11;
  *(undefined4 *)(puVar1 + 0x31) = uVar12;
  *(undefined4 *)((longlong)puVar1 + 0x18c) = uVar13;
  puVar1[0x32] = 0;
  *(undefined4 *)(puVar1 + 0x33) = 0;
  FUN_1405bcfbc(puVar1 + 0x32,param_1 + 400);
  *(undefined1 *)(puVar1 + 0x35) = *(undefined1 *)(param_1 + 0x1a8);
  puVar1[0x34] = *(undefined8 *)(param_1 + 0x1a0);
  return;
}



// FUNCTION 143d22ffc FUN_143d22ffc body=289 status=ok
// SIG undefined FUN_143d22ffc(void)

void FUN_143d22ffc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
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
  
  if ((int)param_2[1] != 0x1b) {
    FUN_1446efa72(param_2,0,0x1b,0x10);
    *(undefined4 *)(param_2 + 1) = 0x1b;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a78e0f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fb960;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined1 *)(puVar1 + 5) = *(undefined1 *)(param_1 + 0x28);
  puVar1[6] = &PTR_LAB_149e668b0;
  *(undefined2 *)(puVar1 + 7) = 0;
  FUN_1405bceb4(puVar1 + 6);
  puVar1[6] = &PTR_FUN_14b3fa890;
  lVar2 = *(longlong *)(param_1 + 0x40);
  puVar1[8] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1405bd0f8(puVar1 + 10,param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x164);
  uVar4 = *(undefined4 *)(param_1 + 0x168);
  uVar5 = *(undefined4 *)(param_1 + 0x16c);
  uVar6 = *(undefined4 *)(param_1 + 0x170);
  uVar7 = *(undefined4 *)(param_1 + 0x174);
  uVar8 = *(undefined4 *)(param_1 + 0x178);
  uVar9 = *(undefined4 *)(param_1 + 0x17c);
  uVar10 = *(undefined4 *)(param_1 + 0x180);
  uVar11 = *(undefined4 *)(param_1 + 0x184);
  uVar12 = *(undefined4 *)(param_1 + 0x188);
  uVar13 = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)(puVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((longlong)puVar1 + 0x164) = uVar3;
  *(undefined4 *)(puVar1 + 0x2d) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x16c) = uVar5;
  *(undefined4 *)(puVar1 + 0x2e) = uVar6;
  *(undefined4 *)((longlong)puVar1 + 0x174) = uVar7;
  *(undefined4 *)(puVar1 + 0x2f) = uVar8;
  *(undefined4 *)((longlong)puVar1 + 0x17c) = uVar9;
  *(undefined4 *)(puVar1 + 0x30) = uVar10;
  *(undefined4 *)((longlong)puVar1 + 0x184) = uVar11;
  *(undefined4 *)(puVar1 + 0x31) = uVar12;
  *(undefined4 *)((longlong)puVar1 + 0x18c) = uVar13;
  puVar1[0x32] = 0;
  *(undefined4 *)(puVar1 + 0x33) = 0;
  FUN_1405bcfbc(puVar1 + 0x32,param_1 + 400);
  *(undefined1 *)(puVar1 + 0x35) = *(undefined1 *)(param_1 + 0x1a8);
  puVar1[0x34] = *(undefined8 *)(param_1 + 0x1a0);
  return;
}



// FUNCTION 143d2311e FUN_143d2311e body=331 status=ok
// SIG undefined FUN_143d2311e(void)

void FUN_143d2311e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  _LIST_ENTRY *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 0x1b) {
    FUN_1446efa72(param_2 + 1,0,0x1b,0x10);
    param_2[1].LockCount = 0x1b;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a78e0f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fb960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined1 *)&p_Var1->Flags = *(undefined1 *)(param_1 + 0x28);
  *(undefined ***)(p_Var1 + 1) = &PTR_LAB_149e668b0;
  *(undefined2 *)&p_Var1[1].CriticalSection = 0;
  FUN_1405bceb4(p_Var1 + 1);
  *(undefined ***)(p_Var1 + 1) = &PTR_FUN_14b3fa890;
  p_Var3 = *(_LIST_ENTRY **)(param_1 + 0x40);
  p_Var1[1].ProcessLocksList.Flink = p_Var3;
  if ((p_Var3 != (_LIST_ENTRY *)0x0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1405bd0f8(&p_Var1[1].EntryCount,param_1 + 0x50);
  uVar4 = *(undefined4 *)(param_1 + 0x164);
  uVar5 = *(undefined4 *)(param_1 + 0x168);
  uVar6 = *(undefined4 *)(param_1 + 0x16c);
  DVar7 = *(DWORD *)(param_1 + 0x170);
  DVar8 = *(DWORD *)(param_1 + 0x174);
  DVar9 = *(DWORD *)(param_1 + 0x178);
  uVar10 = *(undefined4 *)(param_1 + 0x17c);
  uVar11 = *(undefined4 *)(param_1 + 0x180);
  uVar12 = *(undefined4 *)(param_1 + 0x184);
  uVar13 = *(undefined4 *)(param_1 + 0x188);
  uVar14 = *(undefined4 *)(param_1 + 0x18c);
  *(undefined4 *)&p_Var1[7].ProcessLocksList.Flink = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((longlong)&p_Var1[7].ProcessLocksList.Flink + 4) = uVar4;
  *(undefined4 *)&p_Var1[7].ProcessLocksList.Blink = uVar5;
  *(undefined4 *)((longlong)&p_Var1[7].ProcessLocksList.Blink + 4) = uVar6;
  p_Var1[7].EntryCount = DVar7;
  p_Var1[7].ContentionCount = DVar8;
  p_Var1[7].Flags = DVar9;
  p_Var1[7].CreatorBackTraceIndexHigh = (short)uVar10;
  p_Var1[7].SpareWORD = (short)((uint)uVar10 >> 0x10);
  p_Var1[8].Type = (short)uVar11;
  p_Var1[8].CreatorBackTraceIndex = (short)((uint)uVar11 >> 0x10);
  *(undefined4 *)&p_Var1[8].field_0x4 = uVar12;
  *(undefined4 *)&p_Var1[8].CriticalSection = uVar13;
  *(undefined4 *)((longlong)&p_Var1[8].CriticalSection + 4) = uVar14;
  p_Var1[8].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var1[8].ProcessLocksList.Blink = 0;
  FUN_1405bcfbc(&p_Var1[8].ProcessLocksList,param_1 + 400);
  *(undefined1 *)&p_Var1[8].Flags = *(undefined1 *)(param_1 + 0x1a8);
  uVar2 = *(undefined8 *)(param_1 + 0x1a0);
  p_Var1[8].EntryCount = (int)uVar2;
  p_Var1[8].ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d2324f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d23276 FUN_143d23276 body=23 status=ok
// SIG undefined FUN_143d23276(void)

undefined1 FUN_143d23276(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143d2328e(param_1 + 0x20,param_3);
  return 1;
}



// FUNCTION 143d2328e FUN_143d2328e body=1074 status=ok
// SIG undefined FUN_143d2328e(void)

void FUN_143d2328e(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  void *_Src;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined1 local_128 [4];
  float local_124;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_54;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = *param_1;
  if ((((param_2[0x4e] == 0) && (*(char *)(param_1 + 1) != '\x01')) || (param_2[1] == 0)) ||
     ((((uVar1 = *param_2, (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
       ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 == 0 ||
        ((*(uint *)(lVar6 + 0x10) != param_2[1] || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0))))))
      || (param_1[4] == 0)))) {
    if (param_1[0x2e] != 0 && *(int *)(param_1 + 0x2f) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_168);
    }
    goto LAB_143d23324;
  }
  if (param_2[0x4e] == 0) {
    memset(local_128,0,0x100);
    local_58 = 0xffffffff;
    local_124 = 1.0;
    local_84 = 0xffffffff;
  }
  else {
    _Src = *(void **)(param_2 + 0x4c);
    memcpy(local_128,_Src,0xb8);
    local_70 = *(undefined8 *)((longlong)_Src + 0xb8);
    local_68 = *(undefined8 *)((longlong)_Src + 0xc0);
    uStack_60 = *(undefined8 *)((longlong)_Src + 200);
    local_58 = *(undefined4 *)((longlong)_Src + 0xd0);
    local_54 = *(undefined1 *)((longlong)_Src + 0xd4);
    local_30 = *(undefined8 *)((longlong)_Src + 0xf8);
    local_50 = *(uint *)((longlong)_Src + 0xd8);
    iStack_4c = *(int *)((longlong)_Src + 0xdc);
    uStack_48 = *(undefined4 *)((longlong)_Src + 0xe0);
    uStack_44 = *(undefined4 *)((longlong)_Src + 0xe4);
    local_40 = *(undefined8 *)((longlong)_Src + 0xe8);
    uStack_38 = *(undefined8 *)((longlong)_Src + 0xf0);
  }
  lVar6 = FUN_14485cccc();
  if (iStack_4c == 0) {
LAB_143d236d1:
    bVar7 = false;
  }
  else {
    bVar7 = false;
    if ((-1 < (int)local_50) && (bVar7 = false, (int)local_50 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((local_50 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != iStack_4c || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
      goto LAB_143d236d1;
      bVar7 = *plVar5 != 0;
    }
  }
  bVar7 = (bool)(lVar6 != 0 | bVar7);
  if ((((bVar7) && (local_124 < 1.0)) &&
      ((local_100 != 0.0 ||
       ((((NAN(local_100) || (dStack_f8 != 0.0)) || (NAN(dStack_f8))) ||
        ((local_f0 != 0.0 || (NAN(local_f0))))))))) || (*(char *)(param_1 + 1) == '\x01')) {
    if (((!bVar7 && 1.0 <= local_124) && (local_100 == 0.0)) &&
       (((!NAN(local_100) && (((dStack_f8 == 0.0 && (!NAN(dStack_f8))) && (local_f0 == 0.0)))) &&
        (!NAN(local_f0))))) {
      local_108 = param_1[0x2a];
      local_118 = param_1[0x28];
      uStack_110 = param_1[0x29];
      local_f0 = (double)param_1[0x2a];
      local_100 = (double)param_1[0x28];
      dStack_f8 = (double)param_1[0x29];
      dVar3 = (double)param_1[0x2d] - (double)param_1[0x2a];
      dVar8 = (double)param_1[0x2c] - (double)param_1[0x29];
      dVar4 = (double)param_1[0x2b] - (double)param_1[0x28];
      dVar9 = dVar3 * dVar3 + dVar4 * dVar4 + dVar8 * dVar8;
      if (((dVar9 != 1.0) || (local_e8 = dVar4, local_e0 = dVar8, local_d8 = dVar3, NAN(dVar9))) &&
         (local_e8 = DAT_14c8464e0, local_e0 = DAT_14c8464e8, local_d8 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar9)) {
        local_e8 = 1.0 / SQRT(dVar9);
        local_d8 = dVar3 * local_e8;
        local_e0 = dVar8 * local_e8;
        local_e8 = dVar4 * local_e8;
      }
    }
    plVar5 = (longlong *)param_1[0x2e];
    if (plVar5 != (longlong *)0x0 && *(int *)(param_1 + 0x2f) != 0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,1);
    }
    local_140 = param_1 + 6;
    local_148 = *(undefined1 *)(param_1 + 0x31);
    local_138 = 0;
    FUN_1408f2522(uVar2,param_1[0x30],param_1[4],local_128);
    plVar5 = (longlong *)param_1[0x2e];
    if (plVar5 != (longlong *)0x0 && *(int *)(param_1 + 0x2f) != 0) {
      (**(code **)(*plVar5 + 0x60))(plVar5,2);
    }
  }
LAB_143d23324:
  if ((local_28 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d236d8 FUN_143d236d8 body=792 status=ok
// SIG undefined FUN_143d236d8(void)

void FUN_143d236d8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar3 = param_1[1];
    if (DAT_14cac7648 == 0) {
      local_70 = &local_50;
      local_50 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_143242436;
      local_78 = &LAB_14789ef1f;
      local_80 = &LAB_1417b008f;
      local_88 = L"Engine";
      local_90 = 0x8000000000;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x2b0;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
    }
    if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) ==
        DAT_14cac7648 + 0x30)) {
      uVar5 = *(uint *)((longlong)param_2 + 0xc);
      if ((int)uVar5 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      lVar4 = *param_1;
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar6 = iVar7;
        }
      }
      iVar7 = *(int *)(lVar4 + 0x30);
      *(uint *)(lVar4 + 0x30) = iVar7 + 1U;
      if (*(uint *)(lVar4 + 0x34) < iVar7 + 1U) {
        FUN_148838156(lVar4 + 8,iVar7);
      }
      lVar8 = lVar4 + 8;
      if (*(longlong *)(lVar4 + 0x28) != 0) {
        lVar8 = *(longlong *)(lVar4 + 0x28);
      }
      *(ulonglong *)(lVar8 + (longlong)iVar7 * 8) = CONCAT44(iVar6,uVar5);
      lVar8 = FUN_140288b94();
      if ((*(int *)(lVar8 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
          lVar8 + 0x30)) {
        puVar1 = (uint *)(lVar3 + 0x38);
        local_50 = (code *)0x14a9fa140;
        local_48 = 0x18;
        local_44 = 0;
        uVar5 = FUN_14001a6c0(&local_50,1);
        if (*(longlong *)(lVar3 + 0x48) == 0) {
          *puVar1 = 0;
          iVar6 = 0;
        }
        else {
          uVar2 = *(uint *)(*(longlong *)(lVar3 + 0x48) + 0xc);
          *puVar1 = uVar2;
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar8 = 0;
          }
          iVar6 = *(int *)(lVar8 + 0x10);
          if (*(int *)(lVar8 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar9) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar6 = *(int *)(lVar8 + 0x10);
            bVar9 = iVar6 == 0;
            if (bVar9) {
              *(int *)(lVar8 + 0x10) = iVar7;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar9) {
              iVar6 = iVar7;
            }
          }
        }
        *(int *)(lVar3 + 0x3c) = iVar6;
        *(ulonglong *)(lVar3 + 0x40) = (ulonglong)uVar5;
        (**(code **)(*param_2 + 0xa80))(param_2,puVar1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d23a1c FUN_143d23a1c body=29 status=ok
// SIG undefined FUN_143d23a1c(void)

undefined8 FUN_143d23a1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d23a3a FUN_143d23a3a body=337 status=ok
// SIG undefined FUN_143d23a3a(void)

void FUN_143d23a3a(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  
  param_4 = (longlong *)*param_4;
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x38) = *param_2;
  plVar3 = (longlong *)param_2[1];
  plVar8 = *(longlong **)(lVar2 + 0x40);
  if (plVar8 != plVar3) {
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      plVar8 = *(longlong **)(lVar2 + 0x40);
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
    *(longlong **)(lVar2 + 0x40) = plVar3;
  }
  lVar2 = *param_1;
  FUN_140d27362(lVar2 + 0x48,param_3);
  if ((*(longlong *)(lVar2 + 0x50) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(lVar2 + 0x50) + 0x50));
  }
  bVar5 = DAT_14cb26569;
  lVar4 = *(longlong *)(param_3 + 8);
  *(longlong *)(lVar2 + 0x50) = lVar4;
  if ((lVar4 != 0) && ((bVar5 & 1) != 0)) {
    piVar1 = *(int **)(lVar4 + 0x50);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar7 = 5;
    }
    else {
      if ((char)piVar1[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_143d23ac3;
      }
      iVar7 = 2;
    }
    LOCK();
    piVar1[2] = iVar7;
    UNLOCK();
  }
LAB_143d23ac3:
  *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(param_3 + 0x20);
  if (param_4 != (longlong *)0x0) {
    lVar2 = *param_1;
    lVar4 = *param_4;
    if (*(longlong *)(lVar2 + 0x70) != lVar4) {
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
    *(longlong *)(lVar2 + 0x70) = lVar4;
    if (*(longlong *)(lVar2 + 0x78) != param_4[1]) {
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
    uVar6 = FUN_14477b664();
    uVar6 = FUN_14477b664(uVar6);
    *(undefined8 *)(lVar2 + 0x78) = uVar6;
    *(longlong *)(lVar2 + 0x80) = param_4[2];
  }
  return;
}



// FUNCTION 143d23bb6 FUN_143d23bb6 body=29 status=ok
// SIG undefined FUN_143d23bb6(void)

undefined8 FUN_143d23bb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d23bd4 FUN_143d23bd4 body=68 status=ok
// SIG undefined FUN_143d23bd4(void)

undefined8 * FUN_143d23bd4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fba10;
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



// FUNCTION 143d23c3a FUN_143d23c3a body=29 status=ok
// SIG undefined FUN_143d23c3a(void)

undefined8 FUN_143d23c3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d23dd6 FUN_143d23dd6 body=93 status=ok
// SIG undefined FUN_143d23dd6(void)

void FUN_143d23dd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbaf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d23e34 FUN_143d23e34 body=93 status=ok
// SIG undefined FUN_143d23e34(void)

void FUN_143d23e34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbaf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d23e92 FUN_143d23e92 body=126 status=ok
// SIG undefined FUN_143d23e92(void)

void FUN_143d23e92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc260;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbaf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d23f01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d23f10 FUN_143d23f10 body=106 status=ok
// SIG undefined FUN_143d23f10(void)

void FUN_143d23f10(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 0x1058))(param_2);
    if (lVar1 != 0) {
      plVar2 = (longlong *)(**(code **)(*param_2 + 0x1058))(param_2);
      local_28 = 0;
      uStack_20 = 0;
      (**(code **)(*plVar2 + 8))(plVar2);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d23f7c FUN_143d23f7c body=315 status=ok
// SIG undefined FUN_143d23f7c(void)

undefined8 FUN_143d23f7c(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d240b1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d240b1;
    }
    FUN_140192332(param_1 + 0x18,local_38,0);
    lVar8 = local_38[0];
  }
  else {
LAB_143d240b1:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d24065;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      if (param_2 != (longlong *)0x0) {
        lVar6 = (**(code **)(*param_2 + 0x1058))(param_2);
        if (lVar6 != 0) {
          plVar5 = (longlong *)(**(code **)(*param_2 + 0x1058))(param_2);
          local_38[0] = 0;
          local_38[1] = 0;
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
      uVar7 = 1;
      goto LAB_143d24065;
    }
  }
  uVar7 = 0;
LAB_143d24065:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d240b8 FUN_143d240b8 body=29 status=ok
// SIG undefined FUN_143d240b8(void)

undefined8 FUN_143d240b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d24254 FUN_143d24254 body=93 status=ok
// SIG undefined FUN_143d24254(void)

void FUN_143d24254(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbb60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d242b2 FUN_143d242b2 body=93 status=ok
// SIG undefined FUN_143d242b2(void)

void FUN_143d242b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbb60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d24310 FUN_143d24310 body=126 status=ok
// SIG undefined FUN_143d24310(void)

void FUN_143d24310(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbb60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d2437f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d2438e FUN_143d2438e body=62 status=ok
// SIG undefined FUN_143d2438e(void)

void FUN_143d2438e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143d244e6(&local_10,param_3);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d243ce FUN_143d243ce body=278 status=ok
// SIG undefined FUN_143d243ce(void)

undefined8 FUN_143d243ce(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_143d244de;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d244de;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d244de:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d24492;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d244e6(&local_30,param_3);
      uVar6 = 1;
      goto LAB_143d24492;
    }
  }
  uVar6 = 0;
LAB_143d24492:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d244e6 FUN_143d244e6 body=130 status=ok
// SIG undefined FUN_143d244e6(void)

void FUN_143d244e6(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = *param_2;
  if (*param_1 != 0) {
    plVar1 = (longlong *)FUN_140d1732e(*param_1,&local_14);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x1058))(plVar1);
      if (lVar2 != 0) {
        plVar1 = (longlong *)(**(code **)(*plVar1 + 0x1058))(plVar1);
        local_28 = 0;
        uStack_20 = 0;
        (**(code **)(*plVar1 + 8))(plVar1);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d24576 FUN_143d24576 body=29 status=ok
// SIG undefined FUN_143d24576(void)

undefined8 FUN_143d24576(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d245a8 FUN_143d245a8 body=93 status=ok
// SIG undefined FUN_143d245a8(void)

void FUN_143d245a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbd20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d24606 FUN_143d24606 body=93 status=ok
// SIG undefined FUN_143d24606(void)

void FUN_143d24606(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fbd20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d24664 FUN_143d24664 body=126 status=ok
// SIG undefined FUN_143d24664(void)

void FUN_143d24664(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fbd20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d246d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d246e2 FUN_143d246e2 body=56 status=ok
// SIG undefined FUN_143d246e2(void)

undefined8 FUN_143d246e2(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar2 + 0x68) = 0;
  plVar3 = *(longlong **)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1457e3046(lVar2);
  return 0;
}



// FUNCTION 143d2471a FUN_143d2471a body=56 status=ok
// SIG undefined FUN_143d2471a(void)

undefined8 FUN_143d2471a(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar2 + 0x68) = 0;
  plVar3 = *(longlong **)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = 0;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_1457e3046(lVar2);
  return 1;
}



// FUNCTION 143d24752 FUN_143d24752 body=759 status=ok
// SIG undefined FUN_143d24752(void)

undefined8 FUN_143d24752(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  void *_Src;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_8f8 [32];
  undefined1 local_8d8;
  undefined1 local_8d0;
  ulonglong *local_8c8;
  undefined1 *local_8c0;
  undefined8 local_8b8;
  undefined1 local_8a9;
  undefined8 local_8a8;
  undefined1 local_899;
  longlong local_898 [2];
  void *local_888;
  uint local_880;
  ulonglong local_878;
  ulonglong uStack_870;
  undefined2 *local_868;
  undefined2 *local_860;
  ulonglong *local_858;
  char local_850;
  undefined7 uStack_84f;
  undefined2 local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_8f8;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    uVar1 = *param_1;
    cVar4 = (**(code **)(*param_2 + 0x2b0))(param_2);
    if (cVar4 != '\0') {
      local_8a9 = FUN_14379838e(param_1[1],param_2);
      cVar4 = (**(code **)(*param_2 + 0x2b0))(param_2);
      if (cVar4 != '\0') {
        local_8a8 = uVar1;
        (**(code **)(*param_2 + 0x2d0))(param_2,local_898);
        local_868 = local_848;
        local_850 = '\0';
        local_858 = &local_48;
        local_878 = 0;
        uStack_870 = 0;
        local_860 = local_868;
        FUN_1403de9f2(local_898,&local_878,&DAT_149e01f60,1);
        if ((longlong)(int)uStack_870 != 0) {
          lVar8 = (longlong)(int)uStack_870 << 4;
          bVar5 = false;
          uVar9 = local_878;
          do {
            if (bVar5) {
              if (local_858 <= local_860 + 1) {
                FUN_140213274(&local_868,1);
              }
              *local_860 = 0x2e;
              local_860 = local_860 + 1;
            }
            FUN_144a2b0a4(uVar9,&local_888);
            uVar2 = local_880;
            _Src = local_888;
            iVar6 = local_880 - 1;
            if (local_880 == 0) {
              iVar6 = 0;
            }
            lVar7 = (longlong)iVar6;
            if (local_858 <= local_860 + lVar7) {
              FUN_140213274(&local_868,lVar7);
            }
            puVar3 = local_860;
            if (1 < uVar2) {
              memcpy(local_860,_Src,lVar7 * 2);
              local_860 = puVar3 + lVar7;
            }
            if (local_888 != (void *)0x0) {
              FUN_1400020a8();
            }
            uVar9 = uVar9 + 0x10;
            bVar5 = true;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        *local_860 = 0;
        FUN_140056680(&local_888,local_868);
        FUN_1447a1747(local_878,uStack_870 & 0xffffffff);
        if (local_878 != 0) {
          FUN_1400020a8();
        }
        if (local_850 == '\x01') {
          FUN_1400020a8(local_868);
        }
        FUN_14000bbd8(&local_868,&local_888,0);
        local_878 = local_878 & 0xffffffffffffff00;
        local_8c0 = &local_899;
        local_899 = 0;
        local_8c8 = &local_878;
        local_8d0 = 0;
        local_8d8 = 0;
        local_8b8 = 0;
        FUN_140bc7254(local_8a8,&local_868,local_8a9,0);
        if (CONCAT71(uStack_84f,local_850) != 0) {
          FUN_1400020a8();
        }
        if (local_888 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_898[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_8f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 143d24a4a FUN_143d24a4a body=247 status=ok
// SIG undefined FUN_143d24a4a(void)

ulonglong FUN_143d24a4a(undefined8 *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 != (longlong *)0x0) {
    (**(code **)(*param_2 + 0x2d0))(param_2,&local_40);
    iVar4 = (int)((longlong *)param_1[1])[1];
    if (local_38 == iVar4) {
      bVar8 = true;
      if (1 < local_38) {
        lVar6 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_40 + lVar6);
          uVar3 = (uint)uVar1;
          uVar2 = *(ushort *)(*(longlong *)param_1[1] + lVar6);
          uVar7 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143d24ac6;
            }
            iVar4 = uVar3 - uVar7;
            goto LAB_143d24b01;
          }
          if (uVar1 == 0) break;
LAB_143d24ac6:
          lVar6 = lVar6 + 2;
        }
        iVar4 = 0;
LAB_143d24b01:
        bVar8 = iVar4 == 0;
      }
    }
    else {
      bVar8 = iVar4 + local_38 == 1;
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (bVar8) {
      *(longlong **)*param_1 = param_2;
      uVar5 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d24b42 FUN_143d24b42 body=31 status=ok
// SIG undefined FUN_143d24b42(void)

undefined8 FUN_143d24b42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d24b66 FUN_143d24b66 body=91 status=ok
// SIG undefined FUN_143d24b66(void)

bool FUN_143d24b66(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d24b96;
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
LAB_143d24b96:
  return lVar6 == param_2;
}



// FUNCTION 143d24bfa FUN_143d24bfa body=91 status=ok
// SIG undefined FUN_143d24bfa(void)

bool FUN_143d24bfa(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d24c2a;
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
LAB_143d24c2a:
  return lVar6 == param_2;
}



// FUNCTION 143d24c56 FUN_143d24c56 body=91 status=ok
// SIG undefined FUN_143d24c56(void)

undefined8 FUN_143d24c56(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 200);
  *(uint *)(lVar2 + 200) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xcc) < iVar1 + 1U) {
    FUN_1456b1fa2(lVar2,iVar1);
  }
  lVar3 = *(longlong *)(lVar2 + 0xc0);
  if (*(longlong *)(lVar2 + 0xc0) == 0) {
    lVar3 = lVar2;
  }
  *(undefined4 *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = *param_2;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 143d24cb1 FUN_143d24cb1 body=7109 status=ok
// SIG undefined FUN_143d24cb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d24cb1(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined2 local_b0;
  char *local_a8;
  undefined4 local_a0;
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
  _DAT_14cb78750 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cb78758);
  if (cVar2 == '\0') {
    _DAT_14cb78758 = 0;
    uRam000000014cb78760 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb78768 = 0;
  uRam000000014cb78770 = 0;
  _DAT_14cb78778 = 0;
  DAT_14cb78780 = 0;
  uRam000000014cb78788 = 0;
  FUN_1446ddda2(&DAT_14cb78768,"MapViewSaveData",0);
  atexit((_func_5014 *)&LAB_143d1a220);
  _DAT_14cb78790 = 0;
  uRam000000014cb78798 = 0;
  _DAT_14cb787a0 = 0;
  DAT_14cb787a8 = 0;
  uRam000000014cb787b0 = 0;
  FUN_1446ddda2(&DAT_14cb78790,"HiddenDiscoveryLocationTypes",0);
  atexit((_func_5014 *)&LAB_143d1a231);
  _DAT_14cb787b8 = 0;
  uRam000000014cb787c0 = 0;
  _DAT_14cb787c8 = 0;
  DAT_14cb787d0 = 0;
  uRam000000014cb787d8 = 0;
  FUN_1446ddda2(&DAT_14cb787b8,"HiddenDiscoveryCategories",0);
  atexit((_func_5014 *)&LAB_143d1a242);
  _DAT_14cb787e0 = 0;
  uRam000000014cb787e8 = 0;
  _DAT_14cb787f0 = 0;
  DAT_14cb787f8 = 0;
  uRam000000014cb78800 = 0;
  FUN_1446ddda2(&DAT_14cb787e0,"HiddenDiscoveryPresentationDatas",0);
  atexit((_func_5014 *)&LAB_143d1a253);
  _DAT_14cb78808 = 0;
  uRam000000014cb78810 = 0;
  _DAT_14cb78818 = 0;
  DAT_14cb78820 = 0;
  uRam000000014cb78828 = 0;
  FUN_1446ddda2(&DAT_14cb78808,"HiddenFilters",0);
  atexit((_func_5014 *)&LAB_143d1a264);
  _DAT_14cb78830 = 0;
  uRam000000014cb78838 = 0;
  _DAT_14cb78840 = 0;
  DAT_14cb78848 = 0;
  uRam000000014cb78850 = 0;
  FUN_1446ddda2(&DAT_14cb78830,"SaveId",0);
  atexit((_func_5014 *)&LAB_143d1a275);
  _DAT_14cb7be88 = 0;
  uRam000000014cb7be90 = 0;
  _DAT_14cb7be98 = 0;
  DAT_14cb7bea0 = 0;
  uRam000000014cb7bea8 = 0;
  FUN_1446ddda2(&DAT_14cb7be88,"FODDatas",0);
  atexit((_func_5014 *)&LAB_143d1a286);
  _DAT_14cb78858 = 0;
  uRam000000014cb78860 = 0;
  _DAT_14cb78868 = 0;
  DAT_14cb78870 = 0;
  uRam000000014cb78878 = 0;
  FUN_1446ddda2(&DAT_14cb78858,"LevelName",0);
  atexit((_func_5014 *)&LAB_143d1a297);
  _DAT_14cb78880 = 0;
  uRam000000014cb78888 = 0;
  _DAT_14cb78890 = 0;
  DAT_14cb78898 = 0;
  uRam000000014cb788a0 = 0;
  FUN_1446ddda2(&DAT_14cb78880,"FODDimensionX",0);
  atexit((_func_5014 *)&LAB_143d1a2a8);
  _DAT_14cb788a8 = 0;
  uRam000000014cb788b0 = 0;
  _DAT_14cb788b8 = 0;
  DAT_14cb788c0 = 0;
  uRam000000014cb788c8 = 0;
  FUN_1446ddda2(&DAT_14cb788a8,"FODDimensionY",0);
  atexit((_func_5014 *)&LAB_143d1a2b9);
  _DAT_14cb788d0 = 0;
  uRam000000014cb788d8 = 0;
  _DAT_14cb788e0 = 0;
  DAT_14cb788e8 = 0;
  uRam000000014cb788f0 = 0;
  FUN_1446ddda2(&DAT_14cb788d0,"CompressionType",0);
  atexit((_func_5014 *)&LAB_143d1a2ca);
  _DAT_14cb788f8 = 0;
  uRam000000014cb78900 = 0;
  _DAT_14cb78908 = 0;
  DAT_14cb78910 = 0;
  uRam000000014cb78918 = 0;
  FUN_1446ddda2(&DAT_14cb788f8,"FODData",0);
  atexit((_func_5014 *)&LAB_143d1a2db);
  _DAT_14cb7be60 = 0;
  uRam000000014cb7be68 = 0;
  _DAT_14cb7be70 = 0;
  DAT_14cb7be78 = 0;
  uRam000000014cb7be80 = 0;
  FUN_1446ddda2(&DAT_14cb7be60,"FODSaveVersion",0);
  atexit((_func_5014 *)&LAB_143d1a2ec);
  _DAT_14cb78920 = 0;
  uRam000000014cb78928 = 0;
  _DAT_14cb78930 = 0;
  DAT_14cb78938 = 0;
  uRam000000014cb78940 = 0;
  FUN_1446ddda2(&DAT_14cb78920,"discovered_state",0);
  atexit((_func_5014 *)&LAB_143d1b086);
  _DAT_14cb78948 = 0;
  uRam000000014cb78950 = 0;
  _DAT_14cb78958 = 0;
  DAT_14cb78960 = 0;
  uRam000000014cb78968 = 0;
  FUN_1446ddda2(&DAT_14cb78948,"non_hosted_discovered_state",0);
  atexit((_func_5014 *)&LAB_143d1b097);
  _DAT_14cb78970 = 0;
  uRam000000014cb78978 = 0;
  _DAT_14cb78980 = 0;
  DAT_14cb78988 = 0;
  uRam000000014cb78990 = 0;
  FUN_1446ddda2(&DAT_14cb78970,"location",0);
  atexit((_func_5014 *)&LAB_143d1b0a8);
  _DAT_14cb78998 = 0;
  uRam000000014cb789a0 = 0;
  _DAT_14cb789a8 = 0;
  DAT_14cb789b0 = 0;
  uRam000000014cb789b8 = 0;
  FUN_1446ddda2(&DAT_14cb78998,"state",0);
  atexit((_func_5014 *)&LAB_143d1b0b9);
  _DAT_14cb789c0 = 0;
  uRam000000014cb789c8 = 0;
  _DAT_14cb789d0 = 0;
  DAT_14cb789d8 = 0;
  uRam000000014cb789e0 = 0;
  FUN_1446ddda2(&DAT_14cb789c0,"dlblob",0);
  atexit((_func_5014 *)&LAB_143d1b0ca);
  _DAT_14cb789e8 = 0;
  uRam000000014cb789f0 = 0;
  _DAT_14cb789f8 = 0;
  DAT_14cb78a00 = 0;
  uRam000000014cb78a08 = 0;
  FUN_1446ddda2(&DAT_14cb789e8,"non_hosted_dlblob",0);
  atexit((_func_5014 *)&LAB_143d1b0db);
  local_b8._0_4_ = 0;
  FUN_14153156c(&DAT_14cb78a10,L"gbx.Discovery.UseDiscoveredLocationBlob",&DAT_14c7638dc,
                L"When set uses the blob (fast) method for serializing discovered locations. If not set a human readable array is writen."
               );
  atexit(FUN_143d1b0ec);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb78a20,L"gbx.Discovery.EstimatedSizePerLocation",&DAT_14c7638e0,
                L"Estimaed blob save size per location.");
  atexit(FUN_143d1b131);
  _DAT_14cb78a30 = 0x47efffffe0000000;
  _DAT_14cb78a38 = 0x47efffffe0000000;
  _DAT_14cb78a40 = 0x47efffffe0000000;
  _DAT_14cb78a48 = 0x47efffffe0000000;
  _DAT_14cb78a50 = 0x47efffffe0000000;
  DAT_14cb78a58 = 0x47efffffe0000000;
  _DAT_14cb78a60 = 0x47efffffe0000000;
  _DAT_14cb78a68 = 0x47efffffe0000000;
  local_b8._0_4_ = 0;
  FUN_14153156c(&DAT_14cb78a70,L"gbx.Discovery.EnableSnapWaypointToNavMesh",&DAT_14cb78a80,
                L"When set, if placing a custom waypoint on the map it will snap to the nav mesh if possible."
               );
  atexit(FUN_143d1c859);
  _DAT_14cb78a90 = &LAB_143d1c8e8;
  _DAT_14cb78a98 = 0x4628c000;
  DAT_14cb78a9c = 1;
  DAT_14cb78a88 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78a88;
  atexit((_func_5014 *)&LAB_143d1c8ed);
  _DAT_14cb78ab0 = &LAB_143d1c921;
  _DAT_14cb78ab8 = 0x4628c000;
  DAT_14cb78abc = 1;
  DAT_14cb78aa8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78aa8;
  atexit((_func_5014 *)&LAB_143d1c926);
  _DAT_14cb78ad0 = &LAB_143d1cb0c;
  _DAT_14cb78ad8 = 0x453b8000;
  DAT_14cb78adc = 1;
  DAT_14cb78ac8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78ac8;
  atexit((_func_5014 *)&LAB_143d1cb11);
  DAT_14cb7bd50 = 0;
  _DAT_14cb7bd58 = 0;
  _DAT_14cb7bd60 = 2;
  atexit(FUN_143d1cb45);
  ram0x00014cb78aec = 0;
  FUN_14052b5e0(&DAT_14cb78ae8,"pins_state",0);
  _DAT_14cb78af8 = "pins_state";
  ram0x00014cb78b04 = 0;
  FUN_14052b5e0(&DAT_14cb78b00,"pintype",0);
  _DAT_14cb78b10 = "pintype";
  ram0x00014cb78b1c = 0;
  FUN_14052b5e0(&DAT_14cb78b18,"pintypeindex",0);
  _DAT_14cb78b28 = "pintypeindex";
  ram0x00014cb78b34 = 0;
  FUN_14052b5e0(&DAT_14cb78b30,"pinnedworldname",0);
  _DAT_14cb78b40 = "pinnedworldname";
  ram0x00014cb78b4c = 0;
  FUN_14052b5e0(&DAT_14cb78b48,"pinnecustomwaypointlocation_x",0);
  _DAT_14cb78b58 = "pinnecustomwaypointlocation_x";
  ram0x00014cb78b64 = 0;
  FUN_14052b5e0(&DAT_14cb78b60,"pinnecustomwaypointlocation_y",0);
  _DAT_14cb78b70 = "pinnecustomwaypointlocation_y";
  ram0x00014cb78b7c = 0;
  FUN_14052b5e0(&DAT_14cb78b78,"pinnecustomwaypointlocation_z",0);
  _DAT_14cb78b88 = "pinnecustomwaypointlocation_z";
  ram0x00014cb78b94 = 0;
  FUN_14052b5e0(&DAT_14cb78b90,"pinneddiscoverylocationmetadataname",0);
  _DAT_14cb78ba0 = "pinneddiscoverylocationmetadataname";
  local_a8 = "bone";
  local_a0 = 4;
  local_9c = 0;
  FUN_14001a6c0(&local_a8,1);
  DAT_14cb7bac0 = 0;
  _DAT_14cb7bac8 = 0;
  _DAT_14cb7bad0 = 2;
  atexit(FUN_143d1d338);
  DAT_14cb7bad8 = 0;
  _DAT_14cb7bae0 = 0;
  _DAT_14cb7bae8 = 2;
  atexit(FUN_143d1d369);
  _DAT_14cb78bb0 = 0;
  LOCK();
  DAT_14cb78ba8 = 0;
  UNLOCK();
  atexit((_func_5014 *)&LAB_143d1d8a9);
  FUN_1446f470e(&DAT_14cb78bb8,L"Dodge",1);
  FUN_1446f470e(&DAT_14cb78bc0,L"UserEdge",1);
  _DAT_14cb78be0 = &LAB_143d1e35d;
  _DAT_14cb78be8 = 0x44228000;
  DAT_14cb78bec = 1;
  DAT_14cb78bd8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78bd8;
  atexit((_func_5014 *)&LAB_143d1e362);
  local_b8._0_4_ = 0;
  FUN_14153156c(&DAT_14cb78bf8,L"gbx.PoolDecals",&DAT_14c7638e4,
                L"Whether to recycle impact decals by using a pool.\n0: Disable, 1: Enable");
  atexit(FUN_143d1ef6a);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb78c08,L"gbx.MaxPoolDecals",&DAT_14c7638e8,
                L"Maximum number of decals before they are reused.\n");
  atexit(FUN_143d1efaf);
  local_b8._0_4_ = 0;
  FUN_14153156c(&DAT_14cb78c18,L"gbx.DebugDecalOverlap",&DAT_14cb78c28,
                L"Whether to draw debug overlap test failures.\n0: Disable, 1: Enable");
  atexit(FUN_143d1eff4);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb78c30,L"gbx.DebugDecalOverlapLifeTime",&DAT_14c7638ec,
                L"Lifetime to use for impact decal overlap test debug draw.");
  atexit(FUN_143d1f039);
  local_b8._0_4_ = 0;
  FUN_14153156c(&DAT_14cb78c40,L"gbx.DebugDecalBounds",&DAT_14cb78c50,
                L"Whether to draw decal bounds.\n0: Disable, 1: Enable");
  atexit(FUN_143d1f07e);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb78c58,L"gbx.MaxImpactDecalOverlapTestThickness",&DAT_14c7638f0,
                L"Maximum thickness to use for impact decal overlap test.");
  atexit(FUN_143d1f0c3);
  local_a8 = "GbxEffectsLoading";
  local_a0 = 0x11;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb78c68 = (ulonglong)uVar3;
  FUN_1446f470e(&DAT_14cb78c70,L"GbxEffectsTrace",1);
  FUN_140056680(&DAT_14cb78c78,L"GbxEffectsManager");
  atexit((_func_5014 *)&LAB_143d1f108);
  DAT_14cb78cc8 = 0;
  atexit((_func_5014 *)&LAB_143d1f4bc);
  _DAT_14cb78d10 = &LAB_143d1f4d4;
  _DAT_14cb78d18 = 0x4422999a;
  DAT_14cb78d1c = 1;
  DAT_14cb78d08 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78d08;
  atexit((_func_5014 *)&LAB_143d1f4d9);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb78d28,L"gbx.ImpactEffects.EnableProximityLimit",&DAT_14c7638f8,
                L"Enable proximity limits on impact effects (avoids spawning impacts near other impacts)"
               );
  atexit(FUN_143d1f516);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb78d38,L"gbx.ImpactEffects.ProximityLifeTime",&DAT_14c7638fc,
                L"The number of ticks we should track the proximity of an impact effect for");
  atexit(FUN_143d1f55b);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb78d48,L"gbx.ImpactEffects.ProximityOverlapLimit",&DAT_14c763900,
                L"The amount of proximity overlap that will be tolerated.");
  atexit(FUN_143d1f5a0);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb78d58,L"gbx.ImpactEffects.DefaultProximityRadius",&DAT_14c763904,
                L"A default radius to use when more appropriate effect bounds could not be found");
  atexit(FUN_143d1f5e5);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb78d68,L"gbx.ImpactEffects.ProximityLargeThreshold",&DAT_14c763908,
                L"A threshold indicating when bounds are large (and likely more intersting)");
  atexit(FUN_143d1f62a);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb78d78,L"gbx.ImpactEffects.ProximityLargeOnSmallTuner",&DAT_14c76390c,
                L"An overlap amount that should be used when a large-radius impact overlaps with a small-radius impact"
               );
  atexit(FUN_143d1f66f);
  local_b8._0_4_ = 0;
  FUN_1415c789c(&DAT_14cb78d88,L"gbx.ImpactEffects.ProximitySmallOnLargeTuner",&DAT_14c763910,
                L"An overlap amount that should be used when a small-radius impact overlaps with a large-radius impact"
               );
  atexit(FUN_143d1f6b4);
  local_b8._0_4_ = 0;
  FUN_141471170(&DAT_14cb78d98,L"gbx.ImpactEffects.EnableHardLimit",&DAT_14c763914,
                L"Enable hard limits on the number of impact effects spawned per-frame");
  atexit(FUN_143d1f6f9);
  local_b8 = (undefined *)((ulonglong)local_b8._4_4_ << 0x20);
  FUN_141471170(&DAT_14cb78da8,L"gbx.ImpactEffects.DefaultImpactLimit",&DAT_14c763918,
                L"Default limit on per-frame-per-source usage of an ImpactData for impact effects");
  atexit(FUN_143d1f73e);
  local_a8 = "effects";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb78db8 = (ulonglong)uVar3;
  local_a8 = "size";
  local_a0 = 4;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb78dc0 = (ulonglong)uVar3;
  local_a8 = "default";
  local_a0 = 7;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb78dc8 = (ulonglong)uVar3;
  local_a8 = "damage_type";
  local_a0 = 0xb;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb78dd0 = (ulonglong)uVar3;
  local_a8 = "damagetypeeffects";
  local_a0 = 0x11;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb78dd8 = (ulonglong)uVar3;
  DAT_14cb7bc40 = 0;
  uRam000000014cb7bc48 = 0;
  DAT_14cb7bc50 = 0;
  uRam000000014cb7bc58 = 0;
  DAT_14cb7bc60 = 0;
  uRam000000014cb7bc68 = 0;
  DAT_14cb7bc70 = 0;
  uRam000000014cb7bc78 = 0;
  _DAT_14cb7bc80 = 0xc0;
  DAT_14cb7bc90 = 0;
  DAT_14cb7bca0 = 0;
  DAT_14cb7bcd0 = 0;
  DAT_14cb7bce0 = 0;
  _DAT_14cb7bd10 = 0;
  uRam000000014cb7bd18 = 0;
  _DAT_14cb7bd20 = 0;
  _DAT_14cb7bd28 = 0x3ff0000000000000;
  _DAT_14cb7bd30 = 0x3ff0000000000000;
  _DAT_14cb7bd38 = 0x3ff0000000000000;
  _DAT_14cb7bd40 = 0;
  _DAT_14cb7bd44 = 0x3f800000;
  _DAT_14cb7bd48 = 0;
  atexit(FUN_143d1f788);
  DAT_14cb78e40 = 0;
  _DAT_14cb78e48 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143d23c34;
  local_a8 = &DAT_14011fc1e;
  FUN_146180f1a(&local_a8);
  atexit((_func_5014 *)&LAB_143d1f855);
  _DAT_14cb78ed8 = &LAB_143d1f85a;
  _DAT_14cb78ee0 = 0x444dc000;
  DAT_14cb78ee4 = 1;
  DAT_14cb78ed0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78ed0;
  atexit((_func_5014 *)&LAB_143d1f85f);
  _DAT_14cb78ef8 = &LAB_143d1f893;
  _DAT_14cb78f00 = 0x44251333;
  DAT_14cb78f04 = 1;
  DAT_14cb78ef0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78ef0;
  atexit((_func_5014 *)&LAB_143d1f898);
  _DAT_14cb78f18 = &LAB_143d1f8cc;
  _DAT_14cb78f20 = 0x44228ccd;
  DAT_14cb78f24 = 1;
  DAT_14cb78f10 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78f10;
  atexit((_func_5014 *)&LAB_143d1f8d1);
  DAT_14cb78f30._4_4_ = 0;
  DAT_14cb78f38 = 0;
  FUN_14052b5e0(&DAT_14cb78f30,&DAT_14a178874,0);
  _DAT_14cb78f40 = &DAT_14a178874;
  DAT_14cb78f48._4_4_ = 0;
  DAT_14cb78f50 = 0;
  FUN_14052b5e0(&DAT_14cb78f48,"streaminggroup",0);
  _DAT_14cb78f58 = "streaminggroup";
  DAT_14cb78f60._4_4_ = 0;
  DAT_14cb78f68 = 0;
  FUN_14052b5e0(&DAT_14cb78f60,"bUseBaseStreamingGroup",0);
  _DAT_14cb78f70 = "bUseBaseStreamingGroup";
  DAT_14cb78f78._4_4_ = 0;
  DAT_14cb78f80 = 0;
  FUN_14052b5e0(&DAT_14cb78f78,"unconditionalresponse",0);
  _DAT_14cb78f88 = "unconditionalresponse";
  DAT_14cb78f90._4_4_ = 0;
  DAT_14cb78f98 = 0;
  FUN_14052b5e0(&DAT_14cb78f90,"defaultresponse",0);
  _DAT_14cb78fa0 = "defaultresponse";
  DAT_14cb78fa8._4_4_ = 0;
  DAT_14cb78fb0 = 0;
  FUN_14052b5e0(&DAT_14cb78fa8,"physicalresponses",0);
  _DAT_14cb78fb8 = "physicalresponses";
  DAT_14cb78fc0._4_4_ = 0;
  DAT_14cb78fc8 = 0;
  FUN_14052b5e0(&DAT_14cb78fc0,"response",0);
  _DAT_14cb78fd0 = "response";
  _DAT_14cb78fe0 = &LAB_143d1f905;
  _DAT_14cb78fe8 = 0x44229333;
  DAT_14cb78fec = 1;
  DAT_14cb78fd8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb78fd8;
  atexit((_func_5014 *)&LAB_143d1f90a);
  DAT_14cb78c88 = 0;
  _DAT_14cb78c90 = 0;
  _DAT_14cb78c98 = 2;
  _DAT_14cb78c9c = 0;
  ram0x00014cb78ca4 = 0;
  _DAT_14cb78cac = 0;
  _DAT_14cb78cb0 = 2;
  _DAT_14cb78cb4 = 0;
  _DAT_14cb78cc0 = 0;
  LOCK();
  DAT_14cb78cb8._0_4_ = 0;
  DAT_14cb78cb8._4_4_ = 0;
  UNLOCK();
  atexit(FUN_143d1fc2c);
  _DAT_14cb78ffc = 0;
  _DAT_14cb79000 = 0;
  FUN_14052b5e0(&DAT_14cb78ff8,&DAT_149e377fe,0);
  _DAT_14cb79008 = &DAT_149e377fe;
  _DAT_14cb79014 = 0;
  _DAT_14cb79018 = 0;
  FUN_14052b5e0(&DAT_14cb79010,"payload",0);
  _DAT_14cb79020 = "payload";
  _DAT_14cb7902c = 0;
  DAT_14cb79030 = 0;
  FUN_14052b5e0(&DAT_14cb79028,&DAT_14b3fc248,0);
  _DAT_14cb79038 = &DAT_14b3fc248;
  local_b8 = &DAT_14b3fa630;
  local_b0 = 0;
  FUN_14655db90(&DAT_14cb79040,FUN_14654bf20,"FGbxEntitlementSerialNumber",3);
  atexit((_func_5014 *)&LAB_143d1fc3f);
  _DAT_14cb790b8 = &LAB_143d201bd;
  _DAT_14cb790c0 = 0x461c4000;
  DAT_14cb790c4 = 1;
  DAT_14cb790b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb790b0;
  atexit((_func_5014 *)&LAB_143d201c2);
  _DAT_14cb790d0 = 0;
  uRam000000014cb790d8 = 0;
  _DAT_14cb790e0 = 0;
  DAT_14cb790e8 = 0;
  uRam000000014cb790f0 = 0;
  FUN_1446ddda2(&DAT_14cb790d0,"Character",0);
  atexit((_func_5014 *)&LAB_143d201f6);
  _DAT_14cb790f8 = 0;
  uRam000000014cb79100 = 0;
  _DAT_14cb79108 = 0;
  DAT_14cb79110 = 0;
  uRam000000014cb79118 = 0;
  FUN_1446ddda2(&DAT_14cb790f8,"Specialization",0);
  atexit((_func_5014 *)&LAB_143d20207);
  DAT_14cb79190 = (undefined8 *)0x0;
  _DAT_14cb79198 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0xa00,0);
  lVar6 = 0xf;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0x14;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  _DAT_14cb79198 = _DAT_14cb79198 + 0x10;
  *puVar5 = DAT_14cb79190;
  DAT_14cb79190 = puVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143d2456a;
  local_a8 = &DAT_14011fc1e;
  FUN_1460eabb8();
  atexit((_func_5014 *)&LAB_143d20249);
  DAT_14cb79280 = (undefined8 *)0x0;
  _DAT_14cb79288 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x300,0);
  lVar6 = 0xf;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 6;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  _DAT_14cb79288 = _DAT_14cb79288 + 0x10;
  *puVar5 = DAT_14cb79280;
  DAT_14cb79280 = puVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143d24570;
  local_a8 = &DAT_14011fc1e;
  FUN_1460eb34e(&local_a8);
  atexit((_func_5014 *)&LAB_143d20277);
  _DAT_14cb79318 = &LAB_143d2027c;
  _DAT_14cb79320 = 0x43de1890;
  DAT_14cb79324 = 1;
  DAT_14cb79310 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb79310;
  atexit((_func_5014 *)&LAB_143d20281);
  DAT_14cb79350 = 0;
  DAT_14cb79358 = 0;
  DAT_14cb79330 = 0;
  _DAT_14cb79338 = 0;
  _DAT_14cb7935c = 0xffffffff00000080;
  DAT_14cb79364 = 0;
  DAT_14cb79370 = 0;
  DAT_14cb79378 = 0;
  atexit(FUN_143d202b5);
  ram0x00014cb79384 = 0;
  FUN_14052b5e0(&DAT_14cb79380,"value",0);
  _DAT_14cb79390 = "value";
  ram0x00014cb7939c = 0;
  FUN_14052b5e0(&DAT_14cb79398,"gamedatahandlevalue",0);
  _DAT_14cb793a8 = "gamedatahandlevalue";
  _DAT_14cb793b4 = 0;
  FUN_14052b5e0(&DAT_14cb793b0,"datalayer",0);
  _DAT_14cb793c0 = "datalayer";
  _DAT_14cb793ec = 0;
  FUN_14052b5e0(&DAT_14cb793e8,"Owned",0);
  _DAT_14cb793f8 = "Owned";
  _DAT_14cb79404 = 0;
  FUN_14052b5e0(&DAT_14cb79400,"Owned",0);
  DAT_14cb7be28._0_2_ = 0;
  ram0x00014cb7be2c = 0;
  _DAT_14cb7be38 = 0;
  uRam000000014cb7be40 = 0;
  _DAT_14cb7be48 = 0;
  DAT_14cb7be50 = 0;
  uRam000000014cb7be58 = 0;
  FUN_140c25b54(&DAT_14cb7be28);
  atexit((_func_5014 *)&LAB_143d204dd);
  local_a8 = "alias";
  local_a0 = 5;
  local_9c = 0;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  DAT_14cb79410 = (ulonglong)uVar3;
  _DAT_14cb7bb0c = 0;
  FUN_14052b5e0(&DAT_14cb7bb08,"default",0);
  _DAT_14cb7bb18 = "default";
  _DAT_14cb7bdfc = 0;
  FUN_14052b5e0(&DAT_14cb7bdf8,"definition",0);
  _DAT_14cb7be08 = "definition";
  ram0x00014cb7bde4 = 0;
  FUN_14052b5e0(&DAT_14cb7bde0,"enabled",0);
  _DAT_14cb7bdf0 = "enabled";
  _DAT_14cb7bdcc = 0;
  FUN_14052b5e0(&DAT_14cb7bdc8,"reset",0);
  _DAT_14cb7bdd8 = "reset";
  DAT_14cb7941c = 0;
  FUN_14052b5e0(&DAT_14cb79418,"resetnodestroy",0);
  _DAT_14cb79428 = "resetnodestroy";
  _DAT_14cb79434 = 0;
  FUN_14052b5e0(&DAT_14cb79430,"waypoint",0);
  _DAT_14cb79440 = "waypoint";
  _DAT_14cb7944c = 0;
  FUN_14052b5e0(&DAT_14cb79448,"level",0);
  _DAT_14cb79458 = "level";
  _DAT_14cb7bc2c = 0;
  FUN_14052b5e0(&DAT_14cb7bc28,"disablespawning",0);
  _DAT_14cb7bc38 = "disablespawning";
  DAT_14cb79464 = 0;
  FUN_14052b5e0(&DAT_14cb79460,"killactors",0);
  _DAT_14cb79470 = "killactors";
  DAT_14cb7bb54 = 0;
  FUN_14052b5e0(&DAT_14cb7bb50,"registry",0);
  _DAT_14cb7bb60 = "registry";
  DAT_14cb7bb24 = 0;
  FUN_14052b5e0(&DAT_14cb7bb20,"global",0);
  _DAT_14cb7bb30 = "global";
  DAT_14cb7bb3c = 0;
  FUN_14052b5e0(&DAT_14cb7bb38,"transient",0);
  _DAT_14cb7bb48 = "transient";
  _DAT_14cb7947c = 0;
  FUN_14052b5e0(&DAT_14cb79478,&DAT_14b3fa7e8,0);
  _DAT_14cb79488 = &DAT_14b3fa7e8;
  _DAT_14cb79494 = 0;
  FUN_14052b5e0(&DAT_14cb79490,"gamemode",0);
  _DAT_14cb794a0 = "gamemode";
  DAT_14cb7bb6c = 0;
  FUN_14052b5e0(&DAT_14cb7bb68,"stats",0);
  _DAT_14cb7bb78 = "stats";
  _DAT_14cb794ac = 0;
  FUN_14052b5e0(&DAT_14cb794a8,"entitlement",0);
  _DAT_14cb794b8 = "entitlement";
  _DAT_14cb794c4 = 0;
  FUN_14052b5e0(&DAT_14cb794c0,"unlocks",0);
  _DAT_14cb794d0 = "unlocks";
  _DAT_14cb794dc = 0;
  FUN_14052b5e0(&DAT_14cb794d8,"datalayer",0);
  _DAT_14cb794e8 = "datalayer";
  DAT_14cb7bb84 = 0;
  FUN_14052b5e0(&DAT_14cb7bb80,"missions",0);
  _DAT_14cb7bb90 = "missions";
  _DAT_14cb7bdb4 = 0;
  FUN_14052b5e0(&DAT_14cb7bdb0,&DAT_14b3fc24c,0);
  _DAT_14cb7bdc0 = &DAT_14b3fc24c;
  _DAT_14cb7bbfc = 0;
  FUN_14052b5e0(&DAT_14cb7bbf8,"state",0);
  _DAT_14cb7bc08 = "state";
  _DAT_14cb7bc14 = 0;
  FUN_14052b5e0(&DAT_14cb7bc10,"final",0);
  _DAT_14cb7bc20 = "final";
  DAT_14cb7bbb4 = 0;
  FUN_14052b5e0(&DAT_14cb7bbb0,&DAT_14b3fa7f5,0);
  _DAT_14cb7bbc0 = &DAT_14b3fa7f5;
  DAT_14cb7bd9c = 0;
  FUN_14052b5e0(&DAT_14cb7bd98,"mymission",0);
  _DAT_14cb7bda8 = "mymission";
  DAT_14cb7bbe4 = 0;
  FUN_14052b5e0(&DAT_14cb7bbe0,"mymissionset",0);
  _DAT_14cb7bbf0 = "mymissionset";
  DAT_14cb7bbcc = 0;
  FUN_14052b5e0(&DAT_14cb7bbc8,"primarymission",0);
  _DAT_14cb7bbd8 = "primarymission";
  _DAT_14cb794f4 = 0;
  FUN_14052b5e0(&DAT_14cb794f0,"waypoints",0);
  _DAT_14cb79500 = "waypoints";
  _DAT_14cb7950c = 0;
  FUN_14052b5e0(&DAT_14cb79508,"aliases",0);
  _DAT_14cb79518 = "aliases";
  _DAT_14cb7be14 = 0;
  FUN_14052b5e0(&DAT_14cb7be10,"tasks",0);
  _DAT_14cb7be20 = "tasks";
  _DAT_14cb7baf4 = 0;
  FUN_14052b5e0(&DAT_14cb7baf0,"source",0);
  _DAT_14cb7bb00 = "source";
  _DAT_14cb7beb4 = 0;
  FUN_14052b5e0(&DAT_14cb7beb0,"__nomap",0);
  _DAT_14cb7bec0 = "__nomap";
  _DAT_14cb7becc = 0;
  FUN_14052b5e0(&DAT_14cb7bec8,"__nosub",0);
  _DAT_14cb7bed8 = "__nosub";
  _DAT_14cb7bee4 = 0;
  FUN_14052b5e0(&DAT_14cb7bee0,"__nogroup",0);
  _DAT_14cb7bef0 = "__nogroup";
  _DAT_14cb7befc = 0;
  FUN_14052b5e0(&DAT_14cb7bef8,"__noident",0);
  _DAT_14cb7bf08 = "__noident";
  _DAT_14cb7bf14 = 0;
  FUN_14052b5e0(&DAT_14cb7bf10,"__nochannel",0);
  _DAT_14cb7bf20 = "__nochannel";
  ram0x00014cb7bd6c = 0;
  FUN_14052b5e0(&DAT_14cb7bd68,&DAT_14b3fa85e,0);
  _DAT_14cb7bd78 = &DAT_14b3fa85e;
  ram0x00014cb7bd84 = 0;
  FUN_14052b5e0(&DAT_14cb7bd80,&DAT_14a178874,0);
  _DAT_14cb7bd90 = &DAT_14a178874;
  ram0x00014cb7bb9c = 0;
  FUN_14052b5e0(&DAT_14cb7bb98,&DAT_14b3e7b50,0);
  _DAT_14cb7bba8 = &DAT_14b3e7b50;
  _DAT_14cb79528 = &LAB_143d2072e;
  DAT_14cb79530 = 0x1f;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9aa7f0 = 0x38;
    DAT_14c9aa888 = &LAB_14188176c;
    _DAT_14c9aa8b0 = &LAB_141881790;
    _DAT_14c9aa890 = &LAB_14188179e;
    _DAT_14c9aa898 = FUN_148834e20;
    _DAT_14c9aa8a0 = &LAB_148834e7a;
    _DAT_14c9aa8a8 = FUN_148834e94;
    _DAT_14c9aa810 = FUN_1461feed4;
    _DAT_14c9aa808 = &LAB_14082097c;
    _DAT_14c9aa7f8 = 0x3f800000;
    uRam000000014c9aa7fc = 0x3ee66666;
    uRam000000014c9aa800 = 0x3e23d70a;
    uRam000000014c9aa804 = 0x3f800000;
    DAT_14c9aa880 = 1;
    _DAT_14c9aa8b8 = FUN_143d207dc;
    _DAT_14c9aa8c0 = &LAB_143d2084f;
    _DAT_14c9aa900 = &LAB_143d2086c;
  }
  else {
    _DAT_14cb79520 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14cb79520;
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d26878 FUN_143d26878 body=97 status=ok
// SIG undefined FUN_143d26878(void)

void FUN_143d26878(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)DAT_14cb7bf68 * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar2 = DAT_14cb7bf48;
    if (DAT_14cb7bf60 < 0x19) {
      puVar2 = &DAT_14cb7bf48;
    }
    (*pcVar1)(puVar2);
  }
  if (0x18 < DAT_14cb7bf60) {
    FUN_1400020a8(DAT_14cb7bf48);
    return;
  }
  return;
}



// FUNCTION 143d268da FUN_143d268da body=13 status=ok
// SIG undefined FUN_143d268da(void)

void FUN_143d268da(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == iVar1) {
    return;
  }
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = (longlong)iVar1 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    uVar3 = 0x7fffffff;
    if (iVar1 <= (int)(uVar2 / 0x50)) {
      uVar3 = uVar2 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x50,8);
  }
  return;
}



// FUNCTION 143d268e8 FUN_143d268e8 body=1570 status=ok
// SIG undefined FUN_143d268e8(void)

uint * FUN_143d268e8(longlong *param_1,uint *param_2,uint param_3,longlong param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  size_t sVar7;
  undefined ***pppuVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  byte bVar18;
  bool bVar19;
  undefined1 auStack_1b8 [32];
  char local_198;
  undefined2 local_197;
  char local_195;
  undefined8 local_194;
  uint local_18c;
  code *local_188;
  uint local_180;
  uint local_17c;
  undefined ***local_178;
  undefined8 uStack_170;
  undefined **local_168;
  longlong local_160;
  undefined8 uStack_158;
  undefined1 auStack_14a [2];
  uint local_148;
  undefined2 local_144;
  undefined2 uStack_142;
  undefined4 uStack_140;
  uint local_13c;
  uint local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  longlong local_118;
  undefined8 uStack_110;
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  *(char *)param_2 = '\0';
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (((int)param_3 < 0) || ((int)param_1[1] <= (int)param_3)) goto LAB_143d26afc;
  puVar1 = (uint *)(*param_1 + (ulonglong)param_3 * 0x50);
  cVar3 = *(char *)(*param_1 + (ulonglong)param_3 * 0x50);
  if (cVar3 == '\r') {
    FUN_143d268e8(param_1,&local_148,(int)*(short *)((longlong)puVar1 + 2),param_4);
    if (local_148._0_1_ == (code)0x1) {
      if (local_13c == 0) goto LAB_143d26a56;
    }
    else {
      cVar3 = FUN_140321d1a(&local_148);
      if (cVar3 == '\0') goto LAB_143d26a56;
    }
    *(char *)param_2 = '\x01';
    param_2[3] = 1;
    goto LAB_143d26a87;
  }
  if (cVar3 == '\f') {
    FUN_143d268e8(param_1,&local_148,(int)*(short *)((longlong)puVar1 + 2),param_4);
    if (local_148._0_1_ == (code)0x1) {
      if (local_13c != 0) goto LAB_143d26a56;
LAB_143d26a30:
      *(char *)param_2 = '\x01';
      param_2[3] = 0;
LAB_143d26aa7:
      puVar13 = &DAT_14cb7c580;
    }
    else {
      cVar3 = FUN_140321d1a(&local_148);
      if (cVar3 == '\0') goto LAB_143d26a30;
LAB_143d26a56:
      FUN_143d268e8(param_1,&local_188,(int)(short)puVar1[1],param_4);
      if ((char)local_188 == '\x01') {
        *(char *)param_2 = '\x01';
        param_2[3] = (uint)(local_17c != 0);
        if (local_17c == 0) goto LAB_143d26aa7;
      }
      else {
        bVar18 = FUN_140321d1a(&local_188);
        *(char *)param_2 = '\x01';
        param_2[3] = (uint)bVar18;
        if (bVar18 == 0) goto LAB_143d26aa7;
      }
LAB_143d26a87:
      puVar13 = &DAT_14cb7c588;
    }
    *(undefined8 *)(param_2 + 1) = *puVar13;
  }
  else if (cVar3 == '\0') {
    if (*(short *)((longlong)puVar1 + 2) < 0) {
      local_144 = (undefined2)puVar1[1];
      local_148 = *puVar1;
      local_130 = 0;
      uStack_128 = 0;
      local_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      uStack_140 = (undefined4)*(undefined8 *)(puVar1 + 2);
      local_13c = (uint)((ulonglong)*(undefined8 *)(puVar1 + 2) >> 0x20);
      local_138 = puVar1[4];
      FUN_1447715ec(&local_130,puVar1 + 6);
      local_108 = puVar1[0x10];
      uStack_104 = puVar1[0x11];
      uStack_100 = puVar1[0x12];
      uStack_fc = puVar1[0x13];
      local_178 = (undefined ***)0x0;
      local_168 = &PTR_LAB_14b3fcd50;
      local_188 = FUN_143d3115e;
      local_160 = param_4;
      FUN_14014e388(local_108,&local_148,&local_188);
      if (local_188 != (code *)0x0) {
        pppuVar8 = local_178;
        if (local_178 == (undefined ***)0x0) {
          pppuVar8 = &local_168;
        }
        (*(code *)(*pppuVar8)[2])();
      }
      if (local_130._4_4_ < 1) {
        *param_2 = local_108;
        param_2[1] = uStack_104;
        param_2[2] = uStack_100;
        param_2[3] = uStack_fc;
      }
      else {
        local_168 = (undefined **)((ulonglong)local_168 & 0xffffffff00000000);
        local_178 = (undefined ***)0x0;
        uStack_170 = 0;
        local_160 = 0;
        uStack_158 = 0;
        local_188 = (code *)CONCAT44(local_13c,uStack_140);
        local_180 = local_138;
        FUN_1447715ec(&local_178,&local_130);
        FUN_140d847e0(param_4,&local_188,*(undefined8 *)(param_4 + 0x18));
        local_198 = '\0';
        local_194 = 0;
        local_18c = 0;
        if ((*(longlong **)(param_4 + 0x18) != (longlong *)0x0) &&
           (lVar10 = (**(code **)(**(longlong **)(param_4 + 0x18) + 0x2b0))(), lVar10 != 0)) {
          FUN_14039fc7b(&local_188,&local_198,lVar10,0);
        }
        *(char *)param_2 = local_198;
        *(undefined2 *)((longlong)param_2 + 1) = local_197;
        *(char *)((longlong)param_2 + 3) = local_195;
        *(undefined8 *)(param_2 + 1) = local_194;
        param_2[3] = local_18c;
        if (local_160 != 0) {
          FUN_1400020a8();
        }
      }
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      cVar3 = (char)puVar1[0x10];
      if (cVar3 == '\x03') {
        uVar14 = *(ulonglong *)(puVar1 + 0x11);
      }
      else if (cVar3 == '\x02') {
        uVar6 = puVar1[0x13];
        uVar14 = DAT_14cb7c570;
        if ((uVar6 != 1) && (uVar14 = DAT_14cb7c578, uVar6 != 0)) {
          memset(&local_148,0,0x100);
          FUN_1407bf796(&local_148,0x100,&DAT_149dfc0ac,uVar6);
          sVar7 = strlen((char *)&local_148);
          uVar6 = (uint)sVar7;
          if (uVar6 == 0) {
LAB_143d26f06:
            uVar14 = 0;
            uVar15 = 0;
          }
          else {
            lVar10 = (longlong)(int)uVar6;
            if (&local_148 <= auStack_14a + lVar10 + 1) {
              lVar17 = 0;
              lVar11 = 0;
LAB_143d26e4e:
              if ((byte)(auStack_14a[lVar11 + lVar10 + 1] - 0x30) < 10) goto code_r0x000143d26e5d;
              iVar12 = (int)lVar11;
              if (iVar12 == 0 || (int)uVar6 <= -iVar12) goto LAB_143d26e86;
              lVar17 = 0;
              if (((uint)-iVar12 < 0xb) && (auStack_14a[lVar11 + lVar10 + 1] == '_')) {
                if ((iVar12 != -1) && (*(char *)((longlong)&local_148 + lVar11 + lVar10) == '0'))
                goto LAB_143d26e86;
                lVar16 = 0;
                do {
                  lVar17 = (longlong)*(char *)((longlong)&local_148 + lVar11 + lVar10) + lVar16 * 10
                  ;
                  lVar16 = lVar17 + -0x30;
                  lVar11 = lVar11 + 1;
                } while (lVar11 != 0);
                if (lVar16 < 0x7fffffff) {
                  uVar6 = (uVar6 + iVar12) - 1;
                  lVar17 = lVar17 + -0x2f;
                }
                else {
LAB_143d26e86:
                  lVar17 = 0;
                }
              }
              goto LAB_143d26e89;
            }
            lVar17 = 0;
LAB_143d26e8d:
            local_17c = local_17c & 0xffffff00;
            local_188 = (code *)&local_148;
            local_180 = uVar6;
            uVar6 = FUN_14001a6c0(&local_188,1);
            uVar15 = lVar17 << 0x20;
            uVar14 = (ulonglong)uVar6;
          }
          uVar14 = uVar14 | uVar15;
        }
      }
      else if (cVar3 == '\x01') {
        puVar9 = &DAT_14cb7c580;
        if (puVar1[0x13] != 0) {
          puVar9 = &DAT_14cb7c588;
        }
        uVar14 = *puVar9;
      }
      else {
        uVar14 = 0;
      }
      if (uVar14 == DAT_14cb7bf88) {
        FUN_143d268e8(param_1,&local_148,(int)*(short *)((longlong)puVar1 + 2),param_4);
        if ((local_148 & 0xff) == 3) {
          bVar19 = CONCAT44(uStack_140,CONCAT22(uStack_142,local_144)) == 0;
LAB_143d26d59:
          uVar6 = (uint)!bVar19;
        }
        else {
          uVar6 = local_13c;
          if (((local_148 & 0xff) != 2) && (uVar6 = 0, local_148._0_1_ == (code)0x1)) {
            bVar19 = local_13c == 0;
            goto LAB_143d26d59;
          }
        }
        FUN_143d268e8(param_1,&local_148,(int)(short)puVar1[1],param_4);
        if ((local_148 & 0xff) == 3) {
          bVar19 = CONCAT44(uStack_140,CONCAT22(uStack_142,local_144)) == 0;
LAB_143d26da2:
          uVar4 = (uint)!bVar19;
        }
        else {
          uVar4 = local_13c;
          if (((local_148 & 0xff) != 2) && (uVar4 = 0, local_148._0_1_ == (code)0x1)) {
            bVar19 = local_13c == 0;
            goto LAB_143d26da2;
          }
        }
        iVar12 = uVar4 - uVar6;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else {
          uVar4 = rand();
          iVar5 = (int)((float)(iVar12 + 1) * ((float)(uVar4 & 0x7fff) / 32767.0));
          if (iVar5 < iVar12) {
            iVar12 = iVar5;
          }
        }
        *(char *)param_2 = '\x02';
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = iVar12 + uVar6;
      }
    }
  }
  else {
    FUN_143d268e8(param_1,&local_148,(int)(short)puVar1[1],param_4);
    FUN_143d268e8(param_1,&local_188,(int)*(short *)((longlong)puVar1 + 2),param_4);
    FUN_140321208(param_2,(char)*puVar1,&local_188,&local_148);
  }
  if (*(char *)((longlong)puVar1 + 1) == '\x01') {
    if ((char)*param_2 == '\x01') {
      bVar18 = param_2[3] != 0;
    }
    else {
      bVar18 = FUN_140321d1a(param_2);
    }
    puVar13 = &DAT_14cb7c580;
    if (bVar18 == 0) {
      puVar13 = &DAT_14cb7c588;
    }
    uVar2 = *puVar13;
    *(char *)param_2 = '\x01';
    *(undefined8 *)(param_2 + 1) = uVar2;
    param_2[3] = (uint)(bVar18 ^ 1);
  }
LAB_143d26afc:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x000143d26e5d:
  lVar16 = lVar11 + -1;
  lVar11 = lVar11 + -1;
  if (auStack_14a + lVar10 + 1 + lVar16 < &local_148) {
LAB_143d26e89:
    if (uVar6 == 0) goto LAB_143d26f06;
    goto LAB_143d26e8d;
  }
  goto LAB_143d26e4e;
}



// FUNCTION 143d26f0b FUN_143d26f0b body=41 status=ok
// SIG undefined FUN_143d26f0b(void)

void FUN_143d26f0b(void)

{
  DAT_14cb7bfd8 = 0;
  if (DAT_14cb7bfd0 != 0) {
    FUN_1400020a8();
  }
  FUN_146153570();
  return;
}



// FUNCTION 143d26f34 FUN_143d26f34 body=13 status=ok
// SIG undefined FUN_143d26f34(void)

void FUN_143d26f34(undefined8 *param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  return;
}



// FUNCTION 143d26f42 FUN_143d26f42 body=5 status=ok
// SIG undefined FUN_143d26f42(void)

void FUN_143d26f42(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 143d26f48 FUN_143d26f48 body=372 status=ok
// SIG undefined FUN_143d26f48(void)

undefined1 *
FUN_143d26f48(undefined8 param_1,undefined1 *param_2,longlong param_3,int *param_4,
             undefined8 param_5)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  int local_c0;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  longlong local_58;
  longlong *local_48;
  longlong local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_3 + 8) == 0) {
    *param_2 = 1;
    *(undefined4 *)(param_2 + 0xc) = 1;
    *(undefined8 *)(param_2 + 4) = DAT_14cb7c588;
    goto LAB_143d27077;
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_48 = (longlong *)0x0;
  local_98 = 0;
  local_ac = 0;
  local_a4 = 0;
  local_a0 = param_5;
  if (((*param_4 == 0) || (iVar1 = param_4[1], iVar1 == 0)) || (*param_4 == DAT_14c948000)) {
LAB_143d2709e:
    local_c0 = DAT_14c948620;
    local_c8 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (param_4[9] < 1)) {
      param_4 = param_4 + 2;
    }
    else {
      param_4 = *(int **)(param_4 + 6);
    }
    if (iVar1 < 1) goto LAB_143d2709e;
    local_c0 = param_4[2];
    local_c8 = *(undefined8 *)param_4;
  }
  local_b0 = local_c0;
  local_b8 = local_c8;
  FUN_143d268e8(param_3,param_2,*(int *)(param_3 + 8) + -1,&local_b8);
  if (local_58 != 0) {
    plVar2 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar2 = local_38;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
LAB_143d27077:
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d270e6 FUN_143d270e6 body=185 status=ok
// SIG undefined FUN_143d270e6(void)

void FUN_143d270e6(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((param_1 != (longlong *)0x0) && (1 < *(int *)(param_2 + 8))) {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        lVar2 = lVar2 + 0x460;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf8);
      }
      iVar1 = DAT_14cb7c01c + 1;
      *(int *)(param_3 + 4) = DAT_14cb7c01c;
      DAT_14cb7c01c = iVar1;
      uVar3 = FUN_14001cc68(0x48,0x10);
      FUN_14883bb4a(uVar3,param_3,param_1,param_2,param_4);
      FUN_140b1330e(lVar2,*(undefined8 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 4),uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 143d271a0 FUN_143d271a0 body=211 status=ok
// SIG undefined FUN_143d271a0(void)

void FUN_143d271a0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (((param_1 != (longlong *)0x0) && (1 < *(int *)(param_3 + 8))) && (*(int *)(param_2 + 8) != 0))
  {
    lVar2 = (**(code **)(*param_1 + 0x180))();
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        lVar2 = lVar2 + 0x460;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf8);
      }
      iVar1 = DAT_14cb7c020 + 1;
      *(int *)(param_4 + 4) = DAT_14cb7c020;
      DAT_14cb7c020 = iVar1;
      uVar3 = FUN_14001cc68(0x50,0x10);
      FUN_14883bc28(uVar3,param_4,param_1,param_3,param_2,param_5);
      FUN_140b1330e(lVar2,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 143d27274 FUN_143d27274 body=219 status=ok
// SIG undefined FUN_143d27274(void)

void FUN_143d27274(longlong *param_1,longlong param_2,undefined4 *param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  if ((param_1 != (longlong *)0x0) && (1 < *(int *)(param_2 + 8))) {
    lVar5 = (**(code **)(*param_1 + 0x180))();
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        lVar5 = lVar5 + 0x460;
      }
      else {
        lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf8);
      }
      iVar4 = DAT_14cb7c024 + 1;
      *(int *)(param_4 + 4) = DAT_14cb7c024;
      DAT_14cb7c024 = iVar4;
      puVar6 = (undefined8 *)FUN_14001cc68(0x58,0x10);
      FUN_14883bb4a(puVar6,param_4,param_1,param_2,param_5);
      *puVar6 = &PTR_FUN_14b3fc680;
      uVar1 = param_3[1];
      uVar2 = param_3[2];
      uVar3 = param_3[3];
      *(undefined4 *)(puVar6 + 9) = *param_3;
      *(undefined4 *)((longlong)puVar6 + 0x4c) = uVar1;
      *(undefined4 *)(puVar6 + 10) = uVar2;
      *(undefined4 *)((longlong)puVar6 + 0x54) = uVar3;
      FUN_140b1330e(lVar5,*(undefined8 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 4),puVar6);
      return;
    }
  }
  return;
}



// FUNCTION 143d27350 FUN_143d27350 body=10 status=ok
// SIG undefined FUN_143d27350(void)

void FUN_143d27350(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0xe) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  plVar4 = (longlong *)FUN_14479d2ce(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
    lVar7 = *param_1;
    plVar4 = param_1;
  }
  else {
    uVar5 = FUN_14589e80e();
    plVar6 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_14589e80e();
      plVar8 = (longlong *)FUN_144718840(plVar6,uVar5);
      if (plVar8 != (longlong *)0x0 && plVar6 != plVar8) {
        plVar4 = (longlong *)(**(code **)(*plVar8 + 0x10))(plVar8);
        if (plVar4 == (longlong *)0x0) {
          return;
        }
        lVar7 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
        goto LAB_14654c9cb;
      }
    }
    lVar7 = *plVar4;
  }
  uVar5 = (**(code **)(lVar7 + 0x180))(plVar4);
  lVar7 = FUN_140149a73(uVar5,0);
LAB_14654c9cb:
  if (lVar7 == 0) {
    return;
  }
  FUN_140bc53f1(param_1 + 7,param_1 + 0xe,lVar7,0);
  return;
}



// FUNCTION 143d2735a FUN_143d2735a body=102 status=ok
// SIG undefined FUN_143d2735a(void)

void FUN_143d2735a(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  undefined8 local_14;
  uint local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != 0) {
    local_18[0] = 1;
    local_c = (uint)param_2;
    puVar1 = &DAT_14cb7c580;
    if (param_2 != 0) {
      puVar1 = &DAT_14cb7c588;
    }
    local_14 = *puVar1;
    FUN_14654c976(param_1,local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d273c2 FUN_143d273c2 body=105 status=ok
// SIG undefined FUN_143d273c2(void)

void FUN_143d273c2(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    local_28[0] = 0;
    local_24 = 0;
    local_1c = 0;
    FUN_144976b9c(local_28,*param_2);
    FUN_14654c976(param_1,local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2742c FUN_143d2742c body=15 status=ok
// SIG undefined FUN_143d2742c(void)

void FUN_143d2742c(undefined1 *param_1,undefined4 param_2)

{
  *param_1 = 2;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 143d2743c FUN_143d2743c body=17 status=ok
// SIG undefined FUN_143d2743c(void)

void FUN_143d2743c(longlong param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x2c);
  *param_2 = *(undefined8 *)(param_1 + 0x24);
  return;
}



// FUNCTION 143d2744e FUN_143d2744e body=906 status=ok
// SIG undefined FUN_143d2744e(void)

void FUN_143d2744e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined2 local_68 [2];
  undefined8 local_64;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0xd) == '\0') goto LAB_143d277a7;
  if (((((*(longlong **)(param_1 + 0x80) != (longlong *)0x0) && (*(int *)(param_1 + 0x7c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x78), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 != 0)))) &&
     ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x7c) &&
      (((*(uint *)(lVar8 + 8) & 0x10200000) == 0 &&
       (lVar8 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x98))(), lVar8 != 0)))))) {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_14480f766(lVar8 + 0x2d0);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      FUN_14480f766(lVar8 + 0x2b8);
    }
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_14480f766(&DAT_14cb103e0);
  }
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if ((((*(int *)(param_1 + 0x7c) == 0) || (uVar1 = *(uint *)(param_1 + 0x78), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x7c))) ||
      (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 ||
       (((longlong *)*plVar6 == (longlong *)0x0 ||
        (lVar8 = (**(code **)(*(longlong *)*plVar6 + 0x180))(), lVar8 == 0)))))))) {
    local_68[0] = 0;
    local_64 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    lVar8 = 0;
  }
  else {
    FUN_1406f1bc8(param_1,local_68);
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  if ((*(longlong *)(param_1 + 0x90) == 0) && (*(int *)(param_1 + 0x38) < 1)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x90);
    plVar4 = (longlong *)FUN_140502abf(lVar8);
    if (*plVar6 != 0) {
      if ((plVar4 != (longlong *)0x0) && (cVar3 = FUN_1401144ce(local_68), cVar3 != '\0')) {
        (**(code **)(*plVar4 + 0x48))(plVar4,local_68,*(undefined8 *)(param_1 + 0x98));
        if (*(int *)(param_1 + 0x7c) == 0) {
LAB_143d277d1:
          uVar9 = 0;
        }
        else {
          uVar1 = *(uint *)(param_1 + 0x78);
          uVar9 = 0;
          if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
            puVar7 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((puVar7 == (undefined8 *)0x0) ||
               ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x7c) ||
                ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_143d277d1;
            uVar9 = *puVar7;
          }
        }
        (**(code **)(*plVar4 + 0x58))(plVar4,local_68,uVar9);
        (**(code **)(*plVar4 + 0x40))(plVar4,local_68,*plVar6);
      }
      FUN_14028f532(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
      *(undefined4 *)(param_1 + 200) = 0;
      if (*(int *)(param_1 + 0xcc) != 0) {
        FUN_1411c1ecc(param_1 + 0xc0,0);
      }
      *plVar6 = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
  }
  FUN_1405a412e(param_1);
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x88))(plVar4);
    }
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar10 = (longlong)*(int *)(param_1 + 0x38) * 0xa8;
    plVar6 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x98);
    do {
      lVar2 = plVar6[-1];
      if (lVar2 != 0) {
        lVar5 = FUN_140149a73(lVar8,0);
        if (lVar5 != 0) {
          FUN_140825b72(plVar6 + -0xc,lVar2,lVar5,0);
        }
        plVar6[-1] = 0;
      }
      if ((*plVar6 != 0) && ((*(byte *)(*plVar6 + 0x10) & 1) != 0)) {
        FUN_1408256d2(plVar6);
      }
      plVar6 = plVar6 + 0x15;
      lVar10 = lVar10 + -0xa8;
    } while (lVar10 != 0);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_143d277a7:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d277da FUN_143d277da body=75 status=ok
// SIG undefined FUN_143d277da(void)

undefined8 FUN_143d277da(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 200);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x30 + lVar4) + 8))();
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 0x40 + -0x40 != lVar4;
      lVar4 = lVar4 + 0x40;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 143d27826 FUN_143d27826 body=249 status=ok
// SIG undefined FUN_143d27826(void)

void FUN_143d27826(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((*(longlong **)(param_1 + 0x80) != (longlong *)0x0) && (*(int *)(param_1 + 0x7c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x78), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x7c))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x98))();
      if (lVar4 != 0) {
        lVar2 = FUN_1447210f0(lVar4);
        if (lVar2 == param_2) {
          lVar2 = *(longlong *)(param_1 + 0x80);
          if (((lVar2 != 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
             ((uVar1 = *(uint *)(param_1 + 0x78), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))))
          {
            lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x7c))) &&
               ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
              FUN_143d2744e(param_1);
              FUN_1407c0b34(param_1,lVar2,lVar4);
              return;
            }
          }
          FUN_143d2744e(param_1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d27930 FUN_143d27930 body=47 status=ok
// SIG undefined FUN_143d27930(void)

void FUN_143d27930(void)

{
  DAT_14cb7c0b8 = 0;
  if (DAT_14cb7c0b0 != 0) {
    FUN_1400020a8();
  }
  FUN_145983486(&DAT_14cb7c070);
  return;
}



// FUNCTION 143d27964 FUN_143d27964 body=41 status=ok
// SIG undefined FUN_143d27964(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d27964(void)

{
  _DAT_14cb7c170 = 0;
  if (DAT_14cb7c168 != 0) {
    FUN_1400020a8();
  }
  FUN_14616395c();
  return;
}



// FUNCTION 143d279a7 FUN_143d279a7 body=47 status=ok
// SIG undefined FUN_143d279a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d279a7(void)

{
  _DAT_14cb7c1d0 = 0;
  if (DAT_14cb7c1c8 != 0) {
    FUN_1400020a8();
  }
  FUN_145af132e(&DAT_14cb7c188);
  return;
}



// FUNCTION 143d279d6 FUN_143d279d6 body=41 status=ok
// SIG undefined FUN_143d279d6(void)

void FUN_143d279d6(void)

{
  DAT_14cb7c250 = 0;
  if (DAT_14cb7c248 != 0) {
    FUN_1400020a8();
  }
  FUN_1461564b2();
  return;
}



// FUNCTION 143d27a00 FUN_143d27a00 body=4916 status=ok
// SIG undefined FUN_143d27a00(void)

void FUN_143d27a00(longlong *param_1)

{
  double *pdVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  void *pvVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined8 *puVar20;
  void **ppvVar21;
  code *pcVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  uint *puVar31;
  int iVar32;
  longlong *plVar33;
  uint uVar34;
  double dVar35;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined2 *local_238;
  undefined1 *local_230;
  undefined1 *local_228;
  code **local_220;
  undefined1 *local_218;
  code *local_210;
  longlong *local_200;
  ulonglong local_1f8;
  longlong *local_1f0;
  longlong *local_1e8;
  uint local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  uint *local_1c0;
  longlong *local_1b8;
  uint local_1b0;
  undefined1 local_1a9;
  void *local_1a8;
  uint local_1a0;
  uint local_19c;
  code *local_198;
  ulonglong *local_190;
  byte local_16e;
  longlong local_f8;
  longlong local_f0;
  byte local_a4;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar5 = (**(code **)(*param_1 + 0x310))(param_1), cVar5 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  lVar6 = param_1[0x1e];
  if ((longlong)(int)lVar6 != 0) {
    lVar23 = param_1[0x1d];
    lVar13 = 0;
    do {
      if ((*(char *)(lVar23 + 8 + lVar13) == '\x01') &&
         (dVar35 = *(double *)(*(longlong *)(param_1[5] + 0x58) + 0x300) -
                   *(double *)(lVar23 + 0x10 + lVar13), pdVar1 = (double *)(lVar23 + 0x20 + lVar13),
         *pdVar1 <= dVar35 && dVar35 != *pdVar1)) {
        *(undefined1 *)(lVar23 + 0x18 + lVar13) = 1;
        *(undefined1 *)(lVar23 + 8 + lVar13) = 0;
      }
      lVar13 = lVar13 + 0x30;
    } while ((longlong)(int)lVar6 * 0x30 != lVar13);
  }
  if ((char)param_1[0xd] == '\0') {
    lVar6 = param_1[5];
    if ((lVar6 == 0) || (lVar23 = *(longlong *)(lVar6 + 0x98), lVar23 == 0)) goto LAB_143d28225;
    if (DAT_14caf9cd0 == 0) {
      local_220 = &local_198;
      local_198 = FUN_141030f22;
      local_210 = FUN_14081d0ea;
      local_218 = &LAB_1463c0cc2;
      local_228 = &LAB_147c9db5b;
      local_230 = &LAB_1463f9c44;
      local_238 = &DAT_149e063b2;
      local_240 = 0x2000000000;
      local_248 = 0x10000004;
      local_250 = 8;
      local_258 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar23 = *(longlong *)(lVar6 + 0x98);
      if (lVar23 == 0) goto LAB_143d28225;
    }
    if ((((DAT_14caf9cd0 == 0) || (lVar6 = *(longlong *)(lVar23 + 0x10), lVar6 == 0)) ||
        (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
         != DAT_14caf9cd0 + 0x30 || (*(longlong *)(lVar23 + 0x438) == 0)))) goto LAB_143d28225;
  }
  if (((((int)param_1[0x1a] == 0) && (((int)param_1[0x1c] == 0 && ((int)param_1[0x18] == 0)))) &&
      (*(char *)((longlong)param_1 + 0x6a) == '\0')) &&
     (((char)param_1[0x15] == '\0' && (*(char *)((longlong)param_1 + 0x8c) != '\x01'))))
  goto LAB_143d28225;
  plVar33 = param_1 + 0x19;
  if ((char)param_1[0xd] == '\x01') {
    if (*(char *)((longlong)param_1 + 0x69) != '\0') {
LAB_143d27bc6:
      if (((int)param_1[0x13] < 1) && (*(char *)((longlong)param_1 + 0x8c) != '\x01')) {
        *(undefined4 *)(param_1 + 0x21) = 0;
        if ((*(uint *)(param_1 + 6) >> 9 & 1) != 0) {
          if (0 < *(int *)((longlong)param_1 + 0x4c)) goto LAB_143d28225;
          *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffdff;
        }
        if ((*(char *)((longlong)param_1 + 0x6a) == '\x01') &&
           (iVar30 = (int)param_1[0x20], 0 < iVar30)) {
          local_1dc = iVar30 - 1U;
          if ((int)*(uint *)((longlong)param_1 + 0x10c) < (int)(iVar30 - 1U)) {
            local_1dc = *(uint *)((longlong)param_1 + 0x10c);
          }
          uVar7 = (ulonglong)local_1dc;
          *(uint *)((longlong)param_1 + 0x10c) = local_1dc;
          local_1b8 = param_1 + 0x1b;
          local_200 = (longlong *)0x0;
          uVar29 = uVar7;
          do {
            lVar6 = param_1[0x1f];
            iVar10 = (int)uVar7;
            lVar23 = (longlong)iVar10 * 0x60;
            local_1f8 = lVar6 + lVar23;
            puVar31 = (uint *)(lVar6 + lVar23 + 0x18);
            iVar32 = *(int *)(lVar6 + lVar23 + 0x30);
            if (iVar32 == 0) {
              uVar29 = 1;
              uVar7 = 0;
              iVar15 = 0;
              iVar19 = 0;
            }
            else {
              puVar26 = *(uint **)(local_1f8 + 0x28);
              if (*(uint **)(local_1f8 + 0x28) == (uint *)0x0) {
                puVar26 = puVar31;
              }
              uVar16 = *puVar26;
              if (uVar16 == 0) {
                iVar19 = iVar32 + 0x1e;
                if (-1 < iVar32 + -1) {
                  iVar19 = iVar32 + -1;
                }
                uVar7 = 0;
                uVar28 = (ulonglong)(uint)(iVar19 >> 5);
                if (iVar19 >> 5 < 1) {
                  uVar28 = uVar7;
                }
                iVar19 = 0;
                do {
                  if (uVar28 == uVar7) goto LAB_143d28138;
                  iVar19 = iVar19 + 0x20;
                  uVar16 = puVar26[uVar7 + 1];
                  uVar7 = uVar7 + 1;
                } while (uVar16 == 0);
              }
              else {
                uVar7 = 0;
                iVar19 = 0;
              }
              uVar29 = (ulonglong)(-uVar16 & uVar16);
              uVar28 = uVar29 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar28 != 0) {
                for (; uVar28 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar15 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar32 <= iVar15) {
                iVar15 = iVar32;
              }
            }
            if (iVar15 < iVar32) {
              local_1c8 = lVar6 + lVar23 + 8;
              local_1d0 = local_1f8 + 0x40;
              uVar16 = 0xffffffff;
              local_1e8 = plVar33;
              local_1c0 = puVar31;
              do {
                uVar28 = local_1f8;
                local_1f0 = (longlong *)CONCAT44(local_1f0._4_4_,uVar16);
                local_1d8 = CONCAT44(local_1d8._4_4_,iVar19);
                if (*(uint *)((longlong)param_1 + 0x114) <= (uint)local_200) break;
                lVar6 = *(longlong *)(local_1f8 + 8);
                lVar23 = (longlong)iVar15 * 0x30;
                puVar8 = (undefined1 *)FUN_140116e58(local_1b8);
                *puVar8 = 8;
                *(undefined8 *)(puVar8 + 0x34) = *(undefined8 *)(lVar6 + 0x10 + lVar23);
                *(undefined4 *)(puVar8 + 0x3c) = *(undefined4 *)(lVar6 + 0x18 + lVar23);
                *(undefined8 *)(puVar8 + 0x50) = *(undefined8 *)(lVar6 + 0x20 + lVar23);
                *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(uVar28 + 4);
                lVar6 = *(longlong *)(uVar28 + 0x48);
                if (*(longlong *)(uVar28 + 0x48) == 0) {
                  lVar6 = local_1d0;
                }
                lVar13 = *(longlong *)(uVar28 + 8);
                lVar24 = (longlong)*(int *)(lVar13 + 0x2c + lVar23);
                iVar30 = *(int *)(lVar6 + lVar24 * 4);
                if (iVar30 == iVar15) {
                  piVar11 = (int *)(lVar6 + lVar24 * 4);
                }
                else {
                  do {
                    piVar11 = (int *)((longlong)iVar30 * 0x30 + lVar13 + 0x28);
                    iVar30 = *piVar11;
                  } while (iVar30 != iVar15);
                }
                local_200 = (longlong *)(ulonglong)((int)local_200 + 1);
                *piVar11 = *(int *)(lVar13 + lVar23 + 0x28);
                FUN_143d33618(local_1c8,iVar15);
                uVar16 = (uint)local_1f0 & ~(uint)uVar29;
                puVar31 = *(uint **)(local_1f8 + 0x28);
                if (*(uint **)(local_1f8 + 0x28) == (uint *)0x0) {
                  puVar31 = local_1c0;
                }
                iVar30 = *(int *)(local_1f8 + 0x30);
                iVar32 = (int)uVar7;
                lVar6 = (longlong)iVar32;
                uVar9 = puVar31[lVar6] & uVar16;
                iVar19 = (int)local_1d8;
                if (uVar9 == 0) {
                  iVar10 = iVar30 + 0x1e;
                  if (-1 < iVar30 + -1) {
                    iVar10 = iVar30 + -1;
                  }
                  iVar10 = iVar10 >> 5;
                  iVar15 = iVar10;
                  if (iVar10 < iVar32) {
                    iVar15 = iVar32;
                  }
                  if (iVar10 <= iVar32) break;
                  lVar23 = 0;
                  while( true ) {
                    iVar19 = iVar19 + 0x20;
                    uVar9 = (puVar31 + lVar6 + 1)[lVar23];
                    if (uVar9 != 0) break;
                    lVar23 = lVar23 + 1;
                    if (iVar15 - lVar6 == lVar23) goto LAB_143d28125;
                  }
                  uVar7 = (ulonglong)(iVar32 + (int)lVar23 + 1);
                  uVar16 = 0xffffffff;
                }
                uVar29 = (ulonglong)(-uVar9 & uVar9);
                uVar28 = uVar29 * 2 + 1;
                lVar6 = 0x3f;
                if (uVar28 != 0) {
                  for (; uVar28 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                  }
                }
                iVar15 = (iVar19 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              } while (iVar15 < iVar30);
LAB_143d28125:
              iVar30 = (int)param_1[0x20];
              iVar10 = *(int *)((longlong)param_1 + 0x10c);
              plVar33 = local_1e8;
            }
            uVar29 = (ulonglong)local_1dc;
LAB_143d28138:
            uVar28 = (longlong)(iVar10 + 1) % (longlong)iVar30;
            uVar7 = uVar28 & 0xffffffff;
            iVar32 = (int)uVar28;
            *(int *)((longlong)param_1 + 0x10c) = iVar32;
          } while ((iVar32 != (int)uVar29) &&
                  ((uint)local_200 < *(uint *)((longlong)param_1 + 0x114)));
          lVar6 = param_1[0x1f];
          lVar23 = (longlong)iVar30 * 0x60;
          do {
            if (*(int *)(lVar6 + 0x3c) < *(int *)(lVar6 + 0x10)) goto LAB_143d28281;
            lVar6 = lVar6 + 0x60;
            lVar23 = lVar23 + -0x60;
          } while (lVar23 != 0);
          lVar6 = 0;
LAB_143d28281:
          *(bool *)((longlong)param_1 + 0x6a) = lVar6 != 0;
        }
        plVar14 = param_1 + 0x1d;
        FUN_1449daf8c(&local_198,param_1,0);
        local_1b0 = local_1b0 & 0xffffff00;
        FUN_1401177fa(&local_198,&local_1b0,1);
        local_1f0 = plVar14;
        if (0 < (int)param_1[0x1e]) {
          lVar6 = 0;
          uVar29 = 0;
LAB_143d282d9:
          cVar5 = FUN_143d2914e(plVar33,param_1[5]);
          if (cVar5 == '\0') {
            lVar23 = *plVar14;
            if (*(char *)(lVar23 + 0x18 + lVar6) != '\x01') goto code_r0x000143d282f8;
            lVar13 = (longlong)*(int *)(lVar23 + 0x2c + lVar6);
            uVar16 = *(uint *)(lVar23 + 0x28 + lVar6);
            plVar14 = (longlong *)(ulonglong)uVar16;
            if (lVar13 < 1) {
              local_1f8 = 0;
            }
            else {
              lVar24 = (longlong)(int)uVar16;
              uVar16 = *(uint *)(param_1 + 0x1c);
              local_1f8 = 0;
              local_1e8 = plVar33;
              local_1d8 = lVar13;
              do {
                lVar25 = local_1d8;
                if (0 < (int)uVar16) {
                  pbVar17 = (byte *)(lVar24 * 0x68 + param_1[0x17]);
                  lVar3 = param_1[0x1b];
                  bVar2 = *pbVar17;
                  puVar8 = &DAT_00000001;
                  uVar7 = 1;
                  if (1 < (int)uVar16) {
                    uVar7 = (ulonglong)uVar16;
                  }
                  lVar27 = 0;
                  do {
                    lVar13 = lVar25;
                    plVar33 = local_1e8;
                    local_200 = plVar14;
                    if (((byte)(*(byte *)(lVar3 + lVar27) - 2) < 3) && ((byte)(bVar2 - 2) < 3)) {
                      if ((*(int *)(lVar3 + 4 + lVar27) == *(int *)(pbVar17 + 4)) &&
                         (*(byte *)(lVar3 + 0x60 + lVar27) == pbVar17[0x60])) goto LAB_143d28436;
                    }
                    else if (*(byte *)(lVar3 + lVar27) == bVar2) {
                      if (bVar2 == 8) {
LAB_143d283cd:
                        if ((*(int *)(lVar3 + 0x34 + lVar27) != *(int *)(pbVar17 + 0x34)) ||
                           ((*(int *)(lVar3 + 0x3c + lVar27) != *(int *)(pbVar17 + 0x3c) ||
                            (*(int *)(lVar3 + 8 + lVar27) != *(int *)(pbVar17 + 8)))))
                        goto LAB_143d283a5;
                      }
                      else {
                        if (bVar2 == 9) {
                          if ((*(int *)(lVar3 + 0x28 + lVar27) != *(int *)(pbVar17 + 0x28)) ||
                             (*(int *)(lVar3 + 0x30 + lVar27) != *(int *)(pbVar17 + 0x30)))
                          goto LAB_143d283a5;
                          goto LAB_143d283cd;
                        }
                        if (2 < bVar2 - 5) {
                          if (bVar2 == 1) goto LAB_143d28436;
                          goto LAB_143d283a5;
                        }
                        if ((*(int *)(lVar3 + 0x34 + lVar27) != *(int *)(pbVar17 + 0x34)) ||
                           (*(int *)(lVar3 + 0x3c + lVar27) != *(int *)(pbVar17 + 0x3c)))
                        goto LAB_143d283a5;
                      }
LAB_143d28436:
                      if (*(char *)(lVar3 + lVar27) == '\x04') {
                        *pbVar17 = 4;
                      }
                      *(undefined8 *)(pbVar17 + 0x40) = *(undefined8 *)(lVar3 + 0x40 + lVar27);
                      *(undefined8 *)(pbVar17 + 0x48) = *(undefined8 *)(lVar3 + 0x48 + lVar27);
                      *(undefined8 *)(pbVar17 + 0x50) = *(undefined8 *)(lVar3 + 0x50 + lVar27);
                      *(undefined4 *)(pbVar17 + 0xc) = *(undefined4 *)(lVar3 + 0xc + lVar27);
                      iVar30 = (int)param_1[0x1c];
                      uVar16 = iVar30 - (int)puVar8;
                      pvVar12 = (void *)(ulonglong)uVar16;
                      if (uVar16 != 0) {
                        pvVar12 = memmove((void *)(param_1[0x1b] + lVar27),
                                          (void *)(param_1[0x1b] + lVar27 + 0x68),
                                          (longlong)(int)uVar16 * 0x68);
                        iVar30 = (int)param_1[0x1c];
                      }
                      uVar16 = iVar30 - 1;
                      *(uint *)(param_1 + 0x1c) = uVar16;
                      plVar14 = (longlong *)(ulonglong)*(uint *)(lVar23 + 0x28 + lVar6);
                      local_1f8 = CONCAT71((int7)((ulonglong)pvVar12 >> 8),1);
                      break;
                    }
LAB_143d283a5:
                    lVar27 = lVar27 + 0x68;
                    puVar8 = (undefined1 *)(ulonglong)((int)puVar8 + 1);
                  } while (uVar7 * 0x68 - lVar27 != 0);
                }
                lVar24 = lVar24 + 1;
              } while (lVar24 < (int)plVar14 + (int)lVar13);
            }
            lVar24 = param_1[0x17];
            iVar30 = (int)param_1[0x1a];
            uVar16 = (uint)lVar13;
            *(uint *)(param_1 + 0x1a) = iVar30 + uVar16;
            if ((uint)(*(int *)((longlong)param_1 + 0xd4) - iVar30) < uVar16) {
              FUN_140116b62(plVar33,iVar30);
LAB_143d28584:
              memcpy((void *)((longlong)iVar30 * 0x68 + *plVar33),
                     (void *)((longlong)(int)plVar14 * 0x68 + lVar24),lVar13 * 0x68);
              if ((local_1f8 & 1) != 0) {
                iVar30 = *(int *)(lVar23 + 0x28 + lVar6);
                iVar32 = (int)param_1[0x18];
                iVar10 = iVar32 - (iVar30 + uVar16);
                if (iVar10 != 0) {
                  pvVar12 = (void *)((longlong)iVar30 * 0x68 + param_1[0x17]);
                  memmove(pvVar12,(void *)(lVar13 * 0x68 + (longlong)pvVar12),
                          (longlong)iVar10 * 0x68);
                  iVar32 = (int)param_1[0x18];
                }
                *(uint *)(param_1 + 0x18) = iVar32 - uVar16;
                goto LAB_143d285e9;
              }
LAB_143d2867f:
              *(int *)(param_1 + 0x21) = (int)param_1[0x21] + *(int *)(lVar23 + 0x2c + lVar6);
              iVar30 = *(int *)(lVar23 + 0x28 + lVar6);
              if ((-1 < (longlong)iVar30) && (iVar30 < (int)param_1[0x18])) {
                *(undefined1 *)(param_1[0x17] + 0x61 + (longlong)iVar30 * 0x68) = 1;
              }
            }
            else {
              if (uVar16 != 0) goto LAB_143d28584;
              if ((char)local_1f8 == '\0') goto LAB_143d2867f;
LAB_143d285e9:
              uVar9 = (uint)uVar29;
              if ((int)(uVar9 + 1) < (int)param_1[0x1e]) {
                lVar23 = lVar6 + 0x58;
                uVar7 = uVar29 + 1;
                do {
                  *(int *)(param_1[0x1d] + lVar23) = *(int *)(param_1[0x1d] + lVar23) - uVar16;
                  uVar34 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar34;
                  lVar23 = lVar23 + 0x30;
                } while ((int)uVar34 < (int)param_1[0x1e]);
              }
              lVar23 = param_1[0x1d];
              pvVar12 = (void *)(lVar23 + lVar6);
              FUN_14087196b(pvVar12,1);
              if ((int)param_1[0x1e] - 1U != uVar9) {
                memmove(pvVar12,(void *)(lVar23 + lVar6 + 0x30),
                        (longlong)(int)(~uVar9 + (int)param_1[0x1e]) * 0x30);
                uVar29 = (ulonglong)((int)param_1[0x1e] - 1);
              }
              *(int *)(param_1 + 0x1e) = (int)uVar29;
            }
          }
        }
LAB_143d286ac:
        local_200 = param_1 + 0x17;
        do {
          cVar5 = FUN_143d2914e(plVar33,param_1[5]);
          if (cVar5 != '\0') break;
          uVar16 = *(uint *)(param_1 + 0x1c);
          uVar9 = 0x32;
          if (uVar16 < 0x32) {
            uVar9 = uVar16;
          }
          if (uVar16 == 0) break;
          local_1a8 = (void *)0x0;
          local_1a0 = *(uint *)(param_1 + 0x1a);
          lVar6 = (longlong)(int)local_1a0;
          pvVar12 = (void *)param_1[0x19];
          if (lVar6 == 0) {
            local_19c = 0;
          }
          else {
            FUN_141882c7a(&local_1a8,local_1a0);
            memcpy(local_1a8,pvVar12,lVar6 * 0x68);
            uVar16 = *(uint *)(param_1 + 0x1c);
          }
          if ((int)uVar16 < 1) {
            iVar30 = 3;
          }
          else {
            iVar30 = 0;
            uVar34 = 0;
            do {
              uVar4 = local_1a0;
              lVar6 = (longlong)iVar30 * 0x68;
              pbVar17 = (byte *)(param_1[0x1b] + lVar6);
              if (0 < (longlong)(int)param_1[0x18]) {
                lVar23 = *local_200;
                bVar2 = *pbVar17;
                lVar13 = 0;
                do {
                  if (((byte)(*(byte *)(lVar23 + lVar13) - 2) < 3) && ((byte)(bVar2 - 2) < 3)) {
                    if ((*(int *)(lVar23 + 4 + lVar13) == *(int *)(pbVar17 + 4)) &&
                       (*(byte *)(lVar23 + 0x60 + lVar13) == pbVar17[0x60])) goto LAB_143d288fb;
                  }
                  else if (*(byte *)(lVar23 + lVar13) == bVar2) {
                    if (bVar2 == 8) {
LAB_143d287a7:
                      if (((*(int *)(lVar23 + 0x34 + lVar13) == *(int *)(pbVar17 + 0x34)) &&
                          (*(int *)(lVar23 + 0x3c + lVar13) == *(int *)(pbVar17 + 0x3c))) &&
                         (*(int *)(lVar23 + 8 + lVar13) == *(int *)(pbVar17 + 8)))
                      goto LAB_143d288fb;
                    }
                    else if (bVar2 == 9) {
                      if ((*(int *)(lVar23 + 0x28 + lVar13) == *(int *)(pbVar17 + 0x28)) &&
                         (*(int *)(lVar23 + 0x30 + lVar13) == *(int *)(pbVar17 + 0x30)))
                      goto LAB_143d287a7;
                    }
                    else if (bVar2 - 5 < 3) {
                      if ((*(int *)(lVar23 + 0x34 + lVar13) == *(int *)(pbVar17 + 0x34)) &&
                         (*(int *)(lVar23 + 0x3c + lVar13) == *(int *)(pbVar17 + 0x3c)))
                      goto LAB_143d288fb;
                    }
                    else if (bVar2 == 1) goto LAB_143d288fb;
                  }
                  lVar13 = lVar13 + 0x68;
                } while ((longlong)(int)param_1[0x18] * 0x68 - lVar13 != 0);
              }
              lVar23 = (longlong)(int)local_1a0;
              local_1a0 = local_1a0 + 1;
              if (local_19c < local_1a0) {
                FUN_140116b62(&local_1a8,uVar4);
              }
              puVar18 = (undefined8 *)(lVar23 * 0x68 + (longlong)local_1a8);
              for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar18 = *(undefined8 *)pbVar17;
                pbVar17 = pbVar17 + 8;
                puVar18 = puVar18 + 1;
              }
              cVar5 = FUN_143d2914e(&local_1a8,param_1[5]);
              if (cVar5 != '\0') {
                iVar32 = 3;
                goto LAB_143d28917;
              }
              lVar23 = param_1[0x1b];
              iVar32 = (int)param_1[0x1a];
              *(uint *)(param_1 + 0x1a) = iVar32 + 1U;
              if (*(uint *)((longlong)param_1 + 0xd4) < iVar32 + 1U) {
                FUN_140116b62(plVar33,iVar32);
              }
              puVar18 = (undefined8 *)(lVar23 + lVar6);
              puVar20 = (undefined8 *)((longlong)iVar32 * 0x68 + param_1[0x19]);
              for (lVar13 = 0xd; lVar13 != 0; lVar13 = lVar13 + -1) {
                *puVar20 = *puVar18;
                puVar18 = puVar18 + 1;
                puVar20 = puVar20 + 1;
              }
              iVar32 = (int)param_1[0x1c];
              iVar10 = iVar32 - (iVar30 + 1);
              if (iVar10 != 0) {
                memmove((void *)(param_1[0x1b] + lVar6),(void *)(param_1[0x1b] + lVar6 + 0x68),
                        (longlong)iVar10 * 0x68);
                iVar32 = (int)param_1[0x1c];
              }
              uVar16 = iVar32 - 1;
              *(uint *)(param_1 + 0x1c) = uVar16;
              uVar34 = uVar34 + 1;
              if (uVar9 <= uVar34) break;
              iVar30 = iVar30 + -1;
LAB_143d288fb:
              iVar30 = iVar30 + 1;
            } while (iVar30 < (int)uVar16);
            iVar32 = 0;
LAB_143d28917:
            iVar30 = 3;
            if ((uVar34 != 0) && (iVar30 = iVar32, (int)param_1[0x1c] == 0)) {
              iVar30 = 3;
            }
          }
          if (local_1a8 != (void *)0x0) {
            FUN_1400020a8();
          }
        } while (iVar30 == 0);
        FUN_140116cd4(&local_198);
        iVar30 = (int)param_1[0x1a];
        if ((longlong)iVar30 != 0) {
          iVar32 = (int)param_1[0x21];
          uVar16 = iVar30 - iVar32;
          lVar6 = 0;
          do {
            if (*(char *)(param_1[0x19] + 0x62 + lVar6) == '\x01') {
              local_a4 = local_a4 | 0x10;
              break;
            }
            lVar6 = lVar6 + 0x68;
          } while ((longlong)iVar30 * 0x68 - lVar6 != 0);
          (**(code **)(*param_1 + 0x308))(param_1,&local_1a8,&local_198,1);
          if ((local_a4 & 0x10) == 0) {
            uVar9 = *(uint *)(param_1 + 0x21);
            if ((ulonglong)uVar9 != 0) {
              lVar6 = param_1[0x19];
              iVar10 = (int)param_1[0x18];
              *(uint *)(param_1 + 0x18) = uVar16 + iVar10;
              if ((uint)(*(int *)((longlong)param_1 + 0xc4) - iVar10) < uVar16) {
                FUN_140116b62(local_200);
              }
              if (iVar30 != iVar32) {
                memcpy((void *)((longlong)iVar10 * 0x68 + *local_200),
                       (void *)((ulonglong)uVar9 * 0x68 + lVar6),(longlong)(int)uVar16 * 0x68);
              }
              goto LAB_143d28a6c;
            }
            uVar16 = *(uint *)(param_1 + 0x1a);
            if ((longlong)(int)uVar16 != 0) {
              iVar10 = (int)param_1[0x18];
              *(uint *)(param_1 + 0x18) = iVar10 + uVar16;
              if ((uint)(*(int *)((longlong)param_1 + 0xc4) - iVar10) < uVar16) {
                FUN_140116b62(local_200,iVar10);
              }
              memmove((void *)((longlong)iVar10 * 0x68 + param_1[0x17]),(void *)param_1[0x19],
                      (longlong)(int)uVar16 * 0x68);
              *(undefined4 *)(param_1 + 0x1a) = 0;
            }
          }
          else {
LAB_143d28a6c:
            *(undefined4 *)(param_1 + 0x1a) = 0;
            if (*(int *)((longlong)param_1 + 0xd4) < 0) {
              FUN_140117cc8(plVar33);
            }
          }
          pvVar12 = *(void **)(*(longlong *)(param_1[5] + 0x58) + 0x300);
          lVar6 = param_1[0x1e];
          if ((longlong)(int)lVar6 != 0) {
            lVar23 = param_1[0x1d];
            lVar13 = 0;
            do {
              iVar10 = *(int *)(lVar23 + 0x28 + lVar13);
              if ((-1 < (longlong)iVar10) && (iVar10 < (int)param_1[0x18])) {
                lVar24 = *local_200;
                lVar25 = (longlong)iVar10 * 0x68;
                if (*(char *)(lVar24 + 0x61 + lVar25) == '\x01') {
                  *(void **)(lVar23 + 0x10 + lVar13) = pvVar12;
                  *(undefined1 *)(lVar23 + 0x18 + lVar13) = 0;
                  *(undefined1 *)(lVar25 + lVar24 + 0x61) = 0;
                }
              }
              lVar13 = lVar13 + 0x30;
            } while ((longlong)(int)lVar6 * 0x30 != lVar13);
          }
          if ((local_a4 & 0x10) == 0 && iVar30 != iVar32) {
            iVar30 = (int)param_1[0x1e];
            if ((longlong)iVar30 == 0) {
              iVar32 = 0;
            }
            else {
              lVar6 = (longlong)(iVar30 + -1) * 0x30;
              iVar32 = *(int *)(*local_1f0 + 0x2c + lVar6) + *(int *)(*local_1f0 + 0x28 + lVar6);
            }
            *(uint *)(param_1 + 0x1e) = iVar30 + 1U;
            if (*(uint *)((longlong)param_1 + 0xf4) < iVar30 + 1U) {
              FUN_14654d43c(local_1f0,iVar30);
            }
            ppvVar21 = (void **)((longlong)iVar30 * 0x30 + *local_1f0);
            FUN_143d335f1(ppvVar21);
            if (ppvVar21 != &local_1a8) {
              *ppvVar21 = local_1a8;
              *(undefined1 *)(ppvVar21 + 1) = 1;
            }
            ppvVar21[2] = pvVar12;
            *(undefined1 *)(ppvVar21 + 3) = 0;
            *(int *)(ppvVar21 + 5) = iVar32;
            *(int *)((longlong)ppvVar21 + 0x2c) = (int)param_1[0x18] - iVar32;
          }
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
        FUN_1449daf8c(&local_198,param_1,0);
        local_a4 = local_a4 | 0x10;
        local_1a9 = 1;
        FUN_1401177fa(&local_198,&local_1a9,1);
        if ((char)param_1[0x15] == '\0') {
          *(bool *)(param_1 + 0x15) = 0 < (int)param_1[0x13];
          if ((undefined4 *)local_190[1] < (undefined4 *)*local_190 + 1) {
            if ((local_16e & 2) == 0) {
              (**(code **)(local_198 + 0x170))
                        (&local_198,(undefined4 *)((longlong)param_1 + 0xa4),4);
            }
            else {
              FUN_14572512c(&local_198);
            }
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)*local_190;
            *local_190 = *local_190 + 4;
          }
          if ((undefined4 *)local_190[1] < (undefined4 *)*local_190 + 1) {
            if ((local_16e & 2) == 0) {
              (**(code **)(local_198 + 0x170))(&local_198,param_1 + 0x14,4);
            }
            else {
              FUN_14572512c(&local_198);
            }
          }
          else {
            *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)*local_190;
            *local_190 = *local_190 + 4;
          }
        }
        else {
          uVar7 = local_f0 - local_f8;
          uVar29 = uVar7 + 7;
          if (-1 < (longlong)uVar7) {
            uVar29 = uVar7;
          }
          local_1b0 = (int)(uVar29 >> 3) - 4;
          if ((int)*(uint *)(param_1 + 0x13) <= (int)local_1b0) {
            local_1b0 = *(uint *)(param_1 + 0x13);
          }
          puVar31 = (uint *)*local_190 + 1;
          if ((uint *)local_190[1] < puVar31) {
            if ((local_16e & 2) == 0) {
              (**(code **)(local_198 + 0x170))(&local_198,&local_1b0,4);
            }
            else {
              FUN_14572512c(&local_198,&local_1b0);
            }
          }
          else {
            local_1b0 = *(uint *)*local_190;
            *local_190 = (ulonglong)puVar31;
          }
          plVar33 = param_1 + 0x12;
          FUN_14011736e(&local_198,param_1[0x12],(longlong)(int)local_1b0);
          uVar16 = *(uint *)(param_1 + 0x13);
          if (local_1b0 == uVar16) {
            *(undefined1 *)(param_1 + 0x15) = 0;
            *(undefined4 *)(param_1 + 0x13) = 0;
            if (*(int *)((longlong)param_1 + 0x9c) != 0) {
              FUN_144893a1c(plVar33,0);
            }
          }
          else {
            local_1a8 = (void *)0x0;
            pvVar12 = (void *)*plVar33;
            local_1a0 = uVar16;
            if (uVar16 == 0) {
              local_19c = 0;
              iVar30 = 0;
            }
            else {
              FUN_1447a127e(&local_1a8,uVar16,0);
              memcpy(local_1a8,pvVar12,(longlong)(int)uVar16);
              iVar30 = (int)param_1[0x13];
            }
            iVar32 = iVar30 - local_1b0;
            if ((int)local_1b0 < 0) {
              uVar16 = -local_1b0;
              *(int *)(param_1 + 0x13) = iVar32;
              if ((uint)(*(int *)((longlong)param_1 + 0x9c) - iVar30) < uVar16) {
                FUN_1447403be(plVar33);
              }
              memset((void *)((longlong)iVar30 + *plVar33),0,(longlong)(int)uVar16);
            }
            else {
              if (iVar32 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar32);
              }
              if (local_1b0 != 0) {
                *(int *)(param_1 + 0x13) = iVar32;
                FUN_140b3f66e(plVar33);
              }
            }
            memcpy((void *)*plVar33,(void *)((longlong)(int)local_1b0 + (longlong)local_1a8),
                   (longlong)iVar32);
            if (local_1a8 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        (**(code **)(*param_1 + 0x308))(param_1,&local_1a8,&local_198,1);
      }
      FUN_1449daebe(&local_198);
      goto LAB_143d28225;
    }
  }
  else if (*(int *)((longlong)param_1 + 0x6c) != 3) goto LAB_143d27bc6;
  lVar6 = FUN_14014997a(param_1);
  if (lVar6 != 0) {
    pcVar22 = *(code **)(lVar6 + 0x30);
    if ((pcVar22 == DAT_14c948034) && (*(int *)(lVar6 + 0x2c) != DAT_14c948030)) {
      FUN_14011791e(&local_198,*(int *)(lVar6 + 0x2c),(ulonglong)pcVar22 >> 0x20);
      pcVar22 = local_198;
    }
    if ((pcVar22 != *(code **)((longlong)param_1 + 0x84)) &&
       (*(code **)((longlong)param_1 + 0x84) = pcVar22, (int)param_1[0x1c] != 0)) {
      FUN_143d28d36(param_1,param_1 + 0x1b);
    }
  }
  FUN_143d28d36(param_1,plVar33);
LAB_143d28225:
  if ((local_60 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000143d282f8:
  uVar29 = uVar29 + 1;
  lVar6 = lVar6 + 0x30;
  if ((longlong)(int)param_1[0x1e] <= (longlong)uVar29) goto LAB_143d286ac;
  goto LAB_143d282d9;
}



// FUNCTION 143d28d36 FUN_143d28d36 body=964 status=ok
// SIG undefined FUN_143d28d36(void)

void FUN_143d28d36(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  short local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = param_2[1];
  if ((((longlong)(int)lVar6 != 0) && ((char)param_1[0x15] == '\0')) &&
     (*(char *)((longlong)param_1 + 0x8c) == '\0')) {
    lVar4 = *param_2;
    *param_2 = 0;
    param_2[1] = 0;
    local_70 = param_1 + 0x1b;
    lVar14 = 0;
    do {
      if (8 < *(byte *)(lVar4 + lVar14) - 1) goto LAB_143d29078;
      puVar12 = (undefined8 *)(lVar4 + lVar14);
      switch((uint)*(byte *)(lVar4 + lVar14)) {
      case 1:
        lVar11 = FUN_14014997a(param_1);
        if (lVar11 != 0) {
          bVar1 = *(byte *)(param_1 + 0x10);
          bVar2 = *(byte *)(lVar4 + 0x60 + lVar14);
          if (bVar1 == 0) {
LAB_143d28e13:
            *(byte *)(param_1 + 0x10) = bVar2;
            param_1[0xf] = *(longlong *)(lVar4 + 0x58 + lVar14);
            FUN_148853466(lVar11,puVar12);
            if ((int)param_1[0x1c] != 0) {
              FUN_143d28d36(param_1,local_70);
            }
          }
          else if (bVar2 != bVar1) {
            uVar5 = -(uint)bVar1;
            if (bVar2 < bVar1) {
              uVar5 = bVar1 ^ 0xff;
            }
            if ((int)(uVar5 + bVar2) < 0x7f) goto LAB_143d28e13;
          }
        }
        break;
      case 2:
        local_68 = (ulonglong)local_68._1_7_ << 8;
        cVar7 = FUN_1401498c4(param_1,puVar12,&local_68);
        if (cVar7 == '\0') {
LAB_143d28f2e:
          if ((char)local_68 == '\x01') {
            iVar3 = (int)param_1[0x1c];
            *(uint *)(param_1 + 0x1c) = iVar3 + 1U;
            if (*(uint *)((longlong)param_1 + 0xe4) < iVar3 + 1U) {
              FUN_140116b62(local_70,iVar3);
            }
            puVar13 = (undefined8 *)((longlong)iVar3 * 0x68 + *local_70);
            for (lVar11 = 0xd; lVar11 != 0; lVar11 = lVar11 + -1) {
              *puVar13 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar13 = puVar13 + 1;
            }
          }
        }
        else {
          lVar11 = FUN_14014997a(param_1);
          if (lVar11 != 0) {
            FUN_143d45bf2(lVar11,puVar12);
          }
        }
        break;
      case 3:
        local_68 = (ulonglong)local_68._1_7_ << 8;
        cVar7 = FUN_1401498c4(param_1,puVar12,&local_68);
        if (cVar7 == '\0') goto LAB_143d28f2e;
        lVar11 = FUN_14014997a(param_1);
        if (lVar11 != 0) {
          FUN_143d460fa(lVar11,puVar12);
        }
        break;
      case 4:
        local_68 = (ulonglong)local_68._1_7_ << 8;
        cVar7 = FUN_1401498c4(param_1,puVar12,&local_68);
        if (cVar7 == '\0') goto LAB_143d28f2e;
        lVar11 = FUN_14014997a(param_1);
        if (lVar11 != 0) {
          FUN_143d461e6(lVar11,puVar12);
        }
        break;
      case 5:
        lVar11 = FUN_14654cac4(param_1);
        goto LAB_143d28ea5;
      case 6:
        lVar11 = FUN_140e8c3fe(param_1);
        goto LAB_143d28ea5;
      case 7:
        lVar11 = FUN_145cf4d8c(param_1);
LAB_143d28ea5:
        if (lVar11 != 0) {
          FUN_141882032(lVar11,puVar12);
        }
        break;
      case 8:
        if ((char)param_1[0xd] == '\x01') {
          lVar11 = *param_1;
          plVar9 = param_1;
LAB_143d28f9b:
          uVar10 = (**(code **)(lVar11 + 0x180))(plVar9);
        }
        else {
          plVar9 = (longlong *)param_1[5];
          if (plVar9 != (longlong *)0x0) {
            lVar11 = *plVar9;
            goto LAB_143d28f9b;
          }
          uVar10 = 0;
        }
        lVar11 = FUN_1400f6f32(uVar10);
        if (((lVar11 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x68), lVar11 != 0)) &&
           ((lVar8 = FUN_1401499b2(param_1), lVar8 != 0 &&
            (FUN_140d173bc(lVar11,local_4c,*(undefined4 *)(lVar4 + 8 + lVar14)), -1 < local_4c[0])))
           ) {
          local_50 = FUN_140b9fef0(lVar11,local_4c,0);
          plVar9 = (longlong *)FUN_140d17acc(lVar8,&local_50);
          if ((plVar9 != (longlong *)0x0) &&
             (lVar11 = (**(code **)(*plVar9 + 0x90))(plVar9), lVar11 != 0)) {
            local_60 = *(undefined4 *)(lVar4 + 0x3c + lVar14);
            local_68 = *(longlong *)(lVar4 + 0x34 + lVar14);
            local_58 = *(undefined8 *)(lVar4 + 0x50 + lVar14);
            FUN_140c22bcc(lVar11,&local_68);
          }
        }
        break;
      case 9:
        if ((char)param_1[0xd] == '\x01') {
          lVar11 = *param_1;
          plVar9 = param_1;
LAB_143d2905e:
          uVar10 = (**(code **)(lVar11 + 0x180))(plVar9);
        }
        else {
          plVar9 = (longlong *)param_1[5];
          if (plVar9 != (longlong *)0x0) {
            lVar11 = *plVar9;
            goto LAB_143d2905e;
          }
          uVar10 = 0;
        }
        lVar11 = FUN_1400f6f32(uVar10);
        if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x68) != 0)) {
          FUN_1401499b2(param_1);
          FUN_14585ce2c(param_1,puVar12);
        }
      }
LAB_143d29078:
      lVar14 = lVar14 + 0x68;
    } while ((longlong)(int)lVar6 * 0x68 - lVar14 != 0);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d2914e FUN_143d2914e body=237 status=ok
// SIG undefined FUN_143d2914e(void)

undefined4 FUN_143d2914e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_188 [40];
  undefined **local_160 [20];
  longlong local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_7c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar2 = *(int *)(param_2 + 0xa0) * 8 - *(int *)(param_2 + 0x130);
  iVar1 = iVar2 + -0x235;
  iVar2 = iVar2 + -0x22e;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  FUN_1447400e4(local_160,0,1);
  local_a8 = 0;
  uStack_a0 = 0;
  local_160[0] = &PTR_FUN_14a8a3730;
  local_7c = 0;
  local_38 = 0;
  local_30 = 0x400000000;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140116cd4(local_160,param_1);
  FUN_1449daebe(local_160);
  if ((local_28 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return CONCAT31((int3)(iVar2 >> 0xb),(longlong)(iVar2 >> 3) <= local_c0 + 7 >> 3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2923c FUN_143d2923c body=71 status=ok
// SIG undefined FUN_143d2923c(void)

undefined8 FUN_143d2923c(longlong param_1,undefined8 param_2,longlong param_3)

{
  if (param_3 != 0) {
    if (((*(int *)(param_1 + 0x38) == -1) ||
        (*(char *)(*(longlong *)(param_1 + 0x28) + 0x16c0) != '\0')) &&
       ((*(byte *)(param_1 + 0x31) & 0x10) != 0)) {
      *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) | 0x10;
    }
    *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) & 0xfd;
  }
  FUN_1408f10c6(param_1,param_2);
  return param_2;
}



// FUNCTION 143d29284 FUN_143d29284 body=914 status=ok
// SIG undefined FUN_143d29284(void)

ulonglong FUN_143d29284(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [36];
  int local_74;
  ulonglong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  short local_4c [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar11 = 0;
  local_58 = param_2;
  if (param_1 != 0) {
    local_60 = *(undefined8 *)(param_1 + 0x38);
    if (DAT_14cb7c230 == 0) {
      uVar17 = 1;
      iVar14 = 0;
      uVar2 = 0;
    }
    else {
      puVar13 = &DAT_14cb7c218;
      if (DAT_14cb7c228 != (uint *)0x0) {
        puVar13 = DAT_14cb7c228;
      }
      uVar2 = *puVar13;
      if (uVar2 == 0) {
        iVar14 = DAT_14cb7c230 + 0x1e;
        if (-1 < (int)(DAT_14cb7c230 - 1)) {
          iVar14 = DAT_14cb7c230 - 1;
        }
        uVar11 = 0;
        uVar17 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar17 = uVar11;
        }
        uVar12 = 0;
        iVar14 = 0;
        do {
          if (uVar17 == uVar12) goto LAB_143d295e2;
          iVar14 = iVar14 + 0x20;
          uVar2 = puVar13[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar2 == 0);
        uVar11 = uVar12 & 0xffffffff;
      }
      else {
        uVar11 = 0;
        iVar14 = 0;
      }
      uVar17 = (ulonglong)(-uVar2 & uVar2);
      uVar12 = uVar17 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar2 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if ((int)DAT_14cb7c230 <= (int)uVar2) {
        uVar2 = DAT_14cb7c230;
      }
    }
    if (uVar2 != DAT_14cb7c230) {
      uVar16 = 0xffffffff;
      local_70 = (ulonglong)DAT_14cb7c230;
      local_68 = param_1;
      do {
        lVar15 = (longlong)(int)uVar2 * 0x20 + DAT_14cb7c208;
        local_74 = iVar14;
        cVar1 = FUN_1405f6df2(lVar15,local_60);
        iVar10 = (int)uVar11;
        if ((cVar1 != '\0') && (iVar14 = *(int *)(lVar15 + 0x10), (longlong)iVar14 != 0)) {
          lVar15 = *(longlong *)(lVar15 + 8);
          lVar9 = 0;
          do {
            iVar3 = *(int *)(lVar15 + 4 + lVar9);
            if ((((((iVar3 != 0) && (uVar2 = *(uint *)(lVar15 + lVar9), -1 < (int)uVar2)) &&
                  ((int)uVar2 < DAT_14c9647dc)) &&
                 ((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0
                  && (*(int *)(lVar5 + 0x10) == iVar3)))) &&
                (((*(uint *)(lVar5 + 8) & 0x10200000) == 0 &&
                 ((lVar5 = FUN_1400f6f32(param_1), lVar5 != 0 &&
                  (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)))))) &&
               (FUN_140f5a278(lVar5,local_4c,local_58,0), -1 < local_4c[0])) {
              iVar3 = *(int *)(lVar15 + 4 + lVar9);
              if ((iVar3 == 0) || (uVar2 = *(uint *)(lVar15 + lVar9), (int)uVar2 < 0)) {
LAB_143d294aa:
                lVar6 = 0;
              }
              else {
                lVar6 = 0;
                if ((int)uVar2 < DAT_14c9647dc) {
                  plVar7 = (longlong *)
                           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                  if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != iVar3)) ||
                     ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_143d294aa;
                  lVar6 = *plVar7;
                }
              }
              lVar6 = *(longlong *)(lVar6 + 0x28);
              lVar5 = FUN_140d1732e(lVar5,local_4c);
              param_1 = local_68;
              if (*(longlong *)(lVar6 + 0x30) == lVar5) {
                iVar14 = *(int *)(lVar15 + 4 + lVar9);
                if (iVar14 == 0) goto LAB_143d29360;
                uVar2 = *(uint *)(lVar15 + lVar9);
                uVar11 = 0;
                if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d295e2;
                puVar8 = (ulonglong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((puVar8 == (ulonglong *)0x0) ||
                   (((int)puVar8[2] != iVar14 || ((puVar8[1] & 0x10200000) != 0))))
                goto LAB_143d29360;
                uVar11 = *puVar8;
                goto LAB_143d295e2;
              }
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar14 * 8 != lVar9);
        }
        uVar16 = uVar16 & ~(uint)uVar17;
        puVar13 = DAT_14cb7c228;
        if (DAT_14cb7c228 == (uint *)0x0) {
          puVar13 = &DAT_14cb7c218;
        }
        lVar15 = (longlong)iVar10;
        uVar2 = puVar13[lVar15] & uVar16;
        iVar14 = local_74;
        if (uVar2 == 0) {
          iVar3 = DAT_14cb7c230 + 0x1e;
          if (-1 < (int)(DAT_14cb7c230 - 1)) {
            iVar3 = DAT_14cb7c230 - 1;
          }
          iVar3 = iVar3 >> 5;
          iVar14 = local_74 + 0x20;
          iVar4 = iVar3;
          if (iVar3 < iVar10) {
            iVar4 = iVar10;
          }
          if (iVar10 < iVar3) {
            lVar9 = 0;
            do {
              uVar2 = puVar13[lVar15 + lVar9 + 1];
              if (uVar2 != 0) {
                uVar11 = (ulonglong)(iVar10 + (int)lVar9 + 1);
                uVar16 = 0xffffffff;
                goto LAB_143d2953b;
              }
              iVar14 = iVar14 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar4 - lVar15 != lVar9);
            uVar16 = 0xffffffff;
            iVar10 = iVar4;
          }
          uVar11 = (ulonglong)(iVar10 + 1);
          param_1 = local_68;
          uVar2 = DAT_14cb7c230;
        }
        else {
LAB_143d2953b:
          uVar17 = (ulonglong)(-uVar2 & uVar2);
          uVar12 = uVar17 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar2 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if ((int)DAT_14cb7c230 <= (int)uVar2) {
            uVar2 = DAT_14cb7c230;
          }
        }
      } while (uVar2 != (uint)local_70);
    }
LAB_143d29360:
    uVar11 = 0;
  }
LAB_143d295e2:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 143d29618 FUN_143d29618 body=477 status=ok
// SIG undefined FUN_143d29618(void)

undefined8 FUN_143d29618(longlong param_1,uint *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  void *_Dst;
  longlong lVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  uint *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_140983b3e();
  plVar1 = (longlong *)(param_1 + 0xc0);
  FUN_1414685e9(plVar1,uVar2);
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    lVar3 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x100);
    }
    uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & *param_2) * 4);
    if (uVar4 != 0xffffffff) {
      do {
        puVar7 = (uint *)(*plVar1 + (longlong)(int)uVar4 * 0x18);
        if (*puVar7 == *param_2) {
          if ((puVar7 != (uint *)0x0) && (puVar7 = puVar7 + 2, puVar7 != (uint *)0x0))
          goto LAB_143d297c9;
          break;
        }
        uVar4 = puVar7[4];
      } while (uVar4 != 0xffffffff);
    }
  }
  local_38 = param_2;
  FUN_143d339e2(plVar1,&local_2c,&local_38,0);
  puVar7 = (uint *)(*plVar1 + (longlong)local_2c * 0x18 + 8);
  _Dst = (void *)FUN_14001cc68(200);
  memset(_Dst,0,200);
  FUN_14883fd10(_Dst);
  plVar1 = *(longlong **)puVar7;
  *(void **)puVar7 = _Dst;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x90))(plVar1,1);
    _Dst = *(void **)puVar7;
  }
  if (*(int *)(param_1 + 100) == 0) {
LAB_143d297ed:
    uVar2 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x60);
    uVar2 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 100) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_143d297ed;
      uVar2 = *puVar5;
    }
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar4 = *(uint *)(param_1 + 0x50);
    uVar6 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_143d297b9;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x54) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar5;
      goto LAB_143d297b9;
    }
  }
  uVar6 = 0;
LAB_143d297b9:
  local_48 = 0;
  FUN_143d202e2(_Dst,uVar6,uVar2,param_2);
LAB_143d297c9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined8 *)puVar7;
}



// FUNCTION 143d297f6 FUN_143d297f6 body=76 status=ok
// SIG undefined FUN_143d297f6(void)

void FUN_143d297f6(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  FUN_143d3403e(param_1 + 0xc0,*param_2);
  uVar1 = FUN_140983b3e(param_1);
  FUN_1414685e9(param_1 + 0xc0,uVar1);
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_141467c9c();
    return;
  }
  return;
}



// FUNCTION 143d2992a FUN_143d2992a body=120 status=ok
// SIG undefined FUN_143d2992a(void)

undefined8 FUN_143d2992a(longlong param_1,uint *param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    lVar2 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x100);
    }
    uVar3 = *(uint *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & *param_2) * 4);
    if (uVar3 != 0xffffffff) {
      while (puVar1 = (uint *)(*(longlong *)(param_1 + 0xc0) + (longlong)(int)uVar3 * 0x18),
            *puVar1 != *param_2) {
        uVar3 = puVar1[4];
        if (uVar3 == 0xffffffff) {
          return 0;
        }
      }
      if (puVar1 + 2 != (uint *)0x0 && puVar1 != (uint *)0x0) {
        return *(undefined8 *)(puVar1 + 2);
      }
    }
  }
  return 0;
}



// FUNCTION 143d299a2 FUN_143d299a2 body=91 status=ok
// SIG undefined FUN_143d299a2(void)

void FUN_143d299a2(void)

{
  if (DAT_14cb7c2a8 != 0) {
    if (DAT_14cb7c2a0 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb7c2a0)(DAT_14cb7c2a0,0);
    FUN_1446efa72(&DAT_14cb7c2a0,0,0,0x10);
    DAT_14cb7c2a8 = 0;
  }
  if (DAT_14cb7c2a0 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d299fd FUN_143d299fd body=42 status=ok
// SIG undefined FUN_143d299fd(void)

undefined8 FUN_143d299fd(longlong param_1)

{
  float fVar1;
  undefined4 uVar3;
  double dVar2;
  
  fVar1 = 0.0;
  uVar3 = 0;
  if ((param_1 != 0) && (*(longlong **)(param_1 + 0x178) != (longlong *)0x0)) {
    dVar2 = (double)(**(code **)(**(longlong **)(param_1 + 0x178) + 0x640))(0);
    uVar3 = (undefined4)((ulonglong)dVar2 >> 0x20);
    fVar1 = (float)dVar2;
  }
  return CONCAT44(uVar3,fVar1);
}



// FUNCTION 143d29a28 FUN_143d29a28 body=30 status=ok
// SIG undefined FUN_143d29a28(void)

void FUN_143d29a28(undefined1 *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0x7fffffff;
  if (param_2 < 0x7fffffff) {
    uVar1 = param_2;
  }
  *param_1 = 2;
  *(int *)(param_1 + 0xc) = (int)uVar1;
  *(undefined8 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 143d29aea FUN_143d29aea body=286 status=ok
// SIG undefined FUN_143d29aea(void)

longlong FUN_143d29aea(longlong *param_1)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_143d29b42;
  }
  lVar1 = 0;
LAB_143d29b42:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d29c0a FUN_143d29c0a body=58 status=ok
// SIG undefined FUN_143d29c0a(void)

undefined8 * FUN_143d29c0a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 1) = DAT_14c948620;
    uVar2 = DAT_14c948618;
  }
  else {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
    uVar2 = *puVar1;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 143d29c44 FUN_143d29c44 body=41 status=ok
// SIG undefined FUN_143d29c44(void)

void FUN_143d29c44(void)

{
  DAT_14cb7c3b8 = 0;
  if (DAT_14cb7c3b0 != 0) {
    FUN_1400020a8();
  }
  FUN_14615664a();
  return;
}



// FUNCTION 143d29c6d FUN_143d29c6d body=41 status=ok
// SIG undefined FUN_143d29c6d(void)

void FUN_143d29c6d(void)

{
  DAT_14cb7c408 = 0;
  if (DAT_14cb7c400 != 0) {
    FUN_1400020a8();
  }
  FUN_145d65c78();
  return;
}



// FUNCTION 143d29c96 FUN_143d29c96 body=537 status=ok
// SIG undefined FUN_143d29c96(void)

void FUN_143d29c96(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar6 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar6 != 2)) {
    if (iVar6 != 1) {
      return;
    }
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    if (DVar4 != DVar5) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    lVar10 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x428);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 1000) + (longlong)iVar6 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar6 * 0x10) == param_2) {
          puVar9 = (uint *)(lVar10 + 4);
          if (puVar9 == (uint *)0x0 || lVar10 == 0) {
            return;
          }
          uVar1 = *puVar9;
          uVar11 = (ulonglong)uVar1;
          if ((int)uVar1 < 0) {
            return;
          }
          if (*(int *)(param_1 + 0x60) <= (int)uVar1) {
            return;
          }
          lVar10 = param_1 + 0x48;
          if (*(longlong *)(param_1 + 0x58) != 0) {
            lVar10 = *(longlong *)(param_1 + 0x58);
          }
          if ((*(uint *)(lVar10 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) == 0) {
            return;
          }
          lVar10 = uVar11 * 0x300 + *(longlong *)(param_1 + 0x38);
          iVar6 = *(int *)(param_1 + 0x10);
          if ((longlong)iVar6 != 0) {
            lVar3 = *(longlong *)(param_1 + 8);
            lVar13 = 0;
            do {
              plVar8 = *(longlong **)(lVar3 + 8 + lVar13);
              if (((((plVar8 != (longlong *)0x0) &&
                    (iVar2 = *(int *)(lVar3 + 4 + lVar13), iVar2 != 0)) &&
                   (uVar1 = *(uint *)(lVar3 + lVar13), -1 < (int)uVar1)) &&
                  (((int)uVar1 < DAT_14c9647dc &&
                   (lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8),
                   lVar12 != 0)))) &&
                 ((*(int *)(lVar12 + 0x10) == iVar2 && ((*(uint *)(lVar12 + 8) & 0x10200000) == 0)))
                 ) {
                (**(code **)(*plVar8 + 0x18))
                          (plVar8,lVar10,
                           CONCAT71((int7)((ulonglong)lVar12 >> 8),
                                    (*(byte *)(lVar10 + 0x2b1) & 8) == 0));
              }
              lVar13 = lVar13 + 0x10;
            } while ((longlong)iVar6 * 0x10 != lVar13);
            uVar11 = (ulonglong)*puVar9;
          }
          FUN_143d2df64(param_1,lVar10,uVar11,1);
          if (*(int *)(param_1 + 0x20) != 0) {
            uVar1 = *(uint *)(param_1 + 0x1c);
            uVar7 = 0;
            if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143d29e96;
            plVar8 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if ((plVar8 != (longlong *)0x0) &&
               (((int)plVar8[2] == *(int *)(param_1 + 0x20) &&
                ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
                lVar10 = *plVar8;
              }
              else {
                lVar10 = 0;
              }
              if (*(longlong *)(lVar10 + 0x30) != 0) {
                uVar7 = *(undefined8 *)(*(longlong *)(lVar10 + 0x30) + 0x360);
                goto LAB_143d29e96;
              }
            }
          }
          uVar7 = 0;
LAB_143d29e96:
          FUN_143d2c0aa(param_1,uVar7);
          return;
        }
        iVar6 = *(int *)(lVar10 + 8);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 143d29eaf FUN_143d29eaf body=69 status=ok
// SIG undefined FUN_143d29eaf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d29eaf(void)

{
  _DAT_14cb7c430 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d29ef1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c438,1);
  return;
}



// FUNCTION 143d29ef4 FUN_143d29ef4 body=6979 status=ok
// SIG undefined FUN_143d29ef4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d29ef4(longlong *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  void *pvVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  ulonglong *puVar12;
  char cVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  int *piVar20;
  longlong lVar21;
  ulonglong uVar22;
  byte bVar23;
  longlong *plVar24;
  int iVar25;
  ulonglong *puVar26;
  longlong lVar27;
  double *pdVar28;
  longlong *plVar29;
  undefined4 *puVar30;
  ulonglong *puVar31;
  double *pdVar32;
  longlong *plVar33;
  undefined4 *puVar34;
  longlong lVar35;
  uint *puVar36;
  uint *puVar37;
  bool bVar38;
  uint uVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_4c8 [32];
  undefined4 local_4a8;
  undefined4 local_4a0;
  undefined4 local_498;
  undefined8 local_490;
  undefined2 *local_488;
  undefined1 *local_480;
  undefined1 *local_478;
  code **local_470;
  undefined1 *local_468;
  code *local_460;
  uint *local_450;
  longlong *local_448;
  longlong *local_440;
  int *local_438;
  ulonglong local_430;
  longlong *local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  code *local_408;
  ulonglong *local_400;
  code *local_3f8;
  ulonglong local_3f0;
  ulonglong local_3e8;
  undefined4 local_3e0;
  undefined1 local_3dc;
  char local_3d8;
  undefined8 local_3d4;
  undefined1 local_3cc;
  ulonglong local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  ulonglong uStack_3b0;
  uint local_3a8;
  undefined8 local_3a4;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined8 uStack_38c;
  uint local_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  ulonglong uStack_378;
  double local_368 [2];
  undefined1 local_358 [16];
  undefined8 local_348;
  undefined8 uStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined8 local_318;
  undefined8 uStack_310;
  char local_308;
  ulonglong local_2f8;
  ulonglong uStack_2f0;
  ulonglong local_2e8;
  ulonglong uStack_2e0;
  undefined4 local_2d8;
  double local_2c8 [2];
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined2 local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  ulonglong local_190 [4];
  undefined8 uStack_170;
  undefined8 local_168;
  undefined1 local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  byte local_148;
  byte local_147;
  undefined4 local_144;
  undefined1 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  ulonglong local_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  uint uStack_108;
  int iStack_104;
  undefined1 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar13 = (**(code **)(*param_1 + 0x310))(param_1,0), cVar13 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  lVar18 = param_1[5];
  lVar19 = *(longlong *)(lVar18 + 0x98);
  if (lVar19 == 0) {
LAB_143d29fd2:
    if ((local_f0 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (DAT_14caf9cd0 == 0) {
    local_470 = &local_3f8;
    local_3f8 = FUN_141030f22;
    local_460 = FUN_14081d0ea;
    local_468 = &LAB_1463c0cc2;
    local_478 = &LAB_147c9db5b;
    local_480 = &LAB_1463f9c44;
    local_488 = &DAT_149e063b2;
    local_490 = 0x2000000000;
    local_498 = 0x10000004;
    local_4a0 = 8;
    local_4a8 = 0x958;
    FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    lVar19 = *(longlong *)(lVar18 + 0x98);
    if (lVar19 == 0) goto LAB_143d29fd2;
  }
  if ((((DAT_14caf9cd0 == 0) || (lVar18 = *(longlong *)(lVar19 + 0x10), lVar18 == 0)) ||
      (*(int *)(lVar18 + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar18 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
       DAT_14caf9cd0 + 0x30 || (*(longlong *)(lVar19 + 0x438) == 0)))) goto LAB_143d29fd2;
  if (((int)param_1[0x15] == 0) &&
     ((*(int *)((longlong)param_1 + 0xac) == 0 && ((int)param_1[0x10] < 1)))) {
    *(short *)(param_1 + 0x21) = (short)param_1[0x21] + 1;
    goto LAB_143d29fd2;
  }
  *(undefined2 *)(param_1 + 0x21) = 0;
  lVar18 = DAT_14cb7c440;
  local_448 = param_1;
  if ((int)param_1[0xe] == 3) {
    lVar18 = (**(code **)(*(longlong *)param_1[5] + 0x180))();
    if ((lVar18 == 0) || (lVar19 = FUN_1415c71f6(param_1), auVar10 = _DAT_1499387d0, lVar19 == 0))
    goto LAB_143d29fd2;
    if ((longlong)(int)param_1[0x12] != 0) {
      puVar36 = (uint *)param_1[0x11];
      local_450 = puVar36 + (longlong)(int)param_1[0x12] * 0x8a;
      local_438 = (int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60
                         );
      local_428 = (longlong *)(lVar19 + 1000);
      local_420 = lVar19 + 0x420;
      local_440 = (longlong *)(lVar19 + 0x38);
      local_418 = lVar19 + 0x230;
      dVar6 = (double)DAT_1499387d0;
      dVar7 = DAT_1499387d0._8_8_;
      local_410 = lVar18;
      do {
        local_3d8 = '\0';
        local_3cc = 0;
        local_3d4 = 0;
        uStack_39c = DAT_14cb7bd70;
        local_3a4 = DAT_14cb7bd68;
        uStack_390 = DAT_14cb7bd88;
        uStack_398 = (undefined4)DAT_14cb7bd80;
        uStack_394 = (undefined4)((ulonglong)DAT_14cb7bd80 >> 0x20);
        local_308 = '\0';
        uStack_37c = 0;
        uStack_378 = 0;
        uStack_38c = 0;
        local_384 = 0;
        local_380 = 0;
        local_2d8 = 0;
        local_2e8 = 0;
        local_2f8 = 0;
        uStack_2f0 = 0;
        pdVar28 = (double *)&DAT_14c846480;
        pdVar32 = local_2c8;
        for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
          *pdVar32 = *pdVar28;
          pdVar28 = pdVar28 + 1;
          pdVar32 = pdVar32 + 1;
        }
        local_208 = 0;
        local_200 = 0;
        local_228 = 0;
        uStack_220 = 0;
        local_238 = 0;
        uStack_230 = 0;
        local_248 = 0;
        uStack_240 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_1fc = 0xffffffff00000080;
        local_1f4 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1b8 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1b0 = 0xf;
        local_1a8 = 1;
        local_1a4 = 0;
        uStack_19c = 0;
        local_190[2] = DAT_14c8464f0;
        local_190[0] = DAT_14c8464e0;
        local_190[1] = DAT_14c8464e8;
        local_168 = DAT_14c8464f0;
        local_190[3] = DAT_14c8464e0;
        uStack_170 = DAT_14c8464e8;
        local_160 = 0;
        local_158 = 0xbf800000bf800000;
        uStack_150 = 0;
        local_148 = 8;
        local_147 = local_147 & 0xe0 | 2;
        local_144 = 0xffffffff;
        local_140 = 0;
        local_13c = 0;
        uStack_134 = 0;
        uStack_108 = 0;
        iStack_104 = 0;
        uStack_100 = 0;
        uStack_118 = 0;
        local_110 = 0;
        uStack_10f = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_15c = (float)*(double *)(lVar18 + 0x6d0);
        local_3f8 = (code *)(ulonglong)*puVar36;
        local_3a8 = puVar36[0xb];
        local_3c8 = *(ulonglong *)(puVar36 + 3);
        uStack_3b0 = *(ulonglong *)(puVar36 + 9);
        uStack_3b8 = (undefined4)*(undefined8 *)(puVar36 + 7);
        uStack_3b4 = (undefined4)((ulonglong)*(undefined8 *)(puVar36 + 7) >> 0x20);
        uStack_3c0 = (undefined4)*(undefined8 *)(puVar36 + 5);
        uStack_3bc = (undefined4)((ulonglong)*(undefined8 *)(puVar36 + 5) >> 0x20);
        uStack_2e0 = *(ulonglong *)(puVar36 + 0x4f);
        FUN_1407b25f0(&local_268,puVar36 + 0xc);
        local_190[2] = *(ulonglong *)(puVar36 + 0x62);
        local_190[0] = *(ulonglong *)(puVar36 + 0x5e);
        local_190[1] = *(ulonglong *)(puVar36 + 0x60);
        local_168 = *(undefined8 *)(puVar36 + 0x68);
        local_190[3] = *(ulonglong *)(puVar36 + 100);
        uStack_170 = *(undefined8 *)(puVar36 + 0x66);
        local_160 = (undefined1)puVar36[0x4e];
        auVar47 = *(undefined1 (*) [16])(puVar36 + 0x58);
        auVar46 = divpd(auVar47,auVar10);
        auVar48._8_8_ = 0;
        auVar48._0_8_ = *(double *)(puVar36 + 0x5c);
        auVar48 = divpd(auVar48,auVar10);
        auVar46 = roundpd(auVar46,auVar46,3);
        auVar48 = roundpd(auVar48,auVar48,3);
        dVar43 = (auVar47._0_8_ - auVar46._0_8_ * dVar6) * 0.008726646259971648;
        dVar44 = (auVar47._8_8_ - auVar46._8_8_ * dVar7) * 0.008726646259971648;
        dVar8 = (*(double *)(puVar36 + 0x5c) - auVar48._0_8_ * dVar6) * 0.008726646259971648;
        dVar9 = (0.0 - auVar48._8_8_ * dVar7) * 0.008726646259971648;
        dVar40 = sin(dVar43);
        dVar41 = sin(dVar44);
        dVar42 = sin(dVar8);
        sin(dVar9);
        dVar43 = cos(dVar43);
        dVar44 = cos(dVar44);
        dVar45 = cos(dVar8);
        cos(dVar9);
        dVar8 = dVar41 * dVar40 * dVar42 + dVar44 * dVar43 * dVar45;
        local_2c8[0] = dVar40 * dVar41 * dVar45 - dVar43 * dVar44 * dVar42;
        local_2c8[1] = -(dVar40 * dVar44 * dVar45) - dVar43 * dVar41 * dVar42;
        local_2a8 = *(undefined8 *)(puVar36 + 0x52);
        uStack_2a0 = *(undefined8 *)(puVar36 + 0x54);
        local_298 = *(undefined8 *)(puVar36 + 0x56);
        local_288._8_8_ = DAT_14c846518;
        local_288._0_8_ = DAT_14c846510;
        local_2b8._8_4_ = SUB84(dVar8,0);
        local_2b8._0_8_ = -(dVar44 * dVar40 * dVar42) + dVar41 * dVar43 * dVar45;
        local_2b8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        uStack_290 = 0;
        local_278 = DAT_14c846520;
        uStack_270 = 0;
        local_15c = (float)puVar36[1];
        local_158 = CONCAT44(local_158._4_4_,puVar36[2]);
        local_148 = (char)puVar36[0x42] << 4 |
                    local_148 & 0xe7 | *(char *)((longlong)puVar36 + 0x139) << 3;
        local_147 = local_147 & 0xef | *(char *)((longlong)puVar36 + 0x109) << 4;
        local_3cc = *(undefined1 *)((longlong)puVar36 + 0x13a);
        local_128 = *(ulonglong *)(puVar36 + 0x44);
        uStack_120 = *(ulonglong *)(puVar36 + 0x46);
        uStack_118 = *(ulonglong *)(puVar36 + 0x48);
        if ((uint *)&local_110 != puVar36 + 0x4a) {
          uVar39 = puVar36[0x4c];
          pvVar4 = *(void **)(puVar36 + 0x4a);
          uStack_108 = uVar39;
          if (uVar39 == 0 && iStack_104 == 0) {
            iStack_104 = 0;
          }
          else {
            FUN_1446dd670(&local_110,uVar39);
            if (uVar39 != 0) {
              memcpy((void *)CONCAT71(uStack_10f,local_110),pvVar4,(longlong)(int)uVar39 * 2);
            }
          }
        }
        bVar23 = *(byte *)((longlong)puVar36 + 0x13b);
        if (bVar23 != 0xff) {
          if (bVar23 == 0) {
            lVar21 = param_1[5];
          }
          else if ((*(int *)(param_1[5] + 0x50) < (int)(uint)bVar23) ||
                  (lVar21 = *(longlong *)
                             (*(longlong *)(param_1[5] + 0x48) + -8 + (ulonglong)(uint)bVar23 * 8),
                  lVar21 == 0)) goto LAB_143d2a70e;
          lVar21 = *(longlong *)(lVar21 + 0x30);
          if (lVar21 == 0) {
LAB_143d2a6fa:
            local_3d4 = 0;
            iVar14 = 0;
          }
          else {
            if (DAT_14cb61cd0 == 0) {
              local_408 = FUN_141030f22;
              local_460 = FUN_14081d0ea;
              local_468 = &LAB_1463b31ae;
              local_470 = &local_408;
              local_478 = &LAB_1486dca4f;
              local_480 = &LAB_1464f50a6;
              local_488 = &DAT_149e063b2;
              local_490 = 0;
              local_498 = 0x10000004;
              local_4a0 = 8;
              local_4a8 = 0xd70;
              FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
            }
            if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < *(int *)(DAT_14cb61cd0 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) != DAT_14cb61cd0 + 0x30))
            goto LAB_143d2a6fa;
            uVar39 = *(uint *)(lVar21 + 0xc);
            local_3d4 = CONCAT44(local_3d4._4_4_,uVar39);
            if ((int)uVar39 < DAT_14c9647dc) {
              lVar21 = (ulonglong)((uVar39 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8);
            }
            else {
              lVar21 = 0;
            }
            iVar14 = *(int *)(lVar21 + 0x10);
            if (*(int *)(lVar21 + 0x10) == 0) {
              LOCK();
              iVar14 = DAT_14c964868 + 1;
              UNLOCK();
              iVar25 = DAT_14c964868 + 1;
              bVar38 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar14;
              if (bVar38) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar25);
              }
              LOCK();
              iVar14 = *(int *)(lVar21 + 0x10);
              bVar38 = iVar14 == 0;
              if (bVar38) {
                *(int *)(lVar21 + 0x10) = iVar25;
                iVar14 = 0;
              }
              UNLOCK();
              if (bVar38) {
                iVar14 = iVar25;
              }
            }
          }
          local_3d4 = CONCAT44(iVar14,(undefined4)local_3d4);
        }
LAB_143d2a70e:
        local_384 = puVar36[0x72];
        local_3a4 = *(undefined8 *)(puVar36 + 0x6a);
        auVar47 = *(undefined1 (*) [16])(puVar36 + 0x6e);
        uStack_394 = auVar47._0_4_;
        uStack_390 = auVar47._4_4_;
        uStack_38c = auVar47._8_8_;
        uStack_39c = (undefined4)*(undefined8 *)(puVar36 + 0x6c);
        uStack_398 = (undefined4)((ulonglong)*(undefined8 *)(puVar36 + 0x6c) >> 0x20);
        local_380 = (undefined4)*(undefined8 *)(puVar36 + 0x73);
        uStack_37c = (undefined4)((ulonglong)*(undefined8 *)(puVar36 + 0x73) >> 0x20);
        uStack_378 = *(ulonglong *)(puVar36 + 0x75);
        if ((char)puVar36[0x77] == '\x01') {
          auVar47 = *(undefined1 (*) [16])(puVar36 + 0x7e);
          auVar46 = divpd(auVar47,auVar10);
          auVar49._8_8_ = 0;
          auVar49._0_8_ = *(double *)(puVar36 + 0x82);
          auVar48 = divpd(auVar49,auVar10);
          auVar46 = roundpd(auVar46,auVar46,3);
          auVar48 = roundpd(auVar48,auVar48,3);
          dVar43 = (auVar47._0_8_ - auVar46._0_8_ * dVar6) * 0.008726646259971648;
          dVar44 = (auVar47._8_8_ - auVar46._8_8_ * dVar7) * 0.008726646259971648;
          dVar8 = (*(double *)(puVar36 + 0x82) - auVar48._0_8_ * dVar6) * 0.008726646259971648;
          dVar9 = (0.0 - auVar48._8_8_ * dVar7) * 0.008726646259971648;
          dVar40 = sin(dVar43);
          dVar41 = sin(dVar44);
          dVar42 = sin(dVar8);
          sin(dVar9);
          dVar43 = cos(dVar43);
          dVar44 = cos(dVar44);
          dVar45 = cos(dVar8);
          cos(dVar9);
          dVar8 = dVar41 * dVar40 * dVar42 + dVar44 * dVar43 * dVar45;
          local_368[0] = dVar40 * dVar41 * dVar45 - dVar43 * dVar44 * dVar42;
          local_368[1] = -(dVar40 * dVar44 * dVar45) - dVar43 * dVar41 * dVar42;
          local_348 = *(undefined8 *)(puVar36 + 0x78);
          uStack_340 = *(undefined8 *)(puVar36 + 0x7a);
          local_338._8_8_ = 0;
          local_338._0_8_ = *(ulonglong *)(puVar36 + 0x7c);
          local_328 = *(undefined1 (*) [16])(puVar36 + 0x84);
          local_318 = *(undefined8 *)(puVar36 + 0x88);
          local_358._8_4_ = SUB84(dVar8,0);
          local_358._0_8_ = -(dVar44 * dVar40 * dVar42) + dVar41 * dVar43 * dVar45;
          local_358._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          uStack_310 = 0;
          local_308 = '\x01';
        }
        if ((DAT_14c86a9f8 == '\x01') && (*local_438 == 1)) {
          FUN_140ad26c0();
          GetCurrentThreadId();
        }
        if ((((*(int *)(lVar19 + 0x20) != 0) &&
             (uVar39 = *(uint *)(lVar19 + 0x1c), -1 < (int)uVar39)) && ((int)uVar39 < DAT_14c9647dc)
            ) && (((lVar21 = (ulonglong)((uVar39 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8),
                   lVar21 != 0 && (*(int *)(lVar21 + 0x10) == *(int *)(lVar19 + 0x20))) &&
                  (((*(uint *)(lVar21 + 8) & 0x10200000) == 0 &&
                   (iVar14 = FUN_140ac16d8(lVar19), lVar21 = DAT_14cb7c458, iVar14 == 3)))))) {
          iVar14 = *local_438;
          if (iVar14 == 0x40000002) {
            uVar22 = 0;
          }
          else {
            bVar38 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar14 != 2)) {
              if (iVar14 == 1) {
                DVar15 = FUN_140ad26c0();
                DVar16 = GetCurrentThreadId();
                bVar38 = DVar15 == DVar16;
              }
              else {
                bVar38 = false;
              }
            }
            uVar22 = (ulonglong)(bVar38 ^ 1);
          }
          iVar14 = *(int *)(lVar21 + uVar22 * 4);
          bVar23 = local_148 & 0xfe | 0 < iVar14;
          if ((0 < iVar14) && (*(int *)(lVar19 + 0x3f0) != *(int *)(lVar19 + 0x41c))) {
            lVar18 = *(longlong *)(lVar19 + 0x428);
            if (*(longlong *)(lVar19 + 0x428) == 0) {
              lVar18 = local_420;
            }
            iVar14 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar19 + 0x430) - 1U & (uint)local_3f8)
                                       * 4);
            if (iVar14 != -1) {
              do {
                lVar18 = *local_428 + (longlong)iVar14 * 0x10;
                if (*(uint *)(*local_428 + (longlong)iVar14 * 0x10) == (uint)local_3f8) {
                  if ((int *)(lVar18 + 4) != (int *)0x0 && lVar18 != 0) {
                    iVar14 = *(int *)(lVar18 + 4);
                    lVar27 = (longlong)iVar14;
                    local_408 = (code *)CONCAT44(local_408._4_4_,iVar14);
                    lVar18 = *local_440;
                    lVar21 = lVar27 * 0x300;
                    bVar2 = *(byte *)(lVar18 + 0x2b0 + lVar21);
                    *(byte *)(lVar18 + 0x2b0 + lVar21) = bVar2 & 0xbf;
                    *(undefined8 *)(lVar18 + 0x2a8 + lVar21) = DAT_14cb7c538;
                    *(byte *)(lVar18 + 0x2b0 + lVar21) = bVar2 & 0xb7 | local_148 & 8;
                    local_148 = bVar23;
                    goto LAB_143d2aca1;
                  }
                  break;
                }
                iVar14 = *(int *)(lVar18 + 8);
              } while (iVar14 != -1);
            }
          }
          local_148 = bVar23;
          FUN_14188280e(local_440,&local_408);
          puVar12 = local_400;
          *local_400 = (ulonglong)local_3f8;
          *(char *)(local_400 + 4) = local_3d8;
          if (local_3d8 == '\x01') {
            local_400[1] = local_3f0;
            local_400[2] = local_3e8;
            *(undefined4 *)(local_400 + 3) = local_3e0;
            *(undefined1 *)((longlong)local_400 + 0x1c) = local_3dc;
          }
          *(undefined1 *)((longlong)local_400 + 0x2c) = local_3cc;
          *(undefined8 *)((longlong)local_400 + 0x24) = local_3d4;
          *(undefined4 *)(local_400 + 7) = uStack_3c0;
          local_400[6] = local_3c8;
          *(undefined4 *)((longlong)local_400 + 0x44) = uStack_3b4;
          *(ulonglong *)((longlong)local_400 + 0x3c) = CONCAT44(uStack_3b8,uStack_3bc);
          *(uint *)(local_400 + 10) = local_3a8;
          local_400[9] = uStack_3b0;
          *(undefined4 *)((longlong)local_400 + 0x5c) = uStack_39c;
          *(undefined8 *)((longlong)local_400 + 0x54) = local_3a4;
          local_400[0xc] = CONCAT44(uStack_394,uStack_398);
          *(undefined4 *)(local_400 + 0xd) = uStack_390;
          *(undefined8 *)((longlong)local_400 + 0x6c) = uStack_38c;
          *(uint *)((longlong)local_400 + 0x74) = local_384;
          local_400[0xf] = CONCAT44(uStack_37c,local_380);
          local_400[0x10] = uStack_378;
          *(char *)(local_400 + 0x1e) = local_308;
          if (local_308 == '\x01') {
            pdVar28 = local_368;
            pdVar32 = (double *)(local_400 + 0x12);
            for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
              *pdVar32 = *pdVar28;
              pdVar28 = pdVar28 + 1;
              pdVar32 = pdVar32 + 1;
            }
          }
          local_400[0x20] = local_2f8;
          local_400[0x21] = uStack_2f0;
          local_400[0x22] = local_2e8;
          if ((local_2e8 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(local_2e8,&local_268);
          }
          puVar26 = &uStack_2e0;
          puVar31 = puVar12 + 0x23;
          for (lVar18 = 0xf; lVar18 != 0; lVar18 = lVar18 + -1) {
            *puVar31 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar31 = puVar31 + 1;
          }
          FUN_1406fd608(puVar12 + 0x32,&local_268);
          puVar26 = local_190;
          puVar31 = puVar12 + 0x4d;
          for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
            *puVar31 = *puVar26;
            puVar26 = puVar26 + 1;
            puVar31 = puVar31 + 1;
          }
          *(undefined4 *)(puVar12 + 0x59) = uStack_134._4_4_;
          puVar12[0x5a] = local_128;
          puVar12[0x5b] = uStack_120;
          puVar12[0x5c] = uStack_118;
          puVar12[0x5d] = 0;
          lVar18 = (longlong)(int)uStack_108;
          pvVar4 = (void *)CONCAT71(uStack_10f,local_110);
          *(uint *)(puVar12 + 0x5e) = uStack_108;
          if (lVar18 == 0) {
            *(undefined4 *)((longlong)puVar12 + 0x2f4) = 0;
          }
          else {
            FUN_1446dd670(puVar12 + 0x5d,uStack_108,0);
            memcpy((void *)puVar12[0x5d],pvVar4,lVar18 * 2);
          }
          *(undefined1 *)(puVar12 + 0x5f) = uStack_100;
          iVar14 = (int)local_408;
          lVar27 = (longlong)(int)local_408;
          piVar20 = (int *)FUN_1415b2eae(local_428,*(undefined4 *)(*local_440 + lVar27 * 0x300),
                                         *local_440 + lVar27 * 0x300);
          *piVar20 = iVar14;
LAB_143d2aca1:
          lVar21 = *(longlong *)(lVar19 + 0x38);
          lVar18 = lVar21 + lVar27 * 0x300;
          FUN_140725828(lVar19,lVar18);
          if ((((((*(longlong *)(lVar21 + 0x108 + lVar27 * 0x300) == 0) ||
                 (*(int *)(lVar18 + 0x104) == 0)) ||
                (uVar39 = *(uint *)(lVar18 + 0x100), (int)uVar39 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar39 ||
                (lVar21 = (ulonglong)((uVar39 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8),
                lVar21 == 0)))) || (*(int *)(lVar21 + 0x10) != *(int *)(lVar18 + 0x104))) ||
             ((*(uint *)(lVar21 + 8) & 0x10200000) != 0)) {
            FUN_143d2c194(lVar19,lVar18);
          }
          FUN_140d82884(local_418);
          if ((*(int *)(lVar19 + 0x20) == 0) || (uVar39 = *(uint *)(lVar19 + 0x1c), (int)uVar39 < 0)
             ) {
LAB_143d2aee8:
            lVar21 = 0;
          }
          else {
            lVar21 = 0;
            if ((int)uVar39 < DAT_14c9647dc) {
              plVar24 = (longlong *)
                        ((ulonglong)((uVar39 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8));
              if (((plVar24 == (longlong *)0x0) || ((int)plVar24[2] != *(int *)(lVar19 + 0x20))) ||
                 ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) goto LAB_143d2aee8;
              lVar21 = *plVar24;
            }
          }
          if (*(longlong *)(lVar21 + 0x30) == 0) {
            local_430 = 0;
          }
          else {
            local_430 = *(ulonglong *)(*(longlong *)(lVar21 + 0x30) + 0x360);
          }
          iVar14 = *(int *)(lVar19 + 0x10);
          if ((longlong)iVar14 != 0) {
            lVar21 = *(longlong *)(lVar19 + 8);
            lVar27 = 0;
            do {
              plVar24 = *(longlong **)(lVar21 + 8 + lVar27);
              if ((((plVar24 != (longlong *)0x0) &&
                   (iVar25 = *(int *)(lVar21 + 4 + lVar27), iVar25 != 0)) &&
                  ((uVar39 = *(uint *)(lVar21 + lVar27), -1 < (int)uVar39 &&
                   (((int)uVar39 < DAT_14c9647dc &&
                    (lVar35 = (ulonglong)((uVar39 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8),
                    lVar35 != 0)))))) &&
                 ((*(int *)(lVar35 + 0x10) == iVar25 && ((*(uint *)(lVar35 + 8) & 0x10200000) == 0))
                 )) {
                (**(code **)(*plVar24 + 0x10))(plVar24,lVar18);
              }
              lVar27 = lVar27 + 0x10;
            } while ((longlong)iVar14 * 0x10 != lVar27);
          }
          FUN_143d2dda8(lVar19,lVar18,*(undefined1 *)(lVar18 + 0x298));
          FUN_143d2c0aa(lVar19,local_430);
          param_1 = local_448;
          lVar18 = local_410;
        }
        if (CONCAT71(uStack_10f,local_110) != 0) {
          FUN_1400020a8();
        }
        FUN_140368b56(&local_268);
        puVar36 = puVar36 + 0x8a;
      } while (puVar36 != local_450);
    }
    auVar10 = _DAT_1499387d0;
    if ((longlong)(int)param_1[0x14] != 0) {
      puVar36 = (uint *)param_1[0x13];
      puVar37 = puVar36 + (longlong)(int)param_1[0x14] * 0x2c;
      local_448 = (longlong *)(lVar19 + 0x48);
      dVar6 = (double)DAT_1499387d0;
      dVar7 = DAT_1499387d0._8_8_;
      do {
        if ((*(char *)((longlong)puVar36 + 9) == '\x04') ||
           (*(char *)((longlong)puVar36 + 9) == '\a')) {
          FUN_143d29c96(lVar19,*puVar36);
          local_3f8 = (code *)(ulonglong)*puVar36;
          FUN_140e15e6a(param_1 + 0x17,&local_3f8);
        }
        else {
          plVar24 = (longlong *)param_1[5];
          if ((plVar24 != (longlong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(plVar24);
LAB_143d2b150:
            (**(code **)(*plVar24 + 0x180))(plVar24);
          }
          else if (plVar24 != (longlong *)0x0) goto LAB_143d2b150;
          if (*(int *)(lVar19 + 0x3f0) != *(int *)(lVar19 + 0x41c)) {
            lVar18 = *(longlong *)(lVar19 + 0x428);
            if (*(longlong *)(lVar19 + 0x428) == 0) {
              lVar18 = lVar19 + 0x420;
            }
            iVar14 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar19 + 0x430) - 1U & *puVar36) * 4);
            if (iVar14 != -1) {
              do {
                lVar18 = *(longlong *)(lVar19 + 1000) + (longlong)iVar14 * 0x10;
                if (*(uint *)(*(longlong *)(lVar19 + 1000) + (longlong)iVar14 * 0x10) == *puVar36) {
                  if ((uint *)(lVar18 + 4) != (uint *)0x0 && lVar18 != 0) {
                    uVar39 = *(uint *)(lVar18 + 4);
                    if ((-1 < (int)uVar39) && ((int)uVar39 < *(int *)(lVar19 + 0x60))) {
                      plVar24 = *(longlong **)(lVar19 + 0x58);
                      if (*(longlong **)(lVar19 + 0x58) == (longlong *)0x0) {
                        plVar24 = local_448;
                      }
                      if ((*(uint *)((longlong)plVar24 + (ulonglong)(uVar39 >> 5) * 4) >>
                           (uVar39 & 0x1f) & 1) != 0) {
                        lVar21 = *(longlong *)(lVar19 + 0x38);
                        lVar27 = (ulonglong)uVar39 * 0x300;
                        lVar18 = lVar21 + lVar27;
                        local_450 = (uint *)CONCAT71(local_450._1_7_,
                                                     *(undefined1 *)(lVar21 + 0x298 + lVar27));
                        uVar39 = -(uint)((float)puVar36[1] < 0.0);
                        *(uint *)(lVar21 + 0x29c + lVar27) =
                             ~uVar39 & puVar36[1] | *(uint *)(lVar21 + 0x29c + lVar27) & uVar39;
                        cVar13 = *(char *)((longlong)puVar36 + 9);
                        if ((*(byte *)(lVar21 + 0x2b0 + lVar27) & 1) == 0) {
                          *(char *)(lVar18 + 0x298) = cVar13;
                          if ((puVar36[2] & 4) != 0) {
                            auVar47 = divpd(*(undefined1 (*) [16])(puVar36 + 0xe),auVar10);
                            auVar46._8_8_ = 0;
                            auVar46._0_8_ = *(double *)(puVar36 + 0x12);
                            auVar46 = divpd(auVar46,auVar10);
                            auVar47 = roundpd(auVar47,auVar47,3);
                            auVar46 = roundpd(auVar46,auVar46,3);
                            dVar43 = (*(double *)*(undefined1 (*) [16])(puVar36 + 0xe) -
                                     auVar47._0_8_ * dVar6) * 0.008726646259971648;
                            dVar44 = (*(double *)(puVar36 + 0x10) - auVar47._8_8_ * dVar7) *
                                     0.008726646259971648;
                            dVar8 = (*(double *)(puVar36 + 0x12) - auVar46._0_8_ * dVar6) *
                                    0.008726646259971648;
                            dVar9 = (0.0 - auVar46._8_8_ * dVar7) * 0.008726646259971648;
                            dVar40 = sin(dVar43);
                            dVar41 = sin(dVar44);
                            dVar42 = sin(dVar8);
                            sin(dVar9);
                            dVar43 = cos(dVar43);
                            dVar44 = cos(dVar44);
                            dVar45 = cos(dVar8);
                            cos(dVar9);
                            uVar11 = DAT_14c846520;
                            dVar8 = dVar41 * dVar40 * dVar42 + dVar44 * dVar43 * dVar45;
                            auVar46 = *(undefined1 (*) [16])(puVar36 + 8);
                            auVar50._8_8_ = DAT_14c846518;
                            auVar50._0_8_ = DAT_14c846510;
                            uVar1 = *(undefined8 *)(puVar36 + 0xc);
                            *(double *)(lVar18 + 0x130) =
                                 dVar40 * dVar41 * dVar45 - dVar43 * dVar44 * dVar42;
                            *(double *)(lVar18 + 0x138) =
                                 -(dVar40 * dVar44 * dVar45) - dVar43 * dVar41 * dVar42;
                            auVar47._8_4_ = SUB84(dVar8,0);
                            auVar47._0_8_ = -(dVar44 * dVar40 * dVar42) + dVar41 * dVar43 * dVar45;
                            auVar47._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
                            *(undefined1 (*) [16])(lVar18 + 0x140) = auVar47;
                            *(undefined1 (*) [16])(lVar18 + 0x150) = auVar46;
                            *(undefined8 *)(lVar18 + 0x160) = uVar1;
                            *(undefined8 *)(lVar18 + 0x168) = 0;
                            *(undefined1 (*) [16])(lVar18 + 0x170) = auVar50;
                            *(undefined8 *)(lVar18 + 0x180) = uVar11;
                            *(undefined8 *)(lVar18 + 0x188) = 0;
                          }
                        }
                        else if (2 < (byte)(cVar13 - 1U)) {
                          *(char *)(lVar18 + 0x298) = cVar13;
                        }
                        *(undefined8 *)(lVar18 + 0x118) = *(undefined8 *)(puVar36 + 3);
                        *(uint *)(lVar18 + 0x120) = puVar36[5];
                        if ((puVar36[2] & 0x10) != 0) {
                          *(byte *)(lVar18 + 0x2b0) =
                               *(byte *)(lVar18 + 0x2b0) & 0xf7 | (char)puVar36[6] * '\b';
                          if ((((*(longlong **)(lVar18 + 0x108) != (longlong *)0x0) &&
                               (*(int *)(lVar18 + 0x104) != 0)) &&
                              (uVar39 = *(uint *)(lVar18 + 0x100), -1 < (int)uVar39)) &&
                             ((((int)uVar39 < DAT_14c9647dc &&
                               (lVar21 = (ulonglong)((uVar39 & 0xffff) * 0x18) +
                                         *(longlong *)
                                          (DAT_14c9647c8 + (ulonglong)(uVar39 >> 0x10) * 8),
                               lVar21 != 0)) &&
                              ((*(int *)(lVar21 + 0x10) == *(int *)(lVar18 + 0x104) &&
                               ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)))))) {
                            (**(code **)(**(longlong **)(lVar18 + 0x108) + 0x78))();
                          }
                        }
                        bVar23 = (byte)puVar36[2];
                        if (((bVar23 & 8) != 0) && (*(char *)((longlong)puVar36 + 0x19) == '\0')) {
                          *(undefined8 *)(lVar18 + 0x24) = 0;
                          *(undefined1 *)(lVar18 + 0x2c) = 0;
                          bVar23 = (byte)puVar36[2];
                        }
                        if (((bVar23 & 1) != 0) && (puVar36[0x26] == 0)) {
                          FUN_143d2d8ae(lVar19,lVar18);
                          bVar23 = (byte)puVar36[2];
                        }
                        if (((bVar23 & 2) != 0) && (*(int *)(lVar18 + 0x6c) == 0)) {
                          FUN_143d2d9a0(lVar19,lVar18,puVar36 + 0x14,puVar36 + 0x1a);
                        }
                        FUN_143d2dda8(lVar19,lVar18,(ulonglong)local_450 & 0xff);
                      }
                    }
                  }
                  break;
                }
                iVar14 = *(int *)(lVar18 + 8);
              } while (iVar14 != -1);
            }
          }
        }
        puVar36 = puVar36 + 0x2c;
      } while (puVar36 != puVar37);
    }
  }
  else {
    uVar39 = *(uint *)(param_1 + 0x10);
    if (0 < (int)uVar39) {
      iVar14 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar14 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar14 == 2)) {
        uVar22 = 0;
      }
      else if (iVar14 == 1) {
        DVar15 = FUN_140ad26c0();
        DVar16 = GetCurrentThreadId();
        uVar22 = (ulonglong)(DVar15 != DVar16);
        uVar39 = *(uint *)(param_1 + 0x10);
      }
      else {
        uVar22 = 1;
      }
      uVar3 = *(uint *)(lVar18 + uVar22 * 4);
      if ((int)uVar3 < (int)uVar39) {
        uVar39 = uVar3;
      }
      if ((int)uVar39 < 0) goto LAB_143d2b9ed;
      local_450 = (uint *)(param_1 + 0x11);
      if (*(int *)((longlong)param_1 + 0x94) < (int)uVar39) {
        FUN_140da551a(local_450,(ulonglong)uVar39);
      }
      iVar14 = 0;
      if (uVar39 != 0) {
        local_430 = CONCAT44(local_430._4_4_,uVar39);
        local_438 = (int *)((ulonglong)uVar39 * 0x228);
        piVar20 = (int *)0x0;
        do {
          lVar18 = local_448[0xf];
          iVar14 = (int)local_448[0x12];
          lVar19 = (longlong)iVar14;
          *(uint *)(local_448 + 0x12) = iVar14 + 1U;
          if (*(uint *)((longlong)local_448 + 0x94) < iVar14 + 1U) {
            FUN_1457a9a90(local_450,iVar14);
          }
          plVar24 = (longlong *)(lVar18 + (longlong)piVar20);
          plVar5 = *(longlong **)local_450;
          lVar35 = lVar19 * 0x228;
          plVar29 = plVar5 + lVar19 * 0x45;
          *(int *)(plVar29 + 1) = (int)plVar24[1];
          *plVar29 = *plVar24;
          lVar21 = lVar18 + 0x30 + (longlong)piVar20;
          *(undefined4 *)((longlong)plVar29 + 0x14) = *(undefined4 *)(lVar21 + -0x1c);
          *(undefined8 *)((longlong)plVar29 + 0xc) = *(undefined8 *)(lVar21 + -0x24);
          *(undefined4 *)(plVar29 + 4) = *(undefined4 *)(lVar21 + -0x10);
          plVar29[3] = *(longlong *)(lVar21 + -0x18);
          *(undefined8 *)((longlong)plVar29 + 0x24) = *(undefined8 *)(lVar21 + -0xc);
          *(undefined4 *)((longlong)plVar29 + 0x2c) = *(undefined4 *)(lVar21 + -4);
          local_440 = plVar5;
          FUN_1406fd608(plVar29 + 6,lVar21);
          *(undefined2 *)(plVar29 + 0x21) = *(undefined2 *)(lVar21 + 0xd8);
          plVar29[0x22] = *(longlong *)(lVar21 + 0xe0);
          lVar27 = *(longlong *)(lVar21 + 0xf0);
          plVar29[0x23] = *(longlong *)(lVar21 + 0xe8);
          plVar29[0x24] = lVar27;
          plVar29[0x25] = 0;
          iVar14 = *(int *)(lVar21 + 0x100);
          pvVar4 = *(void **)(lVar21 + 0xf8);
          *(int *)(plVar29 + 0x26) = iVar14;
          if ((longlong)iVar14 == 0) {
            *(undefined4 *)((longlong)plVar5 + lVar35 + 0x134) = 0;
          }
          else {
            plVar29 = local_440 + lVar19 * 0x45 + 0x25;
            FUN_1446dd670(plVar29,iVar14,0);
            memcpy((void *)*plVar29,pvVar4,(longlong)iVar14 * 2);
          }
          param_1 = local_448;
          plVar29 = plVar24 + 0x27;
          plVar33 = plVar5 + lVar19 * 0x45 + 0x27;
          for (lVar21 = 0xe; lVar21 != 0; lVar21 = lVar21 + -1) {
            *plVar33 = *plVar29;
            plVar29 = plVar29 + 1;
            plVar33 = plVar33 + 1;
          }
          *(undefined4 *)(plVar5 + lVar19 * 0x45 + 0x36) =
               *(undefined4 *)(lVar18 + 0x1b0 + (longlong)piVar20);
          plVar5[lVar19 * 0x45 + 0x35] = *(longlong *)(lVar18 + 0x1a8 + (longlong)piVar20);
          *(undefined8 *)((longlong)plVar5 + lVar35 + 0x1b4) =
               *(undefined8 *)(lVar18 + 0x1b4 + (longlong)piVar20);
          *(undefined4 *)((longlong)plVar5 + lVar35 + 0x1bc) =
               *(undefined4 *)(lVar18 + 0x1bc + (longlong)piVar20);
          plVar5[lVar19 * 0x45 + 0x38] = *(longlong *)(lVar18 + 0x1c0 + (longlong)piVar20);
          *(undefined4 *)(plVar5 + lVar19 * 0x45 + 0x39) =
               *(undefined4 *)(lVar18 + 0x1c8 + (longlong)piVar20);
          puVar30 = (undefined4 *)((longlong)plVar24 + 0x1cc);
          puVar34 = (undefined4 *)((longlong)plVar5 + lVar35 + 0x1cc);
          for (lVar18 = 0x17; lVar18 != 0; lVar18 = lVar18 + -1) {
            *puVar34 = *puVar30;
            puVar30 = puVar30 + 1;
            puVar34 = puVar34 + 1;
          }
          piVar20 = piVar20 + 0x8a;
        } while (local_438 != piVar20);
        pvVar4 = (void *)local_448[0xf];
        iVar14 = (int)local_430;
        FUN_140da4884(pvVar4,local_430 & 0xffffffff);
        iVar17 = (int)param_1[0x10] - iVar14;
        iVar25 = iVar14;
        if (iVar17 != 0) {
          memmove(pvVar4,(void *)((longlong)local_438 + (longlong)pvVar4),(longlong)iVar17 * 0x228);
          iVar25 = (int)param_1[0x10];
        }
        *(int *)(param_1 + 0x10) = iVar25 - iVar14;
      }
      *(int *)(param_1 + 0x15) = iVar14;
    }
    FUN_140da494c(param_1 + 0xf);
    FUN_1449daf8c(&local_3f8,param_1,0);
    FUN_140da4c3c(param_1 + 0xf,&local_3f8);
    lVar18 = param_1[0x14];
    if ((longlong)(int)lVar18 != 0) {
      lVar19 = local_448[0x13];
      plVar24 = local_448 + 0x17;
      lVar21 = 0;
      do {
        cVar13 = *(char *)(lVar19 + 9 + lVar21);
        if ((cVar13 == '\a') || (cVar13 == '\x04')) {
          local_408 = (code *)(ulonglong)*(uint *)(lVar19 + lVar21);
          FUN_140e15e6a(plVar24,&local_408);
        }
        lVar21 = lVar21 + 0xb0;
      } while ((longlong)(int)lVar18 * 0xb0 - lVar21 != 0);
    }
    param_1 = local_448;
    (**(code **)(*local_448 + 0x308))(local_448,&local_408,&local_3f8,1);
    FUN_1449daebe(&local_3f8);
  }
  uVar39 = *(uint *)((longlong)param_1 + 0x94);
  if (-1 < (int)uVar39) {
    FUN_140da4884(param_1[0x11],(int)param_1[0x12]);
    *(undefined4 *)(param_1 + 0x12) = 0;
    uVar39 = *(uint *)((longlong)param_1 + 0xa4);
    if (-1 < (int)uVar39) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      param_1[0x15] = 0;
      goto LAB_143d29fd2;
    }
  }
LAB_143d2b9ed:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar39);
}



// FUNCTION 143d2ba5c FUN_143d2ba5c body=40 status=ok
// SIG undefined FUN_143d2ba5c(void)

undefined8 FUN_143d2ba5c(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) & 0xed | 0x10;
  FUN_1408f10c6();
  return param_2;
}



// FUNCTION 143d2bb52 FUN_143d2bb52 body=69 status=ok
// SIG undefined FUN_143d2bb52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bb52(void)

{
  _DAT_14cb7c448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c450,1);
  return;
}



// FUNCTION 143d2bb97 FUN_143d2bb97 body=69 status=ok
// SIG undefined FUN_143d2bb97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bb97(void)

{
  _DAT_14cb7c460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bbd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c468,1);
  return;
}



// FUNCTION 143d2bbdc FUN_143d2bbdc body=69 status=ok
// SIG undefined FUN_143d2bbdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bbdc(void)

{
  _DAT_14cb7c478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bc1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c480,1);
  return;
}



// FUNCTION 143d2bc21 FUN_143d2bc21 body=69 status=ok
// SIG undefined FUN_143d2bc21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bc21(void)

{
  _DAT_14cb7c490 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bc63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c498,1);
  return;
}



// FUNCTION 143d2bc66 FUN_143d2bc66 body=69 status=ok
// SIG undefined FUN_143d2bc66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bc66(void)

{
  _DAT_14cb7c4a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c4b0,1);
  return;
}



// FUNCTION 143d2bcab FUN_143d2bcab body=69 status=ok
// SIG undefined FUN_143d2bcab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bcab(void)

{
  _DAT_14cb7c4c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bced. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c4c8,1);
  return;
}



// FUNCTION 143d2bcf0 FUN_143d2bcf0 body=69 status=ok
// SIG undefined FUN_143d2bcf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bcf0(void)

{
  _DAT_14cb7c4d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bd32. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c4e0,1);
  return;
}



// FUNCTION 143d2bd35 FUN_143d2bd35 body=69 status=ok
// SIG undefined FUN_143d2bd35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bd35(void)

{
  _DAT_14cb7c4f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bd77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c4f8,1);
  return;
}



// FUNCTION 143d2bd7a FUN_143d2bd7a body=69 status=ok
// SIG undefined FUN_143d2bd7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bd7a(void)

{
  _DAT_14cb7c508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2bdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c510,1);
  return;
}



// FUNCTION 143d2bdbf FUN_143d2bdbf body=69 status=ok
// SIG undefined FUN_143d2bdbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d2bdbf(void)

{
  _DAT_14cb7c520 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d2be01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7c528,1);
  return;
}



// FUNCTION 143d2be04 FUN_143d2be04 body=475 status=ok
// SIG undefined FUN_143d2be04(void)

void FUN_143d2be04(longlong param_1,byte param_2,uint *param_3)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_a8 [36];
  int local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x48) == 0) goto LAB_143d2bf81;
  plVar2 = (longlong *)FUN_1410b65f8(param_3);
  if (plVar2 == (longlong *)0x0) goto LAB_143d2bf81;
  if ((*(longlong **)(param_1 + 0x108) == (longlong *)0x0) || (*(int *)(param_1 + 0x104) == 0)) {
LAB_143d2bea6:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x100);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x104))) ||
         ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) goto LAB_143d2bea6;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x38))();
    }
  }
  FUN_14105743e(local_68,param_1 + 0x30);
  if (param_3[1] == 0) {
LAB_143d2bfbc:
    lVar6 = 0;
  }
  else {
    uVar1 = *param_3;
    lVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((*(uint *)(plVar4 + 2) != param_3[1] || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))))
      goto LAB_143d2bfbc;
      lVar6 = *plVar4;
    }
  }
  if (*(longlong *)(lVar6 + 0x30) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
  }
  FUN_140fda471(&local_84,uVar5);
  if (local_84 == 0) {
    local_70 = DAT_14cb7bba0;
    local_78 = DAT_14cb7bb98;
  }
  else {
    local_70 = local_7c;
    local_78 = CONCAT44(uStack_80,local_84);
  }
  FUN_144928d62(local_58,1,&local_78);
  (**(code **)(*plVar2 + 0x50 + (ulonglong)(param_2 ^ 1) * 8))(plVar2,local_68,uVar3);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
LAB_143d2bf81:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2bfe0 FUN_143d2bfe0 body=201 status=ok
// SIG undefined FUN_143d2bfe0(void)

undefined8 FUN_143d2bfe0(longlong param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  undefined4 uVar6;
  double dVar5;
  
  if ((param_2 == '\0') && (DAT_14c872be0 == *(uint *)(param_1 + 0x34))) {
    fVar4 = *(float *)(param_1 + 0x30);
    uVar6 = 0;
  }
  else {
    *(int *)(param_1 + 0x34) = (int)DAT_14c872be0;
    if (((*(int *)(param_1 + 0x20) != 0) && (uVar1 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x20))) &&
         ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
        if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
          lVar2 = *plVar3;
        }
        else {
          lVar2 = 0;
        }
        fVar4 = 0.0;
        uVar6 = 0;
        if (((*(longlong *)(lVar2 + 0x30) != 0) &&
            (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x360), lVar2 != 0)) &&
           (plVar3 = *(longlong **)(lVar2 + 0x178), plVar3 != (longlong *)0x0)) {
          dVar5 = (double)(**(code **)(*plVar3 + 0x640))();
          uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
          fVar4 = (float)dVar5;
        }
        *(float *)(param_1 + 0x30) = fVar4;
        goto LAB_143d2c08c;
      }
    }
    *(undefined4 *)(param_1 + 0x30) = 0;
    fVar4 = 0.0;
    uVar6 = 0;
  }
LAB_143d2c08c:
  return CONCAT44(uVar6,fVar4);
}



// FUNCTION 143d2c0aa FUN_143d2c0aa body=234 status=ok
// SIG undefined FUN_143d2c0aa(void)

void FUN_143d2c0aa(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar3 = DAT_14c9647c8;
  iVar1 = *(int *)(param_1 + 0x20);
  if (((iVar1 != 0) && (uVar5 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar5)) &&
     ((int)uVar5 < DAT_14c9647dc)) {
    uVar7 = (ulonglong)(uVar5 >> 0x10);
    uVar5 = uVar5 & 0xffff;
    lVar8 = (ulonglong)(uVar5 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar7 * 8);
    if (((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == iVar1)) &&
       ((param_2 != 0 && ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      bVar2 = true;
      if ((*(int *)(param_1 + 0x40) <= *(int *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x108) < 1))
      {
        bVar2 = 0 < *(int *)(param_1 + 0x198);
      }
      if (bVar2 && *(char *)(param_1 + 0x2c) == '\0') {
        *(undefined1 *)(param_1 + 0x2c) = 1;
        puVar6 = (undefined8 *)((ulonglong)(uVar5 * 0x18) + *(longlong *)(lVar3 + uVar7 * 8));
        if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar1)) ||
           ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar6;
        }
        FUN_14654edc8(uVar4);
        return;
      }
      if (!bVar2 && *(char *)(param_1 + 0x2c) == '\x01') {
        *(undefined1 *)(param_1 + 0x2c) = 0;
        puVar6 = (undefined8 *)((ulonglong)(uVar5 * 0x18) + *(longlong *)(lVar3 + uVar7 * 8));
        if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar1)) ||
           ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar6;
        }
        FUN_14885bc0c(uVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d2c194 FUN_143d2c194 body=2906 status=ok
// SIG undefined FUN_143d2c194(void)

void FUN_143d2c194(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_298 [32];
  uint *local_278;
  undefined8 local_270;
  longlong local_268;
  undefined8 local_260;
  undefined8 local_258 [12];
  undefined8 local_1f8 [12];
  undefined8 local_198 [12];
  uint local_138;
  int iStack_134;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_88;
  uint *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  void *pvStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  puVar1 = param_2 + 0x40;
  if (((((*(longlong *)(param_2 + 0x42) != 0) && (param_2[0x41] != 0)) &&
       (uVar4 = *puVar1, -1 < (int)uVar4)) &&
      (((int)uVar4 < DAT_14c9647dc &&
       (lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar10 != 0)))) &&
     ((*(int *)(lVar10 + 0x10) == param_2[0x41] && ((*(uint *)(lVar10 + 8) & 0x10200000) == 0))))
  goto LAB_143d2c214;
  if (*(int *)(param_1 + 0x20) == 0) {
LAB_143d2c2a7:
    uVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x1c);
    uVar6 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar11 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar11 != (longlong *)0x0) &&
         (((int)plVar11[2] == *(int *)(param_1 + 0x20) &&
          ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
          lVar10 = *plVar11;
        }
        else {
          lVar10 = 0;
        }
        if (*(longlong *)(lVar10 + 0x30) != 0) {
          uVar6 = *(undefined8 *)(*(longlong *)(lVar10 + 0x30) + 0x360);
          goto LAB_143d2c2aa;
        }
      }
      goto LAB_143d2c2a7;
    }
  }
LAB_143d2c2aa:
  if ((*(char *)(param_2 + 0xb) == '\x01') && (param_2[10] != 0)) {
    uVar4 = param_2[9];
    uVar13 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar12 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != param_2[10])) ||
         ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_143d2c2f9;
      uVar13 = *puVar12;
    }
  }
  else {
LAB_143d2c2f9:
    uVar13 = 0;
  }
  if (((((param_2[0xb2] != 0) && (uVar4 = param_2[0xb1], -1 < (int)uVar4)) &&
       (((int)uVar4 < DAT_14c9647dc &&
        ((plVar11 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0 && ((int)plVar11[2] == param_2[0xb2])))))) &&
      ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) &&
     (lVar10 = *(longlong *)(param_2 + 0xaf), lVar10 != 0)) {
    local_270 = uVar6;
    local_268 = param_1;
    if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
      plVar11 = (longlong *)*plVar11;
      local_78 = (uint *)0x0;
      local_70 = 0x1800000000;
      if (plVar11 == (longlong *)0x0) goto LAB_143d2cc9b;
      local_260 = uVar13;
      FUN_140a44582(plVar11,&local_138,0);
      lVar23 = (longlong)(int)local_70;
      puVar15 = &local_138;
      if (local_78 != (uint *)0x0) {
        puVar15 = local_78;
      }
      if (lVar23 != 0) {
        lVar14 = 0;
        do {
          plVar21 = *(longlong **)((longlong)puVar15 + lVar14);
          if ((plVar21 != (longlong *)0x0) &&
             (cVar3 = (**(code **)(*plVar21 + 0x4c8))(plVar21,lVar10), cVar3 != '\0')) {
            uVar13 = local_260;
            param_1 = local_268;
            uVar6 = local_270;
            if (local_78 != (uint *)0x0) {
              FUN_1400020a8();
              uVar13 = local_260;
              param_1 = local_268;
              uVar6 = local_270;
            }
            goto LAB_143d2c476;
          }
          lVar14 = lVar14 + 8;
        } while (lVar23 * 8 != lVar14);
      }
      uVar13 = local_260;
      if (local_78 != (uint *)0x0) {
        FUN_1400020a8();
        uVar13 = local_260;
      }
    }
    else {
LAB_143d2cc9b:
      plVar11 = (longlong *)0x0;
    }
    param_1 = local_268;
    uVar6 = local_270;
    if (*(code **)(*plVar11 + 0x3a8) == (code *)&LAB_144a8179a) {
      plVar21 = (longlong *)plVar11[0x39];
    }
    else {
      plVar21 = (longlong *)(**(code **)(*plVar11 + 0x3a8))(plVar11);
    }
    if (plVar21 != (longlong *)0x0) {
LAB_143d2c476:
      (**(code **)(*plVar21 + 0x4a8))(plVar21,&local_138,*(undefined8 *)(param_2 + 0xaf),0);
      uStack_f8 = CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
      local_f0 = CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
      local_e8 = DAT_14c846520;
      uStack_e0 = 0;
      puVar15 = &local_138;
      puVar12 = (undefined8 *)(param_2 + 0x4c);
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *(undefined8 *)puVar15;
        puVar15 = puVar15 + 2;
        puVar12 = puVar12 + 1;
      }
    }
  }
  uVar4 = param_2[0x1b];
  if (uVar4 == 0) {
    if ((*(byte *)(param_2 + 0xac) & 0x10) == 0) {
      local_88 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      pvStack_60 = (void *)0x0;
      local_58 = 0;
      local_120 = *(undefined8 *)(param_2 + 0x9e);
      uStack_130 = *(undefined8 *)(param_2 + 0x9a);
      uStack_128 = *(undefined8 *)(param_2 + 0x9c);
      local_118 = *(undefined8 *)(param_2 + 0xa0);
      uStack_110 = *(undefined8 *)(param_2 + 0xa2);
      local_108 = *(undefined8 *)(param_2 + 0xa4);
      local_78 = *(uint **)(param_2 + 0xb4);
      local_70 = *(undefined8 *)(param_2 + 0xb6);
      uStack_68 = *(undefined8 *)(param_2 + 0xb8);
      if (&pvStack_60 != (void **)(param_2 + 0xba)) {
        uVar4 = param_2[0xbc];
        pvVar2 = *(void **)(param_2 + 0xba);
        local_58 = (ulonglong)uVar4;
        if ((longlong)(int)uVar4 != 0) {
          FUN_1446dd670(&pvStack_60,uVar4,0);
          memcpy(pvStack_60,pvVar2,(longlong)(int)uVar4 * 2);
        }
      }
      local_138 = (uint)(*(char *)(param_2 + 0xa6) == '\x02') * 2;
      local_278 = &local_138;
      puVar12 = (undefined8 *)(param_2 + 0x4c);
      puVar17 = local_258;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar17 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar17 = puVar17 + 1;
      }
      plVar11 = (longlong *)FUN_140f63b5e(uVar6,local_258,param_2 + 100,uVar13);
      if (*(char *)(param_2 + 0xa6) == '\x03') {
        *(undefined1 *)(param_2 + 0xa6) = 1;
      }
    }
    else {
      local_120 = DAT_14c8464f0;
      uStack_130 = DAT_14c8464e0;
      uStack_128 = DAT_14c8464e8;
      local_118 = DAT_14c8464e0;
      uStack_110 = DAT_14c8464e8;
      local_108 = DAT_14c8464f0;
      local_88 = 0;
      local_100 = 0;
      uStack_f8 = 0;
      local_f0 = 0;
      pvStack_60 = (void *)0x0;
      local_58 = 0;
      local_138 = 1;
      local_78 = *(uint **)(param_2 + 0xb4);
      local_70 = *(undefined8 *)(param_2 + 0xb6);
      uStack_68 = *(undefined8 *)(param_2 + 0xb8);
      if (&pvStack_60 != (void **)(param_2 + 0xba)) {
        uVar4 = param_2[0xbc];
        pvVar2 = *(void **)(param_2 + 0xba);
        local_58 = (ulonglong)uVar4;
        if ((longlong)(int)uVar4 != 0) {
          FUN_1446dd670(&pvStack_60,uVar4,0);
          memcpy(pvStack_60,pvVar2,(longlong)(int)uVar4 * 2);
        }
      }
      local_278 = &local_138;
      local_138 = 1;
      puVar12 = (undefined8 *)(param_2 + 0x4c);
      puVar17 = local_1f8;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar17 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar17 = puVar17 + 1;
      }
      plVar11 = (longlong *)FUN_140f63b5e(uVar6,local_1f8,param_2 + 100,uVar13);
    }
LAB_143d2ca38:
    if (pvStack_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (plVar11 == (longlong *)0x0) goto LAB_143d2ca49;
    uVar6 = FUN_14084059e();
    uVar7 = FUN_144718840(plVar11,uVar6);
  }
  else {
    if ((char)*(byte *)(param_2 + 0xac) < '\0') {
      uVar8 = param_2[0x15];
      uVar18 = param_2[0x17];
      if (uVar18 != 0) {
        uVar9 = uVar18 >> 0xd ^ uVar8 - uVar18;
        uVar8 = uVar9 << 8 ^ (-0x61c88647 - uVar18) - uVar9;
        uVar20 = uVar8 >> 0xd ^ (uVar18 - uVar9) - uVar8;
        uVar18 = uVar20 >> 0xc ^ (uVar9 - uVar8) - uVar20;
        uVar8 = uVar18 << 0x10 ^ (uVar8 - uVar20) - uVar18;
        uVar9 = uVar8 >> 5 ^ (uVar20 - uVar18) - uVar8;
        uVar18 = uVar9 >> 3 ^ (uVar18 - uVar8) - uVar9;
        uVar8 = uVar18 << 10 ^ (uVar8 - uVar9) - uVar18;
        uVar8 = uVar8 >> 0xf ^ uVar9 - (uVar18 + uVar8);
      }
      uVar18 = param_2[0x18];
      uVar9 = param_2[0x1a];
      if (uVar9 != 0) {
        uVar20 = uVar9 >> 0xd ^ uVar18 - uVar9;
        uVar18 = uVar20 << 8 ^ (-0x61c88647 - uVar9) - uVar20;
        uVar22 = uVar18 >> 0xd ^ (uVar9 - uVar20) - uVar18;
        uVar9 = uVar22 >> 0xc ^ (uVar20 - uVar18) - uVar22;
        uVar18 = uVar9 << 0x10 ^ (uVar18 - uVar22) - uVar9;
        uVar20 = uVar18 >> 5 ^ (uVar22 - uVar9) - uVar18;
        uVar9 = uVar20 >> 3 ^ (uVar9 - uVar18) - uVar20;
        uVar18 = uVar9 << 10 ^ (uVar18 - uVar20) - uVar9;
        uVar18 = uVar18 >> 0xf ^ uVar20 - (uVar9 + uVar18);
      }
      uVar9 = param_2[0x1d];
      if (uVar9 != 0) {
        uVar20 = uVar9 >> 0xd ^ uVar4 - uVar9;
        uVar4 = uVar20 << 8 ^ (-0x61c88647 - uVar9) - uVar20;
        uVar9 = uVar4 >> 0xd ^ (uVar9 - uVar20) - uVar4;
        uVar20 = uVar9 >> 0xc ^ (uVar20 - uVar4) - uVar9;
        uVar4 = uVar20 << 0x10 ^ (uVar4 - uVar9) - uVar20;
        uVar9 = uVar4 >> 5 ^ (uVar9 - uVar20) - uVar4;
        uVar20 = uVar9 >> 3 ^ (uVar20 - uVar4) - uVar9;
        uVar4 = uVar20 << 10 ^ (uVar4 - uVar9) - uVar20;
        uVar4 = uVar4 >> 0xf ^ uVar9 - (uVar20 + uVar4);
      }
      iVar5 = FUN_140ac163e((longlong *)(param_1 + 0x528),uVar18 ^ uVar8 ^ uVar4,param_2 + 0x15);
      if (((iVar5 != -1) &&
          (lVar10 = (longlong)iVar5 * 0xb0 + *(longlong *)(param_1 + 0x528),
          lVar10 != -0x28 && lVar10 != 0)) && (*(int *)(lVar10 + 0x3c) != 0)) {
        uVar4 = *(uint *)(lVar10 + 0x38);
        plVar11 = (longlong *)0x0;
        if (-1 < (int)uVar4) {
          uVar7 = 0;
          if (DAT_14c9647dc <= (int)uVar4) goto LAB_143d2ca60;
          puVar12 = (undefined8 *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if (((puVar12 != (undefined8 *)0x0) && (*(int *)(puVar12 + 2) == *(int *)(lVar10 + 0x3c)))
             && ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)) {
            local_278 = *(uint **)(param_2 + 0x20);
            if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
              uVar7 = *puVar12;
            }
            else {
              uVar7 = 0;
            }
            FUN_143daa03e(&local_138,uVar7,*(undefined8 *)(param_2 + 0x1e),param_2 + 0x24);
            local_78 = *(uint **)(param_2 + 0xb4);
            local_70 = *(undefined8 *)(param_2 + 0xb6);
            uStack_68 = *(undefined8 *)(param_2 + 0xb8);
            if (&pvStack_60 != (void **)(param_2 + 0xba)) {
              uVar4 = param_2[0xbc];
              pvVar2 = *(void **)(param_2 + 0xba);
              local_58 = CONCAT44(local_58._4_4_,uVar4);
              if (uVar4 == 0 && local_58._4_4_ == 0) {
                local_58 = (ulonglong)uVar4;
              }
              else {
                FUN_1446dd670(&pvStack_60,uVar4);
                if (uVar4 != 0) {
                  memcpy(pvStack_60,pvVar2,(longlong)(int)uVar4 * 2);
                }
              }
            }
            puVar12 = (undefined8 *)(param_2 + 0x4c);
            puVar17 = local_198;
            for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
              *puVar17 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar17 = puVar17 + 1;
            }
            local_278 = &local_138;
            plVar11 = (longlong *)FUN_140f63b5e(uVar6,local_198,param_2 + 100,uVar13);
            goto LAB_143d2ca38;
          }
        }
      }
    }
LAB_143d2ca49:
    plVar11 = (longlong *)0x0;
    uVar7 = 0;
  }
LAB_143d2ca60:
  FUN_1458d9134(&local_138,uVar7);
  *puVar1 = local_138;
  param_2[0x41] = iStack_134;
  param_2[0x42] = (undefined4)uStack_130;
  param_2[0x43] = uStack_130._4_4_;
  plVar21 = *(longlong **)(param_2 + 0x42);
  if (((plVar21 == (longlong *)0x0) || (param_2[0x41] == 0)) ||
     ((uVar4 = *puVar1, (int)uVar4 < 0 ||
      ((((DAT_14c9647dc <= (int)uVar4 ||
         (lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar10 == 0)) ||
        (*(int *)(lVar10 + 0x10) != param_2[0x41])) || ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))
      ))) goto LAB_143d2c214;
  uVar19 = CONCAT71((int7)((ulonglong)lVar10 >> 8),*(undefined1 *)(param_2 + 0xac)) &
           0xffffffffffffff08;
  (**(code **)(*plVar21 + 0x10))(plVar21,*param_2,CONCAT71((int7)(uVar19 >> 8),(byte)uVar19 >> 3));
  if (((*(int *)(param_1 + 0x20) == 0) || (uVar4 = *(uint *)(param_1 + 0x1c), (int)uVar4 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar4 ||
      (((plVar21 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar21 == (longlong *)0x0 || ((int)plVar21[2] != *(int *)(param_1 + 0x20))) ||
       ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)))))) {
LAB_143d2cc51:
    local_138 = 0;
    iVar5 = 0;
  }
  else {
    iStack_134 = 0;
    if (*plVar21 == 0) goto LAB_143d2cc51;
    local_138 = *(uint *)(*plVar21 + 0xc);
    if ((int)local_138 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_138 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_138 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar5 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar24 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar24) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar5 = *(int *)(lVar10 + 0x10);
      bVar24 = iVar5 == 0;
      if (bVar24) {
        *(int *)(lVar10 + 0x10) = iVar16;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar24) {
        iVar5 = iVar16;
      }
    }
  }
  iStack_134 = iVar5;
  FUN_143d2be04(param_2,1);
  if ((*(char *)(param_1 + 0x18) == '\x01') &&
     (FUN_1400bc96c(plVar11 + 0x6d,&DAT_14cb7c550),
     -1 < (char)plVar11[0xc] == (bool)(char)plVar11[0x6d])) {
    (**(code **)(*plVar11 + 0x608))(plVar11);
  }
LAB_143d2c214:
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d2ccf0 FUN_143d2ccf0 body=3004 status=ok
// SIG undefined FUN_143d2ccf0(void)

undefined4 * FUN_143d2ccf0(longlong param_1,undefined4 *param_2,longlong *param_3,longlong param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  void *_Src;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  ulonglong *puVar19;
  undefined8 *puVar20;
  ulonglong *puVar21;
  longlong lVar22;
  bool bVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_3d8 [32];
  undefined4 local_3b8;
  undefined4 *local_3b0;
  int *local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined8 local_394;
  undefined4 local_38c;
  undefined8 local_388;
  undefined4 local_380;
  int local_378 [2];
  ulonglong *local_370;
  undefined8 local_368;
  ulonglong local_360;
  ulonglong local_358;
  undefined4 local_350;
  undefined1 local_34c;
  char local_348;
  undefined8 local_344;
  undefined1 local_33c;
  ulonglong local_338;
  undefined4 local_330;
  ulonglong local_32c;
  undefined4 local_324;
  ulonglong local_320;
  undefined4 local_318;
  ulonglong local_314;
  undefined4 local_30c;
  ulonglong local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  ulonglong uStack_2e8;
  ulonglong auStack_2d8 [12];
  char local_278;
  ulonglong local_268;
  ulonglong uStack_260;
  ulonglong local_258;
  ulonglong uStack_250;
  undefined4 local_248;
  undefined8 local_238 [12];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined2 local_118;
  undefined8 local_114;
  undefined8 uStack_10c;
  ulonglong local_100 [4];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined4 local_b4;
  char local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  int local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3d8;
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((DAT_14c86a9f8 == 1) && (*(int *)(lVar15 + 0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (((((*(int *)(param_1 + 0x20) != 0) && (uVar8 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar8)) &&
       ((int)uVar8 < DAT_14c9647dc)) &&
      ((lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar16 != 0 &&
       (*(int *)(lVar16 + 0x10) == *(int *)(param_1 + 0x20))))) &&
     ((*(uint *)(lVar16 + 8) & 0x10200000) == 0)) {
    if (*param_3 == 0) {
LAB_143d2ceec:
      FUN_140b47a16(param_3,&DAT_14cb843e8);
    }
    else {
      if ((longlong)(int)param_3[3] != 0) {
        lVar16 = 0;
        do {
          if (*(longlong *)(param_3[2] + lVar16) == 0) goto LAB_143d2ceec;
          lVar16 = lVar16 + 8;
        } while ((longlong)(int)param_3[3] * 8 != lVar16);
      }
      iVar5 = FUN_140ac16d8(param_1);
      piVar13 = DAT_14cb7c500;
      if (iVar5 != 3) {
        piVar2 = (int *)(lVar15 + 0xc60);
        local_398 = *(undefined4 *)(param_4 + 0x84);
        local_3a0 = *(undefined8 *)(param_4 + 0x7c);
        local_38c = *(undefined4 *)(param_4 + 0x90);
        local_394 = *(undefined8 *)(param_4 + 0x88);
        local_380 = *(undefined4 *)(param_4 + 0x9c);
        local_388 = *(undefined8 *)(param_4 + 0x94);
        if ((*(int *)(param_4 + 0x94) == 0) && (lVar15 = *param_3, lVar15 != 0)) {
          local_380 = *(undefined4 *)(lVar15 + 0x374);
          local_388 = *(undefined8 *)(lVar15 + 0x36c);
        }
        iVar5 = *piVar2;
        local_3a8 = piVar2;
        if (iVar5 == 0x40000002) {
          local_3b0 = (undefined4 *)CONCAT71(local_3b0._1_7_,0 < *DAT_14cb7c500);
LAB_143d2cee8:
          uVar10 = 0;
          lVar15 = DAT_14cb7c458;
        }
        else {
          if (DAT_14c86a9f8 == 0) {
            local_3b0 = (undefined4 *)CONCAT71(local_3b0._1_7_,0 < *DAT_14cb7c500);
          }
          else if (iVar5 == 2) {
            local_3b0 = (undefined4 *)CONCAT71(local_3b0._1_7_,0 < *DAT_14cb7c500);
            iVar5 = 2;
          }
          else {
            if (iVar5 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              bVar23 = DVar6 == DVar7;
              iVar5 = *piVar2;
            }
            else {
              bVar23 = false;
            }
            local_3b0 = (undefined4 *)CONCAT71(local_3b0._1_7_,0 < piVar13[bVar23 ^ 1]);
            if (iVar5 == 0x40000002) goto LAB_143d2cee8;
          }
          lVar15 = DAT_14cb7c458;
          uVar10 = 1;
          if (((DAT_14c86a9f8 & 1) != 0) && (iVar5 != 2)) {
            if (iVar5 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              uVar10 = (ulonglong)(DVar6 == DVar7);
            }
            else {
              uVar10 = 0;
            }
          }
          uVar10 = uVar10 ^ 1;
        }
        bVar23 = 0 < *(int *)(lVar15 + uVar10 * 4);
        local_3b8 = FUN_143d2bfe0(param_1,0);
        lVar15 = *(longlong *)(param_4 + 0xa8);
        if (lVar15 != 0) {
          plVar17 = (longlong *)(param_1 + 0x438);
          uVar9 = FUN_140b95084(lVar15);
          iVar5 = FUN_145dac774(plVar17,uVar9,lVar15);
          if ((iVar5 != -1) &&
             (lVar15 = *plVar17 + (longlong)iVar5 * 0x24, puVar12 = (uint *)(lVar15 + 0x18),
             puVar12 != (uint *)0x0 && lVar15 != 0)) {
            uVar8 = *puVar12;
            if ((-1 < (int)uVar8) && ((int)uVar8 < *(int *)(param_1 + 0x60))) {
              lVar15 = param_1 + 0x48;
              if (*(longlong *)(param_1 + 0x58) != 0) {
                lVar15 = *(longlong *)(param_1 + 0x58);
              }
              if ((*(uint *)(lVar15 + (ulonglong)(uVar8 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) {
                lVar15 = *(longlong *)(param_1 + 0x38);
                lVar16 = (ulonglong)uVar8 * 0x300;
                puVar3 = (undefined4 *)(lVar15 + lVar16);
                FUN_1410b5c5e(param_1,puVar3);
                FUN_1415df23e(param_1,puVar3);
                FUN_141488992(puVar3);
                FUN_1414c27fe(puVar3,param_3,param_4,&local_3a0);
                FUN_140725828(param_1,puVar3);
                FUN_14150ba48(param_1,puVar3);
                *(byte *)(lVar15 + 0x2b0 + lVar16) =
                     *(byte *)(lVar15 + 0x2b0 + lVar16) & 0xfe | bVar23;
                *(byte *)(lVar15 + 0x2b1 + lVar16) =
                     *(byte *)(lVar15 + 0x2b1 + lVar16) & 0xef | *(char *)(param_4 + 0xb4) << 4;
                *(undefined4 *)(lVar15 + 0x2b4 + lVar16) = *(undefined4 *)(param_4 + 0xb8);
                if ((char)local_3b0 != '\0') {
                  *(undefined1 *)(puVar3 + 0xae) = 3;
                }
                *param_2 = *puVar3;
                *(undefined1 *)(param_2 + 1) = 1;
                goto LAB_143d2cdd8;
              }
            }
            uVar11 = *(undefined8 *)(param_4 + 0xa8);
            uVar9 = FUN_140b95084(uVar11);
            uVar9 = FUN_145dac774(plVar17,uVar9,uVar11);
            FUN_14611f0d4(plVar17,uVar9);
          }
        }
        local_368 = 0;
        local_348 = '\0';
        local_344 = 0;
        local_33c = 0;
        local_338 = DAT_14cb7bd68;
        local_330 = DAT_14cb7bd70;
        local_32c = DAT_14cb7bd80;
        local_324 = DAT_14cb7bd88;
        local_320 = 0;
        local_318 = 0;
        local_314 = DAT_14cb7bd68;
        local_30c = DAT_14cb7bd70;
        local_300 = DAT_14cb7bd88;
        local_308 = DAT_14cb7bd80;
        local_278 = '\0';
        local_2fc = 0;
        uStack_2f4 = 0;
        uStack_2f0 = 0;
        uStack_2ec = 0;
        uStack_2e8 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_258 = 0;
        uStack_250 = 0;
        local_248 = 0;
        puVar18 = &DAT_14c846480;
        puVar20 = local_238;
        for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
          *puVar20 = *puVar18;
          puVar18 = puVar18 + 1;
          puVar20 = puVar20 + 1;
        }
        local_178 = 0;
        local_170 = 0x8000000000;
        uStack_168 = 0xffffffff;
        local_1d8 = 0;
        uStack_1d0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_158 = 0;
        local_150 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        local_120 = 0xf;
        local_118 = 1;
        local_114 = 0;
        uStack_10c = 0;
        local_100[2] = DAT_14c8464f0;
        local_100[0] = DAT_14c8464e0;
        local_100[1] = DAT_14c8464e8;
        local_d8 = DAT_14c8464f0;
        local_100[3] = DAT_14c8464e0;
        uStack_e0 = DAT_14c8464e8;
        local_d0 = 0;
        local_cc = 0xbf800000;
        uStack_c8 = 0xbf800000;
        uStack_c4 = 0xbf800000;
        uStack_c0 = 0;
        local_bc = 0;
        local_b8 = 0x208;
        local_b4 = 0xffffffff;
        local_b0 = '\0';
        local_ac = 0;
        uStack_a4 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        uStack_80 = 0;
        uStack_7f = 0;
        local_78 = 0;
        uStack_74 = 0;
        local_70 = 0;
        FUN_1414c27fe(&local_368,param_3,param_4,&local_3a0);
        local_b8 = CONCAT11(local_b8._1_1_ & 0xef | *(char *)(param_4 + 0xb4) << 4,
                            *(char *)(param_4 + 0xb2) << 4 | (byte)local_b8 & 0xee | bVar23);
        local_b4 = *(undefined4 *)(param_4 + 0xb8);
        if ((char)local_3b0 != '\0') {
          local_b0 = '\x03';
        }
        puVar19 = *(ulonglong **)(param_4 + 0xa8);
        if ((puVar19 != (ulonglong *)0x0) && (puVar19 != &local_360)) {
          local_360 = *puVar19;
          local_358 = puVar19[1];
          local_350 = (undefined4)puVar19[2];
          local_34c = *(undefined1 *)((longlong)puVar19 + 0x14);
          local_348 = '\x01';
        }
        if (*(int *)(param_1 + 0x20) == 0) {
LAB_143d2d206:
          uVar11 = 0;
        }
        else {
          uVar8 = *(uint *)(param_1 + 0x1c);
          uVar11 = 0;
          if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
            plVar17 = (longlong *)
                      ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
            if ((plVar17 != (longlong *)0x0) &&
               (((int)plVar17[2] == *(int *)(param_1 + 0x20) &&
                ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
                lVar15 = *plVar17;
              }
              else {
                lVar15 = 0;
              }
              if (*(longlong *)(lVar15 + 0x30) != 0) {
                uVar11 = *(undefined8 *)(*(longlong *)(lVar15 + 0x30) + 0x360);
                goto LAB_143d2d22c;
              }
            }
            goto LAB_143d2d206;
          }
        }
LAB_143d2d22c:
        if ((DAT_14c86a9f8 == 1) && (*local_3a8 != 2)) {
          if (*local_3a8 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            if (DVar6 == DVar7) goto LAB_143d2d454;
          }
        }
        else {
LAB_143d2d454:
          iVar5 = DAT_14cb7c558 + 1;
          local_368 = CONCAT44(local_368._4_4_,DAT_14cb7c558);
          uVar8 = 0;
          DAT_14cb7c558 = iVar5;
          if (local_b0 == '\x03') {
            uVar8 = rand();
            auVar25._8_8_ = extraout_XMM0_Qb;
            auVar25._0_8_ = extraout_XMM0_Qa;
            auVar24._4_12_ = auVar25._4_12_;
            auVar24._0_4_ = ((float)(uVar8 & 0x7fff) / 32767.0) * 4.2949673e+09;
            auVar25 = roundss(auVar24,auVar24,0xb);
            uVar14 = (uint)(longlong)auVar25._0_4_;
            uVar8 = 1;
            if (1 < uVar14) {
              uVar8 = uVar14;
            }
          }
          local_368 = CONCAT44(uVar8,(undefined4)local_368);
          FUN_14188280e(param_1 + 0x38,local_378);
          *local_370 = local_368;
          *(char *)(local_370 + 4) = local_348;
          if (local_348 == '\x01') {
            local_370[1] = local_360;
            local_370[2] = local_358;
            *(undefined4 *)(local_370 + 3) = local_350;
            *(undefined1 *)((longlong)local_370 + 0x1c) = local_34c;
          }
          *(undefined1 *)((longlong)local_370 + 0x2c) = local_33c;
          *(undefined8 *)((longlong)local_370 + 0x24) = local_344;
          *(undefined4 *)(local_370 + 7) = local_330;
          local_370[6] = local_338;
          *(undefined4 *)((longlong)local_370 + 0x44) = local_324;
          *(ulonglong *)((longlong)local_370 + 0x3c) = local_32c;
          *(undefined4 *)(local_370 + 10) = local_318;
          local_370[9] = local_320;
          *(undefined4 *)((longlong)local_370 + 0x5c) = local_30c;
          *(ulonglong *)((longlong)local_370 + 0x54) = local_314;
          local_370[0xc] = local_308;
          *(undefined4 *)(local_370 + 0xd) = local_300;
          *(undefined8 *)((longlong)local_370 + 0x6c) = local_2fc;
          *(undefined4 *)((longlong)local_370 + 0x74) = uStack_2f4;
          local_370[0xf] = CONCAT44(uStack_2ec,uStack_2f0);
          local_370[0x10] = uStack_2e8;
          *(char *)(local_370 + 0x1e) = local_278;
          if (local_278 == '\x01') {
            puVar19 = auStack_2d8;
            puVar21 = local_370 + 0x12;
            for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
              *puVar21 = *puVar19;
              puVar19 = puVar19 + 1;
              puVar21 = puVar21 + 1;
            }
          }
          local_370[0x20] = local_268;
          local_370[0x21] = uStack_260;
          local_370[0x22] = local_258;
          if ((local_258 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          puVar19 = &uStack_250;
          puVar21 = local_370 + 0x23;
          for (lVar15 = 0xf; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          }
          FUN_1406fd608(local_370 + 0x32,&local_1d8);
          puVar19 = local_100;
          puVar21 = local_370 + 0x4d;
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar21 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar21 = puVar21 + 1;
          }
          *(undefined4 *)(local_370 + 0x59) = uStack_a4._4_4_;
          local_370[0x5a] = local_98;
          local_370[0x5b] = uStack_90;
          local_370[0x5c] = local_88;
          local_370[0x5d] = 0;
          lVar15 = (longlong)local_78;
          _Src = (void *)CONCAT71(uStack_7f,uStack_80);
          *(int *)(local_370 + 0x5e) = local_78;
          if (lVar15 == 0) {
            *(undefined4 *)((longlong)local_370 + 0x2f4) = 0;
          }
          else {
            FUN_1446dd670(local_370 + 0x5d,local_78,0);
            memcpy((void *)local_370[0x5d],_Src,lVar15 * 2);
          }
          *(undefined1 *)(local_370 + 0x5f) = local_70;
          lVar15 = *(longlong *)(param_1 + 0x38);
          lVar16 = (longlong)local_378[0] * 0x300;
          local_3b0 = (undefined4 *)(lVar15 + lVar16);
          piVar13 = (int *)FUN_1415b2eae(param_1 + 1000,*(undefined4 *)(lVar15 + lVar16));
          *piVar13 = local_378[0];
          if (*(int *)(lVar15 + 0x6c + lVar16) == 0) {
            lVar15 = param_1 + 0x80;
            iVar5 = *(int *)(param_1 + 0x108);
            *(uint *)(param_1 + 0x108) = iVar5 + 1U;
            lVar16 = 0x100;
            if (*(uint *)(param_1 + 0x10c) < iVar5 + 1U) goto LAB_143d2d6b9;
          }
          else {
            lVar15 = param_1 + 0x110;
            iVar5 = *(int *)(param_1 + 0x198);
            *(uint *)(param_1 + 0x198) = iVar5 + 1U;
            lVar16 = 400;
            if (*(uint *)(param_1 + 0x19c) < iVar5 + 1U) {
LAB_143d2d6b9:
              FUN_140724a48(lVar15,iVar5);
            }
          }
          puVar3 = local_3b0;
          if (*(longlong *)(param_1 + lVar16) != 0) {
            lVar15 = *(longlong *)(param_1 + lVar16);
          }
          *(int *)(lVar15 + (longlong)iVar5 * 4) = local_378[0];
          if (*(char *)(local_3b0 + 8) == '\x01') {
            puVar1 = local_3b0 + 2;
            uVar9 = FUN_140b95084(puVar1);
            piVar13 = (int *)FUN_145dac6ec(param_1 + 0x438,uVar9,puVar1);
            *piVar13 = local_378[0];
          }
          iVar5 = *(int *)(param_1 + 0x10);
          if ((longlong)iVar5 != 0) {
            lVar15 = *(longlong *)(param_1 + 8);
            lVar16 = 0;
            do {
              plVar17 = *(longlong **)(lVar15 + 8 + lVar16);
              if ((((plVar17 != (longlong *)0x0) &&
                   (iVar4 = *(int *)(lVar15 + 4 + lVar16), iVar4 != 0)) &&
                  (uVar8 = *(uint *)(lVar15 + lVar16), -1 < (int)uVar8)) &&
                 ((((int)uVar8 < DAT_14c9647dc &&
                   (lVar22 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8),
                   lVar22 != 0)) &&
                  ((*(int *)(lVar22 + 0x10) == iVar4 && ((*(uint *)(lVar22 + 8) & 0x10200000) == 0))
                  )))) {
                (**(code **)(*plVar17 + 0x10))(plVar17,&local_368);
              }
              lVar16 = lVar16 + 0x10;
            } while ((longlong)iVar5 * 0x10 != lVar16);
          }
          FUN_140725828(param_1,puVar3);
          FUN_14150ba48(param_1,puVar3);
          FUN_1410b5f9c(param_1,*puVar3);
          FUN_143d2c0aa(param_1,uVar11);
        }
        if ((*(longlong **)(param_4 + 0xf8) != (longlong *)0x0) &&
           (lVar15 = (**(code **)(**(longlong **)(param_4 + 0xf8) + 0x98))(), lVar15 != 0)) {
          uVar11 = FUN_140ef2452();
          plVar17 = (longlong *)FUN_144718840(lVar15,uVar11);
          if (plVar17 != (longlong *)0x0) {
            (**(code **)(*plVar17 + 0x10))(plVar17,local_368 & 0xffffffff);
          }
        }
        *param_2 = (undefined4)local_368;
        *(undefined1 *)(param_2 + 1) = 1;
        if (CONCAT71(uStack_7f,uStack_80) != 0) {
          FUN_1400020a8();
        }
        FUN_140368b56(&local_1d8);
        goto LAB_143d2cdd8;
      }
    }
  }
  *(undefined1 *)(param_2 + 1) = 0;
LAB_143d2cdd8:
  if ((local_60 ^ (ulonglong)auStack_3d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143d2d8ae FUN_143d2d8ae body=241 status=ok
// SIG undefined FUN_143d2d8ae(void)

void FUN_143d2d8ae(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_2 + 0x6c) != 0) {
    FUN_1410b5c5e();
    *(undefined4 *)(param_2 + 0x5c) = DAT_14cb7bd70;
    *(undefined8 *)(param_2 + 0x54) = DAT_14cb7bd68;
    *(undefined8 *)(param_2 + 0x60) = DAT_14cb7bd80;
    *(undefined4 *)(param_2 + 0x68) = DAT_14cb7bd88;
    *(undefined8 *)(param_2 + 0x78) = 0;
    *(undefined8 *)(param_2 + 0x80) = 0;
    *(undefined8 *)(param_2 + 0x6c) = 0;
    *(undefined8 *)(param_2 + 0x74) = 0;
    *(undefined1 *)(param_2 + 0x298) = 1;
    *(undefined8 *)(param_2 + 0x2a8) = DAT_14cb7c538;
    *(byte *)(param_2 + 0x2b1) = *(byte *)(param_2 + 0x2b1) | 4;
    plVar2 = *(longlong **)(param_2 + 0x108);
    if ((((plVar2 != (longlong *)0x0) && (*(int *)(param_2 + 0x104) != 0)) &&
        (uVar1 = *(uint *)(param_2 + 0x100), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_2 + 0x104))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
        (**(code **)(*plVar2 + 0x70))(plVar2,&DAT_14c8464e0,&DAT_14c8464e0);
      }
    }
    FUN_1410b6c04(param_1,param_2,1);
    return;
  }
  return;
}



// FUNCTION 143d2d9a0 FUN_143d2d9a0 body=193 status=ok
// SIG undefined FUN_143d2d9a0(void)

void FUN_143d2d9a0(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (*(int *)(param_2 + 0x6c) != 0) {
    return;
  }
  *(undefined1 *)(param_2 + 0x298) = 1;
  uVar6 = param_3[1];
  *(undefined8 *)(param_2 + 0x268) = *param_3;
  *(undefined8 *)(param_2 + 0x270) = uVar6;
  *(undefined8 *)(param_2 + 0x278) = param_3[2];
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  *(undefined4 *)(param_2 + 0x280) = *param_4;
  *(undefined4 *)(param_2 + 0x284) = uVar3;
  *(undefined4 *)(param_2 + 0x288) = uVar4;
  *(undefined4 *)(param_2 + 0x28c) = uVar5;
  *(undefined8 *)(param_2 + 0x290) = *(undefined8 *)(param_4 + 4);
  plVar2 = *(longlong **)(param_2 + 0x108);
  if ((((plVar2 != (longlong *)0x0) && (*(int *)(param_2 + 0x104) != 0)) &&
      (uVar1 = *(uint *)(param_2 + 0x100), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0)) &&
      ((*(int *)(lVar7 + 0x10) == *(int *)(param_2 + 0x104) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
    (**(code **)(*plVar2 + 0x70))(plVar2,param_3,param_4);
  }
  FUN_1410b6c04(param_1,param_2,2);
  return;
}



// FUNCTION 143d2da62 FUN_143d2da62 body=196 status=ok
// SIG undefined FUN_143d2da62(void)

longlong FUN_143d2da62(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 != 1) {
      return 0;
    }
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    if (DVar3 != DVar4) {
      return 0;
    }
  }
  lVar5 = FUN_140718ac0(param_1,param_2);
  if (((lVar5 != 0) && (*(longlong *)(lVar5 + 0x108) != 0)) && (*(int *)(lVar5 + 0x104) != 0)) {
    uVar2 = *(uint *)(lVar5 + 0x100);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(lVar5 + 0x104))) {
      if ((*(uint *)(lVar6 + 8) & 0x10200000) == 0) {
        return *(longlong *)(lVar5 + 0x108);
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 143d2db84 FUN_143d2db84 body=323 status=ok
// SIG undefined FUN_143d2db84(void)

void FUN_143d2db84(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = param_2;
  if (((*(int *)(param_1 + 0x20) != 0) && (uVar1 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x20))) &&
       ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
      iVar4 = FUN_140ac16d8(param_1);
      if (iVar4 == 3) goto LAB_143d2dca7;
    }
  }
  lVar5 = FUN_140718ac0(param_1,param_2);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x2c) == '\x02')) {
    *(undefined8 *)(lVar5 + 0x24) = 0;
    *(undefined1 *)(lVar5 + 0x2c) = 0;
    FUN_1410b6c04(param_1,lVar5,8);
    iVar4 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar4 != 0) {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(lVar5 + 8 + lVar7);
        if ((((plVar3 != (longlong *)0x0) && (iVar2 = *(int *)(lVar5 + 4 + lVar7), iVar2 != 0)) &&
            (uVar1 = *(uint *)(lVar5 + lVar7), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == iVar2)) &&
             ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
            (**(code **)(*plVar3 + 0x28))(plVar3,&local_2c);
          }
        }
        lVar7 = lVar7 + 0x10;
      } while ((longlong)iVar4 * 0x10 != lVar7);
    }
  }
LAB_143d2dca7:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2dcc8 FUN_143d2dcc8 body=224 status=ok
// SIG undefined FUN_143d2dcc8(void)

void FUN_143d2dcc8(longlong param_1,uint param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong lVar3;
  int iVar4;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 != 1) {
      return;
    }
    DVar1 = FUN_140ad26c0();
    DVar2 = GetCurrentThreadId();
    if (DVar1 != DVar2) {
      return;
    }
  }
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    lVar3 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x428);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 1000) + (longlong)iVar4 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar4 * 0x10) == param_2) {
          if ((int *)(lVar3 + 4) == (int *)0x0 || lVar3 == 0) {
            return;
          }
          FUN_143d2d9a0(param_1,(longlong)*(int *)(lVar3 + 4) * 0x300 +
                                *(longlong *)(param_1 + 0x38),&DAT_14c8464e0,&DAT_14c8464e0);
          return;
        }
        iVar4 = *(int *)(lVar3 + 8);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 143d2dda8 FUN_143d2dda8 body=392 status=ok
// SIG undefined FUN_143d2dda8(void)

void FUN_143d2dda8(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [39];
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = 0;
  uVar5 = FUN_143d2bfe0(param_1,0);
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1c);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar2 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar2 == (undefined8 *)0x0) ||
         ((*(int *)(puVar2 + 2) != *(int *)(param_1 + 0x20) ||
          ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)))) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar2;
      }
    }
  }
  FUN_143d2e3d2(param_2,uVar4,uVar5,&local_41);
  if (param_3 != '\x05' && *(char *)(param_2 + 0x298) == '\x05') {
    FUN_143d2bfe0(param_1,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
  }
  if (param_3 != '\x06' && *(char *)(param_2 + 0x298) == '\x06') {
    uVar5 = FUN_143d2bfe0(param_1,0);
    *(undefined4 *)(param_2 + 0x2a0) = 0x40400000;
    *(undefined4 *)(param_2 + 0x29c) = uVar5;
    if ((((*(longlong *)(param_2 + 0x108) != 0) && (*(int *)(param_2 + 0x104) != 0)) &&
        (uVar1 = *(uint *)(param_2 + 0x100), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_2 + 0x104))) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2df64 FUN_143d2df64 body=1133 status=ok
// SIG undefined FUN_143d2df64(void)

void FUN_143d2df64(longlong param_1,int *param_2,ulonglong param_3,char param_4)

{
  ulonglong uVar1;
  uint *puVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  size_t _Size;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [13];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar11 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar11 != 2)) {
    if (iVar11 != 1) goto LAB_143d2dfbf;
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    if (DVar6 != DVar7) goto LAB_143d2dfbf;
  }
  FUN_1410b5c5e(param_1,param_2);
  FUN_1415df23e(param_1,param_2);
  iVar11 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar11 != 0) {
    lVar12 = *(longlong *)(param_1 + 8);
    lVar18 = 0;
    do {
      plVar3 = *(longlong **)(lVar12 + 8 + lVar18);
      if ((((plVar3 != (longlong *)0x0) && (iVar16 = *(int *)(lVar12 + 4 + lVar18), iVar16 != 0)) &&
          (uVar13 = *(uint *)(lVar12 + lVar18), -1 < (int)uVar13)) &&
         ((((int)uVar13 < DAT_14c9647dc &&
           (lVar15 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8), lVar15 != 0))
          && ((*(int *)(lVar15 + 0x10) == iVar16 && ((*(uint *)(lVar15 + 8) & 0x10200000) == 0))))))
      {
        (**(code **)(*plVar3 + 0x18))
                  (plVar3,param_2,
                   CONCAT71((int7)((ulonglong)lVar15 >> 8),
                            (*(byte *)((longlong)param_2 + 0x2b1) & 8) == 0));
      }
      lVar18 = lVar18 + 0x10;
    } while ((longlong)iVar11 * 0x10 != lVar18);
  }
  if ((param_4 == '\0') || ((*(byte *)(param_2 + 0xac) & 1) == 0)) {
LAB_143d2e0c0:
    if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
      lVar12 = param_1 + 0x420;
      if (*(longlong *)(param_1 + 0x428) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x428);
      }
      iVar11 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x430) - 1U & (longlong)*param_2) * 4
                       );
      if (iVar11 != -1) {
        lVar18 = *(longlong *)(param_1 + 1000);
LAB_143d2e109:
        lVar15 = lVar18 + (longlong)iVar11 * 0x10;
        if (*(int *)(lVar18 + (longlong)iVar11 * 0x10) != *param_2) goto code_r0x000143d2e11a;
        iVar16 = *(int *)(lVar12 + (longlong)*(int *)(lVar15 + 0xc) * 4);
        if (iVar16 == iVar11) {
          piVar9 = (int *)(lVar12 + (longlong)*(int *)(lVar15 + 0xc) * 4);
        }
        else {
          do {
            piVar9 = (int *)((longlong)iVar16 * 0x10 + lVar18 + 8);
            iVar16 = *piVar9;
          } while (iVar16 != iVar11);
        }
        *piVar9 = *(int *)(lVar15 + 8);
        FUN_143d3475e();
      }
    }
LAB_143d2e15a:
    bVar4 = false;
  }
  else {
    if ((byte)((char)param_2[0xa6] - 5U) < 2) goto LAB_143d2dfbf;
    if ((char)param_2[0xa6] == '\a') goto LAB_143d2e0c0;
    *(byte *)(param_2 + 0xac) = *(byte *)(param_2 + 0xac) | 0x40;
    *(undefined1 *)(param_2 + 0xa6) = 2;
    bVar4 = true;
  }
  if ((((*(longlong *)(param_2 + 0x42) != 0) && (param_2[0x41] != 0)) &&
      (uVar13 = param_2[0x40], -1 < (int)uVar13)) &&
     ((((int)uVar13 < DAT_14c9647dc &&
       (lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8), lVar12 != 0)) &&
      ((*(int *)(lVar12 + 0x10) == param_2[0x41] && ((*(uint *)(lVar12 + 8) & 0x10200000) == 0))))))
  {
    FUN_143d2be04(param_2,0,param_1 + 0x1c);
    if ((bVar4) && (cVar5 = (**(code **)(**(longlong **)(param_2 + 0x42) + 0x28))(), cVar5 != '\0'))
    {
      (**(code **)(**(longlong **)(param_2 + 0x42) + 0x30))(*(longlong **)(param_2 + 0x42),local_a8)
      ;
      puVar14 = local_a8;
      piVar9 = param_2 + 0x4c;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *(undefined8 *)piVar9 = *puVar14;
        puVar14 = puVar14 + 1;
        piVar9 = piVar9 + 2;
      }
    }
    FUN_141488992(param_2);
  }
  if (param_2[1] != 0) {
    FUN_1409a11ae(param_1 + 0x488);
  }
  if ((char)param_2[8] == '\x01') {
    FUN_14611f042(param_1 + 0x438,param_2 + 2);
  }
  uVar13 = (uint)param_3;
  if (((!bVar4) && (-1 < (int)uVar13)) && ((int)uVar13 < *(int *)(param_1 + 0x60))) {
    lVar12 = *(longlong *)(param_1 + 0x58);
    if (*(longlong *)(param_1 + 0x58) == 0) {
      lVar12 = param_1 + 0x48;
    }
    uVar17 = param_3 >> 5 & 0x7ffffff;
    if ((*(uint *)(lVar12 + uVar17 * 4) >> (uVar13 & 0x1f) & 1) != 0) {
      lVar18 = (param_3 & 0xffffffff) * 0x300;
      lVar12 = *(longlong *)(param_1 + 0x38) + lVar18;
      if (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x2e8 + lVar18) != 0) {
        FUN_1400020a8();
      }
      FUN_140368b56(lVar12 + 400);
      if (*(char *)(lVar12 + 0xf0) == '\x01') {
        *(undefined1 *)(lVar12 + 0xf0) = 0;
      }
      if (*(char *)(lVar12 + 0x20) == '\x01') {
        *(undefined1 *)(lVar12 + 0x20) = 0;
      }
      lVar12 = *(longlong *)(param_1 + 0x38);
      if (*(int *)(param_1 + 0x6c) != 0) {
        *(uint *)(lVar12 + (longlong)*(int *)(param_1 + 0x68) * 0x300) = uVar13;
      }
      *(undefined4 *)(lVar12 + lVar18) = 0xffffffff;
      if (*(int *)(param_1 + 0x6c) < 1) {
        uVar10 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)(param_1 + 0x68);
      }
      *(undefined4 *)(lVar12 + lVar18 + 4) = uVar10;
      *(uint *)(param_1 + 0x68) = uVar13;
      *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
      lVar12 = param_1 + 0x48;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x58);
      }
      puVar2 = (uint *)(lVar12 + uVar17 * 4);
      *puVar2 = *puVar2 & ~(1 << ((byte)param_3 & 0x1f));
    }
  }
  uVar8 = *(uint *)(param_1 + 0x348);
  _Size = 0xfffffffffffffffc;
  iVar11 = -1;
  uVar17 = (ulonglong)uVar8;
  do {
    if ((int)uVar17 < 1) goto LAB_143d2dfbf;
    uVar1 = uVar17 - 1;
    lVar12 = *(longlong *)(param_1 + 0x340);
    if (*(longlong *)(param_1 + 0x340) == 0) {
      lVar12 = param_1 + 0x2c0;
    }
    _Size = _Size + 4;
    iVar11 = iVar11 + 1;
    lVar18 = uVar17 * 4;
    uVar17 = uVar1;
  } while (*(uint *)(lVar12 + -4 + lVar18) != uVar13);
  if (iVar11 != 0) {
    memmove((void *)(lVar12 + uVar1 * 4),(void *)(lVar12 + uVar1 * 4 + 4),_Size);
    uVar8 = *(uint *)(param_1 + 0x348);
  }
  *(uint *)(param_1 + 0x348) = uVar8 - 1;
LAB_143d2dfbf:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143d2e11a:
  iVar11 = *(int *)(lVar15 + 8);
  if (iVar11 == -1) goto LAB_143d2e15a;
  goto LAB_143d2e109;
}



// FUNCTION 143d2e3d2 FUN_143d2e3d2 body=1302 status=ok
// SIG undefined FUN_143d2e3d2(void)

void FUN_143d2e3d2(longlong param_1,longlong param_2,float param_3,undefined1 *param_4)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_d8 [32];
  undefined8 local_b8 [13];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_4 = 0;
  lVar13 = DAT_14cb7c538;
  lVar17 = DAT_14cb7c488;
  if (*(char *)(param_1 + 0x298) == '\x03') {
    if (((((*(int *)(param_1 + 0x6c) == 0) && ((*(byte *)(param_1 + 0x2b0) & 0x10) == 0)) &&
         (*(longlong **)(param_1 + 0x108) != (longlong *)0x0)) &&
        ((*(int *)(param_1 + 0x104) != 0 && (uVar2 = *(uint *)(param_1 + 0x100), -1 < (int)uVar2))))
       && ((int)uVar2 < DAT_14c9647dc)) {
      lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((lVar17 != 0) && (*(int *)(lVar17 + 0x10) == *(int *)(param_1 + 0x104))) &&
         (((*(uint *)(lVar17 + 8) & 0x10200000) == 0 &&
          ((0.0 <= *(float *)(param_1 + 0x2a4) && (*(float *)(param_1 + 0x2a4) <= param_3)))))) {
        if (param_2 == 0) {
          lVar17 = *(longlong *)(param_1 + 0x2a8);
        }
        else {
          if (*(longlong *)(param_2 + 0x30) == 0) {
            lVar17 = 0;
          }
          else {
            lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360);
          }
          plVar11 = &DAT_14cb7c538;
          if (lVar17 != 0) {
            plVar11 = (longlong *)(lVar17 + 0x18);
          }
          lVar17 = *plVar11;
          if (lVar17 == DAT_14cb7c538) {
            lVar17 = *(longlong *)(param_1 + 0x2a8);
          }
          *(longlong *)(param_1 + 0x2a8) = lVar17;
        }
        lVar16 = DAT_14cb7c4a0;
        if (lVar17 == lVar13) {
          iVar3 = *(int *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0xc60);
          if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
            uVar12 = 0;
          }
          else if (iVar3 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            uVar12 = (ulonglong)(DVar9 != DVar10);
          }
          else {
            uVar12 = 1;
          }
          *(float *)(param_1 + 0x2a4) = param_3 + *(float *)(lVar16 + uVar12 * 4);
        }
        else {
          (**(code **)(**(longlong **)(param_1 + 0x108) + 0x48))();
          *(undefined1 *)(param_1 + 0x298) = 1;
          *(undefined4 *)(param_1 + 0x2a4) = 0xbf800000;
          *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) & 0xfb;
          *param_4 = 1;
        }
      }
    }
    goto LAB_143d2e624;
  }
  if (*(char *)(param_1 + 0x298) != '\x01') goto LAB_143d2e624;
  if ((*(longlong **)(param_1 + 0x108) == (longlong *)0x0) || (*(int *)(param_1 + 0x104) == 0)) {
LAB_143d2e47e:
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar12 = 0;
    }
    else if (iVar3 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      uVar12 = (ulonglong)(DVar9 != DVar10);
    }
    else {
      uVar12 = 1;
    }
    param_3 = param_3 - *(float *)(param_1 + 0x29c);
    pfVar1 = (float *)(lVar17 + uVar12 * 4);
    if (param_3 < *pfVar1 || param_3 == *pfVar1) goto LAB_143d2e624;
    if (*(char *)(param_1 + 0x298) == '\x01') {
      *(undefined1 *)(param_1 + 0x298) = 3;
    }
    *(undefined8 *)(param_1 + 0x278) = DAT_14c8464f0;
    uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(ulonglong *)(param_1 + 0x268) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 0x270) = uVar4;
LAB_143d2e604:
    uVar7 = DAT_14c8464e8._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x280) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x284) = uVar5;
    *(undefined4 *)(param_1 + 0x288) = uVar6;
    *(undefined4 *)(param_1 + 0x28c) = uVar7;
    *(undefined8 *)(param_1 + 0x290) = DAT_14c8464f0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x100);
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d2e47e;
    lVar16 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar16 == 0) || (*(int *)(lVar16 + 0x10) != *(int *)(param_1 + 0x104))) ||
       ((*(uint *)(lVar16 + 8) & 0x10200000) != 0)) goto LAB_143d2e47e;
    if (*(longlong *)(param_2 + 0x30) == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360);
    }
    plVar11 = &DAT_14cb7c538;
    if (lVar17 != 0) {
      plVar11 = (longlong *)(lVar17 + 0x18);
    }
    lVar17 = *plVar11;
    lVar16 = lVar17;
    if (lVar17 == DAT_14cb7c538) {
      lVar16 = *(longlong *)(param_1 + 0x2a8);
    }
    *(longlong *)(param_1 + 0x2a8) = lVar16;
    if (lVar16 != lVar13) {
      *(byte *)(param_1 + 0x2b1) = *(byte *)(param_1 + 0x2b1) & 0xfb;
    }
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x28))();
    if (cVar8 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x108) + 0x30))
                (*(longlong **)(param_1 + 0x108),local_b8);
      puVar14 = local_b8;
      puVar15 = (undefined8 *)(param_1 + 0x130);
      for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar15 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar15 = puVar15 + 1;
      }
    }
    bVar18 = true;
    if (((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) &&
       (lVar13 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x360), lVar13 != 0)) {
      bVar18 = *(longlong *)(lVar13 + 0x18) != *(longlong *)(param_1 + 0x2a8);
    }
    cVar8 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x50))();
    if (cVar8 != '\0') {
      *(undefined1 *)(param_1 + 0x298) = 2;
      uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *(ulonglong *)(param_1 + 0x268) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(undefined8 *)(param_1 + 0x270) = uVar4;
      *(undefined8 *)(param_1 + 0x278) = DAT_14c8464f0;
      goto LAB_143d2e604;
    }
    if ((bool)(~bVar18 & lVar17 != DAT_14cb7c538)) goto LAB_143d2e624;
    (**(code **)(**(longlong **)(param_1 + 0x108) + 0x40))();
    *(undefined1 *)(param_1 + 0x298) = 3;
    *(undefined8 *)(param_1 + 0x278) = DAT_14c8464f0;
    uVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    *(ulonglong *)(param_1 + 0x268) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    *(undefined8 *)(param_1 + 0x270) = uVar4;
    *(undefined8 *)(param_1 + 0x290) = DAT_14c8464f0;
    uVar7 = DAT_14c8464e8._4_4_;
    uVar6 = (undefined4)DAT_14c8464e8;
    uVar5 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x280) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(param_1 + 0x284) = uVar5;
    *(undefined4 *)(param_1 + 0x288) = uVar6;
    *(undefined4 *)(param_1 + 0x28c) = uVar7;
    lVar13 = DAT_14cb7c4a0;
    if (lVar17 == DAT_14cb7c538) {
      iVar3 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
        uVar12 = 0;
      }
      else if (iVar3 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        uVar12 = (ulonglong)(DVar9 != DVar10);
      }
      else {
        uVar12 = 1;
      }
      *(float *)(param_1 + 0x2a4) = param_3 + *(float *)(lVar13 + uVar12 * 4);
    }
  }
  *param_4 = 1;
LAB_143d2e624:
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2e8e9 FUN_143d2e8e9 body=687 status=ok
// SIG undefined FUN_143d2e8e9(void)

void FUN_143d2e8e9(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  longlong *plVar7;
  double *pdVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  
  lVar12 = DAT_14cb7c518;
  iVar6 = *(int *)(param_1 + 0x11c);
  if (iVar6 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x118);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar9 == 0) {
    return;
  }
  if (*(int *)(lVar9 + 0x10) != iVar6) {
    return;
  }
  if ((*(uint *)(lVar9 + 8) & 0x10200000) != 0) {
    return;
  }
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar2 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar2 == 2)) {
    lVar12 = 0;
LAB_143d2e9ac:
    fVar16 = *(float *)(DAT_14cb7c518 + lVar12 * 4);
LAB_143d2e9b1:
    uVar1 = *(uint *)(param_1 + 0x118);
    lVar12 = 0;
    bVar3 = false;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != iVar6 || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) {
        bVar3 = false;
        goto LAB_143d2eb64;
      }
      lVar12 = *plVar7;
      bVar3 = false;
    }
  }
  else {
    if (iVar2 != 1) {
      lVar12 = 1;
      goto LAB_143d2e9ac;
    }
    DVar4 = FUN_140ad26c0();
    DVar5 = GetCurrentThreadId();
    iVar6 = *(int *)(param_1 + 0x11c);
    fVar16 = *(float *)(lVar12 + (ulonglong)(DVar4 != DVar5) * 4);
    if (iVar6 != 0) goto LAB_143d2e9b1;
    iVar6 = 0;
    bVar3 = true;
LAB_143d2eb64:
    lVar12 = 0;
  }
  lVar12 = *(longlong *)(lVar12 + 0x1c8);
  if (lVar12 == 0) {
    pdVar8 = (double *)&DAT_14c8464e0;
    dVar13 = DAT_14c8464f0;
  }
  else {
    pdVar8 = (double *)(lVar12 + 0x260);
    dVar13 = *(double *)(lVar12 + 0x270);
  }
  dVar13 = dVar13 - *(double *)(param_1 + 0x160);
  dVar14 = *pdVar8 - *(double *)(param_1 + 0x150);
  dVar15 = pdVar8[1] - *(double *)(param_1 + 0x158);
  plVar7 = *(longlong **)(param_1 + 0x108);
  if (((((plVar7 == (longlong *)0x0) || (*(int *)(param_1 + 0x104) == 0)) ||
       (uVar1 = *(uint *)(param_1 + 0x100), (int)uVar1 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar1 ||
       (lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar12 == 0)))) ||
     ((*(int *)(lVar12 + 0x10) != *(int *)(param_1 + 0x104) ||
      ((*(uint *)(lVar12 + 8) & 0x10200000) != 0)))) goto LAB_143d2eb29;
  if (bVar3) {
LAB_143d2eb5e:
    uVar10 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x118);
    uVar10 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != iVar6 || ((*(uint *)(puVar11 + 1) & 0x10200000) != 0))))
      goto LAB_143d2eb5e;
      uVar10 = *puVar11;
    }
  }
  (**(code **)(*plVar7 + 0x58))(plVar7,uVar10,fVar16,*(undefined4 *)(param_1 + 0x120));
LAB_143d2eb29:
  *(undefined1 *)(param_1 + 0x298) = 5;
  *(undefined4 *)(param_1 + 0x29c) = param_2;
  *(float *)(param_1 + 0x2a0) =
       (float)SQRT(dVar13 * dVar13 + dVar14 * dVar14 + dVar15 * dVar15) / fVar16;
  return;
}



// FUNCTION 143d2eb98 FUN_143d2eb98 body=643 status=ok
// SIG undefined FUN_143d2eb98(void)

void FUN_143d2eb98(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar5 != 2)) {
    if (iVar5 != 1) goto LAB_143d2ebe5;
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    if (DVar3 != DVar4) goto LAB_143d2ebe5;
  }
  if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
    lVar7 = param_1 + 0x420;
    if (*(longlong *)(param_1 + 0x428) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x428);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x430) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 1000) + (longlong)iVar5 * 0x10;
        if (*(uint *)(*(longlong *)(param_1 + 1000) + (longlong)iVar5 * 0x10) == param_2) {
          if ((uint *)(lVar7 + 4) != (uint *)0x0 && lVar7 != 0) {
            uVar1 = *(uint *)(lVar7 + 4);
            if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x60))) {
              lVar7 = param_1 + 0x48;
              if (*(longlong *)(param_1 + 0x58) != 0) {
                lVar7 = *(longlong *)(param_1 + 0x58);
              }
              if ((*(uint *)(lVar7 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0) {
                lVar7 = (ulonglong)uVar1 * 0x300 + *(longlong *)(param_1 + 0x38);
                if (*(int *)(param_1 + 0x20) == 0) {
LAB_143d2ee0e:
                  lVar10 = 0;
                }
                else {
                  uVar1 = *(uint *)(param_1 + 0x1c);
                  lVar10 = 0;
                  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
                    plVar6 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                    if ((plVar6 == (longlong *)0x0) ||
                       (((int)plVar6[2] != *(int *)(param_1 + 0x20) ||
                        ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_143d2ee0e;
                    lVar10 = *plVar6;
                  }
                }
                if (*(longlong *)(lVar10 + 0x30) == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x30) + 0x360);
                }
                plVar6 = &DAT_14cb7c538;
                if (lVar10 != 0) {
                  plVar6 = (longlong *)(lVar10 + 0x18);
                }
                lVar10 = *plVar6;
                if (lVar10 == DAT_14cb7c538) {
                  lVar10 = *(longlong *)(lVar7 + 0x2a8);
                }
                *(longlong *)(lVar7 + 0x2a8) = lVar10;
                if (((((*(longlong **)(lVar7 + 0x108) != (longlong *)0x0) &&
                      (*(int *)(lVar7 + 0x104) != 0)) &&
                     (uVar1 = *(uint *)(lVar7 + 0x100), -1 < (int)uVar1)) &&
                    (((int)uVar1 < DAT_14c9647dc &&
                     (lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8),
                     lVar10 != 0)))) &&
                   ((*(int *)(lVar10 + 0x10) == *(int *)(lVar7 + 0x104) &&
                    (((*(uint *)(lVar10 + 8) & 0x10200000) == 0 &&
                     (cVar2 = (**(code **)(**(longlong **)(lVar7 + 0x108) + 0x28))(), cVar2 != '\0')
                     ))))) {
                  if ((*(byte *)(lVar7 + 0x2b0) & 1) == 0) {
                    FUN_1410b6c04(param_1,lVar7,4);
                  }
                  (**(code **)(**(longlong **)(lVar7 + 0x108) + 0x30))
                            (*(longlong **)(lVar7 + 0x108),local_88);
                  puVar8 = local_88;
                  puVar9 = (undefined8 *)(lVar7 + 0x130);
                  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
                    *puVar9 = *puVar8;
                    puVar8 = puVar8 + 1;
                    puVar9 = puVar9 + 1;
                  }
                }
                *(undefined8 *)(lVar7 + 700) = 0;
              }
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 8);
      } while (iVar5 != -1);
    }
  }
LAB_143d2ebe5:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d2ee1c FUN_143d2ee1c body=1256 status=ok
// SIG undefined FUN_143d2ee1c(void)

void FUN_143d2ee1c(longlong *param_1,longlong param_2,float param_3,float param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  byte bVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((int)param_1[4] == 0) goto LAB_143d2ee91;
  puVar1 = (uint *)((longlong)param_1 + 0x1c);
  uVar2 = *puVar1;
  if ((((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
       (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 == 0)) ||
      ((*(int *)(lVar10 + 0x10) != (int)param_1[4] || ((*(uint *)(lVar10 + 8) & 0x10200000) != 0))))
     || (((*(byte *)(param_2 + 0x2b0) & 1) != 0 && (iVar5 = FUN_140ac16d8(param_1), iVar5 == 1))))
  goto LAB_143d2ee91;
  lVar10 = *(longlong *)(param_2 + 0x108);
  if (((*(byte *)(param_2 + 0x2b1) & 4) == 0) &&
     ((lVar6 = (**(code **)(*param_1 + 0x118))(), lVar6 == 0 ||
      (*(longlong *)(lVar6 + 0x18) != *(longlong *)(param_2 + 0x2a8))))) {
    bVar8 = 0;
  }
  else if (*(int *)(param_2 + 0x6c) == 0) {
    bVar8 = 1;
  }
  else {
    bVar8 = *(byte *)(param_2 + 0x2b0) >> 7;
  }
  bVar9 = 0;
  if ((*(byte *)(param_2 + 0x2b0) & 0x20) == 0) {
    bVar9 = bVar8;
  }
  bVar4 = false;
  if ((bVar8 & bVar9) != 1) goto LAB_143d2f147;
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    if (*(int *)(param_2 + 0x28) == 0) goto LAB_143d2f145;
    uVar2 = *(uint *)(param_2 + 0x24);
    bVar4 = false;
    if (((int)uVar2 < 0) || (bVar4 = false, DAT_14c9647dc <= (int)uVar2)) goto LAB_143d2f147;
    plVar7 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) ||
        ((((int)plVar7[2] != *(int *)(param_2 + 0x28) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ) || (lVar6 = *plVar7, lVar6 == 0)))) ||
       (lVar11 = *(longlong *)(lVar6 + 0x430), lVar11 == 0)) goto LAB_143d2f145;
    if (DAT_14cae9568 == 0) {
      local_70 = &local_58;
      local_58 = FUN_1417de738;
      local_60 = &LAB_145893408;
      local_68 = &LAB_1458cbbd2;
      local_78 = &LAB_147ba21f1;
      local_80 = &LAB_1463e9233;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x1000000c;
      local_a0 = 8;
      local_a8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar11 = *(longlong *)(lVar6 + 0x430);
      if (lVar11 == 0) goto LAB_143d2f145;
    }
    bVar4 = false;
    if ((DAT_14cae9568 != 0) && (lVar6 = *(longlong *)(lVar11 + 0x10), lVar6 != 0)) {
      if ((*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          != DAT_14cae9568 + 0x30)) goto LAB_143d2f145;
      dVar12 = *(double *)(lVar11 + 0xb0) - *(double *)(param_2 + 0x160);
      dVar14 = *(double *)(lVar11 + 0xa8) - *(double *)(param_2 + 0x158);
      dVar13 = *(double *)(lVar11 + 0xa0) - *(double *)(param_2 + 0x150);
      if (lVar10 != 0) {
        param_3 = param_4;
      }
      bVar4 = (float)(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14) <= param_3;
    }
  }
  else {
    if ((int)param_1[4] == 0) {
LAB_143d2f250:
      lVar6 = 0;
    }
    else {
      uVar2 = *puVar1;
      lVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           (((int)plVar7[2] != (int)param_1[4] || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
        goto LAB_143d2f250;
        lVar6 = *plVar7;
      }
    }
    if (lVar10 != 0) {
      param_3 = param_4;
    }
    if (0 < (longlong)*(int *)(lVar6 + 0x40)) {
      lVar11 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + lVar11 * 8);
        if ((lVar3 != 0) &&
           (dVar12 = *(double *)(lVar3 + 0xb0) - *(double *)(param_2 + 0x160),
           dVar13 = *(double *)(lVar3 + 0xa0) - *(double *)(param_2 + 0x150),
           dVar14 = *(double *)(lVar3 + 0xa8) - *(double *)(param_2 + 0x158),
           (float)(dVar12 * dVar12 + dVar13 * dVar13 + dVar14 * dVar14) <= param_3)) {
          if (lVar10 == 0) goto LAB_143d2f1e2;
          goto LAB_143d2ee91;
        }
        lVar11 = lVar11 + 1;
      } while (*(int *)(lVar6 + 0x40) != lVar11);
    }
LAB_143d2f145:
    bVar4 = false;
  }
LAB_143d2f147:
  if (lVar10 == 0) {
    if (bVar4) {
LAB_143d2f1e2:
      if ((((*(longlong *)(param_2 + 0x108) == 0) || (*(int *)(param_2 + 0x104) == 0)) ||
          ((uVar2 = *(uint *)(param_2 + 0x100), (int)uVar2 < 0 ||
           (((DAT_14c9647dc <= (int)uVar2 ||
             (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 == 0))
            || (*(int *)(lVar10 + 0x10) != *(int *)(param_2 + 0x104))))))) ||
         ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) {
        FUN_143d2c194(param_1,param_2);
      }
    }
  }
  else if ((((!bVar4 && *(longlong *)(param_2 + 0x108) != 0) && (*(int *)(param_2 + 0x104) != 0)) &&
           ((uVar2 = *(uint *)(param_2 + 0x100), -1 < (int)uVar2 &&
            (((int)uVar2 < DAT_14c9647dc &&
             (lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar10 != 0)))
            ))) && ((*(int *)(lVar10 + 0x10) == *(int *)(param_2 + 0x104) &&
                    ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)))) {
    FUN_143d2be04(param_2,0,puVar1);
    FUN_141488992(param_2);
  }
LAB_143d2ee91:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d2f306 FUN_143d2f306 body=584 status=ok
// SIG undefined FUN_143d2f306(void)

void FUN_143d2f306(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  void *_Dst;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint local_64;
  longlong local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar2 = *(int *)(param_2 + 0x88);
  if (0 < iVar2) {
    lVar1 = *param_1;
    local_80 = lVar1 + 0x1a0;
    local_70 = lVar1 + 0x230;
    local_78 = lVar1 + 0x488;
    uVar8 = 0;
    do {
      if (*(int *)param_1[1] == *(int *)param_1[2]) break;
      lVar4 = *(longlong *)(param_2 + 0x80);
      if (*(longlong *)(param_2 + 0x80) == 0) {
        lVar4 = param_2;
      }
      lVar7 = (longlong)(int)uVar8;
      local_64 = *(uint *)(lVar4 + lVar7 * 4);
      if (((int)local_64 < 0) || (*(int *)(lVar1 + 0x60) <= (int)local_64)) {
LAB_143d2f4dd:
        iVar6 = ~uVar8 + iVar2;
        if (iVar6 != 0) {
          _Dst = (void *)(lVar4 + lVar7 * 4);
LAB_143d2f4ec:
          memmove(_Dst,(void *)((longlong)_Dst + 4),(longlong)iVar6 << 2);
          iVar2 = *(int *)(param_2 + 0x88);
        }
LAB_143d2f502:
        *(int *)(param_2 + 0x88) = iVar2 + -1;
        FUN_140d827d0(param_2);
        uVar8 = uVar8 - 1;
      }
      else {
        lVar3 = *(longlong *)(lVar1 + 0x58);
        if (*(longlong *)(lVar1 + 0x58) == 0) {
          lVar3 = lVar1 + 0x48;
        }
        if ((*(uint *)(lVar3 + (ulonglong)(local_64 >> 5) * 4) >> (local_64 & 0x1f) & 1) == 0)
        goto LAB_143d2f4dd;
        lVar4 = *(longlong *)(lVar1 + 0x38) + (ulonglong)local_64 * 0x300;
        lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x2a8 + (ulonglong)local_64 * 0x300);
        if (lVar3 != DAT_14cb7c538 && lVar3 != 0) {
LAB_143d2f431:
          iVar2 = *(int *)(lVar1 + 0x228);
          *(uint *)(lVar1 + 0x228) = iVar2 + 1U;
          if (*(uint *)(lVar1 + 0x22c) < iVar2 + 1U) {
            FUN_140724a48(local_80,iVar2);
          }
          lVar3 = *(longlong *)(lVar1 + 0x220);
          if (*(longlong *)(lVar1 + 0x220) == 0) {
            lVar3 = local_80;
          }
          *(uint *)(lVar3 + (longlong)iVar2 * 4) = local_64;
          FUN_140d82884(local_70,&local_64);
          *(int *)param_1[1] = *(int *)param_1[1] + 1;
          if (*(char *)(lVar4 + 0x2b8) == '\x03') {
            local_60 = lVar4 + 4;
            local_58 = &local_64;
            FUN_14499e2d8(local_78,local_4c,&local_60,0);
          }
          iVar2 = *(int *)(param_2 + 0x88);
          iVar6 = ~uVar8 + iVar2;
          if (iVar6 != 0) {
            lVar4 = *(longlong *)(param_2 + 0x80);
            if (*(longlong *)(param_2 + 0x80) == 0) {
              lVar4 = param_2;
            }
            _Dst = (void *)(lVar4 + lVar7 * 4);
            goto LAB_143d2f4ec;
          }
          goto LAB_143d2f502;
        }
        plVar5 = (longlong *)(param_1[3] + 0x18);
        if (param_1[3] == 0) {
          plVar5 = &DAT_14cb7c538;
        }
        lVar3 = *plVar5;
        *(longlong *)(lVar4 + 0x2a8) = lVar3;
        if (lVar3 != DAT_14cb7c538) {
          FUN_143d2ee1c(lVar1,lVar4,(int)param_1[4],*(undefined4 *)((longlong)param_1 + 0x24));
          goto LAB_143d2f431;
        }
      }
      uVar8 = uVar8 + 1;
      iVar2 = *(int *)(param_2 + 0x88);
    } while ((int)uVar8 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d2f550 FUN_143d2f550 body=5147 status=ok
// SIG undefined FUN_143d2f550(void)

void FUN_143d2f550(longlong *param_1,longlong param_2,float param_3)

{
  int *piVar1;
  float fVar2;
  byte bVar3;
  char cVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  DWORD DVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  ulonglong uVar15;
  LPVOID lpTlsValue;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
  uint uVar22;
  longlong **pplVar23;
  longlong lVar24;
  undefined4 *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  undefined4 *puVar28;
  undefined8 *puVar29;
  longlong lVar30;
  uint uVar31;
  int iVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  bool bVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_258 [32];
  float local_238;
  undefined4 local_230;
  longlong **local_228;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8;
  undefined8 uStack_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  char local_1c0;
  undefined8 local_1b8;
  longlong local_1b0;
  longlong *local_1a8 [13];
  longlong *local_140;
  longlong **local_138;
  undefined8 **local_130;
  longlong local_128;
  float local_120;
  float local_11c;
  longlong **local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  lVar34 = DAT_14cb7c4e8;
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar24 + 0xc60);
  if (iVar11 == 0x40000002) {
    uVar15 = 0;
  }
  else {
    bVar37 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar11 != 2)) {
      if (iVar11 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        bVar37 = DVar13 == DVar14;
      }
      else {
        bVar37 = false;
      }
    }
    uVar15 = (ulonglong)(bVar37 ^ 1);
  }
  pfVar8 = DAT_14cb7c4b8;
  fVar40 = 0.0;
  fVar39 = 0.0;
  if (0 < *(int *)(lVar34 + uVar15 * 4)) goto LAB_143d2f6c7;
  piVar1 = (int *)(lVar24 + 0xc60);
  iVar11 = *piVar1;
  if (iVar11 == 0x40000002) {
    fVar39 = *DAT_14cb7c4b8 * *DAT_14cb7c4b8;
LAB_143d2f672:
    uVar15 = 0;
    lVar24 = DAT_14cb7c4d0;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      fVar39 = *DAT_14cb7c4b8 * *DAT_14cb7c4b8;
    }
    else if (iVar11 == 2) {
      fVar39 = *DAT_14cb7c4b8 * *DAT_14cb7c4b8;
      iVar11 = 2;
    }
    else {
      if (iVar11 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        bVar37 = DVar13 == DVar14;
        iVar11 = *piVar1;
      }
      else {
        bVar37 = false;
      }
      fVar39 = pfVar8[bVar37 ^ 1] * pfVar8[bVar37 ^ 1];
      if (iVar11 == 0x40000002) goto LAB_143d2f672;
    }
    lVar24 = DAT_14cb7c4d0;
    bVar37 = true;
    if (((DAT_14c86a9f8 & 1) != 0) && (iVar11 != 2)) {
      if (iVar11 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        bVar37 = DVar13 == DVar14;
      }
      else {
        bVar37 = false;
      }
    }
    uVar15 = (ulonglong)(bVar37 ^ 1);
  }
  fVar40 = *(float *)(lVar24 + uVar15 * 4);
  fVar40 = fVar40 * fVar40;
  if (fVar40 <= fVar39) {
    fVar40 = fVar39 * 1.25;
  }
LAB_143d2f6c7:
  if ((0 < (int)param_1[0x21]) || (0 < (int)param_1[0x33])) {
    local_138 = local_1a8;
    local_1a8[0] = (longlong *)((ulonglong)local_1a8[0] & 0xffffffff00000000);
    local_130 = &local_1d8;
    local_1d8 = (undefined8 *)CONCAT44(local_1d8._4_4_,*DAT_14cb7c530);
    local_140 = param_1;
    local_128 = param_2;
    local_120 = fVar39;
    local_11c = fVar40;
    if (*DAT_14cb7c530 != 0) {
      FUN_143d2f306(&local_140,param_1 + 0x22);
      if ((uint)local_1a8[0] < (uint)local_1d8) {
        FUN_143d2f306(&local_140,param_1 + 0x10);
      }
    }
  }
  local_c0 = (longlong **)0x0;
  local_b8 = 0x2000000000;
  local_210 = param_2;
  local_208 = (**(code **)(*param_1 + 0x118))(param_1);
  iVar11 = (int)param_1[0x57];
  if (0 < iVar11) {
    plVar19 = param_1 + 0x46;
    uVar22 = 0;
    do {
      plVar21 = (longlong *)param_1[0x56];
      if ((longlong *)param_1[0x56] == (longlong *)0x0) {
        plVar21 = plVar19;
      }
      lVar24 = (longlong)(int)uVar22;
      uVar12 = *(uint *)((longlong)plVar21 + lVar24 * 4);
      local_1a8[0] = (longlong *)CONCAT44(local_1a8[0]._4_4_,uVar12);
      if (((int)uVar12 < 0) || ((int)param_1[0xc] <= (int)uVar12)) {
LAB_143d2f861:
        if (~uVar22 + iVar11 != 0) {
          pvVar5 = (void *)((longlong)plVar21 + lVar24 * 4);
          memmove(pvVar5,(void *)((longlong)pvVar5 + 4),(longlong)(int)(~uVar22 + iVar11) << 2);
          iVar11 = (int)param_1[0x57];
        }
        *(int *)(param_1 + 0x57) = iVar11 + -1;
LAB_143d2f890:
        FUN_140d827d0(plVar19);
        uVar22 = uVar22 - 1;
      }
      else {
        plVar33 = (longlong *)param_1[0xb];
        if ((longlong *)param_1[0xb] == (longlong *)0x0) {
          plVar33 = param_1 + 9;
        }
        if ((*(uint *)((longlong)plVar33 + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) ==
            0) goto LAB_143d2f861;
        lVar34 = param_1[7];
        lVar27 = (ulonglong)uVar12 * 0x300;
        puVar26 = (undefined8 *)(lVar34 + lVar27);
        bVar3 = *(byte *)(lVar34 + 0x2b0 + lVar27);
        if ((((bVar3 & 4) != 0) && (*(byte *)(puVar26 + 0x56) = bVar3 & 0xfb, local_208 != 0)) &&
           (*(longlong *)(local_208 + 0x18) == puVar26[0x55])) {
          uVar17 = 0;
LAB_143d2f90e:
          FUN_140d82418(param_1,(ulonglong)uVar12,0,uVar17);
          iVar11 = (int)param_1[0x57];
          if (~uVar22 + iVar11 != 0) {
            plVar21 = (longlong *)param_1[0x56];
            if ((longlong *)param_1[0x56] == (longlong *)0x0) {
              plVar21 = plVar19;
            }
            memmove((void *)((longlong)plVar21 + lVar24 * 4),
                    (void *)((longlong)plVar21 + lVar24 * 4 + 4),
                    (longlong)(int)(~uVar22 + iVar11) << 2);
            iVar11 = (int)param_1[0x57];
          }
          *(int *)(param_1 + 0x57) = iVar11 + -1;
          goto LAB_143d2f890;
        }
        fVar2 = *(float *)(puVar26 + 0x54);
        if ((0.0 <= fVar2) &&
           (bVar3 = *(byte *)(puVar26 + 0x53),
           (byte)(bVar3 - 5) < 2 || *(int *)((longlong)puVar26 + 0x6c) == 0)) {
          if (bVar3 - 5 < 2) {
            if (fVar2 + *(float *)((longlong)puVar26 + 0x29c) < param_3) {
              uVar17 = CONCAT71((uint7)(uint3)(uVar12 >> 0xd),1);
              goto LAB_143d2f90e;
            }
          }
          else if ((bVar3 == 2) && (fVar2 + -3.0 + *(float *)((longlong)puVar26 + 0x29c) < param_3))
          {
            *(undefined4 *)((longlong)puVar26 + 0x2a4) = 0xbf800000;
            plVar21 = (longlong *)puVar26[0x21];
            if ((plVar21 != (longlong *)0x0) &&
               (((((*(int *)((longlong)puVar26 + 0x104) != 0 &&
                   (uVar12 = *(uint *)(puVar26 + 0x20), -1 < (int)uVar12)) &&
                  ((int)uVar12 < DAT_14c9647dc)) &&
                 ((lVar24 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8),
                  lVar24 != 0 && (*(int *)(lVar24 + 0x10) == *(int *)((longlong)puVar26 + 0x104)))))
                && ((*(uint *)(lVar24 + 8) & 0x10200000) == 0)))) {
              (**(code **)(*plVar21 + 0x60))(plVar21,0x40400000);
            }
            if (*(int *)(puVar26 + 9) != 0) {
              FUN_140d8b9a0(param_1,puVar26,0);
            }
            local_200 = param_1[7];
            local_218 = local_200 + lVar27;
            *puVar26 = *(undefined8 *)(local_200 + lVar27);
            if (local_200 == lVar34) {
              puVar25 = (undefined4 *)(local_218 + 0x24);
              puVar28 = (undefined4 *)((longlong)puVar26 + 0x24);
              for (lVar24 = 0x19; lVar24 != 0; lVar24 = lVar24 + -1) {
                *puVar28 = *puVar25;
                puVar25 = puVar25 + 1;
                puVar28 = puVar28 + 1;
              }
            }
            else {
              if (*(char *)(local_218 + 0x20) == '\x01') {
                puVar26[1] = *(undefined8 *)(local_218 + 8);
                puVar26[2] = *(undefined8 *)(local_218 + 0x10);
                *(undefined4 *)(puVar26 + 3) = *(undefined4 *)(local_218 + 0x18);
                *(undefined1 *)((longlong)puVar26 + 0x1c) = *(undefined1 *)(local_218 + 0x1c);
                uVar10 = 1;
LAB_143d2fa4e:
                *(undefined1 *)(puVar26 + 4) = uVar10;
              }
              else if (*(char *)(puVar26 + 4) != '\0') {
                uVar10 = 0;
                goto LAB_143d2fa4e;
              }
              puVar25 = (undefined4 *)(local_218 + 0x24);
              puVar28 = (undefined4 *)((longlong)puVar26 + 0x24);
              for (lVar24 = 0x19; lVar24 != 0; lVar24 = lVar24 + -1) {
                *puVar28 = *puVar25;
                puVar25 = puVar25 + 1;
                puVar28 = puVar28 + 1;
              }
              if (*(char *)(local_218 + 0xf0) == '\x01') {
                puVar18 = (undefined8 *)(local_218 + 0x90);
                puVar29 = puVar26 + 0x12;
                for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
                  *puVar29 = *puVar18;
                  puVar18 = puVar18 + 1;
                  puVar29 = puVar29 + 1;
                }
                *(undefined1 *)(puVar26 + 0x1e) = 1;
              }
              else if (*(char *)(puVar26 + 0x1e) == '\x01') {
                *(undefined1 *)(puVar26 + 0x1e) = 0;
              }
            }
            uVar38 = *(undefined4 *)(local_218 + 0x104);
            uVar6 = *(undefined4 *)(local_218 + 0x108);
            uVar7 = *(undefined4 *)(local_218 + 0x10c);
            *(undefined4 *)(puVar26 + 0x20) = *(undefined4 *)(local_218 + 0x100);
            *(undefined4 *)((longlong)puVar26 + 0x104) = uVar38;
            *(undefined4 *)(puVar26 + 0x21) = uVar6;
            *(undefined4 *)((longlong)puVar26 + 0x10c) = uVar7;
            lVar24 = *(longlong *)(local_218 + 0x110);
            if (DAT_14c950c29 == '\x01') {
              if (lVar24 == 0) {
                lVar24 = 0;
              }
              else {
                FUN_1456cec3c();
                lVar24 = *(longlong *)(local_218 + 0x110);
              }
            }
            puVar26[0x22] = lVar24;
            puVar18 = (undefined8 *)(local_218 + 0x118);
            puVar29 = puVar26 + 0x23;
            for (lVar24 = 0xf; lVar24 != 0; lVar24 = lVar24 + -1) {
              *puVar29 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar29 = puVar29 + 1;
            }
            FUN_1407b25f0(puVar26 + 0x32,local_218 + 400);
            puVar18 = (undefined8 *)(local_218 + 0x268);
            puVar29 = puVar26 + 0x4d;
            for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
              *puVar29 = *puVar18;
              puVar18 = puVar18 + 1;
              puVar29 = puVar29 + 1;
            }
            *(undefined4 *)(puVar26 + 0x59) = *(undefined4 *)(local_218 + 0x2c8);
            puVar26[0x5a] = *(undefined8 *)(local_218 + 0x2d0);
            uVar38 = *(undefined4 *)(local_218 + 0x2dc);
            uVar6 = *(undefined4 *)(local_218 + 0x2e0);
            uVar7 = *(undefined4 *)(local_218 + 0x2e4);
            *(undefined4 *)(puVar26 + 0x5b) = *(undefined4 *)(local_218 + 0x2d8);
            *(undefined4 *)((longlong)puVar26 + 0x2dc) = uVar38;
            *(undefined4 *)(puVar26 + 0x5c) = uVar6;
            *(undefined4 *)((longlong)puVar26 + 0x2e4) = uVar7;
            if (local_200 != lVar34) {
              iVar11 = *(int *)(local_218 + 0x2f0);
              pvVar5 = *(void **)(local_218 + 0x2e8);
              *(int *)(puVar26 + 0x5e) = iVar11;
              if (iVar11 == 0 && *(int *)((longlong)puVar26 + 0x2f4) == 0) {
                *(undefined4 *)((longlong)puVar26 + 0x2f4) = 0;
              }
              else {
                FUN_1446dd670(puVar26 + 0x5d,iVar11);
                if (iVar11 != 0) {
                  memcpy((void *)puVar26[0x5d],pvVar5,(longlong)iVar11 * 2);
                }
              }
            }
            *(undefined1 *)(puVar26 + 0x5f) = *(undefined1 *)(local_218 + 0x2f8);
            *(undefined1 *)(puVar26 + 0x53) = 6;
            FUN_140d82884(&local_140,local_1a8);
          }
        }
        local_1d8 = (undefined8 *)((ulonglong)local_1d8 & 0xffffffffffffff00);
        if (((int)param_1[4] == 0) ||
           (uVar12 = *(uint *)((longlong)param_1 + 0x1c), (int)uVar12 < 0)) {
LAB_143d2fc58:
          uVar17 = 0;
        }
        else {
          uVar17 = 0;
          if ((int)uVar12 < DAT_14c9647dc) {
            puVar18 = (undefined8 *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
            if (((puVar18 == (undefined8 *)0x0) || (*(int *)(puVar18 + 2) != (int)param_1[4])) ||
               ((*(uint *)(puVar18 + 1) & 0x10200000) != 0)) goto LAB_143d2fc58;
            uVar17 = *puVar18;
          }
        }
        FUN_143d2e3d2(puVar26,uVar17,param_3,&local_1d8);
        if ((char)local_1d8 == '\x01') {
          FUN_140d82884(&local_140,local_1a8);
        }
      }
      uVar22 = uVar22 + 1;
      iVar11 = (int)param_1[0x57];
    } while ((int)uVar22 < iVar11);
  }
  DVar13 = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    DVar13 = TlsAlloc();
    DVar14 = 0xffffffff;
    LOCK();
    bVar37 = DAT_14c7585d0 != 0xffffffff;
    DVar9 = DVar13;
    if (bVar37) {
      DVar14 = DAT_14c7585d0;
      DVar9 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar9;
    UNLOCK();
    if (bVar37) {
      TlsFree(DVar13);
      DVar13 = DVar14;
    }
  }
  lpTlsValue = TlsGetValue(DVar13);
  lVar24 = local_210;
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(local_1a8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(DVar13,lpTlsValue);
  }
  local_1d8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_1d0 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_1c8 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_1c0 = '\0';
  local_1b8 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_1d8;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_1e8 = 0;
  uStack_1e0 = 0;
  uVar22 = 0;
  if (lVar24 == 0) {
    uVar12 = 0;
  }
  else {
    lVar24 = *(longlong *)(lVar24 + 0x38);
    uVar22 = 0;
    uVar12 = 0;
    if (lVar24 != 0) {
      uVar22 = *(uint *)(lVar24 + 0xc);
      if ((int)uVar22 < DAT_14c9647dc) {
        lVar24 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
      }
      else {
        lVar24 = 0;
      }
      uVar12 = *(uint *)(lVar24 + 0x10);
      if (*(uint *)(lVar24 + 0x10) == 0) {
        LOCK();
        iVar11 = DAT_14c964868 + 1;
        UNLOCK();
        uVar31 = DAT_14c964868 + 1;
        bVar37 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar11;
        if (bVar37) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar31);
        }
        LOCK();
        uVar12 = *(uint *)(lVar24 + 0x10);
        bVar37 = uVar12 == 0;
        if (bVar37) {
          *(uint *)(lVar24 + 0x10) = uVar31;
          uVar12 = 0;
        }
        UNLOCK();
        if (bVar37) {
          uVar12 = uVar31;
        }
      }
    }
  }
  local_1a8[0] = (longlong *)CONCAT44(uVar12,uVar22);
  iVar11 = FUN_140d09bd2(uVar12 ^ uVar22);
  lVar24 = (longlong)iVar11 * 0x20 + DAT_14cb7c370;
  if ((lVar24 != 0 && iVar11 != -1) && (iVar11 = *(int *)(lVar24 + 0x10), (longlong)iVar11 != 0)) {
    lVar24 = *(longlong *)(lVar24 + 8);
    lVar34 = 0;
    do {
      iVar32 = *(int *)(lVar24 + 4 + lVar34);
      if ((((iVar32 != 0) && (uVar22 = *(uint *)(lVar24 + lVar34), -1 < (int)uVar22)) &&
          (((int)uVar22 < DAT_14c9647dc &&
           (((plVar19 = (longlong *)
                        ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
             plVar19 != (longlong *)0x0 && ((int)plVar19[2] == iVar32)) &&
            ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))))) && (lVar27 = *plVar19, lVar27 != 0)) {
        lVar30 = (longlong)(int)uStack_1e0;
        uVar22 = (int)uStack_1e0 + 1;
        uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar22);
        if (uStack_1e0._4_4_ < uVar22) {
          FUN_141883124(&local_1e8);
        }
        *(longlong *)(local_1e8 + lVar30 * 8) = lVar27 + 0x68;
      }
      lVar34 = lVar34 + 8;
    } while ((longlong)iVar11 * 8 != lVar34);
  }
  lVar24 = local_1e8;
  lVar34 = (longlong)(int)uStack_1e0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  if (0 < lVar34) {
    lVar27 = 0;
    do {
      plVar19 = *(longlong **)(lVar24 + lVar27 * 8);
      if (((plVar19 != (longlong *)0x0) &&
          (lVar30 = (**(code **)(*plVar19 + 0x20))(), uVar15 = uStack_1f0, lVar30 != 0)) &&
         ((*(longlong *)(lVar30 + 0x98) != 0 && (*(longlong *)(lVar30 + 0x90) != 0)))) {
        lVar35 = (longlong)(int)uStack_1f0;
        uVar22 = (int)uStack_1f0 + 1;
        uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar22);
        if (uStack_1f0._4_4_ < uVar22) {
          FUN_1417e4870(&local_1f8,uVar15 & 0xffffffff);
        }
        FUN_1417e36e6(lVar35 * 0x48 + local_1f8,lVar30,0);
        iVar11 = *(int *)(lVar30 + 0x50);
        if (0 < iVar11) {
          lVar35 = 0;
          do {
            uVar15 = uStack_1f0;
            lVar20 = *(longlong *)(lVar30 + 0x48);
            if (*(longlong *)(*(longlong *)(lVar20 + lVar35 * 8) + 0x90) != 0) {
              lVar36 = (longlong)(int)uStack_1f0;
              uVar22 = (int)uStack_1f0 + 1;
              uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar22);
              if (uStack_1f0._4_4_ < uVar22) {
                FUN_1417e4870(&local_1f8,uVar15 & 0xffffffff);
                lVar20 = *(longlong *)(lVar30 + 0x48);
              }
              FUN_1417e36e6(lVar36 * 0x48 + local_1f8,*(undefined8 *)(lVar20 + lVar35 * 8),0);
              iVar11 = *(int *)(lVar30 + 0x50);
            }
            lVar35 = lVar35 + 1;
          } while (lVar35 < iVar11);
        }
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != lVar34);
  }
  if (0 < (int)param_1[0x45]) {
    uVar38 = FUN_143d2bfe0(param_1);
    plVar19 = (longlong *)param_1[0x44];
    if ((longlong *)param_1[0x44] == (longlong *)0x0) {
      plVar19 = param_1 + 0x34;
    }
    lVar24 = param_1[0x45];
    if ((longlong)(int)lVar24 != 0) {
      lVar34 = 0;
      do {
        uVar22 = *(uint *)((longlong)plVar19 + lVar34);
        if ((-1 < (int)uVar22) && ((int)uVar22 < (int)param_1[0xc])) {
          plVar21 = (longlong *)param_1[0xb];
          if ((longlong *)param_1[0xb] == (longlong *)0x0) {
            plVar21 = param_1 + 9;
          }
          if ((*(uint *)((longlong)plVar21 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1)
              != 0) {
            if ((*(byte *)(param_1[7] + 0x2b1 + (ulonglong)uVar22 * 0x300) & 2) != 0) {
              local_1b0 = param_1[7] + (ulonglong)uVar22 * 0x300;
              local_1a8[1] = &local_1b0;
              local_1a8[0] = (longlong *)&LAB_143d348da;
              local_228 = local_1a8;
              local_238 = fVar40;
              local_230 = uVar38;
              FUN_140434402(local_1b0,&local_1f8,&local_1e8,fVar39);
            }
          }
        }
        lVar34 = lVar34 + 4;
      } while ((longlong)(int)lVar24 * 4 != lVar34);
    }
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (*(int *)((longlong)param_1 + 0x22c) != 0) {
    FUN_1417335d8(param_1 + 0x34);
  }
  iVar11 = (int)param_1[0xf];
  if (0 < iVar11) {
    plVar19 = param_1 + 0xe;
LAB_143d30505:
    puVar16 = (uint *)*plVar19;
    uVar22 = *puVar16;
    if (((int)uVar22 < 0) || ((int)param_1[0xc] <= (int)uVar22)) goto LAB_143d30548;
    plVar21 = (longlong *)param_1[0xb];
    if ((longlong *)param_1[0xb] == (longlong *)0x0) {
      plVar21 = param_1 + 9;
    }
    if ((*(uint *)((longlong)plVar21 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1) == 0)
    goto LAB_143d30548;
    if ((*(byte *)(param_1[7] + 0x2b0 + (ulonglong)uVar22 * 0x300) & 0x20) != 0) goto LAB_143d30548;
    lVar24 = param_1[7] + (ulonglong)uVar22 * 0x300;
    cVar4 = (char)puVar16[1];
    if (cVar4 == '\x05') {
      local_1a8[0] = (longlong *)CONCAT44(local_1a8[0]._4_4_,uVar22);
      iVar11 = FUN_140ac16d8(param_1);
      if (((iVar11 == 3) || (6 < *(byte *)(lVar24 + 0x298))) ||
         ((0x4eU >> (*(byte *)(lVar24 + 0x298) & 0x1f) & 1) == 0)) goto LAB_143d305e5;
      uVar38 = FUN_143d2bfe0(param_1,0);
      FUN_143d2e8e9(lVar24,uVar38);
    }
    else if (cVar4 == '\x06') {
      local_1a8[0] = (longlong *)CONCAT44(local_1a8[0]._4_4_,uVar22);
      *(undefined1 *)(lVar24 + 0x298) = 6;
      *(undefined4 *)(lVar24 + 0x2a0) = 0x40400000;
      uVar38 = FUN_143d2bfe0(param_1,0);
      *(undefined4 *)(lVar24 + 0x29c) = uVar38;
      plVar21 = *(longlong **)(lVar24 + 0x108);
      if (((((plVar21 != (longlong *)0x0) && (*(int *)(lVar24 + 0x104) != 0)) &&
           (uVar22 = *(uint *)(lVar24 + 0x100), -1 < (int)uVar22)) &&
          (((int)uVar22 < DAT_14c9647dc &&
           (lVar34 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8), lVar34 != 0))))
         && ((*(int *)(lVar34 + 0x10) == *(int *)(lVar24 + 0x104) &&
             ((*(uint *)(lVar34 + 8) & 0x10200000) == 0)))) {
        (**(code **)(*plVar21 + 0x60))(plVar21,0x40400000);
      }
    }
    else {
      if (cVar4 != '\x02') goto LAB_143d305e5;
      local_1b0 = CONCAT44(local_1b0._4_4_,uVar22);
      plVar21 = *(longlong **)(lVar24 + 0x108);
      if ((((plVar21 != (longlong *)0x0) && (*(int *)(lVar24 + 0x104) != 0)) &&
          ((uVar22 = *(uint *)(lVar24 + 0x100), -1 < (int)uVar22 &&
           ((((int)uVar22 < DAT_14c9647dc &&
             (lVar34 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8), lVar34 != 0))
            && (*(int *)(lVar34 + 0x10) == *(int *)(lVar24 + 0x104))))))) &&
         ((*(uint *)(lVar34 + 8) & 0x10200000) == 0)) {
        puVar26 = (undefined8 *)(lVar24 + 0x130);
        pplVar23 = local_1a8;
        for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
          *pplVar23 = (longlong *)*puVar26;
          puVar26 = puVar26 + 1;
          pplVar23 = pplVar23 + 1;
        }
        (**(code **)(*plVar21 + 0x20))(plVar21,local_1a8,CONCAT71((int7)((ulonglong)lVar34 >> 8),1))
        ;
        (**(code **)(**(longlong **)(lVar24 + 0x108) + 0x40))();
      }
      *(undefined1 *)(lVar24 + 0x298) = 2;
      *(undefined8 *)(lVar24 + 0x278) = DAT_14c8464f0;
      uVar17 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      *(ulonglong *)(lVar24 + 0x268) = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      *(undefined8 *)(lVar24 + 0x270) = uVar17;
      *(undefined8 *)(lVar24 + 0x290) = DAT_14c8464f0;
      uVar7 = DAT_14c8464e8._4_4_;
      uVar6 = (undefined4)DAT_14c8464e8;
      uVar38 = DAT_14c8464e0._4_4_;
      *(undefined4 *)(lVar24 + 0x280) = (undefined4)DAT_14c8464e0;
      *(undefined4 *)(lVar24 + 0x284) = uVar38;
      *(undefined4 *)(lVar24 + 0x288) = uVar6;
      *(undefined4 *)(lVar24 + 0x28c) = uVar7;
      if ((((int)param_1[4] != 0) &&
          (uVar22 = *(uint *)((longlong)param_1 + 0x1c), -1 < (int)uVar22)) &&
         ((((int)uVar22 < DAT_14c9647dc &&
           ((plVar21 = (longlong *)
                       ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
            plVar21 != (longlong *)0x0 && ((int)plVar21[2] == (int)param_1[4])))) &&
          ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
          lVar34 = *plVar21;
        }
        else {
          lVar34 = 0;
        }
        if (*(longlong *)(lVar34 + 0x30) == 0) {
          lVar34 = 0;
        }
        else {
          lVar34 = *(longlong *)(*(longlong *)(lVar34 + 0x30) + 0x360);
        }
        plVar21 = &DAT_14cb7c538;
        if (lVar34 != 0) {
          plVar21 = (longlong *)(lVar34 + 0x18);
        }
        lVar34 = *plVar21;
        if (lVar34 == DAT_14cb7c538) {
          lVar34 = *(longlong *)(lVar24 + 0x2a8);
        }
        *(longlong *)(lVar24 + 0x2a8) = lVar34;
      }
    }
    FUN_140d82884(&local_140);
LAB_143d305e5:
    iVar11 = 0;
    iVar32 = (int)param_1[0xf] + -1;
    if (iVar32 != 0) {
      memmove((void *)param_1[0xe],(void *)(param_1[0xe] + 8),(longlong)iVar32 << 3);
      iVar11 = (int)param_1[0xf] + -1;
    }
    *(int *)(param_1 + 0xf) = iVar11;
    FUN_1418832e6(plVar19);
  }
LAB_143d30010:
  plVar19 = param_1 + 0x6a;
  plVar21 = (longlong *)param_1[0x7a];
  if ((longlong *)param_1[0x7a] == (longlong *)0x0) {
    plVar21 = plVar19;
  }
  lVar24 = param_1[0x7b];
  if ((longlong)(int)lVar24 != 0) {
    lVar34 = 0;
    do {
      local_1a8[0] = (longlong *)
                     CONCAT44(local_1a8[0]._4_4_,*(undefined4 *)((longlong)plVar21 + lVar34));
      FUN_140d82884(&local_140);
      lVar34 = lVar34 + 4;
    } while ((longlong)(int)lVar24 * 4 != lVar34);
  }
  if (0 < (int)local_b8) {
    uVar38 = FUN_143d2bfe0(param_1);
    pplVar23 = local_c0;
    if (local_c0 == (longlong **)0x0) {
      pplVar23 = &local_140;
    }
    lVar24 = (longlong)(int)local_b8;
    if (lVar24 != 0) {
      lVar34 = 0;
      do {
        uVar22 = *(uint *)((longlong)pplVar23 + lVar34);
        if ((-1 < (int)uVar22) && ((int)uVar22 < (int)param_1[0xc])) {
          plVar21 = (longlong *)param_1[0xb];
          if ((longlong *)param_1[0xb] == (longlong *)0x0) {
            plVar21 = param_1 + 9;
          }
          if ((*(uint *)((longlong)plVar21 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1)
              != 0) {
            if (((*(byte *)(param_1[7] + 0x2b1 + (ulonglong)uVar22 * 0x300) & 2) != 0) &&
               (((lVar27 = param_1[7] + (ulonglong)uVar22 * 0x300,
                 (*(byte *)(lVar27 + 0x2b0) & 1) == 0 || ((*(byte *)(lVar27 + 0x2f8) & 0x1b) != 0))
                || (1 < (byte)(*(char *)(lVar27 + 0x298) - 1U))))) {
              local_1a8[1] = &local_1b0;
              local_1a8[0] = (longlong *)&LAB_143d34904;
              local_228 = local_1a8;
              local_238 = fVar40;
              local_230 = uVar38;
              local_1b0 = lVar27;
              FUN_140434402(lVar27,&local_1f8,&local_1e8,fVar39);
            }
          }
        }
        lVar34 = lVar34 + 4;
      } while (lVar24 * 4 != lVar34);
    }
  }
  plVar21 = (longlong *)param_1[0x7a];
  if ((longlong *)param_1[0x7a] == (longlong *)0x0) {
    plVar21 = plVar19;
  }
  lVar24 = param_1[0x7b];
  if ((longlong)(int)lVar24 != 0) {
    lVar34 = 0;
    do {
      uVar22 = *(uint *)((longlong)plVar21 + lVar34);
      if ((-1 < (int)uVar22) && ((int)uVar22 < (int)param_1[0xc])) {
        plVar33 = (longlong *)param_1[0xb];
        if ((longlong *)param_1[0xb] == (longlong *)0x0) {
          plVar33 = param_1 + 9;
        }
        if ((*(uint *)((longlong)plVar33 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1) !=
            0) {
          *(undefined1 *)(param_1[7] + 0x2f8 + (ulonglong)uVar22 * 0x300) = 0;
        }
      }
      lVar34 = lVar34 + 4;
    } while ((longlong)(int)lVar24 * 4 != lVar34);
  }
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (*(int *)((longlong)param_1 + 0x3dc) != 0) {
    FUN_1417335d8(plVar19);
  }
  iVar11 = 0;
  uVar38 = FUN_143d2bfe0(param_1);
  do {
    uVar22 = *(uint *)(param_1 + 8);
    if ((int)(uVar22 - *(int *)((longlong)param_1 + 0x6c)) <= iVar11) break;
    uVar12 = *(uint *)(param_1 + 0x7c);
    uVar31 = uVar22;
    if (0 < (int)uVar22) {
      do {
        uVar15 = (ulonglong)uVar12;
        uVar12 = (uint)(uVar15 % (ulonglong)uVar22);
        *(uint *)(param_1 + 0x7c) = uVar12;
        if ((-1 < (int)uVar12) && ((int)uVar12 < (int)param_1[0xc])) {
          plVar19 = (longlong *)param_1[0xb];
          if ((longlong *)param_1[0xb] == (longlong *)0x0) {
            plVar19 = param_1 + 9;
          }
          if ((*(uint *)((longlong)plVar19 + (uVar15 % (ulonglong)uVar22 >> 5) * 4) >>
               (uVar12 & 0x1f) & 1) != 0) break;
        }
        uVar12 = uVar12 + 1;
        *(uint *)(param_1 + 0x7c) = uVar12;
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
    lVar24 = param_1[7] + (longlong)(int)uVar12 * 0x300;
    if ((*(byte *)(param_1[7] + 0x2b1 + (longlong)(int)uVar12 * 0x300) & 2) != 0) {
      local_1a8[0] = (longlong *)&LAB_143d34928;
      local_228 = local_1a8;
      local_238 = fVar40;
      local_230 = uVar38;
      local_1b0 = lVar24;
      local_1a8[1] = &local_1b0;
      FUN_140434402(lVar24,&local_1f8,&local_1e8,fVar39);
    }
    FUN_143d2ee1c(param_1,lVar24,fVar39,fVar40);
    *(int *)(param_1 + 0x7c) = (int)param_1[0x7c] + 1;
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x32);
  if (0 < (int)param_1[0x69]) {
    uVar38 = FUN_143d2bfe0(param_1,0);
    iVar11 = (int)param_1[0x69];
    if (0 < (longlong)iVar11) {
      plVar19 = param_1 + 0x58;
      if ((longlong *)param_1[0x68] != (longlong *)0x0) {
        plVar19 = (longlong *)param_1[0x68];
      }
      puVar16 = (uint *)((longlong)plVar19 + (longlong)iVar11 * 4);
      do {
        iVar11 = iVar11 + -1;
        puVar16 = puVar16 + -1;
        uVar22 = *puVar16;
        if ((-1 < (int)uVar22) && ((int)uVar22 < (int)param_1[0xc])) {
          plVar19 = (longlong *)param_1[0xb];
          if ((longlong *)param_1[0xb] == (longlong *)0x0) {
            plVar19 = param_1 + 9;
          }
          if ((*(uint *)((longlong)plVar19 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1)
              != 0) {
            lVar24 = param_1[7] + (ulonglong)uVar22 * 0x300;
            if ((*(byte *)(param_1[7] + 0x2b1 + (ulonglong)uVar22 * 0x300) & 2) != 0) {
              local_1a8[0] = (longlong *)&LAB_143d3496e;
              local_228 = local_1a8;
              local_238 = fVar40;
              local_230 = uVar38;
              local_1b0 = lVar24;
              local_1a8[1] = &local_1b0;
              FUN_140434402(lVar24,&local_1f8,&local_1e8,fVar39);
            }
            FUN_143d2df64(param_1,lVar24,uVar22,0);
            break;
          }
        }
        *(int *)(param_1 + 0x69) = iVar11;
      } while (iVar11 != 0);
    }
  }
  FUN_143d2c0aa(param_1,local_210);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if (local_1c0 == '\0') {
    local_1c0 = '\x01';
    *(int *)(local_1d8 + 4) = *(int *)(local_1d8 + 4) + -1;
    if (local_1c8 != local_1d8[2]) {
      FUN_14004673c();
    }
    *local_1d8 = local_1d0;
    local_1d8[3] = local_1b8;
  }
  if (local_c0 != (longlong **)0x0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143d30548:
  if (iVar11 - 1U == 0) {
    iVar11 = 0;
  }
  else {
    memmove(puVar16,puVar16 + 2,(ulonglong)(iVar11 - 1U) << 3);
    iVar11 = (int)param_1[0xf] + -1;
  }
  *(int *)(param_1 + 0xf) = iVar11;
  FUN_1418832e6(plVar19);
  iVar11 = (int)param_1[0xf];
  if (iVar11 < 1) goto LAB_143d30010;
  goto LAB_143d30505;
}



// FUNCTION 143d3096c FUN_143d3096c body=834 status=ok
// SIG undefined FUN_143d3096c(void)

void FUN_143d3096c(longlong param_1,undefined8 param_2,float param_3)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_a8 [39];
  undefined1 local_81;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar9 = *(int *)(param_1 + 0x2b8);
  if (0 < iVar9) {
    lVar7 = param_1 + 0x230;
    uVar12 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x2b0);
      if (*(longlong *)(param_1 + 0x2b0) == 0) {
        lVar5 = lVar7;
      }
      lVar13 = (longlong)(int)uVar12;
      uVar3 = *(uint *)(lVar5 + lVar13 * 4);
      if ((-1 < (int)uVar3) && ((int)uVar3 < *(int *)(param_1 + 0x60))) {
        lVar5 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar5 = param_1 + 0x48;
        }
        if ((*(uint *)(lVar5 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
          lVar6 = (ulonglong)uVar3 * 0x300;
          lVar5 = *(longlong *)(param_1 + 0x38) + lVar6;
          fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x2a0 + lVar6);
          if ((fVar1 < 0.0) ||
             (bVar2 = *(byte *)(lVar5 + 0x298), 1 < (byte)(bVar2 - 5) && *(int *)(lVar5 + 0x6c) != 0
             )) {
LAB_143d30b2f:
            if ((*(int *)(param_1 + 0x20) == 0) ||
               (uVar3 = *(uint *)(param_1 + 0x1c), (int)uVar3 < 0)) {
LAB_143d30ba0:
              uVar10 = 0;
            }
            else {
              uVar10 = 0;
              if ((int)uVar3 < DAT_14c9647dc) {
                puVar11 = (undefined8 *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                if (((puVar11 == (undefined8 *)0x0) ||
                    (*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x20))) ||
                   ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) goto LAB_143d30ba0;
                uVar10 = *puVar11;
              }
            }
            FUN_143d2e3d2(lVar5,uVar10,param_3,&local_81);
            iVar9 = *(int *)(param_1 + 0x2b8);
            if (*(char *)(lVar5 + 0x298) != '\a') goto LAB_143d30b94;
          }
          else {
            if (1 < bVar2 - 5) {
              if ((bVar2 == 2) && (fVar1 + -3.0 + *(float *)(lVar5 + 0x29c) < param_3)) {
                *(undefined4 *)(lVar5 + 0x2a4) = 0xbf800000;
                plVar4 = *(longlong **)(lVar5 + 0x108);
                if (((plVar4 != (longlong *)0x0) &&
                    (((*(int *)(lVar5 + 0x104) != 0 &&
                      (uVar3 = *(uint *)(lVar5 + 0x100), -1 < (int)uVar3)) &&
                     ((int)uVar3 < DAT_14c9647dc)))) &&
                   (((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8),
                     lVar6 != 0 && (*(int *)(lVar6 + 0x10) == *(int *)(lVar5 + 0x104))) &&
                    ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
                  (**(code **)(*plVar4 + 0x60))(plVar4,0x40400000);
                }
                *(undefined1 *)(lVar5 + 0x298) = 6;
              }
              goto LAB_143d30b2f;
            }
            if (param_3 <= fVar1 + *(float *)(lVar5 + 0x29c)) goto LAB_143d30b2f;
            FUN_140d82418(param_1,(ulonglong)uVar3,0,1);
            iVar9 = *(int *)(param_1 + 0x2b8);
          }
          if (~uVar12 + iVar9 != 0) {
            lVar5 = *(longlong *)(param_1 + 0x2b0);
            if (*(longlong *)(param_1 + 0x2b0) == 0) {
              lVar5 = lVar7;
            }
            memmove((void *)(lVar5 + lVar13 * 4),(void *)(lVar5 + lVar13 * 4 + 4),
                    (longlong)(int)(~uVar12 + iVar9) << 2);
            iVar9 = *(int *)(param_1 + 0x2b8);
          }
          *(int *)(param_1 + 0x2b8) = iVar9 + -1;
          FUN_140d827d0(lVar7);
          uVar12 = uVar12 - 1;
          iVar9 = *(int *)(param_1 + 0x2b8);
        }
      }
LAB_143d30b94:
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < iVar9);
  }
  iVar9 = *(int *)(param_1 + 0x348);
  if (0 < (longlong)iVar9) {
    lVar7 = param_1 + 0x2c0;
    if (*(longlong *)(param_1 + 0x340) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x340);
    }
    puVar8 = (uint *)(lVar7 + (longlong)iVar9 * 4);
    do {
      iVar9 = iVar9 + -1;
      puVar8 = puVar8 + -1;
      uVar12 = *puVar8;
      if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(param_1 + 0x60))) {
        lVar7 = *(longlong *)(param_1 + 0x58);
        if (*(longlong *)(param_1 + 0x58) == 0) {
          lVar7 = param_1 + 0x48;
        }
        if ((*(uint *)(lVar7 + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_a8);
        }
      }
      *(int *)(param_1 + 0x348) = iVar9;
    } while (iVar9 != 0);
  }
  if ((local_80 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d30e50 FUN_143d30e50 body=22 status=ok
// SIG undefined FUN_143d30e50(void)

bool FUN_143d30e50(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140718ac0(param_1,*param_2);
  return lVar1 != 0;
}



// FUNCTION 143d30e66 FUN_143d30e66 body=536 status=ok
// SIG undefined FUN_143d30e66(void)

void FUN_143d30e66(longlong param_1,char param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  if (*(char *)(param_1 + 0x18) != param_2) {
    *(char *)(param_1 + 0x18) = param_2;
    iVar2 = *(int *)(param_1 + 0x60);
    if (iVar2 == 0) {
      uVar16 = 1;
      iVar12 = 0;
      uVar15 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 0x48);
      }
      uVar13 = *puVar6;
      if (uVar13 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar12 = 0;
        do {
          if (uVar16 == uVar15) {
            return;
          }
          iVar12 = iVar12 + 0x20;
          uVar13 = puVar6[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar13 == 0);
      }
      else {
        iVar12 = 0;
        uVar15 = 0;
      }
      uVar16 = (ulonglong)(-uVar13 & uVar13);
      uVar1 = uVar16 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar13 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x38) + 0x108 + (longlong)iVar5 * 0x300);
        if (plVar4 != (longlong *)0x0) {
          lVar11 = *(longlong *)(param_1 + 0x38) + (longlong)iVar5 * 0x300;
          if ((((*(int *)(lVar11 + 0x104) != 0) &&
               (uVar10 = *(uint *)(lVar11 + 0x100), -1 < (int)uVar10)) &&
              ((int)uVar10 < DAT_14c9647dc)) &&
             (((lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar14 != 0
               && (*(int *)(lVar14 + 0x10) == *(int *)(lVar11 + 0x104))) &&
              (((*(uint *)(lVar14 + 8) & 0x10200000) == 0 &&
               (lVar14 = (**(code **)(*plVar4 + 0x38))(), lVar14 != 0)))))) {
            uVar7 = (**(code **)(**(longlong **)(lVar11 + 0x108) + 0x38))();
            FUN_1406966b6(uVar7,&DAT_14cb7c550,param_2);
          }
        }
        uVar13 = uVar13 & ~(uint)uVar16;
        puVar6 = *(uint **)(param_1 + 0x58);
        if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 0x48);
        }
        iVar3 = *(int *)(param_1 + 0x60);
        iVar5 = (int)uVar15;
        lVar11 = (longlong)iVar5;
        uVar10 = puVar6[lVar11] & uVar13;
        if (uVar10 == 0) {
          iVar8 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar8 = iVar3 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar8) {
            lVar14 = 0;
            do {
              uVar10 = puVar6[lVar11 + lVar14 + 1];
              if (uVar10 != 0) {
                uVar15 = (ulonglong)(iVar5 + (int)lVar14 + 1);
                uVar13 = 0xffffffff;
                goto LAB_143d31035;
              }
              iVar12 = iVar12 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar9 - lVar11 != lVar14);
            uVar13 = 0xffffffff;
            iVar5 = iVar9;
          }
          uVar15 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar3;
        }
        else {
LAB_143d31035:
          uVar16 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar16 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar5 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
  }
  return;
}



// FUNCTION 143d3109e FUN_143d3109e body=119 status=ok
// SIG undefined FUN_143d3109e(void)

undefined1 * FUN_143d3109e(undefined1 *param_1,longlong *param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *param_3;
  if ((-1 < (longlong)iVar1) && (iVar1 < (int)((longlong *)*param_2)[1])) {
    lVar2 = *(longlong *)*param_2;
    lVar3 = (longlong)iVar1 * 0x50;
    if (0 < *(int *)(lVar2 + 0x1c + lVar3)) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (param_2[1] == 0) {
        return param_1;
      }
      FUN_14039fc7b(lVar3 + lVar2 + 8,param_1,param_2[1],0);
      return param_1;
    }
  }
  *param_1 = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = DAT_14cb7c580;
  return param_1;
}



// FUNCTION 143d31134 FUN_143d31134 body=12 status=ok
// SIG undefined FUN_143d31134(void)

void FUN_143d31134(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d3113d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d31140 FUN_143d31140 body=29 status=ok
// SIG undefined FUN_143d31140(void)

undefined8 FUN_143d31140(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d3115e FUN_143d3115e body=76 status=ok
// SIG undefined FUN_143d3115e(void)

void FUN_143d3115e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_18 = *param_2;
  FUN_140c882c0(*param_1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d311ca FUN_143d311ca body=12 status=ok
// SIG undefined FUN_143d311ca(void)

void FUN_143d311ca(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d311d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d311d6 FUN_143d311d6 body=29 status=ok
// SIG undefined FUN_143d311d6(void)

undefined8 FUN_143d311d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d311f4 FUN_143d311f4 body=31 status=ok
// SIG undefined FUN_143d311f4(void)

undefined8 FUN_143d311f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d31218 FUN_143d31218 body=68 status=ok
// SIG undefined FUN_143d31218(void)

undefined8 * FUN_143d31218(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fcee0;
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



// FUNCTION 143d3125c FUN_143d3125c body=91 status=ok
// SIG undefined FUN_143d3125c(void)

bool FUN_143d3125c(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d3128c;
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
LAB_143d3128c:
  return lVar6 == param_2;
}



// FUNCTION 143d312b8 FUN_143d312b8 body=68 status=ok
// SIG undefined FUN_143d312b8(void)

undefined8 * FUN_143d312b8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3fcfc0;
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



// FUNCTION 143d312fc FUN_143d312fc body=91 status=ok
// SIG undefined FUN_143d312fc(void)

bool FUN_143d312fc(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d3132c;
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
LAB_143d3132c:
  return lVar6 == param_2;
}



// FUNCTION 143d31358 FUN_143d31358 body=29 status=ok
// SIG undefined FUN_143d31358(void)

undefined8 FUN_143d31358(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d314f4 FUN_143d314f4 body=93 status=ok
// SIG undefined FUN_143d314f4(void)

void FUN_143d314f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd0a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d31552 FUN_143d31552 body=93 status=ok
// SIG undefined FUN_143d31552(void)

void FUN_143d31552(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c7440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd0a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d315b0 FUN_143d315b0 body=126 status=ok
// SIG undefined FUN_143d315b0(void)

void FUN_143d315b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c7440;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd0a0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d3161f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d31638 FUN_143d31638 body=266 status=ok
// SIG undefined FUN_143d31638(void)

undefined8 FUN_143d31638(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d3173c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d3173c;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d3173c:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d316f0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d2744e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143d316f0;
    }
  }
  uVar6 = 0;
LAB_143d316f0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d31744 FUN_143d31744 body=29 status=ok
// SIG undefined FUN_143d31744(void)

undefined8 FUN_143d31744(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d318e0 FUN_143d318e0 body=93 status=ok
// SIG undefined FUN_143d318e0(void)

void FUN_143d318e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d3193e FUN_143d3193e body=93 status=ok
// SIG undefined FUN_143d3193e(void)

void FUN_143d3193e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd110;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d3199c FUN_143d3199c body=126 status=ok
// SIG undefined FUN_143d3199c(void)

void FUN_143d3199c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd110;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d31a0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d31a24 FUN_143d31a24 body=266 status=ok
// SIG undefined FUN_143d31a24(void)

undefined8 FUN_143d31a24(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d31b28;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d31b28;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d31b28:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d31adc;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d2744e(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_143d31adc;
    }
  }
  uVar6 = 0;
LAB_143d31adc:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d31b30 FUN_143d31b30 body=29 status=ok
// SIG undefined FUN_143d31b30(void)

undefined8 FUN_143d31b30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d31ccc FUN_143d31ccc body=93 status=ok
// SIG undefined FUN_143d31ccc(void)

void FUN_143d31ccc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d31d2a FUN_143d31d2a body=93 status=ok
// SIG undefined FUN_143d31d2a(void)

void FUN_143d31d2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a90a240;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3fd180;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d31d88 FUN_143d31d88 body=126 status=ok
// SIG undefined FUN_143d31d88(void)

void FUN_143d31d88(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a90a240;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3fd180;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d31df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d31e10 FUN_143d31e10 body=275 status=ok
// SIG undefined FUN_143d31e10(void)

undefined8 FUN_143d31e10(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_143d31f1d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d31f1d;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_143d31f1d:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d31ed0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_143d27826(*(undefined8 *)(param_1 + 0x20),param_2);
      uVar6 = 1;
      goto LAB_143d31ed0;
    }
  }
  uVar6 = 0;
LAB_143d31ed0:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


