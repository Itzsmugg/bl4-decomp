// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 148cfb57e FUN_148cfb57e body=104 status=ok
// SIG undefined FUN_148cfb57e(void)

void FUN_148cfb57e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cfb5cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cfb5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148cfb5e6 FUN_148cfb5e6 body=68 status=ok
// SIG undefined FUN_148cfb5e6(void)

undefined8 * FUN_148cfb5e6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b963830;
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



// FUNCTION 148cfb62e FUN_148cfb62e body=81 status=ok
// SIG undefined FUN_148cfb62e(void)

undefined8 FUN_148cfb62e(longlong param_1)

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



// FUNCTION 148cfb686 FUN_148cfb686 body=118 status=ok
// SIG undefined FUN_148cfb686(void)

void FUN_148cfb686(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963830;
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



// FUNCTION 148cfb6fc FUN_148cfb6fc body=118 status=ok
// SIG undefined FUN_148cfb6fc(void)

void FUN_148cfb6fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc260;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b963830;
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



// FUNCTION 148cfb772 FUN_148cfb772 body=156 status=ok
// SIG undefined FUN_148cfb772(void)

void FUN_148cfb772(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc260;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b963830;
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
                    /* WARNING: Could not recover jumptable at 0x000148cfb7fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfb80e FUN_148cfb80e body=104 status=ok
// SIG undefined FUN_148cfb80e(void)

void FUN_148cfb80e(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cfb85b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cfb86c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148cfb87a FUN_148cfb87a body=81 status=ok
// SIG undefined FUN_148cfb87a(void)

undefined8 FUN_148cfb87a(longlong param_1)

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



// FUNCTION 148cfb8d2 FUN_148cfb8d2 body=118 status=ok
// SIG undefined FUN_148cfb8d2(void)

void FUN_148cfb8d2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9638a0;
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



// FUNCTION 148cfb948 FUN_148cfb948 body=118 status=ok
// SIG undefined FUN_148cfb948(void)

void FUN_148cfb948(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a3a3510;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9638a0;
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



// FUNCTION 148cfb9be FUN_148cfb9be body=156 status=ok
// SIG undefined FUN_148cfb9be(void)

void FUN_148cfb9be(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a3a3510;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9638a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cfba4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cfba5a FUN_148cfba5a body=104 status=ok
// SIG undefined FUN_148cfba5a(void)

void FUN_148cfba5a(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x000148cfbaa7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000148cfbab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 148cfbb3a FUN_148cfbb3a body=102 status=ok
// SIG undefined FUN_148cfbb3a(void)

void FUN_148cfbb3a(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if (lVar1 != 0) {
      lVar1 = FUN_1406f612e(lVar1);
      if ((lVar1 != 0) && (*param_2 != 0)) {
        uVar2 = FUN_1408d7900(param_2);
        uVar2 = FUN_14148eec0(lVar1,uVar2);
        FUN_148cfbba0(lVar1,uVar2,param_3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148cfbba0 FUN_148cfbba0 body=695 status=ok
// SIG undefined FUN_148cfbba0(void)

void FUN_148cfbba0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined1 auStack_3e8 [32];
  undefined1 *local_3c8;
  longlong *local_3b8;
  longlong local_3b0;
  longlong *local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  undefined8 local_390;
  undefined4 local_388;
  undefined4 local_384;
  undefined8 local_380;
  longlong *local_378;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 local_364;
  undefined1 local_360 [556];
  undefined4 local_134;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if ((param_2 != (longlong *)0x0) &&
     (local_3b0 = (**(code **)(*param_1 + 0x180))(), local_3b0 != 0)) {
    FUN_141551abe(local_360);
    iVar11 = 0;
    if (*param_2 == 0) {
      local_360[0] = 0;
    }
    else {
      local_360[0] = *(undefined1 *)(*param_2 + 0x160);
    }
    plVar1 = param_1 + 0x7b;
    plVar2 = param_1 + 0x7d;
    local_380 = 0x100000000;
    local_370 = 0xffffffff;
    local_368 = 0;
    local_378 = plVar2;
    local_134 = param_3;
    if ((int)param_1[0x80] != 0) {
      FUN_1449c0562(&local_380);
      iVar11 = (int)param_1[0x80];
    }
    local_390 = local_370;
    uVar3 = local_390;
    local_388 = local_368;
    local_384 = local_364;
    local_3a0 = local_380;
    local_398 = local_378;
    local_390._4_4_ = (int)((ulonglong)local_370 >> 0x20);
    local_3b8 = param_1;
    local_3a8 = plVar1;
    if ((local_390._4_4_ != iVar11) || (local_378 != plVar2)) {
      uVar8 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      uVar8 = uVar8 >> 0x10 ^ uVar8;
      iVar4 = local_390._4_4_;
      local_390 = uVar3;
LAB_148cfbd2b:
      lVar7 = *local_3a8;
      lVar5 = (longlong)iVar4 * 0x60;
      if (*(int *)(lVar7 + 0x10 + lVar5) != *(int *)(lVar7 + 0x3c + lVar5)) {
        puVar10 = (undefined4 *)(lVar7 + lVar5);
        puVar6 = *(undefined4 **)(puVar10 + 0x12);
        if (*(undefined4 **)(puVar10 + 0x12) == (undefined4 *)0x0) {
          puVar6 = puVar10 + 0x10;
        }
        iVar4 = puVar6[puVar10[0x14] - 1 & uVar8];
        if (iVar4 != -1) {
          do {
            if (*(longlong **)(*(longlong *)(puVar10 + 2) + (longlong)iVar4 * 0x18) == param_2) {
              lVar7 = FUN_140d172b5(local_3b0);
              if ((lVar7 != 0) && (*(char *)(lVar7 + 0x178) == '\x03')) {
                if (puVar10[4] != puVar10[0xf]) {
                  puVar6 = puVar10 + 0x10;
                  if (*(undefined4 **)(puVar10 + 0x12) != (undefined4 *)0x0) {
                    puVar6 = *(undefined4 **)(puVar10 + 0x12);
                  }
                  iVar4 = puVar6[puVar10[0x14] - 1 & uVar8];
                  if (iVar4 != -1) {
                    goto LAB_148cfbe35;
                  }
                }
                puVar9 = (undefined8 *)0x0;
                goto LAB_148cfbdf1;
              }
              break;
            }
            iVar4 = *(int *)(*(longlong *)(puVar10 + 2) + (longlong)iVar4 * 0x18 + 0x10);
          } while (iVar4 != -1);
        }
      }
      goto LAB_148cfbd42;
    }
LAB_148cfbcbd:
    local_390 = uVar3;
    FUN_140d17bd8(local_360);
  }
  if ((local_48 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar4 = *(int *)(puVar9 + 2), iVar4 != -1) {
LAB_148cfbe35:
    puVar9 = (undefined8 *)(*(longlong *)(puVar10 + 2) + (longlong)iVar4 * 0x18);
    if ((longlong *)*puVar9 == param_2) goto LAB_148cfbdf1;
  }
  puVar9 = (undefined8 *)0x0;
LAB_148cfbdf1:
  local_3c8 = local_360;
  FUN_140d1c8e8(local_3b8,*puVar10,param_2,puVar9[1]);
LAB_148cfbd42:
  local_390 = CONCAT44(local_390._4_4_,(uint)local_390 & ~local_3a0._4_4_);
  FUN_1449c0562(&local_3a0);
  iVar4 = local_390._4_4_;
  uVar3 = local_390;
  if (local_3a8 == plVar1 && (local_398 == plVar2 && local_390._4_4_ == iVar11)) goto LAB_148cfbcbd;
  goto LAB_148cfbd2b;
}



// FUNCTION 148cfbe58 FUN_148cfbe58 body=152 status=ok
// SIG undefined FUN_148cfbe58(void)

undefined4 FUN_148cfbe58(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  uVar6 = 0;
  if ((param_1 != 0) && (uVar6 = uVar2, *param_2 != 0)) {
    lVar3 = FUN_1447210f0();
    if (lVar3 != 0) {
      lVar3 = FUN_1406f612e(lVar3);
      if (lVar3 != 0) {
        lVar1 = *param_2;
        uVar2 = FUN_1408966e4(param_1);
        local_30 = lVar1;
        uVar4 = FUN_1403363fe(lVar3);
        puVar5 = (undefined4 *)FUN_1403362f0(lVar3,uVar2,uVar4);
        if (puVar5 != (undefined4 *)0x0) {
          uVar6 = *puVar5;
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfbef2 FUN_148cfbef2 body=208 status=ok
// SIG undefined FUN_148cfbef2(void)

void FUN_148cfbef2(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f05dd8();
  lVar2 = FUN_1447210f0(param_1);
  if (lVar2 != 0) {
    cVar1 = FUN_148cfbfd2(param_1);
    if ((cVar1 != '\0') && (*(char *)(param_1 + 0x178) == '\x03')) {
      uVar3 = FUN_14479d2ce(param_1 + 0x2620);
      cVar1 = FUN_1411e4cda(uVar3);
      if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
      if (*(longlong *)(param_1 + 0x2610) == 0) {
        lVar2 = FUN_14479d2ce(param_1 + 0x2620);
        local_30 = &LAB_148cfc01e;
        local_28 = 0;
        FUN_148cfc100(lVar2 + 0x30,&local_20,param_1);
        *(undefined8 *)(param_1 + 0x2610) = local_20;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfbfd2 FUN_148cfbfd2 body=76 status=ok
// SIG undefined FUN_148cfbfd2(void)

undefined8 FUN_148cfbfd2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    lVar1 = FUN_1411e4b4a(lVar1,0);
    if (lVar1 != 0) {
      FUN_14485c47a(param_1 + 0x2620,*(undefined8 *)(lVar1 + 0x170));
      uVar2 = FUN_144729dda(param_1 + 0x2620);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 148cfc100 FUN_148cfc100 body=254 status=ok
// SIG undefined FUN_148cfc100(void)

undefined8
FUN_148cfc100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b9641c0;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfc200 FUN_148cfc200 body=146 status=ok
// SIG undefined FUN_148cfc200(void)

void FUN_148cfc200(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140d6119a();
  lVar3 = param_1 + 0x2620;
  cVar1 = FUN_144729dda(lVar3);
  if (cVar1 != '\0') {
    if (*(longlong *)(param_1 + 0x2610) != 0) {
      lVar2 = FUN_14479d2ce(lVar3);
      if (*(longlong *)(param_1 + 0x2610) != 0) {
        FUN_14480f766(lVar2 + 0x30);
      }
      *(undefined8 *)(param_1 + 0x2610) = 0;
    }
    if (*(longlong *)(param_1 + 0x2618) != 0) {
      lVar3 = FUN_14479d2ce(lVar3);
      if (*(longlong *)(param_1 + 0x2618) != 0) {
        FUN_14480f766(lVar3 + 0x60);
      }
      *(undefined8 *)(param_1 + 0x2618) = 0;
    }
  }
  return;
}



// FUNCTION 148cfc292 FUN_148cfc292 body=32 status=ok
// SIG undefined FUN_148cfc292(void)

undefined8 * FUN_148cfc292(undefined8 *param_1)

{
  FUN_1409e6ae2();
  *param_1 = &PTR_FUN_14b963c30;
  return param_1;
}



// FUNCTION 148cfc2b8 FUN_148cfc2b8 body=40 status=ok
// SIG undefined FUN_148cfc2b8(void)

void FUN_148cfc2b8(undefined8 param_1,longlong param_2)

{
  FUN_1460753f6();
  FUN_140bf2acc(param_2,param_2 + 0x18,&DAT_14cbc5890,0);
  return;
}



// FUNCTION 148cfc2e6 FUN_148cfc2e6 body=254 status=ok
// SIG undefined FUN_148cfc2e6(void)

undefined8
FUN_148cfc2e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b964380;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfc3e6 FUN_148cfc3e6 body=289 status=ok
// SIG undefined FUN_148cfc3e6(void)

void FUN_148cfc3e6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined1 auStack_68 [44];
  undefined1 local_3c [10];
  undefined1 local_32;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = param_1 + 0x1f;
  cVar2 = FUN_144729dda(plVar1);
  if (cVar2 == '\0') {
    cVar2 = FUN_1411e4a18(param_1);
    if (cVar2 == '\0') goto LAB_148cfc4d6;
  }
  lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
  if ((lVar3 == 0) || (*(char *)(lVar3 + 0x178) != '\x03')) goto LAB_148cfc4d6;
  lVar3 = FUN_1408d7900(param_1 + 0x17);
  if (lVar3 == 0) goto LAB_148cfc4d6;
  uVar4 = FUN_14479d2ce(plVar1);
  puVar5 = &DAT_14c9485f0;
  if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(lVar3 + 8);
  }
  FUN_1447325ac(puVar5,local_3c,1);
  lVar3 = FUN_1403363fe(uVar4,local_3c);
  if (lVar3 == 0) goto LAB_148cfc4d6;
  uVar6 = 1;
  if ((char)param_1[0x1c] == '\x01') {
LAB_148cfc4b2:
    uVar4 = FUN_14479d2ce(plVar1);
    local_31 = 1;
    local_32 = uVar6;
  }
  else {
    if ((char)param_1[0x1c] == '\x02') {
      uVar6 = 0;
      goto LAB_148cfc4b2;
    }
    uVar4 = FUN_14479d2ce(plVar1);
    local_31 = 0;
  }
  FUN_1440df7f8(uVar4,param_2,lVar3,&local_32);
LAB_148cfc4d6:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfc508 FUN_148cfc508 body=425 status=ok
// SIG undefined FUN_148cfc508(void)

void FUN_148cfc508(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong *local_30;
  uint local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = (**(code **)(*param_1 + 0x2b8))();
  if (((lVar6 == 0) || (*(char *)(lVar6 + 0x178) != '\x03')) ||
     (*(char *)((longlong)param_1 + 0xe3) != '\x01')) goto LAB_148cfc686;
  lVar6 = param_1[0x15];
  if (lVar6 == 0) {
    uVar7 = FUN_140b7bb2c();
    lVar6 = FUN_14477b664(uVar7);
    param_1[0x15] = lVar6;
  }
  plVar2 = param_1 + 0x14;
  if (param_1[0x16] == 0) {
    if ((lVar6 == 0) || (*plVar2 == 0)) goto LAB_148cfc686;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
      param_1[0x16] = 0;
      goto LAB_148cfc686;
    }
    uVar7 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar7,plVar2);
    param_1[0x16] = lVar6;
    if (lVar6 == 0) goto LAB_148cfc686;
  }
  lVar6 = (**(code **)(*param_1 + 0x180))(param_1);
  if ((lVar6 != 0) && (FUN_144a7d35a(lVar6,&local_30), -1 < (int)local_28)) {
    bVar9 = false;
    do {
      if ((int)local_30[1] <= (int)local_28) break;
      lVar6 = FUN_14479d2ce((ulonglong)local_28 * 8 + *local_30);
      if (lVar6 != 0) {
        lVar8 = FUN_144a5dd5e();
        if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
          if (!bVar9) {
            (**(code **)(*(longlong *)(lVar6 + 0xe68) + 0x18))(lVar6 + 0xe68,plVar2,1);
          }
          FUN_148c35ec6(lVar6,plVar2);
          bVar9 = true;
        }
      }
      uVar1 = local_28 + 1;
      bVar4 = -2 < (int)local_28;
      local_28 = uVar1;
    } while (bVar4);
  }
LAB_148cfc686:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cfc6b2 FUN_148cfc6b2 body=455 status=ok
// SIG undefined FUN_148cfc6b2(void)

void FUN_148cfc6b2(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [32];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [4];
  undefined8 local_b8;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  undefined2 uStack_a8;
  undefined6 uStack_a6;
  undefined2 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_fc = param_2;
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    lVar2 = FUN_140aed286();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (lVar1 + 0xc20 != 0)) {
      lVar2 = (**(code **)(*param_1 + 0x180))(param_1);
      if (lVar2 != 0) {
        FUN_1406f1bc8(lVar1 + 0xc20,local_98);
        if ((longlong)(int)param_1[0x1b] != 0) {
          puVar5 = (undefined8 *)param_1[0x1a];
          puVar4 = (undefined8 *)((longlong)(int)param_1[0x1b] * 0x14 + (longlong)puVar5);
          do {
            local_f8[0] = 0;
            local_e8 = (longlong *)0x0;
            uStack_a0 = 0;
            local_b8 = 0;
            uStack_b0 = 0;
            uStack_ae = 0;
            uStack_a8 = SUB82(&local_fc,0);
            uStack_a6 = (undefined6)((ulonglong)&local_fc >> 0x10);
            local_108 = *puVar5;
            local_100 = *(undefined4 *)(puVar5 + 1);
            FUN_144928d62(local_88,5,&local_108);
            FUN_141434f00(local_118,*(undefined8 *)((longlong)puVar5 + 0xc));
            lVar1 = FUN_140149a73(lVar2,0);
            if (lVar1 != 0) {
              FUN_140bc53f1(local_98,local_118,lVar1,local_f8);
            }
            if (local_f8[0] != 0) {
              plVar3 = local_e8;
              if (local_e8 == (longlong *)0x0) {
                plVar3 = local_d8;
              }
              (**(code **)(*plVar3 + 0x10))();
            }
            puVar5 = (undefined8 *)((longlong)puVar5 + 0x14);
          } while (puVar5 != puVar4);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfc87a FUN_148cfc87a body=350 status=ok
// SIG undefined FUN_148cfc87a(void)

void FUN_148cfc87a(longlong *param_1,float param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  char local_40 [4];
  undefined8 local_3c;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = param_1[0x21];
  if (lVar4 == 0) {
    uVar3 = FUN_145cd2256();
    lVar4 = FUN_14477b664(uVar3);
    param_1[0x21] = lVar4;
  }
  lVar5 = param_1[0x22];
  if (lVar5 == 0) {
    if ((lVar4 == 0) || (param_1[0x20] == 0)) goto LAB_148cfc9a8;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar3,param_1 + 0x20);
        param_1[0x22] = lVar5;
        if (lVar5 == 0) goto LAB_148cfc9a8;
        goto LAB_148cfc8cb;
      }
    }
    param_1[0x22] = 0;
  }
  else {
LAB_148cfc8cb:
    lVar4 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar4 != 0) {
      if ((param_2 == 0.0) && (!NAN(param_2))) {
        param_2 = (float)*(double *)(lVar4 + 0x6d0);
      }
      local_40[0] = '\0';
      local_3c = 0;
      local_34 = 0;
      lVar4 = FUN_140149a73(lVar4,0);
      if (lVar4 != 0) {
        FUN_14039fc7b(lVar5 + 0x18,local_40,lVar4,0);
        if ((local_40[0] == '\x02') && (*(int *)(lVar5 + 0x50) <= local_34)) {
          FUN_148cfc9da(param_1,param_2);
        }
      }
    }
  }
LAB_148cfc9a8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfc9da FUN_148cfc9da body=497 status=ok
// SIG undefined FUN_148cfc9da(void)

void FUN_148cfc9da(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_108 [44];
  undefined1 local_dc [4];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  undefined8 local_88;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_cc = param_2;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 == 0) goto LAB_148cfcb89;
  lVar4 = param_1[0x21];
  if (lVar4 == 0) {
    uVar3 = FUN_145cd2256();
    lVar4 = FUN_14477b664(uVar3);
    param_1[0x21] = lVar4;
  }
  lVar7 = param_1[0x22];
  if (lVar7 == 0) {
    if ((lVar4 == 0) || (param_1[0x20] == 0)) goto LAB_148cfcb89;
    plVar6 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar6 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar1 == '\0')) {
      param_1[0x22] = 0;
      goto LAB_148cfcb89;
    }
    uVar3 = (**(code **)(*plVar6 + 0x110))(plVar6);
    lVar7 = FUN_144aff482(uVar3,param_1 + 0x20);
    param_1[0x22] = lVar7;
    if (lVar7 == 0) goto LAB_148cfcb89;
  }
  if ((longlong)*(int *)(lVar7 + 0x60) != 0) {
    lVar4 = *(longlong *)(lVar7 + 0x58);
    lVar7 = (longlong)*(int *)(lVar7 + 0x60) * 0x48;
    do {
      local_c8[0] = 0;
      local_b8 = (longlong *)0x0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      uStack_7e = 0;
      uStack_78 = SUB82(&local_cc,0);
      uStack_76 = (undefined6)((ulonglong)&local_cc >> 0x10);
      cVar1 = FUN_140114204(lVar4);
      if (cVar1 != '\0') {
        local_dc[0] = 0;
        local_d8 = 0;
        local_d0 = 0;
        if (*(longlong *)(lVar4 + 0x3c) == 0) {
          FUN_14117b6b4(local_dc,*(undefined1 *)(lVar4 + 0x38));
        }
        else {
          FUN_144976b9c(local_dc);
        }
        lVar5 = FUN_140149a73(lVar2,0);
        if (lVar5 != 0) {
          FUN_140bc53f1(lVar4,local_dc,lVar5,local_c8);
        }
      }
      if (local_c8[0] != 0) {
        plVar6 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar6 = local_a8;
        }
        (**(code **)(*plVar6 + 0x10))();
      }
      lVar4 = lVar4 + 0x48;
      lVar7 = lVar7 + -0x48;
    } while (lVar7 != 0);
  }
LAB_148cfcb89:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cfcbcc FUN_148cfcbcc body=308 status=ok
// SIG undefined FUN_148cfcbcc(void)

void FUN_148cfcbcc(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 != 0) {
    lVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x178) == '\x03')) {
      FUN_144a7d35a(lVar3,&local_40);
      if (-1 < (int)local_38) {
        do {
          if ((int)local_40[1] <= (int)local_38) break;
          lVar3 = FUN_14479d2ce((ulonglong)local_38 * 8 + *local_40);
          if (lVar3 != 0) {
            lVar4 = FUN_144a5dd5e();
            if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
              local_50 = 0;
              local_58 = *param_2;
              local_48 = 0;
              uVar5 = FUN_14477b664(param_2[1]);
              local_50 = FUN_14477b664(uVar5);
              local_48 = param_2[2];
              FUN_1440e0406(param_1,lVar3,&local_58);
            }
          }
          uVar1 = local_38 + 1;
          bVar2 = -2 < (int)local_38;
          local_38 = uVar1;
        } while (bVar2);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfcd02 FUN_148cfcd02 body=274 status=ok
// SIG undefined FUN_148cfcd02(void)

void FUN_148cfcd02(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_148cffc68(param_2);
  }
  lVar8 = *param_1;
  if ((lVar8 != 0) && ((longlong)*(int *)(lVar8 + 0x330) != 0)) {
    plVar7 = *(longlong **)(lVar8 + 0x328);
    lVar8 = (longlong)*(int *)(lVar8 + 0x330) * 0x18;
    do {
      lVar5 = plVar7[1];
      if (lVar5 == 0) {
        uVar4 = FUN_140fa5e64();
        lVar5 = FUN_14477b664(uVar4);
        plVar7[1] = lVar5;
      }
      lVar6 = plVar7[2];
      if (lVar6 == 0) {
        if ((lVar5 != 0) && (*plVar7 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
            plVar7[2] = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar7);
            plVar7[2] = lVar6;
            if (lVar6 != 0) goto LAB_148cfcd72;
          }
        }
      }
      else {
LAB_148cfcd72:
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_148cffc98(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar6;
      }
      plVar7 = plVar7 + 3;
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 148cfce14 FUN_148cfce14 body=111 status=ok
// SIG undefined FUN_148cfce14(void)

undefined8 * FUN_148cfce14(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    *(undefined2 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  else {
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    *param_2 = *(undefined8 *)(lVar1 + 0xe0);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0xe8);
    FUN_1447715ec(param_2 + 2,lVar1 + 0xf0);
  }
  return param_2;
}



// FUNCTION 148cfce84 FUN_148cfce84 body=29 status=ok
// SIG undefined FUN_148cfce84(void)

undefined8 FUN_148cfce84(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 200))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + (ulonglong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 148cfcea2 FUN_148cfcea2 body=726 status=ok
// SIG undefined FUN_148cfcea2(void)

void FUN_148cfcea2(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined1 auStack_a8 [36];
  undefined1 local_84 [12];
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  short local_58 [2];
  undefined4 local_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_54 = param_2;
  local_50 = param_3;
  plVar7 = (longlong *)FUN_148d0002c(param_1 + 200);
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    uVar6 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
            -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar11 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar7[8];
    }
    iVar12 = *(int *)((longlong)plVar11 +
                     (ulonglong)((int)plVar7[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar12 != -1) {
      do {
        if (*(longlong **)(*plVar7 + (longlong)iVar12 * 0x10) == param_3) goto LAB_148cfcf6e;
        iVar12 = *(int *)((longlong)iVar12 * 0x10 + *plVar7 + 8);
      } while (iVar12 != -1);
    }
  }
  lVar8 = (**(code **)(*param_1 + 0x180))(param_1);
  if (((lVar8 != 0) && (lVar9 = FUN_1400f6f32(lVar8), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0x68), lVar9 != 0)) {
    FUN_140d173bc(lVar9,local_58,local_54);
    if ((-1 < local_58[0]) && (lVar9 = FUN_140d71416(lVar9,local_58), lVar9 != 0)) {
      lVar10 = FUN_144a7b4ca();
      if (((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
          ((*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30 &&
           (lVar8 = FUN_140149a73(lVar8,0), lVar8 != 0)))) &&
         (plVar11 = (longlong *)FUN_14039ffc6(lVar8), plVar11 != (longlong *)0x0)) {
        local_68 = 0;
        uStack_60 = 0;
        FUN_148cfcd02(param_3);
        if (*param_3 == 0) {
          local_78 = 0;
        }
        else {
          puVar14 = *(undefined4 **)(*param_3 + 8);
          puVar13 = &DAT_14c9485f0;
          if (puVar14 != (undefined4 *)0x0) {
            puVar13 = puVar14;
          }
          FUN_1447325ac(puVar13,&local_78,1);
        }
        lVar8 = FUN_148dc1c9c(lVar9,&local_78);
        if (0 < (int)uStack_60) {
          uVar15 = 0;
          iVar12 = (int)uStack_60;
          do {
            lVar9 = *(longlong *)(local_68 + uVar15 * 8);
            if (lVar9 != 0) {
              puVar14 = *(undefined4 **)(lVar9 + 8);
              if (puVar14 == (undefined4 *)0x0) {
                puVar14 = &DAT_14c9485f0;
              }
              FUN_144a7660c(puVar14,local_84,1);
              (**(code **)(*plVar11 + 0x78))(plVar11,&local_78,local_84);
              if (local_78 != 0) {
                cVar4 = FUN_1405f61f4();
                cVar5 = FUN_1488b0e9e(lVar8 + 8,uVar15 & 0xffffffff);
                if ((cVar4 == '\x06') && (cVar5 == '\0')) {
                  FUN_1488b0ef0(lVar8 + 8,uVar15 & 0xffffffff,1);
                }
              }
              plVar3 = local_70;
              if (local_70 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_70 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_70)(local_70);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar3 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar3 + 0x10))(plVar3);
                  }
                }
              }
              iVar12 = (int)uStack_60;
            }
            uVar15 = uVar15 + 1;
          } while ((longlong)uVar15 < (longlong)iVar12);
        }
        FUN_148d0076c(plVar7,&local_78,&local_50);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_148cfcf6e:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cfd17a FUN_148cfd17a body=446 status=ok
// SIG undefined FUN_148cfd17a(void)

void FUN_148cfd17a(longlong *param_1,undefined4 param_2,int param_3,char param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [36];
  short local_44 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*param_1 + 0x180))();
  if (lVar3 == 0) goto LAB_148cfd2f0;
  lVar4 = FUN_1400f6f32(lVar3);
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 == 0)) goto LAB_148cfd2f0;
  FUN_140d173bc(lVar4,local_44,param_2);
  if (local_44[0] < 0) goto LAB_148cfd2f0;
  lVar5 = FUN_140d71416(lVar4,local_44);
  if (lVar5 == 0) {
LAB_148cfd228:
    lVar5 = 0;
  }
  else {
    lVar6 = FUN_144a7b4ca();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        != lVar6 + 0x30)) goto LAB_148cfd228;
  }
  plVar7 = (longlong *)FUN_140d1732e(lVar4,local_44);
  if (plVar7 != (longlong *)0x0 && lVar5 != 0) {
    iVar2 = FUN_148d1c5e7(lVar3);
    if (iVar2 < param_3) {
      if ((char)plVar7[0x2f] == '\x03') {
        cVar1 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
        if (cVar1 != '\0') {
          cVar1 = FUN_141107632(plVar7);
          if (cVar1 != '\0') {
            FUN_148d1c3b2(param_3,lVar3);
            if (param_4 != '\0') {
              uVar8 = (**(code **)(*param_1 + 0x180))(param_1);
              FUN_148d1c467(param_3,uVar8);
            }
            lVar3 = plVar7[0x141];
            if (lVar3 != 0) {
              lVar4 = FUN_144a2f878();
              if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
                  (param_3 == 5)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
                FUN_148d015c4(lVar3 + 0x5a50,5);
              }
            }
            *(undefined1 *)(param_1 + 0xfa) = 1;
            goto LAB_148cfd2f0;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
    }
  }
LAB_148cfd2f0:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfd352 FUN_148cfd352 body=543 status=ok
// SIG undefined FUN_148cfd352(void)

void FUN_148cfd352(longlong param_1,uint param_2,ulonglong param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_378 [32];
  undefined1 *local_358;
  undefined1 local_348 [792];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (*(int *)(param_1 + 0x3e0) != *(int *)(param_1 + 0x40c)) {
    lVar4 = param_1 + 0x410;
    if (*(longlong *)(param_1 + 0x418) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x418);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x420) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x3d8);
      iVar7 = iVar5;
      do {
        iVar8 = iVar5;
        if (*(uint *)(lVar4 + (longlong)iVar7 * 0x60) == param_2) goto LAB_148cfd400;
        iVar7 = *(int *)((longlong)iVar7 * 0x60 + lVar4 + 0x58);
      } while (iVar7 != -1);
    }
  }
  goto LAB_148cfd380;
  while (iVar8 = *(int *)(lVar6 + 0x58), *(int *)(lVar6 + 0x58) != -1) {
LAB_148cfd400:
    lVar6 = lVar4 + (longlong)iVar8 * 0x60;
    if (*(uint *)(lVar4 + (longlong)iVar8 * 0x60) == param_2) goto LAB_148cfd420;
  }
  lVar6 = 0;
LAB_148cfd420:
  if (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c)) {
    uVar9 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    uVar9 = uVar9 >> 0x10 ^ uVar9;
    lVar10 = lVar6 + 0x40;
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      lVar10 = *(longlong *)(lVar6 + 0x48);
    }
    iVar7 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar6 + 0x50) - 1U & uVar9) * 4);
    if (iVar7 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(lVar6 + 8) + (longlong)iVar7 * 0x18) == param_3)
        goto LAB_148cfd4b3;
        iVar7 = *(int *)(*(longlong *)(lVar6 + 8) + (longlong)iVar7 * 0x18 + 0x10);
      } while (iVar7 != -1);
    }
  }
  goto LAB_148cfd380;
  while (iVar5 = *(int *)(lVar6 + 0x58), iVar5 != -1) {
LAB_148cfd4b3:
    lVar6 = lVar4 + (longlong)iVar5 * 0x60;
    if (*(uint *)(lVar4 + (longlong)iVar5 * 0x60) == param_2) goto LAB_148cfd4cc;
  }
  lVar6 = 0;
LAB_148cfd4cc:
  if (*(int *)(lVar6 + 0x10) != *(int *)(lVar6 + 0x3c)) {
    lVar4 = lVar6 + 0x40;
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      lVar4 = *(longlong *)(lVar6 + 0x48);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar6 + 0x50) - 1U & uVar9) * 4);
    if (iVar5 != -1) {
      do {
        puVar3 = (ulonglong *)(*(longlong *)(lVar6 + 8) + (longlong)iVar5 * 0x18);
        if (*puVar3 == param_3) goto LAB_148cfd4d6;
        iVar5 = (int)puVar3[2];
      } while (iVar5 != -1);
    }
  }
  puVar3 = (ulonglong *)0x0;
LAB_148cfd4d6:
  uVar1 = puVar3[1];
  if (*(char *)(uVar1 + 0x28) == '\0') {
    cVar2 = FUN_140d2b622(param_1,param_2,param_3);
    if (cVar2 == '\0') goto LAB_148cfd380;
    *(undefined1 *)(uVar1 + 0x28) = 1;
  }
  FUN_141551abe(local_348);
  local_348[0] = 2;
  local_358 = local_348;
  FUN_140d1c8e8(param_1,param_2,param_3,uVar1);
  FUN_140d17bd8(local_348);
LAB_148cfd380:
  if ((local_30 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cfd572 FUN_148cfd572 body=487 status=ok
// SIG undefined FUN_148cfd572(void)

void FUN_148cfd572(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_108 [32];
  undefined4 *local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined8 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined4 local_61;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = *param_2;
  if (lVar6 == 0) {
    local_58 = 0;
    lStack_50 = 0;
    local_48 = 0;
    bVar7 = true;
    lVar6 = 0;
    bVar8 = true;
LAB_148cfd622:
    uVar4 = FUN_1407ad36c();
    lStack_50 = FUN_14477b664(uVar4);
    bVar9 = true;
    if (bVar7) {
LAB_148cfd63e:
      local_48 = 0;
      if ((bVar8) || (lStack_50 == 0)) goto LAB_148cfd729;
      plVar2 = *(longlong **)(lStack_50 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        local_48 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        local_48 = FUN_144aff482(uVar4,&local_58);
      }
      bVar9 = local_48 != 0;
    }
  }
  else {
    lVar1 = *(longlong *)(lVar6 + 0x60);
    local_58 = lVar1;
    uVar4 = FUN_14477b664(*(undefined8 *)(lVar6 + 0x68));
    lStack_50 = FUN_14477b664(uVar4);
    local_48 = *(longlong *)(lVar6 + 0x70);
    bVar7 = local_48 == 0;
    bVar8 = lVar1 == 0;
    lVar6 = *param_2 + 0x78;
    if (*param_2 == 0) {
      lVar6 = 0;
    }
    if (lStack_50 == 0) goto LAB_148cfd622;
    bVar9 = true;
    if (local_48 == 0) goto LAB_148cfd63e;
  }
  if ((lVar6 != 0) && (bVar9)) {
    local_e0[0] = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_a8 = 0;
    uStack_a4 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_62 = 1;
    local_61 = 0;
    uVar4 = *(undefined8 *)(param_3 + 0xa08);
    uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    local_e8 = local_e0;
    FUN_1407acb05(uVar5,&local_58,lVar6,uVar4);
  }
LAB_148cfd729:
  if ((local_38 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148cfd75a FUN_148cfd75a body=15 status=ok
// SIG undefined FUN_148cfd75a(void)

void FUN_148cfd75a(undefined8 param_1)

{
  FUN_144837462(DAT_14cbc5a40,param_1);
  return;
}



// FUNCTION 148cfd792 FUN_148cfd792 body=139 status=ok
// SIG undefined FUN_148cfd792(void)

undefined8 FUN_148cfd792(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  local_38 = *(undefined8 *)(param_1 + 8);
  FUN_1400021e4(&local_38,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Challenge Tier [%s.%i]",puVar2,uVar1);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148cfd81e FUN_148cfd81e body=126 status=ok
// SIG undefined FUN_148cfd81e(void)

void FUN_148cfd81e(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140bbc048();
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ccfe88(lVar1,*(undefined4 *)(param_1 + 0x30),param_4);
      return;
    }
  }
  return;
}



// FUNCTION 148cfd89c FUN_148cfd89c body=89 status=ok
// SIG undefined FUN_148cfd89c(void)

void FUN_148cfd89c(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_140bc0bd4();
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ccffa8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148cfd8f6 FUN_148cfd8f6 body=73 status=ok
// SIG undefined FUN_148cfd8f6(void)

void FUN_148cfd8f6(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_1440ae45c(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 148cfd940 FUN_148cfd940 body=84 status=ok
// SIG undefined FUN_148cfd940(void)

void FUN_148cfd940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148ccfd7a(lVar1,*(undefined4 *)(param_1 + 0x38));
      return;
    }
  }
  return;
}



// FUNCTION 148cfd994 FUN_148cfd994 body=86 status=ok
// SIG undefined FUN_148cfd994(void)

void FUN_148cfd994(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 != 0)) {
    lVar2 = FUN_144a2f878();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      FUN_148cd0030(lVar1,param_1 + 0x38);
      return;
    }
  }
  return;
}



// FUNCTION 148cfd9ea FUN_148cfd9ea body=204 status=ok
// SIG undefined FUN_148cfd9ea(void)

void FUN_148cfd9ea(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  if ((param_2 == 0) || (lVar1 = *(longlong *)(param_2 + 0xa8), lVar1 == 0)) {
    return;
  }
  lVar4 = FUN_144a2f878();
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    return;
  }
  if (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (lVar4 == 0) {
      uVar5 = FUN_1418621d0();
      lVar4 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x40) = lVar4;
    }
    if (((*(longlong *)(param_1 + 0x48) == 0) && (lVar4 != 0)) &&
       (*(longlong *)(param_1 + 0x38) != 0)) {
      plVar2 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        uVar5 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x38));
      }
      *(undefined8 *)(param_1 + 0x48) = uVar5;
    }
    FUN_148cd00c8(lVar1);
    return;
  }
  return;
}



// FUNCTION 148cfdaee FUN_148cfdaee body=40 status=ok
// SIG undefined FUN_148cfdaee(void)

undefined8 FUN_148cfdaee(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14597fada(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148cfdb22 FUN_148cfdb22 body=28 status=ok
// SIG undefined FUN_148cfdb22(void)

void FUN_148cfdb22(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_14152c15a(param_1);
  return;
}



// FUNCTION 148cfdb76 FUN_148cfdb76 body=40 status=ok
// SIG undefined FUN_148cfdb76(void)

undefined8 FUN_148cfdb76(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1458ef5be(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148cfdbaa FUN_148cfdbaa body=28 status=ok
// SIG undefined FUN_148cfdbaa(void)

void FUN_148cfdbaa(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1459b06a0(param_1);
  return;
}



// FUNCTION 148cfdbd6 FUN_148cfdbd6 body=64 status=ok
// SIG undefined FUN_148cfdbd6(void)

void FUN_148cfdbd6(undefined8 param_1,longlong param_2)

{
  FUN_1479c6a84();
  if (param_2 != 0) {
    FUN_1440e7cde(param_1,param_2 + 0xa8);
    return;
  }
  return;
}



// FUNCTION 148cfdc16 FUN_148cfdc16 body=198 status=ok
// SIG undefined FUN_148cfdc16(void)

undefined4 * FUN_148cfdc16(undefined4 *param_1,undefined4 *param_2)

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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  param_1[0xc] = param_2[0xc];
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[9];
  uVar11 = param_2[10];
  uVar12 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar10;
  param_1[10] = uVar11;
  param_1[0xb] = uVar12;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_140501b78(param_1 + 0xe,param_2 + 0xe);
  lVar1 = *(longlong *)(param_2 + 0x2e);
  *(longlong *)(param_1 + 0x2e) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x30] = param_2[0x30];
  FUN_140501b78(param_1 + 0x32,param_2 + 0x32);
  lVar1 = *(longlong *)(param_2 + 0x52);
  *(longlong *)(param_1 + 0x52) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar13 = *(undefined8 *)(param_2 + 0x54);
  uVar14 = *(undefined8 *)(param_2 + 0x56);
  uVar15 = *(undefined8 *)(param_2 + 0x5a);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x5a) = uVar15;
  *(undefined8 *)(param_1 + 0x54) = uVar13;
  *(undefined8 *)(param_1 + 0x56) = uVar14;
  return param_1;
}



// FUNCTION 148cfdcdc FUN_148cfdcdc body=25 status=ok
// SIG undefined FUN_148cfdcdc(void)

undefined8 FUN_148cfdcdc(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong **)(param_1 + 0x4208) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148cfdceb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x4208) + 0x700))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 148cfdcf6 FUN_148cfdcf6 body=176 status=ok
// SIG undefined FUN_148cfdcf6(void)

uint FUN_148cfdcf6(longlong param_1,float param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if ((longlong)*(int *)(param_1 + 0x42a0) == 0) {
    fVar6 = 0.0;
    fVar5 = 0.0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x4298);
    lVar4 = (longlong)*(int *)(param_1 + 0x42a0) * 0xc;
    fVar5 = 0.0;
    fVar6 = 0.0;
    do {
      cVar1 = FUN_144729dda(lVar3);
      if (cVar1 != '\0') {
        lVar2 = FUN_14479d2ce(lVar3);
        fVar5 = fVar5 + *(float *)(lVar2 + 0x26c);
        fVar6 = fVar6 + *(float *)(lVar2 + 0x270);
      }
      lVar3 = lVar3 + 0xc;
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  return ~-(uint)(param_3 <= param_2) & (uint)fVar6 | (uint)fVar5 & -(uint)(param_3 <= param_2);
}



// FUNCTION 148cfde52 FUN_148cfde52 body=63 status=ok
// SIG undefined FUN_148cfde52(void)

longlong FUN_148cfde52(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_148d01c6e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xc + *param_1;
  FUN_148d01c61(lVar2);
  return lVar2;
}



// FUNCTION 148cfde92 FUN_148cfde92 body=284 status=ok
// SIG undefined FUN_148cfde92(void)

void FUN_148cfde92(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x42b0) = 0;
  *(undefined8 *)(param_1 + 0x42a8) = 0;
  *(undefined1 *)(param_1 + 0x42b4) = 1;
  FUN_14485c47a(param_1 + 0x42a8);
  *(undefined4 *)(param_1 + 0x42b0) = 0;
  if (*(longlong *)(param_1 + 0x4208) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x1c8);
    if (lVar1 == 0) {
      local_48 = DAT_14c8464f0;
      local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_58 = *(undefined8 *)(lVar1 + 0x260);
      uStack_50 = *(undefined8 *)(lVar1 + 0x268);
      local_48 = *(undefined8 *)(lVar1 + 0x270);
    }
    FUN_148d02a64(param_2,&local_38,&local_58);
    *(float *)(param_1 + 0x42b0) =
         (float)((double)*(float *)(param_2 + 0x27c) *
                (SQRT(local_28 * local_28 + local_38 * local_38 + local_30 * local_30) /
                (double)*(float *)(param_2 + 0x140)));
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfdfb0 FUN_148cfdfb0 body=393 status=ok
// SIG undefined FUN_148cfdfb0(void)

void FUN_148cfdfb0(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int local_68;
  
  FUN_1404f11f0();
  iVar1 = *(int *)(param_1 + 0x42a0);
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x4298);
    lVar5 = FUN_14479d2ce(lVar8);
    local_68 = 0;
    iVar9 = 0;
    bVar3 = lVar5 == param_2;
    do {
      lVar5 = (longlong)iVar9;
      iVar2 = iVar9 + 1;
      if (iVar9 + 1 < iVar1) {
        iVar2 = iVar1;
      }
      lVar12 = lVar8 + 0xc + lVar5 * 0xc;
      iVar10 = iVar9;
      lVar6 = lVar5;
      do {
        lVar6 = lVar6 + 1;
        iVar11 = iVar2;
        if (lVar13 <= lVar6) break;
        lVar7 = FUN_14479d2ce(lVar12);
        iVar10 = iVar10 + 1;
        lVar12 = lVar12 + 0xc;
        iVar11 = iVar10;
      } while (bVar3 == (lVar7 == param_2));
      if (bVar3 == false) {
        if (local_68 != iVar9) {
          memmove((void *)(lVar8 + (longlong)local_68 * 0xc),(void *)(lVar8 + lVar5 * 0xc),
                  (longlong)(iVar11 - iVar9) * 0xc);
        }
        local_68 = local_68 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar3 = (bool)(bVar3 ^ 1);
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 0x42a0) = local_68;
  }
  if (*(char *)(param_1 + 0x42b4) == '\x01') {
    lVar13 = param_1 + 0x42a8;
    cVar4 = FUN_144729dda(lVar13);
    if ((((cVar4 != '\0') && (lVar8 = FUN_14479d2ce(lVar13), lVar8 == param_2)) &&
        (lVar13 = FUN_14479d2ce(lVar13), *(char *)(lVar13 + 0x275) == '\0')) &&
       (*(char *)(param_1 + 0x42b4) == '\x01')) {
      *(undefined1 *)(param_1 + 0x42b4) = 0;
    }
  }
  FUN_1404f4614(param_1);
  return;
}



// FUNCTION 148cfe13a FUN_148cfe13a body=366 status=ok
// SIG undefined FUN_148cfe13a(void)

ulonglong FUN_148cfe13a(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined1 local_1b0 [48];
  float local_180;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(char *)(param_1 + 0x42b4) == '\x01') {
    lVar1 = param_1 + 0x42a8;
    cVar3 = FUN_144729dda(lVar1);
    if ((cVar3 != '\0') && (*(longlong *)(param_1 + 0x4208) != 0)) {
      lVar4 = FUN_14479d2ce(lVar1);
      FUN_148cfdc16(local_1b0,lVar4 + 0x110);
      fVar2 = *(float *)(param_1 + 0x42b0);
      uVar5 = FUN_14479d2ce(lVar1);
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x1c8);
      if (lVar1 == 0) {
        local_1d8 = DAT_14c8464f0;
        local_1e8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_1e0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_1e8 = *(undefined8 *)(lVar1 + 0x260);
        uStack_1e0 = *(undefined8 *)(lVar1 + 0x268);
        local_1d8 = *(undefined8 *)(lVar1 + 0x270);
      }
      FUN_148d02a64(uVar5,&local_1c8,&local_1e8);
      uVar6 = CONCAT71((int7)((ulonglong)local_1b0 >> 8),
                       (double)local_180 <=
                       SQRT(local_1b8 * local_1b8 + local_1c8 * local_1c8 + local_1c0 * local_1c0)
                       || local_44 <= fVar2);
      FUN_14585a28e();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfe2aa FUN_148cfe2aa body=71 status=ok
// SIG undefined FUN_148cfe2aa(void)

undefined8 FUN_148cfe2aa(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0xeb8))();
  if (cVar1 != '\0') {
    FUN_14880ef48(param_1,0);
    if ((longlong *)param_1[0x841] != (longlong *)0x0) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x841] + 0x700))();
      if (cVar1 != '\0') {
        *(byte *)(param_1 + 0x774) = *(byte *)(param_1 + 0x774) & 0xfe;
      }
    }
  }
  return 1;
}



// FUNCTION 148cfe32a FUN_148cfe32a body=385 status=ok
// SIG undefined FUN_148cfe32a(void)

void FUN_148cfe32a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_148808ed0();
  *(undefined1 *)(param_1 + 0x4228) = 0;
  plVar2 = *(longlong **)(param_1 + 0x4208);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  uVar1 = FUN_141262f1a();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
  if (plVar2 == (longlong *)0x0) {
LAB_148cfe390:
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x4208) + 0x1b0);
    if (plVar2 == (longlong *)0x0) goto LAB_148cfe434;
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 == (longlong *)0x0) goto LAB_148cfe434;
    uVar1 = FUN_141262f1a();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if (plVar3 == (longlong *)0x0 || plVar2 == plVar3) goto LAB_148cfe434;
  }
  else {
    uVar1 = FUN_141262f1a();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if (plVar2 == plVar3 || plVar3 == (longlong *)0x0) goto LAB_148cfe390;
  }
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
  FUN_140e16d82(uVar1,DAT_14cbc5e30,1,0,0);
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
  FUN_140d78b8a(uVar1,DAT_14cbc5e30,0xff,1,0,0);
LAB_148cfe434:
  FUN_1407af814(*(undefined8 *)(param_1 + 0x4208),DAT_14cbc5e30,0xff,0);
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3b38) + 0x18))
                    (*(longlong *)(param_1 + 0x4208) + 0x3b38);
  FUN_1409c9c98(uVar1,0);
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3b48) + 0x20))
                    (*(longlong *)(param_1 + 0x4208) + 0x3b48);
  FUN_1418dfe60(uVar1,1,DAT_14cbc5e30);
  return;
}



// FUNCTION 148cfe4ac FUN_148cfe4ac body=349 status=ok
// SIG undefined FUN_148cfe4ac(void)

void FUN_148cfe4ac(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_148808f4c();
  *(undefined1 *)(param_1 + 0x44bc) = 0;
  *(byte *)(param_1 + 0x44b8) = *(byte *)(param_1 + 0x44b8) & 0xfe;
  plVar2 = *(longlong **)(param_1 + 0x4208);
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  uVar1 = FUN_141262f1a();
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
  if (plVar2 == (longlong *)0x0) {
LAB_148cfe519:
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x4208) + 0x1b0);
    if (plVar2 == (longlong *)0x0) goto LAB_148cfe5b4;
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 == (longlong *)0x0) goto LAB_148cfe5b4;
    uVar1 = FUN_141262f1a();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if (plVar3 == (longlong *)0x0 || plVar2 == plVar3) goto LAB_148cfe5b4;
  }
  else {
    uVar1 = FUN_141262f1a();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if (plVar2 == plVar3 || plVar3 == (longlong *)0x0) goto LAB_148cfe519;
  }
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
  FUN_140bc1ec4(uVar1,DAT_14cbc5e30,0xff,0);
  uVar1 = (**(code **)(*plVar3 + 0x18))(plVar3);
  FUN_140e16d82(uVar1,DAT_14cbc5e30,0,0,0);
LAB_148cfe5b4:
  FUN_140bc2046(*(undefined8 *)(param_1 + 0x4208),DAT_14cbc5e30,0xff,0);
  uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x4208) + 0x3b48) + 0x20))
                    (*(longlong *)(param_1 + 0x4208) + 0x3b48);
  FUN_1418dfe60(uVar1,0,DAT_14cbc5e30);
  return;
}



// FUNCTION 148cfe672 FUN_148cfe672 body=275 status=ok
// SIG undefined FUN_148cfe672(void)

undefined8
FUN_148cfe672(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = *(undefined8 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  uStack_50 = param_3[2];
  uStack_4c = param_3[3];
  if (((param_1[0x57c] == DAT_14cbc6c68) && (param_1[0x3a2] != 0)) &&
     (plVar1 = (longlong *)param_1[0x3a3], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_88);
    fVar2 = (float)(**(code **)(*param_1 + 0x478))(param_1);
    local_70 = (double)fVar2;
    local_60 = local_78 * local_70;
    local_68 = local_80 * local_70;
    local_70 = local_70 * local_88;
    local_98 = param_4;
    (**(code **)(*param_1 + 0x6e0))(param_1,&local_58,param_3);
  }
  FUN_14880964c(param_1,param_2,&local_58,param_4);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cfe786 FUN_148cfe786 body=264 status=ok
// SIG undefined FUN_148cfe786(void)

undefined8 FUN_148cfe786(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_2;
  if ((*(byte *)(param_1 + 0x6d5) & 4) == 0) {
LAB_148cfe7ad:
    if (((lVar2 != 0) && ((longlong *)param_2[1] != (longlong *)0x0)) &&
       (cVar1 = (**(code **)(*(longlong *)param_2[1] + 0x98))(), cVar1 != '\0')) {
      cVar1 = (**(code **)(*param_1 + 0xe78))(param_1,0x100000);
      if (cVar1 != '\0') {
        if (*param_2 == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)param_2[1];
        }
        cVar1 = (**(code **)(*plVar4 + 0xa0))();
        if ((cVar1 == '\0') ||
           (cVar1 = (**(code **)(*param_1 + 0xe78))(param_1,0x800000), cVar1 != '\0'))
        goto LAB_148cfe82e;
      }
LAB_148cfe82a:
      uVar3 = 0;
      goto LAB_148cfe85b;
    }
  }
  else if ((lVar2 != 0) && (plVar4 = (longlong *)param_2[1], plVar4 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*plVar4 + 0x70))(plVar4,param_1);
    if (cVar1 == '\0') {
      lVar2 = *param_2;
      goto LAB_148cfe7ad;
    }
    goto LAB_148cfe82a;
  }
LAB_148cfe82e:
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_20 = param_2[1];
  uVar3 = FUN_148809828(param_1);
LAB_148cfe85b:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 148cfe890 FUN_148cfe890 body=128 status=ok
// SIG undefined FUN_148cfe890(void)

undefined8 FUN_148cfe890(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x4208);
  if (lVar4 != 0) {
    if ((*(longlong *)(param_1 + 0x4588) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x4588) + 0x22) != '\x01')) {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(*(longlong *)(lVar4 + 0x3b48) + 0x60))(lVar4 + 0x3b48);
      lVar4 = *(longlong *)(param_1 + 0x4208);
    }
    if ((cVar1 == '\0') && (*(char *)(lVar4 + 0x5d30) == '\0')) {
      lVar2 = FUN_14010113e(lVar4);
      if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x21f0) != lVar4)) goto LAB_148cfe8f9;
    }
    return 0;
  }
LAB_148cfe8f9:
  uVar3 = FUN_148809f22(param_1);
  return uVar3;
}



// FUNCTION 148cfe93e FUN_148cfe93e body=1178 status=ok
// SIG undefined FUN_148cfe93e(void)

double * FUN_148cfe93e(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0x57c] == DAT_14cbc6c68) {
    param_2[2] = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8._4_4_;
    uVar4 = (undefined4)DAT_14c8464e8;
    uVar3 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar3;
    *(undefined4 *)(param_2 + 1) = uVar4;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_108);
  }
  if (param_1[0x3a2] == 0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = (longlong *)param_1[0x3a3];
  }
  (**(code **)(*plVar9 + 0x30))(plVar9,&local_98);
  if ((*(byte *)(param_1 + 0x897) & 2) != 0) {
    dVar11 = (double)*(float *)((longlong)param_1 + 0x4484);
    *param_2 = -local_98 * dVar11;
    param_2[1] = -dStack_90 * dVar11;
    param_2[2] = -local_88 * dVar11;
    goto LAB_148cfeaf3;
  }
  if (param_1[0x3e] != 0) {
    dVar11 = 0.0;
    if (((double)param_1[0x71] == 0.0) && (!NAN((double)param_1[0x71]))) {
      if (((double)param_1[0x72] == 0.0) &&
         (((!NAN((double)param_1[0x72]) && ((double)param_1[0x73] == 0.0)) &&
          (!NAN((double)param_1[0x73]))))) goto LAB_148cfea8c;
    }
    fVar10 = (float)FUN_1440e81ea(param_1);
    local_a8 = (double)fVar10;
    plVar9 = (longlong *)0x0;
    local_b0 = 0;
    local_a0 = 0;
    FUN_140d2943c(&local_b0,&local_c8,param_1 + 0x71);
    dVar12 = local_c0 * local_c0 + local_c8 * local_c8;
    if (9.99999993922529e-09 < dVar12) {
      dVar11 = local_c8 * (1.0 / SQRT(dVar12));
    }
    dVar12 = (double)(-(ulonglong)(9.99999993922529e-09 < dVar12) &
                     (ulonglong)(local_c0 * (1.0 / SQRT(dVar12))));
    if (param_1[0x3a2] != 0) {
      plVar9 = (longlong *)param_1[0x3a3];
    }
    cVar6 = (**(code **)(*plVar9 + 0x98))(plVar9);
    lVar8 = FUN_140caafdc(param_1);
    if ((lVar8 == 0 || cVar6 != '\0') ||
       (*(float *)(lVar8 + 0x174) <= ABS((float)(dVar12 * 0.0 + dVar11)))) {
      cVar7 = (**(code **)(*param_1 + 0xd80))(param_1);
      uVar5 = DAT_14c8464e8._4_4_;
      uVar4 = (undefined4)DAT_14c8464e8;
      uVar3 = DAT_14c8464e0._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 4) = uVar3;
      *(undefined4 *)(param_2 + 1) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
      param_2[2] = DAT_14c8464f0;
      if (cVar7 == '\0') {
        dVar2 = (double)param_1[0x71] * (double)param_1[0x71] +
                (double)param_1[0x72] * (double)param_1[0x72];
        dVar1 = (double)param_1[0x73];
        if (cVar6 == '\0') {
          if (0.0 <= dVar11) {
            *param_2 = local_98;
            param_2[1] = dStack_90;
            param_2[2] = local_88;
            local_98 = *param_2;
            dStack_90 = param_2[1];
            local_88 = param_2[2];
          }
          else {
            local_88 = -local_88;
            dStack_90 = -dStack_90;
            local_98 = -local_98;
          }
        }
        else {
          if (param_1[0x3a2] == 0) {
            plVar9 = (longlong *)0x0;
          }
          else {
            plVar9 = (longlong *)param_1[0x3a3];
          }
          (**(code **)(*plVar9 + 0x40))(SUB84(dVar2,0),&local_e0,param_1);
          local_88 = local_d0 * dVar12 + local_88 * dVar11 + param_2[2];
          dStack_90 = local_d8 * dVar12 + dStack_90 * dVar11 + param_2[1];
          local_98 = dVar12 * local_e0 + dVar11 * local_98 + *param_2;
        }
        dVar11 = local_88 * local_88 + local_98 * local_98 + dStack_90 * dStack_90;
        if ((dVar11 != 1.0) || (NAN(dVar11))) {
          if (9.99999993922529e-09 <= dVar11) {
            dVar11 = 1.0 / SQRT(dVar11);
            local_88 = local_88 * dVar11;
            dStack_90 = dStack_90 * dVar11;
            local_98 = local_98 * dVar11;
          }
          else {
            local_98 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dStack_90 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            local_88 = DAT_14c8464f0;
          }
        }
        dVar11 = (double)(float)SQRT(dVar1 * dVar1 + dVar2);
        *param_2 = local_98 * dVar11;
        param_2[1] = dStack_90 * dVar11;
        param_2[2] = local_88 * dVar11;
      }
      goto LAB_148cfeaf3;
    }
  }
LAB_148cfea8c:
  param_2[2] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
LAB_148cfeaf3:
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 148cfedda FUN_148cfedda body=183 status=ok
// SIG undefined FUN_148cfedda(void)

void FUN_148cfedda(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if ((param_1[0x842] != 0) && (param_1[0x57c] == DAT_14cbc6c68)) {
    lVar2 = FUN_140caafdc(param_1);
    if ((lVar2 != 0) && ((double)param_1[0x27] <= (double)*(float *)(lVar2 + 0x168))) {
      if ((longlong *)param_1[0x841] != (longlong *)0x0) {
        (**(code **)(*(longlong *)param_1[0x841] + 0x808))();
        cVar1 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
        if ((cVar1 == '\0') && ((int)param_1[0x576] != 0)) {
          *(undefined4 *)(param_1 + 0x576) = 0;
          FUN_144a62f0c(param_1,param_1[7],10);
        }
      }
      puVar3 = (undefined8 *)(**(code **)(*param_1 + 0xe08))(param_1);
      FUN_140c07c00(param_1,*puVar3);
      return;
    }
  }
  return;
}



// FUNCTION 148cfee92 FUN_148cfee92 body=235 status=ok
// SIG undefined FUN_148cfee92(void)

undefined8 * FUN_148cfee92(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x138);
  if (((dVar3 < 0.0) && (param_3 == '\x02')) &&
     (dVar3 = dVar3 * dVar3 +
              *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x128) +
              *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x130),
     (double)(*(float *)(param_1 + 0x4480) * *(float *)(param_1 + 0x4480) * 0.98) <= dVar3)) {
    *param_2 = *(undefined8 *)(param_1 + 0x4490);
    uVar2 = *(undefined8 *)(param_1 + 0x44a0);
    param_2[1] = *(undefined8 *)(param_1 + 0x4498);
    param_2[2] = uVar2;
    param_2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x44b0);
    _Src = *(void **)(param_1 + 0x44a8);
    *(int *)(param_2 + 4) = iVar1;
    if ((longlong)iVar1 != 0) {
      FUN_1446dd670(param_2 + 3,iVar1,0);
      memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
      return param_2;
    }
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    return param_2;
  }
  FUN_14880a026(dVar3,param_2);
  return param_2;
}



// FUNCTION 148cfef84 FUN_148cfef84 body=507 status=ok
// SIG undefined FUN_148cfef84(void)

bool FUN_148cfef84(longlong param_1)

{
  double dVar1;
  ulonglong uVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_140caafdc();
  if (((((&DAT_00001100)[param_1] == '\n') && (*(longlong *)(param_1 + 0x110) != 0)) &&
      (*(longlong *)(param_1 + 0x1d10) != 0)) &&
     ((*(longlong *)(param_1 + 0x1d18) != 0 && (*(longlong *)(param_1 + 0x1f0) != 0)))) {
    cVar3 = thunk_FUN_140553fce();
    if (lVar5 != 0 && cVar3 == '\x01') {
      fVar7 = (float)FUN_1440e81ea(param_1);
      local_88 = (double)fVar7;
      plVar6 = (longlong *)0x0;
      local_90 = 0.0;
      local_80 = 0.0;
      FUN_144a76660(&local_90,&local_78);
      if (*(longlong *)(param_1 + 0x1d10) != 0) {
        plVar6 = *(longlong **)(param_1 + 0x1d18);
      }
      (**(code **)(*plVar6 + 0x38))(plVar6,&local_90,param_1);
      dVar8 = local_90 * local_90 + local_88 * local_88;
      if ((dVar8 != 1.0) || (NAN(dVar8))) {
        if (9.99999993922529e-09 <= dVar8) {
          dVar1 = local_88 * (1.0 / SQRT(dVar8));
          dVar8 = local_90 * (1.0 / SQRT(dVar8));
          uVar9 = 0;
          uVar10 = 0;
        }
        else {
          uVar9 = (undefined4)DAT_14c8464f0;
          uVar10 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          dVar1 = DAT_14c8464e8;
          dVar8 = DAT_14c8464e0;
        }
      }
      else {
        uVar2 = -(ulonglong)(local_80 == 0.0) & (ulonglong)local_80;
        uVar9 = (undefined4)uVar2;
        uVar10 = (undefined4)(uVar2 >> 0x20);
        dVar1 = local_88;
        dVar8 = local_90;
      }
      fVar7 = cosf(*(float *)(lVar5 + 0x16c) * 0.017453292);
      bVar4 = (-dVar8 * local_78 - dVar1 * local_70) - (double)CONCAT44(uVar10,uVar9) * local_68 <=
              (double)fVar7;
      goto LAB_148cff0fb;
    }
  }
  bVar4 = false;
LAB_148cff0fb:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148cff180 FUN_148cff180 body=38 status=ok
// SIG undefined FUN_148cff180(void)

undefined8 FUN_148cff180(undefined8 param_1,int param_2)

{
  FUN_14075380c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cff1ac FUN_148cff1ac body=62 status=ok
// SIG undefined FUN_148cff1ac(void)

longlong FUN_148cff1ac(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar2 = *(longlong **)(param_1 + 0x10);
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



// FUNCTION 148cff1ea FUN_148cff1ea body=29 status=ok
// SIG undefined FUN_148cff1ea(void)

undefined8 FUN_148cff1ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cff222 FUN_148cff222 body=29 status=ok
// SIG undefined FUN_148cff222(void)

bool FUN_148cff222(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cff240 FUN_148cff240 body=26 status=ok
// SIG undefined FUN_148cff240(void)

bool FUN_148cff240(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cff25a FUN_148cff25a body=24 status=ok
// SIG undefined FUN_148cff25a(void)

bool FUN_148cff25a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148cff272 FUN_148cff272 body=101 status=ok
// SIG undefined FUN_148cff272(void)

void FUN_148cff272(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9641c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cff2d8 FUN_148cff2d8 body=101 status=ok
// SIG undefined FUN_148cff2d8(void)

void FUN_148cff2d8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9641c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cff33e FUN_148cff33e body=134 status=ok
// SIG undefined FUN_148cff33e(void)

void FUN_148cff33e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9641c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cff3b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cff3c4 FUN_148cff3c4 body=39 status=ok
// SIG undefined FUN_148cff3c4(void)

void FUN_148cff3c4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cff3e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148cff3ec FUN_148cff3ec body=146 status=ok
// SIG undefined FUN_148cff3ec(void)

bool FUN_148cff3ec(longlong param_1)

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



// FUNCTION 148cff482 FUN_148cff482 body=31 status=ok
// SIG undefined FUN_148cff482(void)

undefined8 FUN_148cff482(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cff4bc FUN_148cff4bc body=101 status=ok
// SIG undefined FUN_148cff4bc(void)

void FUN_148cff4bc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9642a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cff522 FUN_148cff522 body=101 status=ok
// SIG undefined FUN_148cff522(void)

void FUN_148cff522(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e62a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9642a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cff588 FUN_148cff588 body=134 status=ok
// SIG undefined FUN_148cff588(void)

void FUN_148cff588(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e62a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9642a0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cff5ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cff60e FUN_148cff60e body=62 status=ok
// SIG undefined FUN_148cff60e(void)

void FUN_148cff60e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cff649. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148cff666 FUN_148cff666 body=101 status=ok
// SIG undefined FUN_148cff666(void)

void FUN_148cff666(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b964310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cff6cc FUN_148cff6cc body=101 status=ok
// SIG undefined FUN_148cff6cc(void)

void FUN_148cff6cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3f7600;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b964310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cff732 FUN_148cff732 body=134 status=ok
// SIG undefined FUN_148cff732(void)

void FUN_148cff732(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3f7600;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b964310;
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
                    /* WARNING: Could not recover jumptable at 0x000148cff7a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cff7b8 FUN_148cff7b8 body=52 status=ok
// SIG undefined FUN_148cff7b8(void)

void FUN_148cff7b8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cff7e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148cff7ec FUN_148cff7ec body=29 status=ok
// SIG undefined FUN_148cff7ec(void)

undefined8 FUN_148cff7ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cff824 FUN_148cff824 body=29 status=ok
// SIG undefined FUN_148cff824(void)

bool FUN_148cff824(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cff842 FUN_148cff842 body=26 status=ok
// SIG undefined FUN_148cff842(void)

bool FUN_148cff842(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148cff85c FUN_148cff85c body=24 status=ok
// SIG undefined FUN_148cff85c(void)

bool FUN_148cff85c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148cff874 FUN_148cff874 body=101 status=ok
// SIG undefined FUN_148cff874(void)

void FUN_148cff874(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b964380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cff8da FUN_148cff8da body=101 status=ok
// SIG undefined FUN_148cff8da(void)

void FUN_148cff8da(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b964380;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cff940 FUN_148cff940 body=134 status=ok
// SIG undefined FUN_148cff940(void)

void FUN_148cff940(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b964380;
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
                    /* WARNING: Could not recover jumptable at 0x000148cff9b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cff9c6 FUN_148cff9c6 body=39 status=ok
// SIG undefined FUN_148cff9c6(void)

void FUN_148cff9c6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cff9e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148cff9ee FUN_148cff9ee body=146 status=ok
// SIG undefined FUN_148cff9ee(void)

bool FUN_148cff9ee(longlong param_1)

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



// FUNCTION 148cffa9c FUN_148cffa9c body=29 status=ok
// SIG undefined FUN_148cffa9c(void)

bool FUN_148cffa9c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148cffaba FUN_148cffaba body=101 status=ok
// SIG undefined FUN_148cffaba(void)

void FUN_148cffaba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b964230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9643f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cffb20 FUN_148cffb20 body=101 status=ok
// SIG undefined FUN_148cffb20(void)

void FUN_148cffb20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b964230;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9643f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cffb86 FUN_148cffb86 body=134 status=ok
// SIG undefined FUN_148cffb86(void)

void FUN_148cffb86(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b964230;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9643f0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cffbfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148cffc0c FUN_148cffc0c body=44 status=ok
// SIG undefined FUN_148cffc0c(void)

void FUN_148cffc0c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148cffc35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148cffc38 FUN_148cffc38 body=48 status=ok
// SIG undefined FUN_148cffc38(void)

void FUN_148cffc38(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148cffc68 FUN_148cffc68 body=48 status=ok
// SIG undefined FUN_148cffc68(void)

void FUN_148cffc68(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 148cffc98 FUN_148cffc98 body=132 status=ok
// SIG undefined FUN_148cffc98(void)

void FUN_148cffc98(longlong param_1,int param_2)

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



// FUNCTION 148cffd1e FUN_148cffd1e body=114 status=ok
// SIG undefined FUN_148cffd1e(void)

void FUN_148cffd1e(longlong *param_1,int param_2)

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



// FUNCTION 148cffd90 FUN_148cffd90 body=114 status=ok
// SIG undefined FUN_148cffd90(void)

void FUN_148cffd90(longlong *param_1,int param_2)

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



// FUNCTION 148cffe02 FUN_148cffe02 body=114 status=ok
// SIG undefined FUN_148cffe02(void)

void FUN_148cffe02(longlong *param_1,int param_2)

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



// FUNCTION 148cffe74 FUN_148cffe74 body=31 status=ok
// SIG undefined FUN_148cffe74(void)

undefined8 FUN_148cffe74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148cffeae FUN_148cffeae body=101 status=ok
// SIG undefined FUN_148cffeae(void)

void FUN_148cffeae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9644c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfff14 FUN_148cfff14 body=101 status=ok
// SIG undefined FUN_148cfff14(void)

void FUN_148cfff14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ecd00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9644c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148cfff7a FUN_148cfff7a body=134 status=ok
// SIG undefined FUN_148cfff7a(void)

void FUN_148cfff7a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ecd00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9644c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148cffff1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d00000 FUN_148d00000 body=44 status=ok
// SIG undefined FUN_148d00000(void)

void FUN_148d00000(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d00029. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d0002c FUN_148d0002c body=188 status=ok
// SIG undefined FUN_148d0002c(void)

longlong FUN_148d0002c(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_148d000cb;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_148d000ea(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_148d000cb:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 148d000ea FUN_148d000ea body=272 status=ok
// SIG undefined FUN_148d000ea(void)

undefined4 * FUN_148d000ea(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

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
  FUN_148d001fc(param_1,local_48);
  FUN_148d003a0(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_148d002ea(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
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
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
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
      FUN_148d005c4(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d001fc FUN_148d001fc body=238 status=ok
// SIG undefined FUN_148d001fc(void)

int * FUN_148d001fc(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 148d002ea FUN_148d002ea body=182 status=ok
// SIG undefined FUN_148d002ea(void)

undefined8 FUN_148d002ea(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_148bfd248((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_148d0054a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148d003a0 FUN_148d003a0 body=154 status=ok
// SIG undefined FUN_148d003a0(void)

undefined4 * FUN_148d003a0(undefined8 *param_1,undefined4 *param_2)

{
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
  *param_2 = *(undefined4 *)*param_1;
  FUN_148d0043c(param_2 + 2,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_148bfd248(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0043c FUN_148d0043c body=123 status=ok
// SIG undefined FUN_148d0043c(void)

undefined8 * FUN_148d0043c(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_148d004b8();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 148d004b8 FUN_148d004b8 body=146 status=ok
// SIG undefined FUN_148d004b8(void)

longlong * FUN_148d004b8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 148d0054a FUN_148d0054a body=122 status=ok
// SIG undefined FUN_148d0054a(void)

void FUN_148d0054a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 148d005c4 FUN_148d005c4 body=423 status=ok
// SIG undefined FUN_148d005c4(void)

void FUN_148d005c4(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x60;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x5c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x58 + lVar7) =
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



// FUNCTION 148d0076c FUN_148d0076c body=312 status=ok
// SIG undefined FUN_148d0076c(void)

undefined4 * FUN_148d0076c(longlong param_1,undefined4 *param_2,ulonglong *param_3)

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
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148d008a6(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_148d0098c(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148d00a7a(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d008a6 FUN_148d008a6 body=229 status=ok
// SIG undefined FUN_148d008a6(void)

int * FUN_148d008a6(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 148d0098c FUN_148d0098c body=124 status=ok
// SIG undefined FUN_148d0098c(void)

undefined8 FUN_148d0098c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_148d00a08(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 148d00a08 FUN_148d00a08 body=114 status=ok
// SIG undefined FUN_148d00a08(void)

void FUN_148d00a08(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 148d00a7a FUN_148d00a7a body=477 status=ok
// SIG undefined FUN_148d00a7a(void)

void FUN_148d00a7a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
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
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
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
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
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



// FUNCTION 148d00c58 FUN_148d00c58 body=31 status=ok
// SIG undefined FUN_148d00c58(void)

undefined8 FUN_148d00c58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d00c7e FUN_148d00c7e body=29 status=ok
// SIG undefined FUN_148d00c7e(void)

bool FUN_148d00c7e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d00c9c FUN_148d00c9c body=26 status=ok
// SIG undefined FUN_148d00c9c(void)

bool FUN_148d00c9c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d00cb6 FUN_148d00cb6 body=101 status=ok
// SIG undefined FUN_148d00cb6(void)

void FUN_148d00cb6(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b964550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d00d1c FUN_148d00d1c body=134 status=ok
// SIG undefined FUN_148d00d1c(void)

void FUN_148d00d1c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b964550;
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
                    /* WARNING: Could not recover jumptable at 0x000148d00d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d00da2 FUN_148d00da2 body=146 status=ok
// SIG undefined FUN_148d00da2(void)

bool FUN_148d00da2(longlong param_1)

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



// FUNCTION 148d00e36 FUN_148d00e36 body=266 status=ok
// SIG undefined FUN_148d00e36(void)

undefined4 * FUN_148d00e36(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined1 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140d1954c(param_1,local_48);
  *local_40 = *(undefined1 *)*param_4;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  *(undefined4 *)(local_40 + 0x18) = 0xffffffff;
  cVar1 = FUN_140d194a8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar2 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x1c) = param_3;
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x18) =
           *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4);
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x48) - 1U & param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140d1c630(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d00f42 FUN_148d00f42 body=159 status=ok
// SIG undefined FUN_148d00f42(void)

void FUN_148d00f42(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_148d00f7f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_148d00f7f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_148d00f7f:
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
                    /* WARNING: Could not recover jumptable at 0x000148d00fdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148d00fe2 FUN_148d00fe2 body=114 status=ok
// SIG undefined FUN_148d00fe2(void)

void FUN_148d00fe2(longlong *param_1,int param_2)

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



// FUNCTION 148d01054 FUN_148d01054 body=31 status=ok
// SIG undefined FUN_148d01054(void)

undefined8 FUN_148d01054(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0108e FUN_148d0108e body=26 status=ok
// SIG undefined FUN_148d0108e(void)

bool FUN_148d0108e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d010a8 FUN_148d010a8 body=101 status=ok
// SIG undefined FUN_148d010a8(void)

void FUN_148d010a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9648f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9645e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d0110e FUN_148d0110e body=101 status=ok
// SIG undefined FUN_148d0110e(void)

void FUN_148d0110e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b9648f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9645e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d01174 FUN_148d01174 body=134 status=ok
// SIG undefined FUN_148d01174(void)

void FUN_148d01174(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b9648f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9645e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d011eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d011fa FUN_148d011fa body=50 status=ok
// SIG undefined FUN_148d011fa(void)

void FUN_148d011fa(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d01229. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))
            (*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 148d0122c FUN_148d0122c body=165 status=ok
// SIG undefined FUN_148d0122c(void)

bool FUN_148d0122c(longlong param_1,undefined4 param_2,undefined8 param_3)

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



// FUNCTION 148d012d4 FUN_148d012d4 body=31 status=ok
// SIG undefined FUN_148d012d4(void)

undefined8 FUN_148d012d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d0130e FUN_148d0130e body=29 status=ok
// SIG undefined FUN_148d0130e(void)

bool FUN_148d0130e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d0132c FUN_148d0132c body=26 status=ok
// SIG undefined FUN_148d0132c(void)

bool FUN_148d0132c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d01346 FUN_148d01346 body=101 status=ok
// SIG undefined FUN_148d01346(void)

void FUN_148d01346(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4e4420;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b964650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d013ac FUN_148d013ac body=134 status=ok
// SIG undefined FUN_148d013ac(void)

void FUN_148d013ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b4e4420;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b964650;
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
                    /* WARNING: Could not recover jumptable at 0x000148d01423. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d01432 FUN_148d01432 body=62 status=ok
// SIG undefined FUN_148d01432(void)

void FUN_148d01432(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d0146d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 148d01470 FUN_148d01470 body=177 status=ok
// SIG undefined FUN_148d01470(void)

bool FUN_148d01470(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d01522 FUN_148d01522 body=162 status=ok
// SIG undefined FUN_148d01522(void)

void FUN_148d01522(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148d015af;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148d015af:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148d015c4 FUN_148d015c4 body=160 status=ok
// SIG undefined FUN_148d015c4(void)

void FUN_148d015c4(longlong *param_1,undefined4 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148d0164f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148d0164f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148d01664 FUN_148d01664 body=187 status=ok
// SIG undefined FUN_148d01664(void)

void FUN_148d01664(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148d01707;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148d01707:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148d01720 FUN_148d01720 body=186 status=ok
// SIG undefined FUN_148d01720(void)

void FUN_148d01720(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar7 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar6 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar6 < 2;
      uVar6 = uVar6 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar7) {
          return;
        }
        goto LAB_148d017c2;
      }
    }
    uVar5 = uVar6 - 1;
    bVar7 = true;
  } while (1 < uVar6);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148d017c2:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148d017da FUN_148d017da body=187 status=ok
// SIG undefined FUN_148d017da(void)

void FUN_148d017da(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_148d0187d;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_148d0187d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 148d01896 FUN_148d01896 body=322 status=ok
// SIG undefined FUN_148d01896(void)

void FUN_148d01896(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 148d019da FUN_148d019da body=87 status=ok
// SIG undefined FUN_148d019da(void)

void FUN_148d019da(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x60) == param_2) {
          FUN_148d01a32(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x60 + *param_1 + 0x58);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148d01a32 FUN_148d01a32 body=95 status=ok
// SIG undefined FUN_148d01a32(void)

void FUN_148d01a32(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_148d01a92();
  return;
}



// FUNCTION 148d01a92 FUN_148d01a92 body=82 status=ok
// SIG undefined FUN_148d01a92(void)

void FUN_148d01a92(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_148bfd248(lVar1 + lVar2 + 8);
  FUN_148d0054a(param_1,param_2);
  return;
}



// FUNCTION 148d01afe FUN_148d01afe body=29 status=ok
// SIG undefined FUN_148d01afe(void)

bool FUN_148d01afe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d01b1c FUN_148d01b1c body=26 status=ok
// SIG undefined FUN_148d01b1c(void)

bool FUN_148d01b1c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d01b36 FUN_148d01b36 body=24 status=ok
// SIG undefined FUN_148d01b36(void)

bool FUN_148d01b36(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 148d01b4e FUN_148d01b4e body=101 status=ok
// SIG undefined FUN_148d01b4e(void)

void FUN_148d01b4e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b9646e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d01bb4 FUN_148d01bb4 body=134 status=ok
// SIG undefined FUN_148d01bb4(void)

void FUN_148d01bb4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b9646e0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d01c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d01c3a FUN_148d01c3a body=39 status=ok
// SIG undefined FUN_148d01c3a(void)

void FUN_148d01c3a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d01c5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 148d01c61 FUN_148d01c61 body=12 status=ok
// SIG undefined FUN_148d01c61(void)

void FUN_148d01c61(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



// FUNCTION 148d01c6e FUN_148d01c6e body=147 status=ok
// SIG undefined FUN_148d01c6e(void)

void FUN_148d01c6e(longlong param_1,int param_2)

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



// FUNCTION 148d01d1c FUN_148d01d1c body=29 status=ok
// SIG undefined FUN_148d01d1c(void)

bool FUN_148d01d1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d01d3a FUN_148d01d3a body=26 status=ok
// SIG undefined FUN_148d01d3a(void)

bool FUN_148d01d3a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d01d54 FUN_148d01d54 body=101 status=ok
// SIG undefined FUN_148d01d54(void)

void FUN_148d01d54(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b964750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d01dba FUN_148d01dba body=134 status=ok
// SIG undefined FUN_148d01dba(void)

void FUN_148d01dba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b964750;
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
                    /* WARNING: Could not recover jumptable at 0x000148d01e31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d01e40 FUN_148d01e40 body=162 status=ok
// SIG undefined FUN_148d01e40(void)

bool FUN_148d01e40(longlong param_1,undefined4 param_2)

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
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
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



// FUNCTION 148d01ee4 FUN_148d01ee4 body=31 status=ok
// SIG undefined FUN_148d01ee4(void)

undefined8 FUN_148d01ee4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148d01f1e FUN_148d01f1e body=29 status=ok
// SIG undefined FUN_148d01f1e(void)

bool FUN_148d01f1e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 148d01f3c FUN_148d01f3c body=26 status=ok
// SIG undefined FUN_148d01f3c(void)

bool FUN_148d01f3c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 148d01f56 FUN_148d01f56 body=101 status=ok
// SIG undefined FUN_148d01f56(void)

void FUN_148d01f56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9647c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d01fbc FUN_148d01fbc body=101 status=ok
// SIG undefined FUN_148d01fbc(void)

void FUN_148d01fbc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9c20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b9647c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 148d02022 FUN_148d02022 body=134 status=ok
// SIG undefined FUN_148d02022(void)

void FUN_148d02022(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e9c20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b9647c0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d02099. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148d020a8 FUN_148d020a8 body=42 status=ok
// SIG undefined FUN_148d020a8(void)

void FUN_148d020a8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000148d020cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 148d020d2 FUN_148d020d2 body=96 status=ok
// SIG undefined FUN_148d020d2(void)

void FUN_148d020d2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 148d02132 FUN_148d02132 body=44 status=ok
// SIG undefined FUN_148d02132(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d02132(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cbc600c = _DAT_14cbc600c + -1;
  *param_1 = DAT_14cbc6000;
  DAT_14cbc6000 = param_1;
  return;
}



// FUNCTION 148d0215e FUN_148d0215e body=28 status=ok
// SIG undefined FUN_148d0215e(void)

void FUN_148d0215e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_14589206c(param_1);
  return;
}



// FUNCTION 148d0217a FUN_148d0217a body=45 status=ok
// SIG undefined FUN_148d0217a(void)

undefined1 FUN_148d0217a(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140ed89ca(*(undefined8 *)(param_1 + 0x110));
  if (cVar1 != '\0') {
    return 2;
  }
  uVar2 = FUN_1489a06fe(param_1);
  return uVar2;
}



// FUNCTION 148d021a8 FUN_148d021a8 body=167 status=ok
// SIG undefined FUN_148d021a8(void)

void FUN_148d021a8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x43d8) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x4208), plVar3 != (longlong *)0x0)) {
    uVar1 = FUN_1407ca880();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar1);
    if (plVar3 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar1);
      if (plVar4 != (longlong *)0x0 && plVar3 != plVar4) {
        lVar2 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0xa8);
        if (lVar2 != 0) {
          uVar1 = FUN_140963a30(*(longlong *)(param_1 + 0x43d8) + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000148d0224c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x28))(plVar4,uVar1,*(code **)(*plVar4 + 0x28));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 148d02250 FUN_148d02250 body=96 status=ok
// SIG undefined FUN_148d02250(void)

ulonglong FUN_148d02250(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  
  cVar2 = FUN_1489a09a2();
  if (cVar2 == '\0') {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xa8);
    uVar5 = (undefined7)((ulonglong)param_1 >> 8);
    uVar4 = CONCAT71(uVar5,1);
    if (lVar1 != 0) {
      lVar3 = FUN_144a2f878();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar4 = CONCAT71(uVar5,*(char *)(lVar1 + 0x5d30) != '\x01');
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 148d022b0 FUN_148d022b0 body=26 status=ok
// SIG undefined FUN_148d022b0(void)

void FUN_148d022b0(undefined8 param_1)

{
  FUN_1489a0b68();
  FUN_148d022ca(param_1);
  return;
}



// FUNCTION 148d022ca FUN_148d022ca body=350 status=ok
// SIG undefined FUN_148d022ca(void)

void FUN_148d022ca(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar1 = *(longlong **)(&DAT_00001ce8 + *(longlong *)(param_1 + 0x110));
  if (plVar1 != (longlong *)0x0) {
    lVar4 = FUN_144a2f878();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
         lVar4 + 0x30)) && ((char)plVar1[0x2f] == '\x03')) {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0xb0);
      if (((((lVar4 == 0) && (lVar4 = FUN_1448abda6(*(longlong *)(param_1 + 0x110)), lVar4 == 0)) ||
           ((lVar4 = FUN_14494016c(lVar4,1,1), lVar4 == 0 ||
            ((lVar2 = *(longlong *)(lVar4 + 0x410), lVar2 == 0 ||
             (lVar5 = FUN_1411311bc(), lVar5 == 0)))))) ||
          (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
         ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
           lVar5 + 0x30 || (lVar2 = *(longlong *)(lVar4 + 0x410), lVar2 == 0)))) {
        plVar6 = (longlong *)FUN_1411311bc();
        lVar4 = plVar6[0x22];
      }
      else {
        lVar5 = FUN_1411311bc();
        if (((lVar5 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar5 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(lVar4 + 0x410);
        }
        lVar4 = plVar6[0x22];
      }
      if (lVar4 == 0) {
        (**(code **)(*plVar6 + 1000))(plVar6);
        lVar4 = plVar6[0x22];
      }
      cVar3 = FUN_1487bce18(plVar1);
      if (lVar4 != 0 && cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000148d02401. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x510))(plVar1,lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d02428 FUN_148d02428 body=90 status=ok
// SIG undefined FUN_148d02428(void)

void FUN_148d02428(longlong param_1)

{
  if (*(char *)(param_1 + 0x10c) == '\x03') {
    *(undefined1 *)(param_1 + 0x10c) = 1;
    FUN_1489a0878(param_1);
    *(undefined1 *)(param_1 + 0x10c) = 3;
  }
  else {
    if (*(char *)(param_1 + 0x10c) != '\x04') {
      FUN_1489a0878(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x10c) = 1;
    FUN_1489a0878(param_1);
    *(undefined1 *)(param_1 + 0x10c) = 4;
  }
  return;
}



// FUNCTION 148d02488 FUN_148d02488 body=28 status=ok
// SIG undefined FUN_148d02488(void)

void FUN_148d02488(longlong *param_1)

{
  FUN_1489a0512();
                    /* WARNING: Could not recover jumptable at 0x000148d024a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}



// FUNCTION 148d024d0 FUN_148d024d0 body=60 status=ok
// SIG undefined FUN_148d024d0(void)

void FUN_148d024d0(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_14593e65c(param_1);
  *param_1 = &PTR_FUN_14b964cf0;
  param_1[0x2d] = 0x4234000042480000;
  param_1[0x2e] = 0x3f34fdf442aa0000;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return;
}



// FUNCTION 148d02518 FUN_148d02518 body=1355 status=ok
// SIG undefined FUN_148d02518(void)

double * FUN_148d02518(longlong param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  double *pdVar13;
  longlong lVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  undefined1 auStack_108 [40];
  float local_e0;
  float local_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    pdVar13 = (double *)&DAT_14c846480;
  }
  else {
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
    pdVar13 = (double *)&DAT_14c846480;
    if (lVar14 != 0) {
      pdVar13 = (double *)(lVar14 + 0x240);
    }
  }
  dVar10 = pdVar13[4];
  dVar11 = pdVar13[5];
  dVar1 = pdVar13[2];
  dVar2 = *pdVar13;
  dVar3 = pdVar13[1];
  dVar4 = pdVar13[3];
  dVar5 = pdVar13[6];
  FUN_1401c9a0e(param_1 + 0x128,&local_d8,&DAT_14c8462c0);
  dVar19 = dVar3 * local_c8 - local_d0 * dVar1;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar2 * local_d0 - local_d8 * dVar3;
  dVar20 = dVar20 + dVar20;
  dVar18 = dVar1 * local_d8 - local_c8 * dVar2;
  dVar18 = dVar18 + dVar18;
  dVar7 = (dVar2 * dVar18 - dVar19 * dVar3) + dVar4 * dVar20 + local_c8;
  dVar2 = (dVar1 * dVar19 - dVar20 * dVar2) + dVar4 * dVar18 + local_d0;
  dVar1 = (dVar3 * dVar20 - dVar18 * dVar1) + dVar4 * dVar19 + local_d8;
  lVar14 = *(longlong *)(param_3 + 0x1c8);
  if (lVar14 == 0) {
    pdVar13 = (double *)&DAT_14c8464e0;
    uVar15 = SUB84(DAT_14c8464f0,0);
    uVar17 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar15 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
    uVar17 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
    pdVar13 = (double *)(lVar14 + 0x260);
  }
  dVar5 = (double)CONCAT44(uVar17,uVar15) - dVar5;
  dVar19 = (dVar5 * dVar7 + (*pdVar13 - dVar10) * dVar1 + dVar2 * (pdVar13[1] - dVar11)) /
           (dVar7 * dVar7 + dVar1 * dVar1 + dVar2 * dVar2);
  dVar3 = dVar7 * dVar19;
  dVar4 = dVar2 * dVar19;
  dVar19 = dVar19 * dVar1;
  dVar20 = (pdVar13[1] - dVar11) - dVar4;
  dVar18 = (*pdVar13 - dVar10) - dVar19;
  dVar5 = dVar5 - dVar3;
  fVar23 = (float)SQRT(dVar3 * dVar3 + dVar19 * dVar19 + dVar4 * dVar4);
  fVar22 = (float)SQRT(dVar5 * dVar5 + dVar18 * dVar18 + dVar20 * dVar20);
  if (fVar23 <= *(float *)(param_1 + 0x140)) {
    bVar6 = fVar22 <= *(float *)(param_1 + 0x260);
  }
  else {
    bVar6 = false;
  }
  if ((*(char *)(param_1 + 0x274) != '\0') || (fVar16 = 0.0, dVar5 = 1.0, bVar6)) {
    lVar14 = FUN_1401e2d36(param_1 + 0x148);
    if (lVar14 == 0) {
      fVar16 = 0.0;
    }
    else {
      local_dc = 0.0;
      local_e0 = 0.0;
      FUN_140784c10(lVar14,&local_dc,&local_e0);
      if (0.0 <= local_dc) {
        local_dc = 0.0;
      }
      fVar16 = *(float *)(param_1 + 0x140);
      fVar23 = (float)(~-(uint)(1e-08 < ABS(fVar16)) & -(uint)(fVar16 <= fVar23) & 0x3f800000 |
                      (uint)(fVar23 / fVar16) & -(uint)(1e-08 < ABS(fVar16)));
      auVar21 = ZEXT416((uint)fVar23);
      if (1.0 <= fVar23) {
        auVar21 = ZEXT416(0x3f800000);
      }
      if (auVar21._0_4_ <= 0.0) {
        auVar8._12_4_ = 0;
        auVar8._0_12_ = auVar21._4_12_;
        auVar21 = auVar8 << 0x20;
      }
      fVar16 = (float)FUN_1448c9f94(lVar14,(local_e0 - local_dc) * auVar21._0_4_ + local_dc);
    }
    lVar14 = FUN_1401e2d36(param_1 + 0x1d8);
    dVar5 = 1.0;
    if (lVar14 != 0) {
      local_dc = 0.0;
      local_e0 = 0.0;
      FUN_140784c10(lVar14,&local_dc,&local_e0);
      if (0.0 <= local_dc) {
        local_dc = 0.0;
      }
      fVar23 = *(float *)(param_1 + 0x260);
      fVar22 = (float)(~-(uint)(1e-08 < ABS(fVar23)) & -(uint)(fVar23 <= fVar22) & 0x3f800000 |
                      (uint)(fVar22 / fVar23) & -(uint)(1e-08 < ABS(fVar23)));
      auVar21 = ZEXT416((uint)fVar22);
      if (1.0 <= fVar22) {
        auVar21 = ZEXT416(0x3f800000);
      }
      if (auVar21._0_4_ <= 0.0) {
        auVar9._12_4_ = 0;
        auVar9._0_12_ = auVar21._4_12_;
        auVar21 = auVar9 << 0x20;
      }
      fVar22 = (float)FUN_1448c9f94(lVar14,(local_e0 - local_dc) * auVar21._0_4_ + local_dc);
      dVar5 = (double)fVar22;
    }
  }
  if (0.0 <= (float)(dVar3 * dVar7 + dVar19 * dVar1 + dVar2 * dVar4)) {
    dVar3 = (double)*(float *)(param_1 + 0x1d0);
    dVar4 = (double)fVar16;
    *param_2 = dVar1 * dVar3 * dVar4 * dVar5;
    param_2[1] = dVar2 * dVar3 * dVar4 * dVar5;
    param_2[2] = dVar7 * dVar3 * dVar4 * dVar5;
  }
  else {
    param_2[2] = DAT_14c8464f0;
    uVar12 = DAT_14c8464e8._4_4_;
    uVar17 = (undefined4)DAT_14c8464e8;
    uVar15 = DAT_14c8464e0._4_4_;
    *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar15;
    *(undefined4 *)(param_2 + 1) = uVar17;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar12;
  }
  if ((local_c0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d02a64 FUN_148d02a64 body=699 status=ok
// SIG undefined FUN_148d02a64(void)

undefined4 * FUN_148d02a64(longlong param_1,undefined4 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    pdVar13 = (double *)&DAT_14c846480;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
    pdVar13 = (double *)&DAT_14c846480;
    if (lVar7 != 0) {
      pdVar13 = (double *)(lVar7 + 0x240);
    }
  }
  dVar1 = pdVar13[2];
  dVar2 = *pdVar13;
  dVar15 = pdVar13[1];
  dVar3 = pdVar13[3];
  dVar4 = pdVar13[6];
  dVar5 = pdVar13[5];
  dVar6 = pdVar13[4];
  FUN_1401c9a0e(param_1 + 0x128,&local_c8,&DAT_14c8462c0);
  dVar16 = dVar15 * local_b8 - local_c0 * dVar1;
  dVar16 = dVar16 + dVar16;
  dVar9 = dVar2 * local_c0 - local_c8 * dVar15;
  dVar9 = dVar9 + dVar9;
  dVar14 = dVar1 * local_c8 - local_b8 * dVar2;
  dVar14 = dVar14 + dVar14;
  dVar8 = (dVar2 * dVar14 - dVar16 * dVar15) + dVar3 * dVar9 + local_b8;
  dVar2 = (dVar1 * dVar16 - dVar9 * dVar2) + dVar3 * dVar14 + local_c0;
  dVar1 = (dVar15 * dVar9 - dVar14 * dVar1) + dVar3 * dVar16 + local_c8;
  dVar15 = ((param_3[2] - dVar4) * dVar8 + (*param_3 - dVar6) * dVar1 + (param_3[1] - dVar5) * dVar2
           ) / (dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2);
  local_e0 = dVar15 * dVar1;
  local_d8 = dVar2 * dVar15;
  local_d0 = dVar8 * dVar15;
  pdVar13 = (double *)&DAT_14c8464e0;
  if (0.0 < (float)(dVar8 * dVar15 * dVar8 + dVar15 * dVar1 * dVar1 + dVar2 * dVar15 * dVar2)) {
    pdVar13 = &local_e0;
  }
  *(double *)(param_2 + 4) = pdVar13[2];
  uVar10 = *(undefined4 *)((longlong)pdVar13 + 4);
  uVar11 = *(undefined4 *)(pdVar13 + 1);
  uVar12 = *(undefined4 *)((longlong)pdVar13 + 0xc);
  *param_2 = *(undefined4 *)pdVar13;
  param_2[1] = uVar10;
  param_2[2] = uVar11;
  param_2[3] = uVar12;
  if ((local_b0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d02d20 FUN_148d02d20 body=227 status=ok
// SIG undefined FUN_148d02d20(void)

void FUN_148d02d20(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != 0) {
    lVar3 = FUN_148d02e18(param_3);
    if (lVar3 != 0) {
      if ((longlong)*(int *)(param_1 + 0x288) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x280);
        lVar5 = (longlong)*(int *)(param_1 + 0x288) * 8;
        do {
          lVar5 = lVar5 + -8;
          cVar2 = FUN_148d0a624(lVar4,lVar3);
          if (cVar2 != '\0') break;
          lVar4 = lVar4 + 8;
        } while (lVar5 != 0);
      }
      local_30 = 0;
      FUN_14485c47a(&local_30,lVar3);
      iVar1 = *(int *)(param_1 + 0x288);
      *(uint *)(param_1 + 0x288) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x28c) < iVar1 + 1U) {
        FUN_148d0a69c(param_1 + 0x280,iVar1);
      }
      *(undefined8 *)(*(longlong *)(param_1 + 0x280) + (longlong)iVar1 * 8) = local_30;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d02e18 FUN_148d02e18 body=102 status=ok
// SIG undefined FUN_148d02e18(void)

void FUN_148d02e18(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14016cc74();
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



// FUNCTION 148d02e80 FUN_148d02e80 body=254 status=ok
// SIG undefined FUN_148d02e80(void)

void FUN_148d02e80(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar3 = 0;
  bVar6 = false;
  do {
    lVar5 = lVar3 * 8;
    while( true ) {
      cVar1 = FUN_148d0a722(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
      if (cVar1 != '\0') break;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 8;
      if (iVar2 <= lVar3) {
        if (!bVar6) {
          return;
        }
        goto LAB_148d02f68;
      }
    }
    do {
      if (iVar2 - 1U != (uint)lVar3) {
        iVar4 = ~(uint)lVar3 + iVar2;
        if (0 < iVar4) {
          iVar4 = 1;
        }
        memmove((void *)(*param_1 + lVar3 * 8),(void *)(*param_1 + (longlong)(iVar2 - iVar4) * 8),
                (longlong)iVar4 << 3);
        iVar2 = (int)param_1[1];
      }
      *(int *)(param_1 + 1) = iVar2 + -1;
      if (iVar2 + -1 <= lVar3) goto LAB_148d02f68;
      cVar1 = FUN_148d0a722(*param_1 + lVar5,param_2);
      iVar2 = (int)param_1[1];
    } while (cVar1 != '\0');
    lVar3 = lVar3 + 1;
    bVar6 = true;
  } while (lVar3 < iVar2);
LAB_148d02f68:
  FUN_148d0a758(param_1);
  return;
}



// FUNCTION 148d02f84 FUN_148d02f84 body=54 status=ok
// SIG undefined FUN_148d02f84(void)

void FUN_148d02f84(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_1470e4986();
  lVar1 = FUN_1470e53c2(param_2,&DAT_14cbc62e0);
  FUN_144983130(lVar1 + 8,param_1 + 0x80);
  return;
}



// FUNCTION 148d02fba FUN_148d02fba body=314 status=ok
// SIG undefined FUN_148d02fba(void)

void FUN_148d02fba(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 ***pppuVar4;
  float fVar5;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined1 local_99;
  undefined1 local_98 [40];
  undefined4 local_70;
  undefined8 **local_68;
  longlong *local_60;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_143d73ab6();
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_99 = 2;
  local_a8 = FUN_144a7be76(param_1);
  FUN_144a7bec8(param_1,&local_68);
  local_98[0] = 0;
  local_70 = 0;
  FUN_144a7bf34(local_98,&local_68,&local_a8,&local_99);
  if (local_60 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0xb8,&local_68,local_98);
  fVar5 = (float)FUN_144a7ecd0(&local_68);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar4 = &local_68;
    if (0x18 < local_50) {
      pppuVar4 = (undefined8 ***)local_68;
    }
    (*pcVar3)(pppuVar4);
  }
  if (0x18 < local_50) {
    FUN_1400020a8(local_68);
  }
  FUN_144a5ac3a(local_98);
  *(float *)(param_1 + 0x78) = fVar5 + *(float *)(param_1 + 0x54);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d030f6 FUN_148d030f6 body=58 status=ok
// SIG undefined FUN_148d030f6(void)

void FUN_148d030f6(longlong param_1)

{
  char cVar1;
  float fVar2;
  
  FUN_143d739e4();
  cVar1 = FUN_1488967f0(param_1);
  if (cVar1 == '\0') {
    fVar2 = (float)FUN_141236616(param_1);
    if (fVar2 < *(float *)(param_1 + 0x78)) {
      return;
    }
  }
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 148d03136 FUN_148d03136 body=70 status=ok
// SIG undefined FUN_148d03136(void)

void FUN_148d03136(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  FUN_148d02fba();
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar3 = FUN_144729dda(param_1 + 0x70);
  if (cVar3 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x70);
    FUN_1440f3626(uVar2,*(undefined4 *)(lVar1 + 0xf0));
    return;
  }
  return;
}



// FUNCTION 148d03182 FUN_148d03182 body=123 status=ok
// SIG undefined FUN_148d03182(void)

void FUN_148d03182(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  FUN_148d02fba();
  lVar1 = *(longlong *)(param_1 + 0x48);
  cVar2 = FUN_144729dda(param_1 + 0x70);
  if (cVar2 == '\0') {
    return;
  }
  lVar3 = FUN_14479d2ce(param_1 + 0x70);
  if ((longlong)*(int *)(lVar3 + 0x4d0) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    plVar5 = *(longlong **)(lVar3 + 0x4c8);
    uVar4 = 0xffffffff;
    uVar6 = 0;
    do {
      if (*plVar5 == *(longlong *)(lVar1 + 0xf0)) {
        uVar4 = uVar6 & 0xffffffff;
      }
      uVar6 = uVar6 + 1;
      plVar5 = plVar5 + 0x10;
    } while ((longlong)*(int *)(lVar3 + 0x4d0) != uVar6);
  }
  FUN_1440f3626(lVar3,uVar4);
  return;
}



// FUNCTION 148d031fe FUN_148d031fe body=61 status=ok
// SIG undefined FUN_148d031fe(void)

void FUN_148d031fe(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if ((longlong)*(int *)(param_1 + 0x4d0) < 1) {
    uVar1 = 0xffffffff;
  }
  else {
    plVar2 = *(longlong **)(param_1 + 0x4c8);
    uVar1 = 0xffffffff;
    uVar3 = 0;
    do {
      if (*plVar2 == *param_2) {
        uVar1 = uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      plVar2 = plVar2 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x4d0) != uVar3);
  }
  FUN_1440f3626(param_1,uVar1);
  return;
}



// FUNCTION 148d03242 FUN_148d03242 body=374 status=ok
// SIG undefined FUN_148d03242(void)

void FUN_148d03242(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  longlong lVar5;
  undefined8 ***pppuVar6;
  float fVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [40];
  undefined4 local_80;
  undefined8 **local_78;
  longlong *local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_148d02fba();
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_a9 = 2;
  local_b8 = FUN_144a7be76(param_1);
  FUN_144a7bec8(param_1,&local_78);
  local_a8[0] = 0;
  local_80 = 0;
  FUN_144a7bf34(local_a8,&local_78,&local_b8,&local_a9);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  FUN_1447c3578(lVar2 + 0xb8,&local_78,local_a8);
  fVar7 = (float)FUN_144a7ecd0(&local_78);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar3 != (code *)0x0) {
    pppuVar6 = &local_78;
    if (0x18 < local_60) {
      pppuVar6 = (undefined8 ***)local_78;
    }
    (*pcVar3)(pppuVar6);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78);
  }
  FUN_144a5ac3a(local_a8);
  *(float *)(param_1 + 0x78) = fVar7 + *(float *)(param_1 + 0x54);
  cVar4 = FUN_144729dda(param_1 + 0x70);
  if (cVar4 != '\0') {
    lVar5 = FUN_14479d2ce(param_1 + 0x70);
    if (*(char *)(lVar5 + 0x178) == '\x03') {
      FUN_148c02204(lVar5,lVar2 + 0xf0);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d033ba FUN_148d033ba body=263 status=ok
// SIG undefined FUN_148d033ba(void)

void FUN_148d033ba(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if ((((param_2 == '\x01') && (*(char *)(param_1 + 0x178) == '\x03')) &&
      (lVar1 = FUN_1447210f0(param_1), lVar1 != 0)) && (0 < *(int *)(lVar1 + 0x238))) {
    lVar6 = 0;
    do {
      lVar2 = FUN_14479d2ce(lVar6 * 8 + *(longlong *)(lVar1 + 0x230));
      if (lVar2 != 0) {
        lVar3 = FUN_144a5dd5e();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           ((*(longlong *)(lVar2 + 0xf40) != 0 && (0 < (longlong)*(int *)(param_1 + 0x4e0))))) {
          lVar3 = 0;
          lVar4 = 0xb0;
          iVar5 = 0;
          do {
            if (*(char *)(*(longlong *)(param_1 + 0x4d8) + lVar4) == '\0') {
              if (iVar5 == (int)lVar6) {
                lVar3 = *(longlong *)(param_1 + 0x4d8) - lVar3;
                if (lVar3 != 0) {
                  FUN_148d034c2(param_1,*(longlong *)(lVar2 + 0xf40),lVar3 + 0x10);
                }
                break;
              }
              iVar5 = iVar5 + 1;
            }
            lVar3 = lVar3 + -0xc0;
            lVar4 = lVar4 + 0xc0;
          } while ((longlong)*(int *)(param_1 + 0x4e0) * 0xc0 + lVar3 != 0);
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(lVar1 + 0x238));
  }
  return;
}



// FUNCTION 148d034c2 FUN_148d034c2 body=1982 status=ok
// SIG undefined FUN_148d034c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148d034c2(longlong param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  double *pdVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar23;
  undefined1 auVar22 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  undefined1 auStack_2c8 [32];
  undefined1 local_2a8;
  undefined1 local_2a0;
  undefined1 local_298;
  double local_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  double dVar2;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if (param_2 != 0) {
    local_290 = 0.0;
    FUN_14485c47a(&local_290);
    local_168 = local_290;
    iVar6 = FUN_148d0b2f8(param_1 + 0x4f8,(uint)((ulonglong)local_290 >> 0x20) ^ SUB84(local_290,0))
    ;
    if (iVar6 == -1) {
      puVar11 = (undefined8 *)(*(longlong *)(param_2 + 0x1c8) + 0x240);
      if (*(longlong *)(param_2 + 0x1c8) == 0) {
        puVar11 = &DAT_14c846480;
      }
      local_168 = 0.0;
      FUN_14485c47a(&local_168,param_2);
      puVar7 = (undefined8 *)
               FUN_148d0b3b2(param_1 + 0x4f8,
                             (uint)((ulonglong)local_168 >> 0x20) ^ SUB84(local_168,0),&local_168);
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar7 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar7 = puVar7 + 1;
      }
      local_2a0 = 1;
      local_2a8 = 1;
      local_298 = 0;
      lVar10 = param_2;
      FUN_1459bb9a8(param_2,param_1,0,1);
      auVar28 = _DAT_149934d80;
      lVar9 = *(longlong *)(param_1 + 0x1c8);
      pdVar12 = (double *)(lVar9 + 0x240);
      if (lVar9 == 0) {
        pdVar12 = (double *)&DAT_14c846480;
      }
      auVar17 = *(undefined1 (*) [16])(pdVar12 + 8);
      dVar20 = auVar17._0_8_;
      dVar15 = auVar17._8_8_;
      dVar23 = SUB168(*(undefined1 (*) [16])(pdVar12 + 10),0);
      auVar18 = *(undefined1 (*) [16])(param_3 + 8);
      dVar1 = auVar18._0_8_;
      dVar31 = auVar18._8_8_;
      dVar2 = SUB168(*(undefined1 (*) [16])(param_3 + 10),0);
      auVar17 = minpd(auVar18,auVar17);
      auVar21 = minpd(*(undefined1 (*) [16])(param_3 + 10),*(undefined1 (*) [16])(pdVar12 + 10));
      auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
      auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
      iVar6 = movmskpd((int)lVar9,auVar18);
      auVar17._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
      auVar17._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
      uVar8 = movmskpd((int)lVar10,auVar17);
      if ((uVar8 & 0x3fffffff) == 0 && iVar6 == 0) {
        dVar4 = *param_3;
        dVar19 = param_3[1];
        dVar24 = param_3[2];
        dVar25 = param_3[3];
        dVar26 = *pdVar12;
        dVar27 = pdVar12[1];
        dVar5 = pdVar12[2];
        dVar1 = pdVar12[3];
        dVar2 = pdVar12[3];
        dVar31 = pdVar12[1];
        dVar16 = pdVar12[1];
        dVar3 = pdVar12[2];
        dVar30 = pdVar12[2];
        local_168 = dVar19 * dVar3 * -1.0 +
                    dVar24 * dVar31 + dVar25 * *pdVar12 * 1.0 + dVar4 * dVar1;
        dStack_160 = dVar4 * dVar30 * 1.0 +
                     dVar25 * dVar16 + dVar24 * *pdVar12 * -1.0 + dVar19 * dVar2;
        local_158._0_8_ =
             dVar25 * dVar3 * 1.0 + ((*pdVar12 * dVar19 * 1.0 + dVar24 * dVar1) - dVar4 * dVar31);
        local_158._8_8_ =
             dVar24 * dVar30 * -1.0 + ((*pdVar12 * dVar4 * -1.0 + dVar25 * dVar2) - dVar19 * dVar16)
        ;
        dVar20 = dVar20 * param_3[4];
        dVar15 = dVar15 * param_3[5];
        dVar23 = dVar23 * param_3[6];
        dVar16 = dVar15 * dVar26 - dVar27 * dVar20;
        dVar30 = dVar23 * dVar27 - dVar5 * dVar15;
        dVar31 = dVar20 * dVar5 - dVar26 * dVar23;
        dVar30 = dVar30 + dVar30;
        dVar31 = dVar31 + dVar31;
        dVar16 = dVar16 + dVar16;
        local_108 = (dVar16 * dVar27 - dVar5 * dVar31) + dVar1 * dVar30 + dVar20 + pdVar12[4];
        dStack_100 = (dVar30 * dVar5 - dVar16 * dVar26) + dVar2 * dVar31 + dVar15 + pdVar12[5];
        local_f8 = (dVar31 * dVar26 - dVar27 * dVar30) + dVar1 * dVar16 + dVar23 + pdVar12[6];
      }
      else {
        dVar30 = *pdVar12;
        dVar3 = pdVar12[1];
        dVar4 = pdVar12[2];
        dVar19 = dVar3 + dVar3;
        dVar24 = dVar4 + dVar4;
        dVar16 = dVar30 * (dVar30 + dVar30);
        dStack_1c0 = (DAT_149934d80._8_8_ - (dVar4 * dVar24 + dVar16)) * dVar15;
        local_198 = (1.0 - (dVar16 + dVar3 * dVar19)) * dVar23;
        dVar16 = pdVar12[3];
        dVar25 = dVar24 * dVar16;
        dVar26 = (dVar30 + dVar30) * pdVar12[3];
        dVar16 = dVar19 * dVar16;
        local_1c8 = (dVar19 * dVar30 - dVar25) * dVar15;
        dStack_1a0 = (dVar24 * dVar3 - dVar26) * dVar23;
        dVar30 = (dVar19 * dVar30 + dVar25) * dVar20;
        local_1b8 = (dVar24 * dVar3 + dVar26) * dVar15;
        local_1a8 = (dVar16 + *pdVar12 * dVar24) * dVar23;
        local_1d8 = (*pdVar12 * dVar24 - dVar16) * dVar20;
        local_1e8._8_4_ = SUB84(dVar30,0);
        local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar4 * dVar24 + dVar3 * dVar19)) * dVar20;
        local_1e8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        uStack_1d0 = 0;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = pdVar12[4];
        dStack_180 = pdVar12[5];
        local_178 = pdVar12[6];
        uStack_170 = 0x3ff0000000000000;
        dVar3 = *param_3;
        dVar4 = param_3[1];
        dVar19 = param_3[2];
        dVar24 = dVar4 + dVar4;
        dVar25 = dVar19 + dVar19;
        dVar30 = dVar3 * (dVar3 + dVar3);
        dVar16 = param_3[3];
        dVar26 = dVar25 * dVar16;
        dVar27 = (dVar3 + dVar3) * param_3[3];
        dVar16 = dVar24 * dVar16;
        local_248 = (dVar24 * dVar3 - dVar26) * dVar31;
        dStack_220 = (dVar25 * dVar4 - dVar27) * dVar2;
        local_268 = ((double)DAT_149934d80 - (dVar19 * dVar25 + dVar4 * dVar24)) * dVar1;
        dStack_240 = (DAT_149934d80._8_8_ - (dVar19 * dVar25 + dVar30)) * dVar31;
        dStack_260 = (dVar24 * dVar3 + dVar26) * dVar1;
        local_238 = (dVar25 * dVar4 + dVar27) * dVar31;
        local_228 = (dVar16 + *param_3 * dVar25) * dVar2;
        local_258 = (*param_3 * dVar25 - dVar16) * dVar1;
        uStack_250 = 0;
        uStack_230 = 0;
        local_218 = (1.0 - (dVar30 + dVar4 * dVar24)) * dVar2;
        uStack_210 = 0;
        local_208 = param_3[4];
        dStack_200 = param_3[5];
        local_1f8 = param_3[6];
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar21._8_8_ = -(ulonglong)(0.0 <= dVar15 * dVar31);
        auVar21._0_8_ = -(ulonglong)(0.0 <= dVar20 * dVar1);
        auVar17 = blendvpd(_DAT_149936790,auVar28,auVar21);
        uVar13 = -(ulonglong)(0.0 <= dVar23 * dVar2);
        dVar20 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
        dVar23 = auVar17._0_8_;
        dStack_160 = dStack_160 * dVar23;
        local_168 = local_168 * dVar23;
        local_158._0_8_ = (double)local_158._0_8_ * dVar23;
        dVar23 = auVar17._8_8_;
        local_138 = local_138 * dVar23;
        local_140 = local_140 * dVar23;
        local_148 = dVar23 * local_148;
        local_118 = local_118 * dVar20;
        local_120 = local_120 * dVar20;
        local_128 = dVar20 * local_128;
        FUN_14481fd10(&local_288,&local_168);
        dVar20 = local_278 * local_278 + local_288 * local_288;
        dVar23 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar22._0_8_ = dVar20 + dVar23;
        auVar22._8_8_ = dVar20 + dVar23;
        auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_);
        auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_);
        auVar17 = sqrtpd(auVar22,auVar22);
        auVar28 = divpd(auVar28,auVar17);
        auVar29._0_8_ = auVar28._0_8_ * local_278;
        auVar29._8_8_ = auVar28._8_8_ * dStack_270;
        local_168 = (double)((ulonglong)(local_288 * auVar28._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar22._0_8_));
        dStack_160 = (double)((ulonglong)(dStack_280 * auVar28._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar22._8_8_));
        local_158 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar29,auVar14);
      }
      FUN_1448052ee(&local_168,local_1e8);
      local_268 = local_108;
      dStack_260 = dStack_100;
      local_258 = local_f8;
      FUN_1487c1db0(param_2,&local_268,local_1e8);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d03c82 FUN_148d03c82 body=186 status=ok
// SIG undefined FUN_148d03c82(void)

void FUN_148d03c82(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_148d03d3e(param_1 + 0x4f8,&local_48);
  if ((longlong)(int)uStack_40 != 0) {
    lVar4 = (longlong)(int)uStack_40 << 3;
    lVar3 = local_48;
    do {
      cVar1 = FUN_144729dda(lVar3);
      if (cVar1 != '\0') {
        uVar2 = FUN_14479d2ce(lVar3);
        FUN_148d03fc8(param_1,uVar2,param_2);
      }
      lVar3 = lVar3 + 8;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  FUN_148d0af8e(param_1 + 0x4f8,0);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d03d3e FUN_148d03d3e body=647 status=ok
// SIG undefined FUN_148d03d3e(void)

undefined4 FUN_148d03d3e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_148b77020(param_2,0);
  }
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar3);
    }
    FUN_148d0a7f4(&local_88,uVar3);
    iVar2 = 1;
    if (3 < uVar3) {
      uVar3 = (uVar3 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((local_40 == 0) || (local_40 < iVar2)) {
      local_40 = iVar2;
      FUN_148d0a992();
    }
  }
  iVar2 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (-1 < iVar2) {
    if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
      FUN_148b77020(param_2);
    }
    local_a0 = param_1 + 2;
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    iStack_94 = 0;
    local_90 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_a8);
    }
    local_b8 = local_98;
    iStack_b4 = iStack_94;
    local_b0 = local_90;
    local_ac = local_8c;
    local_c8 = local_a8;
    local_c0 = local_a0;
    local_d0 = param_1;
    if (iStack_94 < (int)local_a0[3]) {
      do {
        local_a8 = *(undefined8 *)(*local_d0 + (longlong)iStack_b4 * 0x80);
        iVar2 = FUN_148d0ab4a(&local_88,(uint)((ulonglong)local_a8 >> 0x20) ^ (uint)local_a8,
                              &local_a8);
        if (iVar2 == -1) {
          lVar4 = (longlong)iStack_b4;
          lVar1 = *local_d0;
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_1489081e6(param_2,iVar2);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar4 * 0x80 + lVar1);
          FUN_148d0ac04(&local_88,&local_a8,(longlong)iStack_b4 * 0x80 + *local_d0);
        }
        local_b8 = local_b8 & ~local_c8._4_4_;
        FUN_1449c0562(&local_c8);
      } while (iStack_b4 < (int)local_c0[3]);
    }
    lVar1 = param_2[1];
    local_40 = 0;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_148d0af00(&local_88);
    if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
      return (int)lVar1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 148d03fc8 FUN_148d03fc8 body=423 status=ok
// SIG undefined FUN_148d03fc8(void)

void FUN_148d03fc8(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    plVar10 = (longlong *)(param_1 + 0x4f8);
    local_78 = 0;
    FUN_14485c47a(&local_78);
    local_c8 = local_78;
    iVar8 = FUN_148d0b2f8(plVar10,(uint)((ulonglong)local_78 >> 0x20) ^ (uint)local_78);
    if (iVar8 != -1) {
      local_80 = 0;
      FUN_14485c47a(&local_80,param_2);
      local_c8 = local_80;
      iVar8 = FUN_148d0b2f8(plVar10,(uint)((ulonglong)local_80 >> 0x20) ^ (uint)local_80);
      if (iVar8 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)iVar8 * 0x80 + *plVar10;
      }
      uVar2 = *(undefined8 *)(lVar9 + 0x10);
      uVar3 = *(undefined8 *)(lVar9 + 0x18);
      uVar4 = *(undefined8 *)(lVar9 + 0x20);
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      uVar6 = *(undefined8 *)(lVar9 + 0x30);
      uVar7 = *(undefined8 *)(lVar9 + 0x38);
      uVar1 = *(undefined8 *)(lVar9 + 0x40);
      local_88 = 0;
      FUN_14485c47a(&local_88,param_2);
      FUN_148d0b84c(plVar10,local_88);
      FUN_14117b5f2(param_2,1,1,1);
      if (param_3 != '\0') {
        local_c8 = uVar2;
        uStack_c0 = uVar3;
        local_b8 = uVar4;
        uStack_b0 = uVar5;
        FUN_1448052ee(&local_c8,local_a0);
        local_e8 = uVar6;
        uStack_e0 = uVar7;
        local_d8 = uVar1;
        FUN_1487c1db0(param_2,&local_e8,local_a0);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d04170 FUN_148d04170 body=438 status=ok
// SIG undefined FUN_148d04170(void)

void FUN_148d04170(longlong param_1)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < *(int *)(param_1 + 0x4d0)) {
    lVar10 = 0x70;
    bVar8 = false;
    uVar11 = 0;
    do {
      plVar5 = (longlong *)FUN_14479d2ce(*(longlong *)(param_1 + 0x4c8) + lVar10);
      if (plVar5 != (longlong *)0x0) {
        bVar1 = *(byte *)((longlong)plVar5 + 0x9e);
        bVar12 = uVar11 == *(uint *)(param_1 + 0x4f0);
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),bVar12);
        (**(code **)(*plVar5 + 0x2b8))(plVar5,unaff_RBX & 0xffffffff,0);
        bVar8 = (bool)(bVar8 | ((bVar1 & 0x10) == 0 && bVar12));
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x80;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x4d0));
    if (bVar8) {
      plVar5 = (longlong *)(param_1 + 0x548);
      lVar10 = param_1 + 0x558;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = lVar10;
      if (*(int *)(param_1 + 0x570) == 0) {
        iVar7 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar7 = *(int *)(param_1 + 0x570);
      }
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar2 = local_68;
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar4 = local_68._4_4_;
      local_80 = plVar5;
      if ((local_68._4_4_ != iVar7) || (local_68 = uVar2, uStack_50 != lVar10)) {
        do {
          local_68 = uVar2;
          lVar9 = (longlong)iVar4 * 0x14 + *local_80;
          cVar3 = FUN_144729dda(lVar9);
          if (cVar3 != '\0') {
            lVar6 = FUN_14479d2ce(lVar9);
            if (*(longlong *)(lVar6 + 0x448) != 0) {
              lVar9 = FUN_14479d2ce(lVar9);
              (**(code **)(**(longlong **)(lVar9 + 0x448) + 0x820))();
            }
          }
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar4 = local_68._4_4_;
          uVar2 = local_68;
        } while (local_80 != plVar5 ||
                 (CONCAT44(uStack_6c,uStack_70) != lVar10 || local_68._4_4_ != iVar7));
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d04342 FUN_148d04342 body=60 status=ok
// SIG undefined FUN_148d04342(void)

void FUN_148d04342(longlong param_1)

{
  FUN_1405f1eac();
  thunk_FUN_1405f85e0(param_1 + 0x3c0);
  FUN_1401b3e2a(param_1 + 0x598);
  *(undefined4 *)(param_1 + 0x4f0) = 0xffffffff;
  FUN_148d04170(param_1);
  return;
}



// FUNCTION 148d0437e FUN_148d0437e body=73 status=ok
// SIG undefined FUN_148d0437e(void)

void FUN_148d0437e(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_1406335ea(param_1 + 0x598);
  uVar1 = FUN_1447210f0(param_1);
  cVar2 = FUN_1415d8652(param_2,uVar1);
  if (cVar2 == '\0') {
    thunk_FUN_140633cb6(param_1 + 0x3c0);
  }
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 148d043ce FUN_148d043ce body=33 status=ok
// SIG undefined FUN_148d043ce(void)

void FUN_148d043ce(longlong param_1)

{
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x3c0);
  return;
}



// FUNCTION 148d043fc FUN_148d043fc body=310 status=ok
// SIG undefined FUN_148d043fc(void)

void FUN_148d043fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140c2c6fa();
  local_48 = 0;
  local_58 = 0;
  uStack_50 = uStack_50 & 0xffffffffffffff00;
  FUN_1446f470e(&local_60,L"GbxActorData",1);
  uVar1 = FUN_1459f3116();
  FUN_1459f3116();
  uVar1 = FUN_140f1fabf(uVar1,local_60);
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"CurrentCameraIndex",1);
  uVar1 = FUN_1459f3116();
  FUN_1459f3116();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  FUN_1446f470e(&local_58,L"FactsConduit",1);
  uVar1 = FUN_1459f3116();
  FUN_1459f3116();
  uVar1 = FUN_140f1fabf(uVar1,local_58);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FUN_140f1fa23(uVar1,param_2,&local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d0453a FUN_148d0453a body=472 status=ok
// SIG undefined FUN_148d0453a(void)

longlong * FUN_148d0453a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar8 = (longlong)*(int *)(param_1 + 0x98) * 0x28;
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x90) + 8);
    do {
      plVar1 = plVar7 + -1;
      lVar5 = FUN_14479d2ce(plVar1);
      if (lVar5 == 0) {
        if (*plVar7 != 0) {
          lVar5 = FUN_140007850();
          cVar4 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar5 == 0) || (cVar4 == '\0')) {
            FUN_14485c47a(plVar1,lVar5);
            if (lVar5 == 0) goto LAB_148d046ac;
          }
          else {
            uVar2 = *(uint *)(lVar5 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(plVar1,lVar5);
            }
          }
          if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_148d0458b;
        }
      }
      else {
LAB_148d0458b:
        lVar6 = FUN_144a797b2();
        if ((((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
            (lVar6 = FUN_140789e1e(), lVar6 != 0)) &&
           (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) {
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar9 = lVar5;
          }
          if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar9 == 0) goto LAB_148d046ac;
          }
          else {
            FUN_1456cec3c(lVar9);
          }
          lVar6 = FUN_140789e1e();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            iVar3 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar3 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
              FUN_140789f3e(param_2,iVar3);
            }
            *(longlong *)(*param_2 + (longlong)iVar3 * 8) = lVar5;
            if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar5);
            }
          }
        }
      }
LAB_148d046ac:
      plVar7 = plVar7 + 5;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  return param_2;
}



// FUNCTION 148d04734 FUN_148d04734 body=160 status=ok
// SIG undefined FUN_148d04734(void)

void FUN_148d04734(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + -0x3a0) & 0x10) == 0) {
    FUN_1406c9d00(param_1 + 0x18,local_88);
    FUN_14031575e(local_70,local_88);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d047f2 FUN_148d047f2 body=109 status=ok
// SIG undefined FUN_148d047f2(void)

undefined8 FUN_148d047f2(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 != 0) {
    lVar2 = FUN_1459f3116();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (-1 < (int)param_2)) && ((int)param_2 < *(int *)(lVar1 + 0x4d0)))
    {
      uVar3 = FUN_14479d2ce((ulonglong)param_2 * 0x80 + *(longlong *)(lVar1 + 0x4c8) + 0x70);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 148d04860 FUN_148d04860 body=93 status=ok
// SIG undefined FUN_148d04860(void)

undefined8 * FUN_148d04860(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 1) = 0x41200000;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x40000000;
  FUN_14130828c(&local_20,0x41a00000);
  *param_1 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d048be FUN_148d048be body=577 status=ok
// SIG undefined FUN_148d048be(void)

void FUN_148d048be(float *param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = ABS(param_3);
  if (1e-08 < fVar2) {
    fVar1 = (float)(-(uint)(0.0 < param_3) & 0x3f800000 |
                   ~-(uint)(0.0 < param_3) & -(uint)(param_3 < 0.0) & 0xbf800000);
    fVar4 = *param_1 - param_1[1];
    if (0.0 <= param_3) {
      fVar4 = *param_1 + param_1[1];
    }
    if (fVar1 * fVar4 < (param_2 + param_3) * fVar1) {
      fVar3 = fVar4 - param_2;
      if (1e-08 < ABS(fVar3)) {
        fVar5 = (float)(-(uint)(0.0 < fVar3) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar3) & -(uint)(fVar3 < 0.0) & 0xbf800000);
        if ((fVar5 == fVar1) && (!NAN(fVar5) && !NAN(fVar1))) {
          param_2 = param_2 + fVar3;
          param_3 = param_3 - fVar3;
          fVar2 = ABS(param_3);
        }
      }
      if (1e-08 < fVar2) {
        fVar2 = (float)(-(uint)(0.0 < param_3) & 0x3f800000 |
                       ~-(uint)(0.0 < param_3) & -(uint)(param_3 < 0.0) & 0xbf800000);
        if ((fVar2 == fVar1) && (!NAN(fVar2) && !NAN(fVar1))) {
          param_3 = param_3 + param_2;
          if (180.0 <= param_3) {
            param_3 = 180.0;
          }
          if (param_3 <= -180.0) {
            param_3 = -180.0;
          }
          powf(ABS(fVar4 - param_3),param_1[3]);
        }
      }
    }
  }
  return;
}



// FUNCTION 148d04b00 FUN_148d04b00 body=13 status=ok
// SIG undefined FUN_148d04b00(void)

void FUN_148d04b00(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xd08) = param_2;
  FUN_146064870();
  return;
}



// FUNCTION 148d04b0e FUN_148d04b0e body=28 status=ok
// SIG undefined FUN_148d04b0e(void)

void FUN_148d04b0e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_145cbbd2c(param_1);
  return;
}



// FUNCTION 148d04b2a FUN_148d04b2a body=82 status=ok
// SIG undefined FUN_148d04b2a(void)

void FUN_148d04b2a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b964f20;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 4) = 0x40a00000;
  *(undefined1 *)(param_1 + 8) = 3;
  *(char *)(param_1 + 9) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return;
}



// FUNCTION 148d04b7c FUN_148d04b7c body=54 status=ok
// SIG undefined FUN_148d04b7c(void)

void FUN_148d04b7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b964f20;
  FUN_144a2da94(param_1 + 3);
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  return;
}



// FUNCTION 148d04bea FUN_148d04bea body=40 status=ok
// SIG undefined FUN_148d04bea(void)

undefined8 FUN_148d04bea(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145acd618(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148d04c56 FUN_148d04c56 body=40 status=ok
// SIG undefined FUN_148d04c56(void)

undefined8 FUN_148d04c56(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_145ad13d2(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_1470a31f0(lVar1 + 0x10);
  return uVar2;
}



// FUNCTION 148d04c8c FUN_148d04c8c body=33 status=ok
// SIG undefined FUN_148d04c8c(void)

void FUN_148d04c8c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b964fc0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



// FUNCTION 148d04cae FUN_148d04cae body=78 status=ok
// SIG undefined FUN_148d04cae(void)

void FUN_148d04cae(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b964fc0;
  FUN_148d0c3a2(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[3];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148d04cf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148d04cfc FUN_148d04cfc body=458 status=ok
// SIG undefined FUN_148d04cfc(void)

void FUN_148d04cfc(longlong param_1,longlong param_2,float param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  longlong lVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  
  iVar10 = *(int *)(param_1 + 0x28);
  if (0 < iVar10) {
    lVar9 = 0;
    lVar4 = 1;
    do {
      cVar3 = FUN_14069eaf4(*(longlong *)(param_1 + 0x20) + lVar9,param_2);
      iVar10 = *(int *)(param_1 + 0x28);
      if (cVar3 != '\0') break;
      lVar9 = lVar9 + 0x18;
      bVar2 = lVar4 < iVar10;
      lVar4 = lVar4 + 1;
    } while (bVar2);
    if (cVar3 != '\0') {
      return;
    }
  }
  *(uint *)(param_1 + 0x28) = iVar10 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar10 + 1U) {
    FUN_148d0c3d2((longlong *)(param_1 + 0x20),iVar10);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x18);
  *puVar1 = 0;
  FUN_14485c47a(puVar1,param_2);
  puVar1[1] = 0;
  puVar1[2] = 0;
  lVar4 = FUN_1447210f0(param_2);
  if ((lVar4 != 0) && (0 < *(int *)(lVar4 + 0x238))) {
    iVar10 = 0;
    lVar9 = 0;
    do {
      lVar5 = FUN_14479d2ce(*(longlong *)(lVar4 + 0x230) + lVar9);
      if (lVar5 != 0) {
        lVar6 = FUN_1449f3324();
        if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
           (*(longlong *)(lVar5 + 0x3d0) != 0)) {
          lVar6 = *(longlong *)(param_2 + 0x1c8);
          pdVar7 = (double *)&DAT_14c8464e0;
          dVar11 = DAT_14c8464f0;
          if (lVar6 != 0) {
            pdVar7 = (double *)(lVar6 + 0x260);
            dVar11 = *(double *)(lVar6 + 0x270);
          }
          lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x3d0) + 0x1c8);
          pdVar8 = (double *)&DAT_14c8464e0;
          dVar12 = DAT_14c8464f0;
          if (lVar6 != 0) {
            pdVar8 = (double *)(lVar6 + 0x260);
            dVar12 = *(double *)(lVar6 + 0x270);
          }
          if ((dVar11 - dVar12) * (dVar11 - dVar12) +
              (*pdVar7 - *pdVar8) * (*pdVar7 - *pdVar8) +
              (pdVar7[1] - pdVar8[1]) * (pdVar7[1] - pdVar8[1]) <= (double)(param_3 * param_3)) {
            FUN_148d04ec6(param_1,param_2,lVar5);
          }
        }
      }
      lVar9 = lVar9 + 8;
      iVar10 = iVar10 + 1;
    } while (iVar10 < *(int *)(lVar4 + 0x238));
  }
  return;
}



// FUNCTION 148d04ec6 FUN_148d04ec6 body=183 status=ok
// SIG undefined FUN_148d04ec6(void)

void FUN_148d04ec6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar4 = FUN_148d05004(param_1,param_3);
  if ((iVar4 == -1) && (0 < *(int *)(param_1 + 0x28))) {
    lVar5 = -0x10;
    lVar6 = 1;
    do {
      cVar3 = FUN_14069eaf4(*(longlong *)(param_1 + 0x20) + lVar5 + 0x10,param_2);
      lVar5 = lVar5 + 0x18;
      if (cVar3 != '\0') break;
      bVar2 = lVar6 < *(int *)(param_1 + 0x28);
      lVar6 = lVar6 + 1;
    } while (bVar2);
    if (cVar3 != '\0') {
      lVar6 = *(longlong *)(param_1 + 0x20);
      iVar4 = *(int *)(lVar6 + 8 + lVar5);
      *(uint *)(lVar6 + 8 + lVar5) = iVar4 + 1U;
      if (*(uint *)(lVar6 + 0xc + lVar5) < iVar4 + 1U) {
        FUN_14577298c(lVar6 + lVar5,iVar4);
      }
      puVar1 = (undefined8 *)(*(longlong *)(lVar6 + lVar5) + (longlong)iVar4 * 8);
      *puVar1 = 0;
      FUN_14485c47a(puVar1,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 148d04f7e FUN_148d04f7e body=134 status=ok
// SIG undefined FUN_148d04f7e(void)

void FUN_148d04f7e(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (0 < *(int *)(param_1 + 0x28)) {
    iVar3 = -1;
    lVar5 = 0;
    lVar4 = 1;
    do {
      cVar2 = FUN_14069eaf4(*(longlong *)(param_1 + 0x20) + lVar5,param_2);
      iVar3 = iVar3 + 1;
      if (cVar2 != '\0') break;
      lVar5 = lVar5 + 0x18;
      bVar1 = lVar4 < *(int *)(param_1 + 0x28);
      lVar4 = lVar4 + 1;
    } while (bVar1);
    if (cVar2 != '\0') {
      FUN_148d0c466(param_1 + 0x20,iVar3);
      FUN_148d0c4c0(param_1 + 0x20);
      return;
    }
  }
  return;
}



// FUNCTION 148d05004 FUN_148d05004 body=169 status=ok
// SIG undefined FUN_148d05004(void)

ulonglong FUN_148d05004(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (iVar6 < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x20);
    uVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0x10 + uVar7 * 0x18) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        lVar1 = lVar5 + uVar7 * 0x18;
        lVar9 = 0;
        lVar8 = 1;
        do {
          cVar3 = FUN_1411db966(*(longlong *)(lVar1 + 8) + lVar9,param_2);
          lVar5 = *(longlong *)(param_1 + 0x20);
          if (cVar3 != '\0') break;
          lVar1 = lVar5 + uVar7 * 0x18;
          lVar9 = lVar9 + 8;
          bVar2 = lVar8 < *(int *)(lVar1 + 0x10);
          lVar8 = lVar8 + 1;
        } while (bVar2);
        uVar4 = 0xffffffff;
        if (cVar3 != '\0') {
          uVar4 = uVar7 & 0xffffffff;
        }
        iVar6 = *(int *)(param_1 + 0x28);
      }
      uVar7 = uVar7 + 1;
    } while (((longlong)uVar7 < (longlong)iVar6) && ((int)uVar4 == -1));
  }
  return uVar4;
}



// FUNCTION 148d050ae FUN_148d050ae body=125 status=ok
// SIG undefined FUN_148d050ae(void)

undefined8 * FUN_148d050ae(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar3 = -0x10;
    lVar4 = 1;
    do {
      cVar2 = FUN_14069eaf4(*(longlong *)(param_1 + 0x20) + lVar3 + 0x10,param_3);
      lVar3 = lVar3 + 0x18;
      if (cVar2 != '\0') break;
      bVar1 = lVar4 < *(int *)(param_1 + 0x28);
      lVar4 = lVar4 + 1;
    } while (bVar1);
    if (cVar2 != '\0') {
      FUN_148745b0c(param_2,lVar3 + *(longlong *)(param_1 + 0x20));
    }
  }
  return param_2;
}



// FUNCTION 148d0512c FUN_148d0512c body=438 status=ok
// SIG undefined FUN_148d0512c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_148d0512c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  plVar1 = (longlong *)*param_2;
  plVar8 = param_1;
  if ((plVar1 != (longlong *)0x0 & DAT_14c950c29) == 1) {
    plVar8 = plVar1;
    FUN_1456cec3c(plVar1);
  }
  uVar6 = SUB84(plVar8,0);
  if ((longlong *)*param_1 == plVar1) {
    lVar2 = param_2[1];
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      lVar9 = lVar2;
      FUN_1456cec3c(lVar2);
      uVar6 = (undefined4)lVar9;
    }
    if (param_1[1] == lVar2) {
      if (1.0 < ABS((double)param_1[2] - (double)param_2[2])) {
        return 0;
      }
      if (1.0 < ABS((double)param_1[3] - (double)param_2[3])) {
        return 0;
      }
      if (1.0 < ABS((double)param_1[4] - (double)param_2[4])) {
        return 0;
      }
      dVar3 = (double)DAT_1499387d0;
      dVar4 = DAT_1499387d0._8_8_;
      auVar16._8_8_ = (double)param_1[6] - (double)param_2[6];
      auVar16._0_8_ = (double)param_1[5] - (double)param_2[5];
      auVar17 = divpd(auVar16,_DAT_1499387d0);
      auVar10._0_8_ = ((double)param_1[7] - (double)param_2[7]) / 360.0;
      auVar10._8_8_ = 0;
      auVar18 = roundpd(auVar17,auVar17,3);
      auVar17 = roundpd(auVar10,auVar10,3);
      auVar24._0_8_ = ((double)param_1[7] - (double)param_2[7]) - auVar17._0_8_ * dVar3;
      auVar24._8_8_ = 0.0 - auVar17._8_8_ * dVar4;
      dVar22 = ((double)param_1[5] - (double)param_2[5]) - auVar18._0_8_ * dVar3;
      dVar23 = ((double)param_1[6] - (double)param_2[6]) - auVar18._8_8_ * dVar4;
      auVar21._0_8_ = dVar22 + dVar3;
      auVar21._8_8_ = dVar23 + dVar4;
      auVar20._0_8_ = dVar3 + auVar24._0_8_;
      auVar20._8_8_ = dVar4 + auVar24._8_8_;
      auVar11._8_8_ = -(ulonglong)(0.0 <= dVar23);
      auVar11._0_8_ = -(ulonglong)(0.0 <= dVar22);
      auVar17._8_8_ = dVar23;
      auVar17._0_8_ = dVar22;
      auVar18 = blendvpd(auVar21,auVar17,auVar11);
      auVar12._8_8_ = -(ulonglong)(0.0 <= auVar24._8_8_);
      auVar12._0_8_ = -(ulonglong)(0.0 <= auVar24._0_8_);
      auVar17 = blendvpd(auVar20,auVar24,auVar12);
      auVar25._0_8_ = auVar18._0_8_ + -360.0;
      auVar25._8_8_ = auVar18._8_8_ + -360.0;
      auVar13._8_8_ = -(ulonglong)(180.0 < auVar18._8_8_);
      auVar13._0_8_ = -(ulonglong)(180.0 < auVar18._0_8_);
      auVar10 = blendvpd(auVar18,auVar25,auVar13);
      auVar14._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
      auVar14._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
      auVar18._8_8_ = auVar17._8_8_ + -360.0;
      auVar18._0_8_ = auVar17._0_8_ + -360.0;
      auVar17 = blendvpd(auVar17,auVar18,auVar14);
      auVar19._8_8_ = -(ulonglong)(1.0 < ABS(auVar10._8_8_));
      auVar19._0_8_ = -(ulonglong)(1.0 < ABS(auVar10._0_8_));
      iVar5 = movmskpd(0,auVar19);
      auVar15._8_8_ = -(ulonglong)(1.0 < ABS(auVar17._8_8_));
      auVar15._0_8_ = -(ulonglong)(1.0 < ABS(auVar17._0_8_));
      uVar7 = movmskpd(uVar6,auVar15);
      return CONCAT31((int3)((uint)iVar5 >> 8),(uVar7 & 0x3fffffff) == 0 && iVar5 == 0);
    }
  }
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
  return 0;
}



// FUNCTION 148d052e2 FUN_148d052e2 body=82 status=ok
// SIG undefined FUN_148d052e2(void)

void FUN_148d052e2(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  
  param_2[2] = *(double *)(param_1 + 0x20);
  dVar1 = *(double *)(param_1 + 0x18);
  *param_2 = *(double *)(param_1 + 0x10);
  param_2[1] = dVar1;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 != 0) {
    dVar1 = *(double *)(lVar3 + 0x270);
    dVar2 = *(double *)(lVar3 + 0x268);
    *param_2 = *(double *)(lVar3 + 0x260) + *param_2;
    param_2[1] = dVar2 + param_2[1];
    param_2[2] = dVar1 + param_2[2];
  }
  return;
}



// FUNCTION 148d05334 FUN_148d05334 body=159 status=ok
// SIG undefined FUN_148d05334(void)

void FUN_148d05334(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  
  FUN_1405f1eac();
  FUN_1401b3e2a(param_1 + 0x6e0);
  lVar3 = FUN_1447210f0(param_1);
  if (lVar3 != 0) {
    lVar3 = FUN_1447210f0(param_1);
    bVar1 = *(byte *)(lVar3 + 0x152);
    if ((((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
        (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x4e8))(), cVar2 != '\0')) {
      FUN_14045627c(*(undefined8 *)(param_1 + 0x1c8),0,2);
    }
  }
  if ((*(longlong *)(param_1 + 0x808) != 0) &&
     (lVar3 = FUN_1407a0dc0(*(longlong *)(param_1 + 0x808) + 0x198), lVar3 != 0)) {
    *(undefined1 *)(param_1 + 0x848) = 1;
  }
  return;
}



// FUNCTION 148d053d4 FUN_148d053d4 body=67 status=ok
// SIG undefined FUN_148d053d4(void)

void FUN_148d053d4(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x4e8))();
    if (cVar1 != (char)param_2) {
      FUN_14045627c(*(undefined8 *)(param_1 + 0x1c8),param_2,2);
      return;
    }
  }
  return;
}



// FUNCTION 148d05418 FUN_148d05418 body=63 status=ok
// SIG undefined FUN_148d05418(void)

void FUN_148d05418(longlong param_1,undefined4 param_2)

{
  FUN_1406335ea(param_1 + 0x6e0);
  FUN_14078a7c0(param_1 + 0x760);
  FUN_140872868(param_1 + 0x4c0);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 148d05458 FUN_148d05458 body=53 status=ok
// SIG undefined FUN_148d05458(void)

void FUN_148d05458(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = switchD_143c3d4dc::caseD_57();
  if (lVar1 != 0) {
    return;
  }
  FUN_144862176(param_1 + 0x6e0,param_2);
  return;
}



// FUNCTION 148d054fc FUN_148d054fc body=80 status=ok
// SIG undefined FUN_148d054fc(void)

void FUN_148d054fc(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x5f0))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148d05534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x588))(plVar1,param_2,param_3,*(code **)(*plVar1 + 0x588));
    return;
  }
  FUN_1400d1a0e(param_1,param_2,param_3);
  return;
}



// FUNCTION 148d0554c FUN_148d0554c body=355 status=ok
// SIG undefined FUN_148d0554c(void)

void FUN_148d0554c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    lVar2 = FUN_1458b6df2();
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      *(longlong **)(param_1 + 0x478) = param_2;
      FUN_14078a36a(param_1 + 0x3d0,param_1 + 0x20);
      FUN_148d056b0(*(undefined8 *)(param_1 + 0x478),local_38);
      FUN_14078b280(param_1 + 0x350,param_1 + -0x390,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      lVar1 = *(longlong *)(param_1 + 0x478);
      if (*(char *)(lVar1 + 0x13d) == '\x01') {
        FUN_148d058c2(param_1 + -0x390);
        lVar1 = *(longlong *)(param_1 + 0x478);
      }
      lVar1 = FUN_1407a0dc0(lVar1 + 0x198);
      if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar1);
      }
      *(longlong *)(param_1 + 0x4c0) = lVar1;
      *(undefined8 *)(param_1 + 0x730) = *(undefined8 *)(param_1 + -0x378);
      FUN_14054d9c0(param_1 + 0x4c8,*(longlong *)(param_1 + 0x478) + 0x1c0);
      goto LAB_148d055b3;
    }
  }
  *(undefined8 *)(param_1 + 0x478) = 0;
  FUN_140355e94(param_1 + 0x350);
LAB_148d055b3:
  FUN_14078a0a0(param_1 + 8,0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d056b0 FUN_148d056b0 body=529 status=ok
// SIG undefined FUN_148d056b0(void)

longlong * FUN_148d056b0(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x2d8);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if ((iVar1 != 0) && (FUN_140b520ec(param_2), 0 < *(int *)(param_1 + 0x2d8))) {
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x2d0);
      lVar8 = lVar5 + lVar6 + -8;
      lVar4 = FUN_14479d2ce(lVar8);
      if (lVar4 == 0) {
        if (*(longlong *)(lVar5 + lVar6) != 0) {
          lVar4 = FUN_140007850();
          cVar3 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar4 == 0) || (cVar3 == '\0')) {
            FUN_14485c47a(lVar8,lVar4);
            if (lVar4 == 0) goto LAB_148d05848;
          }
          else {
            uVar2 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(lVar8,lVar4);
            }
          }
          if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) goto LAB_148d05723;
        }
      }
      else {
LAB_148d05723:
        lVar5 = FUN_144a797b2();
        if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) &&
            (lVar5 = FUN_140789e1e(), lVar5 != 0)) &&
           (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
          lVar8 = 0;
          if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            lVar8 = lVar4;
          }
          if ((lVar8 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar8 == 0) goto LAB_148d05848;
          }
          else {
            FUN_1456cec3c(lVar8);
          }
          lVar5 = FUN_140789e1e();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            iVar1 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar1 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
              FUN_140789f3e(param_2,iVar1);
            }
            *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
            if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar4);
            }
          }
        }
      }
LAB_148d05848:
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x28;
    } while (lVar7 < *(int *)(param_1 + 0x2d8));
  }
  return param_2;
}



// FUNCTION 148d058c2 FUN_148d058c2 body=269 status=ok
// SIG undefined FUN_148d058c2(void)

void FUN_148d058c2(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_148d059d0();
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x840) = lVar2;
    if (lVar2 == 0) goto LAB_148d058ff;
  }
  else {
    FUN_1456cec3c(lVar2);
    *(longlong *)(param_1 + 0x840) = lVar2;
  }
  FUN_141297316(lVar2,*(undefined1 *)(param_1 + 0x38));
  (**(code **)(**(longlong **)(param_1 + 0x840) + 0x438))(*(longlong **)(param_1 + 0x840),param_1);
  lVar2 = *(longlong *)(param_1 + 0x840);
  FUN_148d05a80(&local_40);
  local_38 = 0;
  FUN_14485c47a(&local_38,param_1);
  local_30 = local_40;
  FUN_14113f0c0(&local_38);
  FUN_14053c012(lVar2 + 0x210,&local_38);
  FUN_1488141ae(*(undefined8 *)(param_1 + 0x840),1);
  uVar1 = *(undefined8 *)(param_1 + 0x840);
  uVar3 = FUN_1447210f0(param_1);
  FUN_140b506dc(uVar1,uVar3,0);
  FUN_1440f464a(param_1);
LAB_148d058ff:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d059d0 FUN_148d059d0 body=175 status=ok
// SIG undefined FUN_148d059d0(void)

undefined8 FUN_148d059d0(undefined8 param_1)

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
  local_b8 = FUN_145997424();
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



// FUNCTION 148d05a80 FUN_148d05a80 body=201 status=ok
// SIG undefined FUN_148d05a80(void)

undefined8 * FUN_148d05a80(undefined8 *param_1)

{
  undefined1 auStack_78 [32];
  wchar_t local_58 [36];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc6c48) {
    FUN_144b3d300(&DAT_14cbc6c48);
    if (DAT_14cbc6c48 == -1) {
      builtin_wcsncpy(local_58 + 0x10,L"lationFinished",0xf);
      builtin_wcsncpy(local_58 + 8,L"torySimu",8);
      builtin_wcsncpy(local_58,L"OnTrajec",8);
      FUN_1446f470e(&DAT_14cbc6c40,local_58,1);
      _Init_thread_footer(&DAT_14cbc6c48);
    }
  }
  *param_1 = DAT_14cbc6c40;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d05b4a FUN_148d05b4a body=229 status=ok
// SIG undefined FUN_148d05b4a(void)

void FUN_148d05b4a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0x840) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x840) + 0x220) == '\x01')) {
    local_48 = *(undefined8 *)(param_2 + 0x68);
    local_58 = *(undefined4 *)(param_2 + 0x58);
    uStack_54 = *(undefined4 *)(param_2 + 0x5c);
    uStack_50 = *(undefined4 *)(param_2 + 0x60);
    uStack_4c = *(undefined4 *)(param_2 + 100);
    uVar1 = FUN_14479d2ce(param_2 + 0xd8);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_98 = *(undefined4 *)(param_2 + 0x10);
    uStack_94 = *(undefined4 *)(param_2 + 0x14);
    uStack_90 = *(undefined4 *)(param_2 + 0x18);
    uStack_8c = *(undefined4 *)(param_2 + 0x1c);
    local_88 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = FUN_14485cccc(param_2 + 0xb8);
    local_a8 = uVar1;
    local_a0 = &local_58;
    FUN_148d05c30(param_1,uVar2,&local_98,&local_78);
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d05c30 FUN_148d05c30 body=1050 status=ok
// SIG undefined FUN_148d05c30(void)

void FUN_148d05c30(longlong param_1,longlong param_2,double *param_3,undefined4 *param_4,
                  longlong param_5,undefined8 *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  undefined8 uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_178 [32];
  double *local_158;
  undefined8 *local_150;
  undefined8 *local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_2 == 0 && param_5 == 0) {
    if (((((*param_3 == 0.0) && (!NAN(*param_3))) && (param_3[1] == 0.0)) &&
        ((!NAN(param_3[1]) && (param_3[2] == 0.0)))) && (!NAN(param_3[2]))) {
      if (*(char *)(param_1 + 0x800) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_178);
      }
      goto LAB_148d05e78;
    }
LAB_148d05d3c:
    param_2 = 0;
  }
  else {
    if (param_2 == 0) goto LAB_148d05d3c;
    uVar9 = FUN_144a7b040();
    lVar10 = FUN_144718840(param_2,uVar9);
    if (lVar10 == 0) {
      param_2 = 0;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x808);
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0x134) == '\0')) {
    local_a8 = param_3[2];
    local_158 = &local_b8;
    local_b8 = *param_3;
    dStack_b0 = param_3[1];
    local_148 = param_6;
    local_150 = (undefined8 *)CONCAT44(local_150._4_4_,*(undefined4 *)(lVar10 + 0x138));
    FUN_148d064c6(param_1,&local_98,*(undefined1 *)(lVar10 + 0x135),param_2);
    param_3[2] = local_88;
    *param_3 = (double)CONCAT44(uStack_94,local_98);
    param_3[1] = (double)CONCAT44(uStack_8c,uStack_90);
    local_c8 = param_6[2];
    local_150 = &local_d8;
    local_d8 = *param_6;
    uStack_d0 = param_6[1];
    local_f8 = *param_4;
    uStack_f4 = param_4[1];
    uStack_f0 = param_4[2];
    uStack_ec = param_4[3];
    local_158 = (double *)&local_f8;
    local_e8 = *(undefined8 *)(param_4 + 4);
    FUN_148d06ae8(param_1,&local_98,*(undefined1 *)(*(longlong *)(param_1 + 0x808) + 0x13c),param_2)
    ;
    *(double *)(param_4 + 4) = local_88;
    *param_4 = local_98;
    param_4[1] = uStack_94;
    param_4[2] = uStack_90;
    param_4[3] = uStack_8c;
  }
  bVar11 = true;
  if ((*(byte *)(param_1 + 0x800) == 1) && (*(longlong *)(param_1 + 0xae0) == param_2)) {
    bVar11 = *(longlong *)(param_1 + 0xae8) != param_5;
  }
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  if (param_5 != 0) {
    dVar3 = dVar3 - *(double *)(param_5 + 0x270);
    dVar2 = dVar2 - *(double *)(param_5 + 0x268);
    dVar1 = dVar1 - *(double *)(param_5 + 0x260);
  }
  if ((*(byte *)(param_1 + 0x800) & bVar11) == 1) {
    FUN_148b8b1b0(param_1 + 0x7e0,param_1 + 0xae0);
  }
  *(undefined1 *)(param_1 + 0x800) = 1;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar7 = DAT_14c950c29;
  *(longlong *)(param_1 + 0xae0) = param_2;
  if ((param_5 != 0) && ((bVar7 & 1) != 0)) {
    FUN_1456cec3c(param_5);
  }
  *(longlong *)(param_1 + 0xae8) = param_5;
  *(double *)(param_1 + 0xaf0) = dVar1;
  *(double *)(param_1 + 0xaf8) = dVar2;
  *(double *)(param_1 + 0xb00) = dVar3;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  *(undefined4 *)(param_1 + 0xb08) = *param_4;
  *(undefined4 *)(param_1 + 0xb0c) = uVar4;
  *(undefined4 *)(param_1 + 0xb10) = uVar5;
  *(undefined4 *)(param_1 + 0xb14) = uVar6;
  *(undefined8 *)(param_1 + 0xb18) = *(undefined8 *)(param_4 + 4);
  if (bVar11 != false) {
    FUN_148b8b130(param_1 + 2000,param_1 + 0xae0);
  }
  if ((*(longlong *)(param_1 + 0x808) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x808) + 0x134) == '\0')) {
    if ((*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0) &&
       (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x4e8))(), cVar8 == '\0')) {
      FUN_14045627c(*(undefined8 *)(param_1 + 0x1c8),1,2);
    }
    local_108 = *(undefined8 *)(param_1 + 0xb18);
    local_118 = *(undefined8 *)(param_1 + 0xb08);
    uStack_110 = *(undefined8 *)(param_1 + 0xb10);
    local_128 = *(double *)(param_1 + 0xb00);
    local_138 = *(double *)(param_1 + 0xaf0);
    dStack_130 = *(double *)(param_1 + 0xaf8);
    lVar10 = *(longlong *)(param_1 + 0xae8);
    if (lVar10 != 0) {
      local_138 = *(double *)(lVar10 + 0x260) + local_138;
      dStack_130 = *(double *)(lVar10 + 0x268) + dStack_130;
      local_128 = *(double *)(lVar10 + 0x270) + local_128;
    }
    local_150 = (undefined8 *)CONCAT71(local_150._1_7_,1);
    local_158 = (double *)0x0;
    FUN_1407fd818(param_1,&local_138,&local_118,0);
  }
  if (0 < *(int *)(param_1 + 0x7f8)) {
    FUN_148b8b230(param_1 + 0x7f0,param_1 + 0xae0);
  }
LAB_148d05e78:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148d060a4 FUN_148d060a4 body=41 status=ok
// SIG undefined FUN_148d060a4(void)

undefined8 FUN_148d060a4(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000148d060c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50);
    return uVar2;
  }
  return 0;
}



// FUNCTION 148d060ce FUN_148d060ce body=53 status=ok
// SIG undefined FUN_148d060ce(void)

undefined8 * FUN_148d060ce(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x18))(lVar1 + 0x50,param_2);
  }
  return param_2;
}



// FUNCTION 148d06104 FUN_148d06104 body=162 status=ok
// SIG undefined FUN_148d06104(void)

void FUN_148d06104(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + -0x3a8) & 0x10) == 0) {
    FUN_1406c9d00(param_1 + 8,local_88);
    FUN_14031575e(local_70,local_88);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d061a8 FUN_148d061a8 body=56 status=ok
// SIG undefined FUN_148d061a8(void)

void FUN_148d061a8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_1449bd2b2(param_1 + 0x110);
  FUN_1409d1ca6(param_1 + 0x330,param_2,param_3);
  return;
}



// FUNCTION 148d061e0 FUN_148d061e0 body=82 status=ok
// SIG undefined FUN_148d061e0(void)

void FUN_148d061e0(double *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  
  param_1[2] = *(double *)(param_2 + 0x20);
  dVar1 = *(double *)(param_2 + 0x18);
  *param_1 = *(double *)(param_2 + 0x10);
  param_1[1] = dVar1;
  lVar3 = *(longlong *)(param_2 + 8);
  if (lVar3 != 0) {
    dVar1 = *(double *)(lVar3 + 0x270);
    dVar2 = *(double *)(lVar3 + 0x268);
    *param_1 = *(double *)(lVar3 + 0x260) + *param_1;
    param_1[1] = dVar2 + param_1[1];
    param_1[2] = dVar1 + param_1[2];
  }
  return;
}



// FUNCTION 148d06232 FUN_148d06232 body=336 status=ok
// SIG undefined FUN_148d06232(void)

void FUN_148d06232(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_138 [40];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_80 [72];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 0xac8) == 0) goto LAB_148d06263;
  lVar5 = FUN_14388064a();
  if (lVar5 == 0) {
LAB_148d06326:
    FUN_148d063d6(param_1);
  }
  else {
    cVar4 = FUN_144a7b75a(*(undefined1 *)(lVar5 + 0x20),0x19);
    if (cVar4 == '\0') goto LAB_148d06326;
    FUN_1470df55c(lVar5,local_138);
    local_148 = local_d0;
    local_158 = local_e0;
    uStack_150 = uStack_d8;
    local_178 = 0;
    uStack_170 = 0;
    local_168 = 0;
    local_198 = local_110;
    uStack_194 = uStack_10c;
    uStack_190 = uStack_108;
    uStack_18c = uStack_104;
    local_188 = local_100;
    uVar6 = FUN_14485cccc(local_80);
    local_1a8 = 0;
    local_1a0 = &local_158;
    FUN_148d05c30(param_1,uVar6,&local_198,&local_178);
  }
  *(undefined8 *)(param_1 + 0xac8) = 0;
  plVar3 = *(longlong **)(param_1 + 0xad0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xad0) = 0;
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
  if (-1 < *(char *)(param_1 + 0x60)) {
    *(undefined1 *)(param_1 + 0x848) = 1;
  }
LAB_148d06263:
  if ((local_38 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d06384 FUN_148d06384 body=81 status=ok
// SIG undefined FUN_148d06384(void)

void FUN_148d06384(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xac8) = 0;
  plVar3 = *(longlong **)(param_1 + 0xad0);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0xad0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000148d063ca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148d063d6 FUN_148d063d6 body=238 status=ok
// SIG undefined FUN_148d063d6(void)

void FUN_148d063d6(longlong param_1)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x800) == '\x01') {
    FUN_148b8b1b0(param_1 + 0x7e0,param_1 + 0xae0);
    *(undefined1 *)(param_1 + 0x800) = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = DAT_14c8464e0;
    uStack_40 = DAT_14c8464e8;
    local_38 = DAT_14c8464f0;
    local_30 = (undefined4)DAT_14c8464f8;
    uStack_2c = DAT_14c8464f8._4_4_;
    uStack_28 = (undefined4)DAT_14c846500;
    uStack_24 = DAT_14c846500._4_4_;
    local_20 = DAT_14c846508;
    FUN_148bab1be(param_1 + 0xae0);
    if (((*(longlong *)(param_1 + 0x808) != 0) &&
        (*(char *)(*(longlong *)(param_1 + 0x808) + 0x134) == '\0')) &&
       (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0)) {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x4e8))();
      if (cVar1 != '\0') {
        FUN_14045627c(*(undefined8 *)(param_1 + 0x1c8),0,2);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148d064c6 FUN_148d064c6 body=1569 status=ok
// SIG undefined FUN_148d064c6(void)

undefined8 *
FUN_148d064c6(undefined8 param_1,undefined8 *param_2,char param_3,longlong param_4,
             undefined8 *param_5,float param_6,double *param_7)

{
  double dVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_248 [32];
  undefined4 *local_228;
  undefined8 *local_220;
  undefined1 local_210 [4];
  undefined4 local_20c;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  double local_1a8;
  undefined4 local_16c;
  undefined4 local_140;
  undefined4 local_110;
  undefined1 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined2 local_bf;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar8 = SUB84(DAT_14c8464f0,0);
  uVar9 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  if (param_3 == '\x02') {
    if (param_4 == 0) {
      param_2[2] = param_5[2];
      uVar7 = param_5[1];
      *param_2 = *param_5;
      param_2[1] = uVar7;
      goto LAB_148d0656c;
    }
    lVar2 = *(longlong *)(param_4 + 0x1c8);
    uVar10 = (undefined4)DAT_14c8464e0;
    uVar11 = DAT_14c8464e0._4_4_;
    uVar12 = (undefined4)DAT_14c8464e8;
    uVar13 = DAT_14c8464e8._4_4_;
    if (lVar2 != 0) {
      dVar1 = *(double *)(lVar2 + 0x270);
      uVar8 = *(undefined4 *)(lVar2 + 0x264);
      uVar9 = *(undefined4 *)(lVar2 + 0x268);
      uVar10 = *(undefined4 *)(lVar2 + 0x26c);
      *(undefined4 *)param_2 = *(undefined4 *)(lVar2 + 0x260);
      *(undefined4 *)((longlong)param_2 + 4) = uVar8;
      *(undefined4 *)(param_2 + 1) = uVar9;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
      param_2[2] = dVar1;
      lVar6 = FUN_1400b5618();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) == lVar6 + 0x30)) {
        param_2[2] = dVar1 - (double)((float)*(double *)(lVar2 + 0x290) * *(float *)(lVar2 + 0x640))
        ;
      }
      goto LAB_148d0656c;
    }
  }
  else {
    if (param_3 == '\x01') {
      param_2[2] = param_5[2];
      uVar7 = param_5[1];
      *param_2 = *param_5;
      param_2[1] = uVar7;
      if ((param_4 == 0) && (0.5 < param_7[2] || param_7[2] == 0.5)) goto LAB_148d065dd;
      if (param_4 == 0) {
        local_d8 = (double)param_5[2];
        local_e8 = *param_5;
        uStack_e0 = param_5[1];
        local_108 = *param_5;
        uStack_100 = param_5[1];
        local_f8 = (double)param_5[2] - (double)param_6;
        local_ac = 0;
        local_a8 = 0x101;
        local_80 = 0;
        local_78 = 0x800000000;
        local_60 = 0;
        local_58 = 0x400000000;
        local_c0 = 0;
        local_b4 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_bf = 1;
        local_bd = 0;
        local_b0 = 0;
        local_bc = 0x1000000;
        local_b8 = 1;
      }
      else {
        lVar2 = *(longlong *)(param_4 + 0x1c8);
        if (lVar2 == 0) {
          local_d8 = DAT_14c8464f0;
          local_108 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_100 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_f8 = DAT_14c8464f0;
          local_e8 = local_108;
          uStack_e0 = uStack_100;
        }
        else {
          local_108 = *(undefined8 *)(lVar2 + 0x260);
          uStack_100 = *(undefined8 *)(lVar2 + 0x268);
          local_f8 = *(double *)(lVar2 + 0x270);
          local_e8 = local_108;
          uStack_e0 = uStack_100;
          local_d8 = local_f8;
          lVar6 = FUN_1400b5618();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) {
            local_f8 = local_f8 -
                       (double)((float)*(double *)(lVar2 + 0x290) * *(float *)(lVar2 + 0x640));
          }
        }
        local_f8 = local_f8 - (double)param_6;
        local_ac = 0;
        local_a8 = 0x101;
        local_80 = 0;
        local_78 = 0x800000000;
        local_60 = 0;
        local_58 = 0x400000000;
        local_c0 = 0;
        local_b4 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_bf = 1;
        local_bd = 0;
        local_b0 = 0;
        local_bc = 0x1000000;
        local_b8 = 1;
        FUN_144a85a22();
      }
      local_10c = 0;
      local_110 = 1;
      memset(local_210,0,0x100);
      local_140 = 0xffffffff;
      local_20c = 0x3f800000;
      local_16c = 0xffffffff;
      uVar7 = FUN_1447210f0(param_1);
      local_220 = &local_d0;
      local_228 = &local_110;
      cVar4 = FUN_140526294(uVar7,local_210,&local_e8,&local_108);
      if (cVar4 == '\0') {
        param_2[2] = local_f8;
        *param_2 = local_108;
        param_2[1] = uStack_100;
        if ((param_4 != 0) ||
           (((((*param_7 == 0.0 && (!NAN(*param_7))) && (param_7[1] == 0.0)) &&
             ((!NAN(param_7[1]) && (param_7[2] == 0.0)))) && (!NAN(param_7[2]))))) {
          param_7[2] = DAT_14c8462d0;
          local_1b8 = (undefined4)DAT_14c8462c0;
          uStack_1b4 = DAT_14c8462c0._4_4_;
          uStack_1b0 = (undefined4)DAT_14c8462c8;
          uStack_1ac = DAT_14c8462c8._4_4_;
          goto LAB_148d06a39;
        }
      }
      else {
        param_2[2] = local_1f0;
        *param_2 = local_200;
        param_2[1] = uStack_1f8;
        if ((param_4 != 0) ||
           (((*param_7 == 0.0 && (!NAN(*param_7))) &&
            ((param_7[1] == 0.0 &&
             (((!NAN(param_7[1]) && (param_7[2] == 0.0)) && (!NAN(param_7[2]))))))))) {
          param_7[2] = local_1a8;
LAB_148d06a39:
          *(undefined4 *)param_7 = local_1b8;
          *(undefined4 *)((longlong)param_7 + 4) = uStack_1b4;
          *(undefined4 *)(param_7 + 1) = uStack_1b0;
          *(undefined4 *)((longlong)param_7 + 0xc) = uStack_1ac;
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if (local_80 != 0) {
        FUN_1400020a8();
      }
LAB_148d065dd:
      if ((local_50 ^ (ulonglong)auStack_248) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (param_3 != '\0') goto LAB_148d065dd;
    if (param_4 == 0) {
      uVar7 = param_5[2];
      uVar3 = param_5[1];
      *param_2 = *param_5;
      param_2[1] = uVar3;
      param_2[2] = uVar7;
      if ((((*param_7 == 0.0) && (!NAN(*param_7))) &&
          ((param_7[1] == 0.0 && ((!NAN(param_7[1]) && (param_7[2] == 0.0)))))) &&
         (!NAN(param_7[2]))) goto LAB_148d0656c;
      goto LAB_148d065dd;
    }
    lVar2 = *(longlong *)(param_4 + 0x1c8);
    if (lVar2 == 0) {
      puVar5 = &DAT_14c8464e0;
    }
    else {
      uVar8 = (undefined4)*(undefined8 *)(lVar2 + 0x270);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x270) >> 0x20);
      puVar5 = (undefined8 *)(lVar2 + 0x260);
    }
    uVar10 = *(undefined4 *)puVar5;
    uVar11 = *(undefined4 *)((longlong)puVar5 + 4);
    uVar12 = *(undefined4 *)(puVar5 + 1);
    uVar13 = *(undefined4 *)((longlong)puVar5 + 0xc);
  }
  *(undefined4 *)param_2 = uVar10;
  *(undefined4 *)((longlong)param_2 + 4) = uVar11;
  *(undefined4 *)(param_2 + 1) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar13;
  param_2[2] = CONCAT44(uVar9,uVar8);
LAB_148d0656c:
  param_7[2] = DAT_14c8462d0;
  uVar10 = DAT_14c8462c8._4_4_;
  uVar9 = (undefined4)DAT_14c8462c8;
  uVar8 = DAT_14c8462c0._4_4_;
  *(undefined4 *)param_7 = (undefined4)DAT_14c8462c0;
  *(undefined4 *)((longlong)param_7 + 4) = uVar8;
  *(undefined4 *)(param_7 + 1) = uVar9;
  *(undefined4 *)((longlong)param_7 + 0xc) = uVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_248);
}


