// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143d5f9d6 FUN_143d5f9d6 body=93 status=ok
// SIG undefined FUN_143d5f9d6(void)

void FUN_143d5f9d6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b405d00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d5fa34 FUN_143d5fa34 body=93 status=ok
// SIG undefined FUN_143d5fa34(void)

void FUN_143d5fa34(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b405d00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 143d5fa92 FUN_143d5fa92 body=126 status=ok
// SIG undefined FUN_143d5fa92(void)

void FUN_143d5fa92(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b405d00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d5fb01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d5fb24 FUN_143d5fb24 body=274 status=ok
// SIG undefined FUN_143d5fb24(void)

undefined8 FUN_143d5fb24(longlong param_1)

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
    if (iVar1 == 2) goto LAB_143d5fc30;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_143d5fc30;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_143d5fc30:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143d5fbcf;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if ((*(longlong **)(param_1 + 0x20))[8] != 0) {
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))();
      }
      goto LAB_143d5fbcf;
    }
  }
  uVar6 = 0;
LAB_143d5fbcf:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d5fc38 FUN_143d5fc38 body=91 status=ok
// SIG undefined FUN_143d5fc38(void)

bool FUN_143d5fc38(longlong param_1,longlong param_2)

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
      if (iVar5 == 0) goto LAB_143d5fc68;
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
LAB_143d5fc68:
  return lVar6 == param_2;
}



// FUNCTION 143d5fcb0 FUN_143d5fcb0 body=68 status=ok
// SIG undefined FUN_143d5fcb0(void)

undefined8 * FUN_143d5fcb0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b405e50;
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



// FUNCTION 143d5fd0c FUN_143d5fd0c body=2748 status=ok
// SIG undefined FUN_143d5fd0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d5fd0c(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_58 [32];
  char *local_38;
  undefined4 uStack_30;
  uint uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = "AssetRegistry";
  uStack_30 = 0xd;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb7dfb0 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_38,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_38,&DAT_14cb7dfb8);
  if (cVar1 == '\0') {
    _DAT_14cb7dfb8 = 0;
    uRam000000014cb7dfc0 = 0;
  }
  if (local_38 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_38 = "bone";
  uStack_30 = 4;
  uStack_2c = uStack_2c & 0xffffff00;
  FUN_14001a6c0(&local_38,1);
  FUN_1446f470e(&DAT_14cb7dfc8,L"FactSwitch",1);
  _DAT_14cb7dfd0 = 0x47efffffe0000000;
  _DAT_14cb7dfd8 = 0x47efffffe0000000;
  _DAT_14cb7dfe0 = 0x47efffffe0000000;
  _DAT_14cb7dfe8 = 0x47efffffe0000000;
  _DAT_14cb7dff0 = 0x47efffffe0000000;
  DAT_14cb7dff8 = 0x47efffffe0000000;
  _DAT_14cb7e000 = 0x47efffffe0000000;
  _DAT_14cb7e008 = 0x47efffffe0000000;
  FUN_1446f470e(&DAT_14cb7e010,L"Param",1);
  FUN_1446f470e(&DAT_14cb7e018,L"Value",1);
  local_38 = "RandomSwitch";
  uStack_30 = 0xc;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  DAT_14cb7e020 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb7e028,L"bHiddenInGame",1);
  FUN_1446f470e(&DAT_14cb7e030,L"StaticMesh",1);
  FUN_1446f470e(&DAT_14cb7e038,L"CustomGlowMaterial",1);
  FUN_1446f470e(&DAT_14cb7e040,L"CustomMaskMaterial",1);
  FUN_1446f470e(&DAT_14cb7e048,L"MaterialOverride",1);
  local_38 = (char *)0x5544513a8e0da5a;
  uStack_30 = 0x8c33bb06;
  uStack_2c = 0xc09a401c;
  _DAT_14cb7e050 = 0xa8e0da5a;
  uRam000000014cb7e054 = 0x5544513;
  uRam000000014cb7e058 = 0x8c33bb06;
  uRam000000014cb7e05c = 0xc09a401c;
  FUN_141005458(&local_38,4,L"GbxBodyNodeSettings_SceneComponent",0);
  atexit((_func_5014 *)&LAB_143d5726b);
  FUN_1446f470e(&DAT_14cb7e060,L"StateMachineName",1);
  FUN_1446f470e(&DAT_14cb7e068,L"States",1);
  FUN_1446f470e(&DAT_14cb7e070,L"DefaultState",1);
  FUN_1446f470e(&DAT_14cb7e078,L"CurrentState",1);
  FUN_1446f470e(&DAT_14cb7e080,L"Body",1);
  local_38 = (char *)0x5c734bb81fc7217d;
  uStack_30 = 0x97d32a64;
  uStack_2c = 0xa25398e1;
  _DAT_14cb7e088 = 0x1fc7217d;
  uRam000000014cb7e08c = 0x5c734bb8;
  uRam000000014cb7e090 = 0x97d32a64;
  uRam000000014cb7e094 = 0xa25398e1;
  FUN_141005458(&local_38,1,L"GbxBodyNodeSettings_Switch",0);
  atexit((_func_5014 *)&LAB_143d5758c);
  _DAT_14cb7e098 = 0xffffffff;
  _DAT_14cb7e09c = 0;
  FUN_1446f470e(&DAT_14cb7e0a0,L"Body",1);
  FUN_1446f470e(&DAT_14cb7e0a8,L"Actor Class",1);
  FUN_1446f470e(&DAT_14cb7e0b0,L"BodyBoundsMax",1);
  FUN_1446f470e(&DAT_14cb7e0b8,L"BodyBoundsMin",1);
  local_38 = (char *)0xa30b47754897a06a;
  uStack_30 = 0xb8d91478;
  uStack_2c = 0x70e6004a;
  _DAT_14cb7e0c0 = 0x4897a06a;
  uRam000000014cb7e0c4 = 0xa30b4775;
  uRam000000014cb7e0c8 = 0xb8d91478;
  uRam000000014cb7e0cc = 0x70e6004a;
  FUN_141005458(&local_38,5,L"GbxBodyData",0);
  atexit((_func_5014 *)&LAB_143d575d8);
  FUN_1446f470e(&DAT_14cb7e0d0,L"Root",1);
  _DAT_14cb7e0d8 = 0;
  _DAT_14cb7e0e0 = 0;
  DAT_14cb7e108 = 0;
  _DAT_14cb7e110 = 0x400000000;
  atexit((_func_5014 *)&LAB_143d58426);
  local_38 = "CST";
  uStack_30 = 3;
  uStack_2c = uStack_2c & 0xffffff00;
  uVar2 = FUN_14001a6c0(&local_38,1);
  _DAT_14cb7e118 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb7e120,L"Perch",1);
  FUN_1446f470e(&DAT_14cb7e128,L"DialogEventDef",1);
  FUN_1446f470e(&DAT_14cb7e130,L"DialogStartDelay",1);
  FUN_1446f470e(&DAT_14cb7e138,L"PlayOnStop",1);
  FUN_1446f470e(&DAT_14cb7e140,L"DialogCooldownTime",1);
  _DAT_14cb7e14c = 0;
  FUN_14052b5e0(&DAT_14cb7e148,"PlayerAwareness",0);
  _DAT_14cb7e158 = "PlayerAwareness";
  FUN_1446f470e(&DAT_14cb7e160,L"NpcEngagePlayers_LastGreetTime",1);
  FUN_1446f470e(&DAT_14cb7e168,L"EngagedActor",1);
  FUN_1446f470e(&DAT_14cb7e170,L"EngagedState",1);
  FUN_1446f470e(&DAT_14cb7e178,L"EngageRange",1);
  FUN_1446f470e(&DAT_14cb7e180,L"Greeter",1);
  FUN_1446f470e(&DAT_14cb7e188,L"Major Engaging",1);
  FUN_1446f470e(&DAT_14cb7e190,L"Minor Engaging",1);
  FUN_1446f470e(&DAT_14cb7e198,L"Not Engaging",1);
  FUN_1446f470e(&DAT_14cb7e1a0,L"AspectEngagePlayers",1);
  FUN_1446f470e(&DAT_14cb7e1a8,L"General",1);
  FUN_1446f470e(&DAT_14cb7e1b0,L"MajorEngagement",1);
  FUN_1446f470e(&DAT_14cb7e1b8,L"MinorEngagement",1);
  FUN_1446f470e(&DAT_14cb7e1c0,L"Greetings",1);
  FUN_1446f470e(&DAT_14cb7e1c8,L"Conditions",1);
  FUN_1446f470e(&DAT_14cb7e1d0,L"CanStartMajorEngage",1);
  FUN_1446f470e(&DAT_14cb7e1d8,L"OnHelloCooldown",1);
  FUN_1446f470e(&DAT_14cb7e1e0,L"OnIdleCooldown",1);
  FUN_1446f470e(&DAT_14cb7e1e8,L"OnGoodbyeCooldown",1);
  FUN_1446f470e(&DAT_14cb7e1f0,L"MajorEngageTimer",1);
  FUN_1446f470e(&DAT_14cb7e1f8,L"MinorEngageTimer",1);
  FUN_1446f470e(&DAT_14cb7e20c,L"OnStart",1);
  FUN_1446f470e(&DAT_14cb7e214,L"OnStop",1);
  FUN_1446f470e(&DAT_14cb7e21c,L"OnSuccess",1);
  FUN_1446f470e(&DAT_14cb7e224,L"OnFailed",1);
  FUN_1446f470e(&DAT_14cb7e22c,L"OnInterrupted",1);
  FUN_1446f470e(&DAT_14cb7e234,L"OnAborted",1);
  FUN_1446f470e(&DAT_14cb7e23c,L"Skill",1);
  FUN_1446f470e(&DAT_14cb7e244,L"Invert",1);
  FUN_1446f470e(&DAT_14cb7e24c,L"StatusEffect",1);
  FUN_1446f470e(&DAT_14cb7e254,L"Invert",1);
  FUN_1446f470e(&DAT_14cb7e25c,L"HealthPoolType",1);
  FUN_1446f470e(&DAT_14cb7e264,L"HealthPercent",1);
  FUN_1446f470e(&DAT_14cb7e26c,L"Target",1);
  FUN_1446f470e(&DAT_14cb7e274,L"ChannelTag",1);
  FUN_1446f470e(&DAT_14cb7e27c,L"Offset",1);
  FUN_1446f470e(&DAT_14cb7e284,L"Angle",1);
  FUN_1446f470e(&DAT_14cb7e28c,L"AfterTurnAngle",1);
  FUN_1446f470e(&DAT_14cb7e294,L"DeltaYaw",1);
  FUN_1446f470e(&DAT_14cb7e29c,L"DeltaPitch",1);
  FUN_1446f470e(&DAT_14cb7e2a4,L"ai_target_radius",1);
  FUN_1446f470e(&DAT_14cb7e2ac,L"GbxActorDef",1);
  FUN_1446f470e(&DAT_14cb7e2b4,L"Invert",1);
  FUN_1446f470e(&DAT_14cb7e2bc,L"LeapTrick",1);
  FUN_1446f470e(&DAT_14cb7e2c4,L"Target",1);
  FUN_1446f470e(&DAT_14cb7e2d0,L"NoTarget",1);
  FUN_1446f470e(&DAT_14cb7e2d8,L"NoNavMesh",1);
  FUN_1446f470e(&DAT_14cb7e2e0,L"HitsCollision",1);
  FUN_1446f470e(&DAT_14cb7e2e8,L"InvalidTarget",1);
  FUN_1446f470e(&DAT_14cb7e2f0,L"InvalidTrajectory",1);
  FUN_1446f470e(&DAT_14cb7e2f8,L"MaxLivingChildren",1);
  FUN_1446f470e(&DAT_14cb7e300,L"MaxTotalChildren",1);
  FUN_1446f470e(&DAT_14cb7e308,L"Invert",1);
  FUN_1446f470e(&DAT_14cb7e310,L"LivingChildren",1);
  FUN_1446f470e(&DAT_14cb7e318,L"TotalChildren",1);
  FUN_1446f470e(&DAT_14cb7e320,L"Target",1);
  FUN_1446f470e(&DAT_14cb7e328,L"RotationPreset",1);
  FUN_1446f470e(&DAT_14cb7e330,L"RotationChannels",1);
  FUN_1446f470e(&DAT_14cb7e338,L"SuccessCondition",1);
  FUN_1446f470e(&DAT_14cb7e340,L"DesiredBodyAngle",1);
  FUN_1446f470e(&DAT_14cb7e348,L"bUpdateTargets",1);
  FUN_1446f470e(&DAT_14cb7e350,L"RotationDelta",1);
  FUN_1446f470e(&DAT_14cb7e358,L"Stuck",1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d607d8 FUN_143d607d8 body=1665 status=ok
// SIG undefined FUN_143d607d8(void)

char FUN_143d607d8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined *puVar11;
  undefined8 ****ppppuVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  char local_d8;
  undefined7 uStack_d7;
  longlong *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  int local_b0;
  longlong *local_a0;
  float local_90;
  float local_8c;
  undefined8 ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar10 = FUN_140343d7a();
  if (lVar10 == 0) goto LAB_143d60c96;
  lVar10 = param_1[9];
  lVar16 = param_1[8];
  if (lVar16 == 0) {
    lVar14 = 0;
    local_d0 = (longlong *)0x0;
LAB_143d60dc5:
    local_c8 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_143d60cdf:
      lVar14 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar16 + 0x48);
      lVar14 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar16 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143d60cdf;
        lVar14 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar16 + 0x118);
    local_d0 = param_1;
    if (plVar15 == (longlong *)0x0) goto LAB_143d60dc5;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar15 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
    local_c8 = plVar15;
  }
  plVar15 = local_c8;
  local_b0 = 0;
  local_d8 = '\x03';
  local_c0._0_4_ = 0;
  if (lVar14 == 0) {
    iVar9 = 0;
    uVar4 = (uint)local_c0;
  }
  else {
    uVar4 = *(uint *)(lVar14 + 0xc);
    local_c0 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar9 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar13 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar13);
      }
      LOCK();
      iVar9 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar9 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar13;
        iVar9 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_c0;
      if (bVar17) {
        iVar9 = iVar13;
      }
    }
  }
  local_c0._0_4_ = uVar4;
  local_c0 = CONCAT44(iVar9,(uint)local_c0);
  local_b8 = 2;
  if (local_b0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_b0 + -1,1);
    local_b0 = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  FUN_1447c3578(lVar10 + 0x80,local_88,&local_d8);
  FUN_1405b801a(local_88,&local_f0,&DAT_14cb7e378);
  param_1[0x27] = local_e0;
  *(undefined4 *)(param_1 + 0x25) = local_f0;
  *(undefined4 *)((longlong)param_1 + 300) = uStack_ec;
  *(undefined4 *)(param_1 + 0x26) = uStack_e8;
  *(undefined4 *)((longlong)param_1 + 0x134) = uStack_e4;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar12 = local_88;
    if (0x18 < local_70) {
      ppppuVar12 = (undefined8 ****)local_88[0];
    }
    (*pcVar5)(ppppuVar12);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(local_88[0]);
  }
  lVar10 = DAT_14c9a3da0;
  if ((longlong)local_b0 != 0) {
    lVar14 = (longlong)local_b0 + -1;
    lVar16 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
    if (*(longlong *)(lVar10 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar10 = DAT_14c9a3da0;
    iVar9 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar10 + lVar16) = 0xffffffff;
    iVar13 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar13 = DAT_14c9a3dd0;
    }
    *(int *)(lVar10 + 4 + lVar16) = iVar13;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar11 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar11 = DAT_14c9a3dc0;
    }
    iVar13 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar13 = iVar9;
    }
    bVar7 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar11 + (longlong)(iVar13 >> 5) * 4) =
         *(uint *)(puVar11 + (longlong)(iVar13 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_b0 = 0;
  }
  if ((local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_c8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_c8 + 0x10))();
    }
  }
  dVar3 = (double)param_1[0x25];
  cVar8 = '\0';
  if ((dVar3 <= -DAT_14cb7e378) || (DAT_14cb7e378 <= dVar3)) goto LAB_143d60c98;
  cVar8 = '\0';
  if (((double)param_1[0x26] <= -DAT_14cb7e380) ||
     (cVar8 = '\0', DAT_14cb7e380 <= (double)param_1[0x26])) goto LAB_143d60c98;
  cVar8 = '\0';
  if (((double)param_1[0x27] <= -DAT_14cb7e388) || (DAT_14cb7e388 <= (double)param_1[0x27]))
  goto LAB_143d60c98;
  iVar9 = _finite(dVar3);
  if ((iVar9 != 0) &&
     ((iVar9 = _finite((double)param_1[0x26]), iVar9 != 0 &&
      (iVar9 = _finite((double)param_1[0x27]), iVar9 != 0)))) {
    cVar8 = FUN_143d60e5a(param_1);
    if (cVar8 != '\x02') goto LAB_143d60c98;
    lVar10 = FUN_140343d7a(param_1);
    if (lVar10 != 0) {
      if (*(char *)(param_1[9] + 0x17b) == '\0') {
        FUN_1438001fe(&local_d8,lVar10);
        plVar1 = local_c8;
        plVar15 = local_d0;
        dVar3 = (double)CONCAT71(uStack_d7,local_d8);
        bVar6 = false;
        if (((((-DAT_14cb7e378 < dVar3) && (bVar6 = false, dVar3 < DAT_14cb7e378)) &&
             (bVar6 = false, -DAT_14cb7e380 < (double)local_d0)) &&
            (((double)local_d0 < DAT_14cb7e380 && (bVar6 = false, -DAT_14cb7e388 < (double)local_c8)
             ))) && ((double)local_c8 < DAT_14cb7e388)) {
          iVar9 = _finite(dVar3);
          if (((iVar9 == 0) || (iVar9 = _finite((double)plVar15), iVar9 == 0)) ||
             ((iVar9 = _finite((double)plVar1), iVar9 == 0 ||
              (dVar3 = (double)param_1[0x25] - (double)CONCAT71(uStack_d7,local_d8),
              local_90 * local_90 + 0.01 <
              (float)(dVar3 * dVar3 +
                     ((double)param_1[0x26] - (double)local_d0) *
                     ((double)param_1[0x26] - (double)local_d0)))))) {
            bVar6 = false;
          }
          else {
            bVar6 = ABS((float)((double)(float)(double)param_1[0x27] - (double)local_c8)) <=
                    local_8c + 0.01;
          }
        }
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_a0 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar2 = (int *)((longlong)local_a0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_a0 + 0x10))(local_a0);
            }
          }
        }
        if (bVar6) goto LAB_143d60c96;
      }
      cVar8 = (**(code **)(*param_1 + 0x28))(param_1);
      cVar8 = cVar8 * '\x02';
      goto LAB_143d60c98;
    }
  }
LAB_143d60c96:
  cVar8 = '\0';
LAB_143d60c98:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar8;
}



// FUNCTION 143d60e5a FUN_143d60e5a body=1390 status=ok
// SIG undefined FUN_143d60e5a(void)

ulonglong FUN_143d60e5a(longlong param_1)

{
  int *piVar1;
  double _X;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  undefined7 uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_418;
  undefined8 local_410;
  longlong *local_408;
  undefined4 local_400;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  longlong *local_3e0;
  longlong local_328;
  char local_318;
  longlong *local_2d8;
  longlong *local_168;
  char local_138;
  char local_c8;
  char local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_468;
  lVar3 = *(longlong *)(param_1 + 0x48);
  uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),2);
  if (*(int *)(lVar3 + 0xf8) == 2) goto LAB_143d611d8;
  _X = *(double *)(param_1 + 0x128);
  uVar11 = 0;
  if ((_X <= -DAT_14cb7e378) || (DAT_14cb7e378 <= _X)) goto LAB_143d611d8;
  uVar11 = 0;
  if ((*(double *)(param_1 + 0x130) <= -DAT_14cb7e380) ||
     (uVar11 = 0, DAT_14cb7e380 <= *(double *)(param_1 + 0x130))) goto LAB_143d611d8;
  uVar11 = 0;
  if ((*(double *)(param_1 + 0x138) <= -DAT_14cb7e388) ||
     (DAT_14cb7e388 <= *(double *)(param_1 + 0x138))) goto LAB_143d611d8;
  iVar6 = _finite(_X);
  if ((iVar6 != 0) &&
     ((iVar6 = _finite(*(double *)(param_1 + 0x130)), iVar6 != 0 &&
      (iVar6 = _finite(*(double *)(param_1 + 0x138)), iVar6 != 0)))) {
    plVar7 = (longlong *)FUN_140343d7a(param_1);
    if (*(int *)(param_1 + 0x14c) == 0) {
LAB_143d61248:
      lVar13 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x148);
      lVar13 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar9 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar9 == (longlong *)0x0) ||
           (((int)plVar9[2] != *(int *)(param_1 + 0x14c) ||
            ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_143d61248;
        lVar13 = *plVar9;
      }
    }
    lVar8 = *(longlong *)(lVar13 + 0xb0);
    if ((lVar8 != 0) || (lVar8 = FUN_1448abda6(lVar13), lVar8 != 0)) {
      uVar4 = DAT_14cb1c840;
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_3e8,uVar4,lVar8);
      plVar9 = local_3e0;
      lVar8 = CONCAT44(uStack_3e4,local_3e8);
      if ((lVar8 == 0) || (local_3e0 == (longlong *)0x0)) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_3e0 + 1) = (int)local_3e0[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_3e0 + 0xc) = *(int *)((longlong)local_3e0 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar10 = local_3e0 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_3e0)(local_3e0);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (local_3e0 != (longlong *)0x0) {
        LOCK();
        plVar10 = local_3e0 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*local_3e0)(local_3e0);
          LOCK();
          piVar1 = (int *)((longlong)local_3e0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_3e0 + 0x10))(local_3e0);
          }
        }
      }
      if (plVar9 != (longlong *)0x0) {
        iVar6 = (int)plVar9[1];
        do {
          plVar10 = (longlong *)0x0;
          if (iVar6 == 0) break;
          LOCK();
          iVar5 = (int)plVar9[1];
          bVar14 = iVar6 == iVar5;
          if (bVar14) {
            *(int *)(plVar9 + 1) = iVar6 + 1;
            iVar5 = iVar6;
          }
          iVar6 = iVar5;
          UNLOCK();
          plVar10 = plVar9;
        } while (!bVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        if (plVar10 != (longlong *)0x0) {
          if ((lVar13 == 0 || plVar7 == (longlong *)0x0) || lVar8 == 0) {
            uVar11 = 0;
          }
          else {
            FUN_144a238e8(&local_3e8,lVar13 + 0x1730);
            uVar12 = (undefined7)((ulonglong)lVar8 >> 8);
            uVar11 = CONCAT71(uVar12,1);
            if ((char)uStack_3e4 == '\x01') {
              if ((*(longlong *)(lVar13 + 0x1518) == 0) ||
                 (9 < *(int *)(*(longlong *)(lVar13 + 0x1518) + 0x250) - 0x15U)) {
                local_408 = (longlong *)0x0;
                local_3f8 = 0;
                local_3f0 = 0xbf800000;
                local_448 = FUN_1405f939e(param_1);
                local_430 = *(undefined8 *)(param_1 + 0x138);
                local_440 = *(undefined8 *)(param_1 + 0x128);
                uStack_438 = *(undefined8 *)(param_1 + 0x130);
                local_60 = DAT_14cb1c860;
                uStack_58 = DAT_14cb1c868;
                local_50 = DAT_14cb1c870;
                local_428 = DAT_14cb1c860;
                local_420 = DAT_14cb1c868;
                local_418 = DAT_14cb1c870;
                local_410 = 0;
                local_400 = 0xffffffff;
                local_78 = local_440;
                uStack_70 = uStack_438;
                local_68 = local_430;
                (**(code **)(*plVar7 + 0x528))(plVar7,&local_3f8,(longlong)&local_3f8 + 4);
                FUN_141804e5e(&local_78,&local_448);
                plVar7 = local_408;
                if ((char)local_60 == '\0') {
                  uVar11 = (ulonglong)(byte)((*(int *)(lVar3 + 0xf8) != 0) * '\x02');
                }
                else {
                  *(undefined8 *)(param_1 + 0x138) = local_68;
                  *(undefined8 *)(param_1 + 0x128) = local_78;
                  *(undefined8 *)(param_1 + 0x130) = uStack_70;
                  uVar11 = 2;
                }
                if (local_408 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = local_408 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*local_408)(local_408);
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
              else {
                uVar11 = CONCAT71(uVar12,2);
              }
            }
            if (local_90 == '\x01') {
              local_90 = '\0';
            }
            if (local_c8 == '\x01') {
              local_c8 = '\0';
            }
            if (local_138 == '\x01') {
              local_138 = '\0';
            }
            if (local_168 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_168 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*local_168)(local_168);
                LOCK();
                piVar1 = (int *)((longlong)local_168 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_168 + 0x10))(local_168);
                }
              }
            }
            if (local_2d8 != (longlong *)0x0) {
              LOCK();
              plVar7 = local_2d8 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*local_2d8)(local_2d8);
                LOCK();
                piVar1 = (int *)((longlong)local_2d8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_2d8 + 0x10))(local_2d8);
                }
              }
            }
            if ((local_318 == '\x01') && (local_328 != 0)) {
              FUN_1400020a8();
            }
          }
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
          goto LAB_143d611d8;
        }
      }
    }
  }
  uVar11 = 0;
LAB_143d611d8:
  if ((local_48 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 143d613ca FUN_143d613ca body=479 status=ok
// SIG undefined FUN_143d613ca(void)

undefined8 FUN_143d613ca(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if ((*(longlong *)(param_1 + 0xf0) != 0) && (*(int *)(param_1 + 0xec) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xe8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0xec))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      if (*(int *)(lVar2 + 0x90) == 0) {
        iVar6 = *(int *)(param_1 + 0xe4);
      }
      else {
        uVar3 = FUN_140343d7a(param_1);
        lVar2 = FUN_140963804(lVar2 + 0x80,uVar3);
        if (lVar2 == 0) {
          *(undefined4 *)(param_1 + 0xe0) = 0;
          iVar6 = 0;
        }
        else {
          uVar1 = *(uint *)(lVar2 + 0xc);
          *(uint *)(param_1 + 0xe0) = uVar1;
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar2 = 0;
          }
          iVar6 = *(int *)(lVar2 + 0x10);
          if (*(int *)(lVar2 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar7 = DAT_14c964868 + 1;
            bVar8 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar8) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
            }
            LOCK();
            iVar6 = *(int *)(lVar2 + 0x10);
            bVar8 = iVar6 == 0;
            if (bVar8) {
              *(int *)(lVar2 + 0x10) = iVar7;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar8) {
              iVar6 = iVar7;
            }
          }
        }
        *(int *)(param_1 + 0xe4) = iVar6;
      }
      if (iVar6 != 0) {
        uVar1 = *(uint *)(param_1 + 0xe0);
        if ((int)uVar1 < 0) {
          return 0;
        }
        if (DAT_14c9647dc <= (int)uVar1) {
          return 0;
        }
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == iVar6)) &&
           (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
            ((lVar2 = *plVar4, lVar2 != 0 && ((*(uint *)(lVar2 + 8) >> 0x1e & 1) == 0)))))) {
          lVar5 = FUN_14053ad22();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
            return CONCAT71((int7)((ulonglong)(lVar5 + 0x30) >> 8),2);
          }
          *(undefined8 *)(param_1 + 0xe0) = 0;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143d615aa FUN_143d615aa body=234 status=ok
// SIG undefined FUN_143d615aa(void)

char FUN_143d615aa(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if ((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    cVar3 = '\0';
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143d61625;
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0xdc))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      cVar3 = (**(code **)(*plVar2 + 0x68))(plVar2);
      if (cVar3 != '\0') {
        lVar4 = FUN_14887524c(param_1);
        if (lVar4 != 0) {
          local_28 = 2;
          local_38 = (**(code **)(*plVar2 + 0x18))(plVar2);
          if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_38);
          }
          local_30 = plVar2;
          cVar3 = FUN_14656301e(lVar4);
          cVar3 = cVar3 * '\x02';
          goto LAB_143d61625;
        }
      }
    }
  }
  cVar3 = '\0';
LAB_143d61625:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d61696 FUN_143d61696 body=131 status=ok
// SIG undefined FUN_143d61696(void)

undefined8 FUN_143d61696(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0xe0);
  if ((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xd8);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xdc))) &&
        ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) && (lVar3 = FUN_14887524c(), lVar3 != 0)) {
      (**(code **)(*plVar2 + 0x88))(plVar2,lVar3);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d6171a FUN_143d6171a body=7955 status=ok
// SIG undefined FUN_143d6171a(void)

void FUN_143d6171a(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined8 ****ppppuVar20;
  undefined8 *puVar21;
  undefined1 auStack_1c8 [32];
  longlong local_1a8;
  ulonglong local_1a0;
  ulonglong **local_198;
  longlong local_190;
  ulonglong **local_188;
  undefined1 *local_180;
  undefined8 local_178;
  ulonglong *puStack_170;
  longlong *local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong *local_148;
  undefined8 local_138;
  ulonglong *puStack_130;
  longlong *local_128;
  ulonglong local_118;
  int local_10c;
  ulonglong *local_108;
  undefined8 uStack_100;
  undefined4 uStack_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  ushort local_e8;
  undefined1 local_e4 [4];
  byte local_e0;
  char local_d8;
  undefined8 local_d0;
  undefined8 ***local_c8 [3];
  ushort local_b0;
  byte local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 ***local_90 [3];
  ushort local_78;
  byte local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_1 + 0x90))();
  uVar9 = DAT_14cb7e4b0;
  uVar6 = 0;
  local_98 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  uVar7 = FUN_141115664();
  lVar8 = FUN_140c48046(param_1 + 0x10,uVar7,uVar9,0);
  if (lVar8 == 0) goto LAB_143d62602;
  uVar9 = FUN_1411157a2();
  lVar10 = FUN_140c47e50(lVar8,uVar9,&DAT_14cb7e4c0);
  if (lVar10 != 0) {
    *(undefined1 *)(lVar10 + 0x331) = 1;
    if ((char)param_1[0x33] == '\x01') {
      FUN_14054d68c(lVar10 + 0x80,param_1 + 0x3c);
      local_158 = 0;
      uStack_150 = 0;
      local_148 = (longlong *)0x0;
      FUN_14111569e(lVar10,&local_108);
      local_108 = (ulonglong *)0x0;
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      if (local_148 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_148 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_148 + 0x10))();
        }
        plVar11 = (longlong *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      }
      puVar21 = &local_158;
    }
    else {
      if ((char)param_1[0x33] != '\0') goto LAB_143d619f5;
      FUN_14054d68c(lVar10 + 0x80,param_1 + 0xda);
      local_108 = (ulonglong *)0x14b40655e;
      uStack_100._0_4_ = 9;
      uStack_100._4_4_ = uStack_100._4_4_ & 0xffffff00;
      uVar6 = FUN_14001a6c0(&local_108,1);
      local_118 = (ulonglong)uVar6;
      local_108 = &local_118;
      uStack_100 = param_1 + 0x34;
      FUN_140ffad64(lVar10 + 0x88,&local_10c,&local_108,0);
      local_138 = 0;
      puStack_130 = (ulonglong *)0x0;
      local_128 = (longlong *)0x0;
      FUN_14111569e(lVar10,&local_108);
      plVar11 = local_128;
      puStack_130 = local_108;
      local_128 = uStack_100;
      local_108 = (ulonglong *)0x0;
      uStack_100._0_4_ = 0;
      uStack_100._4_4_ = 0;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        plVar11 = (longlong *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar11 + 0x10))();
          }
        }
      }
      puVar21 = &local_138;
    }
    FUN_141115702(&local_108,puVar21);
    FUN_1403719a4(&local_d0,&local_108);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (local_e8 < 0x19) {
        puVar21 = &uStack_100;
      }
      else {
        puVar21 = (undefined8 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
      }
      (*pcVar4)(puVar21);
    }
    if (0x18 < local_e8) {
      FUN_1400020a8(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
    }
  }
LAB_143d619f5:
  uVar9 = FUN_1411157a2();
  lVar10 = FUN_140c47e50(lVar8,uVar9,&DAT_14cb7e4b8);
  if (lVar10 != 0) {
    uVar5 = 1;
    if ((char)param_1[0x12a] == '\0') {
      uVar5 = *(undefined1 *)((longlong)param_1 + 0xac9);
    }
    *(undefined1 *)(lVar10 + 0x1c) = uVar5;
    *(undefined1 *)(lVar10 + 0x331) = 1;
    FUN_14054d68c(lVar10 + 0x80,param_1 + 0x8b);
    local_108 = (ulonglong *)0x14a7b0739;
    uStack_100._0_4_ = 0xb;
    uStack_100._4_4_ = uStack_100._4_4_ & 0xffffff00;
    uVar6 = FUN_14001a6c0(&local_108,1);
    local_118 = (ulonglong)uVar6;
    local_108 = &local_118;
    uStack_100 = &local_d0;
    FUN_140ffad64(lVar10 + 0x88,&local_10c,&local_108,0);
    local_178 = 0;
    puStack_170 = (ulonglong *)0x0;
    local_168 = (longlong *)0x0;
    FUN_14111569e(lVar10,&local_108);
    plVar11 = local_168;
    puStack_170 = local_108;
    local_168 = uStack_100;
    local_108 = (ulonglong *)0x0;
    uStack_100._0_4_ = 0;
    uStack_100._4_4_ = 0;
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))();
      }
      plVar11 = (longlong *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
      }
    }
    FUN_141115702(&local_108,&local_178);
    FUN_1403719a4(&local_98,&local_108);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (local_e8 < 0x19) {
        puVar21 = &uStack_100;
      }
      else {
        puVar21 = (undefined8 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
      }
      (*pcVar4)(puVar21);
    }
    if (0x18 < local_e8) {
      FUN_1400020a8(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
    }
  }
  uVar9 = FUN_140a48832();
  lVar10 = FUN_140c483dc(lVar8,uVar9,&DAT_14cb7e520,0);
  if (lVar10 != 0) {
    FUN_1414b425a(param_1,lVar10,&local_98,&local_d0);
    local_108 = (ulonglong *)0x0;
    uVar9 = FUN_140c483a2();
    plVar11 = (longlong *)FUN_140c47e50(lVar10,uVar9,&local_108);
    if (plVar11 != (longlong *)0x0) {
      plVar15 = plVar11 + 0x11;
      bVar2 = *(byte *)(plVar11 + 0x15);
      if (bVar2 == local_a8) {
        ppppuVar20 = local_c8;
        if (0x18 < local_b0) {
          ppppuVar20 = (undefined8 ****)local_c8[0];
        }
        if (0x18 < *(ushort *)(plVar11 + 0x14)) {
          plVar15 = (longlong *)*plVar15;
        }
        uVar12 = (ulonglong)((uint)bVar2 * 0x120);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
        if (pcVar4 == (code *)0x0) {
          memcpy(plVar15,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
        }
        else {
          (*pcVar4)(plVar15,ppppuVar20);
        }
      }
      else {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
        if (pcVar4 != (code *)0x0) {
          plVar17 = plVar15;
          if (0x18 < *(ushort *)(plVar11 + 0x14)) {
            plVar17 = (longlong *)*plVar15;
          }
          (*pcVar4)(plVar17);
        }
        if (0x18 < *(ushort *)(plVar11 + 0x14)) {
          FUN_1400020a8(*plVar15);
        }
        uVar6 = (uint)local_a8;
        *(ushort *)(plVar11 + 0x14) = local_b0;
        ppppuVar20 = local_c8;
        plVar17 = plVar15;
        if (0x18 < local_b0) {
          plVar17 = (longlong *)FUN_14001cc68(local_b0,0);
          *plVar15 = (longlong)plVar17;
          ppppuVar20 = (undefined8 ****)local_c8[0];
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
        if (pcVar4 == (code *)0x0) {
          memcpy(plVar17,ppppuVar20,
                 (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
        }
        else {
          (*pcVar4)(plVar17,ppppuVar20);
        }
        *(byte *)(plVar11 + 0x15) = local_a8;
      }
      *(undefined1 *)(plVar11 + 0x16) = local_a0;
      plVar15 = param_1 + 0x135;
      plVar17 = plVar11 + 0x19;
      bVar2 = *(byte *)(plVar11 + 0x1d);
      if (bVar2 == *(byte *)(param_1 + 0x139)) {
        if (0x18 < *(ushort *)(param_1 + 0x138)) {
          plVar15 = (longlong *)param_1[0x135];
        }
        if (0x18 < *(ushort *)(plVar11 + 0x1c)) {
          plVar17 = (longlong *)*plVar17;
        }
        uVar12 = (ulonglong)((uint)bVar2 * 0x120);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
        if (pcVar4 == (code *)0x0) {
          memcpy(plVar17,plVar15,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
        }
        else {
          (*pcVar4)(plVar17,plVar15);
        }
      }
      else {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
        if (pcVar4 != (code *)0x0) {
          plVar19 = plVar17;
          if (0x18 < *(ushort *)(plVar11 + 0x1c)) {
            plVar19 = (longlong *)*plVar17;
          }
          (*pcVar4)(plVar19);
        }
        if (0x18 < *(ushort *)(plVar11 + 0x1c)) {
          FUN_1400020a8(*plVar17);
        }
        bVar2 = *(byte *)(param_1 + 0x139);
        uVar3 = *(ushort *)(param_1 + 0x138);
        *(ushort *)(plVar11 + 0x1c) = uVar3;
        plVar19 = plVar17;
        if (0x18 < uVar3) {
          plVar19 = (longlong *)FUN_14001cc68(uVar3,0);
          *plVar17 = (longlong)plVar19;
          plVar15 = (longlong *)*plVar15;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
        if (pcVar4 == (code *)0x0) {
          memcpy(plVar19,plVar15,
                 (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120)));
        }
        else {
          (*pcVar4)(plVar19,plVar15);
        }
        *(char *)(plVar11 + 0x1d) = (char)param_1[0x139];
      }
      *(char *)(plVar11 + 0x1e) = (char)param_1[0x13a];
      (**(code **)(*plVar11 + 0x90))(plVar11);
    }
  }
  FUN_1446f470e(&local_108,L"PositionThenLeap",1);
  uVar9 = FUN_1408d77e6();
  lVar10 = FUN_140c483dc(lVar8,uVar9,&local_108,0);
  if (lVar10 != 0) {
    uVar9 = FUN_141115664();
    lVar13 = FUN_140c483dc(lVar10,uVar9,&DAT_14cb7e4e0,0);
    if (lVar13 != 0) {
      uVar5 = 1;
      if ((char)param_1[0x12a] == '\0') {
        uVar5 = *(undefined1 *)((longlong)param_1 + 0xac9);
      }
      *(undefined1 *)(lVar13 + 0x1c) = uVar5;
      uVar9 = FUN_140a48832();
      lVar14 = FUN_140c483dc(lVar13,uVar9,&DAT_14cb7e4e8,&local_118);
      if (lVar14 != 0) {
        *(bool *)(*(longlong *)(lVar13 + 0xd8) + (longlong)(int)local_118 * 4) =
             (char)param_1[0x12a] == '\0';
        *(undefined1 *)(lVar14 + 0x1c) = *(undefined1 *)((longlong)param_1 + 0xac9);
        local_108 = (ulonglong *)0x0;
        local_1a8 = lVar10;
        uVar9 = FUN_140c48226();
        lVar10 = FUN_140c47e50(lVar14,uVar9,&local_108);
        if (lVar10 != 0) {
          *(undefined1 *)(lVar10 + 0x158) = 1;
          plVar11 = param_1 + 0x15b;
          plVar15 = (longlong *)(lVar10 + 0x128);
          bVar2 = *(byte *)(lVar10 + 0x148);
          if (bVar2 == *(byte *)(param_1 + 0x15f)) {
            if (0x18 < *(ushort *)(param_1 + 0x15e)) {
              plVar11 = (longlong *)param_1[0x15b];
            }
            if (0x18 < *(ushort *)(lVar10 + 0x140)) {
              plVar15 = (longlong *)*plVar15;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar15,plVar11,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar15,plVar11);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar17 = plVar15;
              if (0x18 < *(ushort *)(lVar10 + 0x140)) {
                plVar17 = (longlong *)*plVar15;
              }
              (*pcVar4)(plVar17);
            }
            if (0x18 < *(ushort *)(lVar10 + 0x140)) {
              FUN_1400020a8(*plVar15);
            }
            bVar2 = *(byte *)(param_1 + 0x15f);
            uVar6 = (uint)bVar2;
            uVar3 = *(ushort *)(param_1 + 0x15e);
            *(ushort *)(lVar10 + 0x140) = uVar3;
            plVar17 = plVar15;
            if (0x18 < uVar3) {
              local_1a0 = (ulonglong)bVar2;
              plVar17 = (longlong *)FUN_14001cc68(uVar3,0);
              *plVar15 = (longlong)plVar17;
              plVar11 = (longlong *)*plVar11;
              uVar6 = (uint)local_1a0;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,plVar11,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(plVar17,plVar11);
            }
            *(char *)(lVar10 + 0x148) = (char)param_1[0x15f];
          }
          *(char *)(lVar10 + 0x150) = (char)param_1[0x160];
          *(undefined1 *)(lVar10 + 0x198) = 1;
          plVar11 = param_1 + 0x162;
          plVar15 = (longlong *)(lVar10 + 0x168);
          bVar2 = *(byte *)(lVar10 + 0x188);
          if (bVar2 == *(byte *)(param_1 + 0x166)) {
            if (0x18 < *(ushort *)(param_1 + 0x165)) {
              plVar11 = (longlong *)param_1[0x162];
            }
            if (0x18 < *(ushort *)(lVar10 + 0x180)) {
              plVar15 = (longlong *)*plVar15;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar15,plVar11,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar15,plVar11);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            if (pcVar4 != (code *)0x0) {
              plVar17 = plVar15;
              if (0x18 < *(ushort *)(lVar10 + 0x180)) {
                plVar17 = (longlong *)*plVar15;
              }
              (*pcVar4)(plVar17);
            }
            if (0x18 < *(ushort *)(lVar10 + 0x180)) {
              FUN_1400020a8(*plVar15);
            }
            bVar2 = *(byte *)(param_1 + 0x166);
            uVar6 = (uint)bVar2;
            uVar3 = *(ushort *)(param_1 + 0x165);
            *(ushort *)(lVar10 + 0x180) = uVar3;
            plVar17 = plVar15;
            if (0x18 < uVar3) {
              local_1a0 = (ulonglong)bVar2;
              plVar17 = (longlong *)FUN_14001cc68(uVar3,0);
              *plVar15 = (longlong)plVar17;
              plVar11 = (longlong *)*plVar11;
              uVar6 = (uint)local_1a0;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,plVar11,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(plVar17,plVar11);
            }
            *(char *)(lVar10 + 0x188) = (char)param_1[0x166];
          }
          *(char *)(lVar10 + 400) = (char)param_1[0x167];
          *(undefined4 *)(lVar10 + 0xa1) = 0;
          *(undefined1 *)(lVar10 + 0x101) = 1;
          puVar21 = (undefined8 *)(lVar10 + 0x1f0);
          bVar2 = *(byte *)(lVar10 + 0x210);
          if (bVar2 == local_70) {
            ppppuVar20 = local_90;
            if (0x18 < local_78) {
              ppppuVar20 = (undefined8 ****)local_90[0];
            }
            if (0x18 < *(ushort *)(lVar10 + 0x208)) {
              puVar21 = (undefined8 *)*puVar21;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(puVar21,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(puVar21,ppppuVar20);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            if (pcVar4 != (code *)0x0) {
              puVar16 = puVar21;
              if (0x18 < *(ushort *)(lVar10 + 0x208)) {
                puVar16 = (undefined8 *)*puVar21;
              }
              (*pcVar4)(puVar16);
            }
            if (0x18 < *(ushort *)(lVar10 + 0x208)) {
              FUN_1400020a8(*puVar21);
            }
            uVar6 = (uint)local_70;
            *(ushort *)(lVar10 + 0x208) = local_78;
            puVar16 = puVar21;
            ppppuVar20 = local_90;
            if (0x18 < local_78) {
              local_1a0 = (ulonglong)local_70;
              puVar16 = (undefined8 *)FUN_14001cc68(local_78,0);
              *puVar21 = puVar16;
              uVar6 = (uint)local_1a0;
              ppppuVar20 = (undefined8 ****)local_90[0];
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(puVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(puVar16,ppppuVar20);
            }
            *(byte *)(lVar10 + 0x210) = local_70;
          }
          *(undefined1 *)(lVar10 + 0x218) = local_68;
          *(undefined1 *)(lVar10 + 0x1a0) = 1;
        }
        local_108 = (ulonglong *)0x0;
        uVar9 = FUN_140c4800c();
        lVar14 = FUN_140c47e50(lVar14,uVar9,&local_108);
        lVar10 = local_1a8;
        if (lVar14 != 0) {
          puVar21 = (undefined8 *)(lVar14 + 0x88);
          bVar2 = *(byte *)(lVar14 + 0xa8);
          if (bVar2 == local_a8) {
            ppppuVar20 = local_c8;
            if (0x18 < local_b0) {
              ppppuVar20 = (undefined8 ****)local_c8[0];
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              puVar21 = (undefined8 *)*puVar21;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(puVar21,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(puVar21,ppppuVar20);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            if (pcVar4 != (code *)0x0) {
              puVar16 = puVar21;
              if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
                puVar16 = (undefined8 *)*puVar21;
              }
              (*pcVar4)(puVar16);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              FUN_1400020a8(*puVar21);
            }
            uVar6 = (uint)local_a8;
            *(ushort *)(lVar14 + 0xa0) = local_b0;
            ppppuVar20 = local_c8;
            puVar16 = puVar21;
            if (0x18 < local_b0) {
              local_1a0 = (ulonglong)local_a8;
              puVar16 = (undefined8 *)FUN_14001cc68(local_b0,0);
              *puVar21 = puVar16;
              uVar6 = (uint)local_1a0;
              ppppuVar20 = (undefined8 ****)local_c8[0];
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(puVar16,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(puVar16,ppppuVar20);
            }
            *(byte *)(lVar14 + 0xa8) = local_a8;
            lVar10 = local_1a8;
          }
          *(undefined1 *)(lVar14 + 0xb0) = local_a0;
          local_180 = local_e4;
          local_108 = DAT_14cb72618;
          uStack_100._0_4_ = CONCAT31(uStack_100._1_3_,(char)param_1[0x168] == '\x01');
          uStack_100._4_4_ = (uint)DAT_14cb72620;
          uStack_f8 = (undefined4)((ulonglong)DAT_14cb72620 >> 0x20);
          local_f4 = *(undefined1 *)((longlong)param_1 + 0xb42);
          local_f0 = DAT_14cb72628;
          local_e8 = CONCAT11(local_e8._1_1_,*(undefined1 *)((longlong)param_1 + 0xb41));
          local_188 = &local_108;
          FUN_140c482d4(lVar14);
          *(bool *)(lVar14 + 0x1c) = (char)param_1[0x12a] == '\x01';
        }
      }
      uVar9 = FUN_140a48832();
      lVar14 = FUN_140c483dc(lVar13,uVar9,&DAT_14cb7e510,&local_10c);
      if (lVar14 != 0) {
        *(undefined1 *)(*(longlong *)(lVar13 + 0xd8) + (longlong)local_10c * 4) = 0;
        *(bool *)(lVar14 + 0x1c) = (char)param_1[0x12a] != '\0';
        *(undefined1 *)(lVar14 + 0x73) = 1;
        local_108 = (ulonglong *)0x0;
        uVar9 = FUN_14643453c();
        lVar14 = FUN_140c47e50(lVar14,uVar9,&local_108);
        if (lVar14 != 0) {
          local_108 = (ulonglong *)0x0;
          local_e8 = 4;
          uStack_100._0_4_ = 0;
          local_e0 = 1;
          local_d8 = (DAT_14c9a8634 & 0x20) == 0;
          FUN_1403719a4(lVar14 + 0x80,&local_108);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e0 * 0x120));
          if (pcVar4 != (code *)0x0) {
            if (local_e8 < 0x19) {
              puVar21 = &uStack_100;
            }
            else {
              puVar21 = (undefined8 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
            }
            (*pcVar4)(puVar21);
          }
          if (0x18 < local_e8) {
            FUN_1400020a8(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
          }
          *(undefined1 *)(lVar14 + 0x7c) = 1;
          *(undefined4 *)(lVar14 + 0x78) = 0x1010101;
        }
      }
      uVar9 = FUN_140a48832();
      lVar13 = FUN_140c483dc(lVar13,uVar9,&DAT_14cb7e4d8,0);
      if (lVar13 != 0) {
        *(bool *)(lVar13 + 0x1c) = (char)param_1[0x12a] != '\0';
        local_108 = (ulonglong *)0x0;
        uVar9 = FUN_140c4800c();
        plVar11 = (longlong *)FUN_140c47e50(lVar13,uVar9,&local_108);
        if (plVar11 != (longlong *)0x0) {
          plVar15 = plVar11 + 0x11;
          bVar2 = *(byte *)(plVar11 + 0x15);
          if (bVar2 == local_a8) {
            ppppuVar20 = local_c8;
            if (0x18 < local_b0) {
              ppppuVar20 = (undefined8 ****)local_c8[0];
            }
            if (0x18 < *(ushort *)(plVar11 + 0x14)) {
              plVar15 = (longlong *)*plVar15;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar15,ppppuVar20,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar15,ppppuVar20);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            local_1a8 = lVar10;
            if (pcVar4 != (code *)0x0) {
              plVar17 = plVar15;
              if (0x18 < *(ushort *)(plVar11 + 0x14)) {
                plVar17 = (longlong *)*plVar15;
              }
              (*pcVar4)(plVar17);
            }
            if (0x18 < *(ushort *)(plVar11 + 0x14)) {
              FUN_1400020a8(*plVar15);
            }
            uVar6 = (uint)local_a8;
            *(ushort *)(plVar11 + 0x14) = local_b0;
            ppppuVar20 = local_c8;
            plVar17 = plVar15;
            if (0x18 < local_b0) {
              local_1a0 = (ulonglong)local_a8;
              plVar17 = (longlong *)FUN_14001cc68(local_b0,0);
              *plVar15 = (longlong)plVar17;
              uVar6 = (uint)local_1a0;
              ppppuVar20 = (undefined8 ****)local_c8[0];
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,ppppuVar20,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(plVar17,ppppuVar20);
            }
            *(byte *)(plVar11 + 0x15) = local_a8;
            lVar10 = local_1a8;
          }
          *(undefined1 *)(plVar11 + 0x16) = local_a0;
          *(undefined1 *)(plVar11 + 0x54) = 1;
          plVar15 = param_1 + 0x135;
          plVar17 = plVar11 + 0x4e;
          bVar2 = *(byte *)(plVar11 + 0x52);
          if (bVar2 == *(byte *)(param_1 + 0x139)) {
            plVar19 = plVar15;
            if (0x18 < *(ushort *)(param_1 + 0x138)) {
              plVar19 = (longlong *)param_1[0x135];
            }
            if (0x18 < *(ushort *)(plVar11 + 0x51)) {
              plVar17 = (longlong *)*plVar17;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,plVar19,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar17);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            local_1a8 = lVar10;
            if (pcVar4 != (code *)0x0) {
              plVar19 = plVar17;
              if (0x18 < *(ushort *)(plVar11 + 0x51)) {
                plVar19 = (longlong *)*plVar17;
              }
              (*pcVar4)(plVar19);
            }
            if (0x18 < *(ushort *)(plVar11 + 0x51)) {
              FUN_1400020a8(*plVar17);
            }
            bVar2 = *(byte *)(param_1 + 0x139);
            uVar6 = (uint)bVar2;
            uVar3 = *(ushort *)(param_1 + 0x138);
            *(ushort *)(plVar11 + 0x51) = uVar3;
            plVar19 = plVar15;
            if (0x18 < uVar3) {
              local_1a0 = (ulonglong)bVar2;
              plVar18 = (longlong *)FUN_14001cc68(uVar3,0);
              *plVar17 = (longlong)plVar18;
              uVar6 = (uint)local_1a0;
              plVar19 = (longlong *)*plVar15;
              plVar17 = plVar18;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,plVar19,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(plVar17);
            }
            *(char *)(plVar11 + 0x52) = (char)param_1[0x139];
            lVar10 = local_1a8;
          }
          *(char *)(plVar11 + 0x53) = (char)param_1[0x13a];
          *(undefined1 *)(plVar11 + 0x3b) = 1;
          plVar17 = plVar11 + 0x1e;
          bVar2 = *(byte *)(plVar11 + 0x22);
          if (bVar2 == *(byte *)(param_1 + 0x139)) {
            if (0x18 < *(ushort *)(param_1 + 0x138)) {
              plVar15 = (longlong *)param_1[0x135];
            }
            if (0x18 < *(ushort *)(plVar11 + 0x21)) {
              plVar17 = (longlong *)*plVar17;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,plVar15,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar17,plVar15);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            local_1a8 = lVar10;
            if (pcVar4 != (code *)0x0) {
              plVar19 = plVar17;
              if (0x18 < *(ushort *)(plVar11 + 0x21)) {
                plVar19 = (longlong *)*plVar17;
              }
              (*pcVar4)(plVar19);
            }
            if (0x18 < *(ushort *)(plVar11 + 0x21)) {
              FUN_1400020a8(*plVar17);
            }
            bVar2 = *(byte *)(param_1 + 0x139);
            uVar6 = (uint)bVar2;
            uVar3 = *(ushort *)(param_1 + 0x138);
            *(ushort *)(plVar11 + 0x21) = uVar3;
            plVar19 = plVar17;
            if (0x18 < uVar3) {
              local_1a0 = (ulonglong)bVar2;
              plVar19 = (longlong *)FUN_14001cc68(uVar3,0);
              *plVar17 = (longlong)plVar19;
              plVar15 = (longlong *)*plVar15;
              uVar6 = (uint)local_1a0;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar19,plVar15,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(plVar19,plVar15);
            }
            *(char *)(plVar11 + 0x22) = (char)param_1[0x139];
            lVar10 = local_1a8;
          }
          *(char *)(plVar11 + 0x23) = (char)param_1[0x13a];
          plVar15 = param_1 + 0x13c;
          plVar17 = plVar11 + 0x2c;
          bVar2 = *(byte *)(plVar11 + 0x30);
          if (bVar2 == *(byte *)(param_1 + 0x140)) {
            if (0x18 < *(ushort *)(param_1 + 0x13f)) {
              plVar15 = (longlong *)param_1[0x13c];
            }
            if (0x18 < *(ushort *)(plVar11 + 0x2f)) {
              plVar17 = (longlong *)*plVar17;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,plVar15,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar17,plVar15);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            local_1a8 = lVar10;
            if (pcVar4 != (code *)0x0) {
              plVar19 = plVar17;
              if (0x18 < *(ushort *)(plVar11 + 0x2f)) {
                plVar19 = (longlong *)*plVar17;
              }
              (*pcVar4)(plVar19);
            }
            if (0x18 < *(ushort *)(plVar11 + 0x2f)) {
              FUN_1400020a8(*plVar17);
            }
            bVar2 = *(byte *)(param_1 + 0x140);
            uVar6 = (uint)bVar2;
            uVar3 = *(ushort *)(param_1 + 0x13f);
            *(ushort *)(plVar11 + 0x2f) = uVar3;
            plVar19 = plVar17;
            if (0x18 < uVar3) {
              local_1a0 = (ulonglong)bVar2;
              plVar19 = (longlong *)FUN_14001cc68(uVar3,0);
              *plVar17 = (longlong)plVar19;
              plVar15 = (longlong *)*plVar15;
              uVar6 = (uint)local_1a0;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar19,plVar15,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(plVar19,plVar15);
            }
            *(char *)(plVar11 + 0x30) = (char)param_1[0x140];
            lVar10 = local_1a8;
          }
          *(char *)(plVar11 + 0x31) = (char)param_1[0x141];
          *(char *)(plVar11 + 0x32) = (char)param_1[0x142];
          *(char *)(plVar11 + 0x3a) = (char)param_1[0x151];
          plVar15 = param_1 + 0x14b;
          plVar17 = plVar11 + 0x34;
          bVar2 = *(byte *)(plVar11 + 0x38);
          if (bVar2 == *(byte *)(param_1 + 0x14f)) {
            if (0x18 < *(ushort *)(param_1 + 0x14e)) {
              plVar15 = (longlong *)param_1[0x14b];
            }
            if (0x18 < *(ushort *)(plVar11 + 0x37)) {
              plVar17 = (longlong *)*plVar17;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,plVar15,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar17,plVar15);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            local_1a8 = lVar10;
            if (pcVar4 != (code *)0x0) {
              plVar19 = plVar17;
              if (0x18 < *(ushort *)(plVar11 + 0x37)) {
                plVar19 = (longlong *)*plVar17;
              }
              (*pcVar4)(plVar19);
            }
            if (0x18 < *(ushort *)(plVar11 + 0x37)) {
              FUN_1400020a8(*plVar17);
            }
            bVar2 = *(byte *)(param_1 + 0x14f);
            uVar6 = (uint)bVar2;
            uVar3 = *(ushort *)(param_1 + 0x14e);
            *(ushort *)(plVar11 + 0x37) = uVar3;
            plVar19 = plVar17;
            if (0x18 < uVar3) {
              local_1a0 = (ulonglong)bVar2;
              plVar19 = (longlong *)FUN_14001cc68(uVar3,0);
              *plVar17 = (longlong)plVar19;
              plVar15 = (longlong *)*plVar15;
              uVar6 = (uint)local_1a0;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar19,plVar15,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
            }
            else {
              (*pcVar4)(plVar19,plVar15);
            }
            *(char *)(plVar11 + 0x38) = (char)param_1[0x14f];
            lVar10 = local_1a8;
          }
          *(char *)(plVar11 + 0x39) = (char)param_1[0x150];
          *(undefined1 *)(plVar11 + 0x44) = *(undefined1 *)((longlong)param_1 + 0xa11);
          plVar15 = param_1 + 0x144;
          plVar17 = plVar11 + 0x46;
          bVar2 = *(byte *)(plVar11 + 0x4a);
          if (bVar2 == *(byte *)(param_1 + 0x148)) {
            if (0x18 < *(ushort *)(param_1 + 0x147)) {
              plVar15 = (longlong *)param_1[0x144];
            }
            if (0x18 < *(ushort *)(plVar11 + 0x49)) {
              plVar17 = (longlong *)*plVar17;
            }
            uVar12 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar12);
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar17,plVar15,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar12));
            }
            else {
              (*pcVar4)(plVar17,plVar15);
            }
          }
          else {
            pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            local_1a8 = lVar10;
            if (pcVar4 != (code *)0x0) {
              plVar19 = plVar17;
              if (0x18 < *(ushort *)(plVar11 + 0x49)) {
                plVar19 = (longlong *)*plVar17;
              }
              (*pcVar4)(plVar19);
            }
            if (0x18 < *(ushort *)(plVar11 + 0x49)) {
              FUN_1400020a8(*plVar17);
            }
            bVar2 = *(byte *)(param_1 + 0x148);
            uVar3 = *(ushort *)(param_1 + 0x147);
            *(ushort *)(plVar11 + 0x49) = uVar3;
            plVar19 = plVar17;
            if (0x18 < uVar3) {
              plVar19 = (longlong *)FUN_14001cc68(uVar3,0);
              *plVar17 = (longlong)plVar19;
              plVar15 = (longlong *)*plVar15;
            }
            pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
            if (pcVar4 == (code *)0x0) {
              memcpy(plVar19,plVar15,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120))
                    );
            }
            else {
              (*pcVar4)(plVar19,plVar15);
            }
            *(char *)(plVar11 + 0x4a) = (char)param_1[0x148];
            lVar10 = local_1a8;
          }
          *(char *)(plVar11 + 0x4b) = (char)param_1[0x149];
          local_190 = (longlong)&uStack_100 + 4;
          local_108 = DAT_14cb72618;
          uStack_100._0_4_ = CONCAT31(uStack_100._1_3_,1);
          local_198 = &local_108;
          FUN_140c482d4(plVar11);
          (**(code **)(*plVar11 + 0x90))(plVar11);
        }
      }
    }
    uVar9 = FUN_140a48832();
    lVar10 = FUN_140c483dc(lVar10,uVar9,&DAT_14cb7e4d0,0);
    if (lVar10 != 0) {
      FUN_1414b425a(param_1,lVar10,&local_98,&local_d0);
    }
  }
  local_108 = (ulonglong *)0x0;
  uVar9 = FUN_140c4880e();
  lVar8 = FUN_140c47e50(lVar8,uVar9,&local_108);
  uVar6 = (uint)local_a8;
  if (lVar8 != 0) {
    plVar11 = (longlong *)(lVar8 + 0x90);
    if (*(byte *)(lVar8 + 0xb0) == local_a8) {
      ppppuVar20 = local_c8;
      if (0x18 < local_b0) {
        ppppuVar20 = (undefined8 ****)local_c8[0];
      }
      if (0x18 < *(ushort *)(lVar8 + 0xa8)) {
        plVar11 = (longlong *)*plVar11;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + (ulonglong)((uint)local_a8 * 0x120));
      if (pcVar4 == (code *)0x0) {
        memcpy(plVar11,ppppuVar20,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)local_a8 * 0x120)));
      }
      else {
        (*pcVar4)(plVar11,ppppuVar20);
      }
    }
    else {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(lVar8 + 0xb0) * 0x120));
      if (pcVar4 != (code *)0x0) {
        plVar15 = plVar11;
        if (0x18 < *(ushort *)(lVar8 + 0xa8)) {
          plVar15 = (longlong *)*plVar11;
        }
        (*pcVar4)(plVar15);
      }
      if (0x18 < *(ushort *)(lVar8 + 0xa8)) {
        FUN_1400020a8(*plVar11);
      }
      uVar6 = (uint)local_a8;
      *(ushort *)(lVar8 + 0xa8) = local_b0;
      plVar15 = plVar11;
      ppppuVar20 = local_c8;
      if (0x18 < local_b0) {
        plVar15 = (longlong *)FUN_14001cc68(local_b0,0);
        *plVar11 = (longlong)plVar15;
        ppppuVar20 = (undefined8 ****)local_c8[0];
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
      if (pcVar4 == (code *)0x0) {
        memcpy(plVar15,ppppuVar20,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120)));
      }
      else {
        (*pcVar4)(plVar15,ppppuVar20);
      }
      *(byte *)(lVar8 + 0xb0) = local_a8;
    }
    *(undefined1 *)(lVar8 + 0xb8) = local_a0;
    *(undefined1 *)(lVar8 + 0x80) = *(undefined1 *)((longlong)param_1 + 0x1d9);
    uStack_100._0_4_ = *(undefined4 *)((longlong)param_1 + 0x1dc);
    local_108 = (ulonglong *)0x0;
    local_e8 = 4;
    local_e0 = 3;
    local_d8 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1403719a4(lVar8 + 200,&local_108);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_e0 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (local_e8 < 0x19) {
        puVar21 = &uStack_100;
      }
      else {
        puVar21 = (undefined8 *)CONCAT44(uStack_100._4_4_,(undefined4)uStack_100);
      }
      (*pcVar4)(puVar21);
    }
    if (0x18 < local_e8) {
      FUN_1400020a8(CONCAT44(uStack_100._4_4_,(undefined4)uStack_100));
    }
    FUN_140c48b0c(lVar8,(char)param_1[0x3b]);
    uVar6 = (uint)local_a8;
  }
LAB_143d62602:
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar6 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar20 = (undefined8 ****)local_c8[0];
    if (local_b0 < 0x19) {
      ppppuVar20 = local_c8;
    }
    (*pcVar4)(ppppuVar20);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(local_c8[0]);
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar4 != (code *)0x0) {
    ppppuVar20 = (undefined8 ****)local_90[0];
    if (local_78 < 0x19) {
      ppppuVar20 = local_90;
    }
    (*pcVar4)(ppppuVar20);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(local_90[0]);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6362e FUN_143d6362e body=151 status=ok
// SIG undefined FUN_143d6362e(void)

undefined8 FUN_143d6362e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 0x48) + 0x2c0) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 0x270);
    if ((((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0x26c) != 0)) &&
        (uVar1 = *(uint *)(param_1 + 0x268), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar5 != 0) && (*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x26c))) &&
         ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)) {
        cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,0,0);
        if (cVar3 != '\0') goto LAB_143d636ab;
      }
    }
    return 0;
  }
LAB_143d636ab:
  uVar4 = FUN_14387ffb0(param_1,param_2);
  return uVar4;
}



// FUNCTION 143d63700 FUN_143d63700 body=151 status=ok
// SIG undefined FUN_143d63700(void)

void FUN_143d63700(longlong param_1)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,0x1427dd501,0,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
      return;
    }
  }
  return;
}



// FUNCTION 143d63797 FUN_143d63797 body=41 status=ok
// SIG undefined FUN_143d63797(void)

void FUN_143d63797(void)

{
  DAT_14cb7e720 = 0;
  if (DAT_14cb7e718 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6602c();
  return;
}



// FUNCTION 143d637c5 FUN_143d637c5 body=41 status=ok
// SIG undefined FUN_143d637c5(void)

void FUN_143d637c5(void)

{
  DAT_14cb7e828 = 0;
  if (DAT_14cb7e820 != 0) {
    FUN_1400020a8();
  }
  FUN_145d660ca();
  return;
}



// FUNCTION 143d637ee FUN_143d637ee body=44 status=ok
// SIG undefined FUN_143d637ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d637ee(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb7e844 = _DAT_14cb7e844 + -1;
  *param_1 = DAT_14cb7e838;
  DAT_14cb7e838 = param_1;
  return;
}



// FUNCTION 143d63841 FUN_143d63841 body=41 status=ok
// SIG undefined FUN_143d63841(void)

void FUN_143d63841(void)

{
  DAT_14cb7e958 = 0;
  if (DAT_14cb7e950 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66168();
  return;
}



// FUNCTION 143d638db FUN_143d638db body=41 status=ok
// SIG undefined FUN_143d638db(void)

void FUN_143d638db(void)

{
  DAT_14cb7eb00 = 0;
  if (DAT_14cb7eaf8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66206();
  return;
}



// FUNCTION 143d639bf FUN_143d639bf body=41 status=ok
// SIG undefined FUN_143d639bf(void)

void FUN_143d639bf(void)

{
  DAT_14cb7ec08 = 0;
  if (DAT_14cb7ec00 != 0) {
    FUN_1400020a8();
  }
  FUN_145d662a4();
  return;
}



// FUNCTION 143d639f2 FUN_143d639f2 body=100 status=ok
// SIG undefined FUN_143d639f2(void)

void FUN_143d639f2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140316ff8();
  FUN_1457ea426(param_1,param_2);
  FUN_145b0782e(param_1);
  FUN_146550be0(param_1);
  lVar1 = FUN_140316ff8();
  if ((longlong)*(int *)(lVar1 + 0x28) != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x20);
    lVar1 = (longlong)*(int *)(lVar1 + 0x28) * 0x18;
    do {
      FUN_141889d2a(param_1,lVar2);
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143d63a56 FUN_143d63a56 body=920 status=ok
// SIG undefined FUN_143d63a56(void)

longlong * FUN_143d63a56(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined **ppuVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  
  *param_2 = 0;
  iVar2 = *(int *)(param_1 + 0x3d0);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar15 = 0;
    iVar16 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x3c8);
    if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x3b8);
    }
    uVar19 = *puVar7;
    if (uVar19 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar17 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar17 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar17 == uVar15) {
          return param_2;
        }
        iVar16 = iVar16 + 0x20;
        uVar19 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar17 = (ulonglong)(-uVar19 & uVar19);
    uVar1 = uVar17 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar10 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar10) {
      iVar10 = iVar2;
    }
  }
  if (iVar10 != iVar2) {
    uVar19 = 0xffffffff;
    iVar6 = iVar2;
    do {
      lVar18 = *(longlong *)(param_1 + 0x3a8);
      lVar8 = *(longlong *)(lVar18 + 0x18 + (longlong)iVar10 * 0x28);
      if (lVar8 != 0) {
        lVar8 = (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x10))(lVar8 + 0x28);
        if (lVar8 == param_3) {
          lVar18 = lVar18 + (longlong)iVar10 * 0x28;
          lVar8 = *(longlong *)(lVar18 + 0x18);
          if (DAT_14c950c29 == '\x01') {
            if (lVar8 == 0) {
              lVar8 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar8 = *(longlong *)(lVar18 + 0x18);
            }
          }
          *param_2 = lVar8;
          if (*(longlong *)(lVar18 + 8) == 0) {
            uVar9 = FUN_14043db3a();
            uVar9 = FUN_14477b664(uVar9);
            *(undefined8 *)(lVar18 + 8) = uVar9;
          }
          lVar8 = *(longlong *)(param_3 + 0x150);
          if (lVar8 == 0) {
            lVar8 = FUN_14043db3a();
          }
          lVar8 = FUN_14477b664(lVar8);
          if ((lVar8 != 0) && (plVar3 = *(longlong **)(lVar8 + 0xb8), plVar3 != (longlong *)0x0)) {
            lVar8 = *plVar3;
            pcVar4 = *(code **)(lVar8 + 0x108);
            if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
              cVar5 = (*pcVar4)(plVar3);
              if (cVar5 == '\0') goto LAB_143d63d0d;
              lVar8 = *plVar3;
            }
            pcVar4 = *(code **)(lVar8 + 0x110);
            if (pcVar4 == (code *)&LAB_144783426) {
              ppuVar14 = &PTR_PTR_14c763408;
            }
            else if (pcVar4 == (code *)&LAB_144783432) {
              ppuVar14 = &PTR_PTR_14c75f798;
            }
            else {
              ppuVar14 = (undefined **)(*pcVar4)(plVar3);
            }
            FUN_144aff48c(ppuVar14);
          }
LAB_143d63d0d:
          if ((*(longlong *)(lVar18 + 8) != 0) &&
             (plVar3 = *(longlong **)(*(longlong *)(lVar18 + 8) + 0xb8), plVar3 != (longlong *)0x0))
          {
            lVar8 = *plVar3;
            pcVar4 = *(code **)(lVar8 + 0x108);
            if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
              cVar5 = (*pcVar4)(plVar3);
              if (cVar5 == '\0') goto LAB_143d63d6f;
              lVar8 = *plVar3;
            }
            pcVar4 = *(code **)(lVar8 + 0x110);
            if (pcVar4 == (code *)&LAB_144783426) {
              ppuVar14 = &PTR_PTR_14c763408;
            }
            else if (pcVar4 == (code *)&LAB_144783432) {
              ppuVar14 = &PTR_PTR_14c75f798;
            }
            else {
              ppuVar14 = (undefined **)(*pcVar4)(plVar3);
            }
            FUN_144aff48c(ppuVar14);
          }
LAB_143d63d6f:
          FUN_14887eb4e((longlong *)(param_1 + 0x3a8),lVar18);
          return param_2;
        }
        iVar6 = *(int *)(param_1 + 0x3d0);
      }
      uVar19 = uVar19 & ~(uint)uVar17;
      puVar7 = *(uint **)(param_1 + 0x3c8);
      if (*(uint **)(param_1 + 0x3c8) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x3b8);
      }
      iVar10 = (int)uVar15;
      lVar18 = (longlong)iVar10;
      uVar11 = puVar7[lVar18] & uVar19;
      if (uVar11 == 0) {
        iVar12 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar12 = iVar6 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar10 < iVar12) {
          lVar8 = 0;
          do {
            uVar11 = puVar7[lVar18 + lVar8 + 1];
            if (uVar11 != 0) {
              uVar15 = (ulonglong)(iVar10 + (int)lVar8 + 1);
              uVar19 = 0xffffffff;
              goto LAB_143d63bfa;
            }
            iVar16 = iVar16 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar13 - lVar18 != lVar8);
          uVar19 = 0xffffffff;
          iVar10 = iVar13;
        }
        uVar15 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar6;
      }
      else {
LAB_143d63bfa:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar17 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar10 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar10) {
          iVar10 = iVar6;
        }
      }
    } while (iVar10 != iVar2);
  }
  return param_2;
}



// FUNCTION 143d63dee FUN_143d63dee body=70 status=ok
// SIG undefined FUN_143d63dee(void)

bool FUN_143d63dee(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 143d63e34 FUN_143d63e34 body=353 status=ok
// SIG undefined FUN_143d63e34(void)

void FUN_143d63e34(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = param_2;
  FUN_14162a040(param_1 + 0x158,&local_2c,&local_38,0);
  lVar1 = *(longlong *)(param_1 + 0x158) + (longlong)local_2c * 0x50;
  *(undefined8 *)(lVar1 + 8) = 0xbff0000000000000;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)(lVar1 + 0x10) = *param_3;
  *(undefined4 *)(lVar1 + 0x14) = uVar4;
  *(undefined4 *)(lVar1 + 0x18) = uVar5;
  *(undefined4 *)(lVar1 + 0x1c) = uVar6;
  lVar3 = *(longlong *)(param_2 + 0xc);
  if (*(longlong *)(lVar1 + 0x20) != lVar3) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  *(longlong *)(lVar1 + 0x20) = lVar3;
  if (*(longlong *)(lVar1 + 0x28) != *(longlong *)(param_2 + 0xe)) {
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  uVar8 = FUN_14477b664();
  uVar8 = FUN_14477b664(uVar8);
  *(undefined8 *)(lVar1 + 0x28) = uVar8;
  *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)(param_2 + 0x10);
  uVar4 = param_2[0x13];
  uVar5 = param_2[0x14];
  uVar6 = param_2[0x15];
  *(undefined4 *)(lVar1 + 0x38) = param_2[0x12];
  *(undefined4 *)(lVar1 + 0x3c) = uVar4;
  *(undefined4 *)(lVar1 + 0x40) = uVar5;
  *(undefined4 *)(lVar1 + 0x44) = uVar6;
  if (*(longlong *)(param_1 + 0x50) == 0) goto LAB_143d63f57;
  if (*(int *)(param_1 + 0x1ac) == 0) {
LAB_143d63f92:
    uVar8 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1a8);
    uVar8 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != *(int *)(param_1 + 0x1ac) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_143d63f92;
      uVar8 = *puVar9;
    }
  }
  iVar7 = FUN_14490d72a(uVar8);
  if ((iVar7 == 3) && (*(char *)(param_2 + 0x16) == '\0')) {
    FUN_14065a3ac(*(undefined8 *)(param_1 + 0x50),*param_2,(undefined8 *)(lVar1 + 8));
  }
LAB_143d63f57:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d63f96 FUN_143d63f96 body=323 status=ok
// SIG undefined FUN_143d63f96(void)

void FUN_143d63f96(longlong param_1,uint *param_2,undefined8 param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  double *pdVar6;
  double dVar7;
  
  if (*(int *)(param_1 + 0x160) != *(int *)(param_1 + 0x18c)) {
    lVar4 = param_1 + 400;
    if (*(longlong *)(param_1 + 0x198) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x198);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x1a0) - 1U & *param_2) * 4);
    if (iVar2 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x158) + (longlong)iVar2 * 0x50;
        if (*(uint *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar2 * 0x50) == *param_2)
        goto LAB_143d64008;
        iVar2 = *(int *)(lVar4 + 0x48);
      } while (iVar2 != -1);
    }
  }
  lVar4 = 0;
LAB_143d64008:
  pdVar6 = (double *)(lVar4 + 8);
  if (lVar4 == 0) {
    pdVar6 = (double *)0x0;
  }
  if (((*(int *)(param_1 + 0x1ac) != 0) && (uVar1 = *(uint *)(param_1 + 0x1a8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x1ac))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((pdVar6 != (double *)0x0 && (lVar4 = *plVar5, lVar4 != 0)))))) {
      dVar7 = 0.0;
      if (param_4 == '\0') {
        dVar7 = *(double *)(lVar4 + 0x6e0);
        lVar3 = FUN_140316ff8();
        dVar7 = (double)*(float *)(lVar3 + 0x6f8) + dVar7;
      }
      *pdVar6 = dVar7;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        iVar2 = FUN_14490d72a(lVar4);
        if ((iVar2 == 3) && ((char)param_2[0x16] == '\0')) {
          FUN_140c84f48(*(undefined8 *)(param_1 + 0x50),*param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 143d641aa FUN_143d641aa body=28 status=ok
// SIG undefined FUN_143d641aa(void)

undefined8 FUN_143d641aa(undefined8 param_1,undefined8 param_2)

{
  FUN_1400021e4(param_2,param_1);
  return param_1;
}



// FUNCTION 143d64234 FUN_143d64234 body=635 status=ok
// SIG undefined FUN_143d64234(void)

void FUN_143d64234(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  plVar5 = (longlong *)*param_1;
  lVar4 = *plVar5;
  if (*(longlong *)(param_2 + 0x60) != lVar4) {
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  *(longlong *)(param_2 + 0x60) = lVar4;
  if (*(longlong *)(param_2 + 0x68) != plVar5[1]) {
    *(undefined8 *)(param_2 + 0x70) = 0;
  }
  uVar3 = FUN_14477b664();
  uVar3 = FUN_14477b664(uVar3);
  *(undefined8 *)(param_2 + 0x68) = uVar3;
  *(longlong *)(param_2 + 0x70) = plVar5[2];
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)*param_1;
  plVar5 = (longlong *)param_1[1];
  lVar4 = *plVar5;
  if (*(longlong *)(param_2 + 0x48) != lVar4) {
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  *(longlong *)(param_2 + 0x48) = lVar4;
  if (*(longlong *)(param_2 + 0x50) != plVar5[1]) {
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  uVar3 = FUN_14477b664();
  uVar3 = FUN_14477b664(uVar3);
  *(undefined8 *)(param_2 + 0x50) = uVar3;
  *(longlong *)(param_2 + 0x58) = plVar5[2];
  *(undefined4 *)(param_2 + 0xe8) = *(undefined4 *)(*(longlong *)param_1[2] + 0x30);
  lVar4 = FUN_14494f566(param_1[3]);
  if (lVar4 != 0) {
    lVar4 = FUN_14494f566(param_1[3]);
    plVar5 = (longlong *)FUN_143d6a690(*(undefined1 *)(lVar4 + 0x13));
    lVar4 = plVar5[1];
    if (lVar4 == 0) {
      uVar3 = FUN_1407ad36c();
      lVar4 = FUN_14477b664(uVar3);
      plVar5[1] = lVar4;
    }
    lVar6 = plVar5[2];
    if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*plVar5 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar3,plVar5);
      }
      plVar5[2] = lVar6;
    }
    *(longlong *)(param_2 + 0x78) = lVar6;
    lVar4 = FUN_14494f566(param_1[3]);
    puVar7 = &DAT_14c763940;
    if ((DAT_14cb7f870 != 0) &&
       ((int)(uint)*(byte *)(lVar4 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8))) {
      puVar7 = (undefined4 *)
               ((ulonglong)*(byte *)(lVar4 + 0x2c) * 0x10 + *(longlong *)(DAT_14cb7f870 + 0x3a0));
    }
    *(undefined4 *)(param_2 + 0x90) = *puVar7;
  }
  *(undefined1 *)(param_2 + 0xc3) = *(undefined1 *)(*(longlong *)param_1[2] + 0x60);
  *(undefined1 *)(param_2 + 0xc4) = *(undefined1 *)(*(longlong *)param_1[2] + 0x61);
  lVar4 = *(longlong *)(param_2 + 0x108);
  if (lVar4 == 0) {
    uVar3 = FUN_14065b502();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_2 + 0x108) = lVar4;
  }
  lVar6 = *(longlong *)(param_2 + 0x110);
  if (lVar6 == 0) {
    if ((*(longlong *)(param_2 + 0x100) != 0) && (lVar4 != 0)) {
      plVar5 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
        *(undefined8 *)(param_2 + 0x110) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar6 = FUN_144aff482(uVar3,(longlong *)(param_2 + 0x100));
        *(longlong *)(param_2 + 0x110) = lVar6;
        if (lVar6 != 0) goto LAB_143d643fd;
      }
    }
    lVar6 = FUN_140317ef6(param_2 + 0x20);
    if (lVar6 == 0) {
      lVar6 = FUN_14575395a();
    }
  }
LAB_143d643fd:
  *(undefined8 *)param_1[4] = *(undefined8 *)(lVar6 + 0x30);
  return;
}



// FUNCTION 143d644b0 FUN_143d644b0 body=78 status=ok
// SIG undefined FUN_143d644b0(void)

undefined8 * FUN_143d644b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b406df0;
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143d64504 FUN_143d64504 body=29 status=ok
// SIG undefined FUN_143d64504(void)

void FUN_143d64504(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d64522 FUN_143d64522 body=29 status=ok
// SIG undefined FUN_143d64522(void)

undefined8 FUN_143d64522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d64540 FUN_143d64540 body=31 status=ok
// SIG undefined FUN_143d64540(void)

undefined8 FUN_143d64540(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d64606 FUN_143d64606 body=407 status=ok
// SIG undefined FUN_143d64606(void)

void FUN_143d64606(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)param_1[1];
  lVar7 = *(longlong *)(param_1[1] + 0x20);
  if ((lVar7 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar7);
  }
  else if (lVar7 == 0) {
    uVar6 = 0;
    uVar4 = 0;
    goto LAB_143d646a2;
  }
  uVar6 = *(uint *)(lVar7 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  uVar4 = (ulonglong)*(uint *)(lVar7 + 0x10);
  if (*(uint *)(lVar7 + 0x10) == 0) {
    LOCK();
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    uVar5 = DAT_14c964868 + 1;
    bVar8 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar8) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar5);
    }
    LOCK();
    uVar2 = *(uint *)(lVar7 + 0x10);
    bVar8 = uVar2 == 0;
    if (bVar8) {
      *(uint *)(lVar7 + 0x10) = uVar5;
      uVar2 = 0;
    }
    UNLOCK();
    if (bVar8) {
      uVar2 = uVar5;
    }
    uVar4 = (ulonglong)uVar2;
  }
LAB_143d646a2:
  *(ulonglong *)(param_2 + 0x88) = (ulonglong)uVar6 | uVar4 << 0x20;
  FUN_141889fac(&local_48,*(undefined8 *)param_1[2],0);
  if (*(longlong *)(param_2 + 0x48) != local_48) {
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  *(longlong *)(param_2 + 0x48) = local_48;
  if (*(longlong *)(param_2 + 0x50) != local_40) {
    *(undefined8 *)(param_2 + 0x58) = 0;
  }
  uVar3 = FUN_14477b664();
  uVar3 = FUN_14477b664(uVar3);
  *(undefined8 *)(param_2 + 0x50) = uVar3;
  *(undefined8 *)(param_2 + 0x58) = local_38;
  *(undefined1 *)param_1[3] = *(undefined1 *)(param_2 + 0xc1);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6479e FUN_143d6479e body=70 status=ok
// SIG undefined FUN_143d6479e(void)

undefined8 * FUN_143d6479e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14b406ef0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 143d647ea FUN_143d647ea body=29 status=ok
// SIG undefined FUN_143d647ea(void)

void FUN_143d647ea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143d64808 FUN_143d64808 body=29 status=ok
// SIG undefined FUN_143d64808(void)

undefined8 FUN_143d64808(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d64826 FUN_143d64826 body=29 status=ok
// SIG undefined FUN_143d64826(void)

void FUN_143d64826(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_146524dc2();
  FUN_1448093f4(uVar1,uVar2);
  return;
}



// FUNCTION 143d6484a FUN_143d6484a body=120 status=ok
// SIG undefined FUN_143d6484a(void)

void FUN_143d6484a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 143d648c2 FUN_143d648c2 body=255 status=ok
// SIG undefined FUN_143d648c2(void)

void FUN_143d648c2(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar5 = (longlong)(int)uVar1;
  if (lVar5 != 0) {
    lVar2 = *param_1;
    uVar13 = 0;
    bVar6 = *(longlong *)(lVar2 + 8) == *(longlong *)(*param_2 + 8);
    uVar10 = 0;
    do {
      uVar9 = (ulonglong)uVar10;
      uVar7 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar1) {
        uVar7 = uVar1;
      }
      lVar4 = uVar9 * 0x10;
      plVar8 = (longlong *)(lVar2 + 0x18 + lVar4);
      uVar11 = uVar10;
      do {
        uVar9 = uVar9 + 1;
        uVar12 = uVar7;
        if (lVar5 <= (longlong)uVar9) break;
        lVar3 = *plVar8;
        uVar11 = uVar11 + 1;
        plVar8 = plVar8 + 2;
        uVar12 = uVar11;
      } while (bVar6 == (lVar3 == *(longlong *)(*param_2 + 8)));
      if (bVar6 == false) {
        if (uVar13 != uVar10) {
          memmove((void *)((longlong)(int)uVar13 * 0x10 + lVar2),(void *)(lVar4 + lVar2),
                  (longlong)(int)(uVar12 - uVar10) << 4);
        }
        uVar13 = uVar13 + (uVar12 - uVar10);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      uVar10 = uVar12;
    } while ((longlong)uVar9 < lVar5);
    *(uint *)(param_1 + 1) = uVar13;
  }
  return;
}



// FUNCTION 143d649c1 FUN_143d649c1 body=3949 status=ok
// SIG undefined FUN_143d649c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d649c1(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  char *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined **local_88;
  undefined1 *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  _DAT_14cb7e360 = 0x47efffffe0000000;
  _DAT_14cb7e368 = 0x47efffffe0000000;
  _DAT_14cb7e370 = 0x47efffffe0000000;
  DAT_14cb7e378 = 0x47efffffe0000000;
  DAT_14cb7e380 = 0x47efffffe0000000;
  DAT_14cb7e388 = 0x47efffffe0000000;
  _DAT_14cb7e390 = 0x47efffffe0000000;
  _DAT_14cb7e398 = 0x47efffffe0000000;
  local_a8 = "AssetRegistry";
  uStack_a0 = 0xd;
  uStack_9c = uStack_9c & 0xffffff00;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb7e3a0 = (ulonglong)uVar3;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cb7e3a8);
  if (cVar2 == '\0') {
    _DAT_14cb7e3a8 = 0;
    uRam000000014cb7e3b0 = 0;
  }
  if (local_a8 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = "bone";
  uStack_a0 = 4;
  uStack_9c = uStack_9c & 0xffffff00;
  FUN_14001a6c0(&local_a8,1);
  FUN_1446f470e(&DAT_14cb7e3b8,L"Teleporting",1);
  FUN_1446f470e(&DAT_14cb7e3c0,L"GoalLocation",1);
  FUN_1446f470e(&DAT_14cb7e3c8,L"GoalRotation",1);
  FUN_1446f470e(&DAT_14cb7e3d0,L"TravelType",1);
  FUN_1446f470e(&DAT_14cb7e3d8,L"TravelTime",1);
  FUN_1446f470e(&DAT_14cb7e3e0,L"Distance",1);
  local_a8 = (char *)0xa92f43176fbe0ff6;
  uStack_a0 = 0xb27c69ae;
  uStack_9c = 0x6db681d8;
  _DAT_14cb7e3e8 = 0x6fbe0ff6;
  uRam000000014cb7e3ec = 0xa92f4317;
  uRam000000014cb7e3f0 = 0xb27c69ae;
  uRam000000014cb7e3f4 = 0x6db681d8;
  FUN_141005458(&local_a8,1,L"GbxBrainAspectSettings_Teleport",0);
  atexit((_func_5014 *)&LAB_143d607cc);
  FUN_1446f470e(&DAT_14cb7e3f8,L"Trick",1);
  FUN_1446f470e(&DAT_14cb7e400,L"Count",1);
  FUN_1446f470e(&DAT_14cb7e408,L"PlayRate",1);
  FUN_1446f470e(&DAT_14cb7e410,L"InterruptRule",1);
  FUN_1446f470e(&DAT_14cb7e418,L"Usable",1);
  FUN_1446f470e(&DAT_14cb7e420,L"UseTime",1);
  FUN_1446f470e(&DAT_14cb7e428,L"IsUsing",1);
  _DAT_14cb7e430 = 0xffffffff;
  _DAT_14cb7e434 = 0;
  _DAT_14cb7e43c = 0;
  FUN_14052b5e0(&DAT_14cb7e438,"PlayerAwareness",0);
  _DAT_14cb7e448 = "PlayerAwareness";
  FUN_1446f470e(&DAT_14cb7e450,L"ai_LeadFollow_Target",1);
  FUN_1446f470e(&DAT_14cb7e458,L"Patrol Tracked Locations",1);
  FUN_1446f470e(&DAT_14cb7e460,L"Combat Tracked Locations",1);
  FUN_1446f470e(&DAT_14cb7e468,L"Num Breadcrumbs",1);
  FUN_1446f470e(&DAT_14cb7e470,L"Last Location Stored",1);
  FUN_1446f470e(&DAT_14cb7e478,L"Tracking Paused",1);
  FUN_1446f470e(&DAT_14cb7e480,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb7e488,L"AOEAttack",1);
  FUN_1446f470e(&DAT_14cb7e490,L"WhileAtTarget",1);
  FUN_1446f470e(&DAT_14cb7e498,L"AttackTarget",1);
  FUN_1446f470e(&DAT_14cb7e4a0,L"FaceTarget",1);
  FUN_1446f470e(&DAT_14cb7e4a8,L"GoToTarget",1);
  FUN_1446f470e(&DAT_14cb7e4b0,L"LeapAttack",1);
  FUN_1446f470e(&DAT_14cb7e4b8,L"LeapStartPos",1);
  FUN_1446f470e(&DAT_14cb7e4c0,L"LeapEndPos",1);
  FUN_1446f470e(&DAT_14cb7e4c8,L"TestOnNav",1);
  FUN_1446f470e(&DAT_14cb7e4d0,L"LeapAtEndPos",1);
  FUN_1446f470e(&DAT_14cb7e4d8,L"FaceTarget",1);
  FUN_1446f470e(&DAT_14cb7e4e0,L"GetIntoPosition",1);
  FUN_1446f470e(&DAT_14cb7e4e8,L"MoveToLeapStart",1);
  FUN_1446f470e(&DAT_14cb7e4f0,L"TrajectoryOptions",1);
  FUN_1446f470e(&DAT_14cb7e4f8,L"actor_velocity_dir",1);
  FUN_1446f470e(&DAT_14cb7e500,L"Gps_LeapAttack_Move",1);
  FUN_1446f470e(&DAT_14cb7e508,L"Gps_LeapAttack_Still",1);
  FUN_1446f470e(&DAT_14cb7e510,L"StopMoving",1);
  FUN_1446f470e(&DAT_14cb7e518,L"ai_target_radius",1);
  FUN_1446f470e(&DAT_14cb7e520,L"LeapImmediately",1);
  FUN_1446f470e(&DAT_14cb7e528,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb7e530,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb7e538,L"MeleeAttack",1);
  FUN_1446f470e(&DAT_14cb7e540,L"StopMoving",1);
  FUN_1446f470e(&DAT_14cb7e548,L"WhileAtTarget",1);
  FUN_1446f470e(&DAT_14cb7e550,L"AttackTarget",1);
  FUN_1446f470e(&DAT_14cb7e558,L"FaceTarget",1);
  FUN_1446f470e(&DAT_14cb7e560,L"GoToTarget",1);
  FUN_1446f470e(&DAT_14cb7e568,L"ai_target_radius",1);
  FUN_1446f470e(&DAT_14cb7e570,L"OnAggro",1);
  FUN_1446f470e(&DAT_14cb7e578,L"OnDeaggro",1);
  FUN_1446f470e(&DAT_14cb7e580,L"Orbit",1);
  FUN_1446f470e(&DAT_14cb7e588,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb7e590,L"Patrol",1);
  FUN_1446f470e(&DAT_14cb7e598,L"Perch",1);
  FUN_1446f470e(&DAT_14cb7e5a0,L"AtPerch",1);
  FUN_1446f470e(&DAT_14cb7e5a8,L"CanUsePerches",1);
  FUN_1446f470e(&DAT_14cb7e5b0,L"FindPatrolPerch",1);
  FUN_1446f470e(&DAT_14cb7e5b8,L"MoveToPerch",1);
  FUN_1446f470e(&DAT_14cb7e5c0,L"MoveToPerchBackup",1);
  FUN_1446f470e(&DAT_14cb7e5c8,L"MoveToPerchPriority",1);
  FUN_1446f470e(&DAT_14cb7e5d0,L"Wander",1);
  FUN_1446f470e(&DAT_14cb7e5d8,L"WanderPriority",1);
  FUN_1446f470e(&DAT_14cb7e5e0,L"WanderBackup",1);
  FUN_1446f470e(&DAT_14cb7e5e8,L"Idle",1);
  FUN_1446f470e(&DAT_14cb7e5f0,L"Fidget",1);
  FUN_1446f470e(&DAT_14cb7e5f8,L"MainPatrol",1);
  FUN_1446f470e(&DAT_14cb7e600,L"ReturnToPatrolTerritory",1);
  FUN_1446f470e(&DAT_14cb7e608,L"MoveAndAlignToPerch",1);
  FUN_1446f470e(&DAT_14cb7e610,L"AlignToPerch",1);
  FUN_1446f470e(&DAT_14cb7e618,L"ShouldRotateToPerchRot",1);
  FUN_1446f470e(&DAT_14cb7e620,L"ClaimedPerchRotation",1);
  FUN_1446f470e(&DAT_14cb7e628,L"PerchTask",1);
  FUN_1446f470e(&DAT_14cb7e630,L"Perch",1);
  FUN_1446f470e(&DAT_14cb7e638,L"AtPerch",1);
  FUN_1446f470e(&DAT_14cb7e640,L"MoveToPerch",1);
  FUN_1446f470e(&DAT_14cb7e648,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb7e650,L"ai_target",1);
  FUN_1446f470e(&DAT_14cb7e658,L"RangedAttack",1);
  FUN_1446f470e(&DAT_14cb7e660,L"StopMoving",1);
  FUN_1446f470e(&DAT_14cb7e668,L"WhileAtTarget",1);
  FUN_1446f470e(&DAT_14cb7e670,L"AttackTarget",1);
  FUN_1446f470e(&DAT_14cb7e678,L"FaceTarget",1);
  FUN_1446f470e(&DAT_14cb7e680,L"MoveIntoPosition",1);
  FUN_1446f470e(&DAT_14cb7e688,L"RangedAttack_Move",1);
  FUN_1446f470e(&DAT_14cb7e690,L"RangedAttack_Still",1);
  FUN_1446f470e(&DAT_14cb7e698,L"ai_target_radius",1);
  FUN_1446f470e(&DAT_14cb7e6a0,L"TrajectoryOptions",1);
  FUN_1446f470e(&DAT_14cb7e6a8,L"Trick",1);
  _DAT_14cb7e6b8 = &LAB_143d636c7;
  _DAT_14cb7e6c0 = 0x440dc000;
  DAT_14cb7e6c4 = 1;
  DAT_14cb7e6b0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7e6b0;
  atexit((_func_5014 *)&LAB_143d636cc);
  DAT_14cb7e730 = (undefined8 *)0x0;
  _DAT_14cb7e738 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x400,0);
  lVar6 = 0xf;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 8;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  *puVar5 = DAT_14cb7e730;
  _DAT_14cb7e738 = _DAT_14cb7e738 + 0x10;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143d64216;
  local_a8 = &DAT_14011fc1e;
  DAT_14cb7e730 = puVar4;
  FUN_1460eca10();
  atexit((_func_5014 *)&LAB_143d637c0);
  DAT_14cb7ed28 = 0;
  _DAT_14cb7e7c8 = &LAB_143d640fc;
  DAT_14cb7e7d0 = 0x20;
  if (DAT_14c9aad88 == '\x01') {
    DAT_14c9aa910 = 8;
    DAT_14c9aa9a8 = &LAB_14887d6b0;
    _DAT_14c9aa9d0 = &DAT_143d641fe;
    _DAT_14c9aa9b0 = &LAB_14887d6b8;
    _DAT_14c9aa9b8 = &LAB_143d64200;
    _DAT_14c9aa9c0 = &LAB_14887d6c0;
    _DAT_14c9aa9c8 = &LAB_14887d6c8;
    _DAT_14c9aa930 = FUN_1461ff4ac;
    _DAT_14c9aa928 = &LAB_14887d6aa;
    _DAT_14c9aa918 = 0x3f8000003ef0a3d7;
    uRam000000014c9aa920 = 0x3f8000003e23d70a;
    DAT_14c9aa9a0 = 1;
    _DAT_14c9aa9d8 = FUN_143d641aa;
    _DAT_14c9aa9e0 = &LAB_143d641c6;
    _DAT_14c9aaa20 = &LAB_143d641e7;
  }
  else {
    _DAT_14cb7e7c0 = DAT_14c9a84f8;
    DAT_14c9a84f8 = &DAT_14cb7e7c0;
  }
  DAT_14cb7e838 = (undefined8 *)0x0;
  _DAT_14cb7e840 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x680,0);
  lVar6 = 0xf;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0xd;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  DAT_14cb7e840 = DAT_14cb7e840 + 0x10;
  *puVar5 = DAT_14cb7e838;
  DAT_14cb7e838 = puVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143d6421c;
  local_a8 = &DAT_14011fc1e;
  FUN_146182b0a();
  atexit((_func_5014 *)&LAB_143d6381a);
  FUN_140056680(&DAT_14cb7e8d0,L"FaceFXAnimSet_");
  atexit((_func_5014 *)&LAB_143d6381f);
  FUN_140056680(&DAT_14cb7e8e0,L"Preload_");
  atexit((_func_5014 *)&LAB_143d63830);
  ram0x00014cb7e8f4 = 0;
  FUN_14052b5e0(&DAT_14cb7e8f0,"VoicePitchOffset",0);
  _DAT_14cb7e900 = "VoicePitchOffset";
  DAT_14cb7e968 = (undefined8 *)0x0;
  _DAT_14cb7e970 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x200,0);
  lVar6 = 0xf;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 4;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  DAT_14cb7e970 = DAT_14cb7e970 + 0x10;
  *puVar5 = DAT_14cb7e968;
  DAT_14cb7e968 = puVar4;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143d64222;
  local_a8 = &DAT_14011fc1e;
  FUN_146183206(&local_a8);
  atexit((_func_5014 *)&LAB_143d6386a);
  _DAT_14cb7ea08 = &LAB_143d6386f;
  _DAT_14cb7ea10 = 0x43af8000;
  DAT_14cb7ea14 = 1;
  DAT_14cb7ea00 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7ea00;
  atexit((_func_5014 *)&LAB_143d63874);
  DAT_14cb7ea50 = 0;
  _DAT_14cb7ea58 = 0x600000000;
  atexit((_func_5014 *)&LAB_143d638a8);
  _DAT_14cb7ea60 = 0;
  uRam000000014cb7ea68 = 0;
  _DAT_14cb7ea70 = 0;
  DAT_14cb7ea78 = 0;
  uRam000000014cb7ea80 = 0;
  FUN_1446ddda2(&DAT_14cb7ea60,&DAT_149e54500,0);
  atexit((_func_5014 *)&LAB_143d638b9);
  _DAT_14cb7ea88 = 0;
  uRam000000014cb7ea90 = 0;
  _DAT_14cb7ea98 = 0;
  DAT_14cb7eaa0 = 0;
  uRam000000014cb7eaa8 = 0;
  FUN_1446ddda2(&DAT_14cb7ea88,"Value",0);
  atexit((_func_5014 *)&LAB_143d638ca);
  DAT_14cb7eb10 = 0;
  _DAT_14cb7eb18 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143d64228;
  local_a8 = &DAT_14011fc1e;
  FUN_146183902(&local_a8);
  atexit((_func_5014 *)&LAB_143d63904);
  _DAT_14cb7eba4 = 0;
  FUN_14052b5e0(&DAT_14cb7eba0,&DAT_14acb8ec8,0);
  _DAT_14cb7ebb0 = &DAT_14acb8ec8;
  DAT_14cb7ec18 = 0;
  _DAT_14cb7ec20 = 0;
  local_98 = 0;
  local_88 = &PTR_LAB_14a1795c0;
  local_80 = &LAB_143d6422e;
  local_a8 = &DAT_14011fc1e;
  FUN_146183ffe(&local_a8);
  atexit((_func_5014 *)&LAB_143d639e8);
  ram0x00014cb7ecb4 = 0;
  FUN_14052b5e0(&DAT_14cb7ecb0,"DialogStyle_Default",0);
  _DAT_14cb7ecc0 = "DialogStyle_Default";
  FUN_1446f470e(&DAT_14cb7ecc8,L"TimeOfDayBlueprintEvents",1);
  FUN_1446f470e(&DAT_14cb7ecd0,L"TimeOfDayStateEvents",1);
  FUN_1446f470e(&DAT_14cb7ecd8,L"TimeOfDayCloudscapeEvents",1);
  FUN_1446f470e(&DAT_14cb7ece0,L"TimeOfDayForecastEvents",1);
  FUN_1446f470e(&DAT_14cb7ece8,L"DialogComponent_BodyDialog",1);
  FUN_1446f470e(&DAT_14cb7ecf0,L"DialogNameTag",1);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d65930 FUN_143d65930 body=178 status=ok
// SIG undefined FUN_143d65930(void)

ulonglong FUN_143d65930(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar4 = (longlong *)FUN_1409fe326(param_3);
  bVar3 = 0;
  if (plVar4 == (longlong *)0x0) goto LAB_143d659ca;
  lVar6 = param_1[1];
  if (lVar6 == 0) {
    uVar5 = FUN_1409ff8bc();
    lVar6 = FUN_14477b664(uVar5);
    param_1[1] = lVar6;
  }
  lVar7 = param_1[2];
  if (((lVar7 == 0) && (lVar7 = 0, lVar6 != 0)) && (*param_1 != 0)) {
    plVar1 = *(longlong **)(lVar6 + 0xb8);
    if (plVar1 == (longlong *)0x0) {
LAB_143d659de:
      lVar7 = 0;
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 == '\0') goto LAB_143d659de;
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      lVar7 = FUN_144aff482(uVar5,param_1);
    }
    param_1[2] = lVar7;
  }
  param_3 = plVar4;
  bVar3 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar7,param_2,0);
LAB_143d659ca:
  return CONCAT71((int7)((ulonglong)param_3 >> 8),plVar4 != (longlong *)0x0 & bVar3) & 0xffffffff;
}



// FUNCTION 143d659e2 FUN_143d659e2 body=376 status=ok
// SIG undefined FUN_143d659e2(void)

void FUN_143d659e2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    return;
  }
  if (((*(byte *)(*(longlong *)(param_1 + 0xa8) + 99) & 8) != 0) &&
     (iVar3 = FUN_14487fd02(), iVar3 == 3)) {
    return;
  }
  lVar7 = *(longlong *)(param_1 + 0x138);
  if (lVar7 == 0) {
    uVar6 = FUN_14043db3a();
    lVar7 = FUN_14477b664(uVar6);
    *(longlong *)(param_1 + 0x138) = lVar7;
  }
  if (*(longlong *)(param_1 + 0x140) == 0) {
    if ((lVar7 != 0) && (*(longlong *)(param_1 + 0x130) != 0)) {
      plVar1 = *(longlong **)(lVar7 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar7 = FUN_144aff482(uVar6,(longlong *)(param_1 + 0x130));
        *(longlong *)(param_1 + 0x140) = lVar7;
        if (lVar7 != 0) goto LAB_143d65b3b;
      }
    }
    iVar3 = *(int *)(param_1 + 0x128);
    if (0 < iVar3) {
      uVar4 = rand();
      iVar5 = (int)((float)iVar3 * ((float)(uVar4 & 0x7fff) / 32767.0));
      iVar8 = iVar3 + -1;
      if (iVar5 < iVar3 + -1) {
        iVar8 = iVar5;
      }
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar8 * 0x18);
      lVar7 = *plVar1;
      if (*(longlong *)(param_1 + 0x130) != lVar7) {
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      *(longlong *)(param_1 + 0x130) = lVar7;
      if (*(longlong *)(param_1 + 0x138) != plVar1[1]) {
        *(undefined8 *)(param_1 + 0x140) = 0;
      }
      uVar6 = FUN_14477b664();
      uVar6 = FUN_14477b664(uVar6);
      *(undefined8 *)(param_1 + 0x138) = uVar6;
      *(longlong *)(param_1 + 0x140) = plVar1[2];
    }
  }
LAB_143d65b3b:
  FUN_140eb4f72(param_1);
  return;
}



// FUNCTION 143d65b7c FUN_143d65b7c body=151 status=ok
// SIG undefined FUN_143d65b7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_143d65b7c(longlong param_1)

{
  short sVar1;
  undefined *puVar2;
  
  sVar1 = *(short *)(param_1 + 0x22);
  if ((sVar1 < 0) || (*(int *)(DAT_14cb7f870 + 0x408) <= (int)sVar1)) {
    puVar2 = &DAT_14cb7ede8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7ee00) {
      FUN_144b3d300(&DAT_14cb7ee00);
      if (DAT_14cb7ee00 == -1) {
        _DAT_14cb7ede8 = 0;
        uRam000000014cb7edf0 = 0;
        _DAT_14cb7edf8 = 0;
        _Init_thread_footer(&DAT_14cb7ee00);
      }
    }
  }
  else {
    puVar2 = (undefined *)((longlong)(int)sVar1 * 0x18 + *(longlong *)(DAT_14cb7f870 + 0x400));
  }
  return puVar2;
}



// FUNCTION 143d65c14 FUN_143d65c14 body=144 status=ok
// SIG undefined FUN_143d65c14(void)

void FUN_143d65c14(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x150);
  if (lVar4 == 0) {
    uVar3 = FUN_14043db3a();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x150) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x148) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x148));
    }
    *(undefined8 *)(param_1 + 0x158) = uVar3;
    return;
  }
  return;
}



// FUNCTION 143d65ca4 FUN_143d65ca4 body=258 status=ok
// SIG undefined FUN_143d65ca4(void)

undefined8 FUN_143d65ca4(char *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  cVar2 = *param_1;
  if (cVar2 != '\x04') {
    fVar6 = 0.0;
    uVar7 = 0;
    if (cVar2 == '\x03') {
      if ((((*(longlong **)(param_1 + 0x18) != (longlong *)0x0) && (*(int *)(param_1 + 0x14) != 0))
          && (uVar1 = *(uint *)(param_1 + 0x10), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
      {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0x14))) &&
           ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
          lVar4 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))();
          if (lVar4 != 0) {
            lVar3 = FUN_14494f566(param_1 + 0x20);
            if (lVar3 != 0) {
              cVar2 = FUN_141889902(lVar4 + 0x98,param_1 + 0x20);
              if (cVar2 != '\0') {
                if (*(int *)(lVar4 + 0x68) != 0) {
                  lVar3 = FUN_14494f566(lVar4 + 0x98);
                  if (lVar3 != 0) {
                    uVar5 = FUN_140c03056(lVar4);
                    uVar7 = (undefined4)((ulonglong)uVar5 >> 0x20);
                    fVar6 = (float)uVar5 - *(float *)(lVar4 + 0xc4);
                  }
                }
                goto LAB_143d65cca;
              }
            }
          }
        }
      }
    }
    else if (cVar2 != '\x01') {
LAB_143d65cca:
      return CONCAT44(uVar7,fVar6);
    }
  }
  uVar5 = FUN_14031803c(param_1);
  return uVar5;
}



// FUNCTION 143d65da6 FUN_143d65da6 body=2927 status=ok
// SIG undefined FUN_143d65da6(void)

uint FUN_143d65da6(longlong *param_1,uint *param_2,undefined8 *param_3,float *param_4,int *param_5,
                  undefined8 *param_6)

{
  undefined4 *puVar1;
  float fVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  uint uVar14;
  int *piVar15;
  longlong *plVar16;
  longlong lVar17;
  int *piVar18;
  uint uVar19;
  float *pfVar20;
  int iVar21;
  longlong lVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  undefined1 auStack_1d8 [32];
  undefined8 *local_1b8;
  longlong local_1a8;
  undefined8 local_1a0;
  int local_198;
  undefined8 local_190;
  int local_188;
  undefined4 local_178;
  uint uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [16];
  ulonglong local_f0;
  undefined8 local_e4;
  int local_dc;
  undefined8 local_d8;
  undefined1 local_d0;
  int local_cc;
  float local_c0;
  undefined1 local_b8;
  byte local_b7;
  undefined1 local_b6;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar19 = 0;
  uVar14 = 0;
  if ((((((*(int *)((longlong)param_1 + 0x24c) == 0) ||
         (uVar7 = *(uint *)(param_1 + 0x49), (int)uVar7 < 0)) || (DAT_14c9647dc <= (int)uVar7)) ||
       ((plVar16 = (longlong *)
                   ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)), uVar19 = uVar14,
        plVar16 == (longlong *)0x0 || ((int)plVar16[2] != *(int *)((longlong)param_1 + 0x24c))))) ||
      (((((*(uint *)(plVar16 + 1) & 0x10200000) != 0 ||
         ((lVar13 = *plVar16, lVar13 == 0 || (*(longlong *)(param_2 + 2) == 0)))) ||
        (param_2[1] == 0)) ||
       (((uVar14 = *param_2, (int)uVar14 < 0 || (DAT_14c9647dc <= (int)uVar14)) ||
        (lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar11 == 0))))))
     || (((*(uint *)(lVar11 + 0x10) != param_2[1] || ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) ||
         (lVar11 = FUN_14494f566(param_3), lVar11 == 0)))) goto LAB_143d65e80;
  bVar4 = 1;
  if (*(char *)((longlong)param_4 + 0x42) == '\0') {
    bVar4 = FUN_140899648(param_3);
  }
  iVar6 = FUN_14490d72a(lVar13);
  if ((bVar4 == 0) && (iVar6 == 3)) goto LAB_143d65e80;
  local_1a8 = (**(code **)(**(longlong **)(param_2 + 2) + 0x10))();
  memset(&local_178,0,0x118);
  DAT_14cb7ee10 = (bVar4 ^ 3) + (DAT_14cb7ee10 & 0xfffffffe);
  uStack_174 = DAT_14cb7ee10;
  local_80 = param_1;
  local_cc = rand();
  local_168 = *param_2;
  uStack_164 = param_2[1];
  uStack_160 = param_2[2];
  uStack_15c = param_2[3];
  local_158 = *param_3;
  uVar8 = FUN_14477b664(param_3[1]);
  local_150 = FUN_14477b664(uVar8);
  local_148 = param_3[2];
  local_140 = param_3[3];
  uStack_138 = param_3[4];
  local_178 = CONCAT31(local_178._1_3_,1);
  local_dc = param_5[2];
  local_e4 = *(undefined8 *)param_5;
  uVar24 = 0;
  uVar25 = 0;
  if (((*(int *)((longlong)param_1 + 0x24c) != 0) &&
      (((uVar19 = *(uint *)(param_1 + 0x49), -1 < (int)uVar19 && ((int)uVar19 < DAT_14c9647dc)) &&
       (plVar16 = (longlong *)
                  ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8)),
       plVar16 != (longlong *)0x0)))) &&
     ((((int)plVar16[2] == *(int *)((longlong)param_1 + 0x24c) &&
       ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) && (*plVar16 != 0)))) {
    uVar8 = *(undefined8 *)(*plVar16 + 0x6e8);
    uVar24 = (undefined4)uVar8;
    uVar25 = (undefined4)((ulonglong)uVar8 >> 0x20);
  }
  local_d8 = CONCAT44(uVar25,uVar24);
  lVar13 = *(longlong *)(param_4 + 10);
  local_78 = lVar13;
  uVar8 = FUN_14477b664(*(undefined8 *)(param_4 + 0xc));
  local_70 = FUN_14477b664(uVar8);
  lVar11 = *(longlong *)(param_4 + 0xe);
  local_68 = lVar11;
  if (local_70 == 0) {
    uVar8 = FUN_14065b502();
    local_70 = FUN_14477b664(uVar8);
  }
  if (lVar11 == 0) {
    if ((lVar13 != 0) && (local_70 != 0)) {
      plVar16 = *(longlong **)(local_70 + 0xb8);
      if ((plVar16 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar16 + 0x108))(plVar16), cVar5 == '\0')) {
        local_68 = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar16 + 0x110))(plVar16);
        lVar11 = FUN_144aff482(uVar8,&local_78);
        local_68 = lVar11;
        if (lVar11 != 0) goto LAB_143d66046;
      }
    }
    lVar11 = FUN_140317ef6(&local_158);
    if (lVar11 == 0) {
      lVar11 = FUN_14575395a();
    }
  }
LAB_143d66046:
  local_b8 = 1;
  if (*(char *)((longlong)param_4 + 0x41) == '\0') {
    if (lVar11 == 0) {
      local_b8 = 0;
    }
    else {
      local_b8 = *(undefined1 *)(lVar11 + 0x2e);
    }
  }
  local_b6 = *(undefined1 *)(param_4 + 0x10);
  local_d0 = 1;
  local_b7 = bVar4;
  if ((*param_5 != 0) && (cVar5 = FUN_140317ca6(param_5 + 1,0), cVar5 == '\0')) {
    local_188 = param_5[2];
    local_190 = *(undefined8 *)param_5;
    if ((longlong)(int)param_1[1] != 0) {
      lVar11 = *param_1 + 0x98;
      lVar13 = (longlong)(int)param_1[1] * 0x118;
      do {
        if ((*(int *)(lVar11 + -4) == (int)local_190) &&
           (cVar5 = FUN_140317cec(lVar11,(longlong)&local_190 + 4), cVar5 != '\0')) {
          if (lVar11 != 0x98) {
            local_d0 = 0;
            goto LAB_143d6617d;
          }
          break;
        }
        lVar11 = lVar11 + 0x118;
        lVar13 = lVar13 + -0x118;
      } while (lVar13 != 0);
    }
    local_188 = param_5[2];
    local_190 = *(undefined8 *)param_5;
    if ((longlong)(int)param_1[0x47] == 0) {
      local_d0 = 1;
    }
    else {
      lVar22 = param_1[0x46] + 8;
      lVar13 = (longlong)(int)param_1[0x47] * 0x28;
      lVar11 = 0;
      do {
        if (((*(int *)(lVar22 + -4) == (int)local_190) &&
            (cVar5 = FUN_140317cec(lVar22,(longlong)&local_190 + 4), cVar5 != '\0')) &&
           (*(char *)(lVar22 + 8) == '\x06')) {
          lVar11 = lVar22 + -8;
          break;
        }
        lVar22 = lVar22 + 0x28;
        lVar13 = lVar13 + -0x28;
      } while (lVar13 != 0);
      local_d0 = lVar11 == 0;
    }
  }
LAB_143d6617d:
  local_c0 = *param_4;
  lVar13 = *(longlong *)(param_4 + 8);
  if ((lVar13 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar13);
LAB_143d661b4:
    uVar19 = *(uint *)(lVar13 + 0xc);
    if ((int)uVar19 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar10 = (ulonglong)*(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar14 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar14);
      }
      LOCK();
      uVar7 = *(uint *)(lVar13 + 0x10);
      bVar23 = uVar7 == 0;
      if (bVar23) {
        *(uint *)(lVar13 + 0x10) = uVar14;
        uVar7 = 0;
      }
      UNLOCK();
      if (bVar23) {
        uVar7 = uVar14;
      }
      uVar10 = (ulonglong)uVar7;
    }
  }
  else {
    if (lVar13 != 0) goto LAB_143d661b4;
    uVar19 = 0;
    uVar10 = 0;
  }
  local_f0 = (ulonglong)uVar19 | uVar10 << 0x20;
  pcVar3 = (code *)*param_6;
  if (pcVar3 != (code *)0x0) {
    plVar16 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar16 = (longlong *)param_6[2];
    }
    uVar8 = (**(code **)(*plVar16 + 8))(plVar16);
    (*pcVar3)(uVar8,&local_178);
  }
  if ((*param_5 != 0) && (cVar5 = FUN_140317ca6(param_5 + 1,0), cVar5 == '\0')) {
    lVar13 = param_1[0x48];
    if ((((lVar13 != 0) &&
         ((*(longlong *)(local_1a8 + 0x180) != 0 && (*(int *)(local_1a8 + 0x17c) != 0)))) &&
        (uVar19 = *(uint *)(local_1a8 + 0x178), -1 < (int)uVar19)) &&
       (((((int)uVar19 < DAT_14c9647dc &&
          (lVar11 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8), lVar11 != 0)) &&
         (*(int *)(lVar11 + 0x10) == *(int *)(local_1a8 + 0x17c))) &&
        (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 && (*(int *)(local_1a8 + 0x18c) == 0)))))) {
      FUN_1403196a4(local_1a8,&local_190);
      uVar8 = (**(code **)(**(longlong **)(param_2 + 2) + 0x18))();
      local_1a0 = *(undefined8 *)param_5;
      local_198 = param_5[2];
      local_1b8 = &local_190;
      FUN_1403199c4(lVar13,&local_1a0,0,uVar8);
    }
    local_188 = param_5[2];
    local_190 = *(undefined8 *)param_5;
    lVar13 = *param_1;
    iVar6 = (int)param_1[1];
    iVar21 = 0;
    lVar11 = lVar13;
    lVar22 = lVar13;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      if (*(int *)(lVar13 + 0x94) == (int)local_190) {
        cVar5 = FUN_140317cec(lVar13 + 0x98,(longlong)&local_190 + 4);
        lVar11 = *param_1;
        iVar6 = (int)param_1[1];
        if (cVar5 != '\0') goto LAB_143d663aa;
      }
      lVar17 = (longlong)iVar6 * 0x118 + lVar11;
      if ((lVar17 != lVar13) && (lVar22 = lVar13 + 0x118, lVar13 + 0x118 != lVar17)) {
        lVar13 = lVar13 + 0x1b0;
        do {
          lVar22 = lVar13;
          if ((*(int *)(lVar22 + -4) == (int)local_190) &&
             (cVar5 = FUN_140317cec(lVar22,(longlong)&local_190 + 4), cVar5 != '\0')) {
            lVar22 = lVar22 + -0x98;
            goto LAB_143d663a4;
          }
          lVar13 = lVar22 + 0x118;
        } while (lVar22 + 0x80 != lVar17);
        lVar22 = lVar22 + 0x80;
LAB_143d663a4:
        iVar6 = (int)param_1[1];
        lVar11 = *param_1;
      }
    }
LAB_143d663aa:
    lVar11 = (longlong)iVar6 * 0x118 + lVar11;
    if (lVar22 == lVar11) {
LAB_143d6645b:
      piVar9 = (int *)param_1[0x46];
      iVar6 = (int)param_1[0x47];
      piVar12 = piVar9;
      piVar15 = piVar9;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        if (piVar9[1] == (int)local_190) {
          cVar5 = FUN_140317cec(piVar9 + 2,(longlong)&local_190 + 4);
          piVar12 = (int *)param_1[0x46];
          iVar6 = (int)param_1[0x47];
          if (cVar5 != '\0') goto LAB_143d6652d;
        }
        piVar18 = piVar12 + (longlong)iVar6 * 10;
        if ((piVar18 != piVar9) && (piVar15 = piVar9 + 10, piVar9 + 10 != piVar18)) {
          piVar9 = piVar9 + 0xc;
          do {
            piVar15 = piVar9;
            if ((piVar15[-1] == (int)local_190) &&
               (cVar5 = FUN_140317cec(piVar15,(longlong)&local_190 + 4), cVar5 != '\0')) {
              piVar15 = piVar15 + -2;
              goto LAB_143d66509;
            }
            piVar9 = piVar15 + 10;
          } while (piVar15 + 8 != piVar18);
          piVar15 = piVar15 + 8;
LAB_143d66509:
          iVar6 = (int)param_1[0x47];
          piVar12 = (int *)param_1[0x46];
        }
      }
LAB_143d6652d:
      fVar26 = 0.0;
      if (piVar15 != piVar12 + (longlong)iVar6 * 10) {
        pfVar20 = (float *)0x0;
        do {
          if (iVar21 < *piVar15) {
            iVar21 = *piVar15;
            pfVar20 = (float *)(piVar15 + 8);
          }
          piVar18 = (int *)((longlong)(int)param_1[0x47] * 0x28 + param_1[0x46]);
          piVar9 = piVar15;
          if ((piVar18 != piVar15) && (piVar9 = piVar15 + 10, piVar15 + 10 != piVar18)) {
            piVar15 = piVar15 + 0xc;
            do {
              piVar9 = piVar15;
              if ((piVar9[-1] == (int)local_190) &&
                 (cVar5 = FUN_140317cec(piVar9,(longlong)&local_190 + 4), cVar5 != '\0')) {
                piVar9 = piVar9 + -2;
                goto LAB_143d665bf;
              }
              piVar15 = piVar9 + 10;
            } while (piVar9 + 8 != piVar18);
            piVar9 = piVar9 + 8;
          }
LAB_143d665bf:
          piVar15 = piVar9;
        } while (piVar9 != piVar12 + (longlong)iVar6 * 10);
        if (pfVar20 != (float *)0x0) goto LAB_143d665cc;
      }
    }
    else {
      iVar21 = 0;
      pfVar20 = (float *)0x0;
      do {
        if (iVar21 < *(int *)(lVar22 + 4)) {
          iVar21 = *(int *)(lVar22 + 4);
          pfVar20 = (float *)(lVar22 + 0xe8);
        }
        lVar17 = (longlong)(int)param_1[1] * 0x118 + *param_1;
        lVar13 = lVar22;
        if ((lVar17 != lVar22) && (lVar13 = lVar22 + 0x118, lVar22 + 0x118 != lVar17)) {
          lVar22 = lVar22 + 0x1b0;
          do {
            lVar13 = lVar22;
            if ((*(int *)(lVar13 + -4) == (int)local_190) &&
               (cVar5 = FUN_140317cec(lVar13,(longlong)&local_190 + 4), cVar5 != '\0')) {
              lVar13 = lVar13 + -0x98;
              goto LAB_143d66446;
            }
            lVar22 = lVar13 + 0x118;
          } while (lVar13 + 0x80 != lVar17);
          lVar13 = lVar13 + 0x80;
        }
LAB_143d66446:
        lVar22 = lVar13;
      } while (lVar13 != lVar11);
      if (pfVar20 == (float *)0x0) goto LAB_143d6645b;
LAB_143d665cc:
      fVar2 = *pfVar20;
      fVar26 = 0.0;
      if (0.0 < fVar2) {
        *pfVar20 = 0.0;
        fVar26 = fVar2;
      }
    }
    if (local_c0 <= fVar26) {
      local_c0 = fVar26;
    }
  }
  uVar14 = 0;
  uVar19 = 0;
  if ((((CONCAT44(uStack_15c,uStack_160) != 0) && (uVar19 = uVar14, uStack_164 != 0)) &&
      (-1 < (int)local_168)) &&
     ((((int)local_168 < DAT_14c9647dc &&
       (lVar13 = (ulonglong)((local_168 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_168 >> 0x10) * 8), lVar13 != 0)) &&
      ((*(uint *)(lVar13 + 0x10) == uStack_164 &&
       (((*(uint *)(lVar13 + 8) & 0x10200000) == 0 &&
        (cVar5 = FUN_14065aa60(&local_178), cVar5 != '\0')))))))) {
    iVar6 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
      FUN_14065bf12(param_1,iVar6);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x118);
    puVar1[4] = local_168;
    puVar1[5] = uStack_164;
    puVar1[6] = uStack_160;
    puVar1[7] = uStack_15c;
    *puVar1 = local_178;
    puVar1[1] = uStack_174;
    puVar1[2] = uStack_170;
    puVar1[3] = uStack_16c;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 10) = 0;
    *(undefined8 *)(puVar1 + 0xc) = 0;
    *(undefined8 *)(puVar1 + 8) = local_158;
    uVar8 = FUN_14477b664(local_150);
    uVar8 = FUN_14477b664(uVar8);
    *(undefined8 *)(puVar1 + 10) = uVar8;
    *(undefined8 *)(puVar1 + 0xc) = local_148;
    puVar1[0xe] = (undefined4)local_140;
    puVar1[0xf] = local_140._4_4_;
    puVar1[0x10] = (undefined4)uStack_138;
    puVar1[0x11] = uStack_138._4_4_;
    *(undefined8 *)(puVar1 + 0x16) = 0;
    *(undefined8 *)(puVar1 + 0x12) = 0;
    *(undefined8 *)(puVar1 + 0x14) = 0;
    *(undefined8 *)(puVar1 + 0x12) = local_130;
    uVar8 = FUN_14477b664(local_128);
    uVar8 = FUN_14477b664(uVar8);
    *(undefined8 *)(puVar1 + 0x14) = uVar8;
    *(undefined8 *)(puVar1 + 0x16) = local_120;
    *(undefined8 *)(puVar1 + 0x1c) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x1a) = 0;
    *(undefined8 *)(puVar1 + 0x18) = local_118;
    uVar8 = FUN_14477b664(local_110);
    uVar8 = FUN_14477b664(uVar8);
    *(undefined8 *)(puVar1 + 0x1a) = uVar8;
    *(undefined8 *)(puVar1 + 0x1c) = local_108;
    memcpy(puVar1 + 0x1e,local_100,0x88);
    *(undefined8 *)(puVar1 + 0x40) = 0;
    *(undefined8 *)(puVar1 + 0x42) = 0;
    *(undefined8 *)(puVar1 + 0x44) = 0;
    *(longlong *)(puVar1 + 0x40) = local_78;
    uVar8 = FUN_14477b664(local_70);
    uVar8 = FUN_14477b664(uVar8);
    *(undefined8 *)(puVar1 + 0x42) = uVar8;
    *(longlong *)(puVar1 + 0x44) = local_68;
    uVar19 = uStack_174;
  }
LAB_143d65e80:
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return uVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d66916 FUN_143d66916 body=58 status=ok
// SIG undefined FUN_143d66916(void)

void FUN_143d66916(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = *param_1;
    lVar2 = (longlong)(int)param_1[1] * 0x118;
    do {
      FUN_1411a2fd8(lVar1,0);
      lVar1 = lVar1 + 0x118;
      lVar2 = lVar2 + -0x118;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 143d66950 FUN_143d66950 body=58 status=ok
// SIG undefined FUN_143d66950(void)

void FUN_143d66950(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && ((longlong)(int)param_1[1] != 0)) {
    lVar2 = *param_1;
    lVar1 = (longlong)(int)param_1[1] * 0x118;
    do {
      if (*(int *)(lVar2 + 4) == param_2) {
        if (lVar2 == 0) {
          return;
        }
        FUN_1411a2fd8(lVar2,0);
        return;
      }
      lVar2 = lVar2 + 0x118;
      lVar1 = lVar1 + -0x118;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 143d6698a FUN_143d6698a body=517 status=ok
// SIG undefined FUN_143d6698a(void)

ulonglong FUN_143d6698a(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if ((param_2 != 0) && (lVar5 = (longlong)*(int *)(param_1 + 1), lVar5 != 0)) {
    pcVar6 = (char *)*param_1;
    lVar9 = lVar5 * 0x118;
    pcVar8 = pcVar6;
    do {
      if (*(int *)(pcVar8 + 4) == param_2) {
        if (((pcVar8 != (char *)0x0) && (*(longlong *)(pcVar8 + 0x18) != 0)) &&
           (*(int *)(pcVar8 + 0x14) != 0)) {
          uVar1 = *(uint *)(pcVar8 + 0x10);
          uVar7 = 0;
          if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_143d66abf;
          lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          if (((lVar9 != 0) &&
              ((*(int *)(lVar9 + 0x10) == *(int *)(pcVar8 + 0x14) &&
               ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) && (pcVar8[0xc2] == '\x01')) {
            lVar5 = lVar5 * 0x118;
            goto LAB_143d66a53;
          }
        }
        break;
      }
      pcVar8 = pcVar8 + 0x118;
      lVar9 = lVar9 + -0x118;
    } while (lVar9 != 0);
  }
  goto LAB_143d66abd;
  while( true ) {
    pcVar6 = pcVar6 + 0x118;
    lVar5 = lVar5 + -0x118;
    if (lVar5 == 0) break;
LAB_143d66a53:
    if ((*(longlong *)(pcVar8 + 0x18) == *(longlong *)(pcVar6 + 0x18)) && (*pcVar6 == '\x03')) {
      if (pcVar6 != (char *)0x0) {
        FUN_1411a2fd8(pcVar6,1);
      }
      break;
    }
  }
  cVar4 = FUN_140319d82(pcVar8);
  if (cVar4 != '\0') {
    FUN_14065a5e4(pcVar8);
  }
  if ((*pcVar8 == '\x03') &&
     (lVar5 = (**(code **)(**(longlong **)(pcVar8 + 0x18) + 0x10))(), lVar5 != 0)) {
    FUN_14494f35a(lVar5,0);
    plVar2 = *(longlong **)(lVar5 + 0x78);
    if ((plVar2 != (longlong *)0x0) &&
       ((*(longlong *)(lVar5 + 0x80) != -1 && (*plVar2 == *(longlong *)(lVar5 + 0x80))))) {
      lVar9 = plVar2[0x21];
      *(int *)(plVar2 + 0x21) = (int)lVar9 + 1;
      if (*(longlong *)(lVar5 + 0x88) == 0) {
        uVar7 = 0;
      }
      else {
        plVar10 = plVar2 + 0x24;
        do {
          lVar3 = *plVar10;
          if (lVar3 == 0) break;
          plVar10 = (longlong *)(lVar3 + 0x30);
        } while (*(longlong *)(lVar5 + 0x88) != lVar3);
        uVar7 = CONCAT71((int7)((ulonglong)lVar5 >> 8),lVar3 != 0);
      }
      *(int *)(plVar2 + 0x21) = (int)lVar9;
      if (((int)plVar2[0x26] < 1) && (FUN_1400847bc(plVar2 + 0x17,0), (int)plVar2[0x21] == 0)) {
        FUN_140087e46(plVar2);
        if (*plVar2 != -1) {
          if (DAT_14cb259f8 == 0) goto LAB_143d66abf;
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
        }
      }
      goto LAB_143d66abf;
    }
  }
LAB_143d66abd:
  uVar7 = 0;
LAB_143d66abf:
  return uVar7 & 0xffffffff;
}



// FUNCTION 143d66ba0 FUN_143d66ba0 body=189 status=ok
// SIG undefined FUN_143d66ba0(void)

void FUN_143d66ba0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  if (param_2 != -1) {
    puVar6 = DAT_14cb7ee68;
    if (DAT_14cb7ee68 == (undefined4 *)0x0) {
      puVar6 = &DAT_14cb7ee18;
    }
    if ((longlong)(int)DAT_14cb7ee70 != 0) {
      lVar7 = 0;
      do {
        if (*(int *)((longlong)puVar6 + lVar7) == param_2) {
          return;
        }
        lVar7 = lVar7 + 4;
      } while ((longlong)(int)DAT_14cb7ee70 * 4 != lVar7);
    }
    lVar7 = *(longlong *)(param_1[1] + 0x220);
    puVar1 = (undefined8 *)*param_1;
    pcVar2 = (code *)*puVar1;
    plVar5 = puVar1 + 4;
    if ((longlong *)puVar1[2] != (longlong *)0x0) {
      plVar5 = (longlong *)puVar1[2];
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar2)(uVar4,(longlong)param_2 * 0x80 + lVar7);
    uVar3 = DAT_14cb7ee70;
    lVar7 = (longlong)(int)DAT_14cb7ee70;
    DAT_14cb7ee70 = DAT_14cb7ee70 + 1;
    if (DAT_14cb7ee74 < DAT_14cb7ee70) {
      FUN_14592516c(uVar3);
    }
    puVar6 = &DAT_14cb7ee18;
    if (DAT_14cb7ee68 != (undefined4 *)0x0) {
      puVar6 = DAT_14cb7ee68;
    }
    puVar6[lVar7] = param_2;
  }
  return;
}



// FUNCTION 143d66c5d FUN_143d66c5d body=49 status=ok
// SIG undefined FUN_143d66c5d(void)

void FUN_143d66c5d(void)

{
  FUN_1400e1c6c(DAT_14cb7ee80,DAT_14cb7ee88);
  if (DAT_14cb7ee80 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d66ca0 FUN_143d66ca0 body=4682 status=ok
// SIG undefined FUN_143d66ca0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d66ca0(longlong *param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  longlong *plVar4;
  code *pcVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined **ppuVar21;
  longlong *plVar22;
  longlong lVar23;
  float fVar24;
  undefined4 uVar25;
  undefined1 auStack_468 [32];
  longlong local_448;
  undefined8 local_440;
  undefined4 local_434;
  longlong *local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  longlong *local_410;
  undefined8 local_408;
  undefined8 local_400;
  longlong *local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  longlong local_3d8;
  longlong lStack_3d0;
  longlong lStack_3c8;
  longlong local_3b8;
  undefined1 local_3b0 [4];
  undefined8 local_3ac;
  undefined8 local_3a4;
  undefined1 local_398 [704];
  undefined1 *local_d8;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined2 uStack_c6;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8 [2];
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  byte local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_408 = param_3;
  local_400 = param_4;
  if (-1 < (int)param_2) {
    local_3f8 = (longlong *)(param_5 + 0x18);
    local_430 = param_1;
    while ((int)param_2 < (int)param_1[3]) {
      lVar23 = param_1[2];
      sVar2 = *(short *)(lVar23 + 10 + (ulonglong)param_2 * 0x10);
      if ((-1 < sVar2) && ((int)sVar2 < (int)param_1[5])) {
        FUN_143d67eec((longlong)(int)sVar2 * 0x18 + param_1[4],local_408,local_400,param_6);
      }
      lVar23 = lVar23 + (ulonglong)param_2 * 0x10;
      sVar2 = *(short *)(lVar23 + 2);
      if ((sVar2 < 0) || ((int)param_1[1] <= (int)sVar2)) break;
      lVar20 = *param_1 + (longlong)(int)sVar2 * 0x48;
      if (*(char *)(lVar20 + 0x41) == '\x01') {
        cVar7 = *(char *)(lVar20 + 0x42);
      }
      else {
        lVar12 = FUN_14049b1f6(lVar20);
        if (lVar12 == 0) {
          cVar7 = '\x02';
        }
        else {
          local_3ac = *(undefined8 *)(param_5 + 4);
          local_3b0[0] = 0;
          local_3a4 = 0;
          local_d8 = (undefined1 *)0x0;
          local_d0 = 0x800000000;
          if ((longlong)*(int *)(lVar20 + 0x30) != 0) {
            lVar12 = *(longlong *)(lVar20 + 0x28);
            local_3f0 = (longlong)*(int *)(lVar20 + 0x30) * 0x28 + lVar12;
            local_428 = lVar20;
            local_420 = lVar23;
            do {
              lVar15 = *(longlong *)(lVar12 + 0x10);
              if (lVar15 == 0) {
                uVar14 = FUN_140490c9a();
                lVar15 = FUN_14477b664(uVar14);
                *(longlong *)(lVar12 + 0x10) = lVar15;
              }
              plVar22 = (longlong *)(lVar12 + 8);
              lVar16 = *(longlong *)(lVar12 + 0x18);
              if (lVar16 == 0) {
                if ((lVar15 != 0) && (*plVar22 != 0)) {
                  plVar4 = *(longlong **)(lVar15 + 0xb8);
                  if ((plVar4 == (longlong *)0x0) ||
                     (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
                    *(undefined8 *)(lVar12 + 0x18) = 0;
                    param_1 = local_430;
                    lVar20 = local_428;
                    lVar23 = local_420;
                  }
                  else {
                    uVar14 = (**(code **)(*plVar4 + 0x110))(plVar4);
                    lVar16 = FUN_144aff482(uVar14,plVar22);
                    *(longlong *)(lVar12 + 0x18) = lVar16;
                    param_1 = local_430;
                    lVar20 = local_428;
                    lVar23 = local_420;
                    if (lVar16 != 0) goto LAB_143d66e2e;
                  }
                }
              }
              else {
LAB_143d66e2e:
                if (*(char *)(lVar12 + 0x20) == '\0') {
                  puVar13 = (undefined8 *)FUN_143d65b7c(lVar12);
                  uStack_c0 = 0;
                  uStack_bc = 0;
                  local_b8[0] = 0;
                  uVar14 = *puVar13;
                  local_c8 = (undefined1)uVar14;
                  uStack_c7 = (undefined1)((ulonglong)uVar14 >> 8);
                  uStack_c6 = (undefined2)((ulonglong)uVar14 >> 0x10);
                  uStack_c4 = (undefined4)((ulonglong)uVar14 >> 0x20);
                  uVar14 = FUN_14477b664(puVar13[1]);
                  lVar15 = FUN_14477b664(uVar14);
                  uStack_c0 = (undefined4)lVar15;
                  uStack_bc = (undefined4)((ulonglong)lVar15 >> 0x20);
                  local_b8[0] = puVar13[2];
                  if (local_b8[0] == 0) {
                    local_b8[0] = 0;
                    if ((((lVar15 != 0) &&
                         (CONCAT44(uStack_c4,CONCAT22(uStack_c6,CONCAT11(uStack_c7,local_c8))) != 0)
                         ) && (plVar4 = *(longlong **)(lVar15 + 0xb8), plVar4 != (longlong *)0x0))
                       && (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 != '\0')) {
                      uVar14 = (**(code **)(*plVar4 + 0x110))(plVar4);
                      local_b8[0] = FUN_144aff482(uVar14,&local_c8);
                      if (local_b8[0] != 0) {
                        lVar15 = CONCAT44(uStack_bc,uStack_c0);
                        goto LAB_143d66f0f;
                      }
                    }
                  }
                  else {
LAB_143d66f0f:
                    lVar16 = FUN_140490c9a();
                    if (lVar15 == lVar16) {
                      lStack_3d0 = 0;
                      lStack_3c8 = 0;
                      local_3d8 = CONCAT44(uStack_c4,
                                           CONCAT22(uStack_c6,CONCAT11(uStack_c7,local_c8)));
                      uVar14 = FUN_14477b664(CONCAT44(uStack_bc,uStack_c0));
                      lStack_3d0 = FUN_14477b664(uVar14);
                      lStack_3c8 = local_b8[0];
                      if (lStack_3d0 == 0) {
                        uVar14 = FUN_140490c9a();
                        lStack_3d0 = FUN_14477b664(uVar14);
                      }
                      local_418 = lVar12;
                      if (lStack_3c8 == 0) {
                        lStack_3c8 = 0;
                        param_1 = local_430;
                        lVar20 = local_428;
                        lVar23 = local_420;
                        if (((lStack_3d0 != 0) && (local_3d8 != 0)) &&
                           ((plVar4 = *(longlong **)(lStack_3d0 + 0xb8), plVar4 != (longlong *)0x0
                            && (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), param_1 = local_430,
                               lVar20 = local_428, lVar12 = local_418, lVar23 = local_420,
                               cVar7 != '\0')))) {
                          uVar14 = (**(code **)(*plVar4 + 0x110))(plVar4);
                          lStack_3c8 = FUN_144aff482(uVar14,&local_3d8);
                          param_1 = local_430;
                          lVar20 = local_428;
                          lVar12 = local_418;
                          lVar23 = local_420;
                          if (lStack_3c8 != 0) goto LAB_143d66f7c;
                        }
                      }
                      else {
LAB_143d66f7c:
                        lVar23 = local_418;
                        lVar20 = lStack_3c8;
                        if (lStack_3d0 == 0) {
                          uVar14 = FUN_140490c9a();
                          lStack_3d0 = FUN_14477b664(uVar14);
                          lVar20 = lStack_3c8;
                          if (lStack_3c8 == 0) {
                            if (lStack_3d0 == 0) {
                              lVar20 = 0;
                            }
                            else {
                              lVar20 = 0;
                              if (local_3d8 != 0) {
                                plVar4 = *(longlong **)(lStack_3d0 + 0xb8);
                                if ((plVar4 == (longlong *)0x0) ||
                                   (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0'))
                                {
                                  lVar20 = 0;
                                  lStack_3c8 = lVar20;
                                }
                                else {
                                  uVar14 = (**(code **)(*plVar4 + 0x110))(plVar4);
                                  lVar20 = FUN_144aff482(uVar14,&local_3d8);
                                  lStack_3c8 = lVar20;
                                }
                              }
                            }
                          }
                        }
                        cVar7 = *(char *)(lVar20 + 0x18);
                        lVar20 = *(longlong *)(lVar23 + 0x10);
                        if (lVar20 == 0) {
                          uVar14 = FUN_140490c9a();
                          lVar20 = FUN_14477b664(uVar14);
                          *(longlong *)(lVar23 + 0x10) = lVar20;
                        }
                        lVar15 = *(longlong *)(lVar23 + 0x18);
                        local_410 = plVar22;
                        if (lVar15 == 0) {
                          if (lVar20 == 0) {
                            lVar15 = 0;
                          }
                          else {
                            lVar15 = 0;
                            if (*plVar22 != 0) {
                              plVar22 = *(longlong **)(lVar20 + 0xb8);
                              if ((plVar22 == (longlong *)0x0) ||
                                 (cVar8 = (**(code **)(*plVar22 + 0x108))(), cVar8 == '\0')) {
                                lVar15 = 0;
                              }
                              else {
                                uVar14 = (**(code **)(*plVar22 + 0x110))(plVar22);
                                lVar15 = FUN_144aff482(uVar14,local_410);
                              }
                              *(longlong *)(local_418 + 0x18) = lVar15;
                            }
                          }
                        }
                        param_1 = local_430;
                        lVar20 = local_428;
                        lVar12 = local_418;
                        lVar23 = local_420;
                        if (cVar7 == *(char *)(lVar15 + 0x18)) {
                          local_3e8 = CONCAT44(uStack_c4,
                                               CONCAT22(uStack_c6,CONCAT11(uStack_c7,local_c8)));
                          uVar14 = FUN_14477b664(CONCAT44(uStack_bc,uStack_c0));
                          uVar14 = FUN_14477b664(uVar14);
                          uVar14 = FUN_14477b664(uVar14);
                          local_3e0 = FUN_14477b664(uVar14);
                          plVar22 = *(longlong **)(param_5 + 0x2d8);
                          if (*(longlong **)(param_5 + 0x2d8) == (longlong *)0x0) {
                            plVar22 = local_3f8;
                          }
                          param_1 = local_430;
                          lVar20 = local_428;
                          lVar12 = local_418;
                          lVar23 = local_420;
                          if ((longlong)*(int *)(param_5 + 0x2e0) != 0) {
                            lVar15 = (longlong)*(int *)(param_5 + 0x2e0) * 0x58;
                            do {
                              if (plVar22[1] == 0) {
                                uVar14 = FUN_140490c9a();
                                lVar23 = FUN_14477b664(uVar14);
                                plVar22[1] = lVar23;
                              }
                              lVar16 = local_3e0;
                              if ((local_3e0 == 0) && (lVar16 = FUN_140490c9a(), lVar16 == 0)) {
                                lVar16 = 0;
                                local_434 = 1;
LAB_143d67229:
                                iVar9 = 0;
                              }
                              else {
                                uVar17 = (ulonglong)*(uint *)(lVar16 + 8);
                                if ((*(uint *)(lVar16 + 8) & 0x809f600) != 0) {
LAB_143d67221:
                                  local_434 = (undefined4)CONCAT71((int7)(uVar17 >> 8),1);
                                  lVar16 = 0;
                                  goto LAB_143d67229;
                                }
                                if ((*(int *)(*(longlong *)
                                               ((longlong)ThreadLocalStoragePointer +
                                               (ulonglong)_tls_index * 8) + 0x110) < DAT_14c949388)
                                   && (FUN_144b3d300(&DAT_14c949388), DAT_14c949388 == -1)) {
                                  FUN_1446f470e(&local_3b8,L"GbxHasStructType",1);
                                  DAT_14c949380 = FUN_141473ad5(local_3b8);
                                  _Init_thread_footer(&DAT_14c949388);
                                }
                                uVar17 = DAT_14c949380;
                                if ((((DAT_14c949380 == 0) ||
                                     (*(int *)(lVar16 + 0x38) < *(int *)(DAT_14c949380 + 0x38))) ||
                                    (uVar17 = DAT_14c949380 + 0x30,
                                    *(ulonglong *)
                                     (*(longlong *)(lVar16 + 0x30) +
                                     (longlong)*(int *)(DAT_14c949380 + 0x38) * 8) != uVar17)) ||
                                   (plVar4 = *(longlong **)(lVar16 + 0xb8),
                                   plVar4 == (longlong *)0x0)) goto LAB_143d67221;
                                lVar23 = *plVar4;
                                pcVar5 = *(code **)(lVar23 + 0x108);
                                if (pcVar5 != (code *)&LAB_14478342e &&
                                    pcVar5 != (code *)&LAB_144783422) {
                                  uVar17 = (*pcVar5)(plVar4);
                                  if ((char)uVar17 == '\0') goto LAB_143d67221;
                                  lVar23 = *plVar4;
                                }
                                pcVar5 = *(code **)(lVar23 + 0x110);
                                if (pcVar5 != (code *)&LAB_144783432 &&
                                    pcVar5 != (code *)&LAB_144783426) {
                                  lVar23 = (*pcVar5)(plVar4);
                                  uVar17 = 0;
                                  if (lVar23 == 0) goto LAB_143d67221;
                                }
                                plVar4 = *(longlong **)(lVar16 + 0xb8);
                                if (plVar4 == (longlong *)0x0) {
LAB_143d67352:
                                  local_434 = 0;
                                  goto LAB_143d67229;
                                }
                                lVar23 = *plVar4;
                                pcVar5 = *(code **)(lVar23 + 0x108);
                                if (pcVar5 != (code *)&LAB_14478342e &&
                                    pcVar5 != (code *)&LAB_144783422) {
                                  cVar7 = (*pcVar5)(plVar4);
                                  if (cVar7 == '\0') goto LAB_143d67352;
                                  lVar23 = *plVar4;
                                }
                                pcVar5 = *(code **)(lVar23 + 0x110);
                                ppuVar21 = &PTR_PTR_14c763408;
                                if ((pcVar5 != (code *)&LAB_144783426) &&
                                   (ppuVar21 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)
                                   ) {
                                  ppuVar21 = (undefined **)(*pcVar5)(plVar4);
                                }
                                iVar9 = FUN_144aff48c(ppuVar21);
                                local_434 = 0;
                              }
                              lVar19 = *plVar22;
                              lVar6 = plVar22[1];
                              iVar10 = 0;
                              if ((lVar6 != 0) &&
                                 (plVar4 = *(longlong **)(lVar6 + 0xb8), iVar10 = 0,
                                 plVar4 != (longlong *)0x0)) {
                                lVar23 = *plVar4;
                                pcVar5 = *(code **)(lVar23 + 0x108);
                                if (pcVar5 != (code *)&LAB_14478342e &&
                                    pcVar5 != (code *)&LAB_144783422) {
                                  cVar7 = (*pcVar5)(plVar4);
                                  if (cVar7 == '\0') goto LAB_143d671dc;
                                  lVar23 = *plVar4;
                                }
                                pcVar5 = *(code **)(lVar23 + 0x110);
                                ppuVar21 = &PTR_PTR_14c763408;
                                if ((pcVar5 != (code *)&LAB_144783426) &&
                                   (ppuVar21 = &PTR_PTR_14c75f798, pcVar5 != (code *)&LAB_144783432)
                                   ) {
                                  ppuVar21 = (undefined **)(*pcVar5)(plVar4);
                                }
                                iVar10 = FUN_144aff48c(ppuVar21);
                              }
LAB_143d671dc:
                              lVar12 = local_418;
                              param_1 = local_430;
                              lVar20 = local_428;
                              lVar23 = local_420;
                              if ((iVar10 == iVar9) && (lVar19 == local_3e8)) {
                                if (lVar6 == lVar16) {
LAB_143d67394:
                                  if (plVar22 != (longlong *)0x0) {
                                    lVar23 = *(longlong *)(local_418 + 0x10);
                                    if (lVar23 == 0) {
                                      uVar14 = FUN_140490c9a();
                                      lVar23 = FUN_14477b664(uVar14);
                                      *(longlong *)(lVar12 + 0x10) = lVar23;
                                    }
                                    lVar20 = *(longlong *)(lVar12 + 0x18);
                                    if (lVar20 == 0) {
                                      if (lVar23 == 0) {
                                        lVar20 = 0;
                                      }
                                      else {
                                        lVar20 = 0;
                                        if (*local_410 != 0) {
                                          plVar4 = *(longlong **)(lVar23 + 0xb8);
                                          if ((plVar4 == (longlong *)0x0) ||
                                             (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4),
                                             cVar7 == '\0')) {
                                            lVar20 = 0;
                                          }
                                          else {
                                            uVar14 = (**(code **)(*plVar4 + 0x110))(plVar4);
                                            lVar20 = FUN_144aff482(uVar14,local_410);
                                          }
                                          *(longlong *)(local_418 + 0x18) = lVar20;
                                        }
                                      }
                                    }
                                    uVar14 = FUN_140490c9a();
                                    FUN_14477b664(uVar14);
                                    lVar15 = FUN_140490c9a();
                                    uVar14 = FUN_140490c9a();
                                    FUN_1402d1bfa(&local_3b8,uVar14,lVar20);
                                    lVar23 = local_3b8;
                                    lVar12 = FUN_140490c9a();
                                    if (lVar15 == 0) {
LAB_143d6741e:
                                      lVar12 = lVar15;
                                    }
                                    else if (lVar12 == 0) {
                                      lVar12 = 0;
                                    }
                                    else if ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar15 + 0x38)) &&
                                            (*(longlong *)
                                              (*(longlong *)(lVar15 + 0x30) +
                                              (longlong)*(int *)(lVar12 + 0x38) * 8) ==
                                             lVar12 + 0x30)) goto LAB_143d6741e;
                                    uVar14 = FUN_14477b664(lVar12);
                                    lVar12 = FUN_14477b664(uVar14);
                                    uVar17 = local_d0;
                                    if (lVar12 == 0) {
                                      lVar20 = 0;
                                    }
                                    if (lVar23 == 0) {
                                      lVar20 = 0;
                                    }
                                    lVar15 = (longlong)(int)local_d0;
                                    uVar11 = (int)local_d0 + 1;
                                    local_d0 = CONCAT44(local_d0._4_4_,uVar11);
                                    if (local_d0._4_4_ < uVar11) {
                                      FUN_140428d4a(local_398,uVar17 & 0xffffffff);
                                    }
                                    puVar18 = local_d8;
                                    if (local_d8 == (undefined1 *)0x0) {
                                      puVar18 = local_398;
                                    }
                                    plVar4 = (longlong *)(puVar18 + lVar15 * 0x58);
                                    plVar4[1] = 0;
                                    plVar4[2] = 0;
                                    *plVar4 = lVar23;
                                    uVar14 = FUN_14477b664(lVar12);
                                    lVar23 = FUN_14477b664(uVar14);
                                    plVar4[1] = lVar23;
                                    plVar4[2] = lVar20;
                                    bVar1 = *(byte *)(plVar22 + 10);
                                    *(byte *)(plVar4 + 10) = bVar1;
                                    (*(code *)(&PTR_FUN_14b04c4f0)[bVar1])(plVar4 + 3,plVar22 + 3);
                                    param_1 = local_430;
                                    lVar20 = local_428;
                                    lVar12 = local_418;
                                    lVar23 = local_420;
                                  }
                                  break;
                                }
                                if ((char)local_434 == '\0' && lVar6 != 0) {
                                  iVar9 = *(int *)(lVar16 + 0x38);
                                  iVar10 = *(int *)(lVar6 + 0x38);
                                  if (((iVar9 <= iVar10) &&
                                      (*(longlong *)
                                        (*(longlong *)(lVar6 + 0x30) + (longlong)iVar9 * 8) ==
                                       lVar16 + 0x30)) ||
                                     ((iVar10 <= iVar9 &&
                                      (*(longlong *)
                                        (*(longlong *)(lVar16 + 0x30) + (longlong)iVar10 * 8) ==
                                       lVar6 + 0x30)))) goto LAB_143d67394;
                                }
                              }
                              plVar22 = plVar22 + 0xb;
                              lVar15 = lVar15 + -0x58;
                            } while (lVar15 != 0);
                          }
                        }
                      }
                    }
                  }
                }
                else if (*(char *)(lVar12 + 0x20) == '\x01') {
                  local_90 = 0;
                  local_c8 = 0;
                  uStack_c7 = 0;
                  uStack_c6 = 0;
                  uStack_c4 = 0;
                  uStack_c0 = 0;
                  uStack_bc = 0;
                  local_b8[0] = 0;
                  if (*(longlong *)(lVar12 + 0x10) == 0) {
                    uVar14 = FUN_140490c9a();
                    lVar15 = FUN_14477b664(uVar14);
                    *(longlong *)(lVar12 + 0x10) = lVar15;
                    lVar16 = *(longlong *)(lVar12 + 0x18);
                    if (lVar16 == 0) {
                      param_1 = local_430;
                      lVar20 = local_428;
                      lVar23 = local_420;
                      if (lVar15 == 0) {
                        lVar16 = 0;
                      }
                      else {
                        lVar16 = 0;
                        if (*plVar22 != 0) {
                          plVar4 = *(longlong **)(lVar15 + 0xb8);
                          if ((plVar4 == (longlong *)0x0) ||
                             (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
                            lVar16 = 0;
                          }
                          else {
                            uVar14 = (**(code **)(*plVar4 + 0x110))(plVar4);
                            lVar16 = FUN_144aff482(uVar14,plVar22);
                          }
                          *(longlong *)(lVar12 + 0x18) = lVar16;
                          param_1 = local_430;
                          lVar20 = local_428;
                          lVar23 = local_420;
                        }
                      }
                    }
                  }
                  if (*(char *)(lVar16 + 0x18) == '\x05') {
                    uVar3 = *(ushort *)(lVar12 + 0x22);
                    if (((short)uVar3 < 0) || (*(int *)(DAT_14cb7f870 + 0x438) <= (int)(short)uVar3)
                       ) {
                      puVar13 = (undefined8 *)&DAT_14cb7ee04;
                      if (*(int *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x110) < DAT_14cb7ee0c) {
                        FUN_144b3d300(&DAT_14cb7ee0c);
                        puVar13 = (undefined8 *)&DAT_14cb7ee04;
                        if (DAT_14cb7ee0c == -1) {
                          _DAT_14cb7ee04 = 0;
                          _Init_thread_footer(&DAT_14cb7ee0c);
                          puVar13 = (undefined8 *)&DAT_14cb7ee04;
                        }
                      }
                    }
                    else {
                      puVar13 = (undefined8 *)
                                ((ulonglong)uVar3 * 8 + *(longlong *)(DAT_14cb7f870 + 0x430));
                    }
                    (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])(&local_c8);
                    uVar14 = *puVar13;
                    local_c8 = (undefined1)uVar14;
                    uStack_c7 = (undefined1)((ulonglong)uVar14 >> 8);
                    uStack_c6 = (undefined2)((ulonglong)uVar14 >> 0x10);
                    uStack_c4 = (undefined4)((ulonglong)uVar14 >> 0x20);
                    local_90 = 5;
                  }
                  else {
                    switch(*(char *)(lVar16 + 0x18)) {
                    case '\0':
                      uVar14 = FUN_143d65b7c(lVar12);
                      FUN_14188f998(&local_c8,uVar14);
                      break;
                    case '\x01':
                      uVar14 = FUN_14887f0a6(lVar12);
                      lVar23 = FUN_1401fe4bc(uVar14);
                      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])(&local_c8);
                      local_c8 = (undefined1)lVar23;
                      uStack_c7 = (undefined1)((ulonglong)lVar23 >> 8);
                      uStack_c6 = (undefined2)((ulonglong)lVar23 >> 0x10);
                      uStack_c4 = (undefined4)((ulonglong)lVar23 >> 0x20);
                      if ((lVar23 != 0) && (DAT_14c950c29 != '\0')) {
                        FUN_1456cec3c(lVar23);
                      }
                      local_90 = 1;
                      param_1 = local_430;
                      lVar20 = local_428;
                      lVar23 = local_420;
                      break;
                    case '\x02':
                      uVar3 = *(ushort *)(lVar12 + 0x22);
                      uVar25 = 0;
                      if ((-1 < (short)uVar3) &&
                         ((int)(short)uVar3 < *(int *)(DAT_14cb7f870 + 0x418))) {
                        uVar25 = *(undefined4 *)
                                  (*(longlong *)(DAT_14cb7f870 + 0x410) + (ulonglong)uVar3 * 4);
                      }
                      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])(&local_c8);
                      local_c8 = (undefined1)uVar25;
                      uStack_c7 = (undefined1)((uint)uVar25 >> 8);
                      uStack_c6 = (undefined2)((uint)uVar25 >> 0x10);
                      local_90 = 2;
                      param_1 = local_430;
                      lVar20 = local_428;
                      lVar23 = local_420;
                      break;
                    case '\x03':
                      uVar3 = *(ushort *)(lVar12 + 0x22);
                      fVar24 = 0.0;
                      if ((-1 < (short)uVar3) &&
                         ((int)(short)uVar3 < *(int *)(DAT_14cb7f870 + 0x418))) {
                        fVar24 = *(float *)(*(longlong *)(DAT_14cb7f870 + 0x410) +
                                           (ulonglong)uVar3 * 4);
                      }
                      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])(&local_c8);
                      local_90 = 3;
                      param_1 = local_430;
                      lVar20 = local_428;
                      lVar23 = local_420;
                      local_c8 = fVar24 != 0.0;
                      break;
                    case '\x04':
                      puVar13 = (undefined8 *)FUN_14887f152(lVar12);
                      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])(&local_c8);
                      local_b8[0] = 0;
                      local_b8[1] = 0;
                      local_a8 = 0;
                      local_a0 = 0;
                      uStack_98 = 0;
                      uStack_c0 = *(undefined4 *)(puVar13 + 1);
                      uVar14 = *puVar13;
                      local_c8 = (undefined1)uVar14;
                      uStack_c7 = (undefined1)((ulonglong)uVar14 >> 8);
                      uStack_c6 = (undefined2)((ulonglong)uVar14 >> 0x10);
                      uStack_c4 = (undefined4)((ulonglong)uVar14 >> 0x20);
                      FUN_1447715ec(local_b8,puVar13 + 2);
                      local_90 = 4;
                    }
                  }
                  lVar15 = *(longlong *)(lVar12 + 0x10);
                  if (lVar15 == 0) {
                    uVar14 = FUN_140490c9a();
                    lVar15 = FUN_14477b664(uVar14);
                    *(longlong *)(lVar12 + 0x10) = lVar15;
                  }
                  lVar16 = *(longlong *)(lVar12 + 0x18);
                  if (lVar16 == 0) {
                    param_1 = local_430;
                    lVar20 = local_428;
                    lVar23 = local_420;
                    if (lVar15 == 0) {
                      lVar16 = 0;
                    }
                    else {
                      lVar16 = 0;
                      if (*plVar22 != 0) {
                        plVar4 = *(longlong **)(lVar15 + 0xb8);
                        if ((plVar4 == (longlong *)0x0) ||
                           (cVar7 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar7 == '\0')) {
                          lVar16 = 0;
                        }
                        else {
                          uVar14 = (**(code **)(*plVar4 + 0x110))(plVar4);
                          lVar16 = FUN_144aff482(uVar14,plVar22);
                        }
                        *(longlong *)(lVar12 + 0x18) = lVar16;
                        param_1 = local_430;
                        lVar20 = local_428;
                        lVar23 = local_420;
                      }
                    }
                  }
                  local_3d8 = 0;
                  lStack_3d0 = 0;
                  lStack_3c8 = 0;
                  uVar14 = FUN_140490c9a();
                  lStack_3d0 = FUN_14477b664(uVar14);
                  lVar15 = FUN_140490c9a();
                  uVar14 = FUN_140490c9a();
                  FUN_1402d1bfa(&local_3b8,uVar14,lVar16);
                  if (local_3d8 != local_3b8) {
                    lStack_3c8 = 0;
                  }
                  local_3d8 = local_3b8;
                  lVar19 = FUN_140490c9a();
                  if (lVar15 == 0) {
LAB_143d67632:
                    lVar19 = lVar15;
                  }
                  else if (lVar19 == 0) {
                    lVar19 = 0;
                  }
                  else if ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar15 + 0x38)) &&
                          (*(longlong *)
                            (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8)
                           == lVar19 + 0x30)) goto LAB_143d67632;
                  if (lStack_3d0 != lVar19) {
                    lStack_3c8 = 0;
                  }
                  uVar14 = FUN_14477b664(lVar19);
                  lStack_3d0 = FUN_14477b664(uVar14);
                  if ((lStack_3d0 != 0) && (local_3d8 != 0)) {
                    lStack_3c8 = lVar16;
                  }
                  FUN_1410de4b6(local_3b0,&local_3d8,&local_c8);
                  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])(&local_c8);
                }
              }
              lVar12 = lVar12 + 0x28;
            } while (lVar12 != local_3f0);
          }
          lVar12 = FUN_14049b1f6(lVar20);
          plVar22 = *(longlong **)(lVar12 + 0x48);
          if (plVar22 == (longlong *)0x0) {
            cVar7 = '\x02';
          }
          else {
            cVar7 = (**(code **)(*plVar22 + 0x2a0))(plVar22,local_3b0);
          }
          FUN_1407acd04(local_398);
        }
        *(char *)(lVar20 + 0x42) = cVar7;
        *(undefined1 *)(lVar20 + 0x41) = 1;
      }
      if (cVar7 == '\0') {
        lVar20 = 4;
LAB_143d67e5a:
        local_440 = param_6;
        local_448 = param_5;
        FUN_143d66ca0(param_1,(int)*(short *)(lVar23 + lVar20),local_408,local_400);
      }
      else if (cVar7 != '\x02') {
        lVar20 = 6;
        goto LAB_143d67e5a;
      }
      param_2 = (uint)*(short *)(lVar23 + 8);
      if (*(short *)(lVar23 + 8) < 0) break;
    }
  }
  if ((local_80 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d67eec FUN_143d67eec body=860 status=ok
// SIG undefined FUN_143d67eec(void)

void FUN_143d67eec(longlong *param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  void *_Dst;
  longlong lVar11;
  int *piVar12;
  longlong lVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  if (0 < (int)param_1[1]) {
    lVar13 = 0;
    lVar17 = 0;
    do {
      if (*(char *)(param_3 + 0x82) == '\0') {
        lVar8 = FUN_14494f566(*param_1 + lVar13);
        plVar9 = (longlong *)FUN_1400c2ca6(*(undefined2 *)(lVar8 + 0x10));
        lVar8 = plVar9[1];
        if (lVar8 == 0) {
          uVar10 = FUN_14043db3a();
          lVar8 = FUN_14477b664(uVar10);
          plVar9[1] = lVar8;
        }
        lVar11 = plVar9[2];
        if (lVar11 == 0) {
          if (lVar8 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = 0;
            if (*plVar9 != 0) {
              plVar3 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar6 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar6 == '\0')) {
                lVar11 = 0;
              }
              else {
                uVar10 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar11 = FUN_144aff482(uVar10,plVar9);
              }
              plVar9[2] = lVar11;
            }
          }
        }
        cVar6 = FUN_14043da5a(param_2,lVar11);
        if (cVar6 != '\0') goto LAB_143d67fde;
      }
      else {
LAB_143d67fde:
        uVar5 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar7 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
        if (uStack_70._4_4_ < uVar7) {
          FUN_1446f48e2(&local_78,uVar5 & 0xffffffff);
        }
        *(int *)(local_78 + lVar8 * 4) = (int)lVar17;
      }
      lVar17 = lVar17 + 1;
      lVar13 = lVar13 + 0x30;
    } while (lVar17 < (int)param_1[1]);
    if (0 < (int)uStack_70) {
      iVar2 = (int)param_1[2];
      if ((*param_4 < iVar2) && (*param_4 = iVar2, 0 < (int)DAT_14cb7eeb8)) {
        lVar17 = 0;
        bVar14 = false;
        lVar13 = DAT_14cb7eeb0;
        do {
          uVar7 = (uint)lVar17;
          lVar17 = (longlong)(int)uVar7;
          _Dst = (void *)(lVar17 * 0x30 + lVar13);
          lVar8 = 0;
          while (iVar2 <= *(int *)((longlong)_Dst + 0x28)) {
            lVar11 = lVar17 + lVar8;
            lVar8 = lVar8 + 1;
            _Dst = (void *)((longlong)_Dst + 0x30);
            if ((longlong)(int)DAT_14cb7eeb8 <= lVar11 + 1) {
              if (bVar14) goto LAB_143d6823f;
              goto LAB_143d680fb;
            }
          }
          iVar16 = (int)lVar8;
          if (~uVar7 + DAT_14cb7eeb8 != iVar16) {
            iVar15 = (~uVar7 + DAT_14cb7eeb8) - iVar16;
            if (0 < iVar15) {
              iVar15 = 1;
            }
            memmove(_Dst,(void *)(lVar13 + (longlong)(int)(DAT_14cb7eeb8 - iVar15) * 0x30),
                    (longlong)iVar15 * 0x30);
            lVar13 = DAT_14cb7eeb0;
          }
          lVar17 = lVar17 + lVar8;
          DAT_14cb7eeb8 = DAT_14cb7eeb8 - 1;
          bVar14 = true;
        } while ((int)(uVar7 + iVar16) < (int)DAT_14cb7eeb8);
LAB_143d6823f:
        FUN_148884522();
      }
LAB_143d680fb:
      lVar13 = local_78;
      lVar17 = (longlong)(int)uStack_70;
      if (lVar17 != 0) {
        lVar8 = 0;
        do {
          puVar18 = (undefined8 *)((longlong)*(int *)(lVar13 + lVar8) * 0x30 + *param_1);
          iVar2 = *(int *)(param_3 + 0x78);
          if (iVar2 < 0) {
LAB_143d68173:
            uVar7 = DAT_14cb7eeb8;
            lVar11 = (longlong)(int)DAT_14cb7eeb8;
            DAT_14cb7eeb8 = DAT_14cb7eeb8 + 1;
            if (DAT_14cb7eebc < DAT_14cb7eeb8) {
              FUN_1405a63b6(&DAT_14cb7eeb0,uVar7);
            }
            lVar4 = DAT_14cb7eeb0;
            lVar11 = lVar11 * 0x30;
            puVar1 = (undefined8 *)(DAT_14cb7eeb0 + lVar11);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar4 + 0x10 + lVar11) = 0;
            *(undefined8 *)(lVar4 + lVar11) = *puVar18;
            uVar10 = FUN_14477b664(puVar18[1]);
            uVar10 = FUN_14477b664(uVar10);
            *(undefined8 *)(lVar4 + 8 + lVar11) = uVar10;
            *(undefined8 *)(lVar4 + 0x10 + lVar11) = puVar18[2];
            uVar10 = puVar18[4];
            puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar11);
            *puVar1 = puVar18[3];
            puVar1[1] = uVar10;
            *(undefined8 *)(lVar4 + 0x28 + lVar11) = puVar18[5];
          }
          else {
            lVar11 = FUN_14494f566(puVar18);
            piVar12 = &DAT_14c763940;
            if (DAT_14cb7f870 != 0) {
              piVar12 = &DAT_14c763940;
              if ((int)(uint)*(byte *)(lVar11 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8)) {
                piVar12 = (int *)((ulonglong)*(byte *)(lVar11 + 0x2c) * 0x10 +
                                 *(longlong *)(DAT_14cb7f870 + 0x3a0));
              }
            }
            if (iVar2 == *piVar12) goto LAB_143d68173;
          }
          lVar8 = lVar8 + 4;
        } while (lVar17 * 4 != lVar8);
      }
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8(local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6824a FUN_143d6824a body=159 status=ok
// SIG undefined FUN_143d6824a(void)

void FUN_143d6824a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar2 = (longlong)*(int *)(param_1 + 0x20) * 0x390 + lVar3;
    do {
      lVar5 = lVar3 + 0x38;
      if (*(longlong *)(lVar3 + 0x2f8) != 0) {
        lVar5 = *(longlong *)(lVar3 + 0x2f8);
      }
      iVar1 = *(int *)(lVar3 + 0x300);
      if ((longlong)iVar1 != 0) {
        lVar4 = 0;
        do {
          if (*(char *)(lVar5 + 0x50 + lVar4) == '\x01') {
            (**(code **)(*param_2 + 0x88))(param_2,lVar5 + 0x18 + lVar4,0,0);
          }
          lVar4 = lVar4 + 0x58;
        } while ((longlong)iVar1 * 0x58 - lVar4 != 0);
      }
      lVar3 = lVar3 + 0x390;
    } while (lVar3 != lVar2);
  }
  return;
}



// FUNCTION 143d68312 FUN_143d68312 body=7257 status=ok
// SIG undefined FUN_143d68312(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_143d68312(longlong param_1,uint *param_2,uint *param_3,longlong param_4,longlong *param_5,
             uint *param_6)

{
  undefined4 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  undefined **ppuVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  float *pfVar31;
  uint uVar32;
  uint uVar33;
  longlong *plVar34;
  ulonglong uVar35;
  bool bVar36;
  float fVar37;
  undefined1 auStack_438 [32];
  uint *local_418;
  uint *local_410;
  longlong local_400;
  uint *local_3f8;
  longlong local_3f0;
  uint *local_3e8;
  uint *local_3e0;
  longlong *local_3d8;
  ulonglong local_3d0;
  longlong local_3c8;
  longlong lStack_3c0;
  uint *local_3b8;
  longlong local_3b0;
  uint local_3a8;
  uint uStack_3a4;
  uint uStack_3a0;
  uint uStack_39c;
  uint local_398;
  undefined8 local_390 [88];
  undefined8 *local_d0;
  int local_c8;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  uint local_8c;
  int iStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  uint local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_438;
  if (*(longlong *)(param_1 + 8) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb7eee8) && (FUN_144b3d300(&DAT_14cb7eee8), DAT_14cb7eee8 == -1)) {
      DAT_14cb7eec8 = 0;
      _DAT_14cb7eed0 = 0;
      atexit((_func_5014 *)&LAB_143d69f6c);
      _Init_thread_footer(&DAT_14cb7eee8);
    }
    bVar36 = (longlong)_DAT_14cb7eed0 < 0;
    _DAT_14cb7eed0 = _DAT_14cb7eed0 & 0xffffffff00000000;
    if (bVar36) {
      FUN_148883ab2(&DAT_14cb7eec8);
    }
    _DAT_14cb7eed8 = 0;
    DAT_14cb7eee0 = 1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb7ef10) && (FUN_144b3d300(&DAT_14cb7ef10), DAT_14cb7ef10 == -1)) {
      DAT_14cb7eef0 = 0;
      _DAT_14cb7eef8 = 0;
      atexit((_func_5014 *)&LAB_143d69f7d);
      _Init_thread_footer(&DAT_14cb7ef10);
    }
    bVar36 = (longlong)_DAT_14cb7eef8 < 0;
    _DAT_14cb7eef8 = _DAT_14cb7eef8 & 0xffffffff00000000;
    if (bVar36) {
      FUN_148883ab2(&DAT_14cb7eef0);
    }
    _DAT_14cb7ef00 = 0;
    DAT_14cb7ef08 = 1;
    lVar11 = FUN_140316ff8();
    lVar13 = *(longlong *)(lVar11 + 0x188);
    if (lVar13 == 0) {
      uVar12 = FUN_140490c9a();
      lVar13 = FUN_14477b664(uVar12);
      *(longlong *)(lVar11 + 0x188) = lVar13;
    }
    plVar34 = (longlong *)(lVar11 + 0x180);
    local_400 = param_4;
    if (*(longlong *)(lVar11 + 400) == 0) {
      if ((lVar13 != 0) && (*plVar34 != 0)) {
        plVar2 = *(longlong **)(lVar13 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
          *(undefined8 *)(lVar11 + 400) = 0;
        }
        else {
          uVar12 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar13 = FUN_144aff482(uVar12);
          *(longlong *)(lVar11 + 400) = lVar13;
          if (lVar13 != 0) goto LAB_143d68437;
        }
      }
    }
    else {
LAB_143d68437:
      if (*(longlong *)(param_1 + 8) != 0) {
        uVar9 = param_3[2];
        if ((longlong)(int)uVar9 != 0) {
          lVar13 = *(longlong *)param_3;
          lVar11 = 0;
          do {
            if ((*(char *)(lVar13 + 0x41 + lVar11) == '\x01') &&
               (*(byte *)(lVar13 + 0x40 + lVar11) < 2)) {
              *(undefined1 *)(lVar13 + 0x41 + lVar11) = 0;
            }
            lVar11 = lVar11 + 0x48;
          } while ((longlong)(int)uVar9 * 0x48 != lVar11);
        }
        local_398 = param_2[4];
        local_3a8 = *param_2;
        uStack_3a4 = param_2[1];
        uStack_3a0 = param_2[2];
        uStack_39c = param_2[3];
        local_d0 = (undefined8 *)0x0;
        puVar14 = param_2 + 6;
        if (*(uint **)(param_2 + 0xb6) != (uint *)0x0) {
          puVar14 = *(uint **)(param_2 + 0xb6);
        }
        FUN_1408d7d9a(local_390,puVar14,param_2[0xb8],0);
        bVar36 = (longlong)_DAT_14cb7eed0 < 0;
        _DAT_14cb7eed0 = _DAT_14cb7eed0 & 0xffffffff00000000;
        if (bVar36) {
          FUN_148883ab2(&DAT_14cb7eec8);
        }
        _DAT_14cb7eed8 = 0;
        DAT_14cb7eee0 = 1;
        if ((*(longlong *)(param_4 + 8) == 0) &&
           ((((*(longlong *)(param_4 + 0x18) == 0 || (*(int *)(param_4 + 0x14) == 0)) ||
             (uVar9 = *(uint *)(param_4 + 0x10), (int)uVar9 < 0)) ||
            (((DAT_14c9647dc <= (int)uVar9 ||
              (lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar13 == 0))
             || ((*(int *)(lVar13 + 0x10) != *(int *)(param_4 + 0x14) ||
                 ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)))))))) {
          bVar18 = 1;
          if (*(char *)(param_4 + 0x7d) == '\0') {
            lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 8) + 0x68);
            if (lVar13 == 0) {
              bVar18 = 0;
            }
            else {
              param_2 = *(uint **)(*(longlong *)(param_1 + 8) + 0x60);
              lVar13 = lVar13 << 4;
              do {
                if (((*(longlong **)(param_2 + 2) != (longlong *)0x0) && (param_2[1] != 0)) &&
                   (((uVar9 = *param_2, -1 < (int)uVar9 &&
                     ((((int)uVar9 < DAT_14c9647dc &&
                       (lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8),
                       lVar11 != 0)) && (*(uint *)(lVar11 + 0x10) == param_2[1])))) &&
                    (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 &&
                     (lVar11 = (**(code **)(**(longlong **)(param_2 + 2) + 0x10))(), lVar11 != 0))))
                   )) {
                  lVar16 = *(longlong *)(lVar11 + 0x150);
                  if (lVar16 == 0) {
                    uVar12 = FUN_14043db3a();
                    lVar16 = FUN_14477b664(uVar12);
                    *(longlong *)(lVar11 + 0x150) = lVar16;
                  }
                  if (*(longlong *)(lVar11 + 0x158) == 0) {
                    if ((lVar16 != 0) && (*(longlong *)(lVar11 + 0x148) != 0)) {
                      plVar2 = *(longlong **)(lVar16 + 0xb8);
                      if ((plVar2 == (longlong *)0x0) ||
                         (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
                        *(undefined8 *)(lVar11 + 0x158) = 0;
                      }
                      else {
                        uVar12 = (**(code **)(*plVar2 + 0x110))(plVar2);
                        lVar16 = FUN_144aff482(uVar12,(longlong *)(lVar11 + 0x148));
                        *(longlong *)(lVar11 + 0x158) = lVar16;
                        if (lVar16 != 0) goto LAB_143d686e2;
                      }
                    }
                  }
                  else {
LAB_143d686e2:
                    if (((*(char *)(local_400 + 0x7c) != '\x01') || (*(int *)(lVar11 + 0x18c) == 3))
                       || (*(char *)(lVar11 + 400) == '\x01')) {
                      local_b8 = (**(code **)(**(longlong **)(param_2 + 2) + 0x18))();
                      FUN_144a6406c(&local_3a8,plVar34,&local_b8);
                      local_410 = (uint *)0x0;
                      local_418 = &local_3a8;
                      FUN_140d549c8(param_1,local_400,param_2,param_3);
                    }
                  }
                }
                param_2 = param_2 + 4;
                lVar13 = lVar13 + -0x10;
              } while (lVar13 != 0);
              bVar18 = *(byte *)(local_400 + 0x7d);
              param_4 = local_400;
            }
          }
          if ((((bVar18 | *(byte *)(param_4 + 0x7e)) & 1) != 0) && (DAT_14cb7eed0 == 0)) {
            local_98 = (uint *)0x0;
            local_90 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            local_8c = 0x80;
            iStack_88 = -1;
            local_84 = 0;
            local_78 = (undefined1 *)0x0;
            local_70 = 0;
            local_3f0 = param_1;
            local_3e8 = param_3;
            local_3d8 = plVar34;
            if ((longlong)(int)param_3[10] != 0) {
              puVar14 = *(uint **)(param_3 + 8);
              local_3e0 = puVar14 + (longlong)(int)param_3[10] * 6;
              do {
                local_3f8 = puVar14;
                if ((longlong)(int)puVar14[2] != 0) {
                  lVar13 = *(longlong *)puVar14;
                  lVar11 = (longlong)(int)puVar14[2] * 0x30 + lVar13;
                  do {
                    lVar16 = FUN_14494f566(lVar13);
                    plVar34 = (longlong *)FUN_1400c2ca6(*(undefined2 *)(lVar16 + 0x10));
                    lVar16 = plVar34[1];
                    if (lVar16 == 0) {
                      uVar12 = FUN_14043db3a();
                      lVar16 = FUN_14477b664(uVar12);
                      plVar34[1] = lVar16;
                    }
                    uVar35 = plVar34[2];
                    if (uVar35 == 0) {
                      if (lVar16 == 0) {
                        uVar35 = 0;
                      }
                      else {
                        uVar35 = 0;
                        if (*plVar34 != 0) {
                          plVar2 = *(longlong **)(lVar16 + 0xb8);
                          if ((plVar2 == (longlong *)0x0) ||
                             (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
                            uVar35 = 0;
                          }
                          else {
                            uVar12 = (**(code **)(*plVar2 + 0x110))(plVar2);
                            uVar35 = FUN_144aff482(uVar12,plVar34);
                          }
                          plVar34[2] = uVar35;
                        }
                      }
                    }
                    iVar19 = iStack_88;
                    uVar17 = uStack_b0;
                    if (local_84 == 0) {
                      iVar19 = (int)uStack_b0;
                      uStack_b0 = CONCAT44(uStack_b0._4_4_,(int)uStack_b0 + 1);
                      if (uStack_b0._4_4_ == iVar19) {
                        FUN_1446efaca(&local_b8,uVar17 & 0xffffffff);
                      }
                      uVar9 = local_90;
                      if (local_90 == 0) {
                        iVar8 = -1;
                      }
                      else {
                        iVar8 = local_90 + 0x1e;
                        if (-1 < (int)(local_90 - 1)) {
                          iVar8 = local_90 - 1;
                        }
                        iVar8 = iVar8 >> 5;
                      }
                      uVar32 = local_90 + 1;
                      uVar33 = local_90 + 0x1f;
                      if (-1 < (int)local_90) {
                        uVar33 = local_90;
                      }
                      if ((int)uVar33 >> 5 == iVar8) {
                        local_90 = uVar32;
                      }
                      else {
                        if ((int)local_8c <= (int)local_90) {
                          if (local_90 + 0x20 < 0xa0) {
                            local_8c = 0x80;
                          }
                          else {
                            uVar32 = local_90 + 0x20 >> 5;
                            if (local_8c + 0x1f < 0xa0) {
                              uVar25 = 4;
                              if (4 < uVar32) {
                                uVar25 = uVar32;
                              }
                            }
                            else {
                              uVar25 = uVar32 + (uVar32 * 3 >> 3) + 0x10;
                            }
                            uVar17 = (ulonglong)(uVar25 * 4);
                            if (DAT_14c872d28 != (longlong *)0x0) {
                              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                uVar7 = (uint)(uVar17 + 0xf);
                                if (uVar25 < 0x1ffd) {
                                  uVar17 = (ulonglong)
                                           (ushort)(&DAT_14c841d90)
                                                   [0x32 - (byte)(&DAT_14c841e00)[uVar17 + 0xf >> 4]
                                                   ];
                                }
                                else {
                                  uVar21 = (ulonglong)(uVar7 & 0xfffffff0);
                                  if (uVar21 < 0x7ff1) {
                                    bVar18 = (&DAT_14c841e00)[uVar7 >> 4];
                                    uVar26 = 0x32;
                                    if (0x32 < bVar18) {
                                      uVar26 = (ulonglong)bVar18;
                                    }
                                    uVar30 = 0x32 - (ulonglong)bVar18;
                                    do {
                                      uVar17 = (ulonglong)
                                               (ushort)(&DAT_14c841d90)[uVar30 & 0xffffffff];
                                      if (((&DAT_14c841d90)[uVar30 & 0xffffffff] & 0xf) == 0)
                                      goto LAB_143d68fa5;
                                      lVar16 = uVar26 + 1 + uVar30;
                                      uVar30 = uVar30 - 1;
                                    } while (lVar16 != 0x33);
                                  }
                                  uVar17 = (ulonglong)DAT_14c841df8;
                                  if (DAT_14c841df8 < 0x11) {
                                    uVar17 = 0x10;
                                  }
                                  uVar17 = -uVar17 & (uVar21 + uVar17) - 1;
                                }
                              }
                              else {
                                local_3d0 = (ulonglong)uVar32;
                                uVar17 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                   (DAT_14c872d28,uVar17,0);
                                uVar32 = (uint)local_3d0;
                              }
                            }
LAB_143d68fa5:
                            iVar8 = (int)(uVar17 >> 2);
                            local_8c = iVar8 << 5;
                            if (iVar8 < (int)uVar32) {
                              local_8c = 0xffffffe0;
                            }
                          }
                          FUN_1446efbd8(local_a8,local_90);
                          uVar32 = local_90 + 1;
                        }
                        uVar25 = uVar32 + 0x1f;
                        if (-1 < (int)uVar32) {
                          uVar25 = uVar32;
                        }
                        local_90 = uVar32;
                        if ((int)uVar32 % 0x20 != 0) {
                          puVar14 = local_98;
                          if (local_98 == (uint *)0x0) {
                            puVar14 = local_a8;
                          }
                          bVar18 = -(char)((int)uVar32 % 0x20);
                          puVar14[(int)uVar25 >> 5] =
                               (puVar14[(int)uVar25 >> 5] << (bVar18 & 0x1f)) >> (bVar18 & 0x1f);
                        }
                      }
                      lVar16 = (longlong)iVar19;
                      puVar14 = local_98;
                      if (local_98 == (uint *)0x0) {
                        puVar14 = local_a8;
                      }
                      bVar18 = (byte)uVar9 & 0x1f;
                      puVar14[(int)uVar33 >> 5] =
                           puVar14[(int)uVar33 >> 5] & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18)
                      ;
                    }
                    else {
                      lVar16 = (longlong)iStack_88;
                      iStack_88 = *(int *)(local_b8 + 4 + lVar16 * 0x10);
                      local_84 = local_84 + -1;
                      if (local_84 != 0) {
                        *(undefined4 *)(local_b8 + (longlong)iStack_88 * 0x10) = 0xffffffff;
                      }
                    }
                    uVar9 = 1 << ((byte)iVar19 & 0x1f);
                    puVar14 = local_98;
                    if (local_98 == (uint *)0x0) {
                      puVar14 = local_a8;
                    }
                    iVar8 = iVar19 + 0x1f;
                    if (-1 < iVar19) {
                      iVar8 = iVar19;
                    }
                    puVar14[iVar8 >> 5] = puVar14[iVar8 >> 5] | uVar9;
                    lVar16 = lVar16 * 0x10;
                    *(ulonglong *)(local_b8 + lVar16) = uVar35;
                    *(undefined4 *)(local_b8 + 8 + lVar16) = 0xffffffff;
                    uVar32 = ((uint)(uVar35 >> 0x14) & 0xffff ^ (uint)(uVar35 >> 4)) * -0x7a143595;
                    uVar32 = (uVar32 >> 0xd ^ uVar32) * -0x3d4d51cb;
                    uVar32 = uVar32 >> 0x10 ^ uVar32;
                    uVar33 = (int)uStack_b0 - local_84;
                    if ((uVar33 != 0) && (uVar33 != 1)) {
                      puVar15 = local_78;
                      if (local_78 == (undefined1 *)0x0) {
                        puVar15 = local_80;
                      }
                      iVar24 = *(int *)(puVar15 + (ulonglong)(local_70 - 1 & uVar32) * 4);
                      while (iVar24 != -1) {
                        param_2 = (uint *)((longlong)iVar24 * 0x10);
                        if (*(ulonglong *)(local_b8 + (longlong)param_2) == uVar35) {
                          *(ulonglong *)(local_b8 + (longlong)param_2) = uVar35;
                          if (local_84 != 0) {
                            *(int *)(local_b8 + (longlong)iStack_88 * 0x10) = iVar19;
                          }
                          *(undefined4 *)(local_b8 + (longlong)iVar19 * 0x10) = 0xffffffff;
                          iVar24 = -1;
                          if (0 < local_84) {
                            iVar24 = iStack_88;
                          }
                          *(int *)(local_b8 + (longlong)iVar19 * 0x10 + 4) = iVar24;
                          iStack_88 = iVar19;
                          local_84 = local_84 + 1;
                          puVar14 = local_98;
                          if (local_98 == (uint *)0x0) {
                            puVar14 = local_a8;
                          }
                          puVar14[iVar8 >> 5] = puVar14[iVar8 >> 5] & ~uVar9;
                          goto LAB_143d68b82;
                        }
                        iVar24 = (int)((ulonglong *)(local_b8 + (longlong)param_2))[1];
                      }
                    }
                    param_2 = (uint *)&DAT_00000001;
                    if (3 < uVar33) {
                      uVar35 = (ulonglong)(uVar33 & 0xfffffffe) + 0xf;
                      lVar29 = 0x3f;
                      if (uVar35 != 0) {
                        for (; uVar35 >> lVar29 == 0; lVar29 = lVar29 + -1) {
                        }
                      }
                      param_2 = (uint *)(ulonglong)(uint)(1 << ((byte)lVar29 & 0x1f));
                    }
                    if (((int)uVar33 < 1) || ((int)(uint)param_2 <= (int)local_70)) {
                      uVar32 = local_70 - 1 & uVar32;
                      *(uint *)(local_b8 + lVar16 + 0xc) = uVar32;
                      puVar15 = local_78;
                      if (local_78 == (undefined1 *)0x0) {
                        puVar15 = local_80;
                      }
                      *(undefined4 *)(local_b8 + lVar16 + 8) =
                           *(undefined4 *)
                            (puVar15 + ((longlong)(int)local_70 - 1U & (longlong)(int)uVar32) * 4);
                      puVar15 = local_78;
                      if (local_78 == (undefined1 *)0x0) {
                        puVar15 = local_80;
                      }
                      *(int *)(puVar15 + ((longlong)(int)local_70 - 1U & (longlong)(int)uVar32) * 4)
                           = iVar19;
                    }
                    else {
                      local_70 = (uint)param_2;
                      if (local_78 != (undefined1 *)0x0) {
                        FUN_1446efa72(&local_78,0,0,4);
                        param_2 = (uint *)(ulonglong)local_70;
                      }
                      uVar9 = (uint)param_2;
                      if (uVar9 == 1) {
                        if (local_78 != (undefined1 *)0x0) {
                          FUN_1446efa72(&local_78,0,0,4);
                        }
LAB_143d68d02:
                        uVar32 = 0;
                        do {
                          puVar15 = local_78;
                          if (local_78 == (undefined1 *)0x0) {
                            puVar15 = local_80;
                          }
                          *(undefined4 *)(puVar15 + (ulonglong)(local_70 + 0x7fffffff & uVar32) * 4)
                               = 0xffffffff;
                          uVar32 = uVar32 + 1;
                        } while (uVar9 != uVar32);
                      }
                      else {
                        if (uVar9 == 0) goto LAB_143d68b82;
                        FUN_1446efa72(&local_78,0,param_2,4);
                        if (0 < (int)uVar9) goto LAB_143d68d02;
                      }
                      if (local_90 == 0) {
                        uVar35 = 0;
                        uVar17 = 1;
                        uVar9 = 0;
                        iVar19 = 0;
                      }
                      else {
                        puVar14 = local_98;
                        if (local_98 == (uint *)0x0) {
                          puVar14 = local_a8;
                        }
                        uVar9 = *puVar14;
                        if (uVar9 == 0) {
                          iVar19 = local_90 + 0x1e;
                          if (-1 < (int)(local_90 - 1)) {
                            iVar19 = local_90 - 1;
                          }
                          uVar35 = 0;
                          uVar32 = iVar19 >> 5;
                          if (iVar19 >> 5 < 1) {
                            uVar32 = 0;
                          }
                          iVar19 = 0;
                          do {
                            if (uVar32 == uVar35) goto LAB_143d68b82;
                            iVar19 = iVar19 + 0x20;
                            uVar9 = puVar14[uVar35 + 1];
                            uVar35 = uVar35 + 1;
                          } while (uVar9 == 0);
                        }
                        else {
                          uVar35 = 0;
                          iVar19 = 0;
                        }
                        uVar17 = (ulonglong)(-uVar9 & uVar9);
                        uVar21 = uVar17 * 2 + 1;
                        lVar16 = 0x3f;
                        if (uVar21 != 0) {
                          for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                          }
                        }
                        uVar9 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        if ((int)local_90 <= (int)uVar9) {
                          uVar9 = local_90;
                        }
                      }
                      if ((int)uVar9 < (int)local_90) {
                        uVar32 = 0xffffffff;
                        do {
                          lVar16 = (longlong)(int)uVar9 * 0x10;
                          uVar33 = ((uint)(*(ulonglong *)(local_b8 + lVar16) >> 0x14) & 0xffff ^
                                   (uint)(*(ulonglong *)(local_b8 + lVar16) >> 4)) * -0x7a143595;
                          uVar33 = (uVar33 >> 0xd ^ uVar33) * -0x3d4d51cb;
                          param_2 = (uint *)((longlong)(int)(uVar33 >> 0x10 ^ uVar33) &
                                            (longlong)(int)local_70 - 1U);
                          *(int *)(local_b8 + 0xc + lVar16) = (int)param_2;
                          puVar15 = local_78;
                          if (local_78 == (undefined1 *)0x0) {
                            puVar15 = local_80;
                          }
                          *(undefined4 *)(local_b8 + 8 + lVar16) =
                               *(undefined4 *)
                                (puVar15 + ((longlong)(int)local_70 - 1U & (ulonglong)param_2) * 4);
                          puVar15 = local_78;
                          if (local_78 == (undefined1 *)0x0) {
                            puVar15 = local_80;
                          }
                          *(uint *)(puVar15 +
                                   ((longlong)(int)param_2 & (longlong)(int)local_70 - 1U) * 4) =
                               uVar9;
                          uVar32 = ~(uint)uVar17 & uVar32;
                          puVar14 = local_98;
                          if (local_98 == (uint *)0x0) {
                            puVar14 = local_a8;
                          }
                          iVar8 = (int)uVar35;
                          lVar16 = (longlong)iVar8;
                          uVar9 = puVar14[lVar16] & uVar32;
                          if (uVar9 == 0) {
                            iVar24 = local_90 + 0x1e;
                            if (-1 < (int)(local_90 - 1)) {
                              iVar24 = local_90 - 1;
                            }
                            iVar24 = iVar24 >> 5;
                            iVar20 = iVar24;
                            if (iVar24 < iVar8) {
                              iVar20 = iVar8;
                            }
                            if (iVar24 <= iVar8) break;
                            lVar29 = 0;
                            while( true ) {
                              iVar19 = iVar19 + 0x20;
                              uVar9 = puVar14[lVar16 + lVar29 + 1];
                              if (uVar9 != 0) break;
                              lVar29 = lVar29 + 1;
                              if (iVar20 - lVar16 == lVar29) goto LAB_143d68b82;
                            }
                            uVar35 = (ulonglong)(iVar8 + (int)lVar29 + 1);
                            uVar32 = 0xffffffff;
                          }
                          uVar17 = (ulonglong)(-uVar9 & uVar9);
                          uVar21 = uVar17 * 2 + 1;
                          lVar16 = 0x3f;
                          if (uVar21 != 0) {
                            for (; uVar21 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                            }
                          }
                          uVar9 = (iVar19 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
                        } while ((int)uVar9 < (int)local_90);
                      }
                    }
LAB_143d68b82:
                    lVar13 = lVar13 + 0x30;
                  } while (lVar13 != lVar11);
                }
                puVar14 = local_3f8 + 6;
              } while (puVar14 != local_3e0);
            }
            lVar13 = FUN_140316ff8();
            local_3e0 = *(uint **)(lVar13 + 0x1c8);
            uVar12 = FUN_14477b664(*(undefined8 *)(lVar13 + 0x1d0));
            local_3f8 = (uint *)FUN_14477b664(uVar12);
            puVar28 = local_d0;
            if (local_d0 == (undefined8 *)0x0) {
              puVar28 = local_390;
            }
            if ((longlong)local_c8 == 0) {
              lVar13 = 0;
              uVar12 = 0;
              local_3b8 = (uint *)0x0;
              param_4 = local_400;
            }
            else {
              lVar13 = (longlong)local_c8 * 0x58;
              do {
                if (puVar28[1] == 0) {
                  uVar12 = FUN_140490c9a();
                  uVar12 = FUN_14477b664(uVar12);
                  puVar28[1] = uVar12;
                }
                puVar14 = local_3f8;
                if (local_3f8 == (uint *)0x0) {
                  puVar14 = (uint *)FUN_140490c9a(0);
                }
                lVar11 = FUN_14477b664(puVar14);
                iVar19 = 0;
                if ((lVar11 != 0) &&
                   (plVar34 = *(longlong **)(lVar11 + 0xb8), plVar34 != (longlong *)0x0)) {
                  lVar16 = *plVar34;
                  pcVar3 = *(code **)(lVar16 + 0x108);
                  if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
                    cVar6 = (*pcVar3)(plVar34);
                    iVar19 = 0;
                    if (cVar6 == '\0') goto LAB_143d69205;
                    lVar16 = *plVar34;
                  }
                  pcVar3 = *(code **)(lVar16 + 0x110);
                  ppuVar22 = &PTR_PTR_14c763408;
                  if ((pcVar3 != (code *)&LAB_144783426) &&
                     (ppuVar22 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
                    ppuVar22 = (undefined **)(*pcVar3)(plVar34);
                  }
                  iVar19 = FUN_144aff48c(ppuVar22);
                }
LAB_143d69205:
                param_2 = (uint *)*puVar28;
                lVar16 = puVar28[1];
                iVar8 = 0;
                if ((lVar16 != 0) &&
                   (plVar34 = *(longlong **)(lVar16 + 0xb8), plVar34 != (longlong *)0x0)) {
                  lVar29 = *plVar34;
                  pcVar3 = *(code **)(lVar29 + 0x108);
                  if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
                    cVar6 = (*pcVar3)(plVar34);
                    iVar8 = 0;
                    if (cVar6 == '\0') goto LAB_143d6926d;
                    lVar29 = *plVar34;
                  }
                  pcVar3 = *(code **)(lVar29 + 0x110);
                  ppuVar22 = &PTR_PTR_14c763408;
                  if ((pcVar3 != (code *)&LAB_144783426) &&
                     (ppuVar22 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
                    ppuVar22 = (undefined **)(*pcVar3)(plVar34);
                  }
                  iVar8 = FUN_144aff48c(ppuVar22);
                }
LAB_143d6926d:
                param_4 = local_400;
                if ((iVar8 == iVar19) && (param_2 == local_3e0)) {
                  if (lVar16 == lVar11) {
LAB_143d6966f:
                    if ((puVar28 == (undefined8 *)0x0) || (*(char *)(puVar28 + 10) != '\0')) {
                      lVar13 = 0;
                      uVar12 = 0;
                      local_3b8 = (uint *)0x0;
                    }
                    else {
                      lVar13 = puVar28[3];
                      uVar12 = FUN_14477b664(puVar28[4]);
                      uVar12 = FUN_14477b664(uVar12);
                      local_3b8 = (uint *)puVar28[5];
                    }
                    goto LAB_143d6938d;
                  }
                  if ((lVar11 != 0) && (lVar16 != 0)) {
                    iVar19 = *(int *)(lVar11 + 0x38);
                    iVar8 = *(int *)(lVar16 + 0x38);
                    if (((iVar19 <= iVar8) &&
                        (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar19 * 8) ==
                         lVar11 + 0x30)) ||
                       ((iVar8 <= iVar19 &&
                        (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar8 * 8) ==
                         lVar16 + 0x30)))) goto LAB_143d6966f;
                  }
                }
                puVar28 = puVar28 + 0xb;
                lVar13 = lVar13 + -0x58;
              } while (lVar13 != 0);
              uVar12 = 0;
              local_3b8 = (uint *)0x0;
              lVar13 = 0;
            }
LAB_143d6938d:
            local_3c8 = lVar13;
            uVar12 = FUN_14477b664(uVar12);
            lStack_3c0 = FUN_14477b664(uVar12);
            if (lStack_3c0 == 0) {
              uVar12 = FUN_14043db3a();
              lStack_3c0 = FUN_14477b664(uVar12);
            }
            puVar14 = local_3b8;
            if (local_3b8 == (uint *)0x0) {
              local_3b8 = (uint *)0x0;
              if ((((local_3c8 != 0) && (param_4 = local_400, lStack_3c0 != 0)) &&
                  (param_2 = *(uint **)(lStack_3c0 + 0xb8), param_2 != (uint *)0x0)) &&
                 (cVar6 = (**(code **)(*(longlong *)param_2 + 0x108))(param_2), param_4 = local_400,
                 cVar6 != '\0')) {
                uVar12 = (**(code **)(*(longlong *)param_2 + 0x110))(param_2);
                puVar14 = (uint *)FUN_144aff482(uVar12,&local_3c8);
                param_4 = local_400;
                if (puVar14 != (uint *)0x0) goto LAB_143d697aa;
              }
LAB_143d693ec:
              uVar9 = local_90;
              if (local_90 != 0) {
                puVar14 = local_98;
                if (local_98 == (uint *)0x0) {
                  puVar14 = local_a8;
                }
                uVar32 = *puVar14;
                if (uVar32 == 0) {
                  iVar19 = local_90 + 0x1e;
                  if (-1 < (int)(local_90 - 1)) {
                    iVar19 = local_90 - 1;
                  }
                  uVar35 = 0;
                  uVar17 = (ulonglong)(uint)(iVar19 >> 5);
                  if (iVar19 >> 5 < 1) {
                    uVar17 = uVar35;
                  }
                  iVar19 = 0;
                  do {
                    if (uVar17 == uVar35) goto LAB_143d69a0d;
                    iVar19 = iVar19 + 0x20;
                    uVar32 = puVar14[uVar35 + 1];
                    uVar35 = uVar35 + 1;
                  } while (uVar32 == 0);
                }
                else {
                  uVar35 = 0;
                  iVar19 = 0;
                }
                uVar21 = (ulonglong)(-uVar32 & uVar32);
                uVar17 = uVar21 * 2 + 1;
                lVar13 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                uVar32 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                if ((int)uVar32 < (int)local_90) {
                  uVar33 = 0xffffffff;
                  do {
                    param_2 = *(uint **)(local_b8 + (longlong)(int)uVar32 * 0x10);
                    local_3c8 = 0;
                    lStack_3c0 = 0;
                    local_3b8 = (uint *)0x0;
                    uVar12 = FUN_14043db3a();
                    lStack_3c0 = FUN_14477b664(uVar12);
                    lVar13 = FUN_14043db3a();
                    uVar12 = FUN_14043db3a();
                    FUN_1402d1bfa(&local_3b0,uVar12,param_2);
                    if (local_3c8 != local_3b0) {
                      local_3b8 = (uint *)0x0;
                    }
                    local_3c8 = local_3b0;
                    lVar11 = FUN_14043db3a();
                    if (lVar13 == 0) {
LAB_143d6951c:
                      lVar11 = lVar13;
                    }
                    else if (lVar11 == 0) {
                      lVar11 = 0;
                    }
                    else if ((*(int *)(lVar11 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
                            (*(longlong *)
                              (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                             == lVar11 + 0x30)) goto LAB_143d6951c;
                    if (lStack_3c0 != lVar11) {
                      local_3b8 = (uint *)0x0;
                    }
                    uVar12 = FUN_14477b664(lVar11);
                    lStack_3c0 = FUN_14477b664(uVar12);
                    param_4 = local_400;
                    if ((lStack_3c0 != 0) && (local_3c8 != 0)) {
                      local_3b8 = param_2;
                    }
                    local_410 = &local_3a8;
                    local_418 = local_3e8;
                    FUN_140d5315e(local_3f0,local_400,&local_3c8,local_3d8);
                    if (0 < DAT_14cb7eed0) break;
                    uVar33 = uVar33 & ~(uint)uVar21;
                    puVar14 = local_98;
                    if (local_98 == (uint *)0x0) {
                      puVar14 = local_a8;
                    }
                    iVar8 = (int)uVar35;
                    lVar13 = (longlong)iVar8;
                    uVar32 = puVar14[lVar13] & uVar33;
                    if (uVar32 == 0) {
                      iVar24 = local_90 + 0x1e;
                      if (-1 < (int)(local_90 - 1)) {
                        iVar24 = local_90 - 1;
                      }
                      iVar24 = iVar24 >> 5;
                      iVar19 = iVar19 + 0x20;
                      iVar20 = iVar24;
                      if (iVar24 < iVar8) {
                        iVar20 = iVar8;
                      }
                      if (iVar8 < iVar24) {
                        lVar11 = 0;
                        do {
                          uVar32 = puVar14[lVar13 + lVar11 + 1];
                          if (uVar32 != 0) {
                            uVar35 = (ulonglong)(iVar8 + (int)lVar11 + 1);
                            uVar33 = 0xffffffff;
                            goto LAB_143d69614;
                          }
                          iVar19 = iVar19 + 0x20;
                          lVar11 = lVar11 + 1;
                        } while (iVar20 - lVar13 != lVar11);
                        uVar33 = 0xffffffff;
                        iVar8 = iVar20;
                      }
                      uVar35 = (ulonglong)(iVar8 + 1);
                      param_4 = local_400;
                      uVar32 = local_90;
                    }
                    else {
LAB_143d69614:
                      uVar21 = (ulonglong)(-uVar32 & uVar32);
                      uVar17 = uVar21 * 2 + 1;
                      lVar13 = 0x3f;
                      if (uVar17 != 0) {
                        for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                        }
                      }
                      uVar32 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                      if ((int)local_90 <= (int)uVar32) {
                        uVar32 = local_90;
                      }
                    }
                  } while (uVar32 != uVar9);
                }
              }
            }
            else {
LAB_143d697aa:
              if (local_90 != 0) {
                puVar23 = local_98;
                if (local_98 == (uint *)0x0) {
                  puVar23 = local_a8;
                }
                uVar9 = *puVar23;
                if (uVar9 == 0) {
                  iVar19 = local_90 + 0x1e;
                  if (-1 < (int)(local_90 - 1)) {
                    iVar19 = local_90 - 1;
                  }
                  uVar35 = 0;
                  uVar17 = (ulonglong)(uint)(iVar19 >> 5);
                  if (iVar19 >> 5 < 1) {
                    uVar17 = uVar35;
                  }
                  iVar19 = 0;
                  do {
                    if (uVar17 == uVar35) goto LAB_143d693ec;
                    iVar19 = iVar19 + 0x20;
                    uVar9 = puVar23[uVar35 + 1];
                    uVar35 = uVar35 + 1;
                  } while (uVar9 == 0);
                }
                else {
                  uVar35 = 0;
                  iVar19 = 0;
                }
                uVar21 = (ulonglong)(-uVar9 & uVar9);
                uVar17 = uVar21 * 2 + 1;
                lVar13 = 0x3f;
                if (uVar17 != 0) {
                  for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                  }
                }
                uVar9 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                param_2 = (uint *)(ulonglong)uVar9;
                if ((int)uVar9 < (int)local_90) {
                  iVar8 = local_90 + 0x1e;
                  if (-1 < (int)(local_90 - 1)) {
                    iVar8 = local_90 - 1;
                  }
                  iVar8 = iVar8 >> 5;
                  uVar9 = 0xffffffff;
                  do {
                    param_2 = *(uint **)(local_b8 + (longlong)(int)param_2 * 0x10);
                    if ((param_2 != (uint *)0x0) &&
                       ((param_2 == puVar14 || (*(uint **)(param_2 + 0x28) == puVar14)))) {
                      local_3b8 = (uint *)0x0;
                      uVar12 = FUN_14043db3a();
                      lVar13 = FUN_14477b664(uVar12);
                      lStack_3c0 = lVar13;
                      lVar11 = FUN_14043db3a();
                      uVar12 = FUN_14043db3a();
                      FUN_1402d1bfa(&local_3b0,uVar12,param_2);
                      if (local_3b0 != 0) {
                        local_3b8 = (uint *)0x0;
                      }
                      local_3c8 = local_3b0;
                      lVar16 = FUN_14043db3a();
                      if (lVar11 == 0) {
LAB_143d69999:
                        lVar16 = lVar11;
                      }
                      else if (lVar16 == 0) {
                        lVar16 = 0;
                      }
                      else if ((*(int *)(lVar16 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                              (*(longlong *)
                                (*(longlong *)(lVar11 + 0x30) +
                                (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30))
                      goto LAB_143d69999;
                      if (lVar13 != lVar16) {
                        local_3b8 = (uint *)0x0;
                      }
                      uVar12 = FUN_14477b664(lVar16);
                      lStack_3c0 = FUN_14477b664(uVar12);
                      param_4 = local_400;
                      if (lStack_3c0 != 0 && local_3b0 != 0) {
                        local_3b8 = param_2;
                      }
                      local_410 = &local_3a8;
                      local_418 = local_3e8;
                      FUN_140d5315e(local_3f0,local_400,&local_3c8,local_3d8);
                      goto LAB_143d69a0d;
                    }
                    uVar9 = uVar9 & ~(uint)uVar21;
                    iVar24 = (int)uVar35;
                    lVar13 = (longlong)iVar24;
                    uVar32 = puVar23[lVar13] & uVar9;
                    if (uVar32 == 0) {
                      iVar20 = iVar8;
                      if (iVar8 < iVar24) {
                        iVar20 = iVar24;
                      }
                      param_2 = (uint *)0x0;
                      if (iVar8 <= iVar24) break;
                      lVar11 = 0;
                      while( true ) {
                        iVar19 = iVar19 + 0x20;
                        uVar32 = puVar23[lVar13 + lVar11 + 1];
                        if (uVar32 != 0) break;
                        lVar11 = lVar11 + 1;
                        if (iVar20 - lVar13 == lVar11) {
                          param_2 = (uint *)0x0;
                          goto LAB_143d693ec;
                        }
                      }
                      uVar35 = (ulonglong)(iVar24 + (int)lVar11 + 1);
                      uVar9 = 0xffffffff;
                    }
                    uVar21 = (ulonglong)(-uVar32 & uVar32);
                    uVar17 = uVar21 * 2 + 1;
                    lVar13 = 0x3f;
                    if (uVar17 != 0) {
                      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                      }
                    }
                    uVar33 = (iVar19 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                    uVar32 = uVar33;
                    if ((int)local_90 <= (int)uVar33) {
                      uVar32 = local_90;
                    }
                    param_2 = (uint *)(ulonglong)uVar32;
                  } while ((int)uVar33 < (int)local_90);
                }
                goto LAB_143d693ec;
              }
            }
LAB_143d69a0d:
            local_70 = 0;
            if (local_78 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            param_1 = local_3f0;
            uVar35 = uStack_b0 >> 0x20;
            uStack_b0 = uStack_b0 & 0xffffffff00000000;
            if ((int)uVar35 != 0) {
              FUN_14474875a(&local_b8,0);
            }
            iStack_88 = 0xffffffff;
            local_84 = 0;
            local_90 = 0;
            if (0x80 < local_8c) {
              local_8c = 0x80;
              FUN_1446efbd8(local_a8,0);
            }
            if (local_98 != (uint *)0x0) {
              FUN_1400020a8();
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          puVar14 = (uint *)FUN_141889b5a(param_4);
          if (puVar14 != (uint *)0x0) {
            local_b8 = (**(code **)(*(longlong *)puVar14 + 0x18))(puVar14);
            FUN_144a6406c(&local_3a8,plVar34);
            FUN_1407abeca(&local_b8,puVar14);
            local_410 = (uint *)0x0;
            local_418 = &local_3a8;
            FUN_140d549c8(param_1,param_4,&local_b8,param_3);
            param_2 = puVar14;
          }
        }
        FUN_1407acd04(local_390);
      }
    }
    if ((_DAT_14cb7eed0 & 0xffffffff) != 0) {
      if (DAT_14cb7eed0 < 1) {
        plVar34 = &DAT_14cb7eec8;
      }
      else {
        lVar13 = *(longlong *)(param_1 + 8);
        puVar14 = (uint *)(lVar13 + 0xb8);
        uVar35 = _DAT_14cb7eed0 & 0xffffffff;
        local_3f8 = puVar14;
        local_3f0 = param_1;
        do {
          lVar11 = DAT_14cb7eec8;
          param_2 = (uint *)((uVar35 - 1) * 0x58);
          lVar16 = FUN_14494f566((undefined1 *)((longlong)param_2 + DAT_14cb7eec8 + 0x28));
          uVar17 = _DAT_14cb7eef8;
          if (*(int *)(lVar13 + 0x88) != *(int *)(lVar13 + 0xb4)) {
            lVar16 = *(longlong *)(lVar16 + 8);
            uVar9 = (uint)((ulonglong)lVar16 >> 0x10);
            uVar32 = (uint)lVar16 & 0xffff;
            puVar23 = *(uint **)(lVar13 + 0xc0);
            if (*(uint **)(lVar13 + 0xc0) == (uint *)0x0) {
              puVar23 = puVar14;
            }
            uVar9 = puVar23[*(int *)(lVar13 + 200) - 1U &
                            (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar32) +
                            (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar32 >> 4)];
            if (uVar9 != 0xffffffff) {
              puVar27 = (undefined4 *)(lVar11 + (longlong)param_2);
              do {
                if (*(longlong *)(*(longlong *)(lVar13 + 0x80) + (longlong)(int)uVar9 * 0x14) ==
                    lVar16) {
                  lVar11 = (longlong)DAT_14cb7eef8;
                  uVar9 = DAT_14cb7eef8 + 1;
                  _DAT_14cb7eef8 = CONCAT44(DAT_14cb7eefc,uVar9);
                  if (DAT_14cb7eefc < uVar9) {
                    FUN_14188f9ee(&DAT_14cb7eef0,uVar17 & 0xffffffff);
                  }
                  lVar16 = DAT_14cb7eef0;
                  lVar11 = lVar11 * 0x58;
                  uVar10 = puVar27[1];
                  uVar4 = puVar27[2];
                  uVar5 = puVar27[3];
                  puVar1 = (undefined4 *)(DAT_14cb7eef0 + lVar11);
                  *puVar1 = *puVar27;
                  puVar1[1] = uVar10;
                  puVar1[2] = uVar4;
                  puVar1[3] = uVar5;
                  puVar28 = (undefined8 *)(lVar16 + 0x10 + lVar11);
                  *puVar28 = 0;
                  puVar28[1] = 0;
                  *(undefined8 *)(lVar16 + 0x20 + lVar11) = 0;
                  *(undefined8 *)(lVar16 + 0x10 + lVar11) = *(undefined8 *)(puVar27 + 4);
                  uVar12 = FUN_14477b664(*(undefined8 *)(puVar27 + 6));
                  uVar12 = FUN_14477b664(uVar12);
                  *(undefined8 *)(lVar16 + 0x18 + lVar11) = uVar12;
                  *(undefined8 *)(lVar16 + 0x20 + lVar11) = *(undefined8 *)(puVar27 + 8);
                  *(undefined8 *)(lVar16 + 0x38 + lVar11) = 0;
                  puVar28 = (undefined8 *)(lVar16 + 0x28 + lVar11);
                  *puVar28 = 0;
                  puVar28[1] = 0;
                  *(undefined8 *)(lVar16 + 0x28 + lVar11) = *(undefined8 *)(puVar27 + 10);
                  uVar12 = FUN_14477b664(*(undefined8 *)(puVar27 + 0xc));
                  uVar12 = FUN_14477b664(uVar12);
                  *(undefined8 *)(lVar16 + 0x30 + lVar11) = uVar12;
                  *(undefined8 *)(lVar16 + 0x38 + lVar11) = *(undefined8 *)(puVar27 + 0xe);
                  uVar12 = *(undefined8 *)(puVar27 + 0x12);
                  puVar28 = (undefined8 *)(lVar16 + 0x40 + lVar11);
                  *puVar28 = *(undefined8 *)(puVar27 + 0x10);
                  puVar28[1] = uVar12;
                  fVar37 = (float)puVar27[0x14];
                  *(float *)(lVar16 + 0x50 + lVar11) = fVar37;
                  _DAT_14cb7ef00 = CONCAT44(DAT_14cb7ef00_4,fVar37 + _DAT_14cb7ef00);
                  if (uVar35 != (_DAT_14cb7eed0 & 0xffffffff)) {
                    memmove((undefined1 *)(DAT_14cb7eec8 + (longlong)param_2),
                            (undefined1 *)((longlong)param_2 + DAT_14cb7eec8 + 0x58),
                            (longlong)(DAT_14cb7eed0 - (int)uVar35) * 0x58);
                  }
                  puVar14 = local_3f8;
                  _DAT_14cb7eed0 = CONCAT44(DAT_14cb7eed4,DAT_14cb7eed0 + -1);
                  FUN_14188fb60();
                  _DAT_14cb7eed8 = CONCAT44(DAT_14cb7eedc,DAT_14cb7eed8 - (float)puVar27[0x14]);
                  break;
                }
                uVar9 = *(uint *)(*(longlong *)(lVar13 + 0x80) + (longlong)(int)uVar9 * 0x14 + 0xc);
              } while (uVar9 != 0xffffffff);
            }
          }
          bVar36 = 1 < (longlong)uVar35;
          uVar35 = uVar35 - 1;
        } while (bVar36);
        plVar34 = &DAT_14cb7eec8;
        if (DAT_14cb7eed0 == 0) {
          plVar34 = &DAT_14cb7eef0;
        }
        param_4 = local_400;
        param_1 = local_3f0;
        if (DAT_14cb7eed0 == 0 && DAT_14cb7eef8 == 0) goto LAB_143d69e5d;
      }
      uVar9 = rand();
      lVar13 = *plVar34;
      if ((int)plVar34[1] < 2) {
        uVar35 = 0;
      }
      else {
        uVar21 = (ulonglong)((int)plVar34[1] - 1);
        fVar37 = ((float)(uVar9 & 0x7fff) / 32767.0) * *(float *)(plVar34 + 2);
        pfVar31 = (float *)(lVar13 + 0x50);
        uVar17 = 0;
        do {
          uVar35 = uVar17;
          if (fVar37 <= *pfVar31) break;
          fVar37 = fVar37 - *pfVar31;
          uVar17 = uVar17 + 1;
          pfVar31 = pfVar31 + 0x16;
          uVar35 = uVar21;
        } while (uVar21 != uVar17);
      }
      puVar14 = (uint *)(lVar13 + uVar35 * 0x58);
      if ((((*(longlong *)(lVar13 + 8 + uVar35 * 0x58) == 0) || (puVar14[1] == 0)) ||
          (uVar9 = *puVar14, (int)uVar9 < 0)) ||
         (((DAT_14c9647dc <= (int)uVar9 ||
           (lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar13 == 0)) ||
          ((*(uint *)(lVar13 + 0x10) != puVar14[1] || ((*(uint *)(lVar13 + 8) & 0x10200000) != 0))))
         )) {
        uVar10 = (undefined4)CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        if (*(char *)(param_4 + 0x42) == '\0') {
          uVar10 = FUN_140899648(puVar14 + 10);
        }
        lVar13 = FUN_14494f566(puVar14 + 10);
        puVar27 = &DAT_14c763940;
        if ((DAT_14cb7f870 != 0) &&
           ((int)(uint)*(byte *)(lVar13 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8))) {
          puVar27 = (undefined4 *)
                    ((ulonglong)*(byte *)(lVar13 + 0x2c) * 0x10 +
                    *(longlong *)(DAT_14cb7f870 + 0x3a0));
        }
        if (*(char *)((longlong)puVar27 + 0xd) == '\x02') {
          FUN_14887d568(*(undefined8 *)(param_1 + 8),&local_3a8,puVar14 + 4,uVar10);
          uVar9 = local_3a8;
          uVar32 = uStack_3a4;
          uVar33 = uStack_3a0;
          uVar25 = uStack_39c;
        }
        else {
          local_418 = (uint *)CONCAT71(local_418._1_7_,(char)uVar10);
          FUN_14110826c(*(undefined8 *)(param_1 + 8),&local_3a8,0);
          uVar9 = local_3a8;
          uVar32 = uStack_3a4;
          uVar33 = uStack_3a0;
          uVar25 = uStack_39c;
        }
      }
      else {
        uVar9 = *puVar14;
        uVar32 = puVar14[1];
        uVar33 = puVar14[2];
        uVar25 = puVar14[3];
      }
      *param_6 = uVar9;
      param_6[1] = uVar32;
      param_6[2] = uVar33;
      param_6[3] = uVar25;
      if ((*(longlong *)(param_6 + 2) != 0) && (param_6[1] != 0)) {
        uVar9 = *param_6;
        uVar12 = 0;
        if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_143d69e5f;
        lVar13 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        if (((lVar13 != 0) && (*(uint *)(lVar13 + 0x10) == param_6[1])) &&
           ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)) {
          lVar13 = *(longlong *)(puVar14 + 10);
          if (*param_5 != lVar13) {
            param_5[2] = 0;
          }
          *param_5 = lVar13;
          if (param_5[1] != *(longlong *)(puVar14 + 0xc)) {
            param_5[2] = 0;
          }
          uVar12 = FUN_14477b664();
          lVar13 = FUN_14477b664(uVar12);
          param_5[1] = lVar13;
          lVar13 = *(longlong *)(puVar14 + 0xe);
          param_5[2] = lVar13;
          uVar9 = puVar14[0x11];
          uVar32 = puVar14[0x12];
          uVar33 = puVar14[0x13];
          *(uint *)(param_5 + 3) = puVar14[0x10];
          *(uint *)((longlong)param_5 + 0x1c) = uVar9;
          *(uint *)(param_5 + 4) = uVar32;
          *(uint *)((longlong)param_5 + 0x24) = uVar33;
          uVar12 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
          goto LAB_143d69e5f;
        }
      }
    }
  }
LAB_143d69e5d:
  uVar12 = 0;
LAB_143d69e5f:
  if ((local_60 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 143d69fb0 FUN_143d69fb0 body=69 status=ok
// SIG undefined FUN_143d69fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d69fb0(void)

{
  _DAT_14cb7ef90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d69ff2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7ef98,1);
  return;
}



// FUNCTION 143d69ff6 FUN_143d69ff6 body=375 status=ok
// SIG undefined FUN_143d69ff6(void)

ulonglong FUN_143d69ff6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  longlong *plVar9;
  undefined7 uVar8;
  
  lVar3 = FUN_14494f566(param_1 + 0x98);
  if (lVar3 == 0) {
    uVar7 = 0;
    goto LAB_143d6a121;
  }
  uVar4 = FUN_14494f566(param_1 + 0x98);
  cVar2 = FUN_141889bec(uVar4);
  uVar8 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if (cVar2 == '\0') goto LAB_143d6a121;
  plVar6 = *(longlong **)(param_1 + 0x78);
  if (((plVar6 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x80) == -1)) ||
     (*plVar6 != *(longlong *)(param_1 + 0x80))) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *(int *)(plVar6 + 0x21) = (int)plVar6[0x21] + 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x88);
  if (lVar3 == 0) {
LAB_143d6a0f3:
    uVar7 = CONCAT71(uVar8,1);
  }
  else {
    if (plVar6 == (longlong *)0x0) {
      uVar7 = CONCAT71(uVar8,1);
      goto LAB_143d6a121;
    }
    plVar5 = plVar6 + 0x24;
    plVar9 = plVar5;
    do {
      lVar1 = *plVar9;
      plVar9 = (longlong *)(lVar1 + 0x30);
    } while (lVar1 != 0 && lVar3 != lVar1);
    plVar9 = plVar5;
    if (lVar1 != 0) {
      do {
        lVar1 = *plVar9;
        plVar9 = (longlong *)(lVar1 + 0x30);
      } while (lVar1 != 0 && lVar3 != lVar1);
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x20) == '\0')) {
        do {
          lVar1 = *plVar5;
          plVar5 = (longlong *)(lVar1 + 0x30);
        } while (lVar1 != 0 && lVar3 != lVar1);
        if (lVar1 == 0) goto LAB_143d6a0f3;
        uVar7 = CONCAT71(uVar8,*(char *)(lVar1 + 0x22) != '\x01');
        goto LAB_143d6a0f6;
      }
    }
    uVar7 = 0;
  }
LAB_143d6a0f6:
  if (((plVar6 != (longlong *)0x0) &&
      (*(int *)(plVar6 + 0x21) = (int)plVar6[0x21] + -1, (int)plVar6[0x26] < 1)) &&
     (FUN_1400847bc(plVar6 + 0x17,0), (int)plVar6[0x21] == 0)) {
    FUN_140087e46(plVar6);
    if (*plVar6 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_143d6a121;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar6);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar6);
    }
  }
LAB_143d6a121:
  return uVar7 & 0xffffffff;
}



// FUNCTION 143d6a16d FUN_143d6a16d body=542 status=ok
// SIG undefined FUN_143d6a16d(void)

void FUN_143d6a16d(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  undefined1 *local_b0;
  undefined1 local_a1;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  longlong local_50 [2];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  local_90 = *param_1;
  local_88 = *(undefined4 *)(param_1 + 1);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0xc);
  uStack_80 = *(undefined4 *)(param_1 + 2);
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0x14);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_1 + 4);
  lVar5 = (longlong)local_70;
  _Src = (void *)param_1[3];
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,_Src,lVar5 * 2);
  }
  FUN_140d56af4(&local_58,&local_90,&local_68);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  lVar5 = FUN_140d56892(&local_58);
  if (lVar5 == 0) {
    if (local_50[0] != 0) {
      lVar5 = FUN_14050fd64();
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      local_b0 = &local_a1;
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 0;
      FUN_140a1e0be(lVar5 + 0x1e8,local_a0,local_50);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_98 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_98)(local_98);
          LOCK();
          piVar2 = (int *)((longlong)local_98 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_98 + 0x10))(local_98);
          }
        }
      }
      if ((int)uStack_60 != 0) {
        if (local_68 == (undefined8 *)0x0) goto LAB_143d6a310;
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        uStack_60 = uStack_60 & 0xffffffff00000000;
      }
      if (local_68 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_143d6a310:
    lVar5 = FUN_140d56892(param_1);
    if (lVar5 == 0) goto LAB_143d6a34a;
  }
  else {
    param_1 = &local_58;
  }
  uVar4 = FUN_140d56892(param_1);
  iVar3 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
    FUN_14188fcde(param_2,iVar3);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar3 * 8) = uVar4;
LAB_143d6a34a:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6a38c FUN_143d6a38c body=239 status=ok
// SIG undefined FUN_143d6a38c(void)

undefined1 FUN_143d6a38c(undefined8 param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    if (param_3 != 3) {
      if (param_3 == 2) {
        puVar2 = &DAT_14c763940;
        if ((DAT_14cb7f870 != 0) &&
           ((int)(uint)*(byte *)(param_2 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8))) {
          puVar2 = (undefined4 *)
                   ((ulonglong)*(byte *)(param_2 + 0x2c) * 0x10 +
                   *(longlong *)(DAT_14cb7f870 + 0x3a0));
        }
        uVar3 = *(char *)((longlong)puVar2 + 0xd) == '\x02';
      }
      else {
        uVar3 = 1;
        if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
        }
      }
      goto LAB_143d6a3c0;
    }
    puVar2 = &DAT_14c763940;
    if ((DAT_14cb7f870 != 0) &&
       ((int)(uint)*(byte *)(param_2 + 0x2c) < *(int *)(DAT_14cb7f870 + 0x3a8))) {
      puVar2 = (undefined4 *)
               ((ulonglong)*(byte *)(param_2 + 0x2c) * 0x10 + *(longlong *)(DAT_14cb7f870 + 0x3a0));
    }
    if (*(char *)((longlong)puVar2 + 0xd) != '\x02') {
      local_28 = 0;
      uStack_20 = 0;
      lVar1 = FUN_140206ee8(param_2 + 0x30);
      if (lVar1 != 0) {
        uVar3 = *(undefined1 *)(lVar1 + 0x43);
        goto LAB_143d6a3c0;
      }
    }
  }
  uVar3 = 0;
LAB_143d6a3c0:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d6a4da FUN_143d6a4da body=26 status=ok
// SIG undefined FUN_143d6a4da(void)

undefined8 * FUN_143d6a4da(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 143d6a600 FUN_143d6a600 body=69 status=ok
// SIG undefined FUN_143d6a600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6a600(void)

{
  _DAT_14cb7f758 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6a642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7f760,1);
  return;
}



// FUNCTION 143d6a690 FUN_143d6a690 body=147 status=ok
// SIG undefined FUN_143d6a690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_143d6a690(ushort param_1)

{
  undefined *puVar1;
  
  if ((DAT_14cb7f870 == 0) || (*(int *)(DAT_14cb7f870 + 0x378) <= (int)(uint)param_1)) {
    puVar1 = &DAT_14cb7f900;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb7f918) {
      FUN_144b3d300(&DAT_14cb7f918);
      if (DAT_14cb7f918 == -1) {
        _DAT_14cb7f900 = 0;
        uRam000000014cb7f908 = 0;
        _DAT_14cb7f910 = 0;
        _Init_thread_footer(&DAT_14cb7f918);
      }
    }
  }
  else {
    puVar1 = (undefined *)((ulonglong)((uint)param_1 * 0x18) + *(longlong *)(DAT_14cb7f870 + 0x370))
    ;
  }
  return puVar1;
}



// FUNCTION 143d6a723 FUN_143d6a723 body=59 status=ok
// SIG undefined FUN_143d6a723(void)

void FUN_143d6a723(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb7f938;
  if (DAT_14cb7f938 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb7f938 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6a753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d6a75e FUN_143d6a75e body=49 status=ok
// SIG undefined FUN_143d6a75e(void)

void FUN_143d6a75e(void)

{
  FUN_140df641b(DAT_14cb7f958,DAT_14cb7f960);
  if (DAT_14cb7f958 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d6a7d8 FUN_143d6a7d8 body=26 status=ok
// SIG undefined FUN_143d6a7d8(void)

undefined8 * FUN_143d6a7d8(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = &DAT_14c846480;
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 143d6a7f7 FUN_143d6a7f7 body=41 status=ok
// SIG undefined FUN_143d6a7f7(void)

void FUN_143d6a7f7(void)

{
  DAT_14cb7f9e0 = 0;
  if (DAT_14cb7f9d8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66342();
  return;
}



// FUNCTION 143d6a820 FUN_143d6a820 body=41 status=ok
// SIG undefined FUN_143d6a820(void)

void FUN_143d6a820(void)

{
  DAT_14cb7fa30 = 0;
  if (DAT_14cb7fa28 != 0) {
    FUN_1400020a8();
  }
  FUN_145d663e0();
  return;
}



// FUNCTION 143d6a85a FUN_143d6a85a body=91 status=ok
// SIG undefined FUN_143d6a85a(void)

void FUN_143d6a85a(void)

{
  if (DAT_14cb7fbc0 != 0) {
    if (DAT_14cb7fbb8 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb7fbb8)(DAT_14cb7fbb8,0);
    FUN_1446efa72(&DAT_14cb7fbb8,0,0,0x10);
    DAT_14cb7fbc0 = 0;
  }
  if (DAT_14cb7fbb8 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d6a8b6 FUN_143d6a8b6 body=8143 status=ok
// SIG undefined FUN_143d6a8b6(void)

void FUN_143d6a8b6(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_70 [16];
  undefined8 *local_60;
  int local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1458517e8(&DAT_14cb109f0,&local_60,&DAT_148880a52);
  FUN_14576a192(&DAT_14cb10a20,&local_60,FUN_140e8c066);
  FUN_145afd586(&local_60,FUN_146551676);
  FUN_14126834e(&DAT_14cb10aa8,local_70,&local_60);
  FUN_1401cb1ee(&local_60);
  FUN_1465516aa(&local_60);
  FUN_140fdabd4();
  local_88 = 0;
  uStack_80._0_4_ = 1;
  uStack_80._4_4_ = 0;
  FUN_141518130(&local_88,0);
  lVar4 = local_88;
  FUN_140056680(&local_60,L"SpawnItemsFromItemPoolUsingActor_Drop");
  FUN_140056680(local_70,L"SpawnItemsFromItemPool_Drop");
  FUN_141517fc0(lVar4,0x10,local_70,&local_60);
  iVar1 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,iVar1);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorScript.IsScriptStateEnabled");
  FUN_140056680(local_70,L"GbxActorScript.IsEventGraphEnabled");
  FUN_141517fc0(lVar4,0x10,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorScript.SetScriptStateEnabled");
  FUN_140056680(local_70,L"GbxActorScript.SetEventGraphEnabled");
  FUN_141517fc0(lVar4,0x10,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorScriptInterface.IsScriptStateEnabled");
  FUN_140056680(local_70,L"GbxActorScriptInterface.IsEventGraphEnabled");
  FUN_141517fc0(lVar4,0x10,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorScriptInterface.SetScriptStateEnabled");
  FUN_140056680(local_70,L"GbxActorScriptInterface.SetEventGraphEnabled");
  FUN_141517fc0(lVar4,0x10,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxMomentFunctionLibrary.EndMoment");
  FUN_140056680(local_70,L"GbxMomentFunctionLibrary.StopMoment");
  FUN_141517fc0(lVar4,0x10,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorScript");
  FUN_140056680(local_70,L"/Script/GbxGame.GbxScript");
  FUN_141517fc0(lVar4,2,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorScriptClass");
  FUN_140056680(local_70,L"GbxScriptClass");
  FUN_141517fc0(lVar4,2,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorScriptInterface");
  FUN_140056680(local_70,L"GbxScriptInterface");
  FUN_141517fc0(lVar4,2,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorScriptBlueprint");
  FUN_140056680(local_70,L"GbxScriptBlueprint");
  FUN_141517fc0(lVar4,2,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxSequenceActorDefObject");
  FUN_140056680(local_70,L"GbxSequenceSpawnDefObject");
  FUN_141517fc0(lVar4,2,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTrickScript");
  FUN_140056680(local_70,L"GbxTrickScript_Instanced");
  FUN_141517fc0(lVar4,2,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTrickScript");
  FUN_140056680(local_70,L"GbxTrickScript_Const");
  FUN_141517fc0(lVar4,2,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.GbxGameCover");
  FUN_140056680(local_70,L"/Script/GbxAI.Cover");
  FUN_141517fc0(lVar4,2,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.GbxCoverSlotComponent");
  FUN_140056680(local_70,L"/Script/GbxAI.CoverSlotComponent");
  FUN_141517fc0(lVar4,0x10002,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.GbxSpawnEncounter");
  FUN_140056680(local_70,L"/Script/GbxGame.GbxSpawnGroup");
  FUN_141517fc0(lVar4,0x10002,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxAnimNode_Rotation_AimOffset");
  FUN_140056680(local_70,L"GbxAnimNode_Rotation_AimOffsetBase");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"MissionAliasRef");
  FUN_140056680(local_70,L"MissionGraphAliasRef");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"ContingentFactChange");
  FUN_140056680(local_70,L"FactsSystemValueReference");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GestaltOptionalPartData");
  FUN_140056680(local_70,L"GesaltOptionalPartData");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"LimbImpactEffectData");
  FUN_140056680(local_70,L"BounceImpactEffectData");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"LimbImpactEffectState");
  FUN_140056680(local_70,L"BounceImpactEffectState");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"WeightedGbxCharacterMaterialParameter");
  FUN_140056680(local_70,L"WeightedGbxMaterialParameter");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxAnimNode_SlopeWarping");
  FUN_140056680(local_70,L"GbxAnimNode_LegIK");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxArmIKState");
  FUN_140056680(local_70,L"TwoBoneIKState");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxWeightedMaterialParameter");
  FUN_140056680(local_70,L"WeightedGbxCharacterMaterialParameter");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.GbxBrainAspectSettings_Teleport");
  FUN_140056680(local_70,L"/Script/GbxAI.GbxBrainAspectSettings_Teleport");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxSequenceActorDefObject.GbxActorDef");
  FUN_140056680(local_70,L"GbxSequenceActorDefObject.SpawnDef");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxCharacter.GbxActorData");
  FUN_140056680(local_70,L"GbxCharacter.SpawnableData");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxCharacterDef.TargetingQuery");
  FUN_140056680(local_70,L"GbxCharacterDef.targeting_query");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxCharacterDef.CharacterMovementDef");
  FUN_140056680(local_70,L"GbxCharacterDef.movement");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"InteractiveObject.GbxActorData");
  FUN_140056680(local_70,L"InteractiveObject.SpawnableData");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"InteractiveObject.BalanceData");
  FUN_140056680(local_70,L"InteractiveObject.balance_data");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxSequenceActorData.PreviewGbxActorDef");
  FUN_140056680(local_70,L"GbxSequenceActorData.PreviewSpawnDef");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxSequenceActorData.PreviewBodyDataPtr");
  FUN_140056680(local_70,L"GbxSequenceActorData.PreviewBodyData");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxRotationChannelData_Child.bDragParentIfClamped");
  FUN_140056680(local_70,L"GbxRotationChannelData_Aim.bCorrectBodyIfYawClamped");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxRotationChannelData_Child.bBoostWithParentRotation");
  FUN_140056680(local_70,L"GbxRotationChannelData_Aim.bBoostAimWithBodyRotation");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxBrainAspect_Rotate.Target");
  FUN_140056680(local_70,L"GbxBrainAspect_Rotate.AllChannelsTarget");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxBrainAspect_Rotate.RotationPreset");
  FUN_140056680(local_70,L"GbxBrainAspect_Rotate.Presets");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"PerchComponent.IKAlignmentTarget");
  FUN_140056680(local_70,L"PerchComponent.LeftArmIKTarget");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GoreRegionDef.LimbImpactEffectDataOverride");
  FUN_140056680(local_70,L"GoreRegionDef.BounceImpactEffectData");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTrick_Gib.LimbImpactEffectDataOverride");
  FUN_140056680(local_70,L"GbxTrick_Gib.PerGibImpactData");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorStateSequence.ActorStateMachine");
  FUN_140056680(local_70,L"GbxActorStateSequence.ActorStateMachineName");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorStateSequence.DefaultState");
  FUN_140056680(local_70,L"GbxActorStateSequence.DefaultStateName");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorStateSequence.PreviewState");
  FUN_140056680(local_70,L"GbxActorStateSequence.PreviewStateName");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxCharacterLegDefinition.FootBone");
  FUN_140056680(local_70,L"GbxCharacterLegDefinition.AnkleBone");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxCharacterLegDefinition.FootBoneHeightOffset");
  FUN_140056680(local_70,L"GbxCharacterLegDefinition.AnkleBoneHeightOffset");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxCharacterLegData.bUseFootHeightRetargeting");
  FUN_140056680(local_70,L"GbxCharacterLegData.bUseIKRetargeting");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxFootPlantingData.FootSpeedCurveName");
  FUN_140056680(local_70,L"GbxFootPlantingData.IKSpeedCurveName");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.IKBone");
  FUN_140056680(local_70,L"TwoBoneIKState.IKBone");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.OffsetBone");
  FUN_140056680(local_70,L"TwoBoneIKState.OffsetBone");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.StartStretchRatio");
  FUN_140056680(local_70,L"TwoBoneIKState.StartStretchRatio");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.MaxStretchScale");
  FUN_140056680(local_70,L"TwoBoneIKState.MaxStretchScale");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.TwistAxis");
  FUN_140056680(local_70,L"TwoBoneIKState.TwistAxis");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.EffectorTargetOverride");
  FUN_140056680(local_70,L"TwoBoneIKState.EffectorTargetOverride");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.EffectorLocationOverride");
  FUN_140056680(local_70,L"TwoBoneIKState.EffectorLocationOverride");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.EffectorLocationSpaceOverride");
  FUN_140056680(local_70,L"TwoBoneIKState.EffectorLocationSpaceOverride");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.JointTargetLocationSpace");
  FUN_140056680(local_70,L"TwoBoneIKState.JointTargetLocationSpace");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.JointTarget");
  FUN_140056680(local_70,L"TwoBoneIKState.JointTarget");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.JointTargetLocation");
  FUN_140056680(local_70,L"TwoBoneIKState.JointTargetLocation");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.TakeRotationFromEffectorSpace");
  FUN_140056680(local_70,L"TwoBoneIKState.TakeRotationFromEffectorSpace");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.MaintainEffectorRelRot");
  FUN_140056680(local_70,L"TwoBoneIKState.MaintainEffectorRelRot");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.bAllowStretching");
  FUN_140056680(local_70,L"TwoBoneIKState.bAllowStretching");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.bAllowTwist");
  FUN_140056680(local_70,L"TwoBoneIKState.bAllowTwist");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.bOverrideEffector");
  FUN_140056680(local_70,L"TwoBoneIKState.bOverrideEffector");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.bOverrideAlpha");
  FUN_140056680(local_70,L"TwoBoneIKState.bOverrideAlpha");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxTwoBoneIKState.AlphaOverride");
  FUN_140056680(local_70,L"TwoBoneIKState.AlphaOverride");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"GbxActorPartDef_Material.SlotName_DEPRECATED");
  FUN_140056680(local_70,L"GbxActorPartDef_Material.SlotName");
  FUN_141517fc0(lVar4,0x20,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.GbxBrainAspectSettings_Lead");
  FUN_140056680(local_70,L"/Script/GbxAI.GbxBrainAspectSettings_Lead");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.GbxBrainAspect_Lead");
  FUN_140056680(local_70,L"/Script/GbxAI.GbxBrainAspect_Lead");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame");
  FUN_140056680(local_70,L"/Script/GbxStandIn");
  FUN_141517fc0(lVar4,0x40,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.GbxRotationChannelData");
  FUN_140056680(local_70,L"/Script/GbxEngine.GbxRotationChannelData");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.GbxRotationChannelData_Child");
  FUN_140056680(local_70,L"/Script/GbxEngine.GbxRotationChannelData_Child");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  uVar2 = (uint)uStack_80;
  lVar4 = (longlong)(int)(uint)uStack_80;
  uStack_80._0_4_ = (uint)uStack_80 + 1;
  if (uStack_80._4_4_ < (uint)uStack_80) {
    FUN_141518130(&local_88,uVar2);
  }
  lVar4 = lVar4 * 0xa0 + local_88;
  FUN_140056680(&local_60,L"/Script/GbxGame.MissionObjectiveAspect_UpdateCountModifier");
  FUN_140056680(local_70,L"/Script/GbxGame.MissionObjectiveAspect_UpdateCountDisplayModifier");
  FUN_141517fc0(lVar4,4,local_70,&local_60);
  FUN_140056680(&local_60,L"GbxGame");
  local_98 = local_88;
  local_90 = (uint)uStack_80;
  FUN_141071fba(&local_98,&local_60);
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1461981f2();
  FUN_146545eff();
  FUN_1465450dc();
  FUN_145ace006();
  FUN_1459a97a3();
  FUN_14611591c();
  if (DAT_14cb5e3d0 == '\0') {
    FUN_145885206(FUN_1486a14b0);
    DAT_14cb5e3d0 = '\x01';
  }
  FUN_140f26c7f();
  FUN_14654822e();
  FUN_14655525c();
  FUN_146118376();
  if (DAT_14cb5ee88 == '\0') {
    FUN_14588e26a(FUN_1486b0df8);
    DAT_14cb5ee88 = '\x01';
  }
  FUN_145c6ab74();
  local_60 = (undefined8 *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *local_60 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_60[2] = lVar3;
  *local_60 = &PTR_FUN_149e062c0;
  local_60[3] = &LAB_145cb84f2;
  FUN_1448b6402(&DAT_14c9a1e20,local_70,&local_60);
  if (local_58 != 0) {
    if (local_60 == (undefined8 *)0x0) goto LAB_143d6c827;
    (**(code **)*local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143d6c827:
  FUN_1407a3a24(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d6c886 FUN_143d6c886 body=78 status=ok
// SIG undefined FUN_143d6c886(void)

void FUN_143d6c886(void)

{
  FUN_14588e26a(FUN_147e27030);
  DAT_14cb5ee88 = 0;
  FUN_145c6325a();
  FUN_14655ceed();
  FUN_1460287ba();
  FUN_145c8c79c(&DAT_14cb7c010);
  FUN_145885206(FUN_147f5a8b0);
  DAT_14cb5e3d0 = 0;
  return;
}



// FUNCTION 143d6c8d4 FUN_143d6c8d4 body=69 status=ok
// SIG undefined FUN_143d6c8d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6c8d4(void)

{
  _DAT_14cb7fa48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6c916. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fa50,1);
  return;
}



// FUNCTION 143d6c919 FUN_143d6c919 body=69 status=ok
// SIG undefined FUN_143d6c919(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6c919(void)

{
  _DAT_14cb7fa90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6c95b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fa98,1);
  return;
}



// FUNCTION 143d6c95e FUN_143d6c95e body=69 status=ok
// SIG undefined FUN_143d6c95e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6c95e(void)

{
  _DAT_14cb7faa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6c9a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fab0,1);
  return;
}



// FUNCTION 143d6c9a4 FUN_143d6c9a4 body=57 status=ok
// SIG undefined FUN_143d6c9a4(void)

void FUN_143d6c9a4(longlong *param_1)

{
  FUN_1416524e8();
  (**(code **)(*param_1 + 0x2a8))(param_1);
  FUN_1447cd2ec(param_1 + 0x27,0);
                    /* WARNING: Could not recover jumptable at 0x000143d6c9d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2e8))(param_1);
  return;
}



// FUNCTION 143d6c9de FUN_143d6c9de body=859 status=ok
// SIG undefined FUN_143d6c9de(void)

void FUN_143d6c9de(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_e8 [40];
  uint *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1459767dc(*(undefined8 *)(param_1 + 0x148));
  if ((longlong)(int)uStack_90 == 0) {
    bVar3 = true;
  }
  else {
    lVar12 = 0;
    do {
      bVar16 = *(longlong *)(local_98 + lVar12) == param_2;
      bVar3 = !bVar16;
      if (bVar16) break;
      bVar16 = (longlong)(int)uStack_90 * 8 + -8 != lVar12;
      lVar12 = lVar12 + 8;
    } while (bVar16);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (!bVar3) {
    *(longlong *)(param_1 + 0x150) = param_2;
    uVar13 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar10 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x1bc);
    if (uVar10 != 0) {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar10);
      }
      FUN_1461f8d8e(&local_98,uVar10);
      iVar4 = 1;
      if (3 < uVar10) {
        uVar10 = (uVar10 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar10 != 0) {
          for (; uVar10 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar4)) {
        local_50 = iVar4;
        FUN_140906920();
      }
    }
    local_b8 = param_1 + 0x188;
    local_c0 = (uint *)(param_1 + 0x198);
    iVar4 = *(int *)(param_1 + 0x1b0);
    uVar15 = 1;
    iVar14 = 0;
    iVar5 = 0;
    if (iVar4 != 0) {
      puVar6 = *(uint **)(param_1 + 0x1a8);
      if (*(uint **)(param_1 + 0x1a8) == (uint *)0x0) {
        puVar6 = local_c0;
      }
      uVar10 = *puVar6;
      if (uVar10 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar13 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar13;
        }
        iVar14 = 0;
        do {
          if (uVar15 == uVar13) goto LAB_143d6cbc1;
          iVar14 = iVar14 + 0x20;
          uVar10 = puVar6[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar13 = 0;
      }
      uVar15 = (ulonglong)(-uVar10 & uVar10);
      uVar1 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 != iVar4) {
      uVar10 = 0xffffffff;
      do {
        lVar12 = (longlong)iVar5 * 0x18 + *(longlong *)(param_1 + 0x188);
        FUN_1434d0480(*(undefined8 *)(param_1 + 0x148),&local_b0,lVar12);
        if (local_b0 == 0) {
          local_a8 = lVar12 + 8;
          local_b0 = lVar12;
          FUN_140906722(&local_98,local_9c,&local_b0,0);
        }
        uVar10 = uVar10 & ~(uint)uVar15;
        puVar6 = *(uint **)(param_1 + 0x1a8);
        if (*(uint **)(param_1 + 0x1a8) == (uint *)0x0) {
          puVar6 = local_c0;
        }
        iVar2 = *(int *)(param_1 + 0x1b0);
        iVar5 = (int)uVar13;
        lVar12 = (longlong)iVar5;
        uVar9 = puVar6[lVar12] & uVar10;
        if (uVar9 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar5 < iVar7) {
            lVar11 = 0;
            do {
              uVar9 = puVar6[lVar12 + lVar11 + 1];
              if (uVar9 != 0) {
                uVar13 = (ulonglong)(iVar5 + (int)lVar11 + 1);
                uVar10 = 0xffffffff;
                goto LAB_143d6cce8;
              }
              iVar14 = iVar14 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar8 - lVar12 != lVar11);
            uVar10 = 0xffffffff;
            iVar5 = iVar8;
          }
          uVar13 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar2;
        }
        else {
LAB_143d6cce8:
          uVar15 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar5 = (iVar14 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar5) {
            iVar5 = iVar2;
          }
        }
      } while (iVar5 != iVar4);
    }
LAB_143d6cbc1:
    FUN_1485bf85a(local_b8,&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140105116(&local_98);
    FUN_1447f69b6(param_1 + 0x1f8);
    FUN_1447f69b6(param_1 + 0x1e0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6cd4f FUN_143d6cd4f body=69 status=ok
// SIG undefined FUN_143d6cd4f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6cd4f(void)

{
  _DAT_14cb7fae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6cd91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fae8,1);
  return;
}



// FUNCTION 143d6cd94 FUN_143d6cd94 body=69 status=ok
// SIG undefined FUN_143d6cd94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6cd94(void)

{
  _DAT_14cb7faf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6cdd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7faf8,1);
  return;
}



// FUNCTION 143d6cdd9 FUN_143d6cdd9 body=69 status=ok
// SIG undefined FUN_143d6cdd9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6cdd9(void)

{
  _DAT_14cb7fb00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6ce1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fb08,1);
  return;
}



// FUNCTION 143d6ce1e FUN_143d6ce1e body=69 status=ok
// SIG undefined FUN_143d6ce1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6ce1e(void)

{
  _DAT_14cb7fb10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fb18,1);
  return;
}



// FUNCTION 143d6ce63 FUN_143d6ce63 body=69 status=ok
// SIG undefined FUN_143d6ce63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6ce63(void)

{
  _DAT_14cb7fb20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6cea5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fb28,1);
  return;
}



// FUNCTION 143d6cea8 FUN_143d6cea8 body=69 status=ok
// SIG undefined FUN_143d6cea8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6cea8(void)

{
  _DAT_14cb7fb30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6ceea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fb38,1);
  return;
}



// FUNCTION 143d6ceed FUN_143d6ceed body=69 status=ok
// SIG undefined FUN_143d6ceed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6ceed(void)

{
  _DAT_14cb7fb40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6cf2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fb48,1);
  return;
}



// FUNCTION 143d6cf32 FUN_143d6cf32 body=69 status=ok
// SIG undefined FUN_143d6cf32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6cf32(void)

{
  _DAT_14cb7fb50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6cf74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fb58,1);
  return;
}



// FUNCTION 143d6cf77 FUN_143d6cf77 body=69 status=ok
// SIG undefined FUN_143d6cf77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6cf77(void)

{
  _DAT_14cb7fb60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6cfb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fb68,1);
  return;
}



// FUNCTION 143d6cfbc FUN_143d6cfbc body=69 status=ok
// SIG undefined FUN_143d6cfbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6cfbc(void)

{
  _DAT_14cb7fb70 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d6cffe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb7fb78,1);
  return;
}



// FUNCTION 143d6d002 FUN_143d6d002 body=183 status=ok
// SIG undefined FUN_143d6d002(void)

void FUN_143d6d002(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar1 = *(longlong *)(param_2 + 4);
    uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar6 = (uint)lVar1 & 0xffff;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar4 * 0x20) == lVar1) {
          if ((longlong *)(lVar5 + 8) == (longlong *)0x0 || lVar5 == 0) {
            return;
          }
          if (*(int *)(lVar5 + 0x10) == 0) {
            return;
          }
          plVar2 = *(longlong **)(lVar5 + 8);
          if (plVar2 == (longlong *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000143d6d0b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x60))();
          return;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 143d6d0ba FUN_143d6d0ba body=126 status=ok
// SIG undefined FUN_143d6d0ba(void)

void FUN_143d6d0ba(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar2 = *(longlong **)(param_1 + 0x70);
  iVar1 = *(int *)(param_1 + 0x78);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = lVar4 << 6;
    plVar5 = plVar2;
    do {
      if (*plVar5 == DAT_14cb7fb80) {
        if (plVar5 != (longlong *)0x0) {
          return;
        }
        break;
      }
      plVar5 = plVar5 + 8;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  *(uint *)(param_1 + 0x78) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x7c) < iVar1 + 1U) {
    FUN_1488858fe((undefined8 *)(param_1 + 0x70),iVar1);
    plVar2 = *(longlong **)(param_1 + 0x70);
  }
  FUN_14888589a(plVar2 + lVar4 * 8,param_2);
  return;
}



// FUNCTION 143d6d138 FUN_143d6d138 body=49 status=ok
// SIG undefined FUN_143d6d138(void)

void FUN_143d6d138(void)

{
  FUN_14377d26e(DAT_14cb7fb88,DAT_14cb7fb90);
  if (DAT_14cb7fb88 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d6d169 FUN_143d6d169 body=49 status=ok
// SIG undefined FUN_143d6d169(void)

void FUN_143d6d169(void)

{
  FUN_1488860eb(DAT_14cb7fb98,DAT_14cb7fba0);
  if (DAT_14cb7fb98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d6d19a FUN_143d6d19a body=431 status=ok
// SIG undefined FUN_143d6d19a(void)

void FUN_143d6d19a(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_1 + 2) = param_2;
  uVar3 = *param_3;
  plVar4 = (longlong *)param_3[1];
  if (plVar4 == (longlong *)0x0) {
    param_1[0xd] = uVar3;
    plVar7 = (longlong *)param_1[0xe];
    if (plVar7 == (longlong *)0x0) goto LAB_143d6d23b;
    param_1[0xe] = 0;
LAB_143d6d203:
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_143d6d23b;
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar6 = *piVar1;
    UNLOCK();
    plVar4 = plVar7;
  }
  else {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    param_1[0xd] = uVar3;
    plVar7 = (longlong *)param_1[0xe];
    if (plVar4 != plVar7) {
      param_1[0xe] = plVar4;
      if (plVar7 == (longlong *)0x0) goto LAB_143d6d23b;
      goto LAB_143d6d203;
    }
    LOCK();
    plVar7 = plVar4 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_143d6d23b;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar6 = *piVar1;
    UNLOCK();
  }
  if (iVar6 == 0) {
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
LAB_143d6d23b:
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 4) != *(int *)((longlong)param_1 + 0x4c)) {
    FUN_148886138(param_1 + 3);
    FUN_148886282(param_1 + 3);
  }
  iVar6 = DAT_14cb7fb94;
  FUN_14377d26e(DAT_14cb7fb88,DAT_14cb7fb90);
  DAT_14cb7fb90 = 0;
  if ((iVar6 < 0) && (DAT_14cb7fb94 != 0)) {
    FUN_147da3050(&DAT_14cb7fb88,0);
  }
  if (param_1[0xd] != 0) {
    local_38 = param_1[1];
    if (local_38 == 0) {
      local_38 = 0;
      local_40 = 0;
    }
    else {
      iVar6 = *(int *)(local_38 + 8);
      local_40 = 0;
      do {
        if (iVar6 == 0) {
          local_38 = 0;
          goto LAB_143d6d349;
        }
        LOCK();
        iVar2 = *(int *)(local_38 + 8);
        bVar8 = iVar6 == iVar2;
        if (bVar8) {
          *(int *)(local_38 + 8) = iVar6 + 1;
          iVar2 = iVar6;
        }
        iVar6 = iVar2;
        UNLOCK();
      } while (!bVar8);
      local_40 = *param_1;
    }
LAB_143d6d349:
    FUN_14888151e();
  }
  puVar5 = (undefined8 *)param_3[1];
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



// FUNCTION 143d6d360 FUN_143d6d360 body=199 status=ok
// SIG undefined FUN_143d6d360(void)

void FUN_143d6d360(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0xd] != 0) {
    local_20 = param_1[1];
    if (local_20 == 0) {
      local_20 = 0;
      local_28 = 0;
    }
    else {
      iVar4 = *(int *)(local_20 + 8);
      local_28 = 0;
      do {
        if (iVar4 == 0) {
          local_20 = 0;
          goto LAB_143d6d422;
        }
        LOCK();
        iVar2 = *(int *)(local_20 + 8);
        bVar5 = iVar4 == iVar2;
        if (bVar5) {
          *(int *)(local_20 + 8) = iVar4 + 1;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        UNLOCK();
      } while (!bVar5);
      local_28 = *param_1;
    }
LAB_143d6d422:
    FUN_1488815e6();
  }
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[0xd] = 0;
  puVar3 = (undefined8 *)param_1[0xe];
  if (puVar3 != (undefined8 *)0x0) {
    param_1[0xe] = 0;
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6d438 FUN_143d6d438 body=220 status=ok
// SIG undefined FUN_143d6d438(void)

void FUN_143d6d438(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_148881b36();
  FUN_148881ee8(param_1);
  FUN_14888202a();
  if ((longlong)DAT_14cb7fba0 != 0) {
    lVar2 = (longlong)DAT_14cb7fba0 * 0x30;
    lVar3 = DAT_14cb7fb98;
    do {
      if (*(longlong *)(param_1 + 0x68) != 0) {
        FUN_14888113a(*(longlong *)(param_1 + 0x68),lVar3);
      }
      lVar3 = lVar3 + 0x30;
      lVar2 = lVar2 + -0x30;
    } while (lVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar1 = DAT_14cb7fb94;
  FUN_14377d26e(DAT_14cb7fb88,DAT_14cb7fb90);
  DAT_14cb7fb90 = 0;
  if ((iVar1 < 0) && (DAT_14cb7fb94 != 0)) {
    FUN_147da3050(&DAT_14cb7fb88,0);
  }
  iVar1 = DAT_14cb7fba4;
  FUN_1488860eb(DAT_14cb7fb98,DAT_14cb7fba0);
  DAT_14cb7fba0 = 0;
  if ((iVar1 < 0) && (DAT_14cb7fba4 != 0)) {
    FUN_14888639a(0);
    return;
  }
  return;
}



// FUNCTION 143d6d514 FUN_143d6d514 body=153 status=ok
// SIG undefined FUN_143d6d514(void)

longlong * FUN_143d6d514(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x60) < 1) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x88,0x10);
    puVar1[1] = &DAT_100000001;
    *puVar1 = &PTR_LAB_14b40b440;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *(undefined4 *)(puVar1 + 4) = 0xffffffff;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x2c) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    puVar1[0xd] = 0;
    *(undefined4 *)(puVar1 + 0xe) = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    *param_2 = (longlong)(puVar1 + 2);
    param_2[1] = (longlong)puVar1;
    FUN_148886c28(param_2);
  }
  else {
    FUN_148883596(param_1 + 0x58,param_2);
  }
  return param_2;
}



// FUNCTION 143d6d5ae FUN_143d6d5ae body=1494 status=ok
// SIG undefined FUN_143d6d5ae(void)

void FUN_143d6d5ae(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  lVar4 = (longlong)*(int *)(*param_2 + 0x6c) * 0x10;
  lVar6 = (longlong)*(int *)(param_1 + 0x40 + lVar4);
  if (lVar6 != 0) {
    lVar14 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x38 + lVar4) + lVar14) == *param_2)
      goto LAB_143d6dab7;
      lVar14 = lVar14 + 0x10;
    } while (lVar6 * 0x10 != lVar14);
  }
  plVar12 = (longlong *)(param_1 + lVar4 + 0x38);
  FUN_14888686c(plVar12);
  plVar5 = (longlong *)*param_2;
  if (param_1 == 0) {
    *(undefined4 *)((longlong)plVar5 + 0xd4) = 0;
    iVar16 = 0;
  }
  else {
    uVar19 = *(uint *)(param_1 + 0xc);
    *(uint *)((longlong)plVar5 + 0xd4) = uVar19;
    if ((int)uVar19 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar16 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar16 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar16;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar16 = *(int *)(lVar6 + 0x10);
      bVar23 = iVar16 == 0;
      if (bVar23) {
        *(int *)(lVar6 + 0x10) = iVar11;
        iVar16 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar16 = iVar11;
      }
    }
  }
  *(int *)(plVar5 + 0x1b) = iVar16;
  if ((char)plVar5[0x1a] == '\0') {
    (**(code **)(*plVar5 + 0x18))(plVar5);
    FUN_148881468(plVar5);
    *(undefined1 *)(plVar5 + 0x1a) = 1;
  }
  iVar16 = *(int *)(param_1 + lVar4 + 0x40);
  if (1 < (longlong)iVar16) {
    lVar4 = *plVar12;
    memset(local_348,0,0x2f0);
    local_350 = (longlong)iVar16 * 0x10 + lVar4 + -0x10;
    local_358 = lVar4;
    fVar24 = logf((float)iVar16);
    local_348[0] = (int)(longlong)(fVar24 + fVar24);
    plVar5 = &local_358;
    do {
      plVar8 = (longlong *)*plVar5;
      plVar10 = (longlong *)plVar5[1];
      iVar16 = (int)plVar5[2];
      iVar11 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar8) >> 4);
      uVar19 = iVar11 + 1;
      plVar9 = plVar8;
      plVar12 = plVar10;
      if (iVar16 != 0) {
LAB_143d6d6f9:
        if (8 < (int)uVar19) {
          lVar4 = plVar8[(ulonglong)(uVar19 >> 1) * 2];
          lVar6 = (plVar8 + (ulonglong)(uVar19 >> 1) * 2)[1];
          lVar14 = plVar8[1];
          plVar8[(ulonglong)(uVar19 >> 1) * 2] = *plVar8;
          (plVar8 + (ulonglong)(uVar19 >> 1) * 2)[1] = lVar14;
          *plVar8 = lVar4;
          plVar8[1] = lVar6;
          plVar20 = plVar12 + 2;
          plVar7 = plVar8;
          do {
            plVar3 = plVar7 + 2;
            plVar15 = plVar7 + 2;
            do {
              plVar22 = plVar15;
              plVar7 = plVar3;
              if (plVar12 < plVar7) break;
              plVar3 = plVar7 + 2;
              plVar15 = plVar22 + 2;
            } while (*(int *)(*plVar8 + 0x68) <= *(int *)(*plVar7 + 0x68));
            plVar3 = plVar20 + -4;
            do {
              plVar15 = plVar20;
              plVar21 = plVar3;
              plVar20 = plVar15 + -2;
              if (plVar20 <= plVar8) break;
              plVar3 = plVar21 + -2;
            } while (*(int *)(*plVar20 + 0x68) <= *(int *)(*plVar8 + 0x68));
            if (plVar20 < plVar7) goto LAB_143d6d7b3;
            lVar4 = *plVar7;
            lVar6 = plVar7[1];
            lVar14 = plVar15[-1];
            *plVar7 = *plVar20;
            plVar7[1] = lVar14;
            *plVar20 = lVar4;
            plVar15[-1] = lVar6;
          } while( true );
        }
        if (plVar8 < plVar12) {
          do {
            plVar10 = plVar8;
            if (plVar8 + 2 <= plVar12) {
              lVar4 = *plVar8;
              plVar9 = plVar8 + 2;
              do {
                plVar20 = plVar9;
                lVar6 = *plVar9;
                if (*(int *)(lVar4 + 0x68) <= *(int *)(*plVar9 + 0x68)) {
                  plVar20 = plVar10;
                  lVar6 = lVar4;
                }
                lVar4 = lVar6;
                plVar10 = plVar20;
                plVar9 = plVar9 + 2;
              } while (plVar9 <= plVar12);
            }
            local_58 = *plVar10;
            uStack_50 = plVar10[1];
            lVar6 = local_58;
            lVar14 = uStack_50;
            lVar4 = plVar12[1];
            *plVar10 = *plVar12;
            plVar10[1] = lVar4;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)plVar12 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar12 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_50._4_4_;
            plVar12 = plVar12 + -2;
            local_58 = lVar6;
            uStack_50 = lVar14;
          } while (plVar8 < plVar12);
        }
        goto LAB_143d6daa5;
      }
LAB_143d6d85e:
      if (uVar19 != 0) {
        iVar16 = (iVar11 - (iVar11 + -1 >> 0x1f)) + -1 >> 1;
        iVar11 = iVar16;
joined_r0x000143d6d885:
        do {
          iVar18 = iVar16 * 2 + 1;
          if (iVar18 < (int)uVar19) {
            iVar17 = iVar16 * 2 + 2;
            if ((iVar17 < (int)uVar19) &&
               (*(int *)(plVar8[(longlong)iVar17 * 2] + 0x68) <=
                *(int *)(plVar8[(longlong)iVar18 * 2] + 0x68))) {
              iVar18 = iVar17;
            }
            if (*(int *)(plVar8[(longlong)iVar18 * 2] + 0x68) <
                *(int *)(plVar8[(longlong)iVar16 * 2] + 0x68)) {
              plVar12 = plVar8 + (longlong)iVar16 * 2;
              plVar10 = plVar8 + (longlong)iVar18 * 2;
              local_58 = *plVar12;
              uStack_50 = plVar12[1];
              lVar6 = local_58;
              lVar14 = uStack_50;
              lVar4 = plVar10[1];
              *plVar12 = *plVar10;
              plVar12[1] = lVar4;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)plVar10 = (undefined4)local_58;
              *(undefined4 *)((longlong)plVar10 + 4) = local_58._4_4_;
              *(undefined4 *)(plVar10 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_50._4_4_;
              iVar16 = iVar18;
              local_58 = lVar6;
              uStack_50 = lVar14;
              goto joined_r0x000143d6d885;
            }
          }
          bVar23 = iVar11 != 0;
          iVar16 = iVar11 + -1;
          iVar11 = iVar16;
        } while (bVar23);
        if (1 < (int)uVar19) {
          uVar13 = (ulonglong)uVar19 - 1;
          local_58 = *plVar8;
          uStack_50 = plVar8[1];
          lVar6 = local_58;
          lVar14 = uStack_50;
          lVar4 = (plVar8 + uVar13 * 2)[1];
          *plVar8 = plVar8[uVar13 * 2];
          plVar8[1] = lVar4;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          plVar12 = plVar8 + uVar13 * 2;
          *(undefined4 *)plVar12 = (undefined4)local_58;
          *(undefined4 *)((longlong)plVar12 + 4) = local_58._4_4_;
          *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_50._4_4_;
          local_58 = lVar6;
          uStack_50 = lVar14;
          if (uVar19 != 2) {
            do {
              iVar16 = 0;
              iVar18 = 1;
              iVar11 = 0;
              do {
                iVar16 = iVar16 + 2;
                iVar17 = iVar18;
                if (((longlong)iVar16 < (longlong)uVar13) &&
                   (*(int *)(plVar8[(longlong)iVar16 * 2] + 0x68) <=
                    *(int *)(plVar8[(longlong)iVar18 * 2] + 0x68))) {
                  iVar17 = iVar16;
                }
                if (*(int *)(plVar8[(longlong)iVar11 * 2] + 0x68) <=
                    *(int *)(plVar8[(longlong)iVar17 * 2] + 0x68)) break;
                plVar12 = plVar8 + (longlong)iVar11 * 2;
                plVar10 = plVar8 + (longlong)iVar17 * 2;
                lVar4 = *plVar12;
                lVar6 = plVar12[1];
                lVar14 = plVar10[1];
                *plVar12 = *plVar10;
                plVar12[1] = lVar14;
                *plVar10 = lVar4;
                plVar10[1] = lVar6;
                iVar16 = iVar17 * 2;
                iVar18 = iVar17 * 2 + 1;
                iVar11 = iVar17;
              } while ((longlong)iVar18 < (longlong)uVar13);
              uVar1 = uVar13 - 1;
              local_58 = *plVar8;
              uStack_50 = plVar8[1];
              lVar6 = local_58;
              lVar14 = uStack_50;
              lVar4 = (plVar8 + uVar1 * 2)[1];
              *plVar8 = plVar8[uVar1 * 2];
              plVar8[1] = lVar4;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              plVar12 = plVar8 + uVar1 * 2;
              *(undefined4 *)plVar12 = (undefined4)local_58;
              *(undefined4 *)((longlong)plVar12 + 4) = local_58._4_4_;
              *(undefined4 *)(plVar12 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)plVar12 + 0xc) = uStack_50._4_4_;
              bVar23 = 2 < uVar13;
              uVar13 = uVar1;
              local_58 = lVar6;
              uStack_50 = lVar14;
            } while (bVar23);
          }
        }
      }
LAB_143d6daa5:
      plVar5 = plVar5 + -3;
    } while (&local_358 <= plVar5);
  }
LAB_143d6dab7:
  plVar5 = (longlong *)param_2[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar12 = plVar5 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
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
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143d6d7b3:
  local_58 = *plVar8;
  uStack_50 = plVar8[1];
  lVar6 = local_58;
  lVar14 = uStack_50;
  lVar4 = plVar15[-1];
  *plVar8 = *plVar20;
  plVar8[1] = lVar4;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)plVar20 = (undefined4)local_58;
  *(undefined4 *)((longlong)plVar15 + -0xc) = local_58._4_4_;
  *(undefined4 *)(plVar15 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)plVar15 + -4) = uStack_50._4_4_;
  iVar16 = iVar16 + -1;
  plVar15 = plVar15 + -4;
  local_58 = lVar6;
  uStack_50 = lVar14;
  if ((longlong)plVar21 - (longlong)plVar9 < (longlong)plVar10 - (longlong)plVar22) {
    if (plVar7 < plVar12) {
      *plVar5 = (longlong)plVar7;
      plVar5[1] = (longlong)plVar12;
      *(int *)(plVar5 + 2) = iVar16;
      plVar5 = plVar5 + 3;
    }
    plVar22 = plVar8;
    plVar10 = plVar21;
    if (plVar20 <= plVar8 + 2) goto LAB_143d6daa5;
  }
  else {
    if (plVar8 + 2 < plVar20) {
      *plVar5 = (longlong)plVar8;
      plVar5[1] = (longlong)plVar15;
      *(int *)(plVar5 + 2) = iVar16;
      plVar5 = plVar5 + 3;
    }
    plVar8 = plVar7;
    plVar15 = plVar12;
    plVar10 = plVar12;
    if (plVar12 <= plVar7) goto LAB_143d6daa5;
  }
  iVar11 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar22) >> 4);
  uVar19 = iVar11 + 1;
  plVar9 = plVar22;
  plVar12 = plVar15;
  if (iVar16 == 0) goto LAB_143d6d85e;
  goto LAB_143d6d6f9;
}



// FUNCTION 143d6db86 FUN_143d6db86 body=220 status=ok
// SIG undefined FUN_143d6db86(void)

void FUN_143d6db86(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  lVar6 = (longlong)*(int *)(lVar2 + 0x6c) * 0x10;
  lVar4 = (longlong)*(int *)(param_1 + 0x40 + lVar6);
  if (lVar4 != 0) {
    plVar5 = (longlong *)(param_1 + lVar6 + 0x38);
    lVar6 = 0;
    do {
      if (*(longlong *)(*plVar5 + lVar6) == lVar2) {
        local_28 = param_2[1];
        if (local_28 != 0) {
          LOCK();
          *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
          UNLOCK();
        }
        local_30 = lVar2;
        FUN_148883358(param_1,&local_30);
        *(undefined8 *)(*param_2 + 0xd4) = 0;
        local_20 = param_2;
        FUN_148886972(plVar5);
        break;
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar4 * 0x10 != lVar6);
  }
  puVar3 = (undefined8 *)param_2[1];
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
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d6dc74 FUN_143d6dc74 body=260 status=ok
// SIG undefined FUN_143d6dc74(void)

void FUN_143d6dc74(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148883932(param_1,&local_30,param_2);
  if (local_30 == 0) {
    FUN_148882e4c(param_1);
  }
  else {
    if (((*(int *)(local_30 + 0x24) != 0) && (uVar2 = *(uint *)(local_30 + 0x20), -1 < (int)uVar2))
       && ((int)uVar2 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(local_30 + 0x24))) &&
         (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
          (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
        (**(code **)(*plVar3 + 0x310))(plVar3,param_2);
        *(undefined1 *)(local_30 + 0x39) = 1;
      }
    }
    if (*(char *)(local_30 + 0x38) == '\0') {
      FUN_148881782(*(undefined8 *)(local_30 + 0x28));
      *(undefined8 *)(local_30 + 0x20) = 0;
      *(undefined1 *)(local_30 + 0x38) = 1;
    }
    FUN_1488835ea(param_1,param_2);
  }
  if (local_28 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_28 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d6dd8a FUN_143d6dd8a body=30 status=ok
// SIG undefined FUN_143d6dd8a(void)

void FUN_143d6dd8a(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  
  dVar1 = *(double *)*param_1;
  if (dVar1 <= *(double *)(param_2 + 0x60)) {
    dVar1 = *(double *)(param_2 + 0x60);
  }
  *(double *)*param_1 = dVar1;
  *(byte *)param_1[1] = *(byte *)param_1[1] | 0 < *(int *)(param_2 + 0x78);
  return;
}



// FUNCTION 143d6ddc0 FUN_143d6ddc0 body=5 status=ok
// SIG undefined FUN_143d6ddc0(void)

longlong FUN_143d6ddc0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 143d6ddc6 FUN_143d6ddc6 body=12 status=ok
// SIG undefined FUN_143d6ddc6(void)

void FUN_143d6ddc6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143d6ddcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143d6ddd2 FUN_143d6ddd2 body=29 status=ok
// SIG undefined FUN_143d6ddd2(void)

undefined8 FUN_143d6ddd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6ddf0 FUN_143d6ddf0 body=57 status=ok
// SIG undefined FUN_143d6ddf0(void)

void FUN_143d6ddf0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar1 = *(int *)(param_2 + 0x78);
  *(uint *)(param_2 + 0x78) = iVar1 + 1U;
  if (*(uint *)(param_2 + 0x7c) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(param_2 + 0x70),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_2 + 0x70) + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + 4);
  return;
}



// FUNCTION 143d6de54 FUN_143d6de54 body=29 status=ok
// SIG undefined FUN_143d6de54(void)

undefined8 FUN_143d6de54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6de72 FUN_143d6de72 body=31 status=ok
// SIG undefined FUN_143d6de72(void)

undefined8 FUN_143d6de72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6deae FUN_143d6deae body=751 status=ok
// SIG undefined FUN_143d6deae(void)

void FUN_143d6deae(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  int local_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *(longlong *)(param_2 + 0x28);
  if (lVar6 != 0) {
    FUN_1406d3d1a(&local_98,lVar6);
    uVar14 = (longlong)local_90 - (longlong)local_64;
    lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined4 *)(lVar17 + 0xc7c);
    uVar5 = *puVar1;
    pbVar2 = (byte *)(lVar17 + 0xc80);
    bVar4 = *pbVar2;
    if ((bVar4 & 1) != 0) {
      *pbVar2 = 0;
      *puVar1 = 0xffffffff;
    }
    uVar13 = (uint)uVar14;
    if ((uint)(*(int *)(lVar6 + 8) - *(int *)(lVar6 + 0x34)) < uVar13) {
      if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b(uVar14);
      }
      FUN_141724914(lVar6,uVar14 & 0xffffffff);
      if (uVar13 < 4) {
        iVar7 = 1;
      }
      else {
        uVar13 = (uVar13 | 1) + 0xe;
        iVar7 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        iVar7 = 1 << ((byte)iVar7 & 0x1f);
      }
      if ((*(int *)(lVar6 + 0x48) == 0) || (*(int *)(lVar6 + 0x48) < iVar7)) {
        *(int *)(lVar6 + 0x48) = iVar7;
        FUN_14487ddf8(lVar6);
      }
    }
    iVar7 = local_70;
    if ((bVar4 & 1) != 0) {
      *puVar1 = uVar5;
      *pbVar2 = 1;
    }
    if (local_70 == 0) {
      uVar18 = 1;
      uVar14 = 0;
      iVar8 = 0;
      iVar12 = 0;
    }
    else {
      puVar9 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar9 = local_88;
      }
      uVar13 = *puVar9;
      if (uVar13 == 0) {
        iVar8 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar8 = local_70 + -1;
        }
        uVar14 = 0;
        uVar18 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar18 = uVar14;
        }
        iVar12 = 0;
        do {
          if (uVar18 == uVar14) goto LAB_143d6e118;
          iVar12 = iVar12 + 0x20;
          uVar13 = puVar9[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar13 == 0);
      }
      else {
        uVar14 = 0;
        iVar12 = 0;
      }
      uVar18 = (ulonglong)(-uVar13 & uVar13);
      uVar3 = uVar18 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar8) {
        iVar8 = local_70;
      }
    }
    if (iVar8 != local_70) {
      uVar13 = 0xffffffff;
      do {
        local_b0 = local_98 + (longlong)iVar8 * 0x14;
        local_a8 = local_98 + (longlong)iVar8 * 0x14 + 8;
        FUN_140171856(lVar6,local_9c,&local_b0,0);
        uVar13 = ~(uint)uVar18 & uVar13;
        puVar9 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar9 = local_88;
        }
        iVar8 = (int)uVar14;
        lVar17 = (longlong)iVar8;
        uVar15 = puVar9[lVar17] & uVar13;
        if (uVar15 == 0) {
          iVar10 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar10 = local_70 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar8) {
            iVar11 = iVar8;
          }
          if (iVar8 < iVar10) {
            lVar16 = 0;
            do {
              uVar15 = puVar9[lVar17 + lVar16 + 1];
              if (uVar15 != 0) {
                uVar14 = (ulonglong)(iVar8 + (int)lVar16 + 1);
                uVar13 = 0xffffffff;
                goto LAB_143d6e0d0;
              }
              iVar12 = iVar12 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar11 - lVar17 != lVar16);
            uVar13 = 0xffffffff;
            iVar8 = iVar11;
          }
          uVar14 = (ulonglong)(iVar8 + 1);
          iVar8 = local_70;
        }
        else {
LAB_143d6e0d0:
          uVar18 = (ulonglong)(-uVar15 & uVar15);
          uVar3 = uVar18 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar8 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar8) {
            iVar8 = local_70;
          }
        }
      } while (iVar8 != iVar7);
    }
LAB_143d6e118:
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1401ad17c(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6e19e FUN_143d6e19e body=29 status=ok
// SIG undefined FUN_143d6e19e(void)

undefined8 FUN_143d6e19e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6e1d0 FUN_143d6e1d0 body=85 status=ok
// SIG undefined FUN_143d6e1d0(void)

void FUN_143d6e1d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ad40;
  return;
}



// FUNCTION 143d6e226 FUN_143d6e226 body=85 status=ok
// SIG undefined FUN_143d6e226(void)

void FUN_143d6e226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ad40;
  return;
}



// FUNCTION 143d6e27c FUN_143d6e27c body=118 status=ok
// SIG undefined FUN_143d6e27c(void)

void FUN_143d6e27c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ad40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6e2e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6e2f2 FUN_143d6e2f2 body=59 status=ok
// SIG undefined FUN_143d6e2f2(void)

void FUN_143d6e2f2(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143d6e36c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d6e32e FUN_143d6e32e body=61 status=ok
// SIG undefined FUN_143d6e32e(void)

undefined8 FUN_143d6e32e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_143d6e36c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d6e36c FUN_143d6e36c body=328 status=ok
// SIG undefined FUN_143d6e36c(void)

void FUN_143d6e36c(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)*param_1 + 0xb0))();
    if (*(char *)(DAT_14cb0d2b0 + 0xf10) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    local_28 = (undefined8 *)0x0;
    local_20 = 0;
    FUN_1446efa72(&local_28,0,2,0x10);
    local_20 = 2;
    *local_28 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_28[2] = lVar3;
    *local_28 = &PTR_FUN_14b40adb0;
    *(undefined4 *)(local_28 + 3) = uVar2;
    FUN_1448b6402(&DAT_14c867390,local_30,&local_28);
    if (local_20 != 0) {
      if (local_28 == (undefined8 *)0x0) goto LAB_143d6e46f;
      (**(code **)*local_28)(local_28,0);
      FUN_1446efa72(&local_28,0,0,0x10);
      local_20 = 0;
    }
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143d6e46f:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d6e4c2 FUN_143d6e4c2 body=29 status=ok
// SIG undefined FUN_143d6e4c2(void)

undefined8 FUN_143d6e4c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6e4f4 FUN_143d6e4f4 body=91 status=ok
// SIG undefined FUN_143d6e4f4(void)

void FUN_143d6e4f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40adb0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d6e550 FUN_143d6e550 body=91 status=ok
// SIG undefined FUN_143d6e550(void)

void FUN_143d6e550(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40adb0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143d6e5ac FUN_143d6e5ac body=124 status=ok
// SIG undefined FUN_143d6e5ac(void)

void FUN_143d6e5ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b40adb0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6e619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6e630 FUN_143d6e630 body=19 status=ok
// SIG undefined FUN_143d6e630(void)

undefined1 FUN_143d6e630(longlong param_1)

{
  FUN_14602aeac(*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143d6e644 FUN_143d6e644 body=73 status=ok
// SIG undefined FUN_143d6e644(void)

undefined8 * FUN_143d6e644(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b40ae20;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 4);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6e6a2 FUN_143d6e6a2 body=148 status=ok
// SIG undefined FUN_143d6e6a2(void)

void FUN_143d6e6a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ae20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  FUN_141262aba(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143d6e736 FUN_143d6e736 body=148 status=ok
// SIG undefined FUN_143d6e736(void)

void FUN_143d6e736(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 7) {
    FUN_1446efa72(param_2,0,7,0x10);
    *(undefined4 *)(param_2 + 1) = 7;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40ae20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[8] = 0;
  *(undefined4 *)(puVar1 + 9) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x54) = 0;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  FUN_141262aba(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143d6e7ca FUN_143d6e7ca body=182 status=ok
// SIG undefined FUN_143d6e7ca(void)

void FUN_143d6e7ca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 7) {
    FUN_1446efa72(param_2 + 1,0,7,0x10);
    param_2[1].LockCount = 7;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40ae20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1[1].ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Blink = 0;
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  p_Var1->CreatorBackTraceIndexHigh = 0;
  p_Var1->SpareWORD = 0;
  *(undefined8 *)((longlong)&p_Var1[1].ProcessLocksList.Blink + 4) = 0xffffffff00000080;
  p_Var1[1].ContentionCount = 0;
  p_Var1[2].Type = 0;
  p_Var1[2].CreatorBackTraceIndex = 0;
  *(undefined4 *)&p_Var1[2].field_0x4 = 0;
  *(undefined4 *)&p_Var1[2].CriticalSection = 0;
  FUN_141262aba(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6e871. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6e880 FUN_143d6e880 body=20 status=ok
// SIG undefined FUN_143d6e880(void)

undefined8 FUN_143d6e880(longlong param_1)

{
  FUN_143d6e8a8(param_1 + 0x18);
  return 0;
}



// FUNCTION 143d6e894 FUN_143d6e894 body=20 status=ok
// SIG undefined FUN_143d6e894(void)

undefined1 FUN_143d6e894(longlong param_1)

{
  FUN_143d6e8a8(param_1 + 0x18);
  return 1;
}



// FUNCTION 143d6e8a8 FUN_143d6e8a8 body=178 status=ok
// SIG undefined FUN_143d6e8a8(void)

void FUN_143d6e8a8(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c872bd8 == '\0') {
    lVar1 = *param_1;
    FUN_1434d00ee(*(undefined8 *)(lVar1 + 0x148),param_1 + 1,0);
    FUN_1402160b8(&local_38);
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    local_58 = 0;
    FUN_14021300e(&local_30,0x7b2,1,1);
    *(double *)(lVar1 + 0x240) = (double)(local_38 - local_30) / 10000000.0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d6e9a8 FUN_143d6e9a8 body=29 status=ok
// SIG undefined FUN_143d6e9a8(void)

undefined8 FUN_143d6e9a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6e9da FUN_143d6e9da body=85 status=ok
// SIG undefined FUN_143d6e9da(void)

void FUN_143d6e9da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40af70;
  return;
}



// FUNCTION 143d6ea30 FUN_143d6ea30 body=85 status=ok
// SIG undefined FUN_143d6ea30(void)

void FUN_143d6ea30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40af70;
  return;
}



// FUNCTION 143d6ea86 FUN_143d6ea86 body=118 status=ok
// SIG undefined FUN_143d6ea86(void)

void FUN_143d6ea86(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b40af70;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6eaed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6eb02 FUN_143d6eb02 body=16 status=ok
// SIG undefined FUN_143d6eb02(void)

undefined1 FUN_143d6eb02(void)

{
  FUN_143d6eb12();
  return 1;
}



// FUNCTION 143d6eb12 FUN_143d6eb12 body=105 status=ok
// SIG undefined FUN_143d6eb12(void)

void FUN_143d6eb12(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cb0d2b0;
  plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
  if (plVar2 == (longlong *)0x0) {
    FUN_145876474(DAT_14cb0d2b0);
    plVar2 = *(longlong **)(lVar1 + 0x2c8);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
  }
  lVar1 = FUN_141283af6();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000143d6eb5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x308))(plVar2);
    return;
  }
  return;
}



// FUNCTION 143d6eb7c FUN_143d6eb7c body=29 status=ok
// SIG undefined FUN_143d6eb7c(void)

undefined8 FUN_143d6eb7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6ebae FUN_143d6ebae body=85 status=ok
// SIG undefined FUN_143d6ebae(void)

void FUN_143d6ebae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40afe0;
  return;
}



// FUNCTION 143d6ec04 FUN_143d6ec04 body=85 status=ok
// SIG undefined FUN_143d6ec04(void)

void FUN_143d6ec04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40afe0;
  return;
}



// FUNCTION 143d6ec5a FUN_143d6ec5a body=118 status=ok
// SIG undefined FUN_143d6ec5a(void)

void FUN_143d6ec5a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b40afe0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6ecc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6ecd6 FUN_143d6ecd6 body=16 status=ok
// SIG undefined FUN_143d6ecd6(void)

undefined1 FUN_143d6ecd6(void)

{
  FUN_143d6ece6();
  return 1;
}



// FUNCTION 143d6ece6 FUN_143d6ece6 body=110 status=ok
// SIG undefined FUN_143d6ece6(void)

void FUN_143d6ece6(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cb0d2b0;
  plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
  if (plVar2 == (longlong *)0x0) {
    FUN_145876474(DAT_14cb0d2b0);
    plVar2 = *(longlong **)(lVar1 + 0x2c8);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
  }
  lVar1 = FUN_141283af6();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000143d6ed3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2a0))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 143d6ed54 FUN_143d6ed54 body=29 status=ok
// SIG undefined FUN_143d6ed54(void)

undefined8 FUN_143d6ed54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6ed86 FUN_143d6ed86 body=85 status=ok
// SIG undefined FUN_143d6ed86(void)

void FUN_143d6ed86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b050;
  return;
}



// FUNCTION 143d6eddc FUN_143d6eddc body=85 status=ok
// SIG undefined FUN_143d6eddc(void)

void FUN_143d6eddc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b050;
  return;
}



// FUNCTION 143d6ee32 FUN_143d6ee32 body=118 status=ok
// SIG undefined FUN_143d6ee32(void)

void FUN_143d6ee32(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b050;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6ee99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6eeae FUN_143d6eeae body=16 status=ok
// SIG undefined FUN_143d6eeae(void)

undefined1 FUN_143d6eeae(void)

{
  FUN_143d6eebe();
  return 1;
}



// FUNCTION 143d6eebe FUN_143d6eebe body=105 status=ok
// SIG undefined FUN_143d6eebe(void)

void FUN_143d6eebe(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cb0d2b0;
  plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
  if (plVar2 == (longlong *)0x0) {
    FUN_145876474(DAT_14cb0d2b0);
    plVar2 = *(longlong **)(lVar1 + 0x2c8);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
  }
  lVar1 = FUN_141283af6();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000143d6ef0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2e8))(plVar2);
    return;
  }
  return;
}



// FUNCTION 143d6ef28 FUN_143d6ef28 body=29 status=ok
// SIG undefined FUN_143d6ef28(void)

undefined8 FUN_143d6ef28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6ef5a FUN_143d6ef5a body=85 status=ok
// SIG undefined FUN_143d6ef5a(void)

void FUN_143d6ef5a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b0c0;
  return;
}



// FUNCTION 143d6efb0 FUN_143d6efb0 body=85 status=ok
// SIG undefined FUN_143d6efb0(void)

void FUN_143d6efb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b0c0;
  return;
}



// FUNCTION 143d6f006 FUN_143d6f006 body=118 status=ok
// SIG undefined FUN_143d6f006(void)

void FUN_143d6f006(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b0c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6f06d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6f082 FUN_143d6f082 body=16 status=ok
// SIG undefined FUN_143d6f082(void)

undefined1 FUN_143d6f082(void)

{
  FUN_143d6f092();
  return 1;
}



// FUNCTION 143d6f092 FUN_143d6f092 body=110 status=ok
// SIG undefined FUN_143d6f092(void)

void FUN_143d6f092(void)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = DAT_14cb0d2b0;
  plVar2 = *(longlong **)(DAT_14cb0d2b0 + 0x2c8);
  if (plVar2 == (longlong *)0x0) {
    FUN_145876474(DAT_14cb0d2b0);
    plVar2 = *(longlong **)(lVar1 + 0x2c8);
    if (plVar2 == (longlong *)0x0) {
      return;
    }
  }
  lVar1 = FUN_141283af6();
  if ((*(int *)(lVar1 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
      lVar1 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x000143d6f0e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2e0))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 143d6f100 FUN_143d6f100 body=29 status=ok
// SIG undefined FUN_143d6f100(void)

undefined8 FUN_143d6f100(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6f132 FUN_143d6f132 body=85 status=ok
// SIG undefined FUN_143d6f132(void)

void FUN_143d6f132(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b130;
  return;
}



// FUNCTION 143d6f188 FUN_143d6f188 body=85 status=ok
// SIG undefined FUN_143d6f188(void)

void FUN_143d6f188(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b130;
  return;
}



// FUNCTION 143d6f1de FUN_143d6f1de body=118 status=ok
// SIG undefined FUN_143d6f1de(void)

void FUN_143d6f1de(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b130;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6f245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6f25c FUN_143d6f25c body=19 status=ok
// SIG undefined FUN_143d6f25c(void)

undefined1 FUN_143d6f25c(undefined8 param_1,undefined8 param_2)

{
  FUN_143d6f270(param_2);
  return 1;
}



// FUNCTION 143d6f270 FUN_143d6f270 body=154 status=ok
// SIG undefined FUN_143d6f270(void)

void FUN_143d6f270(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  lVar2 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0 && *(int *)(param_1 + 1) == 1) {
    lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar4 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar4 = *(longlong *)(lVar2 + 0x2c8);
      if (lVar4 == 0) {
        return;
      }
    }
    lVar2 = FUN_141283af6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = *(undefined2 **)*param_1;
      }
      uVar1 = FUN_14052c20c(puVar3);
      FUN_145bce05a(lVar4,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 143d6f30a FUN_143d6f30a body=29 status=ok
// SIG undefined FUN_143d6f30a(void)

undefined8 FUN_143d6f30a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6f33c FUN_143d6f33c body=85 status=ok
// SIG undefined FUN_143d6f33c(void)

void FUN_143d6f33c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b1a0;
  return;
}



// FUNCTION 143d6f392 FUN_143d6f392 body=85 status=ok
// SIG undefined FUN_143d6f392(void)

void FUN_143d6f392(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b1a0;
  return;
}



// FUNCTION 143d6f3e8 FUN_143d6f3e8 body=118 status=ok
// SIG undefined FUN_143d6f3e8(void)

void FUN_143d6f3e8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b1a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6f44f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6f466 FUN_143d6f466 body=19 status=ok
// SIG undefined FUN_143d6f466(void)

undefined1 FUN_143d6f466(undefined8 param_1,undefined8 param_2)

{
  FUN_143d6f47a(param_2);
  return 1;
}



// FUNCTION 143d6f47a FUN_143d6f47a body=248 status=ok
// SIG undefined FUN_143d6f47a(void)

void FUN_143d6f47a(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar2 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar4 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar4 = *(longlong *)(lVar2 + 0x2c8);
      if (lVar4 == 0) goto LAB_143d6f4cf;
    }
    lVar2 = FUN_141283af6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      iVar1 = *(int *)(param_1 + 1);
      if (iVar1 == 0) {
        if (*(longlong *)(lVar4 + 0x150) != 0) goto LAB_143d6f4cf;
        *(undefined8 *)(lVar4 + 0x150) = *(undefined8 *)(DAT_14cad6230 + 0xb8);
        iVar1 = *(int *)(param_1 + 1);
      }
      if (iVar1 == 1) {
        if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        else {
          puVar3 = *(undefined2 **)*param_1;
        }
        FUN_1446f470e(&local_28,puVar3,1);
        FUN_143d6c9de(lVar4,local_28);
      }
    }
  }
LAB_143d6f4cf:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6f574 FUN_143d6f574 body=29 status=ok
// SIG undefined FUN_143d6f574(void)

undefined8 FUN_143d6f574(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6f5a6 FUN_143d6f5a6 body=85 status=ok
// SIG undefined FUN_143d6f5a6(void)

void FUN_143d6f5a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b210;
  return;
}



// FUNCTION 143d6f5fc FUN_143d6f5fc body=85 status=ok
// SIG undefined FUN_143d6f5fc(void)

void FUN_143d6f5fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b210;
  return;
}



// FUNCTION 143d6f652 FUN_143d6f652 body=118 status=ok
// SIG undefined FUN_143d6f652(void)

void FUN_143d6f652(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b210;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6f6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6f6ce FUN_143d6f6ce body=16 status=ok
// SIG undefined FUN_143d6f6ce(void)

undefined1 FUN_143d6f6ce(void)

{
  FUN_143d6f6de();
  return 1;
}



// FUNCTION 143d6f6de FUN_143d6f6de body=163 status=ok
// SIG undefined FUN_143d6f6de(void)

void FUN_143d6f6de(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  lVar1 = DAT_14cb0d2b0;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar2 == 0) goto LAB_143d6f72b;
    }
    lVar1 = FUN_141283af6();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         == lVar1 + 0x30)) &&
       (FUN_1459767dc(*(undefined8 *)(lVar2 + 0x148),local_28), local_28[0] != 0)) {
      FUN_1400020a8();
    }
  }
LAB_143d6f72b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6f782 FUN_143d6f782 body=29 status=ok
// SIG undefined FUN_143d6f782(void)

undefined8 FUN_143d6f782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6f7b4 FUN_143d6f7b4 body=85 status=ok
// SIG undefined FUN_143d6f7b4(void)

void FUN_143d6f7b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b280;
  return;
}



// FUNCTION 143d6f80a FUN_143d6f80a body=85 status=ok
// SIG undefined FUN_143d6f80a(void)

void FUN_143d6f80a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b280;
  return;
}



// FUNCTION 143d6f860 FUN_143d6f860 body=118 status=ok
// SIG undefined FUN_143d6f860(void)

void FUN_143d6f860(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b280;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6f8c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6f8dc FUN_143d6f8dc body=16 status=ok
// SIG undefined FUN_143d6f8dc(void)

undefined1 FUN_143d6f8dc(void)

{
  FUN_143d6f8ec();
  return 1;
}



// FUNCTION 143d6f8ec FUN_143d6f8ec body=174 status=ok
// SIG undefined FUN_143d6f8ec(void)

void FUN_143d6f8ec(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  lVar1 = DAT_14cb0d2b0;
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb0d2b0 != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar2 == 0) goto LAB_143d6f967;
    }
    lVar1 = FUN_141283af6();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      local_28[0] = 0;
      local_28[1] = 0;
      lVar1 = FUN_140032b16(0);
      FUN_14158d33e(lVar1 + 0x130,local_28);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143d6f967:
  if ((local_28[2] ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6f99c FUN_143d6f99c body=29 status=ok
// SIG undefined FUN_143d6f99c(void)

undefined8 FUN_143d6f99c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6f9ce FUN_143d6f9ce body=85 status=ok
// SIG undefined FUN_143d6f9ce(void)

void FUN_143d6f9ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b2f0;
  return;
}



// FUNCTION 143d6fa24 FUN_143d6fa24 body=85 status=ok
// SIG undefined FUN_143d6fa24(void)

void FUN_143d6fa24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b2f0;
  return;
}



// FUNCTION 143d6fa7a FUN_143d6fa7a body=118 status=ok
// SIG undefined FUN_143d6fa7a(void)

void FUN_143d6fa7a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b2f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6fae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6faf8 FUN_143d6faf8 body=19 status=ok
// SIG undefined FUN_143d6faf8(void)

undefined1 FUN_143d6faf8(undefined8 param_1,undefined8 param_2)

{
  FUN_143d6fb0c(param_2);
  return 1;
}



// FUNCTION 143d6fb0c FUN_143d6fb0c body=223 status=ok
// SIG undefined FUN_143d6fb0c(void)

void FUN_143d6fb0c(undefined8 *param_1)

{
  longlong lVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  undefined8 local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar3 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar3 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar3 == 0) goto LAB_143d6fbb3;
    }
    lVar1 = FUN_141283af6();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
         == lVar1 + 0x30)) && (*(int *)(param_1 + 1) == 1)) {
      if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      else {
        puVar2 = *(undefined2 **)*param_1;
      }
      FUN_1446f470e(&local_28,puVar2,1);
      FUN_1412d7cdc(lVar3,local_38,local_28);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
LAB_143d6fbb3:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6fbec FUN_143d6fbec body=29 status=ok
// SIG undefined FUN_143d6fbec(void)

undefined8 FUN_143d6fbec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143d6fc1e FUN_143d6fc1e body=85 status=ok
// SIG undefined FUN_143d6fc1e(void)

void FUN_143d6fc1e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b360;
  return;
}



// FUNCTION 143d6fc74 FUN_143d6fc74 body=85 status=ok
// SIG undefined FUN_143d6fc74(void)

void FUN_143d6fc74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b40b360;
  return;
}



// FUNCTION 143d6fcca FUN_143d6fcca body=118 status=ok
// SIG undefined FUN_143d6fcca(void)

void FUN_143d6fcca(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b40b360;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143d6fd31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143d6fd48 FUN_143d6fd48 body=19 status=ok
// SIG undefined FUN_143d6fd48(void)

undefined1 FUN_143d6fd48(undefined8 param_1,undefined8 param_2)

{
  FUN_143d6fd5c(param_2);
  return 1;
}



// FUNCTION 143d6fd5c FUN_143d6fd5c body=314 status=ok
// SIG undefined FUN_143d6fd5c(void)

void FUN_143d6fd5c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  lVar2 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != 0) {
    lVar5 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar5 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar5 = *(longlong *)(lVar2 + 0x2c8);
      if (lVar5 == 0) goto LAB_143d6fe5e;
    }
    lVar2 = FUN_141283af6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      iVar1 = (int)param_1[1];
      if (iVar1 == 1) {
        if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        else {
          puVar3 = *(undefined2 **)*param_1;
        }
        FUN_1446f470e(&local_28,puVar3,1);
        FUN_141277db8(lVar5,&local_30,local_28);
        iVar1 = (int)param_1[1];
      }
      if (iVar1 == 2) {
        puVar4 = &DAT_149dfb77a;
        puVar3 = &DAT_149dfb77a;
        if (*(int *)((undefined8 *)*param_1 + 1) != 0) {
          puVar3 = *(undefined2 **)*param_1;
        }
        FUN_1446f470e(&local_28,puVar3,1);
        if (*(int *)(*param_1 + 0x18) != 0) {
          puVar4 = *(undefined2 **)(*param_1 + 0x10);
        }
        FUN_1446f470e(&local_30,puVar4,1);
        FUN_141673a98(lVar5,local_28,local_30);
      }
    }
  }
LAB_143d6fe5e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d6fe97 FUN_143d6fe97 body=5449 status=ok
// SIG undefined FUN_143d6fe97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d6fe97(void)

{
  undefined8 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_54;
  char *local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7ed30 = (ulonglong)uVar3;
  _DAT_14cb7ed3c = 0;
  FUN_14052b5e0(&DAT_14cb7ed38,"PlayerAwareness",0);
  _DAT_14cb7ed48 = "PlayerAwareness";
  local_50 = "sourcenexusdef";
  local_48 = 0xe;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7ed50 = (ulonglong)uVar3;
  local_50 = "sourcefactaddr";
  local_48 = 0xe;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7ed58 = (ulonglong)uVar3;
  local_50 = "sourcedialogenumvalue";
  local_48 = 0x15;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7ed60 = (ulonglong)uVar3;
  local_50 = "sourcenumber";
  local_48 = 0xc;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7ed68 = (ulonglong)uVar3;
  local_50 = "sourceobject";
  local_48 = 0xc;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7ed70 = (ulonglong)uVar3;
  _DAT_14cb7ef18 = 0x47efffffe0000000;
  _DAT_14cb7ef20 = 0x47efffffe0000000;
  _DAT_14cb7ef28 = 0x47efffffe0000000;
  _DAT_14cb7ef30 = 0x47efffffe0000000;
  _DAT_14cb7ef38 = 0x47efffffe0000000;
  _DAT_14cb7ef40 = 0x47efffffe0000000;
  _DAT_14cb7ef48 = 0x47efffffe0000000;
  _DAT_14cb7ef50 = 0x47efffffe0000000;
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_50,&DAT_14cb7ef58);
  if (cVar2 == '\0') {
    _DAT_14cb7ef58 = 0;
    uRam000000014cb7ef60 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cb7ef68 = 0xffffffff;
  _DAT_14cb7ef6c = 0;
  FUN_140056680(&DAT_14cb7ef70,L"FaceFXAnimSet_");
  atexit((_func_5014 *)&LAB_143d69f8e);
  FUN_140056680(&DAT_14cb7ef80,L"Preload_");
  atexit((_func_5014 *)&LAB_143d69f9f);
  local_50 = (char *)CONCAT71(local_50._1_7_,1);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7ef90,L"a.gbx.FaceFX.Enabled",&local_50,
                L"If true, enable triggering of FaceFX");
  atexit(FUN_143d69fb0);
  local_50 = "DistributedSpeakerEmitter";
  local_48 = 0x19;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb7efa8 = (ulonglong)uVar3;
  DAT_14cb7efb0 = 0;
  atexit((_func_5014 *)&LAB_143d6a4a6);
  _DAT_14cb7f6d8 = &LAB_143d6a4fc;
  _DAT_14cb7f6e0 = 0x458e9385;
  DAT_14cb7f6e4 = 1;
  DAT_14cb7f6d0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7f6d0;
  atexit((_func_5014 *)&LAB_143d6a501);
  _DAT_14cb7f6f8 = &LAB_143d6a535;
  _DAT_14cb7f700 = 0x43b08000;
  DAT_14cb7f704 = 1;
  DAT_14cb7f6f0 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7f6f0;
  atexit((_func_5014 *)&LAB_143d6a53a);
  _DAT_14cb7f718 = &LAB_143d6a57e;
  _DAT_14cb7f720 = 0x43b00000;
  DAT_14cb7f724 = 1;
  DAT_14cb7f710 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7f710;
  atexit((_func_5014 *)&LAB_143d6a583);
  _DAT_14cb7f738 = &LAB_143d6a5b7;
  _DAT_14cb7f740 = 0x43af0000;
  DAT_14cb7f744 = 1;
  DAT_14cb7f730 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7f730;
  atexit((_func_5014 *)&LAB_143d6a5bc);
  local_50 = "nexus";
  local_48 = 5;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7f750 = (ulonglong)uVar3;
  local_50 = (char *)CONCAT71(local_50._1_7_,1);
  local_68 = 0;
  FUN_140bd5914(&DAT_14cb7f758,L"a.gbx.FaceFX.LoadVOBDAnims",&local_50,
                L"When true, VOBD FaceFX animations will loaded along with Dialog Script");
  atexit(FUN_143d6a600);
  _DAT_14cb7f774 = 0;
  FUN_14052b5e0(&DAT_14cb7f770,"lastedit",0);
  _DAT_14cb7f780 = "lastedit";
  _DAT_14cb7f78c = 0;
  FUN_14052b5e0(&DAT_14cb7f788,"filename",0);
  _DAT_14cb7f798 = "filename";
  _DAT_14cb7f7a4 = 0;
  FUN_14052b5e0(&DAT_14cb7f7a0,"workunitoverride",0);
  _DAT_14cb7f7b0 = "workunitoverride";
  ram0x00014cb7f7bc = 0;
  FUN_14052b5e0(&DAT_14cb7f7b8,"Lines",0);
  _DAT_14cb7f7c8 = "Lines";
  ram0x00014cb7f7d4 = 0;
  FUN_14052b5e0(&DAT_14cb7f7d0,"voworkunit",0);
  _DAT_14cb7f7e0 = "voworkunit";
  _DAT_14cb7f7ec = 0;
  FUN_14052b5e0(&DAT_14cb7f7e8,"defaultstyle",0);
  _DAT_14cb7f7f8 = "defaultstyle";
  local_50 = "gesture";
  local_48 = 7;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7f800 = (ulonglong)uVar3;
  local_50 = "responseevent";
  local_48 = 0xd;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7f808 = (ulonglong)uVar3;
  local_50 = "speakernametag";
  local_48 = 0xe;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7f810 = (ulonglong)uVar3;
  local_50 = "style";
  local_48 = 5;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7f818 = (ulonglong)uVar3;
  local_50 = "mood";
  local_48 = 4;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7f820 = (ulonglong)uVar3;
  local_50 = "lineechodata";
  local_48 = 0xc;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7f828 = (ulonglong)uVar3;
  local_50 = "decisiontree";
  local_48 = 0xc;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7f830 = (ulonglong)uVar3;
  DAT_14cb7f838 = (undefined8 *)0x0;
  _DAT_14cb7f840 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x2a00,0);
  lVar6 = 0x1f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 0x2a;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  _DAT_14cb7f840 = _DAT_14cb7f840 + 0x20;
  *puVar5 = DAT_14cb7f838;
  DAT_14cb7f838 = puVar4;
  DAT_14cb7f848 = (undefined8 *)0x0;
  _DAT_14cb7f850 = 0;
  puVar4 = (undefined8 *)FUN_140595974(0x2400,0);
  lVar6 = 0x7f;
  puVar1 = puVar4;
  do {
    puVar5 = puVar1 + 9;
    *puVar1 = puVar5;
    lVar6 = lVar6 + -1;
    puVar1 = puVar5;
  } while (lVar6 != 0);
  *puVar5 = DAT_14cb7f848;
  _DAT_14cb7f850 = _DAT_14cb7f850 + 0x80;
  _DAT_14cb7f860 = &LAB_143d6a645;
  _DAT_14cb7f868 = 0x43b38000;
  DAT_14cb7f86c = 1;
  DAT_14cb7f858 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7f858;
  DAT_14cb7f848 = puVar4;
  atexit((_func_5014 *)&LAB_143d6a64a);
  _DAT_14cb7f978 = &LAB_143d6a78f;
  _DAT_14cb7f980 = 0x43af0000;
  DAT_14cb7f984 = 1;
  DAT_14cb7f970 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cb7f970;
  atexit((_func_5014 *)&LAB_143d6a794);
  local_50 = (char *)0x800000014b40784c;
  local_54 = 7;
  local_48 = FUN_14577453c();
  local_44 = 1;
  FUN_14655158e(&local_50);
  DAT_14cb7f9b8 = 0;
  DAT_14cb7f9c0 = 0;
  DAT_14cb7f998 = 0;
  _DAT_14cb7f9a0 = 0;
  _DAT_14cb7f9c4 = 0xffffffff00000080;
  DAT_14cb7f9cc = 0;
  DAT_14cb7f9d8 = 0;
  DAT_14cb7f9e0 = 0;
  atexit(FUN_143d6a7f7);
  DAT_14cb7fa08 = 0;
  DAT_14cb7fa10 = 0;
  DAT_14cb7f9e8 = 0;
  _DAT_14cb7f9f0 = 0;
  _DAT_14cb7fa14 = 0xffffffff00000080;
  DAT_14cb7fa1c = 0;
  DAT_14cb7fa28 = 0;
  DAT_14cb7fa30 = 0;
  atexit(FUN_143d6a820);
  DAT_14cb7fa38 = 0;
  _DAT_14cb7fa40 = 0;
  atexit((_func_5014 *)&LAB_143d6a849);
  DAT_14cb7fbb8 = 0;
  DAT_14cb7fbc0 = 0;
  atexit(FUN_143d6a85a);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40ad40;
  local_54 = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14cb7fa48,L"gbx.DLSS.QualityMode",&local_54,
                L"DLSS Mode [0-5].  Lower values yield superior images.  Higher values yield improved performance.  Default is 0 - Native AA.\n 0 - Native AA\t\t\n 1 - Ultra Quality\t\n 2 - Quality\t\t\t\n 3 - Balanced\t\t\t\n 4 - Performance\t\t\n 5 - Ultra Performance\n"
               );
  (**(code **)(*DAT_14cb7fa50 + 200))(DAT_14cb7fa50,&local_50);
  if (local_48 == 0) {
LAB_143d707ed:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d707ed;
  }
  atexit(FUN_143d6c8d4);
  local_50 = "UpscalingMethod";
  local_48 = 0xf;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb7fa60 = (ulonglong)uVar3;
  local_50 = "FrameGeneration";
  local_48 = 0xf;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7fa68 = (ulonglong)uVar3;
  local_50 = "Upscaling";
  local_48 = 9;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7fa70 = (ulonglong)uVar3;
  local_50 = "AntiAliasingMethod";
  local_48 = 0x12;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb7fa78 = (ulonglong)uVar3;
  local_50 = "WindowsTextureLODGroups";
  local_48 = 0x17;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb7fa80 = (ulonglong)uVar3;
  local_50 = "Textures";
  local_48 = 8;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb7fa88 = (ulonglong)uVar3;
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = 0;
  FUN_140a6b41e(&DAT_14cb7fa90,L"r.gbx.GameUserSettings.TextureSettingApplicationDelay",&local_50,
                L"Define the delay in seconds between applications of texture settings.");
  atexit(FUN_143d6c919);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = 0;
  FUN_14078dbce(&DAT_14cb7faa8,L"r.gbx.GameUserSettings.AllowFSRFrameGenForAnyVendor",&local_50,
                L"0: Only allow FSR FrameGen option for AMD GPUs \n>= 0: Allow FSR FrameGen option for any GPU"
               );
  atexit(FUN_143d6c95e);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40af70;
  local_68 = 0;
  FUN_14152bcb8(&DAT_14cb7fae0,L"GraphicsSettings.ResetDefault",
                L"Reset graphics settings to defaults",&local_50);
  if (local_48 == 0) {
LAB_143d70a51:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d70a51;
  }
  atexit(FUN_143d6cd4f);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40afe0;
  local_68 = 0;
  FUN_14152bcb8(&DAT_14cb7faf0,L"GraphicsSettings.Apply",L"Apply graphics settings",&local_50);
  if (local_48 == 0) {
LAB_143d70b2b:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d70b2b;
  }
  atexit(FUN_143d6cd94);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40b050;
  local_68 = 0;
  FUN_14152bcb8(&DAT_14cb7fb00,L"GraphicsSettings.Save",
                L"Save changes done to the graphics settings",&local_50);
  if (local_48 == 0) {
LAB_143d70c05:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d70c05;
  }
  atexit(FUN_143d6cdd9);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40b0c0;
  local_68 = 0;
  FUN_14152bcb8(&DAT_14cb7fb10,L"GraphicsSettings.Load",L"Load current graphics settings",&local_50)
  ;
  if (local_48 == 0) {
LAB_143d70cdf:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d70cdf;
  }
  atexit(FUN_143d6ce1e);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40b130;
  local_68 = 0;
  FUN_1415c7246(&DAT_14cb7fb20,L"GbxGameUserSettings.ToggleHDR",L"Toggle HDR on or off",&local_50);
  if (local_48 == 0) {
LAB_143d70dc0:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d70dc0;
  }
  atexit(FUN_143d6ce63);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40b1a0;
  local_68 = 0;
  FUN_1415c7246(&DAT_14cb7fb30,L"GbxGameUserSettings.ActiveGraphicsPreset",
                L"Set the active graphics preset, use GbxGameUserSettings.GetAvailableGraphicsPresets for a list of available presets"
                ,&local_50);
  if (local_48 == 0) {
LAB_143d70e9a:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d70e9a;
  }
  atexit(FUN_143d6cea8);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40b210;
  local_68 = 0;
  FUN_14152bcb8(&DAT_14cb7fb40,L"GbxGameUserSettings.AvailableGraphicsPreset",
                L"Show a list of the available graphics presets",&local_50);
  if (local_48 == 0) {
LAB_143d70f74:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d70f74;
  }
  atexit(FUN_143d6ceed);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40b280;
  local_68 = 0;
  FUN_14152bcb8(&DAT_14cb7fb50,L"GbxGameUserSettings.AvailableGraphicsSettings",
                L"Show a list of the available graphics settings",&local_50);
  if (local_48 == 0) {
LAB_143d7104e:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d7104e;
  }
  atexit(FUN_143d6cf32);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40b2f0;
  local_68 = 0;
  FUN_1415c7246(&DAT_14cb7fb60,L"GbxGameUserSettings.AvailableGraphicsSettingOptions",
                L"Show a list of the available options for a given graphics setting",&local_50);
  if (local_48 == 0) {
LAB_143d71128:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_143d71128;
  }
  atexit(FUN_143d6cf77);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  *(longlong *)(local_50 + 0x10) = lVar7;
  *(undefined ***)local_50 = &PTR_FUN_14b40b360;
  local_68 = 0;
  FUN_1415c7246(&DAT_14cb7fb70,L"GbxGameUserSettings.ActiveSettingOption",
                L"Set the current option used for a graphics setting",&local_50);
  if (local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_143d71210;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143d71210:
  atexit(FUN_143d6cfbc);
  local_50 = "OK";
  local_48 = 2;
  local_44 = 0;
  uVar3 = FUN_14001a6c0(&local_50,1);
  DAT_14cb7fb80 = (ulonglong)uVar3;
  DAT_14cb7fb88 = 0;
  _DAT_14cb7fb90 = 0;
  atexit(FUN_143d6d138);
  DAT_14cb7fb98 = 0;
  _DAT_14cb7fba0 = 0;
  atexit(FUN_143d6d169);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d713e4 FUN_143d713e4 body=41 status=ok
// SIG undefined FUN_143d713e4(void)

void FUN_143d713e4(void)

{
  DAT_14cb7fc20 = 0;
  if (DAT_14cb7fc18 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6647e();
  return;
}



// FUNCTION 143d71412 FUN_143d71412 body=41 status=ok
// SIG undefined FUN_143d71412(void)

void FUN_143d71412(void)

{
  DAT_14cb7fd10 = 0;
  if (DAT_14cb7fd08 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6651c();
  return;
}



// FUNCTION 143d71440 FUN_143d71440 body=49 status=ok
// SIG undefined FUN_143d71440(void)

void FUN_143d71440(void)

{
  FUN_144a65a1e(DAT_14cb7fdb0,DAT_14cb7fdb8);
  if (DAT_14cb7fdb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d71471 FUN_143d71471 body=49 status=ok
// SIG undefined FUN_143d71471(void)

void FUN_143d71471(void)

{
  FUN_143d7a9b0(DAT_14cb7fdc8,DAT_14cb7fdd0);
  if (DAT_14cb7fdc8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d714a2 FUN_143d714a2 body=49 status=ok
// SIG undefined FUN_143d714a2(void)

void FUN_143d714a2(void)

{
  FUN_143d7a7f1(DAT_14cb7fdd8,DAT_14cb7fde0);
  if (DAT_14cb7fdd8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143d714e4 FUN_143d714e4 body=624 status=ok
// SIG undefined FUN_143d714e4(void)

void FUN_143d714e4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined4 local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0x26c) == 0) || (uVar3 = *(uint *)(param_1 + 0x268), (int)uVar3 < 0)) ||
     (DAT_14c9647dc <= (int)uVar3)) goto LAB_143d7154e;
  lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (((lVar8 == 0) || (*(int *)(lVar8 + 0x10) != *(int *)(param_1 + 0x26c))) ||
     ((param_2 == 0 || ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))) goto LAB_143d7154e;
  cVar5 = FUN_14888a58e(param_1,param_2);
  if (cVar5 != '\0') goto LAB_143d7154e;
  if (*(int *)(param_1 + 0x26c) == 0) {
LAB_143d71756:
    uVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x268);
    uVar6 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x26c) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_143d71756;
      uVar6 = *puVar7;
    }
  }
  FUN_14888a602(uVar6,&local_58,param_2);
  if ((local_58 != 0) &&
     (((((*(int *)(local_58 + 0x4c) == 0 || (uVar3 = *(uint *)(local_58 + 0x48), (int)uVar3 < 0)) ||
        (DAT_14c9647dc <= (int)uVar3)) ||
       ((plVar9 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(local_58 + 0x4c))))) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 || (*plVar9 == 0)))))) {
    lVar8 = *(longlong *)(local_58 + 0x18);
    plVar9 = *(longlong **)(local_58 + 0x20);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    if (lVar8 != 0) {
      local_48 = &LAB_14888a80e;
      local_40 = 0;
      FUN_14888a70e(lVar8 + 0x18,local_38,param_1);
    }
    FUN_14888a816(local_58,param_1);
    iVar4 = *(int *)(param_1 + 0x278);
    *(uint *)(param_1 + 0x278) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x27c) < iVar4 + 1U) {
      FUN_14889fa30((longlong *)(param_1 + 0x270),iVar4);
    }
    lVar8 = *(longlong *)(param_1 + 0x270);
    *(longlong *)(lVar8 + (longlong)iVar4 * 0x10) = local_58;
    *(undefined8 **)(lVar8 + 8 + (longlong)iVar4 * 0x10) = local_50;
    if (local_50 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = *(int *)(local_50 + 1) + 1;
      UNLOCK();
    }
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
  }
  if (local_50 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_50 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
LAB_143d7154e:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7176a FUN_143d7176a body=613 status=ok
// SIG undefined FUN_143d7176a(void)

undefined8 * FUN_143d7176a(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  ulonglong local_58;
  ulonglong *local_50;
  longlong *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_3;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  plVar3 = (longlong *)(param_1 + 0x4f8);
  iVar4 = *(int *)(param_1 + 0x500);
  iVar6 = *(int *)(param_1 + 0x52c);
  if (iVar4 != iVar6) {
    uVar7 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar5 = param_1 + 0x530;
    if (*(longlong *)(param_1 + 0x538) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x538);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x540) - 1U & (uVar7 >> 0x10 ^ uVar7)) *
                             4);
    if (iVar8 != -1) {
      do {
        lVar5 = *plVar3 + (longlong)iVar8 * 0x20;
        if (*(ulonglong *)(*plVar3 + (longlong)iVar8 * 0x20) == param_3) {
          if ((lVar5 != 0) && (lVar5 != -8)) goto LAB_143d718cd;
          break;
        }
        iVar8 = *(int *)(lVar5 + 0x18);
      } while (iVar8 != -1);
    }
  }
  if (DAT_14cb80540 == 0) {
    lVar5 = FUN_14001cc68(0x68,0x10);
    FUN_145d2e85a(lVar5);
    DAT_14cb80540 = lVar5;
  }
  FUN_14889192e(DAT_14cb80540,&local_68,param_3);
  if (local_68 != 0) {
    *(ulonglong *)(local_68 + 0x18) = param_3;
    local_50 = &local_58;
    local_48 = &local_68;
    FUN_1488a461c(plVar3,local_3c);
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
  iVar4 = *(int *)(param_1 + 0x500);
  iVar6 = *(int *)(param_1 + 0x52c);
LAB_143d718cd:
  if (iVar4 != iVar6) {
    uVar7 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar5 = param_1 + 0x530;
    if (*(longlong *)(param_1 + 0x538) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x538);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x540) - 1U & (uVar7 >> 0x10 ^ uVar7)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar5 = *plVar3 + (longlong)iVar4 * 0x20;
        if (*(ulonglong *)(*plVar3 + (longlong)iVar4 * 0x20) == local_58) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
            *param_2 = *(undefined8 *)(lVar5 + 8);
            lVar5 = *(longlong *)(lVar5 + 0x10);
            param_2[1] = lVar5;
            if (lVar5 != 0) {
              LOCK();
              *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
              UNLOCK();
            }
            goto LAB_143d71969;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_143d71969:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143d719d2 FUN_143d719d2 body=120 status=ok
// SIG undefined FUN_143d719d2(void)

void FUN_143d719d2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_3 + 0x10))(param_3);
  if (cVar2 == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2a8);
  *(uint *)(param_1 + 0x2a8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x2ac) < iVar1 + 1U) {
    FUN_14889fab6(param_1 + 0x2a0,iVar1);
  }
  FUN_148889e78((longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0x2a0),param_2,param_3);
  FUN_14888a85a(param_1);
  return;
}



// FUNCTION 143d71a4a FUN_143d71a4a body=143 status=ok
// SIG undefined FUN_143d71a4a(void)

void FUN_143d71a4a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  
  cVar3 = (**(code **)(*param_3 + 0x10))(param_3);
  if (cVar3 == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2b8);
  *(uint *)(param_1 + 0x2b8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 700) < iVar1 + 1U) {
    FUN_14889fb46((longlong *)(param_1 + 0x2b0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x2b0);
  FUN_148889c34(lVar2 + (longlong)iVar1 * 0x50,param_2,param_3);
  FUN_1486bf498(lVar2 + (longlong)iVar1 * 0x50 + 0x20,param_3);
  return;
}



// FUNCTION 143d71ad9 FUN_143d71ad9 body=41 status=ok
// SIG undefined FUN_143d71ad9(void)

void FUN_143d71ad9(void)

{
  DAT_14cb7fe48 = 0;
  if (DAT_14cb7fe40 != 0) {
    FUN_1400020a8();
  }
  FUN_145d665ba();
  return;
}



// FUNCTION 143d71b07 FUN_143d71b07 body=59 status=ok
// SIG undefined FUN_143d71b07(void)

void FUN_143d71b07(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb7ff00;
  if (DAT_14cb7ff00 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb7ff00 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d71b37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d71b42 FUN_143d71b42 body=59 status=ok
// SIG undefined FUN_143d71b42(void)

void FUN_143d71b42(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb7ff18;
  if (DAT_14cb7ff18 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb7ff18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d71b72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d71b7d FUN_143d71b7d body=59 status=ok
// SIG undefined FUN_143d71b7d(void)

void FUN_143d71b7d(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb7ff30;
  if (DAT_14cb7ff30 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb7ff30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d71bad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d71bb8 FUN_143d71bb8 body=59 status=ok
// SIG undefined FUN_143d71bb8(void)

void FUN_143d71bb8(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb7ff48;
  if (DAT_14cb7ff48 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb7ff48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d71be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d71bf3 FUN_143d71bf3 body=59 status=ok
// SIG undefined FUN_143d71bf3(void)

void FUN_143d71bf3(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cb7ff60;
  if (DAT_14cb7ff60 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cb7ff60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143d71c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d71c2e FUN_143d71c2e body=258 status=ok
// SIG undefined FUN_143d71c2e(void)

void FUN_143d71c2e(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  
  if (param_2 == 0) {
    return;
  }
  if (param_1[3] == 0) {
    return;
  }
  cVar4 = (**(code **)(*param_1 + 0x38))(param_1);
  if (cVar4 == '\0') {
    return;
  }
  cVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  if (cVar4 == '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0xb) & 2) != 0) {
    return;
  }
  iVar1 = *(int *)(param_1[3] + 0x4c);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = *(uint *)(param_1[3] + 0x48);
  if ((int)uVar2 < 0) {
    return;
  }
  if ((int)uVar2 < DAT_14c9647dc) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    if ((int)plVar5[2] != iVar1) {
      return;
    }
    if ((*(uint *)(plVar5 + 1) & 0x10200000) != 0) {
      return;
    }
    lVar3 = *plVar5;
    if (lVar3 != 0) {
      if (((*(longlong *)(lVar3 + 0x290) == 0) ||
          (cVar4 = FUN_148887e42(*(longlong *)(lVar3 + 0x290),param_2), cVar4 == '\0')) &&
         (cVar4 = FUN_14888df78(lVar3,param_1,param_2), cVar4 != '\0')) {
        FUN_1488878cc(lVar3 + 0x198,param_2,0);
        iVar1 = (int)param_1[10];
        *(uint *)(param_1 + 10) = iVar1 + 1U;
        if (*(uint *)((longlong)param_1 + 0x54) < iVar1 + 1U) {
          FUN_1488a1ed0(param_1 + 9,iVar1);
        }
        *(longlong *)(param_1[9] + (longlong)iVar1 * 8) = param_2;
      }
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 2;
      return;
    }
    return;
  }
  return;
}



// FUNCTION 143d71d30 FUN_143d71d30 body=41 status=ok
// SIG undefined FUN_143d71d30(void)

void FUN_143d71d30(void)

{
  DAT_14cb7ffd0 = 0;
  if (DAT_14cb7ffc8 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66658();
  return;
}



// FUNCTION 143d71d65 FUN_143d71d65 body=41 status=ok
// SIG undefined FUN_143d71d65(void)

void FUN_143d71d65(void)

{
  DAT_14cb800c8 = 0;
  if (DAT_14cb800c0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d666f6();
  return;
}



// FUNCTION 143d71db5 FUN_143d71db5 body=41 status=ok
// SIG undefined FUN_143d71db5(void)

void FUN_143d71db5(void)

{
  DAT_14cb80220 = 0;
  if (DAT_14cb80218 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66794();
  return;
}



// FUNCTION 143d71de4 FUN_143d71de4 body=1135 status=ok
// SIG undefined FUN_143d71de4(void)

void FUN_143d71de4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(*param_2 + 0x30) != 0) {
    puVar3 = *(undefined4 **)(*(longlong *)(*param_2 + 0x30) + 8);
    puVar12 = &DAT_14c9485f0;
    if (puVar3 != (undefined4 *)0x0) {
      puVar12 = puVar3;
    }
    if (DAT_14c947fe0 == 0) {
      lVar7 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar7);
      DAT_14c947fe0 = lVar7;
    }
    FUN_140045924(DAT_14c947fe0,&local_50,puVar12,1);
    if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
      uVar8 = (uint)((ulonglong)local_50 >> 0x10);
      uVar9 = (uint)local_50 & 0xffff;
      uVar9 = ((uVar9 >> 4) +
              ((uint)local_50 << 0x10 | uVar9) + (int)((ulonglong)local_50 >> 0x20) +
              (uVar8 << 0x13 | uVar8 & 0xffff)) - 0xa001 ^ 5;
      uVar8 = uVar9 << 8 ^ 0x9e36d9b8 - uVar9;
      uVar14 = uVar8 >> 0xd ^ (0xa001 - uVar9) - uVar8;
      uVar15 = uVar14 >> 0xc ^ (uVar9 - uVar8) - uVar14;
      uVar9 = uVar15 << 0x10 ^ (uVar8 - uVar14) - uVar15;
      uVar8 = uVar9 >> 5 ^ (uVar14 - uVar15) - uVar9;
      uVar14 = uVar8 >> 3 ^ (uVar15 - uVar9) - uVar8;
      uVar9 = uVar14 << 10 ^ (uVar9 - uVar8) - uVar14;
      lVar7 = param_1 + 0x60;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x68);
      }
      iVar10 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(param_1 + 0x70) - 1U &
                                (uVar9 >> 0xf ^ uVar8 - (uVar14 + uVar9))) * 4);
      if (iVar10 != -1) {
        lVar7 = *(longlong *)(param_1 + 0x28);
        while( true ) {
          lVar11 = (longlong)iVar10 * 0x40;
          lVar17 = lVar7 + lVar11;
          if ((*(longlong *)(lVar7 + lVar11) == local_50) &&
             (*(int *)(lVar7 + 8 + lVar11) == 0xa001)) break;
          iVar10 = *(int *)(lVar17 + 0x38);
          if (iVar10 == -1) goto LAB_143d720e0;
        }
        if ((longlong *)(lVar17 + 0x18) == (longlong *)0x0 || lVar17 == 0) goto LAB_143d720e0;
        lVar7 = *param_2;
        bVar5 = *(byte *)(lVar7 + 0x69);
        if (bVar5 == 0) {
          *(undefined2 *)(lVar7 + 0x68) = 0x100;
          lVar7 = *param_2;
          bVar5 = *(byte *)(lVar7 + 0x69);
        }
        if ((bVar5 & 1) == 0) goto LAB_143d720c9;
        lVar11 = lVar7 + 0x38;
        if ((0 < *(int *)(lVar7 + 0x40)) || (0 < *(int *)(lVar7 + 0x50))) {
          FUN_1458918a3(*(undefined8 *)(lVar7 + 0x38));
          *(undefined4 *)(lVar7 + 0x40) = 0;
          if (*(int *)(lVar7 + 0x44) != 0) {
            FUN_1488a2ce4(lVar11,0);
          }
          FUN_1458918eb(*(undefined8 *)(lVar7 + 0x48),*(undefined4 *)(lVar7 + 0x50));
          *(undefined4 *)(lVar7 + 0x50) = 0;
          if (*(int *)(lVar7 + 0x54) != 0) {
            FUN_1488a2d54(lVar7 + 0x48,0);
          }
          *(undefined1 *)(lVar7 + 0x68) = 1;
        }
        iVar10 = *(int *)(lVar17 + 0x20);
        if (iVar10 < 0) goto LAB_143d72226;
        if (*(int *)(lVar7 + 0x44) < iVar10) {
          FUN_1488a2ce4(lVar11);
          iVar10 = *(int *)(lVar17 + 0x20);
        }
        if (iVar10 != 0) {
          lVar13 = *(longlong *)(lVar17 + 0x18) + 0x20;
          lVar16 = (longlong)iVar10 * 0x30;
          do {
            if ((*(longlong *)(lVar13 + -0x20) != 0) && (*(int *)(lVar13 + -0x18) - 1U < 0xfffffffe)
               ) {
              plVar6 = (longlong *)FUN_14888fb9c(lVar11);
              if ((*plVar6 != *(longlong *)(lVar13 + -0x20)) ||
                 ((int)plVar6[1] != *(int *)(lVar13 + -0x18))) {
                *plVar6 = *(longlong *)(lVar13 + -0x20);
                *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(lVar13 + -0x18);
                plVar6[2] = 0;
              }
              FUN_146a6959c(plVar6 + 4,lVar13);
              *(undefined1 *)(lVar7 + 0x68) = 1;
            }
            lVar13 = lVar13 + 0x30;
            lVar16 = lVar16 + -0x30;
          } while (lVar16 != 0);
        }
        iVar10 = *(int *)(lVar17 + 0x30);
        if (iVar10 < 0) {
LAB_143d72226:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar10);
        }
        if (*(int *)(lVar7 + 0x54) < iVar10) {
          FUN_1488a2d54(lVar7 + 0x48);
          iVar10 = *(int *)(lVar17 + 0x30);
        }
        if (iVar10 != 0) {
          lVar11 = *(longlong *)(lVar17 + 0x28) + 0x20;
          lVar17 = (longlong)iVar10 * 0x30;
          do {
            if ((*(longlong *)(lVar11 + -0x20) != 0) && (*(int *)(lVar11 + -0x18) - 1U < 0xfffffffe)
               ) {
              plVar6 = (longlong *)FUN_14888fbdc(lVar7 + 0x48);
              if ((*plVar6 != *(longlong *)(lVar11 + -0x20)) ||
                 ((int)plVar6[1] != *(int *)(lVar11 + -0x18))) {
                *plVar6 = *(longlong *)(lVar11 + -0x20);
                *(undefined4 *)(plVar6 + 1) = *(undefined4 *)(lVar11 + -0x18);
                plVar6[2] = 0;
              }
              FUN_1486ba45a(plVar6 + 4,lVar11);
              *(undefined1 *)(lVar7 + 0x68) = 1;
            }
            lVar11 = lVar11 + 0x30;
            lVar17 = lVar17 + -0x30;
          } while (lVar17 != 0);
        }
LAB_143d720c9:
        lVar7 = *param_2;
        if ((*(char *)(lVar7 + 0x69) == '\x01') &&
           (*(undefined1 *)(lVar7 + 0x69) = 0, *(char *)(lVar7 + 0x68) == '\x01')) {
          FUN_14888f9f4(lVar7);
          local_40 = *(longlong **)(lVar7 + 0x10);
          if (local_40 == (longlong *)0x0) {
            local_40 = (longlong *)0x0;
            local_48 = 0;
          }
          else {
            iVar10 = (int)local_40[1];
            local_48 = 0;
            do {
              if (iVar10 == 0) {
                local_40 = (longlong *)0x0;
                goto LAB_143d721d3;
              }
              LOCK();
              iVar4 = (int)local_40[1];
              bVar18 = iVar10 == iVar4;
              if (bVar18) {
                *(int *)(local_40 + 1) = iVar10 + 1;
                iVar4 = iVar10;
              }
              iVar10 = iVar4;
              UNLOCK();
            } while (!bVar18);
            local_48 = *(undefined8 *)(lVar7 + 8);
          }
LAB_143d721d3:
          FUN_1488a2dc4(lVar7 + 0x18,&local_48);
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
          *(undefined1 *)(lVar7 + 0x68) = 0;
        }
      }
    }
  }
LAB_143d720e0:
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
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d72254 FUN_143d72254 body=394 status=ok
// SIG undefined FUN_143d72254(void)

void FUN_143d72254(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(*param_2 + 0x30) != 0) {
    puVar1 = *(undefined4 **)(*(longlong *)(*param_2 + 0x30) + 8);
    puVar6 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar6 = puVar1;
    }
    if (DAT_14c947fe0 == 0) {
      lVar3 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar3);
      DAT_14c947fe0 = lVar3;
    }
    FUN_140045924(DAT_14c947fe0,&local_50,puVar6,1);
    local_48 = local_50;
    local_40 = 0xa001;
    local_38 = 0;
    uVar4 = (uint)((ulonglong)local_50 >> 0x10);
    uVar7 = (uint)local_50 & 0xffff;
    uVar4 = ((uint)local_50 * 0x10000 + (int)((ulonglong)local_50 >> 0x20) + uVar7 +
             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) - 0xa001 ^ 5;
    uVar7 = uVar4 << 8 ^ 0x9e36d9b8 - uVar4;
    uVar5 = uVar7 >> 0xd ^ (0xa001 - uVar4) - uVar7;
    uVar4 = uVar5 >> 0xc ^ (uVar4 - uVar7) - uVar5;
    uVar7 = uVar4 << 0x10 ^ (uVar7 - uVar5) - uVar4;
    uVar5 = uVar7 >> 5 ^ (uVar5 - uVar4) - uVar7;
    uVar8 = uVar5 >> 3 ^ (uVar4 - uVar7) - uVar5;
    uVar4 = uVar8 << 10 ^ (uVar7 - uVar5) - uVar8;
    uVar2 = FUN_1488a3b86(param_1 + 0x28,uVar4 >> 0xf ^ uVar5 - (uVar8 + uVar4));
    FUN_14888fc1c(*param_2,uVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d723df FUN_143d723df body=41 status=ok
// SIG undefined FUN_143d723df(void)

void FUN_143d723df(void)

{
  DAT_14cb80310 = 0;
  if (DAT_14cb80308 != 0) {
    FUN_1400020a8();
  }
  FUN_145d66832();
  return;
}



// FUNCTION 143d724b8 FUN_143d724b8 body=112 status=ok
// SIG undefined FUN_143d724b8(void)

void FUN_143d724b8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x560);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x558);
    lVar3 = 0;
    do {
      FUN_148888c7a(*(undefined8 *)(lVar2 + lVar3),param_3);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  FUN_1403d8bdc(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143d72528 FUN_143d72528 body=371 status=ok
// SIG undefined FUN_143d72528(void)

void FUN_143d72528(undefined8 param_1)

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
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_140266114();
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x430), lVar2 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar2 = *(longlong *)(lVar1 + 0x430);
      if (lVar2 == 0) goto LAB_143d725b2;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      lVar1 = FUN_140628492();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
LAB_143d725b2:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_143778f28(param_1);
  return;
}



// FUNCTION 143d726aa FUN_143d726aa body=586 status=ok
// SIG undefined FUN_143d726aa(void)

void FUN_143d726aa(longlong *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [8];
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1[0x12] != 0) {
    local_c8 = 0.0;
    dStack_c0 = 0.0;
    local_b8 = 0.0;
    plVar10 = (longlong *)param_4[0x28];
    if ((longlong *)param_4[0x28] == (longlong *)0x0) {
      plVar10 = param_4;
    }
    if ((longlong)(int)param_4[0x29] != 0) {
      plVar11 = plVar10 + (longlong)(int)param_4[0x29] * 4;
      dVar2 = 0.0;
      dVar3 = 0.0;
      dVar4 = 0.0;
      do {
        if (0.0001 <= ABS(*(float *)(plVar10 + 3))) {
          dVar5 = 0.0;
          if ((longlong)*(int *)(param_3 + 0x10) != 0) {
            lVar1 = *(longlong *)(param_3 + 8);
            lVar9 = 0;
            do {
              if (*(longlong *)(lVar1 + lVar9) == *plVar10) {
                dVar7 = (double)*(float *)(plVar10 + 3);
                dVar5 = *(double *)(lVar1 + 0x28 + lVar9) * dVar7;
                dVar6 = *(double *)(lVar1 + 0x20 + lVar9) * dVar7;
                dVar7 = dVar7 * *(double *)(lVar1 + 0x18 + lVar9);
                goto LAB_143d727ef;
              }
              lVar9 = lVar9 + 0x30;
            } while ((longlong)*(int *)(param_3 + 0x10) * 0x30 != lVar9);
          }
          dVar6 = 0.0;
          dVar7 = 0.0;
LAB_143d727ef:
          cVar8 = FUN_14171cc3c(plVar10);
          if ((cVar8 == '\0') &&
             ((double)*(float *)(param_1[0x12] + 0x1c) <=
              SQRT(dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6))) {
            dVar2 = dVar2 + dVar7;
            dVar3 = dVar3 + dVar6;
            dVar4 = dVar4 + dVar5;
            local_c8 = dVar2;
            dStack_c0 = dVar3;
            local_b8 = dVar4;
          }
        }
        plVar10 = plVar10 + 4;
      } while (plVar10 != plVar11);
    }
    (**(code **)(*param_1 + 0x78))(param_1,local_d0,&local_c8);
    (**(code **)(*param_1 + 0x88))(param_1,param_2,local_d0);
  }
  if ((local_b0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d72ab4 FUN_143d72ab4 body=228 status=ok
// SIG undefined FUN_143d72ab4(void)

void FUN_143d72ab4(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != (longlong *)0x0 && param_2 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x155) & 0x20) == 0)) {
      iVar4 = FUN_14490d72a(lVar5);
      if (iVar4 != 3) {
        lVar5 = FUN_14589e76e(param_1);
        if (lVar5 != 0) {
          lVar2 = *(longlong *)(lVar5 + 0x148);
          puVar3 = *(undefined8 **)(lVar5 + 0x150);
          if (puVar3 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
            UNLOCK();
          }
          if (lVar2 != 0) {
            local_20 = DAT_14c948620;
            local_28 = DAT_14c948618;
            FUN_148895746(lVar2,param_2);
          }
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
                FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
              }
            }
          }
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



// FUNCTION 143d72ba9 FUN_143d72ba9 body=69 status=ok
// SIG undefined FUN_143d72ba9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143d72ba9(void)

{
  _DAT_14cb80950 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143d72beb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb80958,1);
  return;
}



// FUNCTION 143d72bf2 FUN_143d72bf2 body=134 status=ok
// SIG undefined FUN_143d72bf2(void)

void FUN_143d72bf2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x4c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*(longlong *)*plVar3 + 0x2b0))();
      if (lVar2 != 0) {
        FUN_140bc53f1(param_2,param_3,lVar2,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d72c78 FUN_143d72c78 body=402 status=ok
// SIG undefined FUN_143d72c78(void)

void FUN_143d72c78(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  iVar8 = (int)param_1[0xf];
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  plVar1 = param_1 + 0x2e;
  if (*(int *)((longlong)param_1 + 0x17c) < iVar8) {
    FUN_14655254c(plVar1);
    iVar8 = (int)param_1[0xf];
  }
  *(undefined1 *)((longlong)param_1 + 0x16c) = 1;
  if ((0 < iVar8) && (plVar2 = *(longlong **)param_1[0xe], plVar2 != (longlong *)0x0)) {
    lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar5 = FUN_140f0c390();
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      iVar8 = (int)param_1[0x2f];
      *(uint *)(param_1 + 0x2f) = iVar8 + 1U;
      if (*(uint *)((longlong)param_1 + 0x17c) < iVar8 + 1U) {
        FUN_1488a5a22(plVar1,iVar8);
      }
      *(longlong **)(param_1[0x2e] + (longlong)iVar8 * 8) = plVar2;
      lVar4 = param_1[0xf];
      if ((longlong)(int)lVar4 != 0) {
        lVar5 = param_1[0xe];
        lVar9 = 0;
        do {
          plVar2 = *(longlong **)(lVar5 + lVar9);
          if (plVar2 != (longlong *)0x0) {
            lVar6 = (**(code **)(*plVar2 + 8))(plVar2);
            lVar7 = FUN_14063f846();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              (**(code **)(*plVar2 + 0xa0))(plVar2);
              cVar3 = (**(code **)(*(longlong *)plVar2[9] + 0xa0))();
              if (cVar3 != '\0') {
                iVar8 = (int)param_1[0x2f];
                *(uint *)(param_1 + 0x2f) = iVar8 + 1U;
                if (*(uint *)((longlong)param_1 + 0x17c) < iVar8 + 1U) {
                  FUN_1488a5a22(plVar1,iVar8);
                }
                *(longlong **)(*plVar1 + (longlong)iVar8 * 8) = plVar2;
              }
            }
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)(int)lVar4 * 8 != lVar9);
      }
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000143d72d02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}



// FUNCTION 143d72e0c FUN_143d72e0c body=3031 status=ok
// SIG undefined FUN_143d72e0c(void)

void FUN_143d72e0c(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  byte bVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  void *pvVar11;
  uint uVar12;
  longlong *plVar13;
  undefined *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 ****ppppuVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_b8 [32];
  char local_98;
  undefined7 uStack_97;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70;
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = param_1[9];
  if ((((((*(int *)((longlong)param_1 + 0x74) == 0) ||
         (uVar12 = *(uint *)(param_1 + 0xe), (int)uVar12 < 0)) || (DAT_14c9647dc <= (int)uVar12)) ||
       ((plVar13 = (longlong *)
                   ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
        plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)((longlong)param_1 + 0x74))))) ||
      ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) || (lVar8 = *plVar13, lVar8 == 0)) {
    lVar8 = lVar10 + 0x80;
    cVar6 = FUN_140c58360(param_1[8],lVar8);
    if (cVar6 == '\0') {
LAB_143d73142:
      *(undefined4 *)(param_1 + 0xe) = 0;
      lVar8 = 0;
      iVar7 = 0;
    }
    else {
      lVar17 = param_1[8];
      if (lVar17 == 0) {
        lVar19 = 0;
        local_90 = (longlong *)0x0;
LAB_143d73828:
        local_88 = (longlong *)0x0;
        bVar21 = true;
      }
      else {
        if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_143d7364d:
          lVar19 = 0;
        }
        else {
          uVar12 = *(uint *)(lVar17 + 0x48);
          lVar19 = 0;
          if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
            plVar13 = (longlong *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
            if ((plVar13 == (longlong *)0x0) ||
               (((int)plVar13[2] != *(int *)(lVar17 + 0x4c) ||
                ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_143d7364d;
            lVar19 = *plVar13;
          }
        }
        plVar13 = *(longlong **)(lVar17 + 0x118);
        local_90 = param_1;
        if (plVar13 == (longlong *)0x0) goto LAB_143d73828;
        LOCK();
        *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar3 = plVar13 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar13)(plVar13);
          LOCK();
          piVar1 = (int *)((longlong)plVar13 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar13 + 0x10))(plVar13);
          }
        }
        LOCK();
        *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
        UNLOCK();
        bVar21 = false;
        local_88 = plVar13;
      }
      plVar13 = local_88;
      local_70 = 0;
      local_98 = '\x03';
      local_80._0_4_ = 0;
      if (lVar19 == 0) {
        iVar7 = 0;
        uVar12 = (uint)local_80;
      }
      else {
        uVar12 = *(uint *)(lVar19 + 0xc);
        local_80 = (ulonglong)uVar12;
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar7 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar16 = DAT_14c964868 + 1;
          bVar22 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar22) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar7 = *(int *)(lVar17 + 0x10);
          bVar22 = iVar7 == 0;
          if (bVar22) {
            *(int *)(lVar17 + 0x10) = iVar16;
            iVar7 = 0;
          }
          UNLOCK();
          uVar12 = (uint)local_80;
          if (bVar22) {
            iVar7 = iVar16;
          }
        }
      }
      local_80._0_4_ = uVar12;
      local_80 = CONCAT44(iVar7,(uint)local_80);
      local_78 = 2;
      if (local_70 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_70 + -1,1);
        local_70 = 0;
      }
      if (!bVar21) {
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      FUN_1447c3578(lVar8,local_68,&local_98);
      lVar8 = FUN_14030a32e(local_68);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar2 != (code *)0x0) {
        ppppuVar18 = local_68;
        if (0x18 < local_50) {
          ppppuVar18 = (undefined8 ****)local_68[0];
        }
        (*pcVar2)(ppppuVar18);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(local_68[0]);
      }
      lVar17 = DAT_14c9a3da0;
      if ((longlong)local_70 != 0) {
        lVar19 = (longlong)local_70 + -1;
        lVar20 = lVar19 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
        if (*(longlong *)(lVar17 + lVar20) != 0) {
          FUN_1400020a8();
        }
        lVar17 = DAT_14c9a3da0;
        iVar7 = (int)lVar19;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar17 + lVar20) = 0xffffffff;
        iVar16 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar16 = DAT_14c9a3dd0;
        }
        *(int *)(lVar17 + 4 + lVar20) = iVar16;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar14 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar14 = DAT_14c9a3dc0;
        }
        iVar16 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar16 = iVar7;
        }
        bVar4 = (byte)lVar19 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar14 + (longlong)(iVar16 >> 5) * 4) =
             *(uint *)(puVar14 + (longlong)(iVar16 >> 5) * 4) &
             (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
        local_70 = 0;
      }
      if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))();
        }
      }
      if (lVar8 == 0) {
        FUN_1400b22c2(&local_98,"Settings.Actor");
        pvVar11 = (void *)CONCAT71(uStack_97,local_98);
        if ((longlong)(int)local_90 != 0) {
          uVar12 = 1;
          lVar8 = 0;
          do {
            if (*(short *)((longlong)pvVar11 + lVar8) == 0x2e) {
              if (uVar12 != 0) {
                uVar15 = (int)local_90 - 1;
                if ((int)local_90 == 0) {
                  uVar15 = 0;
                }
                if ((int)uVar12 < (int)uVar15) {
                  uVar15 = uVar12;
                }
                if (0 < (int)uVar15) {
                  if ((int)local_90 - uVar15 != 0) {
                    memmove(pvVar11,(void *)((longlong)pvVar11 + (ulonglong)uVar15 * 2),
                            (longlong)(int)((int)local_90 - uVar15) * 2);
                  }
                  local_90 = (longlong *)CONCAT44(local_90._4_4_,(int)local_90 - uVar15);
                  FUN_1449649ae(&local_98);
                  pvVar11 = (void *)CONCAT71(uStack_97,local_98);
                }
              }
              break;
            }
            uVar12 = uVar12 + 1;
            lVar8 = lVar8 + 2;
          } while ((longlong)(int)local_90 * 2 != lVar8);
        }
        if (pvVar11 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143d73142;
      }
      uVar12 = *(uint *)(lVar8 + 0xc);
      *(uint *)(param_1 + 0xe) = uVar12;
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      iVar7 = *(int *)(lVar17 + 0x10);
      if (*(int *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar7 = *(int *)(lVar17 + 0x10);
        bVar21 = iVar7 == 0;
        if (bVar21) {
          *(int *)(lVar17 + 0x10) = iVar16;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar21) {
          iVar7 = iVar16;
        }
      }
    }
    *(int *)((longlong)param_1 + 0x74) = iVar7;
  }
  if ((((*(int *)((longlong)param_1 + 0x7c) == 0) ||
       (uVar12 = *(uint *)(param_1 + 0xf), (int)uVar12 < 0)) || (DAT_14c9647dc <= (int)uVar12)) ||
     (((plVar13 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)((longlong)param_1 + 0x7c))) ||
      (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (lVar17 = *plVar13, lVar17 == 0)))))) {
    lVar10 = lVar10 + 0xb8;
    cVar6 = FUN_140c58360(param_1[8],lVar10);
    if (cVar6 == '\0') goto LAB_143d735c0;
    lVar17 = param_1[8];
    if (lVar17 == 0) {
      lVar19 = 0;
      plVar13 = (longlong *)0x0;
LAB_143d73851:
      local_88 = (longlong *)0x0;
      bVar21 = true;
      local_90 = plVar13;
    }
    else {
      if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_143d73655:
        lVar19 = 0;
      }
      else {
        uVar12 = *(uint *)(lVar17 + 0x48);
        lVar19 = 0;
        if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
          plVar13 = (longlong *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
          if ((plVar13 == (longlong *)0x0) ||
             (((int)plVar13[2] != *(int *)(lVar17 + 0x4c) ||
              ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_143d73655;
          lVar19 = *plVar13;
        }
      }
      plVar3 = *(longlong **)(lVar17 + 0x118);
      plVar13 = param_1;
      if (plVar3 == (longlong *)0x0) goto LAB_143d73851;
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar13 = plVar3 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      bVar21 = false;
      local_90 = param_1;
      local_88 = plVar3;
    }
    plVar13 = local_88;
    local_70 = 0;
    local_98 = '\x03';
    local_80._0_4_ = 0;
    if (lVar19 == 0) {
      iVar7 = 0;
      uVar12 = (uint)local_80;
    }
    else {
      uVar12 = *(uint *)(lVar19 + 0xc);
      local_80 = (ulonglong)uVar12;
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar17 = 0;
      }
      iVar7 = *(int *)(lVar17 + 0x10);
      if (*(int *)(lVar17 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar22 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar22) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar7 = *(int *)(lVar17 + 0x10);
        bVar22 = iVar7 == 0;
        if (bVar22) {
          *(int *)(lVar17 + 0x10) = iVar16;
          iVar7 = 0;
        }
        UNLOCK();
        uVar12 = (uint)local_80;
        if (bVar22) {
          iVar7 = iVar16;
        }
      }
    }
    local_80._0_4_ = uVar12;
    local_80 = CONCAT44(iVar7,(uint)local_80);
    local_78 = 2;
    if (local_70 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_70 + -1,1);
      local_70 = 0;
    }
    if (!bVar21) {
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    FUN_1447c3578(lVar10,local_68,&local_98);
    lVar10 = FUN_14030a32e(local_68);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
    if (pcVar2 != (code *)0x0) {
      ppppuVar18 = local_68;
      if (0x18 < local_50) {
        ppppuVar18 = (undefined8 ****)local_68[0];
      }
      (*pcVar2)(ppppuVar18);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
    lVar17 = DAT_14c9a3da0;
    if ((longlong)local_70 != 0) {
      lVar19 = (longlong)local_70 + -1;
      lVar20 = lVar19 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar20),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar20));
      if (*(longlong *)(lVar17 + lVar20) != 0) {
        FUN_1400020a8();
      }
      lVar17 = DAT_14c9a3da0;
      iVar7 = (int)lVar19;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
      }
      *(undefined4 *)(lVar17 + lVar20) = 0xffffffff;
      iVar16 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar16 = DAT_14c9a3dd0;
      }
      *(int *)(lVar17 + 4 + lVar20) = iVar16;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar14 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar14 = DAT_14c9a3dc0;
      }
      iVar16 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar16 = iVar7;
      }
      bVar4 = (byte)lVar19 & 0x1f;
      DAT_14c9a3dd0 = iVar7;
      *(uint *)(puVar14 + (longlong)(iVar16 >> 5) * 4) =
           *(uint *)(puVar14 + (longlong)(iVar16 >> 5) * 4) &
           (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      local_70 = 0;
    }
    if ((local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
    if (lVar10 == 0) {
      FUN_1400b22c2(&local_98,"Settings.AINode");
      pvVar11 = (void *)CONCAT71(uStack_97,local_98);
      if ((longlong)(int)local_90 != 0) {
        uVar12 = 1;
        lVar10 = 0;
        do {
          if (*(short *)((longlong)pvVar11 + lVar10) == 0x2e) {
            if (uVar12 != 0) {
              uVar15 = (int)local_90 - 1;
              if ((int)local_90 == 0) {
                uVar15 = 0;
              }
              if ((int)uVar12 < (int)uVar15) {
                uVar15 = uVar12;
              }
              if (0 < (int)uVar15) {
                if ((int)local_90 - uVar15 != 0) {
                  memmove(pvVar11,(void *)((longlong)pvVar11 + (ulonglong)uVar15 * 2),
                          (longlong)(int)((int)local_90 - uVar15) * 2);
                }
                local_90 = (longlong *)CONCAT44(local_90._4_4_,(int)local_90 - uVar15);
                FUN_1449649ae(&local_98);
                pvVar11 = (void *)CONCAT71(uStack_97,local_98);
              }
            }
            break;
          }
          uVar12 = uVar12 + 1;
          lVar10 = lVar10 + 2;
        } while ((longlong)(int)local_90 * 2 != lVar10);
      }
      if (pvVar11 != (void *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_143d735c0;
    }
    lVar17 = FUN_140363886();
    if (((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar17 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar17 + 0x38) * 8) != lVar17 + 0x30)) ||
       (lVar17 = (**(code **)(*(longlong *)(lVar10 + 0x390) + 0x10))(lVar10 + 0x390), lVar17 == 0))
    goto LAB_143d735c0;
    lVar10 = FUN_14048be4a();
    if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8
         ) != lVar10 + 0x30)) goto LAB_143d735c0;
    FUN_1488a5b4a(&local_98,param_1);
    FUN_14577054c(lVar17 + 0x6b8,local_68,&local_98);
    if ((int)local_90 == 0) {
LAB_143d7347b:
      if (CONCAT71(uStack_97,local_98) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar5 = (undefined8 *)CONCAT71(uStack_97,local_98);
      if (puVar5 != (undefined8 *)0x0) {
        (**(code **)*puVar5)(puVar5,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = (longlong *)((ulonglong)local_90 & 0xffffffff00000000);
        goto LAB_143d7347b;
      }
    }
    uVar12 = *(uint *)(lVar17 + 0xc);
    *(uint *)(param_1 + 0xf) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar21 = iVar7 == 0;
      if (bVar21) {
        *(int *)(lVar10 + 0x10) = iVar16;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar21) {
        iVar7 = iVar16;
      }
    }
    *(int *)((longlong)param_1 + 0x7c) = iVar7;
  }
  if (lVar8 != 0) {
    uVar9 = FUN_1405f939e(param_1);
    FUN_140937dea(&local_98,uVar9);
    if (local_90 != (longlong *)0x0) {
      iVar7 = (int)local_90[1];
      do {
        if (iVar7 == 0) {
          plVar13 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar16 = (int)local_90[1];
        bVar21 = iVar7 == iVar16;
        if (bVar21) {
          *(int *)(local_90 + 1) = iVar7 + 1;
          iVar16 = iVar7;
        }
        iVar7 = iVar16;
        UNLOCK();
        plVar13 = local_90;
      } while (!bVar21);
      LOCK();
      piVar1 = (int *)((longlong)local_90 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
      if (plVar13 != (longlong *)0x0) {
        if ((CONCAT71(uStack_97,local_98) != 0) &&
           (lVar10 = FUN_1487cc218(CONCAT71(uStack_97,local_98),lVar8), lVar10 == lVar17)) {
          FUN_14097c15a(param_1);
        }
        LOCK();
        plVar3 = plVar13 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    }
  }
LAB_143d735c0:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d739e4 FUN_143d739e4 body=1 status=ok
// SIG undefined FUN_143d739e4(void)

void FUN_143d739e4(void)

{
  return;
}



// FUNCTION 143d739f5 FUN_143d739f5 body=91 status=ok
// SIG undefined FUN_143d739f5(void)

void FUN_143d739f5(void)

{
  if (DAT_14cb80c58 != 0) {
    if (DAT_14cb80c50 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14cb80c50)(DAT_14cb80c50,0);
    FUN_1446efa72(&DAT_14cb80c50,0,0,0x10);
    DAT_14cb80c58 = 0;
  }
  if (DAT_14cb80c50 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143d73a5c FUN_143d73a5c body=86 status=ok
// SIG undefined FUN_143d73a5c(void)

undefined8 FUN_143d73a5c(undefined8 param_1)

{
  char cVar1;
  longlong *plVar2;
  
  if (((DAT_14cb80c58 != 0) && (DAT_14cb80c50 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*DAT_14cb80c50 + 0x30))(), cVar1 != '\0')) {
    plVar2 = DAT_14cb80c50;
    if (DAT_14cb80c58 == 0) {
      plVar2 = (longlong *)0x0;
    }
    cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143d73ab6 FUN_143d73ab6 body=1 status=ok
// SIG undefined FUN_143d73ab6(void)

void FUN_143d73ab6(void)

{
  return;
}



// FUNCTION 143d73aba FUN_143d73aba body=539 status=ok
// SIG undefined FUN_143d73aba(void)

void FUN_143d73aba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
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
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = FUN_1405f939e();
  if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x238))) {
    lVar8 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(lVar5 + 0x230) + 4 + lVar8 * 8);
      if ((((iVar1 != 0) &&
           (uVar2 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar8 * 8), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar7 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)) &&
          (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar3 = *plVar7, lVar3 != 0)))))) {
        if (DAT_14cb61cd0 == 0) {
          local_50 = FUN_141030f22;
          local_60 = FUN_14081d0ea;
          local_68 = &LAB_1463b31ae;
          local_70 = &local_50;
          local_78 = &LAB_1486dca4f;
          local_80 = &LAB_1464f50a6;
          local_88 = &DAT_149e063b2;
          local_90 = 0;
          local_98 = 0x10000004;
          local_a0 = 8;
          local_a8 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) &&
           (*(longlong *)(lVar3 + 0x398) != 0)) {
          lVar6 = FUN_140082f10();
          if ((((*(longlong *)(lVar3 + 0x398) != 0) && (lVar6 != 0)) &&
              (lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x398) + 0x10), lVar4 != 0)) &&
             ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
               lVar6 + 0x30)))) {
            lVar6 = FUN_1403b0700();
            if ((*(longlong *)(lVar6 + 0x38) != 0) && (*(longlong *)(lVar6 + 0x38) != DAT_14cb71810)
               ) {
              FUN_141306a06(lVar3,param_2,param_3);
            }
          }
        }
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < *(int *)(lVar5 + 0x238));
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d73cd6 FUN_143d73cd6 body=228 status=ok
// SIG undefined FUN_143d73cd6(void)

void FUN_143d73cd6(longlong param_1)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1405f939e();
  if (lVar3 == 0) {
LAB_143d73d92:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  lVar3 = FUN_140115352(lVar3);
  if (lVar3 == 0) goto LAB_143d73d92;
  local_30 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1a0);
  local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x198);
  if (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x80) != 0) {
    FUN_145772396(lVar3,&local_38,*(longlong *)(param_1 + 0x48) + 0x80);
  }
  if ((int)local_38 != 0) {
    cVar1 = FUN_140317ca6((longlong)&local_38 + 4,0);
    if (cVar1 == '\0') {
      local_20 = local_30;
      local_28 = local_38;
      bVar2 = FUN_14887f2ac(*(undefined8 *)(lVar3 + 0x48));
      if ((bVar2 & 0xfd) == 1) goto LAB_143d73d7a;
    }
  }
  FUN_14097c15a(param_1);
LAB_143d73d7a:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d73dca FUN_143d73dca body=1290 status=ok
// SIG undefined FUN_143d73dca(void)

void FUN_143d73dca(longlong *param_1)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  float *pfVar14;
  bool bVar15;
  float fVar16;
  undefined1 auStack_138 [32];
  undefined4 local_118 [2];
  longlong *local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int iStack_f0;
  char local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  float fStack_c8;
  undefined3 uStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int iStack_7c;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar3 = (longlong *)param_1[9];
  lVar13 = param_1[8];
  if (lVar13 == 0) {
    lVar12 = 0;
    local_110 = (longlong *)0x0;
  }
  else {
    if (*(int *)(lVar13 + 0x4c) == 0) {
LAB_143d740cc:
      lVar12 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar13 + 0x48);
      lVar12 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(lVar13 + 0x4c) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_143d740cc;
        lVar12 = *plVar10;
      }
    }
    plVar10 = *(longlong **)(lVar13 + 0x118);
    local_110 = param_1;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar8 = plVar10 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      bVar5 = false;
      local_108 = plVar10;
      goto LAB_143d73eaf;
    }
  }
  local_108 = (longlong *)0x0;
  bVar5 = true;
LAB_143d73eaf:
  plVar10 = local_108;
  local_118[0] = CONCAT31(local_118[0]._1_3_,3);
  iStack_f0 = 0;
  local_100._0_4_ = 0;
  if (lVar12 == 0) {
    iVar6 = 0;
    uVar7 = (uint)local_100;
  }
  else {
    uVar7 = *(uint *)(lVar12 + 0xc);
    local_100 = (ulonglong)uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar6 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar13 + 0x10);
      bVar15 = iVar6 == 0;
      if (bVar15) {
        *(int *)(lVar13 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      uVar7 = (uint)local_100;
      if (bVar15) {
        iVar6 = iVar9;
      }
    }
  }
  local_100._0_4_ = uVar7;
  local_100 = CONCAT44(iVar6,(uint)local_100);
  uStack_f8 = CONCAT31(uStack_f8._1_3_,2);
  if (iStack_f0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,iStack_f0 + -1,1);
    iStack_f0 = 0;
  }
  if (!bVar5) {
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  pfVar11 = &local_b0;
  FUN_1447c3578(plVar3 + 0x10,pfVar11,local_118);
  if (local_90 == 3) {
    uVar7 = 3;
    fVar16 = local_b0;
  }
  else {
    pfVar14 = &local_88;
    FUN_1400b56fe(pfVar14,&local_b0,3);
    fVar16 = 0.0;
    if (local_68 != 0) {
      fVar16 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        pfVar14 = (float *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(pfVar14);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
    uVar7 = (uint)local_90;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      pfVar11 = (float *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(pfVar11);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(&iStack_f0);
  if (((char)local_118[0] == '\x03') && (local_108 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_108 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_108 + 0x10))();
    }
  }
  fVar2 = *(float *)((longlong)param_1 + 0x54);
  *(float *)(param_1 + 0xe) = fVar16 + fVar2;
  lVar13 = FUN_1405f939e(param_1);
  if (((lVar13 != 0) && (plVar10 = (longlong *)FUN_1400f6f32(lVar13), plVar10 != (longlong *)0x0))
     && (plVar10 = (longlong *)(**(code **)(*plVar10 + 0x2b0))(plVar10), plVar10 != (longlong *)0x0)
     ) {
    FUN_140009b9a(&local_88,plVar3 + 0x17);
    local_118[0] = 0x40400000;
    local_110 = (longlong *)CONCAT44(uStack_84,local_88);
    if (local_110 == (longlong *)0x0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      (**(code **)(*local_110 + 8))();
      plVar8 = (longlong *)CONCAT44(uStack_84,local_88);
    }
    local_108 = (longlong *)CONCAT44(local_108._4_4_,uStack_80);
    local_100 = CONCAT44(local_100._4_4_,fVar16);
    local_ec = 0;
    local_e8 = 0;
    local_e0 = 0xffffffffffffffff;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_c9 = 0;
    fStack_c8 = 0.0;
    uStack_c4 = 0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    (**(code **)(*plVar3 + 0xf0))(plVar3,&local_88);
    local_100 = CONCAT44(local_88,(uint)local_100);
    uStack_f8 = uStack_84;
    uStack_f4 = uStack_80;
    iStack_f0 = iStack_7c;
    local_ec = '\x01';
    FUN_148897832(local_118,local_118);
    fStack_c8 = fVar2;
    FUN_148897832(local_118,local_118);
    (**(code **)(*plVar10 + 0x18))(plVar10,local_118);
    local_e8 = 0;
    local_e0 = 0xffffffffffffffff;
    if (local_ec == '\x01') {
      local_ec = '\0';
    }
    if (local_110 != (longlong *)0x0) {
      (**(code **)(*local_110 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d742d6 FUN_143d742d6 body=232 status=ok
// SIG undefined FUN_143d742d6(void)

void FUN_143d742d6(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_1405f939e();
  if (lVar3 != 0) {
    lVar3 = FUN_140115352(lVar3);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(param_1 + 0x48);
      if (*(char *)(lVar1 + 0x80) == '\x01') {
        FUN_143d66916(*(undefined8 *)(lVar3 + 0x48));
      }
      else {
        local_20 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1a0);
        local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x198);
        if (*(longlong *)(lVar1 + 0x84) != 0) {
          FUN_145772396(lVar3,&local_28,lVar1 + 0x84);
        }
        if ((int)local_28 != 0) {
          cVar2 = FUN_140317ca6((longlong)&local_28 + 4,0);
          if (cVar2 == '\0') {
            local_30 = local_20;
            local_38 = local_28;
            FUN_14887b712(lVar3);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x70) = 1;
      if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 143d743ce FUN_143d743ce body=1187 status=ok
// SIG undefined FUN_143d743ce(void)

undefined8 FUN_143d743ce(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  void *_Dst;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 ****ppppuVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  int local_70 [2];
  undefined8 ***local_68 [3];
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = *(longlong *)(param_1 + 0x48) + 0x80;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar10);
  if (cVar4 == '\0') {
    *(undefined8 *)(param_1 + 0x70) = 0;
    goto LAB_143d74640;
  }
  lVar13 = *(longlong *)(param_1 + 0x40);
  if (lVar13 == 0) {
    lVar12 = 0;
    uStack_90 = 0;
LAB_143d747b3:
    local_88 = (longlong *)0x0;
    bVar16 = true;
  }
  else {
    if (*(int *)(lVar13 + 0x4c) == 0) {
LAB_143d74751:
      lVar12 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar13 + 0x48);
      lVar12 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        plVar11 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((plVar11 == (longlong *)0x0) ||
           (((int)plVar11[2] != *(int *)(lVar13 + 0x4c) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_143d74751;
        lVar12 = *plVar11;
      }
    }
    plVar11 = *(longlong **)(lVar13 + 0x118);
    uStack_90 = param_1;
    if (plVar11 == (longlong *)0x0) goto LAB_143d747b3;
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    bVar16 = false;
    local_88 = plVar11;
  }
  plVar11 = local_88;
  local_98 = CONCAT31(local_98._1_3_,3);
  local_70[0] = 0;
  local_80._0_4_ = 0;
  if (lVar12 == 0) {
    iVar5 = 0;
    uVar7 = (uint)local_80;
  }
  else {
    uVar7 = *(uint *)(lVar12 + 0xc);
    local_80 = (ulonglong)uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar5 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar5 = *(int *)(lVar13 + 0x10);
      bVar15 = iVar5 == 0;
      if (bVar15) {
        *(int *)(lVar13 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      uVar7 = (uint)local_80;
      if (bVar15) {
        iVar5 = iVar8;
      }
    }
  }
  local_80._0_4_ = uVar7;
  local_80 = CONCAT44(iVar5,(uint)local_80);
  local_78 = 2;
  if (local_70[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_70[0] + -1,1);
    local_70[0] = 0;
  }
  if (!bVar16) {
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  FUN_1447c3578(lVar10,local_68,&local_98);
  plVar11 = (longlong *)FUN_14030a32e(local_68);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar14 = local_68;
    if (0x18 < local_50) {
      ppppuVar14 = (undefined8 ****)local_68[0];
    }
    (*pcVar3)(ppppuVar14);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68[0]);
  }
  FUN_1448173f8(local_70);
  if (((char)local_98 == '\x03') && (local_88 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_88 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_88 + 0x10))();
    }
  }
  if (plVar11 == (longlong *)0x0) {
    FUN_1400b22c2(&local_98,"Settings.Actor");
    _Dst = (void *)CONCAT44(uStack_94,local_98);
    if ((longlong)(int)uStack_90 != 0) {
      uVar7 = 1;
      lVar10 = 0;
      do {
        if (*(short *)((longlong)_Dst + lVar10) == 0x2e) {
          if (uVar7 != 0) {
            uVar9 = (int)uStack_90 - 1;
            if ((int)uStack_90 == 0) {
              uVar9 = 0;
            }
            if ((int)uVar7 < (int)uVar9) {
              uVar9 = uVar7;
            }
            if (0 < (int)uVar9) {
              if ((int)uStack_90 - uVar9 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar9 * 2),
                        (longlong)(int)((int)uStack_90 - uVar9) * 2);
              }
              uStack_90 = CONCAT44(uStack_90._4_4_,(int)uStack_90 - uVar9);
              FUN_1449649ae(&local_98);
              _Dst = (void *)CONCAT44(uStack_94,local_98);
            }
          }
          break;
        }
        uVar7 = uVar7 + 1;
        lVar10 = lVar10 + 2;
      } while ((longlong)(int)uStack_90 * 2 != lVar10);
    }
    if (_Dst != (void *)0x0) {
      FUN_1400020a8();
    }
    uVar6 = 0;
    goto LAB_143d7465b;
  }
  uVar7 = *(uint *)((longlong)plVar11 + 0xc);
  *(uint *)(param_1 + 0x70) = uVar7;
  if ((int)uVar7 < DAT_14c9647dc) {
    lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
  }
  else {
    lVar10 = 0;
  }
  iVar5 = *(int *)(lVar10 + 0x10);
  if (*(int *)(lVar10 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar8 = DAT_14c964868 + 1;
    bVar16 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar16) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar8);
    }
    LOCK();
    iVar5 = *(int *)(lVar10 + 0x10);
    bVar16 = iVar5 == 0;
    if (bVar16) {
      *(int *)(lVar10 + 0x10) = iVar8;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar16) {
      iVar5 = iVar8;
    }
  }
  *(int *)(param_1 + 0x74) = iVar5;
  uVar6 = FUN_1407725cc();
  lVar10 = (**(code **)(*plVar11 + 0x288))(plVar11,uVar6);
  if (lVar10 == 0) {
LAB_143d74640:
    lVar13 = 0;
  }
  else {
    uVar6 = FUN_1407725cc();
    lVar13 = FUN_144718840(lVar10,uVar6);
    if (lVar10 == lVar13) goto LAB_143d74640;
  }
  FUN_1407eff2c(&local_98,lVar13);
  *(undefined4 *)(param_1 + 0x78) = local_98;
  *(undefined4 *)(param_1 + 0x7c) = uStack_94;
  *(int *)(param_1 + 0x80) = (int)uStack_90;
  *(undefined4 *)(param_1 + 0x84) = uStack_90._4_4_;
  uVar6 = 1;
LAB_143d7465b:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d74872 FUN_143d74872 body=1543 status=ok
// SIG undefined FUN_143d74872(void)

void FUN_143d74872(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  float *pfVar14;
  longlong *plVar15;
  float *pfVar16;
  longlong lVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_118 [40];
  float local_f0;
  undefined4 uStack_ec;
  ushort local_d8;
  byte local_d0;
  char local_c8 [8];
  longlong *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  int local_a0 [2];
  float local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((((*(int *)((longlong)param_1 + 0x74) == 0) ||
         (uVar8 = *(uint *)(param_1 + 0xe), (int)uVar8 < 0)) || (DAT_14c9647dc <= (int)uVar8)) ||
       ((plVar15 = (longlong *)
                   ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
        plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)((longlong)param_1 + 0x74))))) ||
      (lVar3 = param_1[9], (*(uint *)(plVar15 + 1) & 0x10200000) != 0)) ||
     ((lVar17 = *plVar15, lVar17 == 0 || (param_1[0x10] == 0)))) {
LAB_143d7494b:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_118);
  }
  if (((*(int *)((longlong)param_1 + 0x7c) == 0) ||
      (((uVar8 = *(uint *)(param_1 + 0xf), (int)uVar8 < 0 || (DAT_14c9647dc <= (int)uVar8)) ||
       (lVar11 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8), lVar11 == 0)))) ||
     ((*(int *)(lVar11 + 0x10) != *(int *)((longlong)param_1 + 0x7c) ||
      ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) goto LAB_143d7494b;
  lVar11 = (longlong)*(int *)(param_1[8] + 0x78);
  if (lVar11 != 0) {
    lVar4 = *(longlong *)(param_1[8] + 0x70);
    lVar13 = 0;
    do {
      plVar15 = *(longlong **)(lVar4 + lVar13);
      if (plVar15 != (longlong *)0x0) {
        lVar9 = (**(code **)(*plVar15 + 8))(plVar15);
        lVar10 = FUN_1464ee78c();
        if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
           ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
             lVar10 + 0x30 &&
            ((((char)plVar15[10] == '\x02' && (lVar9 = FUN_148898c16(plVar15), plVar15 != param_1))
             && (lVar9 == lVar17)))))) {
          FUN_14097c15a(plVar15);
        }
      }
      lVar13 = lVar13 + 8;
    } while (lVar11 * 8 != lVar13);
  }
  FUN_148898c5a(param_1,1);
  lVar11 = FUN_148898c16(param_1);
  lVar17 = param_1[8];
  if (lVar11 == 0) {
    if (lVar17 == 0) {
      lVar11 = 0;
      goto LAB_143d74e23;
    }
    if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_143d74d7a:
      lVar11 = 0;
    }
    else {
      uVar8 = *(uint *)(lVar17 + 0x48);
      lVar11 = 0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar17 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143d74d7a;
        lVar11 = *plVar15;
      }
    }
LAB_143d74a91:
    plVar15 = *(longlong **)(lVar17 + 0x118);
    local_c0 = param_1;
    if (plVar15 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      bVar6 = false;
      local_b8 = plVar15;
      goto LAB_143d74ad5;
    }
  }
  else {
    if (lVar17 != 0) goto LAB_143d74a91;
LAB_143d74e23:
    local_c0 = (longlong *)0x0;
  }
  local_b8 = (longlong *)0x0;
  bVar6 = true;
LAB_143d74ad5:
  plVar15 = local_b8;
  local_a0[0] = 0;
  local_c8[0] = '\x03';
  local_b0._0_4_ = 0;
  if (lVar11 == 0) {
    iVar7 = 0;
    uVar8 = (uint)local_b0;
  }
  else {
    uVar8 = *(uint *)(lVar11 + 0xc);
    local_b0 = (ulonglong)uVar8;
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar7 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar7 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar7 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar12;
        iVar7 = 0;
      }
      UNLOCK();
      uVar8 = (uint)local_b0;
      if (bVar18) {
        iVar7 = iVar12;
      }
    }
  }
  local_b0._0_4_ = uVar8;
  local_b0 = CONCAT44(iVar7,(uint)local_b0);
  local_a8 = 2;
  if (local_a0[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_a0[0] + -1,1);
    local_a0[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  fVar19 = *(float *)((longlong)param_1 + 0x54);
  pfVar16 = &local_f0;
  FUN_1447c3578(lVar3 + 200,pfVar16,local_c8);
  if (local_d0 == 3) {
    uVar8 = 3;
    fVar20 = local_f0;
  }
  else {
    pfVar14 = &local_98;
    FUN_1400b56fe(pfVar14,&local_f0,3);
    fVar20 = 0.0;
    if (local_78 != 0) {
      fVar20 = local_98;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar14 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar5)(pfVar14);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar8 = (uint)local_d0;
  }
  *(float *)(param_1 + 0x28) = fVar19 + fVar20;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar16 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar5)(pfVar16);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  pfVar16 = &local_f0;
  FUN_1447c3578(lVar3 + 0x100,pfVar16,local_c8);
  if (local_d0 == 3) {
    uVar8 = 3;
    fVar19 = local_f0;
  }
  else {
    pfVar14 = &local_98;
    FUN_1400b56fe(pfVar14,&local_f0,3);
    fVar19 = 0.0;
    if (local_78 != 0) {
      fVar19 = local_98;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar14 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar5)(pfVar14);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar8 = (uint)local_d0;
  }
  *(float *)((longlong)param_1 + 0x144) = fVar19;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_d8) {
      pfVar16 = (float *)CONCAT44(uStack_ec,local_f0);
    }
    (*pcVar5)(pfVar16);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(CONCAT44(uStack_ec,local_f0));
  }
  FUN_1448173f8(local_a0);
  if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_b8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d74ea6 FUN_143d74ea6 body=2017 status=ok
// SIG undefined FUN_143d74ea6(void)

undefined8 FUN_143d74ea6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  void *_Dst;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 ****ppppuVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_c8 [36];
  int local_a4;
  char local_a0;
  undefined7 uStack_9f;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar14 = *(longlong *)(param_1 + 0x48);
  lVar7 = lVar14 + 0x80;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar7);
  if (cVar4 == '\0') {
    *(uint *)(param_1 + 0x70) = 0;
    iVar5 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x40);
    if (lVar12 == 0) {
      lVar11 = 0;
      local_98 = 0;
LAB_143d754fc:
      local_90 = (longlong *)0x0;
      bVar17 = true;
    }
    else {
      if (*(int *)(lVar12 + 0x4c) == 0) {
LAB_143d75491:
        lVar11 = 0;
      }
      else {
        uVar13 = *(uint *)(lVar12 + 0x48);
        lVar11 = 0;
        if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
          plVar15 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
          if ((plVar15 == (longlong *)0x0) ||
             (((int)plVar15[2] != *(int *)(lVar12 + 0x4c) ||
              ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143d75491;
          lVar11 = *plVar15;
        }
      }
      plVar15 = *(longlong **)(lVar12 + 0x118);
      local_98 = param_1;
      if (plVar15 == (longlong *)0x0) goto LAB_143d754fc;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      bVar17 = false;
      local_90 = plVar15;
    }
    plVar15 = local_90;
    local_78[0] = 0;
    local_a0 = '\x03';
    local_88._0_4_ = 0;
    if (lVar11 == 0) {
      iVar5 = 0;
      uVar13 = (uint)local_88;
    }
    else {
      uVar13 = *(uint *)(lVar11 + 0xc);
      local_88 = (ulonglong)uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar5 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar18) {
          local_a4 = iVar10;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
          iVar10 = local_a4;
        }
        LOCK();
        iVar5 = *(int *)(lVar12 + 0x10);
        bVar18 = iVar5 == 0;
        if (bVar18) {
          *(int *)(lVar12 + 0x10) = iVar10;
          iVar5 = 0;
        }
        UNLOCK();
        uVar13 = (uint)local_88;
        if (bVar18) {
          iVar5 = iVar10;
        }
      }
    }
    local_88._0_4_ = uVar13;
    local_88 = CONCAT44(iVar5,(uint)local_88);
    local_80 = 2;
    if (local_78[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
      local_78[0] = 0;
    }
    if (!bVar17) {
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    FUN_1447c3578(lVar7,local_70,&local_a0);
    lVar7 = FUN_14030a32e(local_70);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar16 = local_70;
      if (0x18 < local_58) {
        ppppuVar16 = (undefined8 ****)local_70[0];
      }
      (*pcVar3)(ppppuVar16);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar7 == 0) {
      FUN_1400b22c2(&local_a0,"Settings.Actor");
      _Dst = (void *)CONCAT71(uStack_9f,local_a0);
      if ((longlong)(int)local_98 != 0) {
        uVar13 = 1;
        lVar7 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar7) == 0x2e) goto LAB_143d753b4;
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 2;
        } while ((longlong)(int)local_98 * 2 != lVar7);
      }
      goto LAB_143d75403;
    }
    uVar13 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar17 = iVar5 == 0;
      if (bVar17) {
        *(int *)(lVar7 + 0x10) = iVar10;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar5 = iVar10;
      }
    }
  }
  *(int *)(param_1 + 0x74) = iVar5;
  lVar14 = lVar14 + 0xb8;
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar14);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x78) = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (lVar7 == 0) {
      lVar12 = 0;
      lVar7 = 0;
LAB_143d75527:
      local_90 = (longlong *)0x0;
      bVar17 = true;
      local_98 = lVar7;
    }
    else {
      if (*(int *)(lVar7 + 0x4c) == 0) {
LAB_143d75498:
        lVar12 = 0;
      }
      else {
        uVar13 = *(uint *)(lVar7 + 0x48);
        lVar12 = 0;
        if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
          plVar15 = (longlong *)
                    ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
          if ((plVar15 == (longlong *)0x0) ||
             (((int)plVar15[2] != *(int *)(lVar7 + 0x4c) ||
              ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143d75498;
          lVar12 = *plVar15;
        }
      }
      plVar15 = *(longlong **)(lVar7 + 0x118);
      lVar7 = param_1;
      if (plVar15 == (longlong *)0x0) goto LAB_143d75527;
      LOCK();
      *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar15 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      LOCK();
      *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
      UNLOCK();
      bVar17 = false;
      local_98 = param_1;
      local_90 = plVar15;
    }
    plVar15 = local_90;
    local_78[0] = 0;
    local_a0 = '\x03';
    local_88._0_4_ = 0;
    if (lVar12 == 0) {
      iVar5 = 0;
      uVar13 = (uint)local_88;
    }
    else {
      uVar13 = *(uint *)(lVar12 + 0xc);
      local_88 = (ulonglong)uVar13;
      if ((int)uVar13 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar5 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar7 + 0x10);
        bVar18 = iVar5 == 0;
        if (bVar18) {
          *(int *)(lVar7 + 0x10) = iVar10;
          iVar5 = 0;
        }
        UNLOCK();
        uVar13 = (uint)local_88;
        if (bVar18) {
          iVar5 = iVar10;
        }
      }
    }
    local_88._0_4_ = uVar13;
    local_88 = CONCAT44(iVar5,(uint)local_88);
    local_80 = 2;
    if (local_78[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
      local_78[0] = 0;
    }
    if (!bVar17) {
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    FUN_1447c3578(lVar14,local_70,&local_a0);
    lVar7 = FUN_14030a32e(local_70);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar16 = local_70;
      if (0x18 < local_58) {
        ppppuVar16 = (undefined8 ****)local_70[0];
      }
      (*pcVar3)(ppppuVar16);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar7 == 0) {
      FUN_1400b22c2(&local_a0,"Settings.Target");
      _Dst = (void *)CONCAT71(uStack_9f,local_a0);
      if ((longlong)(int)local_98 != 0) {
        uVar13 = 1;
        lVar7 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar7) == 0x2e) goto LAB_143d753b4;
          uVar13 = uVar13 + 1;
          lVar7 = lVar7 + 2;
        } while ((longlong)(int)local_98 * 2 != lVar7);
      }
      goto LAB_143d75403;
    }
    uVar13 = *(uint *)(lVar7 + 0xc);
    *(uint *)(param_1 + 0x78) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar8 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
      }
      LOCK();
      uVar6 = *(uint *)(lVar7 + 0x10);
      bVar17 = uVar6 == 0;
      if (bVar17) {
        *(uint *)(lVar7 + 0x10) = uVar13;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar17) {
        uVar6 = uVar13;
      }
      uVar8 = (ulonglong)uVar6;
    }
  }
  *(int *)(param_1 + 0x7c) = (int)uVar8;
  uVar9 = CONCAT71((int7)(uVar8 >> 8),1);
  goto LAB_143d7540f;
LAB_143d753b4:
  if (uVar13 != 0) {
    uVar6 = (int)local_98 - 1;
    if ((int)local_98 == 0) {
      uVar6 = 0;
    }
    if ((int)uVar13 < (int)uVar6) {
      uVar6 = uVar13;
    }
    if (0 < (int)uVar6) {
      iVar5 = (int)local_98;
      if ((int)local_98 - uVar6 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar6 * 2),
                (longlong)(int)((int)local_98 - uVar6) * 2);
        iVar5 = (int)local_98;
      }
      local_98 = CONCAT44(local_98._4_4_,iVar5 - uVar6);
      FUN_1449649ae(&local_a0);
      _Dst = (void *)CONCAT71(uStack_9f,local_a0);
    }
  }
LAB_143d75403:
  if (_Dst != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar9 = 0;
LAB_143d7540f:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d75688 FUN_143d75688 body=392 status=ok
// SIG undefined FUN_143d75688(void)

void FUN_143d75688(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((*(int *)(param_1 + 0x74) == 0) || (uVar1 = *(uint *)(param_1 + 0x70), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_143d7572e:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  plVar7 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(param_1 + 0x74))) ||
     (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
      (plVar7 = (longlong *)*plVar7, plVar7 == (longlong *)0x0)))) goto LAB_143d7572e;
  uVar4 = FUN_140b040c0();
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar4);
  if (plVar7 == (longlong *)0x0) goto LAB_143d7572e;
  uVar4 = FUN_140b040c0();
  plVar5 = (longlong *)FUN_144718840(plVar7,uVar4);
  if (plVar7 == plVar5 || plVar5 == (longlong *)0x0) goto LAB_143d7572e;
  FUN_140361b4a(&local_38,plVar5);
  *(undefined4 *)(param_1 + 0x80) = local_38;
  *(undefined4 *)(param_1 + 0x84) = uStack_34;
  *(int *)(param_1 + 0x88) = iStack_30;
  *(undefined4 *)(param_1 + 0x8c) = uStack_2c;
  lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
  if (lVar6 != 0) {
    FUN_1488995b2(&local_38,param_1);
    cVar3 = FUN_140b068ec(lVar6,2,&DAT_14cb241c8,&local_38);
    if (iStack_30 == 0) {
LAB_143d757fd:
      if (CONCAT44(uStack_34,local_38) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar2 = (undefined8 *)CONCAT44(uStack_34,local_38);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(&local_38,0,0,0x10);
        iStack_30 = 0;
        goto LAB_143d757fd;
      }
    }
    if (cVar3 != '\0') {
      *(undefined1 *)(param_1 + 0x90) = 1;
      goto LAB_143d7577c;
    }
  }
  FUN_14097c15a(param_1);
LAB_143d7577c:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d75828 FUN_143d75828 body=2394 status=ok
// SIG undefined FUN_143d75828(void)

ulonglong FUN_143d75828(longlong param_1)

{
  longlong *_Dst;
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  void *_Dst_00;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong unaff_RBP;
  longlong lVar15;
  longlong *plVar16;
  int iVar17;
  undefined8 ****ppppuVar18;
  longlong lVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_c8 [36];
  int local_a4;
  char local_a0;
  undefined7 uStack_9f;
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar13 = *(longlong *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x98) = 0;
  _Dst = (longlong *)(param_1 + 0x70);
  bVar3 = *(byte *)(param_1 + 0x90);
  if (bVar3 == DAT_14c9ab188) {
    puVar12 = DAT_14c9ab168;
    if (DAT_14c9ab180 < 0x19) {
      puVar12 = &DAT_14c9ab168;
    }
    plVar16 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      plVar16 = (longlong *)*_Dst;
    }
    uVar8 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
    if (pcVar4 == (code *)0x0) {
      memcpy(plVar16,puVar12,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar4)();
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar4 != (code *)0x0) {
      plVar16 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x88)) {
        plVar16 = (longlong *)*_Dst;
      }
      (*pcVar4)(plVar16);
    }
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      FUN_1400020a8(*_Dst);
    }
    uVar5 = DAT_14c9ab180;
    uVar11 = (uint)DAT_14c9ab188;
    *(ushort *)(param_1 + 0x88) = DAT_14c9ab180;
    if (uVar5 < 0x19) {
      puVar12 = &DAT_14c9ab168;
      plVar16 = _Dst;
    }
    else {
      plVar16 = (longlong *)FUN_14001cc68(uVar5,0);
      *_Dst = (longlong)plVar16;
      puVar12 = DAT_14c9ab168;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar11 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(plVar16,puVar12,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar11 * 0x120)));
    }
    else {
      (*pcVar4)();
    }
    *(byte *)(param_1 + 0x90) = DAT_14c9ab188;
  }
  lVar9 = lVar13 + 0x80;
  cVar6 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar9);
  if (cVar6 == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar11 = 0;
  }
  else {
    lVar19 = *(longlong *)(param_1 + 0x40);
    if (lVar19 == 0) {
      lVar15 = 0;
      local_98 = 0;
LAB_143d7600a:
      local_90 = (longlong *)0x0;
      bVar20 = true;
    }
    else {
      if (*(int *)(lVar19 + 0x4c) == 0) {
LAB_143d75f9d:
        lVar15 = 0;
      }
      else {
        uVar11 = *(uint *)(lVar19 + 0x48);
        lVar15 = 0;
        if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
          plVar16 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if ((plVar16 == (longlong *)0x0) ||
             (((int)plVar16[2] != *(int *)(lVar19 + 0x4c) ||
              ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_143d75f9d;
          lVar15 = *plVar16;
        }
      }
      plVar16 = *(longlong **)(lVar19 + 0x118);
      local_98 = param_1;
      if (plVar16 == (longlong *)0x0) goto LAB_143d7600a;
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      bVar20 = false;
      local_90 = plVar16;
    }
    plVar16 = local_90;
    local_78[0] = 0;
    local_a0 = '\x03';
    local_88._0_4_ = 0;
    if (lVar15 == 0) {
      unaff_RBP = 0;
      iVar7 = 0;
      uVar11 = (uint)local_88;
    }
    else {
      uVar11 = *(uint *)(lVar15 + 0xc);
      local_88 = (ulonglong)uVar11;
      if ((int)uVar11 < DAT_14c9647dc) {
        unaff_RBP = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
      }
      else {
        unaff_RBP = 0;
      }
      iVar7 = *(int *)(unaff_RBP + 0x10);
      if (*(int *)(unaff_RBP + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar21) {
          local_a4 = iVar17;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar17);
          iVar17 = local_a4;
        }
        LOCK();
        iVar7 = *(int *)(unaff_RBP + 0x10);
        bVar21 = iVar7 == 0;
        if (bVar21) {
          *(int *)(unaff_RBP + 0x10) = iVar17;
          iVar7 = 0;
        }
        UNLOCK();
        uVar11 = (uint)local_88;
        if (bVar21) {
          iVar7 = iVar17;
        }
      }
    }
    local_88._0_4_ = uVar11;
    local_88 = CONCAT44(iVar7,(uint)local_88);
    local_80 = 2;
    if (local_78[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
      local_78[0] = 0;
    }
    if (!bVar20) {
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    FUN_1447c3578(lVar9,local_70,&local_a0);
    lVar9 = FUN_14030a32e(local_70);
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
    FUN_1448173f8(local_78);
    if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar9 == 0) {
      FUN_1400b22c2(&local_a0,"Settings.Actor");
      _Dst_00 = (void *)CONCAT71(uStack_9f,local_a0);
      if ((longlong)(int)local_98 != 0) {
        uVar11 = 1;
        lVar13 = 0;
        do {
          if (*(short *)((longlong)_Dst_00 + lVar13) == 0x2e) goto LAB_143d75eef;
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 2;
        } while ((longlong)(int)local_98 * 2 != lVar13);
      }
      goto LAB_143d75f3e;
    }
    uVar11 = *(uint *)(lVar9 + 0xc);
    *(uint *)(param_1 + 0x98) = uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar11 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar14 = DAT_14c964868 + 1;
      unaff_RBP = (ulonglong)uVar14;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar11 = *(uint *)(lVar9 + 0x10);
      bVar20 = uVar11 == 0;
      if (bVar20) {
        *(uint *)(lVar9 + 0x10) = uVar14;
        uVar11 = 0;
      }
      UNLOCK();
      if (bVar20) {
        uVar11 = uVar14;
      }
    }
  }
  *(uint *)(param_1 + 0x9c) = uVar11;
  lVar13 = lVar13 + 0xb8;
  cVar6 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar13);
  uVar8 = CONCAT71((int7)(unaff_RBP >> 8),1);
  if (cVar6 == '\0') goto LAB_143d75f4a;
  lVar9 = *(longlong *)(param_1 + 0x40);
  if (lVar9 == 0) {
    lVar19 = 0;
    lVar9 = 0;
LAB_143d76035:
    local_90 = (longlong *)0x0;
    bVar20 = true;
    local_98 = lVar9;
  }
  else {
    if (*(int *)(lVar9 + 0x4c) == 0) {
LAB_143d75fa4:
      lVar19 = 0;
    }
    else {
      uVar11 = *(uint *)(lVar9 + 0x48);
      lVar19 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        plVar16 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((plVar16 == (longlong *)0x0) ||
           (((int)plVar16[2] != *(int *)(lVar9 + 0x4c) ||
            ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_143d75fa4;
        lVar19 = *plVar16;
      }
    }
    plVar16 = *(longlong **)(lVar9 + 0x118);
    lVar9 = param_1;
    if (plVar16 == (longlong *)0x0) goto LAB_143d76035;
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
    UNLOCK();
    bVar20 = false;
    local_98 = param_1;
    local_90 = plVar16;
  }
  plVar16 = local_90;
  local_78[0] = 0;
  local_a0 = '\x03';
  local_88._0_4_ = 0;
  if (lVar19 == 0) {
    iVar7 = 0;
    uVar11 = (uint)local_88;
  }
  else {
    uVar11 = *(uint *)(lVar19 + 0xc);
    local_88 = (ulonglong)uVar11;
    if ((int)uVar11 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar21) {
        local_a4 = iVar17;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
        iVar17 = local_a4;
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar21 = iVar7 == 0;
      if (bVar21) {
        *(int *)(lVar9 + 0x10) = iVar17;
        iVar7 = 0;
      }
      UNLOCK();
      uVar11 = (uint)local_88;
      if (bVar21) {
        iVar7 = iVar17;
      }
    }
  }
  local_88._0_4_ = uVar11;
  local_88 = CONCAT44(iVar7,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar20) {
    LOCK();
    piVar2 = (int *)((longlong)plVar16 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  FUN_1447c3578(lVar13,local_70,&local_a0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x90) * 0x120));
  if (pcVar4 != (code *)0x0) {
    plVar16 = _Dst;
    if (0x18 < *(ushort *)(param_1 + 0x88)) {
      plVar16 = (longlong *)*_Dst;
    }
    (*pcVar4)(plVar16);
  }
  if (0x18 < *(ushort *)(param_1 + 0x88)) {
    FUN_1400020a8(*_Dst);
  }
  *(ushort *)(param_1 + 0x88) = local_58;
  if (local_58 < 0x19) {
    uVar10 = (ulonglong)((uint)local_50 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar10) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar10) == (code *)0x0) {
        memcpy(_Dst,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar10));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar10))(_Dst,local_70);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar10))(_Dst,local_70);
    }
  }
  else {
    *_Dst = (longlong)local_70[0];
    local_70[0] = (undefined8 ****)0x0;
    local_58 = 0;
  }
  *(byte *)(param_1 + 0x90) = local_50;
  local_50 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar18 = local_70;
    if (0x18 < local_58) {
      ppppuVar18 = (undefined8 ****)local_70[0];
    }
    (*DAT_14c9a85d0)(ppppuVar18);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
  FUN_1448173f8(local_78);
  if ((local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (*(char *)(param_1 + 0x90) != '\0') goto LAB_143d75f4a;
  FUN_1400b22c2(&local_a0,"Settings.Target");
  _Dst_00 = (void *)CONCAT71(uStack_9f,local_a0);
  if ((longlong)(int)local_98 != 0) {
    uVar11 = 1;
    lVar13 = 0;
    do {
      if (*(short *)((longlong)_Dst_00 + lVar13) == 0x2e) goto LAB_143d75eef;
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 2;
    } while ((longlong)(int)local_98 * 2 != lVar13);
  }
LAB_143d75f3e:
  if (_Dst_00 != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = 0;
LAB_143d75f4a:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143d75eef:
  if (uVar11 != 0) {
    uVar14 = (int)local_98 - 1;
    if ((int)local_98 == 0) {
      uVar14 = 0;
    }
    if ((int)uVar11 < (int)uVar14) {
      uVar14 = uVar11;
    }
    if (0 < (int)uVar14) {
      iVar7 = (int)local_98;
      if ((int)local_98 - uVar14 != 0) {
        memmove(_Dst_00,(void *)((longlong)_Dst_00 + (ulonglong)uVar14 * 2),
                (longlong)(int)((int)local_98 - uVar14) * 2);
        iVar7 = (int)local_98;
      }
      local_98 = CONCAT44(local_98._4_4_,iVar7 - uVar14);
      FUN_1449649ae(&local_a0);
      _Dst_00 = (void *)CONCAT71(uStack_9f,local_a0);
    }
  }
  goto LAB_143d75f3e;
}



// FUNCTION 143d76184 FUN_143d76184 body=1036 status=ok
// SIG undefined FUN_143d76184(void)

void FUN_143d76184(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  code *local_58;
  code *local_50;
  undefined8 local_40;
  int iStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((*(int *)(param_1 + 0x9c) == 0) || (uVar1 = *(uint *)(param_1 + 0x98), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) {
LAB_143d76245:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
  plVar8 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar8 == (longlong *)0x0) || ((int)plVar8[2] != *(int *)(param_1 + 0x9c))) ||
     (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
      ((plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0 ||
       (*(char *)(param_1 + 0x90) == '\0')))))) goto LAB_143d76245;
  uVar4 = FUN_140b040c0();
  plVar5 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar4);
  if (plVar5 == (longlong *)0x0) goto LAB_143d76245;
  uVar4 = FUN_140b040c0();
  plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
  if (plVar5 == plVar6 || plVar6 == (longlong *)0x0) goto LAB_143d76245;
  FUN_140361b4a(&local_40,plVar6);
  *(undefined4 *)(param_1 + 0xa0) = (undefined4)local_40;
  *(undefined4 *)(param_1 + 0xa4) = local_40._4_4_;
  *(int *)(param_1 + 0xa8) = iStack_38;
  *(undefined4 *)(param_1 + 0xac) = uStack_34;
  if (DAT_14c9a4e08 == 0) {
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_1427b09ee;
    local_68 = &LAB_1470c76a3;
    local_70 = FUN_1462ab034;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10004001;
    local_90 = 8;
    local_98 = 0x28;
    local_60 = &local_40;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
  }
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,DAT_14c9a4e08);
  if (plVar8 != (longlong *)0x0) {
    if (DAT_14c9a4e08 == 0) {
      local_40 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_1427b09ee;
      local_68 = &LAB_1470c76a3;
      local_70 = FUN_1462ab034;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10004001;
      local_90 = 8;
      local_98 = 0x28;
      local_60 = &local_40;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar5 = (longlong *)FUN_144718840(plVar8,DAT_14c9a4e08);
    if (plVar8 != plVar5 && plVar5 != (longlong *)0x0) {
      FUN_14070e9ee(&local_40,plVar5);
      *(undefined4 *)(param_1 + 0xb0) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0xb4) = local_40._4_4_;
      *(int *)(param_1 + 0xb8) = iStack_38;
      *(undefined4 *)(param_1 + 0xbc) = uStack_34;
      lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
      if (lVar7 != 0) {
        local_40 = (code *)0x0;
        iStack_38 = 0;
        FUN_1446efa72(&local_40,0,3,0x10);
        iStack_38 = 3;
        *(undefined ***)local_40 = &PTR_LAB_14ac8c8d0;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar2 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar2 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar2;
        *(longlong *)(local_40 + 0x10) = lVar9;
        *(undefined ***)local_40 = &PTR_FUN_14b40d470;
        *(longlong *)(local_40 + 0x18) = param_1;
        *(code **)(local_40 + 0x20) = FUN_148899d8e;
        cVar3 = FUN_140b068ec(lVar7,CONCAT71((int7)((ulonglong)lVar9 >> 8),2),&DAT_14cb24268,
                              &local_40);
        if (iStack_38 == 0) {
LAB_143d763d8:
          if (local_40 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_40 != (code *)0x0) {
          (*(code *)**(undefined8 **)local_40)(local_40,0);
          FUN_1446efa72(&local_40,0,0,0x10);
          iStack_38 = 0;
          goto LAB_143d763d8;
        }
        if (cVar3 != '\0') {
          uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
          local_40 = DAT_14cb24270;
          iStack_38 = -1;
          FUN_140af060e(uVar4,&local_40,param_1 + 0x70);
          *(undefined1 *)(param_1 + 0xc0) = 1;
          goto LAB_143d7642a;
        }
      }
    }
  }
  FUN_14097c15a(param_1);
LAB_143d7642a:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d765b4 FUN_143d765b4 body=1159 status=ok
// SIG undefined FUN_143d765b4(void)

bool FUN_143d765b4(longlong param_1,uint *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  void *_Dst;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  undefined8 ****ppppuVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auStack_c8 [40];
  uint local_a0;
  uint uStack_9c;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar8 = (char *)(param_3 + 8);
  if (0x18 < *(ushort *)(param_3 + 0x20)) {
    pcVar8 = *(char **)pcVar8;
  }
  uVar6 = (ulonglong)((uint)*(byte *)(param_3 + 0x28) * 0x120);
  if (*(code **)(&DAT_14c9a8620 + uVar6) == (code *)0x0) {
    pcVar10 = pcVar8 + *(int *)((longlong)&DAT_14c9a8510 + uVar6);
    do {
      bVar17 = true;
      if (pcVar10 <= pcVar8) goto LAB_143d768f6;
      cVar4 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar4 == '\0');
  }
  else {
    cVar4 = (**(code **)(&DAT_14c9a8620 + uVar6))();
    bVar17 = true;
    if (cVar4 != '\0') goto LAB_143d768f6;
  }
  cVar4 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),param_3);
  if (cVar4 == '\0') {
    lVar16 = 0;
LAB_143d7681c:
    uVar7 = FUN_14017698e(lVar16);
    FUN_1407abeca(&local_a0,uVar7);
    *param_2 = local_a0;
    param_2[1] = uStack_9c;
    param_2[2] = (uint)uStack_98;
    param_2[3] = uStack_98._4_4_;
    if ((*(longlong *)(param_2 + 2) != 0) && (param_2[1] != 0)) {
      uVar9 = *param_2;
      bVar17 = false;
      if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_143d768f6;
      lVar16 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      if ((lVar16 != 0) && (*(uint *)(lVar16 + 0x10) == param_2[1])) {
        bVar17 = (*(uint *)(lVar16 + 8) & 0x10200000) == 0;
        goto LAB_143d768f6;
      }
    }
  }
  else {
    lVar16 = *(longlong *)(param_1 + 0x40);
    if (lVar16 == 0) {
      lVar15 = 0;
      param_1 = 0;
LAB_143d769aa:
      local_90 = (longlong *)0x0;
      bVar17 = true;
      uStack_98 = param_1;
    }
    else {
      if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_143d76947:
        lVar15 = 0;
      }
      else {
        uVar9 = *(uint *)(lVar16 + 0x48);
        lVar15 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             (((int)plVar14[2] != *(int *)(lVar16 + 0x4c) ||
              ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143d76947;
          lVar15 = *plVar14;
        }
      }
      plVar14 = *(longlong **)(lVar16 + 0x118);
      if (plVar14 == (longlong *)0x0) goto LAB_143d769aa;
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
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
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      bVar17 = false;
      uStack_98 = param_1;
      local_90 = plVar14;
    }
    plVar14 = local_90;
    local_a0 = CONCAT31(local_a0._1_3_,3);
    local_78[0] = 0;
    local_88._0_4_ = 0;
    if (lVar15 == 0) {
      iVar5 = 0;
      uVar9 = (uint)local_88;
    }
    else {
      uVar9 = *(uint *)(lVar15 + 0xc);
      local_88 = (ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar16 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar16 = 0;
      }
      iVar5 = *(int *)(lVar16 + 0x10);
      if (*(int *)(lVar16 + 0x10) == 0) {
        LOCK();
        iVar5 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar5;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar5 = *(int *)(lVar16 + 0x10);
        bVar18 = iVar5 == 0;
        if (bVar18) {
          *(int *)(lVar16 + 0x10) = iVar11;
          iVar5 = 0;
        }
        UNLOCK();
        uVar9 = (uint)local_88;
        if (bVar18) {
          iVar5 = iVar11;
        }
      }
    }
    local_88._0_4_ = uVar9;
    local_88 = CONCAT44(iVar5,(uint)local_88);
    local_80 = 2;
    if (local_78[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
      local_78[0] = 0;
    }
    if (!bVar17) {
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    FUN_1447c3578(param_3,local_70,&local_a0);
    lVar16 = FUN_14030a32e(local_70);
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppuVar12 = local_70;
      if (0x18 < local_58) {
        ppppuVar12 = (undefined8 ****)local_70[0];
      }
      (*pcVar3)(ppppuVar12);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(local_70[0]);
    }
    FUN_1448173f8(local_78);
    if (((char)local_a0 == '\x03') && (local_90 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_90 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_90 + 0x10))();
      }
    }
    if (lVar16 != 0) goto LAB_143d7681c;
    FUN_1400b22c2(&local_a0,"SpeakerParam");
    _Dst = (void *)CONCAT44(uStack_9c,local_a0);
    if ((longlong)(int)(uint)uStack_98 != 0) {
      uVar9 = 1;
      lVar16 = 0;
      do {
        if (*(short *)((longlong)_Dst + lVar16) == 0x2e) {
          if (uVar9 != 0) {
            uVar13 = (uint)uStack_98 - 1;
            if ((uint)uStack_98 == 0) {
              uVar13 = 0;
            }
            if ((int)uVar9 < (int)uVar13) {
              uVar13 = uVar9;
            }
            if (0 < (int)uVar13) {
              if ((uint)uStack_98 - uVar13 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar13 * 2),
                        (longlong)(int)((uint)uStack_98 - uVar13) * 2);
              }
              uStack_98 = CONCAT44(uStack_98._4_4_,(uint)uStack_98 - uVar13);
              FUN_1449649ae(&local_a0);
              _Dst = (void *)CONCAT44(uStack_9c,local_a0);
            }
          }
          break;
        }
        uVar9 = uVar9 + 1;
        lVar16 = lVar16 + 2;
      } while ((longlong)(int)(uint)uStack_98 * 2 != lVar16);
    }
    if (_Dst != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  bVar17 = false;
LAB_143d768f6:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return bVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d76a48 FUN_143d76a48 body=1042 status=ok
// SIG undefined FUN_143d76a48(void)

void FUN_143d76a48(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 uVar14;
  undefined1 auStack_118 [32];
  float local_f8 [2];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined8 uStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  byte local_7a;
  undefined4 local_79;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(char *)(param_1 + 0x68) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\0')) {
    lVar6 = FUN_1405f939e(param_1);
    if ((lVar6 == 0) || (lVar6 = FUN_140115352(lVar6), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_118);
    }
    lVar13 = *(longlong *)(param_1 + 0x48);
    if ((*(char *)(lVar13 + 0xa0) == '\x01') && ((longlong)*(int *)(lVar13 + 0x88) != 0)) {
      plVar11 = *(longlong **)(lVar13 + 0x80);
      lVar12 = (longlong)*(int *)(lVar13 + 0x88) * 0x70;
      uVar14 = extraout_XMM0_Da;
      do {
        lVar8 = plVar11[1];
        if (lVar8 == 0) {
          uVar7 = FUN_14012344a();
          lVar8 = FUN_14477b664(uVar7);
          plVar11[1] = lVar8;
          uVar14 = extraout_XMM0_Da_00;
        }
        lVar10 = plVar11[2];
        if (lVar10 == 0) {
          if ((lVar8 != 0) && (*plVar11 != 0)) {
            plVar3 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), uVar14 = extraout_XMM0_Da_01,
               cVar4 == '\0')) {
              plVar11[2] = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
              lVar10 = FUN_144aff482(uVar7,plVar11);
              plVar11[2] = lVar10;
              uVar14 = extraout_XMM0_Da_02;
              if (lVar10 != 0) {
                lVar8 = plVar11[1];
                goto LAB_143d76b0c;
              }
            }
          }
        }
        else {
LAB_143d76b0c:
          if (lVar8 == 0) {
            uVar7 = FUN_14012344a(uVar14,lVar10);
            lVar8 = FUN_14477b664(uVar7);
            plVar11[1] = lVar8;
            lVar10 = plVar11[2];
            if (lVar10 == 0) {
              if (lVar8 == 0) {
                lVar10 = 0;
              }
              else {
                lVar10 = 0;
                if (*plVar11 != 0) {
                  plVar3 = *(longlong **)(lVar8 + 0xb8);
                  if ((plVar3 == (longlong *)0x0) ||
                     (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                    lVar10 = 0;
                  }
                  else {
                    uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
                    lVar10 = FUN_144aff482(uVar7,plVar11);
                  }
                  plVar11[2] = lVar10;
                }
              }
            }
          }
          cVar4 = FUN_14043d437(lVar6,lVar10);
          uVar14 = extraout_XMM0_Da_03;
          if (cVar4 == '\0') goto LAB_143d76de1;
        }
        plVar11 = plVar11 + 0xe;
        lVar12 = lVar12 + -0x70;
      } while (lVar12 != 0);
    }
    local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1a0);
    local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x198);
    if (*(longlong *)(lVar13 + 0x98) != 0) {
      FUN_145772396(lVar6,&local_70,lVar13 + 0x98);
    }
    uStack_c0 = 0;
    uStack_bc = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    local_c4 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    lStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0xffffffff;
    local_7c = 0;
    local_79 = 0;
    local_7a = *(byte *)(lVar13 + 0xa0) ^ 1;
    if (*(char *)(lVar13 + 0x91) == '\x01') {
      pfVar9 = (float *)(lVar13 + 0x94);
    }
    else {
      lVar12 = FUN_145d4f736();
      pfVar9 = (float *)(lVar12 + 0x98);
    }
    iVar5 = *(int *)(lVar13 + 0x88);
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    fVar1 = *pfVar9;
    plVar11 = (longlong *)(param_1 + 0x78);
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) != iVar5) {
      FUN_14481578e(plVar11);
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    if ((longlong)*(int *)(lVar13 + 0x88) != 0) {
      lVar12 = *(longlong *)(lVar13 + 0x80);
      lVar13 = (longlong)*(int *)(lVar13 + 0x88) * 0x70;
      do {
        local_f8[0] = *(float *)(lVar12 + 0x18) + fVar1;
        if (lStack_98 != *(longlong *)(lVar12 + 0x58)) {
          uStack_88 = 0;
        }
        if (local_90 != *(longlong *)(lVar12 + 0x60)) {
          uStack_88 = 0;
        }
        lStack_98 = *(longlong *)(lVar12 + 0x58);
        uVar7 = FUN_14477b664();
        local_90 = FUN_14477b664(uVar7);
        uStack_88 = *(undefined8 *)(lVar12 + 0x68);
        cVar4 = FUN_143d765b4(param_1,&uStack_e8,lVar12 + 0x20);
        if ((cVar4 != '\0') && (iVar5 = FUN_141001a8e(lVar6,lVar12,&local_70,local_f8), 0 < iVar5))
        {
          iVar2 = *(int *)(param_1 + 0x80);
          *(uint *)(param_1 + 0x80) = iVar2 + 1U;
          if (*(uint *)(param_1 + 0x84) < iVar2 + 1U) {
            FUN_1446f48e2(plVar11,iVar2);
          }
          *(int *)(*plVar11 + (longlong)iVar2 * 4) = iVar5;
        }
        lVar12 = lVar12 + 0x70;
        lVar13 = lVar13 + -0x70;
      } while (lVar13 != 0);
    }
  }
LAB_143d76de1:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d76e80 FUN_143d76e80 body=392 status=ok
// SIG undefined FUN_143d76e80(void)

void FUN_143d76e80(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar5 + 0x80) == 0) goto LAB_143d76ea6;
  lVar1 = param_1 + 0x70;
  FUN_140872e36(lVar1,param_1);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if (iVar2 == 0) {
LAB_143d76fd7:
    uVar8 = 0;
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48);
    uVar8 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != iVar2 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
      goto LAB_143d76fd7;
      uVar8 = *puVar7;
    }
  }
  lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x80) + 0x30);
  *(undefined4 *)(param_1 + 500) = 0;
  FUN_1408f9d2c(lVar1,lVar6,uVar8);
  FUN_140b0c232(lVar1);
  local_38 = *(undefined8 *)(lVar6 + 0xb8);
  FUN_1457722a2(lVar1);
  uVar4 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x168);
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x160);
  *(undefined4 *)(param_1 + 0x1d8) = uVar4;
  if ((*(ulonglong *)(param_1 + 0x1d4) == DAT_14c948034) &&
     (*(int *)(param_1 + 0x1d0) != DAT_14c948030)) {
    FUN_14011791e(&local_38,*(int *)(param_1 + 0x1d0),*(ulonglong *)(param_1 + 0x1d4) >> 0x20);
    *(undefined8 *)(param_1 + 0x1d4) = local_38;
  }
  FUN_1457722a2(lVar1,(undefined8 *)(param_1 + 0x1d4));
  local_38 = *(undefined8 *)(lVar5 + 0x88);
  local_30 = *(undefined4 *)(lVar5 + 0x90);
  FUN_1410fd40a(lVar1);
LAB_143d76ea6:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d77016 FUN_143d77016 body=174 status=ok
// SIG undefined FUN_143d77016(void)

void FUN_143d77016(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    iVar2 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
      FUN_1406f071e(param_2,iVar2);
    }
    lVar3 = *param_2;
    lVar7 = (longlong)iVar2 * 0x20;
    uVar4 = *(undefined4 *)(param_1 + 0xcc);
    uVar5 = *(undefined4 *)(param_1 + 0xd0);
    uVar6 = *(undefined4 *)(param_1 + 0xd4);
    puVar1 = (undefined4 *)(lVar3 + lVar7);
    *puVar1 = *(undefined4 *)(param_1 + 200);
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
    iVar2 = *(int *)(param_1 + 0xe0);
    _Src = *(void **)(param_1 + 0xd8);
    *(int *)(lVar3 + 0x18 + lVar7) = iVar2;
    if ((longlong)iVar2 != 0) {
      puVar8 = (undefined8 *)(lVar7 + lVar3 + 0x10);
      FUN_1446dd670(puVar8,iVar2,0);
      memcpy((void *)*puVar8,_Src,(longlong)iVar2 * 2);
      return;
    }
    *(undefined4 *)(lVar3 + lVar7 + 0x1c) = 0;
  }
  return;
}



// FUNCTION 143d770c4 FUN_143d770c4 body=5102 status=ok
// SIG undefined FUN_143d770c4(void)

ulonglong FUN_143d770c4(undefined8 ******param_1)

{
  undefined8 ****ppppuVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  ushort uVar6;
  undefined8 ***pppuVar7;
  char cVar8;
  uint uVar9;
  undefined8 ******ppppppuVar10;
  longlong lVar11;
  undefined8 *****pppppuVar12;
  undefined8 ******ppppppuVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined8 ****unaff_RBX;
  longlong lVar19;
  ulonglong uVar20;
  int *piVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined8 *****pppppuVar24;
  longlong *plVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  bool bVar30;
  undefined1 auStack_128 [32];
  int *local_108;
  undefined8 ****local_100;
  ulonglong local_f8;
  undefined8 *****local_f0;
  undefined8 ****local_e8;
  undefined8 *****local_e0;
  undefined1 local_d4 [4];
  undefined8 *****local_d0;
  undefined8 *****local_c8;
  undefined8 ***local_c0;
  undefined8 local_b8;
  byte local_b0;
  int local_a8 [2];
  undefined8 *****local_a0 [3];
  ushort local_88;
  byte local_80;
  char local_78 [8];
  undefined8 *****local_70;
  undefined8 ***local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  pppppuVar12 = param_1[9];
  FUN_143d784b4();
  ppppppuVar13 = param_1 + 0x1b;
  bVar3 = *(byte *)(param_1 + 0x1f);
  if (bVar3 == DAT_14c9ab188) {
    puVar18 = DAT_14c9ab168;
    if (DAT_14c9ab180 < 0x19) {
      puVar18 = &DAT_14c9ab168;
    }
    ppppppuVar10 = ppppppuVar13;
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      ppppppuVar10 = (undefined8 ******)*ppppppuVar13;
    }
    uVar22 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar22);
    if (pcVar4 == (code *)0x0) {
      memcpy(ppppppuVar10,puVar18,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar22));
    }
    else {
      (*pcVar4)();
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppppuVar10 = ppppppuVar13;
      if (0x18 < *(ushort *)(param_1 + 0x1e)) {
        ppppppuVar10 = (undefined8 ******)*ppppppuVar13;
      }
      (*pcVar4)(ppppppuVar10);
    }
    if (0x18 < *(ushort *)(param_1 + 0x1e)) {
      FUN_1400020a8(*ppppppuVar13);
    }
    uVar6 = DAT_14c9ab180;
    uVar17 = (uint)DAT_14c9ab188;
    unaff_RBX = (undefined8 ****)0x0;
    *(ushort *)(param_1 + 0x1e) = DAT_14c9ab180;
    if (uVar6 < 0x19) {
      puVar18 = &DAT_14c9ab168;
      ppppppuVar10 = ppppppuVar13;
    }
    else {
      ppppppuVar10 = (undefined8 ******)FUN_14001cc68(uVar6,0);
      *ppppppuVar13 = ppppppuVar10;
      puVar18 = DAT_14c9ab168;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar17 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(ppppppuVar10,puVar18,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar17 * 0x120)));
    }
    else {
      (*pcVar4)();
    }
    *(byte *)(param_1 + 0x1f) = DAT_14c9ab188;
  }
  local_f0 = param_1 + 0x20;
  local_100 = pppppuVar12;
  if (*(int *)(param_1 + 0x21) != *(int *)((longlong)param_1 + 0x134)) {
    FUN_1488a6724(local_f0);
    *(undefined4 *)(param_1 + 0x21) = 0;
    if (*(int *)((longlong)param_1 + 0x10c) < 0) {
      FUN_1405357e8(local_f0,0);
    }
    param_1[0x26] = (undefined8 *****)0xffffffff;
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  pppppuVar24 = (undefined8 *****)local_100;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  pppppuVar12 = param_1[8];
  if (pppppuVar12 == (undefined8 *****)0x0) {
    lVar19 = 0;
    local_70 = (undefined8 ******)0x0;
LAB_143d77d2a:
    local_68 = (undefined8 ****)0x0;
    bVar30 = true;
  }
  else {
    if (*(int *)((longlong)pppppuVar12 + 0x4c) == 0) {
LAB_143d778fb:
      lVar19 = 0;
    }
    else {
      uVar17 = *(uint *)(pppppuVar12 + 9);
      lVar19 = 0;
      if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
        plVar25 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((plVar25 == (longlong *)0x0) ||
           (((int)plVar25[2] != *(int *)((longlong)pppppuVar12 + 0x4c) ||
            ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)))) goto LAB_143d778fb;
        lVar19 = *plVar25;
      }
    }
    ppppuVar5 = pppppuVar12[0x23];
    local_70 = param_1;
    if (ppppuVar5 == (undefined8 ****)0x0) goto LAB_143d77d2a;
    LOCK();
    *(int *)(ppppuVar5 + 1) = *(int *)(ppppuVar5 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)ppppuVar5 + 0xc) = *(int *)((longlong)ppppuVar5 + 0xc) + 1;
    UNLOCK();
    LOCK();
    ppppuVar1 = ppppuVar5 + 1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppppuVar1 == 0) {
      (*(code *)**ppppuVar5)(ppppuVar5);
      LOCK();
      piVar21 = (int *)((longlong)ppppuVar5 + 0xc);
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (*piVar21 == 0) {
        (*(code *)(*ppppuVar5)[2])(ppppuVar5);
      }
    }
    LOCK();
    *(int *)((longlong)ppppuVar5 + 0xc) = *(int *)((longlong)ppppuVar5 + 0xc) + 1;
    UNLOCK();
    bVar30 = false;
    local_68 = ppppuVar5;
  }
  pppuVar7 = local_68;
  local_50[0] = 0;
  local_78[0] = '\x03';
  piVar21 = local_50;
  local_60._0_4_ = 0;
  if (lVar19 == 0) {
    iVar27 = 0;
    uVar17 = (uint)local_60;
  }
  else {
    uVar17 = *(uint *)(lVar19 + 0xc);
    local_60 = (ulonglong)uVar17;
    if ((int)uVar17 < DAT_14c9647dc) {
      unaff_RBX = (undefined8 ****)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
    }
    else {
      unaff_RBX = (undefined8 ****)0x0;
    }
    iVar27 = *(int *)(unaff_RBX + 2);
    if (*(int *)(unaff_RBX + 2) == 0) {
      LOCK();
      iVar27 = DAT_14c964868 + 1;
      UNLOCK();
      iVar28 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar27;
      if (bVar29) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar27 = *(int *)(unaff_RBX + 2);
      bVar29 = iVar27 == 0;
      if (bVar29) {
        *(int *)(unaff_RBX + 2) = iVar28;
        iVar27 = 0;
      }
      UNLOCK();
      uVar17 = (uint)local_60;
      if (bVar29) {
        iVar27 = iVar28;
      }
    }
  }
  local_60._0_4_ = uVar17;
  local_60 = CONCAT44(iVar27,(uint)local_60);
  local_58 = 2;
  if (local_50[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_50[0] + -1,1);
    local_50[0] = 0;
  }
  if (!bVar30) {
    LOCK();
    piVar2 = (int *)((longlong)pppuVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*pppuVar7)[2])(pppuVar7);
    }
  }
  if (*(char *)(pppppuVar24 + 0x10) == '\0') {
    cVar8 = FUN_140c58360(param_1[8],pppppuVar24 + 0x30);
    local_108 = piVar21;
    if (cVar8 != '\0') {
      pppppuVar12 = param_1[8];
      if (pppppuVar12 == (undefined8 *****)0x0) {
        lVar19 = 0;
        local_c8 = (undefined8 ******)0x0;
LAB_143d781ed:
        local_c0 = (undefined8 ****)0x0;
        bVar30 = true;
      }
      else {
        if (*(int *)((longlong)pppppuVar12 + 0x4c) == 0) {
LAB_143d77cf0:
          lVar19 = 0;
        }
        else {
          uVar17 = *(uint *)(pppppuVar12 + 9);
          lVar19 = 0;
          if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
            plVar25 = (longlong *)
                      ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
            if ((plVar25 == (longlong *)0x0) ||
               (((int)plVar25[2] != *(int *)((longlong)pppppuVar12 + 0x4c) ||
                ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)))) goto LAB_143d77cf0;
            lVar19 = *plVar25;
          }
        }
        ppppuVar5 = pppppuVar12[0x23];
        local_c8 = param_1;
        if (ppppuVar5 == (undefined8 ****)0x0) goto LAB_143d781ed;
        LOCK();
        *(int *)(ppppuVar5 + 1) = *(int *)(ppppuVar5 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)ppppuVar5 + 0xc) = *(int *)((longlong)ppppuVar5 + 0xc) + 1;
        UNLOCK();
        LOCK();
        ppppuVar1 = ppppuVar5 + 1;
        *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
        UNLOCK();
        if (*(int *)ppppuVar1 == 0) {
          (*(code *)**ppppuVar5)(ppppuVar5);
          LOCK();
          piVar21 = (int *)((longlong)ppppuVar5 + 0xc);
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (*piVar21 == 0) {
            (*(code *)(*ppppuVar5)[2])(ppppuVar5);
          }
        }
        LOCK();
        *(int *)((longlong)ppppuVar5 + 0xc) = *(int *)((longlong)ppppuVar5 + 0xc) + 1;
        UNLOCK();
        bVar30 = false;
        local_c0 = ppppuVar5;
      }
      pppuVar7 = local_c0;
      local_d0 = (undefined8 *****)CONCAT71(local_d0._1_7_,3);
      local_a8[0] = 0;
      local_b8._0_4_ = 0;
      if (lVar19 == 0) {
        iVar27 = 0;
        uVar17 = (uint)local_b8;
      }
      else {
        uVar17 = *(uint *)(lVar19 + 0xc);
        local_b8 = (ulonglong)uVar17;
        if ((int)uVar17 < DAT_14c9647dc) {
          unaff_RBX = (undefined8 ****)
                      ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        }
        else {
          unaff_RBX = (undefined8 ****)0x0;
        }
        iVar27 = *(int *)(unaff_RBX + 2);
        if (*(int *)(unaff_RBX + 2) == 0) {
          LOCK();
          iVar27 = DAT_14c964868 + 1;
          UNLOCK();
          iVar28 = DAT_14c964868 + 1;
          bVar29 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar27;
          if (bVar29) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar27 = *(int *)(unaff_RBX + 2);
          bVar29 = iVar27 == 0;
          if (bVar29) {
            *(int *)(unaff_RBX + 2) = iVar28;
            iVar27 = 0;
          }
          UNLOCK();
          uVar17 = (uint)local_b8;
          if (bVar29) {
            iVar27 = iVar28;
          }
        }
      }
      local_b8._0_4_ = uVar17;
      piVar21 = local_108;
      local_b8 = CONCAT44(iVar27,(uint)local_b8);
      local_b0 = 2;
      if (local_a8[0] != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_a8[0] + -1,1);
        local_a8[0] = 0;
      }
      if (!bVar30) {
        LOCK();
        piVar2 = (int *)((longlong)pppuVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppuVar7)[2])(pppuVar7);
        }
      }
      FUN_1447c3578(pppppuVar24 + 0x30,local_a0,&local_d0);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_1 + 0x1f) * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppppuVar10 = ppppppuVar13;
        if (0x18 < *(ushort *)(param_1 + 0x1e)) {
          ppppppuVar10 = (undefined8 ******)*ppppppuVar13;
        }
        (*pcVar4)(ppppppuVar10);
      }
      if (0x18 < *(ushort *)(param_1 + 0x1e)) {
        FUN_1400020a8(*ppppppuVar13);
      }
      *(ushort *)(param_1 + 0x1e) = local_88;
      if (local_88 < 0x19) {
        uVar22 = (ulonglong)((uint)local_80 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar22) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar22) == (code *)0x0) {
            memcpy(ppppppuVar13,local_a0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar22));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar22))(ppppppuVar13,local_a0);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar22))(ppppppuVar13,local_a0);
        }
      }
      else {
        *ppppppuVar13 = local_a0[0];
        local_a0[0] = (undefined8 ******)0x0;
        local_88 = 0;
      }
      *(byte *)(param_1 + 0x1f) = local_80;
      local_80 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppppuVar13 = local_a0;
        if (0x18 < local_88) {
          ppppppuVar13 = (undefined8 ******)local_a0[0];
        }
        (*DAT_14c9a85d0)(ppppppuVar13);
      }
      pppppuVar24 = (undefined8 *****)local_100;
      if (0x18 < local_88) {
        FUN_1400020a8(local_a0[0]);
      }
      FUN_1448173f8(local_a8);
      if (((char)local_d0 == '\x03') && ((undefined8 ****)local_c0 != (undefined8 ****)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_c0)[2])();
        }
      }
      if (*(char *)(param_1 + 0x1f) == '\0') {
        FUN_1400b22c2(&local_d0,"Settings.TransformOrigin");
        if ((longlong)(int)local_c8 != 0) {
          uVar17 = 1;
          lVar19 = 0;
          do {
            if (*(short *)((longlong)local_d0 + lVar19) == 0x2e) goto LAB_143d77c5b;
            uVar17 = uVar17 + 1;
            lVar19 = lVar19 + 2;
          } while ((longlong)(int)local_c8 * 2 != lVar19);
        }
        goto LAB_143d77caa;
      }
    }
    uVar17 = *(uint *)(pppppuVar24 + 0x2b);
    if (uVar17 == 0) {
      uVar22 = 1;
      uVar23 = 0;
      iVar27 = 0;
      uVar9 = 0;
    }
    else {
      pppppuVar12 = (undefined8 *****)pppppuVar24[0x2a];
      if ((undefined8 *****)pppppuVar24[0x2a] == (undefined8 *****)0x0) {
        pppppuVar12 = pppppuVar24 + 0x28;
      }
      uVar9 = *(uint *)pppppuVar12;
      if (uVar9 == 0) {
        iVar27 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar27 = uVar17 - 1;
        }
        uVar23 = 0;
        uVar22 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar22 = uVar23;
        }
        iVar27 = 0;
        do {
          if (uVar22 == uVar23) goto LAB_143d78154;
          iVar27 = iVar27 + 0x20;
          uVar9 = *(uint *)((longlong)pppppuVar12 + (uVar23 + 1) * 4);
          uVar23 = uVar23 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar23 = 0;
        iVar27 = 0;
      }
      uVar22 = (ulonglong)(-uVar9 & uVar9);
      uVar20 = uVar22 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar9 = (iVar27 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar9) {
        uVar9 = uVar17;
      }
    }
    uVar20 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    piVar21 = local_108;
    if (uVar9 == uVar17) goto LAB_143d780f2;
    uVar26 = 0xffffffff;
    local_f8 = (ulonglong)uVar17;
    local_e8 = pppppuVar24 + 0x28;
    local_e0 = param_1;
    do {
      unaff_RBX = pppppuVar24[0x26];
      cVar8 = FUN_140c58360(local_e0[8],unaff_RBX + (longlong)(int)uVar9 * 9 + 1);
      if (cVar8 != '\0') {
        FUN_1447c3578(unaff_RBX + (longlong)(int)uVar9 * 9 + 1,&local_d0,local_78);
        ppppppuVar13 = (undefined8 ******)FUN_14030a32e(&local_d0);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppppuVar10 = &local_d0;
          if (0x18 < (ushort)local_b8) {
            ppppppuVar10 = (undefined8 ******)local_d0;
          }
          (*pcVar4)(ppppppuVar10);
        }
        if (0x18 < (ushort)local_b8) {
          FUN_1400020a8(local_d0);
        }
        local_a0[0] = ppppppuVar13;
        if (ppppppuVar13 == (undefined8 ******)0x0) goto LAB_143d780eb;
        local_d0 = (undefined8 *****)(unaff_RBX + (longlong)(int)uVar9 * 9);
        local_c8 = local_a0;
        FUN_146244dae(local_f0,local_d4,&local_d0);
        pppppuVar24 = (undefined8 *****)local_100;
      }
      uVar26 = uVar26 & ~(uint)uVar22;
      pppppuVar12 = (undefined8 *****)pppppuVar24[0x2a];
      if ((undefined8 *****)pppppuVar24[0x2a] == (undefined8 *****)0x0) {
        pppppuVar12 = (undefined8 *****)local_e8;
      }
      uVar17 = *(uint *)(pppppuVar24 + 0x2b);
      iVar28 = (int)uVar23;
      lVar19 = (longlong)iVar28;
      uVar9 = *(uint *)((longlong)pppppuVar12 + lVar19 * 4) & uVar26;
      if (uVar9 == 0) {
        iVar16 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar16 = uVar17 - 1;
        }
        iVar16 = iVar16 >> 5;
        iVar27 = iVar27 + 0x20;
        iVar15 = iVar16;
        if (iVar16 < iVar28) {
          iVar15 = iVar28;
        }
        if (iVar28 < iVar16) {
          lVar11 = 0;
          do {
            uVar9 = *(uint *)((longlong)pppppuVar12 + (lVar19 + lVar11 + 1) * 4);
            if (uVar9 != 0) {
              uVar23 = (ulonglong)(iVar28 + (int)lVar11 + 1);
              uVar26 = 0xffffffff;
              goto LAB_143d77bcd;
            }
            iVar27 = iVar27 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar15 - lVar19 != lVar11);
          uVar26 = 0xffffffff;
          iVar28 = iVar15;
        }
        uVar23 = (ulonglong)(iVar28 + 1);
        pppppuVar24 = (undefined8 *****)local_100;
        uVar9 = uVar17;
      }
      else {
LAB_143d77bcd:
        uVar22 = (ulonglong)(-uVar9 & uVar9);
        uVar20 = uVar22 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar9 = (iVar27 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 <= (int)uVar9) {
          uVar9 = uVar17;
        }
      }
      piVar21 = local_108;
    } while (uVar9 != (uint)local_f8);
  }
  else {
    cVar8 = FUN_140c58360(param_1[8],pppppuVar24 + 0x11);
    if (cVar8 != '\0') {
      pppppuVar12 = param_1[8];
      if (pppppuVar12 == (undefined8 *****)0x0) {
        lVar19 = 0;
        local_c8 = (undefined8 ******)0x0;
LAB_143d781bf:
        local_c0 = (undefined8 ****)0x0;
        bVar30 = true;
      }
      else {
        if (*(int *)((longlong)pppppuVar12 + 0x4c) == 0) {
LAB_143d77ce8:
          lVar19 = 0;
        }
        else {
          uVar17 = *(uint *)(pppppuVar12 + 9);
          lVar19 = 0;
          if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
            plVar25 = (longlong *)
                      ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
            if ((plVar25 == (longlong *)0x0) ||
               (((int)plVar25[2] != *(int *)((longlong)pppppuVar12 + 0x4c) ||
                ((*(uint *)(plVar25 + 1) & 0x10200000) != 0)))) goto LAB_143d77ce8;
            lVar19 = *plVar25;
          }
        }
        ppppuVar5 = pppppuVar12[0x23];
        local_c8 = param_1;
        if (ppppuVar5 == (undefined8 ****)0x0) goto LAB_143d781bf;
        LOCK();
        *(int *)(ppppuVar5 + 1) = *(int *)(ppppuVar5 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)ppppuVar5 + 0xc) = *(int *)((longlong)ppppuVar5 + 0xc) + 1;
        UNLOCK();
        LOCK();
        ppppuVar1 = ppppuVar5 + 1;
        *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
        UNLOCK();
        if (*(int *)ppppuVar1 == 0) {
          (*(code *)**ppppuVar5)(ppppuVar5);
          LOCK();
          piVar2 = (int *)((longlong)ppppuVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*ppppuVar5)[2])(ppppuVar5);
          }
        }
        LOCK();
        *(int *)((longlong)ppppuVar5 + 0xc) = *(int *)((longlong)ppppuVar5 + 0xc) + 1;
        UNLOCK();
        bVar30 = false;
        local_c0 = ppppuVar5;
      }
      pppuVar7 = local_c0;
      local_d0 = (undefined8 *****)CONCAT71(local_d0._1_7_,3);
      local_a8[0] = 0;
      local_b8._0_4_ = 0;
      if (lVar19 == 0) {
        iVar27 = 0;
        uVar17 = (uint)local_b8;
      }
      else {
        uVar17 = *(uint *)(lVar19 + 0xc);
        local_b8 = (ulonglong)uVar17;
        if ((int)uVar17 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
        }
        else {
          lVar19 = 0;
        }
        iVar27 = *(int *)(lVar19 + 0x10);
        if (*(int *)(lVar19 + 0x10) == 0) {
          LOCK();
          iVar27 = DAT_14c964868 + 1;
          UNLOCK();
          iVar28 = DAT_14c964868 + 1;
          bVar29 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar27;
          if (bVar29) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar27 = *(int *)(lVar19 + 0x10);
          bVar29 = iVar27 == 0;
          if (bVar29) {
            *(int *)(lVar19 + 0x10) = iVar28;
            iVar27 = 0;
          }
          UNLOCK();
          uVar17 = (uint)local_b8;
          if (bVar29) {
            iVar27 = iVar28;
          }
        }
      }
      local_b8._0_4_ = uVar17;
      ppppuVar5 = local_100;
      local_b8 = CONCAT44(iVar27,(uint)local_b8);
      local_b0 = 2;
      if (local_a8[0] != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_a8[0] + -1,1);
        local_a8[0] = 0;
      }
      if (!bVar30) {
        LOCK();
        piVar2 = (int *)((longlong)pppuVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*pppuVar7)[2])(pppuVar7);
        }
      }
      FUN_1447c3578(pppppuVar24 + 0x11,local_a0,&local_d0);
      lVar19 = FUN_14030a32e(local_a0);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppppuVar13 = local_a0;
        if (0x18 < local_88) {
          ppppppuVar13 = (undefined8 ******)local_a0[0];
        }
        (*pcVar4)(ppppppuVar13);
      }
      if (0x18 < local_88) {
        FUN_1400020a8(local_a0[0]);
      }
      FUN_1448173f8(local_a8);
      if (((char)local_d0 == '\x03') && ((undefined8 ****)local_c0 != (undefined8 ****)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*local_c0)[2])();
        }
      }
      if (lVar19 == 0) {
        FUN_1400b22c2(&local_d0,"Settings.LevelSequenceActor");
        if ((longlong)(int)local_c8 != 0) {
          uVar17 = 1;
          lVar19 = 0;
          do {
            if (*(short *)((longlong)local_d0 + lVar19) == 0x2e) goto LAB_143d77c5b;
            uVar17 = uVar17 + 1;
            lVar19 = lVar19 + 2;
          } while ((longlong)(int)local_c8 * 2 != lVar19);
        }
        goto LAB_143d77caa;
      }
      lVar11 = FUN_141349952();
      if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar11 + 0x38) * 8) != lVar11 + 0x30)) {
        *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
      }
      else {
        uVar17 = *(uint *)(lVar19 + 0xc);
        *(uint *)((longlong)param_1 + 0xcc) = uVar17;
        if ((int)uVar17 < DAT_14c9647dc) {
          lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
        }
        else {
          lVar19 = 0;
        }
        iVar27 = *(int *)(lVar19 + 0x10);
        if (iVar27 == 0) {
          LOCK();
          iVar27 = DAT_14c964868 + 1;
          UNLOCK();
          iVar28 = DAT_14c964868 + 1;
          bVar30 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar27;
          if (bVar30) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar28);
          }
          uVar20 = 0;
          LOCK();
          iVar27 = *(int *)(lVar19 + 0x10);
          bVar30 = iVar27 == 0;
          if (bVar30) {
            *(int *)(lVar19 + 0x10) = iVar28;
            iVar27 = 0;
          }
          UNLOCK();
          if (bVar30) {
            iVar27 = iVar28;
          }
          *(int *)(param_1 + 0x1a) = iVar27;
          if (iVar27 == 0) goto LAB_143d780f2;
        }
        else {
          *(int *)(param_1 + 0x1a) = iVar27;
        }
        uVar17 = *(uint *)((longlong)param_1 + 0xcc);
        uVar20 = 0;
        if (((int)uVar17 < 0) || (DAT_14c9647dc <= (int)uVar17)) goto LAB_143d780f2;
        plVar25 = (longlong *)
                  ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
        if ((plVar25 != (longlong *)0x0) &&
           (((int)plVar25[2] == iVar27 && ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
            lVar19 = *plVar25;
          }
          else {
            lVar19 = 0;
          }
          lVar19 = *(longlong *)(lVar19 + 0x3d0);
          if (lVar19 != 0) {
            lVar11 = FUN_1410758a4();
            if ((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) {
              uVar17 = *(uint *)(lVar19 + 0xc);
              *(uint *)((longlong)param_1 + 0xc4) = uVar17;
              if ((int)uVar17 < DAT_14c9647dc) {
                lVar19 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
              }
              else {
                lVar19 = 0;
              }
              iVar27 = *(int *)(lVar19 + 0x10);
              if (iVar27 == 0) {
                LOCK();
                iVar27 = DAT_14c964868 + 1;
                UNLOCK();
                iVar28 = DAT_14c964868 + 1;
                bVar30 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar27;
                if (bVar30) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar28);
                }
                uVar20 = 0;
                LOCK();
                iVar27 = *(int *)(lVar19 + 0x10);
                bVar30 = iVar27 == 0;
                if (bVar30) {
                  *(int *)(lVar19 + 0x10) = iVar28;
                  iVar27 = 0;
                }
                UNLOCK();
                if (bVar30) {
                  iVar27 = iVar28;
                }
                *(int *)(param_1 + 0x19) = iVar27;
                pppppuVar24 = (undefined8 *****)local_100;
                if (iVar27 == 0) goto LAB_143d780f2;
              }
              else {
                *(int *)(param_1 + 0x19) = iVar27;
                pppppuVar24 = (undefined8 *****)ppppuVar5;
              }
              uVar17 = *(uint *)((longlong)param_1 + 0xc4);
              unaff_RBX = (undefined8 ****)0x0;
              uVar20 = 0;
              if (((int)uVar17 < 0) || (DAT_14c9647dc <= (int)uVar17)) goto LAB_143d780f2;
              plVar25 = (longlong *)
                        ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
              if ((plVar25 != (longlong *)0x0) &&
                 (((int)plVar25[2] == iVar27 && ((*(uint *)(plVar25 + 1) & 0x10200000) == 0)))) {
                if ((*(uint *)(plVar25 + 1) & 0x10200000) == 0) {
                  lVar19 = *plVar25;
                }
                else {
                  lVar19 = 0;
                }
                FUN_1418902ce(&local_d0,param_1);
                FUN_140fee05c(lVar19 + 0x8c0,local_a0,&local_d0);
                if ((int)local_c8 != 0) {
                  if ((undefined8 ******)local_d0 == (undefined8 ******)0x0) goto LAB_143d77e64;
                  (*(code *)**local_d0)(local_d0,0);
                  FUN_1446efa72(&local_d0,0,0,0x10);
                  local_c8 = (undefined8 *****)((ulonglong)local_c8 & 0xffffffff00000000);
                }
                if ((undefined8 ******)local_d0 != (undefined8 ******)0x0) {
                  FUN_1400020a8();
                }
                goto LAB_143d77e64;
              }
              goto LAB_143d77cb4;
            }
          }
          *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
        }
      }
LAB_143d77cb4:
      uVar20 = 0;
      goto LAB_143d780f2;
    }
LAB_143d77e64:
    uVar17 = *(uint *)(pppppuVar24 + 0x2b);
    if (uVar17 == 0) {
      uVar22 = 1;
      uVar23 = 0;
      iVar27 = 0;
      uVar9 = 0;
    }
    else {
      pppppuVar12 = (undefined8 *****)pppppuVar24[0x2a];
      if ((undefined8 *****)pppppuVar24[0x2a] == (undefined8 *****)0x0) {
        pppppuVar12 = pppppuVar24 + 0x28;
      }
      uVar9 = *(uint *)pppppuVar12;
      if (uVar9 == 0) {
        iVar27 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar27 = uVar17 - 1;
        }
        uVar23 = 0;
        uVar22 = (ulonglong)(uint)(iVar27 >> 5);
        if (iVar27 >> 5 < 1) {
          uVar22 = uVar23;
        }
        iVar27 = 0;
        do {
          local_108 = piVar21;
          if (uVar22 == uVar23) goto LAB_143d78154;
          iVar27 = iVar27 + 0x20;
          uVar9 = *(uint *)((longlong)pppppuVar12 + (uVar23 + 1) * 4);
          uVar23 = uVar23 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar23 = 0;
        iVar27 = 0;
      }
      uVar22 = (ulonglong)(-uVar9 & uVar9);
      uVar20 = uVar22 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar9 = (iVar27 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar9) {
        uVar9 = uVar17;
      }
    }
    uVar20 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    local_108 = piVar21;
    if (uVar9 == uVar17) goto LAB_143d780f2;
    uVar26 = 0xffffffff;
    local_f8 = (ulonglong)uVar17;
    local_e8 = pppppuVar24 + 0x28;
    local_e0 = param_1;
    do {
      unaff_RBX = pppppuVar24[0x26];
      cVar8 = FUN_140c58360(local_e0[8],unaff_RBX + (longlong)(int)uVar9 * 9 + 1);
      if (cVar8 != '\0') {
        FUN_1447c3578(unaff_RBX + (longlong)(int)uVar9 * 9 + 1,&local_d0,local_78);
        ppppppuVar13 = (undefined8 ******)FUN_14030a32e(&local_d0);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppppuVar10 = &local_d0;
          if (0x18 < (ushort)local_b8) {
            ppppppuVar10 = (undefined8 ******)local_d0;
          }
          (*pcVar4)(ppppppuVar10);
        }
        if (0x18 < (ushort)local_b8) {
          FUN_1400020a8(local_d0);
        }
        local_a0[0] = ppppppuVar13;
        if (ppppppuVar13 == (undefined8 ******)0x0) goto LAB_143d780eb;
        uVar14 = FUN_1401b0f18();
        plVar25 = (longlong *)FUN_144718840(ppppppuVar13,uVar14);
        if (((undefined8 ******)local_a0[0] == (undefined8 ******)0x0) ||
           ((plVar25 != (longlong *)0x0 &&
            (lVar19 = (**(code **)(*plVar25 + 0x28))(plVar25), *(byte *)(lVar19 + 0x101) < 6))))
        goto LAB_143d780eb;
        local_d0 = (undefined8 *****)(unaff_RBX + (longlong)(int)uVar9 * 9);
        local_c8 = local_a0;
        FUN_146244dae(local_f0,local_d4,&local_d0);
        pppppuVar24 = (undefined8 *****)local_100;
      }
      uVar26 = uVar26 & ~(uint)uVar22;
      pppppuVar12 = (undefined8 *****)pppppuVar24[0x2a];
      if ((undefined8 *****)pppppuVar24[0x2a] == (undefined8 *****)0x0) {
        pppppuVar12 = (undefined8 *****)local_e8;
      }
      uVar17 = *(uint *)(pppppuVar24 + 0x2b);
      iVar28 = (int)uVar23;
      lVar19 = (longlong)iVar28;
      uVar9 = *(uint *)((longlong)pppppuVar12 + lVar19 * 4) & uVar26;
      if (uVar9 == 0) {
        iVar16 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar16 = uVar17 - 1;
        }
        iVar16 = iVar16 >> 5;
        iVar27 = iVar27 + 0x20;
        iVar15 = iVar16;
        if (iVar16 < iVar28) {
          iVar15 = iVar28;
        }
        if (iVar28 < iVar16) {
          lVar11 = 0;
          do {
            uVar9 = *(uint *)((longlong)pppppuVar12 + (lVar19 + lVar11 + 1) * 4);
            if (uVar9 != 0) {
              uVar23 = (ulonglong)(iVar28 + (int)lVar11 + 1);
              uVar26 = 0xffffffff;
              goto LAB_143d780a8;
            }
            iVar27 = iVar27 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar15 - lVar19 != lVar11);
          uVar26 = 0xffffffff;
          iVar28 = iVar15;
        }
        uVar23 = (ulonglong)(iVar28 + 1);
        pppppuVar24 = (undefined8 *****)local_100;
        uVar9 = uVar17;
      }
      else {
LAB_143d780a8:
        uVar22 = (ulonglong)(-uVar9 & uVar9);
        uVar20 = uVar22 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar9 = (iVar27 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 <= (int)uVar9) {
          uVar9 = uVar17;
        }
      }
      piVar21 = local_108;
    } while (uVar9 != (uint)local_f8);
  }
LAB_143d78154:
  uVar20 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
LAB_143d780f2:
  FUN_1448173f8(piVar21);
  if ((local_78[0] == '\x03') && ((undefined8 ****)local_68 != (undefined8 ****)0x0)) {
    LOCK();
    piVar21 = (int *)((longlong)local_68 + 0xc);
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (*piVar21 == 0) {
      (*(code *)(*local_68)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143d77c5b:
  if (uVar17 != 0) {
    uVar9 = (int)local_c8 - 1;
    if ((int)local_c8 == 0) {
      uVar9 = 0;
    }
    if ((int)uVar17 < (int)uVar9) {
      uVar9 = uVar17;
    }
    if (0 < (int)uVar9) {
      iVar27 = (int)local_c8;
      if ((int)local_c8 - uVar9 != 0) {
        memmove(local_d0,(void *)((longlong)local_d0 + (ulonglong)uVar9 * 2),
                (longlong)(int)((int)local_c8 - uVar9) * 2);
        iVar27 = (int)local_c8;
      }
      local_c8 = (undefined8 *****)CONCAT44(local_c8._4_4_,iVar27 - uVar9);
      FUN_1449649ae(&local_d0);
    }
  }
LAB_143d77caa:
  if ((undefined8 ******)local_d0 != (undefined8 ******)0x0) {
    FUN_1400020a8();
  }
  goto LAB_143d77cb4;
LAB_143d780eb:
  uVar20 = 0;
  piVar21 = local_108;
  goto LAB_143d780f2;
}



// FUNCTION 143d784b4 FUN_143d784b4 body=284 status=ok
// SIG undefined FUN_143d784b4(void)

void FUN_143d784b4(longlong param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    lVar4 = FUN_1408d3a8a(*(undefined8 *)(param_1 + 0x40));
    if ((lVar4 == 0) || (lVar4 = FUN_140995560(lVar4), lVar4 == 0)) {
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      *(uint *)(param_1 + 0x80) = uVar1;
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
      *(int *)(param_1 + 0x84) = iVar3;
      cVar2 = FUN_140c589d6(*(undefined8 *)(param_1 + 0x40),*(longlong *)(param_1 + 0x48) + 0x88,
                            param_1 + 0x88,&DAT_14c948618);
      if (cVar2 != '\0') {
        uVar5 = FUN_14148624c(lVar4);
        FUN_14148645c(uVar5,param_1 + 0x88);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143d785e2 FUN_143d785e2 body=3026 status=ok
// SIG undefined FUN_143d785e2(void)

ulonglong FUN_143d785e2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  code *pcVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  void *_Dst;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ulonglong unaff_RBP;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  undefined8 ****ppppuVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_108 [44];
  int local_dc;
  longlong *local_d8;
  char local_d0;
  undefined7 uStack_cf;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  int local_a8 [2];
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  char local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined1 local_58;
  int local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar11 = *(longlong *)(param_1 + 0x48);
  lVar17 = *(longlong *)(param_1 + 0x40);
  if (lVar17 == 0) {
    lVar20 = 0;
    local_70 = 0;
LAB_143d78f5e:
    local_68 = (longlong *)0x0;
    bVar21 = true;
  }
  else {
    if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_143d78eea:
      lVar20 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar17 + 0x48);
      lVar20 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(lVar17 + 0x4c) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143d78eea;
        lVar20 = *plVar14;
      }
    }
    plVar14 = *(longlong **)(lVar17 + 0x118);
    local_70 = param_1;
    if (plVar14 == (longlong *)0x0) goto LAB_143d78f5e;
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar15 = plVar14 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    LOCK();
    *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
    UNLOCK();
    bVar21 = false;
    local_68 = plVar14;
  }
  plVar14 = local_68;
  local_50[0] = 0;
  local_78 = '\x03';
  local_60._0_4_ = 0;
  if (lVar20 == 0) {
    uVar9 = 0;
    uVar12 = (uint)local_60;
  }
  else {
    uVar12 = *(uint *)(lVar20 + 0xc);
    local_60 = (ulonglong)uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    uVar9 = *(uint *)(lVar17 + 0x10);
    if (*(uint *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      unaff_RBP = (ulonglong)uVar13;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar9 = *(uint *)(lVar17 + 0x10);
      bVar22 = uVar9 == 0;
      if (bVar22) {
        *(uint *)(lVar17 + 0x10) = uVar13;
        uVar9 = 0;
      }
      UNLOCK();
      uVar12 = (uint)local_60;
      if (bVar22) {
        uVar9 = uVar13;
      }
    }
  }
  local_60._0_4_ = uVar12;
  local_60 = CONCAT44(uVar9,(uint)local_60);
  local_58 = 2;
  if (local_50[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_50[0] + -1,1);
    local_50[0] = 0;
  }
  if (!bVar21) {
    LOCK();
    piVar1 = (int *)((longlong)plVar14 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  plVar14 = (longlong *)(param_1 + 0x78);
  bVar3 = *(byte *)(param_1 + 0x98);
  if (bVar3 == DAT_14c9ab188) {
    puVar10 = DAT_14c9ab168;
    if (DAT_14c9ab180 < 0x19) {
      puVar10 = &DAT_14c9ab168;
    }
    plVar15 = plVar14;
    if (0x18 < *(ushort *)(param_1 + 0x90)) {
      plVar15 = (longlong *)*plVar14;
    }
    uVar8 = (ulonglong)((uint)bVar3 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
    if (pcVar4 == (code *)0x0) {
      memcpy(plVar15,puVar10,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
    }
    else {
      (*pcVar4)();
    }
  }
  else {
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar4 != (code *)0x0) {
      plVar15 = plVar14;
      if (0x18 < *(ushort *)(param_1 + 0x90)) {
        plVar15 = (longlong *)*plVar14;
      }
      (*pcVar4)(plVar15);
    }
    if (0x18 < *(ushort *)(param_1 + 0x90)) {
      FUN_1400020a8(*plVar14);
    }
    uVar5 = DAT_14c9ab180;
    uVar9 = (uint)DAT_14c9ab188;
    *(ushort *)(param_1 + 0x90) = DAT_14c9ab180;
    if (uVar5 < 0x19) {
      puVar10 = &DAT_14c9ab168;
      plVar15 = plVar14;
    }
    else {
      plVar15 = (longlong *)FUN_14001cc68(uVar5,0);
      *plVar14 = (longlong)plVar15;
      puVar10 = DAT_14c9ab168;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
    if (pcVar4 == (code *)0x0) {
      memcpy(plVar15,puVar10,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
    }
    else {
      (*pcVar4)();
    }
    *(byte *)(param_1 + 0x98) = DAT_14c9ab188;
  }
  lVar17 = lVar11 + 0x80;
  cVar6 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar17);
  if (cVar6 == '\0') {
    *(undefined4 *)(param_1 + 0x70) = 0;
    uVar9 = 0;
  }
  else {
    lVar20 = *(longlong *)(param_1 + 0x40);
    local_d8 = plVar14;
    if (lVar20 == 0) {
      lVar19 = 0;
      local_c8 = 0;
LAB_143d78fb7:
      local_c0 = (longlong *)0x0;
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
    }
    else {
      if (*(int *)(lVar20 + 0x4c) == 0) {
LAB_143d78ef2:
        lVar19 = 0;
      }
      else {
        uVar9 = *(uint *)(lVar20 + 0x48);
        lVar19 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             (((int)plVar14[2] != *(int *)(lVar20 + 0x4c) ||
              ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143d78ef2;
          lVar19 = *plVar14;
        }
      }
      plVar14 = *(longlong **)(lVar20 + 0x118);
      local_c8 = param_1;
      if (plVar14 == (longlong *)0x0) goto LAB_143d78fb7;
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar15 = plVar14 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      unaff_RBP = 0;
      local_c0 = plVar14;
    }
    plVar14 = local_c0;
    local_a8[0] = 0;
    local_d0 = '\x03';
    local_b8._0_4_ = 0;
    if (lVar19 == 0) {
      iVar7 = 0;
      uVar9 = (uint)local_b8;
    }
    else {
      uVar9 = *(uint *)(lVar19 + 0xc);
      local_b8 = (ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar20 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar20 = 0;
      }
      iVar7 = *(int *)(lVar20 + 0x10);
      if (*(int *)(lVar20 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar16 = DAT_14c964868 + 1;
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar21) {
          local_dc = iVar16;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar16);
          iVar16 = local_dc;
        }
        LOCK();
        iVar7 = *(int *)(lVar20 + 0x10);
        bVar21 = iVar7 == 0;
        if (bVar21) {
          *(int *)(lVar20 + 0x10) = iVar16;
          iVar7 = 0;
        }
        UNLOCK();
        uVar9 = (uint)local_b8;
        if (bVar21) {
          iVar7 = iVar16;
        }
      }
    }
    local_b8._0_4_ = uVar9;
    local_b8 = CONCAT44(iVar7,(uint)local_b8);
    local_b0 = 2;
    if (local_a8[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_a8[0] + -1,1);
      local_a8[0] = 0;
    }
    if ((char)unaff_RBP == '\0') {
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
    FUN_1447c3578(lVar17,local_a0,&local_d0);
    lVar17 = FUN_14030a32e(local_a0);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppuVar18 = local_a0;
      if (0x18 < local_88) {
        ppppuVar18 = (undefined8 ****)local_a0[0];
      }
      (*pcVar4)(ppppuVar18);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(local_a0[0]);
    }
    FUN_1448173f8(local_a8);
    plVar14 = local_d8;
    if ((local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c0 + 0x10))();
      }
    }
    if (lVar17 == 0) {
      FUN_1400b22c2(&local_d0,"Settings.ContextActor");
      _Dst = (void *)CONCAT71(uStack_cf,local_d0);
      if ((longlong)(int)local_c8 != 0) {
        uVar9 = 1;
        lVar11 = 0;
        do {
          if (*(short *)((longlong)_Dst + lVar11) == 0x2e) goto LAB_143d78e0f;
          uVar9 = uVar9 + 1;
          lVar11 = lVar11 + 2;
        } while ((longlong)(int)local_c8 * 2 != lVar11);
      }
      goto LAB_143d78e5e;
    }
    uVar9 = *(uint *)(lVar17 + 0xc);
    *(uint *)(param_1 + 0x70) = uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    uVar9 = *(uint *)(lVar17 + 0x10);
    if (*(uint *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      unaff_RBP = (ulonglong)uVar12;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      uVar9 = *(uint *)(lVar17 + 0x10);
      bVar21 = uVar9 == 0;
      if (bVar21) {
        *(uint *)(lVar17 + 0x10) = uVar12;
        uVar9 = 0;
      }
      UNLOCK();
      if (bVar21) {
        uVar9 = uVar12;
      }
    }
  }
  *(uint *)(param_1 + 0x74) = uVar9;
  lVar11 = lVar11 + 0x110;
  cVar6 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar11);
  uVar8 = CONCAT71((int7)(unaff_RBP >> 8),1);
  if (cVar6 == '\0') goto LAB_143d78e6a;
  lVar17 = *(longlong *)(param_1 + 0x40);
  if (lVar17 == 0) {
    lVar20 = 0;
    lVar17 = 0;
LAB_143d78fe6:
    local_c0 = (longlong *)0x0;
    bVar21 = true;
    local_c8 = lVar17;
  }
  else {
    if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_143d78efa:
      lVar20 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar17 + 0x48);
      lVar20 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar17 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_143d78efa;
        lVar20 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar17 + 0x118);
    lVar17 = param_1;
    if (plVar15 == (longlong *)0x0) goto LAB_143d78fe6;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
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
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    bVar21 = false;
    local_c8 = param_1;
    local_c0 = plVar15;
  }
  plVar15 = local_c0;
  local_a8[0] = 0;
  local_d0 = '\x03';
  local_b8._0_4_ = 0;
  if (lVar20 == 0) {
    iVar7 = 0;
    uVar9 = (uint)local_b8;
  }
  else {
    uVar9 = *(uint *)(lVar20 + 0xc);
    local_b8 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar7 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar16 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar22) {
        local_dc = iVar16;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar16);
        iVar16 = local_dc;
      }
      LOCK();
      iVar7 = *(int *)(lVar17 + 0x10);
      bVar22 = iVar7 == 0;
      if (bVar22) {
        *(int *)(lVar17 + 0x10) = iVar16;
        iVar7 = 0;
      }
      UNLOCK();
      uVar9 = (uint)local_b8;
      if (bVar22) {
        iVar7 = iVar16;
      }
    }
  }
  local_b8._0_4_ = uVar9;
  local_b8 = CONCAT44(iVar7,(uint)local_b8);
  local_b0 = 2;
  if (local_a8[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_a8[0] + -1,1);
    local_a8[0] = 0;
  }
  if (!bVar21) {
    LOCK();
    piVar1 = (int *)((longlong)plVar15 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  FUN_1447c3578(lVar11,local_a0,&local_d0);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x98) * 0x120));
  if (pcVar4 != (code *)0x0) {
    plVar15 = plVar14;
    if (0x18 < *(ushort *)(param_1 + 0x90)) {
      plVar15 = (longlong *)*plVar14;
    }
    (*pcVar4)(plVar15);
  }
  if (0x18 < *(ushort *)(param_1 + 0x90)) {
    FUN_1400020a8(*plVar14);
  }
  *(ushort *)(param_1 + 0x90) = local_88;
  if (local_88 < 0x19) {
    uVar8 = (ulonglong)((uint)local_80 * 0x120);
    if (*(code **)((longlong)&DAT_14c9a85b8 + uVar8) == (code *)0x0) {
      if (*(code **)((longlong)&DAT_14c9a85b0 + uVar8) == (code *)0x0) {
        memcpy(plVar14,local_a0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b0 + uVar8))(plVar14,local_a0);
      }
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85b8 + uVar8))(plVar14,local_a0);
    }
  }
  else {
    *plVar14 = (longlong)local_a0[0];
    local_a0[0] = (undefined8 ****)0x0;
    local_88 = 0;
  }
  *(byte *)(param_1 + 0x98) = local_80;
  local_80 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar18 = local_a0;
    if (0x18 < local_88) {
      ppppuVar18 = (undefined8 ****)local_a0[0];
    }
    (*DAT_14c9a85d0)(ppppuVar18);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  FUN_1448173f8(local_a8);
  if ((local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  uVar8 = CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
  if (*(char *)(param_1 + 0x98) != '\0') goto LAB_143d78e6a;
  FUN_1400b22c2(&local_d0,"Settings.WorldLocation");
  _Dst = (void *)CONCAT71(uStack_cf,local_d0);
  if ((longlong)(int)local_c8 != 0) {
    uVar9 = 1;
    lVar11 = 0;
    do {
      if (*(short *)((longlong)_Dst + lVar11) == 0x2e) goto LAB_143d78e0f;
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 2;
    } while ((longlong)(int)local_c8 * 2 != lVar11);
  }
  goto LAB_143d78e5e;
LAB_143d78e0f:
  if (uVar9 != 0) {
    uVar12 = (int)local_c8 - 1;
    if ((int)local_c8 == 0) {
      uVar12 = 0;
    }
    if ((int)uVar9 < (int)uVar12) {
      uVar12 = uVar9;
    }
    if (0 < (int)uVar12) {
      iVar7 = (int)local_c8;
      if ((int)local_c8 - uVar12 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (ulonglong)uVar12 * 2),
                (longlong)(int)((int)local_c8 - uVar12) * 2);
        iVar7 = (int)local_c8;
      }
      local_c8 = CONCAT44(local_c8._4_4_,iVar7 - uVar12);
      FUN_1449649ae(&local_d0);
      _Dst = (void *)CONCAT71(uStack_cf,local_d0);
    }
  }
LAB_143d78e5e:
  if (_Dst != (void *)0x0) {
    FUN_1400020a8();
  }
  uVar8 = 0;
LAB_143d78e6a:
  FUN_1448173f8(local_50);
  if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_68 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d791b6 FUN_143d791b6 body=1284 status=ok
// SIG undefined FUN_143d791b6(void)

void FUN_143d791b6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined2 *puVar12;
  undefined1 *puVar13;
  bool bVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_248 [32];
  undefined ***local_228;
  undefined **local_218;
  undefined1 local_210 [16];
  undefined1 local_200 [16];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined **local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined **local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_248;
  if ((((*(int *)(param_1 + 0x74) == 0) || (uVar3 = *(uint *)(param_1 + 0x70), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x74))) ||
      ((lVar4 = *(longlong *)(param_1 + 0x48), (*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
       (lVar5 = *plVar10, lVar5 == 0)))))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_248);
  }
  FUN_14026e798(&local_110,lVar5);
  lVar2 = lVar4 + 0xd0;
  local_120 = local_110;
  local_118 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  lVar8 = FUN_140206ee8(lVar2,&local_120);
  if ((((lVar8 == 0) || ((*(char *)(lVar8 + 0x40) == '\x01' && (*(char *)(lVar8 + 0x41) == '\0'))))
      && (lVar8 = FUN_1405f939e(param_1), lVar8 != 0)) && (*(longlong *)(lVar8 + 0x178) != 0)) {
    lVar9 = FUN_14041aabe();
    lVar8 = *(longlong *)(lVar8 + 0x178);
    if ((((lVar8 != 0) && (lVar9 != 0)) && (lVar6 = *(longlong *)(lVar8 + 0x10), lVar6 != 0)) &&
       ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar6 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)))) {
      switch(*(undefined4 *)(lVar4 + 0x100)) {
      case 0:
        local_228 = &local_170;
        local_138 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_128 = 0;
        local_170 = &PTR_FUN_14acb7da0;
        uStack_130 = 0;
        FUN_1459732fe(lVar8,lVar5,lVar2,0);
        break;
      case 1:
        local_188 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_178 = 0;
        local_1c0 = &PTR_FUN_14acb7da0;
        uStack_180 = 0;
        local_100 = *(undefined8 *)(lVar4 + 0xe0);
        FUN_1400021e4(&local_100,local_f8);
        if (local_f8._8_4_ == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        else {
          puVar12 = (undefined2 *)local_f8._0_8_;
        }
        FUN_1446f470e(&local_1c8,puVar12,1);
        local_228 = &local_1c0;
        FUN_1459732fe(lVar8,lVar5,lVar2,local_1c8);
        if (local_f8._0_8_ != 0) {
          FUN_1400020a8();
        }
        break;
      case 2:
        FUN_1486b106a(lVar8,lVar5,lVar2,lVar4 + 0x104);
        break;
      case 3:
        if (*(char *)(param_1 + 0x98) == '\x04') {
          puVar15 = *(undefined1 **)(param_1 + 0x78);
          uVar17 = *(undefined8 *)(param_1 + 0x80);
          uVar16 = *(undefined8 *)(param_1 + 0x88);
        }
        else {
          FUN_1400b56fe(local_f8,param_1 + 0x78,4);
          bVar14 = (byte)local_d8 != 0;
          puVar15 = DAT_14c9ab228;
          if (bVar14) {
            puVar15 = (undefined1 *)local_f8._0_8_;
          }
          puVar11 = &DAT_14c9ab230;
          if (bVar14) {
            puVar11 = (undefined8 *)(local_f8 + 8);
          }
          uVar17 = *puVar11;
          puVar11 = &DAT_14c9ab238;
          if (bVar14) {
            puVar11 = &local_e8;
          }
          uVar16 = *puVar11;
          pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_d8 * 0x120));
          if (pcVar7 != (code *)0x0) {
            puVar13 = local_f8;
            if (0x18 < (ushort)uStack_e0) {
              puVar13 = (undefined1 *)local_f8._0_8_;
            }
            (*pcVar7)(puVar13);
          }
          if (0x18 < (ushort)uStack_e0) {
            FUN_1400020a8(local_f8._0_8_);
          }
        }
        local_f8 = (undefined1  [16])0x0;
        local_e8 = 0;
        uStack_e0 = 0x3ff0000000000000;
        uStack_c0 = 0;
        local_b8 = 0x3ff0000000000000;
        uStack_b0 = 0x3ff0000000000000;
        local_a8 = 0x3ff0000000000000;
        uStack_a0 = 0;
        local_98 = 0x3f800000;
        local_90 = 0;
        local_8c = 0;
        local_d8 = puVar15;
        uStack_d0 = uVar17;
        local_c8 = uVar16;
        FUN_1400875ba(local_f8,lVar4 + 0x150);
        local_228 = &local_218;
        local_1d0 = 0;
        local_1f0 = (undefined1  [16])0x0;
        local_200 = (undefined1  [16])0x0;
        local_210 = (undefined1  [16])0x0;
        local_218 = &PTR_FUN_14acb7da0;
        local_1e0._0_12_ = SUB1612((undefined1  [16])0x0,0);
        local_1e0._12_4_ = 0;
        FUN_141196b28(lVar8,lVar5,local_f8,lVar2);
      }
    }
  }
  FUN_14097c15a(param_1);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_108 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_108 + 0x10))(local_108);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d796ee FUN_143d796ee body=1331 status=ok
// SIG undefined FUN_143d796ee(void)

undefined8 FUN_143d796ee(ulonglong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 ****ppppuVar18;
  bool bVar19;
  undefined1 auStack_c8 [32];
  void *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined1 local_88;
  int local_80 [4];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar15 = *(longlong *)(param_1 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_1488a7328(plVar1,0);
  }
  if (*(char *)(lVar15 + 0x80) == '\x01') {
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
    if (iVar8 == 0) {
LAB_143d79b44:
      uVar9 = 0;
    }
    else {
      uVar11 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48);
      uVar9 = 0;
      if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
        puVar10 = (undefined8 *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
        if ((puVar10 == (undefined8 *)0x0) ||
           ((*(int *)(puVar10 + 2) != iVar8 || ((*(uint *)(puVar10 + 1) & 0x10200000) != 0))))
        goto LAB_143d79b44;
        uVar9 = *puVar10;
      }
    }
    FUN_1410d0284(uVar9,&local_a8);
    if ((int)uStack_a0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_a0 & 0xffffffff);
    }
    if (*(int *)(param_1 + 0x7c) < (int)uStack_a0) {
      FUN_1488a7328(plVar1);
    }
    pvVar6 = local_a8;
    if ((int)uStack_a0 != 0) {
      lVar15 = (longlong)(int)uStack_a0;
      lVar16 = 0;
      do {
        if (*(longlong *)((longlong)pvVar6 + lVar16) != 0) {
          uVar9 = *(undefined8 *)(*(longlong *)((longlong)pvVar6 + lVar16) + 0x3d0);
          iVar8 = *(int *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = iVar8 + 1U;
          if (*(uint *)(param_1 + 0x7c) < iVar8 + 1U) {
            FUN_1488a7398(plVar1,iVar8);
          }
          FUN_14889c46a((longlong)iVar8 * 0x28 + *plVar1,uVar9);
        }
        lVar16 = lVar16 + 8;
      } while (lVar15 * 8 != lVar16);
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8(local_a8);
    }
  }
  else {
    lVar15 = lVar15 + 0x88;
    cVar7 = FUN_140c58360(*(undefined8 *)(param_1 + 0x40),lVar15);
    if (cVar7 == '\0') {
      lVar15 = 0;
    }
    else {
      lVar16 = *(longlong *)(param_1 + 0x40);
      if (lVar16 == 0) {
        lVar17 = 0;
        uStack_a0 = 0;
LAB_143d79b81:
        local_98 = (longlong *)0x0;
        bVar5 = true;
      }
      else {
        if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_143d79b4b:
          lVar17 = 0;
        }
        else {
          uVar11 = *(uint *)(lVar16 + 0x48);
          lVar17 = 0;
          if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
            plVar14 = (longlong *)
                      ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
            if ((plVar14 == (longlong *)0x0) ||
               (((int)plVar14[2] != *(int *)(lVar16 + 0x4c) ||
                ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_143d79b4b;
            lVar17 = *plVar14;
          }
        }
        plVar14 = *(longlong **)(lVar16 + 0x118);
        uStack_a0 = param_1;
        if (plVar14 == (longlong *)0x0) goto LAB_143d79b81;
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar14 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar14)(plVar14);
          LOCK();
          piVar3 = (int *)((longlong)plVar14 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        LOCK();
        *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
        UNLOCK();
        bVar5 = false;
        local_98 = plVar14;
      }
      plVar14 = local_98;
      local_a8 = (void *)CONCAT71(local_a8._1_7_,3);
      local_80[0] = 0;
      local_90._0_4_ = 0;
      if (lVar17 == 0) {
        iVar8 = 0;
        uVar11 = (uint)local_90;
      }
      else {
        uVar11 = *(uint *)(lVar17 + 0xc);
        local_90 = (ulonglong)uVar11;
        if ((int)uVar11 < DAT_14c9647dc) {
          lVar16 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
        }
        else {
          lVar16 = 0;
        }
        iVar8 = *(int *)(lVar16 + 0x10);
        if (*(int *)(lVar16 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar8 = *(int *)(lVar16 + 0x10);
          bVar19 = iVar8 == 0;
          if (bVar19) {
            *(int *)(lVar16 + 0x10) = iVar12;
            iVar8 = 0;
          }
          UNLOCK();
          uVar11 = (uint)local_90;
          if (bVar19) {
            iVar8 = iVar12;
          }
        }
      }
      local_90._0_4_ = uVar11;
      local_90 = CONCAT44(iVar8,(uint)local_90);
      local_88 = 2;
      if (local_80[0] != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_80[0] + -1,1);
        local_80[0] = 0;
      }
      if (!bVar5) {
        LOCK();
        piVar3 = (int *)((longlong)plVar14 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      FUN_1447c3578(lVar15,local_70,&local_a8);
      lVar15 = FUN_14030a32e(local_70);
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
        piVar3 = (int *)((longlong)local_98 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      if (lVar15 == 0) {
        FUN_1400b22c2(&local_a8,"Settings.Actor");
        if ((longlong)(int)uStack_a0 != 0) {
          uVar11 = 1;
          lVar15 = 0;
          do {
            if (*(short *)((longlong)local_a8 + lVar15) == 0x2e) {
              if (uVar11 != 0) {
                uVar13 = (int)uStack_a0 - 1;
                if ((int)uStack_a0 == 0) {
                  uVar13 = 0;
                }
                if ((int)uVar11 < (int)uVar13) {
                  uVar13 = uVar11;
                }
                if (0 < (int)uVar13) {
                  if ((int)uStack_a0 - uVar13 != 0) {
                    memmove(local_a8,(void *)((longlong)local_a8 + (ulonglong)uVar13 * 2),
                            (longlong)(int)((int)uStack_a0 - uVar13) * 2);
                  }
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,(int)uStack_a0 - uVar13);
                  FUN_1449649ae(&local_a8);
                }
              }
              break;
            }
            uVar11 = uVar11 + 1;
            lVar15 = lVar15 + 2;
          } while ((longlong)(int)uStack_a0 * 2 != lVar15);
        }
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        uVar9 = 0;
        goto LAB_143d79a97;
      }
    }
    iVar8 = *(int *)(param_1 + 0x78);
    *(uint *)(param_1 + 0x78) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x7c) < iVar8 + 1U) {
      FUN_1488a7398(plVar1,iVar8);
    }
    FUN_14889c46a((longlong)iVar8 * 0x28 + *plVar1,lVar15);
  }
  uVar9 = 1;
LAB_143d79a97:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d79c22 FUN_143d79c22 body=1909 status=ok
// SIG undefined FUN_143d79c22(void)

void FUN_143d79c22(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  uint *puVar4;
  longlong lVar5;
  code *pcVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  undefined8 ****ppppuVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  longlong *plVar17;
  longlong lVar18;
  uint *puVar19;
  bool bVar20;
  undefined1 auStack_d8 [36];
  uint local_b4;
  longlong local_b0;
  longlong local_a8;
  int local_a0 [2];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((longlong)*(int *)(param_1 + 0x78) != 0) {
    puVar19 = *(uint **)(param_1 + 0x70);
    puVar4 = puVar19 + (longlong)*(int *)(param_1 + 0x78) * 10;
    lVar5 = *(longlong *)(param_1 + 0x48);
    local_b0 = lVar5 + 0xe0;
    local_a8 = lVar5 + 0xf8;
    bVar15 = true;
LAB_143d79c89:
    do {
      if ((((((puVar19[1] != 0) && (uVar9 = *puVar19, -1 < (int)uVar9)) &&
            ((int)uVar9 < DAT_14c9647dc)) &&
           (((plVar17 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
             plVar17 != (longlong *)0x0 && (*(uint *)(plVar17 + 2) == puVar19[1])) &&
            (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 &&
             (((longlong *)*plVar17 != (longlong *)0x0 && (*(longlong *)(puVar19 + 4) != 0))))))))
          && (puVar19[3] != 0)) &&
         ((((uVar9 = puVar19[2], -1 < (int)uVar9 && ((int)uVar9 < DAT_14c9647dc)) &&
           (lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar11 != 0)) &&
          ((*(uint *)(lVar11 + 0x10) == puVar19[3] && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0))))
         )) {
        if ((((*(char *)(lVar5 + 0x80) == '\x01') &&
             ((*(char *)(lVar5 + 0xd8) == '\x01' &&
              (plVar17 = (longlong *)(**(code **)(*(longlong *)*plVar17 + 0x5d8))(),
              plVar17 != (longlong *)0x0)))) && ((*(byte *)(plVar17 + 0x84) & 2) != 0)) &&
           ((cVar8 = (**(code **)(*plVar17 + 0x6c8))(plVar17), cVar8 != '\0' &&
            ((cVar8 = FUN_14016169c(plVar17,local_a0), cVar8 == '\0' || (local_a0[0] == 0)))))) {
          if ((puVar19[1] == 0) || (uVar9 = *puVar19, (int)uVar9 < 0)) {
LAB_143d7a1e9:
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            if ((int)uVar9 < DAT_14c9647dc) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
              if (((puVar13 == (undefined8 *)0x0) || (*(uint *)(puVar13 + 2) != puVar19[1])) ||
                 ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_143d7a1e9;
              uVar12 = *puVar13;
            }
          }
          lVar11 = FUN_140963804(local_b0,uVar12);
          puVar1 = puVar19 + 6;
          if (lVar11 == 0) {
            *(undefined1 *)(puVar19 + 8) = 0;
            puVar1[0] = 0;
            puVar1[1] = 0;
            goto LAB_143d79ebc;
          }
          uVar9 = *(uint *)(lVar11 + 0xc);
          *puVar1 = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          uVar9 = *(uint *)(lVar11 + 0x10);
          if (uVar9 == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            uVar14 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar20) {
              local_b4 = uVar14;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar14);
              uVar14 = local_b4;
            }
            LOCK();
            uVar9 = *(uint *)(lVar11 + 0x10);
            bVar20 = uVar9 == 0;
            if (bVar20) {
              *(uint *)(lVar11 + 0x10) = uVar14;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar20) {
              uVar9 = uVar14;
            }
            puVar19[7] = uVar9;
            *(undefined1 *)(puVar19 + 8) = 0;
            if (uVar9 == 0) goto LAB_143d79ebc;
          }
          else {
            puVar19[7] = uVar9;
            *(undefined1 *)(puVar19 + 8) = 0;
          }
          uVar14 = *puVar1;
          if ((((int)uVar14 < 0) || (DAT_14c9647dc <= (int)uVar14)) ||
             ((lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar11 == 0
              || ((*(uint *)(lVar11 + 0x10) != uVar9 || ((*(uint *)(lVar11 + 8) & 0x10200000) != 0))
                 )))) goto LAB_143d79ebc;
        }
        else {
LAB_143d79ebc:
          if ((puVar19[1] == 0) || (uVar9 = *puVar19, (int)uVar9 < 0)) {
LAB_143d7a17f:
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            if ((int)uVar9 < DAT_14c9647dc) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
              if (((puVar13 == (undefined8 *)0x0) || (*(uint *)(puVar13 + 2) != puVar19[1])) ||
                 ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_143d7a17f;
              uVar12 = *puVar13;
            }
          }
          lVar11 = FUN_140963804(lVar5 + 0xc0,uVar12);
          puVar1 = puVar19 + 6;
          if (lVar11 == 0) {
            *(undefined1 *)(puVar19 + 8) = 0;
            puVar1[0] = 0;
            puVar1[1] = 0;
            goto LAB_143d79fae;
          }
          uVar9 = *(uint *)(lVar11 + 0xc);
          *puVar1 = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          uVar9 = *(uint *)(lVar11 + 0x10);
          if (uVar9 == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            uVar14 = DAT_14c964868 + 1;
            bVar20 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar20) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar14);
            }
            LOCK();
            uVar9 = *(uint *)(lVar11 + 0x10);
            bVar20 = uVar9 == 0;
            if (bVar20) {
              *(uint *)(lVar11 + 0x10) = uVar14;
              uVar9 = 0;
            }
            UNLOCK();
            if (bVar20) {
              uVar9 = uVar14;
            }
            puVar19[7] = uVar9;
            *(undefined1 *)(puVar19 + 8) = 0;
            if (uVar9 == 0) goto LAB_143d79fae;
          }
          else {
            puVar19[7] = uVar9;
            *(undefined1 *)(puVar19 + 8) = 0;
          }
        }
        uVar14 = puVar19[6];
        if (((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) &&
           ((lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar11 != 0 &&
            ((*(uint *)(lVar11 + 0x10) == uVar9 && ((*(uint *)(lVar11 + 8) & 0x10200000) == 0))))))
        {
          lVar11 = *(longlong *)(param_1 + 0x40);
          if (lVar11 == 0) {
            lVar18 = 0;
            lVar11 = 0;
LAB_143d7a25e:
            local_90 = (longlong *)0x0;
            bVar15 = true;
            local_98 = lVar11;
          }
          else {
            if ((*(int *)(lVar11 + 0x4c) == 0) || (uVar9 = *(uint *)(lVar11 + 0x48), (int)uVar9 < 0)
               ) {
LAB_143d7a1e1:
              lVar18 = 0;
            }
            else {
              lVar18 = 0;
              if ((int)uVar9 < DAT_14c9647dc) {
                plVar17 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                if (((plVar17 == (longlong *)0x0) || ((int)plVar17[2] != *(int *)(lVar11 + 0x4c)))
                   || ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_143d7a1e1;
                lVar18 = *plVar17;
              }
            }
            plVar17 = *(longlong **)(lVar11 + 0x118);
            lVar11 = param_1;
            if (plVar17 == (longlong *)0x0) goto LAB_143d7a25e;
            LOCK();
            *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
            UNLOCK();
            LOCK();
            plVar2 = plVar17 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar3 = (int *)((longlong)plVar17 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar17 + 0x10))(plVar17);
              }
            }
            LOCK();
            *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
            UNLOCK();
            bVar15 = false;
            local_98 = param_1;
            local_90 = plVar17;
          }
          plVar17 = local_90;
          local_a0[0] = CONCAT31(local_a0[0]._1_3_,3);
          local_78[0] = 0;
          local_88._0_4_ = 0;
          if (lVar18 == 0) {
            uVar9 = 0;
            uVar14 = (uint)local_88;
          }
          else {
            uVar14 = *(uint *)(lVar18 + 0xc);
            local_88 = (ulonglong)uVar14;
            if ((int)uVar14 < DAT_14c9647dc) {
              lVar11 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
            }
            else {
              lVar11 = 0;
            }
            uVar9 = *(uint *)(lVar11 + 0x10);
            if (*(uint *)(lVar11 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              uVar16 = DAT_14c964868 + 1;
              bVar20 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar20) {
                local_b4 = uVar16;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar16);
                uVar16 = local_b4;
              }
              LOCK();
              uVar9 = *(uint *)(lVar11 + 0x10);
              bVar20 = uVar9 == 0;
              if (bVar20) {
                *(uint *)(lVar11 + 0x10) = uVar16;
                uVar9 = 0;
              }
              UNLOCK();
              uVar14 = (uint)local_88;
              if (bVar20) {
                uVar9 = uVar16;
              }
            }
          }
          local_88._0_4_ = uVar14;
          local_88 = CONCAT44(uVar9,(uint)local_88);
          local_80 = 2;
          if (local_78[0] != 0) {
            FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
            local_78[0] = 0;
          }
          if (!bVar15) {
            LOCK();
            piVar3 = (int *)((longlong)plVar17 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
          FUN_1447c3578(local_a8,local_70,local_a0);
          uVar9 = FUN_1405d5f74(local_70);
          puVar19[9] = uVar9;
          pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar6 != (code *)0x0) {
            ppppuVar10 = local_70;
            if (0x18 < local_58) {
              ppppuVar10 = (undefined8 ****)local_70[0];
            }
            (*pcVar6)(ppppuVar10);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70[0]);
          }
          FUN_1448173f8(local_78);
          if (((char)local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
            LOCK();
            piVar3 = (int *)((longlong)local_90 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*local_90 + 0x10))();
            }
          }
          puVar19 = puVar19 + 10;
          bVar15 = false;
          if (puVar19 == puVar4) goto LAB_143d7a36a;
          goto LAB_143d79c89;
        }
      }
LAB_143d79fae:
      puVar19 = puVar19 + 10;
    } while (puVar19 != puVar4);
    if (!bVar15) goto LAB_143d7a36a;
  }
  FUN_14097c15a(param_1);
LAB_143d7a36a:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143d7a398 FUN_143d7a398 body=107 status=ok
// SIG undefined FUN_143d7a398(void)

void FUN_143d7a398(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_2;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4);
      if (lVar2 != 0) {
        FUN_143d7a404(param_1,lVar2,param_3,0);
        FUN_143d7a404(param_1,lVar2,param_3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 143d7a404 FUN_143d7a404 body=492 status=ok
// SIG undefined FUN_143d7a404(void)

void FUN_143d7a404(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar2 = *param_1;
  local_60 = *param_3;
  local_58 = param_3[1];
  local_50 = param_3[2];
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  cVar8 = FUN_147acf584(uVar2,&local_60);
  if (cVar8 == '\0') {
    uVar2 = *param_1;
    local_78 = *param_3;
    local_70 = param_3[1];
    local_68 = param_3[2];
    if (local_68 != 0) {
      LOCK();
      *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
      UNLOCK();
    }
    cVar8 = FUN_147acf4ea(uVar2,&local_78,param_4,&DAT_14cb7fde8);
    if (cVar8 != '\0') {
      iVar9 = DAT_14cb7fdf0 + DAT_14cb7fde0;
      if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      local_98 = param_1;
      if ((int)DAT_14cb7fde4 < iVar9) {
        FUN_143d7a5f2();
      }
      lVar7 = DAT_14cb7fde8;
      uVar5 = DAT_14cb7fde0;
      if (DAT_14cb7fdf0 != 0) {
        lVar10 = (longlong)DAT_14cb7fdf0;
        lVar11 = 0;
        local_9c = param_4;
        do {
          uVar6 = DAT_14cb7fde0;
          uVar1 = *(undefined4 *)(lVar7 + lVar11);
          lVar12 = (longlong)(int)DAT_14cb7fde0;
          DAT_14cb7fde0 = DAT_14cb7fde0 + 1;
          if (DAT_14cb7fde4 < DAT_14cb7fde0) {
            FUN_143d7a6e0(uVar6);
            param_4 = local_9c;
          }
          lVar4 = DAT_14cb7fdd8;
          lVar12 = lVar12 * 0x30;
          *(undefined8 *)(DAT_14cb7fdd8 + lVar12) = param_2;
          *(undefined4 *)(lVar4 + 8 + lVar12) = uVar1;
          *(uint *)(lVar4 + 0xc + lVar12) = uVar5;
          *(undefined8 *)(lVar4 + 0x10 + lVar12) = *param_3;
          *(undefined8 *)(lVar4 + 0x18 + lVar12) = param_3[1];
          lVar3 = param_3[2];
          *(longlong *)(lVar4 + 0x20 + lVar12) = lVar3;
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          *(undefined4 *)(lVar4 + lVar12 + 0x28) = param_4;
          lVar11 = lVar11 + 4;
        } while (lVar10 * 4 != lVar11);
      }
      uVar2 = *local_98;
      local_90 = *param_3;
      local_88 = param_3[1];
      local_80 = param_3[2];
      if (local_80 != 0) {
        LOCK();
        *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
        UNLOCK();
      }
      FUN_147acf6ca(uVar2,&local_90);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143d7a5f2 FUN_143d7a5f2 body=237 status=ok
// SIG undefined FUN_143d7a5f2(void)

void FUN_143d7a5f2(uint param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_1 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_1 < 0x2ab) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_1 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != DAT_14cb7fde4) {
    DAT_14cb7fde4 = (int)uVar2;
    FUN_1446f8d3c(&DAT_14cb7fdd8,DAT_14cb7fde0,uVar2,0x30,8);
  }
  return;
}



// FUNCTION 143d7a6e0 FUN_143d7a6e0 body=273 status=ok
// SIG undefined FUN_143d7a6e0(void)

void FUN_143d7a6e0(int param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = DAT_14cb7fde0;
  if (param_1 <= (int)DAT_14cb7fde0) {
    if (DAT_14cb7fde4 == 0) {
      uVar2 = 4;
      if (4 < DAT_14cb7fde0) {
        uVar2 = DAT_14cb7fde0;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)DAT_14cb7fde0 * 3) >> 3) + (longlong)(int)DAT_14cb7fde0 +
              0x10;
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
    DAT_14cb7fde4 = (int)uVar5;
    FUN_1446f8d3c(&DAT_14cb7fdd8,param_1,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143d7a7f1 FUN_143d7a7f1 body=73 status=ok
// SIG undefined FUN_143d7a7f1(void)

void FUN_143d7a7f1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d7a83a FUN_143d7a83a body=374 status=ok
// SIG undefined FUN_143d7a83a(void)

void FUN_143d7a83a(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = DAT_14cb7fdd0;
  if ((int)DAT_14cb7fdd0 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (DAT_14cb7fdd4 == 0) {
    uVar3 = 4;
    if (4 < DAT_14cb7fdd0) {
      uVar3 = DAT_14cb7fdd0;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)DAT_14cb7fdd0 * 3) >> 3) + (longlong)(int)DAT_14cb7fdd0 +
            0x10;
  }
  uVar5 = lVar4 * 0x188;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143d7a8d1;
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
LAB_143d7a8d1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x188)) {
    uVar7 = uVar5 / 0x188 & 0xffffffff;
  }
  DAT_14cb7fdd4 = (int)uVar7;
  FUN_1446f8d3c(&DAT_14cb7fdc8,param_1,uVar7,0x188,8);
  return;
}



// FUNCTION 143d7a9b0 FUN_143d7a9b0 body=45 status=ok
// SIG undefined FUN_143d7a9b0(void)

void FUN_143d7a9b0(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_14889d01c(param_1);
      param_1 = param_1 + 0x188;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 143d7a9de FUN_143d7a9de body=64 status=ok
// SIG undefined FUN_143d7a9de(void)

void FUN_143d7a9de(void)

{
  if (DAT_14cb7fdd4 != 0) {
    DAT_14cb7fdd4 = 0;
    FUN_1446f8d3c(&DAT_14cb7fdc8,DAT_14cb7fdd0,0,0x188,8);
  }
  return;
}



// FUNCTION 143d7aa1e FUN_143d7aa1e body=315 status=ok
// SIG undefined FUN_143d7aa1e(void)

undefined8 FUN_143d7aa1e(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = 5;
  if (5 < param_2) {
    uVar5 = (longlong)(int)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar9 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar9 >> 4]];
        }
        else {
          if ((uVar9 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar9 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar10 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar10 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar10 & 0xffffffff] & 0xf) == 0) goto LAB_143d7aa8f;
              lVar1 = uVar7 + 1 + uVar10;
              uVar10 = uVar10 - 1;
            } while (lVar1 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar9 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_143d7aa8f:
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar5;
    uVar4 = SUB168(auVar3 * ZEXT816(0xcccccccccccccccd),0);
    uVar9 = 0x7fffffff;
    iVar6 = (int)(uVar5 / 0x28);
    if (((int)param_2 <= iVar6) && (uVar9 = uVar5 / 0x28 & 0xffffffff, iVar6 < 1)) {
      uVar8 = 0;
      goto LAB_143d7aabc;
    }
  }
  uVar8 = (undefined4)uVar9;
  uVar4 = FUN_143d7ab96(param_1,0,uVar9);
LAB_143d7aabc:
  *(undefined4 *)(param_1 + 0xd4) = uVar8;
  return uVar4;
}



// FUNCTION 143d7ab59 FUN_143d7ab59 body=60 status=ok
// SIG undefined FUN_143d7ab59(void)

void FUN_143d7ab59(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    *(undefined8 *)(param_1 + 0x10 + lVar3) = *(undefined8 *)(param_2 + 0x10 + lVar3);
    uVar2 = ((undefined8 *)(param_2 + lVar3))[1];
    *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
    ((undefined8 *)(param_1 + lVar3))[1] = uVar2;
    *(undefined8 *)(param_1 + 0x18 + lVar3) = *(undefined8 *)(param_2 + 0x18 + lVar3);
    lVar1 = *(longlong *)(param_2 + 0x20 + lVar3);
    *(longlong *)(param_1 + 0x20 + lVar3) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar3 = lVar3 + 0x28;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 143d7ab96 FUN_143d7ab96 body=149 status=ok
// SIG undefined FUN_143d7ab96(void)

void FUN_143d7ab96(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 200);
  if ((uint)param_3 < 6) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x28);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 200,0,param_3,0x28);
    memmove(*(void **)((longlong)param_1 + 200),param_1,(longlong)param_2 * 0x28);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 200,param_2,param_3,0x28);
  return;
}



// FUNCTION 143d7ac2c FUN_143d7ac2c body=62 status=ok
// SIG undefined FUN_143d7ac2c(void)

void FUN_143d7ac2c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 200) == 0) {
    lVar1 = param_1;
  }
  FUN_143d7ac6a(lVar1,*(undefined4 *)(param_1 + 0xd0));
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


